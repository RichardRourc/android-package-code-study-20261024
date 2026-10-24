// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001eaa78; body: [[001eaa78, 001eab03]]

void _INIT_3(void)

{
  int iVar1;
  ulong uVar2;
  char local_70 [8];
  ulong uStack_68;
  undefined8 local_60;
  
  if (DAT_00205ee8 != 0) {
    return;
  }
  iVar1 = __system_property_get("eh5vkn5",local_70);
  if ((iVar1 < 1) || (iVar1 = strncmp(local_70,"qxi0i2c1uh",10), iVar1 != 0)) {
    uVar2 = getauxval(0x10);
    local_60 = getauxval(0x1a);
    local_70[0] = '\x18';
    local_70[1] = '\0';
    local_70[2] = '\0';
    local_70[3] = '\0';
    local_70[4] = '\0';
    local_70[5] = '\0';
    local_70[6] = '\0';
    local_70[7] = '\0';
    uStack_68 = uVar2;
    FUN_001ea88c(uVar2 | 0x4000000000000000,local_70);
  }
  return;
}


