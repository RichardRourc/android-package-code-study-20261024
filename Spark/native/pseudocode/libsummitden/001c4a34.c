// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001c4a34; body: [[001c4a34, 001c4bb7]]

void FUN_001c4a34(long param_1)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  
  plVar6 = *(long **)(param_1 + 8);
  lVar5 = *plVar6;
  *(long *)(param_1 + 8) = lVar5;
  iVar1 = 0xd608659;
  if (lVar5 != 0) {
    iVar1 = 0x10f3c150;
  }
  iVar2 = -0x7039ae16;
  while( true ) {
    do {
      while (iVar4 = iVar2, 0x10f3c14f < iVar4) {
        if (iVar4 == 0x10f3c150) {
          (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bad6)])
                    (*(undefined8 *)(param_1 + 8),param_1);
          iVar2 = 0xd608659;
        }
        else if (iVar4 == 0x3e7b0e3c) {
          lVar5 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bad2)])(param_1);
          *(long **)(lVar5 + 8) = plVar6;
          iVar2 = -0x1c3b266f;
        }
        else {
          **(undefined8 **)(param_1 + 0x10) = plVar6;
          iVar2 = -0x1c3b266f;
        }
      }
      iVar2 = iVar1;
    } while (iVar4 == -0x7039ae16);
    if (iVar4 != 0xd608659) break;
    plVar6[2] = *(long *)(param_1 + 0x10);
    uVar3 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bad1)])(param_1);
    iVar2 = 0x72b598e0;
    if ((uVar3 & 1) == 0) {
      iVar2 = 0x3e7b0e3c;
    }
  }
  *plVar6 = param_1;
  (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bad6)])(param_1,plVar6);
  return;
}


