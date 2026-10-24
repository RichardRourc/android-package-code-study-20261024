// Ghidra pseudocode. Not original C/C++ source.
// Program: libpl_droidsonroids_gif.so
// Executable SHA256: 6fe3a2e6c3a0b092a79eb16d26516a28289305ad28f7354d5b41a03f4d203997
// Entry: 00103fc8; body: [[00103fc8, 00104103]]

void FUN_00103fc8(undefined4 param_1,long *param_2,ulong param_3)

{
  long lVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  int *piVar5;
  char *pcVar6;
  undefined8 uVar7;
  char acStack_158 [256];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  cVar2 = (**(code **)(*param_2 + 0x720))(param_2);
  if (((cVar2 == '\x01') ||
      (lVar3 = (**(code **)(*param_2 + 0x30))(param_2,"pl/droidsonroids/gif/GifIOException"),
      lVar3 == 0)) ||
     (lVar4 = (**(code **)(*param_2 + 0x108))(param_2,lVar3,"<init>","(ILjava/lang/String;)V"),
     lVar4 == 0)) goto LAB_001040b8;
  if ((param_3 & 1) == 0) {
LAB_00104080:
    uVar7 = 0;
  }
  else {
    piVar5 = (int *)__errno();
    pcVar6 = strerror_r(*piVar5,acStack_158,0xff);
    if ((int)pcVar6 != 0) goto LAB_00104080;
    uVar7 = (**(code **)(*param_2 + 0x538))(param_2,acStack_158);
  }
  lVar3 = (**(code **)(*param_2 + 0xe0))(param_2,lVar3,lVar4,param_1,uVar7);
  if (lVar3 != 0) {
    (**(code **)(*param_2 + 0x68))(param_2,lVar3);
  }
LAB_001040b8:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


