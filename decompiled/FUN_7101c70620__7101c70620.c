// addr:      7101c70620
// offset:    0x1c70620
// name:      FUN_7101c70620
// mangled:   
// signature: undefined __cdecl FUN_7101c70620(long param_1, byte * param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101c70620(long param_1,byte *param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  byte *pbVar4;
  char *pcVar5;
  undefined **local_30;
  ulong local_28;
  
  switch((uint)*param_2) {
  case 0x6a:
    lVar3 = *(long *)(param_1 + 8);
    pcVar5 = "type_rule_warning";
    break;
  case 0x6b:
  case 0x6f:
  case 0x70:
    lVar3 = *(long *)(param_1 + 8);
    pcVar5 = "type_rule_contents";
    break;
  case 0x6c:
    lVar3 = *(long *)(param_1 + 8);
    pcVar5 = "type_rule_time";
    break;
  case 0x6d:
    lVar3 = *(long *)(param_1 + 8);
    pcVar5 = "type_rule_stock";
    break;
  case 0x6e:
    lVar3 = *(long *)(param_1 + 8);
    pcVar5 = "type_rule_stamina";
    break;
  default:
    if (2 < *param_2 - 1) {
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 8),0x7104280a9e);
      pcVar5 = "set_txt_nomal";
      goto LAB_7101c706f4;
    }
    lVar3 = *(long *)(param_1 + 8);
    pcVar5 = "type_txt_italic";
  }
  FUN_7103778300(0x3f800000,lVar3,(long)pcVar5);
  pcVar5 = "set_txt_italic";
LAB_7101c706f4:
  FUN_7103776910(&local_30,param_1,(long ****)pcVar5,param_3,param_4,param_5,param_6,param_7,param_8
                );
  bVar1 = *param_2;
  if (bVar1 < 100) {
    pbVar4 = (byte *)FUN_7101c70500(bVar1);
    if (bVar1 - 1 < 7) {
      FUN_710377a280((long)&local_30,pbVar4,1);
    }
    else {
      FUN_710377a120((long)&local_30,(char *)pbVar4,param_3,param_4,param_5,param_6,param_7,param_8)
      ;
    }
  }
  else if (*(long **)(local_28 + 0x10) != (long *)0x0) {
    FUN_71037a2270(*(long **)(local_28 + 0x10),*(ushort **)(param_2 + 0x80),0xffffffff,0);
  }
  uVar2 = local_28;
  local_30 = &PTR_FUN_710523d9a8;
  local_28 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  return;
}

