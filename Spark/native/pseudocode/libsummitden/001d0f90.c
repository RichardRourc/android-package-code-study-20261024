// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001d0f90; body: [[001d0f90, 001d2743]]

undefined8 * FUN_001d0f90(long *param_1)

{
  char cVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  void *pvVar5;
  ulong uVar6;
  byte *pbVar7;
  undefined *puVar8;
  char *pcVar9;
  ushort uVar10;
  long lVar11;
  undefined8 uVar12;
  char *pcVar13;
  byte *pbVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  size_t __n;
  long *__src;
  long *plVar19;
  undefined8 *local_58;
  undefined1 local_50 [16];
  ulong local_28;
  
  pcVar13 = (char *)*param_1;
  pbVar7 = (byte *)param_1[1];
  local_58 = (undefined8 *)0x0;
  uVar6 = (long)pbVar7 - (long)pcVar13;
  if (uVar6 == 0) goto code_r0x001d19d4;
  cVar1 = *pcVar13;
  switch(cVar1) {
  case 'A':
    pbVar14 = (byte *)(pcVar13 + 1);
    local_28 = 0;
    *param_1 = (long)pbVar14;
    if (pbVar7 == pbVar14) {
LAB_001d1f18:
      uVar6 = FUN_001d642c(param_1);
      puVar4 = (undefined8 *)0x0;
      if (uVar6 == 0) goto joined_r0x001d2018;
      pcVar13 = (char *)*param_1;
      if ((pcVar13 == (char *)param_1[1]) || (*pcVar13 != '_')) {
        return (undefined8 *)0x0;
      }
      pcVar13 = pcVar13 + 1;
      local_28 = uVar6;
    }
    else if (*pbVar14 - 0x3a < 0xfffffff6) {
      if (*pbVar14 != 0x5f) goto LAB_001d1f18;
      pcVar13 = pcVar13 + 2;
    }
    else {
      local_50 = FUN_001d0e50(param_1,0);
      local_28 = FUN_001d5f80(param_1,local_50);
      pcVar13 = (char *)*param_1;
      if (pcVar13 == (char *)param_1[1]) {
        return (undefined8 *)0x0;
      }
      if (*pcVar13 != '_') {
        return (undefined8 *)0x0;
      }
      pcVar13 = pcVar13 + 1;
    }
    *param_1 = (long)pcVar13;
    pbVar7 = (byte *)FUN_001d0f90(param_1);
    puVar4 = (undefined8 *)0x0;
    local_50._0_8_ = pbVar7;
    if (pbVar7 != (byte *)0x0) {
      puVar4 = (undefined8 *)FUN_001e7c84(param_1,local_50,&local_28);
    }
    goto joined_r0x001d2018;
  default:
    goto code_r0x001d19d4;
  case 'C':
    *param_1 = (long)(pcVar13 + 1);
    local_50._0_8_ = FUN_001d0f90(param_1);
    if ((byte *)local_50._0_8_ == (byte *)0x0) {
      return (undefined8 *)0x0;
    }
    puVar4 = (undefined8 *)FUN_001e6434(param_1,local_50);
    goto LAB_001d19e0;
  case 'D':
    if (uVar6 < 2) {
      return (undefined8 *)0x0;
    }
    cVar1 = pcVar13[1];
    puVar3 = (undefined8 *)0x0;
    switch(cVar1) {
    case 'A':
      if (uVar6 != 2) {
        bVar2 = pcVar13[2];
        *param_1 = (long)(pcVar13 + 3);
        if (0x6c < bVar2) {
          if (bVar2 == 0x6d) {
            pcVar13 = "unsigned long _Accum";
LAB_001d25ec:
            puVar4 = (undefined8 *)FUN_001e5ac4(param_1,pcVar13);
            return puVar4;
          }
          if (bVar2 == 0x74) {
            pcVar13 = "unsigned short _Accum";
LAB_001d2620:
            puVar4 = (undefined8 *)FUN_001d4830(param_1,pcVar13);
            return puVar4;
          }
          if (bVar2 != 0x73) {
            return (undefined8 *)0x0;
          }
          pcVar13 = "short _Accum";
LAB_001d2504:
          puVar4 = (undefined8 *)FUN_001e5570(param_1,pcVar13);
          return puVar4;
        }
        if (bVar2 == 0x69) {
          pcVar13 = "_Accum";
LAB_001d25c4:
          puVar4 = (undefined8 *)FUN_001e5820(param_1,pcVar13);
          return puVar4;
        }
        if (bVar2 != 0x6a) {
          if (bVar2 != 0x6c) {
            return (undefined8 *)0x0;
          }
          pcVar13 = "long _Accum";
          goto LAB_001d2498;
        }
        pcVar13 = "unsigned _Accum";
        goto LAB_001d2270;
      }
      goto LAB_001d2338;
    case 'B':
    case 'U':
      pbVar14 = (byte *)(pcVar13 + 2);
      *param_1 = (long)pbVar14;
      local_28 = CONCAT71(local_28._1_7_,cVar1 == 'B');
      if ((pbVar7 == pbVar14) || (*pbVar14 - 0x3a < 0xfffffff6)) {
        local_50._0_8_ = FUN_001d642c(param_1);
        if (local_50._0_8_ == 0) {
          return (undefined8 *)0x0;
        }
      }
      else {
        local_50 = FUN_001d0e50(param_1,0);
        lVar11 = FUN_001d5f80(param_1,local_50);
        local_50._0_8_ = lVar11;
      }
      pcVar13 = (char *)*param_1;
      if (pcVar13 == (char *)param_1[1]) {
        return (undefined8 *)0x0;
      }
      if (*pcVar13 != '_') {
        return (undefined8 *)0x0;
      }
      *param_1 = (long)(pcVar13 + 1);
      puVar4 = (undefined8 *)FUN_001e5d74(param_1,local_50,&local_28);
      return puVar4;
    default:
      goto code_r0x001d1eb0;
    case 'F':
      *param_1 = (long)(pcVar13 + 2);
      uVar6 = FUN_001d036c(param_1,&DAT_0011dfbd,3);
      if ((uVar6 & 1) == 0) {
        local_50 = FUN_001d0e50(param_1,0);
        uVar12 = FUN_001d5f80(param_1,local_50);
        pcVar13 = (char *)*param_1;
        if ((pcVar13 != (char *)param_1[1]) && (*pcVar13 == '_')) {
          *param_1 = (long)(pcVar13 + 1);
          local_50._0_8_ = uVar12;
          puVar4 = (undefined8 *)FUN_001e5a24(param_1,local_50);
          return puVar4;
        }
        return (undefined8 *)0x0;
      }
      pcVar13 = "std::bfloat16_t";
LAB_001d2270:
      puVar4 = (undefined8 *)FUN_001dec04(param_1,pcVar13);
      return puVar4;
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
      *param_1 = (long)(pcVar13 + 2);
      local_28 = FUN_001d2908(param_1,0);
      if (local_28 != 0) {
        puVar4 = (undefined8 *)FUN_001e5e20(param_1,&local_28,local_50);
        return puVar4;
      }
      return (undefined8 *)0x0;
    case 'O':
    case 'o':
    case 'w':
    case 'x':
      goto code_r0x001d1aa4;
    case 'R':
      if (uVar6 != 2) {
        bVar2 = pcVar13[2];
        *param_1 = (long)(pcVar13 + 3);
        if (0x6c < bVar2) {
          if (bVar2 == 0x6d) {
            pcVar13 = "unsigned long _Fract";
            goto LAB_001d25ec;
          }
          if (bVar2 == 0x74) {
            pcVar13 = "unsigned short _Fract";
            goto LAB_001d2620;
          }
          if (bVar2 != 0x73) {
            return (undefined8 *)0x0;
          }
          pcVar13 = "short _Fract";
          goto LAB_001d2504;
        }
        if (bVar2 == 0x69) {
          pcVar13 = "_Fract";
          goto LAB_001d25c4;
        }
        if (bVar2 != 0x6a) {
          if (bVar2 != 0x6c) {
            return (undefined8 *)0x0;
          }
          pcVar13 = "long _Fract";
          goto LAB_001d2498;
        }
        pcVar13 = "unsigned _Fract";
        goto LAB_001d2270;
      }
LAB_001d2338:
      pcVar13 = pcVar13 + 3;
LAB_001d233c:
      *param_1 = (long)pcVar13;
      return (undefined8 *)0x0;
    case 'S':
      pbVar14 = (byte *)(pcVar13 + 2);
      uVar6 = (long)pbVar7 - (long)pbVar14;
      *param_1 = (long)pbVar14;
      if (pbVar7 == pbVar14) {
        return (undefined8 *)0x0;
      }
      if (uVar6 < 2) {
        return (undefined8 *)0x0;
      }
      if (*pbVar14 != 0x44) {
        return (undefined8 *)0x0;
      }
      if (pcVar13[3] == 'R') {
        if (2 < uVar6) {
          bVar2 = pcVar13[4];
          *param_1 = (long)(pcVar13 + 5);
          if (0x6c < bVar2) {
            if (bVar2 == 0x6d) {
              pcVar13 = "_Sat unsigned long _Fract";
              goto LAB_001d26d0;
            }
            if (bVar2 == 0x74) {
              pcVar13 = "_Sat unsigned short _Fract";
              goto LAB_001d271c;
            }
            if (bVar2 != 0x73) {
              return (undefined8 *)0x0;
            }
            pcVar13 = "_Sat short _Fract";
            goto LAB_001d2684;
          }
          if (bVar2 != 0x69) {
            if (bVar2 != 0x6a) {
              if (bVar2 != 0x6c) {
                return (undefined8 *)0x0;
              }
              pcVar13 = "_Sat long _Fract";
              goto LAB_001d2564;
            }
            pcVar13 = "_Sat unsigned _Fract";
            goto LAB_001d25ec;
          }
          pcVar13 = "_Sat _Fract";
          goto LAB_001d2498;
        }
      }
      else {
        if (pcVar13[3] != 'A') {
          return (undefined8 *)0x0;
        }
        if (2 < uVar6) {
          bVar2 = pcVar13[4];
          *param_1 = (long)(pcVar13 + 5);
          if (0x6c < bVar2) {
            if (bVar2 == 0x6d) {
              pcVar13 = "_Sat unsigned long _Accum";
LAB_001d26d0:
              puVar4 = (undefined8 *)FUN_001e5cc8(param_1,pcVar13);
              return puVar4;
            }
            if (bVar2 == 0x74) {
              pcVar13 = "_Sat unsigned short _Accum";
LAB_001d271c:
              puVar4 = (undefined8 *)FUN_001e5b70(param_1,pcVar13);
              return puVar4;
            }
            if (bVar2 != 0x73) {
              return (undefined8 *)0x0;
            }
            pcVar13 = "_Sat short _Accum";
LAB_001d2684:
            puVar4 = (undefined8 *)FUN_001e5774(param_1,pcVar13);
            return puVar4;
          }
          if (bVar2 != 0x69) {
            if (bVar2 != 0x6a) {
              if (bVar2 != 0x6c) {
                return (undefined8 *)0x0;
              }
              pcVar13 = "_Sat long _Accum";
LAB_001d2564:
              puVar4 = (undefined8 *)FUN_001e5c1c(param_1,pcVar13);
              return puVar4;
            }
            pcVar13 = "_Sat unsigned _Accum";
            goto LAB_001d25ec;
          }
          pcVar13 = "_Sat _Accum";
LAB_001d2498:
          puVar4 = (undefined8 *)FUN_001e54c4(param_1,pcVar13);
          return puVar4;
        }
      }
      pcVar13 = pcVar13 + 5;
      goto LAB_001d233c;
    case 'T':
    case 't':
      puVar4 = (undefined8 *)FUN_001d5618(param_1);
      break;
    case 'a':
      puVar8 = &DAT_0011d9f8;
      goto LAB_001d229c;
    case 'c':
      pcVar9 = "decltype(auto)";
      goto LAB_001d22d0;
    case 'd':
      pcVar9 = "decimal64";
      goto LAB_001d2354;
    case 'e':
      *param_1 = (long)(pcVar13 + 2);
      puVar4 = (undefined8 *)FUN_001e58cc(param_1,"decimal128");
      return puVar4;
    case 'f':
      pcVar9 = "decimal32";
LAB_001d2354:
      *param_1 = (long)(pcVar13 + 2);
      puVar4 = (undefined8 *)FUN_001e561c(param_1,pcVar9);
      return puVar4;
    case 'h':
      puVar8 = &DAT_0011e969;
LAB_001d229c:
      *param_1 = (long)(pcVar13 + 2);
      puVar4 = (undefined8 *)FUN_001d60f4(param_1,puVar8);
      return puVar4;
    case 'i':
      pcVar9 = "char32_t";
      goto LAB_001d2388;
    case 'n':
      pcVar9 = "std::nullptr_t";
LAB_001d22d0:
      *param_1 = (long)(pcVar13 + 2);
      puVar4 = (undefined8 *)FUN_001e3bd0(param_1,pcVar9);
      return puVar4;
    case 'p':
      *param_1 = (long)(pcVar13 + 2);
      local_50._0_8_ = FUN_001d0f90(param_1);
      if ((byte *)local_50._0_8_ == (byte *)0x0) {
        return (undefined8 *)0x0;
      }
      puVar4 = (undefined8 *)FUN_001d98c4(param_1,local_50);
      goto LAB_001d19e0;
    case 's':
      pcVar9 = "char16_t";
LAB_001d2388:
      *param_1 = (long)(pcVar13 + 2);
      puVar4 = (undefined8 *)FUN_001e56c8(param_1,pcVar9);
      return puVar4;
    case 'u':
      *param_1 = (long)(pcVar13 + 2);
      puVar4 = (undefined8 *)FUN_001dcc14(param_1,"char8_t");
      return puVar4;
    case 'v':
      puVar4 = (undefined8 *)FUN_001e5ecc(param_1);
    }
    goto joined_r0x001d2018;
  case 'F':
    goto code_r0x001d1aa4;
  case 'G':
    *param_1 = (long)(pcVar13 + 1);
    local_50._0_8_ = FUN_001d0f90(param_1);
    if ((byte *)local_50._0_8_ == (byte *)0x0) {
      return (undefined8 *)0x0;
    }
    puVar4 = (undefined8 *)FUN_001e64e4(param_1,local_50);
    goto LAB_001d19e0;
  case 'K':
  case 'V':
  case 'r':
    uVar16 = (ulong)(cVar1 == 'r');
    if (uVar16 < uVar6) {
      uVar15 = 1;
      if (cVar1 == 'r') {
        uVar15 = 2;
      }
      if (pcVar13[uVar16] != 'V') {
        uVar15 = (uint)(cVar1 == 'r');
      }
      uVar16 = (ulong)uVar15;
    }
    if (uVar16 < uVar6) {
      uVar15 = (uint)uVar16;
      if (pcVar13[uVar16] == 'K') {
        uVar15 = uVar15 + 1;
      }
      uVar16 = (ulong)uVar15;
    }
    if ((uVar6 <= uVar16) ||
       ((pcVar13[uVar16] != 'F' &&
        ((((pcVar13[uVar16] != 'D' || (uVar6 <= uVar16 + 1)) ||
          (0x29 < (byte)pcVar13[uVar16 + 1] - 0x4f)) ||
         ((1L << ((ulong)((byte)pcVar13[uVar16 + 1] - 0x4f) & 0x3f) & 0x30100000001U) == 0))))))
    goto code_r0x001d1090;
    goto code_r0x001d1aa4;
  case 'M':
    *param_1 = (long)(pcVar13 + 1);
    local_50._0_8_ = FUN_001d0f90(param_1);
    puVar4 = (undefined8 *)0x0;
    if ((byte *)local_50._0_8_ != (byte *)0x0) {
      local_28 = FUN_001d0f90(param_1);
      puVar4 = (undefined8 *)0x0;
      if (local_28 != 0) {
        puVar4 = (undefined8 *)FUN_001e86bc(param_1,local_50,&local_28);
      }
    }
    goto joined_r0x001d2018;
  case 'O':
    *param_1 = (long)(pcVar13 + 1);
    local_50._0_8_ = FUN_001d0f90(param_1);
    if ((byte *)local_50._0_8_ == (byte *)0x0) {
      return (undefined8 *)0x0;
    }
    local_28 = CONCAT44(local_28._4_4_,1);
    goto LAB_001d1cec;
  case 'P':
    *param_1 = (long)(pcVar13 + 1);
    local_50._0_8_ = FUN_001d0f90(param_1);
    if ((byte *)local_50._0_8_ == (byte *)0x0) {
      return (undefined8 *)0x0;
    }
    puVar4 = (undefined8 *)FUN_001e62cc(param_1,local_50);
    goto LAB_001d19e0;
  case 'R':
    *param_1 = (long)(pcVar13 + 1);
    local_50._0_8_ = FUN_001d0f90(param_1);
    if ((byte *)local_50._0_8_ == (byte *)0x0) {
      return (undefined8 *)0x0;
    }
    local_28 = local_28 & 0xffffffff00000000;
LAB_001d1cec:
    puVar4 = (undefined8 *)FUN_001e6378(param_1,local_50,&local_28);
    goto LAB_001d19e0;
  case 'S':
    if ((uVar6 < 2) || (pcVar13[1] != 't')) {
      local_28 = (ulong)local_28._1_7_ << 8;
      puVar4 = (undefined8 *)FUN_001d4b6c(param_1,0,&local_28);
      if (puVar4 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      local_58 = puVar4;
      if (((char *)param_1[1] == (char *)*param_1) || (*(char *)*param_1 != 'I')) {
joined_r0x001d1fc0:
        if ((local_28 & 1) != 0) {
          return puVar4;
        }
        goto LAB_001d19e0;
      }
      if ((local_28 & 1) == 0) {
        FUN_001d3360(param_1 + 0x25,&local_58);
      }
      else if ((*(byte *)(param_1 + 0x61) & 1) == 0) goto joined_r0x001d1fc0;
      local_50._0_8_ = FUN_001d4cdc(param_1,0);
      if ((byte *)local_50._0_8_ == (byte *)0x0) {
        return (undefined8 *)0x0;
      }
LAB_001d1fe8:
      puVar4 = (undefined8 *)FUN_001d51a8(param_1,&local_58,local_50);
      goto LAB_001d19e0;
    }
    goto code_r0x001d19d4;
  case 'T':
    if (((uVar6 < 2) || (0x10 < (byte)pcVar13[1] - 0x65)) ||
       ((1 << (ulong)((byte)pcVar13[1] - 0x65 & 0x1f) & 0x14001U) == 0)) {
      puVar4 = (undefined8 *)FUN_001d5250(param_1);
      if (puVar4 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      local_58 = puVar4;
      if ((((char)param_1[0x61] != '\x01') || ((char *)param_1[1] == (char *)*param_1)) ||
         (*(char *)*param_1 != 'I')) goto LAB_001d19e0;
      FUN_001d3360(param_1 + 0x25,&local_58);
      local_50._0_8_ = FUN_001d4cdc(param_1,0);
      if ((byte *)local_50._0_8_ == (byte *)0x0) {
        return (undefined8 *)0x0;
      }
      goto LAB_001d1fe8;
    }
code_r0x001d19d4:
    puVar4 = (undefined8 *)FUN_001e6180(param_1);
    goto joined_r0x001d2018;
  case 'U':
code_r0x001d1090:
    puVar4 = (undefined8 *)FUN_001e50ec(param_1);
joined_r0x001d2018:
    if (puVar4 == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
LAB_001d19e0:
    plVar19 = (long *)param_1[0x26];
    if (plVar19 == (long *)param_1[0x27]) {
      __src = (long *)param_1[0x25];
      __n = (long)plVar19 - (long)__src;
      if (__src == param_1 + 0x28) {
        pvVar5 = malloc(__n * 2);
        if (pvVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        if (plVar19 != __src) {
          memmove(pvVar5,__src,__n);
        }
        param_1[0x25] = (long)pvVar5;
      }
      else {
        pvVar5 = realloc(__src,__n * 2);
        param_1[0x25] = (long)pvVar5;
        if (pvVar5 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
      }
      plVar19 = (long *)((long)pvVar5 + __n);
      param_1[0x27] = (long)((long)pvVar5 + ((long)__n >> 2) * 8);
    }
    *plVar19 = (long)puVar4;
    param_1[0x26] = (long)(plVar19 + 1);
    return puVar4;
  case 'a':
    pvVar5 = (void *)param_1[0x266];
    *param_1 = (long)(pcVar13 + 1);
    lVar11 = *(long *)((long)pvVar5 + 8);
    puVar4 = pvVar5;
    if (lVar11 - 0xfd0U < 0xfffffffffffff010) {
      puVar4 = malloc(0x1000);
      if (puVar4 == (void *)0x0) {
LAB_001d273c:
                    /* WARNING: Subroutine does not return */
        FUN_001cee20();
      }
      lVar11 = 0;
      *puVar4 = pvVar5;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    *(long *)((long)puVar4 + 8) = lVar11 + 0x20;
    puVar3 = (undefined8 *)((long)puVar4 + lVar11 + 0x10);
    *puVar3 = &PTR_FUN_001f3c10;
    uVar10 = *(ushort *)((long)puVar4 + lVar11 + 0x19);
    *(undefined1 *)((long)puVar4 + lVar11 + 0x18) = 8;
    pcVar13 = "signed char";
    goto LAB_001d1e18;
  case 'b':
    pvVar5 = (void *)param_1[0x266];
    *param_1 = (long)(pcVar13 + 1);
    lVar11 = *(long *)((long)pvVar5 + 8);
    puVar4 = pvVar5;
    if (lVar11 - 0xfd0U < 0xfffffffffffff010) {
      puVar4 = malloc(0x1000);
      if (puVar4 == (void *)0x0) goto LAB_001d273c;
      lVar11 = 0;
      *puVar4 = pvVar5;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    *(long *)((long)puVar4 + 8) = lVar11 + 0x20;
    puVar3 = (undefined8 *)((long)puVar4 + lVar11 + 0x10);
    *puVar3 = &PTR_FUN_001f3c10;
    uVar10 = *(ushort *)((long)puVar4 + lVar11 + 0x19);
    *(undefined1 *)((long)puVar4 + lVar11 + 0x18) = 8;
    pcVar13 = "bool";
    goto LAB_001d1e98;
  case 'c':
    pvVar5 = (void *)param_1[0x266];
    *param_1 = (long)(pcVar13 + 1);
    lVar11 = *(long *)((long)pvVar5 + 8);
    puVar4 = pvVar5;
    if (lVar11 - 0xfd0U < 0xfffffffffffff010) {
      puVar4 = malloc(0x1000);
      if (puVar4 == (void *)0x0) goto LAB_001d273c;
      lVar11 = 0;
      *puVar4 = pvVar5;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    *(long *)((long)puVar4 + 8) = lVar11 + 0x20;
    puVar3 = (undefined8 *)((long)puVar4 + lVar11 + 0x10);
    *puVar3 = &PTR_FUN_001f3c10;
    uVar10 = *(ushort *)((long)puVar4 + lVar11 + 0x19);
    *(undefined1 *)((long)puVar4 + lVar11 + 0x18) = 8;
    pcVar13 = "char";
    goto LAB_001d1e98;
  case 'd':
    pvVar5 = (void *)param_1[0x266];
    *param_1 = (long)(pcVar13 + 1);
    lVar11 = *(long *)((long)pvVar5 + 8);
    puVar4 = pvVar5;
    if (lVar11 - 0xfd0U < 0xfffffffffffff010) {
      puVar4 = malloc(0x1000);
      if (puVar4 == (void *)0x0) goto LAB_001d273c;
      lVar11 = 0;
      *puVar4 = pvVar5;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    *(long *)((long)puVar4 + 8) = lVar11 + 0x20;
    puVar3 = (undefined8 *)((long)puVar4 + lVar11 + 0x10);
    *puVar3 = &PTR_FUN_001f3c10;
    *(undefined1 *)((long)puVar4 + lVar11 + 0x18) = 8;
    pcVar13 = "double";
    *(ushort *)((long)puVar4 + lVar11 + 0x19) =
         *(ushort *)((long)puVar4 + lVar11 + 0x19) & 0xf000 | 0x540;
    uVar12 = 6;
    break;
  case 'e':
    pvVar5 = (void *)param_1[0x266];
    *param_1 = (long)(pcVar13 + 1);
    lVar11 = *(long *)((long)pvVar5 + 8);
    puVar4 = pvVar5;
    if (lVar11 - 0xfd0U < 0xfffffffffffff010) {
      puVar4 = malloc(0x1000);
      if (puVar4 == (void *)0x0) goto LAB_001d273c;
      lVar11 = 0;
      *puVar4 = pvVar5;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    *(long *)((long)puVar4 + 8) = lVar11 + 0x20;
    puVar3 = (undefined8 *)((long)puVar4 + lVar11 + 0x10);
    *puVar3 = &PTR_FUN_001f3c10;
    uVar10 = *(ushort *)((long)puVar4 + lVar11 + 0x19);
    *(undefined1 *)((long)puVar4 + lVar11 + 0x18) = 8;
    pcVar13 = "long double";
LAB_001d1e18:
    *(ushort *)((long)puVar3 + 9) = uVar10 & 0xf000 | 0x540;
    uVar12 = 0xb;
    break;
  case 'f':
    pvVar5 = (void *)param_1[0x266];
    *param_1 = (long)(pcVar13 + 1);
    lVar11 = *(long *)((long)pvVar5 + 8);
    puVar4 = pvVar5;
    if (lVar11 - 0xfd0U < 0xfffffffffffff010) {
      puVar4 = malloc(0x1000);
      if (puVar4 == (void *)0x0) goto LAB_001d273c;
      lVar11 = 0;
      *puVar4 = pvVar5;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    *(long *)((long)puVar4 + 8) = lVar11 + 0x20;
    puVar3 = (undefined8 *)((long)puVar4 + lVar11 + 0x10);
    *puVar3 = &PTR_FUN_001f3c10;
    uVar10 = *(ushort *)((long)puVar4 + lVar11 + 0x19);
    *(undefined1 *)((long)puVar4 + lVar11 + 0x18) = 8;
    pcVar13 = "float";
    goto LAB_001d1890;
  case 'g':
    pvVar5 = (void *)param_1[0x266];
    *param_1 = (long)(pcVar13 + 1);
    lVar11 = *(long *)((long)pvVar5 + 8);
    puVar4 = pvVar5;
    if (lVar11 - 0xfd0U < 0xfffffffffffff010) {
      puVar4 = malloc(0x1000);
      if (puVar4 == (void *)0x0) goto LAB_001d273c;
      lVar11 = 0;
      *puVar4 = pvVar5;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    *(long *)((long)puVar4 + 8) = lVar11 + 0x20;
    puVar3 = (undefined8 *)((long)puVar4 + lVar11 + 0x10);
    *puVar3 = &PTR_FUN_001f3c10;
    *(undefined1 *)((long)puVar4 + lVar11 + 0x18) = 8;
    pcVar13 = "__float128";
    *(ushort *)((long)puVar4 + lVar11 + 0x19) =
         *(ushort *)((long)puVar4 + lVar11 + 0x19) & 0xf000 | 0x540;
    uVar12 = 10;
    break;
  case 'h':
    pvVar5 = (void *)param_1[0x266];
    *param_1 = (long)(pcVar13 + 1);
    lVar11 = *(long *)((long)pvVar5 + 8);
    puVar4 = pvVar5;
    if (lVar11 - 0xfd0U < 0xfffffffffffff010) {
      puVar4 = malloc(0x1000);
      if (puVar4 == (void *)0x0) goto LAB_001d273c;
      lVar11 = 0;
      *puVar4 = pvVar5;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    *(long *)((long)puVar4 + 8) = lVar11 + 0x20;
    puVar3 = (undefined8 *)((long)puVar4 + lVar11 + 0x10);
    *puVar3 = &PTR_FUN_001f3c10;
    uVar10 = *(ushort *)((long)puVar4 + lVar11 + 0x19);
    *(undefined1 *)((long)puVar4 + lVar11 + 0x18) = 8;
    pcVar13 = "unsigned char";
    goto LAB_001d1b20;
  case 'i':
    pvVar5 = (void *)param_1[0x266];
    *param_1 = (long)(pcVar13 + 1);
    lVar11 = *(long *)((long)pvVar5 + 8);
    puVar4 = pvVar5;
    if (lVar11 - 0xfd0U < 0xfffffffffffff010) {
      puVar4 = malloc(0x1000);
      if (puVar4 == (void *)0x0) goto LAB_001d273c;
      lVar11 = 0;
      *puVar4 = pvVar5;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    *(long *)((long)puVar4 + 8) = lVar11 + 0x20;
    puVar3 = (undefined8 *)((long)puVar4 + lVar11 + 0x10);
    *puVar3 = &PTR_FUN_001f3c10;
    uVar10 = *(ushort *)((long)puVar4 + lVar11 + 0x19);
    *(undefined1 *)((long)puVar4 + lVar11 + 0x18) = 8;
    pcVar13 = "int";
    goto LAB_001d1774;
  case 'j':
    pvVar5 = (void *)param_1[0x266];
    *param_1 = (long)(pcVar13 + 1);
    lVar11 = *(long *)((long)pvVar5 + 8);
    puVar4 = pvVar5;
    if (lVar11 - 0xfd0U < 0xfffffffffffff010) {
      puVar4 = malloc(0x1000);
      if (puVar4 == (void *)0x0) goto LAB_001d273c;
      lVar11 = 0;
      *puVar4 = pvVar5;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    *(long *)((long)puVar4 + 8) = lVar11 + 0x20;
    puVar3 = (undefined8 *)((long)puVar4 + lVar11 + 0x10);
    *puVar3 = &PTR_FUN_001f3c10;
    *(undefined1 *)((long)puVar4 + lVar11 + 0x18) = 8;
    pcVar13 = "unsigned int";
    *(ushort *)((long)puVar4 + lVar11 + 0x19) =
         *(ushort *)((long)puVar4 + lVar11 + 0x19) & 0xf000 | 0x540;
    uVar12 = 0xc;
    break;
  case 'l':
    pvVar5 = (void *)param_1[0x266];
    *param_1 = (long)(pcVar13 + 1);
    lVar11 = *(long *)((long)pvVar5 + 8);
    puVar4 = pvVar5;
    if (lVar11 - 0xfd0U < 0xfffffffffffff010) {
      puVar4 = malloc(0x1000);
      if (puVar4 == (void *)0x0) goto LAB_001d273c;
      lVar11 = 0;
      *puVar4 = pvVar5;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    *(long *)((long)puVar4 + 8) = lVar11 + 0x20;
    puVar3 = (undefined8 *)((long)puVar4 + lVar11 + 0x10);
    *puVar3 = &PTR_FUN_001f3c10;
    uVar10 = *(ushort *)((long)puVar4 + lVar11 + 0x19);
    *(undefined1 *)((long)puVar4 + lVar11 + 0x18) = 8;
    pcVar13 = "long";
    goto LAB_001d1e98;
  case 'm':
    pvVar5 = (void *)param_1[0x266];
    *param_1 = (long)(pcVar13 + 1);
    lVar11 = *(long *)((long)pvVar5 + 8);
    puVar4 = pvVar5;
    if (lVar11 - 0xfd0U < 0xfffffffffffff010) {
      puVar4 = malloc(0x1000);
      if (puVar4 == (void *)0x0) goto LAB_001d273c;
      lVar11 = 0;
      *puVar4 = pvVar5;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    *(long *)((long)puVar4 + 8) = lVar11 + 0x20;
    puVar3 = (undefined8 *)((long)puVar4 + lVar11 + 0x10);
    *puVar3 = &PTR_FUN_001f3c10;
    uVar10 = *(ushort *)((long)puVar4 + lVar11 + 0x19);
    *(undefined1 *)((long)puVar4 + lVar11 + 0x18) = 8;
    pcVar13 = "unsigned long";
LAB_001d1b20:
    *(ushort *)((long)puVar3 + 9) = uVar10 & 0xf000 | 0x540;
    uVar12 = 0xd;
    break;
  case 'n':
    pvVar5 = (void *)param_1[0x266];
    *param_1 = (long)(pcVar13 + 1);
    lVar11 = *(long *)((long)pvVar5 + 8);
    puVar4 = pvVar5;
    if (lVar11 - 0xfd0U < 0xfffffffffffff010) {
      puVar4 = malloc(0x1000);
      if (puVar4 == (void *)0x0) goto LAB_001d273c;
      lVar11 = 0;
      *puVar4 = pvVar5;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    *(long *)((long)puVar4 + 8) = lVar11 + 0x20;
    puVar3 = (undefined8 *)((long)puVar4 + lVar11 + 0x10);
    *puVar3 = &PTR_FUN_001f3c10;
    *(undefined1 *)((long)puVar4 + lVar11 + 0x18) = 8;
    *(ushort *)((long)puVar4 + lVar11 + 0x19) =
         *(ushort *)((long)puVar4 + lVar11 + 0x19) & 0xf000 | 0x540;
    *(char **)((long)puVar4 + lVar11 + 0x20) = "__int128";
    *(undefined8 *)((long)puVar4 + lVar11 + 0x28) = 8;
    return puVar3;
  case 'o':
    pvVar5 = (void *)param_1[0x266];
    *param_1 = (long)(pcVar13 + 1);
    lVar11 = *(long *)((long)pvVar5 + 8);
    puVar4 = pvVar5;
    if (lVar11 - 0xfd0U < 0xfffffffffffff010) {
      puVar4 = malloc(0x1000);
      if (puVar4 == (void *)0x0) goto LAB_001d273c;
      lVar11 = 0;
      *puVar4 = pvVar5;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    *(long *)((long)puVar4 + 8) = lVar11 + 0x20;
    puVar3 = (undefined8 *)((long)puVar4 + lVar11 + 0x10);
    *puVar3 = &PTR_FUN_001f3c10;
    *(undefined1 *)((long)puVar4 + lVar11 + 0x18) = 8;
    pcVar13 = "unsigned __int128";
    *(ushort *)((long)puVar4 + lVar11 + 0x19) =
         *(ushort *)((long)puVar4 + lVar11 + 0x19) & 0xf000 | 0x540;
    uVar12 = 0x11;
    break;
  case 's':
    pvVar5 = (void *)param_1[0x266];
    *param_1 = (long)(pcVar13 + 1);
    lVar11 = *(long *)((long)pvVar5 + 8);
    puVar4 = pvVar5;
    if (lVar11 - 0xfd0U < 0xfffffffffffff010) {
      puVar4 = malloc(0x1000);
      if (puVar4 == (void *)0x0) goto LAB_001d273c;
      lVar11 = 0;
      *puVar4 = pvVar5;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    *(long *)((long)puVar4 + 8) = lVar11 + 0x20;
    puVar3 = (undefined8 *)((long)puVar4 + lVar11 + 0x10);
    *puVar3 = &PTR_FUN_001f3c10;
    uVar10 = *(ushort *)((long)puVar4 + lVar11 + 0x19);
    *(undefined1 *)((long)puVar4 + lVar11 + 0x18) = 8;
    pcVar13 = "short";
LAB_001d1890:
    *(ushort *)((long)puVar3 + 9) = uVar10 & 0xf000 | 0x540;
    uVar12 = 5;
    break;
  case 't':
    pvVar5 = (void *)param_1[0x266];
    *param_1 = (long)(pcVar13 + 1);
    lVar11 = *(long *)((long)pvVar5 + 8);
    puVar4 = pvVar5;
    if (lVar11 - 0xfd0U < 0xfffffffffffff010) {
      puVar4 = malloc(0x1000);
      if (puVar4 == (void *)0x0) goto LAB_001d273c;
      lVar11 = 0;
      *puVar4 = pvVar5;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    *(long *)((long)puVar4 + 8) = lVar11 + 0x20;
    puVar3 = (undefined8 *)((long)puVar4 + lVar11 + 0x10);
    *puVar3 = &PTR_FUN_001f3c10;
    *(undefined1 *)((long)puVar4 + lVar11 + 0x18) = 8;
    pcVar13 = "unsigned short";
    *(ushort *)((long)puVar4 + lVar11 + 0x19) =
         *(ushort *)((long)puVar4 + lVar11 + 0x19) & 0xf000 | 0x540;
    uVar12 = 0xe;
    break;
  case 'u':
    pbVar14 = (byte *)(pcVar13 + 1);
    *param_1 = (long)pbVar14;
    if (pbVar7 == pbVar14) {
      return (undefined8 *)0x0;
    }
    if (*pbVar14 - 0x3a < 0xfffffff6) {
      return (undefined8 *)0x0;
    }
    local_50._8_8_ = 0;
    lVar11 = 0;
    do {
      lVar18 = lVar11;
      uVar17 = local_50._8_8_;
      local_50._0_8_ = pcVar13 + lVar18 + 2;
      *param_1 = local_50._0_8_;
      uVar16 = (ulong)(byte)pcVar13[lVar18 + 1];
      local_50._8_8_ = (uVar16 + uVar17 * 10) - 0x30;
      if ((byte *)local_50._0_8_ == pbVar7) break;
      lVar11 = lVar18 + 1;
    } while (*(byte *)local_50._0_8_ - 0x30 < 10);
    if ((uVar6 - lVar18) - 2 < (ulong)local_50._8_8_) {
      return (undefined8 *)0x0;
    }
    pbVar14 = (byte *)(pcVar13 + uVar16 + uVar17 * 10 + lVar18 + -0x2e);
    *param_1 = (long)pbVar14;
    if (local_50._8_8_ == 0) {
      return (undefined8 *)0x0;
    }
    if ((pbVar14 == pbVar7) || (*pbVar14 != 0x49)) {
      puVar4 = (undefined8 *)FUN_001d48dc(param_1,local_50);
    }
    else {
      *param_1 = (long)(pcVar13 + uVar16 + uVar17 * 10 + lVar18 + -0x2d);
      local_28 = FUN_001d0f90(param_1);
      if (local_28 == 0) {
        return (undefined8 *)0x0;
      }
      pcVar13 = (char *)*param_1;
      if (pcVar13 == (char *)param_1[1]) {
        return (undefined8 *)0x0;
      }
      if (*pcVar13 != 'E') {
        return (undefined8 *)0x0;
      }
      *param_1 = (long)(pcVar13 + 1);
      puVar4 = (undefined8 *)FUN_001e5978(param_1,local_50,&local_28);
    }
    goto LAB_001d19e0;
  case 'v':
    pvVar5 = (void *)param_1[0x266];
    *param_1 = (long)(pcVar13 + 1);
    lVar11 = *(long *)((long)pvVar5 + 8);
    puVar4 = pvVar5;
    if (lVar11 - 0xfd0U < 0xfffffffffffff010) {
      puVar4 = malloc(0x1000);
      if (puVar4 == (void *)0x0) goto LAB_001d273c;
      lVar11 = 0;
      *puVar4 = pvVar5;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    *(long *)((long)puVar4 + 8) = lVar11 + 0x20;
    puVar3 = (undefined8 *)((long)puVar4 + lVar11 + 0x10);
    *puVar3 = &PTR_FUN_001f3c10;
    uVar10 = *(ushort *)((long)puVar4 + lVar11 + 0x19);
    *(undefined1 *)((long)puVar4 + lVar11 + 0x18) = 8;
    pcVar13 = "void";
LAB_001d1e98:
    *(ushort *)((long)puVar3 + 9) = uVar10 & 0xf000 | 0x540;
    uVar12 = 4;
    break;
  case 'w':
    pvVar5 = (void *)param_1[0x266];
    *param_1 = (long)(pcVar13 + 1);
    lVar11 = *(long *)((long)pvVar5 + 8);
    puVar4 = pvVar5;
    if (lVar11 - 0xfd0U < 0xfffffffffffff010) {
      puVar4 = malloc(0x1000);
      if (puVar4 == (void *)0x0) goto LAB_001d273c;
      lVar11 = 0;
      *puVar4 = pvVar5;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    *(long *)((long)puVar4 + 8) = lVar11 + 0x20;
    puVar3 = (undefined8 *)((long)puVar4 + lVar11 + 0x10);
    *puVar3 = &PTR_FUN_001f3c10;
    *(undefined1 *)((long)puVar4 + lVar11 + 0x18) = 8;
    pcVar13 = "wchar_t";
    *(ushort *)((long)puVar4 + lVar11 + 0x19) =
         *(ushort *)((long)puVar4 + lVar11 + 0x19) & 0xf000 | 0x540;
    uVar12 = 7;
    break;
  case 'x':
    pvVar5 = (void *)param_1[0x266];
    *param_1 = (long)(pcVar13 + 1);
    lVar11 = *(long *)((long)pvVar5 + 8);
    puVar4 = pvVar5;
    if (lVar11 - 0xfd0U < 0xfffffffffffff010) {
      puVar4 = malloc(0x1000);
      if (puVar4 == (void *)0x0) goto LAB_001d273c;
      lVar11 = 0;
      *puVar4 = pvVar5;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    *(long *)((long)puVar4 + 8) = lVar11 + 0x20;
    puVar3 = (undefined8 *)((long)puVar4 + lVar11 + 0x10);
    *puVar3 = &PTR_FUN_001f3c10;
    *(undefined1 *)((long)puVar4 + lVar11 + 0x18) = 8;
    pcVar13 = "long long";
    *(ushort *)((long)puVar4 + lVar11 + 0x19) =
         *(ushort *)((long)puVar4 + lVar11 + 0x19) & 0xf000 | 0x540;
    uVar12 = 9;
    break;
  case 'y':
    pvVar5 = (void *)param_1[0x266];
    *param_1 = (long)(pcVar13 + 1);
    lVar11 = *(long *)((long)pvVar5 + 8);
    puVar4 = pvVar5;
    if (lVar11 - 0xfd0U < 0xfffffffffffff010) {
      puVar4 = malloc(0x1000);
      if (puVar4 == (void *)0x0) goto LAB_001d273c;
      lVar11 = 0;
      *puVar4 = pvVar5;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    *(long *)((long)puVar4 + 8) = lVar11 + 0x20;
    puVar3 = (undefined8 *)((long)puVar4 + lVar11 + 0x10);
    *puVar3 = &PTR_FUN_001f3c10;
    *(undefined1 *)((long)puVar4 + lVar11 + 0x18) = 8;
    pcVar13 = "unsigned long long";
    *(ushort *)((long)puVar4 + lVar11 + 0x19) =
         *(ushort *)((long)puVar4 + lVar11 + 0x19) & 0xf000 | 0x540;
    uVar12 = 0x12;
    break;
  case 'z':
    pvVar5 = (void *)param_1[0x266];
    *param_1 = (long)(pcVar13 + 1);
    lVar11 = *(long *)((long)pvVar5 + 8);
    puVar4 = pvVar5;
    if (lVar11 - 0xfd0U < 0xfffffffffffff010) {
      puVar4 = malloc(0x1000);
      if (puVar4 == (void *)0x0) goto LAB_001d273c;
      lVar11 = 0;
      *puVar4 = pvVar5;
      puVar4[1] = 0;
      param_1[0x266] = (long)puVar4;
    }
    *(long *)((long)puVar4 + 8) = lVar11 + 0x20;
    puVar3 = (undefined8 *)((long)puVar4 + lVar11 + 0x10);
    *puVar3 = &PTR_FUN_001f3c10;
    uVar10 = *(ushort *)((long)puVar4 + lVar11 + 0x19);
    *(undefined1 *)((long)puVar4 + lVar11 + 0x18) = 8;
    pcVar13 = "...";
LAB_001d1774:
    *(ushort *)((long)puVar3 + 9) = uVar10 & 0xf000 | 0x540;
    uVar12 = 3;
  }
  puVar3[2] = pcVar13;
  puVar3[3] = uVar12;
code_r0x001d1eb0:
  return puVar3;
code_r0x001d1aa4:
  puVar4 = (undefined8 *)FUN_001e4b4c(param_1);
  goto joined_r0x001d2018;
}


