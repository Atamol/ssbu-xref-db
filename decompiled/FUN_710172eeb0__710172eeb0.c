// addr:      710172eeb0
// offset:    0x172eeb0
// name:      FUN_710172eeb0
// mangled:   
// signature: undefined8 __cdecl FUN_710172eeb0(undefined1 * * param_1, long param_2)


/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_710172eeb0(undefined1 **param_1,long param_2)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  ulong uVar4;
  code *pcVar5;
  byte *pbVar6;
  uint uVar7;
  long *plVar8;
  undefined1 *puVar9;
  undefined1 auVar10 [16];
  undefined ***local_1f8;
  undefined1 local_1f0 [16];
  undefined1 *local_1e0;
  undefined8 uStack_1d8;
  undefined **local_1d0;
  byte local_1c8 [16];
  byte *local_1b8;
  undefined8 uStack_1b0;
  undefined **local_188;
  undefined1 local_180 [16];
  undefined1 *local_170;
  undefined8 local_168;
  undefined **local_160;
  code *local_158;
  undefined **local_150;
  code **local_148;
  undefined ***local_140;
  code ***local_138;
  undefined8 uStack_130;
  undefined **local_128;
  undefined1 local_120 [16];
  undefined1 *local_110;
  undefined8 uStack_108;
  undefined8 **local_100;
  undefined8 *local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined **local_e0;
  undefined1 local_d8 [16];
  undefined1 *local_c8;
  undefined8 uStack_c0;
  undefined **local_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  undefined **local_a0;
  undefined1 local_98 [16];
  undefined1 *local_88;
  undefined8 uStack_80;
  undefined ****local_70 [2];
  
  plVar8 = *(long **)(param_2 + 0x10);
  if (*plVar8 == 0) {
    return 2;
  }
  puVar9 = param_1[4];
  local_88 = local_98;
  local_b0 = 0;
  local_98[0] = 0;
  local_b8 = &PTR_FUN_710509d150;
  local_a8 = 0;
  local_a0 = &PTR_FUN_710509cc08;
  uStack_80 = 0x10;
  local_160 = &PTR_FUN_710509cc08;
  local_140 = (undefined ***)0x10;
  local_158 = (code *)((ulong)local_158 & 0xffffffffffffff00);
  local_148 = &local_158;
  FUN_71001b47e0((long)&local_160,"",-1);
  FUN_71001b2f70((long)&local_a0,(long)&local_160);
  local_160 = &PTR_FUN_710509cc08;
  FUN_71001b4910((long)&local_160);
  local_a8 = *(undefined8 *)(puVar9 + 0x358);
  local_160 = &PTR_FUN_710509cc08;
  local_140 = (undefined ***)0x10;
  local_158 = (code *)((ulong)local_158 & 0xffffffffffffff00);
  local_148 = &local_158;
  FUN_71001b47e0((long)&local_160,"USER",-1);
  FUN_71001b2f70((long)&local_a0,(long)&local_160);
  local_160 = &PTR_FUN_710509cc08;
  FUN_71001b4910((long)&local_160);
  local_138 = &local_148;
  uStack_130 = 0x10;
  local_110 = local_120;
  uStack_108 = 0x10;
  local_100 = &local_f8;
  local_148 = (code **)((ulong)local_148 & 0xffffffffffffff00);
  local_c8 = local_d8;
  local_158 = (code *)((ulong)local_158 & 0xffffffffffffff00);
  local_150 = &PTR_FUN_710509cc08;
  local_128 = &PTR_FUN_710509cc08;
  local_120[0] = 0;
  local_e0 = &PTR_FUN_710509cc08;
  local_d8[0] = 0;
  uStack_c0 = 0x10;
  local_160 = &PTR_FUN_710509d170;
  local_f8 = (undefined8 *)0x0;
  uStack_f0 = 0;
  FUN_7101711420((long)&local_160);
  uVar3 = 0;
  if ((ulong)(long)(char)puVar9[0x360] < 6) {
    uVar3 = *(uint *)(&DAT_7104543230 + (long)(char)puVar9[0x360] * 4);
  }
  FUN_71002aedf0((long)&local_160,uVar3);
  if (DAT_710523d00c < 0xe) {
    uVar2 = *(undefined4 *)(&DAT_7104742ec0 + (long)(int)DAT_710523d00c * 4);
  }
  else {
    uVar2 = 1;
  }
  local_188 = (undefined **)nn::settings::LanguageCode::Make(uVar2);
  if (((ulong)local_188 & 0xff) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    do {
      local_1c8[uVar4] = (byte)local_188;
      if (0x3e < (int)uVar4 + 1U) {
        uVar4 = (ulong)((int)uVar4 + 1);
        break;
      }
      bVar1 = *(byte *)(((ulong)&local_188 | 1) + uVar4);
      local_188 = (undefined **)(ulong)bVar1;
      uVar4 = uVar4 + 1;
    } while (bVar1 != 0);
  }
  uVar3 = 0x811c9dc5;
  local_1c8[uVar4 & 0xffffffff] = 0;
  uVar7 = (uint)local_1c8[0];
  if (local_1c8[0] != 0) {
    pbVar6 = local_1c8;
    do {
      pbVar6 = pbVar6 + 1;
      uVar3 = uVar3 * 0x89 ^ uVar7;
      uVar7 = (uint)*pbVar6;
    } while (uVar7 != 0);
  }
  local_1d0 = (undefined **)CONCAT44((int)uVar4,uVar3);
  local_188 = &PTR_FUN_710509cc08;
  local_180[0] = 0;
  local_168 = 0x10;
  local_170 = local_180;
  FUN_71001b47e0((long)&local_188,(char *)local_1c8,-1);
  FUN_71001b2f70((long)&local_e0,(long)&local_188);
  local_188 = &PTR_FUN_710509cc08;
  FUN_71001b4910((long)&local_188);
  local_1d0 = &PTR_FUN_710509cc08;
  uStack_1b0 = 0x10;
  local_1c8[0] = 0;
  local_1b8 = local_1c8;
  FUN_71001b4b40((long)&local_1d0,(ushort *)(puVar9 + 0x10),-1);
  FUN_71001b2f70((long)&local_128,(long)&local_1d0);
  local_1d0 = &PTR_FUN_710509cc08;
  FUN_71001b4910((long)&local_1d0);
  local_1d0 = &PTR_FUN_710509cc08;
  uStack_1b0 = 0x10;
  local_e8 = NEON_ucvtf((ulong)*(uint *)(puVar9 + 0x354));
  local_1c8[0] = 0;
  local_1b8 = local_1c8;
  FUN_71001b4b40((long)&local_1d0,(ushort *)(puVar9 + 0x33c),-1);
  local_188 = &PTR_FUN_710509cc08;
  local_180[0] = 0;
  local_168 = 0x10;
  local_170 = local_180;
  FUN_71001b47e0((long)&local_188,"user_name",-1);
  local_1f8 = &local_188;
  auVar10 = FUN_7101711530((long *)&local_100,(long)&local_188,&DAT_7104543248,(long *)&local_1f8);
  FUN_71001b2f70(auVar10._0_8_ + 0x48,(long)&local_1d0);
  local_188 = &PTR_FUN_710509cc08;
  FUN_71001b4910((long)&local_188);
  if (puVar9[0x361] != '\0') {
    local_188 = &PTR_FUN_710509cc08;
    local_180[0] = 0;
    local_168 = 0x10;
    local_170 = local_180;
    FUN_71001b47e0((long)&local_188,"cheat",-1);
    local_1e0 = local_1f0;
    local_1f8 = (undefined ***)&PTR_FUN_710509cc08;
    uStack_1d8 = 0x10;
    local_1f0[0] = 0;
    FUN_71001b47e0((long)&local_1f8,"auto_report",-1);
    local_70[0] = &local_1f8;
    auVar10 = FUN_7101711530((long *)&local_100,(long)&local_1f8,&DAT_7104543248,(long *)local_70);
    FUN_71001b2f70(auVar10._0_8_ + 0x48,(long)&local_188);
    local_1f8 = (undefined ***)&PTR_FUN_710509cc08;
    FUN_71001b4910((long)&local_1f8);
    local_188 = &PTR_FUN_710509cc08;
    FUN_71001b4910((long)&local_188);
  }
  local_1d0 = &PTR_FUN_710509cc08;
  FUN_71001b4910((long)&local_1d0);
  uVar3 = FUN_71002ae5e0(*plVar8,plVar8 + 1,(long)&local_b8,(ulong)&local_160);
  local_160 = &PTR_FUN_710509d190;
  local_e0 = &PTR_FUN_710509cc08;
  FUN_71001b4910((long)&local_e0);
  FUN_7101711670(&local_100,local_f8);
  local_128 = &PTR_FUN_710509cc08;
  FUN_71001b4910((long)&local_128);
  local_150 = &PTR_FUN_710509cc08;
  FUN_71001b4910((long)&local_150);
  local_b8 = &PTR_FUN_710509d1b0;
  local_a0 = &PTR_FUN_710509cc08;
  FUN_71001b4910((long)&local_a0);
  if ((uVar3 & 1) != 0) {
    local_160 = &PTR_FUN_710509e168;
    local_158 = FUN_710172fa50;
    local_150 = (undefined **)0x0;
    local_148 = (code **)param_1;
    local_140 = &local_160;
    FUN_710172f390((long *)&local_160,(long *)(param_1 + 0x12));
    if (&local_160 == local_140) {
      pcVar5 = (code *)(*local_140)[4];
    }
    else {
      if (local_140 == (undefined ***)0x0) {
        return 0;
      }
      pcVar5 = (code *)(*local_140)[5];
    }
    (*pcVar5)();
    return 0;
  }
  return 2;
}

