// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0015a408; body: [[0015a408, 0015a8bf]]

void FUN_0015a408(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  undefined **ppuVar8;
  ulong uVar9;
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ace)])(auStack_80);
  uVar3 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52acf)])
                    (auStack_80,0xa143b75d32e9c11f);
  uVar9 = uVar3 >> 4;
  uVar6 = uVar3 % 9;
  if (uVar6 < 2) {
    ppuVar8 = &PTR_DAT_001f31c0;
    uVar6 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ade)])(&PTR_DAT_001f31c0);
    uVar3 = 0;
    if (uVar6 != 0) {
      uVar3 = uVar9 / uVar6;
    }
    lVar1 = uVar3 * uVar6;
    uVar7 = 0x98a52adf;
LAB_0015a530:
    puVar4 = (undefined8 *)
             (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ uVar7)])(ppuVar8,uVar9 - lVar1);
    (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae4)])(param_1,*puVar4);
  }
  else {
    if (uVar6 == 2) {
      uVar5 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52adc)])(&PTR_DAT_001f3240);
      uVar6 = 0;
      if (uVar5 != 0) {
        uVar6 = uVar9 / uVar5;
      }
      puVar4 = (undefined8 *)
               (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52add)])
                         (&PTR_DAT_001f3240,uVar9 - uVar6 * uVar5);
      (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae4)])(auStack_98,*puVar4);
      (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ac3)])
                (auStack_b0,auStack_80,(uVar3 >> 0xb) % 3 + 1,0x71,2);
      uVar7 = 0x98a52ac0;
LAB_0015a608:
      (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ uVar7)])(param_1,auStack_98,auStack_b0);
    }
    else {
      if (uVar6 == 3) {
        ppuVar8 = &PTR_DAT_001f3290;
        uVar6 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ad2)])(&PTR_DAT_001f3290);
        uVar3 = 0;
        if (uVar6 != 0) {
          uVar3 = uVar9 / uVar6;
        }
        lVar1 = uVar3 * uVar6;
        uVar7 = 0x98a52ad3;
        goto LAB_0015a530;
      }
      if ((uVar6 & 0xe) == 4) {
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ad0)])
                  (param_1,auStack_80,uVar3 >> 9 & 1 | 2,0xc6a4a7935bd1e995);
        goto LAB_0015a68c;
      }
      if (uVar6 == 6) {
        uVar5 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ad1)])(&PTR_DAT_001f32f0);
        uVar6 = 0;
        if (uVar5 != 0) {
          uVar6 = uVar9 / uVar5;
        }
        puVar4 = (undefined8 *)
                 (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ad6)])
                           (&PTR_DAT_001f32f0,uVar9 - uVar6 * uVar5);
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae4)])(auStack_98,*puVar4);
        uVar9 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ad1)])(&PTR_DAT_001f3330);
        uVar6 = 0;
        if (uVar9 != 0) {
          uVar6 = (uVar3 >> 0xc) / uVar9;
        }
        puVar4 = (undefined8 *)
                 (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ad6)])
                           (&PTR_DAT_001f3330,(uVar3 >> 0xc) - uVar6 * uVar9);
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae4)])(auStack_b0,*puVar4);
        uVar7 = 0x98a52ac1;
        goto LAB_0015a608;
      }
      uVar5 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ad1)])(&PTR_DAT_001f3370);
      uVar6 = 0;
      if (uVar5 != 0) {
        uVar6 = uVar9 / uVar5;
      }
      puVar4 = (undefined8 *)
               (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ad6)])
                         (&PTR_DAT_001f3370,uVar9 - uVar6 * uVar5);
      (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae4)])(auStack_98,*puVar4);
      (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                (&DAT_001fd36c,2,&DAT_0020431c,&DAT_001fd36c);
      (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ad7)])
                (auStack_b0,auStack_98,&DAT_001fd36c);
      (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ac3)])
                (auStack_c8,auStack_80,(uVar3 >> 9 & 3) + 3,0xc6a4a7935bd1e995,2);
      (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ac1)])
                (param_1,auStack_b0,auStack_c8);
      (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae3)])(auStack_c8);
    }
    (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae3)])(auStack_b0);
    (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae3)])(auStack_98);
  }
LAB_0015a68c:
  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae3)])(auStack_80);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


