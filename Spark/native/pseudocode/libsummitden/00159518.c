// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00159518; body: [[00159518, 001597bb]]

void FUN_00159518(undefined1 *param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined1 *puVar3;
  uint uVar4;
  code *pcVar5;
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52af5)])(auStack_80);
  pcVar5 = (code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52af1)];
  uVar4 = 0x5be60410;
  while (uVar4 == 0x5be60410) {
    uVar2 = (*pcVar5)(auStack_80);
    uVar4 = 0x7b3c80de;
    if ((uVar2 & 1) == 0) {
      uVar4 = 0x5ebc6e1e;
    }
    if (0x72129bf4 < uVar4) goto LAB_001595cc;
  }
  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52af6)])(auStack_e0,*param_2);
  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
            (&DAT_001fcfae,9,&DAT_002042e4,&DAT_001fcfae);
  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ac5)])
            (auStack_c8,&DAT_001fcfae,auStack_e0);
  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
            (&DAT_001fcfb7,2,&DAT_002042e8,&DAT_001fcfb7);
  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52acb)])
            (auStack_b0,auStack_c8,&DAT_001fcfb7);
  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ac8)])(auStack_98,auStack_b0,auStack_80)
  ;
  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ac8)])(param_1,auStack_98,param_2[1]);
  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae3)])(auStack_98);
  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae3)])(auStack_b0);
  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae3)])(auStack_c8);
  puVar3 = auStack_e0;
  uVar4 = DAT_001fed20 ^ 0x98a52ae3;
  while( true ) {
    (*(code *)(&PTR_FUN_001fda20)[(int)uVar4])(puVar3);
    uVar4 = 0x72129bf5;
LAB_001595cc:
    if (uVar4 != 0x7b3c80de) break;
    uVar4 = DAT_001fed20 ^ 0x98a52aea;
    puVar3 = param_1;
  }
  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae3)])(auStack_80);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


