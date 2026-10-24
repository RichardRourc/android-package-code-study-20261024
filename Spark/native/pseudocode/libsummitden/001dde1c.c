// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001dde1c; body: [[001dde1c, 001de037]]

void FUN_001dde1c(long param_1,undefined8 *param_2)

{
  byte *pbVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  undefined1 auVar4 [16];
  char cVar5;
  int iVar6;
  void *__ptr;
  char *pcVar7;
  size_t __size;
  char *pcVar8;
  long lVar9;
  size_t __n;
  char cVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  ulong uVar13;
  byte bVar14;
  byte bVar15;
  char local_60 [47];
  char local_31;
  undefined8 local_30;
  undefined8 uStack_28;
  
  if (0x1f < *(ulong *)(param_1 + 0x18)) {
    pcVar8 = *(char **)(param_1 + 0x10);
    if ((&local_30 < pcVar8 + 0x20) && (pcVar8 < &stack0xffffffffffffffe0)) {
      lVar9 = 0;
      pcVar7 = &local_31;
      do {
        pbVar1 = (byte *)(pcVar8 + lVar9);
        lVar9 = lVar9 + 2;
        bVar14 = *pbVar1;
        bVar15 = pbVar1[1];
        uVar3 = (ulong)CONCAT14(bVar15 - 0x3a,bVar14 + 0xc6) & 0xff000000ff;
        uVar3 = DAT_0011f5d8 ^
                (DAT_0011f5d8 ^ DAT_0011f5e0) &
                (ulong)CONCAT14(-((uint)(byte)(uVar3 >> 0x20) < SUB164(ZEXT816(0xf6000000f6),4)),
                                -(uint)((uint)(byte)uVar3 < SUB164(ZEXT816(0xf6000000f6),0)));
        cVar10 = (char)(uVar3 >> 0x20) + bVar15 + ((char)uVar3 + bVar14) * '\x10';
        pcVar7 = pcVar7 + 1;
        *pcVar7 = cVar10;
      } while (lVar9 != 0x20);
    }
    else {
      pcVar7 = (char *)((ulong)&local_30 | 0xf);
      bVar14 = -((byte)(*pcVar8 - 0x3aU) < 0xf6);
      bVar15 = -((byte)(pcVar8[0x1e] - 0x3aU) < 0xf6);
      auVar11[0] = -((byte)(pcVar8[1] - 0x3aU) < 0xf6);
      auVar11[1] = -((byte)(pcVar8[3] - 0x3aU) < 0xf6);
      auVar11[2] = -((byte)(pcVar8[5] - 0x3aU) < 0xf6);
      auVar11[3] = -((byte)(pcVar8[7] - 0x3aU) < 0xf6);
      auVar11[4] = -((byte)(pcVar8[9] - 0x3aU) < 0xf6);
      auVar11[5] = -((byte)(pcVar8[0xb] - 0x3aU) < 0xf6);
      auVar11[6] = -((byte)(pcVar8[0xd] - 0x3aU) < 0xf6);
      auVar11[7] = -((byte)(pcVar8[0xf] - 0x3aU) < 0xf6);
      auVar11[8] = -((byte)(pcVar8[0x11] - 0x3aU) < 0xf6);
      auVar11[9] = -((byte)(pcVar8[0x13] - 0x3aU) < 0xf6);
      auVar11[10] = -((byte)(pcVar8[0x15] - 0x3aU) < 0xf6);
      auVar11[0xb] = -((byte)(pcVar8[0x17] - 0x3aU) < 0xf6);
      auVar11[0xc] = -((byte)(pcVar8[0x19] - 0x3aU) < 0xf6);
      auVar11[0xd] = -((byte)(pcVar8[0x1b] - 0x3aU) < 0xf6);
      auVar11[0xe] = -((byte)(pcVar8[0x1d] - 0x3aU) < 0xf6);
      auVar11[0xf] = -((byte)(pcVar8[0x1f] - 0x3aU) < 0xf6);
      uVar13 = CONCAT17(-((byte)(pcVar8[0xe] - 0x3aU) < 0xf6),
                        CONCAT16(-((byte)(pcVar8[0xc] - 0x3aU) < 0xf6),
                                 CONCAT15(-((byte)(pcVar8[10] - 0x3aU) < 0xf6),
                                          CONCAT14(-((byte)(pcVar8[8] - 0x3aU) < 0xf6),
                                                   CONCAT13(-((byte)(pcVar8[6] - 0x3aU) < 0xf6),
                                                            CONCAT12(-((byte)(pcVar8[4] - 0x3aU) <
                                                                      0xf6),CONCAT11(-((byte)(pcVar8
                                                  [2] - 0x3aU) < 0xf6),bVar14))))))) &
               0x909090909090909;
      uVar3 = (ulong)CONCAT15(bVar15,CONCAT14(-((byte)(pcVar8[0x1c] - 0x3aU) < 0xf6),
                                              CONCAT13(-((byte)(pcVar8[0x1a] - 0x3aU) < 0xf6),
                                                       CONCAT12(-((byte)(pcVar8[0x18] - 0x3aU) <
                                                                 0xf6),CONCAT11(-((byte)(pcVar8[0x16
                                                  ] - 0x3aU) < 0xf6),
                                                  -((byte)(pcVar8[0x14] - 0x3aU) < 0xf6)))))) &
              0x90909090909;
      auVar2[8] = 0xd0;
      auVar2._0_8_ = 0xd0d0d0d0d0d0d0d0;
      auVar2[9] = 0xd0;
      auVar2[10] = 0xd0;
      auVar2[0xb] = 0xd0;
      auVar2[0xc] = 0xd0;
      auVar2[0xd] = 0xd0;
      auVar2[0xe] = 0xd0;
      auVar2[0xf] = 0xd0;
      auVar4[8] = 0xa9;
      auVar4._0_8_ = 0xa9a9a9a9a9a9a9a9;
      auVar4[9] = 0xa9;
      auVar4[10] = 0xa9;
      auVar4[0xb] = 0xa9;
      auVar4[0xc] = 0xa9;
      auVar4[0xd] = 0xa9;
      auVar4[0xe] = 0xa9;
      auVar4[0xf] = 0xa9;
      auVar12[8] = 0xd0;
      auVar12._0_8_ = 0xd0d0d0d0d0d0d0d0;
      auVar12[9] = 0xd0;
      auVar12[10] = 0xd0;
      auVar12[0xb] = 0xd0;
      auVar12[0xc] = 0xd0;
      auVar12[0xd] = 0xd0;
      auVar12[0xe] = 0xd0;
      auVar12[0xf] = 0xd0;
      auVar12 = auVar12 ^ (auVar2 ^ auVar4) & auVar11;
      local_30 = CONCAT17(auVar12[7] + pcVar8[0xf] + ((char)(uVar13 >> 0x38) + pcVar8[0xe]) * '\x10'
                          ,CONCAT16(auVar12[6] + pcVar8[0xd] +
                                    ((char)(uVar13 >> 0x30) + pcVar8[0xc]) * '\x10',
                                    CONCAT15(auVar12[5] + pcVar8[0xb] +
                                             ((char)(uVar13 >> 0x28) + pcVar8[10]) * '\x10',
                                             CONCAT14(auVar12[4] + pcVar8[9] +
                                                      ((char)(uVar13 >> 0x20) + pcVar8[8]) * '\x10',
                                                      CONCAT13(auVar12[3] + pcVar8[7] +
                                                               ((char)(uVar13 >> 0x18) + pcVar8[6])
                                                               * '\x10',CONCAT12(auVar12[2] +
                                                                                 pcVar8[5] +
                                                                                 ((char)(uVar13 >>
                                                                                        0x10) +
                                                                                 pcVar8[4]) * '\x10'
                                                                                 ,CONCAT11(auVar12[1
                                                  ] + pcVar8[3] +
                                                  ((char)(uVar13 >> 8) + pcVar8[2]) * '\x10',
                                                  auVar12[0] + pcVar8[1] +
                                                  ((bVar14 & 9) + *pcVar8) * '\x10')))))));
      cVar10 = auVar12[0xf] + pcVar8[0x1f] + ((bVar15 & 9) + pcVar8[0x1e]) * '\x10';
      uStack_28 = CONCAT17(cVar10,CONCAT16(auVar12[0xe] + pcVar8[0x1d] +
                                           ((char)(uVar3 >> 0x20) + pcVar8[0x1c]) * '\x10',
                                           CONCAT15(auVar12[0xd] + pcVar8[0x1b] +
                                                    ((char)(uVar3 >> 0x18) + pcVar8[0x1a]) * '\x10',
                                                    CONCAT14(auVar12[0xc] + pcVar8[0x19] +
                                                             ((char)(uVar3 >> 0x10) + pcVar8[0x18])
                                                             * '\x10',CONCAT13(auVar12[0xb] +
                                                                               pcVar8[0x17] +
                                                                               ((char)(uVar3 >> 8) +
                                                                               pcVar8[0x16]) *
                                                                               '\x10',CONCAT12(
                                                  auVar12[10] + pcVar8[0x15] +
                                                  ((char)uVar3 + pcVar8[0x14]) * '\x10',
                                                  CONCAT11(auVar12[9] + pcVar8[0x13] +
                                                           ((-((byte)(pcVar8[0x12] - 0x3aU) < 0xf6)
                                                            & 9U) + pcVar8[0x12]) * '\x10',
                                                           auVar12[8] + pcVar8[0x11] +
                                                           ((-((byte)(pcVar8[0x10] - 0x3aU) < 0xf6)
                                                            & 9U) + pcVar8[0x10]) * '\x10')))))));
    }
    if (&local_30 < pcVar7) {
      cVar5 = (char)local_30;
      local_30 = CONCAT71(local_30._1_7_,cVar10);
      *pcVar7 = cVar5;
      cVar10 = local_30._1_1_;
      local_30._0_2_ = CONCAT11(pcVar7[-1],(char)local_30);
      pcVar7[-1] = cVar10;
      cVar10 = local_30._2_1_;
      local_30._0_3_ = CONCAT12(pcVar7[-2],(undefined2)local_30);
      pcVar7[-2] = cVar10;
      cVar10 = local_30._3_1_;
      local_30._0_4_ = CONCAT13(pcVar7[-3],(undefined3)local_30);
      pcVar7[-3] = cVar10;
      cVar10 = local_30._4_1_;
      local_30._0_5_ = CONCAT14(pcVar7[-4],(undefined4)local_30);
      pcVar7[-4] = cVar10;
      cVar10 = local_30._5_1_;
      local_30._0_6_ = CONCAT15(pcVar7[-5],(undefined5)local_30);
      pcVar7[-5] = cVar10;
      cVar10 = local_30._6_1_;
      local_30._0_7_ = CONCAT16(pcVar7[-6],(undefined6)local_30);
      pcVar7[-6] = cVar10;
      cVar10 = local_30._7_1_;
      local_30 = CONCAT17(pcVar7[-7],(undefined7)local_30);
      pcVar7[-7] = cVar10;
    }
    local_60[0x22] = '\0';
    local_60[0x23] = '\0';
    local_60[0x24] = '\0';
    local_60[0x25] = '\0';
    local_60[0x26] = '\0';
    local_60[0x27] = '\0';
    local_60[0x28] = '\0';
    local_60[0x29] = '\0';
    local_60[0x20] = '\0';
    local_60[0x21] = '\0';
    local_60[8] = '\0';
    local_60[9] = '\0';
    local_60[10] = '\0';
    local_60[0xb] = '\0';
    local_60[0xc] = '\0';
    local_60[0xd] = '\0';
    local_60[0xe] = '\0';
    local_60[0xf] = '\0';
    local_60[0] = '\0';
    local_60[1] = '\0';
    local_60[2] = '\0';
    local_60[3] = '\0';
    local_60[4] = '\0';
    local_60[5] = '\0';
    local_60[6] = '\0';
    local_60[7] = '\0';
    local_60[0x18] = '\0';
    local_60[0x19] = '\0';
    local_60[0x1a] = '\0';
    local_60[0x1b] = '\0';
    local_60[0x1c] = '\0';
    local_60[0x1d] = '\0';
    local_60[0x1e] = '\0';
    local_60[0x1f] = '\0';
    local_60[0x10] = '\0';
    local_60[0x11] = '\0';
    local_60[0x12] = '\0';
    local_60[0x13] = '\0';
    local_60[0x14] = '\0';
    local_60[0x15] = '\0';
    local_60[0x16] = '\0';
    local_60[0x17] = '\0';
    iVar6 = snprintf(local_60,0x2a,"%LaL",local_30);
    if (iVar6 != 0) {
      lVar9 = param_2[1];
      __n = (size_t)iVar6;
      __ptr = (void *)*param_2;
      if ((ulong)param_2[2] < lVar9 + __n) {
        __size = param_2[2] * 2;
        uVar3 = lVar9 + __n + 0x3e0;
        if (__size < uVar3 || __size - uVar3 == 0) {
          __size = uVar3;
        }
        param_2[2] = __size;
        __ptr = realloc(__ptr,__size);
        *param_2 = __ptr;
        if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        lVar9 = param_2[1];
      }
      memcpy((void *)((long)__ptr + lVar9),local_60,__n);
      param_2[1] = param_2[1] + __n;
    }
  }
  return;
}


