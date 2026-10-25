// addr:      7100220490
// offset:    0x220490
// name:      FUN_7100220490
// mangled:   
// signature: undefined __cdecl FUN_7100220490(undefined4 * param_1, long param_2, char * param_3, char * param_4)


void FUN_7100220490(undefined4 *param_1,long param_2,char *param_3,char *param_4)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  undefined4 local_214;
  long local_210;
  undefined **local_208;
  undefined1 local_200 [16];
  undefined1 *local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  char *local_1d8;
  undefined **local_b8;
  undefined1 local_b0 [16];
  undefined1 *local_a0;
  undefined8 uStack_98;
  undefined **local_90;
  undefined1 local_88 [16];
  undefined1 *local_78;
  undefined8 uStack_70;
  
  (**(code **)(*(long *)(param_2 + 0x1b8) + 0x10))(param_2 + 0x1b8);
  local_78 = local_88;
  local_88[0] = 0;
  uStack_70 = 0x10;
  local_90 = &PTR_FUN_710509cc08;
  FUN_71001b47e0((long)&local_90,param_3,-1);
  local_a0 = local_b0;
  uStack_98 = 0x10;
  local_b0[0] = 0;
  local_b8 = &PTR_FUN_710509cc08;
  FUN_71001b47e0((long)&local_b8,param_4,-1);
  FUN_71001b6080(&uStack_1e0);
  lVar2 = FUN_71001b5d60((long)&uStack_1e0,(long)&local_90);
  lVar2 = FUN_71001b0ab0(lVar2,": ");
  FUN_71001b5d60(lVar2,(long)&local_b8);
  iVar1 = strcmp(param_3,"expect");
  if (iVar1 == 0) {
    *(undefined1 *)(param_2 + 0x210) = 1;
  }
  local_1f0 = local_200;
  local_200[0] = 0;
  local_1e8 = 0x10;
  local_208 = &PTR_FUN_710509cc08;
  FUN_71001b47e0((long)&local_208,local_1d8,-1);
  local_210 = 0;
  FUN_71001b2b10((long)&local_208,&local_210);
  plVar3 = FUN_7100016c00(*(long **)(param_2 + 0x180));
  *(long **)(param_2 + 0x180) = plVar3;
  FUN_71001b2bf0(local_210);
  local_214 = 0x10001;
  FUN_71001b4200(param_1,&local_214);
  local_208 = &PTR_FUN_710509cc08;
  FUN_71001b4910((long)&local_208);
  FUN_71001b60c0(&uStack_1e0);
  local_b8 = &PTR_FUN_710509cc08;
  FUN_71001b4910((long)&local_b8);
  local_90 = &PTR_FUN_710509cc08;
  FUN_71001b4910((long)&local_90);
  (**(code **)(*(long *)(param_2 + 0x1b8) + 0x20))(param_2 + 0x1b8);
  return;
}

