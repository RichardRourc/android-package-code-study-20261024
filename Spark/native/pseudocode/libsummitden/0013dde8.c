// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0013dde8; body: [[0013dde8, 0013e58f]]

void FUN_0013dde8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  long lVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_ec;
  int iStack_e8;
  undefined1 auStack_e4 [4];
  undefined1 auStack_e0 [4];
  undefined1 auStack_dc [4];
  undefined1 auStack_d8 [4];
  undefined1 auStack_d4 [4];
  undefined1 auStack_d0 [4];
  undefined1 auStack_cc [4];
  undefined1 auStack_c8 [4];
  undefined1 auStack_c4 [4];
  undefined1 auStack_c0 [4];
  undefined1 auStack_bc [4];
  undefined1 auStack_b8 [4];
  undefined1 auStack_b4 [4];
  undefined1 auStack_b0 [4];
  undefined1 auStack_ac [4];
  int local_a8 [4];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined8 local_74;
  undefined4 local_6c;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  iVar7 = -0x233c8e9a;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  local_a8[0] = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37166)])(0);
  local_a8[1] = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37166)])(1);
  local_a8[2] = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37166)])(2);
  local_a8[3] = (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37166)])(3);
  local_78 = param_4;
  iVar8 = 0;
  local_74 = 0;
  uStack_90 = 0;
  local_98 = 0;
  uStack_80 = 0;
  local_88 = 0;
  local_6c = 0;
  iVar6 = -0x3800da03;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (0x174bcd74 < iVar6) {
            if (iVar6 < 0x5b076289) {
              if (iVar6 == 0x174bcd75) {
                iVar7 = iVar7 + 1;
                iVar6 = 0x57472735;
              }
              else if (iVar6 == 0x2ba2a647) {
                puVar5 = (undefined1 *)
                         (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371de)])(param_3,0)
                ;
                uVar1 = *puVar5;
                puVar5 = (undefined1 *)
                         (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371de)])(param_3,1)
                ;
                uVar2 = *puVar5;
                puVar5 = (undefined1 *)
                         (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371de)])(param_3,2)
                ;
                uVar3 = *puVar5;
                puVar5 = (undefined1 *)
                         (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371de)])(param_3,3)
                ;
                local_74 = CONCAT44(local_74._4_4_,
                                    CONCAT13(*puVar5,CONCAT12(uVar3,CONCAT11(uVar2,uVar1))));
                puVar5 = (undefined1 *)
                         (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371de)])(param_3,4)
                ;
                uVar1 = *puVar5;
                puVar5 = (undefined1 *)
                         (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371de)])(param_3,5)
                ;
                uVar2 = *puVar5;
                puVar5 = (undefined1 *)
                         (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371de)])(param_3,6)
                ;
                uVar3 = *puVar5;
                puVar5 = (undefined1 *)
                         (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371de)])(param_3,7)
                ;
                local_74 = CONCAT44(CONCAT13(*puVar5,CONCAT12(uVar3,CONCAT11(uVar2,uVar1))),
                                    (undefined4)local_74);
                puVar5 = (undefined1 *)
                         (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371de)])(param_3,8)
                ;
                uVar1 = *puVar5;
                puVar5 = (undefined1 *)
                         (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371de)])(param_3,9)
                ;
                uVar2 = *puVar5;
                puVar5 = (undefined1 *)
                         (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371de)])
                                   (param_3,10);
                uVar3 = *puVar5;
                puVar5 = (undefined1 *)
                         (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371de)])
                                   (param_3,0xb);
                local_6c = CONCAT13(*puVar5,CONCAT12(uVar3,CONCAT11(uVar2,uVar1)));
                (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37099)])
                          (&iStack_e8,0x40,local_a8,0x40);
                local_ec = 0;
                iVar6 = -0x469ffdb5;
              }
              else if (iVar6 == 0x57472735) {
                iVar6 = -0x2c2560cf;
                if (0xf < iVar7) {
                  iVar6 = -0x28f4e694;
                }
              }
            }
            else if (iVar6 < 0x6962ef08) {
              if (iVar6 == 0x5b076289) {
                local_ec = local_ec + 1;
                iVar6 = -0x469ffdb5;
              }
              else if (iVar6 == 0x61420dd0) {
                iVar6 = 0x6f8d11bd;
              }
            }
            else if (iVar6 == 0x6962ef08) {
              iVar6 = 0x2ba2a647;
            }
            else if (iVar6 == 0x6f8d11bd) {
              iVar7 = 0;
              iVar6 = 0x57472735;
            }
          }
          if (iVar6 < -0x2c2560cf) break;
          if (iVar6 < 0x6e003e6) {
            if (iVar6 == -0x2c2560cf) {
              iVar6 = local_a8[iVar7] + (&iStack_e8)[iVar7];
              puVar5 = (undefined1 *)
                       (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371d1)])
                                 (param_1,(long)(iVar7 << 2));
              *puVar5 = (char)iVar6;
              puVar5 = (undefined1 *)
                       (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371d1)])
                                 (param_1,(long)(int)(iVar7 << 2 | 1));
              *puVar5 = (char)((uint)iVar6 >> 8);
              puVar5 = (undefined1 *)
                       (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371d1)])
                                 (param_1,(long)(int)(iVar7 << 2 | 2));
              *puVar5 = (char)((uint)iVar6 >> 0x10);
              puVar5 = (undefined1 *)
                       (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371d1)])
                                 (param_1,(long)(int)(iVar7 << 2 | 3));
              *puVar5 = (char)((uint)iVar6 >> 0x18);
              iVar6 = 0x174bcd75;
            }
            else if (iVar6 == -0x28f4e694) {
              iVar6 = -0x4a8b5972;
            }
          }
          else if (iVar6 == 0x6e003e6) {
            puVar5 = (undefined1 *)
                     (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371de)])
                               (param_2,(long)(iVar8 << 2));
            uVar1 = *puVar5;
            puVar5 = (undefined1 *)
                     (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371de)])
                               (param_2,(long)(int)(iVar8 << 2 | 1));
            uVar2 = *puVar5;
            puVar5 = (undefined1 *)
                     (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371de)])
                               (param_2,(long)(int)(iVar8 << 2 | 2));
            uVar3 = *puVar5;
            puVar5 = (undefined1 *)
                     (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc371de)])
                               (param_2,(long)(int)(iVar8 << 2 | 3));
            *(uint *)((long)&local_98 + (long)iVar8 * 4) =
                 CONCAT13(*puVar5,CONCAT12(uVar3,CONCAT11(uVar2,uVar1)));
            iVar6 = -0x7290963b;
          }
          else if (iVar6 == 0x14f64d83) {
            (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37098)])
                      (&iStack_e8,auStack_d8,auStack_c8,auStack_b8);
            (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37098)])
                      (auStack_e4,auStack_d4,auStack_c4,auStack_b4);
            (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37098)])
                      (auStack_e0,auStack_d0,auStack_c0,auStack_b0);
            (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37098)])
                      (auStack_dc,auStack_cc,auStack_bc,auStack_ac);
            (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37098)])
                      (&iStack_e8,auStack_d4,auStack_c0,auStack_ac);
            (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37098)])
                      (auStack_e4,auStack_d0,auStack_bc,auStack_b8);
            (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37098)])
                      (auStack_e0,auStack_cc,auStack_c8,auStack_b4);
            (*(code *)(&PTR_FUN_001faed0)[(int)(DAT_001fbb18 ^ 0xdcc37098)])
                      (auStack_dc,auStack_d8,auStack_c4,auStack_b0);
            iVar6 = 0x5b076289;
          }
        }
        if (iVar6 < -0x469ffdb5) break;
        if (iVar6 == -0x469ffdb5) {
          iVar6 = 0x14f64d83;
          if (9 < local_ec) {
            iVar6 = 0x61420dd0;
          }
        }
        else if (iVar6 == -0x3800da03) {
          iVar6 = 0x6e003e6;
          if (7 < iVar8) {
            iVar6 = 0x6962ef08;
          }
        }
      }
      if (iVar6 != -0x7290963b) break;
      iVar8 = iVar8 + 1;
      iVar6 = -0x3800da03;
    }
  } while (iVar6 != -0x4a8b5972);
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


