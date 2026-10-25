// addr:      7101daf1a0
// offset:    0x1daf1a0
// name:      FUN_7101daf1a0
// mangled:   
// signature: undefined __cdecl FUN_7101daf1a0(long param_1, ulong param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101daf1a0(long param_1,ulong param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  char cVar2;
  long ****pppplVar3;
  long *plVar4;
  ulong uVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  ulong uVar9;
  byte *pbVar10;
  uint uVar12;
  bool bVar13;
  long lVar14;
  undefined4 local_218 [2];
  undefined **local_210;
  long local_208;
  undefined8 local_200;
  undefined1 local_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined **local_1d8;
  ulong local_1d0;
  undefined **local_1c8;
  ulong local_1c0;
  undefined **local_1b8;
  ulong local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined2 local_190;
  undefined8 local_18e;
  uint local_186;
  ushort local_182;
  uint local_98 [2];
  undefined8 local_90;
  undefined8 local_88;
  undefined2 local_80;
  undefined8 local_7e;
  undefined4 local_76;
  undefined2 uStack_72;
  undefined2 uStack_70;
  undefined1 uStack_6e;
  undefined1 uStack_6d;
  undefined1 local_6c;
  byte *pbVar11;
  
  if (((param_2 & 1) == 0) && (*(char *)(param_1 + 0x42c) == '\0')) {
    bVar13 = false;
  }
  else {
    bVar13 = true;
  }
  FUN_7103776640(&local_1b8,param_1 + 0x50,(byte ****)"set_parts_item",param_3,param_4,param_5,
                 param_6,param_7,param_8);
  if (!bVar13) goto LAB_7101daf88c;
  uVar6 = 0x811c9dc5;
  local_1a0 = local_1a0 & 0xffffffffffffff00;
  local_1a8 = (undefined **)0x811c9dc5;
  local_90 = (long ********)((ulong)local_90 & 0xffffffffffffff00);
  local_98[0] = 0x811c9dc5;
  local_98[1] = 0;
  switch(*(undefined1 *)(param_1 + 0x42c)) {
  case 6:
    local_1a0 = 0x646f6f675f6d616e;
    uStack_198 = 0x7469726970735f73;
    local_190 = 0x645f;
    local_18e = 0x30335f6567616d61;
    local_186 = local_186 & 0xffffff00;
    uVar12 = 0x6e;
    pbVar11 = (byte *)((long)&local_1a0 + 1);
    uVar8 = uVar6;
    do {
      uVar8 = uVar8 * 0x89 ^ uVar12;
      uVar12 = (uint)*pbVar11;
      pbVar11 = pbVar11 + 1;
    } while (uVar12 != 0);
    local_88 = 0x735f706c65685f73;
    local_80 = 0x6970;
    local_90 = (long ********)0x646f6f675f6d616e;
    local_7e = 0x616d61645f746972;
    local_76 = 0x335f6567;
    uStack_72 = 0x30;
    uVar12 = 0x6e;
    local_1a8 = (undefined **)CONCAT44(0x1a,uVar8);
    local_98[0] = 0x811c9dc5;
    local_98[1] = 0x1f;
    pbVar11 = (byte *)((long)&local_90 + 1);
    do {
      uVar6 = uVar6 * 0x89 ^ uVar12;
      uVar12 = (uint)*pbVar11;
      pbVar11 = pbVar11 + 1;
    } while (uVar12 != 0);
    break;
  case 7:
    local_1a0 = 0x646f6f675f6d616e;
    uStack_198 = 0x7469726970735f73;
    local_190 = 0x645f;
    local_18e = 0x30355f6567616d61;
    local_186 = (uint)local_186._1_3_ << 8;
    uVar12 = 0x6e;
    pbVar11 = (byte *)((long)&local_1a0 + 1);
    uVar8 = uVar6;
    do {
      uVar8 = uVar8 * 0x89 ^ uVar12;
      uVar12 = (uint)*pbVar11;
      pbVar11 = pbVar11 + 1;
    } while (uVar12 != 0);
    local_88 = 0x735f706c65685f73;
    local_80 = 0x6970;
    local_90 = (long ********)0x646f6f675f6d616e;
    local_7e = 0x616d61645f746972;
    local_76 = 0x355f6567;
    uStack_72 = 0x30;
    uVar12 = 0x6e;
    local_1a8 = (undefined **)CONCAT44(0x1a,uVar8);
    local_98[0] = 0x811c9dc5;
    local_98[1] = 0x1f;
    pbVar11 = (byte *)((long)&local_90 + 1);
    do {
      uVar6 = uVar6 * 0x89 ^ uVar12;
      uVar12 = (uint)*pbVar11;
      pbVar11 = pbVar11 + 1;
    } while (uVar12 != 0);
    break;
  case 8:
    local_1a0 = 0x646f6f675f6d616e;
    uStack_198 = 0x7469726970735f73;
    local_190 = 0x635f;
    local_18e = 0x616a5f6567726168;
    local_186 = 0x6e696d6d;
    local_182 = 0x67;
    uVar12 = 0x6e;
    pbVar11 = (byte *)((long)&local_1a0 + 1);
    uVar8 = uVar6;
    do {
      uVar8 = uVar8 * 0x89 ^ uVar12;
      uVar12 = (uint)*pbVar11;
      pbVar11 = pbVar11 + 1;
    } while (uVar12 != 0);
    local_88 = 0x735f706c65685f73;
    local_80 = 0x6970;
    local_90 = (long ********)0x646f6f675f6d616e;
    local_7e = 0x726168635f746972;
    local_76 = 0x6a5f6567;
    local_6c = 0;
    uStack_72 = 0x6d61;
    uStack_70 = 0x696d;
    uStack_6e = 0x6e;
    uStack_6d = 0x67;
    uVar12 = 0x6e;
    local_1a8 = (undefined **)CONCAT44(0x1f,uVar8);
    local_98[0] = 0x811c9dc5;
    local_98[1] = 0x24;
    pbVar11 = (byte *)((long)&local_90 + 1);
    do {
      uVar6 = uVar6 * 0x89 ^ uVar12;
      uVar12 = (uint)*pbVar11;
      pbVar11 = pbVar11 + 1;
    } while (uVar12 != 0);
    break;
  case 9:
    local_1a0 = 0x646f6f675f6d616e;
    uStack_198 = 0x7469726970735f73;
    local_190 = 0x655f;
    local_18e = 0x65775f74726f6373;
    local_186 = 0x6e656b61;
    local_182 = local_182 & 0xff00;
    uVar12 = 0x6e;
    pbVar11 = (byte *)((long)&local_1a0 + 1);
    uVar8 = uVar6;
    do {
      uVar8 = uVar8 * 0x89 ^ uVar12;
      uVar12 = (uint)*pbVar11;
      pbVar11 = pbVar11 + 1;
    } while (uVar12 != 0);
    local_88 = 0x735f706c65685f73;
    local_80 = 0x6970;
    local_90 = (long ********)0x646f6f675f6d616e;
    local_7e = 0x6f6373655f746972;
    local_76 = 0x775f7472;
    uStack_72 = 0x6165;
    uStack_70 = 0x656b;
    uStack_6e = 0x6e;
    uStack_6d = 0;
    uVar12 = 0x6e;
    local_1a8 = (undefined **)CONCAT44(0x1e,uVar8);
    local_98[0] = 0x811c9dc5;
    local_98[1] = 0x23;
    pbVar11 = (byte *)((long)&local_90 + 1);
    do {
      uVar6 = uVar6 * 0x89 ^ uVar12;
      uVar12 = (uint)*pbVar11;
      pbVar11 = pbVar11 + 1;
    } while (uVar12 != 0);
    break;
  case 10:
    local_1a0 = 0x646f6f675f6d616e;
    uStack_198 = 0x7469726970735f73;
    local_190 = 0x615f;
    local_18e = 0x6f6c665f796c7070;
    local_186 = 0x726577;
    uVar12 = 0x6e;
    pbVar11 = (byte *)((long)&local_1a0 + 1);
    uVar8 = uVar6;
    do {
      uVar8 = uVar8 * 0x89 ^ uVar12;
      uVar12 = (uint)*pbVar11;
      pbVar11 = pbVar11 + 1;
    } while (uVar12 != 0);
    local_88 = 0x735f706c65685f73;
    local_80 = 0x6970;
    local_90 = (long ********)0x646f6f675f6d616e;
    local_7e = 0x6c7070615f746972;
    local_1a8 = (undefined **)CONCAT44(0x1d,uVar8);
    local_76 = 0x6c665f79;
    uStack_72 = 0x776f;
    uStack_70 = 0x7265;
    uVar8 = 0x6e;
    uStack_6e = 0;
    local_98[0] = 0x811c9dc5;
    local_98[1] = 0x22;
    pbVar11 = (byte *)((long)&local_90 + 1);
    do {
      uVar6 = uVar6 * 0x89 ^ uVar8;
      uVar8 = (uint)*pbVar11;
      pbVar11 = pbVar11 + 1;
    } while (uVar8 != 0);
    break;
  case 0xb:
    local_1a0 = 0x646f6f675f6d616e;
    uStack_198 = 0x7469726970735f73;
    local_190 = 0x695f;
    local_18e = 0x6b636f6c5f6d6574;
    local_186 = (uint)local_186._1_3_ << 8;
    uVar12 = 0x6e;
    pbVar11 = (byte *)((long)&local_1a0 + 1);
    uVar8 = uVar6;
    do {
      uVar8 = uVar8 * 0x89 ^ uVar12;
      uVar12 = (uint)*pbVar11;
      pbVar11 = pbVar11 + 1;
    } while (uVar12 != 0);
    local_88 = 0x735f706c65685f73;
    local_80 = 0x6970;
    local_90 = (long ********)0x646f6f675f6d616e;
    local_7e = 0x6d6574695f746972;
    local_76 = 0x636f6c5f;
    uStack_72 = 0x6b;
    uVar12 = 0x6e;
    local_1a8 = (undefined **)CONCAT44(0x1a,uVar8);
    local_98[0] = 0x811c9dc5;
    local_98[1] = 0x1f;
    pbVar11 = (byte *)((long)&local_90 + 1);
    do {
      uVar6 = uVar6 * 0x89 ^ uVar12;
      uVar12 = (uint)*pbVar11;
      pbVar11 = pbVar11 + 1;
    } while (uVar12 != 0);
    break;
  default:
    goto switchD_7101daf240_default;
  }
  local_80 = 0x6970;
  local_88 = 0x735f706c65685f73;
  local_90 = (long ********)0x646f6f675f6d616e;
  uStack_198 = 0x7469726970735f73;
  local_1a0 = 0x646f6f675f6d616e;
  local_98[0] = uVar6;
