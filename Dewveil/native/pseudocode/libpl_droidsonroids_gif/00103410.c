// Ghidra pseudocode. Not original C/C++ source.
// Program: libpl_droidsonroids_gif.so
// Executable SHA256: 6fe3a2e6c3a0b092a79eb16d26516a28289305ad28f7354d5b41a03f4d203997
// Entry: 00103410; body: [[00103410, 001035c3]]

void FUN_00103410(int param_1,byte *param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  size_t sVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  char *__s;
  byte *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  local_60 = param_2;
  if (param_2 != (byte *)0x0) {
    if (param_1 == 0xff) {
      bVar1 = *param_2;
      iVar3 = strncmp("NETSCAPE2.0",(char *)(param_2 + 1),(ulong)bVar1);
      if ((iVar3 == 0) ||
         (iVar3 = strncmp("ANIMEXTS1.0",(char *)(param_2 + 1),(ulong)bVar1), iVar3 == 0)) {
        uVar4 = FUN_00105dd0(*(undefined8 *)(param_3 + 8),&local_60);
        if ((int)uVar4 == 0) goto LAB_00103584;
        if (((local_60 != (byte *)0x0) && (*local_60 == 3)) && (local_60[1] == 1)) {
          lVar7 = 0;
          if ((ulong)*(ushort *)(local_60 + 2) != 0) {
            lVar7 = (ulong)*(ushort *)(local_60 + 2) + 1;
          }
          *(long *)(param_3 + 0x70) = lVar7;
        }
      }
    }
    else if (param_1 == 0xfe) {
      __s = *(char **)(param_3 + 0x68);
      bVar1 = *param_2;
      if (__s == (char *)0x0) {
        sVar5 = 0;
      }
      else {
        sVar5 = strlen(__s);
      }
      lVar7 = sVar5 + bVar1;
      lVar8 = FUN_00106088(__s,lVar7 + 1,1);
      if (lVar8 == 0) {
        *(undefined4 *)(*(long *)(param_3 + 8) + 0x60) = 0x6d;
        uVar4 = 0;
        goto LAB_00103584;
      }
      memcpy((void *)(lVar8 + sVar5),param_2 + 1,(ulong)bVar1);
      *(undefined1 *)(lVar8 + lVar7) = 0;
      *(long *)(param_3 + 0x68) = lVar8;
    }
    else if (param_1 == 0xf9) {
      lVar7 = *(long *)(param_3 + 0x40);
      lVar8 = *(long *)(*(long *)(param_3 + 8) + 0x20);
      uVar4 = FUN_00105e90(*param_2,param_2 + 1,lVar7 + lVar8 * 0x18);
      if ((int)uVar4 == 0) goto LAB_00103584;
      lVar7 = lVar7 + lVar8 * 0x18;
      uVar6 = *(ulong *)(lVar7 + 8);
      lVar8 = uVar6 * 10;
      if (uVar6 < 2) {
        lVar8 = 100;
      }
      *(long *)(lVar7 + 8) = lVar8;
    }
  }
  uVar4 = 1;
LAB_00103584:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}


