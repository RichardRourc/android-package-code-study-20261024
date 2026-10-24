// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 00119890; body: [[00119890, 00119aa3]]

void FUN_00119890(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong local_80;
  int local_6c;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_6c = 0;
  lVar3 = 0x157086f9ee3133f8;
LAB_00119984:
  while (0xc1c0014a1a704da < lVar3) {
    if (lVar3 < 0x157086f9ee3133f8) {
      if (lVar3 == 0xc1c0014a1a704db) {
        lVar3 = 0xf43df37eaa34fc3;
      }
      else if ((lVar3 == 0xf43df37eaa34fc3) && (lVar3 = -0x60cd3c82222442fc, local_6c != 0)) {
        lVar3 = 0x7442e424f0576cd;
      }
    }
    else if (lVar3 == 0x4d931f56eb957c5a) {
      FUN_002083ac(param_1 + 0x20,0x2f);
      *(ulong *)(param_1 + 0x238) = *(ulong *)(param_1 + 0x238) | 1;
      lVar3 = 0xf43df37eaa34fc3;
    }
    else if ((lVar3 == 0x157086f9ee3133f8) &&
            (uVar2 = FUN_001b6390(&local_6c,PTR_PTR_00217b70), lVar3 = 0x4d931f56eb957c5a,
            (uVar2 & 1) == 0)) {
      lVar3 = 0xc1c0014a1a704db;
    }
  }
  if (lVar3 != -0x60cd3c82222442fc) goto code_r0x001199bc;
  local_80 = *(ulong *)(param_1 + 0x238);
  goto LAB_00119a40;
code_r0x001199bc:
  if (lVar3 == -0x4896bab554a0dae9) {
    *(ulong *)(param_1 + 0x238) = local_80 | 0x800800000000000;
    if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
  if (lVar3 == 0x7442e424f0576cd) {
    FUN_002083ac(param_1 + 0x20,0x3b);
    local_80 = *(ulong *)(param_1 + 0x238) | 1;
LAB_00119a40:
    lVar3 = -0x4896bab554a0dae9;
  }
  goto LAB_00119984;
}


