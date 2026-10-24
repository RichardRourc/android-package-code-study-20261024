// [[00180458, 00180bc3]]

void FUN_00180458(undefined8 param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5
                 ,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  undefined *puVar6;
  int iVar7;
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  int local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  FUN_0014816c();
  iVar1 = -0x3db2af76;
  if (param_3 != 0) {
    iVar1 = -0x3233ca5c;
  }
  iVar2 = 0x28a461f8;
  if (param_2 != 0) {
    iVar2 = 0x1a080217;
  }
  iVar4 = 0x67db69f0;
LAB_0018059c:
  do {
    while (iVar7 = iVar4, iVar4 = iVar7, -0x3d8c0d7 < iVar7) {
      if (iVar7 < 0x25b32808) {
        if (iVar7 < 0x12880945) {
          if (iVar7 == -0x3d8c0d6) {
            FUN_001cc928(param_1);
            iVar4 = -0x61b78d88;
          }
          else if (iVar7 == 0x679a1f7) {
            FUN_00181980
                      (&DAT_001ff019 /* 'error' */,6,&DAT_002044b4,&DAT_001ff019 /* 'error' */) /* b'error' */;
            puVar6 = &DAT_001ff019 /* 'error' */;
LAB_00180588:
            FUN_001448dc(param_1,puVar6);
            iVar4 = -0x28bdb819;
          }
        }
        else if (iVar7 == 0x12880945) {
          FUN_001632a8(auStack_88);
          iVar4 = -0x5fb84149;
        }
        else if (iVar7 == 0x1a080217) {
          uVar5 = FUN_00135028(param_4);
          iVar4 = 0x28a461f8;
          if ((uVar5 & 1) == 0) {
            iVar4 = -0x7af531cd;
          }
        }
      }
      else if (iVar7 < 0x67db69f0) {
        if (iVar7 == 0x25b32808) {
          FUN_00181980
                    (&DAT_001ff019 /* 'error' */,6,&DAT_002044b4,&DAT_001ff019 /* 'error' */) /* b'error' */ /* b'error' */;
          puVar6 = &DAT_001ff019 /* 'error' */;
LAB_00180ad0:
          FUN_001448dc(param_1,puVar6);
          iVar4 = 0x12880945;
        }
        else if (iVar7 == 0x28a461f8) {
          FUN_00181980
                    (&DAT_001ff019 /* 'error' */,6,&DAT_002044b4,&DAT_001ff019 /* 'error' */) /* b'error' */ /* b'error' */;
          FUN_001448dc(param_1,&DAT_001ff019 /* 'error' */);
          iVar4 = -0x5fb84149;
        }
      }
      else {
        iVar4 = iVar2;
        if ((iVar7 != 0x67db69f0) && (iVar4 = iVar7, iVar7 == 0x6ecf8f88)) {
          iVar4 = -0x70833b51;
          if (local_70 != 0) {
            iVar4 = 0x25b32808;
          }
        }
      }
    }
    if (iVar7 < -0x5fb84149) {
      if (iVar7 < -0x70833b51) {
        if (iVar7 == -0x7e64a821) {
          FUN_00181980
                    (&DAT_001ff01f /* 'net_error' */,10,&DAT_002044b8,&DAT_001ff01f /* 'net_error' */) /* b'net_error' */;
          puVar6 = &DAT_001ff01f /* 'net_error' */;
          goto LAB_00180ad0;
        }
        if (iVar7 == -0x7af531cd) {
          FUN_0014816c();
          FUN_0015cbd0
                    (auStack_88,param_2,param_4,param_5,param_6,param_7);
          FUN_0014816c();
          iVar4 = -0x7e64a821;
          if (local_70 != 1) {
            iVar4 = 0x6ecf8f88;
          }
        }
      }
      else if (iVar7 == -0x70833b51) {
        FUN_0015b7bc(auStack_a0,auStack_88);
        FUN_0014816c();
        FUN_00137568(auStack_b8,auStack_a0);
        FUN_0014816c();
        uVar5 = FUN_00135028(auStack_b8);
        iVar4 = 0x679a1f7;
        if ((uVar5 & 1) == 0) {
          iVar4 = -0x53de0ca9;
        }
      }
      else if (iVar7 == -0x61b78d88) {
        iVar4 = -0x28bdb819;
      }
      goto LAB_0018059c;
    }
    if (iVar7 < -0x3233ca5c) {
      iVar4 = iVar1;
      if (iVar7 != -0x53de0ca9) {
        if (iVar7 == -0x3db2af76) {
          FUN_00181980
                    (&DAT_001ff029,3,&DAT_002044bc,&DAT_001ff029) /* b'ok' */;
          puVar6 = &DAT_001ff029;
          goto LAB_00180588;
        }
        iVar4 = iVar7;
        if (iVar7 == -0x5fb84149) {
          if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return;
        }
      }
    }
    else if (iVar7 == -0x3233ca5c) {
      FUN_0014816c();
      FUN_00181980
                (&DAT_001ff02c /* 'kreift/khaess/twodreempKhourk.cache|zreist/breandkos-6d2b511d.map|styz/smeon/82ecb48be40c90ea2c8dd1d4.blob|kaelk/pheamp/e66cf9181385a4f7307d086a.cache|4761/shraurmskoarm-daef10b32f.zo|2903/threntbruck-95df389e.kre|config/cache/sloos_c9a7716e87f4454c.scai|res/data/af4bf22624f7.blob|6899/94f6004f-7c74-4306-519eb549d62e.vra|7010/3041/dba72b21-eb14-fedd-d558c3381a5d.dat' */,0x171,&DAT_002044c0,&DAT_001ff02c /* 'kreift/khaess/twodreempKhourk.cache|zreist/breandkos-6d2b511d.map|styz/smeon/82ecb48be40c90ea2c8dd1d4.blob|kaelk/pheamp/e66cf9181385a4f7307d086a.cache|4761/shraurmskoarm-daef10b32f.zo|2903/threntbruck-95df389e.kre|config/cache/sloos_c9a7716e87f4454c.scai|res/data/af4bf22624f7.blob|6899/94f6004f-7c74-4306-519eb549d62e.vra|7010/3041/dba72b21-eb14-fedd-d558c3381a5d.dat' */) /* b'kreift/khaess/twodreempKhourk.cache|zreist/breandkos-6d2b511d.map|styz/smeon/82ecb48be40c90ea2c8dd1d4.blob|kaelk/pheamp/e66cf9181385a4f7307d086a.cache|4761/shraurmskoarm-daef10b32f.zo|2903/threntbruck-95df389e.kre|config/cache/sloos_c9a7716e87f4454c.scai|res/data/af4bf22624f7.blob|6899/94f6004f-7c74-4306-519eb549d62e.vra|7010/3041/dba72b21-eb14-fedd-d558c3381a5d.dat' */;
      FUN_001448dc(auStack_e8,&DAT_001ff02c /* 'kreift/khaess/twodreempKhourk.cache|zreist/breandkos-6d2b511d.map|styz/smeon/82ecb48be40c90ea2c8dd1d4.blob|kaelk/pheamp/e66cf9181385a4f7307d086a.cache|4761/shraurmskoarm-daef10b32f.zo|2903/threntbruck-95df389e.kre|config/cache/sloos_c9a7716e87f4454c.scai|res/data/af4bf22624f7.blob|6899/94f6004f-7c74-4306-519eb549d62e.vra|7010/3041/dba72b21-eb14-fedd-d558c3381a5d.dat' */);
      FUN_00138aac(auStack_d0,auStack_e8);
      FUN_00181980
                (&DAT_001ff19d /* 'net.xrdl.engineuk.BuilderTmxImpl' */,0x21,&DAT_002044c4,&DAT_001ff19d /* 'net.xrdl.engineuk.BuilderTmxImpl' */) /* b'net.xrdl.engineuk.BuilderTmxImpl' */;
      FUN_001448dc(auStack_118,&DAT_001ff19d /* 'net.xrdl.engineuk.BuilderTmxImpl' */);
      FUN_00138aac(auStack_100,auStack_118);
      FUN_00144594
                (param_1,param_2,param_3,auStack_b8,auStack_d0,auStack_100);
      FUN_001cc928(auStack_100);
      FUN_001cc928(auStack_118);
      FUN_001cc928(auStack_d0);
      FUN_001cc928(auStack_e8);
      FUN_0014816c();
      iVar4 = -0x61b78d88;
    }
    else if (iVar7 == -0x28bdb819) {
      FUN_001cc928(auStack_b8);
      FUN_001cc928(auStack_a0);
      iVar4 = 0x12880945;
    }
  } while( true );
}


