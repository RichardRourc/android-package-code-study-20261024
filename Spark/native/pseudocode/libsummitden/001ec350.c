// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001ec350; body: [[001ec350, 001ece27]]

undefined8
FUN_001ec350(undefined8 param_1,long *param_2,long *param_3,long param_4,int param_5,
            undefined4 *param_6)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined4 uVar6;
  long lVar7;
  char *__ptr;
  size_t __size;
  FILE *__s;
  uint uVar8;
  byte *pbVar9;
  ulong uVar10;
  byte *pbVar11;
  long lVar12;
  int iVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  ulong uVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined1 auStack_700 [8];
  undefined8 *local_6f8;
  undefined8 *puStack_6f0;
  undefined8 local_6e8;
  long *local_6e0;
  int local_6d4;
  undefined8 *local_6d0;
  undefined1 *local_6c8;
  undefined1 auStack_6a8 [544];
  undefined8 local_488 [125];
  byte *local_a0;
  ulong local_98 [7];
  
  puVar5 = (undefined8 *)auStack_700;
  lVar20 = 0;
  local_98[0] = param_3[2];
  local_98[1] = param_3[1] + *param_3;
  local_98[2] = 0xffffffffffffffff;
  local_98[3] = param_2[2];
  local_6d4 = param_5;
  local_6e8 = param_1;
  local_6e0 = param_2;
  local_98[4] = param_2[1] + *param_2;
  local_98[5] = param_4 - param_2[3];
  local_6d0 = (undefined8 *)0x0;
  local_6c8 = auStack_6a8;
  local_6f8 = local_488;
  puStack_6f0 = (undefined8 *)(param_6 + 0x8e);
  do {
    local_a0 = *(byte **)((long)local_98 + lVar20);
    pbVar1 = *(byte **)((long)local_98 + lVar20 + 8);
    uVar16 = *(ulong *)((long)local_98 + lVar20 + 0x10);
    if (local_a0 < pbVar1 && uVar16 != 0) {
      uVar17 = 0;
      pbVar11 = local_a0;
      do {
        puVar18 = local_6d0;
        puVar4 = PTR___sF_001f6b60;
        pbVar9 = pbVar11 + 1;
        bVar2 = *pbVar11;
        local_a0 = pbVar9;
        switch((ulong)bVar2) {
        case 0:
          break;
        case 1:
          uVar17 = FUN_001ed16c(local_6e8,&local_a0,pbVar1,(char)param_3[3],0);
          break;
        case 2:
          uVar8 = (uint)pbVar11[1];
          iVar13 = (int)param_3[5];
          local_a0 = pbVar11 + 2;
          goto LAB_001ec888;
        case 3:
          uVar8 = (uint)*(ushort *)(pbVar11 + 1);
          iVar13 = (int)param_3[5];
          local_a0 = pbVar11 + 3;
          goto LAB_001ec888;
        case 4:
          uVar8 = *(uint *)(pbVar11 + 1);
          iVar13 = (int)param_3[5];
          local_a0 = pbVar11 + 5;
LAB_001ec888:
          uVar17 = uVar17 + iVar13 * uVar8;
          break;
        case 5:
          uVar19 = FUN_001ed4f8(&local_a0,pbVar1);
          lVar7 = FUN_001ed4f8(&local_a0,pbVar1);
          if (0x5f < uVar19) {
            __ptr = "td90ibse3j0xgcgj54f7i1bcltwwkomylzdxqqs5q5mea9j4gv4xm1jmu577wkvpo3wya\n";
            __size = 0x46;
            __s = (FILE *)(PTR___sF_001f6b60 + 0x130);
            goto LAB_001ecd18;
          }
          puVar18 = (undefined8 *)(param_6 + uVar19 * 4 + 6);
          lVar12 = (long)*(int *)((long)param_3 + 0x2c);
          if ((*(byte *)((long)puVar18 + 4) & 1) == 0) {
            uVar21 = *puVar18;
            *(undefined1 *)((long)puVar18 + 4) = 1;
            *(undefined8 *)((long)(local_6c8 + uVar19 * 0x10) + 8) = puVar18[1];
            *(undefined8 *)(local_6c8 + uVar19 * 0x10) = uVar21;
          }
LAB_001ecb70:
          lVar7 = lVar7 * lVar12;
LAB_001ecb74:
          uVar6 = 2;
          goto LAB_001ecb78;
        case 6:
          uVar19 = FUN_001ed4f8(&local_a0,pbVar1);
          if (0x5f < uVar19) {
            __ptr = "5me9cvnrgx5bdyl67gz9vyy1lmcwbqw6m798lv1ln3t5f3hm9w2szmm040w4d9pw9m77rc\n";
LAB_001ecc84:
            __s = (FILE *)(PTR___sF_001f6b60 + 0x130);
            __size = 0x47;
            goto LAB_001ecd18;
          }
          puVar18 = (undefined8 *)(param_6 + uVar19 * 4 + 6);
          if (*(char *)((long)puVar18 + 4) == '\x01') {
            uVar22 = *(undefined8 *)((long)(local_6c8 + uVar19 * 0x10) + 8);
            uVar21 = *(undefined8 *)(local_6c8 + uVar19 * 0x10);
LAB_001ecb24:
            puVar18[1] = uVar22;
            *puVar18 = uVar21;
          }
          break;
        case 7:
          uVar19 = FUN_001ed4f8(&local_a0,pbVar1);
          if (0x5f < uVar19) {
            __ptr = "ttyyw3hllb8rgco8jccbidxhokcheot96sts9ldtvyss01znfes96prhngmg8ng\n";
LAB_001ecd0c:
            __s = (FILE *)(PTR___sF_001f6b60 + 0x130);
            __size = 0x40;
            goto LAB_001ecd18;
          }
          puVar18 = (undefined8 *)(param_6 + uVar19 * 4 + 6);
          if ((*(byte *)((long)puVar18 + 4) & 1) == 0) {
            uVar21 = *puVar18;
            *(undefined1 *)((long)puVar18 + 4) = 1;
            *(undefined8 *)((long)(local_6c8 + uVar19 * 0x10) + 8) = puVar18[1];
            *(undefined8 *)(local_6c8 + uVar19 * 0x10) = uVar21;
          }
          *(undefined4 *)puVar18 = 1;
          break;
        case 8:
          uVar19 = FUN_001ed4f8(&local_a0,pbVar1);
          if (0x5f < uVar19) {
            __ptr = "bizaqdf84m1ylxmn2z5kzy9zpr26e8bbnr4h041vj7rx2mg8ckzxuixqfgy84xwg\n";
LAB_001eccf0:
            __s = (FILE *)(PTR___sF_001f6b60 + 0x130);
            __size = 0x41;
            goto LAB_001ecd18;
          }
          puVar18 = (undefined8 *)(param_6 + uVar19 * 4 + 6);
          if ((*(byte *)((long)puVar18 + 4) & 1) == 0) {
            uVar21 = *puVar18;
            *(undefined1 *)((long)puVar18 + 4) = 1;
            *(undefined8 *)((long)(local_6c8 + uVar19 * 0x10) + 8) = puVar18[1];
            *(undefined8 *)(local_6c8 + uVar19 * 0x10) = uVar21;
          }
          *(undefined4 *)puVar18 = 0;
          break;
        case 9:
          uVar19 = FUN_001ed4f8(&local_a0,pbVar1);
          uVar14 = FUN_001ed4f8(&local_a0,pbVar1);
          if (0x5f < uVar19) {
            __ptr = "kcp2js83fmyd3y83onl5jvi9dnh9ts1d55twighsq9r44a9mk8uer1sp8my4bu\n";
            __size = 0x3f;
            __s = (FILE *)(PTR___sF_001f6b60 + 0x130);
            goto LAB_001ecd18;
          }
          if (0x5f < uVar14) {
            __ptr = "ozw4ww1hol9vb13ac9gb2yd4aw7h13o9zkxqd5xsnx7r97ee8oo25qbj3gskykh\n";
            goto LAB_001ecd0c;
          }
          puVar18 = (undefined8 *)(param_6 + uVar19 * 4 + 6);
          if ((*(byte *)((long)puVar18 + 4) & 1) == 0) {
            uVar21 = *puVar18;
            *(undefined1 *)((long)puVar18 + 4) = 1;
            *(undefined8 *)((long)(local_6c8 + uVar19 * 0x10) + 8) = puVar18[1];
            *(undefined8 *)(local_6c8 + uVar19 * 0x10) = uVar21;
          }
          puVar18[1] = uVar14;
          *(undefined4 *)puVar18 = 5;
          break;
        case 10:
          puVar18 = (undefined8 *)((long)puVar5 + -0x630);
          *puVar18 = local_6d0;
          memcpy((undefined1 *)((long)puVar5 + -0x628),param_6,0x620);
          local_6d0 = puVar18;
          puVar5 = puVar18;
          break;
        case 0xb:
          if (local_6d0 == (undefined8 *)0x0) {
            return 0;
          }
          memcpy(param_6,local_6d0 + 1,0x620);
          local_6d0 = (undefined8 *)*puVar18;
          break;
        case 0xc:
          uVar19 = FUN_001ed4f8(&local_a0,pbVar1);
          uVar6 = FUN_001ed4f8(&local_a0,pbVar1);
          if (0x5f < uVar19) {
            __ptr = "b94g52zfy3wsxdr8op8gvl3iytk1jr1rdlo66werza3nfyt62lkmfteutg2ek\n";
            __size = 0x3e;
            __s = (FILE *)(PTR___sF_001f6b60 + 0x130);
            goto LAB_001ecd18;
          }
          *param_6 = (int)uVar19;
          param_6[1] = uVar6;
          break;
        case 0xd:
          uVar19 = FUN_001ed4f8(&local_a0,pbVar1);
          if (0x5f < uVar19) {
            __ptr = "3i0le7yy98rdr5p9x9uljxhu2o5w0lq1o3o9k9fq0xv5eil419b8c0m4h094vaf4ajaw0j\n";
            goto LAB_001ecc84;
          }
          *param_6 = (int)uVar19;
          break;
        case 0xe:
          uVar6 = FUN_001ed4f8(&local_a0,pbVar1);
          param_6[1] = uVar6;
          break;
        case 0xf:
          *param_6 = 0;
          *(byte **)(param_6 + 2) = pbVar9;
          goto LAB_001eca28;
        case 0x10:
          uVar19 = FUN_001ed4f8(&local_a0,pbVar1);
          if (0x5f < uVar19) {
            __ptr = "2g530flmg0vu7j5gxg4dghfm2u68mlobaxzndlux3h3xn81c7620cy14tbqxrdch\n";
            goto LAB_001eccf0;
          }
          puVar18 = (undefined8 *)(param_6 + uVar19 * 4 + 6);
          if ((*(byte *)((long)puVar18 + 4) & 1) == 0) {
            uVar21 = *puVar18;
            *(undefined1 *)((long)puVar18 + 4) = 1;
            *(undefined8 *)((long)(local_6c8 + uVar19 * 0x10) + 8) = puVar18[1];
            *(undefined8 *)(local_6c8 + uVar19 * 0x10) = uVar21;
          }
          uVar6 = 6;
LAB_001eca20:
          *(undefined4 *)puVar18 = uVar6;
          puVar18[1] = local_a0;
LAB_001eca28:
          lVar7 = FUN_001ed4f8(&local_a0,pbVar1);
          local_a0 = local_a0 + lVar7;
          break;
        case 0x11:
          uVar19 = FUN_001ed4f8(&local_a0,pbVar1);
          puVar4 = PTR___sF_001f6b60;
          if (0x5f < uVar19) {
            __ptr = "748jedk051r0aa80es4ub02n9vioq7zo5nbiq4xl7sj75wh142h0n3qrjb360sbi91egpdo2\n";
            __size = 0x49;
            __s = (FILE *)(PTR___sF_001f6b60 + 0x130);
            goto LAB_001ecd18;
          }
          uVar10 = 0;
          uVar14 = 0xfffffffffffffff9;
          pbVar11 = local_a0;
          pbVar9 = local_a0;
          do {
            if (pbVar9 == pbVar1) {
              fprintf((FILE *)(PTR___sF_001f6b60 + 0x130),"w4j375t7av %s - %s\n","getSLEB128",
                      "truncated sleb128 expression");
              fflush((FILE *)(puVar4 + 0x130));
                    /* WARNING: Subroutine does not return */
              abort();
            }
            bVar2 = *pbVar9;
            uVar14 = uVar14 + 7;
            pbVar11 = pbVar11 + 1;
            uVar10 = ((ulong)bVar2 & 0x7f) << (uVar14 & 0x3f) | uVar10;
            pbVar9 = pbVar9 + 1;
          } while ((char)bVar2 < '\0');
          puVar18 = (undefined8 *)(param_6 + uVar19 * 4 + 6);
          local_a0 = pbVar11;
          uVar15 = -1L << ((ulong)((int)uVar14 + 7) & 0x3f);
          iVar13 = *(int *)((long)param_3 + 0x2c);
          if (0x38 < uVar14 || bVar2 < 0x40) {
            uVar15 = 0;
          }
          if ((*(byte *)((long)puVar18 + 4) & 1) == 0) {
            uVar21 = *puVar18;
            *(undefined1 *)((long)puVar18 + 4) = 1;
            *(undefined8 *)((long)(local_6c8 + uVar19 * 0x10) + 8) = puVar18[1];
            *(undefined8 *)(local_6c8 + uVar19 * 0x10) = uVar21;
          }
          uVar10 = uVar10 | uVar15;
          uVar6 = 2;
LAB_001ec9d0:
          *(undefined4 *)puVar18 = uVar6;
          puVar18[1] = uVar10 * (long)iVar13;
          break;
        case 0x12:
          uVar14 = FUN_001ed4f8(&local_a0,pbVar1);
          puVar4 = PTR___sF_001f6b60;
          uVar10 = 0;
          uVar19 = 0xfffffffffffffff9;
          pbVar11 = local_a0;
          pbVar9 = local_a0;
          do {
            uVar15 = uVar19;
            if (pbVar9 == pbVar1) {
              fprintf((FILE *)(PTR___sF_001f6b60 + 0x130),"w4j375t7av %s - %s\n","getSLEB128",
                      "truncated sleb128 expression");
              fflush((FILE *)(puVar4 + 0x130));
                    /* WARNING: Subroutine does not return */
              abort();
            }
            bVar2 = *pbVar9;
            uVar19 = uVar15 + 7;
            pbVar11 = pbVar11 + 1;
            uVar10 = ((ulong)bVar2 & 0x7f) << (uVar19 & 0x3f) | uVar10;
            pbVar9 = pbVar9 + 1;
          } while ((char)bVar2 < '\0');
          local_a0 = pbVar11;
          if (0x5f < uVar14) {
            __ptr = "amr6iiooaww5rorznnk327x0ubklhd5josyav8f8zhdfmqxp1qlb2izug35dpmci\n";
            goto LAB_001eccf0;
          }
          uVar8 = (uint)(-1L << (uVar15 + 0xe & 0x3f));
          if (0x38 < uVar19 || bVar2 < 0x40) {
            uVar8 = 0;
          }
          iVar13 = *(int *)((long)param_3 + 0x2c);
          *param_6 = (int)uVar14;
          param_6[1] = iVar13 * ((uint)uVar10 | uVar8);
          break;
        case 0x13:
          uVar14 = 0;
          uVar19 = 0xfffffffffffffff9;
          pbVar11 = pbVar9;
          do {
            if (pbVar11 == pbVar1) {
              fprintf((FILE *)(PTR___sF_001f6b60 + 0x130),"w4j375t7av %s - %s\n","getSLEB128",
                      "truncated sleb128 expression");
              fflush((FILE *)(puVar4 + 0x130));
                    /* WARNING: Subroutine does not return */
              abort();
            }
            bVar2 = *pbVar11;
            uVar19 = uVar19 + 7;
            pbVar9 = pbVar9 + 1;
            uVar14 = ((ulong)bVar2 & 0x7f) << (uVar19 & 0x3f) | uVar14;
            pbVar11 = pbVar11 + 1;
          } while ((char)bVar2 < '\0');
          local_a0 = pbVar9;
          uVar8 = (uint)(-1L << ((ulong)((int)uVar19 + 7) & 0x3f));
          if (0x38 < uVar19 || bVar2 < 0x40) {
            uVar8 = 0;
          }
          param_6[1] = *(int *)((long)param_3 + 0x2c) * ((uint)uVar14 | uVar8);
          break;
        case 0x14:
          uVar19 = FUN_001ed4f8(&local_a0,pbVar1);
          if (0x5f < uVar19) {
            fprintf((FILE *)(PTR___sF_001f6b60 + 0x130),
                    "vs5jtzyk4ntlr16iqgs5wb1x27cih4s93vy7zvzqkz052jh95rvueu6jlgwwukpol1p161bzauq\n\n"
                    ,uVar19);
            goto LAB_001ecd20;
          }
          lVar7 = FUN_001ed4f8(&local_a0,pbVar1);
          puVar18 = (undefined8 *)(param_6 + uVar19 * 4 + 6);
          iVar13 = *(int *)((long)param_3 + 0x2c);
          if ((*(byte *)((long)puVar18 + 4) & 1) == 0) {
            uVar21 = *puVar18;
            *(undefined1 *)((long)puVar18 + 4) = 1;
            *(undefined8 *)((long)(local_6c8 + uVar19 * 0x10) + 8) = puVar18[1];
            *(undefined8 *)(local_6c8 + uVar19 * 0x10) = uVar21;
          }
          lVar7 = lVar7 * iVar13;
          uVar6 = 4;
LAB_001ecb78:
          *(undefined4 *)puVar18 = uVar6;
          puVar18[1] = lVar7;
          break;
        case 0x15:
          uVar19 = FUN_001ed4f8(&local_a0,pbVar1);
          puVar4 = PTR___sF_001f6b60;
          if (uVar19 < 0x60) {
            uVar10 = 0;
            uVar14 = 0xfffffffffffffff9;
            pbVar11 = local_a0;
            pbVar9 = local_a0;
            do {
              if (pbVar9 == pbVar1) {
                fprintf((FILE *)(PTR___sF_001f6b60 + 0x130),"w4j375t7av %s - %s\n","getSLEB128",
                        "truncated sleb128 expression");
                fflush((FILE *)(puVar4 + 0x130));
                    /* WARNING: Subroutine does not return */
                abort();
              }
              bVar2 = *pbVar9;
              uVar14 = uVar14 + 7;
              pbVar11 = pbVar11 + 1;
              uVar10 = ((ulong)bVar2 & 0x7f) << (uVar14 & 0x3f) | uVar10;
              pbVar9 = pbVar9 + 1;
            } while ((char)bVar2 < '\0');
            puVar18 = (undefined8 *)(param_6 + uVar19 * 4 + 6);
            local_a0 = pbVar11;
            uVar15 = -1L << ((ulong)((int)uVar14 + 7) & 0x3f);
            iVar13 = *(int *)((long)param_3 + 0x2c);
            if (0x38 < uVar14 || bVar2 < 0x40) {
              uVar15 = 0;
            }
            if ((*(byte *)((long)puVar18 + 4) & 1) == 0) {
              uVar21 = *puVar18;
              *(undefined1 *)((long)puVar18 + 4) = 1;
              *(undefined8 *)((long)(local_6c8 + uVar19 * 0x10) + 8) = puVar18[1];
              *(undefined8 *)(local_6c8 + uVar19 * 0x10) = uVar21;
            }
            uVar10 = uVar10 | uVar15;
            uVar6 = 4;
            goto LAB_001ec9d0;
          }
          __ptr = "det9exookve9gxq6d4i3wk3pmislpktlyfecprsnxpxcz4879658gij9lu5y5xxq4d1\n";
          __size = 0x44;
          __s = (FILE *)(PTR___sF_001f6b60 + 0x130);
          goto LAB_001ecd18;
        case 0x16:
          uVar19 = FUN_001ed4f8(&local_a0,pbVar1);
          if (uVar19 < 0x60) {
            puVar18 = (undefined8 *)(param_6 + uVar19 * 4 + 6);
            if ((*(byte *)((long)puVar18 + 4) & 1) == 0) {
              uVar21 = *puVar18;
              *(undefined1 *)((long)puVar18 + 4) = 1;
              *(undefined8 *)((long)(local_6c8 + uVar19 * 0x10) + 8) = puVar18[1];
              *(undefined8 *)(local_6c8 + uVar19 * 0x10) = uVar21;
            }
            uVar6 = 7;
            goto LAB_001eca20;
          }
          __ptr = "7g3gmecn1klvr84pej72qacc7d8jb3jvnm94df2fzir0n1z9nc1z70srhs8ufiu5i627\n";
          __size = 0x45;
          __s = (FILE *)(PTR___sF_001f6b60 + 0x130);
          goto LAB_001ecd18;
        default:
          bVar3 = bVar2 >> 6;
          uVar19 = (ulong)bVar2 & 0x3f;
          if (bVar3 < 2) {
            if (bVar3 != 1) {
              return 0;
            }
            uVar17 = uVar17 + (uint)((int)param_3[5] * (int)uVar19);
          }
          else {
            if (bVar3 != 3) {
              lVar7 = FUN_001ed4f8(&local_a0,pbVar1);
              puVar18 = (undefined8 *)(param_6 + uVar19 * 4 + 6);
              lVar12 = (long)*(int *)((long)param_3 + 0x2c);
              if ((*(byte *)((long)puVar18 + 4) & 1) == 0) {
                uVar21 = *puVar18;
                *(undefined1 *)((long)puVar18 + 4) = 1;
                *(undefined8 *)((long)(local_6c8 + uVar19 * 0x10) + 8) = puVar18[1];
                *(undefined8 *)(local_6c8 + uVar19 * 0x10) = uVar21;
              }
              goto LAB_001ecb70;
            }
            puVar18 = (undefined8 *)(param_6 + uVar19 * 4 + 6);
            if (*(char *)((long)puVar18 + 4) == '\x01') {
              uVar22 = *(undefined8 *)((long)(local_6c8 + uVar19 * 0x10) + 8);
              uVar21 = *(undefined8 *)(local_6c8 + uVar19 * 0x10);
              goto LAB_001ecb24;
            }
          }
          break;
        case 0x2c:
          if ((*(byte *)(param_6 + 0x8f) & 1) == 0) {
            uVar22 = puStack_6f0[1];
            uVar21 = *puStack_6f0;
            *(undefined1 *)(param_6 + 0x8f) = 1;
            local_6f8[1] = uVar22;
            *local_6f8 = uVar21;
          }
          lVar7 = local_6e0[3];
          *(ulong *)(param_6 + 0x90) = *(ulong *)(param_6 + 0x90) ^ 3;
          *(ulong *)(param_6 + 0x186) = uVar17 + lVar7 + -4;
          break;
        case 0x2d:
          if (local_6d4 == 4) {
            if ((*(byte *)(param_6 + 0x8f) & 1) == 0) {
              uVar22 = puStack_6f0[1];
              uVar21 = *puStack_6f0;
              *(undefined1 *)(param_6 + 0x8f) = 1;
              local_6f8[1] = uVar22;
              *local_6f8 = uVar21;
            }
            *(ulong *)(param_6 + 0x90) = *(ulong *)(param_6 + 0x90) ^ 1;
          }
          break;
        case 0x2e:
          uVar6 = FUN_001ed4f8(&local_a0,pbVar1);
          param_6[4] = uVar6;
          break;
        case 0x2f:
          uVar19 = FUN_001ed4f8(&local_a0,pbVar1);
          if (uVar19 < 0x60) {
            lVar7 = FUN_001ed4f8(&local_a0,pbVar1);
            puVar18 = (undefined8 *)(param_6 + uVar19 * 4 + 6);
            iVar13 = *(int *)((long)param_3 + 0x2c);
            if ((*(byte *)((long)puVar18 + 4) & 1) == 0) {
              uVar21 = *puVar18;
              *(undefined1 *)((long)puVar18 + 4) = 1;
              *(undefined8 *)((long)(local_6c8 + uVar19 * 0x10) + 8) = puVar18[1];
              *(undefined8 *)(local_6c8 + uVar19 * 0x10) = uVar21;
            }
            lVar7 = -(lVar7 * iVar13);
            goto LAB_001ecb74;
          }
          __ptr = 
          "28r1jybrabd5ui0xp16q82y7l3281ithajlx0jd687g4erm06354ieakjipwvuzlhskj5volollh9qah7j\n";
          __size = 0x53;
          __s = (FILE *)(PTR___sF_001f6b60 + 0x130);
LAB_001ecd18:
          fwrite(__ptr,__size,1,__s);
LAB_001ecd20:
          fflush((FILE *)(PTR___sF_001f6b60 + 0x130));
          return 0;
        }
      } while ((local_a0 < pbVar1) && (pbVar11 = local_a0, uVar17 < uVar16));
    }
    lVar20 = lVar20 + 0x18;
    if (lVar20 == 0x30) {
      return 1;
    }
  } while( true );
}


