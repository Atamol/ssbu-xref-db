// addr:      710148b020
// offset:    0x148b020
// name:      FUN_710148b020
// mangled:   
// signature: undefined __cdecl FUN_710148b020(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_710148b020(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  int *piVar9;
  uint *puVar10;
  long lVar11;
  long *plVar12;
  undefined4 local_98 [2];
  undefined **local_90;
  long local_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined **local_58;
  ulong local_50;
  undefined4 local_48;
  undefined1 local_44;
  undefined **local_40;
  ulong local_38;
  
  lVar8 = *(long *)(*(long *)(param_1 + 0x1f0) + 0x80);
  FUN_7103778300(0x3f800000,*(long *)(lVar8 + 0x20),0x71043adc2f);
  FUN_7103776640(&local_58,lVar8 + 0x18,(byte ****)"set_parts_event",param_3,param_4,param_5,param_6
                 ,param_7,param_8);
  FUN_7103776910(&local_40,(long)&local_58,(long ****)"set_txt_item",param_3,param_4,param_5,param_6
                 ,param_7,param_8);
  FUN_710377a120((long)&local_40,"mel_spirits_roulette_event_bonus",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  uVar6 = local_38;
  local_40 = &PTR_FUN_710523d9a8;
  local_38 = 0;
  if (uVar6 != 0) {
    FUN_710392eb40(uVar6);
  }
  uVar6 = local_50;
  FUN_7103778300(0x3f800000,local_50,0x7104421055);
  local_58 = &PTR_FUN_710523d988;
  local_50 = 0;
  if (uVar6 != 0) {
    uVar4 = *(ulong *)(uVar6 + 0x18);
    *(undefined ***)(uVar6 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar6 + 0x18) = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_710392eb40(uVar6);
  }
  local_50 = 0x56;
  local_48 = 5;
  local_58 = (undefined **)&DAT_7105069478;
  local_44 = 1;
  puVar10 = (uint *)*lib::Singleton<app::FighterManager>::instance_;
  if (0x56 < *puVar10) {
    uVar7 = puVar10[6] + 1;
    puVar10[6] = uVar7;
    plVar12 = *(long **)(*(long *)(puVar10 + 2) + 0x818);
    plVar1 = (long *)(*(long *)(puVar10 + 2) + 0x818);
    if (plVar1 != plVar12) {
      do {
        plVar5 = (long *)plVar12[2];
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x18))(plVar5,&local_58);
        }
        plVar12 = (long *)*plVar12;
      } while (plVar1 != plVar12);
      uVar7 = puVar10[6];
    }
    puVar10[6] = uVar7 - 1;
    if ((uVar7 - 1 == 0) && (puVar10[7] != 0)) {
      FUN_71037ae770(puVar10);
    }
  }
  *(undefined4 *)(param_1 + 0x208) = *(undefined4 *)(*DAT_7105329fa0 + 0x2a8);
  if ('\0' < *(char *)(*(long *)(*DAT_7105329f98 + 0x50) + 0xc)) {
    lVar11 = *(long *)(*(long *)(*DAT_7105329f98 + 0x50) + 0x150);
    *(undefined1 *)(lVar11 + 0x152) = 1;
    *(undefined2 *)(lVar11 + 0x154) = 0x101;
    FUN_71024a4c20(lVar11);
    lVar8 = *DAT_7105329fa0;
    *(undefined4 *)(lVar11 + 0x158) = *(undefined4 *)(lVar8 + 0x2ac);
    *(undefined4 *)(lVar11 + 0x15c) = *(undefined4 *)(lVar8 + 0x2b0);
  }
  if ((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
     (uVar6 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x11c82c7fb1,(long ****)&DAT_00000004,
                             param_4,param_5,param_6,param_7,param_8), (uVar6 & 1) != 0)) {
    FUN_71024076d0(local_98,0x11c82c7fb1);
    if (((local_88 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_80 == DAT_7106dd53ac)) {
      piVar9 = (int *)(local_88 + 0x38);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar9,0x10);
        if (bVar3) {
          *piVar9 = *piVar9 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
  }
  else {
    local_80 = 0x87650000000000;
    local_70 = 0xffffffffffffffff;
    uStack_68 = 0;
    local_98[0] = 0;
    local_60 = 0;
  }
  local_90 = &PTR_FUN_7104f73d50;
  local_88 = 0;
  local_78 = 0;
  if (0x12 < *(uint *)(param_1 + 0x1d4)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x1d4) * 4 + 0x188) = 9;
  return;
}