switchD_7101daf240_default:
  FUN_7103776910(&local_1c8,(long)&local_1b8,(long ****)"set_txt_item",param_3,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_710377a120((long)&local_1c8,(char *)&local_1a0,param_3,param_4,param_5,param_6,param_7,param_8
                );
  uVar9 = local_1c0;
  local_1c8 = &PTR_FUN_710523d9a8;
  local_1c0 = 0;
  if (uVar9 != 0) {
    FUN_710392eb40(uVar9);
  }
  FUN_7103776910(&local_1c8,(long)&local_1b8,(long ****)"set_txt_help_item",param_3,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_710377a120((long)&local_1c8,(char *)&local_90,param_3,param_4,param_5,param_6,param_7,param_8)
  ;
  uVar9 = local_1c0;
  local_1c8 = &PTR_FUN_710523d9a8;
  local_1c0 = 0;
  if (uVar9 != 0) {
    FUN_710392eb40(uVar9);
  }
LAB_7101daf88c:
  FUN_7103776640(&local_1c8,param_1 + 0x50,(byte ****)"set_parts_btn_s_item",param_3,param_4,param_5
                 ,param_6,param_7,param_8);
  uVar9 = local_1c0;
  if (*(byte *)(param_1 + 0x42c) == 0) {
    FUN_7103778300(0x3f800000,local_1c0,0x71043088e7);
    FUN_71037780e0(&local_1a8,(long)&local_1b8,(long ****)"item_off",param_3,param_4,param_5,param_6
                   ,param_7,param_8);
    if ((param_2 & 1) == 0) {
      FUN_710377aee0(0x3f800000,(long)&local_1a8);
    }
    else {
      FUN_710377b140((long)&local_1a8);
    }
    uVar5 = local_1a0;
    local_1a8 = &PTR_FUN_710523d9e8;
    local_1a0 = 0;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
  }
  else {
    FUN_7103778300(0x3f800000,local_1c0,0x7104454ed5);
    FUN_7103776910(&local_1d8,(long)&local_1c8,(long ****)"set_rep_item",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    lVar14 = *(long *)(DAT_710532f730 + 8);
    uVar6 = *(byte *)(param_1 + 0x42c) - 1;
    if (uVar6 < 0x10) {
      pppplVar3 = (long ****)
                  FUN_710327d930(*(long *)(*(long *)(lVar14 + 0x318) + 8),
                                 *(ulong *)(&DAT_7104ada9f0 + (long)(char)uVar6 * 8));
    }
    else {
      pppplVar3 = (long ****)0x2dffff0000000000;
    }
    if ((((ulong)pppplVar3 & 0xffffffffff) == 0) ||
       (((ulong)pppplVar3 & 0xff00000000000000) != 0x2d00000000000000)) {
      local_1a8 = (undefined **)0x0;
    }
    else {
      FUN_710327cd40(local_98,*(long *)(lVar14 + 0x318),(ulong)pppplVar3);
      FUN_7103239920((uint *)&local_1a8,0x23,0);
      param_3 = (long *********)&local_90;
      FUN_7103239d20((uint *)&local_1a8,"%s.bntx");
      if (local_1a8._4_4_ == 0) {
        uVar9 = 0;
      }
      else {
        uVar6 = 0xffffffff;
        pbVar11 = (byte *)&local_1a0;
        do {
          pbVar10 = pbVar11 + 1;
          bVar1 = *pbVar11;
          uVar8 = bVar1 + 0x20;
          if (0x19 < bVar1 - 0x41) {
            uVar8 = (uint)bVar1;
          }
          uVar6 = (&DAT_7104754084)[(uVar8 ^ uVar6) & 0xff] ^ uVar6 >> 8;
          pbVar11 = pbVar10;
        } while (pbVar10 < (byte *)((long)&local_1a0 + (ulong)local_1a8._4_4_));
        uVar9 = (ulong)~uVar6;
      }
      local_1a8 = (undefined **)(uVar9 | ((long)(int)local_1a8._4_4_ & 0xffU) << 0x20);
      if (local_1a8 != (undefined **)0x0) {
        lVar14 = *(long *)(param_1 + 0x28);
        param_3 = (long *********)(long)*(int *)(lVar14 + 0x70);
        param_4 = (byte ****)(ulong)*(uint *)(lVar14 + 0x68);
        FUN_710323c4e0(lVar14,&local_1a8,param_3,param_4,param_5,param_6,param_7,param_8);
      }
    }
    plVar4 = FUN_7103240590((long *)(param_1 + 0x28),pppplVar3,(long ****)param_3,param_4,param_5,
                            param_6,param_7,param_8);
    FUN_7103778b80(local_1d0,(long)plVar4,param_3,param_4,param_5,param_6,param_7,param_8);
    FUN_7103776910(&local_1a8,(long)&local_1b8,(long ****)"set_rep_item",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    uVar9 = local_1a0;
    FUN_7103778b80(local_1a0,(long)plVar4,param_3,param_4,param_5,param_6,param_7,param_8);
    local_1a8 = &PTR_FUN_710523d9a8;
    local_1a0 = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    FUN_71037780e0(&local_1a8,(long)&local_1b8,(long ****)"item_on",param_3,param_4,param_5,param_6,
                   param_7,param_8);
    if ((param_2 & 1) == 0) {
      FUN_710377aee0(0x3f800000,(long)&local_1a8);
      if ((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
         (uVar9 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x1bf69629fc,(long ****)&DAT_00000004
                                 ,param_4,param_5,param_6,param_7,param_8), (uVar9 & 1) != 0)) {
        FUN_71024076d0(local_218,0x1bf69629fc);
        if (((local_208 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_200 == DAT_7106dd53ac))
        {
          piVar7 = (int *)(local_208 + 0x38);
          do {
            cVar2 = '\x01';
            bVar13 = (bool)ExclusiveMonitorPass(piVar7,0x10);
            if (bVar13) {
              *piVar7 = *piVar7 + -1;
              cVar2 = ExclusiveMonitorsStatus();
            }
          } while (cVar2 != '\0');
        }
      }
      else {
        local_200 = 0x87650000000000;
        local_1f0 = 0xffffffffffffffff;
        uStack_1e8 = 0;
        local_218[0] = 0;
        local_1e0 = 0;
      }
      local_210 = &PTR_FUN_7104f73d50;
      local_208 = 0;
      local_1f8 = 0;
    }
    else {
      FUN_710377b140((long)&local_1a8);
    }
    uVar9 = local_1a0;
    local_1a8 = &PTR_FUN_710523d9e8;
    local_1a0 = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    uVar5 = local_1d0;
    local_1d8 = &PTR_FUN_710523d9a8;
    local_1d0 = 0;
    uVar9 = local_1c0;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
      uVar9 = local_1c0;
    }
  }
  local_1c8 = &PTR_FUN_710523d988;
  local_1c0 = 0;
  if (uVar9 != 0) {
    uVar5 = *(ulong *)(uVar9 + 0x18);
    *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar9 + 0x18) = 0;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
    FUN_710392eb40(uVar9);
  }
  uVar9 = local_1b0;
  local_1b8 = &PTR_FUN_710523d988;
  local_1b0 = 0;
  if (uVar9 != 0) {
    uVar5 = *(ulong *)(uVar9 + 0x18);
    *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar9 + 0x18) = 0;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
    FUN_710392eb40(uVar9);
  }
  return;
}

