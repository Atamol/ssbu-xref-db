// addr:      7101b163b0
// offset:    0x1b163b0
// name:      FUN_7101b163b0
// mangled:   
// signature: undefined __cdecl FUN_7101b163b0(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101b163b0(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 uVar4;
  undefined8 extraout_x1_02;
  undefined1 auVar5 [16];
  undefined **local_40;
  long *local_38;
  
  if (*(int *)(param_1 + 0xbc) != 0) {
    lVar1 = *(long *)(*(long *)(param_1 + 0xe0) + 8);
    if (((lVar1 != 0) &&
        (plVar2 = (long *)FUN_71037964b0(lVar1,0x7104339d2f), plVar2 != (long *)0x0)) &&
       (uVar3 = (**(code **)(*plVar2 + 0x138))(), (uVar3 & 1) == 0)) {
      return;
    }
    FUN_7103776640(&local_40,param_1 + 0xd8,(byte ****)"set_parts_spirit",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    FUN_71025af650((long)&local_40,extraout_x1,param_3,param_4,param_5,param_6,param_7,param_8);
    plVar2 = local_38;
    if (*(uint *)(param_1 + 0xb4) < 0x13) {
      *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0xb4) * 4 + 0x68) = 0;
      local_40 = &PTR_FUN_710523d988;
      local_38 = (long *)0x0;
      if (plVar2 == (long *)0x0) {
        return;
      }
      uVar3 = plVar2[3];
      plVar2[2] = (long)&PTR_FUN_710523d9a8;
      plVar2[3] = 0;
      if (uVar3 != 0) {
        FUN_710392eb40(uVar3);
      }
      FUN_710392eb40((ulong)plVar2);
      return;
    }
LAB_7101b16510:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if ((*(char *)(param_1 + 0x11c) == '\0') && (1 < *(int *)(param_1 + 0x13c) - 3U)) {
    param_3 = 1;
    uVar3 = 1;
    FUN_7103771d60(&local_40,*(long *)(param_1 + 0x140),(long ****)0x1,param_4,param_5,param_6,
                   param_7,param_8);
    plVar2 = local_38;
    uVar4 = extraout_x1_00;
    if ((long *)*local_38 != (long *)0x0) {
      auVar5 = (**(code **)(*(long *)*local_38 + 0x210))();
      uVar4 = auVar5._8_8_;
      uVar3 = auVar5._0_8_ & 0xffffffff;
    }
    local_40 = &PTR_FUN_710523d9c8;
    local_38 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar2);
      uVar4 = extraout_x1_01;
    }
    if ((uVar3 & 1) != 0) {
      if (0x12 < *(uint *)(param_1 + 0xb4)) goto LAB_7101b16510;
      *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0xb4) * 4 + 0x68) = 0;
      goto LAB_7101b164f4;
    }
  }
  FUN_7103778300(0x3f800000,*(long *)(param_1 + 0xe0),0x7104339d2f);
  uVar4 = extraout_x1_02;
LAB_7101b164f4:
  FUN_7101b16520(param_1,uVar4,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}

