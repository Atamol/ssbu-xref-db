// addr:      7103888a20
// offset:    0x3888a20
// name:      FUN_7103888a20
// mangled:   
// signature: undefined __cdecl FUN_7103888a20(undefined8 * param_1, long param_2, int param_3, byte * * * * param_4, long * * * * param_5, byte * * * * param_6, byte * * * * param_7, void * param_8)


void FUN_7103888a20(undefined8 *param_1,long param_2,int param_3,byte ****param_4,long ****param_5,
                   byte ****param_6,byte ****param_7,void *param_8)

{
  byte ***pppbVar1;
  uint *puVar2;
  bool bVar3;
  byte ***pppbVar4;
  int iVar5;
  ulong uVar6;
  undefined **ppuVar7;
  uint *puVar8;
  byte ****__n;
  uint uVar9;
  undefined8 *puVar10;
  code *pcVar11;
  undefined4 *puVar12;
  byte **ppbVar13;
  undefined8 uVar14;
  byte *pbVar15;
  long *plVar16;
  long *plVar17;
  long *plVar18;
  byte **ppbVar19;
  long lVar20;
  undefined **ppuVar21;
  undefined **ppuVar22;
  long lVar23;
  byte *pbVar24;
  long lVar25;
  long *local_4a0;
  byte ****local_478;
  undefined **local_468;
  undefined **local_460;
  long *local_458;
  long local_450;
  byte ***local_448;
  undefined **local_440;
  long *local_438;
  long lStack_430;
  undefined8 local_428;
  byte ****local_420;
  undefined8 local_418;
  undefined8 uStack_410;
  undefined8 local_408;
  undefined8 local_400;
  undefined8 local_3f8;
  undefined8 local_3f0;
  undefined8 local_3e8;
  undefined8 local_3e0;
  undefined8 local_3d8;
  undefined8 local_3d0;
  undefined8 local_3c8;
  undefined8 local_3c0;
  undefined8 local_3b8;
  undefined8 uStack_3b0;
  undefined4 local_3a8;
  undefined1 *local_3a0;
  ulong local_398;
  ulong local_390;
  undefined1 auStack_388 [640];
  uint local_108 [2];
  undefined **local_100;
  undefined **local_f8;
  undefined8 *local_f0;
  undefined8 local_e8;
  long local_e0;
  undefined8 *local_d8;
  undefined8 *local_d0;
  undefined4 local_c8;
  undefined **local_c0;
  undefined **local_b8;
  uint local_b0;
  uint uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined8 local_94;
  undefined8 uStack_8c;
  undefined8 local_84;
  undefined8 local_7c;
  undefined8 uStack_74;
  undefined1 local_6c;
  undefined1 local_6b;
  
  local_3a0 = auStack_388;
  local_3b8 = 0;
  uStack_3b0 = 0;
  local_398 = 0;
  local_390 = 0x10;
  local_3a8 = 0;
  local_3c8 = 0;
  local_3c0 = 0;
  local_e8 = 0;
  local_f0 = (undefined8 *)0x0;
  local_f8 = (undefined **)0x0;
  local_100 = &PTR_FUN_7105232e00;
  local_108[0] = 0;
  local_d0 = (undefined8 *)0x0;
  local_d8 = (undefined8 *)0x0;
  local_e0 = 0;
  local_3d8 = 0;
  local_3d0 = 0;
  local_3e8 = 0;
  local_3e0 = 0;
  local_3f8 = 0;
  local_3f0 = 0;
  local_408 = 0;
  local_400 = 0;
  local_418 = 0;
  uStack_410 = 0;
  local_428 = 0;
  local_420 = (byte ****)0x0;
  __n = local_420;
  if (&local_428 != (undefined8 *)(param_2 + 0x10)) {
    __n = *(byte *****)(param_2 + 0x18);
    param_8 = *(void **)(param_2 + 0x20);
    if ((*(byte *)(param_2 + 0x10) & 1) == 0) {
      param_8 = (void *)(param_2 + 0x11);
      __n = (byte ****)(ulong)(*(byte *)(param_2 + 0x10) >> 1);
    }
    if (__n < (byte ****)0x16 || (long)__n - 0x16U == 0) {
      if (__n != (byte ****)0x0) {
        memmove((void *)((ulong)&local_428 | 1),param_8,(size_t)__n);
      }
      *(undefined1 *)((long)&local_428 + 1 + (long)__n) = 0;
      if ((local_428 & 1) == 0) {
        local_428 = CONCAT71(local_428._1_7_,(char)((int)__n << 1));
        __n = local_420;
      }
    }
    else {
      param_4 = (byte ****)0x0;
      param_5 = (long ****)0x0;
      param_6 = (byte ****)0x0;
      FUN_71037cfe00(&local_428,0x16,(long)__n - 0x16U,(byte ****)0x0,(long ****)0x0,0,(size_t)__n,
                     param_8);
      param_7 = __n;
      __n = local_420;
    }
  }
  local_420 = __n;
  local_408 = *(undefined8 *)(param_2 + 0x58);
  local_400 = *(undefined8 *)(param_2 + 0x60);
  local_3f8 = *(undefined8 *)(param_2 + 0x68);
  local_3f0 = *(undefined8 *)(param_2 + 0x70);
  local_3e8 = *(undefined8 *)(param_2 + 0x78);
  local_3e0 = *(undefined8 *)(param_2 + 0x80);
  local_3d8 = *(undefined8 *)(param_2 + 0x88);
  local_3d0 = *(undefined8 *)(param_2 + 0x90);
  local_3c8 = *(undefined8 *)(param_2 + 0x98);
  uStack_3b0 = *(undefined8 *)(param_2 + 0xb0);
  local_3c0 = *(undefined8 *)(param_2 + 0xa0);
  local_3b8 = *(undefined8 *)(param_2 + 0xa8);
  local_3a8 = *(undefined4 *)(param_2 + 0xb8);
  local_c8 = (undefined4)
             ((ulong)(*(long *)(*(long *)(param_2 + 0x678) + 0x20) -
                     *(long *)(*(long *)(param_2 + 0x678) + 0x18)) >> 6);
  if (param_3 != 1) {
    ppuVar7 = (undefined **)(param_2 + 0x5f8);
    FUN_71035fd030(&local_c0,*(uint *)(param_2 + 0x5f0) ^ (int)*(uint *)(param_2 + 0x5f0) >> 0x1f,
                   (long)ppuVar7);
    if (((((long *)CONCAT44(uStack_ac,local_b0) == (long *)0x0) ||
         (*(long *)CONCAT44(uStack_ac,local_b0) != CONCAT44(uStack_a4,uStack_a8))) ||
        (*(int *)(local_b8 + 2) != 0)) || (local_b8 == (undefined **)0x0)) {
      plVar16 = (long *)0x0;
LAB_7103888cb4:
      ppuVar22 = (undefined **)0x0;
      lVar20 = 0;
    }
    else {
      plVar16 = (long *)local_b8[1];
      if (plVar16 == (long *)0x0) goto LAB_7103888cb4;
      lVar20 = *plVar16;
      ppuVar22 = local_b8;
    }
    local_b0 = (uint)ppuVar22;
    uStack_ac = (uint)((ulong)ppuVar22 >> 0x20);
    uStack_a8 = SUB84(plVar16,0);
    uStack_a4 = (undefined4)((ulong)plVar16 >> 0x20);
    uStack_a0 = (undefined4)lVar20;
    uStack_9c = (undefined4)((ulong)lVar20 >> 0x20);
    local_b8 = &PTR_FUN_7105232e00;
    local_c0 = (undefined **)((ulong)local_c0 & 0xffffffff00000000);
    if (local_108[0] == 0) {
      if ((plVar16 == (long *)0x0) || (*plVar16 != lVar20)) {
        local_f8 = (undefined **)0x0;
LAB_7103888e78:
        local_e8 = 0;
        local_f0 = (undefined8 *)0x0;
      }
      else {
        local_f8 = ppuVar22;
        if (ppuVar22 == (undefined **)0x0) goto LAB_7103888e78;
        local_f0 = (undefined8 *)ppuVar22[1];
        local_e8 = *local_f0;
      }
      uVar9 = 0;
    }
    else {
      FUN_71035e9570(local_108[0] ^ (int)local_108[0] >> 0x1f,&local_100);
      local_f8 = (undefined **)CONCAT44(uStack_ac,local_b0);
      local_f0 = (undefined8 *)CONCAT44(uStack_a4,uStack_a8);
      local_e8 = CONCAT44(uStack_9c,uStack_a0);
      local_100 = &PTR_FUN_7105232e00;
      local_108[0] = 0;
      uVar9 = (uint)local_c0;
    }
    FUN_71035e9570(uVar9 ^ (int)uVar9 >> 0x1f,&local_b8);
    local_478 = (byte ****)0x0;
    lVar20 = *(long *)(param_2 + 200);
    goto joined_r0x007103888ea4;
  }
  FUN_71035fd030(&local_c0,*(uint *)(param_2 + 0x5f0) ^ (int)*(uint *)(param_2 + 0x5f0) >> 0x1f,
                 param_2 + 0x5f8);
  (**(code **)(*local_b8 + 0x20))(&local_448);
  iVar5 = FUN_710392e1f0(&local_468,0x10,(long ****)0xf20,param_4,param_5,param_6,param_7,param_8);
  if ((iVar5 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
    local_c0 = (undefined **)0xf20;
    uVar6 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_c0);
    if ((uVar6 & 1) != 0) {
      FUN_710392e1f0(&local_468,0x10,(long ****)0xf20,param_4,param_5,param_6,param_7,param_8);
    }
  }
  ppuVar7 = local_468;
  nu::VirtualAllocHook(0xf20,0x10,local_468);
  ppuVar22 = local_468;
  FUN_71037c3a70(local_468);
  *(uint *)(ppuVar22 + 2) = 0;
  *(undefined1 *)((long)ppuVar22 + 0x14) = 0;
  ppuVar22[0x1e3] = (undefined *)0x0;
  *ppuVar22 = (undefined *)&PTR_thunk_FUN_71037d9de0_7105243978;
  if (ppuVar22 == (undefined **)0x0) {
    plVar16 = (long *)0x0;
    lVar20 = 0;
  }
  else {
    plVar16 = (long *)ppuVar22[1];
    lVar20 = *plVar16;
  }
  local_b8 = (undefined **)local_440[2];
  uStack_ac = uStack_ac & 0xffffff00;
  local_b0 = *(uint *)(local_440 + 3) | 4;
  local_c0 = (undefined **)0x0;
  local_6b = 0;
  if (&uStack_ac != (uint *)((long)local_440 + 0x1c)) {
    uVar14 = *(undefined8 *)((long)local_440 + 0x1c);
    uStack_ac = (uint)uVar14;
    uStack_a8 = (undefined4)((ulong)uVar14 >> 0x20);
    local_94 = *(undefined8 *)((long)local_440 + 0x34);
    uStack_8c = *(undefined8 *)((long)local_440 + 0x3c);
    uStack_a4 = (undefined4)*(undefined8 *)((long)local_440 + 0x24);
    uStack_a0 = (undefined4)((ulong)*(undefined8 *)((long)local_440 + 0x24) >> 0x20);
    uStack_9c = (undefined4)*(undefined8 *)((long)local_440 + 0x2c);
    uStack_98 = (undefined4)((ulong)*(undefined8 *)((long)local_440 + 0x2c) >> 0x20);
    uStack_74 = *(undefined8 *)((long)local_440 + 0x54);
    local_84 = *(undefined8 *)((long)local_440 + 0x44);
    local_7c = *(undefined8 *)((long)local_440 + 0x4c);
    local_6c = *(undefined1 *)((long)local_440 + 0x5c);
    local_6b = *(undefined1 *)((long)local_440 + 0x5d);
  }
  (**(code **)(*ppuVar22 + 0x10))(&local_468,ppuVar22,&local_c0);
  (**(code **)(*ppuVar22 + 0xb8))(ppuVar22,&local_448);
  if ((int)local_468 < 0) {
    if (plVar16 == (long *)0x0) goto LAB_7103888e3c;
LAB_7103888e00:
    plVar18 = (long *)0x0;
    if (ppuVar22 == (undefined **)0x0) {
      ppuVar21 = (undefined **)0x0;
      plVar17 = plVar18;
    }
    else {
      ppuVar21 = (undefined **)0x0;
      plVar17 = (long *)0x0;
      if (*plVar16 == lVar20) {
        (**(code **)(*ppuVar22 + 8))(ppuVar22);
        plVar16 = (long *)0x0;
        goto LAB_7103888e3c;
      }
    }
  }
  else {
    if (plVar16 != (long *)0x0) {
      if (*plVar16 != lVar20) goto LAB_7103888e00;
      plVar18 = *(long **)ppuVar22[1];
      plVar17 = (long *)ppuVar22[1];
      ppuVar21 = ppuVar22;
      goto LAB_7103888e40;
    }
LAB_7103888e3c:
    plVar18 = (long *)0x0;
    ppuVar21 = (undefined **)0x0;
    plVar17 = plVar16;
  }
LAB_7103888e40:
  local_b0 = 0;
  uStack_ac = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  local_c0 = &PTR_FUN_7105232e60;
  local_b8 = (undefined **)0x0;
  ppuVar22 = ppuVar21;
  if ((plVar17 != (long *)0x0) && ((long *)*plVar17 == plVar18)) {
    if (ppuVar21 == (undefined **)0x0) {
      puVar10 = (undefined8 *)0x0;
      uVar14 = 0;
    }
    else {
      puVar10 = (undefined8 *)ppuVar21[1];
      uVar14 = *puVar10;
    }
    plVar18 = (long *)0x0;
    ppuVar22 = (undefined **)0x0;
    plVar17 = (long *)0x0;
    local_b0 = (uint)puVar10;
    uStack_ac = (uint)((ulong)puVar10 >> 0x20);
    uStack_a8 = (undefined4)uVar14;
    uStack_a4 = (undefined4)((ulong)uVar14 >> 0x20);
    local_b8 = ppuVar21;
  }
  FUN_71035f68b0(local_108,(long)&local_c0);
  local_c0 = &PTR_FUN_7105232e60;
  if ((((long *)CONCAT44(uStack_ac,local_b0) != (long *)0x0) &&
      (*(long *)CONCAT44(uStack_ac,local_b0) == CONCAT44(uStack_a4,uStack_a8))) &&
     (local_b8 != (undefined **)0x0)) {
    (**(code **)(*local_b8 + 8))();
  }
  if (((plVar17 != (long *)0x0) && ((long *)*plVar17 == plVar18)) && (ppuVar22 != (undefined **)0x0)
     ) {
    (**(code **)(*ppuVar22 + 8))(ppuVar22);
  }
  local_478 = (byte ****)0x1;
  lVar20 = *(long *)(param_2 + 200);
joined_r0x007103888ea4:
  if (lVar20 != 0) {
    lVar20 = lVar20 * 0x28;
    ppuVar22 = (undefined **)(*(long *)(param_2 + 0xc0) + 8);
    do {
      ppuVar7 = ppuVar22;
      FUN_710359c770(&local_c0,*(uint *)(ppuVar22 + -1) ^ (int)*(uint *)(ppuVar22 + -1) >> 0x1f,
                     (long)ppuVar22);
      if (*(uint *)(local_b8 + 2) == 1) {
        ppuVar7 = ppuVar22;
        FUN_710359c770(&local_c0,*(uint *)(ppuVar22 + -1) ^ (int)*(uint *)(ppuVar22 + -1) >> 0x1f,
                       (long)ppuVar22);
        if ((((long *)CONCAT44(uStack_ac,local_b0) == (long *)0x0) ||
            (*(long *)CONCAT44(uStack_ac,local_b0) != CONCAT44(uStack_a4,uStack_a8))) ||
           (*(uint *)(local_b8 + 2) != 1)) {
          local_438 = (long *)0x0;
          lStack_430 = 0;
          local_440 = (undefined **)0x0;
        }
        else {
          local_440 = local_b8;
          if (local_b8 == (undefined **)0x0) {
            local_438 = (long *)0x0;
            lStack_430 = 0;
          }
          else {
            local_438 = (long *)local_b8[1];
            lStack_430 = *local_438;
          }
        }
        local_448 = (byte ***)&PTR_FUN_710526f978;
        if (local_398 < local_390) {
          if ((local_438 == (long *)0x0) || (*local_438 != lStack_430)) {
LAB_71038890c8:
            ppuVar21 = (undefined **)0x0;
          }
          else {
            ppuVar21 = local_440;
            if (local_440 != (undefined **)0x0) goto LAB_710388901c;
          }
LAB_71038890cc:
          puVar10 = (undefined8 *)0x0;
          uVar14 = 0;
LAB_71038890d0:
          puVar12 = (undefined4 *)(local_3a0 + local_398 * 0x28);
          *(undefined ***)(puVar12 + 2) = &PTR_FUN_7105231ad0;
          *(undefined ***)(puVar12 + 4) = ppuVar21;
          *(undefined8 **)(puVar12 + 6) = puVar10;
          *(undefined8 *)(puVar12 + 8) = uVar14;
          *puVar12 = 0;
          local_398 = local_398 + 1;
        }
        else {
          ppuVar7 = (undefined **)(local_3a0 + local_398 * 0x28);
          param_4 = &local_448;
          FUN_710388a3a0(&local_c0,(long *)&local_3a0,(uint *)ppuVar7,param_4,param_5,param_6,
                         param_7,param_8);
        }
      }
      else if (*(uint *)(local_b8 + 2) == 0) {
        ppuVar7 = ppuVar22;
        FUN_710359c770(&local_c0,*(uint *)(ppuVar22 + -1) ^ (int)*(uint *)(ppuVar22 + -1) >> 0x1f,
                       (long)ppuVar22);
        if ((((long *)CONCAT44(uStack_ac,local_b0) == (long *)0x0) ||
            (*(long *)CONCAT44(uStack_ac,local_b0) != CONCAT44(uStack_a4,uStack_a8))) ||
           (local_440 = local_b8, *(uint *)(local_b8 + 2) != 0)) {
          local_438 = (long *)0x0;
          lStack_430 = 0;
          local_440 = (undefined **)0x0;
        }
        else if (local_b8 == (undefined **)0x0) {
          local_438 = (long *)0x0;
          lStack_430 = 0;
        }
        else {
          local_438 = (long *)local_b8[1];
          lStack_430 = *local_438;
        }
        local_448 = (byte ***)&PTR_FUN_710526f8c8;
        if (local_398 < local_390) {
          if ((local_438 == (long *)0x0) || (*local_438 != lStack_430)) goto LAB_71038890c8;
          ppuVar21 = local_440;
          if (local_440 == (undefined **)0x0) goto LAB_71038890cc;
LAB_710388901c:
          puVar10 = (undefined8 *)local_440[1];
          uVar14 = *puVar10;
          ppuVar21 = local_440;
          goto LAB_71038890d0;
        }
        ppuVar7 = (undefined **)(local_3a0 + local_398 * 0x28);
        param_4 = &local_448;
        FUN_710388a0e0(&local_c0,(long *)&local_3a0,(uint *)ppuVar7,param_4,param_5,param_6,param_7,
                       param_8);
      }
      lVar20 = lVar20 + -0x28;
      ppuVar22 = ppuVar22 + 5;
    } while (lVar20 != 0);
  }
  lVar20 = *(long *)(param_2 + 0x28);
  lVar25 = *(long *)(param_2 + 0x30);
  if (lVar20 == lVar25) {
    bVar3 = false;
  }
  else if (param_3 == 3) {
    bVar3 = false;
    do {
      iVar5 = *(int *)(*(long *)(lVar20 + 8) + 0x68);
      FUN_710388ad30(&local_c0,*(long *)(lVar20 + 8),ppuVar7,param_4,param_5,param_6,param_7,param_8
                    );
      ppuVar22 = local_b8;
      ((uint *)((long)local_b8 + 100))[0] = 0;
      ((uint *)((long)local_b8 + 100))[1] = 0;
      if (local_d8 < local_d0) {
        local_d8[1] = 0;
        local_d8[2] = 0;
        local_d8[3] = 0;
        *local_d8 = &PTR_FUN_7105231930;
        plVar16 = (long *)CONCAT44(uStack_ac,local_b0);
        if ((plVar16 != (long *)0x0) && (*plVar16 == CONCAT44(uStack_a4,uStack_a8))) {
          local_b0 = 0;
          uStack_ac = 0;
          uStack_a8 = 0;
          uStack_a4 = 0;
          local_b8 = (undefined **)0x0;
          local_d8[1] = ppuVar22;
          if (ppuVar22 == (undefined **)0x0) {
            local_d8[2] = 0;
            uVar14 = 0;
          }
          else {
            puVar10 = (undefined8 *)ppuVar22[1];
            local_d8[2] = puVar10;
            uVar14 = *puVar10;
          }
          plVar16 = (long *)0x0;
          local_d8[3] = uVar14;
        }
        local_d8 = local_d8 + 4;
      }
      else {
        FUN_7103662c30(&local_e0,(long)&local_c0,ppuVar7,param_4,param_5,param_6,param_7,param_8);
        plVar16 = (long *)CONCAT44(uStack_ac,local_b0);
      }
      bVar3 = (bool)(bVar3 | iVar5 == 0);
      local_c0 = &PTR_FUN_7105231930;
      if (((plVar16 != (long *)0x0) && (*plVar16 == CONCAT44(uStack_a4,uStack_a8))) &&
         (local_b8 != (undefined **)0x0)) {
        (**(code **)(*local_b8 + 8))();
      }
      lVar20 = lVar20 + 0x20;
    } while (lVar25 != lVar20);
  }
  else {
    bVar3 = false;
    do {
      iVar5 = *(int *)(*(long *)(lVar20 + 8) + 0x68);
      FUN_710388ad30(&local_c0,*(long *)(lVar20 + 8),ppuVar7,param_4,param_5,param_6,param_7,param_8
                    );
      ppuVar22 = local_b8;
      if (local_d8 < local_d0) {
        local_d8[1] = 0;
        local_d8[2] = 0;
        local_d8[3] = 0;
        *local_d8 = &PTR_FUN_7105231930;
        plVar16 = (long *)CONCAT44(uStack_ac,local_b0);
        if ((plVar16 != (long *)0x0) && (*plVar16 == CONCAT44(uStack_a4,uStack_a8))) {
          local_b0 = 0;
          uStack_ac = 0;
          uStack_a8 = 0;
          uStack_a4 = 0;
          local_b8 = (undefined **)0x0;
          local_d8[1] = ppuVar22;
          if (ppuVar22 == (undefined **)0x0) {
            uVar14 = 0;
            local_d8[2] = 0;
          }
          else {
            puVar10 = (undefined8 *)ppuVar22[1];
            local_d8[2] = puVar10;
            uVar14 = *puVar10;
          }
          plVar16 = (long *)0x0;
          local_d8[3] = uVar14;
        }
        local_d8 = local_d8 + 4;
      }
      else {
        FUN_7103662c30(&local_e0,(long)&local_c0,ppuVar7,param_4,param_5,param_6,param_7,param_8);
        plVar16 = (long *)CONCAT44(uStack_ac,local_b0);
      }
      bVar3 = (bool)(bVar3 | iVar5 == 0);
      local_c0 = &PTR_FUN_7105231930;
      if (((plVar16 != (long *)0x0) && (*plVar16 == CONCAT44(uStack_a4,uStack_a8))) &&
         (local_b8 != (undefined **)0x0)) {
        (**(code **)(*local_b8 + 8))();
      }
      lVar20 = lVar20 + 0x20;
    } while (lVar25 != lVar20);
  }
  iVar5 = FUN_710392e1f0(&local_448,0x10,(long ****)0x698,param_4,param_5,param_6,param_7,param_8);
  if ((iVar5 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
    local_c0 = (undefined **)0x698;
    uVar6 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_c0);
    if ((uVar6 & 1) != 0) {
      FUN_710392e1f0(&local_448,0x10,(long ****)0x698,param_4,param_5,param_6,param_7,param_8);
    }
  }
  nu::VirtualAllocHook(0x698,0x10,local_448);
  pppbVar4 = local_448;
  FUN_71037c3a70(local_448);
  *pppbVar4 = &PTR_FUN_710526f908;
  pppbVar4[9] = (byte **)0x0;
  pppbVar4[8] = (byte **)(pppbVar4 + 9);
  *(undefined2 *)(pppbVar4 + 0xd2) = 0;
  pppbVar4[10] = (byte **)0x0;
  pppbVar4[0xb] = (byte **)0x0;
  *(undefined4 *)(pppbVar4 + 0x17) = 0;
  pppbVar4[0xc] = (byte **)0x0;
  pppbVar4[0x6b] = (byte **)(pppbVar4 + 0x6e);
  pppbVar4[0x6c] = (byte **)0x0;
  pppbVar4[0xc2] = (byte **)0x0;
  pppbVar4[0xc1] = (byte **)0x0;
  pppbVar4[0xc0] = (byte **)0x0;
  pppbVar4[0xbf] = &PTR_FUN_7105232e00;
  *(undefined4 *)(pppbVar4 + 0xbe) = 0;
  pppbVar4[0xc5] = (byte **)0x0;
  pppbVar4[0xc4] = (byte **)0x0;
  pppbVar4[0xc3] = (byte **)0x0;
  pppbVar4[0xc9] = (byte **)0x0;
  pppbVar4[200] = (byte **)0x0;
  pppbVar4[199] = (byte **)0x0;
  pppbVar4[0xcd] = (byte **)0x0;
  pppbVar4[0xcc] = (byte **)0x0;
  pppbVar4[0xcb] = (byte **)0x0;
  pppbVar4[0xd1] = (byte **)0x0;
  pppbVar4[0xd0] = (byte **)0x0;
  pppbVar4[0xcf] = (byte **)0x0;
  pppbVar4[6] = (byte **)0x0;
  pppbVar4[7] = (byte **)0x0;
  pppbVar4[4] = (byte **)0x0;
  pppbVar4[5] = (byte **)0x0;
  pppbVar4[2] = (byte **)0x0;
  pppbVar4[3] = (byte **)0x0;
  pppbVar4[0x15] = (byte **)0x0;
  pppbVar4[0x16] = (byte **)0x0;
  pppbVar4[0x13] = (byte **)0x0;
  pppbVar4[0x14] = (byte **)0x0;
  pppbVar4[0x11] = (byte **)0x0;
  pppbVar4[0x12] = (byte **)0x0;
  pppbVar4[0xf] = (byte **)0x0;
  pppbVar4[0x10] = (byte **)0x0;
  pppbVar4[0xd] = (byte **)0x0;
  pppbVar4[0xe] = (byte **)0x0;
  pppbVar4[0x18] = (byte **)(pppbVar4 + 0x1b);
  pppbVar4[0x19] = (byte **)0x0;
  pppbVar4[0x1a] = (byte **)&DAT_00000010;
  pppbVar4[0x6d] = (byte **)&DAT_00000010;
  pppbVar4[0xc6] = &PTR_FUN_7105231d18;
  pppbVar4[0xca] = &PTR_FUN_7105231d18;
  pppbVar4[0xce] = &PTR_FUN_7105232dc0;
  *param_1 = &PTR_FUN_71052338e8;
  param_1[1] = pppbVar4;
  if (pppbVar4 == (byte ***)0x0) {
    ppbVar19 = (byte **)0x0;
    pbVar24 = (byte *)0x0;
  }
  else {
    ppbVar19 = pppbVar4[1];
    pbVar24 = *ppbVar19;
  }
  param_1[2] = ppbVar19;
  param_1[3] = pbVar24;
  *param_1 = &PTR_FUN_7105232d08;
  FUN_7103886f60((long)pppbVar4,&local_428,0,(ulong)local_478,param_5,param_6,param_7,param_8);
  pppbVar1 = pppbVar4 + 0x6b;
  if (param_3 == 3) {
    ppbVar19 = pppbVar4[0x6c];
    if (ppbVar19 != (byte **)0x0) {
      ppbVar13 = *pppbVar1;
      do {
        FUN_7103599990(*(uint *)ppbVar13 ^ (int)*(uint *)ppbVar13 >> 0x1f,ppbVar13 + 1);
        ppbVar19 = (byte **)((long)ppbVar19 + -1);
        ppbVar13 = ppbVar13 + 5;
      } while (ppbVar19 != (byte **)0x0);
    }
    pppbVar4[0x6c] = (byte **)0x0;
    if (*(long *)(param_2 + 0x360) != 0) {
      lVar25 = *(long *)(param_2 + 0x360) * 0x28;
      lVar20 = *(long *)(param_2 + 0x358) + 8;
      do {
        FUN_710359c770(&local_c0,*(uint *)(lVar20 + -8) ^ (int)*(uint *)(lVar20 + -8) >> 0x1f,lVar20
                      );
        if (*(uint *)(local_b8 + 2) == 1) {
          FUN_710359c770(&local_c0,*(uint *)(lVar20 + -8) ^ (int)*(uint *)(lVar20 + -8) >> 0x1f,
                         lVar20);
          if ((((long *)CONCAT44(uStack_ac,local_b0) == (long *)0x0) ||
              (*(long *)CONCAT44(uStack_ac,local_b0) != CONCAT44(uStack_a4,uStack_a8))) ||
             (*(uint *)(local_b8 + 2) != 1)) {
            local_438 = (long *)0x0;
            lStack_430 = 0;
            local_440 = (undefined **)0x0;
          }
          else {
            local_440 = local_b8;
            if (local_b8 == (undefined **)0x0) {
              local_438 = (long *)0x0;
              lStack_430 = 0;
            }
            else {
              local_438 = (long *)local_b8[1];
              lStack_430 = *local_438;
            }
          }
          local_448 = (byte ***)&PTR_FUN_710526f978;
          ppbVar19 = pppbVar4[0x6c];
          if (ppbVar19 < pppbVar4[0x6d]) {
            ppbVar13 = *pppbVar1;
            if ((local_438 == (long *)0x0) || (*local_438 != lStack_430)) {
LAB_71038896cc:
              ppuVar7 = (undefined **)0x0;
            }
            else {
              ppuVar7 = local_440;
              if (local_440 != (undefined **)0x0) goto LAB_7103889624;
            }
LAB_71038896d0:
            pbVar24 = (byte *)0x0;
            pbVar15 = (byte *)0x0;
LAB_71038896d4:
            ppbVar13 = ppbVar13 + (long)ppbVar19 * 5;
            ppbVar13[1] = (byte *)&PTR_FUN_7105231ad0;
            ppbVar13[2] = (byte *)ppuVar7;
            ppbVar13[3] = pbVar24;
            ppbVar13[4] = pbVar15;
            *(undefined4 *)ppbVar13 = 0;
            pppbVar4[0x6c] = (byte **)((long)pppbVar4[0x6c] + 1);
          }
          else {
            FUN_710388a3a0(&local_c0,(long *)pppbVar1,(uint *)(*pppbVar1 + (long)ppbVar19 * 5),
                           &local_448,param_5,param_6,param_7,param_8);
          }
        }
        else if (*(uint *)(local_b8 + 2) == 0) {
          FUN_710359c770(&local_c0,*(uint *)(lVar20 + -8) ^ (int)*(uint *)(lVar20 + -8) >> 0x1f,
                         lVar20);
          if ((((long *)CONCAT44(uStack_ac,local_b0) == (long *)0x0) ||
              (*(long *)CONCAT44(uStack_ac,local_b0) != CONCAT44(uStack_a4,uStack_a8))) ||
             (local_440 = local_b8, *(uint *)(local_b8 + 2) != 0)) {
            local_438 = (long *)0x0;
            lStack_430 = 0;
            local_440 = (undefined **)0x0;
          }
          else if (local_b8 == (undefined **)0x0) {
            local_438 = (long *)0x0;
            lStack_430 = 0;
          }
          else {
            local_438 = (long *)local_b8[1];
            lStack_430 = *local_438;
          }
          local_448 = (byte ***)&PTR_FUN_710526f8c8;
          ppbVar19 = pppbVar4[0x6c];
          if (ppbVar19 < pppbVar4[0x6d]) {
            ppbVar13 = *pppbVar1;
            if ((local_438 == (long *)0x0) || (*local_438 != lStack_430)) goto LAB_71038896cc;
            ppuVar7 = local_440;
            if (local_440 == (undefined **)0x0) goto LAB_71038896d0;
LAB_7103889624:
            pbVar24 = local_440[1];
            pbVar15 = *(byte **)pbVar24;
            ppuVar7 = local_440;
            goto LAB_71038896d4;
          }
          FUN_710388a0e0(&local_c0,(long *)pppbVar1,(uint *)(*pppbVar1 + (long)ppbVar19 * 5),
                         &local_448,param_5,param_6,param_7,param_8);
        }
        lVar25 = lVar25 + -0x28;
        lVar20 = lVar20 + 0x28;
      } while (lVar25 != 0);
    }
  }
  else if (((*(char *)((long)pppbVar4 + 0x691) != '\0') || (*(char *)(pppbVar4 + 0xd2) != '\0')) &&
          (lVar20 = *(long *)(param_2 + 0x360), lVar20 != 0)) {
    lVar23 = *(long *)(param_2 + 0x358);
    lVar25 = 0;
    do {
      puVar2 = (uint *)(lVar23 + lVar25);
      puVar8 = puVar2 + 2;
      FUN_710359c770(&local_c0,*puVar2 ^ (int)*puVar2 >> 0x1f,(long)puVar8);
      uVar9 = *(uint *)(local_b8 + 2);
      FUN_710359c770(&local_c0,*(uint *)(lVar23 + lVar25) ^ (int)*(uint *)(lVar23 + lVar25) >> 0x1f,
                     (long)puVar8);
      (**(code **)(*local_b8 + 0x20))(&local_448);
      if (param_3 == 1) {
        if (uVar9 == 0) {
          FUN_71035e9390(&local_468,(long)&local_448,puVar8,local_478,param_5,param_6,param_7,
                         param_8);
          ppuVar7 = local_460;
          local_b0 = 0;
          uStack_ac = 0;
          uStack_a8 = 0;
          uStack_a4 = 0;
          local_b8 = (undefined **)0x0;
          if ((local_458 != (long *)0x0) && (*local_458 == local_450)) {
            local_460 = (undefined **)0x0;
            local_458 = (long *)0x0;
            local_450 = 0;
            local_b8 = ppuVar7;
            if (ppuVar7 == (undefined **)0x0) {
              local_b0 = 0;
              uStack_ac = 0;
              uVar14 = 0;
            }
            else {
              puVar10 = (undefined8 *)ppuVar7[1];
              local_b0 = (uint)puVar10;
              uStack_ac = (uint)((ulong)puVar10 >> 0x20);
              uVar14 = *puVar10;
            }
            uStack_a8 = (undefined4)uVar14;
            uStack_a4 = (undefined4)((ulong)uVar14 >> 0x20);
          }
          ppbVar19 = (byte **)((long)*pppbVar1 + lVar25);
LAB_7103889e9c:
          plVar16 = local_458;
          local_c0 = &PTR_FUN_7105231af0;
          FUN_71035e9cc0((uint *)ppbVar19,(long)&local_c0);
          local_c0 = &PTR_FUN_7105231af0;
          if ((((long *)CONCAT44(uStack_ac,local_b0) != (long *)0x0) &&
              (*(long *)CONCAT44(uStack_ac,local_b0) == CONCAT44(uStack_a4,uStack_a8))) &&
             (local_b8 != (undefined **)0x0)) {
            (**(code **)(*local_b8 + 8))();
          }
          local_468 = &PTR_FUN_7105231bf0;
          ppuVar22 = local_460;
        }
        else {
          FUN_710359cdd0(&local_468,(long)&local_448,puVar8,local_478,param_5,param_6,param_7,
                         param_8);
          ppuVar7 = local_460;
          local_b0 = 0;
          uStack_ac = 0;
          uStack_a8 = 0;
          uStack_a4 = 0;
          local_b8 = (undefined **)0x0;
          if ((local_458 != (long *)0x0) && (*local_458 == local_450)) {
            local_460 = (undefined **)0x0;
            local_458 = (long *)0x0;
            local_450 = 0;
            local_b8 = ppuVar7;
            if (ppuVar7 == (undefined **)0x0) {
              local_b0 = 0;
              uStack_ac = 0;
              uVar14 = 0;
            }
            else {
              puVar10 = (undefined8 *)ppuVar7[1];
              local_b0 = (uint)puVar10;
              uStack_ac = (uint)((ulong)puVar10 >> 0x20);
              uVar14 = *puVar10;
            }
            uStack_a8 = (undefined4)uVar14;
            uStack_a4 = (undefined4)((ulong)uVar14 >> 0x20);
          }
          ppbVar19 = (byte **)((long)*pppbVar1 + lVar25);
LAB_7103889cec:
          plVar16 = local_458;
          local_c0 = &PTR_FUN_7105231af0;
          FUN_71035e9cc0((uint *)ppbVar19,(long)&local_c0);
          local_c0 = &PTR_FUN_7105231af0;
          if ((((long *)CONCAT44(uStack_ac,local_b0) != (long *)0x0) &&
              (*(long *)CONCAT44(uStack_ac,local_b0) == CONCAT44(uStack_a4,uStack_a8))) &&
             (local_b8 != (undefined **)0x0)) {
            (**(code **)(*local_b8 + 8))();
          }
          local_468 = &PTR_FUN_7105231850;
          ppuVar22 = local_460;
        }
        local_460 = ppuVar22;
        if (((plVar16 != (long *)0x0) && (*plVar16 == local_450)) && (ppuVar22 != (undefined **)0x0)
           ) {
          pcVar11 = *(code **)(*ppuVar22 + 8);
LAB_7103889f0c:
          (*pcVar11)(ppuVar22);
        }
      }
      else {
        if (lVar25 != 0) goto LAB_7103889f14;
        if (param_3 == 2) {
          if (bVar3) {
            FUN_710359cdd0(&local_468,(long)&local_448,puVar8,local_478,param_5,param_6,param_7,
                           param_8);
            ppuVar7 = local_460;
            ppbVar19 = *pppbVar1;
            local_b0 = 0;
            uStack_ac = 0;
            uStack_a8 = 0;
            uStack_a4 = 0;
            local_b8 = (undefined **)0x0;
            if ((local_458 != (long *)0x0) && (*local_458 == local_450)) {
              local_460 = (undefined **)0x0;
              local_458 = (long *)0x0;
              local_450 = 0;
              local_b8 = ppuVar7;
              if (ppuVar7 == (undefined **)0x0) {
                local_b0 = 0;
                uStack_ac = 0;
                uVar14 = 0;
              }
              else {
                puVar10 = (undefined8 *)ppuVar7[1];
                local_b0 = (uint)puVar10;
                uStack_ac = (uint)((ulong)puVar10 >> 0x20);
                uVar14 = *puVar10;
              }
              uStack_a8 = (undefined4)uVar14;
              uStack_a4 = (undefined4)((ulong)uVar14 >> 0x20);
            }
            goto LAB_7103889cec;
          }
          iVar5 = FUN_710392e1f0(&local_468,0x10,(long ****)0xf20,local_478,param_5,param_6,param_7,
                                 param_8);
          if ((iVar5 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
            local_c0 = (undefined **)0xf20;
            uVar6 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_c0);
            if ((uVar6 & 1) != 0) {
              FUN_710392e1f0(&local_468,0x10,(long ****)0xf20,local_478,param_5,param_6,param_7,
                             param_8);
            }
          }
          nu::VirtualAllocHook(0xf20,0x10,local_468);
          ppuVar7 = local_468;
          FUN_71037c3a70(local_468);
          *(uint *)(ppuVar7 + 2) = 1;
          *(undefined1 *)((long)ppuVar7 + 0x14) = 0;
          ppuVar7[0x1e3] = (undefined *)0x0;
          *ppuVar7 = (undefined *)&PTR_thunk_FUN_71037d83e0_7105243888;
          if (ppuVar7 == (undefined **)0x0) {
            plVar16 = (long *)0x0;
            local_4a0 = (long *)0x0;
          }
          else {
            plVar16 = (long *)ppuVar7[1];
            local_4a0 = (long *)*plVar16;
          }
          local_b8 = (undefined **)local_440[2];
          local_b0 = *(uint *)(local_440 + 3);
          local_c0 = (undefined **)0x0;
          local_6b = 0;
          uStack_ac = uStack_ac & 0xffffff00;
          if (&uStack_ac != (uint *)((long)local_440 + 0x1c)) {
            uVar14 = *(undefined8 *)((long)local_440 + 0x1c);
            uStack_ac = (uint)uVar14;
            uStack_a8 = (undefined4)((ulong)uVar14 >> 0x20);
            local_94 = *(undefined8 *)((long)local_440 + 0x34);
            uStack_8c = *(undefined8 *)((long)local_440 + 0x3c);
            uStack_a4 = (undefined4)*(undefined8 *)((long)local_440 + 0x24);
            uStack_a0 = (undefined4)((ulong)*(undefined8 *)((long)local_440 + 0x24) >> 0x20);
            uStack_9c = (undefined4)*(undefined8 *)((long)local_440 + 0x2c);
            uStack_98 = (undefined4)((ulong)*(undefined8 *)((long)local_440 + 0x2c) >> 0x20);
            uStack_74 = *(undefined8 *)((long)local_440 + 0x54);
            local_84 = *(undefined8 *)((long)local_440 + 0x44);
            local_7c = *(undefined8 *)((long)local_440 + 0x4c);
            local_6c = *(undefined1 *)((long)local_440 + 0x5c);
            local_6b = *(undefined1 *)((long)local_440 + 0x5d);
          }
          (**(code **)(*ppuVar7 + 0x10))(&local_468,ppuVar7,&local_c0);
          if ((int)local_468 < 0) {
            if (plVar16 == (long *)0x0) goto LAB_71038899e0;
LAB_71038899a0:
            plVar18 = (long *)0x0;
            if (ppuVar7 == (undefined **)0x0) {
              ppuVar22 = (undefined **)0x0;
              plVar17 = plVar18;
            }
            else {
              ppuVar22 = (undefined **)0x0;
              plVar17 = (long *)0x0;
              if ((long *)*plVar16 == local_4a0) {
                (**(code **)(*ppuVar7 + 8))(ppuVar7);
                plVar16 = (long *)0x0;
                goto LAB_71038899e0;
              }
            }
          }
          else {
            if (plVar16 != (long *)0x0) {
              if ((long *)*plVar16 != local_4a0) goto LAB_71038899a0;
              plVar18 = *(long **)ppuVar7[1];
              ppuVar22 = ppuVar7;
              plVar17 = (long *)ppuVar7[1];
              goto LAB_71038899e4;
            }
LAB_71038899e0:
            plVar18 = (long *)0x0;
            ppuVar22 = (undefined **)0x0;
            plVar17 = plVar16;
          }
LAB_71038899e4:
          ppbVar19 = *pppbVar1;
          if ((plVar17 != (long *)0x0) && ((long *)*plVar17 == plVar18)) {
            local_b8 = ppuVar22;
            if (ppuVar22 != (undefined **)0x0) goto LAB_710388998c;
LAB_7103889a14:
            uVar14 = 0;
            local_b0 = 0;
            uStack_ac = 0;
            goto LAB_7103889a1c;
          }
LAB_7103889a30:
          uStack_a4 = 0;
          uStack_a8 = 0;
          uStack_ac = 0;
          local_b0 = 0;
          local_b8 = (undefined **)0x0;
          local_4a0 = plVar18;
        }
        else {
          if (param_3 != 0) goto LAB_7103889f14;
          if (bVar3) {
            FUN_71035e9390(&local_468,(long)&local_448,puVar8,local_478,param_5,param_6,param_7,
                           param_8);
            ppuVar7 = local_460;
            ppbVar19 = *pppbVar1;
            local_b0 = 0;
            uStack_ac = 0;
            uStack_a8 = 0;
            uStack_a4 = 0;
            local_b8 = (undefined **)0x0;
            if ((local_458 != (long *)0x0) && (*local_458 == local_450)) {
              local_460 = (undefined **)0x0;
              local_458 = (long *)0x0;
              local_450 = 0;
              local_b8 = ppuVar7;
              if (ppuVar7 == (undefined **)0x0) {
                local_b0 = 0;
                uStack_ac = 0;
                uVar14 = 0;
              }
              else {
                puVar10 = (undefined8 *)ppuVar7[1];
                local_b0 = (uint)puVar10;
                uStack_ac = (uint)((ulong)puVar10 >> 0x20);
                uVar14 = *puVar10;
              }
              uStack_a8 = (undefined4)uVar14;
              uStack_a4 = (undefined4)((ulong)uVar14 >> 0x20);
            }
            goto LAB_7103889e9c;
          }
          iVar5 = FUN_710392e1f0(&local_468,0x10,(long ****)0xf20,local_478,param_5,param_6,param_7,
                                 param_8);
          if ((iVar5 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
            local_c0 = (undefined **)0xf20;
            uVar6 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_c0);
            if ((uVar6 & 1) != 0) {
              FUN_710392e1f0(&local_468,0x10,(long ****)0xf20,local_478,param_5,param_6,param_7,
                             param_8);
            }
          }
          nu::VirtualAllocHook(0xf20,0x10,local_468);
          ppuVar7 = local_468;
          FUN_71037c3a70(local_468);
          *(uint *)(ppuVar7 + 2) = 0;
          *(undefined1 *)((long)ppuVar7 + 0x14) = 0;
          ppuVar7[0x1e3] = (undefined *)0x0;
          *ppuVar7 = (undefined *)&PTR_thunk_FUN_71037d83e0_7105243798;
          if (ppuVar7 == (undefined **)0x0) {
            plVar16 = (long *)0x0;
            local_4a0 = (long *)0x0;
          }
          else {
            plVar16 = (long *)ppuVar7[1];
            local_4a0 = (long *)*plVar16;
          }
          local_b8 = (undefined **)local_440[2];
          local_b0 = *(uint *)(local_440 + 3);
          local_c0 = (undefined **)0x0;
          local_6b = 0;
          uStack_ac = uStack_ac & 0xffffff00;
          if (&uStack_ac != (uint *)((long)local_440 + 0x1c)) {
            uVar14 = *(undefined8 *)((long)local_440 + 0x1c);
            uStack_ac = (uint)uVar14;
            uStack_a8 = (undefined4)((ulong)uVar14 >> 0x20);
            local_94 = *(undefined8 *)((long)local_440 + 0x34);
            uStack_8c = *(undefined8 *)((long)local_440 + 0x3c);
            uStack_a4 = (undefined4)*(undefined8 *)((long)local_440 + 0x24);
            uStack_a0 = (undefined4)((ulong)*(undefined8 *)((long)local_440 + 0x24) >> 0x20);
            uStack_9c = (undefined4)*(undefined8 *)((long)local_440 + 0x2c);
            uStack_98 = (undefined4)((ulong)*(undefined8 *)((long)local_440 + 0x2c) >> 0x20);
            uStack_74 = *(undefined8 *)((long)local_440 + 0x54);
            local_84 = *(undefined8 *)((long)local_440 + 0x44);
            local_7c = *(undefined8 *)((long)local_440 + 0x4c);
            local_6c = *(undefined1 *)((long)local_440 + 0x5c);
            local_6b = *(undefined1 *)((long)local_440 + 0x5d);
          }
          (**(code **)(*ppuVar7 + 0x10))(&local_468,ppuVar7,&local_c0);
          if ((int)local_468 < 0) {
            if (plVar16 == (long *)0x0) goto LAB_7103889958;
LAB_7103889918:
            plVar18 = (long *)0x0;
            if (ppuVar7 == (undefined **)0x0) {
              ppuVar22 = (undefined **)0x0;
              plVar17 = plVar18;
            }
            else {
              ppuVar22 = (undefined **)0x0;
              plVar17 = (long *)0x0;
              if ((long *)*plVar16 == local_4a0) {
                (**(code **)(*ppuVar7 + 8))(ppuVar7);
                plVar16 = (long *)0x0;
                goto LAB_7103889958;
              }
            }
          }
          else {
            if (plVar16 != (long *)0x0) {
              if ((long *)*plVar16 != local_4a0) goto LAB_7103889918;
              plVar18 = *(long **)ppuVar7[1];
              ppuVar22 = ppuVar7;
              plVar17 = (long *)ppuVar7[1];
              goto LAB_710388995c;
            }
LAB_7103889958:
            plVar18 = (long *)0x0;
            ppuVar22 = (undefined **)0x0;
            plVar17 = plVar16;
          }
LAB_710388995c:
          ppbVar19 = *pppbVar1;
          if ((plVar17 == (long *)0x0) || ((long *)*plVar17 != plVar18)) goto LAB_7103889a30;
          local_b8 = ppuVar22;
          if (ppuVar22 == (undefined **)0x0) goto LAB_7103889a14;
LAB_710388998c:
          puVar10 = (undefined8 *)ppuVar22[1];
          local_b0 = (uint)puVar10;
          uStack_ac = (uint)((ulong)puVar10 >> 0x20);
          uVar14 = *puVar10;
          local_b8 = ppuVar22;
LAB_7103889a1c:
          plVar17 = (long *)0x0;
          ppuVar22 = (undefined **)0x0;
          local_4a0 = (long *)0x0;
          uStack_a8 = (undefined4)uVar14;
          uStack_a4 = (undefined4)((ulong)uVar14 >> 0x20);
        }
        local_c0 = &PTR_FUN_7105231af0;
        FUN_71035e9cc0((uint *)ppbVar19,(long)&local_c0);
        local_c0 = &PTR_FUN_7105231af0;
        if ((((long *)CONCAT44(uStack_ac,local_b0) != (long *)0x0) &&
            (*(long *)CONCAT44(uStack_ac,local_b0) == CONCAT44(uStack_a4,uStack_a8))) &&
           (local_b8 != (undefined **)0x0)) {
          (**(code **)(*local_b8 + 8))();
        }
        if (((plVar17 != (long *)0x0) && ((long *)*plVar17 == local_4a0)) &&
           (ppuVar22 != (undefined **)0x0)) {
          pcVar11 = *(code **)(*ppuVar22 + 8);
          goto LAB_7103889f0c;
        }
      }
LAB_7103889f14:
      lVar25 = lVar25 + 0x28;
    } while (puVar2 + 10 != (uint *)(lVar23 + lVar20 * 0x28));
  }
  FUN_71035e9280((byte *)&local_428);
  return;
}

