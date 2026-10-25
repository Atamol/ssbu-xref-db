// addr:      7103647390
// offset:    0x3647390
// name:      FUN_7103647390
// mangled:   
// signature: undefined __cdecl FUN_7103647390(ulong * param_1, long param_2, long * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 * param_7, undefined8 param_8)


void FUN_7103647390(ulong *param_1,long param_2,long *****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 *param_7,undefined8 param_8)

{
  void *pvVar1;
  int *piVar2;
  void *pvVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  void *pvVar8;
  bool bVar9;
  int iVar10;
  undefined2 *puVar11;
  ulong uVar12;
  int *piVar13;
  char *pcVar14;
  long ****pppplVar15;
  byte ****ppppbVar16;
  long lVar17;
  ulong *puVar18;
  ulong uVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  long *plVar22;
  undefined8 local_b8;
  undefined1 local_b0;
  undefined6 uStack_af;
  undefined1 uStack_a9;
  undefined1 local_a8;
  undefined6 uStack_a7;
  undefined1 uStack_a1;
  long local_a0;
  undefined8 local_98;
  uint local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined8 local_74;
  undefined8 local_6c;
  undefined4 local_64;
  
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 0x2c);
  puVar11 = (undefined2 *)
            FUN_710392e290(0x10,0x218,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar11 == (undefined2 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b8._0_4_ = 0;
      local_98 = (undefined **)0x218;
      param_3 = (long *****)&local_98;
      uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b8);
      if (((uVar12 & 1) != 0) &&
         (puVar11 = (undefined2 *)
                    FUN_710392e290(0x10,0x218,(long ****)param_3,param_4,param_5,param_6,param_7,
                                   param_8), puVar11 != (undefined2 *)0x0)) goto LAB_7103647414;
    }
    puVar11 = (undefined2 *)0x0;
  }
