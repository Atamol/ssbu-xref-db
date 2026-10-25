// addr:      7101cd16d0
// offset:    0x1cd16d0
// name:      FUN_7101cd16d0
// mangled:   
// signature: undefined __cdecl FUN_7101cd16d0(long param_1, long param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101cd16d0(long param_1,long param_2,undefined8 param_3,undefined8 param_4,long ****param_5
                   ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined **local_50;
  ulong local_48;
  
  lVar7 = **(long **)(param_1 + 0x100);
  lVar1 = lVar7 + 8;
  FUN_7103776910(&local_50,lVar1,(long ****)"set_txt_00",param_3,param_4,param_5,param_6,param_7,
                 param_8);
  lVar6 = param_2 + 8;
  uVar4 = 1;
  lVar5 = lVar6;
  FUN_710377a280((long)&local_50,(byte *)"mnu_share_upload_confirm",1);
  uVar3 = local_48;
  local_50 = &PTR_FUN_710523d9a8;
  local_48 = 0;
  if (uVar3 != 0) {
    FUN_710392eb40(uVar3);
  }
  FUN_7103776910(&local_50,lVar1,(long ****)"set_txt_progress",uVar4,lVar5,param_5,param_6,param_7,
                 param_8);
  uVar4 = 1;
  FUN_710377a280((long)&local_50,(byte *)"mnu_share_pop_uploading",1);
  uVar3 = local_48;
  local_50 = &PTR_FUN_710523d9a8;
  local_48 = 0;
  if (uVar3 != 0) {
    FUN_710392eb40(uVar3);
  }
  FUN_7103778760(*(long *)(lVar7 + 0x10),0x710438cbd1);
  plVar2 = (long *)(param_1 + 0x108);
  FUN_7103771e50(&local_50,plVar2,0,uVar4,lVar6,param_5,param_6,param_7,param_8);
  FUN_710377a120((long)&local_50,"pop_btn_quit",uVar4,lVar6,param_5,param_6,param_7,param_8);
  uVar3 = local_48;
  local_50 = &PTR_FUN_710523d9a8;
  local_48 = 0;
  if (uVar3 != 0) {
    FUN_710392eb40(uVar3);
  }
  FUN_7103771e50(&local_50,plVar2,1,uVar4,lVar6,param_5,param_6,param_7,param_8);
  FUN_710377a120((long)&local_50,"pop_btn_upload",uVar4,lVar6,param_5,param_6,param_7,param_8);
  uVar3 = local_48;
  local_50 = &PTR_FUN_710523d9a8;
  local_48 = 0;
  if (uVar3 != 0) {
    FUN_710392eb40(uVar3);
  }
  FUN_7103771a80(plVar2,0,1);
  *(undefined2 *)(param_1 + 0x134) = 1;
  return;
}

