// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00135ab4; body: [[00135ab4, 00135c5b]]

void FUN_00135ab4(undefined8 param_1)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  byte *pbVar8;
  int iVar9;
  ulong uVar10;
  undefined1 local_6c [4];
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  lVar6 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371a5)])();
  lVar7 = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371a4)])();
  local_6c[0] = 0;
  (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371bd)])(param_1,0x20,local_6c);
  uVar10 = 0;
  do {
    iVar1 = 0x6aa61915;
    if (0x1f < uVar10) {
      iVar1 = 0x13770a78;
    }
    iVar5 = 0x62853773;
    while( true ) {
      do {
        while (iVar9 = iVar5, iVar9 < 0x30e8ce1b) {
          if (iVar9 == 0x13770a78) {
            iVar5 = 0x250fca58;
          }
          else {
            if (iVar9 != 0x250fca58) {
              if (*(long *)(lVar4 + 0x28) == local_68) {
                return;
              }
                    /* WARNING: Subroutine does not return */
              __stack_chk_fail();
            }
            iVar5 = -0x54eaac8a;
          }
        }
        iVar5 = iVar1;
      } while (iVar9 == 0x62853773);
      if (iVar9 != 0x6aa61915) break;
      bVar2 = *(byte *)(lVar6 + uVar10);
      bVar3 = *(byte *)(lVar7 + uVar10);
      pbVar8 = (byte *)(*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc3719c)])
                                 (param_1,uVar10);
      *pbVar8 = bVar3 ^ bVar2;
      iVar5 = 0x30e8ce1b;
    }
    uVar10 = uVar10 + 1;
  } while( true );
}


