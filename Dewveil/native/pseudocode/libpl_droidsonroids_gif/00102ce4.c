// Ghidra pseudocode. Not original C/C++ source.
// Program: libpl_droidsonroids_gif.so
// Executable SHA256: 6fe3a2e6c3a0b092a79eb16d26516a28289305ad28f7354d5b41a03f4d203997
// Entry: 00102ce4; body: [[00102ce4, 00102e2b]]

void Java_pl_droidsonroids_gif_GifInfoHandle_seekToTime
               (undefined8 param_1,undefined8 param_2,long param_3,int param_4,undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  if ((param_3 != 0) && (uVar2 = *(long *)(*(long *)(param_3 + 8) + 0x20) - 1, uVar2 != 0)) {
    uVar7 = 0;
    uVar6 = 0;
    do {
      uVar1 = *(long *)(*(long *)(param_3 + 0x40) + uVar7 * 0x18 + 8) + uVar6;
      if ((ulong)(long)param_4 < uVar1) break;
      uVar7 = (ulong)((int)uVar7 + 1);
      uVar6 = uVar1;
    } while (uVar7 < uVar2);
    if (*(long *)(param_3 + 0x28) != -1) {
      *(ulong *)(param_3 + 0x28) = (long)param_4 - uVar6;
      if ((uVar2 == uVar7) &&
         (lVar5 = *(long *)(*(long *)(param_3 + 0x40) + uVar2 * 0x18 + 8),
         lVar5 < (long)((long)param_4 - uVar6))) {
        *(long *)(param_3 + 0x28) = lVar5;
      }
    }
    iVar4 = FUN_001027cc(param_1,param_5,param_3,&local_50);
    if (iVar4 == 0) {
      FUN_00102b54(param_3,(long)(int)uVar7,local_50);
      FUN_001028c4(param_1,param_5);
    }
    lVar5 = FUN_00107bb8();
    *(long *)(param_3 + 0x30) =
         lVar5 + (long)((float)*(long *)(param_3 + 0x28) / *(float *)(param_3 + 0x88));
  }
  if (*(long *)(lVar3 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


