// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001564c0; body: [[001564c0, 001567d3]]

uint FUN_001564c0(undefined8 param_1)

{
  long lVar1;
  byte *pbVar2;
  ulong uVar3;
  int iVar4;
  uint uVar5;
  int unaff_w26;
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_70 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8a33)])();
  local_78 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8abe)])(param_1);
  uVar5 = 0xffffffff;
  iVar4 = -0x20989f87;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (-0x1ce692f < iVar4) {
            if (iVar4 < 0x4da08974) {
              if (iVar4 == -0x1ce692e) {
                (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8a81)])(&local_70);
                iVar4 = -0x20989f87;
              }
              else if (iVar4 == 0x223e7dee) {
                unaff_w26 = unaff_w26 + 1;
                iVar4 = -0x19bc04e5;
              }
              else if ((iVar4 == 0x40998b39) && (iVar4 = -0xf907106, (uVar5 & 1) != 0)) {
                iVar4 = -0x12f912b3;
              }
            }
            else if (iVar4 == 0x4da08974) {
              iVar4 = 0x223e7dee;
            }
            else if (iVar4 == 0x65d8640e) {
              iVar4 = -0x1bf56817;
            }
            else if (iVar4 == 0x74781dab) {
              iVar4 = -0x1ce692e;
            }
          }
          if (-0x1bf56818 < iVar4) break;
          if (iVar4 == -0x51195a91) {
            pbVar2 = (byte *)(*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8a80)])
                                       (&local_70);
            unaff_w26 = 0;
            uVar5 = uVar5 ^ *pbVar2;
            iVar4 = -0x19bc04e5;
          }
          else if (iVar4 == -0x303dae77) {
            iVar4 = 0x74781dab;
          }
          else if ((iVar4 == -0x20989f87) &&
                  (uVar3 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8abf)])
                                     (&local_70,&local_78), iVar4 = -0x51195a91, (uVar3 & 1) == 0))
          {
            iVar4 = 0x65d8640e;
          }
        }
        if (iVar4 < -0x12f912b3) break;
        if (iVar4 == -0x12f912b3) {
          uVar5 = uVar5 >> 1 ^ 0xedb88320;
          iVar4 = 0x4da08974;
        }
        else if (iVar4 == -0xf907106) {
          uVar5 = uVar5 >> 1;
          iVar4 = 0x4da08974;
        }
      }
      if (iVar4 != -0x19bc04e5) break;
      iVar4 = 0x40998b39;
      if (7 < unaff_w26) {
        iVar4 = -0x303dae77;
      }
    }
  } while (iVar4 != -0x1bf56817);
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return ~uVar5;
}


