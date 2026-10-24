// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 001f6d20; body: [[001f6d20, 001f70cf]]

void FUN_001f6d20(long *param_1)

{
  void *pvVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  void *unaff_x20;
  void *unaff_x22;
  void *unaff_x27;
  
  pvVar5 = (void *)*param_1;
  pvVar1 = (void *)0xb36be675652c9c69;
  if (pvVar5 != (void *)0x0) {
    pvVar1 = (void *)0x61d9685814f9d681;
  }
  pvVar3 = (void *)0x61d9685814f9d681;
  pvVar2 = (void *)0xde3bbde8319e4138;
LAB_001f6e04:
  do {
    while (pvVar6 = pvVar2, pvVar4 = pvVar3, pvVar2 = pvVar6, pvVar3 = pvVar4,
          (long)pvVar6 < 0x57cabee7967ab664) {
      if ((long)pvVar6 < -0x3ea1661ac6a1c4db) {
        if (pvVar6 == (void *)0x8682509a6d1bddd3) {
          unaff_x20 = *(void **)((long)unaff_x27 + 8);
          pvVar2 = (void *)0x727aabeac1ff5013;
          if (unaff_x20 != (void *)0x0) {
            pvVar2 = (void *)0xc15e99e5395e3b25;
          }
        }
        else if (pvVar6 == (void *)0xa1122837683f12d6) {
          pvVar2 = (void *)0x78ac43fddd7c64db;
          if (*(long *)((long)pvVar4 + 0x10) != 0) {
            pvVar2 = (void *)0x5ebfca74eead21cf;
          }
          *param_1 = *(long *)((long)pvVar4 + 0x10);
          unaff_x27 = pvVar4;
        }
        else if (pvVar6 == (void *)0xb36be675652c9c69) {
          pvVar2 = (void *)0x7bca060775e09e1e;
        }
      }
      else if (pvVar6 == (void *)0xc15e99e5395e3b25) {
        free(unaff_x20);
LAB_001f6df0:
        pvVar2 = (void *)0x3485297baf428faf;
      }
      else {
        pvVar2 = pvVar1;
        if ((pvVar6 != (void *)0xde3bbde8319e4138) &&
           (pvVar2 = pvVar6, pvVar6 == (void *)0x3485297baf428faf)) {
          free(unaff_x27);
          unaff_x22 = (void *)*param_1;
          pvVar2 = (void *)0x6230bf87be098d5d;
          if (unaff_x22 != (void *)0x0) {
            pvVar2 = (void *)0x57cabee7967ab664;
          }
        }
      }
    }
    if ((long)pvVar6 < 0x6230bf87be098d5d) {
      pvVar3 = unaff_x22;
      pvVar2 = (void *)0xa1122837683f12d6;
      if (((pvVar6 != (void *)0x57cabee7967ab664) &&
          (pvVar3 = pvVar4, pvVar2 = (void *)0x8682509a6d1bddd3,
          pvVar6 != (void *)0x5ebfca74eead21cf)) &&
         (pvVar2 = pvVar6, pvVar6 == (void *)0x61d9685814f9d681)) {
        pvVar3 = pvVar5;
        pvVar2 = (void *)0xa1122837683f12d6;
      }
      goto LAB_001f6e04;
    }
    if ((long)pvVar6 < 0x78ac43fddd7c64db) {
      pvVar2 = (void *)0x7bca060775e09e1e;
      if ((pvVar6 != (void *)0x6230bf87be098d5d) &&
         (pvVar2 = pvVar6, pvVar6 == (void *)0x727aabeac1ff5013)) goto LAB_001f6df0;
    }
    else if (pvVar6 == (void *)0x78ac43fddd7c64db) {
      param_1[1] = (long)param_1;
      pvVar2 = (void *)0x8682509a6d1bddd3;
    }
    else if (pvVar6 == (void *)0x7bca060775e09e1e) {
      *param_1 = 0;
      param_1[1] = (long)param_1;
      return;
    }
  } while( true );
}


