// addr:      7101ce7e70
// offset:    0x1ce7e70
// name:      FUN_7101ce7e70
// mangled:   
// signature: undefined __cdecl FUN_7101ce7e70(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101ce7e70(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  code *pcVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined2 local_b0;
  undefined4 local_ac;
  undefined2 local_a8;
  undefined8 local_68;
  undefined8 local_60;
  undefined5 uStack_58;
  undefined3 local_53;
  undefined5 uStack_50;
  undefined **local_40;
  ulong local_38;
  
  puVar4 = &local_c0;
  plVar9 = *(long **)(param_1 + 0x20);
  FUN_7101cdf490(plVar9);
  if (*plVar9 != 0) {
    pcVar5 = (code *)plVar9[1];
    uVar8 = plVar9[2] & 1;
    if (uVar8 != 0 || pcVar5 != (code *)0x0) {
      plVar3 = (long *)(*plVar9 + (plVar9[2] >> 1));
      if (uVar8 != 0) {
        pcVar5 = *(code **)(pcVar5 + *plVar3);
      }
      (*pcVar5)(plVar3,param_2);
    }
  }
  *(int *)((long)plVar9 + 0x22c) = *(int *)((long)plVar9 + 0x22c) + 1;
  if (*(long *)(plVar9[0x68] + 8) != 0) {
    puVar10 = *(undefined8 **)(*(long *)(plVar9[0x68] + 8) + 0x78);
    if (((DAT_710593ba40 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_710593ba40), iVar1 != 0)) {
      if (((DAT_710593ba48 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_710593ba48), iVar1 != 0))
      {
        DAT_710593ba50 = 0;
        __cxa_guard_release(&DAT_710593ba48);
      }
      DAT_710593ba58 = &DAT_710593ba50;
      __cxa_guard_release(&DAT_710593ba40);
    }
    if (puVar10 != (undefined8 *)0x0) {
      for (puVar2 = (undefined8 *)(**(code **)*puVar10)(puVar10); puVar2 != (undefined8 *)0x0;
          puVar2 = (undefined8 *)*puVar2) {
        if ((undefined8 **)puVar2 == &DAT_710593ba58) {
          if (*(char *)((long)puVar10 + 100) != '\0') goto LAB_7101ce8070;
          break;
        }
      }
    }
    if (*(long *)(plVar9[0x68] + 8) != 0) {
      puVar10 = *(undefined8 **)(*(long *)(plVar9[0x68] + 8) + 0x78);
      if (((DAT_710593ba40 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_710593ba40), iVar1 != 0))
      {
        if (((DAT_710593ba48 & 1) == 0) &&
           (iVar1 = __cxa_guard_acquire(&DAT_710593ba48), iVar1 != 0)) {
          DAT_710593ba50 = 0;
          __cxa_guard_release(&DAT_710593ba48);
        }
        DAT_710593ba58 = &DAT_710593ba50;
        __cxa_guard_release(&DAT_710593ba40);
      }
      if (puVar10 != (undefined8 *)0x0) {
        for (puVar2 = (undefined8 *)(**(code **)*puVar10)(puVar10); puVar2 != (undefined8 *)0x0;
            puVar2 = (undefined8 *)*puVar2) {
          if ((undefined8 **)puVar2 == &DAT_710593ba58) {
            if (((*(char *)((long)puVar10 + 99) != '\0') ||
                (*(char *)((long)puVar10 + 0x61) != '\0')) &&
               (lVar6 = plVar9[0x69], *(int *)(plVar9 + 0x69) = (int)lVar6 + 1, 0x58 < (int)lVar6))
            {
              if (*(long *)(plVar9[0x68] + 8) == 0) goto LAB_7101ce806c;
              puVar10 = *(undefined8 **)(*(long *)(plVar9[0x68] + 8) + 0x78);
              if (((DAT_710593ba40 & 1) == 0) &&
                 (iVar1 = __cxa_guard_acquire(&DAT_710593ba40), iVar1 != 0)) {
                if (((DAT_710593ba48 & 1) == 0) &&
                   (iVar1 = __cxa_guard_acquire(&DAT_710593ba48), iVar1 != 0)) {
                  DAT_710593ba50 = 0;
                  __cxa_guard_release(&DAT_710593ba48);
                }
                DAT_710593ba58 = &DAT_710593ba50;
                __cxa_guard_release(&DAT_710593ba40);
              }
              if ((puVar10 == (undefined8 *)0x0) ||
                 (puVar2 = (undefined8 *)(**(code **)*puVar10)(puVar10), puVar2 == (undefined8 *)0x0
                 )) goto LAB_7101ce806c;
              goto LAB_7101ce7fcc;
            }
            break;
          }
        }
      }
    }
  }
  goto LAB_7101ce8070;
  while (puVar2 = (undefined8 *)*puVar2, puVar2 != (undefined8 *)0x0) {
LAB_7101ce816c:
    if ((undefined8 **)puVar2 == &DAT_710593ba58) {
      lVar6 = puVar10[3];
      *(undefined4 *)(puVar10 + 0xb) = *(undefined4 *)((long)puVar10 + 0x54);
      if (lVar6 != 0) {
        *(undefined4 *)(lVar6 + 0x30) = *(undefined4 *)((long)puVar10 + 0x54);
        *(byte *)(lVar6 + 0x58) = *(byte *)(lVar6 + 0x58) | 0x10;
      }
      lVar6 = puVar10[4];
      if (lVar6 != 0) {
        *(undefined4 *)(lVar6 + 0x30) = *(undefined4 *)(puVar10 + 0xb);
        *(byte *)(lVar6 + 0x58) = *(byte *)(lVar6 + 0x58) | 0x10;
      }
      if ((long *)puVar10[5] != (long *)0x0) {
        (**(code **)(*(long *)puVar10[5] + 0x180))(0);
      }
      plVar3 = (long *)puVar10[6];
      if (plVar3 != (long *)0x0) {
        if (*(char *)((long)puVar10 + 99) == '\0') {
          (**(code **)(*plVar3 + 0x180))(0);
        }
        else {
          (**(code **)(*plVar3 + 400))();
        }
      }
      *(undefined2 *)((long)puVar10 + 100) = 1;
      break;
    }
  }
