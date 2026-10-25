// addr:      7101e93320
// offset:    0x1e93320
// name:      FUN_7101e93320
// mangled:   
// signature: undefined __cdecl FUN_7101e93320(long param_1, uint param_2, undefined8 param_3, long param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101e93320(long param_1,uint param_2,undefined8 param_3,long param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  char cVar2;
  ulong uVar3;
  undefined *puVar4;
  long ****pppplVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined **local_80;
  ulong local_78;
  undefined **local_70;
  ulong local_68;
  undefined **local_60;
  ulong local_58;
  
  uVar8 = (ulong)param_2;
  FUN_7103776640(&local_60,param_1 + 0x10,(byte ****)"set_parts_btn_%02d",uVar8,param_4,param_5,
                 param_6,param_7,param_8);
  uVar3 = local_58;
  if (param_2 < 3) {
    puVar9 = *(undefined8 **)(*DAT_7105314510 + 0x158);
    uVar6 = *(ulong *)(*(long *)*puVar9 + (ulong)param_2 * 0x3d700 + 0x3d6d0);
    if ((uVar6 & 0xffffffffff) == 0 || (uVar6 & 0xff00000000000000) != 0xc100000000000000) {
      FUN_7103778300(0x3f800000,local_58,0x71043f0fb3);
      FUN_7103778300(0x3f800000,local_58,0x710434aa7a);
    }
    else {
      uVar10 = (ulong)param_2;
      FUN_7103778300(0x3f800000,local_58,0x7104401bd3);
      local_70 = (undefined **)0x0;
      FUN_7103741810(*(undefined8 *)(*(long *)*puVar9 + uVar10 * 0x3d700 + 0x3cc20),
                     (ulong *)&local_70);
      pppplVar5 = (long ****)
                  (((ulong)local_70 >> 0x15 & 0x1f) * 1000000 +
                   ((ulong)local_70 >> 0x1a & 0x3f) * 1000 + ((ulong)local_70 >> 0x20 & 0x3f));
      lVar7 = ((ulong)local_70 & 0xfff) * 1000000 + ((ulong)local_70 >> 0xc & 0xf) * 1000 +
              ((ulong)local_70 >> 0x10 & 0x1f);
      FUN_7103776910(&local_70,(long)&local_60,(long ****)"set_txt_date",uVar8,param_4,param_5,
                     param_6,param_7,param_8);
      uVar8 = 2;
      FUN_710377a280((long)&local_70,(byte *)"cam_save_date",2);
      uVar6 = local_68;
      local_70 = &PTR_FUN_710523d9a8;
      local_68 = 0;
      param_4 = lVar7;
      param_5 = pppplVar5;
      if (uVar6 != 0) {
        FUN_710392eb40(uVar6);
        param_4 = lVar7;
        param_5 = pppplVar5;
      }
      lVar7 = *(long *)*puVar9 + uVar10 * 0x3d700;
      cVar1 = *(char *)(lVar7 + 0x3cc35);
      cVar2 = *(char *)(lVar7 + 0x3cc37);
      FUN_7103776640(&local_70,(long)&local_60,(byte ****)"set_parts_clear",uVar8,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_7103776640(&local_80,(long)&local_60,(byte ****)"set_parts_clear_s",uVar8,param_4,param_5,
                     param_6,param_7,param_8);
      if (cVar1 == '\0' && cVar2 == '\0') {
        FUN_7103778300(0x3f800000,local_58,0x710434aa7a);
        uVar6 = local_78;
      }
      else {
        FUN_7103778300(0x3f800000,local_58,0x71042f8a18);
        if (*(char *)(*(long *)*puVar9 + uVar10 * 0x3d700 + 0x3cc37) == '\0') {
          FUN_7103778300(0x3f800000,local_68,0x7104348100);
          puVar4 = &DAT_710438b28f;
          uVar6 = local_78;
        }
        else {
          FUN_7103778300(0x3f800000,local_68,0x710438b28f);
          puVar4 = &DAT_7104348100;
          uVar6 = local_78;
        }
        FUN_7103778300(0x3f800000,uVar6,(long)puVar4);
      }
      local_80 = &PTR_FUN_710523d988;
      local_78 = 0;
      if (uVar6 != 0) {
        uVar10 = *(ulong *)(uVar6 + 0x18);
        *(undefined ***)(uVar6 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar6 + 0x18) = 0;
        if (uVar10 != 0) {
          FUN_710392eb40(uVar10);
        }
        FUN_710392eb40(uVar6);
      }
      uVar6 = local_68;
      local_70 = &PTR_FUN_710523d988;
      local_68 = 0;
      if (uVar6 != 0) {
        uVar10 = *(ulong *)(uVar6 + 0x18);
        *(undefined ***)(uVar6 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar6 + 0x18) = 0;
        if (uVar10 != 0) {
          FUN_710392eb40(uVar10);
        }
        FUN_710392eb40(uVar6);
      }
    }
    FUN_7103776910(&local_70,(long)&local_60,(long ****)"set_txt_num",uVar8,param_4,param_5,param_6,
                   param_7,param_8);
    FUN_710377a120((long)&local_70,"cam_save_data_%d",(ulong)(param_2 + 1),param_4,param_5,param_6,
                   param_7,param_8);
    uVar8 = local_68;
    local_70 = &PTR_FUN_710523d9a8;
    local_68 = 0;
    if (uVar8 != 0) {
      FUN_710392eb40(uVar8);
    }
    local_60 = &PTR_FUN_710523d988;
    local_58 = 0;
    if (uVar3 != 0) {
      uVar8 = *(ulong *)(uVar3 + 0x18);
      *(undefined ***)(uVar3 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar3 + 0x18) = 0;
      if (uVar8 != 0) {
        FUN_710392eb40(uVar8);
      }
      FUN_710392eb40(uVar3);
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

