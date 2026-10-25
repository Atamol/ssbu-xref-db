// addr:      7101ad67c0
// offset:    0x1ad67c0
// name:      FUN_7101ad67c0
// mangled:   
// signature: undefined __cdecl FUN_7101ad67c0(long param_1, undefined8 param_2, char * param_3, byte * * * * param_4, long * * * * param_5, long param_6, ulong param_7, ulong param_8)


void FUN_7101ad67c0(long param_1,undefined8 param_2,char *param_3,byte ****param_4,long ****param_5,
                   long param_6,ulong param_7,ulong param_8)

{
  int *piVar1;
  ulong uVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  undefined8 extraout_x1;
  long *plVar6;
  long *plVar7;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 uVar8;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined **ppuVar9;
  char *pcVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  uint uVar14;
  long *plVar15;
  undefined4 uVar16;
  long lVar17;
  undefined1 auVar18 [16];
  ulong local_48;
  
  if (*(char *)(*(long *)(DAT_710532f7e8 + 8) + 0x161) == '\0') {
    return;
  }
  if (*(int *)(*(long *)(DAT_710532f7e8 + 8) + 0xe8) != 2) {
    return;
  }
  if (*(int *)(param_1 + 0x164) == 0) {
    *(undefined1 *)(param_1 + 0x598) = 1;
  }
  auVar18 = nn::time::StandardSteadyClock::now();
  uVar8 = auVar18._8_8_;
  uVar11 = (auVar18._0_8_ - *(long *)(param_1 + 0x588)) * 1000000000;
  uVar2 = ((long)uVar11 >> 0x20) * 0x26d694b3 + ((uVar11 & 0xfffffe00) * 0x26d694b3 >> 0x20);
  ppuVar9 = (undefined **)param_3;
  if ((long)(ulong)*(uint *)(param_1 + 0x580) <=
      ((long)(((long)uVar11 >> 0x20) * 0x112e0be8 + ((long)uVar2 >> 0x20) +
             ((uVar11 & 0xfffffe00) * 0x112e0be8 + (uVar2 & 0xffffffff) >> 0x20)) >> 0x1a) -
      ((long)uVar11 >> 0x3f)) {
    plVar15 = *(long **)(param_1 + 0x40);
    *(long *)(param_1 + 0x588) = auVar18._0_8_;
    if (*plVar15 != 0) {
      local_48 = 0;
      FUN_71037aea50(&local_48,"i",(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
      plVar15 = (long *)*plVar15;
      lVar5 = *plVar15;
      lVar12 = 0;
      if (lVar5 != 0) {
        lVar12 = *(long *)(*(long *)(lVar5 + 0x18) + 0x40);
        if (*(uint *)(lVar12 + 0xc) < 2) {
          plVar6 = (long *)(*(long *)(lVar12 + 0x18) +
                           ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)(lVar12 + 0xb) & 0x3f)) &
                           2) * 0x20);
          do {
            if (((int)plVar6[3] == 0x13) && (plVar7 = plVar6, plVar6[2] == 2)) break;
            piVar1 = (int *)((long)plVar6 + 0x1c);
            plVar6 = plVar6 + (long)*piVar1 * 4;
            plVar7 = &DAT_7104862960;
          } while (*piVar1 != 0);
        }
        else {
          plVar7 = (long *)(*(long *)(lVar12 + 0x10) + 0x10);
        }
        param_3 = "g_selected_item_id";
        FUN_71038f4d40(lVar5,plVar7,"g_selected_item_id");
        lVar12 = *plVar15;
      }
      FUN_710372d940(lVar12,(long *)&local_48,param_3,param_4,param_5,param_6,param_7,param_8);
      uVar2 = local_48;
      if (local_48 != 0) {
        lVar5 = *(long *)(local_48 + 0x10);
        uVar14 = **(uint **)(local_48 + 8);
        lVar12 = 0;
        do {
          cVar3 = *(char *)(lVar5 + lVar12);
          if (cVar3 == 's') {
            lVar17 = *(long *)(uVar2 + 8);
            uVar11 = *(ulong *)(lVar17 + lVar12 * 8);
            if (uVar11 != 0) {
              FUN_710392eb40(uVar11);
            }
            *(undefined8 *)(lVar17 + lVar12 * 8) = 0;
          }
          else if (cVar3 == '\0') goto LAB_7101ad6980;
          lVar12 = lVar12 + 1;
        } while( true );
      }
    }
    uVar14 = 0;
    goto LAB_7101ad698c;
  }
