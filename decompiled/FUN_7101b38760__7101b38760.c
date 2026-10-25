// addr:      7101b38760
// offset:    0x1b38760
// name:      FUN_7101b38760
// mangled:   
// signature: undefined __cdecl FUN_7101b38760(int param_1, long param_2, ulong * param_3, ulong param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101b38760(int param_1,long param_2,ulong *param_3,ulong param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  long *plVar10;
  undefined **local_50;
  long *local_48;
  
  uVar4 = (uint)param_4;
  puVar6 = param_3;
  if ((param_1 == 4) && ((param_4 & 1) != 0)) goto LAB_7101b38980;
  FUN_7103776ad0(&local_50,param_2,(long ****)"set_parts_btn_stage",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  lVar9 = *(long *)(DAT_710532f730 + 8);
  uVar7 = *param_3;
  uVar5 = FUN_71032b23e0(*(long *)(*(long *)(lVar9 + 0x178) + 8),0x116b904091);
  if (((uVar7 & 0xff00000000000000) == 0x6900000000000000) &&
     (((uVar7 & 0xffffffffff) != 0 &&
      ((uVar5 & 0xff00000000000000) == 0x6900000000000000 && (uVar5 & 0xffffffffff) != 0)))) {
    if (((uVar5 ^ uVar7) & 0xffffffffff) == 0) goto LAB_7101b38854;
LAB_7101b38844:
    bVar1 = FUN_71032b4980(lVar9 + 0x170,uVar7);
    if (bVar1) goto LAB_7101b38854;
    plVar8 = local_48;
    if (((long *)*local_48 != (long *)0x0) &&
       (uVar3 = (**(code **)(*(long *)*local_48 + 0x200))(), ((uVar3 ^ uVar4) & 1) != 0)) {
      plVar10 = (long *)*local_48;
      uVar3 = uVar4;
      goto joined_r0x007101b388a4;
    }
  }
  else {
    if (((uVar5 & 0xffffffffff) != 0 && (uVar5 & 0xff00000000000000) == 0x6900000000000000) !=
        ((uVar7 & 0xff00000000000000) == 0x6900000000000000 && (uVar7 & 0xffffffffff) != 0))
    goto LAB_7101b38844;
LAB_7101b38854:
    plVar8 = local_48;
    if (((long *)*local_48 != (long *)0x0) &&
       (uVar5 = (**(code **)(*(long *)*local_48 + 0x200))(), (uVar5 & 1) != 0)) {
      uVar3 = 0;
      plVar10 = (long *)*local_48;
joined_r0x007101b388a4:
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x1f8))(plVar10,uVar3 & 1);
        uVar5 = (**(code **)(*plVar10 + 0x200))(plVar10);
        if ((uVar5 & 1) == 0) {
          uVar2 = 1;
        }
        else {
          uVar2 = (**(code **)(*plVar10 + 0x210))(plVar10);
          uVar2 = uVar2 ^ 1;
        }
        puVar6 = (ulong *)0x0;
        (**(code **)(*plVar10 + 0x388))(plVar10,uVar2 & 1);
        plVar10 = (long *)*plVar8;
        if (plVar10 != (long *)0x0) {
          (**(code **)(*plVar10 + 0x208))(plVar10,uVar3 & 1);
          uVar5 = (**(code **)(*plVar10 + 0x200))(plVar10);
          if ((uVar5 & 1) == 0) {
            uVar3 = 1;
          }
          else {
            uVar3 = (**(code **)(*plVar10 + 0x210))(plVar10);
            uVar3 = uVar3 ^ 1;
          }
          puVar6 = (ulong *)0x0;
          (**(code **)(*plVar10 + 0x388))(plVar10,uVar3 & 1);
        }
      }
    }
  }
  local_50 = &PTR_FUN_710523d9c8;
  local_48 = (long *)0x0;
  if (plVar8 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar8);
  }
LAB_7101b38980:
  FUN_7103776ad0(&local_50,param_2,(long ****)"set_parts_btn_music",puVar6,param_4,param_5,param_6,
                 param_7,param_8);
  plVar8 = local_48;
  if (((long *)*local_48 == (long *)0x0) ||
     (uVar3 = (**(code **)(*(long *)*local_48 + 0x200))(), ((uVar3 ^ uVar4) & 1) == 0)) {
    if (plVar8 == (long *)0x0) {
      return;
    }
  }
  else {
    plVar10 = (long *)*plVar8;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x1f8))(plVar10,uVar4 & 1);
      uVar5 = (**(code **)(*plVar10 + 0x200))(plVar10);
      if ((uVar5 & 1) == 0) {
        uVar3 = 1;
      }
      else {
        uVar3 = (**(code **)(*plVar10 + 0x210))(plVar10);
        uVar3 = uVar3 ^ 1;
      }
      (**(code **)(*plVar10 + 0x388))(plVar10,uVar3 & 1,0);
      plVar10 = (long *)*plVar8;
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x208))(plVar10,uVar4 & 1);
        uVar5 = (**(code **)(*plVar10 + 0x200))(plVar10);
        if ((uVar5 & 1) == 0) {
          uVar4 = 1;
        }
        else {
          uVar4 = (**(code **)(*plVar10 + 0x210))(plVar10);
          uVar4 = uVar4 ^ 1;
        }
        (**(code **)(*plVar10 + 0x388))(plVar10,uVar4 & 1,0);
      }
    }
  }
  local_48 = (long *)0x0;
  local_50 = &PTR_FUN_710523d9c8;
  FUN_710392eb40((ulong)plVar8);
  return;
}

