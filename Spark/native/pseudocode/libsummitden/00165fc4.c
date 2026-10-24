// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00165fc4; body: [[00165fc4, 00166297]]

void FUN_00165fc4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  ulong uVar4;
  code *pcVar5;
  int iVar6;
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  pcVar5 = (code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52af1)];
  iVar2 = -0x70156fce;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (iVar6 = iVar2, iVar2 = iVar6, -0x165d880d < iVar6) {
            if (iVar6 < 0x3c7b28c) {
              iVar2 = -0x50989101;
              if ((iVar6 != -0x165d880c) && (iVar2 = iVar6, iVar6 == -0xdb6bd8a)) {
                (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae4)])
                          (param_1,&DAT_001fd05f);
                iVar2 = -0x50989101;
              }
            }
            else if (iVar6 == 0x3c7b28c) {
              local_78 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52bcf)])(param_1);
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52bcc)])(&local_70,&local_78);
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52bcd)])
                        (param_1,local_70,0x2f);
              iVar2 = -0x266cc604;
            }
            else if (iVar6 == 0x36bd486a) {
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a64)])(param_1,0x2f);
              iVar2 = -0x42963569;
            }
          }
          if (-0x50989102 < iVar6) break;
          if (iVar6 == -0x70f7d3f3) {
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ac7)])(param_1,param_2);
            pcVar3 = (char *)(*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52bce)])
                                       (param_1);
            iVar2 = -0x266cc604;
            if (*pcVar3 != '/') {
              iVar2 = 0x3c7b28c;
            }
          }
          else if (iVar6 == -0x70156fce) {
            uVar4 = (*pcVar5)(param_2);
            iVar2 = -0xdb6bd8a;
            if ((uVar4 & 1) == 0) {
              iVar2 = -0x70f7d3f3;
            }
          }
        }
        if (iVar6 != -0x42963569) break;
        iVar2 = -0x165d880c;
      }
      if (iVar6 != -0x266cc604) break;
      pcVar3 = (char *)(*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52bc2)])(param_1);
      iVar2 = -0x42963569;
      if (*pcVar3 != '/') {
        iVar2 = 0x36bd486a;
      }
    }
  } while (iVar6 != -0x50989101);
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


