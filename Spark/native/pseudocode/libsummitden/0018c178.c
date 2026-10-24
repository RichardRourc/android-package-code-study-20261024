// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 0018c178; body: [[0018c178, 0018c52f]]

void FUN_0018c178(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  char *pcVar5;
  int iVar6;
  undefined *puVar7;
  undefined *unaff_x22;
  char local_468 [1024];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
            (&DAT_001fffdc,2,&DAT_00204738,&DAT_001fffdc);
  puVar7 = &DAT_002001e7;
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
            (&DAT_002001e7,0xe,&DAT_002047c0,&DAT_002001e7);
  lVar4 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b588)])
                    (&DAT_002001e7,&DAT_001fffdc);
  iVar1 = -0x279fdbdc;
  if (lVar4 != 0) {
    iVar1 = -0x692c3ceb;
  }
  iVar3 = 0x19e3fccf;
LAB_0018c290:
  do {
    while( true ) {
      while (iVar6 = iVar3, iVar3 = iVar6, -0x279fdbdd < iVar6) {
        if (iVar6 < 0x19e3fccf) {
          if (iVar6 == -0x279fdbdc) {
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b59f)])(param_1,&DAT_0011dd07);
            iVar3 = -0x6d84e3ca;
          }
          else if (iVar6 == -0x175fc3d9) {
            puVar7 = (undefined *)0x0;
            local_468[(long)unaff_x22] = '\0';
            iVar3 = -0x7fa10a1b;
          }
          else if (iVar6 == -0x80083df) {
            local_468[(long)puVar7] = ' ';
            iVar3 = -0x7b7e132d;
          }
        }
        else if (iVar6 < 0x54030076) {
          iVar3 = iVar1;
          if ((iVar6 != 0x19e3fccf) && (iVar3 = iVar6, iVar6 == 0x35dae64b)) {
            iVar3 = -0x7ebc45f5;
          }
        }
        else if (iVar6 == 0x54030076) {
          iVar3 = -0x6d84e3ca;
        }
        else if (iVar6 == 0x5fdb99c1) {
          iVar3 = -0x80083df;
          if (local_468[(long)puVar7] != '\0') {
            iVar3 = -0x7b7e132d;
          }
        }
      }
      if (-0x6d84e3cb < iVar6) break;
      if (iVar6 == -0x7fa10a1b) {
        iVar3 = 0x5fdb99c1;
        if (unaff_x22 <= puVar7) {
          iVar3 = 0x35dae64b;
        }
      }
      else if (iVar6 == -0x7ebc45f5) {
        pcVar5 = local_468;
LAB_0018c490:
        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b59f)])(param_1,pcVar5);
        iVar3 = 0x54030076;
      }
      else if (iVar6 == -0x7b7e132d) {
        iVar3 = -0x39f183a4;
      }
    }
    if (iVar6 < -0x39f183a4) {
      if (iVar6 == -0x692c3ceb) {
        unaff_x22 = (undefined *)
                    (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5e0)])
                              (local_468,1,0x3ff,lVar4);
        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b580)])(lVar4);
        iVar3 = -0x2dce9d7c;
        if (unaff_x22 != (undefined *)0x0) {
          iVar3 = -0x175fc3d9;
        }
      }
      else if (iVar6 == -0x6d84e3ca) {
        if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
      goto LAB_0018c290;
    }
    if (iVar6 == -0x39f183a4) {
      puVar7 = puVar7 + 1;
      iVar3 = -0x7fa10a1b;
    }
    else if (iVar6 == -0x2dce9d7c) {
      pcVar5 = "";
      goto LAB_0018c490;
    }
  } while( true );
}


