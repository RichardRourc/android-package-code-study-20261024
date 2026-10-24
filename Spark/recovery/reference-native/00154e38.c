// [[00154e38, 00154e67]]

long FUN_00154e38(ulong *param_1)

{
  ulong uVar1;
  
  uVar1 = *param_1 ^ *param_1 >> 0xc;
  uVar1 = uVar1 ^ uVar1 << 0x19;
  uVar1 = uVar1 ^ uVar1 >> 0x1b;
  *param_1 = uVar1;
  return uVar1 * 0x2545f4914f6cdd1d;
}


