// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001eac68; body: [[001eac68, 001eaebf]]

/* WARNING: Removing unreachable block (ram,0x001eacc8) */
/* WARNING: Removing unreachable block (ram,0x001eacd8) */
/* WARNING: Removing unreachable block (ram,0x001eace0) */
/* WARNING: Removing unreachable block (ram,0x001ead08) */
/* WARNING: Removing unreachable block (ram,0x001ead0c) */
/* WARNING: Removing unreachable block (ram,0x001ead2c) */
/* WARNING: Removing unreachable block (ram,0x001ead4c) */
/* WARNING: Removing unreachable block (ram,0x001ead54) */
/* WARNING: Removing unreachable block (ram,0x001ead70) */
/* WARNING: Removing unreachable block (ram,0x001ead80) */
/* WARNING: Removing unreachable block (ram,0x001ead90) */
/* WARNING: Removing unreachable block (ram,0x001eacf4) */
/* WARNING: Removing unreachable block (ram,0x001eae68) */
/* WARNING: Removing unreachable block (ram,0x001eae6c) */

undefined8 FUN_001eac68(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar4;
  undefined1 auStack_a8 [24];
  code *local_90;
  long local_48;
  
  FUN_001eb184(param_2,param_1);
  iVar2 = FUN_001eb3a8(param_2);
  if (iVar2 != 0) {
    do {
      if (iVar2 < 0) {
        return 2;
      }
      FUN_001eb22c(param_2,0xfffffffe,&local_48);
      iVar2 = FUN_001eb3bc(param_2,auStack_a8);
      if (iVar2 != 0) {
        return 2;
      }
      if (local_90 != (code *)0x0) {
        uVar4 = 6;
        if (local_48 != param_3[3]) {
          uVar4 = 2;
        }
        iVar2 = (*local_90)(1,uVar4,*param_3,param_3,param_2);
        puVar1 = PTR___sF_001f6b60;
        if (iVar2 != 8) {
          if (iVar2 != 7) {
            return 2;
          }
          uVar3 = FUN_001eb174(param_2);
          UNRECOVERED_JUMPTABLE = (code *)FUN_001eb164();
                    /* WARNING: Could not recover jumptable at 0x001eae94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar3 = (*UNRECOVERED_JUMPTABLE)(uVar3);
          return uVar3;
        }
        if (local_48 == param_3[3]) {
          fprintf((FILE *)(PTR___sF_001f6b60 + 0x130),"w4j375t7av %s - %s\n","j9prodeg018sd",
                  "during phase1 personality function said it would stop here, but now in phase2 it did not stop here"
                 );
          fflush((FILE *)(puVar1 + 0x130));
                    /* WARNING: Subroutine does not return */
          abort();
        }
      }
      iVar2 = FUN_001eb3a8(param_2);
    } while (iVar2 != 0);
  }
  return 5;
}


