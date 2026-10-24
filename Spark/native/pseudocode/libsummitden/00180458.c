// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00180458; body: [[00180458, 00180bc3]]

void FUN_00180458(undefined8 param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5
                 ,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  undefined *puVar6;
  int iVar7;
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  int local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  (*(code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8d9)])();
  iVar1 = -0x3db2af76;
  if (param_3 != 0) {
    iVar1 = -0x3233ca5c;
  }
  iVar2 = 0x28a461f8;
  if (param_2 != 0) {
    iVar2 = 0x1a080217;
  }
  iVar4 = 0x67db69f0;
LAB_0018059c:
  do {
    while (iVar7 = iVar4, iVar4 = iVar7, -0x3d8c0d7 < iVar7) {
      if (iVar7 < 0x25b32808) {
        if (iVar7 < 0x12880945) {
          if (iVar7 == -0x3d8c0d6) {
            (*(code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8fb)])(param_1);
            iVar4 = -0x61b78d88;
          }
          else if (iVar7 == 0x679a1f7) {
            (*(code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8eb)])
                      (&DAT_001ff019,6,&DAT_002044b4,&DAT_001ff019);
            puVar6 = &DAT_001ff019;
LAB_00180588:
            (*(code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8d8)])(param_1,puVar6);
            iVar4 = -0x28bdb819;
          }
        }
        else if (iVar7 == 0x12880945) {
          (*(code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8c6)])(auStack_88);
          iVar4 = -0x5fb84149;
        }
        else if (iVar7 == 0x1a080217) {
          uVar5 = (*(code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8e1)])(param_4);
          iVar4 = 0x28a461f8;
          if ((uVar5 & 1) == 0) {
            iVar4 = -0x7af531cd;
          }
        }
      }
      else if (iVar7 < 0x67db69f0) {
        if (iVar7 == 0x25b32808) {
          (*(code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8eb)])
                    (&DAT_001ff019,6,&DAT_002044b4,&DAT_001ff019);
          puVar6 = &DAT_001ff019;
LAB_00180ad0:
          (*(code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8d8)])(param_1,puVar6);
          iVar4 = 0x12880945;
        }
        else if (iVar7 == 0x28a461f8) {
          (*(code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8eb)])
                    (&DAT_001ff019,6,&DAT_002044b4,&DAT_001ff019);
          (*(code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8d8)])(param_1,&DAT_001ff019);
          iVar4 = -0x5fb84149;
        }
      }
      else {
        iVar4 = iVar2;
        if ((iVar7 != 0x67db69f0) && (iVar4 = iVar7, iVar7 == 0x6ecf8f88)) {
          iVar4 = -0x70833b51;
          if (local_70 != 0) {
            iVar4 = 0x25b32808;
          }
        }
      }
    }
    if (iVar7 < -0x5fb84149) {
      if (iVar7 < -0x70833b51) {
        if (iVar7 == -0x7e64a821) {
          (*(code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8eb)])
                    (&DAT_001ff01f,10,&DAT_002044b8,&DAT_001ff01f);
          puVar6 = &DAT_001ff01f;
          goto LAB_00180ad0;
        }
        if (iVar7 == -0x7af531cd) {
          (*(code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8d9)])();
          (*(code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8db)])
                    (auStack_88,param_2,param_4,param_5,param_6,param_7);
          (*(code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8d9)])();
          iVar4 = -0x7e64a821;
          if (local_70 != 1) {
            iVar4 = 0x6ecf8f88;
          }
        }
      }
      else if (iVar7 == -0x70833b51) {
        (*(code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8da)])(auStack_a0,auStack_88);
        (*(code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8d9)])();
        (*(code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8c5)])(auStack_b8,auStack_a0);
        (*(code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8d9)])();
        uVar5 = (*(code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8e1)])(auStack_b8);
        iVar4 = 0x679a1f7;
        if ((uVar5 & 1) == 0) {
          iVar4 = -0x53de0ca9;
        }
      }
      else if (iVar7 == -0x61b78d88) {
        iVar4 = -0x28bdb819;
      }
      goto LAB_0018059c;
    }
    if (iVar7 < -0x3233ca5c) {
      iVar4 = iVar1;
      if (iVar7 != -0x53de0ca9) {
        if (iVar7 == -0x3db2af76) {
          (*(code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8eb)])
                    (&DAT_001ff029,3,&DAT_002044bc,&DAT_001ff029);
          puVar6 = &DAT_001ff029;
          goto LAB_00180588;
        }
        iVar4 = iVar7;
        if (iVar7 == -0x5fb84149) {
          if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return;
        }
      }
    }
    else if (iVar7 == -0x3233ca5c) {
      (*(code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8d9)])();
      (*(code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8eb)])
                (&DAT_001ff02c,0x171,&DAT_002044c0,&DAT_001ff02c);
      (*(code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8d8)])(auStack_e8,&DAT_001ff02c);
      (*(code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8c4)])(auStack_d0,auStack_e8);
      (*(code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8eb)])
                (&DAT_001ff19d,0x21,&DAT_002044c4,&DAT_001ff19d);
      (*(code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8d8)])(auStack_118,&DAT_001ff19d);
      (*(code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8c4)])(auStack_100,auStack_118);
      (*(code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8c7)])
                (param_1,param_2,param_3,auStack_b8,auStack_d0,auStack_100);
      (*(code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8fb)])(auStack_100);
      (*(code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8fb)])(auStack_118);
      (*(code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8fb)])(auStack_d0);
      (*(code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8fb)])(auStack_e8);
      (*(code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8d9)])();
      iVar4 = -0x61b78d88;
    }
    else if (iVar7 == -0x28bdb819) {
      (*(code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8fb)])(auStack_b8);
      (*(code *)(&PTR_FUN_001ff1c0)[(int)(DAT_001ff630 ^ 0x419d8fb)])(auStack_a0);
      iVar4 = 0x12880945;
    }
  } while( true );
}


