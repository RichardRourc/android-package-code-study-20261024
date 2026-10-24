// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 001b0420; body: [[001b0420, 001b06f3]]

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001b0420(char *param_1)

{
  long lVar1;
  int iVar2;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar3;
  undefined1 *local_160;
  long *plStack_158;
  undefined8 *puStack_150;
  undefined8 uStack_148;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  long local_70 [2];
  
  lVar1 = tpidr_el0;
  local_70[0] = *(long *)(lVar1 + 0x28);
  lVar3 = -0x3cc2b3d163fe4027;
  local_90 = in_x4;
  local_88 = in_x5;
  uStack_80 = in_x6;
  local_78 = in_x7;
  do {
    while( true ) {
      while (-0x1efbf45246475359 < lVar3) {
        if (lVar3 < 0x332dfd522f05c93c) {
          if (lVar3 == -0x1efbf45246475358) {
            iVar2 = FUN_00212730(0,1,&DAT_0021fa8c);
            lVar3 = -0x28b93f8217cb5d73;
            if (iVar2 != 0) {
              lVar3 = 0x5f3fddf8e2fc9ebc;
            }
          }
          else if (lVar3 == -0x55c949af59ae76f) {
            lVar3 = 0x332dfd522f05c93c;
          }
        }
        else {
          if (lVar3 == 0x332dfd522f05c93c) {
            DAT_0021fa8c = 0;
            puStack_150 = &local_90;
            plStack_158 = local_70;
            uStack_148 = 0xffffff80ffffffe0;
            local_160 = (undefined1 *)register0x00000008;
            iVar2 = vsnprintf(param_1,199,&DAT_0021e7f0,&local_160);
            if (*(long *)(lVar1 + 0x28) != local_70[0]) {
                    /* WARNING: Subroutine does not return */
              __stack_chk_fail(iVar2);
            }
            return;
          }
          if (lVar3 == 0x5f3fddf8e2fc9ebc) goto LAB_001b0590;
        }
      }
      if (lVar3 != -0x4a68ccefe6d06158) break;
      DAT_0021e800 = DAT_0021e800 ^ 0xf0;
      DAT_0021e801 = DAT_0021e801 ^ 0xf0;
      DAT_0021e802 = DAT_0021e802 ^ 0xf0;
      DAT_0021e803 = DAT_0021e803 ^ 0xf0;
      DAT_0021e805 = DAT_0021e805 ^ 0xf0;
      DAT_0021e804 = DAT_0021e804 ^ 0xf0;
      DAT_0021e806 = DAT_0021e806 ^ 0xf0;
      _DAT_0021e7f0 = _DAT_0021e7f0 ^ 0xf0f0f0f0f0f0f0f0;
      uRam000000000021e7f8 = uRam000000000021e7f8 ^ 0xf0f0f0f0f0f0f0f0;
      DAT_0021fa8d = '\x01';
      lVar3 = 0x332dfd522f05c93c;
    }
    if (lVar3 == -0x3cc2b3d163fe4027) {
LAB_001b0590:
      lVar3 = -0x1efbf45246475358;
    }
    else if ((lVar3 == -0x28b93f8217cb5d73) && (lVar3 = -0x55c949af59ae76f, DAT_0021fa8d == '\0')) {
      lVar3 = -0x4a68ccefe6d06158;
    }
  } while( true );
}


