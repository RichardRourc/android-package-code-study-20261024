// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001eab70; body: [[001eab70, 001eac67]]

undefined8 FUN_001eab70(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_4f0 [624];
  undefined1 auStack_280 [528];
  undefined8 local_70;
  undefined1 auStack_68 [24];
  code *local_50;
  
  FUN_001eeab0(auStack_280);
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_001eb184(auStack_4f0,auStack_280);
  iVar1 = FUN_001eb394(auStack_4f0);
  while( true ) {
    if (iVar1 == 0) {
      return 5;
    }
    if ((iVar1 < 0) || (iVar1 = FUN_001eb3bc(auStack_4f0,auStack_68), iVar1 != 0)) break;
    if ((local_50 != (code *)0x0) &&
       (iVar1 = (*local_50)(1,1,*param_1,param_1,auStack_4f0), iVar1 != 8)) {
      if (iVar1 != 6) {
        return 3;
      }
      FUN_001eb22c(auStack_4f0,0xfffffffe,&local_70);
      param_1[3] = local_70;
      uVar2 = FUN_001eac68(auStack_280,auStack_4f0,param_1);
      return uVar2;
    }
    iVar1 = FUN_001eb394(auStack_4f0);
  }
  return 3;
}


