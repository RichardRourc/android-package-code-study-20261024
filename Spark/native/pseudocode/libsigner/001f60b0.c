// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 001f60b0; body: [[001f60b0, 001f6453]]

void FUN_001f60b0(long *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  void *unaff_x20;
  void *unaff_x27;
  void *unaff_x28;
  
  pvVar5 = (void *)*param_1;
  pvVar1 = (void *)0x27963d1423e000f6;
  if (pvVar5 != (void *)0x0) {
    pvVar1 = (void *)0xfeee7e65b66b0f06;
  }
  pvVar3 = pvVar1;
  pvVar2 = (void *)0xc7bf249d1db72b2;
LAB_001f617c:
  do {
    while (pvVar6 = pvVar2, pvVar4 = pvVar3, pvVar3 = pvVar4, (long)pvVar6 < 0xc7bf249d1db72b2) {
      if ((long)pvVar6 < -0x29504ee3cf2d5633) {
        if (pvVar6 == (void *)0xbfa497f00132becf) {
          unaff_x20 = *(void **)((long)unaff_x28 + 8);
          pvVar2 = (void *)0x5eda44100212fa2c;
          if (unaff_x20 != (void *)0x0) {
            pvVar2 = (void *)0xd108a90e38b691a1;
          }
        }
        else if (pvVar6 == (void *)0xcb31a60e6206eed1) {
          free(unaff_x28);
          unaff_x27 = (void *)*param_1;
          pvVar2 = (void *)0xd6afb11c30d2a9cd;
          if (unaff_x27 != (void *)0x0) {
            pvVar2 = (void *)0x483dcbc36ada42c4;
          }
        }
        else {
          pvVar2 = pvVar6;
          if (pvVar6 == (void *)0xd108a90e38b691a1) {
            free(unaff_x20);
LAB_001f6168:
            pvVar3 = pvVar4;
            pvVar2 = (void *)0xcb31a60e6206eed1;
          }
        }
      }
      else {
        pvVar2 = (void *)0x1db468c64d6a7ed0;
        if (pvVar6 != (void *)0xd6afb11c30d2a9cd) {
          if (pvVar6 == (void *)0xed1f071ea6fe1ede) {
            param_1[1] = (long)param_1;
            pvVar2 = (void *)0xbfa497f00132becf;
          }
          else {
            pvVar2 = pvVar6;
            if (pvVar6 == (void *)0xfeee7e65b66b0f06) {
              pvVar3 = pvVar5;
              pvVar2 = (void *)0x3b16db62a3c2f4fb;
            }
          }
        }
      }
    }
    if (0x3b16db62a3c2f4fa < (long)pvVar6) {
      if (pvVar6 == (void *)0x3b16db62a3c2f4fb) {
        pvVar2 = (void *)0xed1f071ea6fe1ede;
        if (*(long *)((long)pvVar4 + 0x10) != 0) {
          pvVar2 = (void *)0x3ace195dd3930386;
        }
        *param_1 = *(long *)((long)pvVar4 + 0x10);
        unaff_x28 = pvVar4;
      }
      else {
        pvVar3 = unaff_x27;
        pvVar2 = (void *)0x3b16db62a3c2f4fb;
        if ((pvVar6 != (void *)0x483dcbc36ada42c4) &&
           (pvVar3 = pvVar4, pvVar2 = pvVar6, pvVar6 == (void *)0x5eda44100212fa2c))
        goto LAB_001f6168;
      }
      goto LAB_001f617c;
    }
    if ((long)pvVar6 < 0x27963d1423e000f6) {
      pvVar2 = pvVar1;
      if ((pvVar6 != (void *)0xc7bf249d1db72b2) &&
         (pvVar2 = pvVar6, pvVar6 == (void *)0x1db468c64d6a7ed0)) {
        *param_1 = 0;
        param_1[1] = (long)param_1;
        return;
      }
    }
    else {
      pvVar2 = (void *)0x1db468c64d6a7ed0;
      if ((pvVar6 != (void *)0x27963d1423e000f6) &&
         (pvVar2 = pvVar6, pvVar6 == (void *)0x3ace195dd3930386)) {
        pvVar2 = (void *)0xbfa497f00132becf;
      }
    }
  } while( true );
}


