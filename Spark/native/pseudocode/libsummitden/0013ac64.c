// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0013ac64; body: [[0013ac64, 0013ae43]]

void FUN_0013ac64(long param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  byte *unaff_x21;
  byte *local_88;
  byte local_7c [4];
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  iVar1 = -0x658c743e;
  if (param_1 != 0) {
    iVar1 = -0xf5e5706;
  }
  iVar5 = -0x2a168af2;
  local_78 = param_2;
  uStack_70 = param_3;
LAB_0013ad48:
  do {
    iVar2 = 0x4ef2e2ce;
    if (unaff_x21 != local_88) {
      iVar2 = -0x19f46a;
    }
LAB_0013ad70:
    do {
      while (-0xf5e5707 < iVar5) {
        if (iVar5 < 0x4ef2e2ce) {
          if (iVar5 != -0x19f46a) {
            unaff_x21 = (byte *)(*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37101)])
                                          (&local_78);
            local_88 = (byte *)(*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37100)])
                                         (&local_78);
            iVar5 = -0x6ff5e110;
            goto LAB_0013ad48;
          }
          local_7c[0] = *unaff_x21 ^ param_4;
          (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37180)])(param_1,local_7c);
          iVar5 = -0x7d4cb7ea;
        }
        else {
          if (iVar5 != 0x4ef2e2ce) {
            if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
              __stack_chk_fail();
            }
            return;
          }
LAB_0013ad68:
          iVar5 = 0x7ef4cc66;
        }
      }
      if (-0x658c743f < iVar5) {
        bVar4 = iVar5 == -0x658c743e;
        iVar5 = iVar1;
        if (bVar4) goto LAB_0013ad68;
        goto LAB_0013ad70;
      }
      bVar4 = iVar5 == -0x6ff5e110;
      iVar5 = iVar2;
    } while (bVar4);
    unaff_x21 = unaff_x21 + 1;
    iVar5 = -0x6ff5e110;
  } while( true );
}


