// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001c8e58; body: [[001c8e58, 001c8ea3]]

bool FUN_001c8e58(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = (*(code *)(&PTR_FUN_00203b00)[(long)DAT_00204030 ^ 0x1fffffffe9df1e99])
                    (0x30,0xffffffffffffff9c,param_1,0);
  return lVar1 == 0;
}


