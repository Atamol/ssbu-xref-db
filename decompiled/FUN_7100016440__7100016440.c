// addr:      7100016440
// offset:    0x16440
// name:      FUN_7100016440
// mangled:   
// signature: undefined8 __cdecl FUN_7100016440(long * param_1, uint param_2, void * param_3, ulong param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


undefined8
FUN_7100016440(long *param_1,uint param_2,void *param_3,ulong param_4,undefined8 param_5,
              undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint *puVar1;
  ulong uVar2;
  long lVar3;
  void *pvVar4;
  char *pcVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  code *pcVar12;
  code *pcVar13;
  
  if (param_4 == 0) {
    return 0;
  }
  lVar9 = *param_1;
  if ((*(byte *)(lVar9 + 0x224) >> 4 & 1) == 0) {
    if ((param_2 & 1) == 0) {
      pcVar13 = (code *)0x0;
      if ((param_2 >> 1 & 1) != 0) goto LAB_7100016488;
LAB_7100016554:
      pcVar12 = (code *)0x0;
    }
    else {
      pcVar13 = *(code **)(lVar9 + 0x300);
      if ((param_2 >> 1 & 1) == 0) goto LAB_7100016554;
LAB_7100016488:
      pcVar12 = *(code **)(lVar9 + 0x308);
      if (pcVar12 == (code *)0x0) {
        if (*(long *)(lVar9 + 0x290) == 0) {
          pcVar12 = (code *)0x0;
        }
        else {
          pcVar12 = *(code **)(lVar9 + 0x300);
        }
      }
    }
    if (pcVar13 == (code *)0x0) {
      if (pcVar12 == (code *)0x0) {
        do {
          uVar10 = param_4;
          if (0x3fff < param_4) {
            uVar10 = 0x4000;
          }
          param_4 = param_4 - uVar10;
        } while (param_4 != 0);
        return 0;
      }
      while( true ) {
        uVar7 = *(undefined8 *)(lVar9 + 0x290);
        uVar10 = param_4;
        if (0x3fff < param_4) {
          uVar10 = 0x4000;
        }
        uVar6 = uVar10;
        uVar2 = (*pcVar12)(param_3,1);
        if (uVar2 == 0x10000001) break;
        if (uVar2 != uVar10) goto LAB_7100016658;
        param_3 = (void *)((long)param_3 + uVar10);
        param_4 = param_4 - uVar10;
        if (param_4 == 0) {
          return 0;
        }
      }
LAB_710001660c:
      puVar1 = (uint *)(lVar9 + 0x4bd8);
      if (*puVar1 == 0) {
        uVar10 = 0;
      }
      else {
        uVar10 = 0;
        plVar11 = (long *)(lVar9 + 0x4be8);
        do {
          if (*(int *)(lVar9 + (uVar10 & 0xffffffff) * 0x18 + 0x4bf0) == 2) goto LAB_71000166bc;
          uVar10 = uVar10 + 1;
          plVar11 = plVar11 + 3;
        } while ((uint)uVar10 < *puVar1);
      }
      pvVar4 = FUN_7100017530(param_3,param_4);
      if (pvVar4 == (void *)0x0) {
        return 0x1b;
      }
      lVar8 = lVar9 + uVar10 * 0x18;
      *(void **)(lVar8 + 0x4be0) = pvVar4;
      *(ulong *)(lVar8 + 0x4be8) = param_4;
      *(undefined4 *)(lVar8 + 0x4bf0) = 2;
      *puVar1 = *puVar1 + 1;
      goto LAB_7100016788;
    }
    while( true ) {
      uVar7 = *(undefined8 *)(lVar9 + 0x280);
      uVar10 = param_4;
      if (0x3fff < param_4) {
        uVar10 = 0x4000;
      }
      uVar6 = uVar10;
      uVar2 = (*pcVar13)(param_3,1);
      if (uVar2 == 0x10000001) break;
      if (uVar2 != uVar10) {
        FUN_7100016040(lVar9,(byte *)"Failed writing body (%zu != %zu)",uVar2,uVar10,param_5,param_6
                       ,param_7,param_8);
        return 0x17;
      }
      if (pcVar12 != (code *)0x0) {
        uVar7 = *(undefined8 *)(lVar9 + 0x290);
        uVar6 = uVar10;
        uVar2 = (*pcVar12)(param_3,1);
        if (uVar2 == 0x10000001) goto LAB_710001660c;
        if (uVar2 != uVar10) goto LAB_7100016658;
      }
      param_3 = (void *)((long)param_3 + uVar10);
      param_4 = param_4 - uVar10;
      if (param_4 == 0) {
        return 0;
      }
    }
    if ((*(byte *)(param_1[0x10b] + 0x84) >> 4 & 1) != 0) {
      pcVar5 = "Write callback asked for PAUSE when not supported!";
LAB_7100016730:
      FUN_7100016040(lVar9,(byte *)pcVar5,uVar6,uVar7,param_5,param_6,param_7,param_8);
      return 0x17;
    }
    if (*(uint *)(lVar9 + 0x4bd8) != 0) {
      uVar10 = 0;
      plVar11 = (long *)(lVar9 + 0x4be8);
      do {
        if (*(uint *)(lVar9 + (uVar10 & 0xffffffff) * 0x18 + 0x4bf0) == param_2)
        goto LAB_71000166bc;
        uVar10 = uVar10 + 1;
        plVar11 = plVar11 + 3;
      } while ((uint)uVar10 < *(uint *)(lVar9 + 0x4bd8));
      goto LAB_7100016538;
    }
    pvVar4 = FUN_7100017530(param_3,param_4);
joined_r0x0071000165e0:
    uVar10 = 0;
  }
  else {
    if (*(uint *)(lVar9 + 0x4bd8) == 0) {
      pvVar4 = FUN_7100017530(param_3,param_4);
      goto joined_r0x0071000165e0;
    }
    uVar10 = 0;
    plVar11 = (long *)(lVar9 + 0x4be8);
    do {
      if (*(uint *)(lVar9 + (uVar10 & 0xffffffff) * 0x18 + 0x4bf0) == param_2) goto LAB_71000166bc;
      uVar10 = uVar10 + 1;
      plVar11 = plVar11 + 3;
    } while ((uint)uVar10 < *(uint *)(lVar9 + 0x4bd8));
LAB_7100016538:
    pvVar4 = FUN_7100017530(param_3,param_4);
  }
  if (pvVar4 == (void *)0x0) {
    return 0x1b;
  }
  lVar8 = lVar9 + uVar10 * 0x18;
  *(void **)(lVar8 + 0x4be0) = pvVar4;
  *(ulong *)(lVar8 + 0x4be8) = param_4;
  *(uint *)(lVar8 + 0x4bf0) = param_2;
  *(int *)(lVar9 + 0x4bd8) = *(int *)(lVar9 + 0x4bd8) + 1;
LAB_7100016788:
  *(uint *)(lVar9 + 0x224) = *(uint *)(lVar9 + 0x224) | 0x10;
  return 0;
LAB_7100016658:
  pcVar5 = "Failed writing header";
  goto LAB_7100016730;
LAB_71000166bc:
  lVar8 = *plVar11;
  lVar3 = FUN_71000272b0();
  if (lVar3 == 0) {
    return 0x1b;
  }
  memcpy((void *)(lVar3 + *plVar11),param_3,param_4);
  plVar11[-1] = lVar3;
  *plVar11 = lVar8 + param_4;
  goto LAB_7100016788;
}