LAB_7103647414:
  *puVar11 = 0xff00;
  *(undefined8 *)(puVar11 + 0xc) = 0;
  *(undefined8 *)(puVar11 + 0x10) = 0;
  *(undefined4 *)(puVar11 + 0x14) = 0x3f800000;
  *(undefined4 *)(puVar11 + 0x1a) = 0xffffffff;
  *(undefined1 *)(puVar11 + 1) = 0;
  *(undefined1 *)(puVar11 + 0x18) = 0;
  *(undefined ***)(puVar11 + 0x1c) = &PTR_FUN_7105232bd0;
  *(undefined8 *)(puVar11 + 0x20) = 0;
  *(undefined ***)(puVar11 + 0x2c) = &PTR_FUN_71052339f8;
  *(undefined8 *)(puVar11 + 0x30) = 0;
  *(undefined8 *)(puVar11 + 0x7c) = 0;
  *(undefined ***)(puVar11 + 0x80) = &PTR_FUN_7105232ce8;
  *(undefined8 *)(puVar11 + 4) = 0;
  *(undefined8 *)(puVar11 + 8) = 0;
  *(undefined8 *)(puVar11 + 0x24) = 0;
  *(undefined8 *)(puVar11 + 0x28) = 0;
  *(undefined8 *)(puVar11 + 0x34) = 0;
  *(undefined8 *)(puVar11 + 0x38) = 0;
  *(undefined8 *)(puVar11 + 0x84) = 0;
  *(undefined8 *)(puVar11 + 0x88) = 0;
  *(undefined8 *)(puVar11 + 0xa8) = 0;
  *(undefined8 *)(puVar11 + 0xac) = 0;
  *(undefined8 *)(puVar11 + 0x8c) = 0;
  *(undefined8 *)(puVar11 + 0x90) = 0;
  *(undefined8 *)(puVar11 + 0x9b) = 0;
  *(undefined8 *)(puVar11 + 0x108) = 0;
  *(undefined8 *)(puVar11 + 0x104) = 0;
  *(undefined8 *)(puVar11 + 0xf8) = 0;
  *(undefined ***)(puVar11 + 0xa0) = &PTR_FUN_71052302c0;
  *(undefined8 *)(puVar11 + 0xa4) = 0;
  *(undefined ***)(puVar11 + 0xb0) = &PTR_FUN_71052302c0;
  *(undefined8 *)(puVar11 + 0xb4) = 0;
  *(undefined ***)(puVar11 + 0xc0) = &PTR_FUN_71052302c0;
  *(undefined8 *)(puVar11 + 0xc4) = 0;
  *(undefined ***)(puVar11 + 0xd0) = &PTR_FUN_71052302c0;
  *(undefined8 *)(puVar11 + 0xd4) = 0;
  *(undefined2 **)(puVar11 + 0xf0) = puVar11 + 0xf0;
  *(undefined2 **)(puVar11 + 0xf4) = puVar11 + 0xf0;
  *(undefined8 *)(puVar11 + 0x94) = 0;
  *(undefined8 *)(puVar11 + 0x98) = 0;
  *(undefined8 *)(puVar11 + 0xb8) = 0;
  *(undefined8 *)(puVar11 + 0xbc) = 0;
  *(undefined8 *)(puVar11 + 200) = 0;
  *(undefined8 *)(puVar11 + 0xcc) = 0;
  *(undefined8 *)(puVar11 + 0xd8) = 0;
  *(undefined8 *)(puVar11 + 0xdc) = 0;
  *(undefined8 *)(puVar11 + 0xe8) = 0;
  *(undefined8 *)(puVar11 + 0xec) = 0;
  *(undefined8 *)(puVar11 + 0xe0) = 0;
  *(undefined8 *)(puVar11 + 0xe4) = 0;
  *(undefined8 *)(puVar11 + 0xfc) = 0;
  *(undefined8 *)(puVar11 + 0x100) = 0;
  *(undefined1 *)(puVar11 + 0xfc) = 1;
  *(undefined1 *)((long)puVar11 + 0x1f9) = 0;
  *(undefined1 *)(puVar11 + 0xfd) = 0;
  uVar12 = *param_1;
  *param_1 = (ulong)puVar11;
  if (uVar12 != 0) {
    FUN_7103602050(uVar12);
    FUN_710392eb40(uVar12);
    puVar11 = (undefined2 *)*param_1;
  }
  FUN_71036026c0((undefined1 *)puVar11,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  lVar17 = *(long *)(*param_1 + 0x40);
  if ((*(long **)(lVar17 + 0x70) == (long *)0x0) ||
     (**(long **)(lVar17 + 0x70) != *(long *)(lVar17 + 0x78))) goto LAB_7103647a64;
  uVar5 = *(uint *)(*(long *)(lVar17 + 0x68) + 0x80);
  pppplVar15 = (long ****)(*(long *)(lVar17 + 0x68) + 0x88);
  FUN_7103662490(&local_98,uVar5 ^ (int)uVar5 >> 0x1f,(long)pppplVar15);
  if (((long *)CONCAT44(uStack_84,local_88) == (long *)0x0) ||
     (*(long *)CONCAT44(uStack_84,local_88) != CONCAT44(uStack_7c,local_80))) {
    param_1[2] = 0;
LAB_710364756c:
    uVar12 = 0;
    param_1[3] = 0;
  }
  else {
    uVar12 = CONCAT44(uStack_8c,local_90);
    param_1[2] = uVar12;
    if (uVar12 == 0) goto LAB_710364756c;
    puVar18 = *(ulong **)(uVar12 + 8);
    param_1[3] = (ulong)puVar18;
    uVar12 = *puVar18;
  }
  param_1[4] = uVar12;
  nu::ModuleInitializer<nu::GraphicsModule,nu::GraphicsModuleDesc>::Instance();
  lVar17 = nu::ModuleInitializer<nu::GraphicsModule,nu::GraphicsModuleDesc>::Instance();
  plVar22 = *(long **)(param_1[2] + 0x20);
  if (plVar22 != (long *)0x0) {
    lVar17 = *(long *)(lVar17 + 0x58);
LAB_71036475a4:
    uVar5 = *(uint *)(plVar22 + 5);
    param_4 = (byte ****)(plVar22 + 6);
    ppppbVar16 = param_4;
    FUN_710356bf30(&local_98,(ulong)uVar5,uVar5 ^ (int)uVar5 >> 0x1f,(long)param_4);
    lVar4 = CONCAT44(uStack_8c,local_90);
    local_b0 = 0;
    uStack_af = 0;
    uStack_a9 = 0;
    local_a8 = 0;
    uStack_a7 = 0;
    uStack_a1 = 0;
    local_b8._0_4_ = 0;
    local_b8._4_4_ = 0;
    bVar9 = (*(byte *)(lVar4 + 0x120) & 1) != 0;
    pvVar3 = (void *)(lVar4 + 0x121);
    if (bVar9) {
      pvVar3 = *(void **)(lVar4 + 0x130);
    }
    uVar12 = (ulong)(*(byte *)(lVar4 + 0x120) >> 1);
    if (bVar9) {
      uVar12 = *(ulong *)(lVar4 + 0x128);
    }
    piVar2 = (int *)((long)pvVar3 + uVar12);
    uVar19 = uVar12;
    pvVar1 = pvVar3;
    while( true ) {
      uVar7 = uVar12;
      pvVar8 = pvVar3;
      if ((((long)uVar19 < 7) || (uVar19 - 6 == 0)) ||
         (piVar13 = memchr(pvVar1,0x5f,uVar19 - 6), piVar13 == (int *)0x0))
      goto joined_r0x00710364765c;
      iVar10 = memcmp(piVar13,"_opaque",7);
      if (iVar10 == 0) break;
      pvVar1 = (void *)((long)piVar13 + 1);
      uVar19 = (long)piVar2 - (long)pvVar1;
    }
    if ((piVar13 != piVar2) && ((long)piVar13 - (long)pvVar3 != -1)) {
      uVar12 = 7;
      pcVar14 = "_opaque";
      goto LAB_71036477b0;
    }
joined_r0x00710364765c:
    do {
      uVar19 = uVar12;
      pvVar1 = pvVar3;
      if ((((long)uVar7 < 5) || (uVar7 - 4 == 0)) ||
         (piVar13 = memchr(pvVar8,0x5f,uVar7 - 4), piVar13 == (int *)0x0))
      goto joined_r0x0071036476d0;
      iVar10 = memcmp(piVar13,"_sort",5);
      if (iVar10 == 0) {
        if ((piVar13 != piVar2) && ((long)piVar13 - (long)pvVar3 != -1)) {
          pcVar14 = "_sort";
          goto LAB_71036477ac;
        }
        goto joined_r0x0071036476d0;
      }
      uVar7 = (long)piVar2 - ((long)piVar13 + 1);
      pvVar8 = (void *)((long)piVar13 + 1);
    } while( true );
  }
LAB_71036478b8:
  uVar12 = *param_1;
  local_88 = 0;
  uStack_84 = 0;
  local_80 = 0;
  uStack_7c = 0;
  uStack_a7 = 0x305f524f5443;
  uStack_af = 0x4255535f5350;
  uStack_a9 = 0x5f;
  local_a8 = 0x41;
  local_b8._0_4_ = 0x444f4e2c;
  local_b8._4_4_ = 0x4f4d5f45;
  local_b0 = 0x5f;
  local_98 = &PTR_FUN_710522fe60;
  local_90 = 0;
  uStack_8c = 0;
  uStack_a1 = 0;
  plVar22 = FUN_7103550630((long *)(DAT_7105337360 + 0x10),(byte *)&local_b8);
  if (plVar22 != (long *)0x0) {
    if (((long *)plVar22[7] == (long *)0x0) || (*(long *)plVar22[7] != plVar22[8])) {
      local_90 = 0;
      uStack_8c = 0;
LAB_7103647948:
      uVar21 = 0;
      local_88 = 0;
      uStack_84 = 0;
    }
    else {
      lVar17 = plVar22[6];
      local_90 = (uint)lVar17;
      uStack_8c = (undefined4)((ulong)lVar17 >> 0x20);
      if (lVar17 == 0) goto LAB_7103647948;
      puVar20 = *(undefined8 **)(lVar17 + 8);
      local_88 = SUB84(puVar20,0);
      uStack_84 = (undefined4)((ulong)puVar20 >> 0x20);
      uVar21 = *puVar20;
    }
    pppplVar15 = (long ****)0x0;
    local_80 = (undefined4)uVar21;
    uStack_7c = (undefined4)((ulong)uVar21 >> 0x20);
    FUN_71035fb5c0(uVar12,(long)&local_98,0,param_4,param_5,param_6,param_7,param_8);
  }
  uStack_8c = 0;
  local_88 = 0xff;
  local_98 = (undefined **)CONCAT62(local_98._2_6_,1);
  local_90 = local_90 & 0xffffff00;
  uStack_84 = 0xff;
  local_80 = 7;
  local_64 = 0;
  local_6c = 0;
  local_74 = 0;
  uStack_7c = 0;
  uStack_78 = 0;
  local_98 = (undefined **)CONCAT44(3,(undefined4)local_98);
  FUN_7103593520(&local_b8,(byte *)&local_98,pppplVar15,param_4,param_5,param_6,param_7,param_8);
  plVar22 = (long *)CONCAT17(uStack_a1,CONCAT61(uStack_a7,local_a8));
  if ((plVar22 == (long *)0x0) || (*plVar22 != local_a0)) {
    uVar12 = 0;
    param_1[6] = 0;
LAB_71036479e4:
    puVar18 = (ulong *)0x0;
    uVar19 = 0;
    param_1[7] = 0;
  }
  else {
    uVar12 = CONCAT17(uStack_a9,CONCAT61(uStack_af,local_b0));
    param_1[6] = uVar12;
    if (uVar12 == 0) goto LAB_71036479e4;
    puVar18 = *(ulong **)(uVar12 + 8);
    param_1[7] = (ulong)puVar18;
    uVar19 = *puVar18;
  }
  param_1[8] = uVar19;
  lVar17 = *(long *)(*param_1 + 0x40);
  if (lVar17 != 0) {
    lVar4 = *(long *)(lVar17 + 0xe8);
    if (*(long *)(lVar17 + 0xe0) != lVar4) {
      lVar17 = *(long *)(lVar17 + 0xe0) + 0xe8;
      if (puVar18 != (ulong *)0x0) goto LAB_7103647a28;
LAB_7103647a4c:
      *(undefined8 *)(lVar17 + -0x38) = 0;
      do {
        uVar21 = 0;
        *(undefined8 *)(lVar17 + -0x30) = 0;
        while( true ) {
          *(undefined8 *)(lVar17 + -0x28) = uVar21;
          if (lVar4 == lVar17) goto LAB_7103647a64;
          uVar12 = param_1[6];
          puVar18 = (ulong *)param_1[7];
          uVar19 = param_1[8];
          lVar17 = lVar17 + 0xe8;
          if (puVar18 == (ulong *)0x0) goto LAB_7103647a4c;
LAB_7103647a28:
          if (*puVar18 != uVar19) goto LAB_7103647a4c;
          *(ulong *)(lVar17 + -0x38) = uVar12;
          if (uVar12 == 0) break;
          puVar20 = *(undefined8 **)(uVar12 + 8);
          *(undefined8 **)(lVar17 + -0x30) = puVar20;
          uVar21 = *puVar20;
        }
      } while( true );
    }
  }
LAB_7103647a64:
  *(undefined4 *)((long)param_1 + 0x94) = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  return;
joined_r0x0071036476d0:
  pvVar8 = pvVar3;
  if ((((long)uVar19 < 4) || (uVar19 - 3 == 0)) ||
     (piVar13 = memchr(pvVar1,0x5f,uVar19 - 3), piVar13 == (int *)0x0)) goto joined_r0x007103647744;
  if (*piVar13 == 0x7261665f) {
    if ((piVar13 != piVar2) && ((long)piVar13 - (long)pvVar3 != -1)) {
      uVar12 = 4;
      pcVar14 = "_far";
      goto LAB_71036477b0;
    }
    goto joined_r0x007103647744;
  }
  uVar19 = (long)piVar2 - ((long)piVar13 + 1);
  pvVar1 = (void *)((long)piVar13 + 1);
  goto joined_r0x0071036476d0;
joined_r0x007103647744:
  if ((((long)uVar12 < 5) || (uVar12 - 4 == 0)) ||
     (piVar13 = memchr(pvVar8,0x5f,uVar12 - 4), piVar13 == (int *)0x0)) goto LAB_71036477b4;
  iVar10 = memcmp(piVar13,"_near",5);
  if (iVar10 != 0) {
    uVar12 = (long)piVar2 - ((long)piVar13 + 1);
    pvVar8 = (void *)((long)piVar13 + 1);
    goto joined_r0x007103647744;
  }
  if ((piVar13 != piVar2) && ((long)piVar13 - (long)pvVar3 != -1)) {
    pcVar14 = "_near";
LAB_71036477ac:
    uVar12 = 5;
LAB_71036477b0:
    FUN_71002c51f0(&local_b8,pcVar14,uVar12,ppppbVar16,param_5,param_6,param_7,param_8);
  }
LAB_71036477b4:
  uVar5 = *(uint *)(plVar22 + 5);
  ppppbVar16 = param_4;
  FUN_710356bf30(&local_98,(ulong)uVar5,uVar5 ^ (int)uVar5 >> 0x1f,(long)param_4);
  lVar4 = CONCAT44(uStack_8c,local_90);
  FUN_710355afd0(&local_98,"mo_actor",(byte *)&local_b8,ppppbVar16,param_5,param_6,param_7,param_8);
  FUN_71038aa1d0(lVar4,&local_98);
  if (((ulong)local_98 & 1) != 0) {
    pvVar3 = (void *)CONCAT44(uStack_84,local_88);
    nu::VirtualFreeHook(pvVar3);
    FUN_710392eb40((ulong)pvVar3);
  }
  uVar5 = *(uint *)(plVar22 + 5);
  FUN_710356bf30(&local_98,(ulong)uVar5,uVar5 ^ (int)uVar5 >> 0x1f,(long)param_4);
  FUN_71038ac3f0(CONCAT44(uStack_8c,local_90));
  uVar6 = *(uint *)(plVar22 + 5);
  uVar5 = uVar6 ^ (int)uVar6 >> 0x1f;
  pppplVar15 = (long ****)(ulong)uVar5;
  FUN_710356bf30(&local_98,(ulong)uVar6,uVar5,(long)param_4);
  lVar4 = CONCAT44(uStack_8c,local_90);
  local_90 = (uint)lVar17;
  uStack_8c = (undefined4)((ulong)lVar17 >> 0x20);
  if (lVar17 == 0) {
    uVar21 = 0;
    local_88 = 0;
    uStack_84 = 0;
  }
  else {
    puVar20 = *(undefined8 **)(lVar17 + 8);
    local_88 = SUB84(puVar20,0);
    uStack_84 = (undefined4)((ulong)puVar20 >> 0x20);
    uVar21 = *puVar20;
  }
  local_80 = (undefined4)uVar21;
  uStack_7c = (undefined4)((ulong)uVar21 >> 0x20);
  local_98 = &PTR_FUN_71052317b0;
  FUN_71038ac560(lVar4,(long)&local_98,pppplVar15,param_4,param_5,param_6,param_7,param_8);
  if (((uint)local_b8 & 1) != 0) {
    pvVar3 = (void *)CONCAT17(uStack_a1,CONCAT61(uStack_a7,local_a8));
    nu::VirtualFreeHook(pvVar3);
    FUN_710392eb40((ulong)pvVar3);
  }
  plVar22 = (long *)*plVar22;
  if (plVar22 == (long *)0x0) goto LAB_71036478b8;
  goto LAB_71036475a4;
}

