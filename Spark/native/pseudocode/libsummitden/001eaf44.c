// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001eaf44; body: [[001eaf44, 001eb097]]

/* WARNING: Removing unreachable block (ram,0x001eb040) */
/* WARNING: Removing unreachable block (ram,0x001eb044) */
/* WARNING: Removing unreachable block (ram,0x001eb048) */
/* WARNING: Removing unreachable block (ram,0x001eb058) */

void FUN_001eaf44(undefined8 param_1,undefined8 param_2,undefined8 *param_3,code *param_4,
                 undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 auStack_98 [24];
  code *local_80;
  
  FUN_001eb184(param_2,param_1);
  iVar1 = FUN_001eb3a8(param_2);
  while( true ) {
    if (iVar1 < 1) {
      (*param_4)(1,0x1a,*param_3,param_3,param_2,param_5);
      return;
    }
    iVar1 = FUN_001eb3bc(param_2,auStack_98);
    if (iVar1 != 0) {
      return;
    }
    iVar1 = (*param_4)(1,10,*param_3,param_3,param_2,param_5);
    if (iVar1 != 0) {
      return;
    }
    if ((local_80 != (code *)0x0) &&
       (iVar1 = (*local_80)(1,10,*param_3,param_3,param_2), iVar1 != 8)) break;
    iVar1 = FUN_001eb3a8(param_2);
  }
  if (iVar1 != 7) {
    return;
  }
  uVar2 = FUN_001eb174(param_2);
  UNRECOVERED_JUMPTABLE = (code *)FUN_001eb164();
                    /* WARNING: Could not recover jumptable at 0x001eafb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar2);
  return;
}


