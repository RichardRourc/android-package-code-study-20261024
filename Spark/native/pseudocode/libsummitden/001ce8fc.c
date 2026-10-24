// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001ce8fc; body: [[001ce8fc, 001ce963]]

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001ce8fc(undefined8 *param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  
  if (0xfff < param_3) {
    pcVar7 = (char *)FUN_001eeb4c(0x28);
    param_1[2] = pcVar7;
    uVar6 = s_unspecified_generic_category_err_0011dc97._24_8_;
    uVar5 = s_unspecified_generic_category_err_0011dc97._16_8_;
    uVar4 = s_unspecified_generic_category_err_0011dc97._8_8_;
    uVar3 = s_unspecified_generic_category_err_0011dc97._0_8_;
    uVar2 = _UNK_0011d818;
    uVar1 = _DAT_0011d810;
    pcVar7[0x20] = 'o';
    pcVar7[0x21] = 'r';
    param_1[1] = uVar2;
    *param_1 = uVar1;
    *(undefined8 *)(pcVar7 + 8) = uVar4;
    *(undefined8 *)pcVar7 = uVar3;
    *(undefined8 *)(pcVar7 + 0x18) = uVar6;
    *(undefined8 *)(pcVar7 + 0x10) = uVar5;
    pcVar7[0x22] = '\0';
    return;
  }
  FUN_001ce7d4();
  return;
}


