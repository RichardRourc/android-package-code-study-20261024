// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001560b4; body: [[001560b4, 001561b7]]

void FUN_001560b4(long *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 uVar6;
  
  iVar1 = -0x26f739a7;
  if (*(long *)*param_1 != 0) {
    iVar1 = 0x264795cf;
  }
  iVar2 = -0x5b9f7538;
  while( true ) {
    do {
      iVar5 = iVar2;
      iVar2 = iVar1;
    } while (iVar5 == -0x5b9f7538);
    if (iVar5 != 0x264795cf) break;
    (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8ab9)])(*param_1);
    (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8aa3)])(*param_1);
    puVar3 = (undefined8 *)*param_1;
    uVar6 = *puVar3;
    uVar4 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8a5f)])();
    (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8aa9)])(puVar3 + 2,uVar6,uVar4);
    iVar2 = -0x26f739a7;
  }
  return;
}


