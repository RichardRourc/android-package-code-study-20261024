// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001ceeb8; body: [[001ceeb8, 001cefc7]]

void FUN_001ceeb8(void)

{
  undefined *puVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *local_28;
  
  plVar2 = (long *)FUN_001cf00c();
  if ((plVar2 == (long *)0x0) || (lVar6 = *plVar2, lVar6 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_001cf218("terminating");
  }
  uVar3 = FUN_001e95c8(lVar6 + 0x60);
  if ((uVar3 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_001cf218("terminating due to %s foreign exception",PTR_s_uncaught_00204058);
  }
  lVar4 = FUN_001e95bc(lVar6 + 0x60);
  if (lVar4 == 0x434c4e47432b2b01) {
    local_28 = *(long **)(lVar6 + 8);
  }
  else {
    local_28 = (long *)(lVar6 + 0x80);
  }
  lVar7 = *(long *)(lVar6 + 0x10);
  lVar6 = *(long *)(lVar7 + 8);
  lVar4 = FUN_001cfcd4(lVar6,0,0,0);
  if (lVar4 != 0) {
    lVar6 = lVar4;
  }
  uVar3 = (**(code **)(*(long *)PTR_PTR_001f6b68 + 0x20))(PTR_PTR_001f6b68,lVar7,&local_28);
  puVar1 = PTR_s_uncaught_00204058;
  if ((uVar3 & 1) != 0) {
    uVar5 = (**(code **)(*local_28 + 0x10))();
                    /* WARNING: Subroutine does not return */
    FUN_001cf218("terminating due to %s exception of type %s: %s",puVar1,lVar6,uVar5);
  }
                    /* WARNING: Subroutine does not return */
  FUN_001cf218("terminating due to %s exception of type %s",PTR_s_uncaught_00204058,lVar6);
}


