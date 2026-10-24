// Ghidra pseudocode. Not original C/C++ source.
// Program: libpl_droidsonroids_gif.so
// Executable SHA256: 6fe3a2e6c3a0b092a79eb16d26516a28289305ad28f7354d5b41a03f4d203997
// Entry: 00106420; body: [[00106420, 00106773]]

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 JNI_OnLoad(long *param_1)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined4 uVar12;
  timespec tStack_40;
  undefined8 local_30;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  uVar12 = 0x10006;
  DAT_0011a028 = param_1;
  iVar8 = (**(code **)(*param_1 + 0x30))(param_1,&local_30,0x10006);
  if (iVar8 == 0) {
    DAT_0011a030 = FUN_00105f54(8,0);
    uVar5 = _UNK_00107ee8;
    uVar4 = _DAT_00107ee0;
    uVar3 = _DAT_00107ed0;
    if (DAT_0011a030 == 0) {
      FUN_00103dc8(local_30,2,"Failed to allocate native memory");
    }
    else {
      lVar9 = *(long *)(DAT_0011a030 + 0x10);
      *(undefined8 *)(lVar9 + 0x2b) = _UNK_00107ed8;
      *(undefined8 *)(lVar9 + 0x23) = uVar3;
      uVar6 = _UNK_00107ef8;
      uVar3 = _DAT_00107ef0;
      *(undefined8 *)(lVar9 + 0x1b) = uVar5;
      *(undefined8 *)(lVar9 + 0x13) = uVar4;
      uVar5 = _UNK_00107f08;
      uVar4 = _DAT_00107f00;
      *(undefined8 *)(lVar9 + 0xb) = uVar6;
      *(undefined8 *)(lVar9 + 3) = uVar3;
      uVar6 = _UNK_00107f18;
      uVar3 = _DAT_00107f10;
      *(undefined8 *)(lVar9 + 0x5b) = uVar5;
      *(undefined8 *)(lVar9 + 0x53) = uVar4;
      uVar5 = _UNK_00107f28;
      uVar4 = _DAT_00107f20;
      *(undefined8 *)(lVar9 + 0x4b) = uVar6;
      *(undefined8 *)(lVar9 + 0x43) = uVar3;
      uVar6 = _UNK_00107f38;
      uVar3 = _DAT_00107f30;
      *(undefined8 *)(lVar9 + 0x3b) = uVar5;
      *(undefined8 *)(lVar9 + 0x33) = uVar4;
      uVar5 = _UNK_00107f48;
      uVar4 = _DAT_00107f40;
      *(undefined8 *)(lVar9 + 0x8b) = uVar6;
      *(undefined8 *)(lVar9 + 0x83) = uVar3;
      uVar6 = _UNK_00107f58;
      uVar3 = _DAT_00107f50;
      *(undefined8 *)(lVar9 + 0x7b) = uVar5;
      *(undefined8 *)(lVar9 + 0x73) = uVar4;
      uVar5 = _UNK_00107f68;
      uVar4 = _DAT_00107f60;
      *(undefined8 *)(lVar9 + 0x6b) = uVar6;
      *(undefined8 *)(lVar9 + 99) = uVar3;
      uVar6 = _UNK_00107f78;
      uVar3 = _DAT_00107f70;
      *(undefined8 *)(lVar9 + 0xbb) = uVar5;
      *(undefined8 *)(lVar9 + 0xb3) = uVar4;
      uVar5 = _UNK_00107f88;
      uVar4 = _DAT_00107f80;
      *(undefined8 *)(lVar9 + 0xab) = uVar6;
      *(undefined8 *)(lVar9 + 0xa3) = uVar3;
      uVar6 = _UNK_00107f98;
      uVar3 = _DAT_00107f90;
      *(undefined8 *)(lVar9 + 0x9b) = uVar5;
      *(undefined8 *)(lVar9 + 0x93) = uVar4;
      uVar5 = _UNK_00107fa8;
      uVar4 = _DAT_00107fa0;
      *(undefined8 *)(lVar9 + 0xeb) = uVar6;
      *(undefined8 *)(lVar9 + 0xe3) = uVar3;
      uVar6 = _UNK_00107fb8;
      uVar3 = _DAT_00107fb0;
      *(undefined8 *)(lVar9 + 0xdb) = uVar5;
      *(undefined8 *)(lVar9 + 0xd3) = uVar4;
      uVar5 = _UNK_00107fd8;
      uVar4 = _DAT_00107fd0;
      *(undefined8 *)(lVar9 + 0xcb) = uVar6;
      *(undefined8 *)(lVar9 + 0xc3) = uVar3;
      uVar7 = _UNK_00107fe8;
      uVar6 = _DAT_00107fe0;
      *(undefined8 *)(lVar9 + 0x11b) = uVar5;
      *(undefined8 *)(lVar9 + 0x113) = uVar4;
      uVar4 = _UNK_00107fc8;
      uVar3 = _DAT_00107fc0;
      *(undefined8 *)(lVar9 + 0x10b) = uVar7;
      *(undefined8 *)(lVar9 + 0x103) = uVar6;
      uVar6 = _UNK_00107ff8;
      uVar5 = _DAT_00107ff0;
      *(undefined8 *)(lVar9 + 0xfb) = uVar4;
      *(undefined8 *)(lVar9 + 0xf3) = uVar3;
      uVar4 = _UNK_00108008;
      uVar3 = _DAT_00108000;
      *(undefined8 *)(lVar9 + 0x14b) = uVar6;
      *(undefined8 *)(lVar9 + 0x143) = uVar5;
      uVar6 = _UNK_00108018;
      uVar5 = _DAT_00108010;
      *(undefined8 *)(lVar9 + 0x13b) = uVar4;
      *(undefined8 *)(lVar9 + 0x133) = uVar3;
      uVar4 = _UNK_00108028;
      uVar3 = _DAT_00108020;
      *(undefined8 *)(lVar9 + 299) = uVar6;
      *(undefined8 *)(lVar9 + 0x123) = uVar5;
      uVar6 = _UNK_00108038;
      uVar5 = _DAT_00108030;
      *(undefined8 *)(lVar9 + 0x17b) = uVar4;
      *(undefined8 *)(lVar9 + 0x173) = uVar3;
      uVar4 = _UNK_00108048;
      uVar3 = _DAT_00108040;
      *(undefined8 *)(lVar9 + 0x16b) = uVar6;
      *(undefined8 *)(lVar9 + 0x163) = uVar5;
      uVar6 = _UNK_00108058;
      uVar5 = _DAT_00108050;
      *(undefined8 *)(lVar9 + 0x15b) = uVar4;
      *(undefined8 *)(lVar9 + 0x153) = uVar3;
      uVar4 = _UNK_00108068;
      uVar3 = _DAT_00108060;
      *(undefined8 *)(lVar9 + 0x1ab) = uVar6;
      *(undefined8 *)(lVar9 + 0x1a3) = uVar5;
      uVar6 = _UNK_00108078;
      uVar5 = _DAT_00108070;
      *(undefined8 *)(lVar9 + 0x19b) = uVar4;
      *(undefined8 *)(lVar9 + 0x193) = uVar3;
      uVar4 = _UNK_00108088;
      uVar3 = _DAT_00108080;
      *(undefined8 *)(lVar9 + 0x18b) = uVar6;
      *(undefined8 *)(lVar9 + 0x183) = uVar5;
      uVar6 = _UNK_00108098;
      uVar5 = _DAT_00108090;
      *(undefined8 *)(lVar9 + 0x1db) = uVar4;
      *(undefined8 *)(lVar9 + 0x1d3) = uVar3;
      uVar4 = _UNK_001080a8;
      uVar3 = _DAT_001080a0;
      *(undefined8 *)(lVar9 + 0x1cb) = uVar6;
      *(undefined8 *)(lVar9 + 0x1c3) = uVar5;
      uVar6 = _UNK_001080b8;
      uVar5 = _DAT_001080b0;
      *(undefined8 *)(lVar9 + 0x1bb) = uVar4;
      *(undefined8 *)(lVar9 + 0x1b3) = uVar3;
      uVar4 = _UNK_001080c8;
      uVar3 = _DAT_001080c0;
      *(undefined8 *)(lVar9 + 0x20b) = uVar6;
      *(undefined8 *)(lVar9 + 0x203) = uVar5;
      uVar6 = _UNK_001080d8;
      uVar5 = _DAT_001080d0;
      *(undefined8 *)(lVar9 + 0x1fb) = uVar4;
      *(undefined8 *)(lVar9 + 499) = uVar3;
      uVar4 = _UNK_001080e8;
      uVar3 = _DAT_001080e0;
      *(undefined8 *)(lVar9 + 0x1eb) = uVar6;
      *(undefined8 *)(lVar9 + 0x1e3) = uVar5;
      uVar6 = _UNK_001080f8;
      uVar5 = _DAT_001080f0;
      *(undefined8 *)(lVar9 + 0x23b) = uVar4;
      *(undefined8 *)(lVar9 + 0x233) = uVar3;
      uVar4 = _UNK_00108108;
      uVar3 = _DAT_00108100;
      *(undefined8 *)(lVar9 + 0x22b) = uVar6;
      *(undefined8 *)(lVar9 + 0x223) = uVar5;
      uVar6 = _UNK_00108118;
      uVar5 = _DAT_00108110;
      *(undefined8 *)(lVar9 + 0x21b) = uVar4;
      *(undefined8 *)(lVar9 + 0x213) = uVar3;
      uVar4 = _UNK_00108128;
      uVar3 = _DAT_00108120;
      *(undefined8 *)(lVar9 + 0x26b) = uVar6;
      *(undefined8 *)(lVar9 + 0x263) = uVar5;
      uVar6 = _UNK_00108138;
      uVar5 = _DAT_00108130;
      *(undefined8 *)(lVar9 + 0x25b) = uVar4;
      *(undefined8 *)(lVar9 + 0x253) = uVar3;
      uVar4 = _UNK_00108148;
      uVar3 = _DAT_00108140;
      *(undefined8 *)(lVar9 + 0x24b) = uVar6;
      *(undefined8 *)(lVar9 + 0x243) = uVar5;
      uVar6 = _UNK_00108158;
      uVar5 = _DAT_00108150;
      *(undefined8 *)(lVar9 + 0x29b) = uVar4;
      *(undefined8 *)(lVar9 + 0x293) = uVar3;
      uVar4 = _UNK_00108168;
      uVar3 = _DAT_00108160;
      *(undefined8 *)(lVar9 + 0x28b) = uVar6;
      *(undefined8 *)(lVar9 + 0x283) = uVar5;
      *(undefined8 *)(lVar9 + 0x27b) = uVar4;
      *(undefined8 *)(lVar9 + 0x273) = uVar3;
      lVar11 = 0xe1;
      puVar10 = (undefined1 *)(lVar9 + 0x2a5);
      do {
        uVar1 = (undefined1)lVar11;
        puVar10[-2] = uVar1;
        puVar10[-1] = uVar1;
        *puVar10 = uVar1;
        lVar11 = lVar11 + 1;
        puVar10 = puVar10 + 3;
      } while (lVar11 != 0x100);
    }
    iVar8 = clock_gettime(4,&tStack_40);
    if (iVar8 == -1) {
      FUN_00103dc8(local_30,1,"CLOCK_MONOTONIC_RAW is not present");
    }
  }
  else {
    uVar12 = 0xffffffff;
  }
  if (*(long *)(lVar2 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar12;
}


