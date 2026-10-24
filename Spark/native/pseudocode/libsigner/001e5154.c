// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 001e5154; body: [[001e5154, 001e53f3]]

void * FUN_001e5154(char *param_1,void *param_2)

{
  long lVar1;
  char *pcVar2;
  char *unaff_x21;
  size_t sVar3;
  void *local_80;
  size_t sStack_78;
  char *local_70;
  
  lVar1 = -0x3d195e45a87c496a;
  pcVar2 = param_1;
LAB_001e521c:
LAB_001e5224:
  do {
    sVar3 = (long)unaff_x21 - (long)param_1;
    do {
      while( true ) {
        while (lVar1 < -0x3494da7ac01903fa) {
          if (lVar1 == -0x5efdaaaa05774414) {
            param_2 = (void *)0x0;
            lVar1 = 0x13c4fd347c136e7f;
            goto LAB_001e5224;
          }
          if (lVar1 == -0x4d54a68c57c6c7d7) {
            local_80 = malloc(sVar3 + 1);
            lVar1 = -0x5efdaaaa05774414;
            sStack_78 = sVar3;
            if (local_80 != (void *)0x0) {
              lVar1 = -0x3494da7ac01903fa;
            }
          }
          else if (lVar1 == -0x3d195e45a87c496a) {
            lVar1 = 0x616167e75f9c95a2;
          }
        }
        if (0x14437797ebdb3d1b < lVar1) break;
        if (lVar1 == -0x3494da7ac01903fa) {
          *(undefined1 *)((long)local_80 + sStack_78) = 0;
          memcpy(local_80,param_1,sStack_78);
          param_2 = local_80;
          lVar1 = 0x13c4fd347c136e7f;
          goto LAB_001e5224;
        }
        if (lVar1 == 0x13c4fd347c136e7f) {
          return param_2;
        }
      }
      if (lVar1 == 0x14437797ebdb3d1c) {
        lVar1 = 0x616167e75f9c95a2;
        pcVar2 = local_70;
        goto LAB_001e521c;
      }
    } while (lVar1 != 0x616167e75f9c95a2);
    lVar1 = -0x4d54a68c57c6c7d7;
    unaff_x21 = pcVar2;
    local_70 = pcVar2 + 1;
    if (*pcVar2 != '\0') {
      lVar1 = 0x14437797ebdb3d1c;
    }
  } while( true );
}


