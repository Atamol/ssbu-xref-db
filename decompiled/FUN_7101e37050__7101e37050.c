// addr:      7101e37050
// offset:    0x1e37050
// name:      FUN_7101e37050
// mangled:   
// signature: undefined __cdecl FUN_7101e37050(long param_1)


void FUN_7101e37050(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  char *pcVar4;
  long ****in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  uint auStack_188 [2];
  char acStack_180 [64];
  uint local_140;
  undefined4 uStack_13c;
  byte abStack_138 [64];
  char acStack_f8 [32];
  undefined **local_d8;
  ulong local_d0;
  byte ***apppbStack_c8 [4];
  undefined **local_a8;
  ulong local_a0 [8];
  
  lVar3 = (long)*(int *)(param_1 + 0xbf4);
  lVar1 = param_1 + lVar3 * 0x40;
  if (*(char *)(lVar1 + 0xf50) == '\0') {
    uVar6 = *(uint *)(param_1 + 0xbf8);
    lVar8 = (long)(int)uVar6;
    if (0 < *(int *)(lVar1 + lVar8 * 4 + 0xf38)) {
      pcVar4 = "set_parts_list_%02d";
      snprintf((char *)apppbStack_c8,0x20,"set_parts_list_%02d",*(int *)(param_1 + 0xbf4));
      FUN_7103776640(&local_d8,param_1 + 0xba0,apppbStack_c8,pcVar4,lVar3,in_x4,in_x5,in_x6,in_x7);
      pcVar4 = (char *)(ulong)uVar6;
      snprintf(acStack_f8,0x20,"pos_arrow_%02d",uVar6);
      abStack_138[0] = 0x6d;
      abStack_138[1] = 0x6e;
      abStack_138[2] = 0x75;
      abStack_138[3] = 0x5f;
      abStack_138[4] = 0x73;
      abStack_138[5] = 0x70;
      abStack_138[6] = 0x69;
      abStack_138[7] = 0x72;
      pbVar5 = abStack_138;
      abStack_138[8] = 0x69;
      abStack_138[9] = 0x74;
      abStack_138[10] = 0x73;
      abStack_138[0xb] = 0x5f;
      abStack_138[0xc] = 0x73;
      abStack_138[0xd] = 0x65;
      abStack_138[0xe] = 0x6c;
      abStack_138[0xf] = 0x65;
      abStack_138[0x10] = 99;
      abStack_138[0x11] = 0x74;
      abStack_138[0x1a] = 0;
      abStack_138[0x12] = 0x5f;
      abStack_138[0x13] = 0x70;
      abStack_138[0x14] = 0x65;
      abStack_138[0x15] = 100;
      abStack_138[0x16] = 0x5f;
      abStack_138[0x17] = 0x6e;
      abStack_138[0x18] = 0x61;
      abStack_138[0x19] = 0x6d;
      uVar6 = 0x811c9dc5;
      uVar7 = 0x6d;
      do {
        pbVar5 = pbVar5 + 1;
        uVar6 = uVar6 * 0x89 ^ uVar7;
        uVar7 = (uint)*pbVar5;
      } while (uVar7 != 0);
      _local_140 = CONCAT44(0x1a,uVar6);
      lVar3 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
      uVar2 = FUN_71032a9470(lVar3,*(ushort *)(lVar1 + 0xf18 + lVar8 * 2));
      FUN_71032a9540((uint *)&local_a8,lVar3,uVar2);
      FUN_71003a4ca0(auStack_188,"spi_%s",local_a0,uVar2,pcVar4,in_x4,in_x5,in_x6,in_x7);
      if (*(char *)(lVar1 + 0xf18 + lVar8 + 0xc) == '\0') {
        FUN_7103776910(&local_a8,(long)&local_d8,(long ****)"set_txt_dtl",uVar2,pcVar4,in_x4,in_x5,
                       in_x6,in_x7);
        FUN_710377a120((long)&local_a8,acStack_180,uVar2,pcVar4,in_x4,in_x5,in_x6,in_x7);
        uVar9 = local_a0[0];
        local_a8 = &PTR_FUN_710523d9a8;
        local_a0[0] = 0;
        if (uVar9 != 0) {
          FUN_710392eb40(uVar9);
        }
        FUN_7103778300(0x3f800000,local_d0,0x7104292224);
        uVar9 = local_d0;
      }
      else {
        FUN_7103776910(&local_a8,(long)&local_d8,(long ****)"set_txt_dtl",uVar2,pcVar4,in_x4,in_x5,
                       in_x6,in_x7);
        pcVar4 = acStack_180;
        uVar2 = 1;
        FUN_710377a280((long)&local_a8,abStack_138,1);
        uVar9 = local_a0[0];
        local_a8 = &PTR_FUN_710523d9a8;
        local_a0[0] = 0;
        if (uVar9 != 0) {
          FUN_710392eb40(uVar9);
        }
        FUN_7103778300(0x3f800000,local_d0,0x710424fab3);
        uVar9 = local_d0;
      }
      FUN_7103776910(&local_a8,(long)&local_d8,(long ****)"set_txt_numl_have_dtl",uVar2,pcVar4,in_x4
                     ,in_x5,in_x6,in_x7);
      FUN_710377a280((long)&local_a8,(byte *)"mnu_spirits_recall_spirit_n",1);
      uVar2 = local_a0[0];
      local_a8 = &PTR_FUN_710523d9a8;
      local_a0[0] = 0;
      if (uVar2 != 0) {
        FUN_710392eb40(uVar2);
      }
      FUN_7103778300(0x3f800000,uVar9,0x71042b48b0);
      FUN_7103778300(0x3f800000,uVar9,(long)acStack_f8);
      local_d8 = &PTR_FUN_710523d988;
      local_d0 = 0;
      if (uVar9 != 0) {
        uVar2 = *(ulong *)(uVar9 + 0x18);
        *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar9 + 0x18) = 0;
        if (uVar2 != 0) {
          FUN_710392eb40(uVar2);
        }
        FUN_710392eb40(uVar9);
      }
    }
  }
  return;
}

