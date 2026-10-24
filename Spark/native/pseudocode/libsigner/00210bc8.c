// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 00210bc8; body: [[00210bc8, 00211017]]

void FUN_00210bc8(undefined4 *param_1,uint *param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  undefined4 *puVar4;
  long lVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  long lVar10;
  undefined4 *unaff_x21;
  undefined4 *unaff_x22;
  uint unaff_w23;
  undefined4 *unaff_x24;
  undefined4 local_64;
  
  uVar3 = *param_2;
  lVar1 = 0x5ece82223eee3411;
  if (param_3 != 0) {
    lVar1 = 0x49b9b00eeff4c15a;
  }
  lVar2 = 0x52cde6c2dea1be4;
  if (uVar3 <= param_3) {
    lVar2 = -0x3768c81d078975fb;
  }
  puVar7 = param_1;
  puVar4 = (undefined4 *)(ulong)uVar3;
  lVar5 = 0x312910f1547c7c77;
  uVar6 = uVar3 + 1;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            uVar9 = uVar6;
            lVar10 = lVar5;
            puVar8 = puVar4;
            puVar4 = puVar8;
            lVar5 = lVar10;
            uVar6 = uVar9;
            if (0x5039187a35dab08c < lVar10) break;
            if (lVar10 < 0x52cde6c2dea1be4) {
              if (lVar10 == -0x579a549dca8d1ccf) {
                unaff_w23 = uVar9 + 1;
                unaff_x21 = *(undefined4 **)(puVar8 + 2);
                lVar5 = -0x124103c739306402;
                if (unaff_w23 != param_3) {
                  lVar5 = 0x5039187a35dab08d;
                }
              }
              else if (lVar10 == -0x3768c81d078975fb) {
                *param_1 = 4;
                lVar5 = 0x77f0428eaa711148;
              }
              else if (lVar10 == -0x124103c739306402) {
                lVar5 = 0x58b842c6f86d5804;
                unaff_x24 = unaff_x21;
              }
            }
            else if (lVar10 == 0x52cde6c2dea1be4) {
              unaff_x22 = *(undefined4 **)(param_2 + 2);
              lVar5 = lVar1;
            }
            else {
              lVar5 = lVar2;
              if ((lVar10 != 0x312910f1547c7c77) && (lVar5 = lVar10, lVar10 == 0x49b9b00eeff4c15a))
              {
                puVar4 = unaff_x22;
                lVar5 = -0x579a549dca8d1ccf;
                uVar6 = 0;
              }
            }
          }
          if (0x75df443d79079720 < lVar10) break;
          puVar4 = unaff_x21;
          lVar5 = -0x579a549dca8d1ccf;
          uVar6 = unaff_w23;
          if (lVar10 != 0x5039187a35dab08d) {
            if (lVar10 == 0x58b842c6f86d5804) {
              local_64 = *unaff_x24;
              puVar7 = calloc(1,0x10);
              puVar4 = puVar8;
              lVar5 = 0x7e713fa43f38c582;
              uVar6 = uVar9;
              if (puVar7 != (undefined4 *)0x0) {
                lVar5 = 0x75df443d79079721;
              }
            }
            else {
              puVar4 = puVar8;
              lVar5 = lVar10;
              uVar6 = uVar9;
              if (lVar10 == 0x5ece82223eee3411) {
                lVar5 = 0x58b842c6f86d5804;
                unaff_x24 = unaff_x22;
              }
            }
          }
        }
        if (lVar10 != 0x75df443d79079721) break;
        *(undefined4 **)(puVar7 + 2) = unaff_x22;
        *puVar7 = local_64;
        *(undefined4 **)(param_2 + 2) = puVar7;
        *param_2 = uVar3 + 1;
        lVar5 = 0x77f0428eaa711148;
      }
      if (lVar10 != 0x7e713fa43f38c582) break;
      *param_1 = 2;
      lVar5 = 0x77f0428eaa711148;
    }
  } while (lVar10 != 0x77f0428eaa711148);
  return;
}


