// addr:      7101c9e110
// offset:    0x1c9e110
// name:      FUN_7101c9e110
// mangled:   
// signature: undefined __cdecl FUN_7101c9e110(long param_1, char param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101c9e110(long param_1,char param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long ****__n;
  size_t sVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  long lVar7;
  char *pcVar8;
  long ****pppplVar9;
  ulong uVar10;
  long ***ppplVar11;
  undefined1 *puVar12;
  void *pvVar13;
  undefined1 *puVar14;
  long ****pppplVar15;
  undefined1 *puVar16;
  undefined1 local_68 [2];
  undefined1 uStack_66;
  undefined1 uStack_65;
  undefined1 uStack_64;
  undefined1 uStack_63;
  undefined1 uStack_62;
  undefined1 uStack_61;
  long ***local_60;
  undefined4 local_54;
  
  uVar2 = _local_68;
  if (param_2 == '\x03') {
    _local_68 = 0x607050403020100;
    uVar10 = *(ulong *)(param_1 + 400);
    pvVar13 = *(void **)(param_1 + 0x180);
    if (uVar10 - (long)pvVar13 < 8) {
      if (pvVar13 == (void *)0x0) {
        if (uVar10 < 0x3fffffffffffffff) goto LAB_7101c9e5dc;
        ppplVar11 = (long ***)0x7fffffffffffffff;
      }
      else {
        *(void **)(param_1 + 0x188) = pvVar13;
        FUN_710392eb40((ulong)pvVar13);
        uVar10 = 0;
        *(undefined8 *)(param_1 + 0x188) = 0;
        *(undefined8 *)(param_1 + 400) = 0;
        *(undefined8 *)(param_1 + 0x180) = 0;
LAB_7101c9e5dc:
        ppplVar11 = (long ***)(uVar10 * 2);
        if (ppplVar11 < &DAT_00000009) {
          ppplVar11 = (long ***)&DAT_00000008;
        }
      }
      puVar5 = (undefined4 *)
               FUN_710392e290(0x10,ppplVar11,param_3,param_4,param_5,param_6,param_7,param_8);
      if (puVar5 == (undefined4 *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_54 = 0;
          param_3 = &local_60;
          local_60 = ppplVar11;
          uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
          if (((uVar10 & 1) != 0) &&
             (puVar5 = (undefined4 *)
                       FUN_710392e290(0x10,ppplVar11,param_3,param_4,param_5,param_6,param_7,param_8
                                     ), puVar5 != (undefined4 *)0x0)) goto LAB_7101c9e63c;
        }
        puVar5 = (undefined4 *)0x0;
      }
LAB_7101c9e63c:
      uVar4 = _uStack_64;
      *(undefined1 **)(param_1 + 400) = (undefined1 *)((long)puVar5 + (long)ppplVar11);
      *(undefined4 **)(param_1 + 0x180) = puVar5;
      *puVar5 = 0x3020100;
      *(undefined1 *)(puVar5 + 1) = 4;
      *(undefined1 *)((long)puVar5 + 5) = uStack_63;
      *(undefined1 *)((long)puVar5 + 6) = uStack_62;
      *(undefined1 *)((long)puVar5 + 7) = uStack_61;
      puVar5 = puVar5 + 2;
      _uStack_64 = uVar4;
LAB_7101c9e678:
      *(undefined4 **)(param_1 + 0x188) = puVar5;
    }
    else {
      lVar7 = *(long *)(param_1 + 0x188);
      uVar10 = lVar7 - (long)pvVar13;
      pppplVar9 = (long ****)(local_68 + uVar10);
      pppplVar15 = pppplVar9;
      if (7 < uVar10) {
        pppplVar15 = &local_60;
      }
      __n = (long ****)((long)pppplVar15 - (long)local_68);
      if (__n != (long ****)0x0) {
        param_3 = __n;
        memmove(pvVar13,local_68,(size_t)__n);
      }
      if (7 < uVar10) {
        puVar5 = (undefined4 *)((long)pvVar13 + (long)__n);
        goto LAB_7101c9e678;
      }
      if (pppplVar15 != &local_60) {
        puVar6 = *(undefined1 **)(param_1 + 0x188);
        pppplVar15 = pppplVar9;
        if (((int)pvVar13 - (int)lVar7 & 1U) != 0) {
          pppplVar15 = (long ****)(local_68 + uVar10 + 1);
          *puVar6 = *(undefined1 *)pppplVar9;
          puVar6 = (undefined1 *)(*(long *)(param_1 + 0x188) + 1);
          *(undefined1 **)(param_1 + 0x188) = puVar6;
        }
        if ((long)pvVar13 + 7 != lVar7) {
          do {
            *puVar6 = *(undefined1 *)pppplVar15;
            lVar7 = *(long *)(param_1 + 0x188);
            *(long *)(param_1 + 0x188) = lVar7 + 1;
            *(undefined1 *)(lVar7 + 1) = *(undefined1 *)((long)pppplVar15 + 1);
            pppplVar15 = (long ****)((long)pppplVar15 + 2);
            puVar6 = (undefined1 *)(*(long *)(param_1 + 0x188) + 1);
            *(undefined1 **)(param_1 + 0x188) = puVar6;
          } while (pppplVar15 != &local_60);
        }
      }
    }
    _local_68 = CONCAT35(_uStack_63,0x706050403);
    uVar10 = *(ulong *)(param_1 + 0x1d8);
    pvVar13 = *(void **)(param_1 + 0x1c8);
    if (uVar10 - (long)pvVar13 < 5) {
      if (pvVar13 == (void *)0x0) {
        if (uVar10 < 0x3fffffffffffffff) goto LAB_7101c9e9cc;
        ppplVar11 = (long ***)0x7fffffffffffffff;
      }
      else {
        *(void **)(param_1 + 0x1d0) = pvVar13;
        FUN_710392eb40((ulong)pvVar13);
        uVar10 = 0;
        *(undefined8 *)(param_1 + 0x1d0) = 0;
        *(undefined8 *)(param_1 + 0x1d8) = 0;
        *(undefined8 *)(param_1 + 0x1c8) = 0;
LAB_7101c9e9cc:
        ppplVar11 = (long ***)(uVar10 * 2);
        if (ppplVar11 < (long ***)0x6) {
          ppplVar11 = (long ***)0x5;
        }
      }
      puVar6 = (undefined1 *)
               FUN_710392e290(0x10,ppplVar11,param_3,param_4,param_5,param_6,param_7,param_8);
      if (puVar6 == (undefined1 *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_54 = 0;
          pppplVar9 = &local_60;
          local_60 = ppplVar11;
          uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
          if (((uVar10 & 1) != 0) &&
             (puVar6 = (undefined1 *)
                       FUN_710392e290(0x10,ppplVar11,pppplVar9,param_4,param_5,param_6,param_7,
                                      param_8), puVar6 != (undefined1 *)0x0)) goto LAB_7101c9ea2c;
        }
        puVar6 = (undefined1 *)0x0;
      }
LAB_7101c9ea2c:
      *(undefined1 **)(param_1 + 0x1c8) = puVar6;
      *(undefined1 **)(param_1 + 0x1d8) = puVar6 + (long)ppplVar11;
      *puVar6 = local_68[0];
      puVar6[1] = local_68[1];
      puVar6[2] = uStack_66;
      puVar6[3] = uStack_65;
      puVar6[4] = uStack_64;
      puVar6 = puVar6 + 5;
LAB_7101c9ea64:
      *(undefined1 **)(param_1 + 0x1d0) = puVar6;
    }
    else {
      lVar7 = *(long *)(param_1 + 0x1d0);
      puVar6 = local_68 + 5;
      uVar10 = lVar7 - (long)pvVar13;
      puVar16 = local_68 + uVar10;
      puVar14 = puVar16;
      if (4 < uVar10) {
        puVar14 = puVar6;
      }
      sVar1 = (long)puVar14 - (long)local_68;
      if (sVar1 != 0) {
        memmove(pvVar13,local_68,sVar1);
      }
      if (4 < uVar10) {
        puVar6 = (undefined1 *)((long)pvVar13 + sVar1);
        goto LAB_7101c9ea64;
      }
      if (puVar14 != puVar6) {
        puVar12 = *(undefined1 **)(param_1 + 0x1d0);
        puVar14 = puVar16;
        if ((((int)pvVar13 + 1) - (int)lVar7 & 1U) != 0) {
          puVar14 = local_68 + uVar10 + 1;
          *puVar12 = *puVar16;
          puVar12 = (undefined1 *)(*(long *)(param_1 + 0x1d0) + 1);
          *(undefined1 **)(param_1 + 0x1d0) = puVar12;
        }
        if ((long)pvVar13 + 4 != lVar7) {
          do {
            *puVar12 = *puVar14;
            lVar7 = *(long *)(param_1 + 0x1d0);
            *(long *)(param_1 + 0x1d0) = lVar7 + 1;
            *(undefined1 *)(lVar7 + 1) = puVar14[1];
            puVar14 = puVar14 + 2;
            puVar12 = (undefined1 *)(*(long *)(param_1 + 0x1d0) + 1);
            *(undefined1 **)(param_1 + 0x1d0) = puVar12;
          } while (puVar14 != puVar6);
        }
      }
    }
    lVar7 = *(long *)(param_1 + 0x120);
    pcVar8 = "limit_rule_02";
    goto LAB_7101c9eb2c;
  }
  if (param_2 == '\x02') {
    _local_68 = CONCAT26(_uStack_62,0x70500000000);
    _local_68 = CONCAT44(_uStack_64,0x4030100);
    uVar3 = _local_68;
    uStack_61 = SUB81(uVar2,7);
    _local_68 = CONCAT16(6,(int6)uVar3);
    uVar10 = *(ulong *)(param_1 + 400);
    pvVar13 = *(void **)(param_1 + 0x180);
    if (uVar10 - (long)pvVar13 < 7) {
      if (pvVar13 == (void *)0x0) {
        if (uVar10 < 0x3fffffffffffffff) goto LAB_7101c9e788;
        ppplVar11 = (long ***)0x7fffffffffffffff;
      }
      else {
        *(void **)(param_1 + 0x188) = pvVar13;
        FUN_710392eb40((ulong)pvVar13);
        uVar10 = 0;
        *(undefined8 *)(param_1 + 0x188) = 0;
        *(undefined8 *)(param_1 + 400) = 0;
        *(undefined8 *)(param_1 + 0x180) = 0;
LAB_7101c9e788:
        ppplVar11 = (long ***)(uVar10 * 2);
        if (ppplVar11 < &DAT_00000008) {
          ppplVar11 = (long ***)&DAT_00000007;
        }
      }
      puVar5 = (undefined4 *)
               FUN_710392e290(0x10,ppplVar11,param_3,param_4,param_5,param_6,param_7,param_8);
      if (puVar5 == (undefined4 *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_54 = 0;
          param_3 = &local_60;
          local_60 = ppplVar11;
          uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
          if (((uVar10 & 1) != 0) &&
             (puVar5 = (undefined4 *)
                       FUN_710392e290(0x10,ppplVar11,param_3,param_4,param_5,param_6,param_7,param_8
                                     ), puVar5 != (undefined4 *)0x0)) goto LAB_7101c9e7e8;
        }
        puVar5 = (undefined4 *)0x0;
      }
LAB_7101c9e7e8:
      uVar4 = _uStack_64;
      *(undefined1 **)(param_1 + 400) = (undefined1 *)((long)puVar5 + (long)ppplVar11);
      *(undefined4 **)(param_1 + 0x180) = puVar5;
      *puVar5 = 0x4030100;
      *(undefined1 *)(puVar5 + 1) = 5;
      *(undefined1 *)((long)puVar5 + 5) = uStack_63;
      *(undefined1 *)((long)puVar5 + 6) = uStack_62;
      puVar6 = (undefined1 *)((long)puVar5 + 7);
      _uStack_64 = uVar4;
LAB_7101c9e814:
      *(undefined1 **)(param_1 + 0x188) = puVar6;
    }
    else {
      lVar7 = *(long *)(param_1 + 0x188);
      puVar6 = local_68 + 7;
      uVar10 = lVar7 - (long)pvVar13;
      puVar16 = local_68 + uVar10;
      puVar14 = puVar16;
      if (6 < uVar10) {
        puVar14 = puVar6;
      }
      pppplVar9 = (long ****)(puVar14 + -(long)local_68);
      if (pppplVar9 != (long ****)0x0) {
        param_3 = pppplVar9;
        memmove(pvVar13,local_68,(size_t)pppplVar9);
      }
      if (6 < uVar10) {
        puVar6 = (undefined1 *)((long)pvVar13 + (long)pppplVar9);
        goto LAB_7101c9e814;
      }
      if (puVar14 != puVar6) {
        puVar12 = *(undefined1 **)(param_1 + 0x188);
        puVar14 = puVar16;
        if ((((int)pvVar13 + 1) - (int)lVar7 & 1U) != 0) {
          puVar14 = local_68 + uVar10 + 1;
          *puVar12 = *puVar16;
          puVar12 = (undefined1 *)(*(long *)(param_1 + 0x188) + 1);
          *(undefined1 **)(param_1 + 0x188) = puVar12;
        }
        if ((long)pvVar13 + 6 != lVar7) {
          do {
            *puVar12 = *puVar14;
            lVar7 = *(long *)(param_1 + 0x188);
            *(long *)(param_1 + 0x188) = lVar7 + 1;
            *(undefined1 *)(lVar7 + 1) = puVar14[1];
            puVar14 = puVar14 + 2;
            puVar12 = (undefined1 *)(*(long *)(param_1 + 0x188) + 1);
            *(undefined1 **)(param_1 + 0x188) = puVar12;
          } while (puVar14 != puVar6);
        }
      }
    }
    _local_68 = CONCAT35(_uStack_63,0x706050403);
    uVar10 = *(ulong *)(param_1 + 0x1d8);
    pvVar13 = *(void **)(param_1 + 0x1c8);
    if (uVar10 - (long)pvVar13 < 5) {
      if (pvVar13 == (void *)0x0) {
        if (uVar10 < 0x3fffffffffffffff) goto LAB_7101c9ea84;
        ppplVar11 = (long ***)0x7fffffffffffffff;
      }
      else {
        *(void **)(param_1 + 0x1d0) = pvVar13;
        FUN_710392eb40((ulong)pvVar13);
        uVar10 = 0;
        *(undefined8 *)(param_1 + 0x1d0) = 0;
        *(undefined8 *)(param_1 + 0x1d8) = 0;
        *(undefined8 *)(param_1 + 0x1c8) = 0;
LAB_7101c9ea84:
        ppplVar11 = (long ***)(uVar10 * 2);
        if (ppplVar11 < (long ***)0x6) {
          ppplVar11 = (long ***)0x5;
        }
      }
      puVar6 = (undefined1 *)
               FUN_710392e290(0x10,ppplVar11,param_3,param_4,param_5,param_6,param_7,param_8);
      if (puVar6 == (undefined1 *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_54 = 0;
          pppplVar9 = &local_60;
          local_60 = ppplVar11;
          uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
          if (((uVar10 & 1) != 0) &&
             (puVar6 = (undefined1 *)
                       FUN_710392e290(0x10,ppplVar11,pppplVar9,param_4,param_5,param_6,param_7,
                                      param_8), puVar6 != (undefined1 *)0x0)) goto LAB_7101c9eae4;
        }
        puVar6 = (undefined1 *)0x0;
      }
LAB_7101c9eae4:
      *(undefined1 **)(param_1 + 0x1c8) = puVar6;
      *(undefined1 **)(param_1 + 0x1d8) = puVar6 + (long)ppplVar11;
      *puVar6 = local_68[0];
      puVar6[1] = local_68[1];
      puVar6[2] = uStack_66;
      puVar6[3] = uStack_65;
      puVar6[4] = uStack_64;
      puVar6 = puVar6 + 5;
LAB_7101c9eb1c:
      *(undefined1 **)(param_1 + 0x1d0) = puVar6;
    }
    else {
      lVar7 = *(long *)(param_1 + 0x1d0);
      puVar6 = local_68 + 5;
      uVar10 = lVar7 - (long)pvVar13;
      puVar16 = local_68 + uVar10;
      puVar14 = puVar16;
      if (4 < uVar10) {
        puVar14 = puVar6;
      }
      sVar1 = (long)puVar14 - (long)local_68;
      if (sVar1 != 0) {
        memmove(pvVar13,local_68,sVar1);
      }
      if (4 < uVar10) {
        puVar6 = (undefined1 *)((long)pvVar13 + sVar1);
        goto LAB_7101c9eb1c;
      }
      if (puVar14 != puVar6) {
        puVar12 = *(undefined1 **)(param_1 + 0x1d0);
        puVar14 = puVar16;
        if ((((int)pvVar13 + 1) - (int)lVar7 & 1U) != 0) {
          puVar14 = local_68 + uVar10 + 1;
          *puVar12 = *puVar16;
          puVar12 = (undefined1 *)(*(long *)(param_1 + 0x1d0) + 1);
          *(undefined1 **)(param_1 + 0x1d0) = puVar12;
        }
        if ((long)pvVar13 + 4 != lVar7) {
          do {
            *puVar12 = *puVar14;
            lVar7 = *(long *)(param_1 + 0x1d0);
            *(long *)(param_1 + 0x1d0) = lVar7 + 1;
            *(undefined1 *)(lVar7 + 1) = puVar14[1];
            puVar14 = puVar14 + 2;
            puVar12 = (undefined1 *)(*(long *)(param_1 + 0x1d0) + 1);
            *(undefined1 **)(param_1 + 0x1d0) = puVar12;
          } while (puVar14 != puVar6);
        }
      }
    }
    lVar7 = *(long *)(param_1 + 0x120);
    pcVar8 = "limit_rule_01";
    goto LAB_7101c9eb2c;
  }
  if (param_2 != '\x01') {
    return;
  }
  _local_68 = CONCAT26(_uStack_62,0x60705040100);
  uVar10 = *(ulong *)(param_1 + 400);
  pvVar13 = *(void **)(param_1 + 0x180);
  if (uVar10 - (long)pvVar13 < 6) {
    if (pvVar13 == (void *)0x0) {
      if (uVar10 < 0x3fffffffffffffff) goto LAB_7101c9e458;
      ppplVar11 = (long ***)0x7fffffffffffffff;
    }
    else {
      *(void **)(param_1 + 0x188) = pvVar13;
      FUN_710392eb40((ulong)pvVar13);
      uVar10 = 0;
      *(undefined8 *)(param_1 + 0x188) = 0;
      *(undefined8 *)(param_1 + 400) = 0;
      *(undefined8 *)(param_1 + 0x180) = 0;
LAB_7101c9e458:
      ppplVar11 = (long ***)(uVar10 * 2);
      if (ppplVar11 < &DAT_00000007) {
        ppplVar11 = (long ***)0x6;
      }
    }
    puVar5 = (undefined4 *)
             FUN_710392e290(0x10,ppplVar11,param_3,param_4,param_5,param_6,param_7,param_8);
    if (puVar5 == (undefined4 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_54 = 0;
        param_3 = &local_60;
        local_60 = ppplVar11;
        uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
        if (((uVar10 & 1) != 0) &&
           (puVar5 = (undefined4 *)
                     FUN_710392e290(0x10,ppplVar11,param_3,param_4,param_5,param_6,param_7,param_8),
           puVar5 != (undefined4 *)0x0)) goto LAB_7101c9e4b8;
      }
      puVar5 = (undefined4 *)0x0;
    }
LAB_7101c9e4b8:
    *(undefined1 **)(param_1 + 400) = (undefined1 *)((long)puVar5 + (long)ppplVar11);
    puVar6 = (undefined1 *)((long)puVar5 + 6);
    *(undefined4 **)(param_1 + 0x180) = puVar5;
    *puVar5 = 0x5040100;
    *(undefined2 *)(puVar5 + 1) = 0x607;
LAB_7101c9e4d0:
    *(undefined1 **)(param_1 + 0x188) = puVar6;
  }
  else {
    lVar7 = *(long *)(param_1 + 0x188);
    puVar6 = local_68 + 6;
    uVar10 = lVar7 - (long)pvVar13;
    puVar16 = local_68 + uVar10;
    puVar14 = puVar16;
    if (5 < uVar10) {
      puVar14 = puVar6;
    }
    pppplVar9 = (long ****)(puVar14 + -(long)local_68);
    if (pppplVar9 != (long ****)0x0) {
      param_3 = pppplVar9;
      memmove(pvVar13,local_68,(size_t)pppplVar9);
    }
    if (5 < uVar10) {
      puVar6 = (undefined1 *)((long)pvVar13 + (long)pppplVar9);
      goto LAB_7101c9e4d0;
    }
    if (puVar14 != puVar6) {
      puVar12 = *(undefined1 **)(param_1 + 0x188);
      puVar14 = puVar16;
      if (((int)pvVar13 - (int)lVar7 & 1U) != 0) {
        puVar14 = local_68 + uVar10 + 1;
        *puVar12 = *puVar16;
        puVar12 = (undefined1 *)(*(long *)(param_1 + 0x188) + 1);
        *(undefined1 **)(param_1 + 0x188) = puVar12;
      }
      if ((long)pvVar13 + 5 != lVar7) {
        do {
          *puVar12 = *puVar14;
          lVar7 = *(long *)(param_1 + 0x188);
          *(long *)(param_1 + 0x188) = lVar7 + 1;
          *(undefined1 *)(lVar7 + 1) = puVar14[1];
          puVar14 = puVar14 + 2;
          puVar12 = (undefined1 *)(*(long *)(param_1 + 0x188) + 1);
          *(undefined1 **)(param_1 + 0x188) = puVar12;
        } while (puVar14 != puVar6);
      }
    }
  }
  local_54 = CONCAT13(local_54._3_1_,0x30201);
  uVar10 = *(ulong *)(param_1 + 0x1d8);
  pvVar13 = *(void **)(param_1 + 0x1c8);
  if (uVar10 - (long)pvVar13 < 3) {
    if (pvVar13 == (void *)0x0) {
      if (uVar10 < 0x3fffffffffffffff) goto LAB_7101c9e924;
      ppplVar11 = (long ***)0x7fffffffffffffff;
    }
    else {
      *(void **)(param_1 + 0x1d0) = pvVar13;
      FUN_710392eb40((ulong)pvVar13);
      uVar10 = 0;
      *(undefined8 *)(param_1 + 0x1d0) = 0;
      *(undefined8 *)(param_1 + 0x1d8) = 0;
      *(undefined8 *)(param_1 + 0x1c8) = 0;
LAB_7101c9e924:
      ppplVar11 = (long ***)(uVar10 * 2);
      if (ppplVar11 < &DAT_00000004) {
        ppplVar11 = (long ***)0x3;
      }
    }
    puVar6 = (undefined1 *)
             FUN_710392e290(0x10,ppplVar11,param_3,param_4,param_5,param_6,param_7,param_8);
    if (puVar6 == (undefined1 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        _local_68 = _local_68 & 0xffffffff00000000;
        pppplVar9 = &local_60;
        local_60 = ppplVar11;
        uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_68);
        if (((uVar10 & 1) != 0) &&
           (puVar6 = (undefined1 *)
                     FUN_710392e290(0x10,ppplVar11,pppplVar9,param_4,param_5,param_6,param_7,param_8
                                   ), puVar6 != (undefined1 *)0x0)) goto LAB_7101c9e984;
      }
      puVar6 = (undefined1 *)0x0;
    }
