// addr:      710023d030
// offset:    0x23d030
// name:      FUN_710023d030
// mangled:   
// signature: undefined __cdecl FUN_710023d030(long param_1)


void FUN_710023d030(long param_1)

{
  short sVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  uint *puVar6;
  undefined8 *puVar7;
  undefined4 *puVar8;
  long *plVar9;
  undefined2 uVar10;
  undefined8 local_280;
  undefined1 local_278 [16];
  undefined1 *local_268;
  undefined8 local_260;
  undefined4 auStack_258 [6];
  undefined **local_240;
  char local_238 [16];
  char *local_228;
  undefined8 local_220;
  undefined **local_218;
  code *local_210;
  undefined8 uStack_208;
  undefined1 *local_200;
  undefined4 auStack_c8 [6];
  undefined4 auStack_b0 [6];
  undefined4 auStack_98 [6];
  undefined4 auStack_80 [6];
  undefined4 auStack_68 [6];
  
  lVar4 = FUN_71001b52a0(param_1 + 0xa8);
  if (lVar4 == 0) {
    local_218 = (undefined **)CONCAT44(local_218._4_4_,0x8001000a);
    FUN_71001b4200(auStack_68,(undefined4 *)&local_218);
    puVar8 = auStack_68;
    goto LAB_710023d0f4;
  }
  if (*(long *)(param_1 + 0xd0) == 0) {
    local_218 = (undefined **)CONCAT44(local_218._4_4_,0x8001000a);
    FUN_71001b4200(auStack_80,(undefined4 *)&local_218);
    puVar8 = auStack_80;
    goto LAB_710023d0f4;
  }
  lVar4 = param_1 + 0xd8;
  lVar5 = FUN_71001b52a0(lVar4);
  if ((lVar5 == 0) && (lVar5 = FUN_71001b52a0(param_1 + 0x108), lVar5 == 0)) {
    local_218 = (undefined **)CONCAT44(local_218._4_4_,0x8001000a);
    FUN_71001b4200(auStack_98,(undefined4 *)&local_218);
    FUN_710023d9c0(param_1,auStack_98);
    sVar1 = *(short *)(param_1 + 0x100);
  }
  else {
    sVar1 = *(short *)(param_1 + 0x100);
  }
  if ((sVar1 == 0) && (lVar5 = FUN_71001b52a0(param_1 + 0x108), lVar5 == 0)) {
    local_218 = (undefined **)CONCAT44(local_218._4_4_,0x8001000a);
    FUN_71001b4200(auStack_b0,(undefined4 *)&local_218);
    puVar8 = auStack_b0;
    goto LAB_710023d0f4;
  }
  bVar2 = FUN_71001b4e00(*(char **)(param_1 + 0x120),"");
  if (bVar2) goto LAB_710023d158;
  if (DAT_71052b5940 == '\0') goto LAB_710023d2ec;
  plVar9 = &DAT_71052af1a0;
  if (DAT_71052af1d8 == '\0') {
LAB_710023d1dc:
    lVar5 = 0;
    if (*plVar9 != 0) {
      lVar5 = *(long *)(*plVar9 + 0x10);
    }
    lVar5 = FUN_71001b52a0(lVar5 + 0x88);
  }
  else {
    puVar6 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar3 = *puVar6;
    if (uVar3 == 0) goto LAB_710023d1dc;
    if ((ulong)uVar3 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar9 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar3 * 8) + 0x88);
      goto LAB_710023d1dc;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
    lVar5 = FUN_71001b52a0(0x88);
  }
  if (lVar5 == 0) {
LAB_710023d2ec:
    FUN_71001de2c0((long)&local_218,param_1 + 0x108);
    lVar5 = FUN_71001dec00((long)&local_218);
    local_238[0] = '\0';
    local_240 = &PTR_FUN_710509cc08;
    local_228 = local_238;
    local_220 = 0x10;
    FUN_71001b47e0((long)&local_240,*(char **)(lVar5 + 0x18),-1);
    bVar2 = FUN_71001b4e00(local_228,"http");
    if ((((bVar2) || (bVar2 = FUN_71001b4e00(local_228,"https"), bVar2)) ||
        (bVar2 = FUN_71001b4e00(local_228,"ws"), bVar2)) ||
       (bVar2 = FUN_71001b4e00(local_228,"wss"), bVar2)) {
      uVar3 = FUN_71001dec20((long)&local_218);
      *(short *)(param_1 + 0x100) = (short)uVar3;
      if ((uVar3 & 0xffff) == 0) {
        bVar2 = FUN_71001b4e00(local_228,"https");
        uVar10 = 0x1bb;
        if (!bVar2) {
          bVar2 = FUN_71001b4e00(local_228,"wss");
          uVar10 = 0x1bb;
          if (!bVar2) {
            uVar10 = 0x50;
          }
        }
        *(undefined2 *)(param_1 + 0x100) = uVar10;
      }
      lVar5 = FUN_71001dec10((long)&local_218);
      local_268 = local_278;
      local_278[0] = 0;
      local_260 = 0x10;
      local_280 = &PTR_FUN_710509cc08;
      FUN_71001b47e0((long)&local_280,*(char **)(lVar5 + 0x18),-1);
      plVar9 = (long *)(param_1 + 0x138);
      FUN_71001d1590(plVar9);
      FUN_71001e1260(param_1 + 0x4c8,plVar9,(long)&local_280,lVar4);
      FUN_71001d6410(param_1,2);
      puVar7 = FUN_71001af850(0x20);
      if (puVar7 != (undefined8 *)0x0) {
        puVar7[2] = 0;
        puVar7[3] = &DAT_71044114cc;
        *puVar7 = &PTR_FUN_7104f56e28;
        puVar7[1] = FUN_710023e1f0;
      }
      FUN_71001d4200(param_1,(long)plVar9,puVar7);
      local_280 = &PTR_FUN_710509cc08;
      FUN_71001b4910((long)&local_280);
    }
    else {
      local_280 = (undefined **)CONCAT44(local_280._4_4_,0x8001000a);
      FUN_71001b4200(auStack_258,(undefined4 *)&local_280);
      FUN_710023d9c0(param_1,auStack_258);
    }
    local_240 = &PTR_FUN_710509cc08;
    FUN_71001b4910((long)&local_240);
    FUN_71001de8c0((long)&local_218);
    return;
  }
  plVar9 = &DAT_71052af1a0;
  if (DAT_71052af1d8 != '\0') {
    puVar6 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar3 = *puVar6;
    if (uVar3 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar3) goto LAB_710023d568;
      plVar9 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar3 * 8) + 0x88);
    }
  }
  bVar2 = FUN_71001b4e00(*(char **)(param_1 + 0x120),*(char **)(*(long *)(*plVar9 + 0x10) + 0xd0));
  if (!bVar2) {
    local_218 = (undefined **)CONCAT44(local_218._4_4_,0x8001000a);
    FUN_71001b4200(auStack_c8,(undefined4 *)&local_218);
    puVar8 = auStack_c8;
LAB_710023d0f4:
    FUN_710023d9c0(param_1,puVar8);
    return;
  }
  plVar9 = &DAT_71052af1a0;
  if (DAT_71052af1d8 == '\0') {
LAB_710023d294:
    lVar5 = 0;
    if (*plVar9 != 0) {
      lVar5 = *(long *)(*plVar9 + 0x10);
    }
  }
  else {
    puVar6 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar3 = *puVar6;
    if (uVar3 == 0) goto LAB_710023d294;
    if ((ulong)uVar3 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar9 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar3 * 8) + 0x88);
      goto LAB_710023d294;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
    lVar5 = 0;
  }
  FUN_71001b2f70(lVar4,lVar5 + 0x88);
  plVar9 = &DAT_71052af1a0;
  if (DAT_71052af1d8 != '\0') {
    puVar6 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar3 = *puVar6;
    if (uVar3 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar3) {
LAB_710023d568:
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        return;
      }
      plVar9 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar3 * 8) + 0x88);
    }
  }
  *(undefined2 *)(param_1 + 0x100) = *(undefined2 *)(*(long *)(*plVar9 + 0x10) + 0xb0);
LAB_710023d158:
  local_218 = &PTR_FUN_7104f56e28;
  local_200 = &DAT_71044114cc;
  local_210 = FUN_710023dbc0;
  uStack_208 = 0;
  FUN_71001d3d60(param_1,(long)&local_218);
  return;
}

