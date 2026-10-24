// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 0011f368; body: [[0011f368, 0011f647]]

void FUN_0011f368(long param_1,long param_2,short *param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long in_x9;
  long lVar5;
  long lVar6;
  long unaff_x21;
  
  lVar1 = 0x42e31b9b931691d4;
  if (param_2 != 0) {
    lVar1 = 0x7a9bcd40c6c39be5;
  }
  lVar4 = 0x7a9bcd40c6c39be5;
  lVar2 = -0x23a331cb12cbc9d0;
  do {
    while( true ) {
      while (lVar6 = lVar2, lVar5 = in_x9, in_x9 = lVar5, 0xbacab81abb31f88 < lVar6) {
        if (lVar6 < 0x42e31b9b931691d4) {
          if (lVar6 == 0xbacab81abb31f89) {
            uVar3 = FUN_001b208c(*(undefined8 *)(param_1 + lVar5 * 8));
            lVar4 = lVar5;
            lVar2 = 0x5e1d9776c3346af9;
            if ((uVar3 & 1) == 0) {
              lVar2 = -0x75c6b439bc357e24;
            }
          }
          else {
            lVar2 = lVar6;
            if ((lVar6 == 0xd1ed160c559152c) &&
               (unaff_x21 = lVar4 + 1, lVar2 = -0x7afb448e7eb8b5a7, unaff_x21 != param_2)) {
              lVar2 = -0xb9715b8979f7d33;
            }
          }
        }
        else {
          lVar2 = -0x52bf327ff4ce5fc6;
          if (lVar6 != 0x42e31b9b931691d4) {
            if (lVar6 == 0x5e1d9776c3346af9) {
              *param_3 = *param_3 + 1;
              lVar2 = 0xd1ed160c559152c;
            }
            else {
              lVar2 = lVar6;
              if (lVar6 == 0x7a9bcd40c6c39be5) {
                in_x9 = 0;
                lVar2 = 0xbacab81abb31f89;
              }
            }
          }
        }
      }
      if (-0x52bf327ff4ce5fc7 < lVar6) break;
      lVar2 = -0x52bf327ff4ce5fc6;
      if ((lVar6 != -0x7afb448e7eb8b5a7) && (lVar2 = lVar6, lVar6 == -0x75c6b439bc357e24)) {
        lVar2 = 0xd1ed160c559152c;
      }
    }
    lVar2 = lVar1;
  } while (((lVar6 == -0x23a331cb12cbc9d0) ||
           (in_x9 = unaff_x21, lVar2 = 0xbacab81abb31f89, lVar6 == -0xb9715b8979f7d33)) ||
          (in_x9 = lVar5, lVar2 = lVar6, lVar6 != -0x52bf327ff4ce5fc6));
  return;
}


