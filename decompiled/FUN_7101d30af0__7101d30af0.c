// addr:      7101d30af0
// offset:    0x1d30af0
// name:      FUN_7101d30af0
// mangled:   
// signature: undefined __cdecl FUN_7101d30af0(long param_1, uint param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101d30af0(long param_1,uint param_2,undefined8 param_3,undefined8 param_4,long ****param_5
                   ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined2 local_68;
  undefined8 local_66;
  undefined4 local_5e;
  char local_5a [34];
  undefined **local_38;
  ulong local_30;
  ushort local_24 [2];
  
  FUN_7103776910(&local_38,param_1 + 0xd0,(long ****)"set_txt_btn_02",param_3,param_4,param_5,
                 param_6,param_7,param_8);
  uVar7 = local_30;
  if (3 < param_2) {
    if (*(long **)(local_30 + 0x10) != (long *)0x0) {
      local_80 = local_80 & 0xffffffff00000000;
      FUN_71037a2270(*(long **)(local_30 + 0x10),(ushort *)&local_80,0,0);
    }
    goto LAB_7101d30de4;
  }
  iVar1 = *(int *)(*(long *)(param_1 + (long)(int)param_2 * 8 + 0xe8) + 0x254);
  local_78 = local_78 & 0xffffffffffffff00;
  local_80 = 0;
  switch(param_2) {
  case 0:
    local_70 = 0x5f79656b5f6e7462;
    local_68 = 0x746f;
    uVar3 = (uint)local_5e >> 0x10;
    local_66 = 0x765f706c65685f68;
    local_5e = CONCAT22((ushort)uVar3 & 0xff00,0x6269);
    uVar3 = 0x811c9dc5;
    uVar5 = 0x6d;
    pbVar4 = (byte *)((long)&local_78 + 1);
    do {
      uVar3 = uVar3 * 0x89 ^ uVar5;
      uVar5 = (uint)*pbVar4;
      pbVar4 = pbVar4 + 1;
    } while (uVar5 != 0);
    uVar5 = 0x1c;
    local_80 = CONCAT44(0x1c,uVar3);
    if (iVar1 == 0) goto LAB_7101d30d60;
    goto LAB_7101d30d54;
  case 1:
    local_70 = 0x5f79656b5f6e7462;
    local_68 = 0x746f;
    local_5a[0] = 0;
    local_66 = 0x735f706c65685f68;
    local_5e = 0x6873616d;
    uVar3 = 0x811c9dc5;
    uVar5 = 0x6d;
    pbVar4 = (byte *)((long)&local_78 + 1);
    do {
      uVar3 = uVar3 * 0x89 ^ uVar5;
      uVar5 = (uint)*pbVar4;
      pbVar4 = pbVar4 + 1;
    } while (uVar5 != 0);
    uVar5 = 0x1e;
    local_80 = CONCAT44(0x1e,uVar3);
    break;
  case 2:
    local_70 = 0x5f79656b5f6e7462;
    local_68 = 0x746f;
    local_66 = 0x6a5f706c65685f68;
    local_5e = 0x706d75;
    uVar3 = 0x811c9dc5;
    uVar5 = 0x1d;
    uVar6 = 0x6d;
    pbVar4 = (byte *)((long)&local_78 + 1);
    do {
      uVar3 = uVar3 * 0x89 ^ uVar6;
      uVar6 = (uint)*pbVar4;
      pbVar4 = pbVar4 + 1;
    } while (uVar6 != 0);
    local_80 = CONCAT44(0x1d,uVar3);
    break;
  case 3:
    pcVar2 = "mnu_opt_btn_key_oth_help_hang";
    goto LAB_7101d30dd8;
  default:
    if (*(long **)(local_30 + 0x10) != (long *)0x0) {
      local_24[0] = 0;
      local_24[1] = 0;
      FUN_71037a2270(*(long **)(local_30 + 0x10),local_24,0,0);
      uVar7 = local_30;
    }
    goto LAB_7101d30de4;
  }
  if (iVar1 == 0) {
LAB_7101d30d60:
    local_68 = 0x746f;
    local_70 = 0x5f79656b5f6e7462;
    local_78 = 0x5f74706f5f756e6d;
    pcVar2 = (char *)&local_78;
    pcVar2[uVar5] = '_';
    pcVar2[uVar5 + 1] = 'o';
    pcVar2[uVar5 + 2] = 'f';
    pcVar2[uVar5 + 3] = 'f';
    uVar3 = 0x811c9dc5;
    pcVar2[uVar5 + 4] = '\0';
    uVar6 = 0x6d;
    pbVar4 = (byte *)((long)&local_78 + 1);
    do {
      uVar3 = uVar3 * 0x89 ^ uVar6;
      uVar6 = (uint)*pbVar4;
      pbVar4 = pbVar4 + 1;
    } while (uVar6 != 0);
    local_80 = CONCAT44(uVar5 + 4,uVar3);
  }
  else {
LAB_7101d30d54:
    local_68 = 0x746f;
    local_70 = 0x5f79656b5f6e7462;
    local_78 = 0x5f74706f5f756e6d;
    pcVar2 = (char *)&local_78;
  }
LAB_7101d30dd8:
  FUN_710377a120((long)&local_38,pcVar2,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar7 = local_30;
LAB_7101d30de4:
  local_38 = &PTR_FUN_710523d9a8;
  local_30 = 0;
  if (uVar7 != 0) {
    FUN_710392eb40(uVar7);
  }
  return;
}

