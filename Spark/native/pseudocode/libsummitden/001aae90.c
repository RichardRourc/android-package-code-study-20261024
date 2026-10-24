// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001aae90; body: [[001aae90, 001ab083]]

void FUN_001aae90(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  byte *pbVar3;
  int iVar4;
  ulong uVar5;
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_70 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b586)])();
  local_78 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b587)])(param_1);
  uVar5 = 0xcbf29ce484222325;
  iVar4 = -0x522a6048;
  while( true ) {
    while (-0x3c483766 < iVar4) {
      if (iVar4 == -0x3c483765) {
        iVar4 = -0x499a92bf;
      }
      else if (iVar4 == -0x325351a8) {
        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5fb)])(&local_70);
        iVar4 = -0x522a6048;
      }
      else {
        pbVar3 = (byte *)(*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b585)])(&local_70)
        ;
        uVar5 = (uVar5 ^ *pbVar3) * 0x100000001b3;
        iVar4 = -0x325351a8;
      }
    }
    if (iVar4 != -0x522a6048) break;
    uVar2 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b584)])(&local_70,&local_78);
    iVar4 = -0xe7b923b;
    if ((uVar2 & 1) == 0) {
      iVar4 = -0x3c483765;
    }
  }
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
            (&DAT_00200259,0x11,&DAT_002047f0,&DAT_00200259);
  uVar2 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b430)])(&DAT_00200259);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b431)])(uVar2 ^ uVar5);
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


