// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 001de688; body: [[001de688, 001de957]]

/* WARNING: Removing unreachable block (ram,0x001de7e4) */

void FUN_001de688(int *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 ulong *param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 unaff_x23;
  undefined8 uVar6;
  size_t unaff_x24;
  ulong unaff_x28;
  size_t local_78;
  undefined8 local_70;
  
  lVar2 = tpidr_el0;
  lVar4 = *(long *)(lVar2 + 0x28);
  local_78 = 0;
  local_70 = 0;
  FUN_0016df9c();
  lVar1 = 0x65536dc2a8308acd;
  if (*param_1 != 0) {
    lVar1 = -0x316a2fad8e5725cc;
  }
  lVar3 = 0x32f4713bcaf93571;
  do {
    while( true ) {
      while (uVar6 = unaff_x23, lVar5 = lVar3, unaff_x23 = uVar6, 0x32f4713bcaf93570 < lVar5) {
        if (lVar5 < 0x3b16db62a3c2f4fb) {
          lVar3 = lVar1;
          if ((lVar5 != 0x32f4713bcaf93571) && (lVar3 = lVar5, lVar5 == 0x3ace195dd3930386)) {
            FUN_001706d8(param_2,param_4,uVar6);
            lVar3 = -0x12e0f8e15901e122;
          }
        }
        else {
          lVar3 = -0x12e0f8e15901e122;
          if ((lVar5 != 0x3b16db62a3c2f4fb) && (lVar3 = lVar5, lVar5 == 0x65536dc2a8308acd)) {
            unaff_x28 = param_5[1];
            lVar3 = 0xc7bf249d1db72b2;
            unaff_x24 = local_78;
            if (unaff_x28 <= *param_5) {
              lVar3 = 0x27963d1423e000f6;
            }
          }
        }
      }
      if (lVar5 < 0xc7bf249d1db72b2) break;
      if (lVar5 == 0xc7bf249d1db72b2) {
        *param_1 = 1;
        lVar3 = -0x111819a4994f0fa;
      }
      else {
        lVar3 = lVar5;
        if (lVar5 == 0x27963d1423e000f6) {
          memcpy((void *)(param_5[2] + unaff_x28),(void *)0x0,unaff_x24);
          param_5[1] = param_5[1];
          lVar3 = -0x111819a4994f0fa;
        }
      }
    }
    lVar3 = -0x111819a4994f0fa;
  } while (((lVar5 == -0x316a2fad8e5725cc) ||
           (lVar3 = 0x3b16db62a3c2f4fb, unaff_x23 = local_70, lVar5 == -0x111819a4994f0fa)) ||
          (lVar3 = lVar5, unaff_x23 = uVar6, lVar5 != -0x12e0f8e15901e122));
  if (*(long *)(lVar2 + 0x28) == lVar4) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


