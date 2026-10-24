// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00149d44; body: [[00149d44, 0014ab5b]]

long FUN_00149d44(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  char cVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  int iVar11;
  long unaff_x27;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  
  iVar1 = -0x71451916;
  if (param_2 != 0) {
    iVar1 = -0x2544247a;
  }
  iVar2 = -0x71451916;
  if (param_1 != 0) {
    iVar2 = 0x6cb71980;
  }
  lVar10 = param_2;
  iVar9 = 0x46bed15c;
LAB_00149dfc:
  iVar11 = iVar9;
  lVar8 = lVar10;
  iVar9 = iVar11;
  lVar10 = lVar8;
  if (iVar11 < -0x97b2d6f) {
    if (iVar11 < -0x46570e9a) {
      if (-0x5c14c785 < iVar11) {
        if (iVar11 < -0x543bfa7e) {
          if (iVar11 == -0x5c14c784) {
            (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_1,local_68);
            iVar9 = 0x44b80162;
          }
          else if (iVar11 == -0x5be47757) {
            (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b21)])
                      (&DAT_001fbb8d,7,&DAT_002041b8,&DAT_001fbb8d);
            (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b21)])
                      (&DAT_001fbe57,0x30,&DAT_00204268,&DAT_001fbe57);
            local_c0 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2f)])
                                 (param_1,local_78,&DAT_001fbb8d,&DAT_001fbe57);
            uVar7 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b58)])(param_3);
            local_80 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8ba5)])
                                 (param_1,uVar7);
            iVar9 = 0x751b556d;
            if (local_68 != 0) {
              iVar9 = -0x20de3bbb;
            }
            local_c8 = local_b8;
          }
          else if (iVar11 == -0x55477a2f) {
            (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_1,unaff_x27);
            unaff_x27 = 0;
            iVar9 = -0x1418e29a;
          }
        }
        else {
          if (iVar11 == -0x543bfa7e) {
            (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2d)])(param_1);
            bVar3 = unaff_x27 == 0;
            iVar9 = -0x1418e29a;
            iVar11 = -0x55477a2f;
            goto LAB_00149df4;
          }
          if (iVar11 == -0x511d4aa0) {
            (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b21)])
                      (&DAT_001fbdd6,0x25,&DAT_00204250,&DAT_001fbdd6);
            local_78 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2c)])
                                 (param_1,&DAT_001fbdd6);
            iVar9 = -0x5e653aa;
            if (local_78 != 0) {
              iVar9 = -0x2fdef219;
            }
          }
          else if (iVar11 == -0x51e47a24) {
            return lVar8;
          }
        }
        goto LAB_00149dfc;
      }
      if (-0x71451917 < iVar11) {
        if (iVar11 == -0x71451916) {
          lVar10 = 0;
          iVar9 = -0x51e47a24;
        }
        else if (iVar11 == -0x7089be24) {
          (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2d)])(param_1);
