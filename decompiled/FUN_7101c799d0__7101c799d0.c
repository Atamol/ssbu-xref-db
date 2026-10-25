// addr:      7101c799d0
// offset:    0x1c799d0
// name:      FUN_7101c799d0
// mangled:   
// signature: undefined __cdecl FUN_7101c799d0(long param_1, long param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101c799d0(long param_1,long param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  ulong uVar6;
  long extraout_x1;
  long extraout_x1_00;
  char *pcVar7;
  long extraout_x1_01;
  long extraout_x1_02;
  long lVar8;
  long ****pppplVar9;
  byte ****ppppbVar10;
  int *piVar11;
  undefined4 local_90 [2];
  undefined **local_88;
  long local_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined **local_50;
  ulong local_48;
  undefined **local_40;
  ulong local_38;
  
  lVar8 = param_2;
  if (*(int *)(param_1 + 0xec) == 0) {
    (**(code **)(**(long **)(param_1 + 0x118) + 0x70))(*(long **)(param_1 + 0x118),1);
    (**(code **)(**(long **)(param_1 + 0x120) + 0x70))(*(long **)(param_1 + 0x120),0);
    FUN_7103776640(&local_40,param_1 + 0x108,(byte ****)"set_parts_txt_head_00",param_3,param_4,
                   param_5,param_6,param_7,param_8);
    uVar6 = local_38;
    FUN_7103778630(0,local_38,0x7104421055);
    local_40 = &PTR_FUN_710523d988;
    local_38 = 0;
    lVar8 = extraout_x1;
    if (uVar6 != 0) {
      uVar5 = *(ulong *)(uVar6 + 0x18);
      *(undefined ***)(uVar6 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar6 + 0x18) = 0;
      if (uVar5 != 0) {
        FUN_710392eb40(uVar5);
      }
      FUN_710392eb40(uVar6);
      lVar8 = extraout_x1_00;
    }
  }
  uVar2 = *(uint *)(*(long *)(param_1 + 0x118) + 0x25c);
  if (uVar2 != 0xffffffff) {
    *(uint *)(param_1 + 0x170) = uVar2;
    if (uVar2 < 6) {
      ppppbVar10 = (byte ****)0x1;
      pppplVar9 = (long ****)0x0;
      FUN_7103783c10((long *)(param_1 + 0x120),
                     (uint)*(byte *)(*(long *)(param_1 + 0x10) + (long)(int)uVar2 + 0xd15),0,1,
                     param_5,param_6,param_7,param_8);
      FUN_7101c79d10(param_1,uVar2,pppplVar9,ppppbVar10,param_5,param_6,param_7,param_8);
      if (*(int *)(param_1 + 0xe4) < 0x12) {
        uVar1 = *(int *)(param_1 + 0xe4) + 1;
        *(uint *)(param_1 + 0xe4) = uVar1;
        if (0x12 < uVar1) goto LAB_7101c79d0c;
        *(undefined4 *)(param_1 + (long)(int)uVar1 * 4 + 0x98) = 2;
        if (*(int *)(param_1 + 0xe4) < 0x12) {
          uVar1 = *(int *)(param_1 + 0xe4) + 1;
          *(uint *)(param_1 + 0xe4) = uVar1;
          if (0x12 < uVar1) goto LAB_7101c79d0c;
          *(undefined4 *)(param_1 + (long)(int)uVar1 * 4 + 0x98) = 3;
        }
      }
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x110),0x7104318ef7);
      FUN_7103776640(&local_40,param_1 + 0x108,(byte ****)"set_parts_txt_head_00",pppplVar9,
                     ppppbVar10,param_5,param_6,param_7,param_8);
      uVar5 = local_38;
      FUN_7103778630(0,local_38,0x7104421055);
      FUN_7103776910(&local_50,(long)&local_40,(long ****)"set_txt_scene",pppplVar9,ppppbVar10,
                     param_5,param_6,param_7,param_8);
      uVar6 = local_48;
      if (*(long *)(local_48 + 0x10) != 0) {
        *(undefined1 *)(*(long *)(local_48 + 0x10) + 0x27c) = 1;
      }
      local_50 = &PTR_FUN_710523d9a8;
      local_48 = 0;
      if (uVar6 != 0) {
        FUN_710392eb40(uVar6);
      }
      FUN_7103776910(&local_50,(long)&local_40,(long ****)"set_txt_scene",pppplVar9,ppppbVar10,
                     param_5,param_6,param_7,param_8);
      if (uVar2 - 1 < 5) {
        pcVar7 = (&PTR_s_mnu_online_room_inside_chat_sort_71050ad8d0)[(int)(uVar2 - 1)];
      }
      else {
        pcVar7 = "mnu_online_room_inside_chat_sort_all";
      }
      FUN_710377a120((long)&local_50,pcVar7,pppplVar9,ppppbVar10,param_5,param_6,param_7,param_8);
      uVar6 = local_48;
      local_50 = &PTR_FUN_710523d9a8;
      local_48 = 0;
      if (uVar6 != 0) {
        FUN_710392eb40(uVar6);
      }
      local_40 = &PTR_FUN_710523d988;
      local_38 = 0;
      if (uVar5 == 0) {
        return;
      }
      uVar6 = *(ulong *)(uVar5 + 0x18);
      *(undefined ***)(uVar5 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar5 + 0x18) = 0;
      if (uVar6 != 0) {
        FUN_710392eb40(uVar6);
      }
      FUN_710392eb40(uVar5);
      return;
    }
LAB_7101c79d0c:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (*(char *)(*(long *)(param_1 + 0x118) + 0x280) == '\0') {
    if (*(char *)(*(long *)(param_2 + 8) + 0x4aa) == '\0') {
      return;
    }
    if ((*(byte *)(*(long *)(param_2 + 8) + 0x200) >> 1 & 1) == 0) {
      return;
    }
  }
  if (*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') {
    param_3 = (long ****)&DAT_00000004;
    uVar6 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x13c06f8281,(long ****)&DAT_00000004,
                           param_4,param_5,param_6,param_7,param_8);
    lVar8 = extraout_x1_01;
    if ((uVar6 & 1) != 0) {
      FUN_71024076d0(local_90,0x13c06f8281);
      lVar8 = extraout_x1_02;
      if (((local_80 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_78 == DAT_7106dd53ac)) {
        piVar11 = (int *)(local_80 + 0x38);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar4) {
            *piVar11 = *piVar11 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
      }
      goto LAB_7101c79cd0;
    }
  }
  local_78 = 0x87650000000000;
  local_68 = 0xffffffffffffffff;
  uStack_60 = 0;
  local_90[0] = 0;
  local_58 = 0;
LAB_7101c79cd0:
  local_88 = &PTR_FUN_7104f73d50;
  local_80 = 0;
  local_70 = 0;
  FUN_7101c7a3b0(param_1,lVar8,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}

