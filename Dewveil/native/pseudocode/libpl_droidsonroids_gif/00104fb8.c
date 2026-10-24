// Ghidra pseudocode. Not original C/C++ source.
// Program: libpl_droidsonroids_gif.so
// Executable SHA256: 6fe3a2e6c3a0b092a79eb16d26516a28289305ad28f7354d5b41a03f4d203997
// Entry: 00104fb8; body: [[00104fb8, 00105177]]

void FUN_00104fb8(ulong *param_1)

{
  char *pcVar1;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined4 uVar6;
  ulong *puVar7;
  long lVar8;
  ulong uVar9;
  char local_40;
  byte local_3f;
  char local_3e;
  ushort local_3c [2];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  cVar3 = (**(code **)(param_1[0xe] + 0x58))(param_1,local_3c,2);
  if (cVar3 == '\x02') {
    *param_1 = (ulong)local_3c[0];
    cVar3 = (**(code **)(param_1[0xe] + 0x58))(param_1,local_3c,2);
    if (cVar3 != '\x02') goto LAB_00105084;
    param_1[1] = (ulong)local_3c[0];
    cVar3 = (**(code **)(param_1[0xe] + 0x58))(param_1,&local_40,3);
    if (cVar3 != '\x03') {
      *(undefined4 *)(param_1 + 0xc) = 0x66;
      FUN_00105fd8(param_1[3]);
      uVar4 = 0;
      param_1[3] = 0;
      goto LAB_0010508c;
    }
    param_1[2] = (ulong)local_3f;
    if (-1 < local_40) {
      param_1[3] = 0;
LAB_00105078:
      uVar4 = 1;
      goto LAB_0010508c;
    }
    plVar5 = (long *)FUN_00105f54(((int)local_40 & 7U) + 1,0);
    param_1[3] = (ulong)plVar5;
    if (plVar5 != (long *)0x0) {
      if (*plVar5 != 0) {
        lVar8 = 0;
        uVar9 = 0;
        do {
          cVar3 = (**(code **)(param_1[0xe] + 0x58))(param_1,&local_40,3);
          if (cVar3 != '\x03') {
            FUN_00105fd8(param_1[3]);
            param_1[3] = 0;
            goto LAB_00105084;
          }
          puVar7 = (ulong *)param_1[3];
          uVar9 = uVar9 + 1;
          uVar4 = 1;
          pcVar1 = (char *)(puVar7[2] + lVar8);
          *pcVar1 = local_40;
          lVar8 = lVar8 + 3;
          pcVar1[1] = local_3f;
          pcVar1[2] = local_3e;
        } while (uVar9 < *puVar7);
        goto LAB_0010508c;
      }
      goto LAB_00105078;
    }
    uVar6 = 0x6d;
  }
  else {
LAB_00105084:
    uVar6 = 0x66;
  }
  uVar4 = 0;
  *(undefined4 *)(param_1 + 0xc) = uVar6;
LAB_0010508c:
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}


