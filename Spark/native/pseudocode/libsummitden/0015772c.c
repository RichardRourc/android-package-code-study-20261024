// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0015772c; body: [[0015772c, 0015782f]]

void FUN_0015772c(long *param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  int iVar5;
  undefined8 uVar6;
  
  iVar1 = 0x205a0a08;
  if (*(long *)*param_1 != 0) {
    iVar1 = 0x47a5cd35;
  }
  iVar2 = -0x6f0e2654;
  while( true ) {
    do {
      iVar5 = iVar2;
      iVar2 = iVar1;
    } while (iVar5 == -0x6f0e2654);
    if (iVar5 != 0x47a5cd35) break;
    (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b4c)])(*param_1);
    (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8bce)])(*param_1);
    puVar3 = (undefined8 *)*param_1;
    uVar6 = *puVar3;
    uVar4 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8bcc)])();
    (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8bd4)])(puVar3 + 2,uVar6,uVar4);
    iVar2 = 0x205a0a08;
  }
  return;
}


