// addr:      71019662a0
// offset:    0x19662a0
// name:      FUN_71019662a0
// mangled:   
// signature: undefined __cdecl FUN_71019662a0(long param_1, long param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71019662a0(long param_1,long param_2,undefined **param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 uVar6;
  bool bVar7;
  uint uVar8;
  undefined8 *puVar9;
  long lVar10;
  uint uVar11;
  byte *pbVar12;
  long lVar13;
  uint *puVar14;
  long lVar15;
  undefined8 local_e0;
  byte local_d8 [64];
  undefined8 local_98;
  byte local_90 [64];
  
  if (*(int *)(param_1 + 0xec) == 0) {
    *(undefined4 *)(param_1 + 0x10c) = 0;
  }
  if ((*(char *)(*(long *)(DAT_710532f7c8 + 8) + 0x6a) == '\0') ||
     (*(char *)(*(long *)(DAT_710532f7c8 + 8) + 0x6b) != '\0')) {
    bVar7 = true;
  }
  else {
    *(int *)(param_1 + 0x10c) = *(int *)(param_1 + 0x10c) + 1;
    bVar7 = false;
  }
  lVar10 = DAT_710532f8b0;
  if ((*(long *)(*lib::Singleton<app::FighterManager>::instance_ + 0x20) == 0) ||
     (*(char *)(*(long *)(*lib::Singleton<app::FighterManager>::instance_ + 0x20) + 0x5920) ==
      '\x06')) {
    if (bVar7) {
      return;
    }
  }
  else if (bVar7 || *(uint *)(param_1 + 0x10c) < 0x3c) {
    return;
  }
  lVar15 = *(long *)(DAT_710532f8b0 + 8);
  local_98 = (long ***)*DAT_71052b8f00;
  lVar13 = lVar15 + 0x360;
  FUN_71004f2980(&local_98,lVar13);
  *(undefined4 *)(lVar15 + 0x370) = 1;
  FUN_7100519ee0(lVar13);
  uVar6 = extraout_x1;
  if (*(char *)(lVar15 + 0x37c) != '\0') {
    (**(code **)(*(long *)(*DAT_71052b8f00 + 0xa30) + 0x18))(*DAT_71052b8f00 + 0xa30,lVar13);
    *(undefined1 *)(lVar15 + 0x37c) = 0;
    uVar6 = extraout_x1_00;
  }
  lVar13 = *(long *)(lVar10 + 8);
  if ((*(char *)(lVar13 + 0x2d3) != '\0') &&
     (plVar4 = *(long **)(lVar13 + 0x330), plVar4 != (long *)0x0)) {
    (**(code **)(*plVar4 + 0x520))(plVar4,0);
    *(undefined8 *)(lVar13 + 0x330) = 0;
    uVar6 = extraout_x1_01;
  }
  FUN_71015d4420(lib::Singleton<app::ItemManager>::instance_,uVar6,(long *********)param_3,param_4,
                 param_5,param_6,param_7,param_8);
  if ((DAT_710532f7a0 != (undefined8 *)0x0) &&
     (puVar14 = (uint *)*DAT_710532f7a0, ((byte)*puVar14 >> 1 & 1) != 0)) {
    lVar13 = *(long *)(*lib::Singleton<app::FighterManager>::instance_ + 0x20);
    if ((lVar13 != 0) && (*(char *)(lVar13 + 0x5920) == '\x06')) {
      FUN_7100653490(lVar13,0);
    }
    puVar14[0x12] = 3;
    if ((((puVar14[0x26] != 2) && (puVar14[0x3a] != 2)) && (puVar14[0x4e] != 2)) &&
       (((puVar14[0x62] != 2 && (puVar14[0x76] != 2)) &&
        ((puVar14[0x8a] != 2 && (puVar14[0x9e] != 2)))))) {
      *puVar14 = *puVar14 | 0x20;
    }
  }
  if (((DAT_71052c3420 != 0) &&
      (lVar13 = **(long **)(DAT_71052c3420 + 8), *(long *)(lVar13 + 0xa60) != 0)) &&
     ((uVar5 = (**(code **)(*(long *)(lVar13 + 0xa58) + 0x10))(), (uVar5 & 1) != 0 &&
      (((DAT_710532f8b0 == 0 || (*(int *)(*(long *)(DAT_710532f8b0 + 8) + 0x138) == 0)) ||
       (*(char *)(*(long *)(DAT_710532f8b0 + 8) + 0x2b8) != '\v')))))) {
    (**(code **)(*(long *)(**(long **)(lVar13 + 0xa60) + 0xce0) + 0x20))
              (**(long **)(lVar13 + 0xa60) + 0xce0,0x1f,1);
    param_3 = (undefined **)0x0;
    (**(code **)(*(long *)(**(long **)(lVar13 + 0xa60) + 0xce0) + 0x20))
              (**(long **)(lVar13 + 0xa60) + 0xce0,0x20);
  }
  if (((((DAT_71052c3420 != 0) &&
        (plVar4 = *(long **)(**(long **)(DAT_71052c3420 + 8) + 0xc68), plVar4[1] != 0)) &&
       (uVar5 = (**(code **)(*plVar4 + 0x10))(plVar4), (uVar5 & 1) != 0)) &&
      (((DAT_710532f8b0 == 0 || (*(int *)(*(long *)(DAT_710532f8b0 + 8) + 0x138) == 0)) ||
       (*(char *)(*(long *)(DAT_710532f8b0 + 8) + 0x2b8) != '\v')))) &&
     (*(char *)(*(long *)plVar4[1] + 0x70) != '\0')) {
    lVar13 = *(long *)(*(long *)plVar4[1] + 0xb0);
    bVar1 = *(byte *)(**(long **)(*(long *)(lVar13 + 8) + 8) +
                      (long)(int)*(uint *)((long)plVar4 + 0x14) * 0x1d8 + 0xdb1);
    param_3 = (undefined **)(ulong)bVar1;
    FUN_7101399df0(lVar13,*(uint *)((long)plVar4 + 0x14),bVar1);
  }
  plVar4 = *(long **)(*(long *)(lVar10 + 8) + 0x340);
  if (plVar4 == (long *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (**(code **)(*plVar4 + 0x20))();
  }
  if (((DAT_71053144d8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_71053144d8), iVar3 != 0)) {
    FUN_7101764000();
    param_3 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  if (uVar2 != 0xffffffff) {
    puVar9 = &DAT_7105339830;
    if ((((9 < uVar2) || (*(char *)(DAT_71053398b0 + 8) == '\0')) ||
        (puVar9 = (undefined8 *)(&DAT_7105339860)[(int)uVar2], puVar9 != (undefined8 *)0x0)) &&
       (uVar8 = *(int *)(puVar9[2] + 0x9c) - 1, uVar8 < 7)) {
      DAT_7105307b68._4_4_ = *(uint *)(&DAT_7104753de0 + (long)(int)uVar8 * 4);
    }
    DAT_7105307b68._0_4_ = uVar2;
    if (DAT_710593ba90 != (long *)0x0) {
      *(uint *)(*DAT_710593ba90 + 0x3ac) = DAT_7105307b68._4_4_;
    }
    if (DAT_710532f7f0 != 0) {
      FUN_7101afe3e0(*(long *)(*(long *)(*(long *)(DAT_710532f7f0 + 8) + 8) + 0x80),
                     DAT_7105307b68._4_4_,(long ****)param_3,param_4,param_5,param_6,param_7,param_8
                    );
    }
  }
  if (*(char *)(param_1 + 0x100) != '\0') {
    FUN_7103726af0(*(long *)(param_2 + 8),0);
    return;
  }
  if (((DAT_71053144d8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_71053144d8), iVar3 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  FUN_710179d930();
  DAT_7105308760 = &DAT_100000001;
  if (DAT_7105308768 != 1) {
    DAT_7105308768 = 1;
    lVar10 = *(long *)(*(long *)(DAT_71052c4c58 + 8) + 0x88);
    if (*(char *)(lVar10 + 0x26a62) == '\0') {
      *(ulong *)(lVar10 + 0x26a90) = *(ulong *)(lVar10 + 0x26a90) | 1;
    }
  }
  lVar10 = *(long *)(param_2 + 8);
  for (uVar5 = 0; "CharaSelectScene"[uVar5] != 0; uVar5 = uVar5 + 2) {
    bVar1 = "CharaSelectScene"[uVar5 + 1];
    local_d8[uVar5] = "CharaSelectScene"[uVar5];
    if (bVar1 == 0) {
      uVar5 = uVar5 + 1;
      break;
    }
    local_d8[uVar5 + 1] = bVar1;
  }
  uVar8 = 0x811c9dc5;
  local_d8[uVar5 & 0xffffffff] = 0;
  uVar11 = (uint)local_d8[0];
  uVar2 = uVar8;
  if (local_d8[0] != 0) {
    pbVar12 = local_d8;
    do {
      pbVar12 = pbVar12 + 1;
      uVar2 = uVar2 * 0x89 ^ uVar11;
      uVar11 = (uint)*pbVar12;
    } while (uVar11 != 0);
  }
  local_e0 = CONCAT44((int)uVar5,uVar2);
  lVar13 = *(long *)(lVar10 + 0x38);
  if (lVar13 == 0) {
    local_90[0] = 0;
    local_98 = (long ***)0x0;
  }
  else {
    uVar5 = 0;
    while( true ) {
      pbVar12 = (byte *)(lVar13 + 0x10 + uVar5);
      bVar1 = *pbVar12;
      if (bVar1 == 0) break;
      local_90[uVar5] = bVar1;
      if (0x3e < (int)uVar5 + 1U) {
        uVar5 = (ulong)((int)uVar5 + 1);
        break;
      }
      bVar1 = pbVar12[1];
      if (bVar1 == 0) {
        uVar5 = uVar5 + 1;
        break;
      }
      local_90[uVar5 + 1] = bVar1;
      uVar5 = uVar5 + 2;
    }
    local_90[uVar5 & 0xffffffff] = 0;
    uVar2 = (uint)local_90[0];
    local_98 = (long ***)(uVar5 << 0x20);
    if (local_90[0] != 0) {
      pbVar12 = local_90;
      do {
        pbVar12 = pbVar12 + 1;
        uVar8 = uVar8 * 0x89 ^ uVar2;
        uVar2 = (uint)*pbVar12;
      } while (uVar2 != 0);
    }
    local_98 = (long ***)CONCAT44((int)uVar5,uVar8);
  }
  FUN_71037266d0(*(long *)(lVar10 + 0x20),&local_e0,(long ****)&local_98,(byte ****)0x0,param_5,
                 param_6,param_7,param_8);
  *(undefined4 *)(lVar10 + 0x30) = 1;
  if (*(uint *)(param_1 + 0xe4) < 0x13) {
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0xe4) * 4 + 0x98) = 4;
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

