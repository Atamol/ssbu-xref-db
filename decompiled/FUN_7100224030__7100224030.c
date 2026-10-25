// addr:      7100224030
// offset:    0x224030
// name:      FUN_7100224030
// mangled:   
// signature: undefined4 __cdecl FUN_7100224030(int * param_1, long param_2, long param_3, undefined8 param_4, byte * param_5, undefined1 * param_6, char * param_7, long param_8)


undefined4
FUN_7100224030(int *param_1,long param_2,long param_3,long param_4,byte *param_5,undefined1 *param_6
              ,char *param_7,long param_8)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  undefined8 *puVar6;
  void *pvVar7;
  undefined8 extraout_x1;
  char *pcVar8;
  long lVar9;
  byte *pbVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  undefined4 uVar14;
  undefined **local_1c8;
  char local_1c0 [16];
  char *local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  
  plVar13 = (long *)(param_1 + 0x3a);
  iVar1 = (int)param_4;
  lVar9 = param_3;
  pbVar10 = param_5;
  (**(code **)(*plVar13 + 0x10))(plVar13);
  if (*param_1 == 3) {
    FUN_71002239e0((long)param_1,extraout_x1,lVar9,param_4,(char *)pbVar10,param_6,param_7,param_8);
    iVar3 = FUN_71001b56d0(param_2,"ws://");
    if ((iVar3 == 0) || (iVar3 = FUN_71001b56d0(param_2,"wss://"), iVar3 == 0)) {
      FUN_71001de2c0((long)&local_1a0,param_2);
      lVar11 = FUN_71001dec00((long)&local_1a0);
      bVar2 = FUN_71001b4e00(*(char **)(lVar11 + 0x18),"ws");
      if (bVar2) {
        pcVar8 = "http";
LAB_7100224168:
        local_1b0 = local_1c0;
        local_1c8 = &PTR_FUN_710509cc08;
        local_1a8 = 0x10;
        local_1c0[0] = '\0';
        lVar9 = -1;
        FUN_71001b47e0((long)&local_1c8,pcVar8,-1);
        FUN_71001dec30((long)&local_1a0,(long)&local_1c8);
        local_1c8 = &PTR_FUN_710509cc08;
        FUN_71001b4910((long)&local_1c8);
      }
      else {
        lVar11 = FUN_71001dec00((long)&local_1a0);
        bVar2 = FUN_71001b4e00(*(char **)(lVar11 + 0x18),"wss");
        if (bVar2) {
          pcVar8 = "https";
          goto LAB_7100224168;
        }
      }
      FUN_71001de950(&local_1c8,(long)&local_1a0);
      FUN_71001b53d0((long)(param_1 + 2),local_1b0);
      local_1c8 = &PTR_FUN_710509cc08;
      FUN_71001b4910((long)&local_1c8);
      FUN_71001de8c0((long)&local_1a0);
    }
    else {
      FUN_71001b53d0((long)(param_1 + 2),*(char **)(param_2 + 0x18));
    }
    FUN_71001b2f70((long)(param_1 + 0xc),param_3);
    plVar5 = FUN_71001af850(0x140);
    if (plVar5 == (long *)0x0) {
      uVar14 = 0;
      param_1[0x16] = 0;
      param_1[0x17] = 0;
      goto LAB_7100224440;
    }
    *plVar5 = 0;
    *(undefined4 *)(plVar5 + 1) = 0xffffffff;
    plVar5[3] = 0;
    plVar5[4] = 0;
    plVar5[5] = 0;
    puVar6 = FUN_71001b1820(0x1000);
    plVar5[5] = (long)(puVar6 + 0x200);
    lVar11 = -0x1000;
    plVar5[3] = (long)puVar6;
    plVar5[4] = (long)puVar6;
    do {
      *(undefined1 *)puVar6 = 0;
      lVar12 = plVar5[4];
      plVar5[4] = lVar12 + 1;
      *(undefined1 *)(lVar12 + 1) = 0;
      puVar6 = (undefined8 *)(plVar5[4] + 1);
      lVar11 = lVar11 + 2;
      plVar5[4] = (long)puVar6;
    } while (lVar11 != 0);
    plVar5[6] = 0;
    plVar5[7] = 0;
    plVar5[8] = 0;
    plVar5[9] = 0x1000;
    *(undefined4 *)(plVar5 + 10) = 0x101;
    plVar5[0xb] = (long)&PTR_FUN_710509cc08;
    *(undefined1 *)(plVar5 + 0xc) = 0;
    plVar5[0xe] = (long)(plVar5 + 0xc);
    plVar5[0xf] = 0x10;
    plVar5[0x10] = (long)&PTR_FUN_710509cc08;
    *(undefined1 *)(plVar5 + 0x11) = 0;
    plVar5[0x15] = (long)&PTR_FUN_710509cc08;
    plVar5[0x13] = (long)(plVar5 + 0x11);
    plVar5[0x14] = 0x10;
    *(undefined1 *)(plVar5 + 0x16) = 0;
    plVar5[0x1a] = (long)&PTR_FUN_710509cc08;
    plVar5[0x18] = (long)(plVar5 + 0x16);
    plVar5[0x19] = 0x10;
    *(undefined1 *)(plVar5 + 0x1b) = 0;
    plVar5[0x1f] = (long)&PTR_FUN_710509cc08;
    *(undefined1 *)(plVar5 + 0x20) = 0;
    plVar5[0x26] = 0;
    plVar5[0x22] = (long)(plVar5 + 0x20);
    plVar5[0x23] = 0x10;
    *(undefined4 *)(plVar5 + 0x27) = 1;
    plVar5[0x1d] = (long)(plVar5 + 0x1b);
    plVar5[0x1e] = 0x10;
    plVar5[0x24] = 0;
    plVar5[0x25] = 0;
    *(long **)(param_1 + 0x16) = plVar5;
    uVar4 = FUN_7100224470(plVar5,param_5,lVar9,param_4,(char *)pbVar10,param_6,param_7,param_8);
    uVar14 = 0;
    if ((uVar4 & 1) == 0) goto LAB_7100224440;
    local_170 = 0;
    uStack_168 = 0;
    local_180 = 0;
    uStack_178 = 0;
    local_190 = 0;
    uStack_188 = 0;
    local_1a0 = 0;
    uStack_198 = 0;
    iVar3 = FUN_71002265b0((long *)(param_1 + 0x1a),&local_1a0,param_1);
    if (iVar3 == 0) {
      puVar6 = FUN_71001af850(0x438);
      if (puVar6 != (undefined8 *)0x0) {
        puVar6[1] = &PTR_FUN_710509cc08;
        *(undefined1 *)(puVar6 + 2) = 0;
        puVar6[4] = puVar6 + 2;
        puVar6[5] = 0x10;
        FUN_71001b47e0((long)(puVar6 + 1),*(char **)(param_3 + 0x18),-1);
        *(undefined4 *)(puVar6 + 6) = 0;
        memset((void *)((long)puVar6 + 0x34),0,0x400);
      }
      *(undefined8 **)(param_1 + 0x18) = puVar6;
      param_1[0x22] = iVar1;
      *param_1 = 1;
      puVar6 = FUN_71001af850(0x78);
      if (puVar6 == (undefined8 *)0x0) {
        param_1[0x38] = 0;
        param_1[0x39] = 0;
      }
      else {
        local_1b0 = local_1c0;
        local_1c0[0] = '\0';
        local_1a8 = 0x10;
        local_1c8 = &PTR_FUN_710509cc08;
        FUN_71001b47e0((long)&local_1c8,"WebSocketClient Connect Thread",-1);
        FUN_71001b2360(puVar6,(long)&local_1c8,DAT_7104f555d8);
        puVar6[0xb] = 0;
        puVar6[0xc] = 0;
        puVar6[0xd] = 0;
        *puVar6 = &DAT_7104f59f28;
        *(undefined8 **)(param_1 + 0x38) = puVar6;
        local_1c8 = &PTR_FUN_710509cc08;
        FUN_71001b4910((long)&local_1c8);
      }
      if (DAT_7104f555dc == -0x80000000) {
        pvVar7 = *(void **)(param_1 + 0x38);
      }
      else {
        pvVar7 = *(void **)(param_1 + 0x38);
        *(int *)((long)pvVar7 + 0x54) = DAT_7104f555dc;
      }
      *(code **)((long)pvVar7 + 0x58) = FUN_71002246b0;
      *(undefined8 *)((long)pvVar7 + 0x60) = 0;
      *(int **)((long)pvVar7 + 0x68) = param_1;
      *(undefined8 *)((long)pvVar7 + 0x70) = 0;
      FUN_71001b27e0(pvVar7,0x8000);
      uVar14 = 1;
      goto LAB_7100224440;
    }
  }
  uVar14 = 0;
LAB_7100224440:
  (**(code **)(*plVar13 + 0x20))(plVar13);
  return uVar14;
}