LAB_7101ce820c:
  *(undefined4 *)(plVar9 + 0x6c) = 0;
  goto LAB_7101ce8210;
  while (puVar2 = (undefined8 *)*puVar2, puVar2 != (undefined8 *)0x0) {
LAB_7101ce7fcc:
    if ((undefined8 **)puVar2 == &DAT_710593ba58) {
      lVar6 = puVar10[3];
      *(undefined4 *)(puVar10 + 0xb) = *(undefined4 *)((long)puVar10 + 0x54);
      if (lVar6 != 0) {
        *(undefined4 *)(lVar6 + 0x30) = *(undefined4 *)((long)puVar10 + 0x54);
        *(byte *)(lVar6 + 0x58) = *(byte *)(lVar6 + 0x58) | 0x10;
      }
      lVar6 = puVar10[4];
      if (lVar6 != 0) {
        *(undefined4 *)(lVar6 + 0x30) = *(undefined4 *)(puVar10 + 0xb);
        *(byte *)(lVar6 + 0x58) = *(byte *)(lVar6 + 0x58) | 0x10;
      }
      if ((long *)puVar10[5] != (long *)0x0) {
        (**(code **)(*(long *)puVar10[5] + 0x180))(0);
      }
      plVar3 = (long *)puVar10[6];
      if (plVar3 != (long *)0x0) {
        if (*(char *)((long)puVar10 + 99) == '\0') {
          (**(code **)(*plVar3 + 0x180))(0);
        }
        else {
          (**(code **)(*plVar3 + 400))();
        }
      }
      *(undefined2 *)((long)puVar10 + 100) = 1;
      break;
    }
  }
LAB_7101ce806c:
  *(undefined4 *)(plVar9 + 0x69) = 0;
