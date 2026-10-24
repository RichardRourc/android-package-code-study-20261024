// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 001b0d08; body: [[001b0d08, 001b15e7]]

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001b0d08(ulong param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  ssize_t sVar5;
  undefined1 *puVar6;
  ulong unaff_x22;
  ulong unaff_x23;
  ulong uVar7;
  undefined1 auStack_1890 [2047];
  undefined1 local_1091;
  undefined7 local_1090;
  undefined4 uStack_1089;
  undefined1 auStack_1080 [4096];
  long local_80;
  
  lVar1 = tpidr_el0;
  local_80 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined1 *)0xf54c5df74fcabc41;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (puVar6 = puVar2, puVar2 = puVar6, 0x1cba5f82f77e481e < (long)puVar6) {
            if ((long)puVar6 < 0x58b842c6f86d5804) {
              if ((long)puVar6 < 0x3b36a7a007b21166) {
                if (puVar6 == (undefined1 *)0x1cba5f82f77e481f) {
                  _DAT_0021e820 = _DAT_0021e820 ^ 0x8e8e8e8e8e8e8e8e;
                  uRam000000000021e828 = uRam000000000021e828 ^ 0x8e8e8e8e8e8e8e8e;
                  DAT_0021faab = '\x01';
                  puVar2 = (undefined1 *)0x3b36a7a007b21166;
                }
                else {
                  puVar2 = (undefined1 *)0x58b842c6f86d5804;
                  if ((puVar6 != (undefined1 *)0x312910f1547c7c77) &&
                     (puVar2 = puVar6, puVar6 == (undefined1 *)0x36f07785a64d7584)) {
                    puVar2 = (undefined1 *)0xc879bc31bae5bb14;
                    if (DAT_0021faaa == '\0') {
                      puVar2 = (undefined1 *)0x5039187a35dab08d;
                    }
                  }
                }
              }
              else if ((long)puVar6 < 0x49b9b00eeff4c15a) {
                if (puVar6 == (undefined1 *)0x3b36a7a007b21166) {
                  DAT_0021faa4 = 0;
                  uVar3 = FUN_001f3c60();
                  FUN_001e38f8(auStack_1890,0,0x800);
                  memset(auStack_1080,0,0x1000);
                  param_1 = FUN_001e0fd8(auStack_1080,0x1000,&DAT_0021e820,uVar3);
                  puVar2 = (undefined1 *)0x312910f1547c7c77;
                  if ((int)param_1 < 0x1000) {
                    puVar2 = (undefined1 *)0xc89737e2f8768a05;
                  }
                }
                else if (puVar6 == (undefined1 *)0x418b7d3c908df894) {
                  puVar2 = (undefined1 *)0x960858df0b0de441;
                }
              }
              else if (puVar6 == (undefined1 *)0x49b9b00eeff4c15a) {
                sVar5 = read((int)unaff_x22,auStack_1890,0x800);
                uVar4 = close((int)unaff_x22);
                param_1 = (ulong)uVar4;
                puVar2 = (undefined1 *)0x5ece82223eee3411;
                if (sVar5 != -1) {
                  puVar2 = (undefined1 *)0x7e713fa43f38c582;
                }
              }
              else if (puVar6 == (undefined1 *)0x5039187a35dab08d) {
                DAT_0021e810 = DAT_0021e810 ^ 0x77;
                DAT_0021e812 = DAT_0021e812 ^ 0x77;
                DAT_0021e811 = DAT_0021e811 ^ 0x77;
                uVar7 = CONCAT17(DAT_0021e808._7_1_,(undefined7)DAT_0021e808) ^ 0x7777777777777777;
                DAT_0021e808._0_7_ = (undefined7)uVar7;
                DAT_0021e808._7_1_ = (undefined1)(uVar7 >> 0x38);
                DAT_0021faaa = '\x01';
                puVar2 = (undefined1 *)0xedbefc38c6cf9bfe;
              }
            }
            else if ((long)puVar6 < 0x75df443d79079721) {
              if (puVar6 == (undefined1 *)0x58b842c6f86d5804) {
                puVar2 = (undefined1 *)0x7d8bf94548220fb8;
              }
              else {
                puVar2 = (undefined1 *)0x7d8bf94548220fb8;
                if ((puVar6 != (undefined1 *)0x5ece82223eee3411) &&
                   (puVar2 = puVar6, puVar6 == (undefined1 *)0x6b5051bf1aed633d)) {
                  param_1 = FUN_00212730(0,1,&DAT_0021faa4);
                  puVar2 = &DAT_c45038db124ae016;
                  if ((int)param_1 != 0) {
                    puVar2 = (undefined1 *)0xbf711ec4fafe862e;
                  }
                }
              }
            }
            else if ((long)puVar6 < 0x7d8bf94548220fb8) {
              if (puVar6 == (undefined1 *)0x75df443d79079721) {
                param_1 = FUN_00212730(0,1,&DAT_0021faa0);
                puVar2 = (undefined1 *)0x36f07785a64d7584;
                if ((int)param_1 != 0) {
                  puVar2 = (undefined1 *)0xa865ab623572e331;
                }
              }
              else if (puVar6 == (undefined1 *)0x77f0428eaa711148) {
                puVar2 = (undefined1 *)0x7d8bf94548220fb8;
              }
            }
            else if (puVar6 == (undefined1 *)0x7d8bf94548220fb8) {
              puVar2 = (undefined1 *)0x960858df0b0de441;
            }
            else if (puVar6 == (undefined1 *)0x7e713fa43f38c582) {
              puVar2 = (undefined1 *)0x75df443d79079721;
            }
          }
          if ((long)puVar6 < -0x3bafc724edb51fea) break;
          if ((long)puVar6 < -0x124103c739306402) {
            if (puVar6 == &DAT_c45038db124ae016) {
              puVar2 = (undefined1 *)0x8500be9b057d300e;
              if (DAT_0021faab == '\0') {
                puVar2 = (undefined1 *)0x1cba5f82f77e481f;
              }
            }
            else {
              puVar2 = (undefined1 *)0xedbefc38c6cf9bfe;
              if ((puVar6 != (undefined1 *)0xc879bc31bae5bb14) &&
                 (puVar2 = puVar6, puVar6 == (undefined1 *)0xc89737e2f8768a05)) {
                param_1 = FUN_001f351c(auStack_1080,0);
                unaff_x22 = param_1 & 0xffffffff;
                puVar2 = (undefined1 *)0x52cde6c2dea1be4;
                if ((int)param_1 != -1) {
                  puVar2 = (undefined1 *)0x49b9b00eeff4c15a;
                }
              }
            }
          }
          else if ((long)puVar6 < -0x938e289074b7147) {
            if (puVar6 == (undefined1 *)0xedbefc38c6cf9bfe) {
              DAT_0021faa0 = 0;
              local_1091 = 0;
              uStack_1089 = CONCAT13(DAT_0021e812,
                                     CONCAT12(DAT_0021e811,CONCAT11(DAT_0021e810,DAT_0021e808._7_1_)
                                             ));
              local_1090 = (undefined7)DAT_0021e808;
              param_1 = FUN_001e238c(auStack_1890,&local_1090);
              puVar2 = (undefined1 *)0x77f0428eaa711148;
              unaff_x23 = param_1;
              if (param_1 != 0) {
                puVar2 = (undefined1 *)0xba8fbc7d3623138d;
              }
            }
            else if (puVar6 == (undefined1 *)0xf54c5df74fcabc41) {
              puVar2 = (undefined1 *)0xc23f84056fd30bd6;
              if (DAT_0021faa9 == '\0') {
                puVar2 = (undefined1 *)0xf6c71d76f8b48eb9;
              }
            }
          }
          else {
            puVar2 = (undefined1 *)0x6b5051bf1aed633d;
            if ((puVar6 != (undefined1 *)0xf6c71d76f8b48eb9) &&
               (puVar2 = puVar6, puVar6 == (undefined1 *)0x52cde6c2dea1be4)) {
              puVar2 = (undefined1 *)0x58b842c6f86d5804;
            }
          }
        }
        if ((long)puVar6 < -0x45704382c9dcec73) break;
        if (puVar6 == (undefined1 *)0xba8fbc7d3623138d) {
          param_1 = FUN_001e1068(unaff_x23 + 10);
          puVar2 = (undefined1 *)0x418b7d3c908df894;
          if ((int)param_1 != 0) {
            puVar2 = (undefined1 *)0x8e3a3d610d847caf;
          }
        }
        else {
          puVar2 = (undefined1 *)0x6b5051bf1aed633d;
          if ((puVar6 != (undefined1 *)0xbf711ec4fafe862e) &&
             (puVar2 = puVar6, puVar6 == (undefined1 *)0xc23f84056fd30bd6)) {
            puVar2 = (undefined1 *)0x960858df0b0de441;
          }
        }
      }
      if (-0x69f7a720f4f21bc0 < (long)puVar6) break;
      puVar2 = (undefined1 *)0x3b36a7a007b21166;
      if ((puVar6 != (undefined1 *)0x8500be9b057d300e) &&
         (puVar2 = puVar6, puVar6 == (undefined1 *)0x8e3a3d610d847caf)) {
        DAT_0021faa9 = '\x01';
        puVar2 = (undefined1 *)0x960858df0b0de441;
      }
    }
    puVar2 = (undefined1 *)0x75df443d79079721;
  } while ((puVar6 == (undefined1 *)0xa865ab623572e331) ||
          (puVar2 = puVar6, puVar6 != (undefined1 *)0x960858df0b0de441));
  if (*(long *)(lVar1 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
  }
  return;
}


