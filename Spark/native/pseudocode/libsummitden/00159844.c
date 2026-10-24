// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00159844; body: [[00159844, 0015a407]]

void FUN_00159844(undefined8 param_1,long param_2,undefined1 *param_3,long param_4,
                 undefined1 *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined1 *puVar10;
  bool bVar11;
  char cVar12;
  undefined1 *puVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  int iVar17;
  long local_90;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  
  iVar6 = 0x1b308d4e;
  iVar1 = iVar6;
  if (param_3 != (undefined1 *)0x0) {
    iVar1 = 0x2579b536;
  }
  iVar2 = iVar6;
  if (param_4 != 0) {
    iVar2 = -0x6717c054;
  }
  if (param_2 != 0) {
    iVar6 = -0x734ba668;
  }
  bVar11 = param_5 != (undefined1 *)0x0;
  iVar3 = 0x1504b4bd;
  iVar7 = -0x40242960;
  if (bVar11) {
    iVar3 = 0x4e252fad;
    iVar7 = -0x1549ac6c;
  }
  iVar4 = 0x64812e8e;
  if (bVar11) {
    iVar4 = -0x66b19458;
  }
  iVar5 = -0x3e9426d1;
  iVar8 = -0x75f37da9;
  iVar9 = -0x5cd3418d;
  if (bVar11) {
    iVar5 = -0x25a1af5b;
    iVar8 = 0x27e285aa;
    iVar9 = -0x72eb7918;
  }
  puVar10 = param_3;
  iVar17 = -0x2190de4d;
LAB_0015998c:
  iVar15 = iVar17;
  puVar13 = puVar10;
  puVar10 = puVar13;
  iVar17 = iVar15;
  if (iVar15 < -0x1549ac6c) {
    if (iVar15 < -0x4930997e) {
      if (iVar15 < -0x66b19458) {
        if (iVar15 < -0x72eb7918) {
          if (iVar15 == -0x75f37da9) {
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aea)])(param_1);
            goto LAB_0015a260;
          }
          iVar14 = iVar1;
          if (iVar15 != -0x734ba668) goto LAB_0015998c;
        }
        else {
          if (iVar15 == -0x72eb7918) {
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae4)])(param_1,param_5);
            goto LAB_0015a2ac;
          }
          if (iVar15 != -0x706608be) {
            if (iVar15 == -0x6717c054) {
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                        (&DAT_001fd25c,0x22,&DAT_00204310,&DAT_001fd25c);
              local_80 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae8)])
                                   (param_2,&DAT_001fd25c);
              iVar17 = 0x7b8e3a08;
              if (local_80 != 0) {
                iVar17 = -0x55d750d7;
              }
            }
            goto LAB_0015998c;
          }
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aef)])(param_2,local_78);
          iVar14 = -0x4930997e;
        }
      }
      else if (iVar15 < -0x590fbb0a) {
        puVar10 = param_5;
        iVar17 = -0x421a59a1;
        if (iVar15 == -0x66b19458) goto LAB_0015998c;
        if (iVar15 == -0x602b4b4c) {
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae9)])(param_2);
          iVar14 = 0x60731930;
          if (local_68 != 0) {
            iVar14 = -0x405ec2e8;
          }
        }
        else {
          puVar10 = puVar13;
          iVar17 = iVar15;
          if (iVar15 != -0x5cd3418d) goto LAB_0015998c;
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aea)])(param_1);
LAB_0015a2ac:
          iVar14 = 0x5ef3fc97;
        }
      }
      else {
        if (iVar15 != -0x590fbb0a) {
          if (iVar15 != -0x55d750d7) {
            iVar14 = -0x5402ac1f;
            goto LAB_00159f58;
          }
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                    (&DAT_001fd27e,10,&DAT_00204314,&DAT_001fd27e);
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                    (&DAT_001fd288,0x39,&DAT_00204318,&DAT_001fd288);
          local_90 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aee)])
                               (param_2,local_80,&DAT_001fd27e,&DAT_001fd288);
          iVar17 = -0x7ba7259;
          if (local_90 != 0) {
            iVar17 = 0x5dda47c;
          }
          goto LAB_0015998c;
        }
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aef)])(param_2,local_70);
        iVar14 = 0x1e4aa90a;
      }
    }
    else if (iVar15 < -0x394010be) {
      if (iVar15 < -0x405ec2e8) {
        if (iVar15 == -0x4930997e) {
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aef)])(param_2,local_68);
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aef)])(param_2,local_70);
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aef)])(param_2,local_80);
          goto LAB_0015a218;
        }
        if (iVar15 != -0x42f9389a) {
          if (iVar15 == -0x421a59a1) {
            local_70 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ad8)])
                                 (param_2,puVar13);
            iVar17 = 0x5d83c450;
            lVar16 = local_68;
            goto LAB_00159e50;
          }
          goto LAB_0015998c;
        }
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae9)])(param_2);
        local_78 = 0;
        iVar14 = -0x7d74c0b;
      }
      else if (iVar15 == -0x405ec2e8) {
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aef)])(param_2,local_68);
        iVar14 = 0x60731930;
      }
      else {
        if (iVar15 == -0x40242960) {
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aea)])(param_1);
          goto LAB_0015a1bc;
        }
        if (iVar15 != -0x3e9426d1) goto LAB_0015998c;
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aea)])(param_1);
LAB_00159eb4:
        iVar14 = -0x692f853;
      }
    }
    else if (iVar15 < -0x2467fd16) {
      if (iVar15 == -0x394010be) goto LAB_00159980;
      if (iVar15 != -0x3429099d) {
        if (iVar15 == -0x25a1af5b) {
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae4)])(param_1,param_5);
          goto LAB_00159eb4;
        }
        goto LAB_0015998c;
      }
      (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae3)])(param_1);
