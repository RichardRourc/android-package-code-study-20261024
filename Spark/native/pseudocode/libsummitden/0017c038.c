// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0017c038; body: [[0017c038, 0017c363]]

undefined4 JNI_OnLoad(long param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_w21;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  iVar1 = -0x29aba113;
  if (param_1 != 0) {
    iVar1 = -0x5634503d;
  }
  iVar3 = 0x12453f4b;
  do {
    while( true ) {
      while( true ) {
        while (iVar4 = iVar3, iVar3 = iVar4, iVar4 < -0x18c1f201) {
          if (iVar4 < -0x330e4053) {
            if (iVar4 == -0x5634503d) {
              local_70 = 0;
              DAT_00204428 = param_1;
              iVar4 = (*(code *)(&PTR_FUN_001fed30)[(int)(DAT_001fed88 ^ 0xdc30b667)])
                                (param_1,&local_70,0x10006);
              iVar3 = 0x16781961;
              if (iVar4 != 0) {
                iVar3 = 0x718bd512;
              }
            }
            else if (iVar4 == -0x48f3484f) {
              iVar4 = (*(code *)(&PTR_FUN_001fed30)[(int)(DAT_001fed88 ^ 0xdc30b663)])
                                (&local_90,0,FUN_0017c428,0);
              iVar3 = -0x321f0ef5;
              if (iVar4 != 0) {
                iVar3 = 0x5fcf92aa;
              }
            }
          }
          else if (iVar4 == -0x330e4053) {
            iVar3 = -0xcfebad;
          }
          else if (iVar4 == -0x321f0ef5) {
            (*(code *)(&PTR_FUN_001fed30)[(int)(DAT_001fed88 ^ 0xdc30b662)])(local_90);
            iVar3 = 0x5fcf92aa;
          }
          else if (iVar4 == -0x29aba113) {
            unaff_w21 = 0xffffffff;
            iVar3 = -0xcfebad;
          }
        }
        if (iVar4 < 0x16781961) break;
        if (iVar4 == 0x16781961) {
          (*(code *)(&PTR_FUN_001fed30)[(int)(DAT_001fed88 ^ 0xdc30b666)])(0xc35a17e3);
          (*(code *)(&PTR_FUN_001fed30)[(int)(DAT_001fed88 ^ 0xdc30b665)])(4,0);
          local_80 = 0;
          uStack_78 = 0;
          (*(code *)(&PTR_FUN_001fed30)[(int)(DAT_001fed88 ^ 0xdc30b664)])(4,&local_80);
          local_90 = 0;
          local_88 = 0;
          iVar4 = (*(code *)(&PTR_FUN_001fed30)[(int)(DAT_001fed88 ^ 0xdc30b663)])
                            (&local_88,0,FUN_0017c370,0);
          iVar3 = -0x18c1f201;
          if (iVar4 != 0) {
            iVar3 = -0x48f3484f;
          }
        }
        else if (iVar4 == 0x5fcf92aa) {
          unaff_w21 = 0x10006;
          iVar3 = -0x330e4053;
        }
        else if (iVar4 == 0x718bd512) {
          unaff_w21 = 0xffffffff;
          iVar3 = -0x330e4053;
        }
      }
      if (iVar4 != -0x18c1f201) break;
      (*(code *)(&PTR_FUN_001fed30)[(int)(DAT_001fed88 ^ 0xdc30b662)])(local_88);
      iVar3 = -0x48f3484f;
    }
    iVar3 = iVar1;
  } while ((iVar4 == 0x12453f4b) || (iVar3 = iVar4, iVar4 != -0xcfebad));
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return unaff_w21;
}


