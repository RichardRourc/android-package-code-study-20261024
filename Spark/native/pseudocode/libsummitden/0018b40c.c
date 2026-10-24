// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0018b40c; body: [[0018b40c, 0018b7bf]]

undefined * FUN_0018b40c(void)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *unaff_x24;
  undefined *local_170;
  undefined1 auStack_168 [9];
  undefined1 auStack_15f [247];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
            (&DAT_001fffdc,2,&DAT_00204738,&DAT_001fffdc);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
            (&DAT_002001bb,0xe,&DAT_002047b0,&DAT_002001bb);
  lVar5 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b588)])
                    (&DAT_002001bb,&DAT_001fffdc);
  iVar1 = 0x744d37b1;
  if (lVar5 != 0) {
    iVar1 = 0x7486da60;
  }
  puVar7 = &DAT_002001bb;
  iVar3 = 0x959b46c;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            iVar4 = iVar3;
            iVar3 = iVar4;
            if (iVar4 < 0x29159cbf) break;
            if (iVar4 < 0x6e94eff3) {
              if (iVar4 == 0x29159cbf) {
                (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b580)])(lVar5);
                puVar7 = unaff_x24;
                iVar3 = -0x3d1dcc93;
              }
              else if (iVar4 == 0x2e096b77) {
                (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                          (&DAT_002001c9,10,&DAT_002047b4,&DAT_002001c9);
                iVar4 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b58e)])
                                  (auStack_168,&DAT_002001c9,9);
                iVar3 = -0x2bd428b5;
                if (iVar4 != 0) {
                  iVar3 = 0x7b5a4bf;
                }
              }
            }
            else if (iVar4 == 0x6e94eff3) {
              unaff_x24 = local_170;
              iVar3 = -0x4a189376;
            }
            else if (iVar4 == 0x744d37b1) {
              puVar7 = (undefined *)0xffffffffffffffff;
              iVar3 = -0x3d1dcc93;
            }
            else if (iVar4 == 0x7486da60) {
              unaff_x24 = (undefined *)0xffffffffffffffff;
              iVar3 = -0x53fba64c;
            }
          }
          if (iVar4 < -0x2bd428b5) break;
          if (iVar4 == -0x2bd428b5) {
            local_170 = (undefined *)0xffffffffffffffff;
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                      (&DAT_00200060,5,&DAT_00204754,&DAT_00200060);
            iVar4 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5f0)])
                              (auStack_15f,&DAT_00200060,&local_170);
            iVar3 = 0x6e94eff3;
            if (iVar4 != 1) {
              iVar3 = -0x4a189376;
            }
          }
          else {
            iVar3 = -0x53fba64c;
            if ((iVar4 != 0x7b5a4bf) && (iVar3 = iVar4, iVar4 == 0x959b46c)) {
              iVar3 = iVar1;
            }
          }
        }
        if (iVar4 != -0x53fba64c) break;
        lVar6 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b589)])
                          (auStack_168,0x100,lVar5);
        iVar3 = 0x29159cbf;
        if (lVar6 != 0) {
          iVar3 = 0x2e096b77;
        }
      }
      if (iVar4 != -0x4a189376) break;
      iVar3 = 0x29159cbf;
    }
  } while (iVar4 != -0x3d1dcc93);
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar7;
}


