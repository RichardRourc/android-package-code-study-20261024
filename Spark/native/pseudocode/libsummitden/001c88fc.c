// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001c88fc; body: [[001c88fc, 001c89df]]

/* WARNING: Removing unreachable block (ram,0x001c899c) */

uint FUN_001c88fc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  
  uVar3 = DAT_00204030 ^ 0xe9df1efc;
  pcVar5 = (code *)(&PTR_FUN_00203b00)[(int)uVar3];
  iVar4 = -0xa7069c6;
  while (iVar4 == -0xa7069c6) {
    uVar2 = (*pcVar5)(param_2);
    uVar3 = 0;
    iVar4 = -0x4e3e227e;
    if ((uVar2 & 1) == 0) {
      iVar4 = -0x3176424b;
    }
    if (iVar4 == -0x3176424b) {
      lVar1 = (*(code *)(&PTR_FUN_00203b00)[(int)(DAT_00204030 ^ 0xe9df1ee8)])(param_1,param_2,0);
      iVar4 = -0x4e3e227e;
      uVar3 = (uint)(lVar1 != -1);
    }
  }
  return uVar3 & 1;
}


