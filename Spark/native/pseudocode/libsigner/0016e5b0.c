// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 0016e5b0; body: [[0016e5b0, 0016e8a3]]

void FUN_0016e5b0(int *param_1,long *param_2,long param_3,undefined4 *param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  long lVar4;
  undefined1 *puVar5;
  int unaff_w23;
  
  puVar1 = (undefined1 *)0x8500be9b057d300e;
  if (param_3 != 0) {
    puVar1 = (undefined1 *)0xc0f51250277e5cfd;
  }
  puVar2 = &DAT_c45038db124ae016;
  do {
    while( true ) {
      while( true ) {
        while (puVar5 = puVar2, puVar2 = puVar5, -0x1b715090d60a355f < (long)puVar5) {
          if ((long)puVar5 < 0x22f3f9cf91cbb9a6) {
            if (puVar5 == (undefined1 *)0xe48eaf6f29f5caa2) {
              *param_4 = 0;
              puVar2 = (undefined1 *)0x940bdddd24f52ce3;
            }
            else if (puVar5 == (undefined1 *)0xe7622641fcb090c6) {
              (**(code **)(*param_2 + 0x80))(param_2);
              (**(code **)(*param_2 + 0x88))(param_2);
              unaff_w23 = 0x1b;
              puVar2 = (undefined1 *)0x22f3f9cf91cbb9a6;
            }
          }
          else if (puVar5 == (undefined1 *)0x22f3f9cf91cbb9a6) {
            *param_1 = unaff_w23;
            puVar2 = (undefined1 *)0xe48eaf6f29f5caa2;
          }
          else {
            puVar2 = (undefined1 *)0x940bdddd24f52ce3;
            if ((puVar5 != (undefined1 *)0x29ff0ff794febe2e) &&
               (puVar2 = puVar5, puVar5 == (undefined1 *)0x34ee749c3dc3cf5c)) {
              puVar2 = (undefined1 *)0xe48eaf6f29f5caa2;
            }
          }
        }
        if (-0x6bf42222db0ad31e < (long)puVar5) break;
        if (puVar5 == (undefined1 *)0x8500be9b057d300e) {
          unaff_w23 = 3;
          puVar2 = (undefined1 *)0x22f3f9cf91cbb9a6;
        }
        else if ((puVar5 == (undefined1 *)0x87b1ff2df68e38ae) &&
                (puVar2 = (undefined1 *)0x29ff0ff794febe2e, *param_1 != 0)) {
          puVar2 = (undefined1 *)0x34ee749c3dc3cf5c;
        }
      }
      if (puVar5 != (undefined1 *)0xc0f51250277e5cfd) break;
      uVar3 = (**(code **)(*param_2 + 0x558))(param_2,param_3);
      lVar4 = *param_2;
      *param_4 = uVar3;
      lVar4 = (**(code **)(lVar4 + 0x78))(param_2);
      puVar2 = (undefined1 *)0x87b1ff2df68e38ae;
      if (lVar4 != 0) {
        puVar2 = (undefined1 *)0xe7622641fcb090c6;
      }
    }
    puVar2 = puVar1;
  } while ((puVar5 == &DAT_c45038db124ae016) ||
          (puVar2 = puVar5, puVar5 != (undefined1 *)0x940bdddd24f52ce3));
  return;
}


