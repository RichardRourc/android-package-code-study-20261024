// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001ea7f4; body: [[001ea7f4, 001ea88b]]

void _INIT_2(void)

{
  uint uVar1;
  int iVar2;
  char acStack_6c [92];
  
  uVar1 = getauxval(0x10);
  if ((uVar1 >> 8 & 1) == 0) {
    DAT_00205ee0 = 0;
    return;
  }
  iVar2 = __system_property_get("eh5vkn5",acStack_6c);
  if (0 < iVar2) {
    iVar2 = strncmp(acStack_6c,"qxi0i2c1uh",10);
    DAT_00205ee0 = iVar2 != 0;
    return;
  }
  DAT_00205ee0 = 1;
  return;
}


