// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001b3234; body: [[001b3234, 001b33eb]]

void FUN_001b3234(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_90 = param_3;
  local_88 = param_2;
  uStack_80 = param_1;
  local_98 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b78a)])(param_2,param_3);
  pcVar6 = (code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b452)];
  iVar4 = -0x7e46df80;
LAB_001b3328:
  do {
    if (iVar4 < -0x3d3ecdc6) {
      if (iVar4 == -0x7e46df80) {
        uVar2 = (*pcVar6)(&uStack_80,&local_88);
        iVar4 = -0x16f0ec77;
        if ((uVar2 & 1) == 0) {
          iVar4 = -0x5a2a58b1;
        }
        goto LAB_001b3328;
      }
      if (iVar4 != -0x5f4b5b69) {
        uVar2 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b452)])
                          (&local_88,&local_90);
        iVar4 = -0x5f4b5b69;
        if ((uVar2 & 1) == 0) {
          iVar4 = -0x3d3ecdc6;
        }
        goto LAB_001b3328;
      }
      uVar5 = 0x1873b788;
      puVar3 = &uStack_80;
    }
    else if (iVar4 == -0x3d3ecdc6) {
      local_a0 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b789)])
                           (uStack_80,local_88,local_98);
      uVar5 = 0x1873b788;
      puVar3 = &local_a0;
    }
    else {
      if (iVar4 != -0x16f0ec77) {
        if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail(local_78,uStack_70);
        }
        return;
      }
      uVar5 = 0x1873b78b;
      puVar3 = &local_98;
    }
    (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ uVar5)])(&local_78,puVar3,&local_98);
    iVar4 = 0x15dd085b;
  } while( true );
}