LAB_7101ad6998:
  plVar15 = *(long **)(param_1 + 0x40);
  lVar12 = *plVar15;
  if ((lVar12 == 0) || (*(long *)(lVar12 + 8) == 0)) {
    pcVar10 = (char *)ppuVar9;
    if (*(char *)(param_1 + 0x599) != '\0') {
      auVar18 = nn::time::StandardSteadyClock::now();
      uVar8 = auVar18._8_8_;
      if (((DAT_71053144d8 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(&DAT_71053144d8), uVar8 = extraout_x1_02, iVar4 != 0)) {
        FUN_7101764000();
        ppuVar9 = &PTR_LOOP_7104f17000;
        FUN_71000001c0();
        __cxa_guard_release(&DAT_71053144d8);
        uVar8 = extraout_x1_03;
      }
      plVar15 = *(long **)(param_1 + 0x40);
      lVar12 = *plVar15;
      pcVar10 = (char *)ppuVar9;
      DAT_7105308540 = auVar18._0_8_;
    }
    if (lVar12 != 0) {
      local_48 = 0;
      FUN_71037aea50(&local_48,"i",(long ****)pcVar10,param_4,param_5,param_6,param_7,param_8);
      plVar15 = (long *)*plVar15;
      lVar5 = *plVar15;
      lVar12 = 0;
      if (lVar5 != 0) {
        lVar12 = *(long *)(*(long *)(lVar5 + 0x18) + 0x40);
        if (*(uint *)(lVar12 + 0xc) < 2) {
          plVar6 = (long *)(*(long *)(lVar12 + 0x18) +
                           ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)(lVar12 + 0xb) & 0x3f)) &
                           2) * 0x20);
          do {
            if (((int)plVar6[3] == 0x13) && (plVar7 = plVar6, plVar6[2] == 2)) break;
            piVar1 = (int *)((long)plVar6 + 0x1c);
            plVar6 = plVar6 + (long)*piVar1 * 4;
            plVar7 = &DAT_7104862960;
          } while (*piVar1 != 0);
        }
        else {
          plVar7 = (long *)(*(long *)(lVar12 + 0x10) + 0x10);
        }
        pcVar10 = "exit_code";
        FUN_71038f4d40(lVar5,plVar7,"exit_code");
        lVar12 = *plVar15;
      }
      FUN_710372d940(lVar12,(long *)&local_48,pcVar10,param_4,param_5,param_6,param_7,param_8);
      uVar2 = local_48;
      uVar8 = extraout_x1_00;
      if (local_48 != 0) {
        lVar5 = *(long *)(local_48 + 0x10);
        uVar16 = **(undefined4 **)(local_48 + 8);
        lVar12 = 0;
        do {
          cVar3 = *(char *)(lVar5 + lVar12);
          if (cVar3 == 's') {
            lVar17 = *(long *)(uVar2 + 8);
            uVar11 = *(ulong *)(lVar17 + lVar12 * 8);
            if (uVar11 != 0) {
              FUN_710392eb40(uVar11);
            }
            *(undefined8 *)(lVar17 + lVar12 * 8) = 0;
          }
          else if (cVar3 == '\0') goto LAB_7101ad6ad4;
          lVar12 = lVar12 + 1;
        } while( true );
      }
    }
    uVar16 = 0;
LAB_7101ad6ae0:
    *(undefined4 *)(param_1 + 0x56c) = uVar16;
    if (0x12 < *(uint *)(param_1 + 0x15c)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x15c) * 4 + 0x110) = 9;
    if (*(undefined8 **)(param_1 + 0x18) == *(undefined8 **)(param_1 + 0x10)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    puVar13 = (undefined8 *)**(undefined8 **)(param_1 + 0x10);
    if (puVar13 != (undefined8 *)0x0) {
      FUN_7103775fa0(*(long **)*puVar13,uVar8,(long ****)pcVar10,param_4,param_5,param_6,param_7,
                     param_8);
    }
  }
  return;
LAB_7101ad6980:
  FUN_710392eb40(uVar2);
  local_48 = 0;
LAB_7101ad698c:
  FUN_7101ad7b10(param_1,uVar14,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar8 = extraout_x1;
  ppuVar9 = (undefined **)param_3;
  goto LAB_7101ad6998;
LAB_7101ad6ad4:
  FUN_710392eb40(uVar2);
  local_48 = 0;
  uVar8 = extraout_x1_01;
  goto LAB_7101ad6ae0;
}

