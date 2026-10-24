// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 002063b4; body: [[002063b4, 00206a17]]

uint FUN_002063b4(long param_1)

{
  ulong *puVar1;
  long lVar2;
  ulong *puVar3;
  ulong *puVar4;
  long lVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong unaff_x19;
  ulong unaff_x22;
  ulong *unaff_x23;
  long unaff_x26;
  long local_b8;
  ulong *local_b0;
  ulong local_a8;
  long local_a0;
  ulong local_98;
  long local_90;
  ulong local_88;
  long local_80;
  uint local_74;
  ulong local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  puVar8 = *(ulong **)PTR_PTR_00217b78;
  puVar1 = (ulong *)0x125dd2cc844aecb4;
  if (puVar8 != (ulong *)0x0) {
    puVar1 = (ulong *)&DAT_f615808441b1dafc;
  }
  puVar3 = (ulong *)&DAT_f615808441b1dafc;
  puVar4 = (ulong *)0x887e73b2c28c6a1;
LAB_00206564:
  while( true ) {
    puVar9 = puVar4;
    puVar6 = puVar3;
    lVar5 = param_1;
    param_1 = lVar5;
    puVar3 = puVar6;
    puVar4 = puVar9;
    if (0x887e73b2c28c6a0 < (long)puVar9) break;
    if ((long)puVar9 < -0xab3a208b03543bf) {
      if ((long)puVar9 < -0x3dc07bfa902cf42a) {
        puVar4 = (ulong *)0xf6c71d76f8b48eb9;
        if ((puVar9 != (ulong *)0xaa46adf0a78af8c7) &&
           (puVar4 = puVar9, puVar9 == (ulong *)0xbf711ec4fafe862e)) {
LAB_002067f4:
          puVar4 = (ulong *)0x1cba5f82f77e481f;
        }
      }
      else if (puVar9 == (ulong *)0xc23f84056fd30bd6) {
        local_74 = 1;
LAB_00206820:
        puVar4 = (ulong *)0xc89737e2f8768a05;
      }
      else if (puVar9 == (ulong *)0xd222672a639a1d2e) {
        local_b8 = local_80;
        puVar4 = (ulong *)0xf63b36e7a9d9f670;
        unaff_x19 = unaff_x22;
        if (local_88 <= unaff_x22) {
          puVar4 = (ulong *)0xaa46adf0a78af8c7;
        }
      }
      else if (puVar9 == (ulong *)0xc89737e2f8768a05) {
        if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return local_74 & 1;
      }
    }
    else if ((long)puVar9 < -0x9c4c91856260990) {
      puVar4 = (ulong *)0xf6c71d76f8b48eb9;
      if ((puVar9 != (ulong *)0xf54c5df74fcabc41) &&
         (puVar4 = puVar9, puVar9 == (ulong *)&DAT_f615808441b1dafc)) {
        param_1 = 0;
        puVar3 = puVar8;
        puVar4 = (ulong *)0x696b554ab6b2c8c5;
      }
    }
    else if (puVar9 == (ulong *)0xf63b36e7a9d9f670) {
      local_70 = 0;
      uVar7 = local_88 - unaff_x19;
      if (7 < uVar7) {
        uVar7 = 8;
      }
      __memcpy_chk(&local_70,unaff_x19,uVar7,8);
      puVar4 = (ulong *)0xc23f84056fd30bd6;
      if ((local_70 & 0xfffffc1fff000000) != 0xd61f000058000000) {
        puVar4 = (ulong *)0xf54c5df74fcabc41;
      }
    }
    else if (puVar9 == (ulong *)0xf6c71d76f8b48eb9) {
      local_a0 = local_b8 + 1;
      local_a8 = local_b0[local_a0];
      puVar4 = (ulong *)0xbf711ec4fafe862e;
      if (local_a8 != 0) {
        puVar4 = (ulong *)0x6b5051bf1aed633d;
      }
    }
  }
  if ((long)puVar9 < 0x312910f1547c7c77) {
    if ((long)puVar9 < 0x1cba5f82f77e481f) {
      puVar4 = puVar1;
      if ((puVar9 != (ulong *)0x887e73b2c28c6a1) &&
         (puVar4 = puVar9, puVar9 == (ulong *)0x125dd2cc844aecb4)) goto LAB_00206810;
      goto LAB_00206564;
    }
    if (puVar9 == (ulong *)0x1cba5f82f77e481f) {
      unaff_x26 = local_90 + 1;
      unaff_x23 = (ulong *)(&PTR_PTR_0021e8c8)[unaff_x26];
      puVar4 = (ulong *)0x312910f1547c7c77;
      if (unaff_x23 != (ulong *)0x0) {
        puVar4 = (ulong *)0x3b36a7a007b21166;
      }
      goto LAB_00206564;
    }
    if (puVar9 != (ulong *)0x2ce2edddaf334d81) goto LAB_00206564;
    local_80 = 0;
    local_88 = *(ulong *)(PTR_PTR_00217b80 + local_90 * 8);
    unaff_x22 = local_98;
  }
  else {
    if ((long)puVar9 < 0x3b36a7a007b21166) {
      if (puVar9 == (ulong *)0x312910f1547c7c77) {
LAB_00206810:
        local_74 = 0;
        goto LAB_00206820;
      }
      if (puVar9 == (ulong *)0x353e7cd16df664a2) goto LAB_002067f4;
      goto LAB_00206564;
    }
    param_1 = unaff_x26;
    puVar3 = unaff_x23;
    puVar4 = (ulong *)0x696b554ab6b2c8c5;
    if (puVar9 == (ulong *)0x3b36a7a007b21166) goto LAB_00206564;
    if (puVar9 == (ulong *)0x696b554ab6b2c8c5) {
      local_98 = *puVar6;
      param_1 = lVar5;
      puVar3 = puVar6;
      puVar4 = (ulong *)0x353e7cd16df664a2;
      local_b0 = puVar6;
      local_90 = lVar5;
      if (local_98 != 0) {
        puVar4 = (ulong *)0x2ce2edddaf334d81;
      }
      goto LAB_00206564;
    }
    param_1 = lVar5;
    puVar3 = puVar6;
    puVar4 = puVar9;
    if (puVar9 != (ulong *)0x6b5051bf1aed633d) goto LAB_00206564;
    local_80 = local_a0;
    unaff_x22 = local_a8;
  }
  param_1 = lVar5;
  puVar3 = puVar6;
  puVar4 = (ulong *)0xd222672a639a1d2e;
  goto LAB_00206564;
}


