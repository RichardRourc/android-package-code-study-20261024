// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0018c67c; body: [[0018c67c, 0018cc3f]]

uint FUN_0018c67c(void)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  code *pcVar4;
  uint unaff_w27;
  ulong unaff_x28;
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
            (&DAT_001ffa01,0xc,&DAT_002045b8,&DAT_001ffa01);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5ae)])(auStack_98,&DAT_001ffa01);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5ac)])(auStack_80,auStack_98);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_98);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
            (&DAT_001fff7b,9,&DAT_00204708,&DAT_001fff7b);
  pcVar4 = (code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5af)];
  iVar3 = -0x2c5722b4;
LAB_0018c7e8:
  while( true ) {
    if (iVar3 < -0x1cbde46) break;
    if (iVar3 < 0x5cac8dce) {
      if (iVar3 < 0x5986aed0) {
        if (iVar3 == -0x1cbde46) {
          uVar2 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5e5)])();
          unaff_x28 = uVar2 & 0xffffffff;
          iVar3 = -0x2c464be4;
        }
        else if (iVar3 == 0x318e2d43) {
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_80);
          if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return unaff_w27 & 1;
        }
      }
      else if ((iVar3 == 0x5986aed0) || (iVar3 == 0x5a442feb)) goto LAB_0018c7dc;
    }
    else if (iVar3 < 0x6c9ca76d) {
      if (iVar3 == 0x5cac8dce) {
        uVar2 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5a8)])();
        iVar3 = -0xa5a55e3;
        if ((uVar2 & 1) == 0) {
          iVar3 = 0x6f35c208;
        }
      }
      else if (iVar3 == 0x651eb52e) {
        uVar2 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5ab)])();
        iVar3 = -0x7f315797;
        if ((uVar2 & 1) == 0) {
          iVar3 = 0x5cac8dce;
        }
      }
    }
    else if (iVar3 == 0x6c9ca76d) {
      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                (&DAT_001fff84,7,&DAT_0020470c,&DAT_001fff84);
      uVar2 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5af)])
                        (auStack_80,&DAT_001fff84);
      iVar3 = -0xf58e336;
      if ((uVar2 & 1) == 0) {
        iVar3 = 0x651eb52e;
      }
    }
    else if (iVar3 == 0x6f35c208) {
      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b0)])(auStack_c8);
      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5ac)])(auStack_b0,auStack_c8);
      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                (&DAT_001fff8b,9,&DAT_00204710,&DAT_001fff8b);
      uVar2 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5af)])
                        (auStack_b0,&DAT_001fff8b);
      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_b0);
      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_c8);
      iVar3 = 0x5986aed0;
      if ((uVar2 & 1) == 0) {
        iVar3 = -0xadfe545;
      }
    }
  }
  if (iVar3 < -0x2c464be4) {
    if (iVar3 != -0x7f315797) {
      if (iVar3 == -0x790187e4) {
        unaff_w27 = 0;
        iVar3 = 0x318e2d43;
      }
      else if (iVar3 == -0x2c5722b4) {
        uVar2 = (*pcVar4)(auStack_80,&DAT_001fff7b);
        iVar3 = -0xf58e336;
        if ((uVar2 & 1) == 0) {
          iVar3 = 0x6c9ca76d;
        }
      }
      goto LAB_0018c7e8;
    }
  }
  else if (iVar3 < -0xadfe545) {
    if (iVar3 == -0x2c464be4) {
      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_e0);
      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_f8);
      iVar3 = 0x5a442feb;
      if ((unaff_x28 & 1) == 0) {
        iVar3 = -0x790187e4;
      }
      goto LAB_0018c7e8;
    }
    if (iVar3 != -0xf58e336) goto LAB_0018c7e8;
  }
  else {
    if (iVar3 == -0xadfe545) {
      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                (&DAT_001fff94,0xe,&DAT_00204714,&DAT_001fff94);
      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5ae)])(auStack_f8,&DAT_001fff94);
      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5ac)])(auStack_e0,auStack_f8);
      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                (&DAT_001fffa2,5,&DAT_00204718,&DAT_001fffa2);
      uVar2 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5af)])
                        (auStack_e0,&DAT_001fffa2);
      unaff_x28 = 0;
      iVar3 = -0x1cbde46;
      if ((uVar2 & 1) == 0) {
        iVar3 = -0x2c464be4;
      }
      goto LAB_0018c7e8;
    }
    if (iVar3 != -0xa5a55e3) goto LAB_0018c7e8;
  }
LAB_0018c7dc:
  unaff_w27 = 1;
  iVar3 = 0x318e2d43;
  goto LAB_0018c7e8;
}


