// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001c4398; body: [[001c4398, 001c4a0f]]

void FUN_001c4398(long param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  long unaff_x23;
  int unaff_w26;
  long local_78;
  byte local_6c;
  
  *(bool *)(param_2 + 0x18) = param_2 == param_1;
  iVar4 = -0x64b311dd;
LAB_001c442c:
  while( true ) {
    while( true ) {
      while (iVar5 = iVar4, iVar4 = iVar5, 0x33e4b70f < iVar5) {
        if (iVar5 < 0x629ac4df) {
          if (iVar5 < 0x4f2809dc) {
            if ((iVar5 == 0x33e4b710) || (iVar5 == 0x3753fc22)) {
              iVar4 = 0x5067e4a2;
              if (unaff_w26 != 0) {
                return;
              }
            }
            else if (iVar5 == 0x38c9424e) {
              iVar4 = -0x2fa6129c;
              if (*(char *)(local_78 + 0x18) == '\0') {
                iVar4 = 0x55fc1149;
              }
            }
          }
          else if (iVar5 == 0x4f2809dc) {
            lVar2 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bad2)])(param_2);
            *(undefined1 *)(lVar2 + 0x18) = 1;
            param_2 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bad2)])();
            *(undefined1 *)(param_2 + 0x18) = 0;
            (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bad0)])();
            unaff_w26 = 3;
            iVar4 = 0x3753fc22;
          }
          else {
            iVar4 = -0x64b311dd;
            if ((iVar5 != 0x5067e4a2) && (iVar4 = iVar5, iVar5 == 0x55fc1149)) {
              lVar2 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bad2)])(param_2);
              *(undefined1 *)(lVar2 + 0x18) = 1;
              param_2 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bad2)])();
              *(bool *)(param_2 + 0x18) = param_2 == param_1;
              *(undefined1 *)(local_78 + 0x18) = 1;
              iVar4 = 0x7dcf9803;
            }
          }
        }
        else if (iVar5 < 0x7d413fb7) {
          if (iVar5 == 0x629ac4df) {
            unaff_w26 = 0;
            iVar4 = 0x33e4b710;
          }
          else {
            iVar4 = 0x5067e4a2;
            if ((iVar5 != 0x788a6555) && (iVar4 = iVar5, iVar5 == 0x79f00149)) {
              param_2 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bad2)])(param_2);
              (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bad0)])();
              iVar4 = -0x1155c658;
            }
          }
        }
        else if (iVar5 == 0x7d413fb7) {
          lVar2 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bad2)])(param_2);
          *(undefined1 *)(lVar2 + 0x18) = 1;
          param_2 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bad2)])();
          *(bool *)(param_2 + 0x18) = param_2 == param_1;
          *(undefined1 *)(unaff_x23 + 0x18) = 1;
          iVar4 = 0x629ac4df;
        }
        else if (iVar5 == 0x7dc1a89f) {
          iVar4 = -0x304adbfc;
          if (*(char *)(unaff_x23 + 0x18) == '\0') {
            iVar4 = 0x7d413fb7;
          }
        }
        else if (iVar5 == 0x7dcf9803) {
          unaff_w26 = 0;
          iVar4 = 0x3753fc22;
        }
      }
      if (iVar5 < -0x304adbfc) break;
      if (iVar5 < -0x1b4cd141) {
        if (iVar5 == -0x304adbfc) {
          uVar3 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bad1)])(param_2);
          iVar4 = -0x1155c658;
          if ((uVar3 & 1) == 0) {
            iVar4 = 0x79f00149;
          }
        }
        else if (iVar5 == -0x2fa6129c) {
          uVar3 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bad1)])(param_2);
          iVar4 = -0x4c927819;
          if ((uVar3 & 1) == 0) {
            iVar4 = 0x4f2809dc;
          }
        }
        else if (iVar5 == -0x1d39bbda) {
          return;
        }
      }
      else {
        iVar4 = 0x5067e4a2;
        if (iVar5 != -0x1b4cd141) {
          if (iVar5 == -0x1155c658) {
            lVar2 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bad2)])(param_2);
            *(undefined1 *)(lVar2 + 0x18) = 1;
            param_2 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bad2)])();
            *(undefined1 *)(param_2 + 0x18) = 0;
            (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bad7)])();
            unaff_w26 = 3;
            iVar4 = 0x33e4b710;
          }
          else {
            iVar4 = iVar5;
            if (iVar5 == 0xdf22d9c) {
              iVar4 = -0x34a1c3f8;
              if ((local_6c & 1) == 0) {
                iVar4 = -0x1d39bbda;
              }
            }
          }
        }
      }
    }
    if (iVar5 < -0x64b311dd) break;
    if (iVar5 == -0x64b311dd) {
      local_6c = 0;
      iVar5 = -0x6e57395b;
      bVar1 = param_2 == param_1;
      iVar4 = 0xdf22d9c;
      goto LAB_001c4428;
    }
    if (iVar5 == -0x4c927819) {
      param_2 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bad2)])(param_2);
      (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bad7)])();
      iVar4 = 0x4f2809dc;
    }
    else if (iVar5 == -0x34a1c3f8) {
      (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bad2)])(param_2);
      uVar3 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bad1)])();
      iVar4 = -0x6fd9ca2f;
      if ((uVar3 & 1) == 0) {
        iVar4 = -0x76c697d7;
      }
    }
  }
  if (iVar5 == -0x76c697d7) {
    lVar2 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bad2)])(param_2);
    iVar5 = 0x38c9424e;
    local_78 = **(long **)(lVar2 + 0x10);
    bVar1 = local_78 == 0;
    iVar4 = -0x2fa6129c;
  }
  else {
    if (iVar5 != -0x6fd9ca2f) {
      if (iVar5 == -0x6e57395b) {
        lVar2 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bad2)])(param_2);
        local_6c = *(byte *)(lVar2 + 0x18) ^ 1;
        iVar4 = 0xdf22d9c;
      }
      goto LAB_001c442c;
    }
    (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bad2)])(param_2);
    lVar2 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bad2)])();
    unaff_x23 = *(long *)(lVar2 + 8);
    iVar4 = -0x304adbfc;
    iVar5 = 0x7dc1a89f;
    bVar1 = unaff_x23 == 0;
  }
LAB_001c4428:
  if (!bVar1) {
    iVar4 = iVar5;
  }
  goto LAB_001c442c;
}


