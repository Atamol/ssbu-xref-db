// addr:      710020f2b0
// offset:    0x20f2b0
// name:      FUN_710020f2b0
// mangled:   
// signature: undefined __cdecl FUN_710020f2b0(undefined8 param_1, long param_2, undefined4 param_3, long param_4, uint param_5, long param_6, undefined1 * param_7)


void FUN_710020f2b0(undefined8 param_1,long param_2,int param_3,long param_4,uint param_5,
                   long param_6,undefined1 *param_7)

{
  undefined2 uVar1;
  undefined4 uVar2;
  long lVar3;
  void *pvVar4;
  size_t sVar5;
  long *plVar6;
  uint *puVar7;
  long *plVar8;
  ulong uVar9;
  code *pcVar10;
  ulong uVar11;
  byte local_a4 [4];
  undefined8 local_a0;
  ulong local_98;
  long local_90;
  long lStack_88;
  long local_78;
  byte local_68 [4];
  undefined2 local_64 [2];
  long local_60;
  long local_58;
  ulong local_50;
  long lStack_48;
  
  *(undefined8 *)(param_7 + 0x10) = 4;
  uVar2 = 0;
  if (5 < param_3 - 1U) goto switchD_710020f2fc_caseD_4;
  uVar11 = (ulong)param_5;
  switch(param_3) {
  case 1:
    if (param_6 == 0) {
      uVar2 = 0;
      goto switchD_710020f2fc_caseD_4;
    }
    uVar2 = FUN_71001bef20(param_2 + 0x140);
    uVar1 = FUN_71001beb30(param_2 + 0x140);
    local_60 = CONCAT62(local_60._2_6_,uVar1);
    local_50 = CONCAT44(local_50._4_4_,uVar2);
    memcpy(&local_a0,&local_50,4);
    memcpy((void *)((long)&local_a0 + 4),&local_60,2);
    plVar8 = *(long **)(param_6 + 8);
    pcVar10 = *(code **)(*plVar8 + 0x28);
    plVar6 = &local_a0;
    uVar9 = 6;
    break;
  case 2:
    if (DAT_71052af1d8 == '\0') {
LAB_710020f578:
      plVar6 = *(long **)(&DAT_71052af5f0 + uVar11 * 0x2e8);
    }
    else {
      puVar7 = (uint *)FUN_7101717960(DAT_71052af1d0);
      if (*puVar7 == 0) goto LAB_710020f578;
      plVar6 = *(long **)(*(long *)(&DAT_71052af4e8 + uVar11 * 0x2e8) + (ulong)*puVar7 * 0x168 +
                         0x100);
    }
    if (plVar6 != (long *)0x0) {
      lVar3 = *(long *)(param_2 + 0x138);
      uVar2 = 0x12345678;
      if ((lVar3 != 0) && (local_58 = *(long *)(lVar3 + 0x18), local_58 != 0)) {
        local_60 = 0;
        lStack_48 = *(long *)(lVar3 + 0x10) + *(long *)(lVar3 + 0x28);
        local_50 = 0;
        uVar2 = (**(code **)(*plVar6 + 0x30))(plVar6,&local_50,&local_60,2);
      }
      goto switchD_710020f2fc_caseD_4;
    }
LAB_710020f7a4:
    uVar2 = 0x9999;
    goto switchD_710020f2fc_caseD_4;
  case 3:
    local_64[0] = *(undefined2 *)(param_2 + 0x70);
    local_68[0] = *(byte *)(param_2 + 0xa0);
    lVar3 = FUN_71001cbc40(param_4);
    local_a0 = &PTR_FUN_7104f56018;
    local_98 = CONCAT35(local_98._5_3_,1);
    FUN_71001cf760((long)&local_a0,lVar3 + 3,0);
    pvVar4 = (void *)FUN_71001d6920(param_4);
    sVar5 = FUN_71001cbc40(param_4);
    FUN_71001cb870((long)&local_a0,pvVar4,sVar5,0xffffffffffffffff);
    FUN_71001cb870((long)&local_a0,local_64,2,0xffffffffffffffff);
    FUN_71001cb870((long)&local_a0,local_68,1,0xffffffffffffffff);
    if (DAT_71052af1d8 == '\0') {
LAB_710020f5e0:
      plVar6 = *(long **)(&DAT_71052af5f0 + uVar11 * 0x2e8);
      if (plVar6 == (long *)0x0) goto LAB_710020f4c4;
LAB_710020f5fc:
      lVar3 = *(long *)(param_2 + 0x138);
      if (lVar3 == 0) {
        if (lStack_88 == 0) goto LAB_710020f818;
        uVar2 = (**(code **)(*plVar6 + 0x28))(plVar6,local_90 + local_78,lStack_88);
      }
      else if (*(long *)(lVar3 + 0x18) == 0 && lStack_88 == 0) {
LAB_710020f818:
        uVar2 = 0x12345678;
      }
      else {
        local_60 = lStack_88;
        lStack_48 = *(long *)(lVar3 + 0x10) + *(long *)(lVar3 + 0x28);
        local_58 = *(long *)(lVar3 + 0x18);
        local_50 = local_90 + local_78;
        uVar2 = (**(code **)(*plVar6 + 0x30))(plVar6,&local_50,&local_60,2);
      }
    }
    else {
      puVar7 = (uint *)FUN_7101717960(DAT_71052af1d0);
      if (*puVar7 == 0) goto LAB_710020f5e0;
      plVar6 = *(long **)(*(long *)(&DAT_71052af4e8 + uVar11 * 0x2e8) + (ulong)*puVar7 * 0x168 +
                         0x100);
      if (plVar6 != (long *)0x0) goto LAB_710020f5fc;
LAB_710020f4c4:
      uVar2 = 0x9999;
    }
    FUN_71001cfad0(&local_a0);
  default:
    goto switchD_710020f2fc_caseD_4;
  case 6:
    local_60 = CONCAT62(local_60._2_6_,*(undefined2 *)(param_2 + 0x70));
    local_64[0] = CONCAT11(local_64[0]._1_1_,*(undefined1 *)(param_2 + 0xa1));
    local_68[0] = *(byte *)(param_2 + 0x43) & 0xf | *(char *)(param_2 + 0x42) << 4;
    uVar9 = local_50 >> 0x20;
    local_50 = local_50 & 0xffffffff00000000;
    local_a4[0] = *(byte *)(param_2 + 0x45) & 0xf | *(char *)(param_2 + 0x44) << 4;
    if (*(long *)(param_2 + 0x138) != 0) {
      local_50 = CONCAT44((int)uVar9,(int)*(undefined8 *)(*(long *)(param_2 + 0x138) + 0x18));
    }
    plVar6 = &local_90;
    local_a0 = &PTR_FUN_7104f59738;
    local_98 = 2;
    memcpy(plVar6,&local_60,2);
    uVar9 = local_98;
    if (local_98 < local_98 + 1) {
      uVar9 = local_98 + 1;
    }
    if (uVar9 < 0xb) {
      pvVar4 = (void *)((long)&local_90 + local_98);
      local_98 = uVar9;
      memcpy(pvVar4,local_64,1);
    }
    else {
      FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/LiteBuffer.h",0x4e,0xe0000019,0);
    }
    uVar9 = local_98;
    if (local_98 < local_98 + 1) {
      uVar9 = local_98 + 1;
    }
    if (uVar9 < 0xb) {
      pvVar4 = (void *)((long)&local_90 + local_98);
      local_98 = uVar9;
      memcpy(pvVar4,local_68,1);
    }
    else {
      FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/LiteBuffer.h",0x4e,0xe0000019,0);
    }
    uVar9 = local_98;
    if (local_98 < local_98 + 1) {
      uVar9 = local_98 + 1;
    }
    if (uVar9 < 0xb) {
      pvVar4 = (void *)((long)&local_90 + local_98);
      local_98 = uVar9;
      memcpy(pvVar4,local_a4,1);
    }
    else {
      FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/LiteBuffer.h",0x4e,0xe0000019,0);
    }
    uVar9 = local_98 + 4;
    if (local_98 + 4 <= local_98) {
      uVar9 = local_98;
    }
    if (uVar9 < 0xb) {
      pvVar4 = (void *)((long)&local_90 + local_98);
      local_98 = uVar9;
      memcpy(pvVar4,&local_50,4);
    }
    else {
      FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/LiteBuffer.h",0x4e,0xe0000019,0);
    }
    uVar9 = local_98;
    if (DAT_71052af1d8 == '\0') {
LAB_710020f7ac:
      plVar8 = *(long **)(&DAT_71052af5f0 + uVar11 * 0x2e8);
    }
    else {
      puVar7 = (uint *)FUN_7101717960(DAT_71052af1d0);
      if (*puVar7 == 0) goto LAB_710020f7ac;
      plVar8 = *(long **)(*(long *)(&DAT_71052af4e8 + uVar11 * 0x2e8) + (ulong)*puVar7 * 0x168 +
                         0x100);
    }
    if (plVar8 == (long *)0x0) goto LAB_710020f7a4;
    if (uVar9 == 0) {
      uVar2 = 0x12345678;
      goto switchD_710020f2fc_caseD_4;
    }
    pcVar10 = *(code **)(*plVar8 + 0x28);
  }
  uVar2 = (*pcVar10)(plVar8,plVar6,uVar9);
switchD_710020f2fc_caseD_4:
  param_7[1] = (char)((uint)uVar2 >> 8);
  *param_7 = (char)uVar2;
  param_7[2] = (char)((uint)uVar2 >> 0x10);
  param_7[3] = (char)((uint)uVar2 >> 0x18);
  return;
}

