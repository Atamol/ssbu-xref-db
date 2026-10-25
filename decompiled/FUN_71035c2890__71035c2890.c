// addr:      71035c2890
// offset:    0x35c2890
// name:      FUN_71035c2890
// mangled:   
// signature: undefined __cdecl FUN_71035c2890(undefined8 * param_1, uint * param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71035c2890(undefined8 *param_1,uint *param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  long *********ppppppppplVar7;
  long *********ppppppppplVar8;
  long *********ppppppppplVar9;
  long *********ppppppppplVar10;
  long *********ppppppppplVar11;
  long *********ppppppppplVar12;
  long *plVar13;
  long lVar14;
  byte *pbVar15;
  uint uVar16;
  uint uVar17;
  long *********ppppppppplVar18;
  uint uVar19;
  long *plVar20;
  long ********local_70;
  undefined4 local_64;
  
  ppppppppplVar7 = &local_70;
  ppppppppplVar8 = &local_70;
  ppppppppplVar9 = &local_70;
  ppppppppplVar10 = &local_70;
  ppppppppplVar11 = &local_70;
  ppppppppplVar12 = &local_70;
  ppppppppplVar18 = (long *********)((ulong)param_3 & 0xffffffff);
  uVar4 = FUN_71035c25f0(*param_2,(byte *)"model.numdlb");
  uVar16 = (uint)uVar4;
  if (uVar16 == 0xffffff) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  FUN_7103540a00(DAT_7105332f20,uVar16);
  if ((uVar16 < *(uint *)(DAT_7105332f20 + 0x18)) &&
     (*(char *)(*(long *)(DAT_7105332f20 + 8) + (uVar4 & 0xffffffff) * 8 + 4) != '\0')) {
    uVar17 = *(uint *)(*(long *)(DAT_7105332f20 + 8) + (uVar4 & 0xffffffff) * 8);
    if ((uVar17 == 0xffffff) ||
       ((*(uint *)(DAT_7105332f20 + 0x1c) <= uVar17 ||
        (plVar13 = (long *)(*(long *)(DAT_7105332f20 + 0x10) + (ulong)uVar17 * 0x18),
        *(char *)((long)plVar13 + 0xc) == '\0' || plVar13 == (long *)0x0)))) goto LAB_71035c2954;
    lVar14 = *plVar13;
  }
  else {
LAB_71035c2954:
    lVar14 = 0;
  }
  uVar4 = *(ulong *)(lVar14 + 0x20);
  if ((uVar4 & 1) == 0) {
    pbVar15 = (byte *)(lVar14 + 0x20 + uVar4);
  }
  else {
    pbVar15 = (byte *)(uVar4 & 0xfffffffffffffffe);
    if ((*pbVar15 & 1) == 0) {
      pbVar15 = pbVar15 + 1;
    }
    else {
      pbVar15 = *(byte **)(pbVar15 + 0x10);
    }
  }
  uVar4 = FUN_71035c25f0(*param_2,pbVar15);
  uVar17 = (uint)uVar4;
  if (uVar17 != 0xffffff) {
    FUN_7103540a00(DAT_7105332f20,uVar17);
  }
  uVar4 = *(ulong *)(lVar14 + 0x40);
  if ((uVar4 & 1) == 0) {
    pbVar15 = (byte *)(lVar14 + 0x40 + uVar4);
  }
  else {
    pbVar15 = (byte *)(uVar4 & 0xfffffffffffffffe);
    if ((*pbVar15 & 1) == 0) {
      pbVar15 = pbVar15 + 1;
    }
    else {
      pbVar15 = *(byte **)(pbVar15 + 0x10);
    }
  }
  uVar4 = FUN_71035c25f0(*param_2,pbVar15);
  uVar19 = (uint)uVar4;
  if (uVar19 != 0xffffff) {
    FUN_7103540a00(DAT_7105332f20,uVar19);
  }
  if (uVar17 == 0xffffff) {
    if (uVar19 != 0xffffff) {
      FUN_7103540b10(DAT_7105332f20,uVar19,param_3,param_4,param_5,param_6,param_7,param_8);
    }
    *param_1 = 0;
    param_1[1] = 0;
    goto LAB_71035c2c34;
  }
  if (uVar19 == 0xffffff) {
    plVar13 = (long *)FUN_710392e290(0x10,0x120,(long ****)param_3,param_4,param_5,param_6,param_7,
                                     param_8);
    if (plVar13 == (long *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_64 = 0;
        local_70 = (long ********)&DAT_00000120;
        uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
        if (((uVar4 & 1) != 0) &&
           (plVar13 = (long *)FUN_710392e290(0x10,0x120,(long ****)ppppppppplVar7,param_4,param_5,
                                             param_6,param_7,param_8), plVar13 != (long *)0x0))
        goto LAB_71035c2a80;
      }
      plVar13 = (long *)0x0;
    }
LAB_71035c2a80:
    FUN_71035ecf10(plVar13,param_2,ppppppppplVar18,param_4,param_5,param_6,param_7,param_8);
    *param_1 = plVar13;
    puVar5 = (undefined8 *)
             FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar18,param_4,param_5,param_6,param_7,
                            param_8);
    param_3 = ppppppppplVar18;
    if (puVar5 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_64 = 0;
        local_70 = (long ********)&SUB_00000020;
        uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
        param_3 = ppppppppplVar8;
        if (((uVar4 & 1) != 0) &&
           (puVar5 = (undefined8 *)
                     FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar8,param_4,param_5,param_6,
                                    param_7,param_8), param_3 = ppppppppplVar8,
           puVar5 != (undefined8 *)0x0)) goto LAB_71035c2ae8;
      }
      puVar5 = (undefined8 *)0x0;
    }
