// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001eb594; body: [[001eb594, 001eb85b]]

char * FUN_001eb594(undefined8 param_1,uint *param_2,long *param_3)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  undefined *puVar4;
  undefined1 uVar5;
  undefined4 uVar6;
  long lVar7;
  char *pcVar8;
  uint *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  ulong uVar12;
  ulong uVar13;
  byte *pbVar14;
  byte *pbVar15;
  uint uVar16;
  byte *pbVar17;
  byte *local_48;
  
  *(undefined2 *)((long)param_3 + 0x33) = 0;
  param_3[4] = 0;
  param_3[5] = 0;
  *(undefined2 *)(param_3 + 6) = 0;
  *param_3 = (long)param_2;
  *(undefined4 *)(param_3 + 3) = 0xff00;
  puVar9 = param_2 + 1;
  uVar12 = (ulong)*param_2;
  if (*param_2 == 0xffffffff) {
    uVar12 = *(ulong *)(param_2 + 1);
    puVar9 = param_2 + 3;
    pbVar1 = (byte *)(uVar12 + (long)puVar9);
  }
  else {
    pbVar1 = (byte *)((long)puVar9 + uVar12);
  }
  if (uVar12 == 0) {
    pcVar8 = (char *)0x0;
  }
  else if (*puVar9 == 0) {
    uVar3 = puVar9[1];
    if (((byte)uVar3 & 0xfd) == 1) {
      pbVar17 = (byte *)((long)puVar9 + 5);
      pbVar10 = pbVar17;
      do {
        local_48 = pbVar10 + 1;
        bVar2 = *pbVar10;
        pbVar10 = local_48;
      } while (bVar2 != 0);
      uVar6 = FUN_001ed4f8(&local_48,pbVar1);
      uVar13 = 0;
      uVar12 = 0xfffffffffffffff9;
      *(undefined4 *)(param_3 + 5) = uVar6;
      puVar4 = PTR___sF_001f6b60;
      pbVar10 = local_48;
      pbVar14 = local_48;
      do {
        pbVar11 = pbVar10;
        if (pbVar14 == pbVar1) {
          fprintf((FILE *)(PTR___sF_001f6b60 + 0x130),"w4j375t7av %s - %s\n","getSLEB128",
                  "truncated sleb128 expression");
          fflush((FILE *)(puVar4 + 0x130));
                    /* WARNING: Subroutine does not return */
          abort();
        }
        pbVar15 = pbVar14 + 1;
        bVar2 = *pbVar14;
        uVar12 = uVar12 + 7;
        pbVar10 = pbVar11 + 1;
        uVar13 = ((ulong)bVar2 & 0x7f) << (uVar12 & 0x3f) | uVar13;
        pbVar14 = pbVar15;
      } while ((char)bVar2 < '\0');
      uVar16 = (uint)(-1L << ((ulong)((int)uVar12 + 7) & 0x3f));
      if (0x38 < uVar12 || bVar2 < 0x40) {
        uVar16 = 0;
      }
      *(uint *)((long)param_3 + 0x2c) = (uint)uVar13 | uVar16;
      if ((byte)uVar3 == 1) {
        local_48 = pbVar11 + 2;
        *(byte *)((long)param_3 + 0x32) = *pbVar15;
        bVar2 = *pbVar17;
      }
      else {
        local_48 = pbVar10;
        uVar5 = FUN_001ed4f8(&local_48,pbVar1);
        *(undefined1 *)((long)param_3 + 0x32) = uVar5;
        bVar2 = *pbVar17;
      }
      if (bVar2 == 0x7a) {
        FUN_001ed4f8(&local_48,pbVar1);
LAB_001eb714:
        bVar2 = *pbVar17;
        if (bVar2 < 0x50) {
          if (bVar2 < 0x47) {
            if (bVar2 != 0x42) {
              if (bVar2 != 0) goto LAB_001eb7b4;
              goto LAB_001eb7f8;
            }
            *(undefined1 *)((long)param_3 + 0x33) = 1;
            pbVar17 = pbVar17 + 1;
            goto LAB_001eb714;
          }
          if (bVar2 == 0x47) {
            *(undefined1 *)((long)param_3 + 0x34) = 1;
            goto LAB_001eb7b4;
          }
          if (bVar2 == 0x4c) {
            pbVar17 = pbVar17 + 1;
            *(byte *)((long)param_3 + 0x19) = *local_48;
            local_48 = local_48 + 1;
            goto LAB_001eb714;
          }
        }
        else if (bVar2 < 0x53) {
          if (bVar2 == 0x50) {
            bVar2 = *local_48;
            *(byte *)((long)param_3 + 0x1a) = bVar2;
            *(char *)((long)param_3 + 0x1b) = (char)(local_48 + 1) - (char)param_2;
            local_48 = local_48 + 1;
            lVar7 = FUN_001ed16c(param_1,&local_48,pbVar1,bVar2,0);
            param_3[4] = lVar7;
            pbVar17 = pbVar17 + 1;
            goto LAB_001eb714;
          }
          if (bVar2 == 0x52) {
            pbVar17 = pbVar17 + 1;
            *(byte *)(param_3 + 3) = *local_48;
            local_48 = local_48 + 1;
            goto LAB_001eb714;
          }
        }
        else {
          if (bVar2 == 0x53) {
            *(undefined1 *)(param_3 + 6) = 1;
            pbVar17 = pbVar17 + 1;
            goto LAB_001eb714;
          }
          if (bVar2 == 0x7a) {
            *(undefined1 *)((long)param_3 + 0x31) = 1;
            pbVar17 = pbVar17 + 1;
            goto LAB_001eb714;
          }
        }
LAB_001eb7b4:
        pbVar17 = pbVar17 + 1;
        goto LAB_001eb714;
      }
LAB_001eb7f8:
      pcVar8 = (char *)0x0;
      param_3[1] = (long)pbVar1 - *param_3;
      param_3[2] = (long)local_48;
    }
    else {
      pcVar8 = "CIE version is not 1 or 3";
    }
  }
  else {
    pcVar8 = "CIE ID is not zero";
  }
  return pcVar8;
}


