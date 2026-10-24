// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 00118500; body: [[00118500, 00118abb]]

void FUN_00118500(undefined8 param_1,undefined8 param_2,double *param_3)

{
  long lVar1;
  long lVar2;
  short sVar3;
  ulong uVar4;
  long lVar5;
  void *unaff_x23;
  double unaff_x26;
  double unaff_d8;
  undefined8 local_a0;
  void *local_98;
  int local_8c;
  long local_88;
  long local_80;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  local_8c = 0;
  local_a0 = 0;
  local_98 = (void *)0x0;
  lVar2 = -0x6de64a9f2615d4e5;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while (lVar5 = lVar2, lVar2 = lVar5, lVar5 < -0x19f79d8417373b2a) {
              if (lVar5 < -0x4a8391dc248c7f4c) {
                if (lVar5 < -0x6de64a9f2615d4e5) {
                  lVar2 = 0x2b5387362988d12e;
                  if ((lVar5 != -0x7e742c79edd0d15d) &&
                     (lVar2 = lVar5, lVar5 == -0x7a5f2b3cc1020462)) {
                    local_88 = 0;
                    local_80 = 0;
                    FUN_001f3abc(0,&local_88);
                    unaff_d8 = (double)local_80 / 1000000.0 + (double)local_88 * 1000.0;
                    lVar2 = 0x299a25d16e47a356;
                    if (unaff_d8 - *param_3 <= 15000.0) {
                      lVar2 = -0x25b220ee67c01f8c;
                    }
                  }
                }
                else if (lVar5 == -0x6de64a9f2615d4e5) {
                  uVar4 = FUN_00139a4c(&local_8c,param_1,param_2,&local_98,&local_a0);
                  lVar2 = 0x4cb25ba0d623a5cf;
                  if ((uVar4 & 1) == 0) {
                    lVar2 = 0x26b62020b0aa121e;
                  }
                }
                else if (lVar5 == -0x578680e8d268dce5) {
                  FUN_002083ac(param_3 + 4,0x32);
                  unaff_x26 = (double)((ulong)param_3[0x47] | 1);
                  lVar2 = -0x4a8391dc248c7f4c;
                }
              }
              else if (lVar5 < -0x2d58c8d04261592b) {
                if (lVar5 == -0x4a8391dc248c7f4c) {
                  param_3[0x47] = (double)((ulong)unaff_x26 | 0x4000000000400);
                  lVar2 = -0x7e742c79edd0d15d;
                  unaff_x23 = local_98;
                  if (local_98 != (void *)0x0) {
                    lVar2 = 0x516001ab3b518ec4;
                  }
                }
                else if (lVar5 == -0x316debd89bccb892) {
                  *param_3 = unaff_d8;
                  lVar2 = 0x42499f464d274604;
                }
              }
              else {
                lVar2 = 0x3d035c9aa1a74bc4;
                if (((lVar5 != -0x2d58c8d04261592b) &&
                    (lVar2 = -0x316debd89bccb892, lVar5 != -0x25b220ee67c01f8c)) &&
                   (lVar2 = lVar5, lVar5 == -0x212ad74160accdfe)) {
                  lVar2 = 0x42499f464d274604;
                }
              }
            }
            if (lVar5 < 0x3d035c9aa1a74bc4) break;
            if (lVar5 < 0x4cb25ba0d623a5cf) {
              if (lVar5 == 0x3d035c9aa1a74bc4) {
                lVar2 = -0x7a5f2b3cc1020462;
                if (*(char *)(param_3 + 1) != '\0') {
                  lVar2 = -0x212ad74160accdfe;
                }
              }
              else if (lVar5 == 0x42499f464d274604) {
                lVar2 = 0x2eeb9df6a9c9b9ed;
                if (local_8c != 0) {
                  lVar2 = -0x578680e8d268dce5;
                }
              }
            }
            else if (lVar5 == 0x4cb25ba0d623a5cf) {
              sVar3 = FUN_00138f04(param_1,param_2,local_98,local_a0);
              lVar2 = -0x2d58c8d04261592b;
              if (sVar3 != 0) {
                lVar2 = -0x19f79d8417373b2a;
              }
            }
            else if (lVar5 == 0x516001ab3b518ec4) {
              free(unaff_x23);
              lVar2 = 0x2b5387362988d12e;
            }
          }
          if (0x299a25d16e47a355 < lVar5) break;
          if (lVar5 == -0x19f79d8417373b2a) {
            FUN_002083ac(param_3 + 4,10);
            param_3[0x47] = (double)((ulong)param_3[0x47] | 1);
            lVar2 = 0x3d035c9aa1a74bc4;
          }
          else if (lVar5 == 0x26b62020b0aa121e) {
            lVar2 = 0x42499f464d274604;
          }
        }
        if (lVar5 != 0x299a25d16e47a356) break;
        *(undefined1 *)(param_3 + 1) = 1;
        lVar2 = -0x316debd89bccb892;
      }
      if (lVar5 != 0x2eeb9df6a9c9b9ed) break;
      unaff_x26 = param_3[0x47];
      lVar2 = -0x4a8391dc248c7f4c;
    }
  } while (lVar5 != 0x2b5387362988d12e);
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_8c == 0);
}


