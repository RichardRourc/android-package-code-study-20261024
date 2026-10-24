// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00157ef4; body: [[00157ef4, 001587f3]]

void FUN_00157ef4(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  int iVar9;
  int iVar10;
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined8 local_90;
  undefined1 *puStack_88;
  undefined1 auStack_80 [24];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aff)])(param_1);
  puVar8 = auStack_80;
  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52afc)])(auStack_80,param_4);
  iVar1 = 0x7db4f553;
  if (param_3 != 0) {
    iVar1 = -0x48bed8;
  }
  iVar2 = 0x7db4f553;
  if (param_2 != 0) {
    iVar2 = -0x23f93e59;
  }
  bVar4 = false;
  iVar5 = 0x42a9d4;
  local_90 = param_4;
  puStack_88 = puVar8;
LAB_0015803c:
  while (iVar9 = iVar5, iVar5 = iVar9, -0xc6021aa < iVar9) {
    if (iVar9 < 0x30bc98db) {
      if (iVar9 < 0x4b1c050) {
        if (iVar9 == -0x48bed8) {
          puVar8 = (undefined1 *)
                   (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52af3)])(param_2,param_3)
          ;
          iVar5 = -0x1047815d;
          if (puVar8 != (undefined1 *)0x0) {
            iVar5 = 0x4b0163b9;
          }
        }
        else {
          iVar5 = iVar2;
          if ((iVar9 != 0x42a9d4) && (iVar5 = iVar9, iVar9 == -0xc6021a9)) {
            if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
              __stack_chk_fail();
            }
            return;
          }
        }
      }
      else if (iVar9 == 0x4b1c050) {
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae3)])(auStack_d8);
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae3)])(auStack_c0);
        iVar5 = -0x628d54aa;
      }
      else if (iVar9 == 0xdbf83df) {
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52af6)])(auStack_a8,param_4);
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52af2)])(auStack_c0,auStack_a8);
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae3)])(auStack_a8);
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                  (&DAT_001fcfa8,3,&DAT_002042dc,&DAT_001fcfa8);
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52af7)])
                  (param_2,puVar8,&DAT_001fcfa8,auStack_c0);
        iVar5 = -0x33ec2291;
      }
    }
    else if (iVar9 < 0x4b0163b9) {
      if (iVar9 == 0x30bc98db) {
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52af5)])(auStack_a8);
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52af2)])(auStack_d8,auStack_a8);
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae3)])(auStack_a8);
        uVar6 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52af1)])(auStack_d8);
        iVar5 = 0x440d0eb7;
        if ((uVar6 & 1) == 0) {
          iVar5 = -0x60a0b6e0;
        }
      }
      else {
        iVar10 = 0x440d0eb7;
LAB_001583dc:
        if (iVar9 == iVar10) {
          iVar5 = 0x6c80792e;
        }
      }
    }
    else if (iVar9 == 0x4b0163b9) {
      (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                (&DAT_001fcfa8,3,&DAT_002042dc,&DAT_001fcfa8);
      (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52af0)])
                (auStack_c0,param_2,puVar8,&DAT_001fcfa8,&DAT_0011dd07);
      uVar6 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52af1)])(auStack_c0);
      iVar5 = 0xdbf83df;
      if ((uVar6 & 1) == 0) {
        iVar5 = -0x33ec2291;
      }
    }
    else if (iVar9 == 0x6c80792e) {
      uVar6 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52af1)])(auStack_d8);
      iVar5 = -0x32e3f280;
      if ((uVar6 & 1) == 0) {
        iVar5 = -0x5b3a7bc4;
      }
    }
    else if (iVar9 == 0x7db4f553) {
      (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52afd)])(auStack_a8,&local_90);
      (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52af2)])(param_1,auStack_a8);
      (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae3)])(auStack_a8);
      bVar4 = true;
      iVar5 = -0x34f6f59f;
    }
  }
  if (iVar9 < -0x34f6f59f) {
    if (iVar9 < -0x60a0b6e0) {
      if (iVar9 == -0x7f268735) {
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ac9)])(param_1);
        iVar5 = -0xc6021a9;
      }
      else if (iVar9 == -0x628d54aa) {
        iVar5 = -0x34f6f59f;
      }
      goto LAB_0015803c;
    }
    if (iVar9 == -0x60a0b6e0) {
      (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                (&DAT_001fcfab,3,&DAT_002042e0,&DAT_001fcfab);
      (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52af7)])
                (param_2,puVar8,&DAT_001fcfab,auStack_d8);
      iVar5 = 0x440d0eb7;
      goto LAB_0015803c;
    }
    if (iVar9 != -0x5b3a7bc4) {
      iVar10 = -0x47727ec0;
      goto LAB_001583dc;
    }
    (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
              (&DAT_001fcfae,9,&DAT_002042e4,&DAT_001fcfae);
    (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aca)])
              (auStack_120,&DAT_001fcfae,auStack_c0);
    (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
              (&DAT_001fcfb7,2,&DAT_002042e8,&DAT_001fcfb7);
    (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52acb)])
              (auStack_108,auStack_120,&DAT_001fcfb7);
    (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ac8)])
              (auStack_f0,auStack_108,auStack_d8);
    (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ac8)])
              (auStack_a8,auStack_f0,auStack_80);
    (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52af2)])(param_1,auStack_a8);
    (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae3)])(auStack_a8);
    (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae3)])(auStack_f0);
    (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae3)])(auStack_108);
    puVar7 = auStack_120;
  }
  else {
    if (iVar9 < -0x32e3f280) {
      if (iVar9 == -0x34f6f59f) {
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae3)])(auStack_80);
        iVar5 = -0xc6021a9;
        if (!bVar4) {
          iVar5 = -0x7f268735;
        }
      }
      else if (iVar9 == -0x33ec2291) {
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                  (&DAT_001fcfab,3,&DAT_002042e0,&DAT_001fcfab);
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52af0)])
                  (auStack_d8,param_2,puVar8,&DAT_001fcfab,&DAT_0011dd07);
        uVar6 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52af4)])(auStack_d8);
        iVar5 = -0x47727ec0;
        if ((uVar6 & 1) == 0) {
          iVar5 = 0x30bc98db;
        }
      }
      goto LAB_0015803c;
    }
    if (iVar9 != -0x32e3f280) {
      iVar5 = iVar1;
      if ((iVar9 != -0x23f93e59) && (iVar5 = iVar9, iVar9 == -0x1047815d)) {
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52afd)])(auStack_a8,&local_90);
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52af2)])(param_1,auStack_a8);
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae3)])(auStack_a8);
        bVar4 = true;
        iVar5 = -0x628d54aa;
      }
      goto LAB_0015803c;
    }
    (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aea)])(auStack_a8);
    (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52af2)])(param_1,auStack_a8);
    puVar7 = auStack_a8;
  }
  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae3)])(puVar7);
  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aef)])(param_2,puVar8);
  bVar4 = true;
  iVar5 = 0x4b1c050;
  goto LAB_0015803c;
}


