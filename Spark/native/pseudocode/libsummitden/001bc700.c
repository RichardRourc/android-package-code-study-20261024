// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001bc700; body: [[001bc700, 001bc8c3]]

undefined ** FUN_001bc700(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  undefined **ppuVar5;
  code *pcVar6;
  double unaff_d8;
  undefined1 auStack_f8 [128];
  long local_78;
  
  lVar1 = tpidr_el0;
  ppuVar5 = &PTR_FUN_00203000;
  local_78 = *(long *)(lVar1 + 0x28);
  (*(code *)(&PTR_FUN_00202fd0)[(int)(DAT_00203100 ^ 0x3f396fce)])
            (&DAT_00202f9c,0xd,&DAT_00205c34,&DAT_00202f9c);
  pcVar6 = (code *)(&PTR_FUN_00202fd0)[(int)(DAT_00203100 ^ 0x3f396fcf)];
  iVar2 = 0x157945da;
  while( true ) {
    do {
      while (iVar4 = iVar2, iVar4 < 0x1e6563f3) {
        if (iVar4 == 0x157945da) {
          uVar3 = (*pcVar6)(&DAT_00202f9c,auStack_f8,0x80);
          iVar2 = 0x143184fc;
          if ((uVar3 & 1) == 0) {
            iVar2 = 0x341ad66b;
          }
        }
        else if (iVar4 == -0x4f79b6f6) {
          ppuVar5 = (undefined **)(long)(unaff_d8 * 1000.0);
          iVar2 = 0x1e6563f3;
        }
        else {
          unaff_d8 = (double)(*(code *)(&PTR_FUN_00202fd0)[(int)(DAT_00203100 ^ 0x3f396fc8)])
                                       (auStack_f8,0);
          iVar2 = 0x334fec42;
          if (0.0 < unaff_d8) {
            iVar2 = -0x4f79b6f6;
          }
        }
      }
      iVar2 = 0x248f23c6;
    } while (iVar4 < 0x248f23c6);
    if (iVar4 == 0x248f23c6) break;
    ppuVar5 = (undefined **)0xffffffffffffffff;
    if (iVar4 == 0x334fec42) {
      iVar2 = 0x1e6563f3;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return ppuVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


