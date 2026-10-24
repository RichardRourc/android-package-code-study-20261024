// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001cebf8; body: [[001cebf8, 001cec17]]

void FUN_001cebf8(undefined4 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  auVar3 = FUN_001cec18(param_1,&PTR_PTR_00204040,param_2);
  uVar1 = FUN_001e95ec(0x20);
  FUN_001cea48(uVar1,auVar3._0_8_,auVar3._8_8_,param_2);
  uVar2 = FUN_001e97d4(uVar1,PTR_PTR_001f6b58,PTR_thunk_FUN_001cf124_001f6b50);
  FUN_001e96d8(uVar1);
                    /* WARNING: Subroutine does not return */
  FUN_001eaec0(uVar2);
}


