// Ghidra pseudocode. Not original C/C++ source.
// Program: libpl_droidsonroids_gif.so
// Executable SHA256: 6fe3a2e6c3a0b092a79eb16d26516a28289305ad28f7354d5b41a03f4d203997
// Entry: 00102fd8; body: [[00102fd8, 0010340f]]

void FUN_00102fd8(long param_1,uint param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined1 *puVar11;
  long lVar12;
  long lVar13;
  undefined1 *puVar14;
  long lVar15;
  undefined1 *puVar16;
  long *plVar17;
  ulong uVar18;
  undefined4 local_7c;
  long local_78;
  int local_6c;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar1 = param_2 | param_3;
  plVar17 = *(long **)(param_1 + 8);
  uVar18 = 0;
  do {
    iVar4 = FUN_00105178(plVar17,&local_6c);
    if (iVar4 == 0) break;
    if (local_6c == 3) {
      iVar4 = FUN_00105ce0(plVar17,&local_7c,&local_78);
      if (iVar4 != 0) {
        if ((uVar1 & 1) != 0) goto LAB_00103264;
        uVar6 = *(ulong *)(*(long *)(param_1 + 8) + 0x20);
        if (uVar18 < uVar6) {
          lVar8 = FUN_00106088(*(undefined8 *)(param_1 + 0x40),uVar6 + 1,0x18);
          if (lVar8 == 0) {
            *(undefined4 *)(*(long *)(param_1 + 8) + 0x60) = 0x6d;
          }
          else {
            uVar18 = *(ulong *)(*(long *)(param_1 + 8) + 0x20);
            *(long *)(param_1 + 0x40) = lVar8;
            FUN_001062dc(lVar8 + uVar18 * 0x18);
          }
        }
        while (iVar4 = FUN_00103410(local_7c,local_78,param_1), iVar4 != 0) {
LAB_00103264:
          do {
            if ((local_78 == 0) || (iVar4 = FUN_00105dd0(plVar17,&local_78), iVar4 == 0))
            goto LAB_00103244;
          } while ((uVar1 & 1) != 0);
        }
      }
    }
    else if ((local_6c == 2) && (iVar4 = FUN_00105240(plVar17,(uVar1 ^ 1) & 1), iVar4 != 0)) {
      if ((uVar1 & 1) == 0) {
        lVar8 = plVar17[7];
        lVar13 = plVar17[8];
        if ((0 < lVar8 - *plVar17) ||
           (lVar5 = *plVar17, lVar12 = plVar17[1], 0 < lVar13 - plVar17[1])) {
          *plVar17 = lVar8;
          plVar17[1] = lVar13;
          lVar5 = lVar8;
          lVar12 = lVar13;
        }
        lVar15 = plVar17[4];
        lVar10 = plVar17[0xb];
        lVar12 = (plVar17[6] + lVar13) - lVar12;
        if (0 < lVar12) {
          lVar13 = lVar10 + (lVar15 + -1) * 0x30;
          *(long *)(lVar13 + 8) = *(long *)(lVar13 + 8) - lVar12;
        }
        lVar5 = (plVar17[5] + lVar8) - lVar5;
        if (0 < lVar5) {
          lVar8 = (lVar15 + -1) * 0x30;
          *(long *)(lVar10 + lVar8) = *(long *)(lVar10 + lVar8) - lVar5;
        }
        uVar6 = *(ulong *)(*(long *)(param_1 + 8) + 0x20);
        if (uVar18 < uVar6) {
          lVar8 = FUN_00106088(*(undefined8 *)(param_1 + 0x40),uVar6 + 1,0x18);
          if (lVar8 == 0) {
            *(undefined4 *)(*(long *)(param_1 + 8) + 0x60) = 0x6d;
            goto LAB_00103244;
          }
          uVar18 = *(ulong *)(*(long *)(param_1 + 8) + 0x20);
          *(long *)(param_1 + 0x40) = lVar8;
          FUN_001062dc(lVar8 + uVar18 * 0x18);
        }
      }
      if ((param_2 & 1) == 0) {
        do {
          iVar4 = FUN_00105c18(plVar17,&local_78);
          if (iVar4 == 0) break;
        } while (local_78 != 0);
        if ((param_3 & 1) != 0) goto LAB_00103290;
      }
      else {
        uVar6 = plVar17[8] * plVar17[7];
        if (((plVar17[8] - *(long *)(param_1 + 0x18) < 1) &&
            (plVar17[7] - *(long *)(param_1 + 0x10) < 1)) &&
           (uVar6 < *(ulong *)(param_1 + 0x60) || uVar6 - *(ulong *)(param_1 + 0x60) == 0)) {
          if ((char)plVar17[9] != '\0') {
LAB_001032c0:
            if (plVar17[8] == 0) goto LAB_001033a8;
            uVar18 = 0;
            goto LAB_001032cc;
          }
LAB_00103204:
          iVar4 = FUN_001055ac(plVar17,*(undefined8 *)(param_1 + 0x58),plVar17[8] * plVar17[7]);
          if (iVar4 != 0) goto LAB_001033a8;
        }
        else {
          lVar8 = FUN_00106088(*(undefined8 *)(param_1 + 0x58),uVar6,1);
          if (lVar8 != 0) {
            *(long *)(param_1 + 0x58) = lVar8;
            *(ulong *)(param_1 + 0x60) = uVar6;
            if ((char)plVar17[9] == '\0') goto LAB_00103204;
            goto LAB_001032c0;
          }
          *(undefined4 *)(plVar17 + 0xc) = 0x6d;
        }
      }
    }
LAB_00103244:
  } while (local_6c != 4);
  (**(code **)(param_1 + 0x80))(param_1);
  goto LAB_00103290;
  while( true ) {
    uVar6 = plVar17[8];
    uVar18 = uVar18 + 8;
    if (uVar6 <= uVar18) break;
LAB_001032cc:
    iVar4 = FUN_001055ac(plVar17,*(long *)(param_1 + 0x58) + plVar17[7] * uVar18);
    if (iVar4 == 0) {
      uVar6 = plVar17[8];
      break;
    }
  }
  if (4 < uVar6) {
    uVar18 = 4;
    do {
      iVar4 = FUN_001055ac(plVar17,*(long *)(param_1 + 0x58) + plVar17[7] * uVar18);
      if (iVar4 == 0) {
        uVar6 = plVar17[8];
        break;
      }
      uVar6 = plVar17[8];
      uVar18 = uVar18 + 8;
    } while (uVar18 < uVar6);
  }
  if (2 < uVar6) {
    uVar18 = 2;
    do {
      iVar4 = FUN_001055ac(plVar17,*(long *)(param_1 + 0x58) + plVar17[7] * uVar18);
      if (iVar4 == 0) {
        uVar6 = plVar17[8];
        break;
      }
      uVar6 = plVar17[8];
      uVar18 = uVar18 + 4;
    } while (uVar18 < uVar6);
  }
  if (1 < uVar6) {
    uVar18 = 1;
    do {
      iVar4 = FUN_001055ac(plVar17,*(long *)(param_1 + 0x58) + plVar17[7] * uVar18);
      if (iVar4 == 0) break;
      uVar18 = uVar18 + 2;
    } while (uVar18 < (ulong)plVar17[8]);
  }
LAB_001033a8:
  uVar18 = *(ulong *)(param_1 + 0x20);
  if (1 < uVar18) {
    puVar7 = *(undefined1 **)(param_1 + 0x58);
    uVar6 = plVar17[7];
    puVar9 = puVar7 + plVar17[8] * uVar6;
    puVar11 = puVar7;
    while( true ) {
      lVar8 = uVar18 * uVar6;
      uVar2 = 0;
      puVar14 = puVar7;
      puVar16 = puVar11;
      if (uVar18 != 0) {
        uVar2 = uVar6 / uVar18;
      }
      do {
        *puVar16 = *puVar14;
        uVar18 = *(ulong *)(param_1 + 0x20);
        puVar14 = puVar14 + uVar18;
        puVar16 = puVar16 + 1;
      } while (puVar14 < puVar7 + uVar6);
      puVar7 = puVar7 + lVar8;
      if (puVar9 <= puVar7) break;
      uVar6 = plVar17[7];
      puVar11 = puVar11 + uVar2;
    }
  }
LAB_00103290:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


