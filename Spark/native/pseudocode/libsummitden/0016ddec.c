// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0016ddec; body: [[0016ddec, 0016e05b]]

ulong FUN_0016ddec(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong in_x5;
  int iVar11;
  ulong local_70;
  ulong local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  uStack_58 = param_2[1];
  local_60 = *param_2;
  local_68 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ad9)])();
  local_70 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b5f)])(&local_60);
  uVar6 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ab4)])(param_1);
  uVar7 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b5c)])(&local_60);
  puVar8 = (undefined8 *)
           (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a1f)])(&local_68,&local_70);
  uVar9 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52bc3)])(uVar6,uVar7,*puVar8);
  iVar1 = 0x198f363;
  if ((int)uVar9 != 0) {
    iVar1 = -0x1c2e9d92;
  }
  iVar2 = -0x74142331;
  if (local_68 <= local_70) {
    iVar2 = -0x28e6b83f;
  }
  iVar3 = 0xb0916b9;
  if (local_70 <= local_68) {
    iVar3 = 0x287f06c4;
  }
  iVar5 = 0x3efef158;
  do {
    while( true ) {
      while (iVar11 = iVar5, uVar10 = in_x5 & 0xffffffff, in_x5 = uVar10, iVar5 = iVar11,
            iVar11 < 0xb0916b9) {
        if (iVar11 < -0x1c2e9d92) {
          if (iVar11 == -0x74142331) {
            in_x5 = 1;
            iVar5 = 0x60d81996;
          }
          else if (iVar11 == -0x28e6b83f) {
            in_x5 = 0;
            iVar5 = 0x60d81996;
          }
        }
        else {
          in_x5 = uVar9 & 0xffffffff;
          iVar5 = 0x60d81996;
          if ((iVar11 != -0x1c2e9d92) && (in_x5 = uVar10, iVar5 = iVar11, iVar11 == 0x198f363)) {
            iVar5 = iVar3;
          }
        }
      }
      if (0x3efef157 < iVar11) break;
      if (iVar11 == 0xb0916b9) {
        in_x5 = 0xffffffff;
        iVar5 = 0x60d81996;
      }
      else if (iVar11 == 0x287f06c4) {
        iVar5 = iVar2;
      }
    }
    iVar5 = iVar1;
  } while ((iVar11 == 0x3efef158) || (iVar5 = iVar11, iVar11 != 0x60d81996));
  if (*(long *)(lVar4 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar10;
}


