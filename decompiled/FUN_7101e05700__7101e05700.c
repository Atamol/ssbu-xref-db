// addr:      7101e05700
// offset:    0x1e05700
// name:      FUN_7101e05700
// mangled:   
// signature: undefined __cdecl FUN_7101e05700(undefined * * param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101e05700(undefined **param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  ulong uVar4;
  bool bVar5;
  bool bVar6;
  ulong uVar7;
  undefined8 extraout_x1;
  undefined2 uVar8;
  undefined2 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined4 uVar12;
  undefined *puVar13;
  undefined **local_40;
  ulong local_38;
  
  if (*(int *)((long)param_1 + 0x4c4) == 0) {
    FUN_71037760f0(**(long **)param_1[0x9a],1);
    (**(code **)(*(long *)param_1[0xa5] + 0x60))(param_1[0xa5],1);
    (**(code **)(*(long *)param_1[0xa5] + 0x70))(param_1[0xa5],1);
    param_3 = 1;
    FUN_7103771a80((long *)(param_1 + 0xa4),2,1);
    *(undefined1 *)((long)param_1 + 0x59a) = 0;
    param_2 = extraout_x1;
  }
  iVar2 = *(int *)(param_1[0xa5] + 0x2a4);
  if (*(int *)(param_1 + 0xb2) != iVar2) {
    *(int *)(param_1 + 0xb2) = iVar2;
    if (iVar2 == 0) {
      uVar8 = 0xffff;
LAB_7101e057c8:
      *(undefined2 *)((long)param_1 + 0x594) = uVar8;
    }
    else {
      iVar2 = iVar2 - (*(byte *)(param_1 + 0x6c) & 1);
      if (-1 < iVar2) {
        if (((ulong)(long)iVar2 < (ulong)((long)param_1[4] - (long)param_1[3] >> 3)) &&
           (puVar9 = *(undefined2 **)(param_1[3] + (long)iVar2 * 8), puVar9 != (undefined2 *)0x0)) {
          uVar8 = *puVar9;
          goto LAB_7101e057c8;
        }
      }
    }
    FUN_7101e070c0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  if (((int)((int)((ulong)((long)param_1[4] - (long)param_1[3]) >> 3) +
            (uint)*(byte *)(param_1 + 0x6c)) < 1) ||
     ((*(byte *)(param_1 + 0x6c) != 0 && (*(int *)(param_1 + 0xb2) == 0)))) {
    bVar5 = false;
  }
  else {
    bVar5 = *(char *)(param_1 + 0xb3) != '\0';
  }
  FUN_7103776640(&local_40,(long)(param_1 + 0xa2),(byte ****)"set_parts_det_key",param_3,param_4,
                 param_5,param_6,param_7,param_8);
  uVar4 = local_38;
  if ((*(long *)(local_38 + 8) != 0) &&
     (lVar10 = *(long *)(*(long *)(local_38 + 8) + 0x18), lVar10 != 0)) {
    *(byte *)(lVar10 + 0x58) = *(byte *)(lVar10 + 0x58) & 0xfe | bVar5;
  }
  local_40 = &PTR_FUN_710523d988;
  local_38 = 0;
  if (uVar4 != 0) {
    uVar7 = *(ulong *)(uVar4 + 0x18);
    *(undefined ***)(uVar4 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar4 + 0x18) = 0;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
    FUN_710392eb40(uVar4);
  }
  puVar11 = (undefined8 *)param_1[0x9a];
  lVar10 = *(long *)*puVar11;
  puVar13 = param_1[0xa5];
  iVar2 = *(int *)(puVar13 + 0x2b4);
  *(int *)((long)param_1 + 0x584) = iVar2;
  if (-1 < iVar2) {
    if (((iVar2 != 0) || (*(char *)(param_1 + 0x6c) == '\0')) ||
       ((int)((ulong)((long)param_1[4] - (long)param_1[3]) >> 3) < 99)) {
      FUN_71037760f0(*(long *)*puVar11,0);
      if (*(uint *)((long)param_1 + 0x4bc) < 0x13) {
        *(undefined4 *)((long)param_1 + (long)(int)*(uint *)((long)param_1 + 0x4bc) * 4 + 0x470) = 3
        ;
        param_1[0xb1] = (undefined *)0xffffffffffffffff;
        *(undefined1 *)((long)param_1 + 0x59a) = 1;
        (**(code **)(*(long *)param_1[0xa4] + 0x60))(param_1[0xa4],0);
        return;
      }
      goto LAB_7101e05abc;
    }
    *(undefined4 *)((long)param_1 + 0x584) = 0xffffffff;
    if (0x11 < *(int *)((long)param_1 + 0x4bc)) {
      return;
    }
    uVar1 = *(int *)((long)param_1 + 0x4bc) + 1;
    *(uint *)((long)param_1 + 0x4bc) = uVar1;
    if (0x12 < uVar1) goto LAB_7101e05abc;
    lVar10 = (long)param_1 + (long)(int)uVar1 * 4;
    uVar12 = 0xb;
    goto LAB_7101e058e0;
  }
  if (puVar13[0x316] != '\0') {
    *(undefined8 *)((long)param_1 + 0x584) = 0xffffffffffffffff;
    *(undefined4 *)((long)param_1 + 0x58c) = 0xffffffff;
    FUN_71037760f0(*(long *)*puVar11,0);
    if (*(uint *)((long)param_1 + 0x4bc) < 0x13) {
      *(undefined4 *)((long)param_1 + (long)(int)*(uint *)((long)param_1 + 0x4bc) * 4 + 0x470) = 3;
      *(undefined1 *)((long)param_1 + 0x59a) = 1;
      return;
    }
    goto LAB_7101e05abc;
  }
  if (*(char *)((long)param_1 + 0x59a) != '\0') {
    return;
  }
  lVar10 = *(long *)(lVar10 + 0x600);
  cVar3 = *(char *)(lVar10 + 0x4aa);
  if (bVar5) {
    if (cVar3 != '\0') {
      if ((*(byte *)(lVar10 + 0x1b0) >> 1 & 1) != 0) {
        if (0x11 < *(int *)((long)param_1 + 0x4bc)) {
          return;
        }
        uVar1 = *(int *)((long)param_1 + 0x4bc) + 1;
        *(uint *)((long)param_1 + 0x4bc) = uVar1;
        if (uVar1 < 0x13) {
          lVar10 = (long)param_1 + (long)(int)uVar1 * 4;
          uVar12 = 6;
          goto LAB_7101e058e0;
        }
        goto LAB_7101e05abc;
      }
      if ((*(byte *)(lVar10 + 0x1b4) >> 1 & 1) == 0) goto LAB_7101e05a10;
LAB_7101e059cc:
      *(undefined1 *)((long)param_1 + 0x59c) = 1;
      if (0x11 < *(int *)((long)param_1 + 0x4bc)) {
        return;
      }
      uVar1 = *(int *)((long)param_1 + 0x4bc) + 1;
      *(uint *)((long)param_1 + 0x4bc) = uVar1;
      if (0x12 < uVar1) goto LAB_7101e05abc;
      lVar10 = (long)param_1 + (long)(int)uVar1 * 4;
      uVar12 = 5;
      goto LAB_7101e058e0;
    }
    bVar6 = true;
  }
  else {
    bVar6 = cVar3 == '\0';
    if (cVar3 != '\0') {
      if ((*(byte *)(lVar10 + 0x1b4) >> 1 & 1) != 0) goto LAB_7101e059cc;
LAB_7101e05a10:
      bVar6 = cVar3 == '\0';
      if ((!bVar6 && bVar5) && ((*(byte *)(lVar10 + 0x1b8) >> 1 & 1) != 0)) {
        if ((*(int *)(param_1 + 0xb2) == 0) && (*(char *)(param_1 + 0x6c) != '\0')) {
          return;
        }
        *(undefined1 *)((long)param_1 + 0x59a) = 1;
        *(int *)((long)param_1 + 0x58c) = *(int *)(param_1 + 0xb2);
        FUN_71037760f0(*(long *)*puVar11,0);
        return;
      }
    }
  }
  if (*(int *)(puVar13 + 0x2b8) == 2) {
    if (bVar6) {
      return;
    }
    if ((*(byte *)(lVar10 + 0x19c) >> 1 & 1) == 0) {
      return;
    }
  }
  else if (*(int *)(puVar13 + 0x2b8) != 1) {
    return;
  }
  if (0x12 < *(uint *)((long)param_1 + 0x4bc)) {
LAB_7101e05abc:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar10 = (long)param_1 + (long)(int)*(uint *)((long)param_1 + 0x4bc) * 4;
  uVar12 = 4;
LAB_7101e058e0:
  *(undefined4 *)(lVar10 + 0x470) = uVar12;
  return;
}