LAB_7101ce8070:
  if (*(long *)(plVar9[0x6b] + 8) != 0) {
    puVar10 = *(undefined8 **)(*(long *)(plVar9[0x6b] + 8) + 0x78);
    if (((DAT_710593ba40 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_710593ba40), iVar1 != 0)) {
      if (((DAT_710593ba48 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_710593ba48), iVar1 != 0))
      {
        DAT_710593ba50 = 0;
        __cxa_guard_release(&DAT_710593ba48);
      }
      DAT_710593ba58 = &DAT_710593ba50;
      __cxa_guard_release(&DAT_710593ba40);
    }
    if (puVar10 != (undefined8 *)0x0) {
      for (puVar2 = (undefined8 *)(**(code **)*puVar10)(puVar10); puVar2 != (undefined8 *)0x0;
          puVar2 = (undefined8 *)*puVar2) {
        if ((undefined8 **)puVar2 == &DAT_710593ba58) {
          if (*(char *)((long)puVar10 + 100) != '\0') goto LAB_7101ce8210;
          break;
        }
      }
    }
    if (*(long *)(plVar9[0x6b] + 8) != 0) {
      puVar10 = *(undefined8 **)(*(long *)(plVar9[0x6b] + 8) + 0x78);
      if (((DAT_710593ba40 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_710593ba40), iVar1 != 0))
      {
        if (((DAT_710593ba48 & 1) == 0) &&
           (iVar1 = __cxa_guard_acquire(&DAT_710593ba48), iVar1 != 0)) {
          DAT_710593ba50 = 0;
          __cxa_guard_release(&DAT_710593ba48);
        }
        DAT_710593ba58 = &DAT_710593ba50;
        __cxa_guard_release(&DAT_710593ba40);
      }
      if (puVar10 != (undefined8 *)0x0) {
        for (puVar2 = (undefined8 *)(**(code **)*puVar10)(puVar10); puVar2 != (undefined8 *)0x0;
            puVar2 = (undefined8 *)*puVar2) {
          if ((undefined8 **)puVar2 == &DAT_710593ba58) {
            if (((*(char *)((long)puVar10 + 99) != '\0') ||
                (*(char *)((long)puVar10 + 0x61) != '\0')) &&
               (lVar6 = plVar9[0x6c], *(int *)(plVar9 + 0x6c) = (int)lVar6 + 1, 0x58 < (int)lVar6))
            {
              if (*(long *)(plVar9[0x6b] + 8) == 0) goto LAB_7101ce820c;
              puVar10 = *(undefined8 **)(*(long *)(plVar9[0x6b] + 8) + 0x78);
              if (((DAT_710593ba40 & 1) == 0) &&
                 (iVar1 = __cxa_guard_acquire(&DAT_710593ba40), iVar1 != 0)) {
                if (((DAT_710593ba48 & 1) == 0) &&
                   (iVar1 = __cxa_guard_acquire(&DAT_710593ba48), iVar1 != 0)) {
                  DAT_710593ba50 = 0;
                  __cxa_guard_release(&DAT_710593ba48);
                }
                DAT_710593ba58 = &DAT_710593ba50;
                __cxa_guard_release(&DAT_710593ba40);
              }
              if ((puVar10 == (undefined8 *)0x0) ||
                 (puVar2 = (undefined8 *)(**(code **)*puVar10)(puVar10), puVar2 == (undefined8 *)0x0
                 )) goto LAB_7101ce820c;
              goto LAB_7101ce816c;
            }
            break;
          }
        }
      }
    }
  }
LAB_7101ce8210:
  puVar10 = (undefined8 *)plVar9[0x62];
  puVar2 = (undefined8 *)plVar9[99];
  if (puVar10 == puVar2) {
    return;
  }
  if (*(long **)(puVar10[1] + 8) != (long *)0x0) {
    uVar8 = (**(code **)(**(long **)(puVar10[1] + 8) + 0x138))();
    if ((uVar8 & 1) == 0) {
      return;
    }
    puVar10 = (undefined8 *)plVar9[0x62];
    puVar2 = (undefined8 *)plVar9[99];
  }
  if (puVar10 + 2 != puVar2) {
    do {
      uVar7 = puVar10[3];
      uVar8 = puVar10[1];
      puVar10[3] = 0;
      puVar10[1] = uVar7;
      if (uVar8 != 0) {
        FUN_710392eb40(uVar8);
      }
      puVar10 = puVar10 + 2;
    } while (puVar2 + -2 != puVar10);
    puVar2 = (undefined8 *)plVar9[99];
    if (puVar2 == puVar10) goto LAB_7101ce829c;
  }
  do {
    puVar2 = puVar2 + -2;
    (**(code **)*puVar2)(puVar2);
  } while (puVar10 != puVar2);
LAB_7101ce829c:
  plVar9[99] = (long)puVar10;
  if ((undefined8 *)plVar9[0x62] != puVar10) {
    local_ac = 0;
    local_a8 = 0;
    local_b0 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    uStack_50 = 0;
    local_68 = 0;
    local_60 = 0;
    uStack_58 = 0;
    local_53 = 0;
    FUN_710334e560(*(long *)(DAT_710532f8f8 + 8),(int *)(plVar9 + 0x51),&local_c0);
    FUN_7103776910(&local_40,(long)(plVar9 + 0x4a),(long ****)"set_txt_num_like",puVar4,param_4,
                   param_5,param_6,param_7,param_8);
    FUN_710377a280((long)&local_40,(byte *)"mnu_share_detail_good_n",1);
    uVar8 = local_38;
    local_40 = &PTR_FUN_710523d9a8;
    local_38 = 0;
    if (uVar8 != 0) {
      FUN_710392eb40(uVar8);
    }
    FUN_710377aee0(0x3f800000,plVar9[0x62]);
  }
  return;
}

