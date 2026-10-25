// addr:      7101d67dd0
// offset:    0x1d67dd0
// name:      FUN_7101d67dd0
// mangled:   
// signature: undefined __cdecl FUN_7101d67dd0(long param_1, long param_2, undefined * * param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101d67dd0(long param_1,long param_2,undefined **param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  char *pcVar5;
  undefined **ppuVar6;
  byte *pbVar7;
  uint uVar8;
  undefined **local_88;
  ulong local_80;
  uint local_78 [2];
  undefined4 local_70;
  undefined2 local_6c;
  undefined1 local_6a;
  
  ppuVar6 = param_3;
  FUN_7103776910(&local_88,param_1,(long ****)"set_txt_rank_01",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  if (*(char *)(param_2 + 0x37ec) == '\0') {
    if (((DAT_71053144d8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_71053144d8), iVar3 != 0)) {
      FUN_7101764000();
      ppuVar6 = &PTR_LOOP_7104f17000;
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    bVar1 = DAT_71052c51b0;
    if (((DAT_71053144d8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_71053144d8), iVar3 != 0)) {
      FUN_7101764000();
      ppuVar6 = &PTR_LOOP_7104f17000;
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    if (DAT_71052cc5f0 != '\0') {
      bVar1 = DAT_71052c51b1;
    }
    if (((bVar1 < 0x26) && ((1L << ((ulong)(uint)bVar1 & 0x3f) & 0x200101c000U) != 0)) ||
       (*(char *)(param_2 + 10) == '\0')) {
      FUN_71003a4ca0(local_78,"cmn_%dp",(ulong)param_3 & 0xffffffff,ppuVar6,param_4,param_5,param_6,
                     param_7,param_8);
      pcVar5 = (char *)&local_70;
      FUN_710377a120((long)&local_88,pcVar5,ppuVar6,param_4,param_5,param_6,param_7,param_8);
      local_70 = local_70 & 0xffffff00;
      local_78[0] = 0;
      local_78[1] = 0;
      FUN_710062dc20(local_78,"player_color_%dp");
      lVar4 = *(long *)(param_1 + 8);
    }
    else {
      local_70 = 0x5f6e6d63;
      local_78[0] = 0x811c9dc5;
      local_6c = 0x7063;
      uVar8 = 99;
      local_6a = 0;
      pbVar7 = (byte *)((long)&local_70 + 1);
      do {
        local_78[0] = local_78[0] * 0x89 ^ uVar8;
        uVar8 = (uint)*pbVar7;
        pbVar7 = pbVar7 + 1;
      } while (uVar8 != 0);
      local_78[1] = 6;
      FUN_710377a120((long)&local_88,(char *)&local_70,ppuVar6,param_4,param_5,param_6,param_7,
                     param_8);
      lVar4 = *(long *)(param_1 + 8);
      pcVar5 = "player_color_cp";
    }
  }
  else {
    local_70 = 0x5f6e6d63;
    local_78[0] = 0x811c9dc5;
    local_6c = 0x7066;
    uVar8 = 99;
    local_6a = 0;
    pbVar7 = (byte *)((long)&local_70 + 1);
    do {
      local_78[0] = local_78[0] * 0x89 ^ uVar8;
      uVar8 = (uint)*pbVar7;
      pbVar7 = pbVar7 + 1;
    } while (uVar8 != 0);
    local_78[1] = 6;
    FUN_710377a120((long)&local_88,(char *)&local_70,ppuVar6,param_4,param_5,param_6,param_7,param_8
                  );
    lVar4 = *(long *)(param_1 + 8);
    pcVar5 = "player_color_fp";
  }
  FUN_7103778300(0x3f800000,lVar4,(long)pcVar5);
  uVar2 = local_80;
  local_88 = &PTR_FUN_710523d9a8;
  local_80 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  return;
}

