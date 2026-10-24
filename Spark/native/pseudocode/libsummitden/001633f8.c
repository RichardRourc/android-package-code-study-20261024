// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001633f8; body: [[001633f8, 0016368f]]

undefined8 FUN_001633f8(undefined8 param_1,ulong param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  int iVar4;
  ulong uVar5;
  byte *pbVar6;
  undefined8 uVar7;
  int iVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  uVar9 = param_2 ^ 0xcbf29ce484222325;
  local_70 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a54)])();
  auVar10 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a55)])(param_1);
  iVar4 = 0x3dcb63f2;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          auVar3 = auVar10;
          iVar8 = iVar4;
          uVar7 = auVar3._8_8_;
          local_78 = auVar3._0_8_;
          auVar2._8_8_ = uVar9;
          auVar2._0_8_ = local_78;
          auVar10._8_8_ = param_2 ^ 0xa5a55a5af0f00f0f;
          auVar10._0_8_ = local_78;
          iVar4 = iVar8;
          if (iVar8 < 0x3dcb63f2) break;
          if (iVar8 < 0x750252e2) {
            if (iVar8 == 0x3dcb63f2) {
              uVar5 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a2a)])
                                (&local_70,&local_78);
              auVar3._8_8_ = uVar7;
              auVar3._0_8_ = local_78;
              auVar10._8_8_ = uVar7;
              auVar10._0_8_ = local_78;
              iVar4 = 0x5ca53d9;
              if ((uVar5 & 1) == 0) {
                iVar4 = 0x76b61b49;
                auVar10 = auVar3;
              }
            }
            else {
              auVar10 = auVar3;
              if (iVar8 == 0x61b8967d) {
                (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a28)])(&local_70);
                auVar10._8_8_ = uVar7;
                auVar10._0_8_ = local_78;
                iVar4 = 0x3dcb63f2;
              }
            }
          }
          else {
            iVar4 = -0x41413cc;
            if ((iVar8 != 0x750252e2) && (iVar4 = iVar8, auVar10 = auVar3, iVar8 == 0x76b61b49)) {
              iVar4 = 0x207eba52;
            }
          }
        }
        if (iVar8 < 0x1a7ccc71) break;
        iVar4 = -0x41413cc;
        auVar10 = auVar2;
        if (((iVar8 != 0x1a7ccc71) && (iVar4 = iVar8, auVar10 = auVar3, iVar8 == 0x207eba52)) &&
           (iVar4 = 0x750252e2, uVar9 != 0)) {
          iVar4 = 0x1a7ccc71;
        }
      }
      if (iVar8 != 0x5ca53d9) break;
      pbVar6 = (byte *)(*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a2b)])(&local_70);
      auVar10._8_8_ = uVar7;
      auVar10._0_8_ = local_78;
      uVar9 = (uVar9 ^ *pbVar6) * 0x100000001b3;
      uVar9 = uVar9 ^ uVar9 >> 0x17;
      iVar4 = 0x61b8967d;
    }
    auVar10 = auVar3;
  } while (iVar8 != -0x41413cc);
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
}


