// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00136990; body: [[00136990, 00136b23]]

void FUN_00136990(long param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  int in_w11;
  undefined1 local_6c [4];
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  iVar1 = -0x6bbc9658;
  if (param_1 != 0) {
    iVar1 = -0x2c59b079;
  }
  iVar5 = -0x21443ed8;
  do {
    iVar2 = -0x5625e564;
    if (7 < in_w11) {
      iVar2 = -0xadb2918;
    }
LAB_00136a5c:
    do {
      while (iVar5 < -0x21443ed8) {
        if (iVar5 < -0x5625e564) {
LAB_00136a54:
          iVar5 = -0x4ec6c8c7;
        }
        else {
          if (iVar5 != -0x5625e564) {
            if (iVar5 == -0x4ec6c8c7) {
              if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
                __stack_chk_fail();
              }
              return;
            }
            in_w11 = 0;
            goto LAB_00136a28;
          }
          local_6c[0] = (undefined1)(param_2 >> ((ulong)(uint)(in_w11 << 3) & 0x3f));
          (*(code *)(&PTR_FUN_001faed0)[(long)DAT_001fbb18 ^ 0x1fffffffdcc37180])(param_1,local_6c);
          iVar5 = 0x2d4618f5;
        }
      }
      if (iVar5 < 0x2d4618f5) {
        bVar4 = iVar5 != -0x21443ed8;
        iVar5 = iVar1;
        if (bVar4) goto LAB_00136a54;
        goto LAB_00136a5c;
      }
      bVar4 = iVar5 == 0x2ec845f6;
      iVar5 = iVar2;
    } while (bVar4);
    in_w11 = in_w11 + 1;
LAB_00136a28:
    iVar5 = 0x2ec845f6;
  } while( true );
}


