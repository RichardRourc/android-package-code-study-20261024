// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001b231c; body: [[001b231c, 001b295f]]

void FUN_001b231c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5,undefined8 param_6)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  ulong uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [8];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_88 = param_4;
  uStack_80 = param_3;
  local_78 = param_2;
  uStack_70 = param_1;
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b445)])(auStack_90,0);
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b7ba)])(auStack_a0,param_5,auStack_90);
  iVar2 = -0x390c3575;
LAB_001b2410:
  do {
    while (iVar5 = iVar2, iVar2 = iVar5, -0x3e35c83 < iVar5) {
      if (iVar5 < 0x4e17a25a) {
        if (iVar5 < 0xe214c84) {
          iVar2 = -0x515bb790;
          if ((iVar5 != -0x3e35c82) && (iVar2 = iVar5, iVar5 == 0x380b1e5)) {
            uVar6 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b7b7)])(&uStack_80);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b7b5)])(param_5,uVar6);
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b7aa)])(auStack_90);
            puVar3 = &uStack_80;
LAB_001b28cc:
            (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b57a)])(puVar3);
            iVar2 = 0x4e17a25a;
          }
        }
        else if (iVar5 == 0xe214c84) {
          uVar4 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b452)])
                            (&uStack_70,&local_78);
          iVar2 = -0x3e35c82;
          if ((uVar4 & 1) == 0) {
            iVar2 = 0x63b0eaed;
          }
        }
        else if (iVar5 == 0x14754661) {
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b57a)])(&uStack_80);
          param_5 = param_5 + 8;
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b7aa)])(auStack_90);
          iVar2 = -0x515bb790;
        }
        else if (iVar5 == 0x3cd9d5c8) {
          puVar3 = (undefined8 *)
                   (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b504)])(&uStack_80);
          uVar6 = *puVar3;
          puVar3 = (undefined8 *)
                   (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b504)])(&uStack_70);
          uVar4 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b441)])
                            (param_6,uVar6,*puVar3);
          iVar2 = 0x380b1e5;
          if ((uVar4 & 1) == 0) {
            iVar2 = -0x4030fe41;
          }
        }
      }
      else if (iVar5 < 0x63b0eaed) {
        if (iVar5 == 0x4e17a25a) {
          iVar2 = -0x6e1f1660;
        }
        else if (iVar5 == 0x52a0b494) {
          uVar6 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b7b7)])(&uStack_80);
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b7b5)])(param_5,uVar6);
          iVar2 = 0x14754661;
        }
      }
      else if (iVar5 == 0x63b0eaed) {
        uVar4 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b452)])
                          (&uStack_80,&local_88);
        iVar2 = 0x7475781f;
        if ((uVar4 & 1) == 0) {
          iVar2 = 0x3cd9d5c8;
        }
      }
      else {
        iVar2 = 0x780b6ea8;
        if ((iVar5 != 0x7475781f) && (iVar2 = iVar5, iVar5 == 0x780b6ea8)) {
          uVar4 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b507)])
                            (&uStack_70,&local_78);
          iVar2 = -0xcf01619;
          if ((uVar4 & 1) == 0) {
            iVar2 = -0x5f1dadfa;
          }
        }
      }
    }
    if (iVar5 < -0x4030fe41) {
      if (iVar5 < -0x5f1dadfa) {
        if (iVar5 == -0x6e1f1660) {
          param_5 = param_5 + 8;
          iVar2 = -0x390c3575;
        }
        else if (iVar5 == -0x69edd948) {
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b57a)])(&uStack_70);
          param_5 = param_5 + 8;
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b7aa)])(auStack_90);
          iVar2 = 0x780b6ea8;
        }
      }
      else if (iVar5 == -0x5f1dadfa) {
LAB_001b23f0:
        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b7ab)])(auStack_a0);
        iVar2 = -0x383a4aaa;
      }
      else if (iVar5 == -0x515bb790) {
        uVar4 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b507)])
                          (&uStack_80,&local_88);
        iVar2 = 0x52a0b494;
        if ((uVar4 & 1) == 0) {
          iVar2 = -0x3438f06e;
        }
      }
      else if (iVar5 == -0x5d27bf2f) goto LAB_001b2928;
      goto LAB_001b2410;
    }
    if (iVar5 < -0x383a4aaa) {
      if (iVar5 == -0x4030fe41) {
        uVar6 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b7b7)])(&uStack_70);
        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b7b5)])(param_5,uVar6);
        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b7aa)])(auStack_90);
        puVar3 = &uStack_70;
        goto LAB_001b28cc;
      }
      iVar2 = -0x383a4aaa;
      if ((iVar5 != -0x3bd6de42) && (iVar2 = iVar5, iVar5 == -0x390c3575)) {
        iVar2 = 0xe214c84;
      }
    }
    else {
      if (iVar5 == -0x3438f06e) goto LAB_001b23f0;
      if (iVar5 == -0xcf01619) {
        uVar6 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b7b7)])(&uStack_70);
        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b7b5)])(param_5,uVar6);
        iVar2 = -0x69edd948;
      }
      else if (iVar5 == -0x383a4aaa) {
        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b7be)])(auStack_a0);
LAB_001b2928:
        if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
          __stack_chk_fail();
        }
        return;
      }
    }
  } while( true );
}


