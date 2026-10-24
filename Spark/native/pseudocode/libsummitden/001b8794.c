// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001b8794; body: [[001b8794, 001b8c27]]

long FUN_001b8794(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  int iVar4;
  int unaff_w23;
  long unaff_x24;
  long unaff_x25;
  long local_d0;
  undefined1 uStack_c1;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_70 = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa3b)])(param_1 + 0x20);
  local_78 = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa3a)])(param_1 + 0x20);
  iVar4 = 0x52729b56;
LAB_001b8844:
  do {
    while (iVar4 < -0x3325148e) {
      if (iVar4 < -0x5c2ee05a) {
        if (iVar4 == -0x7cef038a) {
          unaff_x24 = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa38)])(&local_70);
          uVar2 = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa3f)])
                            (unaff_x24,param_2);
          iVar4 = -0x6c6ea773;
          if ((uVar2 & 1) == 0) {
            iVar4 = 0x7852516e;
          }
        }
        else if (iVar4 == -0x7b543e0b) {
LAB_001b8a20:
          if (unaff_w23 != 2) goto LAB_001b8bec;
LAB_001b8a28:
          (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa0b)])(auStack_90);
          (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa3d)])
                    (param_1 + 0x20,param_2,auStack_90);
          (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa08)])(auStack_90);
          unaff_x25 = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa3c)])
                                (param_1 + 0x20);
          (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa33)])(auStack_c0,&uStack_c1);
          (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa32)])
                    (&DAT_002026a3,2,&DAT_00204c2c,&DAT_002026a3);
          (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa31)])
                    (auStack_90,auStack_c0,&DAT_002026a3);
          (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa30)])
                    (auStack_a8,auStack_90,param_2);
          (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa01)])(auStack_90);
          (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa01)])(auStack_c0);
          uVar3 = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa0c)])(auStack_a8);
          uVar2 = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa03)])
                            (uVar3,unaff_x25 + 0x18);
          iVar4 = -0x5aa46b65;
          if ((uVar2 & 1) == 0) {
            iVar4 = -0x3325148e;
          }
        }
        else if (iVar4 == -0x6c6ea773) {
          local_d0 = unaff_x24 + 0x18;
          unaff_w23 = 1;
          iVar4 = -0x2360c2af;
        }
      }
      else if (iVar4 == -0x5c2ee05a) {
LAB_001b883c:
        iVar4 = 0x20f7fef;
      }
      else if (iVar4 == -0x5aa46b65) {
        local_d0 = unaff_x25 + 0x18;
        (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa01)])(auStack_a8);
        unaff_w23 = 1;
        iVar4 = 0x76860c9b;
      }
      else if (iVar4 == -0x359c7cab) {
        unaff_w23 = 2;
        iVar4 = -0x7b543e0b;
      }
    }
    if (iVar4 < 0x20f7fef) {
      if (iVar4 == -0x3325148e) {
        (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa02)])(unaff_x25 + 0x18);
        iVar4 = -0x5aa46b65;
      }
      else {
        if (iVar4 == -0x2360c2af) {
          if (unaff_w23 == 0) goto LAB_001b883c;
          goto LAB_001b8a20;
        }
        if (iVar4 == -0x1a5d57fb) goto LAB_001b8a28;
      }
      goto LAB_001b8844;
    }
    if (iVar4 < 0x76860c9b) {
      if (iVar4 == 0x20f7fef) {
        (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa3e)])(&local_70);
        iVar4 = 0x52729b56;
      }
      else if (iVar4 == 0x52729b56) {
        uVar2 = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa39)])
                          (&local_70,&local_78);
        iVar4 = -0x7cef038a;
        if ((uVar2 & 1) == 0) {
          iVar4 = -0x359c7cab;
        }
      }
    }
    else if (iVar4 == 0x7852516e) {
      unaff_w23 = 0;
      iVar4 = -0x2360c2af;
    }
    else if (iVar4 == 0x76860c9b) {
LAB_001b8bec:
      if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return local_d0;
    }
  } while( true );
}


