// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0018ce5c; body: [[0018ce5c, 0018d3d7]]

void FUN_0018ce5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  int iVar7;
  undefined8 local_108;
  undefined8 local_100;
  undefined1 *local_f8;
  undefined1 *puStack_f0;
  undefined1 local_e4 [4];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [48];
  undefined1 auStack_80 [24];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar2 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bb)])();
  uVar3 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bb)])();
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5db)])(auStack_80);
  uVar3 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b2)])(uVar3);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5d8)])(auStack_b0);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5d9)])(auStack_c8);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5de)])(auStack_b0,auStack_80,auStack_c8)
  ;
  uVar4 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bb)])();
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5df)])(param_2,param_3,auStack_b0);
  uVar4 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b2)])(uVar4);
  uVar2 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b2)])(uVar2);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
            (&DAT_001fffa7,2,&DAT_0020471c,&DAT_001fffa7);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b59f)])(auStack_e0,&DAT_001fffa7);
  local_f8 = local_e4;
  local_e4[0] = 1;
  puStack_f0 = auStack_e0;
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
            (&DAT_001fffa9,10,&DAT_00204720,&DAT_001fffa9);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5dc)])(&local_f8,&DAT_001fffa9,uVar3);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
            (&DAT_001fffb3,8,&DAT_00204724,&DAT_001fffb3);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5dc)])(&local_f8,&DAT_001fffb3,uVar4);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
            (&DAT_001fffbb,9,&DAT_00204728,&DAT_001fffbb);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5dc)])(&local_f8,&DAT_001fffbb,uVar2);
  local_100 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5dd)])(auStack_c8);
  local_108 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5d2)])(auStack_c8);
  iVar7 = 0x37ca5b31;
  while( true ) {
    while( true ) {
      while (iVar7 < 0x4368c53d) {
        if (iVar7 == -0x159582cb) {
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                    (&DAT_001fffc4,2,&DAT_0020472c,&DAT_001fffc4);
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b591)])(auStack_e0,&DAT_001fffc4)
          ;
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                    (&DAT_001fffc6,8,&DAT_00204730,&DAT_001fffc6);
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5d6)])
                    (auStack_b0,&DAT_001fffc6,auStack_e0);
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5d7)])(param_1,auStack_b0);
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5d4)])(param_1);
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5d5)])(auStack_80);
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5d5)])(auStack_e0);
          iVar7 = 0x7f50e301;
        }
        else if (iVar7 == -0x11fb0093) {
          iVar7 = -0x159582cb;
        }
        else {
          uVar6 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5d3)])
                            (&local_100,&local_108);
          iVar7 = 0x4368c53d;
          if ((uVar6 & 1) == 0) {
            iVar7 = -0x11fb0093;
          }
        }
      }
      if (iVar7 != 0x4368c53d) break;
      lVar5 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5d0)])(&local_100);
      uVar2 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5f3)])();
      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5dc)])
                (&local_f8,uVar2,*(undefined8 *)(lVar5 + 0x18));
      iVar7 = 0x60446518;
    }
    if (iVar7 != 0x60446518) break;
    (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5d1)])(&local_100);
    iVar7 = 0x37ca5b31;
  }
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_e0);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5ca)])(auStack_c8);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5cb)])(auStack_b0);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_80);
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


