// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 001fc4b0; body: [[001fc4b0, 001fd06f]]

void FUN_001fc4b0(int *param_1,long *param_2,uint param_3,undefined8 param_4)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  bool bVar5;
  void *pvVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  int unaff_w24;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_84;
  int local_74;
  undefined8 local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  local_70 = 0;
  local_74 = 0;
  pvVar6 = calloc(1,0x68);
  plVar2 = (long *)0xc879bc31bae5bb14;
  if (pvVar6 != (void *)0x0) {
    plVar2 = (long *)&DAT_c45038db124ae016;
  }
  plVar4 = plVar2;
  plVar10 = (long *)0x36f07785a64d7584;
LAB_001fc5fc:
  plVar11 = plVar10;
  plVar9 = plVar4;
  plVar10 = plVar11;
  plVar4 = plVar9;
  if ((long)plVar11 < -0x111819a4994f0fa) {
    if (-0x34ce59f19df91130 < (long)plVar11) {
      if ((long)plVar11 < -0x29504ee3cf2d5633) {
        if ((long)plVar11 < -0x2ef756f1c7496e5f) {
          plVar10 = (long *)0xd1a28e2b92bbcc90;
          if ((plVar11 != (long *)0xcb31a60e6206eed1) &&
             (plVar10 = plVar11, plVar11 == (long *)0xce95d05271a8da34)) {
            bVar5 = *(int *)((long)pvVar6 + 0x38) == *(int *)((long)pvVar6 + 0x20);
            plVar9 = (long *)0x65536dc2a8308acd;
            plVar10 = (long *)0xc7bf249d1db72b2;
            goto LAB_001fc5f4;
          }
        }
        else if (plVar11 == (long *)0xd108a90e38b691a1) {
          local_9c = (int)local_70;
          uVar7 = FUN_001f4fdc(param_1,&local_74,4,1,param_4);
          plVar10 = (long *)0x483dcbc36ada42c4;
          if ((uVar7 & 1) == 0) {
            plVar10 = (long *)0xcb31a60e6206eed1;
          }
        }
        else {
          if (plVar11 == (long *)0xd14700cedc0a1544) goto LAB_001fcc4c;
          if (plVar11 == (long *)0xd1a28e2b92bbcc90) {
            if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
              __stack_chk_fail();
            }
            return;
          }
        }
        goto LAB_001fc5fc;
      }
      if ((long)plVar11 < -0x189dd9be034f6f3a) {
        if ((plVar11 != (long *)0xd6afb11c30d2a9cd) && (plVar11 != (long *)0xe48eaf6f29f5caa2))
        goto LAB_001fc5fc;
      }
      else {
        if (plVar11 == (long *)0xe7622641fcb090c6) {
          *plVar9 = (long)pvVar6;
          param_2[1] = (long)pvVar6 + 0x60;
          plVar10 = (long *)0x34ee749c3dc3cf5c;
          bVar5 = *param_1 == 0;
          plVar9 = (long *)0x87b1ff2df68e38ae;
          goto LAB_001fc5f4;
        }
        if (plVar11 != (long *)0xed1f071ea6fe1ede) {
          if (plVar11 == (long *)0xfda5c16090bb3af4) goto LAB_001fca74;
          goto LAB_001fc5fc;
        }
      }
LAB_001fcc4c:
      unaff_w24 = 8;
LAB_001fcc50:
      plVar10 = (long *)0xabed3acad0e23c86;
      goto LAB_001fc5fc;
    }
    if ((long)plVar11 < -0x405b680ffecd4131) {
      if ((long)plVar11 < -0x6bf42222db0ad31d) {
        plVar4 = param_2;
        plVar10 = (long *)0xe7622641fcb090c6;
        if ((plVar11 != (long *)0x8500be9b057d300e) &&
           (plVar4 = plVar9, plVar10 = plVar11, plVar11 == (long *)0x87b1ff2df68e38ae)) {
LAB_001fca74:
          plVar4 = plVar9;
          plVar10 = (long *)0xd1a28e2b92bbcc90;
        }
      }
      else {
        if (plVar11 == (long *)0x940bdddd24f52ce3) {
          FUN_001fbc54(param_1,pvVar6,local_94,param_4);
          bVar5 = *param_1 == 0;
          plVar10 = (long *)0xfb13253120e52d5;
          plVar9 = (long *)0x3007aa9d32d99be8;
          goto LAB_001fc5f4;
        }
        if (plVar11 == (long *)0xabed3acad0e23c86) {
          *param_1 = unaff_w24;
          plVar10 = (long *)0xd1a28e2b92bbcc90;
        }
      }
      goto LAB_001fc5fc;
    }
    if (-0x3cc327df2eecc1c7 < (long)plVar11) {
      plVar10 = (long *)0xd1a28e2b92bbcc90;
      if (plVar11 != (long *)0xc33cd820d1133e3a) {
        if (plVar11 == (long *)&DAT_c45038db124ae016) {
          lVar8 = *param_2;
          *(void **)((long)pvVar6 + 8) = pvVar6;
          *(long *)((long)pvVar6 + 0x18) = (long)pvVar6 + 0x10;
          plVar10 = (long *)0x8500be9b057d300e;
          if (lVar8 != 0) {
            plVar10 = (long *)0xc0f51250277e5cfd;
          }
          *(long *)((long)pvVar6 + 0x30) = (long)pvVar6 + 0x28;
          *(long *)((long)pvVar6 + 0x48) = (long)pvVar6 + 0x40;
        }
        else {
          plVar10 = plVar11;
          if (plVar11 == (long *)0xc879bc31bae5bb14) {
            unaff_w24 = 1;
            goto LAB_001fcc50;
          }
        }
      }
      goto LAB_001fc5fc;
    }
    if (plVar11 != (long *)0xbfa497f00132becf) {
      if (plVar11 == (long *)0xc0f51250277e5cfd) {
        plVar4 = (long *)param_2[1];
        plVar10 = (long *)0xe7622641fcb090c6;
      }
      goto LAB_001fc5fc;
    }
    FUN_001f8350(param_1,(long)pvVar6 + 0x40,local_98,param_4);
    bVar5 = *param_1 == 0;
    plVar10 = (long *)0xd108a90e38b691a1;
    plVar9 = (long *)0x5eda44100212fa2c;
  }
  else if ((long)plVar11 < 0x32f4713bcaf93571) {
    if (0x22f3f9cf91cbb9a5 < (long)plVar11) {
      if ((long)plVar11 < 0x29ff0ff794febe2e) {
        if (plVar11 == (long *)0x22f3f9cf91cbb9a6) {
          local_94 = local_70._4_4_;
          uVar1 = local_70._4_4_ + 4;
          plVar9 = (long *)0x940bdddd24f52ce3;
          plVar10 = (long *)0xe48eaf6f29f5caa2;
          goto LAB_001fcfa0;
        }
        if (plVar11 == (long *)0x27963d1423e000f6) goto LAB_001fcc0c;
      }
      else {
        plVar10 = (long *)0xd1a28e2b92bbcc90;
        if (((plVar11 != (long *)0x29ff0ff794febe2e) && (plVar11 != (long *)0x3007aa9d32d99be8)) &&
           (plVar10 = plVar11, plVar11 == (long *)0x31b9d74c89a90fe3)) {
          uVar7 = FUN_001f4fdc(param_1,(long)pvVar6 + 0x3c,4,1,param_4);
          plVar10 = (long *)0xce95d05271a8da34;
          if ((uVar7 & 1) == 0) {
            plVar10 = (long *)0x32f4713bcaf93571;
          }
        }
      }
      goto LAB_001fc5fc;
    }
    if ((long)plVar11 < 0xfb13253120e52d5) {
      if (plVar11 == (long *)0xfeee7e65b66b0f06) {
        uVar7 = FUN_001f4fdc(param_1,&local_70,4,1,param_4);
        plVar10 = (long *)0x3ace195dd3930386;
        if ((uVar7 & 1) == 0) {
          plVar10 = (long *)0x3b16db62a3c2f4fb;
        }
      }
      else if (plVar11 == (long *)0xc7bf249d1db72b2) {
        plVar10 = (long *)0xfeee7e65b66b0f06;
        if (*(int *)((long)pvVar6 + 0x3c) != *(int *)((long)pvVar6 + 0x24)) {
          plVar10 = (long *)0x27963d1423e000f6;
        }
      }
      goto LAB_001fc5fc;
    }
    if (plVar11 == (long *)0xfb13253120e52d5) {
      local_84 = local_70._4_4_;
      uVar7 = FUN_001f4fdc(param_1,(long)pvVar6 + 0x38,4,1,param_4);
      plVar10 = (long *)0x31b9d74c89a90fe3;
      if ((uVar7 & 1) == 0) {
        plVar10 = (long *)0xfda5c16090bb3af4;
      }
      goto LAB_001fc5fc;
    }
    if (plVar11 != (long *)0x1db468c64d6a7ed0) goto LAB_001fc5fc;
    FUN_001f9f24(param_1,(long)pvVar6 + 0x50,local_a4,param_4);
    bVar5 = *param_1 == 0;
    plVar10 = (long *)0x54c2b837d86711b8;
    plVar9 = (long *)0xc33cd820d1133e3a;
  }
  else {
    if ((long)plVar11 < 0x483dcbc36ada42c4) {
      if ((long)plVar11 < 0x36f07785a64d7584) {
        plVar10 = (long *)0xd1a28e2b92bbcc90;
        if ((plVar11 != (long *)0x32f4713bcaf93571) &&
           (plVar10 = plVar11, plVar11 == (long *)0x34ee749c3dc3cf5c)) {
          uVar7 = FUN_001f4fdc(param_1,(long)&local_70 + 4,4,1,param_4);
          plVar10 = (long *)0x22f3f9cf91cbb9a6;
          if ((uVar7 & 1) == 0) {
            plVar10 = (long *)0x29ff0ff794febe2e;
          }
        }
      }
      else {
        plVar10 = plVar2;
        if (plVar11 != (long *)0x36f07785a64d7584) {
          if (plVar11 == (long *)0x3ace195dd3930386) {
            local_98 = (int)local_70;
            uVar1 = local_84 + (int)local_70 + 0x10;
            plVar9 = (long *)0xbfa497f00132becf;
            plVar10 = (long *)0xed1f071ea6fe1ede;
LAB_001fcfa0:
            if (uVar1 <= param_3) {
              plVar10 = plVar9;
            }
          }
          else {
            plVar10 = plVar11;
            if (plVar11 == (long *)0x3b16db62a3c2f4fb) goto LAB_001fca74;
          }
        }
      }
      goto LAB_001fc5fc;
    }
    if (0x55dcd19dee737a19 < (long)plVar11) {
      plVar10 = (long *)0xd1a28e2b92bbcc90;
      if (((plVar11 != (long *)0x55dcd19dee737a1a) && (plVar11 != (long *)0x5eda44100212fa2c)) &&
         (plVar10 = plVar11, plVar11 == (long *)0x65536dc2a8308acd)) {
LAB_001fcc0c:
        unaff_w24 = 9;
        goto LAB_001fcc50;
      }
      goto LAB_001fc5fc;
    }
    if (plVar11 == (long *)0x483dcbc36ada42c4) {
      local_a4 = local_74;
      local_a0 = local_84 + local_9c + 0x14;
      plVar10 = (long *)0xd6afb11c30d2a9cd;
      if ((uint)(local_74 + local_a0) <= param_3) {
        plVar10 = (long *)0x1db468c64d6a7ed0;
      }
      goto LAB_001fc5fc;
    }
    if (plVar11 != (long *)0x54c2b837d86711b8) goto LAB_001fc5fc;
    bVar5 = local_74 + local_a0 == param_3;
    plVar9 = (long *)0xd14700cedc0a1544;
    plVar10 = (long *)0x55dcd19dee737a1a;
  }
LAB_001fc5f4:
  if (!bVar5) {
    plVar10 = plVar9;
  }
  goto LAB_001fc5fc;
}


