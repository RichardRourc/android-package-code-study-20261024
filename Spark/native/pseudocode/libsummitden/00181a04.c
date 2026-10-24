// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00181a04; body: [[00181a04, 00187f63]]

void FUN_00181a04(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  long local_350;
  long local_348;
  long local_340;
  int local_334;
  ulong local_330;
  ulong local_328;
  ulong local_320;
  undefined8 local_318;
  undefined1 auStack_310 [24];
  undefined1 auStack_2f8 [24];
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined1 auStack_2d0 [24];
  undefined1 auStack_2b8 [24];
  undefined1 auStack_2a0 [24];
  undefined1 auStack_288 [24];
  undefined1 auStack_270 [24];
  undefined1 auStack_258 [31];
  undefined1 uStack_239;
  undefined1 auStack_238 [24];
  undefined1 auStack_220 [24];
  undefined1 auStack_208 [24];
  char local_1f0 [130];
  char local_16e [65];
  char local_12d [65];
  char local_ec [132];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5ba)])(auStack_208);
  uVar6 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bb)])();
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
            (&DAT_001ff634,5,&DAT_002044c8,&DAT_001ff634);
  uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b9)])
                    (auStack_208,&DAT_001ff634);
  uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5be)])(uVar7,7);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])(uVar7,10);
  local_318 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bb)])();
  uVar8 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bc)])();
  iVar1 = 0x1bddc2b1;
  if (0x7fffffffffffffff < uVar8) {
    iVar1 = -0x2007498f;
  }
  iVar3 = -0x5ad1cb1c;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            while( true ) {
              while( true ) {
                while (iVar11 = iVar3, iVar3 = iVar11, -0xb35f4db < iVar11) {
                  if (iVar11 < 0x2a421459) {
                    if (iVar11 < 0xf9caa02) {
                      if (iVar11 < -0xe3bd21) {
                        if (iVar11 < -0x6902b25) {
                          if (iVar11 == -0xb35f4da) {
                            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                                      (&DAT_001ff971,0xc,&DAT_00204588,&DAT_001ff971);
                            uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b9)])
                                              (auStack_208,&DAT_001ff971);
                            uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bd)])
                                              (uVar7,local_328);
                            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])
                                      (uVar7,10);
                            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                                      (&DAT_001ff97d,0x11,&DAT_0020458c,&DAT_001ff97d);
                            uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b9)])
                                              (auStack_208,&DAT_001ff97d);
                            uVar9 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b2)])
                                              (local_318);
                            uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bd)])
                                              (uVar7,uVar9);
                            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])
                                      (uVar7,10);
                            uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bb)])
                                              ();
                            uVar4 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5a3)])
                                              ();
                            uVar5 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5a0)])
                                              ();
                            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                                      (&DAT_001ff98e,0xc,&DAT_00204590,&DAT_001ff98e);
                            uVar9 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b9)])
                                              (auStack_208,&DAT_001ff98e);
                            uVar12 = 0x30;
                            if ((uVar4 & 1) != 0) {
                              uVar12 = 0x31;
                            }
                            uVar9 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])
                                              (uVar9,uVar12);
                            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])
                                      (uVar9,10);
                            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                                      (&DAT_001ff99a,0x11,&DAT_00204594,&DAT_001ff99a);
                            uVar9 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b9)])
                                              (auStack_208,&DAT_001ff99a);
                            uVar13 = 0x30;
                            if ((uVar5 & 1) != 0) {
                              uVar13 = 0x31;
                            }
                            uVar9 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])
                                              (uVar9,uVar13);
                            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])
                                      (uVar9,10);
                            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                                      (&DAT_001ff9ab,0xb,&DAT_00204598,&DAT_001ff9ab);
                            uVar9 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b9)])
                                              (auStack_208,&DAT_001ff9ab);
                            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5a1)])
                                      (auStack_288,uVar4 & 1,uVar5 & 1);
                            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b6)])
                                      (auStack_238,auStack_288);
                            uVar9 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b7)])
                                              (uVar9,auStack_238);
                            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])
                                      (uVar9,10);
                            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])
                                      (auStack_238);
                            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])
                                      (auStack_288);
                            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                                      (&DAT_001ff9b6,8,&DAT_0020459c,&DAT_001ff9b6);
                            uVar9 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b9)])
                                              (auStack_208,&DAT_001ff9b6);
                            uVar9 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])
                                              (uVar9,uVar12);
                            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])
                                      (uVar9,10);
                            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                                      (&DAT_001ff9be,0xb,&DAT_002045a0,&DAT_001ff9be);
                            uVar9 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b9)])
                                              (auStack_208,&DAT_001ff9be);
                            uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b2)])
                                              (uVar7);
                            uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bd)])
                                              (uVar9,uVar7);
                            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])
                                      (uVar7,10);
                            local_318 = (*(code *)(&PTR_FUN_00201200)
                                                  [(int)(DAT_00202698 ^ 0x1873b5bb)])();
                            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5a6)])
                                      (auStack_2a0);
                            uVar10 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b1)]
                                     )(auStack_2a0);
                            iVar3 = -0x40f944db;
                            if ((uVar10 & 1) == 0) {
                              iVar3 = 0x64f75e71;
                            }
                          }
                          else if (iVar11 == -0x7f2690f) {
                            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                                      (&DAT_001ff67d,0x12,&DAT_002044e4,&DAT_001ff67d);
                            uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b9)])
                                              (auStack_208,&DAT_001ff67d);
                            uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bd)])
                                              (uVar7,local_340);
                            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])
                                      (uVar7,10);
                            iVar3 = 0x150512f5;
                          }
                        }
                        else if (iVar11 == -0x6902b25) {
                          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                                    (&DAT_001ff92b,0x13,&DAT_0020457c,&DAT_001ff92b);
                          uVar10 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5a2)])
                                             (&DAT_001ff92b);
                          iVar3 = 0x13decca8;
                          if ((uVar10 & 1) == 0) {
                            iVar3 = 0x53702f21;
                          }
                        }
                        else if (iVar11 == -0x30f433f) {
                          local_328 = local_328 | 0x400;
                          iVar3 = -0xb35f4da;
                        }
                        else if (iVar11 == -0x17d247a) {
                          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                                    (&DAT_001fff16,0x13,&DAT_002046ec,&DAT_001fff16);
                          uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b9)])
                                            (auStack_208,&DAT_001fff16);
                          uVar9 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b2)])
                                            (local_318);
                          uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bd)])
                                            (uVar7,uVar9);
                          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])(uVar7,10)
                          ;
                          local_318 = (*(code *)(&PTR_FUN_00201200)
                                                [(int)(DAT_00202698 ^ 0x1873b5bb)])();
                          uVar10 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b59e)])
                                             (local_1f0);
                          iVar3 = -0x64c95b;
                          if ((uVar10 & 1) == 0) {
                            iVar3 = -0x323efb3a;
                          }
                        }
                      }
                      else if (iVar11 < 0x4c75b0d) {
                        if (iVar11 == -0xe3bd21) {
                          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                                    (&DAT_001ff71a,0x18,&DAT_0020450c,&DAT_001ff71a);
                          uVar10 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5a9)])
                                             (&uStack_239,&DAT_001ff71a);
                          iVar3 = 0xe6ebb42;
                          if ((uVar10 & 1) == 0) {
                            iVar3 = 0x5791ec44;
                          }
                        }
                        else if (iVar11 == -0x64c95b) {
                          iVar3 = -0x62be0840;
                          if (local_1f0[0] != '\0') {
                            iVar3 = 0x1a2ed230;
                          }
                        }
                      }
                      else if (iVar11 == 0x4c75b0d) {
                        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                                  (&DAT_001ff670,0xd,&DAT_002044e0,&DAT_001ff670);
                        uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b9)])
                                          (auStack_208,&DAT_001ff670);
                        uVar9 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b2)])
                                          (local_318);
                        uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bd)])
                                          (uVar7,uVar9);
                        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])(uVar7,10);
                        local_318 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bb)])
                                              ();
                        local_340 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b5)])
                                              ();
                        iVar3 = -0x7f2690f;
                        if (local_340 < 1) {
                          iVar3 = 0x150512f5;
                        }
                      }
                      else if (iVar11 == 0x8de3490) {
                        iVar3 = 0x5a255831;
                        if (local_12d[0] != '\0') {
                          iVar3 = 0x2a421459;
                        }
                      }
                      else if (iVar11 == 0xe6ebb42) {
                        local_320 = local_320 | 4;
                        iVar3 = 0x5791ec44;
                      }
                    }
                    else if (iVar11 < 0x150512f5) {
                      if (iVar11 < 0x1207d33c) {
                        if (iVar11 == 0xf9caa02) {
                          local_330 = local_330 | 2;
                          iVar3 = 0x6a1b29af;
                        }
                        else if (iVar11 == 0x10aaf693) {
                          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                                    (&DAT_001ff668,8,&DAT_002044dc,&DAT_001ff668);
                          uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b9)])
                                            (auStack_208,&DAT_001ff668);
                          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b6)])
                                    (auStack_238,auStack_220);
                          uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b7)])
                                            (uVar7,auStack_238);
                          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])(uVar7,10)
                          ;
                          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])
                                    (auStack_238);
                          iVar3 = 0x4c75b0d;
                        }
                      }
                      else if (iVar11 == 0x1207d33c) {
                        local_330 = local_330 | 1;
                        iVar3 = 0x2fd5f6e0;
                      }
                      else {
                        iVar3 = -0x323efb3a;
                        if ((iVar11 != 0x12c8d01c) && (iVar3 = iVar11, iVar11 == 0x13decca8)) {
                          local_328 = local_328 | 0x100;
                          iVar3 = 0x53702f21;
                        }
                      }
                    }
                    else if (iVar11 < 0x1bddc2b1) {
                      if (iVar11 == 0x150512f5) {
                        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                                  (&DAT_001ff68f,0x13,&DAT_002044e8,&DAT_001ff68f);
                        uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b9)])
                                          (auStack_208,&DAT_001ff68f);
                        uVar9 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b2)])
                                          (local_318);
                        uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bd)])
                                          (uVar7,uVar9);
                        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])(uVar7,10);
                        uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bb)])();
                        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                                  (&DAT_001ff6a2,0xb,&DAT_002044ec,&DAT_001ff6a2);
                        uVar9 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b9)])
                                          (auStack_208,&DAT_001ff6a2);
                        uVar10 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5aa)])();
                        uVar12 = 0x30;
                        if ((uVar10 & 1) != 0) {
                          uVar12 = 0x31;
                        }
                        uVar9 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])
                                          (uVar9,uVar12);
                        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])(uVar9,10);
                        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                                  (&DAT_001ff6ad,0x10,&DAT_002044f0,&DAT_001ff6ad);
                        uVar9 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b9)])
                                          (auStack_208,&DAT_001ff6ad);
                        uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b2)])
                                          (uVar7);
                        uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bd)])
                                          (uVar9,uVar7);
                        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])(uVar7,10);
                        uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bb)])();
                        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                                  (&DAT_001ff6bd,0xc,&DAT_002044f4,&DAT_001ff6bd);
                        uVar9 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b9)])
                                          (auStack_208,&DAT_001ff6bd);
                        uVar10 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5ab)])();
                        uVar12 = 0x30;
                        if ((uVar10 & 1) != 0) {
                          uVar12 = 0x31;
                        }
                        uVar9 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])
                                          (uVar9,uVar12);
                        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])(uVar9,10);
                        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                                  (&DAT_001ff6c9,0x11,&DAT_002044f8,&DAT_001ff6c9);
                        uVar9 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b9)])
                                          (auStack_208,&DAT_001ff6c9);
                        uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b2)])
                                          (uVar7);
                        uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bd)])
                                          (uVar9,uVar7);
                        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])(uVar7,10);
                        uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bb)])();
                        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                                  (&DAT_001ff6da,0xc,&DAT_002044fc,&DAT_001ff6da);
                        uVar9 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b9)])
                                          (auStack_208,&DAT_001ff6da);
                        uVar10 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5a8)])();
                        uVar12 = 0x30;
                        if ((uVar10 & 1) != 0) {
                          uVar12 = 0x31;
                        }
                        uVar9 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])
                                          (uVar9,uVar12);
                        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])(uVar9,10);
                        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                                  (&DAT_001ff6e6,0x11,&DAT_00204500,&DAT_001ff6e6);
                        uVar9 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b9)])
                                          (auStack_208,&DAT_001ff6e6);
                        uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b2)])
                                          (uVar7);
                        uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bd)])
                                          (uVar9,uVar7);
                        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])(uVar7,10);
                        local_318 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bb)])
                                              ();
                        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                                  (&DAT_001ff6f7,0xf,&DAT_00204504,&DAT_001ff6f7);
                        uVar10 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5a9)])
                                           (&uStack_239,&DAT_001ff6f7);
                        local_320 = 0;
                        iVar3 = -0x728ae7c3;
                        if ((uVar10 & 1) == 0) {
                          iVar3 = -0xc612f94;
                        }
                      }
                      else if (iVar11 == 0x19a1df87) {
                        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                                  (&DAT_001ff956,0x1b,&DAT_00204584,&DAT_001ff956);
                        uVar10 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5a2)])
                                           (&DAT_001ff956);
                        iVar3 = -0x30f433f;
                        if ((uVar10 & 1) == 0) {
                          iVar3 = -0xb35f4da;
                        }
                      }
                      else if (iVar11 == 0x1a2ed230) {
                        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                                  (&DAT_001fff29,0xb,&DAT_002046f0,&DAT_001fff29);
                        uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b9)])
                                          (auStack_208,&DAT_001fff29);
                        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b59f)])
                                  (auStack_288,local_1f0);
                        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b6)])
                                  (auStack_238,auStack_288);
                        uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b7)])
                                          (uVar7,auStack_238);
                        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])(uVar7,10);
                        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])
                                  (auStack_238);
                        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])
                                  (auStack_288);
                        iVar3 = -0x62be0840;
                      }
                    }
                    else if (iVar11 == 0x1bddc2b1) {
                      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                                (&DAT_001ff639,9,&DAT_002044cc,&DAT_001ff639);
                      uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b9)])
                                        (auStack_208,&DAT_001ff639);
                      uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bd)])
                                        (uVar7,uVar8);
                      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])(uVar7,10);
                      iVar3 = -0x2007498f;
                    }
                    else if (iVar11 == 0x1ef05ef9) {
                      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                                (&DAT_001ffc91,0xe,&DAT_00204654,&DAT_001ffc91);
                      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5ae)])
                                (auStack_2d0,&DAT_001ffc91);
                      uVar10 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b1)])
                                         (auStack_2d0);
                      iVar3 = -0x26a84c80;
                      if ((uVar10 & 1) == 0) {
                        iVar3 = -0x5dbc2823;
                      }
                    }
                    else if (iVar11 == 0x23bc4710) {
                      local_330 = local_330 | 4;
                      iVar3 = 0x74e9a448;
                    }
                  }
                  else if (iVar11 < 0x4ce419e5) {
                    if (iVar11 < 0x36889dcb) {
                      if (iVar11 < 0x2e4c829f) {
                        if (iVar11 == 0x2a421459) {
                          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                                    (&DAT_001fff43,0xf,&DAT_002046f8,&DAT_001fff43);
                          uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b9)])
                                            (auStack_208,&DAT_001fff43);
                          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b59f)])
                                    (auStack_288,local_12d);
                          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b6)])
                                    (auStack_238,auStack_288);
                          uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b7)])
                                            (uVar7,auStack_238);
                          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])(uVar7,10)
                          ;
                          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])
                                    (auStack_238);
                          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])
                                    (auStack_288);
                          iVar3 = 0x5a255831;
                        }
                        else if (iVar11 == 0x2a62cf6e) {
                          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                                    (&DAT_001ffe94,0x10,&DAT_002046cc,&DAT_001ffe94);
                          uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b9)])
                                            (auStack_208,&DAT_001ffe94);
                          uVar9 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b2)])
                                            (local_318);
                          uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bd)])
                                            (uVar7,uVar9);
                          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])(uVar7,10)
                          ;
                          local_318 = (*(code *)(&PTR_FUN_00201200)
                                                [(int)(DAT_00202698 ^ 0x1873b5bb)])();
                          local_2e0 = 0;
                          local_2d8 = 0;
                          uVar10 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b59b)])
                                             (&local_2d8,&local_2e0);
                          iVar3 = -0x5fdff08f;
                          if ((uVar10 & 1) == 0) {
                            iVar3 = -0x182e20d4;
                          }
                        }
                      }
                      else if (iVar11 == 0x2e4c829f) {
                        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                                  (&DAT_001ff8f3,0x13,&DAT_00204570,&DAT_001ff8f3);
                        uVar10 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5a2)])
                                           (&DAT_001ff8f3);
                        iVar3 = -0x5e62a2cf;
                        if ((uVar10 & 1) == 0) {
                          iVar3 = -0x5579a56d;
                        }
                      }
                      else if (iVar11 == 0x2fd5f6e0) {
                        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                                  (&DAT_001ff82d,0x1b,&DAT_0020454c,&DAT_001ff82d);
                        uVar10 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5a2)])
                                           (&DAT_001ff82d);
                        iVar3 = 0xf9caa02;
                        if ((uVar10 & 1) == 0) {
                          iVar3 = 0x6a1b29af;
                        }
                      }
                      else if (iVar11 == 0x34fe2155) {
                        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                                  (&DAT_001ff8c6,0x15,&DAT_00204568,&DAT_001ff8c6);
                        uVar10 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5a2)])
                                           (&DAT_001ff8c6);
                        iVar3 = -0x1aaa8f29;
                        if ((uVar10 & 1) == 0) {
                          iVar3 = -0x25ff3756;
                        }
                      }
                    }
                    else if (iVar11 < 0x47d5ca5d) {
                      if (iVar11 == 0x36889dcb) {
                        local_328 = local_328 | 0x40;
                        iVar3 = -0x2a841d5f;
                      }
                      else if (iVar11 == 0x385c065f) {
                        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                                  (&DAT_001ff7f4,0x11,&DAT_00204540,&DAT_001ff7f4);
                        uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b9)])
                                          (auStack_208,&DAT_001ff7f4);
                        uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bd)])
                                          (uVar7,local_320);
                        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])(uVar7,10);
                        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                                  (&DAT_001ff805,0x16,&DAT_00204544,&DAT_001ff805);
                        uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b9)])
                                          (auStack_208,&DAT_001ff805);
                        uVar9 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b2)])
                                          (local_318);
                        uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bd)])
                                          (uVar7,uVar9);
                        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])(uVar7,10);
                        local_318 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bb)])
                                              ();
                        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                                  (&DAT_001ff81b,0x12,&DAT_00204548,&DAT_001ff81b);
                        uVar10 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5a2)])
                                           (&DAT_001ff81b);
                        local_330 = 0;
                        iVar3 = 0x1207d33c;
                        if ((uVar10 & 1) == 0) {
                          iVar3 = 0x2fd5f6e0;
                        }
                      }
                      else if (iVar11 == 0x43d35932) {
                        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                                  (&DAT_001ff746,0xf,&DAT_00204514,&DAT_001ff746);
                        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5ae)])
                                  (auStack_238,&DAT_001ff746);
                        uVar10 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b1)])
                                           (auStack_238);
                        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])
                                  (auStack_238);
                        iVar3 = 0x4cabba12;
                        if ((uVar10 & 1) == 0) {
                          iVar3 = -0x47fb656e;
                        }
                      }
                    }
                    else if (iVar11 == 0x47d5ca5d) {
                      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                                (&DAT_001ff64d,0xb,&DAT_002044d4,&DAT_001ff64d);
                      uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b9)])
                                        (auStack_208,&DAT_001ff64d);
                      uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5be)])
                                        (uVar7,local_334);
                      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])(uVar7,10);
                      iVar3 = -0xf0c56c7;
                    }
                    else if (iVar11 == 0x4c37a953) {
                      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                                (&DAT_001ff77f,0x14,&DAT_00204520,&DAT_001ff77f);
                      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5ae)])
                                (auStack_238,&DAT_001ff77f);
                      uVar10 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b1)])
                                         (auStack_238);
                      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_238);
                      iVar3 = -0x36da14b5;
                      if ((uVar10 & 1) == 0) {
                        iVar3 = -0x541dab0d;
                      }
                    }
                    else if (iVar11 == 0x4cabba12) {
                      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                                (&DAT_001ff755,0x16,&DAT_00204518,&DAT_001ff755);
                      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5ae)])
                                (auStack_238,&DAT_001ff755);
                      uVar10 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b1)])
                                         (auStack_238);
                      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_238);
                      iVar3 = -0x30a4cbad;
                      if ((uVar10 & 1) == 0) {
                        iVar3 = -0x7b315d26;
                      }
                    }
                  }
                  else if (iVar11 < 0x608eb4dc) {
                    if (iVar11 < 0x53702f21) {
                      if (iVar11 == 0x4ce419e5) {
                        local_320 = local_320 | 0x200;
                        iVar3 = -0x522bfc5a;
                      }
                      else if (iVar11 == 0x523ba12d) {
                        local_320 = local_320 | 0x400;
                        iVar3 = -0x21a88705;
                      }
                    }
                    else if (iVar11 == 0x53702f21) {
                      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                                (&DAT_001ff93e,0x18,&DAT_00204580,&DAT_001ff93e);
                      uVar10 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5a2)])
                                         (&DAT_001ff93e);
                      iVar3 = -0x1e0252d9;
                      if ((uVar10 & 1) == 0) {
                        iVar3 = 0x19a1df87;
                      }
                    }
                    else if (iVar11 == 0x5791ec44) {
                      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                                (&DAT_001ff732,0x14,&DAT_00204510,&DAT_001ff732);
                      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5ae)])
                                (auStack_238,&DAT_001ff732);
                      uVar10 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b1)])
                                         (auStack_238);
                      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_238);
                      iVar3 = 0x43d35932;
                      if ((uVar10 & 1) == 0) {
                        iVar3 = 0x608eb4dc;
                      }
                    }
                    else if (iVar11 == 0x5a255831) {
                      iVar3 = 0x12c8d01c;
                      if (local_ec[0] != '\0') {
                        iVar3 = 0x77717467;
                      }
                    }
                  }
                  else if (iVar11 < 0x74e9a448) {
                    if (iVar11 == 0x608eb4dc) {
                      local_320 = local_320 | 8;
                      iVar3 = 0x43d35932;
                    }
                    else if (iVar11 == 0x64f75e71) {
                      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                                (&DAT_001ff9c9,0xc,&DAT_002045a4,&DAT_001ff9c9);
                      uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b9)])
                                        (auStack_208,&DAT_001ff9c9);
                      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b6)])
                                (auStack_238,auStack_2a0);
                      uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b7)])
                                        (uVar7,auStack_238);
                      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])(uVar7,10);
                      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_238);
                      iVar3 = -0x40f944db;
                    }
                    else if (iVar11 == 0x6a1b29af) {
                      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                                (&DAT_001ff848,0x21,&DAT_00204550,&DAT_001ff848);
                      uVar10 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5a2)])
                                         (&DAT_001ff848);
                      iVar3 = 0x23bc4710;
                      if ((uVar10 & 1) == 0) {
                        iVar3 = 0x74e9a448;
                      }
                    }
                  }
                  else if (iVar11 == 0x74e9a448) {
                    (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                              (&DAT_001ff869,0x11,&DAT_00204554,&DAT_001ff869);
                    uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b9)])
                                      (auStack_208,&DAT_001ff869);
                    uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bd)])
                                      (uVar7,local_330);
                    (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])(uVar7,10);
                    (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                              (&DAT_001ff87a,0x16,&DAT_00204558,&DAT_001ff87a);
                    uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b9)])
                                      (auStack_208,&DAT_001ff87a);
                    uVar9 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b2)])
                                      (local_318);
                    uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bd)])
                                      (uVar7,uVar9);
                    (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])(uVar7,10);
                    local_318 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bb)])();
                    (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                              (&DAT_001ff890,0x13,&DAT_0020455c,&DAT_001ff890);
                    uVar10 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5a2)])
                                       (&DAT_001ff890);
                    local_328 = 0;
                    iVar3 = 0x793799e4;
                    if ((uVar10 & 1) == 0) {
                      iVar3 = -0x7941d2be;
                    }
                  }
                  else if (iVar11 == 0x77717467) {
                    (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                              (&DAT_001fff52,0xf,&DAT_002046fc,&DAT_001fff52);
                    uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b9)])
                                      (auStack_208,&DAT_001fff52);
                    (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b59f)])
                              (auStack_288,local_ec);
                    (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b6)])
                              (auStack_238,auStack_288);
                    uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b7)])
                                      (uVar7,auStack_238);
                    (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])(uVar7,10);
                    (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_238);
                    (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_288);
                    iVar3 = 0x12c8d01c;
                  }
                  else if (iVar11 == 0x793799e4) {
                    local_328 = local_328 | 1;
                    iVar3 = -0x7941d2be;
                  }
                }
                if (-0x36da14b6 < iVar11) break;
                if (iVar11 < -0x5ad1cb1c) {
                  if (iVar11 < -0x656fe0e3) {
                    if (iVar11 < -0x728ae7c3) {
                      if (iVar11 == -0x7b315d26) {
                        local_320 = local_320 | 0x20;
                        iVar3 = -0x30a4cbad;
                      }
                      else if (iVar11 == -0x7941d2be) {
                        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                                  (&DAT_001ff8a3,0xf,&DAT_00204560,&DAT_001ff8a3);
                        uVar10 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5a2)])
                                           (&DAT_001ff8a3);
                        iVar3 = -0x595b05ad;
                        if ((uVar10 & 1) == 0) {
                          iVar3 = -0x68fcb17e;
                        }
                      }
                    }
                    else if (iVar11 == -0x728ae7c3) {
                      local_320 = local_320 | 1;
                      iVar3 = -0xc612f94;
                    }
                    else if (iVar11 == -0x6b96e777) {
                      local_320 = local_320 | 0x100;
                      iVar3 = -0x1260edc3;
                    }
                    else if (iVar11 == -0x68fcb17e) {
                      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                                (&DAT_001ff8b2,0x14,&DAT_00204564,&DAT_001ff8b2);
                      uVar10 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5a2)])
                                         (&DAT_001ff8b2);
                      iVar3 = -0x656fe0e3;
                      if ((uVar10 & 1) == 0) {
                        iVar3 = 0x34fe2155;
                      }
                    }
                  }
                  else if (iVar11 < -0x5e62a2cf) {
                    if (iVar11 == -0x656fe0e3) {
                      local_328 = local_328 | 4;
                      iVar3 = 0x34fe2155;
                    }
                    else if (iVar11 == -0x62be0840) {
                      iVar3 = 0x8de3490;
                      if (local_16e[0] != '\0') {
                        iVar3 = -0x2deaca20;
                      }
                    }
                    else if (iVar11 == -0x5fdff08f) {
                      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                                (&DAT_001ffea4,0x12,&DAT_002046d0,&DAT_001ffea4);
                      uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b9)])
                                        (auStack_208,&DAT_001ffea4);
                      uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bd)])
                                        (uVar7,local_2d8);
                      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])(uVar7,10);
                      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                                (&DAT_001ffeb6,0x11,&DAT_002046d4,&DAT_001ffeb6);
                      uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b9)])
                                        (auStack_208,&DAT_001ffeb6);
                      uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bd)])
                                        (uVar7,local_2e0);
                      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])(uVar7,10);
                      iVar3 = -0x182e20d4;
                    }
                  }
                  else if (iVar11 == -0x5e62a2cf) {
                    local_328 = local_328 | 0x20;
                    iVar3 = -0x5579a56d;
                  }
                  else if (iVar11 == -0x5dbc2823) {
                    (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                              (&DAT_001ffc9f,0xc,&DAT_00204658,&DAT_001ffc9f);
                    uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b9)])
                                      (auStack_208,&DAT_001ffc9f);
                    (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b6)])
                              (auStack_238,auStack_2d0);
                    uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b7)])
                                      (uVar7,auStack_238);
                    (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])(uVar7,10);
                    (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_238);
                    iVar3 = -0x26a84c80;
                  }
                  else if (iVar11 == -0x5c7d5dc5) {
                    local_328 = local_328 | 0x10;
                    iVar3 = 0x2e4c829f;
                  }
                }
                else if (iVar11 < -0x47fb656e) {
                  if (iVar11 < -0x5579a56d) {
                    iVar3 = iVar1;
                    if ((iVar11 != -0x5ad1cb1c) && (iVar3 = iVar11, iVar11 == -0x595b05ad)) {
                      local_328 = local_328 | 2;
                      iVar3 = -0x68fcb17e;
                    }
                  }
                  else if (iVar11 == -0x5579a56d) {
                    (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                              (&DAT_001ff906,0xb,&DAT_00204574,&DAT_001ff906);
                    uVar10 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5a2)])
                                       (&DAT_001ff906);
                    iVar3 = 0x36889dcb;
                    if ((uVar10 & 1) == 0) {
                      iVar3 = -0x2a841d5f;
                    }
                  }
                  else if (iVar11 == -0x541dab0d) {
                    local_320 = local_320 | 0x80;
                    iVar3 = -0x36da14b5;
                  }
                  else if (iVar11 == -0x522bfc5a) {
                    (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                              (&DAT_001ff7bb,0x19,&DAT_00204530,&DAT_001ff7bb);
                    (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5ae)])
                              (auStack_258,&DAT_001ff7bb);
                    (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5ac)])
                              (auStack_238,auStack_258);
                    (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                              (&DAT_001ff7d4,9,&DAT_00204534,&DAT_001ff7d4);
                    uVar10 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5ad)])
                                       (auStack_238,&DAT_001ff7d4);
                    (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_238);
                    (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_258);
                    iVar3 = 0x523ba12d;
                    if ((uVar10 & 1) == 0) {
                      iVar3 = -0x21a88705;
                    }
                  }
                }
                else if (iVar11 < -0x43df3b40) {
                  if (iVar11 == -0x47fb656e) {
                    local_320 = local_320 | 0x10;
                    iVar3 = 0x4cabba12;
                  }
                  else if (iVar11 == -0x470f8cb9) {
                    (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                              (&DAT_001ffee7,0xe,&DAT_002046e0,&DAT_001ffee7);
                    uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b9)])
                                      (auStack_208,&DAT_001ffee7);
                    (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b6)])
                              (auStack_238,auStack_2f8);
                    uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b7)])
                                      (uVar7,auStack_238);
                    (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])(uVar7,10);
                    (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_238);
                    iVar3 = -0x46ecde75;
                  }
                  else if (iVar11 == -0x46ecde75) {
                    (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                              (&DAT_001ffef5,0x13,&DAT_002046e4,&DAT_001ffef5);
                    uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b9)])
                                      (auStack_208,&DAT_001ffef5);
                    uVar9 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b2)])
                                      (local_318);
                    uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bd)])
                                      (uVar7,uVar9);
                    (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])(uVar7,10);
                    local_318 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bb)])();
                    (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b599)])(auStack_310);
                    uVar10 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b1)])
                                       (auStack_310);
                    iVar3 = -0x17d247a;
                    if ((uVar10 & 1) == 0) {
                      iVar3 = -0x41e50251;
                    }
                  }
                }
                else if (iVar11 == -0x43df3b40) {
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                            (&DAT_001ffe86,0xe,&DAT_002046c8,&DAT_001ffe86);
                  uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b9)])
                                    (auStack_208,&DAT_001ffe86);
                  uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bd)])
                                    (uVar7,local_348);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])(uVar7,10);
                  iVar3 = 0x2a62cf6e;
                }
                else if (iVar11 == -0x41e50251) {
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                            (&DAT_001fff08,0xe,&DAT_002046e8,&DAT_001fff08);
                  uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b9)])
                                    (auStack_208,&DAT_001fff08);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b6)])
                            (auStack_238,auStack_310);
                  uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b7)])
                                    (uVar7,auStack_238);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])(uVar7,10);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_238);
                  iVar3 = -0x17d247a;
                }
                else if (iVar11 == -0x40f944db) {
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                            (&DAT_001ff9d5,0x11,&DAT_002045a8,&DAT_001ff9d5);
                  uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b9)])
                                    (auStack_208,&DAT_001ff9d5);
                  uVar9 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b2)])
                                    (local_318);
                  uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bd)])
                                    (uVar7,uVar9);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])(uVar7,10);
                  uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bb)])();
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                            (&DAT_001ff9e6,9,&DAT_002045ac,&DAT_001ff9e6);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b9)])
                            (auStack_208,&DAT_001ff9e6);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5a7)])(auStack_208);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])(auStack_208,10);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                            (&DAT_001ff9ef,0xe,&DAT_002045b0,&DAT_001ff9ef);
                  uVar9 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b9)])
                                    (auStack_208,&DAT_001ff9ef);
                  uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b2)])(uVar7);
                  uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bd)])
                                    (uVar9,uVar7);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])(uVar7,10);
                  local_318 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bb)])();
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                            (&DAT_001ff9fd,4,&DAT_002045b4,&DAT_001ff9fd);
                  uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b9)])
                                    (auStack_208,&DAT_001ff9fd);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                            (&DAT_001ffa01,0xc,&DAT_002045b8,&DAT_001ffa01);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5ae)])
                            (auStack_288,&DAT_001ffa01);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b6)])
                            (auStack_238,auStack_288);
                  uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b7)])
                                    (uVar7,auStack_238);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])(uVar7,10);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_238);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_288);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                            (&DAT_001ffa0d,7,&DAT_002045bc,&DAT_001ffa0d);
                  uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b9)])
                                    (auStack_208,&DAT_001ffa0d);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                            (&DAT_001ffa14,0x11,&DAT_002045c0,&DAT_001ffa14);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5ae)])
                            (auStack_288,&DAT_001ffa14);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b6)])
                            (auStack_238,auStack_288);
                  uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b7)])
                                    (uVar7,auStack_238);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])(uVar7,10);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_238);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_288);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                            (&DAT_001ffa25,7,&DAT_002045c4,&DAT_001ffa25);
                  uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b9)])
                                    (auStack_208,&DAT_001ffa25);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                            (&DAT_001ffa2c,0x11,&DAT_002045c8,&DAT_001ffa2c);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5ae)])
                            (auStack_288,&DAT_001ffa2c);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b6)])
                            (auStack_238,auStack_288);
                  uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b7)])
                                    (uVar7,auStack_238);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])(uVar7,10);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_238);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_288);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                            (&DAT_001ffa3d,8,&DAT_002045cc,&DAT_001ffa3d);
                  uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b9)])
                                    (auStack_208,&DAT_001ffa3d);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                            (&DAT_001ff7dd,0x12,&DAT_00204538,&DAT_001ff7dd);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5ae)])
                            (auStack_288,&DAT_001ff7dd);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b6)])
                            (auStack_238,auStack_288);
                  uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b7)])
                                    (uVar7,auStack_238);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])(uVar7,10);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_238);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_288);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                            (&DAT_001ffa45,0xd,&DAT_002045d0,&DAT_001ffa45);
                  uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b9)])
                                    (auStack_208,&DAT_001ffa45);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                            (&DAT_001ffa52,0x15,&DAT_002045d4,&DAT_001ffa52);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5ae)])
                            (auStack_288,&DAT_001ffa52);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b6)])
                            (auStack_238,auStack_288);
                  uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b7)])
                                    (uVar7,auStack_238);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])(uVar7,10);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_238);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_288);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                            (&DAT_001ffa67,0xe,&DAT_002045d8,&DAT_001ffa67);
                  uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b9)])
                                    (auStack_208,&DAT_001ffa67);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                            (&DAT_001ffa75,0x18,&DAT_002045dc,&DAT_001ffa75);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5ae)])
                            (auStack_288,&DAT_001ffa75);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b6)])
                            (auStack_238,auStack_288);
                  uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b7)])
                                    (uVar7,auStack_238);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])(uVar7,10);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_238);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_288);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                            (&DAT_001ffa8d,0x14,&DAT_002045e0,&DAT_001ffa8d);
                  uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b9)])
                                    (auStack_208,&DAT_001ffa8d);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                            (&DAT_001ffa75,0x18,&DAT_002045dc,&DAT_001ffa75);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5ae)])
                            (auStack_288,&DAT_001ffa75);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b6)])
                            (auStack_238,auStack_288);
                  uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b7)])
                                    (uVar7,auStack_238);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])(uVar7,10);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_238);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_288);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                            (&DAT_001ffaa1,0xe,&DAT_002045e4,&DAT_001ffaa1);
                  uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b9)])
                                    (auStack_208,&DAT_001ffaa1);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                            (&DAT_001ffaaf,0x10,&DAT_002045e8,&DAT_001ffaaf);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5ae)])
                            (auStack_288,&DAT_001ffaaf);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b6)])
                            (auStack_238,auStack_288);
                  uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b7)])
                                    (uVar7,auStack_238);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])(uVar7,10);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_238);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_288);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                            (&DAT_001ffabf,0xf,&DAT_002045ec,&DAT_001ffabf);
                  uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b9)])
                                    (auStack_208,&DAT_001ffabf);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                            (&DAT_001fface,0x11,&DAT_002045f0,&DAT_001fface);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5ae)])
                            (auStack_288,&DAT_001fface);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b6)])
                            (auStack_238,auStack_288);
                  uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b7)])
                                    (uVar7,auStack_238);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])(uVar7,10);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_238);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_288);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                            (&DAT_001ffadf,0x10,&DAT_002045f4,&DAT_001ffadf);
                  uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b9)])
                                    (auStack_208,&DAT_001ffadf);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                            (&DAT_001ffaef,0x12,&DAT_002045f8,&DAT_001ffaef);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5ae)])
                            (auStack_288,&DAT_001ffaef);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b6)])
                            (auStack_238,auStack_288);
                  uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b7)])
                                    (uVar7,auStack_238);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])(uVar7,10);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_238);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_288);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                            (&DAT_001ffb01,0x19,&DAT_002045fc,&DAT_001ffb01);
                  uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b9)])
                                    (auStack_208,&DAT_001ffb01);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                            (&DAT_001ffb1a,0x1b,&DAT_00204600,&DAT_001ffb1a);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5ae)])
                            (auStack_288,&DAT_001ffb1a);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b6)])
                            (auStack_238,auStack_288);
                  uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b7)])
                                    (uVar7,auStack_238);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])(uVar7,10);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_238);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_288);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                            (&DAT_001ffb35,0x17,&DAT_00204604,&DAT_001ffb35);
                  uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b9)])
                                    (auStack_208,&DAT_001ffb35);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                            (&DAT_001ffb4c,0x19,&DAT_00204608,&DAT_001ffb4c);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5ae)])
                            (auStack_288,&DAT_001ffb4c);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b6)])
                            (auStack_238,auStack_288);
                  uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b7)])
                                    (uVar7,auStack_238);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])(uVar7,10);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_238);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_288);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                            (&DAT_001ffb65,0xf,&DAT_0020460c,&DAT_001ffb65);
                  uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b9)])
                                    (auStack_208,&DAT_001ffb65);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                            (&DAT_001ffb74,0x11,&DAT_00204610,&DAT_001ffb74);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5ae)])
                            (auStack_288,&DAT_001ffb74);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b6)])
                            (auStack_238,auStack_288);
                  uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b7)])
                                    (uVar7,auStack_238);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])(uVar7,10);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_238);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_288);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                            (&DAT_001ffb85,4,&DAT_00204614,&DAT_001ffb85);
                  uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b9)])
                                    (auStack_208,&DAT_001ffb85);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                            (&DAT_001ffb89,0xe,&DAT_00204618,&DAT_001ffb89);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5ae)])
                            (auStack_288,&DAT_001ffb89);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b6)])
                            (auStack_238,auStack_288);
                  uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b7)])
                                    (uVar7,auStack_238);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])(uVar7,10);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_238);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_288);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                            (&DAT_001ffb97,10,&DAT_0020461c,&DAT_001ffb97);
                  uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b9)])
                                    (auStack_208,&DAT_001ffb97);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                            (&DAT_001ffba1,0xc,&DAT_00204620,&DAT_001ffba1);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5ae)])
                            (auStack_288,&DAT_001ffba1);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b6)])
                            (auStack_238,auStack_288);
                  uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b7)])
                                    (uVar7,auStack_238);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])(uVar7,10);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_238);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_288);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                            (&DAT_001ffbad,0xc,&DAT_00204624,&DAT_001ffbad);
                  uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b9)])
                                    (auStack_208,&DAT_001ffbad);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                            (&DAT_001ffbb9,0xe,&DAT_00204628,&DAT_001ffbb9);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5ae)])
                            (auStack_288,&DAT_001ffbb9);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b6)])
                            (auStack_238,auStack_288);
                  uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b7)])
                                    (uVar7,auStack_238);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])(uVar7,10);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_238);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_288);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                            (&DAT_001ffbc7,0xf,&DAT_0020462c,&DAT_001ffbc7);
                  uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b9)])
                                    (auStack_208,&DAT_001ffbc7);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                            (&DAT_001ffbd6,0x19,&DAT_00204630,&DAT_001ffbd6);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5ae)])
                            (auStack_288,&DAT_001ffbd6);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b6)])
                            (auStack_238,auStack_288);
                  uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b7)])
                                    (uVar7,auStack_238);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])(uVar7,10);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_238);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_288);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                            (&DAT_001ffbef,0xb,&DAT_00204634,&DAT_001ffbef);
                  uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b9)])
                                    (auStack_208,&DAT_001ffbef);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                            (&DAT_001ffbfa,0x15,&DAT_00204638,&DAT_001ffbfa);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5ae)])
                            (auStack_288,&DAT_001ffbfa);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b6)])
                            (auStack_238,auStack_288);
                  uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b7)])
                                    (uVar7,auStack_238);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])(uVar7,10);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_238);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_288);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                            (&DAT_001ffc0f,0x13,&DAT_0020463c,&DAT_001ffc0f);
                  uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b9)])
                                    (auStack_208,&DAT_001ffc0f);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                            (&DAT_001ffc22,0x1d,&DAT_00204640,&DAT_001ffc22);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5ae)])
                            (auStack_288,&DAT_001ffc22);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b6)])
                            (auStack_238,auStack_288);
                  uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b7)])
                                    (uVar7,auStack_238);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])(uVar7,10);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_238);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_288);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                            (&DAT_001ffc3f,0x10,&DAT_00204644,&DAT_001ffc3f);
                  uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b9)])
                                    (auStack_208,&DAT_001ffc3f);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                            (&DAT_001ffc4f,0x20,&DAT_00204648,&DAT_001ffc4f);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5ae)])
                            (auStack_288,&DAT_001ffc4f);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b6)])
                            (auStack_238,auStack_288);
                  uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b7)])
                                    (uVar7,auStack_238);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])(uVar7,10);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_238);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_288);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                            (&DAT_001ffc6f,0x12,&DAT_0020464c,&DAT_001ffc6f);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5ae)])
                            (auStack_2b8,&DAT_001ffc6f);
                  uVar10 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b1)])
                                     (auStack_2b8);
                  iVar3 = 0x1ef05ef9;
                  if ((uVar10 & 1) == 0) {
                    iVar3 = -0x1413018b;
                  }
                }
              }
              if (iVar11 < -0x1c565669) break;
              if (iVar11 < -0x143f20d9) {
                if (iVar11 < -0x18c6cea5) {
                  if (iVar11 == -0x1c565669) {
                    local_328 = local_328 | 0x80;
                    iVar3 = -0x6902b25;
                  }
                  else if (iVar11 == -0x1aaa8f29) {
                    local_328 = local_328 | 8;
                    iVar3 = -0x25ff3756;
                  }
                }
                else if (iVar11 == -0x18c6cea5) {
                  local_320 = local_320 | 0x800;
                  iVar3 = 0x385c065f;
                }
                else if (iVar11 == -0x1833137c) {
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                            (&DAT_001ffe68,0xe,&DAT_002046c0,&DAT_001ffe68);
                  uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b9)])
                                    (auStack_208,&DAT_001ffe68);
                  uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bd)])
                                    (uVar7,local_350);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])(uVar7,10);
                  iVar3 = -0x143f20d9;
                }
                else if (iVar11 == -0x182e20d4) {
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                            (&DAT_001ffec7,0x12,&DAT_002046d8,&DAT_001ffec7);
                  uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b9)])
                                    (auStack_208,&DAT_001ffec7);
                  uVar9 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b2)])
                                    (local_318);
                  uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bd)])
                                    (uVar7,uVar9);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])(uVar7,10);
                  local_318 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bb)])();
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                            (&DAT_001ffed9,0xe,&DAT_002046dc,&DAT_001ffed9);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b598)])
                            (auStack_2f8,&DAT_001ffed9);
                  uVar10 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b1)])
                                     (auStack_2f8);
                  iVar3 = -0x46ecde75;
                  if ((uVar10 & 1) == 0) {
                    iVar3 = -0x470f8cb9;
                  }
                }
              }
              else if (iVar11 < -0x1260edc3) {
                if (iVar11 == -0x143f20d9) {
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                            (&DAT_001ffe76,0x10,&DAT_002046c4,&DAT_001ffe76);
                  uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b9)])
                                    (auStack_208,&DAT_001ffe76);
                  uVar9 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b2)])
                                    (local_318);
                  uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bd)])
                                    (uVar7,uVar9);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])(uVar7,10);
                  local_318 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bb)])();
                  local_348 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b59a)])();
                  iVar3 = -0x43df3b40;
                  if (local_348 < 1) {
                    iVar3 = 0x2a62cf6e;
                  }
                }
                else if (iVar11 == -0x1413018b) {
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                            (&DAT_001ffc81,0x10,&DAT_00204650,&DAT_001ffc81);
                  uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b9)])
                                    (auStack_208,&DAT_001ffc81);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b6)])
                            (auStack_238,auStack_2b8);
                  uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b7)])
                                    (uVar7,auStack_238);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])(uVar7,10);
                  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_238);
                  iVar3 = 0x1ef05ef9;
                }
                else if (iVar11 == -0x12e0a921) {
                  local_320 = local_320 | 0x40;
                  iVar3 = 0x4c37a953;
                }
              }
              else if (iVar11 == -0x1260edc3) {
                (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                          (&DAT_001ff7ab,0xe,&DAT_00204528,&DAT_001ff7ab);
                (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5ae)])
                          (auStack_238,&DAT_001ff7ab);
                (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                          (&DAT_001ff7b9,2,&DAT_0020452c,&DAT_001ff7b9);
                uVar10 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5af)])
                                   (auStack_238,&DAT_001ff7b9);
                (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_238);
                iVar3 = 0x4ce419e5;
                if ((uVar10 & 1) == 0) {
                  iVar3 = -0x522bfc5a;
                }
              }
              else if (iVar11 == -0xf0c56c7) {
                (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                          (&DAT_001ff658,0x10,&DAT_002044d8,&DAT_001ff658);
                uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b9)])
                                  (auStack_208,&DAT_001ff658);
                uVar9 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b2)])(local_318);
                uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bd)])
                                  (uVar7,uVar9);
                (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])(uVar7,10);
                local_318 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bb)])();
                (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b0)])(auStack_220);
                uVar10 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b1)])
                                   (auStack_220);
                iVar3 = 0x4c75b0d;
                if ((uVar10 & 1) == 0) {
                  iVar3 = 0x10aaf693;
                }
              }
              else if (iVar11 == -0xc612f94) {
                (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                          (&DAT_001ff706,0x14,&DAT_00204508,&DAT_001ff706);
                uVar10 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5a9)])
                                   (&uStack_239,&DAT_001ff706);
                iVar3 = -0x201f6e05;
                if ((uVar10 & 1) == 0) {
                  iVar3 = -0xe3bd21;
                }
              }
            }
            if (iVar11 < -0x25ff3756) break;
            if (iVar11 < -0x201f6e05) {
              if (iVar11 == -0x25ff3756) {
                (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                          (&DAT_001ff8db,0x18,&DAT_0020456c,&DAT_001ff8db);
                uVar10 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5a2)])
                                   (&DAT_001ff8db);
                iVar3 = -0x5c7d5dc5;
                if ((uVar10 & 1) == 0) {
                  iVar3 = 0x2e4c829f;
                }
              }
              else if (iVar11 == -0x21a88705) {
                (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                          (&DAT_001ff7dd,0x12,&DAT_00204538,&DAT_001ff7dd);
                (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5ae)])
                          (auStack_270,&DAT_001ff7dd);
                (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5ac)])
                          (auStack_238,auStack_270);
                (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                          (&DAT_001ff7ef,5,&DAT_0020453c,&DAT_001ff7ef);
                uVar10 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5ad)])
                                   (auStack_238,&DAT_001ff7ef);
                (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_238);
                (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_270);
                iVar3 = -0x18c6cea5;
                if ((uVar10 & 1) == 0) {
                  iVar3 = 0x385c065f;
                }
              }
            }
            else if (iVar11 == -0x201f6e05) {
              local_320 = local_320 | 2;
              iVar3 = -0xe3bd21;
            }
            else if (iVar11 == -0x2007498f) {
              (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                        (&DAT_001ff642,0xb,&DAT_002044d0,&DAT_001ff642);
              uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b9)])
                                (auStack_208,&DAT_001ff642);
              uVar9 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b2)])(local_318);
              uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bd)])(uVar7,uVar9);
              (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])(uVar7,10);
              local_318 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bb)])();
              local_334 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b3)])();
              iVar3 = 0x47d5ca5d;
              if (local_334 < 1) {
                iVar3 = -0xf0c56c7;
              }
            }
            else if (iVar11 == -0x1e0252d9) {
              local_328 = local_328 | 0x200;
              iVar3 = 0x19a1df87;
            }
          }
          if (iVar11 < -0x2deaca20) break;
          if (iVar11 == -0x2deaca20) {
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                      (&DAT_001fff34,0xf,&DAT_002046f4,&DAT_001fff34);
            uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b9)])
                              (auStack_208,&DAT_001fff34);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b59f)])(auStack_288,local_16e);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b6)])
                      (auStack_238,auStack_288);
            uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b7)])
                              (uVar7,auStack_238);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])(uVar7,10);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_238);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_288);
            iVar3 = 0x8de3490;
          }
          else if (iVar11 == -0x2a841d5f) {
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                      (&DAT_001ff911,0x1a,&DAT_00204578,&DAT_001ff911);
            uVar10 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5a2)])(&DAT_001ff911)
            ;
            iVar3 = -0x1c565669;
            if ((uVar10 & 1) == 0) {
              iVar3 = -0x6902b25;
            }
          }
          else if (iVar11 == -0x26a84c80) {
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                      (&DAT_001ffcab,0x15,&DAT_0020465c,&DAT_001ffcab);
            uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b9)])
                              (auStack_208,&DAT_001ffcab);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                      (&DAT_001ffcc0,0x1a,&DAT_00204660,&DAT_001ffcc0);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5ae)])
                      (auStack_288,&DAT_001ffcc0);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b6)])
                      (auStack_238,auStack_288);
            uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b7)])
                              (uVar7,auStack_238);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])(uVar7,10);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_238);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_288);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                      (&DAT_001ffcda,0x15,&DAT_00204664,&DAT_001ffcda);
            uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b9)])
                              (auStack_208,&DAT_001ffcda);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                      (&DAT_001ffcef,0x1c,&DAT_00204668,&DAT_001ffcef);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5ae)])
                      (auStack_288,&DAT_001ffcef);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b6)])
                      (auStack_238,auStack_288);
            uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b7)])
                              (uVar7,auStack_238);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])(uVar7,10);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_238);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_288);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                      (&DAT_001ffd0b,0xe,&DAT_0020466c,&DAT_001ffd0b);
            uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b9)])
                              (auStack_208,&DAT_001ffd0b);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                      (&DAT_001ffd19,0x15,&DAT_00204670,&DAT_001ffd19);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5ae)])
                      (auStack_288,&DAT_001ffd19);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b6)])
                      (auStack_238,auStack_288);
            uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b7)])
                              (uVar7,auStack_238);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])(uVar7,10);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_238);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_288);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                      (&DAT_001ffd2e,0xc,&DAT_00204674,&DAT_001ffd2e);
            uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b9)])
                              (auStack_208,&DAT_001ffd2e);
            uVar9 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b2)])(local_318);
            uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bd)])(uVar7,uVar9);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])(uVar7,10);
            uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bb)])();
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                      (&DAT_001ffd3a,9,&DAT_00204678,&DAT_001ffd3a);
            uVar9 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b9)])
                              (auStack_208,&DAT_001ffd3a);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                      (&DAT_001ffa01,0xc,&DAT_002045b8,&DAT_001ffa01);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5a4)])
                      (auStack_288,&DAT_001ffa01);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b6)])
                      (auStack_238,auStack_288);
            uVar9 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b7)])
                              (uVar9,auStack_238);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])(uVar9,10);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_238);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_288);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                      (&DAT_001ffd43,0xc,&DAT_0020467c,&DAT_001ffd43);
            uVar9 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b9)])
                              (auStack_208,&DAT_001ffd43);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                      (&DAT_001ffa14,0x11,&DAT_002045c0,&DAT_001ffa14);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5a4)])
                      (auStack_288,&DAT_001ffa14);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b6)])
                      (auStack_238,auStack_288);
            uVar9 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b7)])
                              (uVar9,auStack_238);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])(uVar9,10);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_238);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_288);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                      (&DAT_001ffd4f,0xc,&DAT_00204680,&DAT_001ffd4f);
            uVar9 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b9)])
                              (auStack_208,&DAT_001ffd4f);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                      (&DAT_001ffa2c,0x11,&DAT_002045c8,&DAT_001ffa2c);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5a4)])
                      (auStack_288,&DAT_001ffa2c);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b6)])
                      (auStack_238,auStack_288);
            uVar9 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b7)])
                              (uVar9,auStack_238);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])(uVar9,10);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_238);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_288);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                      (&DAT_001ffd5b,0xd,&DAT_00204684,&DAT_001ffd5b);
            uVar9 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b9)])
                              (auStack_208,&DAT_001ffd5b);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                      (&DAT_001ff7dd,0x12,&DAT_00204538,&DAT_001ff7dd);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5a4)])
                      (auStack_288,&DAT_001ff7dd);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b6)])
                      (auStack_238,auStack_288);
            uVar9 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b7)])
                              (uVar9,auStack_238);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])(uVar9,10);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_238);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_288);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                      (&DAT_001ffd68,0x12,&DAT_00204688,&DAT_001ffd68);
            uVar9 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b9)])
                              (auStack_208,&DAT_001ffd68);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                      (&DAT_001ffa52,0x15,&DAT_002045d4,&DAT_001ffa52);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5a4)])
                      (auStack_288,&DAT_001ffa52);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b6)])
                      (auStack_238,auStack_288);
            uVar9 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b7)])
                              (uVar9,auStack_238);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])(uVar9,10);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_238);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_288);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                      (&DAT_001ffd7a,0x13,&DAT_0020468c,&DAT_001ffd7a);
            uVar9 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b9)])
                              (auStack_208,&DAT_001ffd7a);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                      (&DAT_001ffa75,0x18,&DAT_002045dc,&DAT_001ffa75);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5a4)])
                      (auStack_288,&DAT_001ffa75);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b6)])
                      (auStack_238,auStack_288);
            uVar9 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b7)])
                              (uVar9,auStack_238);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])(uVar9,10);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_238);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_288);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                      (&DAT_001ffd8d,0x13,&DAT_00204690,&DAT_001ffd8d);
            uVar9 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b9)])
                              (auStack_208,&DAT_001ffd8d);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                      (&DAT_001ffaaf,0x10,&DAT_002045e8,&DAT_001ffaaf);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5a4)])
                      (auStack_288,&DAT_001ffaaf);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b6)])
                      (auStack_238,auStack_288);
            uVar9 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b7)])
                              (uVar9,auStack_238);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])(uVar9,10);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_238);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_288);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                      (&DAT_001ffda0,0x14,&DAT_00204694,&DAT_001ffda0);
            uVar9 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b9)])
                              (auStack_208,&DAT_001ffda0);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                      (&DAT_001fface,0x11,&DAT_002045f0,&DAT_001fface);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5a4)])
                      (auStack_288,&DAT_001fface);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b6)])
                      (auStack_238,auStack_288);
            uVar9 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b7)])
                              (uVar9,auStack_238);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])(uVar9,10);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_238);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_288);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                      (&DAT_001ffdb4,0x15,&DAT_00204698,&DAT_001ffdb4);
            uVar9 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b9)])
                              (auStack_208,&DAT_001ffdb4);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                      (&DAT_001ffaef,0x12,&DAT_002045f8,&DAT_001ffaef);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5a4)])
                      (auStack_288,&DAT_001ffaef);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b6)])
                      (auStack_238,auStack_288);
            uVar9 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b7)])
                              (uVar9,auStack_238);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])(uVar9,10);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_238);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_288);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                      (&DAT_001ffdc9,0x14,&DAT_0020469c,&DAT_001ffdc9);
            uVar9 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b9)])
                              (auStack_208,&DAT_001ffdc9);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                      (&DAT_001ffb74,0x11,&DAT_00204610,&DAT_001ffb74);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5a4)])
                      (auStack_288,&DAT_001ffb74);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b6)])
                      (auStack_238,auStack_288);
            uVar9 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b7)])
                              (uVar9,auStack_238);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])(uVar9,10);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_238);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_288);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                      (&DAT_001ffddd,9,&DAT_002046a0,&DAT_001ffddd);
            uVar9 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b9)])
                              (auStack_208,&DAT_001ffddd);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                      (&DAT_001ffb89,0xe,&DAT_00204618,&DAT_001ffb89);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5a4)])
                      (auStack_288,&DAT_001ffb89);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b6)])
                      (auStack_238,auStack_288);
            uVar9 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b7)])
                              (uVar9,auStack_238);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])(uVar9,10);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_238);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_288);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                      (&DAT_001ffde6,0xf,&DAT_002046a4,&DAT_001ffde6);
            uVar9 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b9)])
                              (auStack_208,&DAT_001ffde6);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                      (&DAT_001ffba1,0xc,&DAT_00204620,&DAT_001ffba1);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5a4)])
                      (auStack_288,&DAT_001ffba1);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b6)])
                      (auStack_238,auStack_288);
            uVar9 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b7)])
                              (uVar9,auStack_238);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])(uVar9,10);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_238);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_288);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                      (&DAT_001ffdf5,0x11,&DAT_002046a8,&DAT_001ffdf5);
            uVar9 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b9)])
                              (auStack_208,&DAT_001ffdf5);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                      (&DAT_001ffbb9,0xe,&DAT_00204628,&DAT_001ffbb9);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5a4)])
                      (auStack_288,&DAT_001ffbb9);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b6)])
                      (auStack_238,auStack_288);
            uVar9 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b7)])
                              (uVar9,auStack_238);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])(uVar9,10);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_238);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_288);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                      (&DAT_001ffe06,0x14,&DAT_002046ac,&DAT_001ffe06);
            uVar9 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b9)])
                              (auStack_208,&DAT_001ffe06);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                      (&DAT_001ffbd6,0x19,&DAT_00204630,&DAT_001ffbd6);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5a4)])
                      (auStack_288,&DAT_001ffbd6);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b6)])
                      (auStack_238,auStack_288);
            uVar9 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b7)])
                              (uVar9,auStack_238);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])(uVar9,10);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_238);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_288);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                      (&DAT_001ffe1a,0x10,&DAT_002046b0,&DAT_001ffe1a);
            uVar9 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b9)])
                              (auStack_208,&DAT_001ffe1a);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                      (&DAT_001ffbfa,0x15,&DAT_00204638,&DAT_001ffbfa);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5a4)])
                      (auStack_288,&DAT_001ffbfa);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b6)])
                      (auStack_238,auStack_288);
            uVar9 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b7)])
                              (uVar9,auStack_238);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])(uVar9,10);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_238);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_288);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                      (&DAT_001ffe2a,0x18,&DAT_002046b4,&DAT_001ffe2a);
            uVar9 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b9)])
                              (auStack_208,&DAT_001ffe2a);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                      (&DAT_001ffc22,0x1d,&DAT_00204640,&DAT_001ffc22);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5a4)])
                      (auStack_288,&DAT_001ffc22);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b6)])
                      (auStack_238,auStack_288);
            uVar9 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b7)])
                              (uVar9,auStack_238);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])(uVar9,10);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_238);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_288);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                      (&DAT_001ffe42,0x15,&DAT_002046b8,&DAT_001ffe42);
            uVar9 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b9)])
                              (auStack_208,&DAT_001ffe42);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                      (&DAT_001ffc4f,0x20,&DAT_00204648,&DAT_001ffc4f);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5a4)])
                      (auStack_288,&DAT_001ffc4f);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b6)])
                      (auStack_238,auStack_288);
            uVar9 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b7)])
                              (uVar9,auStack_238);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])(uVar9,10);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_238);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_288);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                      (&DAT_001ffe57,0x11,&DAT_002046bc,&DAT_001ffe57);
            uVar9 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b9)])
                              (auStack_208,&DAT_001ffe57);
            uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b2)])(uVar7);
            uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bd)])(uVar9,uVar7);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])(uVar7,10);
            local_318 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bb)])();
            local_350 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5a5)])();
            iVar3 = -0x1833137c;
            if (local_350 < 1) {
              iVar3 = -0x143f20d9;
            }
          }
        }
        if (iVar11 != -0x36da14b5) break;
        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                  (&DAT_001ff793,0x18,&DAT_00204524,&DAT_001ff793);
        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5ae)])(auStack_238,&DAT_001ff793);
        uVar10 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b1)])(auStack_238);
        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_238);
        iVar3 = -0x1260edc3;
        if ((uVar10 & 1) == 0) {
          iVar3 = -0x6b96e777;
        }
      }
      if (iVar11 != -0x30a4cbad) break;
      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                (&DAT_001ff76b,0x14,&DAT_0020451c,&DAT_001ff76b);
      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5ae)])(auStack_238,&DAT_001ff76b);
      uVar10 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b1)])(auStack_238);
      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_238);
      iVar3 = 0x4c37a953;
      if ((uVar10 & 1) == 0) {
        iVar3 = -0x12e0a921;
      }
    }
  } while (iVar11 != -0x323efb3a);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
            (&DAT_001fff61,0xc,&DAT_00204700,&DAT_001fff61);
  uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b9)])
                    (auStack_208,&DAT_001fff61);
  uVar9 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b2)])(local_318);
  uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bd)])(uVar7,uVar9);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])(uVar7,10);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
            (&DAT_001fff6d,0xe,&DAT_00204704,&DAT_001fff6d);
  uVar7 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b9)])
                    (auStack_208,&DAT_001fff6d);
  uVar6 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b2)])(uVar6);
  uVar6 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bd)])(uVar7,uVar6);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5bf)])(uVar6,10);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b59c)])(param_1,auStack_208);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_310);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_2f8);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_2d0);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_2b8);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_2a0);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b4)])(auStack_220);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b59d)])(auStack_208);
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


