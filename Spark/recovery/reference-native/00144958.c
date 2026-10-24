// [[00144958, 00146913]]

uint FUN_00144958(long param_1,undefined8 param_2,long param_3,long param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  char cVar6;
  uint uVar7;
  undefined8 uVar8;
  ulong uVar9;
  int iVar10;
  uint unaff_w28;
  int unaff_w29;
  long local_190;
  long local_188;
  int local_17c;
  long local_178;
  long local_160;
  int local_154;
  long local_150;
  long local_148;
  long local_140;
  long local_138;
  long local_130;
  long local_128;
  long local_120;
  long local_110;
  long local_108;
  long local_100;
  long local_f8;
  long local_f0;
  undefined **local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined *local_70;
  undefined *local_68;
  
  lVar5 = tpidr_el0;
  iVar4 = -0x11078217;
  local_68 = *(undefined **)(lVar5 + 0x28);
  iVar1 = iVar4;
  if (param_1 != 0) {
    iVar1 = -0xc446803;
  }
  iVar2 = iVar4;
  if (param_4 != 0) {
    iVar2 = -0x4c6c65ea;
  }
  if (param_3 != 0) {
    iVar4 = 0x22889954;
  }
  iVar3 = -0x2d57c51;
LAB_00144a3c:
  while (iVar10 = iVar3, iVar3 = iVar10, iVar10 < 0x57bdc52) {
    if (iVar10 < -0x374d2ff8) {
      if (iVar10 < -0x53593129) {
        if (iVar10 < -0x686ab1c7) {
          if (iVar10 < -0x6cd61fd9) {
            if (iVar10 == -0x730c6d02) {
              FUN_00147868(param_1,local_d0);
              iVar3 = 0x668112a6;
            }
            else {
              iVar3 = 0x3b40409c;
              if ((iVar10 != -0x6f8555fd) && (iVar3 = iVar10, iVar10 == -0x6eecb709)) {
                FUN_001cd538(param_4,auStack_88)
                ;
                local_f8 = FUN_00147954
                                     (param_1,local_e0,local_160);
                cVar6 = FUN_00147948(param_1);
                iVar3 = -0x24a962b6;
                if (cVar6 != '\0') {
                  iVar3 = 0x2d0a123e;
                }
              }
            }
          }
          else {
            iVar3 = 0x309c2dd8;
            if (iVar10 != -0x6cd61fd9) {
              if (iVar10 == -0x6c1f089c) {
                FUN_00147a84
                          (auStack_b8,param_1,local_f8);
                FUN_00147d1c(param_3,auStack_b8)
                ;
                FUN_001cc928(auStack_b8);
                iVar3 = 0x2d0a123e;
              }
              else {
                iVar3 = iVar10;
                if (iVar10 == -0x693a0c86) {
                  iVar3 = -0x232c0baa;
                  if (local_130 != 0) {
                    iVar3 = -0x53593129;
                  }
                }
              }
            }
          }
        }
        else if (iVar10 < -0x6132670e) {
          if (iVar10 == -0x686ab1c7) {
            FUN_00147868(param_1,local_e0);
            iVar3 = -0x6ba1a04;
          }
          else if (iVar10 == -0x6801f02b) {
            FUN_001cc928(auStack_88);
            iVar3 = 0x39ed388;
          }
          else if (iVar10 == -0x67fec123) {
            FUN_0014778c(param_1);
            iVar3 = 0x78e2a4ea;
            if (local_100 != 0) {
              iVar3 = -0x4a7965f5;
            }
          }
        }
        else if (iVar10 == -0x6132670e) {
          iVar3 = -0x2f605059;
          if (local_d0 != 0) {
            iVar3 = 0x6ba34a12;
          }
        }
        else if (iVar10 == -0x5c34cf29) {
          iVar3 = -0x6132670e;
          if (local_108 != 0) {
            iVar3 = 0x378921dd;
          }
          local_d0 = local_120;
        }
        else if (iVar10 == -0x5aa1a89c) {
          if (*(undefined **)(lVar5 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return unaff_w28 & 1;
        }
      }
      else if (iVar10 < -0x491296d9) {
        if (iVar10 < -0x4cf9159c) {
          if (iVar10 == -0x53593129) {
            iVar3 = -0x232c0baa;
            if (local_138 != 0) {
              iVar3 = 0x65a31fda;
            }
          }
          else {
            iVar3 = -0x5aa1a89c;
            if ((iVar10 != -0x53316011) && (iVar3 = iVar10, iVar10 == -0x52edf697)) {
              iVar3 = 0x5f71c7d5;
              if (local_154 != 1) {
                iVar3 = 0x281ffbb2;
              }
            }
          }
        }
        else if (iVar10 == -0x4cf9159c) {
          FUN_0014778c(param_1);
          iVar3 = -0x13626037;
          if (local_d8 != 0) {
            iVar3 = 0x1f951d7a;
          }
        }
        else if (iVar10 == -0x4c6c65ea) {
          FUN_00157878
                    (&DAT_001fbb66,0x14,&DAT_002041b0,&DAT_001fbb66) /* b'org/json/JSONObject' */;
          local_c0 = FUN_00147780
                               (param_1,&DAT_001fbb66);
          FUN_00157878
                    (&DAT_001fbb7a,0x13,&DAT_002041b4,&DAT_001fbb7a) /* b'org/json/JSONArray' */;
          local_c8 = FUN_00147780
                               (param_1,&DAT_001fbb7a);
          iVar3 = 0x2de9b545;
          if (local_c0 != 0) {
            iVar3 = 0x7530983;
          }
        }
        else if (iVar10 == -0x4a7965f5) {
          FUN_00147868(param_1,local_100);
          iVar3 = 0x78e2a4ea;
        }
      }
      else if (iVar10 < -0x3bead160) {
        if (iVar10 == -0x491296d9) {
          FUN_0014778c(param_1);
          FUN_00147868(param_1,local_d0);
          FUN_00147868(param_1,local_d8);
          FUN_00147868(param_1,local_c0);
          FUN_00147868(param_1,local_c8);
          unaff_w28 = 0;
          unaff_w29 = 1;
          iVar3 = 0x3b40409c;
        }
        else if (iVar10 == -0x47212830) {
          FUN_00157878
                    (&DAT_001fbb8d,7,&DAT_002041b8,&DAT_001fbb8d) /* b'<init>' */;
          FUN_00157878
                    (&DAT_001fbb94,0x16,&DAT_002041bc,&DAT_001fbb94) /* b'(Ljava/lang/String;)V' */;
          local_190 = FUN_00147874
                                (param_1,local_c0,&DAT_001fbb8d,&DAT_001fbb94);
          FUN_00157878
                    (&DAT_001fbbaa,0xd,&DAT_002041c0,&DAT_001fbbaa) /* b'optJSONArray' */;
          FUN_00157878
                    (&DAT_001fbbb7,0x29,&DAT_002041c4,&DAT_001fbbb7) /* b'(Ljava/lang/String;)Lorg/json/JSONArray;' */;
          local_128 = FUN_00147874
                                (param_1,local_c0,&DAT_001fbbaa,&DAT_001fbbb7);
          FUN_00157878
                    (&DAT_001fbbe0,0xe,&DAT_002041c8,&DAT_001fbbe0) /* b'optJSONObject' */;
          FUN_00157878
                    (&DAT_001fbbee,0x19,&DAT_002041cc,&DAT_001fbbee) /* b'(I)Lorg/json/JSONObject;' */;
          local_130 = FUN_00147874
                                (param_1,local_c8,&DAT_001fbbe0,&DAT_001fbbee);
          FUN_00157878
                    (&DAT_001fbc07,7,&DAT_002041d0,&DAT_001fbc07) /* b'length' */;
          FUN_00157878
                    (&DAT_001fbc0e,4,&DAT_002041d4,&DAT_001fbc0e) /* b'()I' */;
          local_138 = FUN_00147874
                                (param_1,local_c8,&DAT_001fbc07,&DAT_001fbc0e);
          FUN_00157878
                    (&DAT_001fbc12,7,&DAT_002041d8,&DAT_001fbc12) /* b'optInt' */;
          FUN_00157878
                    (&DAT_001fbc19,0x17,&DAT_002041dc,&DAT_001fbc19) /* b'(Ljava/lang/String;I)I' */;
          local_140 = FUN_00147874
                                (param_1,local_c0,&DAT_001fbc12,&DAT_001fbc19);
          FUN_00157878
                    (&DAT_001fbc30,10,&DAT_002041e0,&DAT_001fbc30) /* b'optString' */;
          FUN_00157878
                    (&DAT_001fbc3a,0x39,&DAT_002041e4,&DAT_001fbc3a) /* b'(Ljava/lang/String;Ljava/lang/String;)Ljava/lang/String;' */;
          local_148 = FUN_00147874
                                (param_1,local_c0,&DAT_001fbc30,&DAT_001fbc3a);
          FUN_00157878
                    (&DAT_001fbc73,9,&DAT_002041e8,&DAT_001fbc73) /* b'toString' */;
          FUN_00157878
                    (&DAT_001fbc7c,0x15,&DAT_002041ec,&DAT_001fbc7c) /* b'()Ljava/lang/String;' */;
          local_160 = FUN_00147874
                                (param_1,local_c0,&DAT_001fbc73,&DAT_001fbc7c);
          iVar3 = -0x232c0baa;
          if (local_190 != 0) {
            iVar3 = -0x3bead160;
          }
        }
        else if (iVar10 == -0x41681bfa) {
          local_d8 = FUN_001478b0
                               (param_1,local_c0,local_190,local_178);
          FUN_00147868(param_1,local_178);
          iVar3 = -0x4cf9159c;
          if (local_d8 != 0) {
            iVar3 = 0x436a331e;
          }
        }
      }
      else if (iVar10 == -0x3bead160) {
        iVar3 = -0x232c0baa;
        if (local_128 != 0) {
          iVar3 = -0x693a0c86;
        }
      }
      else if (iVar10 == -0x3a430a18) {
        iVar3 = -0x491296d9;
        if (0 < local_17c) {
          iVar3 = 0x18c6e2d5;
        }
      }
      else if (iVar10 == -0x39e3d5f5) {
        local_150 = 0;
        iVar3 = 0xe95a350;
      }
    }
    else if (iVar10 < -0x18d207ff) {
      if (iVar10 < -0x24a962b6) {
        if (iVar10 < -0x2f51bb35) {
          if (iVar10 == -0x374d2ff8) {
            FUN_00147868(param_1,local_f8);
            iVar3 = -0x33f927d6;
          }
          else if (iVar10 == -0x33f927d6) {
            FUN_00147868(param_1,local_e0);
            FUN_00147868(param_1,local_d0);
            FUN_00147868(param_1,local_d8);
            FUN_00147868(param_1,local_c0);
            FUN_00147868(param_1,local_c8);
            uVar7 = FUN_00135028(param_3);
            unaff_w29 = 1;
            unaff_w28 = uVar7 ^ 1;
            iVar3 = -0x6801f02b;
          }
          else if (iVar10 == -0x2f605059) {
            FUN_0014778c(param_1);
            iVar3 = 0x668112a6;
            if (local_d0 != 0) {
              iVar3 = -0x730c6d02;
            }
          }
        }
        else if (iVar10 == -0x2f51bb35) {
          FUN_001cd538(auStack_88,auStack_a0);
          unaff_w29 = 2;
          iVar3 = 0x7625e200;
        }
        else if (iVar10 == -0x28bf0b94) {
          unaff_w29 = 2;
          iVar3 = 0x41ca7239;
        }
        else if (iVar10 == -0x25aaa9d4) {
LAB_00145870:
          iVar3 = 0x6a2e1326;
        }
      }
      else if (iVar10 < -0x1d608cde) {
        if (iVar10 == -0x24a962b6) {
          iVar3 = 0x2d0a123e;
          if (local_f8 != 0) {
            iVar3 = -0x6c1f089c;
          }
        }
        else if (iVar10 == -0x232c0baa) {
          FUN_0014778c(param_1);
          FUN_00147868(param_1,local_c0);
          FUN_00147868(param_1,local_c8);
          unaff_w28 = 0;
          unaff_w29 = 1;
          iVar3 = 0x7e0a9779;
        }
        else if (iVar10 == -0x219767ec) {
          uVar8 = FUN_0014788c(param_2);
          local_178 = FUN_00147880
                                (param_1,uVar8);
          iVar3 = 0x6b5da722;
          if (local_178 != 0) {
            iVar3 = -0x41681bfa;
          }
        }
      }
      else if (iVar10 == -0x1d608cde) {
        local_17c = FUN_001479ec
                              (param_1,local_d0,local_138);
        cVar6 = FUN_00147948(param_1);
        iVar3 = -0x3a430a18;
        if (cVar6 != '\0') {
          iVar3 = -0x491296d9;
        }
      }
      else if (iVar10 == -0x1b3cdb5a) {
        FUN_00157878
                  (&DAT_001fbc96,4,&DAT_002041f4,&DAT_001fbc96) /* b'isE' */;
        local_188 = FUN_00147880
                              (param_1,&DAT_001fbc96);
        local_154 = 0;
        iVar3 = 0x6fa55686;
        if (local_188 != 0) {
          iVar3 = 0x501aedb1;
        }
      }
      else if (iVar10 == -0x195b2193) {
        FUN_00147868(param_1,local_c8);
        iVar3 = -0x82aafaf;
      }
    }
    else if (iVar10 < -0x82aafaf) {
      if (iVar10 < -0x11078217) {
        if (iVar10 == -0x18d207ff) {
          local_110 = FUN_00147880
                                (param_1,*local_e8);
          iVar3 = -0x39e3d5f5;
          if (local_110 != 0) {
            iVar3 = 0x507e3c5f;
          }
        }
        else if (iVar10 == -0x1754812e) {
          iVar3 = -0x232c0baa;
          if (local_160 != 0) {
            iVar3 = -0x219767ec;
          }
        }
        else if (iVar10 == -0x13626037) {
          FUN_00147868(param_1,local_c0);
          FUN_00147868(param_1,local_c8);
          unaff_w28 = 0;
          unaff_w29 = 1;
          iVar3 = -0x6cd61fd9;
        }
      }
      else if (iVar10 == -0x11078217) {
        unaff_w28 = 0;
        iVar3 = -0x5aa1a89c;
      }
      else if (iVar10 == -0xe8d1717) {
        FUN_00157878
                  (&DAT_001fbc91,5,&DAT_002041f0,&DAT_001fbc91) /* b'data' */;
        local_108 = FUN_00147880
                              (param_1,&DAT_001fbc91);
        iVar3 = 0x1d81e685;
        if (local_108 != 0) {
          iVar3 = 0x71a2a3e5;
        }
      }
      else if (iVar10 == -0xc446803) {
        uVar9 = FUN_00135028(param_2);
        iVar3 = -0x11078217;
        if ((uVar9 & 1) == 0) {
          iVar3 = 0x265e7c3f;
        }
      }
    }
    else if (iVar10 < -0x2d57c51) {
      if (iVar10 == -0x82aafaf) {
        unaff_w28 = 0;
        unaff_w29 = 1;
        iVar3 = -0x53316011;
      }
      else if (iVar10 == -0x6ba1a04) {
        FUN_00147868(param_1,local_d0);
        FUN_00147868(param_1,local_d8);
        FUN_00147868(param_1,local_c0);
        FUN_00147868(param_1,local_c8);
        unaff_w28 = 0;
        unaff_w29 = 1;
        iVar3 = -0x6f8555fd;
      }
      else if (iVar10 == -0x389b278) {
        FUN_00147868(param_1,local_110);
        iVar3 = 0x3fba496e;
      }
    }
    else {
      iVar3 = iVar1;
      if (iVar10 != -0x2d57c51) {
        if (iVar10 == 0x1bcfab2) {
          unaff_w29 = 0;
          iVar3 = 0x7625e200;
        }
        else {
          iVar3 = iVar10;
          if (iVar10 == 0x39ed388) {
            iVar3 = -0x6f8555fd;
          }
        }
      }
    }
  }
  if (0x42f62c81 < iVar10) {
    if (0x65a31fd9 < iVar10) {
      if (iVar10 < 0x708c3921) {
        if (0x6b5da721 < iVar10) {
          if (iVar10 == 0x6b5da722) {
            FUN_0014778c(param_1);
            FUN_00147868(param_1,local_c0);
            FUN_00147868(param_1,local_c8);
            unaff_w28 = 0;
            unaff_w29 = 1;
            iVar3 = 0x309c2dd8;
          }
          else if (iVar10 == 0x6ba34a12) {
            cVar6 = FUN_00147948(param_1);
            iVar3 = -0x1d608cde;
            if (cVar6 != '\0') {
              iVar3 = -0x2f605059;
            }
          }
          else if (iVar10 == 0x6fa55686) {
            cVar6 = FUN_00147948(param_1);
            iVar3 = -0x52edf697;
            if (cVar6 != '\0') {
              iVar3 = 0x281ffbb2;
            }
          }
          goto LAB_00144a3c;
        }
        if (iVar10 == 0x65a31fda) {
          iVar3 = -0x232c0baa;
          if (local_140 != 0) {
            iVar3 = 0x560372f1;
          }
          goto LAB_00144a3c;
        }
        if (iVar10 == 0x668112a6) {
          FUN_00147868(param_1,local_d8);
          FUN_00147868(param_1,local_c0);
          FUN_00147868(param_1,local_c8);
          unaff_w28 = 0;
          unaff_w29 = 1;
          iVar3 = 0x30a83cb6;
          goto LAB_00144a3c;
        }
        if (iVar10 != 0x6a2e1326) goto LAB_00144a3c;
      }
      else {
        if (iVar10 < 0x7625e200) {
          if (iVar10 == 0x708c3921) {
            iVar3 = 0x75b125f8;
            if (local_100 != 0) {
              iVar3 = 0x41918e0c;
            }
          }
          else if (iVar10 == 0x71a2a3e5) {
            local_120 = FUN_00147954
                                  (param_1,local_d8,local_128,local_108);
            iVar3 = -0x5c34cf29;
          }
          else if (iVar10 == 0x75b125f8) {
            unaff_w29 = 0;
            iVar3 = 0x639caacd;
          }
          goto LAB_00144a3c;
        }
        if (iVar10 != 0x7625e200) {
          if (iVar10 == 0x78e2a4ea) {
            unaff_w29 = 3;
            iVar3 = 0x639caacd;
          }
          else if (iVar10 == 0x7e0a9779) {
            iVar3 = -0x53316011;
          }
          goto LAB_00144a3c;
        }
        FUN_001cc928(auStack_a0);
        if (unaff_w29 != 3) {
          iVar3 = 0x75b125f8;
          if (unaff_w29 != 0) goto LAB_00144a34;
          goto LAB_00144a3c;
        }
      }
LAB_00145b90:
      local_e8 = local_e8 + 1;
LAB_00145fac:
      iVar3 = 0x20fbb84a;
      goto LAB_00144a3c;
    }
    if (0x539ea2b5 < iVar10) {
      if (iVar10 < 0x5d2bc4f8) {
        if (iVar10 == 0x539ea2b6) {
          cVar6 = FUN_00147948(param_1);
          iVar3 = -0x1b3cdb5a;
          if (cVar6 != '\0') {
            iVar3 = 0x5d2bc4f8;
          }
          goto LAB_00144a3c;
        }
        if (iVar10 == 0x560372f1) {
          iVar3 = -0x232c0baa;
          if (local_148 != 0) {
            iVar3 = -0x1754812e;
          }
          goto LAB_00144a3c;
        }
        if (iVar10 != 0x5c99984b) goto LAB_00144a3c;
      }
      else {
        if (iVar10 == 0x5d2bc4f8) {
          FUN_0014778c(param_1);
          iVar3 = -0x6ba1a04;
          if (local_e0 != 0) {
            iVar3 = -0x686ab1c7;
          }
          goto LAB_00144a3c;
        }
        if (iVar10 == 0x5f71c7d5) {
          local_f0 = FUN_00147880
                               (param_1,&DAT_0011dd07);
          FUN_00135064(auStack_88);
          local_70 = &DAT_001fbc9a /* XOR0xaa: aesKey */;
          local_e8 = &local_70;
          goto LAB_00145fac;
        }
        if (iVar10 != 0x639caacd) goto LAB_00144a3c;
        if (unaff_w29 == 3) goto LAB_00145b90;
        if (unaff_w29 != 0) goto LAB_00144a34;
      }
      unaff_w29 = 0;
      iVar3 = 0x57bdc52;
      goto LAB_00144a3c;
    }
    if (iVar10 < 0x4c063994) {
      if (iVar10 == 0x42f62c82) {
        FUN_00147868(param_1,local_c0);
        iVar3 = 0x3a4d25c1;
      }
      else if (iVar10 == 0x436a331e) {
        cVar6 = FUN_00147948(param_1);
        iVar3 = -0xe8d1717;
        if (cVar6 != '\0') {
          iVar3 = -0x4cf9159c;
        }
      }
      else if (iVar10 == 0x45c8e06f) {
        iVar3 = 0x75b125f8;
      }
    }
    else if (iVar10 == 0x4c063994) {
      local_150 = FUN_00147954
                            (param_1,local_e0,local_148,local_110,local_f0);
      iVar3 = 0xe95a350;
    }
    else if (iVar10 == 0x501aedb1) {
      local_154 = FUN_001479ec
                            (param_1,local_e0,local_140,local_188,0);
      FUN_00147868(param_1,local_188);
      iVar3 = 0x6fa55686;
    }
    else if (iVar10 == 0x507e3c5f) {
      iVar3 = -0x39e3d5f5;
      if (local_f0 != 0) {
        iVar3 = 0x4c063994;
      }
    }
    goto LAB_00144a3c;
  }
  if (iVar10 < 0x2de9b545) {
    if (0x1f951d79 < iVar10) {
      if (iVar10 < 0x265e7c3f) {
        if (iVar10 == 0x1f951d7a) {
          FUN_00147868(param_1,local_d8);
          iVar3 = -0x13626037;
        }
        else if (iVar10 == 0x20fbb84a) {
          iVar3 = -0x28bf0b94;
          if (local_e8 != &local_68) {
            iVar3 = -0x18d207ff;
          }
        }
        else if (iVar10 == 0x22889954) {
          iVar3 = iVar2;
        }
      }
      else {
        iVar3 = iVar4;
        if (iVar10 != 0x265e7c3f) {
          if (iVar10 == 0x281ffbb2) {
            FUN_0014778c(param_1);
            FUN_00147868(param_1,local_e0);
            FUN_00147868(param_1,local_d0);
            FUN_00147868(param_1,local_d8);
            FUN_00147868(param_1,local_c0);
            FUN_00147868(param_1,local_c8);
            unaff_w28 = 0;
            unaff_w29 = 1;
            iVar3 = 0x39ed388;
          }
          else {
            iVar3 = iVar10;
            if (iVar10 == 0x2d0a123e) {
              FUN_0014778c(param_1);
              iVar3 = -0x33f927d6;
              if (local_f8 != 0) {
                iVar3 = -0x374d2ff8;
              }
            }
          }
        }
      }
      goto LAB_00144a3c;
    }
    if (0x18c6e2d4 < iVar10) {
      if (iVar10 == 0x18c6e2d5) {
        local_e0 = FUN_00147954
                             (param_1,local_d0,local_130,0);
        iVar3 = 0x5d2bc4f8;
        if (local_e0 != 0) {
          iVar3 = 0x539ea2b6;
        }
      }
      else if (iVar10 == 0x1d81e685) {
        local_120 = 0;
        iVar3 = -0x5c34cf29;
      }
      else if (iVar10 == 0x1e254579) {
        uVar9 = FUN_00135028(auStack_88);
        iVar3 = 0x353b72f5;
        if ((uVar9 & 1) == 0) {
          iVar3 = -0x6eecb709;
        }
      }
      goto LAB_00144a3c;
    }
    if (iVar10 != 0x57bdc52) {
      if (iVar10 == 0x7530983) {
        iVar3 = 0x2de9b545;
        if (local_c8 != 0) {
          iVar3 = -0x47212830;
        }
      }
      else if (iVar10 == 0xe95a350) {
        iVar3 = 0x3fba496e;
        if (local_110 != 0) {
          iVar3 = -0x389b278;
        }
        local_100 = local_150;
      }
      goto LAB_00144a3c;
    }
    if (unaff_w29 == 3) goto LAB_00145b90;
    if (unaff_w29 == 0) goto LAB_00145870;
  }
  else {
    if (iVar10 < 0x3a4d25c1) {
      if (iVar10 < 0x353b72f5) {
        if (iVar10 == 0x2de9b545) {
          FUN_0014778c(param_1);
          iVar3 = 0x3a4d25c1;
          if (local_c0 != 0) {
            iVar3 = 0x42f62c82;
          }
        }
        else {
          iVar3 = 0x7e0a9779;
          if ((iVar10 != 0x309c2dd8) && (iVar3 = iVar10, iVar10 == 0x30a83cb6)) {
            iVar3 = -0x6cd61fd9;
          }
        }
      }
      else if (iVar10 == 0x353b72f5) {
        FUN_00147868(param_1,local_e0);
        FUN_00147868(param_1,local_d0);
        FUN_00147868(param_1,local_d8);
        FUN_00147868(param_1,local_c0);
        FUN_00147868(param_1,local_c8);
        unaff_w28 = 0;
        unaff_w29 = 1;
        iVar3 = -0x6801f02b;
      }
      else if (iVar10 == 0x378921dd) {
        FUN_00147868(param_1,local_108);
        iVar3 = -0x6132670e;
      }
      else if (iVar10 == 0x3980a7cb) {
        FUN_00147868(param_1,local_f0);
        iVar3 = 0x1e254579;
      }
      goto LAB_00144a3c;
    }
    if (iVar10 < 0x3fba496e) {
      if (iVar10 == 0x3a4d25c1) {
        iVar3 = -0x82aafaf;
        if (local_c8 != 0) {
          iVar3 = -0x195b2193;
        }
      }
      else {
        iVar3 = 0x30a83cb6;
        if ((iVar10 != 0x3b40409c) && (iVar3 = iVar10, iVar10 == 0x3b6b0454)) {
          iVar3 = 0x1e254579;
          if (local_f0 != 0) {
            iVar3 = 0x3980a7cb;
          }
        }
      }
      goto LAB_00144a3c;
    }
    if (iVar10 == 0x3fba496e) {
      cVar6 = FUN_00147948(param_1);
      iVar3 = 0x708c3921;
      if (cVar6 != '\0') {
        iVar3 = -0x67fec123;
      }
      goto LAB_00144a3c;
    }
    if (iVar10 == 0x41918e0c) {
      FUN_00147a84(auStack_b8,param_1,local_100)
      ;
      FUN_00138aac(auStack_a0,auStack_b8);
      FUN_001cc928(auStack_b8);
      FUN_00147868(param_1,local_100);
      uVar9 = FUN_00135028(auStack_a0);
      iVar3 = 0x1bcfab2;
      if ((uVar9 & 1) == 0) {
        iVar3 = -0x2f51bb35;
      }
      goto LAB_00144a3c;
    }
    if (iVar10 != 0x41ca7239) goto LAB_00144a3c;
  }
LAB_00144a34:
  iVar3 = 0x3b6b0454;
  goto LAB_00144a3c;
}


