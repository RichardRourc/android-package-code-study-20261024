// Ghidra pseudocode. Not original C/C++ source.
// Program: liblogic.so
// Executable SHA256: df2688b342d2fdd45fbfbc82e905546e287409caaacad6ba5220641e328a1a21
// Entry: 00142ce4; body: [[00142ce4, 0014740b]]

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00142ce4(long *param_1)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  byte *pbVar16;
  char *pcVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  int iVar35;
  int iVar36;
  int iVar37;
  int iVar38;
  int iVar39;
  long lVar40;
  byte *pbVar41;
  char *pcVar42;
  uint uVar43;
  uint uVar44;
  undefined4 uVar45;
  undefined8 local_240;
  ulong uStack_238;
  ulong local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined4 uStack_1f8;
  undefined4 local_1f4;
  undefined4 uStack_1f0;
  undefined8 uStack_1ec;
  byte local_1d8 [40];
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined1 local_1a4;
  undefined1 local_1a3;
  undefined1 local_1a2;
  undefined1 local_1a1;
  undefined1 local_1a0;
  undefined1 local_19f;
  undefined1 local_19e;
  undefined1 local_19d;
  undefined1 local_19c;
  undefined1 local_19b;
  undefined1 local_19a;
  undefined1 local_199;
  undefined1 local_198;
  undefined1 local_197;
  undefined1 local_196;
  undefined1 local_195;
  undefined1 local_194;
  undefined1 local_193;
  undefined1 local_192;
  undefined1 local_191;
  byte local_190 [8];
  ulong uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined4 uStack_148;
  undefined4 local_144;
  undefined4 uStack_140;
  undefined8 uStack_13c;
  char local_130 [8];
  undefined8 uStack_128;
  ulong local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined4 uStack_e8;
  undefined4 local_e4;
  undefined4 uStack_e0;
  undefined8 uStack_dc;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_9c;
  undefined1 local_9b;
  undefined1 local_9a;
  undefined1 local_99;
  undefined1 local_98;
  undefined1 local_97;
  undefined1 local_96;
  undefined1 local_95;
  undefined1 local_94;
  undefined1 local_93;
  undefined1 local_92;
  undefined1 local_91;
  undefined1 local_90;
  undefined1 local_8f;
  undefined1 local_8e;
  undefined1 local_8d;
  undefined1 local_8c;
  undefined1 local_8b;
  undefined1 local_8a;
  undefined1 local_89;
  undefined1 local_88;
  undefined1 local_87;
  undefined1 local_86;
  undefined1 local_85;
  undefined1 local_84;
  undefined1 local_83;
  undefined1 local_82;
  undefined1 local_81;
  undefined1 local_80;
  undefined1 local_7f;
  undefined1 local_7e;
  undefined1 local_7d;
  undefined1 local_7c;
  undefined1 local_7b;
  undefined1 local_7a;
  undefined1 local_79;
  undefined1 local_78;
  undefined1 local_77;
  undefined1 local_76;
  undefined1 local_75;
  undefined1 local_74;
  undefined1 local_73;
  undefined1 local_72;
  undefined1 local_71;
  undefined1 local_70;
  undefined1 local_6f;
  undefined1 local_6e;
  undefined1 local_6d;
  undefined1 local_6c;
  undefined1 local_6b;
  undefined1 local_6a;
  undefined1 local_69;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  lVar40 = 0;
  iVar7 = 0x7d1a0584;
  iVar6 = 0x7d1a0083;
  uStack_dc = 0;
  uStack_e0 = 0;
  uStack_118 = 0;
  local_120 = 0;
  local_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  local_e4 = 0;
  uStack_f0 = 0;
  uStack_128 = 0;
  local_130[0] = '\0';
  local_130[1] = '\0';
  local_130[2] = '\0';
  local_130[3] = '\0';
  local_130[4] = '\0';
  local_130[5] = '\0';
  local_130[6] = '\0';
  local_130[7] = '\0';
  do {
    iVar6 = iVar6 * 0x41c64e6d + 0x3039;
    local_190[lVar40] =
         (char)lVar40 * '\x11' + 0x4fU ^ (&DAT_0010eee0)[lVar40] ^ (byte)((uint)iVar6 >> 0x10);
    lVar40 = lVar40 + 1;
  } while (lVar40 != 0xe);
  uStack_188._0_7_ = (uint7)(uint6)uStack_188;
  local_240 = CONCAT62(local_240._2_6_,0x31);
  iVar6 = __system_property_get(local_190,local_130);
  if (iVar6 < 1) {
    bVar5 = false;
  }
  else {
    iVar6 = strcmp(local_130,(char *)&local_240);
    bVar5 = iVar6 == 0;
  }
  local_190[0] = 0;
  local_190[1] = 0;
  local_190[2] = 0;
  local_190[3] = 0;
  local_190[4] = 0;
  local_190[5] = 0;
  local_190[6] = 0;
  local_190[7] = 0;
  uStack_188 = 0;
  local_180 = 0;
  uStack_178 = 0;
  local_170 = 0;
  local_168 = 0;
  local_160 = 0;
  uStack_158 = 0;
  local_240 = 0;
  uStack_238 = 0;
  local_230 = 0;
  uStack_228 = 0;
  local_220 = 0;
  local_218 = 0;
  local_210 = 0;
  uStack_208 = 0;
  if (!bVar5) {
    local_190[0] = s_ro_boot_tabl_0010eda8[0];
    local_190[1] = s_ro_boot_tabl_0010eda8[1];
    local_190[2] = s_ro_boot_tabl_0010eda8[2];
    local_190[3] = s_ro_boot_tabl_0010eda8[3];
    local_190[4] = s_ro_boot_tabl_0010eda8[4];
    local_190[5] = s_ro_boot_tabl_0010eda8[5];
    local_190[6] = s_ro_boot_tabl_0010eda8[6];
    local_190[7] = s_ro_boot_tabl_0010eda8[7];
    uStack_dc = 0;
    uStack_e0 = 0;
    uStack_118 = 0;
    local_120 = 0;
    local_108 = 0;
    local_110 = 0;
    uStack_f8 = 0;
    local_100 = 0;
    uStack_e8 = 0;
    local_e4 = 0;
    uStack_f0 = 0;
    uStack_128 = 0;
    local_130[0] = '\0';
    local_130[1] = '\0';
    local_130[2] = '\0';
    local_130[3] = '\0';
    local_130[4] = '\0';
    local_130[5] = '\0';
    local_130[6] = '\0';
    local_130[7] = '\0';
    local_240 = 0x31;
    uStack_188 = DAT_0010edc0 & 0xffffffff;
    iVar6 = __system_property_get(local_190,local_130);
    if (iVar6 < 1) {
      bVar5 = false;
    }
    else {
      iVar6 = strcmp(local_130,(char *)&local_240);
      bVar5 = iVar6 == 0;
    }
    local_190[0] = 0;
    local_190[1] = 0;
    local_190[2] = 0;
    local_190[3] = 0;
    local_190[4] = 0;
    local_190[5] = 0;
    local_190[6] = 0;
    local_190[7] = 0;
    uStack_188 = 0;
    local_180 = 0;
    uStack_178 = 0;
    local_170 = 0;
    local_168 = 0;
    local_160 = 0;
    uStack_158 = 0;
    local_240 = 0;
    uStack_238 = 0;
    local_230 = 0;
    uStack_228 = 0;
    local_220 = 0;
    local_218 = 0;
    local_210 = 0;
    uStack_208 = 0;
    if (!bVar5) {
      local_1b0._0_1_ = s_ro_hardwsdk_0010ee88[0];
      local_1b0._1_1_ = s_ro_hardwsdk_0010ee88[1];
      local_1b0._2_1_ = s_ro_hardwsdk_0010ee88[2];
      local_1b0._3_1_ = s_ro_hardwsdk_0010ee88[3];
      local_1b0._4_1_ = s_ro_hardwsdk_0010ee88[4];
      local_1b0._5_1_ = s_ro_hardwsdk_0010ee88[5];
      local_1b0._6_1_ = s_ro_hardwsdk_0010ee88[6];
      local_1b0._7_1_ = s_ro_hardwsdk_0010ee88[7];
      uStack_13c = 0;
      uStack_140 = 0;
      uStack_178 = 0;
      local_180 = 0;
      local_168 = 0;
      local_170 = 0;
      uStack_158 = 0;
      local_160 = 0;
      uStack_148 = 0;
      local_144 = 0;
      uStack_150 = 0;
      uStack_188 = 0;
      local_190[0] = 0;
      local_190[1] = 0;
      local_190[2] = 0;
      local_190[3] = 0;
      local_190[4] = 0;
      local_190[5] = 0;
      local_190[6] = 0;
      local_190[7] = 0;
      local_1a8 = (undefined4)DAT_0010edb8;
      iVar6 = __system_property_get(&local_1b0,local_190);
      if (0 < iVar6) {
        uVar44 = (uint)local_190[0];
        if (local_190[0] != 0) {
          uVar13 = FUN_0014993c(local_190,&DAT_0010f3a8);
          if (((((uVar13 & 1) == 0) &&
               (uVar13 = FUN_00149b50(local_190,&DAT_0010f3c0), (uVar13 & 1) == 0)) &&
              (uVar13 = FUN_00149d64(local_190,&DAT_0010f3d0), (uVar13 & 1) == 0)) &&
             (uVar13 = FUN_00149b50(local_190,&DAT_0010f3e0), (uVar13 & 1) == 0)) {
            local_130[0] = s_vbox86p_0010ed58[0];
            local_130[1] = s_vbox86p_0010ed58[1];
            local_130[2] = s_vbox86p_0010ed58[2];
            local_130[3] = s_vbox86p_0010ed58[3];
            local_130[4] = s_vbox86p_0010ed58[4];
            local_130[5] = s_vbox86p_0010ed58[5];
            local_130[6] = s_vbox86p_0010ed58[6];
            local_130[7] = s_vbox86p_0010ed58[7];
            lVar40 = 0;
            do {
              lVar14 = lVar40;
              bVar2 = local_130[lVar14];
              if (bVar2 == 0) {
LAB_00143364:
                bVar5 = false;
                goto LAB_00143368;
              }
              if (0xffffffe5 < uVar44 - 0x5b) {
                uVar44 = uVar44 | 0x20;
              }
              uVar43 = (uint)bVar2;
              if (0xffffffe5 < bVar2 - 0x5b) {
                uVar43 = bVar2 | 0x20;
              }
              if (uVar44 != uVar43) goto LAB_00143364;
              uVar44 = (uint)local_190[lVar14 + 1];
              lVar40 = lVar14 + 1;
            } while (uVar44 != 0);
            bVar5 = local_130[lVar14 + 1] == '\0';
LAB_00143368:
            local_130[0] = '\0';
            local_130[1] = '\0';
            local_130[2] = '\0';
            local_130[3] = '\0';
            local_130[4] = '\0';
            local_130[5] = '\0';
            local_130[6] = '\0';
            local_130[7] = '\0';
            uStack_128 = 0;
            local_120 = 0;
            uStack_118 = 0;
            local_110 = 0;
            local_108 = 0;
            local_100 = 0;
            uStack_f8 = 0;
            if ((((!bVar5) && (uVar13 = FUN_00149f78(local_190), (uVar13 & 1) == 0)) &&
                ((uVar13 = FUN_00149d64(local_190,&DAT_0010f400), (uVar13 & 1) == 0 &&
                 ((uVar13 = FUN_0014993c(local_190,&DAT_0010f410), (uVar13 & 1) == 0 &&
                  (uVar13 = FUN_0014a120(local_190), (uVar13 & 1) == 0)))))) &&
               (uVar13 = FUN_0014993c(local_190,&DAT_0010f440), (uVar13 & 1) == 0))
            goto LAB_00143548;
          }
          iVar6 = 100;
          local_1b0 = 0;
          local_1a8 = 0;
          local_1a4 = 0;
          local_1a3 = 0;
          local_1a2 = 0;
          local_1a1 = 0;
          local_1a0 = 0;
          local_19f = 0;
          local_19e = 0;
          local_19d = 0;
          local_19c = 0;
          local_19b = 0;
          local_19a = 0;
          local_199 = 0;
          local_198 = 0;
          local_197 = 0;
          local_196 = 0;
          local_195 = 0;
          local_194 = 0;
          local_193 = 0;
          local_192 = 0;
          local_191 = 0;
          goto LAB_00143230;
        }
      }
LAB_00143548:
      lVar40 = 0;
      iVar6 = 0x7d1ac241;
      local_1b0 = 0;
      local_1a8 = 0;
      local_1a4 = 0;
      local_1a3 = 0;
      local_1a2 = 0;
      local_1a1 = 0;
      local_1a0 = 0;
      local_19f = 0;
      local_19e = 0;
      local_19d = 0;
      local_19c = 0;
      local_19b = 0;
      local_19a = 0;
      local_199 = 0;
      local_198 = 0;
      local_197 = 0;
      local_196 = 0;
      local_195 = 0;
      local_194 = 0;
      local_193 = 0;
      local_192 = 0;
      local_191 = 0;
      do {
        iVar6 = iVar6 * 0x41c64e6d + 0x3039;
        local_130[lVar40] =
             (char)lVar40 * '\x11' + 0x8dU ^ (&DAT_0010f458)[lVar40] ^ (byte)((uint)iVar6 >> 0x10);
        lVar40 = lVar40 + 1;
      } while (lVar40 != 0xe);
      uStack_128._0_7_ = (uint7)(uint6)uStack_128;
      iVar6 = access(local_130,0);
      lVar40 = 0;
      do {
        local_130[lVar40] = '\0';
        lVar40 = lVar40 + 1;
      } while (lVar40 != 0x80);
      if (iVar6 != 0) {
        lVar40 = 0;
        iVar6 = 0x7d1ac140;
        do {
          iVar6 = iVar6 * 0x41c64e6d + 0x3039;
          local_130[lVar40] =
               (char)lVar40 * '\x11' + 0x8eU ^ (&DAT_0010f178)[lVar40] ^ (byte)((uint)iVar6 >> 0x10)
          ;
          lVar40 = lVar40 + 1;
        } while (lVar40 != 0x11);
        local_120._0_2_ = (ushort)(byte)local_120;
        iVar6 = access(local_130,0);
        lVar40 = 0;
        do {
          local_130[lVar40] = '\0';
          lVar40 = lVar40 + 1;
        } while (lVar40 != 0x80);
        if (iVar6 != 0) {
          lVar40 = 0;
          iVar6 = 0x7d1ac043;
          do {
            iVar6 = iVar6 * 0x41c64e6d + 0x3039;
            local_130[lVar40] =
                 (char)lVar40 * '\x11' + 0x8fU ^ (&DAT_0010f470)[lVar40] ^
                 (byte)((uint)iVar6 >> 0x10);
            lVar40 = lVar40 + 1;
          } while (lVar40 != 0x1a);
          uStack_118._0_3_ = (uint3)(ushort)uStack_118;
          iVar6 = access(local_130,0);
          lVar40 = 0;
          do {
            local_130[lVar40] = '\0';
            lVar40 = lVar40 + 1;
          } while (lVar40 != 0x80);
          if (iVar6 != 0) {
            lVar40 = 0;
            iVar6 = 0x7d1ac742;
            do {
              iVar6 = iVar6 * 0x41c64e6d + 0x3039;
              local_130[lVar40] =
                   (char)lVar40 * '\x11' + 0x88U ^ (&DAT_0010f0f8)[lVar40] ^
                   (byte)((uint)iVar6 >> 0x10);
              lVar40 = lVar40 + 1;
            } while (lVar40 != 0x11);
            local_120._0_2_ = (ushort)(byte)local_120;
            iVar6 = access(local_130,0);
            lVar40 = 0;
            do {
              local_130[lVar40] = '\0';
              lVar40 = lVar40 + 1;
            } while (lVar40 != 0x80);
            if (iVar6 != 0) {
              lVar40 = 0;
              iVar6 = 0x7d1ac645;
              do {
                iVar6 = iVar6 * 0x41c64e6d + 0x3039;
                local_130[lVar40] =
                     (char)lVar40 * '\x11' + 0x89U ^ (&DAT_0010eef8)[lVar40] ^
                     (byte)((uint)iVar6 >> 0x10);
                lVar40 = lVar40 + 1;
              } while (lVar40 != 0xf);
              uStack_128 = uStack_128 & 0xffffffffffffff;
              iVar6 = access(local_130,0);
              lVar40 = 0;
              do {
                local_130[lVar40] = '\0';
                lVar40 = lVar40 + 1;
              } while (lVar40 != 0x80);
              if (iVar6 != 0) {
                lVar40 = 0;
                iVar6 = 0x7d1ac544;
                do {
                  iVar6 = iVar6 * 0x41c64e6d + 0x3039;
                  local_130[lVar40] =
                       (char)lVar40 * '\x11' + 0x8aU ^ (&DAT_0010eff8)[lVar40] ^
                       (byte)((uint)iVar6 >> 0x10);
                  lVar40 = lVar40 + 1;
                } while (lVar40 != 0x16);
                local_120._0_7_ = (uint7)(uint6)local_120;
                iVar6 = access(local_130,0);
                lVar40 = 0;
                do {
                  local_130[lVar40] = '\0';
                  lVar40 = lVar40 + 1;
                } while (lVar40 != 0x80);
                if (((((iVar6 != 0) && (uVar13 = FUN_0014a3ac(), (uVar13 & 1) == 0)) &&
                     (uVar13 = FUN_0014a468(&DAT_0010f4c8), (uVar13 & 1) == 0)) &&
                    ((uVar13 = FUN_0014a468(&DAT_0010f4e8), (uVar13 & 1) == 0 &&
                     (uVar13 = FUN_0014a540(), (uVar13 & 1) == 0)))) &&
                   ((uVar13 = FUN_0014a5fc(), (uVar13 & 1) == 0 &&
                    ((uVar13 = FUN_0014a2d4(&DAT_0010f508), (uVar13 & 1) == 0 &&
                     (uVar13 = FUN_0014a684(), (uVar13 & 1) == 0)))))) {
                  lVar40 = 0;
                  iVar6 = 0x7d1a0584;
                  uStack_dc = 0;
                  uStack_e0 = 0;
                  uStack_118 = 0;
                  local_120 = 0;
                  local_108 = 0;
                  local_110 = 0;
                  uStack_f8 = 0;
                  local_100 = 0;
                  uStack_e8 = 0;
                  local_e4 = 0;
                  uStack_f0 = 0;
                  uStack_128 = 0;
                  local_130[0] = '\0';
                  local_130[1] = '\0';
                  local_130[2] = '\0';
                  local_130[3] = '\0';
                  local_130[4] = '\0';
                  local_130[5] = '\0';
                  local_130[6] = '\0';
                  local_130[7] = '\0';
                  do {
                    iVar6 = iVar6 * 0x41c64e6d + 0x3039;
                    *(byte *)((long)&local_240 + lVar40) =
                         (char)lVar40 * '\x11' + 0x4aU ^ (&DAT_0010ef38)[lVar40] ^
                         (byte)((uint)iVar6 >> 0x10);
                    lVar40 = lVar40 + 1;
                  } while (lVar40 != 0x10);
                  local_230 = local_230 & 0xffffffffffffff00;
                  uVar45 = (undefined4)ram0x0010ee90;
                  local_a8 = CONCAT44(local_a8._4_4_,uVar45);
                  iVar6 = __system_property_get(&local_240,local_130);
                  if (iVar6 < 1) {
LAB_00143984:
                    bVar5 = false;
                  }
                  else {
                    uVar44 = (uint)(byte)local_130[0];
                    if (local_130[0] == 0) {
                      pbVar16 = (byte *)&local_a8;
                    }
                    else {
                      pbVar16 = (byte *)&local_a8;
                      pbVar41 = (byte *)((ulong)local_130 | 1);
                      do {
                        bVar2 = *pbVar16;
                        if (bVar2 == 0) goto LAB_00143984;
                        if (0xffffffe5 < uVar44 - 0x5b) {
                          uVar44 = uVar44 | 0x20;
                        }
                        uVar43 = (uint)bVar2;
                        if (0xffffffe5 < bVar2 - 0x5b) {
                          uVar43 = bVar2 | 0x20;
                        }
                        if (uVar44 != uVar43) goto LAB_00143984;
                        uVar44 = (uint)*pbVar41;
                        pbVar16 = pbVar16 + 1;
                        pbVar41 = pbVar41 + 1;
                      } while (uVar44 != 0);
                    }
                    bVar5 = *pbVar16 == 0;
                  }
                  local_240 = 0;
                  uStack_238 = 0;
                  local_230 = 0;
                  uStack_228 = 0;
                  local_220 = 0;
                  local_218 = 0;
                  local_210 = 0;
                  uStack_208 = 0;
                  local_a8 = 0;
                  local_a0 = 0;
                  local_9c = 0;
                  local_9b = 0;
                  local_9a = 0;
                  local_99 = 0;
                  local_98 = 0;
                  local_97 = 0;
                  local_96 = 0;
                  local_95 = 0;
                  local_94 = 0;
                  local_93 = 0;
                  local_92 = 0;
                  local_91 = 0;
                  local_90 = 0;
                  local_8f = 0;
                  local_8e = 0;
                  local_8d = 0;
                  local_8c = 0;
                  local_8b = 0;
                  local_8a = 0;
                  local_89 = 0;
                  local_88 = 0;
                  local_87 = 0;
                  local_86 = 0;
                  local_85 = 0;
                  local_84 = 0;
                  local_83 = 0;
                  local_82 = 0;
                  local_81 = 0;
                  local_80 = 0;
                  local_7f = 0;
                  local_7e = 0;
                  local_7d = 0;
                  local_7c = 0;
                  local_7b = 0;
                  local_7a = 0;
                  local_79 = 0;
                  local_78 = 0;
                  local_77 = 0;
                  local_76 = 0;
                  local_75 = 0;
                  local_74 = 0;
                  local_73 = 0;
                  local_72 = 0;
                  local_71 = 0;
                  local_70 = 0;
                  local_6f = 0;
                  local_6e = 0;
                  local_6d = 0;
                  local_6c = 0;
                  local_6b = 0;
                  local_6a = 0;
                  local_69 = 0;
                  if (bVar5) {
LAB_001441e8:
                    iVar6 = 0x28;
                  }
                  else {
                    lVar40 = 0;
                    iVar6 = 0x7d1a0584;
                    uStack_dc = 0;
                    uStack_e0 = 0;
                    uStack_118 = 0;
                    local_120 = 0;
                    local_108 = 0;
                    local_110 = 0;
                    uStack_f8 = 0;
                    local_100 = 0;
                    uStack_e8 = 0;
                    local_e4 = 0;
                    uStack_f0 = 0;
                    uStack_128 = 0;
                    local_130[0] = '\0';
                    local_130[1] = '\0';
                    local_130[2] = '\0';
                    local_130[3] = '\0';
                    local_130[4] = '\0';
                    local_130[5] = '\0';
                    local_130[6] = '\0';
                    local_130[7] = '\0';
                    do {
                      iVar6 = iVar6 * 0x41c64e6d + 0x3039;
                      *(byte *)((long)&local_240 + lVar40) =
                           (char)lVar40 * '\x11' + 0x4aU ^ (&DAT_0010ef38)[lVar40] ^
                           (byte)((uint)iVar6 >> 0x10);
                      lVar40 = lVar40 + 1;
                    } while (lVar40 != 0x10);
                    local_230 = 0;
                    local_a8._0_1_ = s_aosp_emugoogle_sgeneric_URER_0010eec0[8];
                    local_a8._1_1_ = s_aosp_emugoogle_sgeneric_URER_0010eec0[9];
                    local_a8._2_1_ = s_aosp_emugoogle_sgeneric_URER_0010eec0[10];
                    local_a8._3_1_ = s_aosp_emugoogle_sgeneric_URER_0010eec0[0xb];
                    local_a8._4_1_ = s_aosp_emugoogle_sgeneric_URER_0010eec0[0xc];
                    local_a8._5_1_ = s_aosp_emugoogle_sgeneric_URER_0010eec0[0xd];
                    local_a8._6_1_ = s_aosp_emugoogle_sgeneric_URER_0010eec0[0xe];
                    local_a8._7_1_ = s_aosp_emugoogle_sgeneric_URER_0010eec0[0xf];
                    local_a0 = 0x6b64;
                    iVar6 = __system_property_get(&local_240,local_130);
                    if (iVar6 < 1) {
LAB_00143c74:
                      bVar5 = false;
                    }
                    else {
                      uVar44 = (uint)(byte)local_130[0];
                      if (local_130[0] == 0) {
                        pbVar16 = (byte *)&local_a8;
                      }
                      else {
                        pbVar16 = (byte *)&local_a8;
                        pbVar41 = (byte *)((ulong)local_130 | 1);
                        do {
                          bVar2 = *pbVar16;
                          if (bVar2 == 0) goto LAB_00143c74;
                          if (0xffffffe5 < uVar44 - 0x5b) {
                            uVar44 = uVar44 | 0x20;
                          }
                          uVar43 = (uint)bVar2;
                          if (0xffffffe5 < bVar2 - 0x5b) {
                            uVar43 = bVar2 | 0x20;
                          }
                          if (uVar44 != uVar43) goto LAB_00143c74;
                          uVar44 = (uint)*pbVar41;
                          pbVar16 = pbVar16 + 1;
                          pbVar41 = pbVar41 + 1;
                        } while (uVar44 != 0);
                      }
                      bVar5 = *pbVar16 == 0;
                    }
                    local_240 = 0;
                    uStack_238 = 0;
                    local_230 = 0;
                    uStack_228 = 0;
                    local_220 = 0;
                    local_218 = 0;
                    local_210 = 0;
                    uStack_208 = 0;
                    local_a8 = 0;
                    local_a0 = 0;
                    local_9c = 0;
                    local_9b = 0;
                    local_9a = 0;
                    local_99 = 0;
                    local_98 = 0;
                    local_97 = 0;
                    local_96 = 0;
                    local_95 = 0;
                    local_94 = 0;
                    local_93 = 0;
                    local_92 = 0;
                    local_91 = 0;
                    local_90 = 0;
                    local_8f = 0;
                    local_8e = 0;
                    local_8d = 0;
                    local_8c = 0;
                    local_8b = 0;
                    local_8a = 0;
                    local_89 = 0;
                    local_88 = 0;
                    local_87 = 0;
                    local_86 = 0;
                    local_85 = 0;
                    local_84 = 0;
                    local_83 = 0;
                    local_82 = 0;
                    local_81 = 0;
                    local_80 = 0;
                    local_7f = 0;
                    local_7e = 0;
                    local_7d = 0;
                    local_7c = 0;
                    local_7b = 0;
                    local_7a = 0;
                    local_79 = 0;
                    local_78 = 0;
                    local_77 = 0;
                    local_76 = 0;
                    local_75 = 0;
                    local_74 = 0;
                    local_73 = 0;
                    local_72 = 0;
                    local_71 = 0;
                    local_70 = 0;
                    local_6f = 0;
                    local_6e = 0;
                    local_6d = 0;
                    local_6c = 0;
                    local_6b = 0;
                    local_6a = 0;
                    local_69 = 0;
                    if (bVar5) goto LAB_001441e8;
                    lVar40 = 0;
                    uStack_dc = 0;
                    uStack_e0 = 0;
                    uStack_118 = 0;
                    local_120 = 0;
                    local_108 = 0;
                    local_110 = 0;
                    uStack_f8 = 0;
                    local_100 = 0;
                    uStack_e8 = 0;
                    local_e4 = 0;
                    uStack_f0 = 0;
                    uStack_128 = 0;
                    local_130[0] = '\0';
                    local_130[1] = '\0';
                    local_130[2] = '\0';
                    local_130[3] = '\0';
                    local_130[4] = '\0';
                    local_130[5] = '\0';
                    local_130[6] = '\0';
                    local_130[7] = '\0';
                    do {
                      iVar7 = iVar7 * 0x41c64e6d + 0x3039;
                      *(byte *)((long)&local_240 + lVar40) =
                           (char)lVar40 * '\x11' + 0x4aU ^ (&DAT_0010ef38)[lVar40] ^
                           (byte)((uint)iVar7 >> 0x10);
                      lVar40 = lVar40 + 1;
                    } while (lVar40 != 0x10);
                    lVar40 = 0;
                    iVar6 = 0x7d1afd9c;
                    local_230 = 0;
                    do {
                      iVar6 = iVar6 * 0x41c64e6d + 0x3039;
                      *(byte *)((long)&local_a8 + lVar40) =
                           (char)lVar40 * '\x11' + 0xb2U ^ (&DAT_0010f220)[lVar40] ^
                           (byte)((uint)iVar6 >> 0x10);
                      lVar40 = lVar40 + 1;
                    } while (lVar40 != 0x19);
                    local_8f = 0;
                    iVar6 = __system_property_get(&local_240,local_130);
                    if (iVar6 < 1) {
LAB_00143f8c:
                      bVar5 = false;
                    }
                    else {
                      uVar44 = (uint)(byte)local_130[0];
                      if (local_130[0] == 0) {
                        pbVar16 = (byte *)&local_a8;
                      }
                      else {
                        pbVar16 = (byte *)&local_a8;
                        pbVar41 = (byte *)((ulong)local_130 | 1);
                        do {
                          bVar2 = *pbVar16;
                          if (bVar2 == 0) goto LAB_00143f8c;
                          if (0xffffffe5 < uVar44 - 0x5b) {
                            uVar44 = uVar44 | 0x20;
                          }
                          uVar43 = (uint)bVar2;
                          if (0xffffffe5 < bVar2 - 0x5b) {
                            uVar43 = bVar2 | 0x20;
                          }
                          if (uVar44 != uVar43) goto LAB_00143f8c;
                          uVar44 = (uint)*pbVar41;
                          pbVar16 = pbVar16 + 1;
                          pbVar41 = pbVar41 + 1;
                        } while (uVar44 != 0);
                      }
                      bVar5 = *pbVar16 == 0;
                    }
                    local_240 = 0;
                    uStack_238 = 0;
                    local_230 = 0;
                    uStack_228 = 0;
                    local_220 = 0;
                    local_218 = 0;
                    local_210 = 0;
                    uStack_208 = 0;
                    local_a8 = 0;
                    local_a0 = 0;
                    local_9c = 0;
                    local_9b = 0;
                    local_9a = 0;
                    local_99 = 0;
                    local_98 = 0;
                    local_97 = 0;
                    local_96 = 0;
                    local_95 = 0;
                    local_94 = 0;
                    local_93 = 0;
                    local_92 = 0;
                    local_91 = 0;
                    local_90 = 0;
                    local_8f = 0;
                    local_8e = 0;
                    local_8d = 0;
                    local_8c = 0;
                    local_8b = 0;
                    local_8a = 0;
                    local_89 = 0;
                    local_88 = 0;
                    local_87 = 0;
                    local_86 = 0;
                    local_85 = 0;
                    local_84 = 0;
                    local_83 = 0;
                    local_82 = 0;
                    local_81 = 0;
                    local_80 = 0;
                    local_7f = 0;
                    local_7e = 0;
                    local_7d = 0;
                    local_7c = 0;
                    local_7b = 0;
                    local_7a = 0;
                    local_79 = 0;
                    local_78 = 0;
                    local_77 = 0;
                    local_76 = 0;
                    local_75 = 0;
                    local_74 = 0;
                    local_73 = 0;
                    local_72 = 0;
                    local_71 = 0;
                    local_70 = 0;
                    local_6f = 0;
                    local_6e = 0;
                    local_6d = 0;
                    local_6c = 0;
                    local_6b = 0;
                    local_6a = 0;
                    local_69 = 0;
                    if ((((bVar5) || (uVar13 = FUN_0014740c(&DAT_0010f248), (uVar13 & 1) != 0)) ||
                        (uVar13 = FUN_0014740c(&DAT_0010f270), (uVar13 & 1) != 0)) ||
                       (((uVar13 = FUN_00147798(), (uVar13 & 1) != 0 ||
                         (uVar13 = FUN_00147b04(), (uVar13 & 1) != 0)) ||
                        ((uVar13 = FUN_00147e70(), (uVar13 & 1) != 0 ||
                         (uVar13 = FUN_001481dc(), (uVar13 & 1) != 0)))))) goto LAB_001441e8;
                    iVar6 = 0;
                  }
                  lVar40 = 0;
                  iVar7 = 0x7d1a0487;
                  uStack_dc = 0;
                  uStack_e0 = 0;
                  uStack_118 = 0;
                  local_120 = 0;
                  local_108 = 0;
                  local_110 = 0;
                  uStack_f8 = 0;
                  local_100 = 0;
                  uStack_e8 = 0;
                  local_e4 = 0;
                  uStack_f0 = 0;
                  uStack_128 = 0;
                  local_130[0] = '\0';
                  local_130[1] = '\0';
                  local_130[2] = '\0';
                  local_130[3] = '\0';
                  local_130[4] = '\0';
                  local_130[5] = '\0';
                  local_130[6] = '\0';
                  local_130[7] = '\0';
                  do {
                    iVar7 = iVar7 * 0x41c64e6d + 0x3039;
                    *(byte *)((long)&local_240 + lVar40) =
                         (char)lVar40 * '\x11' + 0x4bU ^ (&DAT_0010f198)[lVar40] ^
                         (byte)((uint)iVar7 >> 0x10);
                    lVar40 = lVar40 + 1;
                  } while (lVar40 != 0xf);
                  uStack_238 = uStack_238 & 0xffffffffffffff;
                  local_a8 = CONCAT44(local_a8._4_4_,uVar45);
                  iVar7 = __system_property_get(&local_240,local_130);
                  if (iVar7 < 1) {
LAB_001442b4:
                    bVar5 = false;
                  }
                  else {
                    uVar44 = (uint)(byte)local_130[0];
                    if (local_130[0] == 0) {
                      pbVar16 = (byte *)&local_a8;
                    }
                    else {
                      pbVar16 = (byte *)&local_a8;
                      pbVar41 = (byte *)((ulong)local_130 | 1);
                      do {
                        bVar2 = *pbVar16;
                        if (bVar2 == 0) goto LAB_001442b4;
                        if (0xffffffe5 < uVar44 - 0x5b) {
                          uVar44 = uVar44 | 0x20;
                        }
                        uVar43 = (uint)bVar2;
                        if (0xffffffe5 < bVar2 - 0x5b) {
                          uVar43 = bVar2 | 0x20;
                        }
                        if (uVar44 != uVar43) goto LAB_001442b4;
                        uVar44 = (uint)*pbVar41;
                        pbVar16 = pbVar16 + 1;
                        pbVar41 = pbVar41 + 1;
                      } while (uVar44 != 0);
                    }
                    bVar5 = *pbVar16 == 0;
                  }
                  local_240 = 0;
                  uStack_238 = 0;
                  local_230 = 0;
                  uStack_228 = 0;
                  local_220 = 0;
                  local_218 = 0;
                  local_210 = 0;
                  uStack_208 = 0;
                  local_a8 = 0;
                  local_a0 = 0;
                  local_9c = 0;
                  local_9b = 0;
                  local_9a = 0;
                  local_99 = 0;
                  local_98 = 0;
                  local_97 = 0;
                  local_96 = 0;
                  local_95 = 0;
                  local_94 = 0;
                  local_93 = 0;
                  local_92 = 0;
                  local_91 = 0;
                  local_90 = 0;
                  local_8f = 0;
                  local_8e = 0;
                  local_8d = 0;
                  local_8c = 0;
                  local_8b = 0;
                  local_8a = 0;
                  local_89 = 0;
                  local_88 = 0;
                  local_87 = 0;
                  local_86 = 0;
                  local_85 = 0;
                  local_84 = 0;
                  local_83 = 0;
                  local_82 = 0;
                  local_81 = 0;
                  local_80 = 0;
                  local_7f = 0;
                  local_7e = 0;
                  local_7d = 0;
                  local_7c = 0;
                  local_7b = 0;
                  local_7a = 0;
                  local_79 = 0;
                  local_78 = 0;
                  local_77 = 0;
                  local_76 = 0;
                  local_75 = 0;
                  local_74 = 0;
                  local_73 = 0;
                  local_72 = 0;
                  local_71 = 0;
                  local_70 = 0;
                  local_6f = 0;
                  local_6e = 0;
                  local_6d = 0;
                  local_6c = 0;
                  local_6b = 0;
                  local_6a = 0;
                  local_69 = 0;
                  if (((bVar5) || (uVar13 = FUN_00148548(&DAT_0010f208), (uVar13 & 1) != 0)) ||
                     ((uVar13 = FUN_00148548(&DAT_0010f2b0), (uVar13 & 1) != 0 ||
                      ((uVar13 = FUN_001488d4(), (uVar13 & 1) != 0 ||
                       (uVar13 = FUN_00148c04(), (uVar13 & 1) != 0)))))) {
                    iVar6 = iVar6 + 0x28;
                  }
                  lVar40 = 0;
                  iVar7 = 0x7d1a0b86;
                  uStack_dc = 0;
                  uStack_e0 = 0;
                  uStack_118 = 0;
                  local_120 = 0;
                  local_108 = 0;
                  local_110 = 0;
                  uStack_f8 = 0;
                  local_100 = 0;
                  uStack_e8 = 0;
                  local_e4 = 0;
                  uStack_f0 = 0;
                  uStack_128 = 0;
                  local_130[0] = '\0';
                  local_130[1] = '\0';
                  local_130[2] = '\0';
                  local_130[3] = '\0';
                  local_130[4] = '\0';
                  local_130[5] = '\0';
                  local_130[6] = '\0';
                  local_130[7] = '\0';
                  do {
                    iVar7 = iVar7 * 0x41c64e6d + 0x3039;
                    *(byte *)((long)&local_240 + lVar40) =
                         (char)lVar40 * '\x11' + 0x44U ^ (&DAT_0010f2f8)[lVar40] ^
                         (byte)((uint)iVar7 >> 0x10);
                    lVar40 = lVar40 + 1;
                  } while (lVar40 != 0x17);
                  local_230 = local_230 & 0xffffffffffffff;
                  local_a8._0_1_ = s_GenymotiDEVI_0010ed30[0];
                  local_a8._1_1_ = s_GenymotiDEVI_0010ed30[1];
                  local_a8._2_1_ = s_GenymotiDEVI_0010ed30[2];
                  local_a8._3_1_ = s_GenymotiDEVI_0010ed30[3];
                  local_a8._4_1_ = s_GenymotiDEVI_0010ed30[4];
                  local_a8._5_1_ = s_GenymotiDEVI_0010ed30[5];
                  local_a8._6_1_ = s_GenymotiDEVI_0010ed30[6];
                  local_a8._7_1_ = s_GenymotiDEVI_0010ed30[7];
                  local_a0 = CONCAT13(local_a0._3_1_,0x6e6f);
                  iVar7 = __system_property_get(&local_240,local_130);
                  if (iVar7 < 1) {
LAB_001445dc:
                    bVar5 = false;
                  }
                  else {
                    uVar44 = (uint)(byte)local_130[0];
                    if (local_130[0] == 0) {
                      pbVar16 = (byte *)&local_a8;
                    }
                    else {
                      pbVar16 = (byte *)&local_a8;
                      pbVar41 = (byte *)((ulong)local_130 | 1);
                      do {
                        bVar2 = *pbVar16;
                        if (bVar2 == 0) goto LAB_001445dc;
                        if (0xffffffe5 < uVar44 - 0x5b) {
                          uVar44 = uVar44 | 0x20;
                        }
                        uVar43 = (uint)bVar2;
                        if (0xffffffe5 < bVar2 - 0x5b) {
                          uVar43 = bVar2 | 0x20;
                        }
                        if (uVar44 != uVar43) goto LAB_001445dc;
                        uVar44 = (uint)*pbVar41;
                        pbVar16 = pbVar16 + 1;
                        pbVar41 = pbVar41 + 1;
                      } while (uVar44 != 0);
                    }
                    bVar5 = *pbVar16 == 0;
                  }
                  iVar7 = iVar6 + 0x28;
                  if (!bVar5) {
                    iVar7 = iVar6;
                  }
                  local_240 = 0;
                  uStack_238 = 0;
                  local_230 = 0;
                  uStack_228 = 0;
                  local_220 = 0;
                  local_218 = 0;
                  local_210 = 0;
                  uStack_208 = 0;
                  local_a8 = 0;
                  local_a0 = 0;
                  local_9c = 0;
                  local_9b = 0;
                  local_9a = 0;
                  local_99 = 0;
                  local_98 = 0;
                  local_97 = 0;
                  local_96 = 0;
                  local_95 = 0;
                  local_94 = 0;
                  local_93 = 0;
                  local_92 = 0;
                  local_91 = 0;
                  local_90 = 0;
                  local_8f = 0;
                  local_8e = 0;
                  local_8d = 0;
                  local_8c = 0;
                  local_8b = 0;
                  local_8a = 0;
                  local_89 = 0;
                  local_88 = 0;
                  local_87 = 0;
                  local_86 = 0;
                  local_85 = 0;
                  local_84 = 0;
                  local_83 = 0;
                  local_82 = 0;
                  local_81 = 0;
                  local_80 = 0;
                  local_7f = 0;
                  local_7e = 0;
                  local_7d = 0;
                  local_7c = 0;
                  local_7b = 0;
                  local_7a = 0;
                  local_79 = 0;
                  local_78 = 0;
                  local_77 = 0;
                  local_76 = 0;
                  local_75 = 0;
                  local_74 = 0;
                  local_73 = 0;
                  local_72 = 0;
                  local_71 = 0;
                  local_70 = 0;
                  local_6f = 0;
                  local_6e = 0;
                  local_6d = 0;
                  local_6c = 0;
                  local_6b = 0;
                  local_6a = 0;
                  local_69 = 0;
                  uVar13 = FUN_00148f38(&DAT_0010f338);
                  if ((uVar13 & 1) == 0) {
                    lVar40 = 0;
                    iVar6 = 0x7d1a0a89;
                    uStack_dc = 0;
                    uStack_e0 = 0;
                    uStack_118 = 0;
                    local_120 = 0;
                    local_108 = 0;
                    local_110 = 0;
                    uStack_f8 = 0;
                    local_100 = 0;
                    uStack_e8 = 0;
                    local_e4 = 0;
                    uStack_f0 = 0;
                    uStack_128 = 0;
                    local_130[0] = '\0';
                    local_130[1] = '\0';
                    local_130[2] = '\0';
                    local_130[3] = '\0';
                    local_130[4] = '\0';
                    local_130[5] = '\0';
                    local_130[6] = '\0';
                    local_130[7] = '\0';
                    do {
                      iVar6 = iVar6 * 0x41c64e6d + 0x3039;
                      *(byte *)((long)&local_240 + lVar40) =
                           (char)lVar40 * '\x11' + 0x45U ^ (&DAT_0010ef98)[lVar40] ^
                           (byte)((uint)iVar6 >> 0x10);
                      lVar40 = lVar40 + 1;
                    } while (lVar40 != 0x11);
                    local_230._0_2_ = (ushort)(byte)local_230;
                    local_a8._0_1_ = s_aosp_emugoogle_sgeneric_URER_0010eec0[0x10];
                    local_a8._1_1_ = s_aosp_emugoogle_sgeneric_URER_0010eec0[0x11];
                    local_a8._2_1_ = s_aosp_emugoogle_sgeneric_URER_0010eec0[0x12];
                    local_a8._3_1_ = s_aosp_emugoogle_sgeneric_URER_0010eec0[0x13];
                    local_a8._4_1_ = s_aosp_emugoogle_sgeneric_URER_0010eec0[0x14];
                    local_a8._5_1_ = s_aosp_emugoogle_sgeneric_URER_0010eec0[0x15];
                    local_a8._6_1_ = s_aosp_emugoogle_sgeneric_URER_0010eec0[0x16];
                    local_a8._7_1_ = s_aosp_emugoogle_sgeneric_URER_0010eec0[0x17];
                    local_a0 = (undefined4)DAT_0010ee68;
                    iVar6 = __system_property_get(&local_240,local_130);
                    if (iVar6 < 1) {
LAB_001448e8:
                      bVar5 = false;
                    }
                    else {
                      uVar44 = (uint)(byte)local_130[0];
                      if (local_130[0] == 0) {
                        pbVar16 = (byte *)&local_a8;
                      }
                      else {
                        pbVar16 = (byte *)&local_a8;
                        pbVar41 = (byte *)((ulong)local_130 | 1);
                        do {
                          bVar2 = *pbVar16;
                          if (bVar2 == 0) goto LAB_001448e8;
                          if (0xffffffe5 < uVar44 - 0x5b) {
                            uVar44 = uVar44 | 0x20;
                          }
                          uVar43 = (uint)bVar2;
                          if (0xffffffe5 < bVar2 - 0x5b) {
                            uVar43 = bVar2 | 0x20;
                          }
                          if (uVar44 != uVar43) goto LAB_001448e8;
                          uVar44 = (uint)*pbVar41;
                          pbVar16 = pbVar16 + 1;
                          pbVar41 = pbVar41 + 1;
                        } while (uVar44 != 0);
                      }
                      bVar5 = *pbVar16 == 0;
                    }
                    local_240 = 0;
                    uStack_238 = 0;
                    local_230 = 0;
                    uStack_228 = 0;
                    local_220 = 0;
                    local_218 = 0;
                    local_210 = 0;
                    uStack_208 = 0;
                    local_a8 = 0;
                    local_a0 = 0;
                    local_9c = 0;
                    local_9b = 0;
                    local_9a = 0;
                    local_99 = 0;
                    local_98 = 0;
                    local_97 = 0;
                    local_96 = 0;
                    local_95 = 0;
                    local_94 = 0;
                    local_93 = 0;
                    local_92 = 0;
                    local_91 = 0;
                    local_90 = 0;
                    local_8f = 0;
                    local_8e = 0;
                    local_8d = 0;
                    local_8c = 0;
                    local_8b = 0;
                    local_8a = 0;
                    local_89 = 0;
                    local_88 = 0;
                    local_87 = 0;
                    local_86 = 0;
                    local_85 = 0;
                    local_84 = 0;
                    local_83 = 0;
                    local_82 = 0;
                    local_81 = 0;
                    local_80 = 0;
                    local_7f = 0;
                    local_7e = 0;
                    local_7d = 0;
                    local_7c = 0;
                    local_7b = 0;
                    local_7a = 0;
                    local_79 = 0;
                    local_78 = 0;
                    local_77 = 0;
                    local_76 = 0;
                    local_75 = 0;
                    local_74 = 0;
                    local_73 = 0;
                    local_72 = 0;
                    local_71 = 0;
                    local_70 = 0;
                    local_6f = 0;
                    local_6e = 0;
                    local_6d = 0;
                    local_6c = 0;
                    local_6b = 0;
                    local_6a = 0;
                    local_69 = 0;
                    if (bVar5) goto LAB_00144e44;
                    lVar40 = 0;
                    iVar6 = 0x7d1a0a89;
                    uStack_dc = 0;
                    uStack_e0 = 0;
                    uStack_118 = 0;
                    local_120 = 0;
                    local_108 = 0;
                    local_110 = 0;
                    uStack_f8 = 0;
                    local_100 = 0;
                    uStack_e8 = 0;
                    local_e4 = 0;
                    uStack_f0 = 0;
                    uStack_128 = 0;
                    local_130[0] = '\0';
                    local_130[1] = '\0';
                    local_130[2] = '\0';
                    local_130[3] = '\0';
                    local_130[4] = '\0';
                    local_130[5] = '\0';
                    local_130[6] = '\0';
                    local_130[7] = '\0';
                    do {
                      iVar6 = iVar6 * 0x41c64e6d + 0x3039;
                      *(byte *)((long)&local_240 + lVar40) =
                           (char)lVar40 * '\x11' + 0x45U ^ (&DAT_0010ef98)[lVar40] ^
                           (byte)((uint)iVar6 >> 0x10);
                      lVar40 = lVar40 + 1;
                    } while (lVar40 != 0x11);
                    lVar40 = 0;
                    iVar6 = 0x7d1ae366;
                    local_230._0_2_ = (ushort)(byte)local_230;
                    do {
                      iVar6 = iVar6 * 0x41c64e6d + 0x3039;
                      *(byte *)((long)&local_a8 + lVar40) =
                           (char)lVar40 * '\x11' + 0xacU ^ (&DAT_0010f368)[lVar40] ^
                           (byte)((uint)iVar6 >> 0x10);
                      lVar40 = lVar40 + 1;
                    } while (lVar40 != 0xe);
                    local_9a = 0;
                    iVar6 = __system_property_get(&local_240,local_130);
                    if (iVar6 < 1) {
LAB_00144c08:
                      bVar5 = false;
                    }
                    else {
                      uVar44 = (uint)(byte)local_130[0];
                      if (local_130[0] == 0) {
                        pbVar16 = (byte *)&local_a8;
                      }
                      else {
                        pbVar16 = (byte *)&local_a8;
                        pbVar41 = (byte *)((ulong)local_130 | 1);
                        do {
                          bVar2 = *pbVar16;
                          if (bVar2 == 0) goto LAB_00144c08;
                          if (0xffffffe5 < uVar44 - 0x5b) {
                            uVar44 = uVar44 | 0x20;
                          }
                          uVar43 = (uint)bVar2;
                          if (0xffffffe5 < bVar2 - 0x5b) {
                            uVar43 = bVar2 | 0x20;
                          }
                          if (uVar44 != uVar43) goto LAB_00144c08;
                          uVar44 = (uint)*pbVar41;
                          pbVar16 = pbVar16 + 1;
                          pbVar41 = pbVar41 + 1;
                        } while (uVar44 != 0);
                      }
                      bVar5 = *pbVar16 == 0;
                    }
                    local_240 = 0;
                    uStack_238 = 0;
                    local_230 = 0;
                    uStack_228 = 0;
                    local_220 = 0;
                    local_218 = 0;
                    local_210 = 0;
                    uStack_208 = 0;
                    local_a8 = 0;
                    local_a0 = 0;
                    local_9c = 0;
                    local_9b = 0;
                    local_9a = 0;
                    local_99 = 0;
                    local_98 = 0;
                    local_97 = 0;
                    local_96 = 0;
                    local_95 = 0;
                    local_94 = 0;
                    local_93 = 0;
                    local_92 = 0;
                    local_91 = 0;
                    local_90 = 0;
                    local_8f = 0;
                    local_8e = 0;
                    local_8d = 0;
                    local_8c = 0;
                    local_8b = 0;
                    local_8a = 0;
                    local_89 = 0;
                    local_88 = 0;
                    local_87 = 0;
                    local_86 = 0;
                    local_85 = 0;
                    local_84 = 0;
                    local_83 = 0;
                    local_82 = 0;
                    local_81 = 0;
                    local_80 = 0;
                    local_7f = 0;
                    local_7e = 0;
                    local_7d = 0;
                    local_7c = 0;
                    local_7b = 0;
                    local_7a = 0;
                    local_79 = 0;
                    local_78 = 0;
                    local_77 = 0;
                    local_76 = 0;
                    local_75 = 0;
                    local_74 = 0;
                    local_73 = 0;
                    local_72 = 0;
                    local_71 = 0;
                    local_70 = 0;
                    local_6f = 0;
                    local_6e = 0;
                    local_6d = 0;
                    local_6c = 0;
                    local_6b = 0;
                    local_6a = 0;
                    local_69 = 0;
                    if ((((bVar5) || (uVar13 = FUN_001492c4(), (uVar13 & 1) != 0)) ||
                        (uVar13 = FUN_00149608(), (uVar13 & 1) != 0)) ||
                       (uVar13 = FUN_00148f38(&DAT_0010f2c8), (uVar13 & 1) != 0)) goto LAB_00144e44;
                  }
                  else {
LAB_00144e44:
                    iVar7 = iVar7 + 0x28;
                  }
                  lVar40 = 0;
                  iVar6 = 0x7d1a0988;
                  uStack_dc = 0;
                  uStack_e0 = 0;
                  uStack_118 = 0;
                  local_120 = 0;
                  local_108 = 0;
                  local_110 = 0;
                  uStack_f8 = 0;
                  local_100 = 0;
                  uStack_e8 = 0;
                  local_e4 = 0;
                  uStack_f0 = 0;
                  uStack_128 = 0;
                  local_130[0] = '\0';
                  local_130[1] = '\0';
                  local_130[2] = '\0';
                  local_130[3] = '\0';
                  local_130[4] = '\0';
                  local_130[5] = '\0';
                  local_130[6] = '\0';
                  local_130[7] = '\0';
                  do {
                    iVar6 = iVar6 * 0x41c64e6d + 0x3039;
                    *(byte *)((long)&local_240 + lVar40) =
                         (char)lVar40 * '\x11' + 0x46U ^ (&DAT_0010f118)[lVar40] ^
                         (byte)((uint)iVar6 >> 0x10);
                    lVar40 = lVar40 + 1;
                  } while (lVar40 != 0xf);
                  uStack_238 = uStack_238 & 0xffffffffffffff;
                  local_a0 = CONCAT22(local_a0._2_2_,0x6e);
                  local_a8._0_1_ = s_emulatioPRODUCT_0010edf0[0];
                  local_a8._1_1_ = s_emulatioPRODUCT_0010edf0[1];
                  local_a8._2_1_ = s_emulatioPRODUCT_0010edf0[2];
                  local_a8._3_1_ = s_emulatioPRODUCT_0010edf0[3];
                  local_a8._4_1_ = s_emulatioPRODUCT_0010edf0[4];
                  local_a8._5_1_ = s_emulatioPRODUCT_0010edf0[5];
                  local_a8._6_1_ = s_emulatioPRODUCT_0010edf0[6];
                  local_a8._7_1_ = s_emulatioPRODUCT_0010edf0[7];
                  iVar6 = __system_property_get(&local_240,local_130);
                  if (iVar6 < 1) {
LAB_00144f1c:
                    bVar5 = false;
                  }
                  else {
                    uVar44 = (uint)(byte)local_130[0];
                    if (local_130[0] == 0) {
                      pbVar16 = (byte *)&local_a8;
                    }
                    else {
                      pbVar16 = (byte *)&local_a8;
                      pbVar41 = (byte *)((ulong)local_130 | 1);
                      do {
                        bVar2 = *pbVar16;
                        if (bVar2 == 0) goto LAB_00144f1c;
                        if (0xffffffe5 < uVar44 - 0x5b) {
                          uVar44 = uVar44 | 0x20;
                        }
                        uVar43 = (uint)bVar2;
                        if (0xffffffe5 < bVar2 - 0x5b) {
                          uVar43 = bVar2 | 0x20;
                        }
                        if (uVar44 != uVar43) goto LAB_00144f1c;
                        uVar44 = (uint)*pbVar41;
                        pbVar16 = pbVar16 + 1;
                        pbVar41 = pbVar41 + 1;
                      } while (uVar44 != 0);
                    }
                    bVar5 = *pbVar16 == 0;
                  }
                  lVar40 = 0;
                  iVar6 = 0x7d1a088b;
                  local_a8 = 0;
                  local_a0 = 0;
                  local_9c = 0;
                  local_9b = 0;
                  local_9a = 0;
                  local_99 = 0;
                  local_98 = 0;
                  local_97 = 0;
                  local_96 = 0;
                  local_95 = 0;
                  local_94 = 0;
                  local_93 = 0;
                  local_92 = 0;
                  local_91 = 0;
                  local_90 = 0;
                  local_8f = 0;
                  local_8e = 0;
                  local_8d = 0;
                  local_8c = 0;
                  local_8b = 0;
                  local_8a = 0;
                  local_89 = 0;
                  local_88 = 0;
                  local_87 = 0;
                  local_86 = 0;
                  local_85 = 0;
                  local_84 = 0;
                  local_83 = 0;
                  local_82 = 0;
                  local_81 = 0;
                  local_80 = 0;
                  local_7f = 0;
                  local_7e = 0;
                  local_7d = 0;
                  local_7c = 0;
                  local_7b = 0;
                  local_7a = 0;
                  local_79 = 0;
                  local_78 = 0;
                  local_77 = 0;
                  local_76 = 0;
                  local_75 = 0;
                  local_74 = 0;
                  local_73 = 0;
                  local_72 = 0;
                  local_71 = 0;
                  local_70 = 0;
                  local_6f = 0;
                  local_6e = 0;
                  local_6d = 0;
                  local_6c = 0;
                  local_6b = 0;
                  local_6a = 0;
                  local_69 = 0;
                  do {
                    iVar6 = iVar6 * 0x41c64e6d + 0x3039;
                    local_1d8[lVar40] =
                         (char)lVar40 * '\x11' + 0x47U ^ (&DAT_0010f380)[lVar40] ^
                         (byte)((uint)iVar6 >> 0x10);
                    lVar40 = lVar40 + 1;
                  } while (lVar40 != 0x17);
                  local_1d8[0x17] = 0;
                  iVar6 = iVar7 + 0x28;
                  if (!bVar5) {
                    iVar6 = iVar7;
                  }
                  uStack_1ec = 0;
                  uStack_1f0 = 0;
                  uStack_228 = 0;
                  local_230 = 0;
                  local_218 = 0;
                  local_220 = 0;
                  uStack_208 = 0;
                  local_210 = 0;
                  uStack_1f8 = 0;
                  local_1f4 = 0;
                  uStack_200 = 0;
                  uStack_238 = 0;
                  local_240 = 0;
                  iVar8 = __system_property_get(local_1d8,&local_240);
                  lVar40 = 0;
                  iVar7 = 0x7d1a22d1;
                  local_1d8[0] = 0;
                  local_1d8[1] = 0;
                  local_1d8[2] = 0;
                  local_1d8[3] = 0;
                  local_1d8[4] = 0;
                  local_1d8[5] = 0;
                  local_1d8[6] = 0;
                  local_1d8[7] = 0;
                  local_1d8[8] = 0;
                  local_1d8[9] = 0;
                  local_1d8[10] = 0;
                  local_1d8[0xb] = 0;
                  local_1d8[0xc] = 0;
                  local_1d8[0xd] = 0;
                  local_1d8[0xe] = 0;
                  local_1d8[0xf] = 0;
                  local_1d8[0x10] = 0;
                  local_1d8[0x11] = 0;
                  local_1d8[0x12] = 0;
                  local_1d8[0x13] = 0;
                  local_1d8[0x14] = 0;
                  local_1d8[0x15] = 0;
                  local_1d8[0x16] = 0;
                  local_1d8[0x17] = 0;
                  local_1d8[0x18] = 0;
                  local_1d8[0x19] = 0;
                  local_1d8[0x1a] = 0;
                  local_1d8[0x1b] = 0;
                  local_1d8[0x1c] = 0;
                  local_1d8[0x1d] = 0;
                  local_1d8[0x1e] = 0;
                  local_1d8[0x1f] = 0;
                  local_1d8[0x20] = 0;
                  local_1d8[0x21] = 0;
                  local_1d8[0x22] = 0;
                  local_1d8[0x23] = 0;
                  local_1d8[0x24] = 0;
                  local_1d8[0x25] = 0;
                  local_1d8[0x26] = 0;
                  local_1d8[0x27] = 0;
                  do {
                    iVar7 = iVar7 * 0x41c64e6d + 0x3039;
                    local_130[lVar40] =
                         (char)lVar40 * '\x11' + 0x6dU ^ (&DAT_0010efb8)[lVar40] ^
                         (byte)((uint)iVar7 >> 0x10);
                    lVar40 = lVar40 + 1;
                  } while (lVar40 != 0x10);
                  local_120 = local_120 & 0xffffffffffffff00;
                  lVar14 = (**(code **)(*param_1 + 0x30))(param_1,local_130);
                  lVar40 = 0;
                  do {
                    local_130[lVar40] = '\0';
                    lVar40 = lVar40 + 1;
                  } while (lVar40 != 0x80);
                  iVar7 = iVar6 + 0x28;
                  if (iVar8 < 1) {
                    iVar7 = iVar6;
                  }
                  if (lVar14 == 0) {
                    (**(code **)(*param_1 + 0x88))(param_1);
                    iVar8 = 0;
                  }
                  else {
                    lVar40 = FUN_0014ac90(param_1,lVar14);
                    if (lVar40 == 0) {
                      (**(code **)(*param_1 + 0x88))(param_1);
LAB_00145364:
                      iVar6 = 0;
                    }
                    else {
                      lVar40 = (**(code **)(*param_1 + 0x488))(param_1,lVar14,lVar40);
                      if (lVar40 == 0) goto LAB_00145364;
                      uVar13 = FUN_0014ae5c(param_1,lVar40,&DAT_0010f3a8);
                      (**(code **)(*param_1 + 0xb8))(param_1,lVar40);
                      iVar6 = 0x3c;
                      if ((uVar13 & 1) == 0) {
                        iVar6 = 0;
                      }
                    }
                    lVar40 = FUN_0014ac90(param_1,lVar14);
                    if (lVar40 == 0) {
                      (**(code **)(*param_1 + 0x88))(param_1);
LAB_001453e0:
                      iVar18 = 0;
                    }
                    else {
                      lVar40 = (**(code **)(*param_1 + 0x488))(param_1,lVar14,lVar40);
                      if (lVar40 == 0) goto LAB_001453e0;
                      uVar13 = FUN_0014b0c4(param_1,lVar40,&DAT_0010f3c0);
                      (**(code **)(*param_1 + 0xb8))(param_1,lVar40);
                      iVar18 = 0x3c;
                      if ((uVar13 & 1) == 0) {
                        iVar18 = 0;
                      }
                    }
                    iVar9 = FUN_0014a708(param_1,lVar14,&DAT_0010f3d0);
                    lVar40 = FUN_0014ac90(param_1,lVar14);
                    if (lVar40 == 0) {
                      (**(code **)(*param_1 + 0x88))(param_1);
LAB_00145478:
                      iVar19 = 0;
                    }
                    else {
                      lVar40 = (**(code **)(*param_1 + 0x488))(param_1,lVar14,lVar40);
                      if (lVar40 == 0) goto LAB_00145478;
                      uVar13 = FUN_0014b0c4(param_1,lVar40,&DAT_0010f3e0);
                      (**(code **)(*param_1 + 0xb8))(param_1,lVar40);
                      iVar19 = 0x3c;
                      if ((uVar13 & 1) == 0) {
                        iVar19 = 0;
                      }
                    }
                    lVar40 = FUN_0014ac90(param_1,lVar14);
                    if (lVar40 == 0) {
                      (**(code **)(*param_1 + 0x88))(param_1);
LAB_001454f0:
                      iVar20 = 0;
                    }
                    else {
                      lVar40 = (**(code **)(*param_1 + 0x488))(param_1,lVar14,lVar40);
                      if (lVar40 == 0) goto LAB_001454f0;
                      uVar13 = FUN_0014b32c(param_1,lVar40);
                      (**(code **)(*param_1 + 0xb8))(param_1,lVar40);
                      iVar20 = 0x3c;
                      if ((uVar13 & 1) == 0) {
                        iVar20 = 0;
                      }
                    }
                    lVar40 = FUN_0014ac90(param_1,lVar14);
                    if (lVar40 == 0) {
                      (**(code **)(*param_1 + 0x88))(param_1);
                      iVar21 = 0;
                    }
                    else {
                      lVar40 = (**(code **)(*param_1 + 0x488))(param_1,lVar14,lVar40);
                      iVar21 = 0;
                      if (lVar40 != 0) {
                        uVar13 = FUN_0014b520(param_1,lVar40,&DAT_0010f3f0);
                        (**(code **)(*param_1 + 0xb8))(param_1,lVar40);
                        iVar21 = 0x3c;
                        if ((uVar13 & 1) == 0) {
                          iVar21 = 0;
                        }
                      }
                    }
                    iVar10 = FUN_0014a708(param_1,lVar14,&DAT_0010f400);
                    lVar40 = FUN_0014ac90(param_1,lVar14);
                    if (lVar40 == 0) {
                      (**(code **)(*param_1 + 0x88))(param_1);
LAB_00145608:
                      iVar22 = 0;
                    }
                    else {
                      lVar40 = (**(code **)(*param_1 + 0x488))(param_1,lVar14,lVar40);
                      if (lVar40 == 0) goto LAB_00145608;
                      uVar13 = FUN_0014ae5c(param_1,lVar40,&DAT_0010f410);
                      (**(code **)(*param_1 + 0xb8))(param_1,lVar40);
                      iVar22 = 0x3c;
                      if ((uVar13 & 1) == 0) {
                        iVar22 = 0;
                      }
                    }
                    lVar40 = FUN_0014ac90(param_1,lVar14);
                    if (lVar40 == 0) {
                      (**(code **)(*param_1 + 0x88))(param_1);
                      iVar23 = 0;
                    }
                    else {
                      lVar40 = (**(code **)(*param_1 + 0x488))(param_1,lVar14,lVar40);
                      iVar23 = 0;
                      if (lVar40 != 0) {
                        uVar13 = FUN_0014b788(param_1,lVar40,&DAT_0010f428);
                        (**(code **)(*param_1 + 0xb8))(param_1,lVar40);
                        iVar23 = 0x3c;
                        if ((uVar13 & 1) == 0) {
                          iVar23 = 0;
                        }
                      }
                    }
                    lVar40 = 0;
                    iVar8 = 0x7d1a21d0;
                    local_9c = 0;
                    local_a8._0_1_ = s_MANUFACTnox_0010ee70[0];
                    local_a8._1_1_ = s_MANUFACTnox_0010ee70[1];
                    local_a8._2_1_ = s_MANUFACTnox_0010ee70[2];
                    local_a8._3_1_ = s_MANUFACTnox_0010ee70[3];
                    local_a8._4_1_ = s_MANUFACTnox_0010ee70[4];
                    local_a8._5_1_ = s_MANUFACTnox_0010ee70[5];
                    local_a8._6_1_ = s_MANUFACTnox_0010ee70[6];
                    local_a8._7_1_ = s_MANUFACTnox_0010ee70[7];
                    local_a0 = (undefined4)ram0x0010eed8;
                    do {
                      iVar8 = iVar8 * 0x41c64e6d + 0x3039;
                      local_130[lVar40] =
                           (char)lVar40 * '\x11' + 0x6eU ^ (&DAT_0010f018)[lVar40] ^
                           (byte)((uint)iVar8 >> 0x10);
                      lVar40 = lVar40 + 1;
                    } while (lVar40 != 0x12);
                    local_120._0_3_ = (uint3)(ushort)local_120;
                    lVar15 = (**(code **)(*param_1 + 0x480))(param_1,lVar14,&local_a8,local_130);
                    lVar40 = 0;
                    local_a8 = 0;
                    local_a0 = 0;
                    local_9c = 0;
                    local_9b = 0;
                    local_9a = 0;
                    local_99 = 0;
                    local_98 = 0;
                    local_97 = 0;
                    local_96 = 0;
                    local_95 = 0;
                    local_94 = 0;
                    local_93 = 0;
                    local_92 = 0;
                    local_91 = 0;
                    local_90 = 0;
                    local_8f = 0;
                    local_8e = 0;
                    local_8d = 0;
                    local_8c = 0;
                    local_8b = 0;
                    local_8a = 0;
                    local_89 = 0;
                    local_88 = 0;
                    local_87 = 0;
                    local_86 = 0;
                    local_85 = 0;
                    local_84 = 0;
                    local_83 = 0;
                    local_82 = 0;
                    local_81 = 0;
                    local_80 = 0;
                    local_7f = 0;
                    local_7e = 0;
                    local_7d = 0;
                    local_7c = 0;
                    local_7b = 0;
                    local_7a = 0;
                    local_79 = 0;
                    local_78 = 0;
                    local_77 = 0;
                    local_76 = 0;
                    local_75 = 0;
                    local_74 = 0;
                    local_73 = 0;
                    local_72 = 0;
                    local_71 = 0;
                    local_70 = 0;
                    local_6f = 0;
                    local_6e = 0;
                    local_6d = 0;
                    local_6c = 0;
                    local_6b = 0;
                    local_6a = 0;
                    local_69 = 0;
                    do {
                      local_130[lVar40] = '\0';
                      lVar40 = lVar40 + 1;
                    } while (lVar40 != 0x60);
                    if (lVar15 == 0) {
                      (**(code **)(*param_1 + 0x88))(param_1);
LAB_00145898:
                      iVar24 = 0;
                    }
                    else {
                      lVar40 = (**(code **)(*param_1 + 0x488))(param_1,lVar14);
                      if (lVar40 == 0) goto LAB_00145898;
                      uVar13 = FUN_0014b9f0(param_1,lVar40,&DAT_0010f320);
                      (**(code **)(*param_1 + 0xb8))(param_1,lVar40);
                      iVar24 = 0x28;
                      if ((uVar13 & 1) == 0) {
                        iVar24 = 0;
                      }
                    }
                    lVar40 = FUN_0014bc58(param_1,lVar14,&DAT_0010f528);
                    if (lVar40 == 0) {
                      (**(code **)(*param_1 + 0x88))(param_1);
LAB_00145920:
                      iVar25 = 0;
                    }
                    else {
                      lVar40 = (**(code **)(*param_1 + 0x488))(param_1,lVar14,lVar40);
                      if (lVar40 == 0) goto LAB_00145920;
                      uVar13 = FUN_0014b9f0(param_1,lVar40,&DAT_0010f208);
                      (**(code **)(*param_1 + 0xb8))(param_1,lVar40);
                      iVar25 = 0x28;
                      if ((uVar13 & 1) == 0) {
                        iVar25 = 0;
                      }
                    }
                    lVar40 = FUN_0014bc58(param_1,lVar14,&DAT_0010f528);
                    if (lVar40 == 0) {
                      (**(code **)(*param_1 + 0x88))(param_1);
LAB_00145a24:
                      iVar26 = 0;
                    }
                    else {
                      lVar40 = (**(code **)(*param_1 + 0x488))(param_1,lVar14,lVar40);
                      if (lVar40 == 0) goto LAB_00145a24;
                      lVar15 = 0;
                      iVar8 = 0x7d1afd9c;
                      do {
                        iVar8 = iVar8 * 0x41c64e6d + 0x3039;
                        local_130[lVar15] =
                             (char)lVar15 * '\x11' + 0xb2U ^ (&DAT_0010f220)[lVar15] ^
                             (byte)((uint)iVar8 >> 0x10);
                        lVar15 = lVar15 + 1;
                      } while (lVar15 != 0x19);
                      uStack_118._0_2_ = (ushort)(byte)uStack_118;
                      pbVar16 = (byte *)(**(code **)(*param_1 + 0x548))(param_1,lVar40,0);
                      if (pbVar16 == (byte *)0x0) {
                        iVar26 = 0;
                      }
                      else {
                        uVar44 = (uint)*pbVar16;
                        if (*pbVar16 == 0) {
                          pbVar41 = (byte *)local_130;
                        }
                        else {
                          pbVar41 = (byte *)local_130;
                          do {
                            pbVar16 = pbVar16 + 1;
                            bVar2 = *pbVar41;
                            if (bVar2 == 0) {
LAB_00145a34:
                              iVar26 = 0;
                              goto LAB_00145a50;
                            }
                            if (0xffffffe5 < uVar44 - 0x5b) {
                              uVar44 = uVar44 | 0x20;
                            }
                            uVar43 = (uint)bVar2;
                            if (0xffffffe5 < bVar2 - 0x5b) {
                              uVar43 = bVar2 | 0x20;
                            }
                            if (uVar44 != uVar43) goto LAB_00145a34;
                            uVar44 = (uint)*pbVar16;
                            pbVar41 = pbVar41 + 1;
                          } while (uVar44 != 0);
                        }
                        iVar26 = 0x28;
                        if (*pbVar41 != 0) {
                          iVar26 = 0;
                        }
LAB_00145a50:
                        (**(code **)(*param_1 + 0x550))(param_1,lVar40);
                      }
                      local_130[0] = '\0';
                      local_130[1] = '\0';
                      local_130[2] = '\0';
                      local_130[3] = '\0';
                      local_130[4] = '\0';
                      local_130[5] = '\0';
                      local_130[6] = '\0';
                      local_130[7] = '\0';
                      uStack_128 = 0;
                      local_120 = 0;
                      uStack_118 = 0;
                      local_110 = 0;
                      local_108 = 0;
                      local_100 = 0;
                      uStack_f8 = 0;
                      (**(code **)(*param_1 + 0xb8))(param_1,lVar40);
                    }
                    iVar11 = FUN_0014a9c8(param_1,lVar14,&DAT_0010f248);
                    iVar12 = FUN_0014a9c8(param_1,lVar14,&DAT_0010f270);
                    lVar40 = FUN_0014bc58(param_1,lVar14,&DAT_0010f528);
                    if (lVar40 == 0) {
                      (**(code **)(*param_1 + 0x88))(param_1);
LAB_00145ca8:
                      iVar27 = 0;
                    }
                    else {
                      lVar40 = (**(code **)(*param_1 + 0x488))(param_1,lVar14,lVar40);
                      if (lVar40 == 0) goto LAB_00145ca8;
                      lVar15 = 0;
                      iVar8 = 0x7d1ae261;
                      do {
                        iVar8 = iVar8 * 0x41c64e6d + 0x3039;
                        local_130[lVar15] =
                             (char)lVar15 * '\x11' + 0xadU ^ (&DAT_0010f1b8)[lVar15] ^
                             (byte)((uint)iVar8 >> 0x10);
                        lVar15 = lVar15 + 1;
                      } while (lVar15 != 0x13);
                      local_120._0_4_ = (uint)(uint3)local_120;
                      pbVar16 = (byte *)(**(code **)(*param_1 + 0x548))(param_1,lVar40,0);
                      if (pbVar16 == (byte *)0x0) {
                        iVar27 = 0;
                      }
                      else {
                        uVar44 = (uint)*pbVar16;
                        if (*pbVar16 == 0) {
                          pbVar41 = (byte *)local_130;
                        }
                        else {
                          pbVar41 = (byte *)local_130;
                          do {
                            pbVar16 = pbVar16 + 1;
                            bVar2 = *pbVar41;
                            if (bVar2 == 0) {
LAB_00145cb8:
                              iVar27 = 0;
                              goto LAB_00145cd4;
                            }
                            if (0xffffffe5 < uVar44 - 0x5b) {
                              uVar44 = uVar44 | 0x20;
                            }
                            uVar43 = (uint)bVar2;
                            if (0xffffffe5 < bVar2 - 0x5b) {
                              uVar43 = bVar2 | 0x20;
                            }
                            if (uVar44 != uVar43) goto LAB_00145cb8;
                            uVar44 = (uint)*pbVar16;
                            pbVar41 = pbVar41 + 1;
                          } while (uVar44 != 0);
                        }
                        iVar27 = 0x28;
                        if (*pbVar41 != 0) {
                          iVar27 = 0;
                        }
LAB_00145cd4:
                        (**(code **)(*param_1 + 0x550))(param_1,lVar40);
                      }
                      local_130[0] = '\0';
                      local_130[1] = '\0';
                      local_130[2] = '\0';
                      local_130[3] = '\0';
                      local_130[4] = '\0';
                      local_130[5] = '\0';
                      local_130[6] = '\0';
                      local_130[7] = '\0';
                      uStack_128 = 0;
                      local_120 = 0;
                      uStack_118 = 0;
                      local_110 = 0;
                      local_108 = 0;
                      local_100 = 0;
                      uStack_f8 = 0;
                      (**(code **)(*param_1 + 0xb8))(param_1,lVar40);
                    }
                    lVar40 = FUN_0014bc58(param_1,lVar14,&DAT_0010f528);
                    if (lVar40 == 0) {
                      (**(code **)(*param_1 + 0x88))(param_1);
LAB_00145f00:
                      iVar28 = 0;
                    }
                    else {
                      lVar40 = (**(code **)(*param_1 + 0x488))(param_1,lVar14,lVar40);
                      if (lVar40 == 0) goto LAB_00145f00;
                      lVar15 = 0;
                      iVar8 = 0x7d1ae160;
                      do {
                        iVar8 = iVar8 * 0x41c64e6d + 0x3039;
                        local_130[lVar15] =
                             (char)lVar15 * '\x11' + 0xaeU ^ (&DAT_0010ef18)[lVar15] ^
                             (byte)((uint)iVar8 >> 0x10);
                        lVar15 = lVar15 + 1;
                      } while (lVar15 != 0x12);
                      local_120._0_3_ = (uint3)(ushort)local_120;
                      pbVar16 = (byte *)(**(code **)(*param_1 + 0x548))(param_1,lVar40,0);
                      if (pbVar16 == (byte *)0x0) {
                        iVar28 = 0;
                      }
                      else {
                        uVar44 = (uint)*pbVar16;
                        if (*pbVar16 == 0) {
                          pbVar41 = (byte *)local_130;
                        }
                        else {
                          pbVar41 = (byte *)local_130;
                          do {
                            pbVar16 = pbVar16 + 1;
                            bVar2 = *pbVar41;
                            if (bVar2 == 0) {
LAB_00145f10:
                              iVar28 = 0;
                              goto LAB_00145f2c;
                            }
                            if (0xffffffe5 < uVar44 - 0x5b) {
                              uVar44 = uVar44 | 0x20;
                            }
                            uVar43 = (uint)bVar2;
                            if (0xffffffe5 < bVar2 - 0x5b) {
                              uVar43 = bVar2 | 0x20;
                            }
                            if (uVar44 != uVar43) goto LAB_00145f10;
                            uVar44 = (uint)*pbVar16;
                            pbVar41 = pbVar41 + 1;
                          } while (uVar44 != 0);
                        }
                        iVar28 = 0x28;
                        if (*pbVar41 != 0) {
                          iVar28 = 0;
                        }
LAB_00145f2c:
                        (**(code **)(*param_1 + 0x550))(param_1,lVar40);
                      }
                      local_130[0] = '\0';
                      local_130[1] = '\0';
                      local_130[2] = '\0';
                      local_130[3] = '\0';
                      local_130[4] = '\0';
                      local_130[5] = '\0';
                      local_130[6] = '\0';
                      local_130[7] = '\0';
                      uStack_128 = 0;
                      local_120 = 0;
                      uStack_118 = 0;
                      local_110 = 0;
                      local_108 = 0;
                      local_100 = 0;
                      uStack_f8 = 0;
                      (**(code **)(*param_1 + 0xb8))(param_1,lVar40);
                    }
                    lVar40 = FUN_0014bc58(param_1,lVar14,&DAT_0010f528);
                    if (lVar40 == 0) {
                      (**(code **)(*param_1 + 0x88))(param_1);
LAB_001460d8:
                      iVar29 = 0;
                    }
                    else {
                      lVar40 = (**(code **)(*param_1 + 0x488))(param_1,lVar14,lVar40);
                      if (lVar40 == 0) goto LAB_001460d8;
                      uVar13 = FUN_0014be7c(param_1,lVar40,&DAT_0010f298);
                      (**(code **)(*param_1 + 0xb8))(param_1,lVar40);
                      iVar29 = 0x28;
                      if ((uVar13 & 1) == 0) {
                        iVar29 = 0;
                      }
                    }
                    lVar40 = FUN_0014bc58(param_1,lVar14,&DAT_0010f528);
                    if (lVar40 == 0) {
                      (**(code **)(*param_1 + 0x88))(param_1);
LAB_001461e0:
                      iVar30 = 0;
                    }
                    else {
                      lVar40 = (**(code **)(*param_1 + 0x488))(param_1,lVar14,lVar40);
                      if (lVar40 == 0) goto LAB_001461e0;
                      lVar15 = 0;
                      iVar8 = 0x7d1ae762;
                      do {
                        iVar8 = iVar8 * 0x41c64e6d + 0x3039;
                        local_130[lVar15] =
                             (char)lVar15 * '\x11' + 0xa8U ^ (&DAT_0010ef78)[lVar15] ^
                             (byte)((uint)iVar8 >> 0x10);
                        lVar15 = lVar15 + 1;
                      } while (lVar15 != 0x10);
                      local_120 = local_120 & 0xffffffffffffff00;
                      pbVar16 = (byte *)(**(code **)(*param_1 + 0x548))(param_1,lVar40,0);
                      if (pbVar16 == (byte *)0x0) {
                        iVar30 = 0;
                      }
                      else {
                        uVar44 = (uint)*pbVar16;
                        if (*pbVar16 == 0) {
                          pbVar41 = (byte *)local_130;
                        }
                        else {
                          pbVar41 = (byte *)local_130;
                          do {
                            pbVar16 = pbVar16 + 1;
                            bVar2 = *pbVar41;
                            if (bVar2 == 0) {
LAB_001461f0:
                              iVar30 = 0;
                              goto LAB_0014620c;
                            }
                            if (0xffffffe5 < uVar44 - 0x5b) {
                              uVar44 = uVar44 | 0x20;
                            }
                            uVar43 = (uint)bVar2;
                            if (0xffffffe5 < bVar2 - 0x5b) {
                              uVar43 = bVar2 | 0x20;
                            }
                            if (uVar44 != uVar43) goto LAB_001461f0;
                            uVar44 = (uint)*pbVar16;
                            pbVar41 = pbVar41 + 1;
                          } while (uVar44 != 0);
                        }
                        iVar30 = 0x28;
                        if (*pbVar41 != 0) {
                          iVar30 = 0;
                        }
LAB_0014620c:
                        (**(code **)(*param_1 + 0x550))(param_1,lVar40);
                      }
                      local_130[0] = '\0';
                      local_130[1] = '\0';
                      local_130[2] = '\0';
                      local_130[3] = '\0';
                      local_130[4] = '\0';
                      local_130[5] = '\0';
                      local_130[6] = '\0';
                      local_130[7] = '\0';
                      uStack_128 = 0;
                      local_120 = 0;
                      uStack_118 = 0;
                      local_110 = 0;
                      local_108 = 0;
                      local_100 = 0;
                      uStack_f8 = 0;
                      (**(code **)(*param_1 + 0xb8))(param_1,lVar40);
                    }
                    lVar40 = FUN_0014c0e4(param_1,lVar14);
                    if (lVar40 == 0) {
                      (**(code **)(*param_1 + 0x88))(param_1);
LAB_001463b0:
                      iVar31 = 0;
                    }
                    else {
                      lVar40 = (**(code **)(*param_1 + 0x488))(param_1,lVar14,lVar40);
                      if (lVar40 == 0) goto LAB_001463b0;
                      uVar13 = FUN_0014b9f0(param_1,lVar40,&DAT_0010f208);
                      (**(code **)(*param_1 + 0xb8))(param_1,lVar40);
                      iVar31 = 0x28;
                      if ((uVar13 & 1) == 0) {
                        iVar31 = 0;
                      }
                    }
                    lVar40 = FUN_0014c0e4(param_1,lVar14);
                    if (lVar40 == 0) {
                      (**(code **)(*param_1 + 0x88))(param_1);
LAB_00146430:
                      iVar32 = 0;
                    }
                    else {
                      lVar40 = (**(code **)(*param_1 + 0x488))(param_1,lVar14,lVar40);
                      if (lVar40 == 0) goto LAB_00146430;
                      uVar13 = FUN_0014b9f0(param_1,lVar40,&DAT_0010f2b0);
                      (**(code **)(*param_1 + 0xb8))(param_1,lVar40);
                      iVar32 = 0x28;
                      if ((uVar13 & 1) == 0) {
                        iVar32 = 0;
                      }
                    }
                    lVar40 = FUN_0014c0e4(param_1,lVar14);
                    if (lVar40 == 0) {
                      (**(code **)(*param_1 + 0x88))(param_1);
LAB_001464b0:
                      iVar33 = 0;
                    }
                    else {
                      lVar40 = (**(code **)(*param_1 + 0x488))(param_1,lVar14,lVar40);
                      if (lVar40 == 0) goto LAB_001464b0;
                      uVar13 = FUN_0014b520(param_1,lVar40,&DAT_0010f1f8);
                      (**(code **)(*param_1 + 0xb8))(param_1,lVar40);
                      iVar33 = 0x28;
                      if ((uVar13 & 1) == 0) {
                        iVar33 = 0;
                      }
                    }
                    lVar40 = FUN_0014c0e4(param_1,lVar14);
                    if (lVar40 == 0) {
                      (**(code **)(*param_1 + 0x88))(param_1);
LAB_00146528:
                      iVar34 = 0;
                    }
                    else {
                      lVar40 = (**(code **)(*param_1 + 0x488))(param_1,lVar14,lVar40);
                      if (lVar40 == 0) goto LAB_00146528;
                      uVar13 = FUN_0014b32c(param_1,lVar40);
                      (**(code **)(*param_1 + 0xb8))(param_1,lVar40);
                      iVar34 = 0x28;
                      if ((uVar13 & 1) == 0) {
                        iVar34 = 0;
                      }
                    }
                    lVar40 = FUN_0014c2ac(param_1,lVar14);
                    if (lVar40 == 0) {
                      (**(code **)(*param_1 + 0x88))(param_1);
LAB_001465a8:
                      iVar35 = 0;
                    }
                    else {
                      lVar40 = (**(code **)(*param_1 + 0x488))(param_1,lVar14,lVar40);
                      if (lVar40 == 0) goto LAB_001465a8;
                      uVar13 = FUN_0014b788(param_1,lVar40,&DAT_0010f350);
                      (**(code **)(*param_1 + 0xb8))(param_1,lVar40);
                      iVar35 = 0x28;
                      if ((uVar13 & 1) == 0) {
                        iVar35 = 0;
                      }
                    }
                    lVar40 = FUN_0014c2ac(param_1,lVar14);
                    if (lVar40 == 0) {
                      (**(code **)(*param_1 + 0x88))(param_1);
LAB_00146628:
                      iVar36 = 0;
                    }
                    else {
                      lVar40 = (**(code **)(*param_1 + 0x488))(param_1,lVar14,lVar40);
                      if (lVar40 == 0) goto LAB_00146628;
                      uVar13 = FUN_0014be7c(param_1,lVar40,&DAT_0010f368);
                      (**(code **)(*param_1 + 0xb8))(param_1,lVar40);
                      iVar36 = 0x28;
                      if ((uVar13 & 1) == 0) {
                        iVar36 = 0;
                      }
                    }
                    lVar40 = FUN_0014c2ac(param_1,lVar14);
                    if (lVar40 == 0) {
                      (**(code **)(*param_1 + 0x88))(param_1);
LAB_0014670c:
                      iVar37 = 0;
                    }
                    else {
                      lVar40 = (**(code **)(*param_1 + 0x488))(param_1,lVar14,lVar40);
                      if (lVar40 == 0) goto LAB_0014670c;
                      local_130[0] = s_aosp_emugoogle_sgeneric_URER_0010eec0[0x10];
                      local_130[1] = s_aosp_emugoogle_sgeneric_URER_0010eec0[0x11];
                      local_130[2] = s_aosp_emugoogle_sgeneric_URER_0010eec0[0x12];
                      local_130[3] = s_aosp_emugoogle_sgeneric_URER_0010eec0[0x13];
                      local_130[4] = s_aosp_emugoogle_sgeneric_URER_0010eec0[0x14];
                      local_130[5] = s_aosp_emugoogle_sgeneric_URER_0010eec0[0x15];
                      local_130[6] = s_aosp_emugoogle_sgeneric_URER_0010eec0[0x16];
                      local_130[7] = s_aosp_emugoogle_sgeneric_URER_0010eec0[0x17];
                      uStack_128._0_6_ = CONCAT24(0x34,(int)DAT_0010edc8);
                      pbVar16 = (byte *)(**(code **)(*param_1 + 0x548))(param_1,lVar40,0);
                      if (pbVar16 == (byte *)0x0) {
                        iVar37 = 0;
                      }
                      else {
                        uVar44 = (uint)*pbVar16;
                        if (*pbVar16 == 0) {
LAB_00146714:
                          iVar37 = 0;
                        }
                        else {
                          pbVar41 = (byte *)local_130;
                          do {
                            pbVar16 = pbVar16 + 1;
                            bVar2 = *pbVar41;
                            if (bVar2 == 0) goto LAB_00146714;
                            if (0xffffffe5 < uVar44 - 0x5b) {
                              uVar44 = uVar44 | 0x20;
                            }
                            uVar43 = (uint)bVar2;
                            if (0xffffffe5 < bVar2 - 0x5b) {
                              uVar43 = bVar2 | 0x20;
                            }
                            if (uVar44 != uVar43) goto LAB_00146714;
                            uVar44 = (uint)*pbVar16;
                            pbVar41 = pbVar41 + 1;
                          } while (uVar44 != 0);
                          iVar37 = 0x28;
                          if (*pbVar41 != 0) {
                            iVar37 = 0;
                          }
                        }
                        (**(code **)(*param_1 + 0x550))(param_1,lVar40);
                      }
                      local_130[0] = '\0';
                      local_130[1] = '\0';
                      local_130[2] = '\0';
                      local_130[3] = '\0';
                      local_130[4] = '\0';
                      local_130[5] = '\0';
                      local_130[6] = '\0';
                      local_130[7] = '\0';
                      uStack_128 = 0;
                      local_120 = 0;
                      uStack_118 = 0;
                      local_110 = 0;
                      local_108 = 0;
                      local_100 = 0;
                      uStack_f8 = 0;
                      (**(code **)(*param_1 + 0xb8))(param_1,lVar40);
                    }
                    lVar40 = FUN_0014c2ac(param_1,lVar14);
                    if (lVar40 == 0) {
                      (**(code **)(*param_1 + 0x88))(param_1);
LAB_001468c4:
                      iVar38 = 0;
                    }
                    else {
                      lVar40 = (**(code **)(*param_1 + 0x488))(param_1,lVar14,lVar40);
                      if (lVar40 == 0) goto LAB_001468c4;
                      uVar13 = FUN_0014ae5c(param_1,lVar40,&DAT_0010f2e0);
                      (**(code **)(*param_1 + 0xb8))(param_1,lVar40);
                      iVar38 = 0x28;
                      if ((uVar13 & 1) == 0) {
                        iVar38 = 0;
                      }
                    }
                    lVar40 = FUN_0014bc58(param_1,lVar14,&DAT_0010f538);
                    if (lVar40 == 0) {
                      (**(code **)(*param_1 + 0x88))(param_1);
LAB_0014694c:
                      iVar39 = 0;
                    }
                    else {
                      lVar40 = (**(code **)(*param_1 + 0x488))(param_1,lVar14,lVar40);
                      if (lVar40 == 0) goto LAB_0014694c;
                      uVar13 = FUN_0014ae5c(param_1,lVar40,&DAT_0010f3a8);
                      (**(code **)(*param_1 + 0xb8))(param_1,lVar40);
                      iVar39 = 0x3c;
                      if ((uVar13 & 1) == 0) {
                        iVar39 = 0;
                      }
                    }
                    lVar40 = FUN_0014bc58(param_1,lVar14,&DAT_0010f538);
                    if (lVar40 == 0) {
                      (**(code **)(*param_1 + 0x88))(param_1);
LAB_001469d4:
                      iVar8 = 0;
                    }
                    else {
                      lVar40 = (**(code **)(*param_1 + 0x488))(param_1,lVar14,lVar40);
                      if (lVar40 == 0) goto LAB_001469d4;
                      uVar13 = FUN_0014b0c4(param_1,lVar40,&DAT_0010f3c0);
                      (**(code **)(*param_1 + 0xb8))(param_1,lVar40);
                      iVar8 = 0x3c;
                      if ((uVar13 & 1) == 0) {
                        iVar8 = 0;
                      }
                    }
                    iVar8 = iVar18 + iVar6 + iVar9 + iVar19 + iVar20 + iVar21 + iVar10 + iVar22 +
                            iVar23 + iVar24 + iVar25 + iVar26 + iVar11 + iVar12 + iVar27 + iVar28 +
                            iVar29 + iVar30 + iVar31 + iVar32 + iVar33 + iVar34 + iVar35 + iVar36 +
                            iVar37 + iVar38 + iVar39 + iVar8;
                  }
                  lVar40 = 0;
                  iVar6 = 0x7d1a22d1;
                  do {
                    iVar6 = iVar6 * 0x41c64e6d + 0x3039;
                    local_130[lVar40] =
                         (char)lVar40 * '\x11' + 0x6dU ^ (&DAT_0010efb8)[lVar40] ^
                         (byte)((uint)iVar6 >> 0x10);
                    lVar40 = lVar40 + 1;
                  } while (lVar40 != 0x10);
                  local_120 = local_120 & 0xffffffffffffff00;
                  lVar14 = (**(code **)(*param_1 + 0x30))(param_1,local_130);
                  lVar40 = 0;
                  do {
                    local_130[lVar40] = '\0';
                    lVar40 = lVar40 + 1;
                  } while (lVar40 != 0x80);
                  if (lVar14 == 0) {
                    lVar40 = *param_1;
LAB_00146cfc:
                    (**(code **)(lVar40 + 0x88))(param_1);
LAB_00146d08:
                    iVar6 = 0;
                  }
                  else {
                    lVar40 = 0;
                    iVar6 = 0x7d1a21d0;
                    local_a8._0_1_ = s_FINGERPRgetInstaclos_0010ee10[0];
                    local_a8._1_1_ = s_FINGERPRgetInstaclos_0010ee10[1];
                    local_a8._2_1_ = s_FINGERPRgetInstaclos_0010ee10[2];
                    local_a8._3_1_ = s_FINGERPRgetInstaclos_0010ee10[3];
                    local_a8._4_1_ = s_FINGERPRgetInstaclos_0010ee10[4];
                    local_a8._5_1_ = s_FINGERPRgetInstaclos_0010ee10[5];
                    local_a8._6_1_ = s_FINGERPRgetInstaclos_0010ee10[6];
                    local_a8._7_1_ = s_FINGERPRgetInstaclos_0010ee10[7];
                    local_a0 = (undefined4)DAT_0010eeb8;
                    do {
                      iVar6 = iVar6 * 0x41c64e6d + 0x3039;
                      local_130[lVar40] =
                           (char)lVar40 * '\x11' + 0x6eU ^ (&DAT_0010f018)[lVar40] ^
                           (byte)((uint)iVar6 >> 0x10);
                      lVar40 = lVar40 + 1;
                    } while (lVar40 != 0x12);
                    local_120._0_3_ = (uint3)(ushort)local_120;
                    lVar15 = (**(code **)(*param_1 + 0x480))(param_1,lVar14,&local_a8,local_130);
                    lVar40 = 0;
                    local_a8 = 0;
                    local_a0 = 0;
                    local_9c = 0;
                    local_9b = 0;
                    local_9a = 0;
                    local_99 = 0;
                    local_98 = 0;
                    local_97 = 0;
                    local_96 = 0;
                    local_95 = 0;
                    local_94 = 0;
                    local_93 = 0;
                    local_92 = 0;
                    local_91 = 0;
                    local_90 = 0;
                    local_8f = 0;
                    local_8e = 0;
                    local_8d = 0;
                    local_8c = 0;
                    local_8b = 0;
                    local_8a = 0;
                    local_89 = 0;
                    local_88 = 0;
                    local_87 = 0;
                    local_86 = 0;
                    local_85 = 0;
                    local_84 = 0;
                    local_83 = 0;
                    local_82 = 0;
                    local_81 = 0;
                    local_80 = 0;
                    local_7f = 0;
                    local_7e = 0;
                    local_7d = 0;
                    local_7c = 0;
                    local_7b = 0;
                    local_7a = 0;
                    local_79 = 0;
                    local_78 = 0;
                    local_77 = 0;
                    local_76 = 0;
                    local_75 = 0;
                    local_74 = 0;
                    local_73 = 0;
                    local_72 = 0;
                    local_71 = 0;
                    local_70 = 0;
                    local_6f = 0;
                    local_6e = 0;
                    local_6d = 0;
                    local_6c = 0;
                    local_6b = 0;
                    local_6a = 0;
                    local_69 = 0;
                    do {
                      local_130[lVar40] = '\0';
                      lVar40 = lVar40 + 1;
                    } while (lVar40 != 0x60);
                    lVar40 = *param_1;
                    if (lVar15 == 0) goto LAB_00146cfc;
                    lVar40 = (**(code **)(lVar40 + 0x488))(param_1,lVar14);
                    if (lVar40 == 0) goto LAB_00146d08;
                    iVar6 = 0x7d1ad170;
                    pcVar17 = (char *)(**(code **)(*param_1 + 0x548))(param_1,lVar40,0);
                    if (pcVar17 == (char *)0x0) {
LAB_00146e38:
                      pcVar17 = (char *)(**(code **)(*param_1 + 0x548))(param_1,lVar40,0);
                      if (pcVar17 != (char *)0x0) {
                        lVar14 = 0;
                        do {
                          iVar6 = iVar6 * 0x41c64e6d + 0x3039;
                          local_130[lVar14] =
                               (char)lVar14 * '\x11' + 0x9eU ^ (&DAT_0010f548)[lVar14] ^
                               (byte)((uint)iVar6 >> 0x10);
                          lVar14 = lVar14 + 1;
                        } while (lVar14 != 0xe);
                        uStack_128._0_7_ = (uint7)(uint6)uStack_128;
                        if ((local_130[0] == 0) ||
                           (lVar14 = __strlen_chk(local_130,0x40), pcVar42 = pcVar17,
                           *pcVar17 == '\0')) {
                          bVar5 = false;
                        }
                        else {
                          do {
                            lVar15 = 0;
                            do {
                              if (lVar14 == lVar15) {
                                bVar5 = true;
                                goto LAB_00146f18;
                              }
                              bVar2 = pcVar42[lVar15];
                              bVar3 = local_130[lVar15];
                              lVar15 = lVar15 + 1;
                              uVar44 = bVar2 | 0x20;
                              if (0x19 < bVar2 - 0x41) {
                                uVar44 = (uint)bVar2;
                              }
                              uVar43 = bVar3 | 0x20;
                              if (0x19 < bVar3 - 0x41) {
                                uVar43 = (uint)bVar3;
                              }
                            } while (uVar44 == uVar43);
                            pcVar42 = pcVar42 + 1;
                            bVar5 = false;
                          } while (*pcVar42 != '\0');
                        }
LAB_00146f18:
                        local_130[0] = '\0';
                        local_130[1] = '\0';
                        local_130[2] = '\0';
                        local_130[3] = '\0';
                        local_130[4] = '\0';
                        local_130[5] = '\0';
                        local_130[6] = '\0';
                        local_130[7] = '\0';
                        uStack_128 = 0;
                        local_120 = 0;
                        uStack_118 = 0;
                        local_110 = 0;
                        local_108 = 0;
                        local_100 = 0;
                        uStack_f8 = 0;
                        (**(code **)(*param_1 + 0x550))(param_1,lVar40,pcVar17);
                        if (bVar5) goto LAB_001473d4;
                      }
                      pcVar17 = (char *)(**(code **)(*param_1 + 0x548))(param_1,lVar40,0);
                      if (pcVar17 != (char *)0x0) {
                        local_130[0] = s_sdk_gphoandroid_init_0010ed70[0];
                        local_130[1] = s_sdk_gphoandroid_init_0010ed70[1];
                        local_130[2] = s_sdk_gphoandroid_init_0010ed70[2];
                        local_130[3] = s_sdk_gphoandroid_init_0010ed70[3];
                        local_130[4] = s_sdk_gphoandroid_init_0010ed70[4];
                        local_130[5] = s_sdk_gphoandroid_init_0010ed70[5];
                        local_130[6] = s_sdk_gphoandroid_init_0010ed70[6];
                        local_130[7] = s_sdk_gphoandroid_init_0010ed70[7];
                        uStack_128 = CONCAT53(uStack_128._3_5_,0x656e);
                        lVar14 = __strlen_chk(local_130,0x40);
                        cVar1 = *pcVar17;
                        pcVar42 = pcVar17;
                        while (cVar1 != '\0') {
                          lVar15 = 0;
                          do {
                            if (lVar14 == lVar15) {
                              bVar5 = true;
                              goto LAB_001470dc;
                            }
                            bVar2 = pcVar42[lVar15];
                            bVar3 = local_130[lVar15];
                            lVar15 = lVar15 + 1;
                            uVar44 = bVar2 | 0x20;
                            if (0x19 < bVar2 - 0x41) {
                              uVar44 = (uint)bVar2;
                            }
                            uVar43 = bVar3 | 0x20;
                            if (0x19 < bVar3 - 0x41) {
                              uVar43 = (uint)bVar3;
                            }
                          } while (uVar44 == uVar43);
                          pcVar42 = pcVar42 + 1;
                          cVar1 = *pcVar42;
                        }
                        bVar5 = false;
LAB_001470dc:
                        local_130[0] = '\0';
                        local_130[1] = '\0';
                        local_130[2] = '\0';
                        local_130[3] = '\0';
                        local_130[4] = '\0';
                        local_130[5] = '\0';
                        local_130[6] = '\0';
                        local_130[7] = '\0';
                        uStack_128 = 0;
                        local_120 = 0;
                        uStack_118 = 0;
                        local_110 = 0;
                        local_108 = 0;
                        local_100 = 0;
                        uStack_f8 = 0;
                        (**(code **)(*param_1 + 0x550))(param_1,lVar40,pcVar17);
                        if (bVar5) goto LAB_001473d4;
                      }
                      pcVar17 = (char *)(**(code **)(*param_1 + 0x548))(param_1,lVar40,0);
                      if (pcVar17 != (char *)0x0) {
                        uStack_128 = CONCAT26(uStack_128._6_2_,0x7200000000);
                        local_130[0] = s_aosp_emugoogle_sgeneric_URER_0010eec0[0];
                        local_130[1] = s_aosp_emugoogle_sgeneric_URER_0010eec0[1];
                        local_130[2] = s_aosp_emugoogle_sgeneric_URER_0010eec0[2];
                        local_130[3] = s_aosp_emugoogle_sgeneric_URER_0010eec0[3];
                        local_130[4] = s_aosp_emugoogle_sgeneric_URER_0010eec0[4];
                        local_130[5] = s_aosp_emugoogle_sgeneric_URER_0010eec0[5];
                        local_130[6] = s_aosp_emugoogle_sgeneric_URER_0010eec0[6];
                        local_130[7] = s_aosp_emugoogle_sgeneric_URER_0010eec0[7];
                        uStack_128 = CONCAT44(uStack_128._4_4_,(int)DAT_0010ed50);
                        lVar14 = __strlen_chk(local_130,0x40);
                        cVar1 = *pcVar17;
                        pcVar42 = pcVar17;
                        while (cVar1 != '\0') {
                          lVar15 = 0;
                          do {
                            if (lVar14 == lVar15) {
                              bVar5 = true;
                              goto LAB_001472a8;
                            }
                            bVar2 = pcVar42[lVar15];
                            bVar3 = local_130[lVar15];
                            lVar15 = lVar15 + 1;
                            uVar44 = bVar2 | 0x20;
                            if (0x19 < bVar2 - 0x41) {
                              uVar44 = (uint)bVar2;
                            }
                            uVar43 = bVar3 | 0x20;
                            if (0x19 < bVar3 - 0x41) {
                              uVar43 = (uint)bVar3;
                            }
                          } while (uVar44 == uVar43);
                          pcVar42 = pcVar42 + 1;
                          cVar1 = *pcVar42;
                        }
                        bVar5 = false;
LAB_001472a8:
                        local_130[0] = '\0';
                        local_130[1] = '\0';
                        local_130[2] = '\0';
                        local_130[3] = '\0';
                        local_130[4] = '\0';
                        local_130[5] = '\0';
                        local_130[6] = '\0';
                        local_130[7] = '\0';
                        uStack_128 = 0;
                        local_120 = 0;
                        uStack_118 = 0;
                        local_110 = 0;
                        local_108 = 0;
                        local_100 = 0;
                        uStack_f8 = 0;
                        (**(code **)(*param_1 + 0x550))(param_1,lVar40,pcVar17);
                        if (bVar5) goto LAB_001473d4;
                      }
                      uVar13 = FUN_0014c480(param_1,lVar40);
                      if ((uVar13 & 1) != 0) goto LAB_001473d4;
                      iVar6 = 0;
                    }
                    else {
                      lVar14 = 0;
                      iVar18 = 0x7d1ad271;
                      do {
                        iVar18 = iVar18 * 0x41c64e6d + 0x3039;
                        local_130[lVar14] =
                             (char)lVar14 * '\x11' + 0x9dU ^ (&DAT_0010f038)[lVar14] ^
                             (byte)((uint)iVar18 >> 0x10);
                        lVar14 = lVar14 + 1;
                      } while (lVar14 != 0x13);
                      local_120._0_4_ = (uint)(uint3)local_120;
                      if ((local_130[0] == 0) ||
                         (lVar14 = __strlen_chk(local_130,0x40), pcVar42 = pcVar17, *pcVar17 == '\0'
                         )) {
                        bVar5 = false;
                      }
                      else {
                        do {
                          lVar15 = 0;
                          do {
                            if (lVar14 == lVar15) {
                              bVar5 = true;
                              goto LAB_00146d1c;
                            }
                            bVar2 = pcVar42[lVar15];
                            bVar3 = local_130[lVar15];
                            lVar15 = lVar15 + 1;
                            uVar44 = bVar2 | 0x20;
                            if (0x19 < bVar2 - 0x41) {
                              uVar44 = (uint)bVar2;
                            }
                            uVar43 = bVar3 | 0x20;
                            if (0x19 < bVar3 - 0x41) {
                              uVar43 = (uint)bVar3;
                            }
                          } while (uVar44 == uVar43);
                          pcVar42 = pcVar42 + 1;
                          bVar5 = false;
                        } while (*pcVar42 != '\0');
                      }
LAB_00146d1c:
                      local_130[0] = '\0';
                      local_130[1] = '\0';
                      local_130[2] = '\0';
                      local_130[3] = '\0';
                      local_130[4] = '\0';
                      local_130[5] = '\0';
                      local_130[6] = '\0';
                      local_130[7] = '\0';
                      uStack_128 = 0;
                      local_120 = 0;
                      uStack_118 = 0;
                      local_110 = 0;
                      local_108 = 0;
                      local_100 = 0;
                      uStack_f8 = 0;
                      (**(code **)(*param_1 + 0x550))(param_1,lVar40,pcVar17);
                      if (!bVar5) goto LAB_00146e38;
LAB_001473d4:
                      iVar6 = 0x23;
                    }
                    (**(code **)(*param_1 + 0xb8))(param_1,lVar40);
                  }
                  iVar6 = iVar8 + iVar7 + iVar6;
                  goto LAB_00143230;
                }
              }
            }
          }
        }
      }
    }
  }
  iVar6 = 100;
LAB_00143230:
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar6);
}


