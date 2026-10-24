// Ghidra pseudocode. Not original C/C++ source.
// Program: liblogic.so
// Executable SHA256: df2688b342d2fdd45fbfbc82e905546e287409caaacad6ba5220641e328a1a21
// Entry: 00167868; body: [[00167868, 00167e03]]

/* WARNING: Type propagation algorithm not settling */

undefined8 __gxx_personality_v0(int param_1,uint param_2,ulong param_3,long param_4,long param_5)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  byte bVar4;
  char *pcVar5;
  byte *pbVar6;
  byte *pbVar7;
  undefined8 uVar8;
  long *plVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *extraout_x9;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  byte *pbVar17;
  long lVar18;
  ulong uVar19;
  byte *pbVar20;
  byte *unaff_x28;
  long lVar21;
  undefined *puStack_130;
  byte *pbStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  byte *pbStack_110;
  byte *pbStack_108;
  ulong uStack_100;
  undefined8 uStack_f8;
  byte *pbStack_f0;
  byte *pbStack_e8;
  byte *pbStack_e0;
  ulong uStack_d8;
  long lStack_d0;
  long lStack_c8;
  long local_b8;
  char *local_b0;
  byte *local_a8;
  byte *local_a0;
  undefined8 local_98;
  ulong local_90;
  ulong local_88;
  byte *local_80;
  byte *local_78;
  byte *local_70;
  byte *local_68;
  
  if (param_1 != 1) {
    return 3;
  }
  if (param_4 == 0) {
    return 3;
  }
  if (param_5 == 0) {
    return 3;
  }
  if ((param_2 == 6) && ((byte *)(param_3 & 0xffffffffffffff00) == (byte *)0x434c4e47432b2b00)) {
    iVar2 = *(int *)(param_4 + -0x24);
    uVar15 = *(undefined8 *)(param_4 + -0x10);
    thunk_FUN_00168fa4(param_5,0,param_4);
    thunk_FUN_00168fa4(param_5,1,(long)iVar2);
    FUN_00168e70(param_5,uVar15);
    if (-1 < iVar2) {
      return 7;
    }
    goto LAB_0016790c;
  }
  if ((param_2 & 1) == 0) {
    if ((param_2 >> 1 & 1) == 0) {
      return 3;
    }
    if (((param_2 ^ 0xffffffff) & 0xc) == 0) {
      lVar16 = 0;
LAB_00167930:
      uVar19 = 0;
      goto LAB_00167934;
    }
  }
  else if ((param_2 & 0xe) != 0) {
    return 3;
  }
  pcVar5 = (char *)FUN_00168db4(param_5);
  if (pcVar5 == (char *)0x0) {
    return 8;
  }
  pbVar6 = (byte *)FUN_00168e40(param_5);
  uVar19 = FUN_00168de8(param_5);
  local_70 = (byte *)(pcVar5 + 1);
  local_88 = uVar19;
  if (*pcVar5 != -1) {
    local_88 = FUN_00168020(&local_70,*pcVar5,0);
  }
  pbVar10 = local_70 + 1;
  local_90 = (ulong)*local_70;
  if (local_90 == 0xff) {
    local_80 = (byte *)0x0;
  }
  else {
    uVar13 = 0;
    uVar12 = 0;
    pbVar20 = pbVar10;
    do {
      pbVar10 = pbVar20 + 1;
      bVar1 = *pbVar20;
      uVar3 = uVar13 & 0x3f;
      uVar13 = uVar13 + 7;
      uVar12 = ((ulong)bVar1 & 0x7f) << uVar3 | uVar12;
      pbVar20 = pbVar10;
    } while ((char)bVar1 < '\0');
    local_80 = pbVar10 + uVar12;
  }
  uVar13 = 0;
  local_98 = 0;
  pbVar20 = pbVar6 + ~uVar19;
  uVar19 = (ulong)*pbVar10;
  pbVar10 = pbVar10 + 1;
  do {
    pbVar17 = pbVar10 + 1;
    bVar1 = *pbVar10;
    uVar12 = uVar13 & 0x3f;
    uVar13 = uVar13 + 7;
    local_98 = ((ulong)bVar1 & 0x7f) << uVar12 | local_98;
    pbVar10 = pbVar17;
  } while ((char)bVar1 < '\0');
  local_98 = local_98 & 0xffffffff;
  pbVar10 = pbVar17 + local_98;
  local_78 = pbVar17;
  local_b0 = pcVar5;
  local_a0 = (byte *)(param_3 & 0xffffffffffffff00);
  local_70 = pbVar17;
  do {
    if (pbVar10 <= local_78) break;
    pbVar6 = (byte *)FUN_00168020(&local_78,uVar19,0);
    unaff_x28 = (byte *)FUN_00168020(&local_78,uVar19,0);
    lVar16 = FUN_00168020(&local_78,uVar19,0);
    uVar13 = 0;
    uVar12 = 0;
    pbVar11 = local_78;
    do {
      local_78 = pbVar11 + 1;
      bVar1 = *pbVar11;
      uVar3 = uVar13 & 0x3f;
      uVar13 = uVar13 + 7;
      uVar12 = ((ulong)bVar1 & 0x7f) << uVar3 | uVar12;
      pbVar11 = local_78;
    } while ((char)bVar1 < '\0');
    if ((pbVar6 <= pbVar20) && (pbVar20 < unaff_x28 + (long)pbVar6)) {
      if (lVar16 == 0) {
        return 8;
      }
      lVar16 = lVar16 + local_88;
      if (uVar12 != 0) {
        local_88 = local_90 & 0xf;
        pbVar17 = pbVar17 + uVar12 + local_98 + -1;
        local_a8 = (byte *)(param_4 + 0x20);
        local_98 = CONCAT44(local_98._4_4_,0x1c1d >> local_88) & 0xffffffff00000001;
        pbVar10 = local_a0;
        pbVar20 = (byte *)0x0;
        local_b8 = lVar16;
        goto LAB_00167b38;
      }
      if ((param_2 & 1) != 0) {
        return 8;
      }
      goto LAB_00167930;
    }
  } while (pbVar6 <= pbVar20);
  __cxa_begin_catch(param_4);
  pbVar11 = local_a0;
