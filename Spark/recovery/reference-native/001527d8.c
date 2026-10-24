// [[001527d8, 00153187]]

uint FUN_001527d8(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  byte *pbVar10;
  int iVar11;
  int unaff_w22;
  uint unaff_w23;
  long unaff_x24;
  ulong unaff_x26;
  int local_e4;
  ulong local_e0;
  ulong local_d0;
  ulong local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 auStack_98 [24];
  byte local_80 [4];
  undefined1 auStack_7c [4];
  undefined1 auStack_78 [4];
  byte abStack_74 [12];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  iVar1 = 0x2bbf87d2;
  if (param_3 != 0) {
    iVar1 = -0x7f7d4c68;
  }
  iVar3 = -0x4b16ade2;
LAB_00152870:
  while (iVar5 = iVar3, iVar3 = iVar5, 0xda57d2b < iVar5) {
    if (iVar5 < 0x504b4d8b) {
      if (iVar5 < 0x2bbf87d2) {
        if (iVar5 < 0x2939b79a) {
          if (iVar5 == 0xda57d2c) goto LAB_00152c50;
          if (iVar5 == 0x19112ae9) {
            local_a8 = FUN_00135808(auStack_98);
            FUN_00135868(&local_a0,&local_a8);
            local_b0 = FUN_0013b888(param_1);
            uVar7 = FUN_0013d724
                              (&local_b0,unaff_x24);
            local_b8 = FUN_0013b888(param_1);
            unaff_x24 = local_d0 + unaff_x24;
            uVar8 = FUN_0013d724
                              (&local_b8,unaff_x24);
            FUN_0013b804
                      (auStack_98,local_a0,uVar7,uVar8);
            unaff_w22 = 0;
            iVar3 = -0x713556e2;
          }
          else if (iVar5 == 0xf7d15c8) {
            if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
              __stack_chk_fail();
            }
            return unaff_w23 & 1;
          }
        }
        else if (iVar5 == 0x2939b79a) {
          FUN_00135430(auStack_98);
          FUN_00135460(auStack_98,unaff_x26);
          iVar3 = -0x6f28641c;
        }
        else if (iVar5 == 0x2a18f49b) {
          uVar7 = FUN_00140224(param_2);
          FUN_0013eb3c(param_1);
          uVar4 = FUN_00156234();
          FUN_0015623c(uVar7,uVar4,abStack_74);
          local_c0 = 0;
          iVar3 = -0x25311e30;
        }
      }
      else if (iVar5 < 0x3ddc1ee3) {
        if (iVar5 == 0x2bbf87d2) goto LAB_00152fa0;
        if (iVar5 == 0x2f80ca1f) {
          FUN_00150a20(param_3,auStack_98);
          unaff_w22 = 1;
          unaff_w23 = 1;
          iVar3 = 0x632ef0ce;
        }
      }
      else if (iVar5 == 0x3ddc1ee3) {
        iVar5 = FUN_001564c0(auStack_98);
        iVar3 = 0x2f80ca1f;
        if (iVar5 != local_e4) {
          iVar3 = 0x532722ea;
        }
      }
      else if (iVar5 == 0x3e5cb910) {
        local_c0 = local_c0 + 1;
        iVar3 = -0x25311e30;
      }
    }
    else if (iVar5 < 0x63262f50) {
      if (iVar5 < 0x5f48e4a2) {
        if (iVar5 == 0x504b4d8b) {
          unaff_w23 = 0;
          unaff_w22 = 1;
          iVar3 = -0x2b4a446b;
        }
        else {
          iVar11 = 0x532722ea;
LAB_00152bfc:
          if (iVar5 == iVar11) {
            unaff_w23 = 0;
            unaff_w22 = 1;
            iVar3 = 0x632ef0ce;
          }
        }
      }
      else {
        iVar3 = -0x6f28641c;
        if ((iVar5 != 0x5f48e4a2) && (iVar3 = iVar5, iVar5 == 0x5fd0255e)) {
          lVar9 = FUN_00135340(param_2);
          iVar3 = 0x2a18f49b;
          if (lVar9 != 0x10) {
            iVar3 = 0x71e9b247;
          }
        }
      }
    }
    else if (iVar5 < 0x71e9b247) {
      iVar3 = -0x2b4a446b;
      if ((iVar5 != 0x63262f50) && (iVar3 = iVar5, iVar5 == 0x632ef0ce)) goto LAB_00153084;
    }
    else if (iVar5 == 0x71e9b247) {
LAB_00152fa0:
      unaff_w23 = 0;
      iVar3 = 0xf7d15c8;
    }
    else if (iVar5 == 0x7dedfecc) {
      uVar6 = FUN_00135328(param_1);
      iVar3 = -0x535b70b2;
      if (unaff_x24 + 2U <= uVar6) {
        iVar3 = 0x4a630f2;
      }
    }
  }
  if (iVar5 < -0x4327c4b5) {
    if (iVar5 < -0x6371e27e) {
      if (iVar5 < -0x713556e2) {
        if (iVar5 == -0x7f7d4c68) {
          uVar6 = FUN_00135328(param_1);
          iVar3 = 0x2bbf87d2;
          if (0xf < uVar6) {
            iVar3 = 0x5fd0255e;
          }
        }
        else if (iVar5 == -0x7e45cca9) {
          uVar6 = FUN_00153924
                            ((ulong)local_80 | 2);
          local_e0 = uVar6 & 0xffff;
          uVar6 = FUN_00156234(auStack_7c);
          unaff_x26 = uVar6 & 0xffffffff;
          local_e4 = FUN_00156234(auStack_78);
          uVar6 = FUN_00135328(param_1);
          unaff_x24 = 0x10;
          iVar3 = -0x352046de;
          if (local_e0 + 0x10 <= uVar6) {
            iVar3 = -0x1f94be16;
          }
        }
      }
      else if (iVar5 == -0x713556e2) {
        iVar3 = -0x6f28641c;
        if (unaff_w22 != 0) {
LAB_00153084:
          FUN_00135a2c(auStack_98);
          iVar3 = 0x63262f50;
        }
      }
      else if (iVar5 == -0x6f28641c) {
        uVar6 = FUN_00135328(auStack_98);
        iVar3 = 0x7dedfecc;
        if (unaff_x26 <= uVar6) {
          iVar3 = 0x3ddc1ee3;
        }
      }
      goto LAB_00152870;
    }
    if (-0x5141c0c0 < iVar5) {
      if (iVar5 == -0x5141c0bf) {
        iVar3 = -0x4aa2b3e;
      }
      else if (iVar5 == -0x4b16ade2) {
        iVar3 = iVar1;
      }
      goto LAB_00152870;
    }
    if (iVar5 != -0x6371e27e) {
      iVar11 = -0x535b70b2;
      goto LAB_00152bfc;
    }
  }
  else {
    if (-0x25311e31 < iVar5) {
      if (iVar5 < -0x1d6f28f3) {
        if (iVar5 == -0x25311e30) {
          iVar3 = -0x1d6f28f3;
          if (0xb < local_c0) {
            iVar3 = -0x5141c0bf;
          }
        }
        else if (iVar5 == -0x1f94be16) {
          unaff_x24 = unaff_x24 + local_e0;
          uVar6 = FUN_00135328(param_1);
          iVar3 = 0xda57d2c;
          if (unaff_x26 <= uVar6) {
            iVar3 = 0x2939b79a;
          }
        }
      }
      else if (iVar5 == -0x1d6f28f3) {
        pbVar10 = (byte *)FUN_0013e590
                                    (param_1,local_c0 + 4);
        local_80[local_c0] = abStack_74[local_c0] ^ *pbVar10;
        iVar3 = 0x3e5cb910;
      }
      else if (iVar5 == -0x4aa2b3e) {
        iVar3 = -0x7e45cca9;
        if (local_80[0] != 2) {
          iVar3 = 0x504b4d8b;
        }
      }
      else if (iVar5 == 0x4a630f2) {
        uVar6 = FUN_0015644c(param_1,unaff_x24);
        local_d0 = uVar6 & 0xffff;
        unaff_x24 = unaff_x24 + 2;
        uVar6 = FUN_00135328(param_1);
        iVar3 = -0x4327c4b5;
        if (unaff_x24 + local_d0 <= uVar6) {
          iVar3 = -0x25f3f0d5;
        }
      }
      goto LAB_00152870;
    }
    if (-0x2b4a446c < iVar5) {
      if (iVar5 == -0x2b4a446b) {
        iVar3 = 0xf7d15c8;
      }
      else if (iVar5 == -0x25f3f0d5) {
        lVar9 = FUN_00135328(auStack_98);
        iVar3 = -0x6371e27e;
        if (lVar9 + local_d0 <= unaff_x26) {
          iVar3 = 0x19112ae9;
        }
      }
      goto LAB_00152870;
    }
    if (iVar5 != -0x4327c4b5) {
      if (iVar5 == -0x352046de) {
LAB_00152c50:
        unaff_w23 = 0;
        unaff_w22 = 1;
        iVar3 = 0x63262f50;
      }
      goto LAB_00152870;
    }
  }
  unaff_w23 = 0;
  unaff_w22 = 1;
  iVar3 = -0x713556e2;
  goto LAB_00152870;
}


