// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0013e8cc; body: [[0013e8cc, 0013eb3b]]

void FUN_0013e8cc(long param_1,long param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  ulong unaff_x24;
  
  iVar4 = 0x22d6e7b9;
  iVar1 = iVar4;
  if (param_3 != 0) {
    iVar1 = -0x31cb6b8f;
  }
  iVar2 = iVar4;
  if (param_2 != 0) {
    iVar2 = 0x55062300;
  }
  if (param_1 != 0) {
    iVar4 = -0x524f5b71;
  }
  iVar5 = 0xf32d77a;
LAB_0013e998:
  do {
    while( true ) {
      iVar6 = iVar5;
      iVar5 = iVar6;
      if (-0x125f61bc < iVar6) break;
      if (iVar6 < -0x35a54739) {
        iVar5 = iVar2;
        if (iVar6 != -0x524f5b71) {
          if (iVar6 == -0x512b6604) {
            unaff_x24 = unaff_x24 + 1;
            iVar5 = -0x806b004;
          }
          else {
            iVar5 = iVar6;
            if (iVar6 == -0x47cf2337) {
LAB_0013e990:
              iVar5 = -0x10f73bd4;
            }
          }
        }
      }
      else if (iVar6 == -0x35a54739) {
        lVar7 = *(long *)(param_1 + 0x68);
        uVar3 = *(undefined1 *)(param_2 + unaff_x24);
        *(long *)(param_1 + 0x68) = lVar7 + 1;
        *(undefined1 *)(param_1 + 0x28 + lVar7) = uVar3;
        iVar5 = -0x125f61bb;
        if (*(long *)(param_1 + 0x68) != 0x40) {
          iVar5 = -0x256dd55b;
        }
      }
      else if (iVar6 == -0x31cb6b8f) {
        unaff_x24 = 0;
        iVar5 = -0x806b004;
      }
      else if (iVar6 == -0x256dd55b) {
        iVar5 = -0x512b6604;
      }
    }
    if (0xf32d779 < iVar6) {
      iVar5 = iVar4;
      if (iVar6 != 0xf32d77a) {
        if (iVar6 == 0x22d6e7b9) goto LAB_0013e990;
        iVar5 = iVar6;
        if (iVar6 == 0x55062300) {
          iVar5 = iVar1;
        }
      }
      goto LAB_0013e998;
    }
    if (iVar6 == -0x125f61bb) {
      (*(code *)(&PTR_FUN_001faed0)[(long)DAT_001fbb18 ^ 0x1fffffffdcc3709f])
                (param_1,param_1 + 0x28);
      *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 0x200;
      *(undefined8 *)(param_1 + 0x68) = 0;
      iVar5 = -0x256dd55b;
    }
    else if (iVar6 == -0x806b004) {
      iVar5 = -0x35a54739;
      if (param_3 <= unaff_x24) {
        iVar5 = -0x47cf2337;
      }
    }
    else if (iVar6 == -0x10f73bd4) {
      return;
    }
  } while( true );
}


