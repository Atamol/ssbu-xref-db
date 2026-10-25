// addr:      71018d4b00
// offset:    0x18d4b00
// name:      FUN_71018d4b00
// mangled:   
// signature: undefined __cdecl FUN_71018d4b00(long param_1, undefined8 param_2, char * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71018d4b00(long param_1,undefined8 param_2,char *param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  undefined1 uVar2;
  char cVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  undefined **ppuVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  uint uVar15;
  long *plVar16;
  long lVar17;
  undefined4 uVar18;
  long lVar19;
  ulong local_48;
  
  lVar17 = *(long *)(*(long *)(param_1 + 0x100) + 0x80);
  plVar16 = *(long **)(lVar17 + 0x40);
  if (plVar16 == (long *)0x0) {
    return;
  }
  if (*plVar16 != 0) {
    if (*(long *)(*plVar16 + 8) != 0) {
      return;
    }
    local_48 = 0;
    FUN_71037aea50(&local_48,"i",(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
    plVar16 = (long *)*plVar16;
    lVar6 = *plVar16;
    lVar10 = 0;
    if (lVar6 != 0) {
      lVar10 = *(long *)(*(long *)(lVar6 + 0x18) + 0x40);
      if (*(uint *)(lVar10 + 0xc) < 2) {
        plVar12 = (long *)(*(long *)(lVar10 + 0x18) +
                          ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)(lVar10 + 0xb) & 0x3f)) &
                          2) * 0x20);
        do {
          if (((int)plVar12[3] == 0x13) && (plVar8 = plVar12, plVar12[2] == 2)) break;
          piVar1 = (int *)((long)plVar12 + 0x1c);
          plVar12 = plVar12 + (long)*piVar1 * 4;
          plVar8 = &DAT_7104862960;
        } while (*piVar1 != 0);
      }
      else {
        plVar8 = (long *)(*(long *)(lVar10 + 0x10) + 0x10);
      }
      param_3 = "exit_code_";
      FUN_71038f4d40(lVar6,plVar8,"exit_code_");
      lVar10 = *plVar16;
    }
    FUN_710372d940(lVar10,(long *)&local_48,param_3,param_4,param_5,param_6,param_7,param_8);
    uVar4 = local_48;
    if (local_48 != 0) {
      lVar6 = *(long *)(local_48 + 0x10);
      iVar5 = **(int **)(local_48 + 8);
      lVar10 = 0;
      do {
        cVar3 = *(char *)(lVar6 + lVar10);
        if (cVar3 == 's') {
          lVar19 = *(long *)(uVar4 + 8);
          uVar7 = *(ulong *)(lVar19 + lVar10 * 8);
          if (uVar7 != 0) {
            FUN_710392eb40(uVar7);
          }
          *(undefined8 *)(lVar19 + lVar10 * 8) = 0;
        }
        else if (cVar3 == '\0') goto LAB_71018d4e4c;
        lVar10 = lVar10 + 1;
      } while( true );
    }
  }
  *(undefined4 *)(lVar17 + 0x130) = 0;
LAB_71018d4c44:
  uVar11 = 0x200000000;
LAB_71018d4c4c:
  *(undefined8 *)(param_1 + 0x10c) = uVar11;
LAB_71018d4c50:
  if (*(uint *)(param_1 + 0xd4) < 0x13) {
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0xd4) * 4 + 0x88) = 4;
    if ((*(uint *)(param_1 + 0x110) < 5) &&
       ((1 << (ulong)(*(uint *)(param_1 + 0x110) & 0x1f) & 0x1aU) != 0)) {
      if (((DAT_71053144d8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_71053144d8), iVar5 != 0))
      {
        FUN_7101764000();
        FUN_71000001c0();
        __cxa_guard_release(&DAT_71053144d8);
      }
      plVar16 = *(long **)(*DAT_7105314510 + 0x78);
      plVar12 = *(long **)(*plVar16 + 8);
      uVar13 = 1;
      if ((int)DAT_71053082c8 == 2) {
        uVar13 = 2;
      }
      uVar14 = 0;
      if ((int)DAT_71053082c8 != 0) {
        uVar14 = uVar13;
      }
      *(undefined1 *)*plVar12 = uVar14;
      uVar15 = (uint)DAT_71053082c8._4_4_;
      if (99 < uVar15) {
        uVar15 = 100;
      }
      *(char *)(*plVar12 + 1) = (char)uVar15;
      uVar15 = (uint)(float)DAT_71053082d0;
      if (99 < uVar15) {
        uVar15 = 100;
      }
      *(char *)(*plVar12 + 2) = (char)uVar15;
      uVar15 = (uint)DAT_71053082d0._4_4_;
      if (99 < uVar15) {
        uVar15 = 100;
      }
      *(char *)(*plVar12 + 3) = (char)uVar15;
      plVar12 = *(long **)(*plVar16 + 0x10);
      uVar14 = 1;
      uVar13 = uVar14;
      if ((int)DAT_71053082d8 == 2) {
        uVar13 = 2;
      }
      uVar2 = 0;
      if ((int)DAT_71053082d8 != 0) {
        uVar2 = uVar13;
      }
      *(undefined1 *)*plVar12 = uVar2;
      uVar15 = (uint)DAT_71053082d8._4_4_;
      if (99 < uVar15) {
        uVar15 = 100;
      }
      *(char *)(*plVar12 + 1) = (char)uVar15;
      uVar15 = (uint)(float)DAT_71053082e0;
      if (99 < uVar15) {
        uVar15 = 100;
      }
      *(char *)(*plVar12 + 2) = (char)uVar15;
      uVar15 = (uint)DAT_71053082e0._4_4_;
      if (99 < uVar15) {
        uVar15 = 100;
      }
      *(char *)(*plVar12 + 3) = (char)uVar15;
      plVar16 = *(long **)(*plVar16 + 0x18);
      if (DAT_71053082e8 == 2) {
        uVar14 = 2;
      }
      uVar13 = 0;
      if (DAT_71053082e8 != 0) {
        uVar13 = uVar14;
      }
      *(undefined1 *)*plVar16 = uVar13;
      uVar15 = (uint)(float)DAT_71053082ec;
      if (99 < uVar15) {
        uVar15 = 100;
      }
      *(char *)(*plVar16 + 1) = (char)uVar15;
      uVar15 = (uint)DAT_71053082ec._4_4_;
      if (99 < uVar15) {
        uVar15 = 100;
      }
      *(char *)(*plVar16 + 2) = (char)uVar15;
      uVar15 = (uint)_DAT_71053082f4;
      if (99 < uVar15) {
        uVar15 = 100;
      }
      *(char *)(*plVar16 + 3) = (char)uVar15;
      if (*(int *)(param_1 + 0xd4) < 0x12) {
        uVar15 = *(int *)(param_1 + 0xd4) + 1;
        *(uint *)(param_1 + 0xd4) = uVar15;
        if (0x12 < uVar15) goto LAB_71018d5034;
        *(undefined4 *)(param_1 + (long)(int)uVar15 * 4 + 0x88) = 3;
      }
    }
    FUN_7103315cc0(*(long *)(DAT_710532f8d0 + 8),1);
    return;
  }
