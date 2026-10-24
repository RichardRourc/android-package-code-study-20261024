// Ghidra pseudocode. Not original C/C++ source.
// Program: libpl_droidsonroids_gif.so
// Executable SHA256: 6fe3a2e6c3a0b092a79eb16d26516a28289305ad28f7354d5b41a03f4d203997
// Entry: 001027cc; body: [[001027cc, 001028c3]]

void FUN_001027cc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  char *pcVar4;
  ulong uVar5;
  ulong uVar6;
  undefined4 local_60 [6];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  iVar2 = AndroidBitmap_getInfo(param_1,param_2,local_60);
  if (iVar2 != 0) {
    FUN_00103dc8(param_1,1,"Could not get bitmap info");
    uVar3 = 0xfffffffe;
    goto switchD_0010286c_caseD_3;
  }
  *(undefined4 *)(param_3 + 0x8c) = local_60[0];
  uVar3 = AndroidBitmap_lockPixels(param_1,param_2,param_4);
  uVar5 = (ulong)((int)uVar3 + 3);
  pcVar4 = "Lock pixels error, bad parameter";
  uVar6 = 0xffffffff;
  switch(uVar5) {
  case 0:
    goto switchD_0010286c_caseD_0;
  case 1:
    pcVar4 = "Lock pixels error, JNI exception";
    break;
  case 2:
    break;
  case 3:
    goto switchD_0010286c_caseD_3;
  default:
    pcVar4 = "Lock pixels error";
    uVar6 = uVar5;
  }
  FUN_00103dc8(uVar6,param_1,1,pcVar4);
  uVar6 = 0xfffffffe;
switchD_0010286c_caseD_0:
  uVar3 = uVar6;
switchD_0010286c_caseD_3:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar3);
  }
  return;
}


