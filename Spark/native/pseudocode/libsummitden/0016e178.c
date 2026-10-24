// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0016e178; body: [[0016e178, 0016e4cb]]

void FUN_0016e178(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined8 uVar4;
  ulong uVar5;
  int iVar6;
  code *pcVar7;
  int iVar8;
  
  pcVar7 = (code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52afb)];
  iVar1 = -0x2ae20eb2;
  if (param_1 != param_2) {
    iVar1 = 0x7411bec7;
  }
  iVar2 = 0x58949a89;
  if (param_1 != param_2) {
    iVar2 = 0x3e31ab2f;
  }
  iVar6 = -0x59bd1ffe;
LAB_0016e258:
  while (iVar8 = iVar6, iVar6 = iVar8, -0x102e8d63 < iVar8) {
    if (iVar8 < 0x3e31ab2f) {
      if (iVar8 == -0x102e8d62) {
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52afa)])(param_2);
        iVar6 = -0x2ae20eb2;
      }
      else {
        iVar6 = iVar1;
        if ((iVar8 != 0x14795ccb) && (iVar6 = iVar8, iVar8 == 0x3377a7de)) {
          uVar4 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ab1)])(param_2);
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae1)])(param_2,uVar4);
          iVar6 = 0x58949a89;
        }
      }
    }
    else {
      if (iVar8 == 0x3e31ab2f) {
        uVar5 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52afb)])(param_2);
        bVar3 = (uVar5 & 1) == 0;
        iVar6 = 0x58949a89;
        iVar8 = 0x3377a7de;
        goto LAB_0016e254;
      }
      if (iVar8 == 0x7411bec7) {
        uVar5 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52afb)])(param_2);
        iVar6 = -0x2ae20eb2;
        if ((uVar5 & 1) == 0) {
          iVar6 = -0x102e8d62;
        }
      }
      else if (iVar8 == 0x58949a89) {
        return;
      }
    }
  }
  if (iVar8 < -0x57be5a73) {
    if (iVar8 == -0x795221d5) {
      uVar4 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ab1)])(param_1);
      (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae1)])(param_1,uVar4);
      iVar6 = -0x57be5a73;
      goto LAB_0016e258;
    }
    if (iVar8 != -0x59bd1ffe) goto LAB_0016e258;
    uVar5 = (*pcVar7)(param_1);
    bVar3 = (uVar5 & 1) == 0;
    iVar6 = 0x14795ccb;
    iVar8 = -0x509c54b4;
  }
  else {
    iVar6 = iVar2;
    if (iVar8 == -0x57be5a73) goto LAB_0016e258;
    if (iVar8 == -0x509c54b4) {
      (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52afa)])(param_1);
      iVar6 = 0x14795ccb;
      goto LAB_0016e258;
    }
    iVar6 = iVar8;
    if (iVar8 != -0x2ae20eb2) goto LAB_0016e258;
    (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b50)])(param_1,param_2);
    (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52b51)])(param_1,param_2);
    uVar5 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52afb)])(param_1);
    bVar3 = (uVar5 & 1) == 0;
    iVar6 = -0x57be5a73;
    iVar8 = -0x795221d5;
  }
LAB_0016e254:
  if (bVar3) {
    iVar6 = iVar8;
  }
  goto LAB_0016e258;
}


