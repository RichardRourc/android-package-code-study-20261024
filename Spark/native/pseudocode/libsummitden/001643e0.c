// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001643e0; body: [[001643e0, 001645db]]

undefined8 * FUN_001643e0(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  code *pcVar9;
  
  uVar2 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a76)])();
  iVar7 = 0x27f050c3;
  if (param_3 <= uVar2) {
    iVar7 = -0x1dc88fc0;
  }
  iVar1 = -0x5b6bbd57;
  while( true ) {
    do {
      while (iVar6 = iVar1, iVar6 < -0x5b6bbd57) {
        if (iVar6 == -0x7c3e03ed) {
          lVar3 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a4a)])(param_3);
          uVar5 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a30)])
                            (param_1,lVar3 + 1);
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a48)])(uVar5,lVar3 + 1);
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a4e)])(param_1,lVar3 + 1);
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a49)])(param_1,uVar5);
          uVar8 = 0x98a52a4f;
        }
        else {
          *param_1 = 0;
          param_1[1] = 0;
          uVar8 = 0x98a52a74;
          param_1[2] = 0;
        }
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ uVar8)])(param_1,param_3);
        iVar1 = 0x17ebbe8a;
      }
      iVar1 = iVar7;
    } while (iVar6 < -0x1dc88fc0);
    if (iVar6 != -0x1dc88fc0) break;
    uVar2 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ab6)])(param_3);
    iVar1 = -0x75eb5302;
    if ((uVar2 & 1) == 0) {
      iVar1 = -0x7c3e03ed;
    }
  }
  if (iVar6 == 0x17ebbe8a) {
    puVar4 = (undefined8 *)
             (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae1)])(param_1,param_3);
    return puVar4;
  }
  uVar5 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a77)])();
  pcVar9 = (code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52afb)];
  do {
    uVar2 = (*pcVar9)(uVar5);
    iVar7 = 0x43412d26;
    if ((uVar2 & 1) == 0) {
      iVar7 = 0x55e4880;
    }
  } while (iVar7 == 0x4492c578);
  do {
    uVar8 = 0x98a52a75;
    if (iVar7 != 0x55e4880) {
      if (iVar7 == 0x225ec2b6) {
        return param_1;
      }
      uVar8 = 0x98a52af8;
    }
    param_1 = (undefined8 *)(*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ uVar8)])(uVar5);
    iVar7 = 0x225ec2b6;
  } while( true );
}


