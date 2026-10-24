// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001bca1c; body: [[001bca1c, 001bcddb]]

long FUN_001bca1c(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_168 [6];
  undefined1 auStack_162 [250];
  long local_68;
  
  lVar2 = tpidr_el0;
  lVar8 = 0x3f396fce;
  local_68 = *(long *)(lVar2 + 0x28);
  (*(code *)(&PTR_FUN_00202fd0)[(int)(DAT_00203100 ^ 0x3f396fce)])
            (&DAT_00202fa9,0xb,&DAT_00205c38,&DAT_00202fa9);
  (*(code *)(&PTR_FUN_00202fd0)[(int)(DAT_00203100 ^ 0x3f396fce)])
            (&DAT_00202fb4,2,&DAT_00205c3c,&DAT_00202fb4);
  lVar6 = (*(code *)(&PTR_FUN_00202fd0)[(int)(DAT_00203100 ^ 0x3f396fc9)])
                    (&DAT_00202fa9,&DAT_00202fb4);
  iVar1 = 0x113c0076;
  if (lVar6 != 0) {
    iVar1 = 0x5b2b6147;
  }
  lVar3 = 0x3f396fc4;
  iVar4 = 0x62496639;
LAB_001bcb48:
  while( true ) {
    while( true ) {
      while (iVar5 = iVar4, lVar7 = lVar3, lVar3 = lVar7, iVar4 = iVar5, iVar5 < 0x553a0d34) {
        if (iVar5 < 0x113c0076) {
          lVar3 = lVar8;
          iVar4 = 0x7ee661fa;
          if (iVar5 != -0x55961508) {
            if (iVar5 == -0x3a999ff8) {
              (*(code *)(&PTR_FUN_00202fd0)[(int)(DAT_00203100 ^ 0x3f396fce)])
                        (&DAT_00202fb6,7,&DAT_00205c40,&DAT_00202fb6);
              iVar5 = (*(code *)(&PTR_FUN_00202fd0)[(int)(DAT_00203100 ^ 0x3f396fc5)])
                                (auStack_168,&DAT_00202fb6,6);
              lVar3 = lVar7;
              iVar4 = 0x553a0d34;
              if (iVar5 != 0) {
                iVar4 = 0x61ab4e47;
              }
            }
            else {
              lVar3 = lVar7;
              iVar4 = iVar5;
              if (iVar5 == -0x6545ac91) {
                if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
                  __stack_chk_fail();
                }
                return lVar7;
              }
            }
          }
        }
        else if (iVar5 == 0x113c0076) {
          lVar3 = -1;
          iVar4 = -0x6545ac91;
        }
        else if (iVar5 == 0x11ed9d22) {
          lVar7 = (*(code *)(&PTR_FUN_00202fd0)[(int)(DAT_00203100 ^ 0x3f396fc4)])
                            (auStack_168,0x100,lVar6);
          iVar4 = 0x75803bf8;
          if (lVar7 != 0) {
            iVar4 = -0x3a999ff8;
          }
        }
        else if (iVar5 == 0x3ce8f3d5) {
          lVar3 = -1;
          iVar4 = 0x7ee661fa;
        }
      }
      if (iVar5 < 0x62496639) break;
      iVar4 = iVar1;
      if (iVar5 != 0x62496639) {
        if (iVar5 == 0x75803bf8) {
          (*(code *)(&PTR_FUN_00202fd0)[(int)(DAT_00203100 ^ 0x3f396fcb)])(lVar6);
          iVar4 = 0x3ce8f3d5;
          if (0 < lVar8) {
            iVar4 = -0x55961508;
          }
        }
        else {
          iVar4 = iVar5;
          if (iVar5 == 0x7ee661fa) {
            iVar4 = -0x6545ac91;
          }
        }
      }
    }
    if (iVar5 != 0x553a0d34) break;
    lVar8 = (*(code *)(&PTR_FUN_00202fd0)[(int)(DAT_00203100 ^ 0x3f396fc6)])(auStack_162,0,10);
    iVar4 = 0x75803bf8;
  }
  if (iVar5 != 0x5b2b6147) goto code_r0x001bcb78;
  lVar8 = -1;
  goto LAB_001bcb3c;
code_r0x001bcb78:
  if (iVar5 == 0x61ab4e47) {
LAB_001bcb3c:
    iVar4 = 0x11ed9d22;
  }
  goto LAB_001bcb48;
}


