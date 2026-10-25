// addr:      71019924a0
// offset:    0x19924a0
// name:      FUN_71019924a0
// mangled:   
// signature: undefined __cdecl FUN_71019924a0(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71019924a0(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  char *pcVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  undefined **local_e8;
  ulong local_e0;
  undefined **local_d8;
  long *local_d0;
  undefined4 local_c8 [2];
  undefined **local_c0;
  long local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  uint local_88 [2];
  undefined1 local_80 [64];
  
  local_80[0] = 0;
  local_88[0] = 0;
  local_88[1] = 0;
  uVar8 = (ulong)*(uint *)(*DAT_7105328160 + 0x204388);
  FUN_710062dc20(local_88,"battle_count_%d");
  lVar1 = param_1 + 8;
  FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x10),(long)local_80);
  if (*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') {
    uVar8 = 4;
    uVar6 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x1bcdec7bcb,(long ****)&DAT_00000004,
                           param_4,param_5,param_6,param_7,param_8);
    if ((uVar6 & 1) != 0) {
      FUN_71024076d0(local_c8,0x1bcdec7bcb);
      if (((local_b8 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_b0 == DAT_7106dd53ac)) {
        piVar9 = (int *)(local_b8 + 0x38);
        do {
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar3) {
            *piVar9 = *piVar9 + -1;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
      }
      goto LAB_71019925c4;
    }
  }
  local_b0 = 0x87650000000000;
  local_a0 = 0xffffffffffffffff;
  uStack_98 = 0;
  local_c8[0] = 0;
  local_90 = 0;
LAB_71019925c4:
  local_c0 = &PTR_FUN_7104f73d50;
  local_b8 = 0;
  local_a8 = 0;
  FUN_7103776640(&local_d8,lVar1,(byte ****)"set_btn_helptxt_00",uVar8,param_4,param_5,param_6,
                 param_7,param_8);
  plVar5 = local_d0;
  if ((*(long *)((long)local_d0 + 8) != 0) &&
     (lVar10 = *(long *)(*(long *)((long)local_d0 + 8) + 0x18), lVar10 != 0)) {
    *(byte *)(lVar10 + 0x58) = *(byte *)(lVar10 + 0x58) | 1;
  }
  local_d8 = &PTR_FUN_710523d988;
  local_d0 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    uVar6 = *(ulong *)((long)plVar5 + 0x18);
    *(undefined ***)((long)plVar5 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)plVar5 + 0x18) = 0;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
    FUN_710392eb40((ulong)plVar5);
  }
  *(undefined1 *)(param_1 + 0x1e8) = 1;
  uVar4 = 3 - *(int *)(*DAT_7105328160 + 0x204388);
  if ((int)uVar4 < 1) {
    FUN_7103776910(&local_d8,lVar1,(long ****)"set_txt_battle",uVar8,param_4,param_5,param_6,param_7
                   ,param_8);
    plVar5 = local_d0;
    lVar10 = *local_d0;
    if (lVar10 != 0) {
      *(byte *)(lVar10 + 0x58) = *(byte *)(lVar10 + 0x58) & 0xfe;
    }
    local_d8 = &PTR_FUN_710523d9a8;
    local_d0 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar5);
    }
    FUN_7101991290(param_1 + 0x1b0,6,uVar8,param_4,param_5,param_6,param_7,param_8);
    FUN_7103776640(&local_e8,lVar1,(byte ****)"set_btn_helptxt_00",uVar8,param_4,param_5,param_6,
                   param_7,param_8);
    FUN_7103776910(&local_d8,(long)&local_e8,(long ****)"set_txt_help",uVar8,param_4,param_5,param_6
                   ,param_7,param_8);
    pcVar7 = "mnu_amiibo_journey_result";
  }
  else {
    FUN_7103776910(&local_d8,lVar1,(long ****)"set_txt_battle",uVar8,param_4,param_5,param_6,param_7
                   ,param_8);
    uVar8 = (ulong)uVar4;
    FUN_710377a310((long)&local_d8,1);
    plVar5 = local_d0;
    local_d8 = &PTR_FUN_710523d9a8;
    local_d0 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar5);
    }
    FUN_7101991290(param_1 + 0x1b0,5,uVar8,param_4,param_5,param_6,param_7,param_8);
    FUN_7103776640(&local_e8,lVar1,(byte ****)"set_btn_helptxt_00",uVar8,param_4,param_5,param_6,
                   param_7,param_8);
    FUN_7103776910(&local_d8,(long)&local_e8,(long ****)"set_txt_help",uVar8,param_4,param_5,param_6
                   ,param_7,param_8);
    pcVar7 = "mnu_amiibo_journey_finish";
  }
  FUN_710377a120((long)&local_d8,pcVar7,uVar8,param_4,param_5,param_6,param_7,param_8);
  plVar5 = local_d0;
  local_d8 = &PTR_FUN_710523d9a8;
  local_d0 = (long *)0x0;
  if (plVar5 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar5);
  }
  uVar8 = local_e0;
  local_e8 = &PTR_FUN_710523d988;
  local_e0 = 0;
  if (uVar8 != 0) {
    uVar6 = *(ulong *)(uVar8 + 0x18);
    *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar8 + 0x18) = 0;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
    FUN_710392eb40(uVar8);
  }
  *(undefined1 *)(param_1 + 0x14c) = 1;
  return;
}

