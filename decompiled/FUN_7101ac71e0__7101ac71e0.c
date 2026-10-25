// addr:      7101ac71e0
// offset:    0x1ac71e0
// name:      FUN_7101ac71e0
// mangled:   
// signature: undefined __cdecl FUN_7101ac71e0(long param_1, undefined8 * param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101ac71e0(long param_1,undefined8 *param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  long lVar8;
  uint auStack_f0 [2];
  undefined1 auStack_e8 [64];
  undefined **local_a8;
  ulong local_a0;
  undefined **local_98;
  ulong local_90;
  undefined **local_88;
  ulong local_80 [8];
  
  FUN_7103776390(&local_98,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar1 = *(uint *)(**(long **)(param_1 + 0x300) + (long)*(int *)(param_1 + 0x2f8) * 0x3c0 + 0x300);
  if (uVar1 == 0xffffffff) goto LAB_7101ac73c0;
  lVar8 = *(long *)(DAT_710532f730 + 8);
  FUN_7103776910(&local_a8,param_1 + 0x2e0,(long ****)"set_txt_stagename",param_3,param_4,param_5,
                 param_6,param_7,param_8);
  if (uVar1 < 0x16c) {
    iVar4 = (&DAT_710454a7ec)[(long)(int)uVar1 * 0x12];
  }
  else {
    iVar4 = -1;
  }
  uVar2 = FUN_71032b24e0(lVar8 + 0x170,iVar4);
  FUN_71032b1a60((uint *)&local_88,*(long *)(lVar8 + 0x178),uVar2);
  FUN_71003a4ca0(auStack_f0,"nam_stg1_%s",local_80,uVar2,param_4,param_5,param_6,param_7,param_8);
  puVar7 = auStack_e8;
  uVar6 = 1;
  FUN_710377a280((long)&local_a8,(byte *)"mnu_replay_detail_stage_name",1);
  uVar2 = local_a0;
  local_a8 = &PTR_FUN_710523d9a8;
  local_a0 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  if (uVar1 < 0x16c) {
    if ((&DAT_710454a7f0)[(long)(int)uVar1 * 0x12] == 1) {
      FUN_7103778300(0x3f800000,local_90,0x710439d5c9);
      FUN_7103778300(0x3f800000,local_90,0x71043cf622);
      FUN_7103776910(&local_88,(long)&local_98,(long ****)"set_txt_tag",uVar6,puVar7,param_5,param_6
                     ,param_7,param_8);
      pcVar5 = "mnu_replay_detail_end";
    }
    else {
      if ((&DAT_710454a7f0)[(long)(int)uVar1 * 0x12] != 2) goto LAB_7101ac7348;
      FUN_7103778300(0x3f800000,local_90,0x710439d5c9);
      FUN_7103778300(0x3f800000,local_90,0x7104280b98);
      FUN_7103776910(&local_88,(long)&local_98,(long ****)"set_txt_tag",uVar6,puVar7,param_5,param_6
                     ,param_7,param_8);
      pcVar5 = "mnu_replay_detail_battlefield";
    }
    FUN_710377a120((long)&local_88,pcVar5,uVar6,puVar7,param_5,param_6,param_7,param_8);
    uVar2 = local_80[0];
    local_88 = &PTR_FUN_710523d9a8;
    local_80[0] = 0;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
  }
  else {
LAB_7101ac7348:
    FUN_7103778300(0x3f800000,local_90,0x710438cc37);
  }
LAB_7101ac73c0:
  uVar2 = local_90;
  local_98 = &PTR_FUN_710523d988;
  local_90 = 0;
  if (uVar2 != 0) {
    uVar3 = *(ulong *)(uVar2 + 0x18);
    *(undefined ***)(uVar2 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar2 + 0x18) = 0;
    if (uVar3 != 0) {
      FUN_710392eb40(uVar3);
    }
    FUN_710392eb40(uVar2);
  }
  return;
}

