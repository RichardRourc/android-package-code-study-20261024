// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 00157934; body: [[00157934, 00157ef3]]

void FUN_00157934(undefined8 param_1,long param_2,long param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  long unaff_x22;
  long unaff_x28;
  long unaff_x29;
  
  iVar1 = 0x780cc94a;
  if (param_3 != 0) {
    iVar1 = -0xe19506e;
  }
  iVar2 = 0x780cc94a;
  if (param_2 != 0) {
    iVar2 = -0x52539ce5;
  }
  iVar3 = -0x32077cb0;
  do {
    while( true ) {
      do {
        while( true ) {
          while( true ) {
            while (iVar5 = iVar3, iVar3 = iVar5, iVar5 < -0x19df1867) {
              if (iVar5 < -0x32077cb0) {
                if (iVar5 < -0x4deb58d0) {
                  iVar3 = iVar1;
                  if ((iVar5 != -0x52539ce5) && (iVar3 = iVar5, iVar5 == -0x510014eb)) {
                    unaff_x29 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aec)])
                                          (param_2,param_3,unaff_x22);
                    cVar4 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aed)])
                                      (param_2);
                    iVar3 = -0x27ede508;
                    if (cVar4 != '\0') {
                      iVar3 = 0x49b520d1;
                    }
                  }
                }
                else if (iVar5 == -0x4deb58d0) {
                  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                            (&DAT_001fcf84,0xf,&DAT_002042d4,&DAT_001fcf84);
                  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                            (&DAT_001fcf93,0x15,&DAT_002042d8,&DAT_001fcf93);
                  unaff_x22 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aee)])
                                        (param_2,unaff_x28,&DAT_001fcf84,&DAT_001fcf93);
                  iVar3 = -0x5bd1d47;
                  if (unaff_x22 != 0) {
                    iVar3 = -0x510014eb;
                  }
                }
                else {
                  iVar3 = -0x2739b335;
                  if ((iVar5 != -0x43fab689) && (iVar3 = iVar5, iVar5 == -0x3a7d099b)) {
                    (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae3)])(param_1);
                    iVar3 = -0x43fab689;
                  }
                }
              }
              else if (iVar5 < -0x308337fb) {
                iVar3 = iVar2;
                if ((iVar5 != -0x32077cb0) && (iVar3 = iVar5, iVar5 == -0x31f605fb)) {
                  (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae2)])
                            (param_1,param_2,unaff_x29);
                  iVar3 = -0x308337fb;
                }
              }
              else if (iVar5 == -0x308337fb) {
                iVar3 = 0x469ecef9;
                if (unaff_x29 != 0) {
                  iVar3 = -0x19df1867;
                }
              }
              else if (iVar5 == -0x27ede508) {
                iVar3 = -0x2bd85eb;
                if (unaff_x29 != 0) {
                  iVar3 = -0x31f605fb;
                }
              }
              else if (iVar5 == -0x2739b335) {
                iVar3 = 0x33cbddbf;
              }
            }
            if (0x2ae67f1a < iVar5) break;
            if (iVar5 < -0x5bd1d47) {
              if (iVar5 == -0x19df1867) {
                (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aef)])(param_2,unaff_x29);
                iVar3 = 0x469ecef9;
              }
              else if (iVar5 == -0xe19506e) {
                (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aeb)])
                          (&DAT_001fcf6c,0x18,&DAT_002042d0,&DAT_001fcf6c);
                unaff_x28 = (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae8)])
                                      (param_2,&DAT_001fcf6c);
                iVar3 = 0x8f53fc;
                if (unaff_x28 != 0) {
                  iVar3 = -0x4deb58d0;
                }
              }
            }
            else if (iVar5 == -0x5bd1d47) {
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae9)])(param_2);
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aef)])(param_2,unaff_x28);
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aea)])(param_1);
              iVar3 = -0x2739b335;
            }
            else if (iVar5 == -0x2bd85eb) {
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aea)])(param_1);
              iVar3 = -0x308337fb;
            }
            else if (iVar5 == 0x8f53fc) {
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae9)])(param_2);
              (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aea)])(param_1);
              iVar3 = 0x33cbddbf;
            }
          }
          if (iVar5 < 0x49b520d1) break;
          if (iVar5 == 0x49b520d1) {
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52ae9)])(param_2);
            unaff_x29 = 0;
            iVar3 = -0x27ede508;
          }
          else if (iVar5 == 0x780cc94a) {
            (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aea)])(param_1);
            iVar3 = 0x2ae67f1b;
          }
        }
        iVar3 = 0x2ae67f1b;
      } while (iVar5 == 0x33cbddbf);
      if (iVar5 != 0x469ecef9) break;
      (*(code *)(&PTR_FUN_001fda20)[(int)(DAT_001fed20 ^ 0x98a52aef)])(param_2,unaff_x28);
      iVar3 = -0x43fab689;
    }
    iVar3 = iVar5;
  } while (iVar5 != 0x2ae67f1b);
  return;
}


