// Ghidra pseudocode. Not original C/C++ source.
// Program: libpl_droidsonroids_gif.so
// Executable SHA256: 6fe3a2e6c3a0b092a79eb16d26516a28289305ad28f7354d5b41a03f4d203997
// Entry: 0010292c; body: [[0010292c, 00102ab7]]

void Java_pl_droidsonroids_gif_GifInfoHandle_renderFrame
               (undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined8 local_68;
  undefined4 local_60 [6];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_3 == 0) {
    uVar4 = 0xffffffffffffffff;
    goto LAB_0010299c;
  }
  uVar4 = FUN_00107bb8();
  iVar2 = AndroidBitmap_getInfo(param_1,param_4,local_60);
  if (iVar2 != 0) {
    pcVar6 = "Could not get bitmap info";
    goto switchD_00102a04_caseD_ffffffff;
  }
  *(undefined4 *)(param_3 + 0x8c) = local_60[0];
  uVar3 = AndroidBitmap_lockPixels(param_1,param_4,&local_68);
  pcVar6 = "Lock pixels error, bad parameter";
  switch(uVar3) {
  case 0:
    FUN_00102fd8(param_3,1,0);
    if (*(long *)(param_3 + 0x38) == 0) {
      FUN_001037a4(local_68,param_3);
    }
    uVar5 = FUN_00103d24(local_68,param_3);
    iVar2 = AndroidBitmap_unlockPixels(param_1,param_4);
    if (iVar2 != 0) {
      if (iVar2 == -1) {
        pcVar6 = "Unlock pixels error, bad parameter";
      }
      else if (iVar2 == -2) {
        pcVar6 = "Unlock pixels error, JNI exception";
      }
      else {
        pcVar6 = "Unlock pixels error";
      }
      FUN_00103dc8(param_1,1,pcVar6);
    }
    uVar4 = FUN_00107af0(param_3,uVar4,uVar5);
    goto LAB_0010299c;
  case 0xfffffffd:
    goto switchD_00102a04_caseD_fffffffd;
  case 0xfffffffe:
    pcVar6 = "Lock pixels error, JNI exception";
    break;
  case 0xffffffff:
    break;
  default:
    pcVar6 = "Lock pixels error";
  }
switchD_00102a04_caseD_ffffffff:
  FUN_00103dc8(param_1,1,pcVar6);
switchD_00102a04_caseD_fffffffd:
  uVar4 = 0;
LAB_0010299c:
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}


