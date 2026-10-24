// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001bbde0; body: [[001bbde0, 001bbeaf]]

void FUN_001bbde0(long param_1,long param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  do {
    iVar2 = 0x179231b;
    do {
      if (iVar2 != 0x179231b) {
        return;
      }
      iVar2 = -0x65841618;
      if (param_2 != *(long *)(param_1 + 0x10)) {
        iVar2 = -0x493ee36;
      }
    } while (iVar2 != -0x493ee36);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + -0x30;
    uVar1 = (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa5b)])();
    (*(code *)(&PTR_FUN_002026b0)[(int)(DAT_00202f98 ^ 0xf28caa5a)])(uVar3,uVar1);
  } while( true );
}


