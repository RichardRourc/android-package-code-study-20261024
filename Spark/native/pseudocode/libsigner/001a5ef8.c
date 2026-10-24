// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 001a5ef8; body: [[001a5ef8, 001a6623]]

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_001a5ef8(long *param_1,int *param_2,undefined8 *param_3)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  uint unaff_w26;
  long *unaff_x27;
  undefined8 *unaff_x28;
  undefined8 local_b0 [4];
  undefined1 auStack_90 [8];
  long local_88;
  uint local_7c;
  undefined8 *local_78;
  long local_70;
  long local_68;
  
  local_78 = param_3;
  local_88 = tpidr_el0;
  local_68 = *(long *)(local_88 + 0x28);
  puVar2 = (undefined8 *)auStack_90;
  puVar1 = (undefined1 *)0x1cba5f82f77e481f;
LAB_001a5fa4:
  while( true ) {
    while (puVar4 = puVar1, puVar1 = puVar4, (long)puVar4 < 0x36f07785a64d7584) {
      if ((long)puVar4 < -0x378643ce451a44ec) {
        if ((long)puVar4 < -0x579a549dca8d1ccf) {
          puVar1 = (undefined1 *)0xedbefc38c6cf9bfe;
          if (puVar4 != (undefined1 *)0x8500be9b057d300e) {
            if (puVar4 == (undefined1 *)0x8e3a3d610d847caf) {
              (**(code **)(*param_1 + 0xb8))(param_1,local_70);
              puVar1 = (undefined1 *)0x960858df0b0de441;
            }
            else {
              puVar1 = puVar4;
              if (puVar4 == (undefined1 *)0x960858df0b0de441) {
                if (*(long *)(local_88 + 0x28) == local_68) {
                  return local_7c & 1;
                }
                    /* WARNING: Subroutine does not return */
                __stack_chk_fail();
              }
            }
          }
        }
        else {
          puVar1 = (undefined1 *)0x75df443d79079721;
          if (puVar4 != (undefined1 *)0xa865ab623572e331) {
            if (puVar4 == (undefined1 *)0xba8fbc7d3623138d) {
              local_7c = unaff_w26;
              local_70 = *unaff_x27;
              puVar1 = (undefined1 *)0x8e3a3d610d847caf;
              if (*unaff_x27 == 0 || param_1 == (long *)0x0) {
                puVar1 = (undefined1 *)0x418b7d3c908df894;
              }
            }
            else {
              puVar1 = puVar4;
              if (puVar4 == &DAT_c45038db124ae016) {
                puVar1 = (undefined1 *)0x8500be9b057d300e;
                if (DAT_0021fa52 == '\0') {
                  puVar1 = (undefined1 *)0x5039187a35dab08d;
                }
              }
            }
          }
        }
      }
      else if ((long)puVar4 < 0x52cde6c2dea1be4) {
        puVar1 = (undefined1 *)0x52cde6c2dea1be4;
        if (puVar4 != (undefined1 *)0xc879bc31bae5bb14) {
          if (puVar4 == (undefined1 *)0xc89737e2f8768a05) {
            _DAT_0021e6d0 = _DAT_0021e6d0 ^ 0xa9a9a9a9a9a9a9a9;
            uRam000000000021e6d8 = uRam000000000021e6d8 ^ 0xa9a9a9a9a9a9a9a9;
            DAT_0021fa51 = '\x01';
            puVar1 = (undefined1 *)0x52cde6c2dea1be4;
          }
          else {
            puVar1 = puVar4;
            if (puVar4 == (undefined1 *)0xedbefc38c6cf9bfe) {
              DAT_0021fa40 = 0;
              FUN_00183abc(param_2,param_1,*unaff_x27,&DAT_0021e6e0,0,unaff_x28);
              puVar1 = (undefined1 *)0x7d8bf94548220fb8;
              if (*param_2 != 0) {
                puVar1 = (undefined1 *)0x77f0428eaa711148;
              }
            }
          }
        }
      }
      else if (puVar4 == (undefined1 *)0x52cde6c2dea1be4) {
        DAT_0021fa3c = 0;
        unaff_x27 = puVar2 + -2;
        unaff_x28 = puVar2 + -4;
        puVar2[-2] = 0;
        puVar2[-4] = 0;
        FUN_0018117c(param_2,param_1,&DAT_0021e6d0,unaff_x27);
        puVar2 = unaff_x28;
        puVar1 = (undefined1 *)0x5ece82223eee3411;
        if (*param_2 != 0) {
          puVar1 = (undefined1 *)0x49b9b00eeff4c15a;
        }
      }
      else {
        puVar1 = (undefined1 *)0x3b36a7a007b21166;
        if ((puVar4 != (undefined1 *)0x1cba5f82f77e481f) &&
           (puVar1 = puVar4, puVar4 == (undefined1 *)0x312910f1547c7c77)) {
          puVar1 = (undefined1 *)0x3b36a7a007b21166;
        }
      }
    }
    if (0x58b842c6f86d5803 < (long)puVar4) break;
    if ((long)puVar4 < 0x418b7d3c908df894) {
      if (puVar4 == (undefined1 *)0x36f07785a64d7584) {
        puVar1 = (undefined1 *)0xc879bc31bae5bb14;
        if (DAT_0021fa51 == '\0') {
          puVar1 = (undefined1 *)0xc89737e2f8768a05;
        }
      }
      else if (puVar4 == (undefined1 *)0x3b36a7a007b21166) {
        iVar3 = FUN_00212730(0,1,&DAT_0021fa3c);
        puVar1 = (undefined1 *)0x36f07785a64d7584;
        if (iVar3 != 0) {
          puVar1 = (undefined1 *)0x312910f1547c7c77;
        }
      }
    }
    else {
      puVar1 = (undefined1 *)0x960858df0b0de441;
      if (puVar4 != (undefined1 *)0x418b7d3c908df894) {
        if (puVar4 == (undefined1 *)0x49b9b00eeff4c15a) goto LAB_001a5f90;
        puVar1 = puVar4;
        if (puVar4 == (undefined1 *)0x5039187a35dab08d) {
          DAT_0021e6e0 = DAT_0021e6e0 ^ 0x26;
          DAT_0021e6e1 = DAT_0021e6e1 ^ 0x26;
          DAT_0021e6e2 = DAT_0021e6e2 ^ 0x26;
          DAT_0021e6e3 = DAT_0021e6e3 ^ 0x26;
          DAT_0021e6e4 = DAT_0021e6e4 ^ 0x26;
          DAT_0021fa52 = '\x01';
          puVar1 = (undefined1 *)0xedbefc38c6cf9bfe;
        }
      }
    }
  }
  if ((long)puVar4 < 0x77f0428eaa711148) {
    if (puVar4 != (undefined1 *)0x58b842c6f86d5804) {
      if (puVar4 == (undefined1 *)0x5ece82223eee3411) {
        FUN_001821f0(param_2,param_1,*unaff_x27,0);
        puVar1 = (undefined1 *)0x7e713fa43f38c582;
        if (*param_2 != 0) {
          puVar1 = (undefined1 *)0x58b842c6f86d5804;
        }
      }
      else if (puVar4 == (undefined1 *)0x75df443d79079721) {
        iVar3 = FUN_00212730(0,1,&DAT_0021fa40);
        puVar1 = &DAT_c45038db124ae016;
        if (iVar3 != 0) {
          puVar1 = (undefined1 *)0xa865ab623572e331;
        }
      }
      goto LAB_001a5fa4;
    }
  }
  else if (puVar4 != (undefined1 *)0x77f0428eaa711148) {
    if (puVar4 == (undefined1 *)0x7d8bf94548220fb8) {
      unaff_w26 = 1;
      *local_78 = *unaff_x28;
      puVar1 = (undefined1 *)0xba8fbc7d3623138d;
    }
    else if (puVar4 == (undefined1 *)0x7e713fa43f38c582) {
      puVar1 = (undefined1 *)0x75df443d79079721;
    }
    goto LAB_001a5fa4;
  }
LAB_001a5f90:
  unaff_w26 = 0;
  puVar1 = (undefined1 *)0xba8fbc7d3623138d;
  goto LAB_001a5fa4;
}


