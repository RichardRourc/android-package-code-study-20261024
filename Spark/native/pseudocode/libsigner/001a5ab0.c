// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 001a5ab0; body: [[001a5ab0, 001a5ef7]]

uint FUN_001a5ab0(undefined8 param_1,undefined4 *param_2,long param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int unaff_w21;
  uint unaff_w25;
  int iVar7;
  undefined1 *puVar8;
  int local_7c;
  
  uVar2 = *(uint *)(param_3 + 0xc);
  puVar1 = (undefined1 *)0x125dd2cc844aecb4;
  if ((int)uVar2 < 0x17) {
    puVar1 = &DAT_f615808441b1dafc;
  }
  puVar5 = (undefined1 *)0x125dd2cc844aecb4;
  puVar3 = (undefined1 *)0x887e73b2c28c6a1;
LAB_001a5ba0:
  while( true ) {
    puVar6 = puVar3;
    puVar8 = (undefined1 *)((ulong)puVar5 & 0xffffffff);
    iVar7 = (int)puVar5;
    puVar5 = puVar8;
    puVar3 = puVar6;
    if (-0x938e289074b7148 < (long)puVar6) break;
    if ((long)puVar6 < -0xab3a208b03543bf) {
      if ((long)puVar6 < -0x3dc07bfa902cf42a) {
        if (puVar6 == (undefined1 *)0xaa46adf0a78af8c7) {
          uVar4 = FUN_001a6624(param_1,param_2,param_4,param_5);
          puVar3 = (undefined1 *)0xf63b36e7a9d9f670;
          if ((uVar4 & 1) == 0) {
            puVar3 = (undefined1 *)0xf54c5df74fcabc41;
          }
        }
        else if (puVar6 == (undefined1 *)0xbf711ec4fafe862e) {
          return unaff_w25 & 1;
        }
      }
      else if (puVar6 == (undefined1 *)0xc23f84056fd30bd6) {
        puVar3 = (undefined1 *)0x6b5051bf1aed633d;
        if (0 < unaff_w21) {
          puVar3 = (undefined1 *)0xf6c71d76f8b48eb9;
        }
      }
      else {
        iVar7 = local_7c;
        if (puVar6 == (undefined1 *)0xd222672a639a1d2e) goto LAB_001a5e9c;
      }
    }
    else if (puVar6 == (undefined1 *)0xf54c5df74fcabc41) {
      iVar7 = *(int *)(param_3 + 0xc);
LAB_001a5e9c:
      puVar3 = (undefined1 *)0xc23f84056fd30bd6;
      unaff_w21 = iVar7;
    }
    else {
      puVar5 = (undefined1 *)(ulong)uVar2;
      puVar3 = (undefined1 *)0x2ce2edddaf334d81;
      if ((puVar6 != &DAT_f615808441b1dafc) &&
         (puVar5 = puVar8, puVar3 = puVar6, puVar6 == (undefined1 *)0xf63b36e7a9d9f670))
      goto LAB_001a5dd0;
    }
  }
  if ((long)puVar6 < 0x2ce2edddaf334d81) {
    if (puVar6 != (undefined1 *)0xf6c71d76f8b48eb9) {
      puVar3 = puVar1;
      if ((puVar6 != (undefined1 *)0x887e73b2c28c6a1) &&
         (puVar3 = puVar6, puVar6 == (undefined1 *)0x125dd2cc844aecb4)) {
        uVar4 = FUN_001a5ef8(param_1,param_2,param_5);
        puVar3 = (undefined1 *)0x696b554ab6b2c8c5;
        if ((uVar4 & 1) == 0) {
          puVar3 = (undefined1 *)0x353e7cd16df664a2;
        }
      }
      goto LAB_001a5ba0;
    }
    unaff_w25 = 0;
  }
  else {
    if ((long)puVar6 < 0x696b554ab6b2c8c5) {
      if (puVar6 == (undefined1 *)0x2ce2edddaf334d81) {
        puVar3 = (undefined1 *)0xaa46adf0a78af8c7;
        local_7c = iVar7;
        if (iVar7 < 0x12) {
          puVar3 = (undefined1 *)0xd222672a639a1d2e;
        }
      }
      else if (puVar6 == (undefined1 *)0x353e7cd16df664a2) {
        puVar5 = (undefined1 *)(ulong)*(uint *)(param_3 + 0xc);
        puVar3 = (undefined1 *)0x2ce2edddaf334d81;
      }
      goto LAB_001a5ba0;
    }
    if (puVar6 != (undefined1 *)0x696b554ab6b2c8c5) {
      if (puVar6 == (undefined1 *)0x6b5051bf1aed633d) {
        unaff_w25 = 0;
        *param_2 = 0x11;
        puVar3 = (undefined1 *)0xbf711ec4fafe862e;
      }
      goto LAB_001a5ba0;
    }
LAB_001a5dd0:
    unaff_w25 = 1;
  }
  puVar5 = puVar8;
  puVar3 = (undefined1 *)0xbf711ec4fafe862e;
  goto LAB_001a5ba0;
}


