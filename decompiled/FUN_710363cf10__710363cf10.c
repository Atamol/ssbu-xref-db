// addr:      710363cf10
// offset:    0x363cf10
// name:      FUN_710363cf10
// mangled:   
// signature: undefined __cdecl FUN_710363cf10(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, byte * * * * param_6, long * * * * param_7, void * param_8)


void FUN_710363cf10(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,byte ****param_6,long ****param_7,void *param_8)

{
  ulong *puVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  byte bVar5;
  byte bVar6;
  bool bVar7;
  int iVar8;
  ulong uVar9;
  float *pfVar10;
  ulong uVar11;
  long ****pppplVar12;
  long ****pppplVar13;
  undefined8 uVar14;
  byte ****ppppbVar15;
  long ****__n;
  long *plVar16;
  long lVar17;
  undefined4 uVar18;
  long lVar19;
  void *pvVar20;
  long ****pppplVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  ulong *puVar27;
  long ****local_110;
  long ****local_108;
  long ****local_100;
  uint local_f8;
  undefined4 uStack_f4;
  undefined **local_f0;
  long lStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined **local_d0;
  long *local_c8;
  long *local_c0;
  long local_b8;
  undefined1 local_b0 [8];
  long ****local_a8;
  long ****local_a0;
  long ****local_98;
  uint local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  long ****local_78;
  long ****local_70 [2];
  
  iVar8 = *(int *)(*(long *)(DAT_7105335480 + 0x28) + 0x30);
  if (DAT_7105338f60 == iVar8) {
    if ((*(char *)(param_1 + 8) == '\0') && (*(char *)(param_1 + 9) == '\0')) {
      DAT_7105338f60 = iVar8;
      return;
    }
  }
  else {
    if (iVar8 == 0x500) {
      uVar18 = 1;
LAB_710363cf88:
      *(undefined4 *)(param_1 + 0x18) = uVar18;
    }
    else if (iVar8 == 0x780) {
      uVar18 = 2;
      goto LAB_710363cf88;
    }
    *(undefined1 *)(param_1 + 8) = 1;
  }
  uVar2 = *(uint *)(param_1 + 0x18);
  uVar11 = (ulong)uVar2;
  DAT_7105338f60 = iVar8;
  *(uint *)(param_1 + 0x10) = uVar2;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 8) = 0;
  if (2 < uVar2) goto LAB_710363d988;
  lVar26 = *(long *)(param_1 + 0x40);
  lVar24 = lVar26 + uVar11 * 0x70;
  local_c8 = *(long **)(lVar24 + 0xb8);
  local_c0 = *(long **)(lVar24 + 0xc0);
  local_b8 = *(long *)(lVar24 + 200);
  local_b0 = (undefined1  [8])0x6665445f44554e1c;
  local_d0 = &PTR_FUN_7105231d58;
  local_98 = (long ****)((ulong)local_98 & 0xffffffff00000000);
  local_a8 = (long ****)0x565253746c7561;
  local_a0 = (long ****)0x0;
  FUN_710386adc0(*(long *)(lVar26 + 0x28),(long)&local_d0);
  lVar22 = *(long *)(lVar26 + 0x28);
  puVar27 = (ulong *)(lVar22 + 0x80);
  __n = param_7;
  pppplVar12 = local_a0;
  if (puVar27 != (ulong *)(lVar24 + 0x68)) {
    lVar19 = lVar26 + uVar11 * 0x70;
    bVar5 = *(byte *)(lVar24 + 0x68);
    bVar7 = (bVar5 & 1) != 0;
    param_8 = (void *)(lVar24 + 0x69);
    if (bVar7) {
      param_8 = *(void **)(lVar19 + 0x78);
    }
    bVar6 = *(byte *)puVar27;
    __n = (long ****)(ulong)(bVar5 >> 1);
    if (bVar7) {
      __n = *(long *****)(lVar19 + 0x70);
    }
    if ((bVar6 & 1) == 0) {
      pppplVar12 = (long ****)0x16;
      param_3 = (long ****)((long)__n + -0x16);
      if (&DAT_00000015 < __n && param_3 != (long ****)0x0) {
LAB_710363d0a4:
        if ((bVar6 & 1) == 0) {
          param_4 = (byte ****)(ulong)(bVar6 >> 1);
        }
        else {
          param_4 = *(byte *****)(lVar22 + 0x88);
        }
        param_5 = (long ****)0x0;
        param_6 = param_4;
        FUN_71037cfe00(puVar27,(ulong)pppplVar12,(ulong)param_3,param_4,(long ****)0x0,(long)param_4
                       ,(size_t)__n,param_8);
        pppplVar12 = local_a0;
        goto joined_r0x00710363d3fc;
      }
    }
    else {
      pppplVar12 = (long ****)((*puVar27 & 0xfffffffffffffffe) - 1);
      param_3 = (long ****)((long)__n - (long)pppplVar12);
      if (pppplVar12 <= __n && param_3 != (long ****)0x0) goto LAB_710363d0a4;
    }
    if ((bVar6 & 1) == 0) {
      pvVar20 = (void *)(lVar22 + 0x81);
    }
    else {
      pvVar20 = *(void **)(lVar22 + 0x90);
    }
    if (__n != (long ****)0x0) {
      param_3 = __n;
      memmove(pvVar20,param_8,(size_t)__n);
    }
    *(undefined1 *)((long)pvVar20 + (long)__n) = 0;
    pppplVar12 = local_a0;
    if ((*(byte *)puVar27 & 1) == 0) {
      *(char *)puVar27 = (char)((int)__n << 1);
      __n = param_7;
    }
    else {
      *(long *****)(lVar22 + 0x88) = __n;
      __n = param_7;
    }
  }
