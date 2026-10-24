// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001895ac; body: [[001895ac, 0018a2bb]]

byte FUN_001895ac(void)

{
  long lVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  code *pcVar6;
  int iVar7;
  int unaff_w24;
  uint local_170;
  byte local_16c;
  uint local_164;
  uint local_160;
  uint local_15c;
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
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
            (&DAT_001ffa2c,0x11,&DAT_002045c8,&DAT_001ffa2c);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5ae)])(auStack_c8,&DAT_001ffa2c);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5ac)])(auStack_b0,auStack_c8);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_c8);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
            (&DAT_001ffa14,0x11,&DAT_002045c0,&DAT_001ffa14);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5ae)])(auStack_f8,&DAT_001ffa14);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5ac)])(auStack_e0,auStack_f8);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_f8);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
            (&DAT_001ff7dd,0x12,&DAT_00204538,&DAT_001ff7dd);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5ae)])(auStack_128,&DAT_001ff7dd);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5ac)])(auStack_110,auStack_128);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_128);
  uVar4 = 0;
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
            (&DAT_001ffa52,0x15,&DAT_002045d4,&DAT_001ffa52);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5ae)])(auStack_158,&DAT_001ffa52);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5ac)])(auStack_140,auStack_158);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_158);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
            (&DAT_001fff7b,9,&DAT_00204708,&DAT_001fff7b);
  pcVar6 = (code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5af)];
  iVar5 = -0x357dcd44;