LAB_7101c9e984:
    *(undefined1 **)(param_1 + 0x1c8) = puVar6;
    *(undefined1 **)(param_1 + 0x1d8) = puVar6 + (long)ppplVar11;
    *puVar6 = (undefined1)local_54;
    puVar6[1] = local_54._1_1_;
    puVar6[2] = local_54._2_1_;
    puVar6 = puVar6 + 3;
LAB_7101c9e9ac:
    *(undefined1 **)(param_1 + 0x1d0) = puVar6;
  }
  else {
    lVar7 = *(long *)(param_1 + 0x1d0);
    puVar14 = (undefined1 *)((ulong)&local_54 | 3);
    uVar10 = lVar7 - (long)pvVar13;
    puVar6 = (undefined1 *)((long)&local_54 + uVar10);
    puVar16 = puVar6;
    if (2 < uVar10) {
      puVar16 = puVar14;
    }
    sVar1 = (long)puVar16 - (long)&local_54;
    if (sVar1 != 0) {
      memmove(pvVar13,&local_54,sVar1);
    }
    if (2 < uVar10) {
      puVar6 = (undefined1 *)((long)pvVar13 + sVar1);
      goto LAB_7101c9e9ac;
    }
    if (puVar16 != puVar14) {
      puVar12 = *(undefined1 **)(param_1 + 0x1d0);
      puVar16 = puVar6;
      if ((((int)pvVar13 + 1) - (int)lVar7 & 1U) != 0) {
        puVar16 = (undefined1 *)((long)&local_54 + uVar10 + 1);
        *puVar12 = *puVar6;
        puVar12 = (undefined1 *)(*(long *)(param_1 + 0x1d0) + 1);
        *(undefined1 **)(param_1 + 0x1d0) = puVar12;
      }
      if ((long)pvVar13 + 2 != lVar7) {
        do {
          *puVar12 = *puVar16;
          lVar7 = *(long *)(param_1 + 0x1d0);
          *(long *)(param_1 + 0x1d0) = lVar7 + 1;
          *(undefined1 *)(lVar7 + 1) = puVar16[1];
          puVar16 = puVar16 + 2;
          puVar12 = (undefined1 *)(*(long *)(param_1 + 0x1d0) + 1);
          *(undefined1 **)(param_1 + 0x1d0) = puVar12;
        } while (puVar16 != puVar14);
      }
    }
  }
  lVar7 = *(long *)(param_1 + 0x120);
  pcVar8 = "limit_rule_00";
LAB_7101c9eb2c:
  FUN_7103778300(0x3f800000,lVar7,(long)pcVar8);
  FUN_7101c9f4e0(param_1,(long *)(param_1 + 0x158),(long ****)&DAT_00000004,param_4,param_5,param_6,
                 param_7,param_8);
  return;
}