joined_r0x00710363d3fc:
  local_a0 = pppplVar12;
  if (((ulong)local_b0 & 1) != 0) {
    nu::VirtualFreeHook(pppplVar12);
    FUN_710392eb40((ulong)pppplVar12);
  }
  lVar22 = *(long *)(*(long *)(param_1 + 0x40) + 0x48);
  uStack_80 = *(undefined8 *)(lVar22 + 0xa0);
  local_88 = *(undefined8 *)(lVar22 + 0xb0);
  fVar3 = *(float *)(lVar26 + uVar11 * 0x70 + 100);
  fVar4 = *(float *)(lVar24 + 0x60);
  *(undefined8 *)(lVar22 + 0xa0) = uStack_80;
  *(float *)(lVar22 + 0xa8) = fVar4;
  *(float *)(lVar22 + 0xac) = fVar3;
  *(undefined8 *)(lVar22 + 0xd8) = 0;
  *(undefined1 **)(lVar22 + 0xd0) = &DAT_3f8000003f800000;
  *(undefined8 *)(lVar22 + 0xb0) = local_88;
  *(float *)(lVar22 + 0xb8) = *(float *)(lVar22 + 0xa0);
  *(float *)(lVar22 + 0xbc) = *(float *)(lVar22 + 0xa4);
  *(undefined4 *)(lVar22 + 200) = 0;
  *(undefined1 *)(lVar22 + 0xe0) = 0;
  *(float *)(lVar22 + 0xc0) = *(float *)(lVar22 + 0xa0) + fVar4;
  *(float *)(lVar22 + 0xc4) = *(float *)(lVar22 + 0xa4) + fVar3;
  local_d0 = (undefined **)0x4;
  FUN_710386a1c0(lVar22,(int *)&local_d0,param_3,param_4,param_5,param_6,__n,param_8);
  uVar23 = (ulong)*(uint *)(param_1 + 0x1c);
  if (2 < *(uint *)(param_1 + 0x1c)) {
LAB_710363d988:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar22 = *(long *)(param_1 + 0x48);
  lVar25 = lVar22 + uVar23 * 0x70;
  lVar19 = *(long *)(lVar22 + 0x28);
  uVar2 = *(uint *)(lVar19 + 0xb8);
  lStack_e8 = *(long *)(lVar25 + 0xf8);
  local_f0 = &PTR_FUN_7105231d58;
  local_e0 = *(undefined8 *)(lVar25 + 0x100);
  local_d8 = *(undefined8 *)(lVar25 + 0x108);
  pppplVar12 = (long ****)(ulong)uVar2;
  FUN_710386b530(&local_d0,(long)&local_f0,uVar2);
  local_108 = (long ****)0x0;
  local_100 = (long ****)0x0;
  local_110 = (long ****)0x0;
  puVar27 = (ulong *)(lVar25 + 0xa8);
  if ((*(byte *)puVar27 & 1) == 0) {
    local_110 = (long ****)*puVar27;
    local_108 = *(long *****)(lVar25 + 0xb0);
    local_100 = *(long *****)(lVar25 + 0xb8);
  }
  else {
    lVar17 = lVar22 + uVar23 * 0x70;
    pppplVar21 = *(long *****)(lVar17 + 0xb0);
    if ((long ****)0xffffffffffffffef < pppplVar21) goto LAB_710363d990;
    pvVar20 = *(void **)(lVar17 + 0xb8);
    if (pppplVar21 < (long ****)0x17) {
      local_110 = (long ****)(ulong)(byte)((int)pppplVar21 << 1);
      pppplVar13 = (long ****)((ulong)&local_110 | 1);
      if (pppplVar21 != (long ****)0x0) goto LAB_710363d2f0;
    }
    else {
      pppplVar12 = (long ****)((ulong)(pppplVar21 + 2) & 0xfffffffffffffff0);
      iVar8 = FUN_710392e1f0(&local_78,0x10,pppplVar12,param_4,param_5,param_6,__n,param_8);
      if (((iVar8 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
         (local_70[0] = pppplVar12,
         uVar9 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,local_70), (uVar9 & 1) != 0))
      {
        FUN_710392e1f0(&local_78,0x10,pppplVar12,param_4,param_5,param_6,__n,param_8);
      }
      nu::VirtualAllocHook((ulong)pppplVar12,0x10,local_78);
      local_110 = (long ****)((ulong)pppplVar12 | 1);
      local_100 = local_78;
      pppplVar13 = local_78;
      local_108 = pppplVar21;
LAB_710363d2f0:
      pppplVar12 = pppplVar21;
      memcpy(pppplVar13,pvVar20,(size_t)pppplVar21);
    }
    *(undefined1 *)((long)pppplVar13 + (long)pppplVar21) = 0;
  }
  pppplVar21 = local_98;
  local_f8 = uVar2;
  if (((ulong)local_a8 & 1) != 0) {
    *(undefined1 *)local_98 = 0;
    local_a0 = (long ****)0x0;
    if (((ulong)local_a8 & 1) != 0) {
      nu::VirtualFreeHook(local_98);
      FUN_710392eb40((ulong)pppplVar21);
    }
  }
  local_98 = local_100;
  local_a0 = local_108;
  local_108 = (long ****)0x0;
  local_100 = (long ****)0x0;
  local_a8 = local_110;
  puVar1 = (ulong *)(lVar19 + 0x80);
  local_110 = (long ****)0x0;
  local_90 = local_f8;
  if (puVar1 != puVar27) {
    lVar17 = lVar22 + uVar23 * 0x70;
    bVar5 = *(byte *)puVar1;
    pppplVar21 = (long ****)(ulong)(*(byte *)puVar27 >> 1);
    param_8 = (void *)(lVar25 + 0xa9);
    if ((*(byte *)puVar27 & 1) != 0) {
      pppplVar21 = *(long *****)(lVar17 + 0xb0);
      param_8 = *(void **)(lVar17 + 0xb8);
    }
    if ((bVar5 & 1) == 0) {
      pppplVar13 = (long ****)0x16;
      pppplVar12 = (long ****)((long)pppplVar21 + -0x16);
      if (&DAT_00000015 < pppplVar21 && pppplVar12 != (long ****)0x0) {
LAB_710363d3e8:
        if ((bVar5 & 1) == 0) {
          param_4 = (byte ****)(ulong)(bVar5 >> 1);
        }
        else {
          param_4 = *(byte *****)(lVar19 + 0x88);
        }
        param_5 = (long ****)0x0;
        param_6 = param_4;
        FUN_71037cfe00(puVar1,(ulong)pppplVar13,(ulong)pppplVar12,param_4,(long ****)0x0,
                       (long)param_4,(size_t)pppplVar21,param_8);
        __n = pppplVar21;
        goto LAB_710363d458;
      }
    }
    else {
      pppplVar13 = (long ****)((*puVar1 & 0xfffffffffffffffe) - 1);
      pppplVar12 = (long ****)((long)pppplVar21 - (long)pppplVar13);
      if (pppplVar13 <= pppplVar21 && pppplVar12 != (long ****)0x0) goto LAB_710363d3e8;
    }
    if ((bVar5 & 1) == 0) {
      pvVar20 = (void *)(lVar19 + 0x81);
    }
    else {
      pvVar20 = *(void **)(lVar19 + 0x90);
    }
    if (pppplVar21 != (long ****)0x0) {
      pppplVar12 = pppplVar21;
      memmove(pvVar20,param_8,(size_t)pppplVar21);
    }
    *(undefined1 *)((long)pvVar20 + (long)pppplVar21) = 0;
    if ((*(byte *)puVar1 & 1) == 0) {
      *(char *)puVar1 = (char)((int)pppplVar21 << 1);
    }
    else {
      *(long *****)(lVar19 + 0x88) = pppplVar21;
    }
  }
LAB_710363d458:
  FUN_710386b700(lVar19,(long)&local_d0,(ulong)pppplVar12,param_4,param_5,param_6,(ulong)__n,param_8
                );
  pppplVar12 = local_98;
  if (((ulong)local_a8 & 1) != 0) {
    nu::VirtualFreeHook(local_98);
    FUN_710392eb40((ulong)pppplVar12);
  }
  (**(code **)(**(long **)(*(long *)(param_1 + 0x48) + 0x68) + 0x18))(&local_d0);
  plVar16 = local_c8;
  nu::ModuleInitializer<nu::GraphicsModule,nu::GraphicsModuleDesc>::Instance();
  lVar19 = nu::ModuleInitializer<nu::GraphicsModule,nu::GraphicsModuleDesc>::Instance();
  uVar14 = 0;
  ppppbVar15 = (byte ****)0x0;
  pfVar10 = (float *)(**(code **)(*plVar16 + 0x10))(plVar16,*(undefined8 *)(lVar19 + 0x58));
  plVar16 = local_c8;
  lVar17 = lVar22 + uVar23 * 0x70;
  fVar3 = *(float *)(lVar17 + 0xa4);
  *pfVar10 = *(float *)(lVar25 + 0xa0);
  pfVar10[1] = fVar3;
  pfVar10[2] = 0.0;
  pfVar10[3] = 0.0;
  nu::ModuleInitializer<nu::GraphicsModule,nu::GraphicsModuleDesc>::Instance();
  lVar19 = nu::ModuleInitializer<nu::GraphicsModule,nu::GraphicsModuleDesc>::Instance();
  (**(code **)(*plVar16 + 0x18))(plVar16,*(undefined8 *)(lVar19 + 0x58));
  lVar19 = *(long *)(*(long *)(param_1 + 0x48) + 0x48);
  fVar3 = *(float *)(lVar17 + 0xa4);
  fVar4 = *(float *)(lVar25 + 0xa0);
  *(undefined8 *)(lVar19 + 0xa0) = *(undefined8 *)(lVar19 + 0xa0);
  *(float *)(lVar19 + 0xa8) = fVar4;
  *(float *)(lVar19 + 0xac) = fVar3;
  *(undefined8 *)(lVar19 + 0xd8) = 0;
  *(undefined1 **)(lVar19 + 0xd0) = &DAT_3f8000003f800000;
  *(float *)(lVar19 + 0xb8) = *(float *)(lVar19 + 0xa0);
  *(undefined8 *)(lVar19 + 0xb0) = *(undefined8 *)(lVar19 + 0xb0);
  *(undefined4 *)(lVar19 + 200) = 0;
  *(float *)(lVar19 + 0xbc) = *(float *)(lVar19 + 0xa4);
  *(undefined1 *)(lVar19 + 0xe0) = 0;
  *(float *)(lVar19 + 0xc0) = *(float *)(lVar19 + 0xa0) + fVar4;
  *(float *)(lVar19 + 0xc4) = *(float *)(lVar19 + 0xa4) + fVar3;
  local_d0 = (undefined **)0x4;
  FUN_710386a1c0(lVar19,(int *)&local_d0,uVar14,ppppbVar15,param_5,param_6,__n,param_8);
  lVar19 = *(long *)(param_1 + 0x48);
  if ((*(long **)(lVar19 + 0x90) == (long *)0x0) ||
     (**(long **)(lVar19 + 0x90) != *(long *)(lVar19 + 0x98))) goto LAB_710363d728;
  plVar16 = *(long **)(lVar24 + 0xc0);
  local_c8 = (long *)0x0;
  if (plVar16 == (long *)0x0) {
LAB_710363d5cc:
    local_c0 = (long *)0x0;
    local_b8 = 0;
  }
  else {
    if (*plVar16 != *(long *)(lVar24 + 200)) {
      local_c8 = (long *)0x0;
      goto LAB_710363d5cc;
    }
    local_c8 = *(long **)(lVar24 + 0xb8);
    if (local_c8 == (long *)0x0) goto LAB_710363d5cc;
    local_c0 = (long *)local_c8[1];
    local_b8 = *local_c0;
  }
  lVar24 = lVar26 + uVar11 * 0x70;
  local_d0 = &PTR_FUN_71052382b0;
  local_b0 = (undefined1  [8])0x0;
  local_a8 = (long ****)0x0;
  local_a0 = (long ****)0x0;
  if ((*(byte *)(lVar24 + 0x80) & 1) == 0) {
    local_b0 = *(undefined1 (*) [8])(lVar24 + 0x80);
    local_a8 = *(long *****)(lVar24 + 0x88);
    local_a0 = *(long *****)(lVar24 + 0x90);
  }
  else {
    lVar26 = lVar26 + uVar11 * 0x70;
    pppplVar12 = *(long *****)(lVar26 + 0x88);
    if ((long ****)0xffffffffffffffef < pppplVar12) {
LAB_710363d990:
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    pvVar20 = *(void **)(lVar26 + 0x90);
    if (pppplVar12 < (long ****)0x17) {
      pppplVar21 = (long ****)(local_b0 + 1);
      local_b0._1_7_ = 0;
      local_b0[0] = (byte)((int)pppplVar12 << 1);
      if (pppplVar12 != (long ****)0x0) goto LAB_710363d6d8;
    }
    else {
      pppplVar21 = (long ****)((ulong)(pppplVar12 + 2) & 0xfffffffffffffff0);
      iVar8 = FUN_710392e1f0(local_70,0x10,pppplVar21,ppppbVar15,param_5,param_6,__n,param_8);
      if (((iVar8 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
         (local_110 = pppplVar21,
         uVar11 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_110),
         (uVar11 & 1) != 0)) {
        FUN_710392e1f0(local_70,0x10,pppplVar21,ppppbVar15,param_5,param_6,__n,param_8);
      }
      nu::VirtualAllocHook((ulong)pppplVar21,0x10,local_70[0]);
      local_b0 = (undefined1  [8])((ulong)pppplVar21 | 1);
      local_a0 = local_70[0];
      pppplVar21 = local_70[0];
      local_a8 = pppplVar12;
LAB_710363d6d8:
      memcpy(pppplVar21,pvVar20,(size_t)pppplVar12);
    }
    *(undefined1 *)((long)pppplVar21 + (long)pppplVar12) = 0;
  }
  local_98 = (long ****)((ulong)local_98 & 0xffffffff00000000);
  FUN_710386cae0(*(long *)(lVar19 + 0x88),(long)&local_d0);
  pppplVar12 = local_a0;
  if (((ulong)local_b0 & 1) != 0) {
    nu::VirtualFreeHook(local_a0);
    FUN_710392eb40((ulong)pppplVar12);
  }
LAB_710363d728:
  plVar16 = *(long **)(*(long *)(param_1 + 0x28) + 0x128);
  if (plVar16 != (long *)0x0) {
    lVar22 = lVar22 + uVar23 * 0x70;
    do {
      local_c0 = (long *)0x0;
      local_d0 = (undefined **)0x1a;
      builtin_strncpy((char *)((ulong)&local_d0 | 1),"VSM_SRV_IPLUG",0xd);
      local_c8 = (long *)0x0;
      FUN_7103856830(&local_110,plVar16[5],(byte *)&local_d0);
      if ((local_100 != (long ****)0x0) && (*local_100 == (long ***)CONCAT44(uStack_f4,local_f8))) {
        local_c8 = (long *)0x0;
        if (*(long **)(lVar25 + 0x100) == (long *)0x0) {
LAB_710363d7fc:
          local_b8 = 0;
          local_c0 = (long *)0x0;
        }
        else if (**(long **)(lVar25 + 0x100) == *(long *)(lVar25 + 0x108)) {
          local_c8 = *(long **)(lVar25 + 0xf8);
          if (local_c8 == (long *)0x0) goto LAB_710363d7fc;
          local_c0 = *(long **)((long)local_c8 + 8);
          local_b8 = *local_c0;
        }
        else {
          local_b8 = 0;
          local_c0 = (long *)0x0;
          local_c8 = (long *)0x0;
        }
        local_d0 = &PTR_FUN_71052382b0;
        local_b0 = (undefined1  [8])0x0;
        local_a8 = (long ****)0x0;
        local_a0 = (long ****)0x0;
        if ((*(byte *)(lVar22 + 0xc0) & 1) == 0) {
          local_b0 = *(undefined1 (*) [8])(lVar22 + 0xc0);
          local_a8 = *(long *****)(lVar22 + 200);
          local_a0 = *(long *****)(lVar22 + 0xd0);
        }
        else {
          pppplVar12 = *(long *****)(lVar22 + 200);
          if ((long ****)0xffffffffffffffef < pppplVar12) {
                    /* WARNING: Subroutine does not return */
            std::__basic_string_common<true>::__throw_length_error();
          }
          pvVar20 = *(void **)(lVar22 + 0xd0);
          if (pppplVar12 < (long ****)0x17) {
            local_b0._1_7_ = 0;
            local_b0[0] = (byte)((int)pppplVar12 << 1);
            pppplVar21 = (long ****)(local_b0 + 1);
            if (pppplVar12 != (long ****)0x0) goto LAB_710363d904;
          }
          else {
            pppplVar21 = (long ****)((ulong)(pppplVar12 + 2) & 0xfffffffffffffff0);
            iVar8 = FUN_710392e1f0(&local_78,0x10,pppplVar21,ppppbVar15,param_5,param_6,__n,param_8)
            ;
            if (((iVar8 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
               (local_70[0] = pppplVar21,
               uVar11 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,local_70),
               (uVar11 & 1) != 0)) {
              FUN_710392e1f0(&local_78,0x10,pppplVar21,ppppbVar15,param_5,param_6,__n,param_8);
            }
            nu::VirtualAllocHook((ulong)pppplVar21,0x10,local_78);
            local_b0 = (undefined1  [8])((ulong)pppplVar21 | 1);
            local_a0 = local_78;
            pppplVar21 = local_78;
            local_a8 = pppplVar12;
LAB_710363d904:
            memcpy(pppplVar21,pvVar20,(size_t)pppplVar12);
          }
          *(undefined1 *)((long)pppplVar21 + (long)pppplVar12) = 0;
        }
        local_98 = (long ****)CONCAT44(local_98._4_4_,2);
        FUN_710386cae0((long)local_108,(long)&local_d0);
        pppplVar12 = local_a0;
        if (((ulong)local_b0 & 1) != 0) {
          nu::VirtualFreeHook(local_a0);
          FUN_710392eb40((ulong)pppplVar12);
        }
      }
      plVar16 = (long *)*plVar16;
    } while (plVar16 != (long *)0x0);
  }
  return;
}

