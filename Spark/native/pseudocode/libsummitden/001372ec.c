// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001372ec; body: [[001372ec, 00137567]]

void FUN_001372ec(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  long lVar2;
  bool bVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  byte *pbVar7;
  int iVar8;
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37198)])(param_1);
  lVar5 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3719d)])(param_2);
  (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371cc)])(param_1,lVar5 << 1);
  local_70 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371d8)])(param_2);
  local_78 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371db)])(param_2);
  do {
    iVar8 = -0x539cf1b7;
    do {
      while( true ) {
        while (iVar8 < 0x1e10481d) {
          if (iVar8 < -0x20f90bab) {
            if (iVar8 != -0x539cf1b7) {
              if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
                __stack_chk_fail();
              }
              return;
            }
            uVar6 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371cf)])
                              (&local_70,&local_78);
            iVar8 = 0x1225e1d1;
            if ((uVar6 & 1) == 0) {
              iVar8 = 0x1e10481d;
            }
          }
          else if (iVar8 == -0x20f90bab) {
            (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371c2)])(param_1);
            iVar8 = -0x33b01906;
          }
          else {
            pbVar7 = (byte *)(*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371ce)])
                                       (&local_70);
            bVar1 = *pbVar7;
            uVar4 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371c1)])(bVar1 >> 4);
            (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371c0)])(param_1,uVar4);
            uVar4 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371c1)])(bVar1);
            (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371c0)])(param_1,uVar4);
            iVar8 = 0x7cebf8b9;
          }
        }
        if (iVar8 != 0x1e10481d) break;
        iVar8 = 0x73a761c2;
      }
      bVar3 = iVar8 == 0x73a761c2;
      iVar8 = -0x33b01906;
    } while (bVar3);
    (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371c3)])(&local_70);
  } while( true );
}


