// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001645dc; body: [[001645dc, 001646cb]]

undefined8 FUN_001645dc(undefined8 param_1)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  undefined8 unaff_x20;
  code *pcVar4;
  
  pcVar4 = (code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52afb)];
  do {
    uVar1 = (*pcVar4)(param_1);
    iVar2 = 0x43412d26;
    if ((uVar1 & 1) == 0) {
      iVar2 = 0x55e4880;
    }
  } while (iVar2 == 0x4492c578);
  do {
    uVar3 = 0x98a52a75;
    if (iVar2 != 0x55e4880) {
      if (iVar2 == 0x225ec2b6) {
        return unaff_x20;
      }
      uVar3 = 0x98a52af8;
    }
    unaff_x20 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ uVar3)])(param_1);
    iVar2 = 0x225ec2b6;
  } while( true );
}


