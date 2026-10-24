// Ghidra pseudocode. Not original C/C++ source.
// Program: liblogic.so
// Executable SHA256: df2688b342d2fdd45fbfbc82e905546e287409caaacad6ba5220641e328a1a21
// Entry: 00165e14; body: [[00165e14, 00165eb3]]

bool FUN_00165e14(long param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  
  if (param_2 != 0) {
    lVar2 = __dynamic_cast(param_2,PTR_typeinfo_00174a58,PTR_typeinfo_00174a90,0);
    bVar1 = false;
    if (lVar2 != 0) {
      if (((*(uint *)(lVar2 + 0x10) & (*(uint *)(param_1 + 0x10) ^ 0xffffffff)) == 0) &&
         (*(long *)(*(long *)(param_1 + 0x18) + 8) == *(long *)(*(long *)(lVar2 + 0x18) + 8))) {
        bVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8) == *(long *)(*(long *)(lVar2 + 0x20) + 8);
      }
      else {
        bVar1 = false;
      }
    }
    return bVar1;
  }
  return false;
}


