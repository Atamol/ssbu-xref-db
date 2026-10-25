// addr:      7101cd6f50
// offset:    0x1cd6f50
// name:      FUN_7101cd6f50
// mangled:   
// signature: undefined __cdecl FUN_7101cd6f50(long param_1, long param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101cd6f50(long param_1,long param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  char *pcVar5;
  undefined **local_68;
  undefined8 *local_60;
  undefined **local_58;
  undefined8 *local_50;
  long ***local_48;
  undefined4 local_34;
  
  FUN_7103776910(&local_68,param_2,(long ****)"set_txt_help",param_3,param_4,param_5,param_6,param_7
                 ,param_8);
  local_58 = &PTR_FUN_710523d9a8;
  puVar2 = (undefined8 *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar2 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_34 = 0;
      local_48 = (long ***)&SUB_00000020;
      param_3 = &local_48;
      uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
      if (((uVar3 & 1) != 0) &&
         (puVar2 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8),
         puVar2 != (undefined8 *)0x0)) goto LAB_7101cd6fe4;
    }
    puVar2 = (undefined8 *)0x0;
  }
LAB_7101cd6fe4:
  puVar1 = local_60;
  puVar2[2] = 0;
  puVar2[3] = 0;
  *puVar2 = 0;
  puVar2[1] = 0;
  *puVar2 = *local_60;
  puVar2[1] = local_60[1];
  puVar2[2] = local_60[2];
  puVar2[3] = local_60[3];
  if (*(uint *)(param_1 + 0x208) < 7) {
    local_50 = puVar2;
    FUN_710377a120((long)&local_58,
                   (&PTR_s_mnu_share_cat_movie_71050ae580)[(int)*(uint *)(param_1 + 0x208)],param_3,
                   param_4,param_5,param_6,param_7,param_8);
  }
  local_58 = &PTR_FUN_710523d9a8;
  local_50 = (undefined8 *)0x0;
  if (puVar2 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar2);
  }
  local_68 = &PTR_FUN_710523d9a8;
  local_60 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    FUN_710392eb40((ulong)puVar1);
  }
  switch(*(undefined4 *)(param_1 + 0x208)) {
  case 0:
    lVar4 = *(long *)(param_2 + 8);
    pcVar5 = "category_icon_movie";
    break;
  case 1:
    lVar4 = *(long *)(param_2 + 8);
    pcVar5 = "category_icon_replay";
    break;
  case 2:
    lVar4 = *(long *)(param_2 + 8);
    pcVar5 = "category_icon_watch";
    break;
  case 3:
    lVar4 = *(long *)(param_2 + 8);
    pcVar5 = "category_icon_mii";
    break;
  case 4:
    lVar4 = *(long *)(param_2 + 8);
    pcVar5 = "category_icon_stage";
    break;
  case 5:
    lVar4 = *(long *)(param_2 + 8);
    pcVar5 = "category_icon_owner";
    break;
  case 6:
    lVar4 = *(long *)(param_2 + 8);
    pcVar5 = "category_icon_like";
    break;
  default:
    goto switchD_7101cd7078_default;
  }
  FUN_7103778300(0x3f800000,lVar4,(long)pcVar5);
switchD_7101cd7078_default:
  return;
}

