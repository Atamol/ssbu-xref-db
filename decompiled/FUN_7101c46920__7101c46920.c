// addr:      7101c46920
// offset:    0x1c46920
// name:      FUN_7101c46920
// mangled:   
// signature: undefined __cdecl FUN_7101c46920(long param_1, undefined8 param_2, char * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101c46920(long param_1,undefined8 param_2,char *param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  undefined **ppuVar9;
  long lVar10;
  undefined1 uVar11;
  undefined *puVar12;
  undefined **local_50;
  long *local_48;
  
  if (*(int *)(param_1 + 0x144) == 0) {
    *(undefined1 *)(param_1 + 0x1f2) = 1;
    *(undefined2 *)(param_1 + 500) = 0;
    plVar4 = *(long **)(param_1 + 0x1c0);
  }
  else {
    plVar4 = *(long **)(param_1 + 0x1c0);
  }
  if ((((((plVar4 != (long *)0x0) && (uVar6 = (**(code **)(*plVar4 + 0x20))(), (uVar6 & 1) == 0)) &&
        (*(char *)(*DAT_710593b438 + 1) != '\0')) &&
       ((*(int *)(param_1 + 0x1cc) == 0x876500 && (DAT_7106dd53a8 == '\x01')))) &&
      ((*(int *)(param_1 + 0x1c8) == DAT_7106dd53ac &&
       ((*(char *)(param_1 + 0x1d0) == '\0' && (*(long **)(param_1 + 0x1c0) != (long *)0x0)))))) &&
     ((uVar6 = (**(code **)(**(long **)(param_1 + 0x1c0) + 0x20))(), (uVar6 & 1) == 0 &&
      (uVar6 = (**(code **)(**(long **)(param_1 + 0x1c0) + 0x68))(), (uVar6 & 1) == 0)))) {
    return;
  }
  plVar4 = *(long **)(param_1 + 0x40);
  lVar10 = *plVar4;
  if (lVar10 != 0) {
    if (*(long *)(lVar10 + 8) != 0) {
      return;
    }
    local_50 = (undefined **)0x0;
    FUN_71037aea50((ulong *)&local_50,"i",(long ****)param_3,param_4,param_5,param_6,param_7,param_8
                  );
    plVar4 = (long *)*plVar4;
    lVar5 = *plVar4;
    lVar10 = 0;
    if (lVar5 != 0) {
      lVar10 = *(long *)(*(long *)(lVar5 + 0x18) + 0x40);
      if (*(uint *)(lVar10 + 0xc) < 2) {
        plVar7 = (long *)(*(long *)(lVar10 + 0x18) +
                         ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)(lVar10 + 0xb) & 0x3f)) & 2
                         ) * 0x20);
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
      param_3 = "g_melee_type";
      FUN_71038f4d40(lVar5,plVar8,"g_melee_type");
      lVar10 = *plVar4;
    }
    FUN_710372d940(lVar10,(long *)&local_50,param_3,param_4,param_5,param_6,param_7,param_8);
    ppuVar9 = local_50;
    if (local_50 != (undefined **)0x0) {
      puVar2 = local_50[2];
      uVar11 = (undefined1)*(undefined4 *)local_50[1];
      lVar10 = 0;
      do {
        if (puVar2[lVar10] == 's') {
          puVar12 = ppuVar9[1];
          uVar6 = *(ulong *)(puVar12 + lVar10 * 8);
          if (uVar6 != 0) {
            FUN_710392eb40(uVar6);
          }
          *(undefined8 *)(puVar12 + lVar10 * 8) = 0;
        }
        else if (puVar2[lVar10] == '\0') goto LAB_7101c46ad0;
        lVar10 = lVar10 + 1;
      } while( true );
    }
  }
  uVar11 = 0;
LAB_7101c46adc:
  if (((DAT_71053144d8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_71053144d8), iVar3 != 0)) {
    FUN_7101764000();
    ppuVar9 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
    param_3 = (char *)ppuVar9;
  }
  DAT_7105306978._2_1_ = uVar11;
  if (DAT_710532f7f0 != 0) {
    lVar5 = *(long *)(*(long *)(*(long *)(DAT_710532f7f0 + 8) + 8) + 0x80);
    FUN_7103776910(&local_50,**(long **)(lVar5 + 0x130) + 8,(long ****)"set_txt_key",param_3,param_4
                   ,param_5,param_6,param_7,param_8);
    plVar4 = local_48;
    lVar10 = *local_48;
    if (lVar10 != 0) {
      *(byte *)(lVar10 + 0x58) = *(byte *)(lVar10 + 0x58) | 1;
    }
    local_50 = &PTR_FUN_710523d9a8;
    local_48 = (long *)0x0;
    if (plVar4 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar4);
    }
    *(undefined1 *)(lVar5 + 0x200) = 1;
  }
  if (*(uint *)(param_1 + 0x13c) < 0x13) {
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x13c) * 4 + 0xf0) = 7;
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
LAB_7101c46ad0:
  FUN_710392eb40((ulong)ppuVar9);
  local_50 = (undefined **)0x0;
  goto LAB_7101c46adc;
}