joined_r0x00167de8:
  if (pbVar11 != (byte *)0x434c4e47432b2b00) {
                    /* WARNING: Subroutine does not return */
    std::terminate();
  }
  FUN_0014cb7c(*(undefined8 *)(param_4 + -0x38));
LAB_00167df4:
  __cxa_begin_catch(param_4);
  lVar16 = FUN_0014cb7c(*(undefined8 *)(param_4 + -0x38));
  pcStack_118 = __cxa_call_unexpected;
  uStack_f8 = 0x434c4e47432b2b00;
  puStack_120 = &stack0xffffffffffffffa0;
  pbStack_110 = unaff_x28;
  pbStack_108 = pbVar6;
  uStack_100 = uVar19;
  pbStack_f0 = pbVar17;
  pbStack_e8 = pbVar20;
  pbStack_e0 = pbVar10;
  uStack_d8 = (ulong)param_2;
  lStack_d0 = param_5;
  lStack_c8 = param_4;
  if (lVar16 == 0) {
    __cxa_begin_catch();
                    /* WARNING: Subroutine does not return */
    std::terminate();
  }
  __cxa_begin_catch();
  uVar19 = FUN_00166d74(lVar16);
  if ((uVar19 & 1) == 0) {
    uVar8 = std::get_terminate();
    uVar15 = std::get_unexpected();
    uVar14 = 0;
    lVar18 = 0;
  }
  else {
    uVar15 = *(undefined8 *)(lVar16 + -0x40);
    uVar8 = *(undefined8 *)(lVar16 + -0x38);
    lVar18 = lVar16 + -0x60;
    pbVar17 = *(byte **)(lVar16 + -0x18);
    uVar14 = *(undefined8 *)(lVar16 + -0x10);
    pbVar10 = (byte *)(long)*(int *)(lVar16 + -0x24);
  }
  FUN_0014cb30(uVar15);
  __cxa_begin_catch();
  if ((uVar19 & 1) != 0) {
    pbStack_128 = pbVar17 + 1;
    FUN_00168020(&pbStack_128,*pbVar17,uVar14);
    bVar1 = *pbStack_128;
    if (bVar1 != 0xff) goto LAB_00167eac;
    do {
      FUN_0014cb7c(uVar8);
      pbStack_128 = extraout_x9;
LAB_00167eac:
      uVar19 = 0;
      uVar13 = 0;
      pbVar6 = pbStack_128 + 1;
      do {
        pbVar20 = pbVar6 + 1;
        bVar4 = *pbVar6;
        uVar12 = uVar19 & 0x3f;
        uVar19 = uVar19 + 7;
        uVar13 = ((ulong)bVar4 & 0x7f) << uVar12 | uVar13;
        pbVar6 = pbVar20;
      } while ((char)bVar4 < '\0');
      pbStack_128 = pbVar20;
      plVar9 = (long *)__cxa_get_globals_fast();
      lVar21 = *plVar9;
    } while (lVar21 == 0);
    bVar4 = FUN_00166d74(lVar21 + 0x60);
    if ((bVar4 & lVar21 != lVar18) == 1) {
      uVar15 = *(undefined8 *)(lVar21 + 0x10);
      lVar18 = FUN_00166d68(lVar21 + 0x60);
      if (lVar18 == 0x434c4e47432b2b01) {
        lVar18 = *(long *)(lVar21 + 8);
      }
      else {
        lVar18 = lVar21 + 0x80;
      }
      uVar19 = FUN_001681c8(pbVar10,pbVar20 + uVar13,bVar1,uVar15,lVar18,lVar16,uVar14);
      if ((uVar19 & 1) == 0) {
        lVar16 = plVar9[1];
        *(int *)(lVar21 + 0x38) = -*(int *)(lVar21 + 0x38);
        *(int *)(plVar9 + 1) = (int)lVar16 + 1;
        __cxa_end_catch();
        __cxa_end_catch();
        __cxa_begin_catch(lVar21 + 0x60);
        uVar15 = __cxa_rethrow();
        std::bad_array_new_length::~bad_array_new_length((bad_array_new_length *)&puStack_130);
        __cxa_end_catch();
                    /* WARNING: Subroutine does not return */
        FUN_00168c3c(uVar15);
      }
    }
    pbVar17 = PTR_vtable_00174a38;
    puStack_130 = PTR_vtable_00174a38 + 0x10;
    uVar19 = FUN_001681c8(pbVar10,pbVar20 + uVar13,bVar1,PTR_typeinfo_00174a40,&puStack_130,lVar16,
                          uVar14);
    if ((uVar19 & 1) == 0) goto LAB_00167f9c;
    std::bad_array_new_length::~bad_array_new_length((bad_array_new_length *)&puStack_130);
  }
  __cxa_end_catch();
  FUN_0014cb7c(uVar8);
