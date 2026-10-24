// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 00212c34; body: [[00212c34, 00212ccb]]

void _INIT_1(void)

{
  int iVar1;
  ulong uVar2;
  undefined8 local_88;
  ulong uStack_80;
  undefined8 local_78;
  char acStack_6c [92];
  
  if ((DAT_0021fb80 == 0) &&
     ((iVar1 = __system_property_get("ro.arch",acStack_6c), iVar1 < 1 ||
      (iVar1 = strncmp(acStack_6c,"exynos9810",10), iVar1 != 0)))) {
    uVar2 = getauxval(0x10);
    local_78 = getauxval(0x1a);
    local_88 = 0x18;
    uStack_80 = uVar2;
    FUN_002127fc(uVar2 | 0x4000000000000000,&local_88);
    return;
  }
  return;
}


