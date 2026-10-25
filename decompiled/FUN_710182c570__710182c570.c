// addr:      710182c570
// offset:    0x182c570
// name:      FUN_710182c570
// mangled:   
// signature: undefined __cdecl FUN_710182c570(long param_1, undefined8 param_2, char * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_710182c570(long param_1,undefined8 param_2,char *param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  char cVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  undefined **ppuVar9;
  long lVar10;
  undefined8 uVar11;
  long *plVar12;
  int iVar13;
  long lVar14;
  long lVar15;
  ulong local_48;
  
  if (((DAT_71053144d8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_71053144d8), iVar4 != 0)) {
    FUN_7101764000();
    ppuVar9 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
    param_3 = (char *)ppuVar9;
  }
  lVar14 = *(long *)(*(long *)(param_1 + 0x100) + 0x80);
  plVar12 = *(long **)(lVar14 + 0x40);
  if (*plVar12 == 0) {
    return;
  }
  local_48 = 0;
  FUN_71037aea50(&local_48,"i",(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  plVar12 = (long *)*plVar12;
  lVar5 = *plVar12;
  lVar10 = 0;
  if (lVar5 != 0) {
    lVar10 = *(long *)(*(long *)(lVar5 + 0x18) + 0x40);
    if (*(uint *)(lVar10 + 0xc) < 2) {
      plVar7 = (long *)(*(long *)(lVar10 + 0x18) +
                       ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)(lVar10 + 0xb) & 0x3f)) & 2)
                       * 0x20);
      do {
        if (((int)plVar7[3] == 0x13) && (plVar8 = plVar7, plVar7[2] == 2)) break;
        piVar1 = (int *)((long)plVar7 + 0x1c);
        plVar7 = plVar7 + (long)*piVar1 * 4;
        plVar8 = &DAT_7104862960;
      } while (*piVar1 != 0);
    }
    else {
      plVar8 = (long *)(*(long *)(lVar10 + 0x10) + 0x10);
    }
    param_3 = "exit_code";
    FUN_71038f4d40(lVar5,plVar8,"exit_code");
    lVar10 = *plVar12;
  }
  FUN_710372d940(lVar10,(long *)&local_48,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar3 = local_48;
  if (local_48 == 0) {
    return;
  }
  lVar5 = *(long *)(local_48 + 0x10);
  iVar4 = **(int **)(local_48 + 8);
  lVar10 = 0;
  do {
    cVar2 = *(char *)(lVar5 + lVar10);
    if (cVar2 == 's') {
      lVar15 = *(long *)(uVar3 + 8);
      uVar6 = *(ulong *)(lVar15 + lVar10 * 8);
      if (uVar6 != 0) {
        FUN_710392eb40(uVar6);
      }
      *(undefined8 *)(lVar15 + lVar10 * 8) = 0;
    }
    else if (cVar2 == '\0') goto LAB_710182c69c;
    lVar10 = lVar10 + 1;
  } while( true );
LAB_710182c7f4:
  FUN_710392eb40(uVar3);
  local_48 = 0;
  if (iVar4 == 1) goto LAB_710182c808;
LAB_710182c7b0:
  if (iVar4 != 2) {
    return;
  }
  DAT_7105308300 = -1;
  DAT_7105308320 = 0;
  DAT_7105308308 = &DAT_c1ffff0000000000;
  DAT_7105308310 = 0x2dffff0000000000;
  DAT_7105308318 = 0x69ffff0000000000;
  uVar11 = 0x200000000;
  goto LAB_710182c828;
LAB_710182c69c:
  FUN_710392eb40(uVar3);
  local_48 = 0;
  if (iVar4 == 0) {
    return;
  }
  plVar12 = *(long **)(lVar14 + 0x40);
  if (*plVar12 != 0) {
    local_48 = 0;
    FUN_71037aea50(&local_48,"i",(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
    plVar12 = (long *)*plVar12;
    lVar10 = *plVar12;
    lVar14 = 0;
    if (lVar10 != 0) {
      lVar14 = *(long *)(*(long *)(lVar10 + 0x18) + 0x40);
      if (*(uint *)(lVar14 + 0xc) < 2) {
        plVar7 = (long *)(*(long *)(lVar14 + 0x18) +
                         ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)(lVar14 + 0xb) & 0x3f)) & 2
                         ) * 0x20);
        do {
          if (((int)plVar7[3] == 0x13) && (plVar8 = plVar7, plVar7[2] == 2)) break;
          piVar1 = (int *)((long)plVar7 + 0x1c);
          plVar7 = plVar7 + (long)*piVar1 * 4;
          plVar8 = &DAT_7104862960;
        } while (*piVar1 != 0);
      }
      else {
        plVar8 = (long *)(*(long *)(lVar14 + 0x10) + 0x10);
      }
      param_3 = "result";
      FUN_71038f4d40(lVar10,plVar8,"result");
      lVar14 = *plVar12;
    }
    FUN_710372d940(lVar14,(long *)&local_48,param_3,param_4,param_5,param_6,param_7,param_8);
    uVar3 = local_48;
    if (local_48 != 0) {
      lVar10 = *(long *)(local_48 + 0x10);
      iVar13 = **(int **)(local_48 + 8);
      lVar14 = 0;
      do {
        cVar2 = *(char *)(lVar10 + lVar14);
        if (cVar2 == 's') {
          lVar5 = *(long *)(uVar3 + 8);
          uVar6 = *(ulong *)(lVar5 + lVar14 * 8);
          if (uVar6 != 0) {
            FUN_710392eb40(uVar6);
          }
          *(undefined8 *)(lVar5 + lVar14 * 8) = 0;
        }
        else if (cVar2 == '\0') goto LAB_710182c7f4;
        lVar14 = lVar14 + 1;
      } while( true );
    }
  }
  iVar13 = 0;
  if (iVar4 != 1) goto LAB_710182c7b0;
LAB_710182c808:
  DAT_7105308300 = iVar13;
  if ((iVar13 != 0) && ((iVar13 == 2 || (iVar13 != 4)))) {
    *(undefined4 *)(param_1 + 0x118) = 2;
    goto LAB_710182c838;
  }
  uVar11 = 0x100000000;
LAB_710182c828:
  *(undefined8 *)(param_1 + 0x118) = uVar11;
LAB_710182c838:
  if (*(uint *)(param_1 + 0xd4) < 0x13) {
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0xd4) * 4 + 0x88) = 5;
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