LAB_00167f9c:
  __cxa_end_catch();
  plVar9 = (long *)__cxa_allocate_exception(8);
  *plVar9 = (long)(pbVar17 + 0x10);
                    /* WARNING: Subroutine does not return */
  __cxa_throw(plVar9,PTR_typeinfo_00174a40,PTR__bad_array_new_length_00174a08);
LAB_00167b38:
  uVar13 = 0;
  uVar19 = 0;
  pbVar11 = pbVar17;
  do {
    unaff_x28 = pbVar11 + 1;
    bVar1 = *pbVar11;
    uVar12 = uVar13 & 0x3f;
    uVar13 = uVar13 + 7;
    uVar19 = ((ulong)bVar1 & 0x7f) << uVar12 | uVar19;
    pbVar11 = unaff_x28;
  } while ((char)bVar1 < '\0');
  uVar12 = -1L << (uVar13 & 0x3f);
  if (0x3f < uVar13 || bVar1 < 0x40) {
    uVar12 = 0;
  }
  uVar19 = uVar19 | uVar12;
  if ((long)uVar19 < 1) {
    pbVar11 = (byte *)(ulong)((uint)(uVar19 == 0) | (uint)pbVar20);
    if (((param_2 >> 3 & 1) == 0) && (uVar19 != 0)) {
      lVar18 = FUN_00166d68(param_4);
      if (pbVar10 != (byte *)0x434c4e47432b2b00) goto joined_r0x00167db4;
      pbVar6 = local_a8;
      if (lVar18 == 0x434c4e47432b2b01) {
        pbVar6 = *(byte **)(param_4 + -0x58);
      }
      if ((pbVar6 == (byte *)0x0) || (*(long *)(param_4 + -0x50) == 0)) goto LAB_00167df4;
      uVar13 = FUN_001681c8(uVar19,local_80,local_90,*(long *)(param_4 + -0x50),pbVar6,param_4,0);
      pbVar7 = pbVar6;
joined_r0x00167cb0:
      pbVar11 = pbVar20;
      lVar16 = local_b8;
      if ((uVar13 & 1) != 0) goto joined_r0x00167dbc;
    }
  }
  else {
    if (((local_80 == (byte *)0x0) || (0xc < (uint)local_88)) || ((local_98 & 1) == 0)) {
      __cxa_begin_catch(param_4);
      pbVar11 = pbVar10;
      goto joined_r0x00167de8;
    }
    local_68 = local_80 + *(long *)(&DAT_00139280 + local_88 * 8) * uVar19;
    pbVar7 = (byte *)FUN_00168020(&local_68,local_90,0);
    if (pbVar7 == (byte *)0x0) {
      lVar18 = FUN_00166d68(param_4);
joined_r0x00167db4:
      lVar16 = local_b8;
      pbVar7 = local_a8;
      if (lVar18 == 0x434c4e47432b2b01) {
        pbVar7 = *(byte **)(param_4 + -0x58);
      }
      goto joined_r0x00167dbc;
    }
    pbVar11 = pbVar20;
    if (pbVar10 == (byte *)0x434c4e47432b2b00) {
      lVar16 = FUN_00166d68(param_4);
      local_68 = local_a8;
      if (lVar16 == 0x434c4e47432b2b01) {
        local_68 = *(byte **)(param_4 + -0x58);
      }
      pbVar10 = pbVar7;
      if ((local_68 != (byte *)0x0) && (*(long *)(param_4 + -0x50) != 0)) {
        uVar13 = (**(code **)(*(long *)pbVar7 + 0x20))(pbVar7,*(long *)(param_4 + -0x50),&local_68);
        pbVar10 = local_a0;
        pbVar7 = local_68;
        goto joined_r0x00167cb0;
      }
      goto LAB_00167df4;
    }
  }
  uVar19 = 0;
  uVar13 = 0;
  pbVar20 = unaff_x28;
  do {
    bVar1 = *pbVar20;
    uVar12 = uVar19 & 0x3f;
    uVar19 = uVar19 + 7;
    uVar13 = ((ulong)bVar1 & 0x7f) << uVar12 | uVar13;
    pbVar20 = pbVar20 + 1;
  } while ((char)bVar1 < '\0');
  uVar12 = -1L << (uVar19 & 0x3f);
  if (0x3f < uVar19 || bVar1 < 0x40) {
    uVar12 = 0;
  }
  if ((uVar13 | uVar12) == 0) goto LAB_00167d04;
  pbVar17 = unaff_x28 + (uVar13 | uVar12);
  pbVar20 = pbVar11;
  goto LAB_00167b38;
LAB_00167d04:
  if (((uint)pbVar11 & (param_2 & 2) >> 1) == 0) {
    return 8;
  }
  pbVar17 = (byte *)0x0;
  uVar19 = 0;
  pbVar7 = (byte *)0x0;
  pbVar10 = local_a0;
  lVar16 = local_b8;
joined_r0x00167dbc:
  local_b8 = lVar16;
  if ((param_2 & 1) != 0) {
    if (pbVar10 == (byte *)0x434c4e47432b2b00) {
      *(int *)(param_4 + -0x24) = (int)uVar19;
      *(byte **)(param_4 + -0x20) = pbVar17;
      *(char **)(param_4 + -0x18) = local_b0;
      *(long *)(param_4 + -0x10) = lVar16;
      *(byte **)(param_4 + -8) = pbVar7;
      return 6;
    }
    return 6;
  }
LAB_00167934:
  thunk_FUN_00168fa4(param_5,0,param_4);
  thunk_FUN_00168fa4(param_5,1,uVar19);
  FUN_00168e70(param_5,lVar16);
  if (-1 < (long)uVar19) {
    return 7;
  }
LAB_0016790c:
  *(undefined8 *)(param_4 + -0x10) = 0;
  return 7;
}


