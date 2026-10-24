// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001670d4; body: [[001670d4, 0016729b]]

ulong FUN_001670d4(ulong param_1)

{
  bool bVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  int unaff_w21;
  int iVar5;
  
  uVar2 = 0;
  uVar3 = 0x61;
  uVar4 = param_1 % 0x13;
  iVar5 = -0x3e3519ff;
LAB_001671a4:
  do {
    while (-0x2236c01e < iVar5) {
      if (iVar5 < 0x1c1beb94) {
        if (iVar5 == -0x2236c01d) {
          uVar3 = uVar3 + 1;
          iVar5 = -0x3e3519ff;
        }
        else if (iVar5 == 0x15e5e9ca) {
LAB_0016719c:
          iVar5 = -0x2236c01d;
        }
      }
      else if (iVar5 == 0x1c1beb94) {
        unaff_w21 = 2;
        iVar5 = 0x7f03d19e;
      }
      else if (iVar5 == 0x45e9cc4c) {
        bVar1 = uVar2 != uVar4;
        uVar2 = uVar2 + 1;
        iVar5 = -0x37eb2d21;
        if (bVar1) {
          iVar5 = 0x15e5e9ca;
        }
      }
      else if (iVar5 == 0x7f03d19e) {
        if (unaff_w21 != 2) {
          return param_1;
        }
LAB_001671f8:
        unaff_w21 = 1;
        param_1 = 0x62;
        iVar5 = -0x6d81f48a;
      }
    }
    if (-0x3e351a00 < iVar5) {
      if (iVar5 == -0x3e3519ff) {
        iVar5 = -0x3ea4bb59;
        if (0x7a < (uVar3 & 0xff)) {
          iVar5 = 0x1c1beb94;
        }
      }
      else if (iVar5 == -0x37eb2d21) {
        unaff_w21 = 1;
        param_1 = (ulong)uVar3;
        iVar5 = 0x7f03d19e;
      }
      else if (iVar5 == -0x31d9b007) goto LAB_001671f8;
      goto LAB_001671a4;
    }
    if (iVar5 == -0x6146af81) goto LAB_0016719c;
    if (iVar5 == -0x3ea4bb59) {
      iVar5 = -0x6146af81;
      if ((1 << (ulong)((uVar3 & 0xff) - 0x61 & 0x1f) & 0x2eebeeeU) != 0) {
        iVar5 = 0x45e9cc4c;
      }
    }
    else if (iVar5 == -0x6d81f48a) {
      return param_1;
    }
  } while( true );
}


