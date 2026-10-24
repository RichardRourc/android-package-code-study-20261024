// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0015fd14; body: [[0015fd14, 001632a7]]

void FUN_0015fd14(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  char cVar6;
  undefined8 uVar7;
  ulong uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  long local_298;
  long local_290;
  long local_270;
  long local_268;
  long local_260;
  long local_258;
  long local_250;
  long local_248;
  long local_240;
  long local_238;
  long local_230;
  long local_228;
  long local_220;
  long local_218;
  long local_210;
  long local_208;
  long local_200;
  long local_1f8;
  long local_1f0;
  int local_1e8;
  int local_1e4;
  long local_1e0;
  long local_1d8;
  long local_1d0;
  long local_1c8;
  long local_1c0;
  long local_1b8;
  long local_1b0;
  long local_1a8;
  long local_1a0;
  long local_198;
  long local_190;
  long local_188;
  long local_180;
  undefined1 auStack_178 [24];
  long *local_160;
  long *local_158;
  long *local_150;
  long *local_148;
  long *local_140;
  long *local_138;
  long *local_130;
  long *local_128;
  long *local_120;
  long *local_118;
  long *local_110;
  long *local_108;
  long *local_100;
  long *local_f8;
  long *local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  undefined1 uStack_71;
  long local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  iVar11 = -0x2ced06dc;
  local_70 = param_2;
  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
            (&DAT_001fd792,0x17,&DAT_00204380,&DAT_001fd792);
  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a79)])(&uStack_71,&DAT_001fd792);
  iVar1 = iVar11;
  if (local_70 != 0) {
    iVar1 = -0x3043e3bf;
  }
  iVar5 = 0xf3fe74d;