LAB_0014a5c0:
          iVar9 = 0x1bb82172;
        }
        else if (iVar11 == -0x6397bb9f) {
          (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b21)])
                    (&DAT_001fbdfb,0x14,&DAT_00204254,&DAT_001fbdfb);
          local_68 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2c)])
                               (param_1,&DAT_001fbdfb);
          local_70 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8ba3)])
                               (param_1,param_2);
          iVar9 = 0x639506d7;
          if (local_68 != 0) {
            iVar9 = -0x97b2d6f;
          }
        }
        goto LAB_00149dfc;
      }
      if (iVar11 == -0x7eb75d93) {
        (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_1,local_80);
        (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_1,local_78);
        (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_1,local_68);
        iVar11 = -0x394e406;
        bVar3 = local_70 == 0;
        iVar9 = -0x21cc8202;
        goto LAB_00149df4;
      }
      if (iVar11 != -0x7e6a0b1f) {
        if (iVar11 == -0x715b5f10) goto LAB_0014a5c0;
        goto LAB_00149dfc;
      }
      iVar11 = 0x21ad03a2;
      bVar3 = local_88 == 0;
      iVar9 = -0x7089be24;
    }
    else {
      if (iVar11 < -0x2544247a) {
        if (iVar11 < -0x2fdef219) {
          if (iVar11 == -0x46570e9a) {
            iVar11 = 0x16d3e86a;
            lVar10 = local_c0;
            goto LAB_00149de8;
          }
          if (iVar11 != -0x35e74163) goto LAB_00149dfc;
          (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b21)])
                    (&DAT_001fbe2e,0xf,&DAT_00204260,&DAT_001fbe2e);
          (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b21)])
                    (&DAT_001fbe3d,0x1a,&DAT_00204264,&DAT_001fbe3d);
          local_b8 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2f)])
                               (param_1,local_70,&DAT_001fbe2e,&DAT_001fbe3d);
        }
        else {
          if (iVar11 == -0x2fdef219) {
            cVar4 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b33)])(param_1);
            iVar9 = -0x6397bb9f;
            if (cVar4 != '\0') {
              iVar9 = -0x5e653aa;
            }
            goto LAB_00149dfc;
          }
          if (iVar11 != -0x2e7dfb7b) {
            if (iVar11 == -0x2d95145c) {
              iVar9 = -0x51e47a24;
            }
            goto LAB_00149dfc;
          }
          local_b8 = 0;
        }
        iVar9 = -0x5be47757;
        goto LAB_00149dfc;
      }
      if (iVar11 < -0x1aff72b4) {
        if (iVar11 == -0x2544247a) {
          uVar6 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8ba2)])(param_3);
          iVar9 = -0x71451916;
          if ((uVar6 & 1) == 0) {
            iVar9 = -0x511d4aa0;
          }
        }
        else {
          lVar10 = unaff_x27;
          iVar9 = 0x4310cd17;
          if ((iVar11 != -0x21cc8202) && (lVar10 = lVar8, iVar9 = iVar11, iVar11 == -0x20de3bbb)) {
            iVar11 = 0x28bf893b;
            lVar10 = local_a8;
            goto LAB_00149de8;
          }
        }
        goto LAB_00149dfc;
      }
      if (iVar11 == -0x1aff72b4) {
        iVar11 = 0x4f541b11;
        bVar3 = local_88 == 0;
        iVar9 = -0x7eb75d93;
        goto LAB_00149df4;
      }
      iVar9 = -0x715b5f10;
      if ((iVar11 == -0x1418e29a) || (iVar9 = iVar11, iVar11 != -0xc6a02da)) goto LAB_00149dfc;
      iVar11 = 0x467161f7;
      bVar3 = local_80 == 0;
      iVar9 = -0x638bc53;
    }
  }
  else if (iVar11 < 0x2ef0b51e) {
    if (iVar11 < 0x19c48436) {
      if (iVar11 < -0x5e653aa) {
        if (iVar11 == -0x97b2d6f) {
          (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b21)])
                    (&DAT_001fbe0f,5,&DAT_00204258,&DAT_001fbe0f);
          (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b21)])
                    (&DAT_001fbe14,0x1a,&DAT_0020425c,&DAT_001fbe14);
          local_b0 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8ba4)])
                               (param_1,local_68,&DAT_001fbe0f,&DAT_001fbe14);
