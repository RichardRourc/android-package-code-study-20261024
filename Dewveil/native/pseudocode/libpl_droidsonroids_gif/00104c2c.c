// Ghidra pseudocode. Not original C/C++ source.
// Program: libpl_droidsonroids_gif.so
// Executable SHA256: 6fe3a2e6c3a0b092a79eb16d26516a28289305ad28f7354d5b41a03f4d203997
// Entry: 00104c2c; body: [[00104c2c, 00104d17]]

int Java_pl_droidsonroids_gif_GifInfoHandle_extractNativeFileDescriptor
              (long *param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  int __fd;
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = FUN_00103f30(param_3,param_1);
  if ((uVar2 & 1) == 0) {
    uVar3 = (**(code **)(*param_1 + 0xf8))(param_1,param_3);
    if (DAT_0011a020 == 0) {
      DAT_0011a020 = (**(code **)(*param_1 + 0x2f0))(param_1,uVar3,"descriptor",&DAT_00107e26);
      if (DAT_0011a020 == 0) goto LAB_00104c58;
    }
    __fd = (**(code **)(*param_1 + 800))(param_1,param_3,DAT_0011a020);
    iVar1 = fcntl(__fd,0x406,0);
    if (iVar1 == -1) {
      FUN_00103fc8(0x65,param_1,1);
    }
    if (param_4 == '\x01') {
      close(__fd);
    }
  }
  else {
LAB_00104c58:
    iVar1 = -1;
  }
  return iVar1;
}