LAB_0015fe6c:
  do {
    iVar9 = iVar5;
    lVar4 = local_70;
    lVar3 = local_a0;
    iVar12 = -0x374a8c19;
    iVar5 = iVar12;
    if (-0xf6b257 < iVar9) {
      if (0x40906cff < iVar9) {
        if (iVar9 < 0x64d771df) {
          if (iVar9 < 0x53f125e8) {
            if (iVar9 < 0x4c803142) {
              if (iVar9 < 0x439b474a) {
                if (iVar9 == 0x40906d00) {
                  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aef)])
                            (local_70,local_1b8);
                  iVar5 = 0x1d3c3be1;
                }
                else {
                  iVar5 = iVar9;
                  if (iVar9 == 0x41d2b3f2) {
                    (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aef)])
                              (local_70,local_1a8);
                    iVar5 = -0x6ee8bf92;
                  }
                }
              }
              else if (iVar9 == 0x439b474a) {
                if (local_d8 != 0) {
                  iVar5 = 0x780bcb6a;
                }
              }
              else {
                iVar5 = iVar9;
                if (iVar9 == 0x44f70df8) {
                  local_90 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aec)])
                                       (local_70,local_80,local_238);
                  iVar5 = -0x20ebbc1d;
                  if (local_90 != 0) {
                    iVar5 = 0x25913393;
                  }
                }
              }
            }
            else if (iVar9 < 0x4fb2fa74) {
              if (iVar9 == 0x4c803142) {
                if (local_d0 != 0) {
                  iVar5 = -0x38dc2aaf;
                }
              }
              else {
                iVar5 = iVar9;
                if (iVar9 == 0x4eb89579) {
                  uVar7 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ad4)])(param_3);
                  local_290 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ad8)])
                                        (lVar4,uVar7);
                  iVar5 = -0x4279656;
                  if (local_290 != 0) {
                    iVar5 = 0x7018dbc3;
                  }
                }
              }
            }
            else if (iVar9 == 0x4fb2fa74) {
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                        (&DAT_001fd44f,7,&DAT_00204340,&DAT_001fd44f);
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                        (&DAT_001fd829,0x16,&DAT_0020439c,&DAT_001fd829);
              local_1e0 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aee)])
                                    (lVar4,lVar3,&DAT_001fd44f,&DAT_001fd829);
              lVar4 = local_70;
              lVar3 = local_a0;
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                        (&DAT_001fd83f,0xf,&DAT_002043a0,&DAT_001fd83f);
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                        (&DAT_001fd84e,0x1b,&DAT_002043a4,&DAT_001fd84e);
              local_1f0 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aee)])
                                    (lVar4,lVar3,&DAT_001fd83f,&DAT_001fd84e);
              lVar4 = local_70;
              lVar3 = local_a8;
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                        (&DAT_001fd829,0x16,&DAT_0020439c,&DAT_001fd829);
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                        (&DAT_001fd869,0x11,&DAT_002043a8,&DAT_001fd869);
              local_1f8 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aee)])
                                    (lVar4,lVar3,&DAT_001fd869,&DAT_001fd829);
              lVar4 = local_70;
              lVar3 = local_a8;
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                        (&DAT_001fd87a,0xc,&DAT_002043ac,&DAT_001fd87a);
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                        (&DAT_001fd886,5,&DAT_002043b0,&DAT_001fd886);
              local_200 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aee)])
                                    (lVar4,lVar3,&DAT_001fd87a,&DAT_001fd886);
              lVar4 = local_70;
              lVar3 = local_a8;
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                        (&DAT_001fd886,5,&DAT_002043b0,&DAT_001fd886);
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                        (&DAT_001fd88b,0xb,&DAT_002043b4,&DAT_001fd88b);
              local_208 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aee)])
                                    (lVar4,lVar3,&DAT_001fd88b,&DAT_001fd886);
              lVar4 = local_70;
              lVar3 = local_a8;
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                        (&DAT_001fd896,0x12,&DAT_002043b8,&DAT_001fd896);
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                        (&DAT_001fd8a8,5,&DAT_002043bc,&DAT_001fd8a8);
              local_210 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aee)])
                                    (lVar4,lVar3,&DAT_001fd896,&DAT_001fd8a8);
              lVar4 = local_70;
              lVar3 = local_a8;
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                        (&DAT_001fd8a8,5,&DAT_002043bc,&DAT_001fd8a8);
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                        (&DAT_001fd8ad,0xf,&DAT_002043c0,&DAT_001fd8ad);
              local_218 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aee)])
                                    (lVar4,lVar3,&DAT_001fd8ad,&DAT_001fd8a8);
              lVar4 = local_70;
              lVar3 = local_a8;
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                        (&DAT_001fd8bc,0x13,&DAT_002043c4,&DAT_001fd8bc);
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                        (&DAT_001fd8cf,0x28,&DAT_002043c8,&DAT_001fd8cf);
              local_220 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aee)])
                                    (lVar4,lVar3,&DAT_001fd8bc,&DAT_001fd8cf);
              lVar4 = local_70;
              lVar3 = local_a8;
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                        (&DAT_001fd8f7,0x10,&DAT_002043cc,&DAT_001fd8f7);
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                        (&DAT_001fd907,0x19,&DAT_002043d0,&DAT_001fd907);
              local_228 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aee)])
                                    (lVar4,lVar3,&DAT_001fd8f7,&DAT_001fd907);
              lVar4 = local_70;
              lVar3 = local_a8;
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                        (&DAT_001fd920,0x10,&DAT_002043d4,&DAT_001fd920);
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                        (&DAT_001fd930,4,&DAT_002043d8,&DAT_001fd930);
              local_230 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aee)])
                                    (lVar4,lVar3,&DAT_001fd920,&DAT_001fd930);
              lVar4 = local_70;
              lVar3 = local_a8;
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                        (&DAT_001fd934,0xf,&DAT_002043dc,&DAT_001fd934);
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                        (&DAT_001fd943,0x18,&DAT_002043e0,&DAT_001fd943);
              local_238 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aee)])
                                    (lVar4,lVar3,&DAT_001fd934,&DAT_001fd943);
              lVar4 = local_70;
              lVar3 = local_a8;
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                        (&DAT_001fd42a,4,&DAT_00204338,&DAT_001fd42a);
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                        (&DAT_001fd95b,0xb,&DAT_002043e4,&DAT_001fd95b);
              local_d0 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aee)])
                                   (lVar4,lVar3,&DAT_001fd95b,&DAT_001fd42a);
              lVar4 = local_70;
              lVar3 = local_b0;
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                        (&DAT_001fd966,6,&DAT_002043e8,&DAT_001fd966);
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                        (&DAT_001fd96c,6,&DAT_002043ec,&DAT_001fd96c);
              local_240 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aee)])
                                    (lVar4,lVar3,&DAT_001fd966,&DAT_001fd96c);
              lVar4 = local_70;
              lVar3 = local_b0;
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                        (&DAT_001fd42a,4,&DAT_00204338,&DAT_001fd42a);
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                        (&DAT_001fd972,6,&DAT_002043f0,&DAT_001fd972);
              local_248 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aee)])
                                    (lVar4,lVar3,&DAT_001fd972,&DAT_001fd42a);
              lVar4 = local_70;
              lVar3 = local_b0;
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                        (&DAT_001fd42a,4,&DAT_00204338,&DAT_001fd42a);
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                        (&DAT_001fd978,6,&DAT_002043f4,&DAT_001fd978);
              local_d8 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aee)])
                                   (lVar4,lVar3,&DAT_001fd978,&DAT_001fd42a);
              lVar4 = local_70;
              lVar3 = local_b8;
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                        (&DAT_001fd97e,5,&DAT_002043f8,&DAT_001fd97e);
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                        (&DAT_001fd983,6,&DAT_002043fc,&DAT_001fd983);
              local_250 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aee)])
                                    (lVar4,lVar3,&DAT_001fd97e,&DAT_001fd983);
              lVar4 = local_70;
              lVar3 = local_b8;
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                        (&DAT_001fd42a,4,&DAT_00204338,&DAT_001fd42a);
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                        (&DAT_001fd978,6,&DAT_002043f4,&DAT_001fd978);
              local_e0 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aee)])
                                   (lVar4,lVar3,&DAT_001fd978,&DAT_001fd42a);
              lVar4 = local_70;
              lVar3 = local_c0;
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                        (&DAT_001fd42a,4,&DAT_00204338,&DAT_001fd42a);
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                        (&DAT_001fd44f,7,&DAT_00204340,&DAT_001fd44f);
              local_258 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aee)])
                                    (lVar4,lVar3,&DAT_001fd44f,&DAT_001fd42a);
              lVar4 = local_70;
              lVar3 = local_c0;
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                        (&DAT_001fd966,6,&DAT_002043e8,&DAT_001fd966);
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                        (&DAT_001fd989,8,&DAT_00204400,&DAT_001fd989);
              local_260 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aee)])
                                    (lVar4,lVar3,&DAT_001fd966,&DAT_001fd989);
              lVar4 = local_70;
              lVar3 = local_c0;
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                        (&DAT_001fd991,0xc,&DAT_00204404,&DAT_001fd991);
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                        (&DAT_001fd99d,5,&DAT_00204408,&DAT_001fd99d);
              local_1d8 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aee)])
                                    (lVar4,lVar3,&DAT_001fd991,&DAT_001fd99d);
              lVar4 = local_70;
              lVar3 = local_c0;
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                        (&DAT_001fd42a,4,&DAT_00204338,&DAT_001fd42a);
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                        (&DAT_001fd978,6,&DAT_002043f4,&DAT_001fd978);
              local_e8 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aee)])
                                   (lVar4,lVar3,&DAT_001fd978,&DAT_001fd42a);
              lVar4 = local_70;
              lVar3 = local_c8;
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                        (&DAT_001fd9a2,9,&DAT_0020440c,&DAT_001fd9a2);
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                        (&DAT_001fd9ab,0x17,&DAT_00204410,&DAT_001fd9ab);
              local_268 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aee)])
                                    (lVar4,lVar3,&DAT_001fd9a2,&DAT_001fd9ab);
              lVar4 = local_70;
              lVar3 = local_c8;
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                        (&DAT_001fd44f,7,&DAT_00204340,&DAT_001fd44f);
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                        (&DAT_001fd9c2,0x18,&DAT_00204414,&DAT_001fd9c2);
              local_270 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aee)])
                                    (lVar4,lVar3,&DAT_001fd44f,&DAT_001fd9c2);
              iVar5 = -0x374a8c19;
              if (local_1e0 != 0) {
                iVar5 = -0x14a5174d;
              }
            }
            else {
              iVar5 = iVar9;
              if (iVar9 == 0x51e37e1c) {
                (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae9)])(local_70);
                (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a7e)])(&local_160);
                (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a85)])(param_1);
                iVar11 = 1;
                iVar5 = -0x40b5414c;
              }
            }
          }
          else if (iVar9 < 0x5b4f999b) {
            if (iVar9 < 0x58826b92) {
              if (iVar9 == 0x53f125e8) {
                cVar6 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aed)])(local_70);
                iVar5 = -0x4cc3734c;
                if (cVar6 != '\0') {
                  iVar5 = 0x64d771df;
                }
              }
              else {
                iVar5 = iVar9;
                if (iVar9 == 0x57ac7a25) {
                  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae9)])(local_70);
                  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a7e)])(&local_160);
                  uVar10 = 0x98a52a81;
