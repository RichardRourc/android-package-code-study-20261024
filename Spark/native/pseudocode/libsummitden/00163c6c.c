// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00163c6c; body: [[00163c6c, 00163d9b]]

void FUN_00163c6c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  int iVar8;
  undefined *puVar9;
  
  uVar5 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52acf)])
                    (param_2,0xd6e8feb86659fd93);
  uVar6 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a25)])(&PTR_DAT_001f3018);
  uVar3 = 0;
  if (uVar6 != 0) {
    uVar3 = uVar5 / uVar6;
  }
  puVar7 = (undefined8 *)
           (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a3a)])
                     (&PTR_DAT_001f3018,uVar5 - uVar3 * uVar6);
  puVar9 = (undefined *)*puVar7;
  iVar1 = 0x4518db19;
  if (puVar9 != (undefined *)0x0) {
    iVar1 = 0x5148a3ab;
  }
  iVar8 = -0x5a722564;
  do {
    while (0x4518db18 < iVar8) {
      puVar2 = &DAT_001fd05f;
      if (iVar8 != 0x4518db19) {
        puVar2 = puVar9;
      }
      (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae4)])(param_1,puVar2);
      iVar8 = -0x613b3d68;
    }
    bVar4 = iVar8 == -0x5a722564;
    iVar8 = iVar1;
  } while (bVar4);
  return;
}


