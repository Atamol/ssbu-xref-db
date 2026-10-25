// addr:      71024fcba0
// offset:    0x24fcba0
// name:      FUN_71024fcba0
// mangled:   
// signature: undefined __cdecl FUN_71024fcba0(long param_1, ulong param_2, ulong param_3, ulong param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71024fcba0(long param_1,ulong param_2,ulong param_3,ulong param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  long *plVar2;
  char *pcVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined **local_40;
  long *local_38;
  
  uVar1 = (uint)param_3 & 1;
  uVar4 = param_3;
  uVar5 = param_4;
  if ((*(char *)(param_1 + 0x5d9) == '\0') && ((param_2 & 1) != 0)) {
    *(undefined1 *)(param_1 + 0x5d9) = 1;
    *(undefined4 *)(param_1 + 0x5c8) = 0;
    FUN_7103776910(&local_40,*(long *)(*(long *)(param_1 + 0x558) + 0x80) + 0x30,
                   (long ****)"keyhelp",param_3,param_4,param_5,param_6,param_7,param_8);
    plVar2 = local_38;
    lVar6 = *local_38;
    if (lVar6 != 0) {
      *(byte *)(lVar6 + 0x58) = *(byte *)(lVar6 + 0x58) | 1;
    }
    local_40 = &PTR_FUN_710523d9a8;
    local_38 = (long *)0x0;
    if (plVar2 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar2);
    }
  }
  if (*(byte *)(param_1 + 0x5da) != uVar1) {
    *(char *)(param_1 + 0x5da) = (char)uVar1;
    lVar7 = *(long *)(*(long *)(param_1 + 0x558) + 0x80);
    lVar6 = *(long *)(lVar7 + 0x38);
    if ((param_3 & 1) == 0) {
      FUN_7103778300(0x3f800000,lVar6,0x7104423056);
      pcVar3 = "cam_info_zoom";
    }
    else {
      FUN_7103778300(0x3f800000,lVar6,0x7104309252);
      pcVar3 = "cam_info_return_short";
    }
    FUN_710377a120(lVar7 + 0x170,pcVar3,uVar4,uVar5,param_5,param_6,param_7,param_8);
  }
  if (((uint)*(byte *)(param_1 + 0x5db) != ((uint)param_4 & 1)) &&
     (*(byte *)(param_1 + 0x5db) = (byte)param_4 & 1, *(char *)(param_1 + 0x5da) != '\0')) {
    if ((param_4 & 1) == 0) {
      pcVar3 = "cam_info_return_short";
    }
    else {
      pcVar3 = "cam_info_zoom";
    }
    FUN_710377a120(*(long *)(*(long *)(param_1 + 0x558) + 0x80) + 0x170,pcVar3,uVar4,uVar5,param_5,
                   param_6,param_7,param_8);
    return;
  }
  return;
}

