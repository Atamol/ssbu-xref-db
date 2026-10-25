// addr:      7101e70e20
// offset:    0x1e70e20
// name:      FUN_7101e70e20
// mangled:   
// signature: undefined __cdecl FUN_7101e70e20(long param_1, ulong param_2, long * param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101e70e20(long param_1,ulong param_2,long *param_3,undefined8 param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  char *pcVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint uVar11;
  long lVar12;
  undefined **local_128;
  undefined8 local_120;
  undefined8 local_e0;
  byte local_d8 [64];
  undefined **local_98;
  ulong local_90 [8];
  
  lVar12 = *(long *)(DAT_710532f730 + 8);
  plVar6 = param_3;
  uVar3 = FUN_710327d3b0(*(long *)(lVar12 + 0x318),param_2);
  uVar3 = uVar3 & 0xffffffffff;
  if (uVar3 < 0xdaaec3d9f) {
    if (uVar3 == 0x32eb55cc9) {
      lVar4 = *(long *)(param_1 + 8);
      pcVar5 = "item_skill";
    }
    else {
      if (uVar3 != 0x697117991) goto LAB_7101e70f04;
      lVar4 = *(long *)(param_1 + 8);
      pcVar5 = "item_enforce";
    }
LAB_7101e70efc:
    FUN_7103778300(0x3f800000,lVar4,(long)pcVar5);
  }
  else if ((uVar3 == 0xdaaec3d9f || uVar3 == 0xe32ae387d) || uVar3 == 0x106cb91611) {
    lVar4 = *(long *)(param_1 + 8);
    pcVar5 = "item_support";
    goto LAB_7101e70efc;
  }
LAB_7101e70f04:
  lVar4 = *(long *)(lVar12 + 0x318);
  uVar3 = FUN_710327d930(*(long *)(lVar4 + 8),0x1ae148d108);
  if ((((param_2 & 0xff00000000000000) == 0x2d00000000000000) && ((param_2 & 0xffffffffff) != 0)) &&
     ((uVar3 & 0xff00000000000000) == 0x2d00000000000000 && (uVar3 & 0xffffffffff) != 0)) {
    if (((uVar3 ^ param_2) & 0xffffffffff) != 0) {
LAB_7101e70f54:
      uVar7 = param_2;
      FUN_710327cd40((uint *)&local_98,lVar4,param_2);
      FUN_71003a4ca0((uint *)&local_128,"nam_goods_%s",local_90,uVar7,param_4,param_5,param_6,
                     param_7,param_8);
      local_e0 = 0;
      for (uVar3 = 0; *(byte *)((long)&local_120 + uVar3) != 0; uVar3 = uVar3 + 2) {
        local_d8[uVar3] = *(byte *)((long)&local_120 + uVar3);
        if (0x3e < (int)uVar3 + 1U) {
          uVar3 = (ulong)((int)uVar3 + 1);
          break;
        }
        bVar1 = *(byte *)((long)&local_120 + uVar3 + 1);
        if (bVar1 == 0) {
          uVar3 = uVar3 + 1;
          break;
        }
        local_d8[uVar3 + 1] = bVar1;
      }
      pbVar9 = local_d8;
      uVar2 = 0x811c9dc5;
      pbVar9[uVar3 & 0xffffffff] = 0;
      uVar11 = (uint)local_d8[0];
      local_e0 = uVar3 << 0x20;
      if (local_d8[0] != 0) {
        pbVar10 = local_d8;
        do {
          pbVar10 = pbVar10 + 1;
          uVar2 = uVar2 * 0x89 ^ uVar11;
          uVar11 = (uint)*pbVar10;
        } while (uVar11 != 0);
      }
      local_e0 = CONCAT44((int)uVar3,uVar2);
      FUN_7103776910(&local_98,param_1,(long ****)"set_txt_name",uVar7,param_4,param_5,param_6,
                     param_7,param_8);
      uVar8 = 1;
      FUN_710377a280((long)&local_98,(byte *)"cam_shop_item_name",1);
      uVar3 = local_90[0];
      local_98 = &PTR_FUN_710523d9a8;
      local_90[0] = 0;
      if (uVar3 != 0) {
        FUN_710392eb40(uVar3);
      }
      uVar2 = FUN_710327de70(lVar12 + 0x310,param_2);
      if ((uVar2 & 0xff) == 0) {
        return;
      }
      if ((uVar2 - 1 & 0xff) < 0x10) {
        if ((uVar2 & 0xff) < 0xe) {
          if (0xc < (uVar2 - 1 & 0xff)) {
LAB_7101e71234:
                    /* WARNING: Subroutine does not return */
            abort();
          }
        }
        else if (((~(uVar2 - 0xe) & 0xff) != 0) && (2 < (uVar2 - 0xe & 0xff))) goto LAB_7101e71234;
      }
      FUN_7103776910(&local_98,param_1,(long ****)"set_txt_num",uVar8,pbVar9,param_5,param_6,param_7
                     ,param_8);
      FUN_710377a280((long)&local_98,(byte *)"cam_shop_item_possess_n",1);
      uVar3 = local_90[0];
      local_98 = &PTR_FUN_710523d9a8;
      local_90[0] = 0;
      goto joined_r0x007101e710bc;
    }
  }
  else if (((uVar3 & 0xffffffffff) != 0 && (uVar3 & 0xff00000000000000) == 0x2d00000000000000) !=
           ((param_2 & 0xff00000000000000) == 0x2d00000000000000 && (param_2 & 0xffffffffff) != 0))
  goto LAB_7101e70f54;
  uVar2 = *(uint *)(*DAT_7105329fa0 + 0x8e8);
  if (uVar2 == 0) {
    uVar2 = 1;
  }
  FUN_7103776910(&local_128,param_1,(long ****)"set_txt_name",plVar6,param_4,param_5,param_6,param_7
                 ,param_8);
  uVar8 = 1;
  uVar3 = (ulong)uVar2;
  FUN_710377a280((long)&local_128,(byte *)"cam_shop_camp_skill_n",1);
  if (*param_3 != 0) {
    FUN_7103776910(&local_98,param_1,(long ****)"set_txt_num",uVar8,uVar3,param_5,param_6,param_7,
                   param_8);
    FUN_710377a280((long)&local_98,(byte *)"cam_shop_item_possess_n",1);
    uVar3 = local_90[0];
    local_98 = &PTR_FUN_710523d9a8;
    local_90[0] = 0;
    if (uVar3 != 0) {
      FUN_710392eb40(uVar3);
    }
  }
  uVar3 = local_120;
  local_128 = &PTR_FUN_710523d9a8;
  local_120 = 0;
joined_r0x007101e710bc:
  if (uVar3 != 0) {
    FUN_710392eb40(uVar3);
  }
  return;
}

