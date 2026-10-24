// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00178ca8; body: [[00178ca8, 00178fd3]]

void FUN_00178ca8(long param_1,long param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  ulong uVar5;
  int iVar6;
  undefined1 auStack_a8 [48];
  long local_78;
  long local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  iVar1 = 0x22e9641;
  if (param_4 < 2) {
    iVar1 = -0x3cc0f248;
  }
  iVar3 = 0xbb9b227;
  local_70 = param_2;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (iVar6 = iVar3, iVar3 = iVar6, -0x761ae94 < iVar6) {
            if (iVar6 < 0xbb9b227) {
              if (iVar6 == -0x761ae93) {
                uVar4 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528a2)])(&local_78);
                (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528a3)])(local_70,uVar4);
                local_70 = local_78;
                iVar3 = 0x22071a9c;
                if (param_4 != 0) {
                  iVar3 = -0x19df864f;
                }
              }
              else if (iVar6 == 0x22e9641) {
                param_4 = (param_4 + -2) / 2;
                local_78 = param_1 + param_4 * 0x30;
                local_70 = local_70 + -0x30;
                uVar5 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528d0)])(param_3);
                iVar3 = 0x71a213f0;
                if ((uVar5 & 1) == 0) {
                  iVar3 = -0x55429244;
                }
              }
            }
            else {
              iVar3 = iVar1;
              if (((iVar6 != 0xbb9b227) && (iVar3 = -0x69f75d13, iVar6 != 0x22071a9c)) &&
                 (iVar3 = iVar6, iVar6 == 0x71a213f0)) {
                uVar4 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528a2)])(&local_70);
                (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528f4)])(auStack_a8,uVar4);
                iVar3 = -0x761ae93;
              }
            }
          }
          if (-0x55429245 < iVar6) break;
          if (iVar6 == -0x69f75d13) {
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528a3)])(local_70,auStack_a8);
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aa5)])(auStack_a8);
            iVar3 = -0x55429244;
          }
          else if (iVar6 == -0x59c4adce) {
            uVar5 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a528d0)])
                              (param_3,local_78,auStack_a8);
            iVar3 = -0x761ae93;
            if ((uVar5 & 1) == 0) {
              iVar3 = -0x69f75d13;
            }
          }
        }
        if (iVar6 != -0x55429244) break;
        iVar3 = -0x3cc0f248;
      }
      if (iVar6 != -0x19df864f) break;
      param_4 = (param_4 + -1) / 2;
      local_78 = param_1 + param_4 * 0x30;
      iVar3 = -0x59c4adce;
    }
  } while (iVar6 != -0x3cc0f248);
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


