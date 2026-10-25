// addr:      7101e70a60
// offset:    0x1e70a60
// name:      FUN_7101e70a60
// mangled:   
// signature: undefined __cdecl FUN_7101e70a60(long param_1, ushort param_2, long * param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101e70a60(long param_1,ushort param_2,long *param_3,undefined8 param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined2 *puVar1;
  char cVar2;
  ushort uVar3;
  long *plVar4;
  char *pcVar5;
  long *********ppppppppplVar6;
  byte ****ppppbVar7;
  ulong uVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  undefined **local_150;
  undefined8 local_148;
  undefined8 local_108;
  undefined8 local_100;
  undefined **local_c0;
  ulong local_b8;
  undefined **local_b0;
  ulong local_a8 [9];
  
  lVar13 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
  if (param_2 == 0xffff) {
    uVar8 = 0xffffffff;
  }
  else {
    uVar8 = (ulong)*(ushort *)(lVar13 + ((long)((ulong)param_2 << 0x30) >> 0x2f) + 0x60);
  }
  uVar12 = (*(long *)(lVar13 + 0x28) - *(long *)(lVar13 + 0x20) >> 6) * -0x3333333333333333;
  puVar1 = (undefined2 *)(*(long *)(lVar13 + 0x20) + uVar8 * 0x140);
  if (uVar12 < uVar8 || uVar12 - uVar8 == 0) {
    puVar1 = &DAT_7105182b08;
  }
  uVar12 = FUN_71032a9470(lVar13,param_2);
  FUN_71032a9540((uint *)&local_b0,lVar13,uVar12);
  FUN_71003a4ca0((uint *)&local_150,"spi_%s",local_a8,uVar12,param_4,param_5,param_6,param_7,param_8
                );
  local_108 = 0;
  for (uVar8 = 0; *(char *)((long)&local_148 + uVar8) != '\0'; uVar8 = uVar8 + 2) {
    *(char *)((long)&local_100 + uVar8) = *(char *)((long)&local_148 + uVar8);
    if (0x3e < (int)uVar8 + 1U) {
      uVar8 = (ulong)((int)uVar8 + 1);
      break;
    }
    cVar2 = *(char *)((long)&local_148 + uVar8 + 1);
    if (cVar2 == '\0') {
      uVar8 = uVar8 + 1;
      break;
    }
    *(char *)((long)&local_100 + uVar8 + 1) = cVar2;
  }
  ppppbVar7 = (byte ****)&local_100;
  uVar10 = 0x811c9dc5;
  *(undefined1 *)((long)ppppbVar7 + (uVar8 & 0xffffffff)) = 0;
  uVar11 = (uint)(byte)local_100;
  local_108 = uVar8 << 0x20;
  if ((byte)local_100 != 0) {
    pbVar9 = (byte *)((long)&local_100 + 1);
    do {
      uVar10 = uVar10 * 0x89 ^ uVar11;
      uVar11 = (uint)*pbVar9;
      pbVar9 = pbVar9 + 1;
    } while (uVar11 != 0);
  }
  local_108 = CONCAT44((int)uVar8,uVar10);
  FUN_7103776910(&local_b0,param_1,(long ****)"set_txt_name",uVar12,param_4,param_5,param_6,param_7,
                 param_8);
  ppppppppplVar6 = (long *********)0x1;
  FUN_710377a280((long)&local_b0,(byte *)"cam_shop_item_name",1);
  uVar8 = local_a8[0];
  local_b0 = &PTR_FUN_710523d9a8;
  local_a8[0] = 0;
  if (uVar8 != 0) {
    FUN_710392eb40(uVar8);
  }
  if (*(char *)(puVar1 + 0x2f) == '\x01') {
    lVar13 = *(long *)(param_1 + 8);
    pcVar5 = "spirit_supporter";
  }
  else {
    if (*(char *)(puVar1 + 0x2f) != '\0') goto LAB_7101e70c3c;
    lVar13 = *(long *)(param_1 + 8);
    pcVar5 = "spirit_attacker";
  }
  FUN_7103778300(0x3f800000,lVar13,(long)pcVar5);
LAB_7101e70c3c:
  uVar3 = puVar1[0x35];
  if (uVar3 == 0) {
    FUN_7103776910(&local_b0,param_1,(long ****)"set_txt_skill",ppppppppplVar6,ppppbVar7,param_5,
                   param_6,param_7,param_8);
    FUN_7103776910(&local_150,param_1,(long ****)"set_rep_spskill",ppppppppplVar6,ppppbVar7,param_5,
                   param_6,param_7,param_8);
    uVar8 = local_a8[0];
    if (*(long **)(local_a8[0] + 0x10) != (long *)0x0) {
      ppppppppplVar6 = (long *********)0x0;
      ppppbVar7 = (byte ****)0x0;
      local_c0 = (undefined **)((ulong)local_c0 & 0xffffffff00000000);
      FUN_71037a2270(*(long **)(local_a8[0] + 0x10),(ushort *)&local_c0,0,0);
    }
    uVar12 = local_148;
    FUN_71037790a0(local_148,1,ppppppppplVar6,ppppbVar7,param_5,param_6,param_7,param_8);
    local_150 = &PTR_FUN_710523d9a8;
    local_148 = 0;
    if (uVar12 != 0) {
      FUN_710392eb40(uVar12);
    }
    local_b0 = &PTR_FUN_710523d9a8;
    local_a8[0] = 0;
  }
  else {
    FUN_7103776910(&local_150,param_1,(long ****)"set_txt_skill",ppppppppplVar6,ppppbVar7,param_5,
                   param_6,param_7,param_8);
    FUN_7103776910(&local_c0,param_1,(long ****)"set_rep_spskill",ppppppppplVar6,ppppbVar7,param_5,
                   param_6,param_7,param_8);
    lVar13 = *(long *)(DAT_710532f730 + 8);
    ppppppppplVar6 = (long *********)(ulong)(uint)uVar3;
    FUN_71032a0c90((uint *)&local_b0,lVar13 + 0x210,uVar3,ppppbVar7,param_5,param_6,param_7,param_8)
    ;
    FUN_710377a120((long)&local_150,(char *)local_a8,ppppppppplVar6,ppppbVar7,param_5,param_6,
                   param_7,param_8);
    uVar8 = FUN_71032a1630(*(long *)(lVar13 + 0x218),uVar3);
    plVar4 = FUN_710323f760(param_3,uVar8,(long ****)ppppppppplVar6,ppppbVar7,param_5,param_6,
                            param_7,param_8);
    uVar8 = local_b8;
    FUN_7103778b80(local_b8,(long)plVar4,ppppppppplVar6,ppppbVar7,param_5,param_6,param_7,param_8);
    local_c0 = &PTR_FUN_710523d9a8;
    local_b8 = 0;
    if (uVar8 != 0) {
      FUN_710392eb40(uVar8);
    }
    uVar8 = local_148;
    local_150 = &PTR_FUN_710523d9a8;
    local_148 = 0;
  }
  if (uVar8 != 0) {
    FUN_710392eb40(uVar8);
  }
  FUN_7103776910(&local_b0,param_1,(long ****)"set_txt_num",ppppppppplVar6,ppppbVar7,param_5,param_6
                 ,param_7,param_8);
  FUN_710377a280((long)&local_b0,(byte *)"cam_shop_item_possess_n",1);
  uVar8 = local_a8[0];
  local_b0 = &PTR_FUN_710523d9a8;
  local_a8[0] = 0;
  if (uVar8 != 0) {
    FUN_710392eb40(uVar8);
  }
  return;
}