LAB_001898c4:
  iVar7 = iVar5;
  iVar5 = iVar7;
  if (iVar7 < 0xec73eaa) {
    if (-0x28bd83be < iVar7) {
      if (iVar7 < -0x9658d5f) {
        if (iVar7 < -0x1791fcdd) {
          if (iVar7 == -0x28bd83bd) {
            local_15c = 1;
            iVar5 = -0x1791fcdd;
          }
          else if (iVar7 == -0x1e936786) {
            local_16c = true;
LAB_00189f18:
            iVar5 = 0xc75a328;
          }
        }
        else {
          iVar5 = 0x149e1df6;
          if ((iVar7 != -0x1791fcdd) && (iVar5 = iVar7, iVar7 == -0x14cd6573)) {
            iVar5 = 0x3135168f;
            if ((uVar4 & 1) == 0) {
              iVar5 = 0x270d0404;
            }
          }
        }
      }
      else if (iVar7 < 0x7d7b508) {
        if (iVar7 == -0x9658d5f) {
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                    (&DAT_002000a1,4,&DAT_00204770,&DAT_002000a1);
          uVar3 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5ad)])
                            (auStack_b0,&DAT_002000a1);
          iVar5 = 0x53b8f0b0;
          if ((uVar3 & 1) == 0) {
            iVar5 = -0x1791fcdd;
          }
        }
        else if (iVar7 == 0x5da0bb5) {
          local_15c = 1;
          iVar5 = 0x149e1df6;
        }
      }
      else {
        if (iVar7 == 0x7d7b508) {
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                    (&DAT_001ff7d4,9,&DAT_00204534,&DAT_001ff7d4);
          uVar3 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5ad)])
                            (auStack_b0,&DAT_001ff7d4);
          bVar2 = (uVar3 & 1) == 0;
          iVar5 = 0x5da0bb5;
          iVar7 = 0x10330ff2;
          goto LAB_001898c0;
        }
        if (iVar7 == 0xc75a328) {
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_140);
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_110);
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_e0);
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_b0);
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_80);
          if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return local_16c & 1;
        }
      }
      goto LAB_001898c4;
    }
    if (iVar7 < -0x538939e0) {
      if (iVar7 < -0x6279eeb6) {
        if (iVar7 == -0x77100acb) {
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                    (&DAT_00200097,10,&DAT_0020476c,&DAT_00200097);
          uVar3 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5ad)])
                            (auStack_b0,&DAT_00200097);
          iVar5 = 0x5da0bb5;
          if ((uVar3 & 1) == 0) {
            iVar5 = -0x9658d5f;
          }
        }
        else if (iVar7 == -0x7407b6c8) {
          unaff_w24 = 0;
          iVar5 = -0x538939e0;
          if ((local_164 & 1) == 0) {
            iVar5 = -0x14cd6573;
          }
        }
      }
      else if (iVar7 == -0x6279eeb6) {
        iVar5 = 0x5e501cad;
        if ((local_15c & 1) == 0) {
          iVar5 = 0x588b6a3e;
        }
      }
      else if (iVar7 == -0x5eb1295b) {
        iVar5 = -0x28bd83bd;
        if ((local_160 & 1) == 0) {
          iVar5 = -0x1791fcdd;
        }
      }
      goto LAB_001898c4;
    }
    if (-0x31227e87 < iVar7) {
      if (iVar7 == -0x31227e86) {
        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                  (&DAT_001fff84,7,&DAT_0020470c,&DAT_001fff84);
        uVar3 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5af)])
                          (auStack_80,&DAT_001fff84);
        bVar2 = (uVar3 & 1) == 0;
        iVar5 = -0x1e936786;
        iVar7 = 0x36edf66a;
        goto LAB_001898c0;
      }
      if (iVar7 == -0x2e593e6c) {
        local_16c = 1 < unaff_w24;
        goto LAB_00189f18;
      }
      goto LAB_001898c4;
    }
    if (iVar7 == -0x538939e0) {
      unaff_w24 = unaff_w24 + 1;
      iVar5 = -0x14cd6573;
      goto LAB_001898c4;
    }
    if (iVar7 != -0x357dcd44) goto LAB_001898c4;
    uVar3 = (*pcVar6)(auStack_80,&DAT_001fff7b);
    bVar2 = (uVar3 & 1) == 0;
    iVar5 = -0x1e936786;
    iVar7 = -0x31227e86;
  }
  else if (iVar7 < 0x43c9e4bb) {
    if (iVar7 < 0x1c68148e) {
      if (iVar7 < 0x148ccbd2) {
        if (iVar7 == 0xec73eaa) {
          unaff_w24 = unaff_w24 + 1;
          iVar5 = -0x6279eeb6;
          goto LAB_001898c4;
        }
        if (iVar7 != 0x10330ff2) goto LAB_001898c4;
        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                  (&DAT_00200075,0xc,&DAT_00204760,&DAT_00200075);
        uVar3 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5ad)])
                          (auStack_b0,&DAT_00200075);
        bVar2 = (uVar3 & 1) == 0;
        iVar5 = 0x5da0bb5;
        iVar7 = 0x7c2989a6;
      }
      else {
        if (iVar7 != 0x148ccbd2) {
          if (iVar7 == 0x149e1df6) {
            iVar5 = -0x7407b6c8;
          }
          goto LAB_001898c4;
        }
        bVar2 = (uVar4 & 1) == 0;
        iVar5 = -0x28bd83bd;
        iVar7 = -0x5eb1295b;
      }
    }
    else if (iVar7 < 0x3135168f) {
      if (iVar7 != 0x1c68148e) {
        if (iVar7 == 0x270d0404) {
          iVar5 = 0xec73eaa;
          if ((local_160 & 1) == 0) {
            iVar5 = -0x6279eeb6;
          }
        }
        goto LAB_001898c4;
      }
      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                (&DAT_0020008c,0xb,&DAT_00204768,&DAT_0020008c);
      uVar3 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5ad)])
                        (auStack_b0,&DAT_0020008c);
      bVar2 = (uVar3 & 1) == 0;
      iVar5 = 0x5da0bb5;
      iVar7 = -0x77100acb;
    }
    else {
      if (iVar7 == 0x3135168f) {
        unaff_w24 = unaff_w24 + 1;
        iVar5 = 0x270d0404;
        goto LAB_001898c4;
      }
      if (iVar7 != 0x36edf66a) goto LAB_001898c4;
      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                (&DAT_00200065,8,&DAT_00204758,&DAT_00200065);
      local_164 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5af)])
                            (auStack_e0,&DAT_00200065);
      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                (&DAT_0020006d,8,&DAT_0020475c,&DAT_0020006d);
      local_170 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5af)])
                            (auStack_e0,&DAT_0020006d);
      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                (&DAT_00200065,8,&DAT_00204758,&DAT_00200065);
      uVar4 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5ad)])
                        (auStack_110,&DAT_00200065);
      uVar4 = uVar4 & 0xffffffff;
      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                (&DAT_00200065,8,&DAT_00204758,&DAT_00200065);
      local_160 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5ad)])
                            (auStack_140,&DAT_00200065);
      uVar3 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b1)])(auStack_b0);
      local_15c = 0;
      bVar2 = (uVar3 & 1) == 0;
      iVar5 = -0x7407b6c8;
      iVar7 = 0x7d7b508;
    }
  }
  else if (iVar7 < 0x5e501cad) {
    if (iVar7 < 0x53b8f0b0) {
      if (iVar7 == 0x43c9e4bb) {
        unaff_w24 = unaff_w24 + 1;
        iVar5 = -0x2e593e6c;
        goto LAB_001898c4;
      }
      if (iVar7 != 0x4df49e5f) goto LAB_001898c4;
      bVar2 = (uVar4 & 1) == 0;
      iVar5 = 0x43c9e4bb;
      iVar7 = 0x699b2fc5;
    }
    else {
      if (iVar7 != 0x53b8f0b0) {
        if (iVar7 == 0x588b6a3e) {
          iVar5 = 0x4df49e5f;
          if ((local_170 & 1) == 0) {
            iVar5 = -0x2e593e6c;
          }
        }
        goto LAB_001898c4;
      }
      iVar7 = 0x148ccbd2;
      bVar2 = (local_164 & 1) == 0;
      iVar5 = -0x28bd83bd;
    }
  }
  else {
    if (iVar7 < 0x699b2fc5) {
      if (iVar7 == 0x5e501cad) {
        unaff_w24 = unaff_w24 + 1;
        iVar5 = 0x588b6a3e;
      }
      else if (iVar7 == 0x5e95a1eb) {
        iVar5 = 0x43c9e4bb;
        if ((local_15c & 1) == 0) {
          iVar5 = -0x2e593e6c;
        }
      }
      goto LAB_001898c4;
    }
    if (iVar7 == 0x699b2fc5) {
      iVar7 = 0x5e95a1eb;
      bVar2 = (local_160 & 1) == 0;
      iVar5 = 0x43c9e4bb;
    }
    else {
      if (iVar7 != 0x7c2989a6) goto LAB_001898c4;
      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                (&DAT_00200081,0xb,&DAT_00204764,&DAT_00200081);
      uVar3 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5ad)])
                        (auStack_b0,&DAT_00200081);
      bVar2 = (uVar3 & 1) == 0;
      iVar5 = 0x5da0bb5;
      iVar7 = 0x1c68148e;
    }
  }
LAB_001898c0:
  if (bVar2) {
    iVar5 = iVar7;
  }
  goto LAB_001898c4;
}


