// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001bfe70; body: [[001bfe70, 001c0207]]

uint FUN_001bfe70(long param_1)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  int unaff_w28;
  uint unaff_w29;
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_70 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb8c)])();
  local_78 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb83)])(param_1);
  iVar3 = 0x5b00ff3;
LAB_001bff3c:
  while (0x18707ec5 < iVar3) {
    if (iVar3 < 0x58b06449) {
      if (iVar3 < 0x31f8d296) {
        if (iVar3 == 0x1d975765) {
LAB_001c00ec:
          iVar3 = 0x5b7ff6cf;
        }
        else if (iVar3 == 0x18707ec6) {
LAB_001c01cc:
          if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return unaff_w29 & 1;
        }
      }
      else if (iVar3 == 0x31f8d296) {
        unaff_w28 = 2;
        iVar3 = -0x2e63c4e9;
      }
      else if (iVar3 == 0x3462f456) goto LAB_001bff2c;
    }
    else if (iVar3 < 0x6f6063b7) {
      if (iVar3 == 0x58b06449) {
LAB_001bff2c:
        unaff_w29 = 1;
        unaff_w28 = 1;
        iVar3 = -0x63b911c5;
      }
      else if (iVar3 == 0x5b7ff6cf) {
LAB_001c00b8:
        (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb9b)])(&local_70);
        iVar3 = 0x5b00ff3;
      }
    }
    else {
      if (iVar3 == 0x6f6063b7) goto LAB_001c00a8;
      if (iVar3 == 0x6f868ffc) {
        uVar2 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb99)])(param_1);
        iVar3 = 0x3462f456;
        if ((uVar2 & 1) == 0) {
          iVar3 = -0x4a97a2f1;
        }
      }
    }
  }
  if (iVar3 < -0x4a97a2f1) {
    if (iVar3 == -0x6f8e4ccc) {
      param_1 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb81)])(&local_70);
      uVar2 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb80)])();
      iVar3 = 0x6f868ffc;
      if ((uVar2 & 1) == 0) {
        iVar3 = -0x655dfa24;
      }
      goto LAB_001bff3c;
    }
    if (iVar3 == -0x655dfa24) {
      unaff_w28 = 3;
      iVar3 = -0x63b911c5;
      goto LAB_001bff3c;
    }
    if (iVar3 != -0x63b911c5) goto LAB_001bff3c;
    if (unaff_w28 == 3) goto LAB_001c00b8;
    if (unaff_w28 == 0) goto LAB_001c00ec;
  }
  else {
    if (0x5b00ff2 < iVar3) {
      if (iVar3 == 0x5b00ff3) {
        uVar2 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb82)])
                          (&local_70,&local_78);
        iVar3 = -0x6f8e4ccc;
        if ((uVar2 & 1) == 0) {
          iVar3 = 0x31f8d296;
        }
      }
      else if (iVar3 == 0x1527661e) {
        unaff_w28 = 0;
        iVar3 = -0x63b911c5;
      }
      goto LAB_001bff3c;
    }
    if (iVar3 == -0x4a97a2f1) {
      uVar2 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbcd)])(param_1 + 0x18);
      iVar3 = 0x58b06449;
      if ((uVar2 & 1) == 0) {
        iVar3 = 0x1527661e;
      }
      goto LAB_001bff3c;
    }
    if (iVar3 != -0x2e63c4e9) goto LAB_001bff3c;
  }
  if (unaff_w28 != 2) goto LAB_001c01cc;
LAB_001c00a8:
  unaff_w29 = 0;
  iVar3 = 0x18707ec6;
  goto LAB_001bff3c;
}


