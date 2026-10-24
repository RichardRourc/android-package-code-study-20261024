// Ghidra pseudocode. Not original C/C++ source.
// Program: libpl_droidsonroids_gif.so
// Executable SHA256: 6fe3a2e6c3a0b092a79eb16d26516a28289305ad28f7354d5b41a03f4d203997
// Entry: 001049f0; body: [[001049f0, 00104c2b]]

uint FUN_001049f0(long param_1,long param_2,ulong param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  
  puVar10 = *(undefined8 **)(param_1 + 0x68);
  uVar6 = (uint)param_3;
  plVar4 = (long *)FUN_001063a0();
  if (plVar4 == (long *)0x0) {
    return 0;
  }
  iVar3 = (**(code **)(*plVar4 + 0x6c8))(plVar4,*puVar10);
  if (iVar3 != 0) {
    return 0;
  }
  iVar3 = *(int *)(puVar10 + 5);
  lVar5 = (long)iVar3;
  if (iVar3 == 0) {
    param_3 = param_3 & 0xff;
    uVar7 = 0;
    if (*(char *)((long)puVar10 + 0x2c) != '\0') {
      param_3 = 0x2000;
    }
    do {
      iVar3 = (**(code **)(*plVar4 + 0x188))
                        (plVar4,*puVar10,puVar10[1],puVar10[4],uVar7,param_3 - (long)(int)uVar7);
      if (iVar3 < 1) {
        cVar2 = (**(code **)(*plVar4 + 0x720))(plVar4);
        if (cVar2 == '\x01') {
          (**(code **)(*plVar4 + 0x88))(plVar4);
        }
        break;
      }
      uVar7 = iVar3 + uVar7;
    } while ((ulong)(long)(int)uVar7 < param_3);
    if ((int)(uVar6 & 0xff) <= (int)uVar7) {
      uVar7 = uVar6;
    }
    uVar8 = uVar7 & 0xff;
    (**(code **)(*plVar4 + 0x640))(plVar4,puVar10[4],0,uVar8,param_2);
    if (*(char *)((long)puVar10 + 0x2c) == '\0') goto LAB_00104bf8;
LAB_00104b8c:
    uVar8 = *(int *)(puVar10 + 5) + uVar8;
  }
  else {
    uVar8 = uVar6 & 0xff;
    if ((int)(iVar3 + uVar8) < 0x2001) {
      (**(code **)(*plVar4 + 0x640))(plVar4,puVar10[4],lVar5,uVar8,param_2);
      uVar7 = uVar6;
      goto LAB_00104b8c;
    }
    uVar9 = 0x2000 - lVar5;
    (**(code **)(*plVar4 + 0x640))(plVar4,puVar10[4],lVar5,uVar9 & 0xffffffff,param_2);
    uVar7 = 0;
    do {
      iVar3 = (**(code **)(*plVar4 + 0x188))
                        (plVar4,*puVar10,puVar10[1],puVar10[4],uVar7,0x2000 - (long)(int)uVar7);
      if (iVar3 < 1) {
        cVar2 = (**(code **)(*plVar4 + 0x720))(plVar4);
        if (cVar2 == '\x01') {
          (**(code **)(*plVar4 + 0x88))(plVar4);
        }
        break;
      }
      uVar7 = iVar3 + uVar7;
    } while (uVar7 < 0x2000);
    uVar1 = uVar8 - (int)uVar9;
    uVar8 = uVar7;
    if ((int)uVar1 <= (int)uVar7) {
      uVar7 = uVar6;
      uVar8 = uVar1;
    }
    (**(code **)(*plVar4 + 0x640))(plVar4,puVar10[4],0,uVar8,param_2 + uVar9);
  }
  *(uint *)(puVar10 + 5) = uVar8;
LAB_00104bf8:
  iVar3 = (**(code **)(*plVar4 + 0x6d0))(plVar4,*puVar10);
  if (iVar3 != 0) {
    uVar7 = 0;
  }
  return uVar7;
}


