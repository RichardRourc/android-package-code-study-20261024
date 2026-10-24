// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001bf0e4; body: [[001bf0e4, 001bf7eb]]

uint FUN_001bf0e4(void)

{
  long lVar1;
  bool bVar2;
  undefined8 uVar3;
  char *pcVar4;
  byte *pbVar5;
  ulong uVar6;
  ulong extraout_x1;
  ulong uVar7;
  int iVar8;
  code *pcVar9;
  code *pcVar10;
  int iVar11;
  ulong unaff_x19;
  uint uVar12;
  ulong uVar13;
  code *pcVar14;
  ulong unaff_x25;
  ulong unaff_x29;
  uint local_a8;
  uint local_a4;
  byte local_a0;
  undefined1 uStack_99;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbf4)])(auStack_98,&uStack_99);
  uVar3 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbca)])(auStack_98);
  (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbc9)])(auStack_80,uVar3,0x2000,1);
  (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbce)])(auStack_98);
  pcVar9 = (code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbcd)];
  uVar7 = extraout_x1;
  pcVar10 = pcVar9;
  iVar8 = -0x7381c205;
LAB_001bf208:
  while( true ) {
    iVar11 = iVar8;
    uVar13 = uVar7 & 0xffffffff;
    pcVar14 = (code *)((ulong)pcVar10 & 0xffffffff);
    uVar12 = (uint)uVar7;
    iVar8 = iVar11;
    if (iVar11 < 0x13b23d5) break;
    if (iVar11 < 0x548bef81) {
      if (iVar11 < 0xe2a31ec) {
        if (iVar11 == 0x13b23d5) {
          uVar7 = 0;
          pcVar10 = pcVar14;
          iVar8 = 0x8e9a75a;
          if ((local_a8 & 1) == 0) {
            iVar8 = 0x9b83a9a;
          }
        }
        else {
          uVar7 = unaff_x25 & 0xffffffff;
          pcVar10 = pcVar14;
          iVar8 = 0x9b83a9a;
          if ((iVar11 != 0x8e9a75a) && (uVar7 = uVar13, iVar8 = iVar11, iVar11 == 0x9b83a9a)) {
            iVar8 = -0x48177f6a;
            local_a4 = uVar12;
          }
        }
      }
      else if (iVar11 == 0xe2a31ec) {
        unaff_x19 = unaff_x19 + 10;
LAB_001bf6b0:
        uVar7 = uVar13;
        pcVar10 = pcVar14;
        iVar8 = -0x687d1a20;
      }
      else if (iVar11 == 0x4fe81526) {
        unaff_x25 = 1;
        uVar7 = uVar13;
        pcVar10 = pcVar14;
        iVar8 = -0x4e1c1e5c;
      }
      else {
        uVar7 = uVar13;
        pcVar10 = pcVar14;
        if (iVar11 == 0x52fbbf59) {
          unaff_x25 = 0;
          local_a8 = 0;
          goto LAB_001bf530;
        }
      }
    }
    else if (iVar11 < 0x6c1be148) {
      if (iVar11 == 0x548bef81) {
        pbVar5 = (byte *)(*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb8a)])
                                   (auStack_80,unaff_x19);
        local_a0 = *pbVar5 < 0x3a;
        uVar7 = uVar7 & 0xffffffff;
        pcVar10 = pcVar14;
        iVar8 = -0x9857924;
      }
      else if (iVar11 == 0x573165a1) {
        bVar2 = ((ulong)pcVar10 & 1) == 0;
        iVar8 = -0x331fcdd4;
        iVar11 = 0x52fbbf59;
LAB_001bf754:
        uVar7 = uVar13;
        pcVar10 = pcVar14;
        if (bVar2) {
          iVar8 = iVar11;
        }
      }
      else {
        uVar7 = uVar7 & 0xffffffff;
        pcVar10 = pcVar14;
        if (iVar11 == 0x6278e9d6) {
          (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbce)])(auStack_80);
          if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return local_a4 & 1;
        }
      }
    }
    else if (iVar11 == 0x6c1be148) {
      uVar6 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbc0)])(auStack_80);
      local_a0 = 0;
      uVar7 = uVar13;
      pcVar10 = pcVar14;
      iVar8 = -0x89259e5;
      if (uVar6 <= unaff_x19) {
        iVar8 = -0x9857924;
      }
    }
    else if (iVar11 == 0x75dc0c53) {
      local_a4 = 0;
      uVar7 = uVar7 & 0xffffffff;
      pcVar10 = pcVar14;
      iVar8 = -0x48177f6a;
    }
    else {
      uVar7 = uVar7 & 0xffffffff;
      pcVar10 = pcVar14;
      if (iVar11 == 0x7c997f3c) {
        pcVar4 = (char *)(*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb8a)])
                                   (auStack_80,unaff_x19);
        unaff_x29 = (ulong)(*pcVar4 == '\t');
        uVar7 = uVar13;
        iVar8 = -0x38f1db52;
      }
    }
  }
  if (iVar11 < -0x38f1db52) {
    if (iVar11 < -0x48177f6a) {
      if (iVar11 == -0x7381c205) {
        uVar6 = (*pcVar9)(auStack_80);
        uVar7 = uVar13;
        pcVar10 = pcVar14;
        iVar8 = -0x3e2c2eaa;
        if ((uVar6 & 1) == 0) {
          iVar8 = -0x416eced9;
        }
      }
      else if (iVar11 == -0x687d1a20) {
        uVar6 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbc0)])(auStack_80);
        uVar7 = uVar13;
        pcVar10 = (code *)0x0;
        iVar8 = -0x305e8320;
        if (uVar6 <= unaff_x19) {
          iVar8 = 0x573165a1;
        }
      }
      else {
        uVar7 = uVar13;
        pcVar10 = pcVar14;
        if (iVar11 == -0x4e1c1e5c) {
          unaff_x19 = unaff_x19 + 1;
LAB_001bf530:
          uVar7 = uVar13;
          pcVar10 = pcVar14;
          iVar8 = 0x6c1be148;
        }
      }
    }
    else {
      uVar7 = uVar13;
      pcVar10 = pcVar14;
      iVar8 = 0x6278e9d6;
      if (iVar11 != -0x48177f6a) {
        if (iVar11 == -0x416eced9) {
          (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb8b)])(auStack_98,&uStack_99);
          unaff_x19 = (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbcc)])
                                (auStack_80,auStack_98,0);
          (*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bbce)])(auStack_98);
          iVar8 = 0x75dc0c53;
          if (unaff_x19 != 0xffffffffffffffff) {
            iVar8 = 0xe2a31ec;
          }
        }
        else {
          iVar8 = iVar11;
          if (iVar11 == -0x3e2c2eaa) {
            local_a4 = 0;
            iVar8 = 0x6278e9d6;
          }
        }
      }
    }
    goto LAB_001bf208;
  }
  if (iVar11 < -0x1940d600) {
    uVar7 = uVar13;
    pcVar10 = (code *)(unaff_x29 & 0xffffffff);
    iVar8 = 0x573165a1;
    if (iVar11 == -0x38f1db52) goto LAB_001bf208;
    if (iVar11 == -0x331fcdd4) {
      unaff_x19 = unaff_x19 + 1;
      goto LAB_001bf6b0;
    }
    pcVar10 = pcVar14;
    iVar8 = iVar11;
    if (iVar11 != -0x305e8320) goto LAB_001bf208;
    pcVar4 = (char *)(*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb8a)])
                               (auStack_80,unaff_x19);
    unaff_x29 = 1;
    iVar11 = 0x7c997f3c;
    bVar2 = *pcVar4 == ' ';
    iVar8 = -0x38f1db52;
  }
  else {
    if (iVar11 != -0x1940d600) {
      if (iVar11 == -0x9857924) {
        iVar11 = 0x13b23d5;
        bVar2 = (local_a0 & 1) == 0;
        iVar8 = -0x1940d600;
        goto LAB_001bf754;
      }
      uVar7 = uVar13;
      pcVar10 = pcVar14;
      if (iVar11 == -0x89259e5) {
        pbVar5 = (byte *)(*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb8a)])
                                   (auStack_80,unaff_x19);
        local_a0 = 0;
        iVar8 = 0x548bef81;
        if (*pbVar5 < 0x30) {
          iVar8 = -0x9857924;
        }
      }
      goto LAB_001bf208;
    }
    pcVar4 = (char *)(*(code *)(&PTR_FUN_00203130)[(int)(DAT_00203af8 ^ 0x3f51bb8a)])
                               (auStack_80,unaff_x19);
    local_a8 = 1;
    iVar11 = 0x4fe81526;
    bVar2 = *pcVar4 == '0';
    iVar8 = -0x4e1c1e5c;
  }
  uVar7 = uVar13;
  pcVar10 = pcVar14;
  if (!bVar2) {
    iVar8 = iVar11;
  }
  goto LAB_001bf208;
}


