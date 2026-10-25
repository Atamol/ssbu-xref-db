// addr:      7101d6f820
// offset:    0x1d6f820
// name:      FUN_7101d6f820
// mangled:   
// signature: undefined __cdecl FUN_7101d6f820(undefined8 * param_1, ulong param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101d6f820(undefined8 *param_1,ulong param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  ulong uVar2;
  int iVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined ***pppuVar8;
  char *pcVar9;
  long *********ppppppppplVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined **local_50;
  ulong local_48;
  undefined **local_40;
  ulong local_38;
  
  if (*(char *)(param_1 + 0x6c) == '\0') {
    return;
  }
  if (((param_2 & 1) != 0) &&
     (iVar3 = *(int *)(param_1 + 0x8c), iVar1 = iVar3 + -1, *(int *)(param_1 + 0x8c) = iVar1,
     iVar1 != 0 && 0 < iVar3)) {
    return;
  }
  lVar12 = *(long *)param_1[0x38];
  FUN_7101d85c90((long)(param_1 + 0x43),(char *)(param_1 + 0x71),param_3,param_4,param_5,param_6,
                 param_7,param_8);
  if (*(long *)(param_1[0x44] + 8) != 0) {
    puVar11 = *(undefined8 **)(*(long *)(param_1[0x44] + 8) + 0x78);
    if (((DAT_710593ba40 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_710593ba40), iVar3 != 0)) {
      if (((DAT_710593ba48 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_710593ba48), iVar3 != 0))
      {
        DAT_710593ba50 = 0;
        __cxa_guard_release(&DAT_710593ba48);
      }
      DAT_710593ba58 = &DAT_710593ba50;
      __cxa_guard_release(&DAT_710593ba40);
    }
    if (puVar11 != (undefined8 *)0x0) {
      for (puVar4 = (undefined8 *)(**(code **)*puVar11)(puVar11); puVar4 != (undefined8 *)0x0;
          puVar4 = (undefined8 *)*puVar4) {
        if ((undefined8 **)puVar4 == &DAT_710593ba58) {
          lVar6 = puVar11[3];
          *(undefined4 *)(puVar11 + 0xb) = *(undefined4 *)((long)puVar11 + 0x54);
          if (lVar6 != 0) {
            *(undefined4 *)(lVar6 + 0x30) = *(undefined4 *)((long)puVar11 + 0x54);
            *(byte *)(lVar6 + 0x58) = *(byte *)(lVar6 + 0x58) | 0x10;
          }
          lVar6 = puVar11[4];
          if (lVar6 != 0) {
            *(undefined4 *)(lVar6 + 0x30) = *(undefined4 *)(puVar11 + 0xb);
            *(byte *)(lVar6 + 0x58) = *(byte *)(lVar6 + 0x58) | 0x10;
          }
          if ((long *)puVar11[5] != (long *)0x0) {
            (**(code **)(*(long *)puVar11[5] + 0x180))(0);
          }
          plVar5 = (long *)puVar11[6];
          if (plVar5 != (long *)0x0) {
            if (*(char *)((long)puVar11 + 99) == '\0') {
              (**(code **)(*plVar5 + 0x180))(0);
            }
            else {
              (**(code **)(*plVar5 + 400))();
            }
          }
          *(undefined2 *)((long)puVar11 + 100) = 0;
          break;
        }
      }
    }
  }
  *(undefined4 *)(param_1 + 0x8d) = 0;
  FUN_7101d85c90((long)(param_1 + 0x45),(char *)(param_1 + 0x7a),param_3,param_4,param_5,param_6,
                 param_7,param_8);
  if (*(long *)(param_1[0x46] + 8) != 0) {
    puVar11 = *(undefined8 **)(*(long *)(param_1[0x46] + 8) + 0x78);
    if (((DAT_710593ba40 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_710593ba40), iVar3 != 0)) {
      if (((DAT_710593ba48 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_710593ba48), iVar3 != 0))
      {
        DAT_710593ba50 = 0;
        __cxa_guard_release(&DAT_710593ba48);
      }
      DAT_710593ba58 = &DAT_710593ba50;
      __cxa_guard_release(&DAT_710593ba40);
    }
    if (puVar11 != (undefined8 *)0x0) {
      for (puVar4 = (undefined8 *)(**(code **)*puVar11)(puVar11); puVar4 != (undefined8 *)0x0;
          puVar4 = (undefined8 *)*puVar4) {
        if ((undefined8 **)puVar4 == &DAT_710593ba58) {
          lVar6 = puVar11[3];
          *(undefined4 *)(puVar11 + 0xb) = *(undefined4 *)((long)puVar11 + 0x54);
          if (lVar6 != 0) {
            *(undefined4 *)(lVar6 + 0x30) = *(undefined4 *)((long)puVar11 + 0x54);
            *(byte *)(lVar6 + 0x58) = *(byte *)(lVar6 + 0x58) | 0x10;
          }
          lVar6 = puVar11[4];
          if (lVar6 != 0) {
            *(undefined4 *)(lVar6 + 0x30) = *(undefined4 *)(puVar11 + 0xb);
            *(byte *)(lVar6 + 0x58) = *(byte *)(lVar6 + 0x58) | 0x10;
          }
          if ((long *)puVar11[5] != (long *)0x0) {
            (**(code **)(*(long *)puVar11[5] + 0x180))(0);
          }
          plVar5 = (long *)puVar11[6];
          if (plVar5 != (long *)0x0) {
            if (*(char *)((long)puVar11 + 99) == '\0') {
              (**(code **)(*plVar5 + 0x180))(0);
            }
            else {
              (**(code **)(*plVar5 + 400))();
            }
          }
          *(undefined2 *)((long)puVar11 + 100) = 0;
          break;
        }
      }
    }
  }
  *(undefined4 *)((long)param_1 + 0x46c) = 0;
  plVar5 = *(long **)(param_1[0x4c] + 0x10);
  if (*(int *)(param_1 + 0x8b) == 0) {
    if (plVar5 == (long *)0x0) goto LAB_7101d6fa70;
    pppuVar8 = &local_40;
    param_3 = 0;
    param_4 = (byte ****)0x0;
    local_40 = (undefined **)((ulong)local_40 & 0xffffffff00000000);
  }
  else {
    if (plVar5 == (long *)0x0) goto LAB_7101d6fa70;
    pppuVar8 = (undefined ***)param_1[0x8a];
    param_3 = 0xffffffff;
    param_4 = (byte ****)0x1;
  }
  FUN_71037a2270(plVar5,(ushort *)pppuVar8,(uint)param_3,(ulong)param_4);
