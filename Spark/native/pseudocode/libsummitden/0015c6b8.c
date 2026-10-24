// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0015c6b8; body: [[0015c6b8, 0015c93f]]

void FUN_0015c6b8(undefined8 *param_1)

{
  byte unaff_10000060;
  byte unaff_10000068;
  int iVar1;
  bool bVar2;
  char *pcVar3;
  byte in_w8;
  int iVar4;
  byte in_w11;
  byte bVar5;
  byte bVar6;
  
  iVar1 = -0x658b8307;
  do {
    do {
      while( true ) {
        while (bVar6 = in_w11, bVar5 = unaff_10000060, iVar4 = iVar1, iVar1 = iVar4,
              unaff_10000060 = bVar5, in_w11 = bVar5, iVar4 < -0x33c1f14f) {
          if (iVar4 < -0x602d76ea) {
            if (iVar4 == -0x658b8307) {
              iVar1 = 0x791b7ebc;
              unaff_10000060 = 0;
              in_w11 = 0;
              if (*(ulong *)param_1[1] <= *(ulong *)*param_1) {
                iVar1 = -0x602d76ea;
              }
            }
            else {
              in_w11 = bVar6;
              if (iVar4 == -0x62c60035) {
                pcVar3 = (char *)(*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aa0)])
                                           (param_1[2],*(undefined8 *)*param_1);
                unaff_10000068 = 1;
                in_w8 = 1;
                iVar1 = 0x4ef1a08a;
                if (*pcVar3 != '\t') {
                  iVar1 = -0x33c1f14f;
                }
              }
            }
          }
          else if (iVar4 == -0x602d76ea) {
            iVar1 = -0x19ddcf90;
            if ((bVar6 & 1) == 0) {
              iVar1 = -0x1589578f;
            }
          }
          else {
            in_w11 = bVar6;
            if (iVar4 == -0x3b999545) {
              pcVar3 = (char *)(*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aa0)])
                                         (param_1[2],*(undefined8 *)*param_1);
              in_w8 = *pcVar3 == '\r';
              iVar1 = 0x4ef1a08a;
              unaff_10000068 = in_w8;
            }
          }
        }
        if (-0x15895790 < iVar4) break;
        if (iVar4 == -0x33c1f14f) {
          pcVar3 = (char *)(*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aa0)])
                                     (param_1[2],*(undefined8 *)*param_1);
          bVar2 = *pcVar3 == '\n';
          iVar4 = -0x3b999545;
LAB_0015c754:
          unaff_10000068 = 1;
          in_w8 = 1;
          iVar1 = 0x4ef1a08a;
          unaff_10000060 = bVar5;
          in_w11 = bVar6;
          if (!bVar2) {
            iVar1 = iVar4;
          }
        }
        else {
          in_w11 = bVar6;
          if (iVar4 == -0x19ddcf90) {
            *(long *)*param_1 = *(long *)*param_1 + 1;
            iVar1 = -0x658b8307;
          }
        }
      }
      iVar1 = -0x602d76ea;
      unaff_10000060 = unaff_10000068;
      in_w11 = in_w8;
    } while (iVar4 == 0x4ef1a08a);
    if (iVar4 == 0x791b7ebc) {
      pcVar3 = (char *)(*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aa0)])
                                 (param_1[2],*(undefined8 *)*param_1);
      bVar2 = *pcVar3 == ' ';
      iVar4 = -0x62c60035;
      goto LAB_0015c754;
    }
    iVar1 = iVar4;
    unaff_10000060 = bVar5;
    in_w11 = bVar5;
    if (iVar4 == -0x1589578f) {
      return;
    }
  } while( true );
}


