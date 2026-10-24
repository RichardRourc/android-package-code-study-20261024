// Ghidra pseudocode. Not original C/C++ source.
// Program: liblogic.so
// Executable SHA256: df2688b342d2fdd45fbfbc82e905546e287409caaacad6ba5220641e328a1a21
// Entry: 0014e160; body: [[0014e160, 0014f4f7]]

undefined8 * FUN_0014e160(long *param_1)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  ulong uVar5;
  byte *pbVar6;
  undefined *puVar7;
  char *pcVar8;
  ushort uVar9;
  long lVar10;
  undefined8 uVar11;
  char *pcVar12;
  byte *pbVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  size_t __n;
  long *__src;
  long *plVar18;
  undefined8 *local_58;
  undefined1 local_50 [16];
  ulong local_28;
  
  pcVar12 = (char *)*param_1;
  pbVar6 = (byte *)param_1[1];
  local_58 = (undefined8 *)0x0;
  uVar5 = (long)pbVar6 - (long)pcVar12;
  if (uVar5 == 0) goto code_r0x0014eb94;
  cVar1 = *pcVar12;
  switch(cVar1) {
  case 'A':
    pbVar13 = (byte *)(pcVar12 + 1);
    local_28 = 0;
    *param_1 = (long)pbVar13;
    if (pbVar6 == pbVar13) {
LAB_0014f10c:
      uVar5 = FUN_00153210(param_1);
      puVar3 = (undefined8 *)0x0;
      if (uVar5 == 0) goto joined_r0x0014f234;
      pcVar12 = (char *)*param_1;
      if ((pcVar12 == (char *)param_1[1]) || (*pcVar12 != '_')) {
        return (undefined8 *)0x0;
      }
      pcVar12 = pcVar12 + 1;
      local_28 = uVar5;
    }
    else if (*pbVar13 - 0x3a < 0xfffffff6) {
      if (*pbVar13 != 0x5f) goto LAB_0014f10c;
      pcVar12 = pcVar12 + 2;
    }
    else {
      local_50 = FUN_0014e020(param_1,0);
      local_28 = FUN_00152d64(param_1,local_50);
      pcVar12 = (char *)*param_1;
      if (pcVar12 == (char *)param_1[1]) {
        return (undefined8 *)0x0;
      }
      if (*pcVar12 != '_') {
        return (undefined8 *)0x0;
      }
      pcVar12 = pcVar12 + 1;
    }
    *param_1 = (long)pcVar12;
    pbVar6 = (byte *)FUN_0014e160(param_1);
    puVar3 = (undefined8 *)0x0;
    local_50._0_8_ = pbVar6;
    if (pbVar6 != (byte *)0x0) {
      puVar3 = (undefined8 *)FUN_00164090(param_1,local_50,&local_28);
    }
    goto joined_r0x0014f234;
  default:
    goto code_r0x0014eb94;
  case 'C':
    *param_1 = (long)(pcVar12 + 1);
    local_50._0_8_ = FUN_0014e160(param_1);
    if ((byte *)local_50._0_8_ == (byte *)0x0) {
      return (undefined8 *)0x0;
    }
    puVar3 = (undefined8 *)FUN_00162870(param_1,local_50);
    goto LAB_0014eba0;
  case 'D':
    if (uVar5 < 2) {
      return (undefined8 *)0x0;
    }
    cVar1 = pcVar12[1];
    puVar2 = (undefined8 *)0x0;
    switch(cVar1) {
    case 'B':
    case 'U':
      pbVar13 = (byte *)(pcVar12 + 2);
      *param_1 = (long)pbVar13;
      local_28 = CONCAT71(local_28._1_7_,cVar1 == 'B');
      if ((pbVar6 == pbVar13) || (*pbVar13 - 0x3a < 0xfffffff6)) {
        local_50._0_8_ = FUN_00153210(param_1);
        if (local_50._0_8_ == 0) {
          return (undefined8 *)0x0;
        }
      }
      else {
        local_50 = FUN_0014e020(param_1,0);
        lVar10 = FUN_00152d64(param_1,local_50);
        local_50._0_8_ = lVar10;
      }
      pcVar12 = (char *)*param_1;
      if (pcVar12 == (char *)param_1[1]) {
        return (undefined8 *)0x0;
      }
      if (*pcVar12 != '_') {
        return (undefined8 *)0x0;
      }
      *param_1 = (long)(pcVar12 + 1);
      puVar3 = (undefined8 *)FUN_001621a4(param_1,local_50,&local_28);
      return puVar3;
    default:
      goto code_r0x0014f074;
    case 'F':
      *param_1 = (long)(pcVar12 + 2);
      local_50 = FUN_0014e020(param_1,0);
      uVar11 = FUN_00152d64(param_1,local_50);
      pcVar12 = (char *)*param_1;
      if ((pcVar12 != (char *)param_1[1]) && (*pcVar12 == '_')) {
        *param_1 = (long)(pcVar12 + 1);
        local_50._0_8_ = uVar11;
        puVar3 = (undefined8 *)FUN_00162104(param_1,local_50);
        return puVar3;
      }
      return (undefined8 *)0x0;
    case 'K':
    case 'k':
      local_50._0_8_ = " auto";
      if (cVar1 != 'k') {
        local_50._0_8_ = " decltype(auto)";
      }
      local_50._8_8_ = 5;
      if (cVar1 != 'k') {
        local_50._8_8_ = 0xf;
      }
      *param_1 = (long)(pcVar12 + 2);
      local_28 = FUN_0014f6a0(param_1,0);
      if (local_28 != 0) {
        puVar3 = (undefined8 *)FUN_00162250(param_1,&local_28,local_50);
        return puVar3;
      }
      return (undefined8 *)0x0;
    case 'O':
    case 'o':
    case 'w':
    case 'x':
      goto code_r0x0014ec68;
    case 'T':
    case 't':
      puVar3 = (undefined8 *)FUN_00152394(param_1);
      break;
    case 'a':
      puVar7 = &DAT_0013682f;
      goto LAB_0014f3f4;
    case 'c':
      pcVar8 = "decltype(auto)";
      goto LAB_0014f46c;
    case 'd':
      pcVar8 = "decimal64";
      goto LAB_0014f3c0;
    case 'e':
      *param_1 = (long)(pcVar12 + 2);
      puVar3 = (undefined8 *)FUN_00161fac(param_1,"decimal128");
      return puVar3;
    case 'f':
      pcVar8 = "decimal32";
LAB_0014f3c0:
      *param_1 = (long)(pcVar12 + 2);
      puVar3 = (undefined8 *)FUN_00161e54(param_1,pcVar8);
      return puVar3;
    case 'h':
      puVar7 = &DAT_001376ac;
LAB_0014f3f4:
      *param_1 = (long)(pcVar12 + 2);
      puVar3 = (undefined8 *)FUN_00152edc(param_1,puVar7);
      return puVar3;
    case 'i':
      pcVar8 = "char32_t";
      goto LAB_0014f428;
    case 'n':
      pcVar8 = "std::nullptr_t";
LAB_0014f46c:
      *param_1 = (long)(pcVar12 + 2);
      puVar3 = (undefined8 *)FUN_00160584(param_1,pcVar8);
      return puVar3;
    case 'p':
      *param_1 = (long)(pcVar12 + 2);
      local_50._0_8_ = FUN_0014e160(param_1);
      if ((byte *)local_50._0_8_ == (byte *)0x0) {
        return (undefined8 *)0x0;
      }
      puVar3 = (undefined8 *)FUN_00156678(param_1,local_50);
      goto LAB_0014eba0;
    case 's':
      pcVar8 = "char16_t";
LAB_0014f428:
      *param_1 = (long)(pcVar12 + 2);
      puVar3 = (undefined8 *)FUN_00161f00(param_1,pcVar8);
      return puVar3;
    case 'u':
      *param_1 = (long)(pcVar12 + 2);
      puVar3 = (undefined8 *)FUN_00159908(param_1,"char8_t");
      return puVar3;
    case 'v':
      puVar3 = (undefined8 *)FUN_001622fc(param_1);
    }
    goto joined_r0x0014f234;
  case 'F':
    goto code_r0x0014ec68;
  case 'G':
    *param_1 = (long)(pcVar12 + 1);
    local_50._0_8_ = FUN_0014e160(param_1);
    if ((byte *)local_50._0_8_ == (byte *)0x0) {
      return (undefined8 *)0x0;
    }
    puVar3 = (undefined8 *)FUN_00162920(param_1,local_50);
    goto LAB_0014eba0;
  case 'K':
  case 'V':
  case 'r':
    uVar15 = (ulong)(cVar1 == 'r');
    if (uVar15 < uVar5) {
      uVar14 = 1;
      if (cVar1 == 'r') {
        uVar14 = 2;
      }
      if (pcVar12[uVar15] != 'V') {
        uVar14 = (uint)(cVar1 == 'r');
      }
      uVar15 = (ulong)uVar14;
    }
    if (uVar15 < uVar5) {
      uVar14 = (uint)uVar15;
      if (pcVar12[uVar15] == 'K') {
        uVar14 = uVar14 + 1;
      }
      uVar15 = (ulong)uVar14;
    }
    if ((uVar5 <= uVar15) ||
       ((pcVar12[uVar15] != 'F' &&
        ((((pcVar12[uVar15] != 'D' || (uVar5 <= uVar15 + 1)) ||
          (0x29 < (byte)pcVar12[uVar15 + 1] - 0x4f)) ||
         ((1L << ((ulong)((byte)pcVar12[uVar15 + 1] - 0x4f) & 0x3f) & 0x30100000001U) == 0))))))
    goto code_r0x0014e260;
    goto code_r0x0014ec68;
  case 'M':
    *param_1 = (long)(pcVar12 + 1);
    local_50._0_8_ = FUN_0014e160(param_1);
    puVar3 = (undefined8 *)0x0;
    if ((byte *)local_50._0_8_ != (byte *)0x0) {
      local_28 = FUN_0014e160(param_1);
      puVar3 = (undefined8 *)0x0;
      if (local_28 != 0) {
        puVar3 = (undefined8 *)FUN_0016430c(param_1,local_50,&local_28);
      }
    }
    goto joined_r0x0014f234;
  case 'O':
    *param_1 = (long)(pcVar12 + 1);
    local_50._0_8_ = FUN_0014e160(param_1);
    if ((byte *)local_50._0_8_ == (byte *)0x0) {
      return (undefined8 *)0x0;
    }
    local_28 = CONCAT44(local_28._4_4_,1);
    goto LAB_0014eeb0;
  case 'P':
    *param_1 = (long)(pcVar12 + 1);
    local_50._0_8_ = FUN_0014e160(param_1);
    if ((byte *)local_50._0_8_ == (byte *)0x0) {
      return (undefined8 *)0x0;
    }
    puVar3 = (undefined8 *)FUN_00162708(param_1,local_50);
    goto LAB_0014eba0;
  case 'R':
    *param_1 = (long)(pcVar12 + 1);
    local_50._0_8_ = FUN_0014e160(param_1);
    if ((byte *)local_50._0_8_ == (byte *)0x0) {
      return (undefined8 *)0x0;
    }
    local_28 = local_28 & 0xffffffff00000000;
LAB_0014eeb0:
    puVar3 = (undefined8 *)FUN_001627b4(param_1,local_50,&local_28);
    goto LAB_0014eba0;
  case 'S':
    if ((uVar5 < 2) || (pcVar12[1] != 't')) {
      local_28 = (ulong)local_28._1_7_ << 8;
      puVar3 = (undefined8 *)FUN_001518e8(param_1,0,&local_28);
      if (puVar3 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      local_58 = puVar3;
      if (((char *)param_1[1] == (char *)*param_1) || (*(char *)*param_1 != 'I')) {
        if ((local_28 & 0xff) != 0) {
          return puVar3;
        }
        goto LAB_0014eba0;
      }
      if (((char)local_28 != '\0') && ((char)param_1[0x61] == '\0')) {
        return puVar3;
      }
      if ((char)local_28 == '\0') {
        FUN_001500fc(param_1 + 0x25,&local_58);
      }
      local_50._0_8_ = FUN_00151a58(param_1,0);
      if ((byte *)local_50._0_8_ == (byte *)0x0) {
        return (undefined8 *)0x0;
      }
LAB_0014f0f8:
      puVar3 = (undefined8 *)FUN_00151f28(param_1,&local_58,local_50);
      goto LAB_0014eba0;
    }
    goto code_r0x0014eb94;
  case 'T':
    if (((uVar5 < 2) || (0x10 < (byte)pcVar12[1] - 0x65)) ||
       ((1 << (ulong)((byte)pcVar12[1] - 0x65 & 0x1f) & 0x14001U) == 0)) {
      puVar3 = (undefined8 *)FUN_00151fd0(param_1);
      if (puVar3 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      local_58 = puVar3;
      if ((((char)param_1[0x61] == '\0') || ((char *)param_1[1] == (char *)*param_1)) ||
         (*(char *)*param_1 != 'I')) goto LAB_0014eba0;
      local_50._0_8_ = FUN_00151a58(param_1,0);
      if ((byte *)local_50._0_8_ == (byte *)0x0) {
        return (undefined8 *)0x0;
      }
      goto LAB_0014f0f8;
    }
code_r0x0014eb94:
    puVar3 = (undefined8 *)FUN_001625b8(param_1);
    goto joined_r0x0014f234;
  case 'U':
code_r0x0014e260:
    puVar3 = (undefined8 *)FUN_00161a7c(param_1);
joined_r0x0014f234:
    if (puVar3 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
LAB_0014eba0:
    plVar18 = (long *)param_1[0x26];
    if (plVar18 == (long *)param_1[0x27]) {
      __src = (long *)param_1[0x25];
      __n = (long)plVar18 - (long)__src;
      if (__src == param_1 + 0x28) {
        pvVar4 = malloc(__n * 2);
        if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if (plVar18 != __src) {
          memmove(pvVar4,__src,__n);
        }
        param_1[0x25] = (long)pvVar4;
      }
      else {
        pvVar4 = realloc(__src,__n * 2);
        param_1[0x25] = (long)pvVar4;
        if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
      }
      plVar18 = (long *)((long)pvVar4 + __n);
      param_1[0x27] = (long)((long)pvVar4 + ((long)__n >> 2) * 8);
    }
    param_1[0x26] = (long)(plVar18 + 1);
    *plVar18 = (long)puVar3;
    return puVar3;
  case 'a':
    pvVar4 = (void *)param_1[0x266];
    *param_1 = (long)(pcVar12 + 1);
    lVar10 = *(long *)((long)pvVar4 + 8);
    puVar3 = pvVar4;
    if (lVar10 - 0xfd0U < 0xfffffffffffff010) {
      puVar3 = malloc(0x1000);
      if (puVar3 == (void *)0x0) {
LAB_0014f4f0:
                    /* WARNING: Subroutine does not return */
        std::terminate();
      }
      lVar10 = 0;
      *puVar3 = pvVar4;
      puVar3[1] = 0;
      param_1[0x266] = (long)puVar3;
    }
    *(long *)((long)puVar3 + 8) = lVar10 + 0x20;
    puVar2 = (undefined8 *)((long)puVar3 + lVar10 + 0x10);
    *puVar2 = &PTR_FUN_001710e8;
    uVar9 = *(ushort *)((long)puVar3 + lVar10 + 0x19);
    *(undefined1 *)((long)puVar3 + lVar10 + 0x18) = 8;
    pcVar12 = "signed char";
    goto LAB_0014efdc;
  case 'b':
    pvVar4 = (void *)param_1[0x266];
    *param_1 = (long)(pcVar12 + 1);
    lVar10 = *(long *)((long)pvVar4 + 8);
    puVar3 = pvVar4;
    if (lVar10 - 0xfd0U < 0xfffffffffffff010) {
      puVar3 = malloc(0x1000);
      if (puVar3 == (void *)0x0) goto LAB_0014f4f0;
      lVar10 = 0;
      *puVar3 = pvVar4;
      puVar3[1] = 0;
      param_1[0x266] = (long)puVar3;
    }
    *(long *)((long)puVar3 + 8) = lVar10 + 0x20;
    puVar2 = (undefined8 *)((long)puVar3 + lVar10 + 0x10);
    *puVar2 = &PTR_FUN_001710e8;
    uVar9 = *(ushort *)((long)puVar3 + lVar10 + 0x19);
    *(undefined1 *)((long)puVar3 + lVar10 + 0x18) = 8;
    pcVar12 = "bool";
    goto LAB_0014f05c;
  case 'c':
    pvVar4 = (void *)param_1[0x266];
    *param_1 = (long)(pcVar12 + 1);
    lVar10 = *(long *)((long)pvVar4 + 8);
    puVar3 = pvVar4;
    if (lVar10 - 0xfd0U < 0xfffffffffffff010) {
      puVar3 = malloc(0x1000);
      if (puVar3 == (void *)0x0) goto LAB_0014f4f0;
      lVar10 = 0;
      *puVar3 = pvVar4;
      puVar3[1] = 0;
      param_1[0x266] = (long)puVar3;
    }
    *(long *)((long)puVar3 + 8) = lVar10 + 0x20;
    puVar2 = (undefined8 *)((long)puVar3 + lVar10 + 0x10);
    *puVar2 = &PTR_FUN_001710e8;
    uVar9 = *(ushort *)((long)puVar3 + lVar10 + 0x19);
    *(undefined1 *)((long)puVar3 + lVar10 + 0x18) = 8;
    pcVar12 = "char";
    goto LAB_0014f05c;
  case 'd':
    pvVar4 = (void *)param_1[0x266];
    *param_1 = (long)(pcVar12 + 1);
    lVar10 = *(long *)((long)pvVar4 + 8);
    puVar3 = pvVar4;
    if (lVar10 - 0xfd0U < 0xfffffffffffff010) {
      puVar3 = malloc(0x1000);
      if (puVar3 == (void *)0x0) goto LAB_0014f4f0;
      lVar10 = 0;
      *puVar3 = pvVar4;
      puVar3[1] = 0;
      param_1[0x266] = (long)puVar3;
    }
    *(long *)((long)puVar3 + 8) = lVar10 + 0x20;
    puVar2 = (undefined8 *)((long)puVar3 + lVar10 + 0x10);
    *puVar2 = &PTR_FUN_001710e8;
    *(undefined1 *)((long)puVar3 + lVar10 + 0x18) = 8;
    pcVar12 = "double";
    *(ushort *)((long)puVar3 + lVar10 + 0x19) =
         *(ushort *)((long)puVar3 + lVar10 + 0x19) & 0xf000 | 0x540;
    uVar11 = 6;
    break;
  case 'e':
    pvVar4 = (void *)param_1[0x266];
    *param_1 = (long)(pcVar12 + 1);
    lVar10 = *(long *)((long)pvVar4 + 8);
    puVar3 = pvVar4;
    if (lVar10 - 0xfd0U < 0xfffffffffffff010) {
      puVar3 = malloc(0x1000);
      if (puVar3 == (void *)0x0) goto LAB_0014f4f0;
      lVar10 = 0;
      *puVar3 = pvVar4;
      puVar3[1] = 0;
      param_1[0x266] = (long)puVar3;
    }
    *(long *)((long)puVar3 + 8) = lVar10 + 0x20;
    puVar2 = (undefined8 *)((long)puVar3 + lVar10 + 0x10);
    *puVar2 = &PTR_FUN_001710e8;
    uVar9 = *(ushort *)((long)puVar3 + lVar10 + 0x19);
    *(undefined1 *)((long)puVar3 + lVar10 + 0x18) = 8;
    pcVar12 = "long double";
LAB_0014efdc:
    *(ushort *)((long)puVar2 + 9) = uVar9 & 0xf000 | 0x540;
    uVar11 = 0xb;
    break;
  case 'f':
    pvVar4 = (void *)param_1[0x266];
    *param_1 = (long)(pcVar12 + 1);
    lVar10 = *(long *)((long)pvVar4 + 8);
    puVar3 = pvVar4;
    if (lVar10 - 0xfd0U < 0xfffffffffffff010) {
      puVar3 = malloc(0x1000);
      if (puVar3 == (void *)0x0) goto LAB_0014f4f0;
      lVar10 = 0;
      *puVar3 = pvVar4;
      puVar3[1] = 0;
      param_1[0x266] = (long)puVar3;
    }
    *(long *)((long)puVar3 + 8) = lVar10 + 0x20;
    puVar2 = (undefined8 *)((long)puVar3 + lVar10 + 0x10);
    *puVar2 = &PTR_FUN_001710e8;
    uVar9 = *(ushort *)((long)puVar3 + lVar10 + 0x19);
    *(undefined1 *)((long)puVar3 + lVar10 + 0x18) = 8;
    pcVar12 = "float";
    goto LAB_0014ea50;
  case 'g':
    pvVar4 = (void *)param_1[0x266];
    *param_1 = (long)(pcVar12 + 1);
    lVar10 = *(long *)((long)pvVar4 + 8);
    puVar3 = pvVar4;
    if (lVar10 - 0xfd0U < 0xfffffffffffff010) {
      puVar3 = malloc(0x1000);
      if (puVar3 == (void *)0x0) goto LAB_0014f4f0;
      lVar10 = 0;
      *puVar3 = pvVar4;
      puVar3[1] = 0;
      param_1[0x266] = (long)puVar3;
    }
    *(long *)((long)puVar3 + 8) = lVar10 + 0x20;
    puVar2 = (undefined8 *)((long)puVar3 + lVar10 + 0x10);
    *puVar2 = &PTR_FUN_001710e8;
    *(undefined1 *)((long)puVar3 + lVar10 + 0x18) = 8;
    pcVar12 = "__float128";
    *(ushort *)((long)puVar3 + lVar10 + 0x19) =
         *(ushort *)((long)puVar3 + lVar10 + 0x19) & 0xf000 | 0x540;
    uVar11 = 10;
    break;
  case 'h':
    pvVar4 = (void *)param_1[0x266];
    *param_1 = (long)(pcVar12 + 1);
    lVar10 = *(long *)((long)pvVar4 + 8);
    puVar3 = pvVar4;
    if (lVar10 - 0xfd0U < 0xfffffffffffff010) {
      puVar3 = malloc(0x1000);
      if (puVar3 == (void *)0x0) goto LAB_0014f4f0;
      lVar10 = 0;
      *puVar3 = pvVar4;
      puVar3[1] = 0;
      param_1[0x266] = (long)puVar3;
    }
    *(long *)((long)puVar3 + 8) = lVar10 + 0x20;
    puVar2 = (undefined8 *)((long)puVar3 + lVar10 + 0x10);
    *puVar2 = &PTR_FUN_001710e8;
    uVar9 = *(ushort *)((long)puVar3 + lVar10 + 0x19);
    *(undefined1 *)((long)puVar3 + lVar10 + 0x18) = 8;
    pcVar12 = "unsigned char";
    goto LAB_0014ece4;
  case 'i':
    pvVar4 = (void *)param_1[0x266];
    *param_1 = (long)(pcVar12 + 1);
    lVar10 = *(long *)((long)pvVar4 + 8);
    puVar3 = pvVar4;
    if (lVar10 - 0xfd0U < 0xfffffffffffff010) {
      puVar3 = malloc(0x1000);
      if (puVar3 == (void *)0x0) goto LAB_0014f4f0;
      lVar10 = 0;
      *puVar3 = pvVar4;
      puVar3[1] = 0;
      param_1[0x266] = (long)puVar3;
    }
    *(long *)((long)puVar3 + 8) = lVar10 + 0x20;
    puVar2 = (undefined8 *)((long)puVar3 + lVar10 + 0x10);
    *puVar2 = &PTR_FUN_001710e8;
    uVar9 = *(ushort *)((long)puVar3 + lVar10 + 0x19);
    *(undefined1 *)((long)puVar3 + lVar10 + 0x18) = 8;
    pcVar12 = "int";
    goto LAB_0014e934;
  case 'j':
    pvVar4 = (void *)param_1[0x266];
    *param_1 = (long)(pcVar12 + 1);
    lVar10 = *(long *)((long)pvVar4 + 8);
    puVar3 = pvVar4;
    if (lVar10 - 0xfd0U < 0xfffffffffffff010) {
      puVar3 = malloc(0x1000);
      if (puVar3 == (void *)0x0) goto LAB_0014f4f0;
      lVar10 = 0;
      *puVar3 = pvVar4;
      puVar3[1] = 0;
      param_1[0x266] = (long)puVar3;
    }
    *(long *)((long)puVar3 + 8) = lVar10 + 0x20;
    puVar2 = (undefined8 *)((long)puVar3 + lVar10 + 0x10);
    *puVar2 = &PTR_FUN_001710e8;
    *(undefined1 *)((long)puVar3 + lVar10 + 0x18) = 8;
    pcVar12 = "unsigned int";
    *(ushort *)((long)puVar3 + lVar10 + 0x19) =
         *(ushort *)((long)puVar3 + lVar10 + 0x19) & 0xf000 | 0x540;
    uVar11 = 0xc;
    break;
  case 'l':
    pvVar4 = (void *)param_1[0x266];
    *param_1 = (long)(pcVar12 + 1);
    lVar10 = *(long *)((long)pvVar4 + 8);
    puVar3 = pvVar4;
    if (lVar10 - 0xfd0U < 0xfffffffffffff010) {
      puVar3 = malloc(0x1000);
      if (puVar3 == (void *)0x0) goto LAB_0014f4f0;
      lVar10 = 0;
      *puVar3 = pvVar4;
      puVar3[1] = 0;
      param_1[0x266] = (long)puVar3;
    }
    *(long *)((long)puVar3 + 8) = lVar10 + 0x20;
    puVar2 = (undefined8 *)((long)puVar3 + lVar10 + 0x10);
    *puVar2 = &PTR_FUN_001710e8;
    uVar9 = *(ushort *)((long)puVar3 + lVar10 + 0x19);
    *(undefined1 *)((long)puVar3 + lVar10 + 0x18) = 8;
    pcVar12 = "long";
    goto LAB_0014f05c;
  case 'm':
    pvVar4 = (void *)param_1[0x266];
    *param_1 = (long)(pcVar12 + 1);
    lVar10 = *(long *)((long)pvVar4 + 8);
    puVar3 = pvVar4;
    if (lVar10 - 0xfd0U < 0xfffffffffffff010) {
      puVar3 = malloc(0x1000);
      if (puVar3 == (void *)0x0) goto LAB_0014f4f0;
      lVar10 = 0;
      *puVar3 = pvVar4;
      puVar3[1] = 0;
      param_1[0x266] = (long)puVar3;
    }
    *(long *)((long)puVar3 + 8) = lVar10 + 0x20;
    puVar2 = (undefined8 *)((long)puVar3 + lVar10 + 0x10);
    *puVar2 = &PTR_FUN_001710e8;
    uVar9 = *(ushort *)((long)puVar3 + lVar10 + 0x19);
    *(undefined1 *)((long)puVar3 + lVar10 + 0x18) = 8;
    pcVar12 = "unsigned long";
LAB_0014ece4:
    *(ushort *)((long)puVar2 + 9) = uVar9 & 0xf000 | 0x540;
    uVar11 = 0xd;
    break;
  case 'n':
    pvVar4 = (void *)param_1[0x266];
    *param_1 = (long)(pcVar12 + 1);
    lVar10 = *(long *)((long)pvVar4 + 8);
    puVar3 = pvVar4;
    if (lVar10 - 0xfd0U < 0xfffffffffffff010) {
      puVar3 = malloc(0x1000);
      if (puVar3 == (void *)0x0) goto LAB_0014f4f0;
      lVar10 = 0;
      *puVar3 = pvVar4;
      puVar3[1] = 0;
      param_1[0x266] = (long)puVar3;
    }
    *(long *)((long)puVar3 + 8) = lVar10 + 0x20;
    puVar2 = (undefined8 *)((long)puVar3 + lVar10 + 0x10);
    *puVar2 = &PTR_FUN_001710e8;
    *(undefined1 *)((long)puVar3 + lVar10 + 0x18) = 8;
    *(ushort *)((long)puVar3 + lVar10 + 0x19) =
         *(ushort *)((long)puVar3 + lVar10 + 0x19) & 0xf000 | 0x540;
    *(char **)((long)puVar3 + lVar10 + 0x20) = "__int128";
    *(undefined8 *)((long)puVar3 + lVar10 + 0x28) = 8;
    return puVar2;
  case 'o':
    pvVar4 = (void *)param_1[0x266];
    *param_1 = (long)(pcVar12 + 1);
    lVar10 = *(long *)((long)pvVar4 + 8);
    puVar3 = pvVar4;
    if (lVar10 - 0xfd0U < 0xfffffffffffff010) {
      puVar3 = malloc(0x1000);
      if (puVar3 == (void *)0x0) goto LAB_0014f4f0;
      lVar10 = 0;
      *puVar3 = pvVar4;
      puVar3[1] = 0;
      param_1[0x266] = (long)puVar3;
    }
    *(long *)((long)puVar3 + 8) = lVar10 + 0x20;
    puVar2 = (undefined8 *)((long)puVar3 + lVar10 + 0x10);
    *puVar2 = &PTR_FUN_001710e8;
    *(undefined1 *)((long)puVar3 + lVar10 + 0x18) = 8;
    pcVar12 = "unsigned __int128";
    *(ushort *)((long)puVar3 + lVar10 + 0x19) =
         *(ushort *)((long)puVar3 + lVar10 + 0x19) & 0xf000 | 0x540;
    uVar11 = 0x11;
    break;
  case 's':
    pvVar4 = (void *)param_1[0x266];
    *param_1 = (long)(pcVar12 + 1);
    lVar10 = *(long *)((long)pvVar4 + 8);
    puVar3 = pvVar4;
    if (lVar10 - 0xfd0U < 0xfffffffffffff010) {
      puVar3 = malloc(0x1000);
      if (puVar3 == (void *)0x0) goto LAB_0014f4f0;
      lVar10 = 0;
      *puVar3 = pvVar4;
      puVar3[1] = 0;
      param_1[0x266] = (long)puVar3;
    }
    *(long *)((long)puVar3 + 8) = lVar10 + 0x20;
    puVar2 = (undefined8 *)((long)puVar3 + lVar10 + 0x10);
    *puVar2 = &PTR_FUN_001710e8;
    uVar9 = *(ushort *)((long)puVar3 + lVar10 + 0x19);
    *(undefined1 *)((long)puVar3 + lVar10 + 0x18) = 8;
    pcVar12 = "short";
LAB_0014ea50:
    *(ushort *)((long)puVar2 + 9) = uVar9 & 0xf000 | 0x540;
    uVar11 = 5;
    break;
  case 't':
    pvVar4 = (void *)param_1[0x266];
    *param_1 = (long)(pcVar12 + 1);
    lVar10 = *(long *)((long)pvVar4 + 8);
    puVar3 = pvVar4;
    if (lVar10 - 0xfd0U < 0xfffffffffffff010) {
      puVar3 = malloc(0x1000);
      if (puVar3 == (void *)0x0) goto LAB_0014f4f0;
      lVar10 = 0;
      *puVar3 = pvVar4;
      puVar3[1] = 0;
      param_1[0x266] = (long)puVar3;
    }
    *(long *)((long)puVar3 + 8) = lVar10 + 0x20;
    puVar2 = (undefined8 *)((long)puVar3 + lVar10 + 0x10);
    *puVar2 = &PTR_FUN_001710e8;
    *(undefined1 *)((long)puVar3 + lVar10 + 0x18) = 8;
    pcVar12 = "unsigned short";
    *(ushort *)((long)puVar3 + lVar10 + 0x19) =
         *(ushort *)((long)puVar3 + lVar10 + 0x19) & 0xf000 | 0x540;
    uVar11 = 0xe;
    break;
  case 'u':
    pbVar13 = (byte *)(pcVar12 + 1);
    *param_1 = (long)pbVar13;
    if (pbVar6 == pbVar13) {
      return (undefined8 *)0x0;
    }
    if (*pbVar13 - 0x3a < 0xfffffff6) {
      return (undefined8 *)0x0;
    }
    local_50._8_8_ = 0;
    lVar10 = 0;
    do {
      lVar17 = lVar10;
      uVar16 = local_50._8_8_;
      local_50._0_8_ = pcVar12 + lVar17 + 2;
      *param_1 = local_50._0_8_;
      uVar15 = (ulong)(byte)pcVar12[lVar17 + 1];
      local_50._8_8_ = (uVar15 + uVar16 * 10) - 0x30;
      if ((byte *)local_50._0_8_ == pbVar6) break;
      lVar10 = lVar17 + 1;
    } while (*(byte *)local_50._0_8_ - 0x30 < 10);
    if ((uVar5 - lVar17) - 2 < (ulong)local_50._8_8_) {
      return (undefined8 *)0x0;
    }
    pbVar13 = (byte *)(pcVar12 + uVar15 + uVar16 * 10 + lVar17 + -0x2e);
    *param_1 = (long)pbVar13;
    if (local_50._8_8_ == 0) {
      return (undefined8 *)0x0;
    }
    if ((pbVar13 == pbVar6) || (*pbVar13 != 0x49)) {
      puVar3 = (undefined8 *)FUN_00151670(param_1,local_50);
    }
    else {
      *param_1 = (long)(pcVar12 + uVar15 + uVar16 * 10 + lVar17 + -0x2d);
      local_28 = FUN_0014e160(param_1);
      if (local_28 == 0) {
        return (undefined8 *)0x0;
      }
      pcVar12 = (char *)*param_1;
      if (pcVar12 == (char *)param_1[1]) {
        return (undefined8 *)0x0;
      }
      if (*pcVar12 != 'E') {
        return (undefined8 *)0x0;
      }
      *param_1 = (long)(pcVar12 + 1);
      puVar3 = (undefined8 *)FUN_00162058(param_1,local_50,&local_28);
    }
    goto LAB_0014eba0;
  case 'v':
    pvVar4 = (void *)param_1[0x266];
    *param_1 = (long)(pcVar12 + 1);
    lVar10 = *(long *)((long)pvVar4 + 8);
    puVar3 = pvVar4;
    if (lVar10 - 0xfd0U < 0xfffffffffffff010) {
      puVar3 = malloc(0x1000);
      if (puVar3 == (void *)0x0) goto LAB_0014f4f0;
      lVar10 = 0;
      *puVar3 = pvVar4;
      puVar3[1] = 0;
      param_1[0x266] = (long)puVar3;
    }
    *(long *)((long)puVar3 + 8) = lVar10 + 0x20;
    puVar2 = (undefined8 *)((long)puVar3 + lVar10 + 0x10);
    *puVar2 = &PTR_FUN_001710e8;
    uVar9 = *(ushort *)((long)puVar3 + lVar10 + 0x19);
    *(undefined1 *)((long)puVar3 + lVar10 + 0x18) = 8;
    pcVar12 = "void";
LAB_0014f05c:
    *(ushort *)((long)puVar2 + 9) = uVar9 & 0xf000 | 0x540;
    uVar11 = 4;
    break;
  case 'w':
    pvVar4 = (void *)param_1[0x266];
    *param_1 = (long)(pcVar12 + 1);
    lVar10 = *(long *)((long)pvVar4 + 8);
    puVar3 = pvVar4;
    if (lVar10 - 0xfd0U < 0xfffffffffffff010) {
      puVar3 = malloc(0x1000);
      if (puVar3 == (void *)0x0) goto LAB_0014f4f0;
      lVar10 = 0;
      *puVar3 = pvVar4;
      puVar3[1] = 0;
      param_1[0x266] = (long)puVar3;
    }
    *(long *)((long)puVar3 + 8) = lVar10 + 0x20;
    puVar2 = (undefined8 *)((long)puVar3 + lVar10 + 0x10);
    *puVar2 = &PTR_FUN_001710e8;
    *(undefined1 *)((long)puVar3 + lVar10 + 0x18) = 8;
    pcVar12 = "wchar_t";
    *(ushort *)((long)puVar3 + lVar10 + 0x19) =
         *(ushort *)((long)puVar3 + lVar10 + 0x19) & 0xf000 | 0x540;
    uVar11 = 7;
    break;
  case 'x':
    pvVar4 = (void *)param_1[0x266];
    *param_1 = (long)(pcVar12 + 1);
    lVar10 = *(long *)((long)pvVar4 + 8);
    puVar3 = pvVar4;
    if (lVar10 - 0xfd0U < 0xfffffffffffff010) {
      puVar3 = malloc(0x1000);
      if (puVar3 == (void *)0x0) goto LAB_0014f4f0;
      lVar10 = 0;
      *puVar3 = pvVar4;
      puVar3[1] = 0;
      param_1[0x266] = (long)puVar3;
    }
    *(long *)((long)puVar3 + 8) = lVar10 + 0x20;
    puVar2 = (undefined8 *)((long)puVar3 + lVar10 + 0x10);
    *puVar2 = &PTR_FUN_001710e8;
    *(undefined1 *)((long)puVar3 + lVar10 + 0x18) = 8;
    pcVar12 = "long long";
    *(ushort *)((long)puVar3 + lVar10 + 0x19) =
         *(ushort *)((long)puVar3 + lVar10 + 0x19) & 0xf000 | 0x540;
    uVar11 = 9;
    break;
  case 'y':
    pvVar4 = (void *)param_1[0x266];
    *param_1 = (long)(pcVar12 + 1);
    lVar10 = *(long *)((long)pvVar4 + 8);
    puVar3 = pvVar4;
    if (lVar10 - 0xfd0U < 0xfffffffffffff010) {
      puVar3 = malloc(0x1000);
      if (puVar3 == (void *)0x0) goto LAB_0014f4f0;
      lVar10 = 0;
      *puVar3 = pvVar4;
      puVar3[1] = 0;
      param_1[0x266] = (long)puVar3;
    }
    *(long *)((long)puVar3 + 8) = lVar10 + 0x20;
    puVar2 = (undefined8 *)((long)puVar3 + lVar10 + 0x10);
    *puVar2 = &PTR_FUN_001710e8;
    *(undefined1 *)((long)puVar3 + lVar10 + 0x18) = 8;
    pcVar12 = "unsigned long long";
    *(ushort *)((long)puVar3 + lVar10 + 0x19) =
         *(ushort *)((long)puVar3 + lVar10 + 0x19) & 0xf000 | 0x540;
    uVar11 = 0x12;
    break;
  case 'z':
    pvVar4 = (void *)param_1[0x266];
    *param_1 = (long)(pcVar12 + 1);
    lVar10 = *(long *)((long)pvVar4 + 8);
    puVar3 = pvVar4;
    if (lVar10 - 0xfd0U < 0xfffffffffffff010) {
      puVar3 = malloc(0x1000);
      if (puVar3 == (void *)0x0) goto LAB_0014f4f0;
      lVar10 = 0;
      *puVar3 = pvVar4;
      puVar3[1] = 0;
      param_1[0x266] = (long)puVar3;
    }
    *(long *)((long)puVar3 + 8) = lVar10 + 0x20;
    puVar2 = (undefined8 *)((long)puVar3 + lVar10 + 0x10);
    *puVar2 = &PTR_FUN_001710e8;
    uVar9 = *(ushort *)((long)puVar3 + lVar10 + 0x19);
    *(undefined1 *)((long)puVar3 + lVar10 + 0x18) = 8;
    pcVar12 = "...";
LAB_0014e934:
    *(ushort *)((long)puVar2 + 9) = uVar9 & 0xf000 | 0x540;
    uVar11 = 3;
  }
  puVar2[2] = pcVar12;
  puVar2[3] = uVar11;
code_r0x0014f074:
  return puVar2;
code_r0x0014ec68:
  puVar3 = (undefined8 *)FUN_001614d4(param_1);
  goto joined_r0x0014f234;
}


