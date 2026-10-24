// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 001e53f4; body: [[001e53f4, 001e551f]]

void * FUN_001e53f4(void *param_1,size_t param_2)

{
  long lVar1;
  long lVar2;
  void *__dest;
  void *pvVar3;
  long lVar4;
  
  __dest = malloc(param_2 + 1);
  lVar1 = 0x3ad7c4eff58bcc67;
  if (__dest != (void *)0x0) {
    lVar1 = -0x74a0fd83975bb29d;
  }
  pvVar3 = __dest;
  lVar2 = 0x548fc1c84959d43b;
  do {
    while (lVar4 = lVar2, lVar4 < 0x548fc1c84959d43b) {
      if (lVar4 == -0x74a0fd83975bb29d) {
        *(undefined1 *)((long)__dest + param_2) = 0;
        memcpy(__dest,param_1,param_2);
        pvVar3 = __dest;
        lVar2 = 0x766c039d1f7e793a;
      }
      else {
        lVar2 = lVar4;
        if (lVar4 == 0x3ad7c4eff58bcc67) {
          pvVar3 = (void *)0x0;
          lVar2 = 0x766c039d1f7e793a;
        }
      }
    }
    lVar2 = lVar1;
  } while ((lVar4 == 0x548fc1c84959d43b) || (lVar2 = lVar4, lVar4 != 0x766c039d1f7e793a));
  return pvVar3;
}


