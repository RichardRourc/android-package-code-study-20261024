// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 00211018; body: [[00211018, 002111bf]]

void FUN_00211018(undefined4 *param_1,int *param_2)

{
  long lVar1;
  int iVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined4 *unaff_x27;
  undefined4 local_74;
  
  iVar2 = *param_2;
  lVar1 = -0x45704382c9dcec73;
  if (iVar2 != 0) {
    lVar1 = 0x418b7d3c908df894;
  }
  puVar3 = param_1;
  lVar4 = 0x7d8bf94548220fb8;
  while( true ) {
    while (lVar4 < 0x36f07785a64d7584) {
      if (lVar4 == -0x71c5c29ef27b8351) {
        *param_1 = 2;
        lVar4 = 0x36f07785a64d7584;
      }
      else if (lVar4 == -0x69f7a720f4f21bbf) {
        *(undefined4 **)(puVar3 + 2) = unaff_x27;
        *(undefined4 **)(param_2 + 2) = puVar3;
        *puVar3 = local_74;
        *param_2 = iVar2 + 1;
        lVar4 = 0x36f07785a64d7584;
      }
      else if (lVar4 == -0x45704382c9dcec73) {
        *param_1 = 4;
        lVar4 = 0x36f07785a64d7584;
      }
    }
    if (lVar4 == 0x36f07785a64d7584) break;
    if (lVar4 == 0x418b7d3c908df894) {
      unaff_x27 = *(undefined4 **)(param_2 + 2);
      local_74 = *unaff_x27;
      puVar3 = calloc(1,0x10);
      lVar4 = -0x71c5c29ef27b8351;
      if (puVar3 != (undefined4 *)0x0) {
        lVar4 = -0x69f7a720f4f21bbf;
      }
    }
    else if (lVar4 == 0x7d8bf94548220fb8) {
      lVar4 = lVar1;
    }
  }
  return;
}