LAB_71018d5034:
                    /* WARNING: Subroutine does not return */
  abort();
LAB_71018d4e4c:
  FUN_710392eb40(uVar4);
  local_48 = 0;
  *(int *)(lVar17 + 0x130) = iVar5;
  if (iVar5 != 0) {
    if (((DAT_71053144d8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_71053144d8), iVar5 != 0)) {
      FUN_7101764000();
      ppuVar9 = &PTR_LOOP_7104f17000;
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
      param_3 = (char *)ppuVar9;
    }
    plVar16 = *(long **)(lVar17 + 0x40);
    if (*plVar16 != 0) {
      local_48 = 0;
      FUN_71037aea50(&local_48,"i",(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
      plVar16 = (long *)*plVar16;
      lVar6 = *plVar16;
      lVar10 = 0;
      if (lVar6 != 0) {
        lVar10 = *(long *)(*(long *)(lVar6 + 0x18) + 0x40);
        if (*(uint *)(lVar10 + 0xc) < 2) {
          plVar12 = (long *)(*(long *)(lVar10 + 0x18) +
                            ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)(lVar10 + 0xb) & 0x3f))
                            & 2) * 0x20);
          do {
            if (((int)plVar12[3] == 0x13) && (plVar8 = plVar12, plVar12[2] == 2)) break;
            piVar1 = (int *)((long)plVar12 + 0x1c);
            plVar12 = plVar12 + (long)*piVar1 * 4;
            plVar8 = &DAT_7104862960;
          } while (*piVar1 != 0);
        }
        else {
          plVar8 = (long *)(*(long *)(lVar10 + 0x10) + 0x10);
        }
        param_3 = "last_selected_mode_";
        FUN_71038f4d40(lVar6,plVar8,"last_selected_mode_");
        lVar10 = *plVar16;
      }
      FUN_710372d940(lVar10,(long *)&local_48,param_3,param_4,param_5,param_6,param_7,param_8);
      uVar4 = local_48;
      if (local_48 != 0) {
        lVar6 = *(long *)(local_48 + 0x10);
        uVar18 = **(undefined4 **)(local_48 + 8);
        lVar10 = 0;
        do {
          cVar3 = *(char *)(lVar6 + lVar10);
          if (cVar3 == 's') {
            lVar19 = *(long *)(uVar4 + 8);
            uVar7 = *(ulong *)(lVar19 + lVar10 * 8);
            if (uVar7 != 0) {
              FUN_710392eb40(uVar7);
            }
            *(undefined8 *)(lVar19 + lVar10 * 8) = 0;
          }
          else if (cVar3 == '\0') goto LAB_71018d4f70;
          lVar10 = lVar10 + 1;
        } while( true );
      }
    }
    uVar18 = 0;
    goto LAB_71018d4f7c;
  }
  goto LAB_71018d4c44;
LAB_71018d4f70:
  FUN_710392eb40(uVar4);
  local_48 = 0;
LAB_71018d4f7c:
  iVar5 = *(int *)(lVar17 + 0x130);
  DAT_71053082f8 = uVar18;
  if (iVar5 == 1) {
    uVar11 = 0x100000000;
    goto LAB_71018d4c4c;
  }
  if ((iVar5 != 4) && (iVar5 != 3)) goto LAB_71018d4c44;
  *(int *)(param_1 + 0x110) = iVar5;
  goto LAB_71018d4c50;
}

