# Dewveil 2.4.8

包名：`com.du23u3077548`。这是按模块归拢的反编译阅读目录；不是可直接构建的原始工程。

- `java/outer/sources`：外层已有 Java 导出。
- `java/outer/resources`：外层 Manifest、布局、字符串和资源。
- `dex` 与 `bytecode`：原始 DEX 与完整逐类指令，供核对 Java 导出缺口。
- `native/pseudocode`：本次按 Ghidra 已识别函数导出的 C 形式伪代码；每个库有 `functions.tsv`。
- `native/assembly`：原始 ELF 虚拟地址的可执行段汇编，与 Ghidra 地址基准可能不同。
- `evidence`：REA 类清单和逐个原始 DEX 类的 Java 文件映射。
- `diagnostics`：反编译日志。

`java/inner` 是此前恢复的内部 APK 的 Java 与资源，两个 DEX 指令也已导出。

完整覆盖、错误与来源说明见上一级 [README.md](../README.md)。

GitHub 版的 DEX 指令已按类拆分；从 `evidence/*-raw-dex-class-map.tsv` 或指令目录下的 `index.tsv` 查找对应文件和行号。