LAB_001628c4:
                  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ uVar10)])(param_1);
                  iVar11 = 1;
                  iVar5 = -0x46fd219e;
                }
              }
            }
            else {
              iVar5 = -0x53835b86;
              if ((iVar9 != 0x58826b92) && (iVar5 = iVar9, iVar9 == 0x5b061e86)) {
                uVar8 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52af1)])(param_4);
                iVar5 = 0x785763bd;
                if ((uVar8 & 1) == 0) {
                  iVar5 = -0x373958c2;
                }
              }
            }
          }
          else if (iVar9 < 0x5e47ad26) {
            if (iVar9 == 0x5b4f999b) {
              iVar5 = 0x51e37e1c;
              if (local_b0 != 0) {
                iVar5 = 0x6f3cc556;
              }
            }
            else {
              iVar5 = iVar9;
              if (iVar9 == 0x5c418cff) {
                (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae9)])(local_70);
                (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a7e)])(&local_160);
                (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a85)])(param_1);
                iVar11 = 1;
                iVar5 = -0x753199fc;
              }
            }
          }
          else if (iVar9 == 0x5e47ad26) {
            local_98 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a9d)])
                                 (local_70,local_c0,local_258);
            iVar5 = -0x4abe516b;
            if (local_98 != 0) {
              iVar5 = 0x7ba74623;
            }
          }
          else {
            iVar5 = iVar9;
            if ((iVar9 == 0x60b3ea5a) && (iVar5 = iVar12, local_1d8 != 0)) {
              iVar5 = 0x3d98b20;
            }
          }
        }
        else if (iVar9 < 0x7018dbc3) {
          if (iVar9 < 0x6f3cc556) {
            if (iVar9 < 0x6ae22a9b) {
              if (iVar9 == 0x64d771df) {
                (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae9)])(local_70);
                iVar5 = 0xa82a7ed;
                if (local_1b0 != 0) {
                  iVar5 = -0x3110bc2a;
                }
              }
              else {
                iVar5 = iVar9;
                if (iVar9 == 0x67fc3b0e) {
                  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aef)])
                            (local_70,local_1c8);
                  iVar5 = -0x7177a29f;
                }
              }
            }
            else if (iVar9 == 0x6ae22a9b) {
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a7e)])(&local_160);
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a85)])(param_1);
              iVar11 = 1;
              iVar5 = -0x4c373c87;
            }
            else {
              iVar5 = iVar9;
              if (iVar9 == 0x6b851407) {
                cVar6 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aed)])(local_70);
                iVar5 = -0x4556a2e0;
                if (cVar6 != '\0') {
                  iVar5 = -0x73283c8c;
                }
              }
            }
          }
          else if (iVar9 < 0x6f7e3826) {
            if (iVar9 == 0x6f3cc556) {
              iVar5 = 0x51e37e1c;
              if (local_b8 != 0) {
                iVar5 = 0x1910b646;
              }
            }
            else {
              iVar5 = iVar9;
              if (iVar9 == 0x6f78a35d) {
                iVar11 = 0;
                iVar5 = 0x71163f89;
              }
            }
          }
          else if (iVar9 == 0x6f7e3826) {
            iVar5 = -0x659d6226;
            if (local_198 != 0) {
              iVar5 = -0x3562d387;
            }
          }
          else {
            iVar5 = iVar9;
            if (iVar9 == 0x6fbb8539) {
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a7e)])(&local_160);
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a85)])(param_1);
              iVar11 = 1;
              iVar5 = -0x3ff1c612;
            }
          }
        }
        else if (iVar9 < 0x780bcb6a) {
          if (iVar9 < 0x71163f89) {
            if (iVar9 == 0x7018dbc3) {
              local_1b0 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a9d)])
                                    (local_70,local_a0,local_1e0,local_290);
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aef)])(local_70,local_290);
              iVar5 = 0x64d771df;
              if (local_1b0 != 0) {
                iVar5 = 0x53f125e8;
              }
            }
            else {
              iVar5 = iVar9;
              if (iVar9 == 0x702f9b47) {
                (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aef)])(local_70,local_1a0)
                ;
                iVar5 = 0x6ae22a9b;
              }
            }
          }
          else if (iVar9 == 0x71163f89) {
            if (iVar11 == 3) goto LAB_00161934;
            iVar5 = -0x660691a0;
            if (iVar11 != 0) {
              iVar5 = -0x134b7306;
            }
          }
          else {
            iVar5 = iVar9;
            if (iVar9 == 0x73457876) {
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aef)])(local_70,local_1d0);
              iVar5 = -0x1185c3dd;
            }
          }
        }
        else if (iVar9 < 0x7ba74623) {
          if (iVar9 == 0x780bcb6a) {
            if (local_250 != 0) {
              iVar5 = -0x5bd54f04;
            }
          }
          else {
            iVar5 = iVar9;
            if (iVar9 == 0x785763bd) {
              local_1e4 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a7f)])
                                    (local_70,local_80,local_230);
              cVar6 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aed)])(local_70);
              iVar5 = -0x633efafa;
              if (cVar6 != '\0') {
                iVar5 = -0x5ec68536;
              }
            }
          }
        }
        else if (iVar9 == 0x7ba74623) {
          cVar6 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aed)])(local_70);
          iVar5 = -0x50cbe98b;
          if (cVar6 != '\0') {
            iVar5 = -0x4abe516b;
          }
        }
        else {
          iVar5 = iVar9;
          if (iVar9 == 0x7cfa56b6) {
            local_1d0 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a9d)])
                                  (local_70,local_c8,local_270,local_188,local_298);
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aef)])(local_70,local_188);
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aef)])(local_70,local_298);
            iVar5 = -0x67e3fe92;
            if (local_1d0 != 0) {
              iVar5 = -0x2fc419bc;
            }
          }
        }
        goto LAB_0015fe6c;
      }
      if (iVar9 < 0x270259a0) {
        if (iVar9 < 0x10a1c34d) {
          if (iVar9 < 0x4a3b0f8) {
            if (iVar9 < 0x29a116f) {
              if (iVar9 == -0xf6b256) {
                cVar6 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aed)])(local_70);
                iVar5 = -0x1dc73266;
                if (cVar6 != '\0') {
                  iVar5 = 0x29a116f;
                }
              }
              else {
                iVar5 = iVar9;
                if (iVar9 == 0x1983292) {
                  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae9)])(local_70);
                  iVar5 = 0x1d3c3be1;
                  if (local_1b8 != 0) {
                    iVar5 = 0x40906d00;
                  }
                }
              }
            }
            else if (iVar9 == 0x29a116f) {
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae9)])(local_70);
              iVar5 = 0x6fbb8539;
              if (local_188 != 0) {
                iVar5 = -0x3fafdd63;
              }
            }
            else {
              iVar5 = iVar9;
              if ((iVar9 == 0x3d98b20) && (iVar5 = iVar12, local_e8 != 0)) {
                iVar5 = -0x714ecf60;
              }
            }
          }
          else if (iVar9 < 0xa82a7ed) {
            if (iVar9 == 0x4a3b0f8) {
              if (local_248 != 0) {
                iVar5 = 0x439b474a;
              }
            }
            else {
              iVar5 = iVar9;
              if (iVar9 == 0x619d9e5) {
                if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
                  __stack_chk_fail();
                }
                return;
              }
            }
          }
          else if (iVar9 == 0xa82a7ed) {
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a7e)])(&local_160);
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a81)])(param_1);
            iVar11 = 1;
            iVar5 = 0x58826b92;
          }
          else {
            iVar5 = iVar9;
            if (iVar9 == 0xf3fe74d) {
              iVar5 = iVar1;
            }
          }
        }
        else if (iVar9 < 0x1d3c3be1) {
          if (iVar9 < 0x1910b646) {
            if (iVar9 == 0x10a1c34d) {
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae2)])
                        (auStack_178,local_70,local_1d0);
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aef)])(local_70,local_1d0);
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a7e)])(&local_160);
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a72)])(param_1,auStack_178);
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae3)])(auStack_178);
              goto LAB_00162894;
            }
            iVar5 = iVar9;
            if (iVar9 == 0x186e0193) {
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a7e)])(&local_160);
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a7c)])(param_1,local_1e4);
              goto LAB_0016324c;
            }
          }
          else if (iVar9 == 0x1910b646) {
            iVar5 = 0x51e37e1c;
            if (local_c0 != 0) {
              iVar5 = 0x31012e8e;
            }
          }
          else {
            iVar5 = iVar9;
            if (iVar9 == 0x1cdefa57) {
              iVar11 = 0;
              iVar5 = -0x46fd219e;
            }
          }
        }
        else if (iVar9 < 0x223efd2c) {
          if (iVar9 == 0x1d3c3be1) {
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a7e)])(&local_160);
            uVar10 = 0x98a52a85;
            goto LAB_001628c4;
          }
          iVar5 = iVar9;
          if ((iVar9 == 0x1f38d9dc) && (iVar5 = iVar12, local_1f8 != 0)) {
            iVar5 = -0x52257021;
          }
        }
        else {
          if (iVar9 == 0x223efd2c) goto LAB_0015fe18;
          iVar5 = iVar9;
          if (iVar9 == 0x25913393) {
            cVar6 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aed)])(local_70);
            iVar5 = 0x5e47ad26;
            if (cVar6 != '\0') {
              iVar5 = -0x20ebbc1d;
            }
          }
        }
        goto LAB_0015fe6c;
      }
      if (0x2ed34ea9 < iVar9) {
        if (iVar9 < 0x352bfdf2) {
          if (iVar9 < 0x32fc4a13) {
            if (iVar9 == 0x2ed34eaa) {
              cVar6 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aed)])(local_70);
              iVar5 = -0x6057aa25;
              if (cVar6 != '\0') {
                iVar5 = 0x1983292;
              }
            }
            else {
              iVar5 = iVar9;
              if (iVar9 == 0x31012e8e) {
                iVar5 = 0x51e37e1c;
                if (local_c8 != 0) {
                  iVar5 = 0x4fb2fa74;
                }
              }
            }
          }
          else if (iVar9 == 0x32fc4a13) {
            if (local_270 != 0) {
              iVar5 = 0x4eb89579;
            }
          }
          else {
            iVar5 = iVar9;
            if (iVar9 == 0x344db65a) {
              iVar5 = -0x660691a0;
            }
          }
        }
        else if (iVar9 < 0x3804ad30) {
          if (iVar9 == 0x352bfdf2) {
            iVar11 = 3;
            iVar5 = 0x71163f89;
          }
          else {
            iVar5 = iVar9;
            if ((iVar9 == 0x357fa271) && (iVar5 = iVar12, local_208 != 0)) {
              iVar5 = -0xc9b52f5;
            }
          }
        }
        else if (iVar9 == 0x3804ad30) {
          local_1e8 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a7f)])
                                (local_70,local_90,local_250,local_180);
          cVar6 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aed)])(local_70);
          iVar5 = -0x446bc9e2;
          if (cVar6 != '\0') {
            iVar5 = 0x2e5452b4;
          }
        }
        else {
          iVar5 = iVar9;
          if ((iVar9 == 0x3e4235d3) && (iVar5 = iVar12, local_260 != 0)) {
            iVar5 = 0x60b3ea5a;
          }
        }
        goto LAB_0015fe6c;
      }
      if (0x2c532fbf < iVar9) {
        if (iVar9 < 0x2d5c8781) {
          iVar5 = -0x660691a0;
          if (iVar9 == 0x2c532fc0) goto LAB_0015fe6c;
          iVar12 = 0x2d10bace;
        }
        else {
          if (iVar9 == 0x2d5c8781) {
            uVar7 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ad4)])(param_4);
            local_1c8 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ad8)])
                                  (lVar4,uVar7);
            lVar3 = local_70;
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                      (&DAT_001fda0c,6,&DAT_00204424,&DAT_001fda0c);
            local_190 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ad8)])
                                  (lVar3,&DAT_001fda0c);
            iVar5 = 0x2bf96197;
            if (local_1c8 != 0) {
              iVar5 = -0x7c0c9e60;
            }
            goto LAB_0015fe6c;
          }
          iVar12 = 0x2e5452b4;
        }
        iVar5 = iVar9;
        if (iVar9 == iVar12) {
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae9)])(local_70);
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aef)])(local_70,local_180);
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a7e)])(&local_160);
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a81)])(param_1);
          iVar11 = 1;
          iVar5 = 0x71163f89;
        }
        goto LAB_0015fe6c;
      }
      if (iVar9 < 0x28f28b2a) {
        iVar5 = -0x31580455;
        if (((iVar9 != 0x270259a0) && (iVar5 = iVar9, iVar9 == 0x27f884cd)) &&
           (iVar5 = iVar12, local_238 != 0)) {
          iVar5 = 0x4c803142;
        }
      }
      else if (iVar9 == 0x28f28b2a) {
        local_1b8 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aec)])
                              (local_70,local_1c8,local_268,local_190);
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aef)])(local_70,local_1c8);
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aef)])(local_70,local_190);
        iVar5 = 0x1983292;
        if (local_1b8 != 0) {
          iVar5 = 0x2ed34eaa;
        }
      }
      else {
        iVar5 = iVar9;
        if (iVar9 == 0x2bf96197) {
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae9)])(local_70);
          iVar5 = -0x7177a29f;
          if (local_1c8 != 0) {
            iVar5 = 0x67fc3b0e;
          }
        }
      }
      goto LAB_0015fe6c;
    }
    if (-0x4556a2e1 < iVar9) {
      if (iVar9 < -0x2fc419bc) {
        if (iVar9 < -0x3b312bd8) {
          if (iVar9 < -0x40b5414c) {
            if (iVar9 < -0x415a1f3f) {
              if (iVar9 == -0x4556a2e0) {
                local_80 = local_1a8;
                (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                          (&DAT_001fd9da,5,&DAT_00204418,&DAT_001fd9da);
                local_1c0 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ad8)])
                                      (lVar4,&DAT_001fd9da);
                lVar3 = local_70;
                (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                          (&DAT_001fd9df,0xd,&DAT_0020441c,&DAT_001fd9df);
                local_198 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ad8)])
                                      (lVar3,&DAT_001fd9df);
                lVar3 = local_70;
                (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                          (&DAT_001fd9ec,0x20,&DAT_00204420,&DAT_001fd9ec);
                local_1a0 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ad8)])
                                      (lVar3,&DAT_001fd9ec);
                iVar5 = -0x659d6226;
                if (local_1c0 != 0) {
                  iVar5 = 0x6f7e3826;
                }
              }
              else {
                iVar5 = iVar9;
                if (iVar9 == -0x446bc9e2) {
                  iVar5 = 0x352bfdf2;
                  if (0 < local_1e8) {
                    iVar5 = -0x54137381;
                  }
                }
              }
            }
            else if (iVar9 == -0x415a1f3f) {
              if (local_218 != 0) {
                iVar5 = -0xc011009;
              }
            }
            else {
              iVar5 = iVar9;
              if (iVar9 == -0x40c26de8) {
                iVar5 = 0x6ae22a9b;
                if (local_1a0 != 0) {
                  iVar5 = 0x702f9b47;
                }
              }
            }
          }
          else if (iVar9 < -0x3fafdd63) {
            if (iVar9 == -0x40b5414c) {
              iVar5 = 0x619d9e5;
            }
            else {
              iVar5 = iVar9;
              if (iVar9 == -0x3ff1c612) {
                iVar5 = -0x753199fc;
              }
            }
          }
          else if (iVar9 == -0x3fafdd63) {
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aef)])(local_70,local_188);
            iVar5 = 0x6fbb8539;
          }
          else {
            iVar5 = iVar9;
            if (iVar9 == -0x3f5ebd94) {
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aef)])(local_70,local_190);
              iVar5 = -0x5017950d;
            }
          }
        }
        else if (iVar9 < -0x3562d387) {
          if (iVar9 < -0x374a8c19) {
            if (iVar9 == -0x3b312bd8) {
              local_160 = &local_70;
              local_80 = 0;
              local_158 = &local_88;
              local_150 = &local_b0;
              local_148 = &local_d8;
              local_140 = &local_90;
              local_138 = &local_b8;
              local_130 = &local_e0;
              local_128 = &local_98;
              local_120 = &local_c0;
              local_118 = &local_e8;
              local_110 = &local_80;
              local_108 = &local_a8;
              local_100 = &local_d0;
              local_f8 = &local_a0;
              local_f0 = &local_c8;
              local_88 = 0;
              local_90 = 0;
              local_98 = 0;
              local_a0 = 0;
              local_a8 = 0;
              local_b8 = 0;
              local_b0 = 0;
              local_c8 = 0;
              local_c0 = 0;
              local_d8 = 0;
              local_d0 = 0;
              local_e8 = 0;
              local_e0 = 0;
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                        (&DAT_001fd7a9,0xd,&DAT_00204384,&DAT_001fd7a9);
              local_a0 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae8)])
                                   (lVar4,&DAT_001fd7a9);
              lVar3 = local_70;
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                        (&DAT_001fd7b6,0x1b,&DAT_00204388,&DAT_001fd7b6);
              local_a8 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae8)])
                                   (lVar3,&DAT_001fd7b6);
              lVar3 = local_70;
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                        (&DAT_001fd7d1,0x15,&DAT_0020438c,&DAT_001fd7d1);
              local_b0 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae8)])
                                   (lVar3,&DAT_001fd7d1);
              lVar3 = local_70;
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                        (&DAT_001fd7e6,0x14,&DAT_00204390,&DAT_001fd7e6);
              local_b8 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae8)])
                                   (lVar3,&DAT_001fd7e6);
              lVar3 = local_70;
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                        (&DAT_001fd7fa,0x1e,&DAT_00204394,&DAT_001fd7fa);
              local_c0 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae8)])
                                   (lVar3,&DAT_001fd7fa);
              lVar3 = local_70;
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                        (&DAT_001fd818,0x11,&DAT_00204398,&DAT_001fd818);
              local_c8 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae8)])
                                   (lVar3,&DAT_001fd818);
              iVar5 = 0x51e37e1c;
              if (local_a0 != 0) {
                iVar5 = -0x86f55cf;
              }
            }
            else {
              iVar5 = iVar9;
              if ((iVar9 == -0x38dc2aaf) && (iVar5 = iVar12, local_240 != 0)) {
                iVar5 = 0x4a3b0f8;
              }
            }
          }
          else if (iVar9 == -0x374a8c19) {
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae9)])(local_70);
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a7e)])(&local_160);
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a85)])(param_1);
            iVar11 = 1;
            iVar5 = -0xdec8136;
          }
          else {
            iVar5 = iVar9;
            if (iVar9 == -0x373958c2) {
              local_88 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aec)])
                                   (local_70,local_80,local_228);
              iVar5 = -0x6cf9128;
              if (local_88 != 0) {
                iVar5 = -0x2fc236c5;
              }
            }
          }
        }
        else if (iVar9 < -0x3110bc2a) {
          if (iVar9 == -0x3562d387) {
            iVar5 = -0x659d6226;
            if (local_1a0 != 0) {
              iVar5 = -0x50ebfc58;
            }
          }
          else {
            iVar5 = iVar9;
            if (iVar9 == -0x31580455) {
              iVar5 = -0x3ff1c612;
            }
          }
        }
        else if (iVar9 == -0x3110bc2a) {
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aef)])(local_70,local_1b0);
          iVar5 = 0xa82a7ed;
        }
        else {
          iVar5 = iVar9;
          if (iVar9 == -0x3043e3bf) {
            uVar8 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52af1)])(param_3);
            iVar5 = -0x2ced06dc;
            if ((uVar8 & 1) == 0) {
              iVar5 = -0x3b312bd8;
            }
          }
        }
      }
      else if (iVar9 < -0xdec8136) {
        if (iVar9 < -0x1dc73266) {
          if (iVar9 < -0x2ced06dc) {
            if (iVar9 == -0x2fc419bc) {
              cVar6 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aed)])(local_70);
              iVar5 = 0x10a1c34d;
              if (cVar6 != '\0') {
                iVar5 = -0x67e3fe92;
              }
            }
            else {
              iVar5 = iVar9;
              if (iVar9 == -0x2fc236c5) {
                cVar6 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aed)])(local_70);
                iVar5 = 0x2d5c8781;
                if (cVar6 != '\0') {
                  iVar5 = -0x6cf9128;
                }
              }
            }
          }
          else if (iVar9 == -0x2ced06dc) {
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a81)])(param_1);
            iVar11 = 1;
            iVar5 = 0x619d9e5;
          }
          else {
            iVar5 = iVar9;
            if (iVar9 == -0x20ebbc1d) {
LAB_001612f4:
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae9)])(local_70);
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a7e)])(&local_160);
              uVar10 = 0x98a52a81;
