// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001632d0; body: [[001632d0, 001633f7]]

void FUN_001632d0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
            (&DAT_001fd056,2,&DAT_002042f4,&DAT_001fd056);
  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ad7)])(auStack_60,param_2,&DAT_001fd056)
  ;
  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a57)])(auStack_78,0x6d2b79f5a3c4810b);
  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ac1)])(param_1,auStack_60,auStack_78);
  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae3)])(auStack_78);
  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae3)])(auStack_60);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


