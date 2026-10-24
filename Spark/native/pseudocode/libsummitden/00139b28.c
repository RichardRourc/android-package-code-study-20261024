// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00139b28; body: [[00139b28, 0013a07b]]

uint FUN_00139b28(ulong param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  long unaff_x22;
  ulong unaff_x23;
  ulong unaff_x25;
  ulong unaff_x26;
  uint local_7c;
  long local_78;
  ulong uStack_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  lVar5 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371f7)])();
  iVar1 = 0x1c0ed577;
  if (param_2 != 0) {
    iVar1 = 0x1d7aad28;
  }
  iVar2 = 0x1c0ed577;
  if (param_1 != 0) {
    iVar2 = -0x7aee4ba2;
  }
  uVar8 = param_1;
  iVar4 = -0x37f2d4c;
LAB_00139c34:
  while( true ) {
    iVar6 = iVar4;
    iVar4 = iVar6;
    if (-0x37f2d4d < iVar6) break;
    if (iVar6 < -0x32e0a2da) {
      if (iVar6 < -0x4f9070c5) {
        iVar4 = iVar1;
        if (iVar6 != -0x7aee4ba2) {
          if (iVar6 == -0x6b243992) {
            iVar4 = 0x7314df67;
            if ((int)uVar8 != 0) goto LAB_0013a03c;
          }
          else {
            iVar4 = iVar6;
            if (iVar6 == -0x56330cbe) {
              unaff_x25 = 0;
              iVar4 = -0x1d500966;
            }
          }
        }
      }
      else if (iVar6 == -0x4f9070c5) {
        unaff_x26 = unaff_x26 + 1;
        iVar4 = 0x314ead34;
      }
      else if (iVar6 == -0x36bd2b19) {
        uVar8 = 1;
        local_7c = 1;
        iVar4 = -0x6b243992;
      }
      else if (iVar6 == -0x4bed4c54) {
LAB_0013a03c:
        if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return local_7c & 1;
      }
    }
    else if (iVar6 < -0x1d500966) {
      if (iVar6 == -0x32e0a2da) {
        uVar8 = 4;
        iVar4 = -0x239d5d6;
      }
      else if (iVar6 == -0x24fc549a) {
        uVar8 = 0;
        unaff_x25 = unaff_x22 + unaff_x25;
        iVar4 = 0x7a2bd2f9;
      }
      else if (iVar6 == -0x235231a9) {
        uVar7 = unaff_x23 ^ unaff_x23 >> 0xc;
        uVar7 = uVar7 ^ uVar7 << 0x19;
        unaff_x23 = uVar7 ^ uVar7 >> 0x1b;
        *(char *)(param_1 + unaff_x26) = (char)(unaff_x23 * 0x2545f4914f6cdd1d >> 0x38);
        iVar4 = -0x4f9070c5;
      }
    }
    else if (iVar6 == -0x1d500966) {
      iVar4 = -0x945142a;
      if (param_2 <= unaff_x25) {
        iVar4 = 0x4edb8158;
      }
    }
    else {
      iVar4 = -0x1d500966;
      if ((iVar6 != -0x1930eda3) && (iVar4 = iVar6, iVar6 == -0x945142a)) {
        unaff_x22 = (**(code **)(lVar5 + 0x60))(param_1 + unaff_x25,param_2 - unaff_x25,0);
        iVar4 = 0x48dd4dfd;
        if (0 < unaff_x22) {
          iVar4 = -0x24fc549a;
        }
      }
    }
  }
  if (iVar6 < 0x482385ff) {
    if (iVar6 < 0x1c0ed577) {
      iVar4 = iVar2;
      if ((iVar6 != -0x37f2d4c) && (iVar4 = iVar6, iVar6 == -0x239d5d6)) {
        uVar8 = 1;
        local_7c = 1;
        iVar4 = -0x4bed4c54;
      }
    }
    else if (iVar6 == 0x1c0ed577) {
      local_7c = 0;
      uVar8 = 1;
      iVar4 = -0x4bed4c54;
    }
    else if (iVar6 == 0x1d7aad28) {
      iVar4 = 0x7314df67;
      if (*(long *)(lVar5 + 0x60) != 0) {
        iVar4 = -0x56330cbe;
      }
    }
    else if ((iVar6 == 0x314ead34) && (iVar4 = -0x235231a9, param_2 <= unaff_x26)) {
      iVar4 = -0x32e0a2da;
    }
    goto LAB_00139c34;
  }
  if (iVar6 < 0x5d4cb940) {
    iVar4 = 0x7314df67;
    if (iVar6 == 0x482385ff) goto LAB_00139c34;
    if (iVar6 == 0x48dd4dfd) {
      uVar8 = 3;
      iVar4 = 0x7a2bd2f9;
      goto LAB_00139c34;
    }
    iVar4 = iVar6;
    if (iVar6 != 0x4edb8158) goto LAB_00139c34;
  }
  else {
    if (iVar6 == 0x5d4cb940) {
      uVar8 = 0;
      iVar4 = -0x6b243992;
      goto LAB_00139c34;
    }
    if (iVar6 == 0x7314df67) {
      local_78 = 0;
      uStack_70 = 0;
      (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371ba)])(1,&local_78);
      unaff_x23 = param_2 * -0x61c8864680b583eb ^ param_1 ^ uStack_70 ^ local_78 << 0x20;
      unaff_x26 = 0;
      iVar4 = 0x314ead34;
      goto LAB_00139c34;
    }
    if ((iVar6 != 0x7a2bd2f9) || (iVar4 = -0x1d500966, (int)uVar8 == 0)) goto LAB_00139c34;
  }
  iVar4 = -0x36bd2b19;
  if (param_2 != unaff_x25) {
    iVar4 = 0x5d4cb940;
  }
  goto LAB_00139c34;
}


