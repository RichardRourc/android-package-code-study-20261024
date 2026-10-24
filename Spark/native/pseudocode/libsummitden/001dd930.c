// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001dd930; body: [[001dd930, 001ddafb]]

void FUN_001dd930(long param_1,undefined8 *param_2)

{
  int iVar1;
  int iVar2;
  void *__ptr;
  byte *pbVar3;
  size_t __size;
  long lVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  size_t __n;
  byte bVar9;
  uint uVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  char local_38 [24];
  
  if (7 < *(ulong *)(param_1 + 0x18)) {
    pbVar3 = *(byte **)(param_1 + 0x10);
    uVar10 = *(uint *)(pbVar3 + 2);
    bVar9 = (byte)(uVar10 >> 8);
    local_38[0] = '\0';
    local_38[1] = '\0';
    local_38[2] = '\0';
    local_38[3] = '\0';
    local_38[4] = '\0';
    local_38[5] = '\0';
    local_38[6] = '\0';
    local_38[7] = '\0';
    local_38[8] = '\0';
    local_38[9] = '\0';
    local_38[10] = '\0';
    local_38[0xb] = '\0';
    local_38[0xc] = '\0';
    local_38[0xd] = '\0';
    local_38[0xe] = '\0';
    local_38[0xf] = '\0';
    local_38[0x10] = '\0';
    local_38[0x11] = '\0';
    local_38[0x12] = '\0';
    local_38[0x13] = '\0';
    local_38[0x14] = '\0';
    local_38[0x15] = '\0';
    local_38[0x16] = '\0';
    local_38[0x17] = '\0';
    uVar6 = CONCAT12(bVar9,(ushort)(byte)uVar10) & 0xffff;
    uVar5 = uVar10 >> 0x10 & 0xff;
    iVar7 = -0x57;
    iVar2 = iVar7;
    if (0xf5 < (pbVar3[1] - 0x3a & 0xff)) {
      iVar2 = -0x30;
    }
    uVar13 = CONCAT44(uVar6 + 0xc6,uVar5 + 0xc6) & 0xff000000ff;
    uVar12 = CONCAT44(bVar9 + 0xc6,(uVar10 >> 0x18) + 0xc6) & 0xff000000ff;
    iVar8 = 9;
    iVar1 = iVar8;
    if (0xf5 < (*pbVar3 - 0x3a & 0xff)) {
      iVar1 = 0;
    }
    if (0xf5 < (pbVar3[7] - 0x3a & 0xff)) {
      iVar7 = -0x30;
    }
    if (0xf5 < (pbVar3[6] - 0x3a & 0xff)) {
      iVar8 = 0;
    }
    uVar13 = CONCAT44(-(uint)((uint)(uVar13 >> 0x20) < 0xf6),-(uint)((uint)uVar13 < 0xf6)) &
             0x900000009;
    uVar12 = CONCAT44(-(uint)((uint)(uVar12 >> 0x20) < 0xf6),-(uint)((uint)uVar12 < 0xf6)) &
             0x7900000079 ^ 0xd0000000d0;
    uVar11 = NEON_ushl(CONCAT44((int)(uVar12 >> 0x20) + (uint)bVar9 +
                                ((int)(uVar13 >> 0x20) + uVar6) * 0x10,
                                (int)uVar12 + (uVar10 >> 0x18) + ((int)uVar13 + uVar5) * 0x10) &
                       0xff000000ff,DAT_0011f5e8,4);
    iVar2 = snprintf(local_38,0x18,"%af",
                     (double)(float)(iVar7 + (uint)pbVar3[7] + (iVar8 + (uint)pbVar3[6]) * 0x10 &
                                     0xff | (iVar2 + (uint)pbVar3[1] +
                                            (iVar1 + (uint)*pbVar3) * 0x10) * 0x1000000 |
                                     (uint)uVar11 | (uint)((ulong)uVar11 >> 0x20)));
    if (iVar2 != 0) {
      lVar4 = param_2[1];
      __n = (size_t)iVar2;
      __ptr = (void *)*param_2;
      if ((ulong)param_2[2] < lVar4 + __n) {
        __size = param_2[2] * 2;
        uVar12 = lVar4 + __n + 0x3e0;
        if (__size < uVar12 || __size - uVar12 == 0) {
          __size = uVar12;
        }
        param_2[2] = __size;
        __ptr = realloc(__ptr,__size);
        *param_2 = __ptr;
        if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        lVar4 = param_2[1];
      }
      memcpy((void *)((long)__ptr + lVar4),local_38,__n);
      param_2[1] = param_2[1] + __n;
    }
  }
  return;
}


