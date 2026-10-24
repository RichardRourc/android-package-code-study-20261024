// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 001b0700; body: [[001b0700, 001b0a3f]]

undefined4 FUN_001b0700(long param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined1 *puVar8;
  long unaff_x21;
  undefined4 unaff_w22;
  int local_6c;
  long local_68;
  
  lVar4 = DAT_0021fa98;
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  puVar1 = &DAT_9e2090a1498a3988;
  if (DAT_0021fa98 != 0) {
    puVar1 = (undefined1 *)0x5ef7b9568d6b3c0a;
  }
  puVar2 = (undefined1 *)0x5602aba7b2fd1776;
  if (DAT_0021fa90 < 0x1c || DAT_0021fa98 != 0) {
    puVar2 = (undefined1 *)0xb2d9bc6161ff7d2e;
  }
  local_6c = 0;
  lVar5 = param_1;
  puVar6 = (undefined1 *)0xcbd3ad62bd885e21;
LAB_001b080c:
  do {
    while (puVar8 = puVar6, lVar7 = lVar5, lVar5 = lVar7, 0x225f8dd9081ebc42 < (long)puVar8) {
      if ((long)puVar8 < 0x5602aba7b2fd1776) {
        if (puVar8 == (undefined1 *)0x225f8dd9081ebc43) {
          unaff_w22 = __system_property_get(param_1,param_2);
LAB_001b07f4:
          puVar6 = (undefined1 *)0x9069f9d096a544a9;
        }
        else {
          puVar6 = puVar8;
          if (puVar8 == (undefined1 *)0x255edd958a6bac09) {
            puVar6 = (undefined1 *)0x225f8dd9081ebc43;
          }
        }
      }
      else if (puVar8 == (undefined1 *)0x5602aba7b2fd1776) {
        unaff_x21 = FUN_001af584(&local_6c);
        puVar6 = (undefined1 *)0x700353e7f52f2541;
        DAT_0021fa98 = unaff_x21;
        if (unaff_x21 == 0 || local_6c != 0) {
          puVar6 = (undefined1 *)0x255edd958a6bac09;
        }
      }
      else {
        lVar5 = lVar4;
        puVar6 = (undefined1 *)0xf237c2013c1c6fa2;
        if ((puVar8 != (undefined1 *)0x5ef7b9568d6b3c0a) &&
           (lVar5 = lVar7, puVar6 = puVar8, puVar8 == (undefined1 *)0x700353e7f52f2541)) {
          lVar5 = unaff_x21;
          puVar6 = (undefined1 *)0xf237c2013c1c6fa2;
        }
      }
    }
    if (-0x342c529d4277a1e0 < (long)puVar8) {
      puVar6 = puVar2;
      if ((puVar8 != (undefined1 *)0xcbd3ad62bd885e21) &&
         (puVar6 = puVar8, puVar8 == (undefined1 *)0xf237c2013c1c6fa2)) {
        unaff_w22 = FUN_001afc50(lVar7,param_1,param_2);
        goto LAB_001b07f4;
      }
      goto LAB_001b080c;
    }
    puVar6 = (undefined1 *)0x225f8dd9081ebc43;
    if (((puVar8 != &DAT_9e2090a1498a3988) &&
        (puVar6 = puVar1, puVar8 != (undefined1 *)0xb2d9bc6161ff7d2e)) &&
       (puVar6 = puVar8, puVar8 == (undefined1 *)0x9069f9d096a544a9)) {
      if (*(long *)(lVar3 + 0x28) == local_68) {
        return unaff_w22;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  } while( true );
}


