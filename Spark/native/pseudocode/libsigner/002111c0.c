// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 002111c0; body: [[002111c0, 002114f3]]

void FUN_002111c0(undefined4 *param_1,uint *param_2,uint param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined4 *unaff_x20;
  undefined4 *unaff_x21;
  uint unaff_w22;
  undefined4 unaff_w23;
  undefined4 unaff_w24;
  undefined4 uVar5;
  undefined4 *unaff_x25;
  undefined4 *puVar6;
  uint unaff_w27;
  uint uVar7;
  undefined4 *unaff_x30;
  undefined4 *puVar8;
  
  puVar1 = (undefined1 *)0xe7622641fcb090c6;
  if (param_3 != 0) {
    puVar1 = (undefined1 *)0xc0f51250277e5cfd;
  }
  puVar2 = (undefined1 *)0x8500be9b057d300e;
  if (*param_2 <= param_3) {
    puVar2 = &DAT_c45038db124ae016;
  }
  puVar3 = (undefined1 *)0xc879bc31bae5bb14;
  do {
    while( true ) {
      while (uVar5 = unaff_w24, uVar7 = unaff_w27, puVar8 = unaff_x30, puVar6 = unaff_x25,
            puVar4 = puVar3, puVar3 = puVar4, unaff_x25 = puVar6, unaff_x30 = puVar8,
            unaff_w27 = uVar7, unaff_w24 = uVar5, (long)puVar4 < -0x1b715090d60a355e) {
        if ((long)puVar4 < -0x3f0aedafd881a303) {
          if (puVar4 == (undefined1 *)0x8500be9b057d300e) {
            unaff_x20 = *(undefined4 **)(param_2 + 2);
            unaff_w23 = *unaff_x20;
            puVar3 = puVar1;
          }
          else if (puVar4 == (undefined1 *)0x87b1ff2df68e38ae) {
            puVar3 = (undefined1 *)0x34ee749c3dc3cf5c;
            unaff_x25 = unaff_x21;
            unaff_w24 = *unaff_x21;
          }
        }
        else if (puVar4 == (undefined1 *)0xc0f51250277e5cfd) {
          puVar3 = (undefined1 *)0x29ff0ff794febe2e;
          unaff_x30 = unaff_x20;
          unaff_w27 = 0;
        }
        else if (puVar4 == &DAT_c45038db124ae016) {
          *param_1 = 4;
          puVar3 = (undefined1 *)0xe48eaf6f29f5caa2;
        }
        else if (puVar4 == (undefined1 *)0xc879bc31bae5bb14) {
          puVar3 = puVar2;
        }
      }
      if ((long)puVar4 < 0x29ff0ff794febe2e) break;
      if (puVar4 == (undefined1 *)0x29ff0ff794febe2e) {
        unaff_x21 = *(undefined4 **)(puVar8 + 2);
        unaff_w22 = uVar7 + 1;
        puVar3 = (undefined1 *)0x87b1ff2df68e38ae;
        if (unaff_w22 != param_3) {
          puVar3 = (undefined1 *)0x22f3f9cf91cbb9a6;
        }
      }
      else if (puVar4 == (undefined1 *)0x34ee749c3dc3cf5c) {
        *unaff_x20 = uVar5;
        *puVar6 = unaff_w23;
        puVar3 = (undefined1 *)0xe48eaf6f29f5caa2;
      }
    }
    puVar3 = (undefined1 *)0x34ee749c3dc3cf5c;
    unaff_x25 = unaff_x20;
    unaff_w24 = unaff_w23;
  } while (((puVar4 == (undefined1 *)0xe7622641fcb090c6) ||
           (puVar3 = (undefined1 *)0x29ff0ff794febe2e, unaff_x25 = puVar6, unaff_x30 = unaff_x21,
           unaff_w27 = unaff_w22, unaff_w24 = uVar5, puVar4 == (undefined1 *)0x22f3f9cf91cbb9a6)) ||
          (puVar3 = puVar4, unaff_x30 = puVar8, unaff_w27 = uVar7,
          puVar4 != (undefined1 *)0xe48eaf6f29f5caa2));
  return;
}


