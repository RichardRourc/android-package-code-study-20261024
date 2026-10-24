// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001811ec; body: [[001811ec, 0018129b]]

void FUN_001811ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = (*(code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8b9)])();
  uVar2 = (*(code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8e0)])(param_1);
  uVar3 = (*(code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8b4)])(param_2);
  (*(code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8a3)])(uVar1,uVar2,param_2,param_3,uVar3)
  ;
  return;
}