LAB_0015a218:
      iVar14 = 0x29944158;
    }
    else {
      iVar17 = 0x7ca2295c;
      if (iVar15 == -0x2467fd16) goto LAB_0015998c;
      iVar14 = iVar6;
      if (iVar15 != -0x2190de4d) {
        iVar17 = iVar15;
        if (iVar15 != -0x1f9ffe71) goto LAB_0015998c;
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae2)])(param_1,param_2,local_78);
        iVar14 = 0x7ca2295c;
      }
    }
  }
  else if (iVar15 < 0x2579b536) {
    if (iVar15 < 0x5dda47c) {
      if (iVar15 < -0x7d74c0b) {
        if (iVar15 == -0x1549ac6c) {
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae4)])(param_1,param_5);
LAB_0015a1bc:
          iVar14 = -0x394010be;
          goto LAB_00159988;
        }
        iVar17 = iVar3;
        if (iVar15 == -0x10a2fe9e) goto LAB_0015998c;
        iVar14 = -0xaf6c134;
LAB_00159f58:
        iVar17 = iVar15;
        if (iVar15 != iVar14) goto LAB_0015998c;
        iVar14 = 0x7241b815;
      }
      else if (iVar15 == -0x7d74c0b) {
        iVar14 = -0x10a2fe9e;
        if (local_78 != 0) {
          iVar14 = -0x1f9ffe71;
        }
      }
      else {
        if (iVar15 != -0x7ba7259) {
          if (iVar15 == -0x692f853) goto LAB_00159fe4;
          goto LAB_0015998c;
        }
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae9)])(param_2);
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aef)])(param_2,local_80);
        iVar14 = iVar5;
      }
    }
    else if (iVar15 < 0x1e4aa90a) {
      if (iVar15 == 0x5dda47c) {
        local_68 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ad8)])(param_2,param_4)
        ;
        iVar14 = iVar4;
      }
      else if (iVar15 == 0x1504b4bd) {
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aea)])(param_1);
LAB_0015a134:
        iVar14 = -0x2467fd16;
      }
      else {
        iVar14 = iVar8;
        if (iVar15 != 0x1b308d4e) goto LAB_0015998c;
      }
    }
    else if (iVar15 == 0x1e4aa90a) {
      (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aef)])(param_2,local_80);
      iVar14 = iVar9;
    }
    else {
      if (iVar15 != 0x20c76319) {
        if (iVar15 == 0x229890cb) {
          local_78 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aec)])
                               (param_2,param_3,local_90,local_68,local_70);
          cVar12 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aed)])(param_2);
          iVar17 = -0x7d74c0b;
          if (cVar12 != '\0') {
            iVar17 = -0x42f9389a;
          }
        }
        goto LAB_0015998c;
      }
LAB_00159980:
      iVar14 = -0x5402ac1f;
    }
  }
  else {
    if (0x5ef3fc96 < iVar15) {
      if (iVar15 < 0x7241b815) {
        if (iVar15 == 0x5ef3fc97) goto LAB_00159ff0;
        if (iVar15 == 0x60731930) {
          iVar14 = 0x1e4aa90a;
          if (local_70 != 0) {
            iVar14 = -0x590fbb0a;
          }
          goto LAB_00159988;
        }
        if (iVar15 == 0x64812e8e) {
          puVar10 = &DAT_0011dd07;
          iVar17 = -0x421a59a1;
        }
      }
      else {
        if (iVar15 == 0x7b8e3a08) {
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae9)])(param_2);
          iVar14 = iVar7;
          goto LAB_00159988;
        }
        if (iVar15 == 0x7ca2295c) {
          iVar14 = -0x4930997e;
          if (local_78 != 0) {
            iVar14 = -0x706608be;
          }
          goto LAB_00159988;
        }
        if (iVar15 == 0x7241b815) {
          return;
        }
      }
      goto LAB_0015998c;
    }
    if (iVar15 < 0x482230b9) {
      iVar17 = iVar2;
      if (iVar15 == 0x2579b536) goto LAB_0015998c;
      if (iVar15 == 0x27e285aa) {
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae4)])(param_1,param_5);
LAB_0015a260:
        iVar14 = -0xaf6c134;
        goto LAB_00159988;
      }
      iVar17 = iVar15;
      if (iVar15 != 0x29944158) goto LAB_0015998c;
LAB_00159ff0:
      iVar14 = 0x482230b9;
    }
    else if (iVar15 == 0x482230b9) {
LAB_00159fe4:
      iVar14 = 0x20c76319;
    }
    else {
      if (iVar15 == 0x4e252fad) {
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae4)])(param_1,param_5);
        goto LAB_0015a134;
      }
      if (iVar15 != 0x5d83c450) goto LAB_0015998c;
      iVar17 = 0x229890cb;
      lVar16 = local_70;
LAB_00159e50:
      iVar14 = -0x602b4b4c;
      if (lVar16 != 0) {
        iVar14 = iVar17;
      }
    }
  }
LAB_00159988:
  puVar10 = puVar13;
  iVar17 = iVar14;
  goto LAB_0015998c;
}


