// addr:      7103385ee0
// offset:    0x3385ee0
// name:      FUN_7103385ee0
// mangled:   
// signature: undefined __cdecl FUN_7103385ee0(undefined8 param_1, long * param_2, ulong * param_3, long * * * * * * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7103385ee0(undefined8 param_1,long *param_2,ulong *param_3,long *********param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  uint uVar2;
  ulong uVar3;
  char *pcVar4;
  long *********ppppppppplVar5;
  ulong uVar6;
  long *********ppppppppplVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  undefined8 uStack_138;
  undefined8 local_130;
  uint auStack_f8 [2];
  undefined1 auStack_f0 [64];
  undefined **local_b0;
  ulong local_a8;
  undefined **local_a0;
  ulong local_98;
  undefined **local_90;
  ulong local_88;
  ushort local_80 [32];
  
  if (param_4[1][1] == (long *******)0x0) {
    return;
  }
  ppppppppplVar5 = param_4;
  ppppppppplVar7 = param_4;
  FUN_710338fff0(param_2,param_3,param_4,(byte ****)param_4,param_5,param_6,param_7,param_8);
  FUN_7103776640(&local_90,(long)param_4,(byte ****)"set_parts_supportitem",ppppppppplVar5,
                 ppppppppplVar7,param_5,param_6,param_7,param_8);
  FUN_7103776910(&local_a0,(long)param_4,(long ****)"set_txt_point",ppppppppplVar5,ppppppppplVar7,
                 param_5,param_6,param_7,param_8);
  FUN_7103776910(&local_b0,(long)param_4,(long ****)"set_txt_category",ppppppppplVar5,ppppppppplVar7
                 ,param_5,param_6,param_7,param_8);
  if ((char)param_3[1] == '\x05') {
    lVar10 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x318);
    uVar3 = FUN_710327d930(*(long *)(lVar10 + 8),param_3[2]);
    uVar6 = uVar3;
    FUN_710327cd40(auStack_f8,lVar10,uVar3);
    uVar8 = uVar3 & 0xffffffffff;
    if ((uVar3 & 0xff00000000000000) == 0x2d00000000000000 && uVar8 != 0) {
      if (uVar8 == 0xd61d998cb) {
        FUN_7103778300(0x3f800000,local_88,(long)auStack_f0);
        uStack_138 = 0x696f705f64726163;
        local_130 = 0x646c6f675f746e;
        pcVar4 = (char *)((long)&uStack_138 + 1);
        do {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        FUN_7103778300(0x3f800000,(long)param_4[1],(long)&uStack_138);
        pcVar4 = "nam_goods_gold";
      }
      else {
        if (uVar8 != 0x155f9548cb) goto LAB_710338613c;
        FUN_7103778300(0x3f800000,local_88,(long)auStack_f0);
        uStack_138 = 0x696f705f64726163;
        local_130 = CONCAT26(local_130._6_2_,0x70735f746e);
        pcVar4 = (char *)((long)&uStack_138 + 1);
        do {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        FUN_7103778300(0x3f800000,(long)param_4[1],(long)&uStack_138);
        pcVar4 = "nam_goods_spirit_point";
      }
      FUN_710377a120((long)&local_b0,pcVar4,uVar6,ppppppppplVar7,param_5,param_6,param_7,param_8);
      plVar9 = *(long **)(local_98 + 0x10);
      if (plVar9 != (long *)0x0) {
        local_80[0x18] = 0;
        local_80[0x19] = 0;
        local_80[0x1a] = 0;
        local_80[0x1b] = 0;
        local_80[0x1c] = 0;
        local_80[0x1d] = 0;
        local_80[0x1e] = 0;
        local_80[0x1f] = 0;
        local_80[0x10] = 0;
        local_80[0x11] = 0;
        local_80[0x12] = 0;
        local_80[0x13] = 0;
        local_80[0x14] = 0;
        local_80[0x15] = 0;
        local_80[0x16] = 0;
        local_80[0x17] = 0;
        local_80[8] = 0;
        local_80[9] = 0;
        local_80[10] = 0;
        local_80[0xb] = 0;
        local_80[0xc] = 0;
        local_80[0xd] = 0;
        local_80[0xe] = 0;
        local_80[0xf] = 0;
        local_80[0] = 0;
        local_80[1] = 0;
        local_80[2] = 0;
        local_80[3] = 0;
        local_80[4] = 0;
        local_80[5] = 0;
        local_80[6] = 0;
        local_80[7] = 0;
        uVar2 = FUN_71037ad940((long)local_80,0x20,0,(uint)param_3[3],0,0);
        FUN_71037a2270(plVar9,local_80,uVar2,0);
      }
    }
  }
LAB_710338613c:
  uVar6 = local_a8;
  local_b0 = &PTR_FUN_710523d9a8;
  local_a8 = 0;
  if (uVar6 != 0) {
    FUN_710392eb40(uVar6);
  }
  uVar6 = local_98;
  local_a0 = &PTR_FUN_710523d9a8;
  local_98 = 0;
  if (uVar6 != 0) {
    FUN_710392eb40(uVar6);
  }
  uVar6 = local_88;
  local_90 = &PTR_FUN_710523d988;
  local_88 = 0;
  if (uVar6 != 0) {
    uVar3 = *(ulong *)(uVar6 + 0x18);
    *(undefined ***)(uVar6 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar6 + 0x18) = 0;
    if (uVar3 != 0) {
      FUN_710392eb40(uVar3);
    }
    FUN_710392eb40(uVar6);
  }
  return;
}

