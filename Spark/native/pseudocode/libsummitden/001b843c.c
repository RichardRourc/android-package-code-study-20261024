// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001b843c; body: [[001b843c, 001b8793]]

void FUN_001b843c(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  ulong uVar9;
  ulong uVar10;
  char local_6c [4];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar7 = 0xf28caa2f;
  local_6c[0] = '\x01';
  uVar5 = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa2f)])
                    (param_2,param_3,0xc,local_6c);
  uVar10 = (ulong)uVar5;
  uVar6 = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa2f)])
                    (param_2,param_3,uVar10,local_6c);
  iVar1 = 0x7028008c;
  if (local_6c[0] == '\0') {
    iVar1 = 0x4dd762d8;
  }
  iVar2 = 0x61357b4;
  if (uVar6 <= param_4) {
    iVar2 = 0x4dd762d8;
  }
  uVar9 = (ulong)param_4;
  iVar4 = 0x2978f8fe;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (iVar8 = iVar4, iVar4 = iVar8, 0x4dd762d7 < iVar8) {
            if (iVar8 < 0x6d74b4a3) {
              if (iVar8 == 0x4dd762d8) {
                (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa0f)])(param_1);
                iVar4 = -0x53a494f1;
              }
              else if (iVar8 == 0x6a57dfea) {
                (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa0f)])(param_1);
                iVar4 = -0xb5c9739;
              }
            }
            else if (iVar8 == 0x6d74b4a3) {
              uVar10 = 0;
              iVar4 = 0x6f606def;
            }
            else if (iVar8 == 0x6f606def) {
              uVar9 = uVar10;
              iVar4 = 0x6a57dfea;
              if (uVar10 != 0) {
                iVar4 = -0x7fb163e1;
              }
            }
            else if (iVar8 == 0x7028008c) {
              iVar4 = iVar2;
            }
          }
          if (iVar8 < -0xb5c9739) break;
          iVar4 = -0x53a494f1;
          if (iVar8 != -0xb5c9739) {
            if (iVar8 == 0x61357b4) {
              uVar7 = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa2f)])
                                (param_2,param_3,uVar5 + param_4 * 4 + 4,local_6c);
              iVar4 = -0x272317d5;
              if (local_6c[0] == '\0') {
                iVar4 = 0x6d74b4a3;
              }
            }
            else {
              iVar4 = iVar8;
              if (iVar8 == 0x2978f8fe) {
                iVar4 = iVar1;
              }
            }
          }
        }
        if (iVar8 != -0x7fb163e1) break;
        (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa25)])(param_1,uVar9);
        iVar4 = -0xb5c9739;
      }
      if (iVar8 != -0x272317d5) break;
      uVar10 = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa26)])
                         (param_2,param_3,uVar7);
      iVar4 = 0x6f606def;
    }
  } while (iVar8 != -0x53a494f1);
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


