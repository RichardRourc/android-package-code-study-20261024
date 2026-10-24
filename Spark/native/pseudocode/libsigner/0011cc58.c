// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 0011cc58; body: [[0011cc58, 0011d147]]

void FUN_0011cc58(long *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *unaff_x20;
  undefined8 *unaff_x22;
  undefined8 *unaff_x26;
  undefined8 *unaff_x28;
  
  puVar1 = (undefined8 *)0x727aabeac1ff5013;
  if (param_1 != (long *)0x0) {
    puVar1 = (undefined8 *)0xc15e99e5395e3b25;
  }
  puVar2 = puVar1;
  puVar5 = (undefined8 *)0x8682509a6d1bddd3;
LAB_0011cd70:
  while (puVar4 = puVar5, puVar3 = puVar2, puVar5 = puVar4, puVar2 = puVar3,
        0x1b91058c21da9ca6 < (long)puVar4) {
    if ((long)puVar4 < 0x57cabee7967ab664) {
      if ((long)puVar4 < 0x39a16bddf8dc82a2) {
        puVar5 = (undefined8 *)0xafcefe1b733a78ce;
        if ((puVar4 != (undefined8 *)0x3485297baf428faf) &&
           (puVar5 = puVar4, puVar4 == (undefined8 *)0x1b91058c21da9ca7)) {
          return;
        }
      }
      else if (puVar4 == (undefined8 *)0x39a16bddf8dc82a2) {
        unaff_x20 = (void *)*unaff_x28;
        puVar5 = (undefined8 *)0x8bbf089cfffa99f4;
        if (unaff_x20 != (void *)0x0) {
          puVar5 = (undefined8 *)0x4d5d50fcdd4992d2;
        }
      }
      else if (puVar4 == (undefined8 *)0x4d5d50fcdd4992d2) {
        free(unaff_x20);
LAB_0011cd5c:
        puVar5 = (undefined8 *)0x852983e999b1da06;
      }
    }
    else if ((long)puVar4 < 0x727aabeac1ff5013) {
      puVar2 = unaff_x26;
      puVar5 = (undefined8 *)0x6230bf87be098d5d;
      if ((puVar4 != (undefined8 *)0x57cabee7967ab664) &&
         (puVar2 = puVar3, puVar5 = puVar4, puVar4 == (undefined8 *)0x6230bf87be098d5d)) {
        puVar5 = (undefined8 *)0x81c9619a76458719;
        if (puVar3[1] != 0) {
          puVar5 = (undefined8 *)0x7bca060775e09e1e;
        }
        *param_1 = puVar3[1];
        unaff_x28 = puVar3;
      }
    }
    else {
      puVar5 = (undefined8 *)0x1b91058c21da9ca7;
      if ((puVar4 != (undefined8 *)0x727aabeac1ff5013) &&
         (puVar5 = puVar4, puVar4 == (undefined8 *)0x7bca060775e09e1e)) {
        puVar5 = (undefined8 *)0x39a16bddf8dc82a2;
      }
    }
  }
  if ((long)puVar4 < -0x503101e48cc58732) {
    if (-0x797daf6592e4222e < (long)puVar4) {
      puVar5 = puVar1;
      if ((puVar4 != (undefined8 *)0x8682509a6d1bddd3) &&
         (puVar5 = puVar4, puVar4 == (undefined8 *)0x8bbf089cfffa99f4)) goto LAB_0011cd5c;
      goto LAB_0011cd70;
    }
    if (puVar4 == (undefined8 *)0x81c9619a76458719) {
      param_1[1] = (long)param_1;
      puVar5 = (undefined8 *)0x39a16bddf8dc82a2;
      goto LAB_0011cd70;
    }
    if (puVar4 != (undefined8 *)0x852983e999b1da06) goto LAB_0011cd70;
    free(unaff_x28);
    unaff_x22 = (undefined8 *)*param_1;
    puVar4 = (undefined8 *)0xdcc6a561637b7cae;
    puVar5 = (undefined8 *)0x1552bb494d897f7e;
    puVar3 = unaff_x22;
  }
  else {
    if (-0x23395a9e9c848353 < (long)puVar4) {
      puVar2 = unaff_x22;
      puVar5 = (undefined8 *)0x6230bf87be098d5d;
      if ((puVar4 != (undefined8 *)0xdcc6a561637b7cae) &&
         (puVar2 = puVar3, puVar5 = puVar4, puVar4 == (undefined8 *)0x1552bb494d897f7e)) {
        puVar5 = (undefined8 *)0xafcefe1b733a78ce;
      }
      goto LAB_0011cd70;
    }
    if (puVar4 == (undefined8 *)0xafcefe1b733a78ce) {
      *param_1 = 0;
      param_1[1] = (long)param_1;
      puVar5 = (undefined8 *)0x1b91058c21da9ca7;
      goto LAB_0011cd70;
    }
    if (puVar4 != (undefined8 *)0xc15e99e5395e3b25) goto LAB_0011cd70;
    unaff_x26 = (undefined8 *)*param_1;
    puVar4 = (undefined8 *)0x57cabee7967ab664;
    puVar5 = (undefined8 *)0x3485297baf428faf;
    puVar3 = unaff_x26;
  }
  if (puVar3 != (undefined8 *)0x0) {
    puVar5 = puVar4;
  }
  goto LAB_0011cd70;
}


