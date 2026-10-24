// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 00202050; body: [[00202050, 0020275b]]

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00202050(double param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  tm *__tp;
  long lVar3;
  double dVar4;
  long local_d0 [2];
  char acStack_c0 [16];
  char acStack_b0 [40];
  undefined8 local_88;
  long local_80;
  long local_78;
  
  local_80 = tpidr_el0;
  local_78 = *(long *)(local_80 + 0x28);
  lVar1 = -0x2eb8ff3123f5eabc;
  local_88 = param_2;
  do {
    while( true ) {
      while( true ) {
        while (lVar3 = lVar1, lVar1 = lVar3, -0x2e5d71d46d443371 < lVar3) {
          if (lVar3 < 0x4101bf80446bdc20) {
            if (lVar3 < -0x428109008685f48) {
              if (lVar3 == -0x2e5d71d46d443370) {
                DAT_0021ef50 = DAT_0021ef50 ^ 0x70;
                DAT_0021ef51 = DAT_0021ef51 ^ 0x70;
                DAT_0021ef52 = DAT_0021ef52 ^ 0x70;
                DAT_0021ef54 = DAT_0021ef54 ^ 0x70;
                DAT_0021ef55 = DAT_0021ef55 ^ 0x70;
                DAT_0021ef53 = DAT_0021ef53 ^ 0x70;
                DAT_0021ef56 = DAT_0021ef56 ^ 0x70;
                DAT_0021ef48 = DAT_0021ef48 ^ 0x7070707070707070;
                DAT_0021fb23 = '\x01';
                lVar1 = -0x56ad058abb7434bf;
              }
              else if (lVar3 == -0x244c08061ede3ca6) {
                DAT_0021ef44 = DAT_0021ef44 ^ 0x1d;
                DAT_0021ef46 = DAT_0021ef46 ^ 0x1d;
                DAT_0021ef45 = DAT_0021ef45 ^ 0x1d;
                DAT_0021fb22 = '\x01';
                lVar1 = 0x4101bf80446bdc20;
              }
            }
            else {
              lVar1 = 0x53e14c28908eeeeb;
              if ((lVar3 != -0x428109008685f48) && (lVar1 = lVar3, lVar3 == 0x24e5eef263e81b7c)) {
                lVar1 = -0x400e37f3caa97ab4;
                if (DAT_0021fb23 == '\0') {
                  lVar1 = -0x2e5d71d46d443370;
                }
              }
            }
          }
          else if (lVar3 < 0x54cc8c62117e2258) {
            if (lVar3 == 0x4101bf80446bdc20) {
              DAT_0021fb1c = 0;
              lVar1 = -0x59bab4f8732095e2;
            }
            else if (lVar3 == 0x53e14c28908eeeeb) {
              iVar2 = FUN_00212730(0,1,&DAT_0021fb1c);
              lVar1 = -0x76ca62710947274b;
              if (iVar2 != 0) {
                lVar1 = -0x428109008685f48;
              }
            }
          }
          else {
            lVar1 = -0x59bab4f8732095e2;
            if (lVar3 != 0x54cc8c62117e2258) {
              if (lVar3 == 0x55dcd19dee737a1a) {
                iVar2 = FUN_00212730(0,1,&DAT_0021fb20);
                lVar1 = 0x24e5eef263e81b7c;
                if (iVar2 != 0) {
                  lVar1 = -0x5412c5352f1dc37a;
                }
              }
              else {
                lVar1 = lVar3;
                if (lVar3 == 0x62ccc994e2cb7da3) {
                  lVar1 = 0x4101bf80446bdc20;
                }
              }
            }
          }
        }
        if (-0x5412c5352f1dc37b < lVar3) break;
        if (lVar3 < -0x7447e788f4d32ac9) {
          lVar1 = -0x50e54cd80f265318;
          if ((lVar3 != -0x7dbc322ed98e3afb) && (lVar1 = lVar3, lVar3 == -0x76ca62710947274b)) {
            lVar1 = 0x62ccc994e2cb7da3;
            if (DAT_0021fb22 == '\0') {
              lVar1 = -0x244c08061ede3ca6;
            }
          }
        }
        else if (lVar3 == -0x7447e788f4d32ac9) {
          DAT_0021ef40 = DAT_0021ef40 ^ 0x81;
          DAT_0021ef41 = DAT_0021ef41 ^ 0x81;
          _DAT_0021ef30 = _DAT_0021ef30 ^ 0x8181818181818181;
          uRam000000000021ef38 = uRam000000000021ef38 ^ 0x8181818181818181;
          DAT_0021fb21 = '\x01';
          lVar1 = -0x50e54cd80f265318;
        }
        else if (lVar3 == -0x59bab4f8732095e2) {
          iVar2 = FUN_00212730(0,1,&DAT_0021fb18);
          lVar1 = -0x359d4e10b3bbbc3c;
          if (iVar2 != 0) {
            lVar1 = 0x54cc8c62117e2258;
          }
        }
        else if (lVar3 == -0x56ad058abb7434bf) {
          DAT_0021fb20 = 0;
          lVar1 = 0x53e14c28908eeeeb;
        }
      }
      if (lVar3 < -0x359d4e10b3bbbc3c) break;
      if (lVar3 == -0x359d4e10b3bbbc3c) {
        lVar1 = -0x7dbc322ed98e3afb;
        if (DAT_0021fb21 == '\0') {
          lVar1 = -0x7447e788f4d32ac9;
        }
      }
      else if (lVar3 == -0x2eb8ff3123f5eabc) {
        lVar1 = 0x55dcd19dee737a1a;
      }
    }
    lVar1 = 0x55dcd19dee737a1a;
  } while (((lVar3 == -0x5412c5352f1dc37a) ||
           (lVar1 = -0x56ad058abb7434bf, lVar3 == -0x400e37f3caa97ab4)) ||
          (lVar1 = lVar3, lVar3 != -0x50e54cd80f265318));
  DAT_0021fb18 = 0;
  local_d0[0] = (long)(param_1 / 1000.0);
  dVar4 = fmod(param_1,1000.0);
  __tp = localtime(local_d0);
  strftime(acStack_b0,0x14,&DAT_0021ef30,__tp);
  strftime(acStack_c0,6,(char *)&DAT_0021ef44,__tp);
  FUN_00204140(0,0,0,&DAT_0021ef48,local_88,acStack_b0,(int)dVar4,acStack_c0);
  if (*(long *)(local_80 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