LAB_7101d6fa70:
  if (*(char *)((long)param_1 + 0x35d) == '\0') {
    pcVar9 = "list_source_on";
    if (*(int *)(param_1 + 0x52) != 1) {
      pcVar9 = "ser_source_on";
    }
    FUN_7103778300(0x3f800000,*(long *)(lVar12 + 0x10),(long)pcVar9);
    *(undefined1 *)((long)param_1 + 0x35d) = 1;
  }
  if (*(int *)((long)param_1 + 0x374) == 3) {
    lVar6 = *(long *)(lVar12 + 0x10);
    pcVar9 = "new_arrange";
  }
  else if (*(int *)((long)param_1 + 0x374) == 2) {
    lVar6 = *(long *)(lVar12 + 0x10);
    pcVar9 = "arrange";
  }
  else {
    lVar6 = *(long *)(lVar12 + 0x10);
    pcVar9 = "arrange_off";
  }
  FUN_7103778300(0x3f800000,lVar6,(long)pcVar9);
  FUN_7101d6fd00(param_1);
  FUN_7103778300(0x3f800000,*(long *)(lVar12 + 0x10),0x710437c8ec);
  if (*(int *)(param_1 + 0x52) == 1) {
    lVar6 = *(long *)(DAT_710532f730 + 8);
    uVar7 = FUN_710325dd40(*(long *)(lVar6 + 0x278),param_1[0x6d]);
    uVar7 = FUN_710327c470(*(long *)(lVar6 + 0x2b8),uVar7);
    FUN_7103776640(&local_40,lVar12 + 8,(byte ****)"set_parts_btn_list_sc",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    FUN_7103776910(&local_50,(long)&local_40,(long ****)"set_rep_ser_pic",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    ppppppppplVar10 = (long *********)&DAT_00000011;
    plVar5 = FUN_710323f600((long *)param_1[0x37],uVar7,(long ****)&DAT_00000011,param_4,param_5,
                            param_6,param_7,param_8);
    uVar7 = local_48;
    FUN_7103778b80(local_48,(long)plVar5,ppppppppplVar10,param_4,param_5,param_6,param_7,param_8);
    uVar2 = local_38;
    FUN_7103778300(0x3f800000,local_38,0x710434a6fa);
    lVar12 = *(long *)(lVar12 + 0x10);
    if (*(char *)((long)param_1 + 0x35c) == '\0') {
      FUN_7103778760(lVar12,0x7104454df9);
    }
    else {
      FUN_7103778300(0x3f800000,lVar12,0x7104454df9);
      *(undefined1 *)((long)param_1 + 0x35c) = 0;
    }
    local_50 = &PTR_FUN_710523d9a8;
    local_48 = 0;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
    local_40 = &PTR_FUN_710523d988;
    local_38 = 0;
    if (uVar2 != 0) {
      uVar7 = *(ulong *)(uVar2 + 0x18);
      *(undefined ***)(uVar2 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar2 + 0x18) = 0;
      if (uVar7 != 0) {
        FUN_710392eb40(uVar7);
      }
      FUN_710392eb40(uVar2);
    }
  }
  *(undefined1 *)(param_1 + 0x6c) = 0;
  return;
}

