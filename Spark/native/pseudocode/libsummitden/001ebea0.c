// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001ebea0; body: [[001ebea0, 001ec34f]]

undefined8
FUN_001ebea0(undefined8 param_1,undefined8 param_2,undefined8 param_3,void *param_4,
            undefined1 *param_5,ulong param_6)

{
  bool bVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong uVar12;
  long *plVar13;
  int *piVar14;
  uint uVar15;
  ulong uVar16;
  undefined1 auStack_d38 [528];
  undefined1 auStack_b28 [288];
  ulong local_a08 [96];
  undefined1 auStack_708 [24];
  int local_6f0 [2];
  long local_6e8 [67];
  undefined8 local_4d0;
  ulong uStack_4c8;
  undefined1 auStack_e8 [48];
  undefined1 local_b8;
  byte local_b6;
  char local_b4;
  undefined1 auStack_b0 [48];
  undefined8 local_80;
  ulong uStack_78;
  
  lVar8 = FUN_001eb3fc(param_1,param_3,auStack_b0,auStack_e8,0);
  if (lVar8 == 0) {
    memset(auStack_708,0,0x620);
    uVar9 = FUN_001ec350(param_1,auStack_b0,auStack_e8,param_2,4,auStack_708);
    if ((uVar9 & 1) != 0) {
      uVar9 = FUN_001ece28(param_1,auStack_708,param_4);
      if (((param_6 & 1) != 0) && (local_b4 == '\x01')) {
        for (uVar12 = *(ulong *)((long)param_4 + 0xf8) & 0xfffffffffffffff0; uVar12 < uVar9;
            uVar12 = uVar12 + 0x10) {
        }
      }
      memcpy(local_a08 + 0x1e,param_4,0x210);
      uVar12 = 0;
      lVar8 = 0;
      piVar14 = local_6f0;
      local_a08[0x3d] = uVar9;
      do {
        puVar3 = PTR___sF_001f6b60;
        iVar2 = *piVar14;
        if (iVar2 == 0) {
          uVar16 = local_a08[0x3b];
          uVar5 = local_a08[0x3c];
          uVar6 = local_a08[0x3d];
          uVar7 = local_a08[0x3e];
          if (uVar12 == local_b6) {
            if (local_b6 < 0x1f) {
              plVar13 = (long *)((long)param_4 + 0xe8);
              if ((local_b6 != 0x1d) && (plVar13 = (long *)((long)param_4 + 0xf0), local_b6 != 0x1e)
                 ) goto LAB_001ec154;
            }
            else {
              plVar13 = (long *)((long)param_4 + 0x108);
              if ((local_b6 != 0x22) &&
                 ((plVar13 = (long *)((long)param_4 + 0x100), local_b6 != 0x20 &&
                  (plVar13 = (long *)((long)param_4 + 0xf8), local_b6 != 0x1f)))) {
LAB_001ec154:
                if (0x1c < local_b6) {
                  fprintf((FILE *)(PTR___sF_001f6b60 + 0x130),"w4j375t7av %s - %s\n","getRegister",
                          "45jnt2ktb68e0cpv4ckvjdha7z");
                  fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
                  abort();
                }
                plVar13 = (long *)((long)param_4 + (ulong)local_b6 * 8);
              }
            }
            lVar8 = *plVar13;
          }
        }
        else {
          uVar15 = (uint)uVar12;
          if ((uVar15 & 0x60) == 0x40) {
            if (iVar2 < 5) {
              uVar16 = 0;
              if (iVar2 != 1) {
                if (iVar2 != 2) {
LAB_001ec2b4:
                  fprintf((FILE *)(PTR___sF_001f6b60 + 0x130),"w4j375t7av %s - %s\n",
                          "getSavedFloatRegister","unsupported restore location for float register")
                  ;
                  fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
                  abort();
                }
                uVar16 = *(ulong *)(*(long *)(piVar14 + 2) + uVar9);
              }
            }
            else if (iVar2 == 5) {
              uVar16 = *(ulong *)((long)param_4 +
                                 ((*(long *)(piVar14 + 2) << 0x20) + -0x4000000000 >> 0x1d) + 0x110)
              ;
            }
            else {
              if (iVar2 != 6) goto LAB_001ec2b4;
              puVar10 = (ulong *)FUN_001ed6c0(*(undefined8 *)(piVar14 + 2),param_1,param_4,uVar9);
              uVar16 = *puVar10;
            }
            local_a08[uVar12] = uVar16;
            uVar16 = local_a08[0x3b];
            uVar5 = local_a08[0x3c];
            uVar6 = local_a08[0x3d];
            uVar7 = local_a08[0x3e];
          }
          else if (uVar12 == local_b6) {
            lVar8 = FUN_001ecf5c(param_1,param_4,uVar9,piVar14);
            uVar16 = local_a08[0x3b];
            uVar5 = local_a08[0x3c];
            uVar6 = local_a08[0x3d];
            uVar7 = local_a08[0x3e];
          }
          else if (uVar12 == 0x22) {
            local_a08[0x3f] = FUN_001ecf5c(param_1,param_4,uVar9,piVar14);
            uVar16 = local_a08[0x3b];
            uVar5 = local_a08[0x3c];
            uVar6 = local_a08[0x3d];
            uVar7 = local_a08[0x3e];
          }
          else {
            if (0x20 < uVar12) {
              return 0xffffe672;
            }
            uVar11 = FUN_001ecf5c(param_1,param_4,uVar9,piVar14);
            puVar3 = PTR___sF_001f6b60;
            uVar16 = local_a08[0x3b];
            uVar5 = local_a08[0x3c];
            uVar6 = local_a08[0x3d];
            uVar7 = local_a08[0x3e];
            if ((int)uVar15 < 0x1f) {
              uVar16 = uVar11;
              if ((uVar15 != 0x1d) && (uVar16 = local_a08[0x3b], uVar5 = uVar11, uVar15 != 0x1e)) {
LAB_001ec180:
                if (0x1c < uVar12) {
                  fprintf((FILE *)(PTR___sF_001f6b60 + 0x130),"w4j375t7av %s - %s\n","setRegister",
                          "45jnt2ktb68e0cpv4ckvjdha7z");
                  fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
                  abort();
                }
                local_a08[uVar12 + 0x1e] = uVar11;
                uVar16 = local_a08[0x3b];
                uVar5 = local_a08[0x3c];
                uVar6 = local_a08[0x3d];
                uVar7 = local_a08[0x3e];
              }
            }
            else {
              uVar6 = uVar11;
              if ((uVar15 != 0x1f) && (uVar6 = local_a08[0x3d], uVar7 = uVar11, uVar15 != 0x20))
              goto LAB_001ec180;
            }
          }
        }
        local_a08[0x3e] = uVar7;
        local_a08[0x3d] = uVar6;
        local_a08[0x3c] = uVar5;
        local_a08[0x3b] = uVar16;
        uVar12 = uVar12 + 1;
        piVar14 = piVar14 + 4;
        if (uVar12 == 0x60) {
          *param_5 = local_b8;
          memcpy(auStack_b28,param_4,0x210);
          uStack_78 = uStack_4c8;
          local_80 = local_4d0;
          uVar4 = local_80;
          local_80._0_4_ = (int)local_4d0;
          bVar1 = (int)local_80 != 0;
          uVar12 = uStack_4c8;
          if (bVar1) {
            local_80 = uVar4;
            uVar12 = FUN_001ecf5c(param_1,auStack_b28,uVar9,&local_80);
          }
          if (((uVar12 & 1) != 0) && (lVar8 != 0)) {
            memcpy(auStack_d38,param_4,0x210);
            uStack_78 = uStack_4c8;
            local_80 = local_4d0;
            uVar4 = local_80;
            local_80._0_4_ = (int)local_4d0;
            bVar1 = (int)local_80 != 0;
            if (bVar1) {
              local_80 = uVar4;
              FUN_001ecf5c(param_1,auStack_d38,uVar9,&local_80);
            }
          }
          local_a08[0x3e] = lVar8;
          memcpy(param_4,local_a08 + 0x1e,0x210);
          return 1;
        }
      } while( true );
    }
  }
  return 0xffffe66e;
}


