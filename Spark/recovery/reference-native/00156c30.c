// [[00156c30, 00156ceb]]

/* WARNING: Removing unreachable block (ram,0x00156cc0) */

ulong FUN_00156c30(long param_1,ulong param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  
  uVar3 = 0;
  uVar2 = 0xcbf29ce484222325;
LAB_00156c7c:
  uVar4 = 0xe6051352;
  do {
    uVar1 = 0x954fe20;
    if (param_2 <= uVar3) {
      uVar1 = 0x7adc83a4;
    }
    if ((int)uVar4 < 0x41e5d4e) {
      do {
        if (uVar4 != 0xe6051352) {
          uVar3 = uVar3 + 1;
          goto LAB_00156c7c;
        }
        uVar4 = uVar1;
      } while (uVar1 < 0x41e5d4e);
    }
    while (uVar4 == 0x7adc83a4) {
      uVar4 = 0x41e5d4e;
    }
    if (uVar4 == 0x41e5d4e) {
      return uVar2;
    }
    uVar2 = (uVar2 ^ *(byte *)(param_1 + uVar3)) * 0x100000001b3;
    uVar4 = 0xae9719aa;
  } while( true );
}


