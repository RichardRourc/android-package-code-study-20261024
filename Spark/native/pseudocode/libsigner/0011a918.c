// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 0011a918; body: [[0011a918, 0011adb7]]

void FUN_0011a918(int *param_1,long *param_2,undefined8 param_3,long *param_4)

{
  undefined1 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 *puVar5;
  long unaff_x22;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_70 = 0;
  local_80 = 0;
  local_78 = 0;
  FUN_0018fe0c();
  puVar1 = (undefined1 *)0x125dd2cc844aecb4;
  if (*param_1 != 0) {
    puVar1 = &DAT_f615808441b1dafc;
  }
  puVar3 = (undefined1 *)0x887e73b2c28c6a1;
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while (puVar5 = puVar3, puVar3 = puVar5, (long)puVar5 < -0x938e289074b7147) {
            if ((long)puVar5 < -0x2ddd98d59c65e2d2) {
              if (puVar5 == (undefined1 *)0xaa46adf0a78af8c7) {
                FUN_001706d8(param_2,local_70,local_78);
                puVar3 = (undefined1 *)0xf63b36e7a9d9f670;
              }
              else if (puVar5 == (undefined1 *)0xbf711ec4fafe862e) {
                *param_4 = 0;
                puVar3 = (undefined1 *)0x1cba5f82f77e481f;
              }
              else if (puVar5 == (undefined1 *)0xc23f84056fd30bd6) {
                (**(code **)(*param_2 + 0xb8))(param_2,unaff_x22);
                puVar3 = (undefined1 *)0xf6c71d76f8b48eb9;
              }
            }
            else if ((long)puVar5 < -0x9ea7f7bbe4e2504) {
              if (puVar5 == (undefined1 *)0xd222672a639a1d2e) {
                *param_1 = 2;
                puVar3 = (undefined1 *)0xaa46adf0a78af8c7;
              }
              else if (puVar5 == (undefined1 *)0xf54c5df74fcabc41) {
                puVar3 = (undefined1 *)0xf6c71d76f8b48eb9;
              }
            }
            else {
              puVar3 = (undefined1 *)0xf63b36e7a9d9f670;
              if ((puVar5 != &DAT_f615808441b1dafc) &&
                 (puVar3 = puVar5, puVar5 == (undefined1 *)0xf63b36e7a9d9f670)) {
                puVar3 = (undefined1 *)0xc23f84056fd30bd6;
                unaff_x22 = local_70;
                if (local_70 == 0 || param_2 == (long *)0x0) {
                  puVar3 = (undefined1 *)0xf54c5df74fcabc41;
                }
              }
            }
          }
          if ((long)puVar5 < 0x2ce2edddaf334d81) break;
          if ((long)puVar5 < 0x696b554ab6b2c8c5) {
            puVar3 = (undefined1 *)0xaa46adf0a78af8c7;
            if ((puVar5 != (undefined1 *)0x2ce2edddaf334d81) &&
               (puVar3 = puVar5, puVar5 == (undefined1 *)0x353e7cd16df664a2)) {
              lVar4 = FUN_001e53f4(local_78,local_80);
              *param_4 = lVar4;
              puVar3 = (undefined1 *)0xd222672a639a1d2e;
              if (lVar4 != 0) {
                puVar3 = (undefined1 *)0x2ce2edddaf334d81;
              }
            }
          }
          else {
            puVar3 = (undefined1 *)0xf63b36e7a9d9f670;
            if ((puVar5 != (undefined1 *)0x696b554ab6b2c8c5) &&
               (puVar3 = puVar5, puVar5 == (undefined1 *)0x6b5051bf1aed633d)) {
              puVar3 = (undefined1 *)0x1cba5f82f77e481f;
            }
          }
        }
        if (0x125dd2cc844aecb3 < (long)puVar5) break;
        if (puVar5 == (undefined1 *)0xf6c71d76f8b48eb9) {
          puVar3 = (undefined1 *)0x6b5051bf1aed633d;
          if (*param_1 != 0) {
            puVar3 = (undefined1 *)0xbf711ec4fafe862e;
          }
        }
        else if (puVar5 == (undefined1 *)0x887e73b2c28c6a1) {
          puVar3 = puVar1;
        }
      }
      if (puVar5 != (undefined1 *)0x125dd2cc844aecb4) break;
      FUN_0016df9c(param_1,param_2,local_70,&local_78,&local_80);
      puVar3 = (undefined1 *)0x353e7cd16df664a2;
      if (*param_1 != 0) {
        puVar3 = (undefined1 *)0x696b554ab6b2c8c5;
      }
    }
  } while (puVar5 != (undefined1 *)0x1cba5f82f77e481f);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


