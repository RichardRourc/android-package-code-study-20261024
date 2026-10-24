// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0018b7c0; body: [[0018b7c0, 0018bb73]]

undefined8 FUN_0018b7c0(void)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 unaff_x24;
  undefined8 unaff_x28;
  undefined8 local_170;
  undefined1 auStack_168 [13];
  undefined1 auStack_15b [243];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
            (&DAT_001fffdc,2,&DAT_00204738,&DAT_001fffdc);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
            (&DAT_002001bb,0xe,&DAT_002047b0,&DAT_002001bb);
  lVar5 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b588)])
                    (&DAT_002001bb,&DAT_001fffdc);
  iVar1 = -0x1b2383b7;
  if (lVar5 != 0) {
    iVar1 = 0x3ff0f4f1;
  }
  iVar3 = -0x7e18b8ef;
  do {
    while( true ) {
      do {
        while( true ) {
          while (iVar4 = iVar3, iVar3 = iVar4, -0x10f5e5c9 < iVar4) {
            if (iVar4 < 0x31f5495e) {
              if (iVar4 == -0x10f5e5c8) {
                lVar6 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b589)])
                                  (auStack_168,0x100,lVar5);
                iVar3 = -0x48aa9101;
                if (lVar6 != 0) {
                  iVar3 = 0x5bd411e4;
                }
              }
              else if (iVar4 == 0x1857bbce) {
                iVar3 = -0x48aa9101;
              }
            }
            else if (iVar4 == 0x31f5495e) {
              local_170 = 0xffffffffffffffff;
              (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                        (&DAT_00200060,5,&DAT_00204754,&DAT_00200060);
              iVar4 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5f0)])
                                (auStack_15b,&DAT_00200060,&local_170);
              iVar3 = -0x2d326644;
              if (iVar4 != 1) {
                iVar3 = 0x1857bbce;
              }
            }
            else if (iVar4 == 0x3ff0f4f1) {
              unaff_x24 = 0xffffffffffffffff;
              iVar3 = -0x10f5e5c8;
            }
            else if (iVar4 == 0x5bd411e4) {
              (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                        (&DAT_002001d3,0xe,&DAT_002047b8,&DAT_002001d3);
              iVar4 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b58e)])
                                (auStack_168,&DAT_002001d3,0xd);
              iVar3 = 0x31f5495e;
              if (iVar4 != 0) {
                iVar3 = -0x29c33537;
              }
            }
          }
          if (iVar4 < -0x2d326644) break;
          if (iVar4 == -0x2d326644) {
            unaff_x24 = local_170;
            iVar3 = 0x1857bbce;
          }
          else {
            iVar3 = -0x10f5e5c8;
            if ((iVar4 != -0x29c33537) && (iVar3 = iVar4, iVar4 == -0x1b2383b7)) {
              unaff_x28 = 0xffffffffffffffff;
              iVar3 = -0x7a938368;
            }
          }
        }
        iVar3 = iVar1;
      } while (iVar4 == -0x7e18b8ef);
      if (iVar4 != -0x48aa9101) break;
      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b580)])(lVar5);
      unaff_x28 = unaff_x24;
      iVar3 = -0x7a938368;
    }
    iVar3 = iVar4;
  } while (iVar4 != -0x7a938368);
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return unaff_x28;
}


