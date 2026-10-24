// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 00210408; body: [[00210408, 002104e7]]

void FUN_00210408(undefined4 *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  
  uVar2 = *(int *)(param_2 + 0x14) - 1;
  lVar1 = 0x3b16db62a3c2f4fb;
  if (*(int *)(param_2 + 0x14) != 0) {
    lVar1 = 0x3ace195dd3930386;
  }
  lVar3 = -0x111819a4994f0fa;
  while( true ) {
    while (0x3ace195dd3930385 < lVar3) {
      if (lVar3 == 0x3ace195dd3930386) {
        lVar3 = -0x12e0f8e15901e122;
        *(undefined4 *)(param_2 + 0x10) =
             *(undefined4 *)(*(long *)(param_2 + 0x18) + (ulong)uVar2 * 4);
        *(uint *)(param_2 + 0x14) = uVar2;
      }
      else if (lVar3 == 0x3b16db62a3c2f4fb) {
        *param_1 = 7;
        lVar3 = -0x12e0f8e15901e122;
      }
    }
    if (lVar3 == -0x12e0f8e15901e122) break;
    if (lVar3 == -0x111819a4994f0fa) {
      lVar3 = lVar1;
    }
  }
  return;
}


