// addr:      7101e95dd0
// offset:    0x1e95dd0
// name:      FUN_7101e95dd0
// mangled:   
// signature: undefined __cdecl FUN_7101e95dd0(long * param_1, ushort param_2, long * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101e95dd0(long *param_1,ushort param_2,long *param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ushort uVar1;
  ulong uVar2;
  long *plVar3;
  char *pcVar4;
  long *********ppppppppplVar5;
  long lVar6;
  long lVar7;
  uint auStack_d0 [2];
  char acStack_c8 [64];
  uint auStack_88 [2];
  undefined1 auStack_80 [64];
  
  lVar6 = *DAT_7105329fa0;
  *(undefined4 *)((long)param_1 + 0x14) = *(undefined4 *)(lVar6 + 0x770);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(lVar6 + 0x774);
  if (param_2 == 0xffff) goto LAB_7101e95edc;
  lVar7 = *(long *)(DAT_710532f730 + 8);
  lVar6 = *(long *)(lVar7 + 0x208);
  plVar3 = param_3;
  uVar2 = FUN_71032a7070(lVar6);
  uVar2 = FUN_71032a3bd0(lVar6,(uint)uVar2 & 0xff);
  if ((uVar2 & 0xff00000000000000) == 0x5200000000000000 && (uVar2 & 0xffffffffff) != 0) {
    uVar1 = FUN_71032a5750(*(long *)(lVar7 + 0x208),uVar2);
    if (uVar1 == param_2) goto LAB_7101e95ec8;
LAB_7101e95e64:
    lVar6 = *(long *)(lVar7 + 0x1d8);
    plVar3 = (long *)FUN_71032a9470(lVar6,param_2);
    FUN_71032a9540(auStack_88,lVar6,(ulong)plVar3);
    FUN_71003a4ca0(auStack_d0,"spi_%s",auStack_80,plVar3,param_4,param_5,param_6,param_7,param_8);
    lVar6 = *param_1;
    pcVar4 = acStack_c8;
  }
  else {
    if (param_2 != 0xffff) goto LAB_7101e95e64;
LAB_7101e95ec8:
    lVar6 = *param_1;
    pcVar4 = "cam_school4_taller_name";
  }
  FUN_710377a120(lVar6 + 0x20,pcVar4,plVar3,param_4,param_5,param_6,param_7,param_8);
LAB_7101e95edc:
  uVar2 = FUN_71032a9470(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8),param_2);
  ppppppppplVar5 = (long *********)&DAT_0000001a;
  plVar3 = FUN_710323faf0(param_3,uVar2,(undefined **)&DAT_0000001a,param_4,param_5,param_6,param_7,
                          param_8);
  FUN_7103778b80(*(long *)(*param_1 + 0x38),(long)plVar3,ppppppppplVar5,param_4,param_5,param_6,
                 param_7,param_8);
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

