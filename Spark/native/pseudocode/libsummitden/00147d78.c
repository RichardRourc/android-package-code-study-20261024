// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00147d78; body: [[00147d78, 0014813f]]

void FUN_00147d78(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  code *pcVar8;
  int iVar9;
  uint uVar10;
  undefined8 local_78;
  undefined1 local_6c [4];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b08)])();
  iVar1 = 0x1bb014b4;
  if (param_1 != param_2) {
    iVar1 = -0x47ff7d49;
  }
  pcVar8 = (code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b09)];
  iVar2 = 0x15e680c7;
  if (param_2 != param_1) {
    iVar2 = -0x221de467;
  }
  iVar4 = 0x20ea418f;
LAB_00147e64:
  do {
    while (iVar9 = iVar4, iVar4 = iVar9, iVar9 < 0x15e680c7) {
      if (iVar9 < -0x47ff7d49) {
        if (iVar9 == -0x720af6e4) {
          uVar6 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b09)])(param_1);
          iVar4 = 0x15e680c7;
          if ((uVar6 & 1) == 0) {
            iVar4 = 0x48bb4fba;
          }
        }
        else if (iVar9 == -0x68940022) {
          local_78 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b27)])(param_2);
          uVar6 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b09)])(param_2);
          (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b41)])(param_1,param_2);
          uVar7 = param_2[1];
          uVar5 = *param_2;
          param_1[2] = param_2[2];
          param_1[1] = uVar7;
          *param_1 = uVar5;
          (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b63)])(param_2,0);
          uVar5 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b64)])(param_2);
          local_6c[0] = 0;
          (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b6d)])(uVar5,local_6c);
          iVar4 = 0x1bb014b4;
          if ((uVar6 & 1) == 0) {
            iVar4 = -0x366258ca;
          }
        }
      }
      else if (iVar9 == -0x47ff7d49) {
        uVar10 = 0x283c8b42;
        uVar5 = local_78;
LAB_001480dc:
        (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ uVar10)])(param_2,uVar5);
        iVar4 = -0x720af6e4;
      }
      else {
        iVar4 = iVar1;
        if ((iVar9 != -0x366258ca) && (iVar4 = iVar9, iVar9 == -0x221de467)) {
          uVar5 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b1a)])(param_1);
          (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2b)])(param_1,uVar5);
          iVar4 = 0x15e680c7;
        }
      }
    }
    if (0x48bb4fb9 < iVar9) {
      iVar4 = iVar2;
      if ((iVar9 != 0x48bb4fba) && (iVar4 = iVar9, iVar9 == 0x76e3c32c)) {
        uVar5 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b0a)])(param_1);
        uVar7 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b0b)])(param_1);
        (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b0c)])(param_1,uVar5,uVar7);
        iVar4 = -0x68940022;
      }
      goto LAB_00147e64;
    }
    if (iVar9 == 0x1bb014b4) {
      uVar10 = 0x283c8b2b;
      uVar5 = 0;
      goto LAB_001480dc;
    }
    if (iVar9 == 0x20ea418f) {
      uVar6 = (*pcVar8)(param_1);
      iVar4 = 0x76e3c32c;
      if ((uVar6 & 1) == 0) {
        iVar4 = -0x68940022;
      }
    }
    else if (iVar9 == 0x15e680c7) {
      if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  } while( true );
}