LAB_0014a820:
          iVar9 = 0x472eba15;
        }
        else if (iVar11 == -0x638bc53) {
          lVar10 = 0;
          iVar9 = 0x4310cd17;
        }
        goto LAB_00149dfc;
      }
      if (iVar11 == -0x5e653aa) {
        (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2d)])(param_1);
        lVar10 = 0;
        iVar9 = -0x2d95145c;
        goto LAB_00149dfc;
      }
      if (iVar11 == -0x394e406) {
        (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_1,local_70);
        iVar9 = -0x21cc8202;
        goto LAB_00149dfc;
      }
      if (iVar11 != 0x16d3e86a) goto LAB_00149dfc;
      iVar11 = 0x4b007dab;
      lVar10 = local_80;
    }
    else {
      if (iVar11 < 0x215af3fa) {
        if (iVar11 == 0x19c48436) {
          unaff_x27 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b32)])
                                (param_1,local_78,local_c0,local_90,local_88);
          cVar4 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b33)])(param_1);
          iVar9 = -0x715b5f10;
          if (cVar4 != '\0') {
            iVar9 = -0x543bfa7e;
          }
        }
        else {
          if (iVar11 == 0x1bb82172) {
            iVar11 = 0x1eae0b29;
            bVar3 = local_90 == 0;
            iVar9 = -0x1aff72b4;
            goto LAB_00149df4;
          }
          if (iVar11 == 0x1eae0b29) {
            (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_1,local_90);
            iVar9 = -0x1aff72b4;
          }
        }
        goto LAB_00149dfc;
      }
      if (iVar11 == 0x215af3fa) {
        (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_1,local_78);
        iVar9 = 0x6f8c524e;
        goto LAB_00149dfc;
      }
      if (iVar11 == 0x21ad03a2) {
        cVar4 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b33)])(param_1);
        iVar9 = 0x19c48436;
        if (cVar4 != '\0') {
          iVar9 = -0x7089be24;
        }
        goto LAB_00149dfc;
      }
      if (iVar11 != 0x28bf893b) goto LAB_00149dfc;
      iVar11 = -0x46570e9a;
      lVar10 = local_c8;
    }
LAB_00149de8:
    bVar3 = lVar10 == 0;
    iVar9 = 0x751b556d;
  }
  else if (iVar11 < 0x4b007dab) {
    if (0x467161f6 < iVar11) {
      if (iVar11 == 0x467161f7) {
        (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_1,local_80);
        iVar9 = -0x638bc53;
      }
      else {
        iVar9 = iVar2;
        if ((iVar11 != 0x46bed15c) && (iVar9 = iVar11, iVar11 == 0x472eba15)) {
          iVar9 = -0x2e7dfb7b;
          if (local_70 != 0) {
            iVar9 = -0x35e74163;
          }
          local_a8 = local_b0;
        }
      }
      goto LAB_00149dfc;
    }
    if (iVar11 == 0x2ef0b51e) {
      (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_1,local_70);
      iVar9 = -0xc6a02da;
      goto LAB_00149dfc;
    }
    iVar9 = -0x2d95145c;
    if ((iVar11 == 0x4310cd17) || (iVar9 = iVar11, iVar11 != 0x44b80162)) goto LAB_00149dfc;
    iVar11 = 0x2ef0b51e;
    bVar3 = local_70 == 0;
    iVar9 = -0xc6a02da;
  }
  else if (iVar11 < 0x6cb71980) {
    if (iVar11 != 0x4b007dab) {
      if (iVar11 == 0x4f541b11) {
        (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2e)])(param_1,local_88);
        iVar9 = -0x7eb75d93;
      }
      else if (iVar11 == 0x639506d7) {
        local_b0 = 0;
        goto LAB_0014a820;
      }
      goto LAB_00149dfc;
    }
    uVar5 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b58)])(param_3);
    uVar7 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b57)])(param_3);
    (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8ba6)])(param_1,local_80,0,uVar5,uVar7)
    ;
    local_90 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8ba7)])
                         (param_1,local_68,local_a8,local_80);
    local_88 = (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b34)])
                         (param_1,param_2,local_c8);
    unaff_x27 = 0;
    bVar3 = local_90 == 0;
    iVar9 = -0x7089be24;
    iVar11 = -0x7e6a0b1f;
  }
  else {
    iVar9 = iVar1;
    if (iVar11 == 0x6cb71980) goto LAB_00149dfc;
    if (iVar11 == 0x6f8c524e) {
      iVar11 = -0x5c14c784;
      bVar3 = local_68 == 0;
      iVar9 = 0x44b80162;
    }
    else {
      iVar9 = iVar11;
      if (iVar11 != 0x751b556d) goto LAB_00149dfc;
      (*(code *)(&PTR_FUN_001fc070)[(int)(DAT_001fcf68 ^ 0x283c8b2d)])(param_1);
      iVar11 = 0x215af3fa;
      bVar3 = local_78 == 0;
      iVar9 = 0x6f8c524e;
    }
  }
LAB_00149df4:
  lVar10 = lVar8;
  if (!bVar3) {
    iVar9 = iVar11;
  }
  goto LAB_00149dfc;
}


