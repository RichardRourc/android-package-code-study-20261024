// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0015644c; body: [[0015644c, 001564bf]]

undefined2 FUN_0015644c(undefined8 param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  
  puVar2 = (undefined1 *)(*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8ba1)])();
  uVar1 = *puVar2;
  puVar2 = (undefined1 *)
           (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8ba1)])(param_1,param_2 + 1);
  return CONCAT11(*puVar2,uVar1);
}


