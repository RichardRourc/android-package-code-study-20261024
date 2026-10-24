// Ghidra pseudocode. Not original C/C++ source.
// Program: liblogic.so
// Executable SHA256: df2688b342d2fdd45fbfbc82e905546e287409caaacad6ba5220641e328a1a21
// Entry: 0014cbc0; body: [[0014cbc0, 0014cce3]]

void FUN_0014cbc0(void)

{
  undefined *puVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *local_18;
  
  plVar2 = (long *)__cxa_get_globals_fast();
  if ((plVar2 == (long *)0x0) || (lVar6 = *plVar2, lVar6 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_0014ce10("terminating");
  }
  uVar3 = FUN_00166d74(lVar6 + 0x60);
  if ((uVar3 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0014ce10("terminating due to %s foreign exception",PTR_s_uncaught_00178d48);
  }
  lVar4 = FUN_00166d68(lVar6 + 0x60);
  if (lVar4 == 0x434c4e47432b2b01) {
    local_18 = *(long **)(lVar6 + 8);
  }
  else {
    local_18 = (long *)(lVar6 + 0x80);
  }
  lVar7 = *(long *)(lVar6 + 0x10);
  lVar6 = *(long *)(lVar7 + 8);
  lVar4 = __cxa_demangle(lVar6,0,0,0);
  if (lVar4 != 0) {
    lVar6 = lVar4;
  }
  uVar3 = (**(code **)(*(long *)PTR_typeinfo_00174a30 + 0x20))
                    (PTR_typeinfo_00174a30,lVar7,&local_18);
  puVar1 = PTR_s_uncaught_00178d48;
  if ((uVar3 & 1) != 0) {
    uVar5 = (**(code **)(*local_18 + 0x10))();
                    /* WARNING: Subroutine does not return */
    FUN_0014ce10("terminating due to %s exception of type %s: %s",puVar1,lVar6,uVar5);
  }
                    /* WARNING: Subroutine does not return */
  FUN_0014ce10("terminating due to %s exception of type %s",PTR_s_uncaught_00178d48,lVar6);
}