LAB_71035c2ae8:
    *puVar5 = &DAT_71052325c8;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = plVar13;
    lVar14 = DAT_7105332f20;
    param_1[1] = puVar5;
  }
  else {
    plVar13 = (long *)FUN_710392e290(0x10,0x820,(long ****)param_3,param_4,param_5,param_6,param_7,
                                     param_8);
    if (plVar13 == (long *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_64 = 0;
        local_70 = (long ********)0x820;
        uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
        if (((uVar4 & 1) != 0) &&
           (plVar13 = (long *)FUN_710392e290(0x10,0x820,(long ****)ppppppppplVar9,param_4,param_5,
                                             param_6,param_7,param_8), plVar13 != (long *)0x0))
        goto LAB_71035c2b64;
      }
      plVar13 = (long *)0x0;
    }
LAB_71035c2b64:
    param_4 = (byte ****)&DAT_ffffffff;
    param_3 = ppppppppplVar18;
    FUN_71035e0e50(plVar13,param_2,ppppppppplVar18,(byte ****)&DAT_ffffffff,param_5,param_6,param_7,
                   param_8);
    plVar6 = (long *)FUN_710392e290(0x10,0x20,(long ****)param_3,param_4,param_5,param_6,param_7,
                                    param_8);
    if (plVar6 == (long *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_64 = 0;
        local_70 = (long ********)&SUB_00000020;
        uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
        param_3 = ppppppppplVar10;
        if (((uVar4 & 1) != 0) &&
           (plVar6 = (long *)FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar10,param_4,param_5,
                                            param_6,param_7,param_8), param_3 = ppppppppplVar10,
           plVar6 != (long *)0x0)) goto LAB_71035c2bd4;
      }
      plVar6 = (long *)0x0;
    }
LAB_71035c2bd4:
    plVar20 = plVar6 + 1;
    *plVar20 = 0;
    plVar6[2] = 0;
    plVar6[3] = (long)plVar13;
    *plVar6 = (long)&DAT_7105232590;
    uVar4 = (**(code **)(*plVar13 + 0x18))(plVar13);
    if (((uVar4 & 1) == 0) && (iVar3 = (**(code **)(*plVar13 + 0x240))(plVar13), iVar3 != 5)) {
      plVar13 = (long *)FUN_710392e290(0x10,0x120,(long ****)param_3,param_4,param_5,param_6,param_7
                                       ,param_8);
      if (plVar13 == (long *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_64 = 0;
          local_70 = (long ********)&DAT_00000120;
          uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
          if (((uVar4 & 1) != 0) &&
             (plVar13 = (long *)FUN_710392e290(0x10,0x120,(long ****)ppppppppplVar11,param_4,param_5
                                               ,param_6,param_7,param_8), plVar13 != (long *)0x0))
          goto LAB_71035c2cbc;
        }
        plVar13 = (long *)0x0;
      }
LAB_71035c2cbc:
      FUN_71035ecf10(plVar13,param_2,ppppppppplVar18,param_4,param_5,param_6,param_7,param_8);
      *param_1 = plVar13;
      puVar5 = (undefined8 *)
               FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar18,param_4,param_5,param_6,param_7,
                              param_8);
      param_3 = ppppppppplVar18;
      if (puVar5 == (undefined8 *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_64 = 0;
          local_70 = (long ********)&SUB_00000020;
          uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
          param_3 = ppppppppplVar12;
          if (((uVar4 & 1) != 0) &&
             (puVar5 = (undefined8 *)
                       FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar12,param_4,param_5,param_6,
                                      param_7,param_8), param_3 = ppppppppplVar12,
             puVar5 != (undefined8 *)0x0)) goto LAB_71035c2d24;
        }
        puVar5 = (undefined8 *)0x0;
      }
LAB_71035c2d24:
      *puVar5 = &DAT_71052325c8;
      puVar5[1] = 0;
      puVar5[2] = 0;
      puVar5[3] = plVar13;
      param_1[1] = puVar5;
      do {
        lVar14 = *plVar20;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(plVar20,0x10);
        if (bVar2) {
          *plVar20 = lVar14 + -1;
          cVar1 = ExclusiveMonitorsStatus();
        }
      } while (cVar1 != '\0');
      if (lVar14 == 0) {
        (**(code **)(*plVar6 + 0x10))(plVar6);
        std::__shared_weak_count::__release_weak();
      }
    }
    else {
      *param_1 = plVar13;
      param_1[1] = plVar6;
    }
    FUN_7103540b10(DAT_7105332f20,uVar19,param_3,param_4,param_5,param_6,param_7,param_8);
    lVar14 = DAT_7105332f20;
  }
  FUN_7103540b10(lVar14,uVar17,param_3,param_4,param_5,param_6,param_7,param_8);
LAB_71035c2c34:
  FUN_7103540b10(DAT_7105332f20,uVar16,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}

