// Ghidra pseudocode. Not original C/C++ source.
// Program: libsummitden.so
// Executable SHA256: b85ed734818451c37b81675640c83cc17609fd83ad5e4b1b14a7c18f7d6e0fa0
// Entry: 001ed16c; body: [[001ed16c, 001ed4f7]]

/* WARNING: Type propagation algorithm not settling */

undefined8 * FUN_001ed16c(undefined8 param_1,long *param_2,ulong *param_3,uint param_4,long param_5)

{
  uint uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong *puVar10;
  
  puVar3 = PTR___sF_001f6b60;
  uVar1 = param_4 & 0xf;
  puVar10 = (ulong *)*param_2;
  if (uVar1 < 4) {
    if (uVar1 < 2) {
      if ((param_4 & 0xf) == 0) goto LAB_001ed2b8;
      if (uVar1 != 1) {
LAB_001ed4c4:
        fprintf((FILE *)(PTR___sF_001f6b60 + 0x130),"w4j375t7av %s - %s\n","getEncodedP",
                "unknown pointer encoding");
        fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
      puVar4 = (undefined8 *)FUN_001ed4f8(param_2,param_3);
      puVar3 = PTR___sF_001f6b60;
    }
    else if (uVar1 == 2) {
      puVar4 = (undefined8 *)(ulong)(ushort)*puVar10;
      *param_2 = (long)puVar10 + 2;
      puVar3 = PTR___sF_001f6b60;
    }
    else {
      if (uVar1 != 3) goto LAB_001ed4c4;
      puVar4 = (undefined8 *)(ulong)(uint)*puVar10;
      *param_2 = (long)((long)puVar10 + 4);
      puVar3 = PTR___sF_001f6b60;
    }
  }
  else if (uVar1 < 10) {
    if (uVar1 == 4) {
LAB_001ed2b8:
      puVar4 = (undefined8 *)*puVar10;
      *param_2 = (long)(puVar10 + 1);
      puVar3 = PTR___sF_001f6b60;
    }
    else {
      if (uVar1 != 9) goto LAB_001ed4c4;
      uVar5 = 0;
      uVar7 = 0xfffffffffffffff9;
      puVar6 = puVar10;
      puVar8 = puVar10;
      do {
        if (puVar8 == param_3) {
          fprintf((FILE *)(PTR___sF_001f6b60 + 0x130),"w4j375t7av %s - %s\n","getSLEB128",
                  "truncated sleb128 expression");
          fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
          abort();
        }
        bVar2 = (byte)*puVar8;
        uVar7 = uVar7 + 7;
        puVar6 = (ulong *)((long)puVar6 + 1);
        uVar5 = ((ulong)bVar2 & 0x7f) << (uVar7 & 0x3f) | uVar5;
        puVar8 = (ulong *)((long)puVar8 + 1);
      } while ((char)bVar2 < '\0');
      uVar9 = -1L << ((ulong)((int)uVar7 + 7) & 0x3f);
      *param_2 = (long)puVar6;
      if (0x38 < uVar7 || bVar2 < 0x40) {
        uVar9 = 0;
      }
      puVar4 = (undefined8 *)(uVar5 | uVar9);
      puVar3 = PTR___sF_001f6b60;
    }
  }
  else if (uVar1 == 10) {
    puVar4 = (undefined8 *)(long)(short)*puVar10;
    *param_2 = (long)puVar10 + 2;
    puVar3 = PTR___sF_001f6b60;
  }
  else {
    if (uVar1 != 0xb) {
      if (uVar1 != 0xc) goto LAB_001ed4c4;
      goto LAB_001ed2b8;
    }
    puVar4 = (undefined8 *)(long)(int)(uint)*puVar10;
    *param_2 = (long)((long)puVar10 + 4);
    puVar3 = PTR___sF_001f6b60;
  }
  uVar1 = (param_4 & 0xff) >> 4 & 7;
  PTR___sF_001f6b60 = puVar3;
  if (uVar1 < 2) {
    if (uVar1 != 0) {
      if (uVar1 != 1) goto LAB_001ed490;
      puVar4 = (undefined8 *)((long)puVar4 + (long)puVar10);
    }
LAB_001ed344:
    if ((param_4 >> 7 & 1) != 0) {
      return (undefined8 *)*puVar4;
    }
    return puVar4;
  }
  if (uVar1 < 4) {
    if (uVar1 == 3) {
      if (param_5 == 0) {
        fprintf((FILE *)(puVar3 + 0x130),"w4j375t7av %s - %s\n","getEncodedP",
                "mbkrmilsh1l8k2pzy0f4w7o8fpt110lypaycs3nwjn1k0w3ad58");
        fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
        abort();
      }
      puVar4 = (undefined8 *)((long)puVar4 + param_5);
      goto LAB_001ed344;
    }
    if (uVar1 == 2) {
      fprintf((FILE *)(puVar3 + 0x130),"w4j375t7av %s - %s\n","getEncodedP",
              "7hjxwfpgnfd2gl47t3gnj8qn6af5pzulgeuw4txqbfrjxae");
      fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
  else {
    if (uVar1 == 4) {
      fprintf((FILE *)(puVar3 + 0x130),"w4j375t7av %s - %s\n","getEncodedP",
              "g0z7u3ac7hun3ug9mp0bkqhrb3wfpy7bjtrepvgqgnldpho");
      fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (uVar1 == 5) {
      fprintf((FILE *)(puVar3 + 0x130),"w4j375t7av %s - %s\n","getEncodedP",
              "dqrb76k22avwm3v1bim3rqwhtomoteuq5zwz02ayr93pv0a");
      fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
      abort();
    }
  }
LAB_001ed490:
  fprintf((FILE *)(puVar3 + 0x130),"w4j375t7av %s - %s\n","getEncodedP","unknown pointer encoding");
  fflush((FILE *)(puVar3 + 0x130));
                    /* WARNING: Subroutine does not return */
  abort();
}


