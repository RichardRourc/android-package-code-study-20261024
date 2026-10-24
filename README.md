# Android 安装包代码阅读材料

本仓库按安装包独立整理离线反编译结果，供代码阅读和研究。

- [Dewveil Relic 2.4.8](Dewveil/README.md)：外层模块、已恢复内部模块、资源与原生库。
- [Spark Slide Nest 2.0](Spark/README.md)：已取得的外层模块、资源与原生库；最终业务 DEX 尚未取得。
- [VS Code 工作区](整包代码.code-workspace)：克隆或下载仓库后打开。
- [覆盖清单](class-coverage.json)与[导出核对](verification.json)。

## GitHub 目录说明

本地完整版文件夹与 ZIP 是同一份结果的两种存放方式。本仓库上传可浏览的文件夹内容，四份 DEX 大型指令文件改为按类拆分，位置为 `bytecode/<模块>/classes.dex.parts/` 等目录。

每份指令的 `index.tsv` 关联类名和小文件；`evidence/*-raw-dex-class-map.tsv` 已更新为仓库内文件路径和行号。`bytecode-splits.json` 保存原文件散列、片段顺序和重组校验，全部片段可以逐字节重组成原指令文件。

`provenance/local-export-file-manifest.json` 核对原本地导出，根目录 `file-manifest.json` 核对本仓库初始上传内容。材料中的本地绝对路径仅记录来源，不是运行依赖。

以下是导出范围和阅读说明。

## 导出范围

日期：2026-10-24。对象是 Dewveil Relic 2.4.8 和 Spark Slide Nest 2.0；本目录不包含核心工程。

## 打开方法

推荐用 VS Code 打开同目录的 `整包代码.code-workspace`。左侧分别显示两个包，每个包根目录都有自己的 README。也可以直接打开整个 `整包代码阅读-2026-10-24` 文件夹。阅读无需运行 Gradle。

目录组织如下：

```text
Dewveil/ 或 Spark/
  README.md
  java/
    outer/sources/       外层 DEX 已有 Java 导出
    outer/resources/     Manifest、布局、字符串及其他资源
    inner/               Dewveil 已恢复内部模块的同类导出
  dex/                   原始 DEX 副本
  bytecode/              DEX 指令按类拆分，附 index.tsv
  native/
    raw/                 SO 原始字节副本
    pseudocode/<库名>/   按函数导出的 C 形式伪代码及索引
    assembly/            ELF 文件中可执行段的汇编
  evidence/              REA 类清单与原始 DEX 类映射
  diagnostics/           Java/原生导出日志
```

`inner` 只存在于 Dewveil。Spark 缺失的最终业务模块没有被补写成虚构源码。

## 这次实际补了什么

- 归拢三份已有 Java/资源导出，包含完整目录内容，范围覆盖现有模块。
- 新导出四个现有 DEX 的逐类指令，并直接校验所有原始 class_def 都出现在指令导出中。
- 新导出五个已取得 SO 的全部文件可执行段汇编。
- 用独立 Ghidra 流程导出五个库中已识别函数的伪代码；本次成功 3932 个，另复用一份先前成功的长方法导出。当前可读伪代码共 3933 份。
- 实际通过 REA CLI 执行三次空查询类清单导出，原始 Evidence 保存在各包 `evidence` 下。

原生伪代码来自独立 Ghidra，汇编来自 Capstone，DEX 指令来自 Android SDK dexdump。它们与 REA 证据分别记录，不混称同一种输出。

## 现有 DEX 覆盖

| 模块 | 原始 DEX class_def 数 | 已有 Java 文件数 | REA 本次报告类数 |
|---|---:|---:|---:|
| Dewveil / outer | 70 | 22 | 23 |
| Dewveil / inner | 7102 | 3966 | 3999 |
| Spark / outer | 5588 | 2795 | 2804 |

三列是不同口径：Java 导出可能合并内部类、重命名或存在失败；REA 清单基于其解析/展示结果。不能用它们的数量替代原始 DEX 完整性。`evidence/*-raw-dex-class-map.tsv` 对原始 DEX 中每个类列出 Java 文件匹配情况和指令导出位置。内部类候选映射不是完整方法验证。

## 原生覆盖

| 包 | SO | Ghidra 已识别函数 | 本次伪代码成功 | 复用既有成功结果 | 仍失败 |
|---|---|---:|---:|---:|---:|
| Dewveil | `liblogic` | 697 | 697 | 0 | 0 |
| Dewveil | `libgame_cache` | 37 | 37 | 0 | 0 |
| Spark | `libsummitden` | 2480 | 2479 | 1 | 0 |
| Dewveil | `libpl_droidsonroids_gif` | 200 | 200 | 0 | 0 |
| Spark | `libsigner` | 519 | 519 | 0 | 0 |

这些数字是 Ghidra 识别函数的范围，不表示已经证明所有真实函数边界都被识别。SO 汇编覆盖文件中带可执行标志的实际字节段；运行时才生成的代码或作为数据保存的编码内容不在这个保证内。汇编里可能有数据指令，不应全部当作有效执行路径。

Spark 中一个长方法在本次 30 秒预算内超时，已从原分析目录复用同地址的先前成功导出。来源与散列见 `prior-export-reuse.json`；没有把复用写成本次反编译成功。

## 怎样阅读

先看每个模块的 `resources/AndroidManifest.xml`，再在 `sources` 中按包名和类名浏览。需要确认某个类是否在原始 DEX 里，可搜索类映射 TSV；最后一列给出它在指令文件中的行号。Java 方法缺失或有 `JADX ERROR` 时，核对对应 `bytecode` 文件；原生函数以 `functions.tsv` 为索引，查看对应 `.c`，需要时再核对库汇编。

在 VS Code 里，`Ctrl+P` 按文件名查找，`Ctrl+Shift+F` 搜索代码，`Ctrl+G` 跳到指定行。指令文件已按类拆分，优先用类映射定位。

JADX GUI 可以打开某个模块目录里的原始 DEX。不同模块请分别打开，避免同名依赖混在一起。已有 GUI 位于 `D:/Android/Tools/jadx-1.5.6/bin/jadx-gui.bat`，没有为此重新安装软件。

用于安全学习时，可以从权限与导出组件、网页来源与 JS 桥权限、网络配置可信性、数据存储与日志、错误状态处理等方面阅读。这里提供代码和覆盖依据，不根据字段名字直接认定具体安全策略。

## 仍然不能称为“所有逻辑完全还原”

1. Spark 最终业务 DEX 仍未取得；它没有出现在现有导出中。
2. 服务端源码、当前配置与远程 H5 网站源码不在这些安装包里；当前没有获取它们。
3. Java 导出日志仍记录 Dewveil 内部模块 23 个错误、Spark 80 个错误；本次没有把复制结果称为已修复。
4. 伪代码不是原作者 C/C++ 源码，混淆前命名、注释和原始 Kotlin 工程无法保证恢复。
5. 本目录用于阅读，不是已验证可构建的 Android Studio/Gradle 原项目。

本轮为静态文件导出，没有运行样本或获取远程业务内容。
