// Ghidra pseudocode. Not original C/C++ source.
// Program: libsigner.so
// Executable SHA256: fb279ea3d929928055c8cb90e3a3c213939869a51ffafe6d587a072c530c5736
// Entry: 001af584; body: [[001af584, 001afb4b]]

int * FUN_001af584(int *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int *piVar4;
  long lVar5;
  int *__ptr;
  int *piVar6;
  long lVar7;
  void *unaff_x22;
  int unaff_w23;
  int *unaff_x24;
  int *local_88;
  int *local_80;
  long local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  __ptr = (int *)FUN_001aece4();
  lVar1 = 0x2ea5ec9aa4903e5;
  if (__ptr != (int *)0x0) {
    lVar1 = 0x5f1d0a7f6212d984;
  }
  lVar2 = 0xf8f9546f45fbb47;
  if (*param_1 != 0) {
    lVar2 = -0x22526e95d736601f;
  }
  piVar4 = __ptr;
  lVar5 = 0x2352f2d6b10786ab;
LAB_001af6c4:
  while (lVar7 = lVar5, piVar6 = piVar4, piVar4 = piVar6, lVar5 = lVar7, 0x41a203875b031c2 < lVar7)
  {
    if (lVar7 < 0x3c2595d6266c5998) {
      if (lVar7 < 0xf8f9546f45fbb47) {
        if (lVar7 == 0x41a203875b031c3) {
          lVar5 = -0x1d6a050721dd3e21;
          if (1 < (long)unaff_x22 + 1U) {
            lVar5 = -0x56bb61885886ae54;
          }
        }
        else if (lVar7 == 0xdc8188db88ec11b) {
          unaff_w23 = *__ptr;
          lVar5 = 0x7ededfa0c0eeb47a;
          if (unaff_w23 < 0) {
            lVar5 = -0x220211bfb882d8f5;
          }
        }
      }
      else if (lVar7 == 0xf8f9546f45fbb47) {
        unaff_x24 = calloc(1,0x30);
        lVar5 = 0x5127e420c2beb41f;
        if (unaff_x24 != (int *)0x0) {
          lVar5 = -0x38b0832f7743f2b8;
        }
      }
      else {
        lVar5 = lVar2;
        if ((lVar7 != 0x2352f2d6b10786ab) && (lVar5 = lVar7, lVar7 == 0x3132af798d39a4e3)) {
          if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return local_80;
        }
      }
    }
    else if (lVar7 < 0x5f1d0a7f6212d984) {
      piVar4 = unaff_x24;
      lVar5 = -0x1600a62692a3eebb;
      if ((lVar7 != 0x3c2595d6266c5998) &&
         (piVar4 = piVar6, lVar5 = lVar7, lVar7 == 0x5127e420c2beb41f)) {
        *param_1 = 2;
        lVar5 = 0x719dbab015af25c6;
      }
    }
    else if (lVar7 == 0x5f1d0a7f6212d984) {
LAB_001afa64:
      piVar4 = (int *)0x0;
      lVar5 = -0x1600a62692a3eebb;
    }
    else {
      lVar5 = lVar1;
      if ((lVar7 != 0x719dbab015af25c6) && (lVar5 = lVar7, lVar7 == 0x7ededfa0c0eeb47a)) {
        FUN_001f3aa0(unaff_w23);
        lVar5 = -0x5bdd334f52bdd63b;
      }
    }
  }
  if (lVar7 < -0x220211bfb882d8f5) {
    if (-0x38b0832f7743f2b9 < lVar7) {
      if (lVar7 == -0x38b0832f7743f2b8) {
        local_70 = *(long *)(__ptr + 2) + (ulong)(uint)__ptr[0xb];
        FUN_001adf20(param_1,__ptr,&local_70,unaff_x24);
        lVar5 = 0x3c2595d6266c5998;
        if (*param_1 != 0) {
          lVar5 = -0xf8d0ba03b2e0b85;
        }
      }
      else if (lVar7 == -0x22526e95d736601f) {
        lVar5 = 0x719dbab015af25c6;
      }
      goto LAB_001af6c4;
    }
    if (lVar7 == -0x5bdd334f52bdd63b) {
      free(__ptr);
      local_80 = local_88;
      goto LAB_001afa44;
    }
    if (lVar7 != -0x56bb61885886ae54) goto LAB_001af6c4;
    munmap(unaff_x22,*(size_t *)(__ptr + 4));
  }
  else {
    if (-0x1600a62692a3eebc < lVar7) {
      if (lVar7 == -0x1600a62692a3eebb) {
        unaff_x22 = *(void **)(__ptr + 2);
        lVar5 = 0x41a203875b031c3;
        local_88 = piVar6;
      }
      else {
        if (lVar7 == -0xf8d0ba03b2e0b85) {
          free(unaff_x24);
          goto LAB_001afa64;
        }
        if (lVar7 == 0x2ea5ec9aa4903e5) {
          local_80 = (int *)0x0;
LAB_001afa44:
          lVar5 = 0x3132af798d39a4e3;
        }
      }
      goto LAB_001af6c4;
    }
    lVar5 = -0x5bdd334f52bdd63b;
    if ((lVar7 == -0x220211bfb882d8f5) || (lVar5 = lVar7, lVar7 != -0x1d6a050721dd3e21))
    goto LAB_001af6c4;
  }
  lVar5 = 0xdc8188db88ec11b;
  goto LAB_001af6c4;
}


