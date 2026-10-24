// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001a4c60; body: [[001a4c60, 001a50ff]]

void FUN_001a4c60(undefined8 param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  code *pcVar6;
  ulong unaff_x28;
  ulong local_78;
  long local_70;
  
  pcVar6 = (code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b1)];
  iVar1 = -0x55449a2a;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (iVar5 = iVar1, iVar1 = iVar5, iVar5 < -0xf656c87) {
            if (iVar5 < -0x5154e737) {
              iVar1 = 0x1a7e7f3e;
              if (iVar5 != -0x6ca1bfb0) {
                if (iVar5 == -0x5556ea2d) {
                  lVar4 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b581)])(param_1);
                  local_70 = lVar4 - unaff_x28;
                  iVar1 = 0x2be181d3;
                }
                else {
                  iVar1 = iVar5;
                  if (iVar5 == -0x55449a2a) {
                    uVar2 = (*pcVar6)(param_1);
                    iVar1 = -0x6ca1bfb0;
                    if ((uVar2 & 1) == 0) {
                      iVar1 = -0x2bfe08c2;
                    }
                  }
                }
              }
            }
            else if (iVar5 == -0x5154e737) {
              (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                        (&DAT_00201194,0x10,&DAT_00204bb8,&DAT_00201194);
              (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                        (&DAT_002011e2,0xf,&DAT_00204bc4,&DAT_002011e2);
              (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b57b)])
                        (4,&DAT_00201194,&DAT_002011e2);
              iVar1 = 0x1a7e7f3e;
            }
            else if (iVar5 == -0x3ef95344) {
              iVar1 = -0x5154e737;
            }
            else if (iVar5 == -0x2bfe08c2) {
              lVar4 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b581)])(param_1);
              local_78 = (lVar4 + 799U) / 800;
              uVar3 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b581)])(param_1);
              (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                        (&DAT_00201194,0x10,&DAT_00204bb8,&DAT_00201194);
              (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                        (&DAT_002011a4,0x24,&DAT_00204bbc,&DAT_002011a4);
              (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b57b)])
                        (4,&DAT_00201194,&DAT_002011a4,uVar3,local_78);
              unaff_x28 = 0;
              iVar1 = -0xf656c87;
            }
          }
          if (iVar5 < 0x2be181d3) break;
          if (iVar5 == 0x2be181d3) {
            lVar4 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b50d)])(param_1);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                      (&DAT_00201194,0x10,&DAT_00204bb8,&DAT_00201194);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                      (&DAT_002011c8,0x1a,&DAT_00204bc0,&DAT_002011c8);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b57b)])
                      (4,&DAT_00201194,&DAT_002011c8,unaff_x28 / 800,local_78,local_70,
                       lVar4 + unaff_x28);
            iVar1 = 0x199e35e2;
          }
          else if (iVar5 == 0x750dc647) {
            uVar2 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b581)])(param_1);
            iVar1 = -0x5556ea2d;
            if (unaff_x28 + 800 <= uVar2) {
              iVar1 = 0x75ad9cc3;
            }
          }
          else if (iVar5 == 0x75ad9cc3) {
            local_70 = 800;
            iVar1 = 0x2be181d3;
          }
        }
        if (iVar5 != -0xf656c87) break;
        uVar2 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b581)])(param_1);
        iVar1 = 0x750dc647;
        if (uVar2 <= unaff_x28) {
          iVar1 = -0x3ef95344;
        }
      }
      if (iVar5 != 0x199e35e2) break;
      unaff_x28 = unaff_x28 + 800;
      iVar1 = -0xf656c87;
    }
  } while (iVar5 != 0x1a7e7f3e);
  return;
}


