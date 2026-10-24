// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001ddb08; body: [[001ddb08, 001dde0f]]

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001ddb08(long param_1,undefined8 *param_2)

{
  char cVar1;
  char cVar2;
  uint3 uVar3;
  int iVar4;
  void *__ptr;
  undefined8 *puVar5;
  size_t __size;
  long lVar6;
  uint uVar7;
  char cVar8;
  char cVar9;
  size_t __n;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  undefined8 uVar14;
  byte bVar23;
  ulong uVar15;
  undefined1 auVar16 [16];
  ulong uVar24;
  ulong uVar25;
  undefined1 auVar26 [16];
  ulong uVar27;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined4 uVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  char local_40 [32];
  char cVar10;
  
  if (0xf < *(ulong *)(param_1 + 0x18)) {
    puVar5 = *(undefined8 **)(param_1 + 0x10);
    uVar14 = *puVar5;
    uVar32 = *(undefined4 *)((long)puVar5 + 0xc);
    bVar21 = (byte)((ulong)uVar14 >> 0x28);
    bVar19 = (byte)((ulong)uVar14 >> 0x18);
    bVar20 = (byte)((ulong)uVar14 >> 0x20);
    bVar18 = (byte)((ulong)uVar14 >> 0x10);
    bVar11 = (byte)((uint)uVar32 >> 8);
    bVar12 = (byte)((uint)uVar32 >> 0x10);
    bVar13 = (byte)((uint)uVar32 >> 0x18);
    bVar17 = (byte)((ulong)uVar14 >> 8);
    bVar23 = (byte)((ulong)uVar14 >> 0x38);
    bVar22 = (byte)((ulong)uVar14 >> 0x30);
    uVar7 = CONCAT12(bVar11,(ushort)(byte)uVar32) & 0xffff;
    cVar8 = -0x57;
    cVar1 = -0x57;
    if (0xf5 < (byte)(*(char *)((long)puVar5 + 9) - 0x3aU)) {
      cVar1 = -0x30;
    }
    uVar15 = CONCAT26(bVar23 + 0xc6,CONCAT24(bVar17 + 0xc6,CONCAT22(bVar19 + 0xc6,bVar21 + 0xc6))) &
             0xff00ff00ff00ff;
    uVar27 = CONCAT26(bVar22 + 0xc6,
                      CONCAT24((byte)uVar14 + 0xc6,CONCAT22(bVar18 + 0xc6,bVar20 + 0xc6))) &
             0xff00ff00ff00ff;
    cVar10 = '\t';
    cVar9 = '\t';
    if (0xf5 < (byte)(*(char *)(puVar5 + 1) - 0x3aU)) {
      cVar10 = '\0';
    }
    if (0xf5 < (byte)(*(char *)((long)puVar5 + 0xb) - 0x3aU)) {
      cVar8 = -0x30;
    }
    uVar15 = CONCAT26(-(ushort)((ushort)(uVar15 >> 0x30) < 0xf6),
                      CONCAT24(-(ushort)((ushort)(uVar15 >> 0x20) < 0xf6),
                               CONCAT22(-(ushort)((ushort)(uVar15 >> 0x10) < 0xf6),
                                        -(ushort)((ushort)uVar15 < 0xf6)))) & 0x79007900790079 ^
             0xd000d000d000d0;
    uVar27 = CONCAT26(-(ushort)((ushort)(uVar27 >> 0x30) < 0xf6),
                      CONCAT24(-(ushort)((ushort)(uVar27 >> 0x20) < 0xf6),
                               CONCAT22(-(ushort)((ushort)(uVar27 >> 0x10) < 0xf6),
                                        -(ushort)((ushort)uVar27 < 0xf6)))) & 0x9000900090009;
    if (0xf5 < (byte)(*(char *)((long)puVar5 + 10) - 0x3aU)) {
      cVar9 = '\0';
    }
    uVar24 = CONCAT44(bVar12 + 0xc6,uVar7 + 0xc6) & 0xff000000ff;
    cVar2 = (char)(uVar15 >> 0x30) + bVar23 + ((char)(uVar27 >> 0x30) + bVar22) * '\x10';
    uVar25 = CONCAT44(bVar13 + 0xc6,bVar11 + 0xc6) & 0xff000000ff;
    uVar24 = CONCAT44(-(uint)((uint)(uVar24 >> 0x20) < 0xf6),-(uint)((uint)uVar24 < 0xf6)) &
             0x900000009;
    uVar25 = CONCAT44(-(uint)((uint)(uVar25 >> 0x20) < 0xf6),-(uint)((uint)uVar25 < 0xf6)) &
             0x7900000079 ^ 0xd0000000d0;
    auVar33._1_7_ = 0;
    auVar33[0] = (char)uVar15 + bVar21 + ((char)uVar27 + bVar20) * '\x10';
    auVar33[8] = (char)(uVar15 >> 0x10) + bVar19 + ((char)(uVar27 >> 0x10) + bVar18) * '\x10';
    auVar33._9_7_ = 0;
    auVar31._1_7_ = 0;
    auVar31[0] = cVar8 + *(char *)((long)puVar5 + 0xb) +
                 (cVar9 + *(char *)((long)puVar5 + 10)) * '\x10';
    auVar31[8] = cVar2;
    auVar31._9_7_ = 0;
    auVar30._1_7_ = 0;
    auVar30[0] = (char)(uVar15 >> 0x20) + bVar17 + ((char)(uVar27 >> 0x20) + (byte)uVar14) * '\x10';
    auVar30[8] = cVar2;
    auVar30._9_7_ = 0;
    auVar34 = NEON_ushl(auVar33,_DAT_0011d780,8);
    auVar28 = NEON_ushl(auVar31,_DAT_0011d710,8);
    auVar16._8_8_ = _UNK_0011d7b8;
    auVar16._0_8_ = _DAT_0011d7b0;
    auVar26._1_7_ = 0;
    auVar26[0] = (char)uVar25 + bVar11 + ((char)uVar24 + (char)uVar7) * '\x10';
    auVar26[8] = (char)(uVar25 >> 0x20) + bVar13 + ((char)(uVar24 >> 0x20) + bVar12) * '\x10';
    auVar26._9_7_ = 0;
    auVar29[0] = auVar34[0] | auVar28[0];
    auVar29[1] = auVar34[1] | auVar28[1];
    auVar29[2] = auVar34[2] | auVar28[2];
    auVar29[3] = auVar34[3] | auVar28[3];
    auVar29[4] = auVar34[4] | auVar28[4];
    auVar29[5] = auVar34[5] | auVar28[5];
    auVar29[6] = auVar34[6] | auVar28[6];
    auVar29[7] = auVar34[7] | auVar28[7];
    auVar29[8] = auVar34[8] | auVar28[8];
    auVar29[9] = auVar34[9] | auVar28[9];
    auVar29[10] = auVar34[10] | auVar28[10];
    auVar29[0xb] = auVar34[0xb] | auVar28[0xb];
    auVar29[0xc] = auVar34[0xc] | auVar28[0xc];
    auVar29[0xd] = auVar34[0xd] | auVar28[0xd];
    auVar29[0xe] = auVar34[0xe] | auVar28[0xe];
    auVar29[0xf] = auVar34[0xf] | auVar28[0xf];
    auVar31 = NEON_ushl(auVar30,_DAT_0011d720,8);
    auVar16 = NEON_ushl(auVar26,auVar16,8);
    auVar26 = NEON_ushl(auVar33,_DAT_0011d750,8);
    auVar33 = NEON_ext(auVar29,auVar29,8,1);
    auVar28[0] = auVar26[0] | auVar31[0];
    auVar28[1] = auVar26[1] | auVar31[1];
    auVar28[2] = auVar26[2] | auVar31[2];
    auVar28[3] = auVar26[3] | auVar31[3];
    auVar28[4] = auVar26[4] | auVar31[4];
    auVar28[5] = auVar26[5] | auVar31[5];
    auVar28[6] = auVar26[6] | auVar31[6];
    auVar28[7] = auVar26[7] | auVar31[7];
    auVar28[8] = auVar26[8] | auVar31[8];
    auVar28[9] = auVar26[9] | auVar31[9];
    auVar28[10] = auVar26[10] | auVar31[10];
    auVar28[0xb] = auVar26[0xb] | auVar31[0xb];
    auVar28[0xc] = auVar26[0xc] | auVar31[0xc];
    auVar28[0xd] = auVar26[0xd] | auVar31[0xd];
    auVar28[0xe] = auVar26[0xe] | auVar31[0xe];
    auVar28[0xf] = auVar26[0xf] | auVar31[0xf];
    uVar3 = CONCAT12(auVar29[6] | auVar33[6],
                     CONCAT11(auVar29[5] | auVar33[5],auVar29[4] | auVar33[4]));
    auVar26 = NEON_ext(auVar28,auVar28,8,1);
    uVar15 = CONCAT17(auVar16[7] | auVar16[0xf],
                      (uint7)CONCAT11(auVar16[0xf],auVar16[6] | auVar16[0xe]) << 0x30) |
             (ulong)CONCAT13(auVar29[7] | auVar33[7],uVar3) << 0x20;
    local_40[8] = '\0';
    local_40[9] = '\0';
    local_40[10] = '\0';
    local_40[0xb] = '\0';
    local_40[0xc] = '\0';
    local_40[0xd] = '\0';
    local_40[0xe] = '\0';
    local_40[0xf] = '\0';
    local_40[0] = '\0';
    local_40[1] = '\0';
    local_40[2] = '\0';
    local_40[3] = '\0';
    local_40[4] = '\0';
    local_40[5] = '\0';
    local_40[6] = '\0';
    local_40[7] = '\0';
    local_40[0x18] = '\0';
    local_40[0x19] = '\0';
    local_40[0x1a] = '\0';
    local_40[0x1b] = '\0';
    local_40[0x1c] = '\0';
    local_40[0x1d] = '\0';
    local_40[0x1e] = '\0';
    local_40[0x1f] = '\0';
    local_40[0x10] = '\0';
    local_40[0x11] = '\0';
    local_40[0x12] = '\0';
    local_40[0x13] = '\0';
    local_40[0x14] = '\0';
    local_40[0x15] = '\0';
    local_40[0x16] = '\0';
    local_40[0x17] = '\0';
    iVar4 = snprintf(local_40,0x20,"%a",
                     CONCAT17(auVar28[7] | auVar26[7],
                              CONCAT16(auVar28[6] | auVar26[6],
                                       CONCAT15(auVar28[5] | auVar26[5],
                                                CONCAT14(auVar28[4] | auVar26[4],
                                                         CONCAT13(auVar28[3] | auVar26[3],
                                                                  CONCAT12(auVar28[2] | auVar26[2],
                                                                           CONCAT11(auVar28[1] |
                                                                                    auVar26[1],
                                                                                    auVar28[0] |
                                                                                    auVar26[0]))))))
                             ) | ((ulong)uVar3 & 0xff00) << 8 |
                     uVar15 >> 0x28 & 0xff00 |
                     ((ulong)(byte)(cVar1 + *(char *)((long)puVar5 + 9) +
                                   (cVar10 + *(char *)(puVar5 + 1)) * '\x10') | (ulong)uVar3 & 0xff)
                     << 0x18 | uVar15 >> 0x38);
    if (iVar4 != 0) {
      lVar6 = param_2[1];
      __n = (size_t)iVar4;
      __ptr = (void *)*param_2;
      if ((ulong)param_2[2] < lVar6 + __n) {
        __size = param_2[2] * 2;
        uVar15 = lVar6 + __n + 0x3e0;
        if (__size < uVar15 || __size - uVar15 == 0) {
          __size = uVar15;
        }
        param_2[2] = __size;
        __ptr = realloc(__ptr,__size);
        *param_2 = __ptr;
        if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        lVar6 = param_2[1];
      }
      memcpy((void *)((long)__ptr + lVar6),local_40,__n);
      param_2[1] = param_2[1] + __n;
    }
  }
  return;
}


