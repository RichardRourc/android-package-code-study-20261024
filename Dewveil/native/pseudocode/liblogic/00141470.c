// Ghidra pseudocode. Not original C/C++ source.
// Program: liblogic.so
// Executable SHA256: df2688b342d2fdd45fbfbc82e905546e287409caaacad6ba5220641e328a1a21
// Entry: 00141470; body: [[00141470, 00142caf] [00142ce0, 00142ce3]]

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 JNI_OnLoad(long *param_1,undefined8 param_2)

{
  long lVar1;
  byte bVar2;
  uint uVar3;
  long *plVar4;
  char acVar5 [8];
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  void *__s;
  undefined8 uVar18;
  code *pcVar19;
  long lVar20;
  byte bVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  undefined4 uVar25;
  long *local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined1 local_174;
  undefined1 local_173;
  undefined1 local_172;
  undefined1 local_171;
  byte local_170 [144];
  undefined8 local_e0;
  uint local_d8;
  undefined2 local_d4;
  undefined1 local_d2;
  undefined1 local_d1;
  undefined1 local_d0;
  undefined1 local_cf;
  undefined1 local_ce;
  undefined1 local_cd;
  undefined1 local_cc;
  undefined1 local_cb;
  undefined1 local_ca;
  undefined1 local_c9;
  undefined1 local_c8;
  undefined1 local_c7;
  undefined1 local_c6;
  undefined1 local_c5;
  undefined1 local_c4;
  undefined1 local_c3;
  undefined1 local_c2;
  undefined1 local_c1;
  undefined1 local_c0;
  undefined1 local_bf;
  undefined1 local_be;
  undefined1 local_bd;
  undefined1 local_bc;
  undefined1 local_bb;
  undefined1 local_ba;
  undefined1 local_b9;
  undefined1 local_b8;
  undefined1 local_b7;
  undefined1 local_b6;
  undefined1 local_b5;
  undefined1 local_b4;
  undefined1 local_b3;
  undefined1 local_b2;
  undefined1 local_b1;
  undefined1 local_b0;
  undefined1 local_af;
  undefined1 local_ae;
  undefined1 local_ad;
  undefined1 local_ac;
  undefined1 local_ab;
  undefined1 local_aa;
  undefined1 local_a9;
  undefined1 local_a8;
  undefined1 local_a7;
  undefined1 local_a6;
  undefined1 local_a5;
  undefined1 local_a4;
  undefined1 local_a3;
  undefined1 local_a2;
  undefined1 local_a1;
  long local_80;
  
  lVar1 = tpidr_el0;
  local_80 = *(long *)(lVar1 + 0x28);
  uVar9 = 0x10006;
  local_188 = (long *)0x0;
  iVar7 = (**(code **)(*param_1 + 0x30))(param_1,&local_188,0x10006);
  if (iVar7 == 0) {
    iVar7 = FUN_00142ce4(local_188);
    plVar4 = local_188;
    if (0x3b < iVar7) goto LAB_001414d4;
    iVar23 = 0x7d1a80dc;
    lVar20 = 0;
    iVar7 = 0x7d1a885b;
    do {
      iVar7 = iVar7 * 0x41c64e6d + 0x3039;
      *(byte *)((long)&local_180 + lVar20) =
           (char)lVar20 * '\x11' - 0x39U ^ (&DAT_00136570)[lVar20] ^ (byte)((uint)iVar7 >> 0x10);
      lVar20 = lVar20 + 1;
    } while (lVar20 != 0x1d);
    local_170[0xd] = 0;
    lVar10 = (**(code **)(*local_188 + 0x30))(local_188,&local_180);
    lVar20 = 0;
    do {
      *(undefined1 *)((long)&local_180 + lVar20) = 0;
      lVar20 = lVar20 + 1;
    } while (lVar20 != 0x80);
    if (lVar10 == 0) {
      lVar20 = *plVar4;
    }
    else {
      iVar24 = 0x7d1ae2fe;
      lVar20 = 0;
      iVar7 = 0x7d1aee2c;
      local_d8 = CONCAT13(local_d8._3_1_,0x7974);
      local_e0._0_1_ = s_m_activible_0010ede0[0];
      local_e0._1_1_ = s_m_activible_0010ede0[1];
      local_e0._2_1_ = s_m_activible_0010ede0[2];
      local_e0._3_1_ = s_m_activible_0010ede0[3];
      local_e0._4_1_ = s_m_activible_0010ede0[4];
      local_e0._5_1_ = s_m_activible_0010ede0[5];
      local_e0._6_1_ = s_m_activible_0010ede0[6];
      local_e0._7_1_ = s_m_activible_0010ede0[7];
      do {
        iVar7 = iVar7 * 0x41c64e6d + 0x3039;
        *(byte *)((long)&local_180 + lVar20) =
             (char)lVar20 * '\x11' + 0xa1U ^ (&DAT_00136598)[lVar20] ^ (byte)((uint)iVar7 >> 0x10);
        lVar20 = lVar20 + 1;
      } while (lVar20 != 0x1f);
      local_170[0xf] = 0;
      lVar11 = (**(code **)(*plVar4 + 0x480))(plVar4,lVar10,&local_e0,&local_180);
      lVar20 = 0;
      local_e0._0_1_ = '\0';
      local_e0._1_1_ = '\0';
      local_e0._2_1_ = '\0';
      local_e0._3_1_ = '\0';
      local_e0._4_1_ = '\0';
      local_e0._5_1_ = '\0';
      local_e0._6_1_ = '\0';
      local_e0._7_1_ = '\0';
      local_d8 = 0;
      local_d4 = 0;
      local_d2 = 0;
      local_d1 = 0;
      local_d0 = 0;
      local_cf = 0;
      local_ce = 0;
      local_cd = 0;
      local_cc = 0;
      local_cb = 0;
      local_ca = 0;
      local_c9 = 0;
      local_c8 = 0;
      local_c7 = 0;
      local_c6 = 0;
      local_c5 = 0;
      local_c4 = 0;
      local_c3 = 0;
      local_c2 = 0;
      local_c1 = 0;
      local_c0 = 0;
      local_bf = 0;
      local_be = 0;
      local_bd = 0;
      local_bc = 0;
      local_bb = 0;
      local_ba = 0;
      local_b9 = 0;
      local_b8 = 0;
      local_b7 = 0;
      local_b6 = 0;
      local_b5 = 0;
      local_b4 = 0;
      local_b3 = 0;
      local_b2 = 0;
      local_b1 = 0;
      local_b0 = 0;
      local_af = 0;
      local_ae = 0;
      local_ad = 0;
      local_ac = 0;
      local_ab = 0;
      local_aa = 0;
      local_a9 = 0;
      local_a8 = 0;
      local_a7 = 0;
      local_a6 = 0;
      local_a5 = 0;
      local_a4 = 0;
      local_a3 = 0;
      local_a2 = 0;
      local_a1 = 0;
      do {
        *(undefined1 *)((long)&local_180 + lVar20) = 0;
        lVar20 = lVar20 + 1;
      } while (lVar20 != 0x60);
      lVar20 = *plVar4;
      if (lVar11 != 0) {
        lVar20 = (**(code **)(lVar20 + 0x488))(plVar4,lVar10);
        if (lVar20 == 0) goto LAB_001414d0;
        lVar10 = 0;
        iVar7 = 0x7d1a6573;
        do {
          iVar7 = iVar7 * 0x41c64e6d + 0x3039;
          *(byte *)((long)&local_180 + lVar10) =
               (char)lVar10 * '\x11' + 0x2aU ^ (&DAT_001365c8)[lVar10] ^ (byte)((uint)iVar7 >> 0x10)
          ;
          lVar10 = lVar10 + 1;
        } while (lVar10 != 0x17);
        local_170[7] = 0;
        uVar12 = (**(code **)(*plVar4 + 0x30))(plVar4,&local_180);
        lVar10 = 0;
        do {
          *(undefined1 *)((long)&local_180 + lVar10) = 0;
          lVar10 = lVar10 + 1;
        } while (lVar10 != 0x80);
        iVar22 = 0x7d1a3c00;
        lVar10 = 0;
        iVar7 = 0x7d1a466a;
        local_e0._0_1_ = s__data_bigetFiles__BII_V_0010eea0[8];
        local_e0._1_1_ = s__data_bigetFiles__BII_V_0010eea0[9];
        local_e0._2_1_ = s__data_bigetFiles__BII_V_0010eea0[10];
        local_e0._3_1_ = s__data_bigetFiles__BII_V_0010eea0[0xb];
        local_e0._4_1_ = s__data_bigetFiles__BII_V_0010eea0[0xc];
        local_e0._5_1_ = s__data_bigetFiles__BII_V_0010eea0[0xd];
        local_e0._6_1_ = s__data_bigetFiles__BII_V_0010eea0[0xe];
        local_e0._7_1_ = s__data_bigetFiles__BII_V_0010eea0[0xf];
        local_d8 = (uint)DAT_0010ed90;
        do {
          iVar7 = iVar7 * 0x41c64e6d + 0x3039;
          *(byte *)((long)&local_180 + lVar10) =
               (char)lVar10 * '\x11' + 9U ^ (&DAT_0010f158)[lVar10] ^ (byte)((uint)iVar7 >> 0x10);
          lVar10 = lVar10 + 1;
        } while (lVar10 != 0x10);
        local_170[0] = 0;
        uVar12 = (**(code **)(*plVar4 + 0x108))(plVar4,uVar12,&local_e0,&local_180);
        lVar10 = 0;
        do {
          *(undefined1 *)((long)&local_e0 + lVar10) = 0;
          lVar10 = lVar10 + 1;
        } while (lVar10 != 0x60);
        lVar10 = 0;
        do {
          *(undefined1 *)((long)&local_180 + lVar10) = 0;
          lVar10 = lVar10 + 1;
        } while (lVar10 != 0xa0);
        uVar13 = FUN_0014c694(plVar4,lVar20,uVar12);
        uVar12 = s_java_io_nce_0010ed60._0_8_;
        local_174 = 0;
        local_180._0_1_ = s_java_io_nce_0010ed60[0];
        local_180._1_1_ = s_java_io_nce_0010ed60[1];
        local_180._2_1_ = s_java_io_nce_0010ed60[2];
        local_180._3_1_ = s_java_io_nce_0010ed60[3];
        local_180._4_1_ = s_java_io_nce_0010ed60[4];
        local_180._5_1_ = s_java_io_nce_0010ed60[5];
        local_180._6_1_ = s_java_io_nce_0010ed60[6];
        local_180._7_1_ = s_java_io_nce_0010ed60[7];
        uVar9 = (undefined4)ram0x0010ed48;
        local_178 = uVar9;
        uVar14 = (**(code **)(*plVar4 + 0x30))(plVar4,&local_180);
        lVar20 = 0;
        do {
          *(undefined1 *)((long)&local_180 + lVar20) = 0;
          lVar20 = lVar20 + 1;
        } while (lVar20 != 0x80);
        lVar20 = 0;
        iVar7 = 0x7d1a5468;
        do {
          iVar7 = iVar7 * 0x41c64e6d + 0x3039;
          *(byte *)((long)&local_e0 + lVar20) =
               (char)lVar20 * '\x11' + 0x1bU ^ (&DAT_0010f0d8)[lVar20] ^ (byte)((uint)iVar7 >> 0x10)
          ;
          lVar20 = lVar20 + 1;
        } while (lVar20 != 0xf);
        lVar20 = 0;
        iVar7 = 0x7d1aa967;
        local_d1 = 0;
        do {
          iVar7 = iVar7 * 0x41c64e6d + 0x3039;
          *(byte *)((long)&local_180 + lVar20) =
               (char)lVar20 * '\x11' - 0x1aU ^ (&DAT_0010f098)[lVar20] ^ (byte)((uint)iVar7 >> 0x10)
          ;
          lVar20 = lVar20 + 1;
        } while (lVar20 != 0x14);
        local_170[4] = 0;
        uVar14 = (**(code **)(*plVar4 + 0x108))(plVar4,uVar14,&local_e0,&local_180);
        lVar20 = 0;
        do {
          *(undefined1 *)((long)&local_e0 + lVar20) = 0;
          lVar20 = lVar20 + 1;
        } while (lVar20 != 0x60);
        lVar20 = 0;
        do {
          *(undefined1 *)((long)&local_180 + lVar20) = 0;
          lVar20 = lVar20 + 1;
        } while (lVar20 != 0xa0);
        uVar13 = FUN_0014c694(plVar4,uVar13,uVar14);
        lVar20 = 0;
        iVar7 = 0x7d1aed63;
        do {
          iVar7 = iVar7 * 0x41c64e6d + 0x3039;
          *(byte *)((long)&local_180 + lVar20) =
               (char)lVar20 * '\x11' + 0xa2U ^ (&DAT_0010ef58)[lVar20] ^ (byte)((uint)iVar7 >> 0x10)
          ;
          lVar20 = lVar20 + 1;
        } while (lVar20 != 0x16);
        local_170[6] = 0;
        uVar14 = (**(code **)(*plVar4 + 0x30))(plVar4,&local_180);
        lVar20 = 0;
        do {
          *(undefined1 *)((long)&local_180 + lVar20) = 0;
          lVar20 = lVar20 + 1;
        } while (lVar20 != 0x80);
        lVar20 = 0;
        iVar7 = 0x7d1a1226;
        local_e0 = (char  [8])CONCAT17(local_e0._7_1_,0x3e7400000000);
        uVar25 = (undefined4)DAT_0010edd0;
        local_e0 = (char  [8])CONCAT44(local_e0._4_4_,uVar25);
        do {
          iVar7 = iVar7 * 0x41c64e6d + 0x3039;
          *(byte *)((long)&local_180 + lVar20) =
               (char)lVar20 * '\x11' + 0x5dU ^ (&DAT_0010efd8)[lVar20] ^ (byte)((uint)iVar7 >> 0x10)
          ;
          lVar20 = lVar20 + 1;
        } while (lVar20 != 0x15);
        local_170[5] = 0;
        uVar15 = (**(code **)(*plVar4 + 0x108))(plVar4,uVar14,&local_e0,&local_180);
        lVar20 = 0;
        do {
          *(undefined1 *)((long)&local_e0 + lVar20) = 0;
          lVar20 = lVar20 + 1;
        } while (lVar20 != 0x60);
        lVar20 = 0;
        do {
          *(undefined1 *)((long)&local_180 + lVar20) = 0;
          lVar20 = lVar20 + 1;
        } while (lVar20 != 0xa0);
        uVar15 = FUN_0014c730(plVar4,uVar14,uVar15,uVar13);
        lVar20 = 0;
        iVar7 = 0x7d1a8b61;
        local_e0 = (char  [8])CONCAT17(local_e0._7_1_,0x646e00000000);
        local_e0 = (char  [8])CONCAT44(local_e0._4_4_,(int)ram0x0010ee58);
        do {
          iVar7 = iVar7 * 0x41c64e6d + 0x3039;
          *(byte *)((long)&local_180 + lVar20) =
               (char)lVar20 * '\x11' - 0x3cU ^ (&DAT_001365f0)[lVar20] ^ (byte)((uint)iVar7 >> 0x10)
          ;
          lVar20 = lVar20 + 1;
        } while (lVar20 != 0x2c);
        local_170[0x1c] = 0;
        uVar16 = (**(code **)(*plVar4 + 0x108))(plVar4,uVar14,&local_e0,&local_180);
        lVar20 = 0;
        do {
          *(undefined1 *)((long)&local_e0 + lVar20) = 0;
          lVar20 = lVar20 + 1;
        } while (lVar20 != 0x60);
        lVar20 = 0;
        do {
          *(undefined1 *)((long)&local_180 + lVar20) = 0;
          lVar20 = lVar20 + 1;
        } while (lVar20 != 0xa0);
        lVar20 = 0;
        iVar7 = 0x7d1ac0b1;
        do {
          iVar7 = iVar7 * 0x41c64e6d + 0x3039;
          *(byte *)((long)&local_180 + lVar20) =
               (char)lVar20 * '\x11' + 0x8fU ^ (&DAT_0010f078)[lVar20] ^ (byte)((uint)iVar7 >> 0x10)
          ;
          lVar20 = lVar20 + 1;
        } while (lVar20 != 0x11);
        local_170[1] = 0;
        uVar17 = (**(code **)(*plVar4 + 0x538))(plVar4,&local_180);
        lVar20 = 0;
        do {
          *(undefined1 *)((long)&local_180 + lVar20) = 0;
          lVar20 = lVar20 + 1;
        } while (lVar20 != 0x80);
        uVar15 = FUN_0014c694(plVar4,uVar15,uVar16,uVar17);
        (**(code **)(*plVar4 + 0xb8))(plVar4,uVar17);
        lVar20 = 0;
        iVar7 = 0x7d1aa967;
        local_d8 = local_d8 & 0xffffff00;
        local_e0._0_1_ = s_toString___B_0010ee00[0];
        local_e0._1_1_ = s_toString___B_0010ee00[1];
        local_e0._2_1_ = s_toString___B_0010ee00[2];
        local_e0._3_1_ = s_toString___B_0010ee00[3];
        local_e0._4_1_ = s_toString___B_0010ee00[4];
        local_e0._5_1_ = s_toString___B_0010ee00[5];
        local_e0._6_1_ = s_toString___B_0010ee00[6];
        local_e0._7_1_ = s_toString___B_0010ee00[7];
        do {
          iVar7 = iVar7 * 0x41c64e6d + 0x3039;
          *(byte *)((long)&local_180 + lVar20) =
               (char)lVar20 * '\x11' - 0x1aU ^ (&DAT_0010f098)[lVar20] ^ (byte)((uint)iVar7 >> 0x10)
          ;
          lVar20 = lVar20 + 1;
        } while (lVar20 != 0x14);
        local_170[4] = 0;
        uVar14 = (**(code **)(*plVar4 + 0x108))(plVar4,uVar14,&local_e0,&local_180);
        lVar20 = 0;
        do {
          *(undefined1 *)((long)&local_e0 + lVar20) = 0;
          lVar20 = lVar20 + 1;
        } while (lVar20 != 0x60);
        lVar20 = 0;
        do {
          *(undefined1 *)((long)&local_180 + lVar20) = 0;
          lVar20 = lVar20 + 1;
        } while (lVar20 != 0xa0);
        uVar14 = FUN_0014c694(plVar4,uVar15,uVar14);
        (**(code **)(*plVar4 + 0xb8))(plVar4,uVar13);
        __s = operator_new(0x27010);
        memset(__s,0,0x27010);
        lVar20 = 0;
        bVar21 = 0xd4;
        iVar7 = 0x7d1a9b0e;
        do {
          iVar7 = iVar7 * 0x41c64e6d + 0x3039;
          bVar2 = bVar21 ^ (byte)((uint)iVar7 >> 0x10);
          bVar21 = bVar21 + 0x11;
          *(byte *)((long)__s + lVar20) = (&DAT_0010f560)[lVar20] ^ bVar2;
          lVar20 = lVar20 + 1;
        } while (lVar20 != 0x27010);
        lVar20 = 0;
        do {
          iVar24 = iVar24 * 0x41c64e6d + 0x3039;
          *(byte *)((long)&local_180 + lVar20) =
               (char)lVar20 * '\x11' + 0xadU ^ (&DAT_0010f138)[lVar20] ^
               (byte)((uint)iVar24 >> 0x10);
          lVar20 = lVar20 + 1;
        } while (lVar20 != 0x13);
        local_170[3] = 0;
        uVar13 = (**(code **)(*plVar4 + 0x30))(plVar4,&local_180);
        lVar20 = 0;
        do {
          *(undefined1 *)((long)&local_180 + lVar20) = 0;
          lVar20 = lVar20 + 1;
        } while (lVar20 != 0x80);
        lVar20 = 0;
        local_e0._0_1_ = s_FINGERPRgetInstaclos_0010ee10[8];
        local_e0._1_1_ = s_FINGERPRgetInstaclos_0010ee10[9];
        local_e0._2_1_ = s_FINGERPRgetInstaclos_0010ee10[10];
        local_e0._3_1_ = s_FINGERPRgetInstaclos_0010ee10[0xb];
        local_e0._4_1_ = s_FINGERPRgetInstaclos_0010ee10[0xc];
        local_e0._5_1_ = s_FINGERPRgetInstaclos_0010ee10[0xd];
        local_e0._6_1_ = s_FINGERPRgetInstaclos_0010ee10[0xe];
        local_e0._7_1_ = s_FINGERPRgetInstaclos_0010ee10[0xf];
        local_d8 = (uint)ram0x0010ed68;
        do {
          iVar23 = iVar23 * 0x41c64e6d + 0x3039;
          *(byte *)((long)&local_180 + lVar20) =
               (char)lVar20 * '\x11' - 0x31U ^ (&DAT_00136628)[lVar20] ^
               (byte)((uint)iVar23 >> 0x10);
          lVar20 = lVar20 + 1;
        } while (lVar20 != 0x29);
        local_170[0x19] = 0;
        uVar15 = (**(code **)(*plVar4 + 0x388))(plVar4,uVar13,&local_e0,&local_180);
        lVar20 = 0;
        do {
          *(undefined1 *)((long)&local_e0 + lVar20) = 0;
          lVar20 = lVar20 + 1;
        } while (lVar20 != 0x60);
        lVar20 = 0;
        do {
          *(undefined1 *)((long)&local_180 + lVar20) = 0;
          lVar20 = lVar20 + 1;
        } while (lVar20 != 0xa0);
        lVar20 = 0;
        iVar7 = 0x7d1a57a1;
        do {
          iVar7 = iVar7 * 0x41c64e6d + 0x3039;
          *(byte *)((long)&local_180 + lVar20) =
               (char)lVar20 * '\x11' + 0x18U ^ (&DAT_0010f1d8)[lVar20] ^ (byte)((uint)iVar7 >> 0x10)
          ;
          lVar20 = lVar20 + 1;
        } while (lVar20 != 0x14);
        local_170[4] = 0;
        uVar16 = (**(code **)(*plVar4 + 0x538))(plVar4,&local_180);
        lVar20 = 0;
        do {
          *(undefined1 *)((long)&local_180 + lVar20) = 0;
          lVar20 = lVar20 + 1;
        } while (lVar20 != 0x80);
        lVar20 = FUN_0014c7cc(plVar4,uVar13,uVar15,uVar16);
        (**(code **)(*plVar4 + 0xb8))(plVar4,uVar16);
        if ((lVar20 == 0) || (cVar6 = (**(code **)(*plVar4 + 0x720))(plVar4), cVar6 != '\0')) {
LAB_00141f7c:
          (**(code **)(*plVar4 + 0x88))(plVar4);
LAB_00141f8c:
          lVar10 = 0;
        }
        else {
          lVar10 = 0;
          bVar21 = 0x3c;
          iVar7 = 0x7d1a73c3;
          do {
            iVar7 = iVar7 * 0x41c64e6d + 0x3039;
            bVar2 = bVar21 ^ (byte)((uint)iVar7 >> 0x10);
            bVar21 = bVar21 + 0x11;
            *(byte *)((long)&local_180 + lVar10) = (&DAT_00136660)[lVar10] ^ bVar2;
            lVar10 = lVar10 + 1;
          } while (lVar10 != 0x10);
          bVar21 = 0x5e;
          lVar10 = 0x10;
          iVar7 = 0x7d1a11b5;
          do {
            iVar7 = iVar7 * 0x41c64e6d + 0x3039;
            bVar2 = bVar21 ^ (byte)((uint)iVar7 >> 0x10);
            bVar21 = bVar21 + 0x11;
            *(byte *)((long)&local_180 + lVar10) = (&DAT_00136660)[lVar10] ^ bVar2;
            lVar10 = lVar10 + 1;
          } while (lVar10 != 0x20);
          local_170[0x10] = 0;
          uVar15 = (**(code **)(*plVar4 + 0x538))(plVar4,&local_180);
          lVar10 = 0;
          iVar7 = 0x7d1a9fad;
          local_180 = 0;
          local_178 = 0;
          local_174 = 0;
          local_173 = 0;
          local_172 = 0;
          local_171 = 0;
          local_170[1] = 0;
          local_170[2] = 0;
          local_170[3] = 0;
          local_170[4] = 0;
          local_170[5] = 0;
          local_170[6] = 0;
          local_170[7] = 0;
          local_170[8] = 0;
          local_170[9] = 0;
          local_170[10] = 0;
          local_170[0xb] = 0;
          local_170[0xc] = 0;
          local_170[0xd] = 0;
          local_170[0xe] = 0;
          local_170[0xf] = 0;
          local_170[0x10] = 0;
          local_170[0x11] = 0;
          local_170[0x12] = 0;
          local_170[0x13] = 0;
          local_170[0x14] = 0;
          local_170[0x15] = 0;
          local_170[0x16] = 0;
          local_170[0x17] = 0;
          local_170[0x18] = 0;
          local_170[0x19] = 0;
          local_170[0x1a] = 0;
          local_170[0x1b] = 0;
          local_170[0x1c] = 0;
          local_170[0x1d] = 0;
          local_170[0x1e] = 0;
          local_170[0x1f] = 0;
          local_170[0x20] = 0;
          local_170[0x21] = 0;
          local_170[0x22] = 0;
          local_170[0x23] = 0;
          local_170[0x24] = 0;
          local_170[0x25] = 0;
          local_170[0x26] = 0;
          local_170[0x27] = 0;
          local_170[0x28] = 0;
          local_170[0x29] = 0;
          local_170[0x2a] = 0;
          local_170[0x2b] = 0;
          local_170[0x2c] = 0;
          local_170[0x2d] = 0;
          local_170[0x2e] = 0;
          local_170[0x2f] = 0;
          do {
            iVar7 = iVar7 * 0x41c64e6d + 0x3039;
            *(byte *)((long)&local_180 + lVar10) =
                 (char)lVar10 * '\x11' - 0x30U ^ (&DAT_0010f058)[lVar10] ^
                 (byte)((uint)iVar7 >> 0x10);
            lVar10 = lVar10 + 1;
          } while (lVar10 != 0x10);
          local_170[0] = 0;
          uVar16 = (**(code **)(*plVar4 + 0x30))(plVar4,&local_180);
          lVar10 = 0;
          do {
            *(undefined1 *)((long)&local_180 + lVar10) = 0;
            lVar10 = lVar10 + 1;
          } while (lVar10 != 0x80);
          local_d8 = local_d8 & 0xffffff00;
          local_e0._0_1_ = s_getBytesFile_0010ed40[0];
          local_e0._1_1_ = s_getBytesFile_0010ed40[1];
          local_e0._2_1_ = s_getBytesFile_0010ed40[2];
          local_e0._3_1_ = s_getBytesFile_0010ed40[3];
          local_e0._4_1_ = s_getBytesFile_0010ed40[4];
          local_e0._5_1_ = s_getBytesFile_0010ed40[5];
          local_e0._6_1_ = s_getBytesFile_0010ed40[6];
          local_e0._7_1_ = s_getBytesFile_0010ed40[7];
          local_180 = CONCAT44((int)(local_180 >> 0x20),(int)ram0x0010ee08) & 0xffffff00ffffffff;
          uVar16 = (**(code **)(*plVar4 + 0x108))(plVar4,uVar16,&local_e0,&local_180);
          lVar10 = 0;
          do {
            *(undefined1 *)((long)&local_e0 + lVar10) = 0;
            lVar10 = lVar10 + 1;
          } while (lVar10 != 0x60);
          lVar10 = 0;
          do {
            *(undefined1 *)((long)&local_180 + lVar10) = 0;
            lVar10 = lVar10 + 1;
          } while (lVar10 != 0xa0);
          uVar16 = FUN_0014c694(plVar4,uVar15,uVar16);
          (**(code **)(*plVar4 + 0xb8))(plVar4,uVar15);
          lVar10 = 0;
          iVar7 = 0x7d1a4997;
          do {
            iVar7 = iVar7 * 0x41c64e6d + 0x3039;
            *(byte *)((long)&local_180 + lVar10) =
                 (char)lVar10 * '\x11' + 6U ^ (&DAT_00136690)[lVar10] ^ (byte)((uint)iVar7 >> 0x10);
            lVar10 = lVar10 + 1;
          } while (lVar10 != 0x1f);
          local_170[0xf] = 0;
          uVar17 = (**(code **)(*plVar4 + 0x30))(plVar4,&local_180);
          uVar15 = local_e0;
          lVar10 = 0;
          do {
            *(undefined1 *)((long)&local_180 + lVar10) = 0;
            lVar10 = lVar10 + 1;
          } while (lVar10 != 0x80);
          lVar10 = 0;
          iVar7 = 0x7d1a5765;
          local_e0 = (char  [8])CONCAT44(0x3e74,uVar25);
          uVar18 = local_e0;
          local_e0._7_1_ = SUB81(uVar15,7);
          local_e0._0_6_ = (uint6)uVar18;
          local_e0._0_7_ = (uint7)(uint6)local_e0;
          do {
            iVar7 = iVar7 * 0x41c64e6d + 0x3039;
            *(byte *)((long)&local_180 + lVar10) =
                 (char)lVar10 * '\x11' + 0x18U ^ (&DAT_001366c0)[lVar10] ^
                 (byte)((uint)iVar7 >> 0x10);
            lVar10 = lVar10 + 1;
          } while (lVar10 != 0x17);
          local_170[7] = 0;
          uVar15 = (**(code **)(*plVar4 + 0x108))(plVar4,uVar17,&local_e0,&local_180);
          lVar10 = 0;
          do {
            *(undefined1 *)((long)&local_e0 + lVar10) = 0;
            lVar10 = lVar10 + 1;
          } while (lVar10 != 0x60);
          lVar10 = 0;
          do {
            *(undefined1 *)((long)&local_180 + lVar10) = 0;
            lVar10 = lVar10 + 1;
          } while (lVar10 != 0xa0);
          uVar8 = (undefined4)ram0x0010ee30;
          local_180._0_1_ = (char)uVar8;
          local_180._1_1_ = (char)((uint)uVar8 >> 8);
          local_180._2_1_ = (char)((uint)uVar8 >> 0x10);
          local_180._3_1_ = (char)((uint)uVar8 >> 0x18);
          uVar18 = (**(code **)(*plVar4 + 0x538))(plVar4,&local_180);
          lVar10 = 0;
          do {
            *(undefined1 *)((long)&local_180 + lVar10) = 0;
            lVar10 = lVar10 + 1;
          } while (lVar10 != 0x80);
          uVar15 = FUN_0014c730(plVar4,uVar17,uVar15,uVar16,uVar18);
          (**(code **)(*plVar4 + 0xb8))(plVar4,uVar18);
          (**(code **)(*plVar4 + 0xb8))(plVar4,uVar16);
          lVar10 = 0;
          iVar7 = 0x7d1a724e;
          local_e0 = (char  [8])
                     (CONCAT44((int)((ulong)local_e0 >> 0x20),(int)ram0x0010ed80) &
                     0xffffff00ffffffff);
          do {
            iVar7 = iVar7 * 0x41c64e6d + 0x3039;
            *(byte *)((long)&local_180 + lVar10) =
                 (char)lVar10 * '\x11' + 0x3dU ^ (&DAT_001366e8)[lVar10] ^
                 (byte)((uint)iVar7 >> 0x10);
            lVar10 = lVar10 + 1;
          } while (lVar10 != 0x17);
          local_170[7] = 0;
          uVar16 = (**(code **)(*plVar4 + 0x108))(plVar4,uVar13,&local_e0,&local_180);
          lVar10 = 0;
          do {
            *(undefined1 *)((long)&local_e0 + lVar10) = 0;
            lVar10 = lVar10 + 1;
          } while (lVar10 != 0x60);
          lVar10 = 0;
          do {
            *(undefined1 *)((long)&local_180 + lVar10) = 0;
            lVar10 = lVar10 + 1;
          } while (lVar10 != 0xa0);
          FUN_0014c868(plVar4,lVar20,uVar16,2,uVar15);
          (**(code **)(*plVar4 + 0xb8))(plVar4,uVar15);
          cVar6 = (**(code **)(*plVar4 + 0x720))(plVar4);
          if (cVar6 != '\0') {
            (**(code **)(*plVar4 + 0x88))(plVar4);
            (**(code **)(*plVar4 + 0xb8))(plVar4,lVar20);
            goto LAB_00141f8c;
          }
          uVar15 = (**(code **)(*plVar4 + 0x580))(plVar4,0x27010);
          (**(code **)(*plVar4 + 0x680))(plVar4,uVar15,0,0x27010,__s);
          local_180 = CONCAT17(local_180._7_1_,0x425b00000000);
          local_e0._0_1_ = s_doFinal_0010ed88[0];
          local_e0._1_1_ = s_doFinal_0010ed88[1];
          local_e0._2_1_ = s_doFinal_0010ed88[2];
          local_e0._3_1_ = s_doFinal_0010ed88[3];
          local_e0._4_1_ = s_doFinal_0010ed88[4];
          local_e0._5_1_ = s_doFinal_0010ed88[5];
          local_e0._6_1_ = s_doFinal_0010ed88[6];
          local_e0._7_1_ = s_doFinal_0010ed88[7];
          uVar8 = (undefined4)DAT_0010ee60;
          local_180._0_1_ = (char)uVar8;
          local_180._1_1_ = (char)((uint)uVar8 >> 8);
          local_180._2_1_ = (char)((uint)uVar8 >> 0x10);
          local_180._3_1_ = (char)((uint)uVar8 >> 0x18);
          uVar13 = (**(code **)(*plVar4 + 0x108))(plVar4,uVar13,&local_e0,&local_180);
          lVar10 = 0;
          do {
            *(undefined1 *)((long)&local_e0 + lVar10) = 0;
            lVar10 = lVar10 + 1;
          } while (lVar10 != 0x60);
          lVar10 = 0;
          do {
            *(undefined1 *)((long)&local_180 + lVar10) = 0;
            lVar10 = lVar10 + 1;
          } while (lVar10 != 0xa0);
          lVar10 = FUN_0014c694(plVar4,lVar20,uVar13,uVar15);
          (**(code **)(*plVar4 + 0xb8))(plVar4,uVar15);
          (**(code **)(*plVar4 + 0xb8))(plVar4,lVar20);
          cVar6 = (**(code **)(*plVar4 + 0x720))(plVar4);
          if (cVar6 != '\0') goto LAB_00141f7c;
        }
        lVar20 = 0;
        do {
          *(undefined1 *)((long)__s + lVar20) = 0;
          lVar20 = lVar20 + 1;
        } while (lVar20 != 0x27010);
        if (lVar10 == 0) {
LAB_00142118:
          (**(code **)(*plVar4 + 0xb8))(plVar4,uVar14);
LAB_0014212c:
          uVar9 = 0;
        }
        else {
          lVar20 = 0;
          do {
            iVar22 = iVar22 * 0x41c64e6d + 0x3039;
            *(byte *)((long)&local_180 + lVar20) =
                 (char)lVar20 * '\x11' + 0x73U ^ (&DAT_00136710)[lVar20] ^
                 (byte)((uint)iVar22 >> 0x10);
            lVar20 = lVar20 + 1;
          } while (lVar20 != 0x18);
          local_170[8] = 0;
          uVar13 = (**(code **)(*plVar4 + 0x30))(plVar4,&local_180);
          acVar5 = local_e0;
          lVar20 = 0;
          do {
            *(undefined1 *)((long)&local_180 + lVar20) = 0;
            lVar20 = lVar20 + 1;
          } while (lVar20 != 0x80);
          lVar20 = 0;
          iVar7 = 0x7d1a1226;
          local_e0 = (char  [8])CONCAT44(0x3e74,uVar25);
          uVar15 = local_e0;
          local_e0._7_1_ = acVar5[7];
          local_e0._0_6_ = (uint6)uVar15;
          local_e0._6_1_ = '\0';
          do {
            iVar7 = iVar7 * 0x41c64e6d + 0x3039;
            *(byte *)((long)&local_180 + lVar20) =
                 (char)lVar20 * '\x11' + 0x5dU ^ (&DAT_0010efd8)[lVar20] ^
                 (byte)((uint)iVar7 >> 0x10);
            lVar20 = lVar20 + 1;
          } while (lVar20 != 0x15);
          local_170[5] = 0;
          uVar15 = (**(code **)(*plVar4 + 0x108))(plVar4,uVar13,&local_e0,&local_180);
          lVar20 = 0;
          do {
            *(undefined1 *)((long)&local_e0 + lVar20) = 0;
            lVar20 = lVar20 + 1;
          } while (lVar20 != 0x60);
          lVar20 = 0;
          do {
            *(undefined1 *)((long)&local_180 + lVar20) = 0;
            lVar20 = lVar20 + 1;
          } while (lVar20 != 0xa0);
          lVar20 = FUN_0014c730(plVar4,uVar13,uVar15,uVar14);
          if ((lVar20 == 0) || (cVar6 = (**(code **)(*plVar4 + 0x720))(plVar4), cVar6 != '\0')) {
            (**(code **)(*plVar4 + 0x88))(plVar4);
LAB_00142104:
            (**(code **)(*plVar4 + 0xb8))(plVar4,lVar10);
            goto LAB_00142118;
          }
          local_e0 = (char  [8])CONCAT26(local_e0._6_2_,0x6500000000);
          local_e0 = (char  [8])CONCAT44(local_e0._4_4_,(int)DAT_0010ee80);
          local_180._0_1_ = s__data_bigetFiles__BII_V_0010eea0[0x10];
          local_180._1_1_ = s__data_bigetFiles__BII_V_0010eea0[0x11];
          local_180._2_1_ = s__data_bigetFiles__BII_V_0010eea0[0x12];
          local_180._3_1_ = s__data_bigetFiles__BII_V_0010eea0[0x13];
          local_180._4_1_ = s__data_bigetFiles__BII_V_0010eea0[0x14];
          local_180._5_1_ = s__data_bigetFiles__BII_V_0010eea0[0x15];
          local_180._6_1_ = s__data_bigetFiles__BII_V_0010eea0[0x16];
          local_180._7_1_ = s__data_bigetFiles__BII_V_0010eea0[0x17];
          uVar15 = (**(code **)(*plVar4 + 0x108))(plVar4,uVar13,&local_e0,&local_180);
          lVar11 = 0;
          do {
            *(undefined1 *)((long)&local_e0 + lVar11) = 0;
            lVar11 = lVar11 + 1;
          } while (lVar11 != 0x60);
          lVar11 = 0;
          do {
            *(undefined1 *)((long)&local_180 + lVar11) = 0;
            lVar11 = lVar11 + 1;
          } while (lVar11 != 0xa0);
          local_e0 = (char  [8])CONCAT26(local_e0._6_2_,0x6500000000);
          uVar8 = (undefined4)ram0x0010ee20;
          local_e0._0_1_ = (char)uVar8;
          local_e0._1_1_ = (char)((uint)uVar8 >> 8);
          local_e0._2_1_ = (char)((uint)uVar8 >> 0x10);
          local_e0._3_1_ = (char)((uint)uVar8 >> 0x18);
          uVar8 = (undefined4)DAT_0010edd8;
          local_180._0_1_ = (char)uVar8;
          local_180._1_1_ = (char)((uint)uVar8 >> 8);
          local_180._2_1_ = (char)((uint)uVar8 >> 0x10);
          local_180._3_1_ = (char)((uint)uVar8 >> 0x18);
          uVar13 = (**(code **)(*plVar4 + 0x108))(plVar4,uVar13,&local_e0,&local_180);
          lVar11 = 0;
          do {
            *(undefined1 *)((long)&local_e0 + lVar11) = 0;
            lVar11 = lVar11 + 1;
          } while (lVar11 != 0x60);
          lVar11 = 0;
          do {
            *(undefined1 *)((long)&local_180 + lVar11) = 0;
            lVar11 = lVar11 + 1;
          } while (lVar11 != 0xa0);
          uVar8 = (**(code **)(*plVar4 + 0x558))(plVar4,lVar10);
          FUN_0014c868(plVar4,lVar20,uVar15,lVar10,0,uVar8);
          cVar6 = (**(code **)(*plVar4 + 0x720))(plVar4);
          if (cVar6 != '\0') {
            (**(code **)(*plVar4 + 0x88))(plVar4);
          }
          FUN_0014c868(plVar4,lVar20,uVar13);
          (**(code **)(*plVar4 + 0x88))(plVar4);
          (**(code **)(*plVar4 + 0xb8))(plVar4,lVar20);
          if (cVar6 != '\0') goto LAB_00142104;
          (**(code **)(*plVar4 + 0xb8))(plVar4,lVar10);
          uVar13 = s_java_io_nce_0010ed60._0_8_;
          s_java_io_nce_0010ed60[0] = (char)uVar12;
          s_java_io_nce_0010ed60[1] = SUB81(uVar12,1);
          s_java_io_nce_0010ed60[2] = SUB81(uVar12,2);
          s_java_io_nce_0010ed60[3] = SUB81(uVar12,3);
          s_java_io_nce_0010ed60[4] = SUB81(uVar12,4);
          s_java_io_nce_0010ed60[5] = SUB81(uVar12,5);
          s_java_io_nce_0010ed60[6] = SUB81(uVar12,6);
          s_java_io_nce_0010ed60[7] = SUB81(uVar12,7);
          local_180._0_1_ = s_java_io_nce_0010ed60[0];
          local_180._1_1_ = s_java_io_nce_0010ed60[1];
          local_180._2_1_ = s_java_io_nce_0010ed60[2];
          local_180._3_1_ = s_java_io_nce_0010ed60[3];
          local_180._4_1_ = s_java_io_nce_0010ed60[4];
          local_180._5_1_ = s_java_io_nce_0010ed60[5];
          local_180._6_1_ = s_java_io_nce_0010ed60[6];
          local_180._7_1_ = s_java_io_nce_0010ed60[7];
          local_174 = 0;
          s_java_io_nce_0010ed60._0_8_ = uVar13;
          local_178 = uVar9;
          uVar12 = (**(code **)(*plVar4 + 0x30))(plVar4,&local_180);
          acVar5 = local_e0;
          lVar20 = 0;
          do {
            *(undefined1 *)((long)&local_180 + lVar20) = 0;
            lVar20 = lVar20 + 1;
          } while (lVar20 != 0x80);
          lVar20 = 0;
          iVar7 = 0x7d1a1226;
          local_e0 = (char  [8])CONCAT44(0x3e74,uVar25);
          uVar13 = local_e0;
          local_e0._7_1_ = acVar5[7];
          local_e0._0_6_ = (uint6)uVar13;
          local_e0._6_1_ = '\0';
          do {
            iVar7 = iVar7 * 0x41c64e6d + 0x3039;
            *(byte *)((long)&local_180 + lVar20) =
                 (char)lVar20 * '\x11' + 0x5dU ^ (&DAT_0010efd8)[lVar20] ^
                 (byte)((uint)iVar7 >> 0x10);
            lVar20 = lVar20 + 1;
          } while (lVar20 != 0x15);
          local_170[5] = 0;
          uVar13 = (**(code **)(*plVar4 + 0x108))(plVar4,uVar12,&local_e0,&local_180);
          lVar20 = 0;
          do {
            *(undefined1 *)((long)&local_e0 + lVar20) = 0;
            lVar20 = lVar20 + 1;
          } while (lVar20 != 0x60);
          lVar20 = 0;
          do {
            *(undefined1 *)((long)&local_180 + lVar20) = 0;
            lVar20 = lVar20 + 1;
          } while (lVar20 != 0xa0);
          lVar20 = FUN_0014c730(plVar4,uVar12,uVar13,uVar14);
          if ((lVar20 != 0) && (cVar6 = (**(code **)(*plVar4 + 0x720))(plVar4), cVar6 == '\0')) {
            local_e0._0_1_ = s_setReada_ZZ__0010ed98[0];
            local_e0._1_1_ = s_setReada_ZZ__0010ed98[1];
            local_e0._2_1_ = s_setReada_ZZ__0010ed98[2];
            local_e0._3_1_ = s_setReada_ZZ__0010ed98[3];
            local_e0._4_1_ = s_setReada_ZZ__0010ed98[4];
            local_e0._5_1_ = s_setReada_ZZ__0010ed98[5];
            local_e0._6_1_ = s_setReada_ZZ__0010ed98[6];
            local_e0._7_1_ = s_setReada_ZZ__0010ed98[7];
            local_d8 = (uint)ram0x0010ede8;
            uVar9 = (undefined4)ram0x0010eda0;
            local_180._0_6_ = CONCAT24(0x5a,uVar9);
            uVar13 = (**(code **)(*plVar4 + 0x108))(plVar4,uVar12,&local_e0,&local_180);
            lVar10 = 0;
            do {
              *(undefined1 *)((long)&local_e0 + lVar10) = 0;
              lVar10 = lVar10 + 1;
            } while (lVar10 != 0x60);
            lVar10 = 0;
            do {
              *(undefined1 *)((long)&local_180 + lVar10) = 0;
              lVar10 = lVar10 + 1;
            } while (lVar10 != 0xa0);
            FUN_0014c904(plVar4,lVar20,uVar13,1,0);
            local_d4 = 0x65;
            local_e0._0_1_ = s_setExecuAES_0010ee28[0];
            local_e0._1_1_ = s_setExecuAES_0010ee28[1];
            local_e0._2_1_ = s_setExecuAES_0010ee28[2];
            local_e0._3_1_ = s_setExecuAES_0010ee28[3];
            local_e0._4_1_ = s_setExecuAES_0010ee28[4];
            local_e0._5_1_ = s_setExecuAES_0010ee28[5];
            local_e0._6_1_ = s_setExecuAES_0010ee28[6];
            local_e0._7_1_ = s_setExecuAES_0010ee28[7];
            local_d8 = (uint)ram0x0010edb0;
            local_180._4_1_ = 'Z';
            local_180._5_1_ = '\0';
            local_180._0_1_ = (char)uVar9;
            local_180._1_1_ = (char)((uint)uVar9 >> 8);
            local_180._2_1_ = (char)((uint)uVar9 >> 0x10);
            local_180._3_1_ = (char)((uint)uVar9 >> 0x18);
            uVar12 = (**(code **)(*plVar4 + 0x108))(plVar4,uVar12,&local_e0,&local_180);
            lVar10 = 0;
            do {
              *(undefined1 *)((long)&local_e0 + lVar10) = 0;
              lVar10 = lVar10 + 1;
            } while (lVar10 != 0x60);
            lVar10 = 0;
            do {
              *(undefined1 *)((long)&local_180 + lVar10) = 0;
              lVar10 = lVar10 + 1;
            } while (lVar10 != 0xa0);
            FUN_0014c904(plVar4,lVar20,uVar12,1,0);
            (**(code **)(*plVar4 + 0xb8))(plVar4,lVar20);
          }
          (**(code **)(*plVar4 + 0x88))(plVar4);
          lVar20 = (**(code **)(*plVar4 + 0x548))(plVar4,uVar14,0);
          if (lVar20 == 0) {
            (**(code **)(*plVar4 + 0xb8))(plVar4,uVar14);
            goto LAB_0014212c;
          }
          lVar10 = dlopen(lVar20,2);
          (**(code **)(*plVar4 + 0x550))(plVar4,uVar14,lVar20);
          (**(code **)(*plVar4 + 0xb8))(plVar4,uVar14);
          if (lVar10 == 0) goto LAB_0014212c;
          uVar3 = (uint)local_178 >> 0x10;
          local_178 = CONCAT22((ushort)uVar3 & 0xff00,0x6461);
          local_180._0_1_ = s_JNI_OnLo_data_muemulatorHARDWARE_0010ee38[0];
          local_180._1_1_ = s_JNI_OnLo_data_muemulatorHARDWARE_0010ee38[1];
          local_180._2_1_ = s_JNI_OnLo_data_muemulatorHARDWARE_0010ee38[2];
          local_180._3_1_ = s_JNI_OnLo_data_muemulatorHARDWARE_0010ee38[3];
          local_180._4_1_ = s_JNI_OnLo_data_muemulatorHARDWARE_0010ee38[4];
          local_180._5_1_ = s_JNI_OnLo_data_muemulatorHARDWARE_0010ee38[5];
          local_180._6_1_ = s_JNI_OnLo_data_muemulatorHARDWARE_0010ee38[6];
          local_180._7_1_ = s_JNI_OnLo_data_muemulatorHARDWARE_0010ee38[7];
          pcVar19 = (code *)dlsym(lVar10,&local_180);
          local_180._0_1_ = '\0';
          local_180._1_1_ = '\0';
          local_180._2_1_ = '\0';
          local_180._3_1_ = '\0';
          local_180._4_1_ = '\0';
          local_180._5_1_ = '\0';
          local_180._6_1_ = '\0';
          local_180._7_1_ = '\0';
          local_178 = 0;
          local_174 = 0;
          local_173 = 0;
          local_172 = 0;
          local_171 = 0;
          if (pcVar19 == (code *)0x0) goto LAB_0014212c;
          uVar9 = (*pcVar19)(param_1,param_2);
        }
        operator_delete(__s);
        goto LAB_001414d4;
      }
    }
    (**(code **)(lVar20 + 0x88))(plVar4);
  }
LAB_001414d0:
  uVar9 = 0;
LAB_001414d4:
  if (*(long *)(lVar1 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar9;
}


