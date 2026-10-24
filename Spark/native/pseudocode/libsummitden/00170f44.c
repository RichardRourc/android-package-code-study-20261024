// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00170f44; body: [[00170f44, 0017109f]]

void FUN_00170f44(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  undefined8 uVar5;
  int iVar6;
  undefined1 auStack_80 [8];
  long local_78;
  long lStack_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b3d)])(auStack_80,param_1,param_2);
  while( true ) {
    lVar3 = local_78;
    iVar1 = 0x3e7c908b;
    if (local_78 != lStack_70) {
      iVar1 = 0x4dd89f77;
    }
    iVar6 = 0x5921b302;
    while( true ) {
      while (0x4dd89f76 < iVar6) {
        bVar4 = iVar6 == 0x4dd89f77;
        iVar6 = iVar1;
        if (bVar4) {
          uVar5 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b32)])(lVar3);
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b33)])(param_1 + 0x10,uVar5);
          iVar6 = -0x27162fa4;
        }
      }
      if (iVar6 != 0x3e7c908b) break;
      iVar6 = -0xbcd3640;
    }
    if (iVar6 != -0x27162fa4) break;
    local_78 = lVar3 + 8;
  }
  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b30)])(auStack_80);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