LAB_0016323c:
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ uVar10)])(param_1);
LAB_0016324c:
              iVar11 = 1;
              iVar5 = -0x134b7306;
            }
          }
        }
        else if (iVar9 < -0x134b7306) {
          if (iVar9 == -0x1dc73266) {
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                      (&DAT_001fda0c,6,&DAT_00204424,&DAT_001fda0c);
            local_298 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ad8)])
                                  (lVar4,&DAT_001fda0c);
            iVar5 = -0x79366217;
            if (local_298 != 0) {
              iVar5 = 0x7cfa56b6;
            }
          }
          else {
            iVar5 = iVar9;
            if ((iVar9 == -0x14a5174d) && (iVar5 = iVar12, local_1f0 != 0)) {
              iVar5 = 0x1f38d9dc;
            }
          }
        }
        else {
          iVar5 = -0x4c373c87;
          if ((iVar9 != -0x134b7306) && (iVar5 = iVar9, iVar9 == -0x1185c3dd)) {
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a7e)])(&local_160);
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a85)])(param_1);
LAB_00162894:
            iVar11 = 1;
            iVar5 = 0x270259a0;
          }
        }
      }
      else if (iVar9 < -0x86f55cf) {
        if (iVar9 < -0xc011009) {
          iVar5 = -0x40b5414c;
          if (((iVar9 != -0xdec8136) && (iVar5 = iVar9, iVar9 == -0xc9b52f5)) &&
             (iVar5 = iVar12, local_210 != 0)) {
            iVar5 = -0x415a1f3f;
          }
        }
        else if (iVar9 == -0xc011009) {
          if (local_220 != 0) {
            iVar5 = -0x4950cc0;
          }
        }
        else {
          iVar5 = iVar9;
          if (iVar9 == -0x8a1e9b1) {
LAB_00161934:
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aef)])(local_70,local_180);
            local_188 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aec)])
                                  (local_70,local_98,local_1d8);
            iVar5 = 0x29a116f;
            if (local_188 != 0) {
              iVar5 = -0xf6b256;
            }
          }
        }
      }
      else if (iVar9 < -0x4950cc0) {
        if (iVar9 == -0x86f55cf) {
          iVar5 = 0x51e37e1c;
          if (local_a8 != 0) {
            iVar5 = 0x5b4f999b;
          }
        }
        else {
          iVar5 = iVar9;
          if (iVar9 == -0x6cf9128) {
LAB_0015fe18:
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae9)])(local_70);
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a7e)])(&local_160);
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a81)])(param_1);
            iVar11 = 1;
            iVar5 = -0x4c373c87;
          }
        }
      }
      else if (iVar9 == -0x4950cc0) {
        if (local_228 != 0) {
          iVar5 = -0x6cbfc406;
        }
      }
      else {
        iVar5 = iVar9;
        if (iVar9 == -0x4279656) {
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae9)])(local_70);
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a7e)])(&local_160);
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a85)])(param_1);
          iVar11 = 1;
          iVar5 = -0x53835b86;
        }
      }
      goto LAB_0015fe6c;
    }
    if (-0x6140abaa < iVar9) {
      if (iVar9 < -0x50ebfc58) {
        if (-0x54137382 < iVar9) {
          if (iVar9 < -0x52c76656) {
            if (iVar9 == -0x54137381) {
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ad5)])
                        (local_70,local_98,local_260,local_180,0,local_1e8);
              cVar6 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aed)])(local_70);
              iVar5 = 0x6f78a35d;
              if (cVar6 != '\0') {
                iVar5 = 0x2d10bace;
              }
            }
            else {
              iVar5 = iVar9;
              if (iVar9 == -0x53835b86) {
                iVar5 = -0xdec8136;
              }
            }
          }
          else if (iVar9 == -0x52c76656) {
            iVar5 = -0x40c26de8;
            if (local_198 != 0) {
              iVar5 = -0x64580d82;
            }
          }
          else {
            iVar5 = iVar9;
            if ((iVar9 == -0x52257021) && (iVar5 = iVar12, local_200 != 0)) {
              iVar5 = 0x357fa271;
            }
          }
          goto LAB_0015fe6c;
        }
        if (-0x5ec68537 < iVar9) {
          if (iVar9 == -0x5ec68536) goto LAB_001612f4;
          iVar5 = iVar9;
          if ((iVar9 == -0x5bd54f04) && (iVar5 = iVar12, local_e0 != 0)) {
            iVar5 = -0x6d71fb7d;
          }
          goto LAB_0015fe6c;
        }
        if (iVar9 != -0x6140aba9) {
          iVar5 = iVar9;
          if (iVar9 == -0x6057aa25) {
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ad5)])
                      (local_70,local_88,local_240,local_1b8);
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ad5)])
                      (local_70,local_88,local_248);
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aef)])(local_70,local_1b8);
            cVar6 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aed)])(local_70);
            iVar5 = 0x1cdefa57;
            if (cVar6 != '\0') {
              iVar5 = 0x57ac7a25;
            }
          }
          goto LAB_0015fe6c;
        }
        iVar5 = 0x785763bd;
        if (iVar11 == 0) goto LAB_0015fe6c;
      }
      else {
        if (iVar9 < -0x4c7ef1a6) {
          if (iVar9 < -0x5017950d) {
            if (iVar9 == -0x50ebfc58) {
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ad5)])
                        (local_70,local_80,local_1f8,local_1c0);
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ad5)])
                        (local_70,local_80,local_200,1);
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ad5)])
                        (local_70,local_80,local_208,1);
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ad5)])
                        (local_70,local_80,local_210,8000);
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ad5)])
                        (local_70,local_80,local_218,8000);
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ad5)])
                        (local_70,local_80,local_220,local_198,local_1a0);
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aef)])(local_70,local_1c0);
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aef)])(local_70,local_198);
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aef)])(local_70,local_1a0);
              cVar6 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aed)])(local_70);
              iVar5 = 0x5b061e86;
              if (cVar6 != '\0') {
                iVar5 = 0x223efd2c;
              }
            }
            else {
              iVar5 = iVar9;
              if (iVar9 == -0x50cbe98b) {
                local_180 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a7d)])
                                      (local_70,0x1000);
                iVar5 = 0x5c418cff;
                if (local_180 != 0) {
                  iVar5 = 0x2c532fc0;
                }
              }
            }
          }
          else if (iVar9 == -0x5017950d) {
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a7e)])(&local_160);
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a85)])(param_1);
            iVar11 = 1;
            iVar5 = -0x6140aba9;
          }
          else {
            iVar5 = iVar9;
            if (iVar9 == -0x4cc3734c) {
              local_1a8 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aec)])
                                    (local_70,local_1b0,local_1f0);
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aef)])(local_70,local_1b0);
              iVar5 = -0x73283c8c;
              if (local_1a8 != 0) {
                iVar5 = 0x6b851407;
              }
            }
          }
          goto LAB_0015fe6c;
        }
        if (-0x4abe516c < iVar9) {
          if (iVar9 == -0x4abe516b) {
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae9)])(local_70);
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a7e)])(&local_160);
            uVar10 = 0x98a52a85;
            goto LAB_0016323c;
          }
          iVar5 = iVar9;
          if (iVar9 == -0x46fd219e) {
            iVar5 = -0x6140aba9;
          }
          goto LAB_0015fe6c;
        }
        iVar5 = 0x785763bd;
        if ((iVar9 == -0x4c7ef1a6) || (iVar5 = iVar9, iVar9 != -0x4c373c87)) goto LAB_0015fe6c;
      }
      iVar5 = -0x61da5b27;
      goto LAB_0015fe6c;
    }
    if (iVar9 < -0x6cbfc406) {
      if (iVar9 < -0x7177a29f) {
        if (iVar9 < -0x753199fc) {
          if (iVar9 == -0x7c0c9e60) {
            iVar5 = 0x2bf96197;
            if (local_190 != 0) {
              iVar5 = 0x28f28b2a;
            }
          }
          else {
            iVar5 = iVar9;
            if (iVar9 == -0x79366217) {
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae9)])(local_70);
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aef)])(local_70,local_188);
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a7e)])(&local_160);
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a85)])(param_1);
              iVar11 = 1;
              iVar5 = -0x31580455;
            }
          }
        }
        else {
          iVar5 = -0x134b7306;
          if ((iVar9 != -0x753199fc) && (iVar5 = iVar9, iVar9 == -0x73283c8c)) {
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae9)])(local_70);
            iVar5 = -0x6ee8bf92;
            if (local_1a8 != 0) {
              iVar5 = 0x41d2b3f2;
            }
          }
        }
      }
      else if (iVar9 < -0x6ee8bf92) {
        if (iVar9 == -0x7177a29f) {
          iVar5 = -0x5017950d;
          if (local_190 != 0) {
            iVar5 = -0x3f5ebd94;
          }
        }
        else {
          iVar5 = iVar9;
          if ((iVar9 == -0x714ecf60) && (iVar5 = iVar12, local_268 != 0)) {
            iVar5 = 0x32fc4a13;
          }
        }
      }
      else if (iVar9 == -0x6ee8bf92) {
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a7e)])(&local_160);
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52a81)])(param_1);
        iVar11 = 1;
        iVar5 = -0x61da5b27;
      }
      else {
        iVar5 = iVar9;
        if ((iVar9 == -0x6d71fb7d) && (iVar5 = iVar12, local_258 != 0)) {
          iVar5 = 0x3e4235d3;
        }
      }
    }
    else if (iVar9 < -0x64580d82) {
      if (iVar9 < -0x660691a0) {
        if (iVar9 == -0x6cbfc406) {
          if (local_230 != 0) {
            iVar5 = 0x27f884cd;
          }
        }
        else {
          iVar5 = iVar9;
          if (iVar9 == -0x67e3fe92) {
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae9)])(local_70);
            iVar5 = -0x1185c3dd;
            if (local_1d0 != 0) {
              iVar5 = 0x73457876;
            }
          }
        }
      }
      else if (iVar9 == -0x660691a0) {
        iVar5 = 0x3804ad30;
      }
      else {
        iVar5 = iVar9;
        if (iVar9 == -0x659d6226) {
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae9)])(local_70);
          iVar5 = -0x52c76656;
          if (local_1c0 != 0) {
            iVar5 = -0x640bd38d;
          }
        }
      }
    }
    else if (iVar9 < -0x633efafa) {
      if (iVar9 == -0x64580d82) {
        (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aef)])(local_70,local_198);
        iVar5 = -0x40c26de8;
      }
      else {
        iVar5 = iVar9;
        if (iVar9 == -0x640bd38d) {
          (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aef)])(local_70,local_1c0);
          iVar5 = -0x52c76656;
        }
      }
    }
    else if (iVar9 == -0x633efafa) {
      iVar5 = 0x44f70df8;
      if (local_1e4 != 200) {
        iVar5 = 0x186e0193;
      }
    }
    else {
      iVar5 = iVar9;
      if (iVar9 == -0x61da5b27) {
        iVar5 = 0x58826b92;
      }
    }
  } while( true );
}


