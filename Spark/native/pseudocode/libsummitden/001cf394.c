// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001cf394; body: [[001cf394, 001cf47f]]

bool FUN_001cf394(long param_1,long param_2,long *param_3)

{
  bool bVar1;
  long *local_78;
  undefined8 uStack_70;
  long local_68;
  undefined8 uStack_60;
  long local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined7 uStack_40;
  undefined1 local_39;
  undefined7 uStack_38;
  undefined8 uStack_31;
  undefined1 local_29;
  undefined8 local_28;
  
  if (*(long *)(param_1 + 8) == *(long *)(param_2 + 8)) {
    bVar1 = true;
  }
  else {
    local_78 = (long *)FUN_001cf480(param_2,PTR_PTR_001f6b90,PTR_PTR_001f6b98,0);
    bVar1 = false;
    if (local_78 != (long *)0x0) {
      if (*param_3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_001cf218("%s:%d: %s","stk35nb3fmet1zrlvzinfl8n8ob4dh3lza7xwzn0mb73w5eo8v1",0x1e7,
                     "catching a class without an object?");
      }
      local_28 = 0;
      uStack_60 = 0xffffffffffffffff;
      local_29 = 1;
      uStack_70 = 0;
      uStack_38 = 0;
      uStack_50 = 0;
      local_58 = 0;
      uStack_40 = 0;
      local_39 = 0;
      local_48 = 0;
      uStack_31 = 0x100;
      local_68 = param_1;
      (**(code **)(*local_78 + 0x38))(local_78,&local_78,*param_3,1);
      bVar1 = (int)local_48 == 1;
      if (bVar1) {
        *param_3 = local_58;
      }
    }
  }
  return bVar1;
}


