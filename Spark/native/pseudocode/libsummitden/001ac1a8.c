// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001ac1a8; body: [[001ac1a8, 001ac74b]]

void FUN_001ac1a8(undefined8 param_1,undefined8 param_2)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  byte *pbVar4;
  undefined *puVar5;
  int iVar6;
  undefined *puVar7;
  uint unaff_w26;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 auStack_6f [7];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_78 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b586)])(param_2);
  local_80 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b587)])(param_2);
  iVar6 = -0x15b761f;
LAB_001ac2c4:
  while( true ) {
    if (iVar6 < 0x394a9af) break;
    if (iVar6 < 0x4761f074) {
      if (iVar6 < 0x1fef19fa) {
        if (iVar6 == 0x394a9af) {
          iVar6 = -0xc96c0ab;
        }
        else if (iVar6 == 0x5e17bb9) {
LAB_001ac304:
          puVar7 = &DAT_0020030c;
          (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                    (&DAT_0020030c,3,&DAT_0020482c,&DAT_0020030c);
          goto LAB_001ac2b0;
        }
      }
      else if (iVar6 == 0x1fef19fa) {
LAB_001ac684:
        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                  (&DAT_00200306,3,&DAT_00204824,&DAT_00200306);
        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b591)])(param_1,&DAT_00200306);
        iVar6 = 0x394a9af;
      }
      else if (iVar6 == 0x27fa3aa0) goto LAB_001ac4ac;
    }
    else if (iVar6 < 0x54a4ede1) {
      if (iVar6 == 0x4761f074) {
LAB_001ac5f8:
        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                  (&DAT_0020030f,3,&DAT_00204830,&DAT_0020030f);
        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b591)])(param_1,&DAT_0020030f);
        iVar6 = 0x394a9af;
      }
      else if (iVar6 == 0x50465117) {
        iVar6 = 0x394a9af;
      }
    }
    else if (iVar6 == 0x54a4ede1) {
      (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b594)])(param_1,unaff_w26);
      iVar6 = 0x50465117;
    }
    else if (iVar6 == 0x57e1fb5d) {
      if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  }
  if (iVar6 < -0x11d28995) {
    if (iVar6 == -0x41909f54) {
      pbVar4 = (byte *)(*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b585)])(&local_78);
      bVar1 = *pbVar4;
      unaff_w26 = (uint)bVar1;
      if (0xb < bVar1) {
        if (bVar1 < 0x22) {
          if (bVar1 == 0xc) goto LAB_001ac304;
          if (bVar1 == 0xd) goto LAB_001ac3fc;
        }
        else {
          if (bVar1 == 0x22) goto LAB_001ac684;
          if (bVar1 == 0x5c) {
            puVar7 = &DAT_001fffed;
            puVar5 = &DAT_00204748;
            goto LAB_001ac418;
          }
        }
LAB_001ac4ac:
        iVar6 = -0x11d28995;
        if ((unaff_w26 & 0xe0) != 0) {
          iVar6 = 0x54a4ede1;
        }
        goto LAB_001ac2c4;
      }
      if (bVar1 != 8) {
        if (bVar1 == 9) goto LAB_001ac5f8;
        if (bVar1 != 10) goto LAB_001ac4ac;
        goto LAB_001ac26c;
      }
      puVar7 = &DAT_00200309;
      puVar5 = &DAT_00204828;
    }
    else {
      if (iVar6 == -0x2da17087) {
        iVar6 = 0x57e1fb5d;
        goto LAB_001ac2c4;
      }
      if (iVar6 != -0x28f60e5c) goto LAB_001ac2c4;
LAB_001ac3fc:
      puVar7 = &DAT_001fffea;
      puVar5 = &DAT_00204744;
    }
LAB_001ac418:
    (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])(puVar7,3,puVar5,puVar7);
  }
  else {
    if (iVar6 < -0xbc0416d) {
      if (iVar6 == -0x11d28995) {
        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
                  (&DAT_00200312,7,&DAT_00204834,&DAT_00200312);
        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5fd)])
                  (auStack_6f,7,7,&DAT_00200312,unaff_w26 & 0xff);
        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b591)])(param_1,auStack_6f);
        iVar6 = 0x50465117;
      }
      else if (iVar6 == -0xc96c0ab) {
        (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5fb)])(&local_78);
        iVar6 = -0x15b761f;
      }
      goto LAB_001ac2c4;
    }
    if (iVar6 != -0xbc0416d) {
      if ((iVar6 == -0x15b761f) &&
         (uVar3 = (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b584)])
                            (&local_78,&local_80), iVar6 = -0x41909f54, (uVar3 & 1) == 0)) {
        iVar6 = -0x2da17087;
      }
      goto LAB_001ac2c4;
    }
LAB_001ac26c:
    (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b5b8)])
              (&DAT_001fffe7,3,&DAT_00204740,&DAT_001fffe7);
    puVar7 = &DAT_001fffe7;
  }
LAB_001ac2b0:
  (*(code *)(&PTR_FUN_00201200)[(int)(DAT_00202698 ^ 0x1873b591)])(param_1,puVar7);
  iVar6 = 0x394a9af;
  goto LAB_001ac2c4;
}


