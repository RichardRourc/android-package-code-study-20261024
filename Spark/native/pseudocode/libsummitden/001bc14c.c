// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001bc14c; body: [[001bc14c, 001bc57f]]

void FUN_001bc14c(undefined8 param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  uint local_70;
  char local_6c [4];
  long local_68;
  
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  uVar13 = (ulong)param_3;
  lVar7 = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa37)])();
  uVar8 = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa06)])(param_2);
  local_6c[0] = '\x01';
  uVar9 = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa2f)])
                    (lVar7,uVar8,uVar13,local_6c);
  iVar2 = -0x13cdf589;
  if (param_3 + 0x60 <= uVar8) {
    iVar2 = -0x1e007a52;
  }
  lVar1 = lVar7 + (ulong)param_3;
  iVar3 = 0x2356eb55;
  if ((uVar9 & 0x10000) != 0) {
    iVar3 = 0x46e91093;
  }
  iVar4 = -0x4c256cbb;
  if (local_6c[0] == '\0') {
    iVar4 = 0x79021eac;
  }
  iVar6 = -0x3091322;
LAB_001bc2e0:
  do {
    while (iVar11 = iVar6, iVar6 = iVar11, -0x3091323 < iVar11) {
      if (iVar11 < 0x46e91093) {
        iVar6 = iVar4;
        if (iVar11 != -0x3091322) {
          if (iVar11 == 0x167b35c2) {
            (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa0f)])(param_1);
            iVar6 = -0x746ae32e;
          }
          else {
            iVar6 = iVar11;
            if (iVar11 == 0x2356eb55) {
              iVar6 = iVar2;
            }
          }
        }
      }
      else if (iVar11 < 0x77706031) {
        if (iVar11 == 0x46e91093) {
          local_70 = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa2f)])
                               (lVar7,uVar8,param_3 + 4,local_6c);
          iVar6 = 0x77706031;
          if (local_6c[0] == '\0') {
            iVar6 = 0x167b35c2;
          }
        }
        else if (iVar11 == 0x64e64621) {
          uVar10 = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28cab1e)])
                             (lVar7 + uVar13,uVar8 - uVar13);
          (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28cab1d)])
                    (param_1,lVar7 + uVar13,uVar10);
          iVar6 = -0x6d606518;
        }
      }
      else if (iVar11 == 0x77706031) {
        uVar13 = (ulong)param_3 + (ulong)local_70;
        iVar6 = 0x64e64621;
        if (uVar8 <= uVar13) {
          iVar6 = -0x3e9add68;
        }
      }
      else {
        iVar12 = 0x79021eac;
LAB_001bc43c:
        if (iVar11 == iVar12) {
          (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa0f)])(param_1);
          iVar6 = -0x43b0df0a;
        }
      }
    }
    if (iVar11 < -0x43b0df0a) {
      iVar6 = -0x43b0df0a;
      if (((iVar11 != -0x746ae32e) && (iVar6 = -0x746ae32e, iVar11 != -0x6d606518)) &&
         (iVar6 = iVar11, iVar11 == -0x4c256cbb)) {
        iVar6 = iVar3;
      }
      goto LAB_001bc2e0;
    }
    if (iVar11 < -0x1e007a52) {
      if (iVar11 == -0x3e9add68) {
        (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa0f)])(param_1);
        iVar6 = -0x6d606518;
      }
      else if (iVar11 == -0x43b0df0a) {
        if (*(long *)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
    }
    else {
      if (iVar11 != -0x1e007a52) {
        iVar12 = -0x13cdf589;
        goto LAB_001bc43c;
      }
      uVar10 = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28cab1e)])(lVar1 + 4,0x5c);
      (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28cab1d)])(param_1,lVar1 + 4,uVar10);
      iVar6 = -0x43b0df0a;
    }
  } while( true );
}


