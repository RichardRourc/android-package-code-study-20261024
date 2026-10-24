// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0013eb68; body: [[0013eb68, 0013f073]]

void FUN_0013eb68(undefined8 *param_1,uint *param_2)

{
  uint *puVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined1 *puVar7;
  int iVar8;
  ulong unaff_x22;
  
  iVar3 = -0x839d77;
  if (param_2 != (uint *)0x0) {
    iVar3 = 0x18b14ed9;
  }
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  puVar1 = param_2 + 10;
  iVar6 = -0x7b764748;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (iVar8 = iVar6, iVar6 = iVar8, iVar8 < 0x12aa889c) {
            if (iVar8 < -0x2ffdda45) {
              if (iVar8 < -0x5f0151cf) {
                if (iVar8 == -0x7e122c9e) {
                  uVar4 = *param_2;
                  uVar5 = (int)unaff_x22 * -8 + 0x18;
                  puVar7 = (undefined1 *)
                           (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371dd)])
                                     (param_1,unaff_x22);
                  *puVar7 = (char)(uVar4 >> (ulong)(uVar5 & 0x1f));
                  uVar4 = param_2[1];
                  puVar7 = (undefined1 *)
                           (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371dd)])
                                     (param_1,unaff_x22 + 4);
                  *puVar7 = (char)(uVar4 >> (ulong)(uVar5 & 0x1f));
                  uVar4 = param_2[2];
                  puVar7 = (undefined1 *)
                           (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371dd)])
                                     (param_1,unaff_x22 + 8);
                  *puVar7 = (char)(uVar4 >> (ulong)(uVar5 & 0x1f));
                  uVar4 = param_2[3];
                  puVar7 = (undefined1 *)
                           (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371dd)])
                                     (param_1,unaff_x22 + 0xc);
                  *puVar7 = (char)(uVar4 >> (ulong)(uVar5 & 0x1f));
                  uVar4 = param_2[4];
                  puVar7 = (undefined1 *)
                           (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371dd)])
                                     (param_1,unaff_x22 + 0x10);
                  *puVar7 = (char)(uVar4 >> (ulong)(uVar5 & 0x1f));
                  uVar4 = param_2[5];
                  puVar7 = (undefined1 *)
                           (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371dd)])
                                     (param_1,unaff_x22 + 0x14);
                  *puVar7 = (char)(uVar4 >> (ulong)(uVar5 & 0x1f));
                  uVar4 = param_2[6];
                  puVar7 = (undefined1 *)
                           (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371dd)])
                                     (param_1,unaff_x22 + 0x18);
                  *puVar7 = (char)(uVar4 >> (ulong)(uVar5 & 0x1f));
                  uVar4 = param_2[7];
                  puVar7 = (undefined1 *)
                           (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371dd)])
                                     (param_1,unaff_x22 + 0x1c);
                  *puVar7 = (char)(uVar4 >> (ulong)(uVar5 & 0x1f));
                  iVar6 = 0x73692a0b;
                }
                else if (iVar8 == -0x7b764748) {
                  iVar6 = iVar3;
                }
              }
              else if (iVar8 == -0x5f0151cf) {
                *(undefined1 *)((long)puVar1 + unaff_x22) = 0;
                unaff_x22 = unaff_x22 + 1;
                iVar6 = 0x4b92ba22;
              }
              else if (iVar8 == -0x54d513ed) {
                (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3709f)])(param_2,puVar1);
                unaff_x22 = 0;
                iVar6 = 0x555b0db9;
              }
            }
            else if (iVar8 < -0x13277696) {
              if (iVar8 == -0x2ffdda45) {
                *(undefined1 *)((long)puVar1 + unaff_x22) = 0;
                unaff_x22 = unaff_x22 + 1;
                iVar6 = 0x12ff5c95;
              }
              else if (iVar8 == -0x2b1437ce) {
                iVar6 = 0x12ff5c95;
              }
            }
            else if ((iVar8 == -0x13277696) || (iVar8 == -0x839d77)) {
              iVar6 = 0x12aa889c;
            }
          }
          if (iVar8 < 0x4b92ba22) break;
          if (iVar8 < 0x555b0db9) {
            if (iVar8 == 0x4b92ba22) {
              iVar6 = -0x5f0151cf;
              if (0x37 < unaff_x22) {
                iVar6 = 0x21ba8aa0;
              }
            }
            else if (iVar8 == 0x4d8d3f9c) {
              iVar6 = -0x7e122c9e;
              if (3 < unaff_x22) {
                iVar6 = -0x13277696;
              }
            }
          }
          else {
            iVar6 = 0x4b92ba22;
            if ((iVar8 != 0x555b0db9) && (iVar6 = iVar8, iVar8 == 0x73692a0b)) {
              unaff_x22 = unaff_x22 + 1;
              iVar6 = 0x4d8d3f9c;
            }
          }
        }
        if (iVar8 < 0x18b14ed9) break;
        if (iVar8 == 0x18b14ed9) {
          unaff_x22 = *(long *)(param_2 + 0x1a) + 1;
          *(undefined1 *)((long)puVar1 + *(long *)(param_2 + 0x1a)) = 0x80;
          iVar6 = -0x2b1437ce;
          if (unaff_x22 < 0x39) {
            iVar6 = 0x555b0db9;
          }
        }
        else if (iVar8 == 0x21ba8aa0) {
          lVar2 = *(long *)(param_2 + 8) + *(long *)(param_2 + 0x1a) * 8;
          *(long *)(param_2 + 8) = lVar2;
          *(char *)((long)param_2 + 0x67) = (char)lVar2;
          *(char *)((long)param_2 + 0x66) = (char)((ulong)lVar2 >> 8);
          *(char *)((long)param_2 + 0x65) = (char)((ulong)lVar2 >> 0x10);
          *(char *)(param_2 + 0x19) = (char)((ulong)lVar2 >> 0x18);
          *(char *)((long)param_2 + 99) = (char)((ulong)lVar2 >> 0x20);
          *(char *)((long)param_2 + 0x62) = (char)((ulong)lVar2 >> 0x28);
          *(char *)((long)param_2 + 0x61) = (char)((ulong)lVar2 >> 0x30);
          *(char *)(param_2 + 0x18) = (char)((ulong)lVar2 >> 0x38);
          (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3709f)])(param_2,puVar1);
          unaff_x22 = 0;
          iVar6 = 0x4d8d3f9c;
        }
      }
      if (iVar8 != 0x12ff5c95) break;
      iVar6 = -0x2ffdda45;
      if (0x3f < unaff_x22) {
        iVar6 = -0x54d513ed;
      }
    }
  } while (iVar8 != 0x12aa889c);
  return;
}


