// addr:      71035b9d00
// offset:    0x35b9d00
// name:      FUN_71035b9d00
// mangled:   
// signature: undefined4 __cdecl FUN_71035b9d00(long param_1, undefined8 * param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Type propagation algorithm not settling */

undefined4
FUN_71035b9d00(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
              long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong *puVar1;
  int *piVar2;
  undefined **ppuVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  byte bVar12;
  char cVar13;
  undefined8 *puVar14;
  bool bVar15;
  bool bVar16;
  int iVar17;
  undefined4 uVar18;
  long lVar19;
  long *plVar20;
  ulong uVar21;
  byte *pbVar22;
  undefined8 *puVar23;
  void *pvVar24;
  byte *pbVar25;
  undefined4 *puVar26;
  long ****pppplVar27;
  uint *puVar28;
  byte ****ppppbVar29;
  byte ****ppppbVar30;
  long lVar31;
  long lVar32;
  undefined8 *puVar33;
  undefined8 uVar34;
  byte *pbVar35;
  undefined8 *puVar36;
  byte *pbVar37;
  ulong uVar38;
  long **pplVar39;
  long *plVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  byte *pbVar45;
  byte *pbVar46;
  ulong uVar47;
  undefined8 uVar48;
  undefined **ppuVar49;
  undefined **ppuVar50;
  uint uVar51;
  undefined4 uVar52;
  long *plVar53;
  uint uVar54;
  ulong uVar55;
  long *plVar56;
  ulong uVar57;
  long *plVar58;
  byte *pbVar59;
  ulong uVar60;
  char *pcVar61;
  long ***ppplVar62;
  undefined **ppuVar63;
  long *plVar64;
  long ***ppplVar65;
  float fVar66;
  ulong local_148;
  undefined1 auStack_138 [8];
  long ***local_130;
  long *local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  ulong local_108;
  undefined8 local_100;
  void *local_f8;
  undefined1 auStack_f0 [8];
  long ***local_e8;
  undefined **local_e0;
  undefined4 local_d8;
  uint uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined1 local_c0;
  undefined1 local_93;
  undefined **local_90;
  undefined4 local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 *puStack_70;
  
  uVar48 = *param_2;
  lVar19 = param_2[1];
  if (lVar19 != 0) {
    plVar20 = (long *)(lVar19 + 0x10);
    do {
      cVar13 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar20,0x10);
      if (bVar15) {
        *plVar20 = *plVar20 + 1;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
  }
  *(undefined8 *)(param_1 + 0x10) = uVar48;
  lVar31 = *(long *)(param_1 + 0x18);
  *(long *)(param_1 + 0x18) = lVar19;
  if (lVar31 != 0) {
    std::__shared_weak_count::__release_weak();
    lVar19 = *(long *)(param_1 + 0x18);
  }
  if (lVar19 == 0) {
    plVar64 = (long *)0x0;
    plVar20 = (long *)0x0;
  }
  else {
    plVar20 = (long *)std::__shared_weak_count::lock();
    if (plVar20 == (long *)0x0) {
      plVar64 = (long *)0x0;
    }
    else {
      plVar64 = *(long **)(param_1 + 0x10);
    }
  }
  iVar17 = (**(code **)(*plVar64 + 0x20))(plVar64);
  if (iVar17 != 0) {
    uVar18 = 0;
    if (plVar20 == (long *)0x0) {
      return 0;
    }
    goto LAB_71035bb804;
  }
  if (plVar20 != (long *)0x0) {
    plVar40 = plVar20 + 1;
    do {
      cVar13 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar40,0x10);
      if (bVar15) {
        *plVar40 = *plVar40 + 1;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
  }
  lVar19 = (**(code **)(*plVar64 + 0x250))(plVar64);
  *(undefined1 *)(param_1 + 0x90) = *(undefined1 *)(lVar19 + 0x49);
  plVar40 = (long *)(*(long *)plVar64[0x90] + (ulong)*(uint *)((long *)plVar64[0x90] + 3) * 0x70);
  lVar19 = *plVar40;
  plVar40 = (long *)plVar40[1];
  if (plVar40 == (long *)0x0) {
    lVar31 = *(long *)(lVar19 + 0x108);
    plVar53 = *(long **)(lVar19 + 0x110);
    lVar19 = *(long *)(lVar19 + 0x118);
joined_r0x0071035b9e38:
    if (plVar53 == (long *)0x0) goto LAB_71035ba2f8;
LAB_71035b9e5c:
    if (*plVar53 != lVar19) goto LAB_71035ba2f8;
    local_78 = (undefined8 *)0x0;
    puStack_70 = (undefined8 *)0x0;
    local_80 = (undefined8 *)0x0;
    plVar40 = *(long **)(lVar31 + 0x20);
    if (plVar40 == (long *)0x0) {
LAB_71035ba304:
      *(undefined1 *)(param_1 + 8) = 0;
joined_r0x0071035ba310:
      uVar18 = 0;
      puVar33 = local_80;
    }
    else {
      uVar41 = *(undefined8 *)(DAT_7105336e10 + 0x28);
      uVar42 = *(undefined8 *)(DAT_7105336e10 + 0x30);
      uVar43 = *(undefined8 *)(DAT_7105336e10 + 0x38);
      uVar44 = *(undefined8 *)(DAT_7105336e10 + 0x48);
      uVar48 = *(undefined8 *)(DAT_7105336e10 + 0x50);
      uVar7 = *(undefined8 *)(DAT_7105336e10 + 0x58);
      bVar15 = false;
      do {
        lVar19 = FUN_71038cd8c0();
        uVar51 = *(uint *)(plVar40 + 5);
        ppppbVar29 = (byte ****)(plVar40 + 6);
        ppppbVar30 = ppppbVar29;
        FUN_710356bf30(&local_e8,(ulong)uVar51,uVar51 ^ (int)uVar51 >> 0x1f,(long)ppppbVar29);
        pppplVar27 = (long ****)(local_e0 + 0x24);
        FUN_71038b4780(&local_130,lVar19 + 0x158,(byte *)pppplVar27);
        for (lVar19 = local_128[2]; lVar19 != local_128[3]; lVar19 = lVar19 + 0x20) {
          plVar53 = *(long **)(*(long *)(lVar19 + 8) + 0x148);
          while (plVar53 != (long *)(*(long *)(lVar19 + 8) + 0x150)) {
            bVar12 = *(byte *)((long)plVar53 + 0x61);
            uVar55 = (ulong)bVar12;
            uVar21 = uVar55;
            if (0xc < bVar12) {
              uVar21 = 0xd;
            }
            if (uVar21 != 0) {
              uVar21 = 0xfffffffffffffff2;
              if (0xfffffffffffffff2 < ~uVar55) {
                uVar21 = ~uVar55;
              }
              plVar56 = plVar53 + 4;
              lVar31 = uVar21 + 1;
              pcVar61 = "ink_color_set";
              do {
                if ((char)*plVar56 != *pcVar61) goto LAB_71035b9f98;
                if ((char)*plVar56 == '\0') break;
                plVar56 = (long *)((long)plVar56 + 1);
                pcVar61 = pcVar61 + 1;
                lVar31 = lVar31 + 1;
              } while (lVar31 != 0);
            }
            if (bVar12 == 0xd) {
              uVar51 = *(uint *)(plVar40 + 5);
              FUN_710356bf30(&local_e8,(ulong)uVar51,uVar51 ^ (int)uVar51 >> 0x1f,(long)ppppbVar29);
              ppuVar63 = local_e0;
              local_88 = 0x133;
              local_d8 = (undefined4)uVar41;
              uStack_d4 = (uint)((ulong)uVar41 >> 0x20);
              local_e0 = &PTR_FUN_71052302c0;
              local_e8._0_4_ = 0xb;
              local_d0 = (undefined4)uVar42;
              uStack_cc = (undefined4)((ulong)uVar42 >> 0x20);
              local_90 = &PTR_FUN_7105290ed8;
              local_c8 = (undefined4)uVar43;
              uStack_c4 = (undefined4)((ulong)uVar43 >> 0x20);
              FUN_71038a9ca0((long)ppuVar63,(long)&local_90,(uint *)&local_e8,(byte ****)0x0,param_5
                             ,param_6,param_7,param_8);
              FUN_710356bff0((uint)local_e8 ^ (int)(uint)local_e8 >> 0x1f,&local_e0);
              uVar51 = *(uint *)(plVar40 + 5);
              FUN_710356bf30(&local_e8,(ulong)uVar51,uVar51 ^ (int)uVar51 >> 0x1f,(long)ppppbVar29);
              ppuVar63 = local_e0;
              local_88 = 0x137;
              local_d8 = (undefined4)DAT_7105335558;
              uStack_d4 = (uint)((ulong)DAT_7105335558 >> 0x20);
              local_d0 = (undefined4)DAT_7105335560;
              uStack_cc = (undefined4)((ulong)DAT_7105335560 >> 0x20);
              local_90 = &PTR_FUN_7105290ed8;
              local_c8 = (undefined4)DAT_7105335568;
              uStack_c4 = (undefined4)((ulong)DAT_7105335568 >> 0x20);
              local_e0 = &PTR_FUN_7105231650;
              local_e8._0_4_ = 0xe;
              FUN_71038a9ca0((long)ppuVar63,(long)&local_90,(uint *)&local_e8,(byte ****)0x0,param_5
                             ,param_6,param_7,param_8);
              FUN_710356bff0((uint)local_e8 ^ (int)(uint)local_e8 >> 0x1f,&local_e0);
              uVar51 = *(uint *)(plVar40 + 5);
              FUN_710356bf30(&local_e8,(ulong)uVar51,uVar51 ^ (int)uVar51 >> 0x1f,(long)ppppbVar29);
              ppuVar63 = local_e0;
              local_88 = 0x134;
              local_d8 = (undefined4)uVar44;
              uStack_d4 = (uint)((ulong)uVar44 >> 0x20);
              local_d0 = (undefined4)uVar48;
              uStack_cc = (undefined4)((ulong)uVar48 >> 0x20);
              local_c8 = (undefined4)uVar7;
              uStack_c4 = (undefined4)((ulong)uVar7 >> 0x20);
              local_e0 = &PTR_FUN_71052302c0;
              local_90 = &PTR_FUN_7105290ed8;
              local_e8._0_4_ = 0xb;
              FUN_71038a9ca0((long)ppuVar63,(long)&local_90,(uint *)&local_e8,(byte ****)0x0,param_5
                             ,param_6,param_7,param_8);
              FUN_710356bff0((uint)local_e8 ^ (int)(uint)local_e8 >> 0x1f,&local_e0);
              uVar51 = *(uint *)(plVar40 + 5);
              FUN_710356bf30(&local_e8,(ulong)uVar51,uVar51 ^ (int)uVar51 >> 0x1f,(long)ppppbVar29);
              ppuVar63 = local_e0;
              local_88 = 0x138;
              local_d8 = (undefined4)DAT_7105335558;
              uStack_d4 = (uint)((ulong)DAT_7105335558 >> 0x20);
              local_d0 = (undefined4)DAT_7105335560;
              uStack_cc = (undefined4)((ulong)DAT_7105335560 >> 0x20);
              local_90 = &PTR_FUN_7105290ed8;
              local_e0 = &PTR_FUN_7105231650;
              local_c8 = (undefined4)DAT_7105335568;
              uStack_c4 = (undefined4)((ulong)DAT_7105335568 >> 0x20);
              local_e8 = (long ***)CONCAT44(local_e8._4_4_,0xe);
              FUN_71038a9ca0((long)ppuVar63,(long)&local_90,(uint *)&local_e8,(byte ****)0x0,param_5
                             ,param_6,param_7,param_8);
              FUN_710356bff0((uint)local_e8 ^ (int)(uint)local_e8 >> 0x1f,&local_e0);
              uVar54 = *(uint *)(plVar40 + 5);
              uVar51 = uVar54 ^ (int)uVar54 >> 0x1f;
              pppplVar27 = (long ****)(ulong)uVar51;
              ppppbVar30 = ppppbVar29;
              FUN_710356bf30(&local_e8,(ulong)uVar54,uVar51,(long)ppppbVar29);
              ppuVar63 = local_e0;
              nu::ModuleInitializer<nu::GraphicsModule,nu::GraphicsModuleDesc>::Instance();
              lVar19 = nu::ModuleInitializer<nu::GraphicsModule,nu::GraphicsModuleDesc>::Instance();
              local_e0 = *(undefined ***)(lVar19 + 0x58);
              if (local_e0 == (undefined **)0x0) {
                local_d8 = 0;
                uStack_d4 = 0;
                uVar34 = 0;
              }
              else {
                puVar33 = (undefined8 *)local_e0[1];
                local_d8 = SUB84(puVar33,0);
                uStack_d4 = (uint)((ulong)puVar33 >> 0x20);
                uVar34 = *puVar33;
              }
              local_d0 = (undefined4)uVar34;
              uStack_cc = (undefined4)((ulong)uVar34 >> 0x20);
              local_e8 = (long ***)&PTR_FUN_71052317b0;
              FUN_71038ac560((long)ppuVar63,(long)&local_e8,pppplVar27,ppppbVar30,param_5,param_6,
                             param_7,param_8);
              uVar54 = *(uint *)(plVar40 + 5);
              uVar51 = uVar54 ^ (int)uVar54 >> 0x1f;
              pppplVar27 = (long ****)(ulong)uVar51;
              FUN_710356bf30(&local_e8,(ulong)uVar54,uVar51,(long)ppppbVar29);
              if (local_78 < puStack_70) {
                local_78[1] = local_e0;
                local_78[2] = CONCAT44(uStack_d4,local_d8);
                local_78[3] = CONCAT44(uStack_cc,local_d0);
                *local_78 = &PTR_FUN_71052302e0;
                local_78 = local_78 + 4;
              }
              else {
                FUN_71035bd730((ulong *)&local_80,(long)&local_e8,pppplVar27,ppppbVar29,param_5,
                               param_6,param_7,param_8);
              }
              bVar15 = true;
              plVar40 = (long *)*plVar40;
              ppppbVar30 = ppppbVar29;
              goto joined_r0x0071035ba264;
            }
LAB_71035b9f98:
            plVar56 = (long *)plVar53[1];
            if ((long *)plVar53[1] == (long *)0x0) {
              plVar56 = plVar53 + 2;
              bVar16 = *(long **)*plVar56 != plVar53;
              plVar53 = (long *)*plVar56;
              if (bVar16) {
                do {
                  lVar31 = *plVar56;
                  plVar56 = (long *)(lVar31 + 0x10);
                  plVar53 = (long *)*plVar56;
                } while (*plVar53 != lVar31);
              }
            }
            else {
              do {
                plVar53 = plVar56;
                plVar56 = (long *)*plVar53;
              } while ((long *)*plVar53 != (long *)0x0);
            }
          }
        }
        plVar40 = (long *)*plVar40;
joined_r0x0071035ba264:
      } while (plVar40 != (long *)0x0);
      if (!bVar15) goto LAB_71035ba304;
      uVar21 = (**(code **)(*plVar64 + 0x18))(plVar64);
      if ((uVar21 & 1) == 0) {
LAB_71035ba318:
        lVar19 = 0;
      }
      else {
        plVar40 = (long *)plVar64[0x90];
        lVar19 = 0;
        if (plVar40 != (long *)0x0) {
          plVar40 = (long *)(*plVar40 + (ulong)*(uint *)(plVar40 + 3) * 0x70);
          lVar19 = *plVar40;
          plVar40 = (long *)plVar40[1];
          if (plVar40 != (long *)0x0) {
            plVar53 = plVar40 + 1;
            do {
              cVar13 = '\x01';
              bVar15 = (bool)ExclusiveMonitorPass(plVar53,0x10);
              if (bVar15) {
                *plVar53 = *plVar53 + 1;
                cVar13 = ExclusiveMonitorsStatus();
              }
            } while (cVar13 != '\0');
            do {
              lVar31 = *plVar53;
              cVar13 = '\x01';
              bVar15 = (bool)ExclusiveMonitorPass(plVar53,0x10);
              if (bVar15) {
                *plVar53 = lVar31 + -1;
                cVar13 = ExclusiveMonitorsStatus();
              }
            } while (cVar13 != '\0');
            if (lVar31 == 0) {
              (**(code **)(*plVar40 + 0x10))(plVar40);
              std::__shared_weak_count::__release_weak();
            }
          }
          if (lVar19 == 0) goto LAB_71035ba318;
          lVar19 = *(long *)(*(long *)(lVar19 + 0x40) + 0x68);
        }
      }
      lVar31 = *(long *)(lVar19 + 0x68);
      lVar19 = *(long *)(lVar19 + 0x70);
      if (lVar31 != lVar19) {
        puVar1 = (ulong *)(param_1 + 0x20);
        plVar40 = (long *)(param_1 + 0x30);
        pbVar35 = (byte *)((ulong)&local_e8 | 1);
        puVar33 = local_80;
        puVar23 = local_78;
        do {
          for (; puVar14 = local_78, puVar33 != local_78; puVar33 = puVar33 + 4) {
            local_78 = puVar23;
            if ((((*(long **)(lVar31 + 0x10) != (long *)0x0) &&
                 (**(long **)(lVar31 + 0x10) == *(long *)(lVar31 + 0x18))) &&
                ((long *)puVar33[2] != (long *)0x0)) &&
               ((*(long *)puVar33[2] == puVar33[3] && (*(long *)(lVar31 + 8) == puVar33[1])))) {
              lVar32 = *(long *)(lVar31 + 0x28);
              pbVar37 = (byte *)(lVar32 + 0x11);
              if ((*(byte *)(lVar32 + 0x10) & 1) != 0) {
                pbVar37 = *(byte **)(lVar32 + 0x20);
              }
              ppuVar63 = (undefined **)strlen((char *)pbVar37);
              pbVar25 = pbVar37 + (long)ppuVar63;
              pbVar22 = pbVar25;
              if ((4 < (long)ppuVar63) && (pbVar25 + -4 != pbVar37)) {
                bVar12 = *pbVar37;
                pbVar45 = pbVar37;
                do {
                  while (bVar12 != 0x53) {
                    pbVar22 = pbVar25;
                    if (pbVar25 + -5 == pbVar45) goto LAB_71035bad4c;
                    bVar12 = pbVar45[1];
                    pbVar45 = pbVar45 + 1;
                  }
                  pbVar59 = pbVar45 + 1;
                  bVar12 = *pbVar59;
                } while (((((bVar12 != 0x68) || (pbVar45[2] != 0x61)) || (pbVar45[3] != 0x70)) ||
                         (pbVar22 = pbVar45, pbVar45[4] != 0x65)) &&
                        (pbVar22 = pbVar25, pbVar45 = pbVar59, pbVar25 + -4 != pbVar59));
              }
LAB_71035bad4c:
              ppuVar49 = (undefined **)(pbVar22 + -(long)pbVar37);
              if (pbVar25 == pbVar22) {
                ppuVar49 = (undefined **)0xffffffffffffffff;
              }
              ppuVar50 = ppuVar49;
              if (ppuVar63 <= ppuVar49) {
                ppuVar50 = ppuVar63;
              }
              pbVar22 = pbVar37 + (long)ppuVar50;
              if (ppuVar49 == (undefined **)0xffffffffffffffff ||
                  ppuVar49 != (undefined **)((long)ppuVar63 + -5)) {
                ppuVar50 = ppuVar63;
                pbVar22 = pbVar25;
              }
              pbVar25 = pbVar22;
              if ((2 < (long)ppuVar50) && (pbVar22 + -2 != pbVar37)) {
                bVar12 = *pbVar37;
                pbVar45 = pbVar37;
                do {
                  while (bVar12 != 0x5f) {
                    pbVar25 = pbVar22;
                    if (pbVar22 + -3 == pbVar45) goto LAB_71035bae08;
                    bVar12 = pbVar45[1];
                    pbVar45 = pbVar45 + 1;
                  }
                  pbVar59 = pbVar45 + 1;
                  bVar12 = *pbVar59;
                } while (((bVar12 != 0x4f) || (pbVar25 = pbVar45, pbVar45[2] != 0x5f)) &&
                        (pbVar25 = pbVar22, pbVar45 = pbVar59, pbVar22 + -2 != pbVar59));
              }
LAB_71035bae08:
              bVar15 = false;
              ppuVar63 = ppuVar50;
              if ((pbVar22 != pbVar25) &&
                 (ppuVar49 = (undefined **)(pbVar25 + -(long)pbVar37),
                 ppuVar49 != (undefined **)0xffffffffffffffff)) {
                ppuVar63 = ppuVar49;
                if (ppuVar50 <= ppuVar49) {
                  ppuVar63 = ppuVar50;
                }
                pbVar22 = pbVar37 + (long)ppuVar63;
                bVar15 = true;
              }
              pbVar25 = pbVar22;
              if ((3 < (long)ppuVar63) && (pbVar22 + -3 != pbVar37)) {
                bVar12 = *pbVar37;
                pbVar45 = pbVar37;
                do {
                  while (bVar12 != 0x5f) {
                    pbVar25 = pbVar22;
                    if (pbVar22 + -4 == pbVar45) goto LAB_71035baec8;
                    bVar12 = pbVar45[1];
                    pbVar45 = pbVar45 + 1;
                  }
                  pbVar59 = pbVar45 + 1;
                  bVar12 = *pbVar59;
                } while ((((bVar12 != 0x56) || (pbVar45[2] != 0x49)) ||
                         (pbVar25 = pbVar45, pbVar45[3] != 0x53)) &&
                        (pbVar25 = pbVar22, pbVar45 = pbVar59, pbVar22 + -3 != pbVar59));
              }
LAB_71035baec8:
              ppuVar49 = ppuVar63;
              if ((pbVar22 != pbVar25) &&
                 (ppuVar50 = (undefined **)(pbVar25 + -(long)pbVar37),
                 ppuVar50 != (undefined **)0xffffffffffffffff)) {
                ppuVar49 = ppuVar50;
                if (ppuVar63 <= ppuVar50) {
                  ppuVar49 = ppuVar63;
                }
                pbVar22 = pbVar37 + (long)ppuVar49;
                bVar15 = true;
              }
              pbVar25 = pbVar22;
              if ((9 < (long)ppuVar49) && (pbVar22 + -9 != pbVar37)) {
                pbVar45 = pbVar37;
                do {
                  bVar12 = *pbVar45;
                  while (bVar12 != 0x5f) {
                    pbVar25 = pbVar22;
                    if (pbVar22 + -10 == pbVar45) goto LAB_71035baf74;
                    bVar12 = pbVar45[1];
                    pbVar45 = pbVar45 + 1;
                  }
                  lVar32 = 1;
                  do {
                    pbVar25 = pbVar45;
                    if (lVar32 == 10) goto LAB_71035baf74;
                    pbVar25 = pbVar45 + lVar32;
                    pbVar59 = (byte *)("_BILLBOARD" + lVar32);
                    lVar32 = lVar32 + 1;
                  } while (*pbVar25 == *pbVar59);
                  pbVar45 = pbVar45 + 1;
                  pbVar25 = pbVar22;
                } while (pbVar22 + -9 != pbVar45);
              }
LAB_71035baf74:
              ppuVar63 = ppuVar49;
              if ((pbVar22 != pbVar25) &&
                 (ppuVar50 = (undefined **)(pbVar25 + -(long)pbVar37),
                 ppuVar50 != (undefined **)0xffffffffffffffff)) {
                ppuVar63 = ppuVar50;
                if (ppuVar49 <= ppuVar50) {
                  ppuVar63 = ppuVar49;
                }
                pbVar22 = pbVar37 + (long)ppuVar63;
                bVar15 = true;
              }
              pbVar25 = pbVar22;
              if ((0xe < (long)ppuVar63) && (pbVar22 + -0xe != pbVar37)) {
                pbVar45 = pbVar37;
                do {
                  bVar12 = *pbVar45;
                  while (bVar12 != 0x5f) {
                    pbVar25 = pbVar22;
                    if (pbVar22 + -0xf == pbVar45) goto LAB_71035bb018;
                    bVar12 = pbVar45[1];
                    pbVar45 = pbVar45 + 1;
                  }
                  lVar32 = 1;
                  do {
                    pbVar25 = pbVar45;
                    if (lVar32 == 0xf) goto LAB_71035bb018;
                    pbVar25 = pbVar45 + lVar32;
                    pbVar59 = (byte *)("_BILLBOARDYAXIS" + lVar32);
                    lVar32 = lVar32 + 1;
                  } while (*pbVar25 == *pbVar59);
                  pbVar45 = pbVar45 + 1;
                  pbVar25 = pbVar22;
                } while (pbVar22 + -0xe != pbVar45);
              }
LAB_71035bb018:
              if ((pbVar22 == pbVar25) ||
                 (ppuVar49 = (undefined **)(pbVar25 + -(long)pbVar37),
                 ppuVar49 == (undefined **)0xffffffffffffffff)) {
                ppuVar49 = ppuVar63;
                if (bVar15) goto joined_r0x0071035bb04c;
              }
              else {
                if (ppuVar63 <= ppuVar49) {
                  ppuVar49 = ppuVar63;
                }
joined_r0x0071035bb04c:
                ppuVar63 = ppuVar49;
                pbVar25 = pbVar37 + (long)ppuVar63;
                pbVar22 = pbVar25;
                if ((ppuVar63 != (undefined **)0x0) && (ppuVar49 = ppuVar63, pbVar25[-1] != 0x5f)) {
                  do {
                    ppuVar50 = (undefined **)((long)ppuVar49 + -1);
                    pbVar22 = pbVar37;
                    if (ppuVar50 == (undefined **)0x0) goto LAB_71035ba380;
                    pbVar22 = pbVar37 + (long)ppuVar49;
                    ppuVar49 = ppuVar50;
                  } while (pbVar22[-2] != 0x5f);
                  pbVar22 = pbVar37 + (long)ppuVar50;
                }
LAB_71035ba380:
                ppuVar49 = (undefined **)0xffffffffffffffff;
                if (pbVar37 != pbVar22) {
                  ppuVar49 = (undefined **)
                             ((byte *)((long)ppuVar63 + ~(ulong)pbVar25) + (long)pbVar22);
                }
                if (ppuVar49 == (undefined **)((long)ppuVar63 + -1)) {
                  if (ppuVar63 <= ppuVar49) {
                    ppuVar49 = ppuVar63;
                  }
                  pbVar25 = pbVar37 + (long)ppuVar49;
                  pbVar22 = pbVar25;
                  ppuVar63 = ppuVar49;
                  if ((ppuVar49 != (undefined **)0x0) && (pbVar25[-1] != 0x5f)) {
                    pbVar45 = (byte *)((long)ppuVar49 + 1);
                    do {
                      pbVar22 = pbVar37;
                      if (pbVar45 == (byte *)0x2) goto LAB_71035ba380;
                      pbVar22 = pbVar37 + (long)pbVar45;
                      pbVar45 = pbVar45 + -1;
                    } while (pbVar22[-3] != 0x5f);
                    pbVar22 = pbVar37 + (long)pbVar45 + -1;
                  }
                  goto LAB_71035ba380;
                }
              }
              local_e0 = (undefined **)0x0;
              local_d8 = 0;
              uStack_d4 = 0;
              local_e8 = (long ***)0x0;
              if ((undefined **)0xffffffffffffffef < ppuVar63) goto LAB_71035bb868;
              pbVar25 = pbVar37 + (long)ppuVar63;
              if (ppuVar63 < (undefined **)0x17) {
                local_e8 = (long ***)(ulong)(byte)((int)ppuVar63 << 1);
                pbVar22 = pbVar35;
                if (ppuVar63 != (undefined **)0x0) goto LAB_71035ba490;
                ppuVar49 = (undefined **)0x0;
              }
              else {
                ppplVar65 = (long ***)((ulong)(ppuVar63 + 2) & 0xfffffffffffffff0);
                ppplVar62 = ppplVar65;
                if (((ulong)(ppuVar63 + 2) & 0xfffffffffffffff0) == 0) {
                  ppplVar62 = (long ***)0x1;
                }
                pbVar22 = (byte *)FUN_710392e290(0x10,ppplVar62,pppplVar27,ppppbVar30,param_5,
                                                 param_6,param_7,param_8);
                if (pbVar22 == (byte *)0x0) {
                  if (DAT_7105332f00 != (long *)0x0) {
                    local_90 = (undefined **)((ulong)local_90 & 0xffffffff00000000);
                    pppplVar27 = &local_130;
                    local_130 = ppplVar62;
                    uVar21 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_90);
                    if (((uVar21 & 1) != 0) &&
                       (pbVar22 = (byte *)FUN_710392e290(0x10,ppplVar62,pppplVar27,ppppbVar30,
                                                         param_5,param_6,param_7,param_8),
                       pbVar22 != (byte *)0x0)) goto LAB_71035ba484;
                  }
                  pbVar22 = (byte *)0x0;
                }
LAB_71035ba484:
                local_e8 = (long ***)((ulong)ppplVar65 | 1);
                local_d8 = SUB84(pbVar22,0);
                uStack_d4 = (uint)((ulong)pbVar22 >> 0x20);
                local_e0 = ppuVar63;
LAB_71035ba490:
                uVar21 = (ulong)ppuVar63 & 7;
                pbVar45 = pbVar37;
                pbVar59 = pbVar22;
                if (uVar21 != 0) {
                  pbVar45 = pbVar37 + uVar21;
                  lVar32 = -uVar21;
                  pbVar59 = pbVar37;
                  pbVar46 = pbVar22;
                  do {
                    lVar32 = lVar32 + 1;
                    *pbVar46 = *pbVar59;
                    pbVar59 = pbVar59 + 1;
                    pbVar46 = pbVar46 + 1;
                  } while (lVar32 != 0);
                  pbVar59 = pbVar22 + uVar21;
                }
                if ((byte *)0x6 < (byte *)((long)ppuVar63 + -1)) {
                  do {
                    *pbVar59 = *pbVar45;
                    pbVar59[1] = pbVar45[1];
                    pbVar59[2] = pbVar45[2];
                    pbVar59[3] = pbVar45[3];
                    pbVar59[4] = pbVar45[4];
                    pbVar59[5] = pbVar45[5];
                    pbVar59[6] = pbVar45[6];
                    pbVar46 = pbVar45 + 7;
                    pbVar45 = pbVar45 + 8;
                    pbVar59[7] = *pbVar46;
                    pbVar59 = pbVar59 + 8;
                  } while (pbVar45 != pbVar25);
                }
                pbVar22 = pbVar22 + (long)ppuVar63;
                ppuVar49 = ppuVar63;
              }
              *pbVar22 = 0;
              pbVar45 = (byte *)CONCAT44(uStack_d4,local_d8);
              pbVar22 = pbVar35;
              if (((ulong)local_e8 & 1) != 0) {
                pbVar22 = pbVar45;
              }
              if ((int)ppuVar49 == 0) {
                local_148 = 0;
              }
              else {
                uVar51 = 0xffffffff;
                pbVar59 = pbVar22;
                do {
                  pbVar46 = pbVar59 + 1;
                  bVar12 = *pbVar59;
                  uVar54 = bVar12 + 0x20;
                  if (0x19 < bVar12 - 0x41) {
                    uVar54 = (uint)bVar12;
                  }
                  uVar51 = (&DAT_7104754084)[(uVar54 ^ uVar51) & 0xff] ^ uVar51 >> 8;
                  pbVar59 = pbVar46;
                } while (pbVar46 < pbVar22 + ((ulong)ppuVar49 & 0xffffffff));
                local_148 = (ulong)~uVar51;
              }
              if ((((ulong)local_e8 & 1) != 0) && (pbVar45 != (byte *)0x0)) {
                FUN_710392eb40((ulong)pbVar45);
              }
              puVar23 = (undefined8 *)
                        FUN_710392e290(0x10,0xf8,pppplVar27,ppppbVar30,param_5,param_6,param_7,
                                       param_8);
              if (puVar23 == (undefined8 *)0x0) {
                if (DAT_7105332f00 != (long *)0x0) {
                  local_130 = (long ***)((ulong)local_130 & 0xffffffff00000000);
                  local_e8 = (long ***)&DAT_000000f8;
                  pppplVar27 = &local_e8;
                  uVar21 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_130);
                  if (((uVar21 & 1) != 0) &&
                     (puVar23 = (undefined8 *)
                                FUN_710392e290(0x10,0xf8,pppplVar27,ppppbVar30,param_5,param_6,
                                               param_7,param_8), puVar23 != (undefined8 *)0x0))
                  goto LAB_71035ba5e8;
                }
                puVar23 = (undefined8 *)0x0;
              }
LAB_71035ba5e8:
              plVar53 = puVar23 + 1;
              *plVar53 = 0;
              *puVar23 = &PTR_FUN_7105231950;
              puVar23[0x14] = &PTR_FUN_71052324b8;
              puVar23[0x15] = 0;
              puVar23[2] = 0;
              puVar23[3] = 0;
              puVar23[0x16] = 0;
              puVar23[0x17] = 0;
              puVar23[0x1e] = 0;
              *(undefined1 *)(puVar23 + 0x1d) = 0;
              puVar23[0x1c] = 0;
              puVar23[0x12] = 0;
              puVar23[0x13] = 0;
              puVar23[0x10] = 0;
              puVar23[0x11] = 0;
              puVar23[0xe] = 0;
              puVar23[0xf] = 0;
              puVar23[0xc] = 0;
              puVar23[0xd] = 0;
              puVar23[10] = 0;
              puVar23[0xb] = 0;
              puVar23[8] = 0;
              puVar23[9] = 0;
              puVar23[6] = 0;
              puVar23[7] = 0;
              puVar23[4] = 0;
              puVar23[5] = 0;
              puVar23[0x1a] = 0;
              puVar23[0x1b] = 0;
              puVar23[0x18] = &PTR_FUN_710522ff60;
              puVar23[0x19] = 0;
              if ((*(long **)(lVar31 + 0x30) == (long *)0x0) ||
                 (**(long **)(lVar31 + 0x30) != *(long *)(lVar31 + 0x38))) {
                *plVar53 = 0;
LAB_71035ba684:
                uVar48 = 0;
                puVar23[2] = 0;
              }
              else {
                lVar32 = *(long *)(lVar31 + 0x28);
                *plVar53 = lVar32;
                if (lVar32 == 0) goto LAB_71035ba684;
                puVar36 = *(undefined8 **)(lVar32 + 8);
                puVar23[2] = puVar36;
                uVar48 = *puVar36;
              }
              puVar23[3] = uVar48;
              pbVar22 = pbVar25;
              if ((6 < (long)ppuVar63) && (pbVar25 + -6 != pbVar37)) {
                bVar12 = *pbVar37;
                pbVar45 = pbVar37;
                do {
                  while (bVar12 != 0x69) {
                    pbVar22 = pbVar25;
                    if (pbVar25 + -7 == pbVar45) goto LAB_71035ba738;
                    bVar12 = pbVar45[1];
                    pbVar45 = pbVar45 + 1;
                  }
                  pbVar59 = pbVar45 + 1;
                  bVar12 = *pbVar59;
                } while (((((bVar12 != 0x6e) || (pbVar45[2] != 0x6b)) || (pbVar45[3] != 0x4d)) ||
                         (((pbVar45[4] != 0x65 || (pbVar45[5] != 0x73)) ||
                          (pbVar22 = pbVar45, pbVar45[6] != 0x68)))) &&
                        (pbVar22 = pbVar25, pbVar45 = pbVar59, pbVar25 + -6 != pbVar59));
              }
LAB_71035ba738:
              if ((pbVar25 != pbVar22) && ((long)pbVar22 - (long)pbVar37 != -1)) {
                *(undefined1 *)(puVar23 + 0x1d) = 1;
                pbVar22 = pbVar37;
                ppuVar50 = ppuVar63;
                if (ppuVar63 == (undefined **)0x0) {
LAB_71035ba7a0:
                  ppuVar50 = (undefined **)0xffffffffffffffff;
                  if (pbVar22 != pbVar25) {
                    ppuVar50 = (undefined **)(pbVar22 + -(long)pbVar37);
                  }
                }
                else {
                  do {
                    pppplVar27 = (long ****)&DAT_00000008;
                    pvVar24 = memchr("inkMesh_",(uint)*pbVar22,8);
                    if (pvVar24 == (void *)0x0) goto LAB_71035ba7a0;
                    ppuVar50 = (undefined **)((long)ppuVar50 + -1);
                    pbVar22 = pbVar22 + 1;
                  } while (ppuVar50 != (undefined **)0x0);
                  ppuVar50 = (undefined **)0xffffffffffffffff;
                }
                ppuVar3 = ppuVar63;
                if (ppuVar50 <= ppuVar63) {
                  ppuVar3 = ppuVar50;
                }
                ppuVar63 = (undefined **)((long)ppuVar63 - (long)ppuVar3);
                local_e0 = (undefined **)0x0;
                local_d8 = 0;
                uStack_d4 = 0;
                local_e8 = (long ***)0x0;
                if ((undefined **)0xffffffffffffffef < ppuVar63) {
LAB_71035bb868:
                  uStack_d4 = 0;
                  local_d8 = 0;
                  local_e0 = (undefined **)0x0;
                  local_e8 = (long ***)0x0;
                    /* WARNING: Subroutine does not return */
                  std::__basic_string_common<true>::__throw_length_error();
                }
                if (ppuVar63 < (undefined **)0x17) {
                  local_e8 = (long ***)(ulong)(byte)((int)ppuVar63 << 1);
                  pbVar25 = pbVar35;
                  if (ppuVar63 != (undefined **)0x0) goto LAB_71035ba858;
                }
                else {
                  ppplVar65 = (long ***)((ulong)(ppuVar63 + 2) & 0xfffffffffffffff0);
                  ppplVar62 = ppplVar65;
                  if (((ulong)(ppuVar63 + 2) & 0xfffffffffffffff0) == 0) {
                    ppplVar62 = (long ***)0x1;
                  }
                  pbVar25 = (byte *)FUN_710392e290(0x10,ppplVar62,pppplVar27,ppppbVar30,param_5,
                                                   param_6,param_7,param_8);
                  if (pbVar25 == (byte *)0x0) {
                    if (DAT_7105332f00 != (long *)0x0) {
                      local_90 = (undefined **)((ulong)local_90 & 0xffffffff00000000);
                      pppplVar27 = &local_130;
                      local_130 = ppplVar62;
                      uVar21 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_90);
                      if (((uVar21 & 1) != 0) &&
                         (pbVar25 = (byte *)FUN_710392e290(0x10,ppplVar62,pppplVar27,ppppbVar30,
                                                           param_5,param_6,param_7,param_8),
                         pbVar25 != (byte *)0x0)) goto LAB_71035ba84c;
                    }
                    pbVar25 = (byte *)0x0;
                  }
LAB_71035ba84c:
                  local_e8 = (long ***)((ulong)ppplVar65 | 1);
                  local_d8 = SUB84(pbVar25,0);
                  uStack_d4 = (uint)((ulong)pbVar25 >> 0x20);
                  local_e0 = ppuVar63;
LAB_71035ba858:
                  pbVar37 = pbVar37 + (long)ppuVar3;
                  ppuVar50 = ppuVar63;
                  pbVar22 = pbVar25;
                  do {
                    ppuVar50 = (undefined **)((long)ppuVar50 + -1);
                    *pbVar22 = *pbVar37;
                    pbVar37 = pbVar37 + 1;
                    pbVar22 = pbVar22 + 1;
                  } while (ppuVar50 != (undefined **)0x0);
                  pbVar25 = pbVar25 + (long)ppuVar63;
                }
                *pbVar25 = 0;
                pbVar25 = (byte *)CONCAT44(uStack_d4,local_d8);
                pbVar37 = pbVar35;
                if (((ulong)local_e8 & 1) != 0) {
                  pbVar37 = pbVar25;
                }
                if ((int)ppuVar63 == 0) {
                  uVar21 = 0;
                }
                else {
                  uVar51 = 0xffffffff;
                  pbVar22 = pbVar37;
                  do {
                    pbVar45 = pbVar22 + 1;
                    bVar12 = *pbVar22;
                    uVar54 = bVar12 + 0x20;
                    if (0x19 < bVar12 - 0x41) {
                      uVar54 = (uint)bVar12;
                    }
                    uVar51 = (&DAT_7104754084)[(uVar54 ^ uVar51) & 0xff] ^ uVar51 >> 8;
                    pbVar22 = pbVar45;
                  } while (pbVar45 < pbVar37 + ((ulong)ppuVar63 & 0xffffffff));
                  uVar21 = (ulong)~uVar51;
                }
                if ((((ulong)local_e8 & 1) != 0) && (pbVar25 != (byte *)0x0)) {
                  FUN_710392eb40((ulong)pbVar25);
                }
                puVar23[0x1e] = uVar21 | ((ulong)ppuVar63 & 0xff) << 0x20;
              }
              local_148 = local_148 | ((ulong)ppuVar49 & 0xff) << 0x20;
              plVar53 = (long *)FUN_710392e290(0x10,0x20,pppplVar27,ppppbVar30,param_5,param_6,
                                               param_7,param_8);
              if (plVar53 == (long *)0x0) {
                if (DAT_7105332f00 != (long *)0x0) {
                  local_130 = (long ***)((ulong)local_130 & 0xffffffff00000000);
                  local_e8 = (long ***)&SUB_00000020;
                  pppplVar27 = &local_e8;
                  uVar21 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_130);
                  if (((uVar21 & 1) != 0) &&
                     (plVar53 = (long *)FUN_710392e290(0x10,0x20,pppplVar27,ppppbVar30,param_5,
                                                       param_6,param_7,param_8),
                     plVar53 != (long *)0x0)) goto LAB_71035ba95c;
                }
                plVar53 = (long *)0x0;
              }
LAB_71035ba95c:
              plVar53[2] = local_148;
              plVar53[3] = (long)puVar23;
              *plVar53 = 0;
              plVar53[1] = local_148;
              fVar66 = (float)(*(long *)(param_1 + 0x38) + 1);
              uVar21 = *(ulong *)(param_1 + 0x28);
              if ((uVar21 == 0) || (*(float *)(param_1 + 0x40) * (float)uVar21 < fVar66)) {
                if (uVar21 < 3) {
                  uVar55 = 1;
                }
                else {
                  uVar55 = (ulong)((uVar21 - 1 & uVar21) != 0);
                }
                uVar55 = uVar55 | uVar21 << 1;
                uVar38 = (ulong)(fVar66 / *(float *)(param_1 + 0x40));
                if (uVar38 <= uVar55) {
                  uVar38 = uVar55;
                }
                if (uVar38 - 1 == 0) {
                  uVar38 = 2;
                  bVar15 = uVar21 < 3;
                  uVar55 = uVar38;
                  if (uVar21 < 2) goto LAB_71035baa2c;
LAB_71035ba9e8:
                  if (!bVar15) {
                    uVar38 = (ulong)((float)*(ulong *)(param_1 + 0x38) / *(float *)(param_1 + 0x40))
                    ;
                    if (uVar21 < 3 || (uVar21 - 1 & uVar21) != 0) {
                      uVar38 = std::__next_prime(uVar38);
                    }
                    else if (1 < uVar38) {
                      uVar38 = 1L << (-LZCOUNT(uVar38 - 1) & 0x3fU);
                    }
                    if (uVar38 <= uVar55) {
                      uVar38 = uVar55;
                    }
                    if (uVar38 < uVar21) goto LAB_71035baa2c;
                  }
                }
                else {
                  if ((uVar38 - 1 & uVar38) != 0) {
                    uVar38 = std::__next_prime(uVar38);
                    uVar21 = *(ulong *)(param_1 + 0x28);
                  }
                  bVar15 = uVar21 <= uVar38;
                  uVar55 = uVar38;
                  if (uVar38 <= uVar21) goto LAB_71035ba9e8;
LAB_71035baa2c:
                  FUN_71035bdda0(puVar1,uVar38,pppplVar27,ppppbVar30,param_5,param_6,param_7,param_8
                                );
                }
                uVar21 = *(ulong *)(param_1 + 0x28);
                local_148 = plVar53[1];
              }
              uVar38 = uVar21 - 1;
              uVar55 = uVar38 & uVar21;
              if (uVar55 == 0) {
                uVar47 = uVar38 & local_148;
              }
              else {
                uVar47 = local_148;
                if (uVar21 <= local_148) {
                  uVar47 = 0;
                  if (uVar21 != 0) {
                    uVar47 = local_148 / uVar21;
                  }
                  uVar47 = local_148 - uVar47 * uVar21;
                }
              }
              uVar57 = *puVar1;
              plVar56 = *(long **)(uVar57 + uVar47 * 8);
              if (plVar56 == (long *)0x0) {
                *plVar53 = *plVar40;
                *plVar40 = (long)plVar53;
                *(long **)(uVar57 + uVar47 * 8) = plVar40;
                if (*plVar53 != 0) {
                  uVar47 = *(ulong *)(*plVar53 + 8);
                  if (uVar55 == 0) {
                    uVar47 = uVar47 & uVar38;
                  }
                  else if (uVar21 <= uVar47) {
                    uVar55 = 0;
                    if (uVar21 != 0) {
                      uVar55 = uVar47 / uVar21;
                    }
                    uVar47 = uVar47 - uVar55 * uVar21;
                  }
                  *(long **)(*puVar1 + uVar47 * 8) = plVar53;
                }
              }
              else {
                bVar15 = false;
                if (uVar55 == 0) {
                  do {
                    bVar16 = bVar15;
                    plVar58 = plVar56;
                    plVar56 = (long *)*plVar58;
                    if ((plVar56 == (long *)0x0) || ((plVar56[1] & uVar38) != uVar47)) break;
                    bVar15 = bVar16;
                  } while (((plVar56[1] == local_148) &&
                           (bVar15 = (bool)(bVar16 | plVar56[2] == plVar53[2]),
                           plVar56[2] == plVar53[2])) || (!bVar16));
                }
                else {
                  while (bVar16 = bVar15, plVar58 = plVar56, plVar56 = (long *)*plVar58,
                        plVar56 != (long *)0x0) {
                    uVar60 = plVar56[1];
                    uVar57 = uVar60;
                    if (uVar21 <= uVar60) {
                      uVar57 = 0;
                      if (uVar21 != 0) {
                        uVar57 = uVar60 / uVar21;
                      }
                      uVar57 = uVar60 - uVar57 * uVar21;
                    }
                    if ((uVar57 != uVar47) ||
                       (((bVar15 = bVar16, uVar60 != local_148 ||
                         (bVar15 = (bool)(bVar16 | plVar56[2] == plVar53[2]),
                         plVar56[2] != plVar53[2])) && (bVar16)))) break;
                  }
                }
                *plVar53 = *plVar58;
                *plVar58 = (long)plVar53;
                if (*plVar53 != 0) {
                  uVar57 = *(ulong *)(*plVar53 + 8);
                  if (uVar55 == 0) {
                    uVar57 = uVar57 & uVar38;
                  }
                  else if (uVar21 <= uVar57) {
                    uVar55 = 0;
                    if (uVar21 != 0) {
                      uVar55 = uVar57 / uVar21;
                    }
                    uVar57 = uVar57 - uVar55 * uVar21;
                  }
                  if (uVar57 != uVar47) {
                    *(long **)(*puVar1 + uVar57 * 8) = plVar53;
                  }
                }
              }
              *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 1;
            }
            puVar23 = local_78;
            local_78 = puVar14;
          }
          lVar31 = lVar31 + 0x40;
          local_78 = puVar23;
          puVar33 = local_80;
        } while (lVar31 != lVar19);
      }
      for (plVar40 = *(long **)(param_1 + 0x30); plVar40 != (long *)0x0; plVar40 = (long *)*plVar40)
      {
        lVar31 = plVar40[3];
        lVar19 = *(long *)(*(long *)(lVar31 + 8) + 0x120);
        puVar33 = *(undefined8 **)(lVar19 + 0x110);
        puVar23 = *(undefined8 **)(lVar19 + 0x118);
        if (puVar33 != puVar23) {
          do {
            uVar51 = *(uint *)((long)puVar33 + 4);
            if (uVar51 < 2) {
LAB_71035bb0fc:
              bVar12 = *(byte *)(puVar33 + 2);
              uVar21 = (ulong)(bVar12 >> 1);
              if ((bVar12 & 1) != 0) {
                uVar21 = puVar33[3];
              }
              if (uVar21 == 9) {
                pvVar24 = (void *)((long)puVar33 + 0x11);
                if ((bVar12 & 1) != 0) {
                  pvVar24 = (void *)puVar33[4];
                }
                iVar17 = memcmp(pvVar24,"Position0",9);
                if (iVar17 == 0) {
                  uVar48 = puVar33[1];
                  *(undefined8 *)(lVar31 + 0x20) = *puVar33;
                  *(undefined8 *)(lVar31 + 0x28) = uVar48;
                  if ((undefined8 *)(lVar31 + 0x20) != puVar33) {
                    uVar21 = (ulong)(*(byte *)(puVar33 + 2) >> 1);
                    pvVar24 = (void *)((long)puVar33 + 0x11);
                    if ((*(byte *)(puVar33 + 2) & 1) != 0) {
                      uVar21 = puVar33[3];
                      pvVar24 = (void *)puVar33[4];
                    }
                    FUN_71002c51f0((ulong *)(lVar31 + 0x30),pvVar24,uVar21,ppppbVar30,param_5,
                                   param_6,param_7,param_8);
                    FUN_71035bd910((ulong *)(lVar31 + 0x48),(ulong *)puVar33[5],(ulong *)puVar33[6],
                                   ppppbVar30,param_5,param_6,param_7,param_8);
                  }
                }
              }
            }
            else if (uVar51 == 0xf) {
              bVar12 = *(byte *)(puVar33 + 2);
              uVar21 = (ulong)(bVar12 >> 1);
              if ((bVar12 & 1) != 0) {
                uVar21 = puVar33[3];
              }
              if (uVar21 == 0xd) {
                pvVar24 = (void *)((long)puVar33 + 0x11);
                if ((bVar12 & 1) != 0) {
                  pvVar24 = (void *)puVar33[4];
                }
                iVar17 = memcmp(pvVar24,"ink_color_set",0xd);
                if (iVar17 == 0) {
                  uVar48 = puVar33[1];
                  *(undefined8 *)(lVar31 + 0x60) = *puVar33;
                  *(undefined8 *)(lVar31 + 0x68) = uVar48;
                  if ((undefined8 *)(lVar31 + 0x60) != puVar33) {
                    uVar21 = (ulong)(*(byte *)(puVar33 + 2) >> 1);
                    pvVar24 = (void *)((long)puVar33 + 0x11);
                    if ((*(byte *)(puVar33 + 2) & 1) != 0) {
                      uVar21 = puVar33[3];
                      pvVar24 = (void *)puVar33[4];
                    }
                    FUN_71002c51f0((ulong *)(lVar31 + 0x70),pvVar24,uVar21,ppppbVar30,param_5,
                                   param_6,param_7,param_8);
                    FUN_71035bd910((ulong *)(lVar31 + 0x88),(ulong *)puVar33[5],(ulong *)puVar33[6],
                                   ppppbVar30,param_5,param_6,param_7,param_8);
                  }
                  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)puVar33;
                }
              }
            }
            else if (uVar51 == 3) goto LAB_71035bb0fc;
            puVar33 = puVar33 + 8;
          } while (puVar23 != puVar33);
        }
        iVar17 = FUN_710392e1f0(&local_130,0x10,(long ****)0xf20,ppppbVar30,param_5,param_6,param_7,
                                param_8);
        if ((iVar17 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
          local_e8 = (long ***)0xf20;
          uVar21 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_e8);
          if ((uVar21 & 1) != 0) {
            FUN_710392e1f0(&local_130,0x10,(long ****)0xf20,ppppbVar30,param_5,param_6,param_7,
                           param_8);
          }
        }
        nu::VirtualAllocHook(0xf20,0x10,local_130);
        ppplVar62 = local_130;
        FUN_71037c3a70(local_130);
        *(undefined4 *)(ppplVar62 + 2) = 0;
        *(undefined1 *)((long)ppplVar62 + 0x14) = 0;
        ppplVar62[0x1e3] = (long **)0x0;
        *ppplVar62 = (long **)&PTR_thunk_FUN_71037d1400_7105242f28;
        if (ppplVar62 == (long ***)0x0) {
          pplVar39 = (long **)0x0;
          plVar53 = (long *)0x0;
        }
        else {
          pplVar39 = ppplVar62[1];
          plVar53 = *pplVar39;
        }
        plVar56 = *(long **)(lVar31 + 0xa8);
        plVar58 = *(long **)(lVar31 + 0xb0);
        *(long ****)(lVar31 + 0xa8) = ppplVar62;
        *(long ***)(lVar31 + 0xb0) = pplVar39;
        lVar19 = *(long *)(lVar31 + 0xb8);
        *(long **)(lVar31 + 0xb8) = plVar53;
        if (((plVar58 != (long *)0x0) && (plVar56 != (long *)0x0)) && (*plVar58 == lVar19)) {
          (**(code **)(*plVar56 + 8))();
          ppplVar62 = *(long ****)(lVar31 + 0xa8);
        }
        local_e8 = (long ***)0x0;
        local_e0 = (undefined **)&DAT_00000060;
        local_d8 = 2;
        local_93 = 0;
        uStack_d4 = uStack_d4 & 0xffffff00;
        (*(code *)(*ppplVar62)[2])(auStack_f0,ppplVar62,&local_e8);
        if (((*(long **)(lVar31 + 0xb0) == (long *)0x0) ||
            (**(long **)(lVar31 + 0xb0) != *(long *)(lVar31 + 0xb8))) ||
           ((lVar19 = *(long *)(lVar31 + 0xa8), lVar19 == 0 || (*(long *)(lVar19 + 8) == 0)))) {
          uVar48 = 0;
          *(undefined8 *)(lVar31 + 200) = 0;
          *(undefined8 *)(lVar31 + 0xd0) = 0;
        }
        else {
          *(long *)(lVar31 + 200) = lVar19;
          puVar33 = *(undefined8 **)(lVar19 + 8);
          *(undefined8 **)(lVar31 + 0xd0) = puVar33;
          uVar48 = *puVar33;
        }
        *(undefined8 *)(lVar31 + 0xd8) = uVar48;
        lVar19 = *(long *)(lVar31 + 8);
        lVar32 = *(long *)(lVar19 + 0x70);
        uVar21 = *(long *)(lVar19 + 0x78) - lVar32 >> 3;
        if ((uVar21 <= *(uint *)(lVar31 + 0x20)) || (uVar21 <= *(uint *)(lVar31 + 0x60))) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
        piVar2 = (int *)(lVar32 + (ulong)*(uint *)(lVar31 + 0x20) * 8);
        uVar8 = *(undefined4 *)(lVar19 + 0x58);
        iVar17 = *piVar2;
        iVar5 = piVar2[1];
        piVar2 = (int *)(lVar32 + (ulong)*(uint *)(lVar31 + 0x60) * 8);
        iVar9 = *(int *)(lVar19 + 0x88);
        uVar18 = *(undefined4 *)(lVar19 + 0x4c);
        uVar51 = *(uint *)(lVar19 + 0x50);
        iVar10 = *(int *)(lVar31 + 0x2c);
        iVar11 = *(int *)(lVar31 + 0x6c);
        iVar4 = *piVar2;
        iVar6 = piVar2[1];
        (**(code **)(**(long **)(lVar31 + 200) + 0x18))(&local_130);
        plVar53 = local_128;
        nu::ModuleInitializer<nu::GraphicsModule,nu::GraphicsModuleDesc>::Instance();
        lVar19 = nu::ModuleInitializer<nu::GraphicsModule,nu::GraphicsModuleDesc>::Instance();
        ppppbVar30 = (byte ****)0x0;
        puVar26 = (undefined4 *)
                  (**(code **)(*plVar53 + 0x10))(plVar53,*(undefined8 *)(lVar19 + 0x58),0);
        plVar53 = local_128;
        if (puVar26 != (undefined4 *)0x0) {
          uVar52 = 6;
          puVar26[0xf] = 0x3f800000;
          puVar26[0x10] = iVar17 + iVar10;
          if (iVar9 != 0) {
            uVar52 = 0xc;
          }
          puVar26[0x11] = uVar8;
          puVar26[0x12] = iVar4 + iVar11;
          *(undefined8 *)(puVar26 + 6) = 0;
          *(undefined8 *)(puVar26 + 8) = 0;
          *puVar26 = 0x3f800000;
          *(undefined8 *)(puVar26 + 3) = 0;
          *(undefined8 *)(puVar26 + 1) = 0;
          puVar26[5] = 0x3f800000;
          puVar26[10] = 0x3f800000;
          *(undefined8 *)(puVar26 + 0xd) = 0;
          *(undefined8 *)(puVar26 + 0xb) = 0;
          puVar26[0x13] = iVar5;
          puVar26[0x14] = uVar52;
          puVar26[0x15] = iVar6;
          puVar26[0x16] = uVar51 / 3;
          puVar26[0x17] = uVar18;
          nu::ModuleInitializer<nu::GraphicsModule,nu::GraphicsModuleDesc>::Instance();
          lVar19 = nu::ModuleInitializer<nu::GraphicsModule,nu::GraphicsModuleDesc>::Instance();
          (**(code **)(*plVar53 + 0x18))(plVar53,*(undefined8 *)(lVar19 + 0x58));
        }
      }
      if (*(long *)(param_1 + 0x38) == 0) {
        *(undefined1 *)(param_1 + 8) = 0;
        goto joined_r0x0071035ba310;
      }
      uVar21 = (**(code **)(*plVar64 + 0x18))(plVar64);
      if ((uVar21 & 1) == 0) {
LAB_71035bb528:
        lVar19 = 0;
      }
      else {
        plVar64 = (long *)plVar64[0x90];
        lVar19 = 0;
        if (plVar64 != (long *)0x0) {
          plVar64 = (long *)(*plVar64 + (ulong)*(uint *)(plVar64 + 3) * 0x70);
          lVar19 = *plVar64;
          plVar64 = (long *)plVar64[1];
          if (plVar64 != (long *)0x0) {
            plVar40 = plVar64 + 1;
            do {
              cVar13 = '\x01';
              bVar15 = (bool)ExclusiveMonitorPass(plVar40,0x10);
              if (bVar15) {
                *plVar40 = *plVar40 + 1;
                cVar13 = ExclusiveMonitorsStatus();
              }
            } while (cVar13 != '\0');
            do {
              lVar31 = *plVar40;
              cVar13 = '\x01';
              bVar15 = (bool)ExclusiveMonitorPass(plVar40,0x10);
              if (bVar15) {
                *plVar40 = lVar31 + -1;
                cVar13 = ExclusiveMonitorsStatus();
              }
            } while (cVar13 != '\0');
            if (lVar31 == 0) {
              (**(code **)(*plVar64 + 0x10))(plVar64);
              std::__shared_weak_count::__release_weak();
            }
          }
          if (lVar19 == 0) goto LAB_71035bb528;
          lVar19 = *(long *)(*(long *)(lVar19 + 0x40) + 0x68);
        }
      }
      FUN_7103662550(&local_e8,*(uint *)(lVar19 + 0x18) ^ (int)*(uint *)(lVar19 + 0x18) >> 0x1f,
                     lVar19 + 0x20);
      ppuVar63 = local_e0;
      local_130 = (long ***)0x0;
      local_128 = (long *)0x1;
      local_100 = 0;
      local_f8 = (void *)0x0;
      local_110 = 0;
      local_108 = 0;
      local_120 = 0;
      uStack_118 = 0;
      FUN_71002c51f0(&local_108,"ink_color_uav_dbg_name",0x16,ppppbVar30,param_5,param_6,param_7,
                     param_8);
      if (ppuVar63[0x6c] <= (undefined *)(long)*(int *)(param_1 + 0x4c)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      puVar28 = (uint *)(ppuVar63[0x6b] + (long)*(int *)(param_1 + 0x4c) * 0x28);
      uVar51 = *puVar28;
      FUN_710359c770(&local_e8,uVar51 ^ (int)uVar51 >> 0x1f,(long)(puVar28 + 2));
      uVar18 = (**(code **)(*local_e0 + 0xa0))(local_e0,&local_130);
      *(undefined4 *)(param_1 + 0x48) = uVar18;
      iVar17 = FUN_710392e1f0(&local_90,0x10,(long ****)0xf20,ppppbVar30,param_5,param_6,param_7,
                              param_8);
      if ((iVar17 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
        local_e8 = (long ***)0xf20;
        uVar21 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_e8);
        if ((uVar21 & 1) != 0) {
          FUN_710392e1f0(&local_90,0x10,(long ****)0xf20,ppppbVar30,param_5,param_6,param_7,param_8)
          ;
        }
      }
      nu::VirtualAllocHook(0xf20,0x10,local_90);
      ppuVar63 = local_90;
      FUN_71037c3a70(local_90);
      *(undefined4 *)(ppuVar63 + 2) = 1;
      *(undefined1 *)((long)ppuVar63 + 0x14) = 0;
      ppuVar63[0x1e3] = (undefined *)0x0;
      *ppuVar63 = (undefined *)&PTR_thunk_FUN_71037d1400_7105243018;
      if (ppuVar63 == (undefined **)0x0) {
        puVar33 = (undefined8 *)0x0;
        uVar48 = 0;
      }
      else {
        puVar33 = (undefined8 *)ppuVar63[1];
        uVar48 = *puVar33;
      }
      plVar64 = *(long **)(param_1 + 0x58);
      plVar40 = *(long **)(param_1 + 0x60);
      *(undefined ***)(param_1 + 0x58) = ppuVar63;
      *(undefined8 **)(param_1 + 0x60) = puVar33;
      lVar19 = *(long *)(param_1 + 0x68);
      *(undefined8 *)(param_1 + 0x68) = uVar48;
      if (((plVar40 != (long *)0x0) && (plVar64 != (long *)0x0)) && (*plVar40 == lVar19)) {
        (**(code **)(*plVar64 + 8))();
        ppuVar63 = *(undefined ***)(param_1 + 0x58);
      }
      local_e8 = (long ***)0x0;
      local_e0 = (undefined **)&DAT_00000010;
      local_d8 = 2;
      uStack_d4 = 0x5f6b6e69;
      local_d0 = 0x6566696c;
      uStack_cc = 0x656d6974;
      local_c8 = 0x7562635f;
      uStack_c4 = 0x72656666;
      local_93 = 0x14;
      local_c0 = 0;
      (**(code **)(*ppuVar63 + 0x10))(auStack_138,ppuVar63,&local_e8);
      pvVar24 = local_f8;
      if (((*(long **)(param_1 + 0x60) == (long *)0x0) ||
          (**(long **)(param_1 + 0x60) != *(long *)(param_1 + 0x68))) ||
         ((lVar19 = *(long *)(param_1 + 0x58), lVar19 == 0 || (*(long *)(lVar19 + 8) == 0)))) {
        uVar48 = 0;
        *(undefined8 *)(param_1 + 0x78) = 0;
        *(undefined8 *)(param_1 + 0x80) = 0;
      }
      else {
        *(long *)(param_1 + 0x78) = lVar19;
        puVar33 = *(undefined8 **)(lVar19 + 8);
        *(undefined8 **)(param_1 + 0x80) = puVar33;
        uVar48 = *puVar33;
      }
      *(undefined8 *)(param_1 + 0x88) = uVar48;
      *(undefined1 *)(param_1 + 8) = 1;
      if ((local_108 & 1) != 0) {
        nu::VirtualFreeHook(local_f8);
        FUN_710392eb40((ulong)pvVar24);
      }
      uVar18 = 1;
      puVar33 = local_80;
    }
    local_80 = puVar33;
    puVar23 = local_78;
    if (puVar33 != (undefined8 *)0x0) {
      while (puVar23 != puVar33) {
        puVar23 = (undefined8 *)((long)puVar23 + 0xffffffffffffffe0);
        (**(code **)*puVar23)(puVar23);
      }
      local_78 = puVar33;
      if (local_80 != (undefined8 *)0x0) {
        FUN_710392eb40((ulong)local_80);
      }
    }
  }
  else {
    plVar53 = plVar40 + 1;
    do {
      cVar13 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar53,0x10);
      if (bVar15) {
        *plVar53 = *plVar53 + 1;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
    lVar31 = *(long *)(lVar19 + 0x108);
    plVar53 = *(long **)(lVar19 + 0x110);
    lVar19 = *(long *)(lVar19 + 0x118);
    plVar56 = plVar40 + 1;
    do {
      lVar32 = *plVar56;
      cVar13 = '\x01';
      bVar15 = (bool)ExclusiveMonitorPass(plVar56,0x10);
      if (bVar15) {
        *plVar56 = lVar32 + -1;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
    if (lVar32 == 0) {
      (**(code **)(*plVar40 + 0x10))(plVar40);
      std::__shared_weak_count::__release_weak();
      goto joined_r0x0071035b9e38;
    }
    if (plVar53 != (long *)0x0) goto LAB_71035b9e5c;
LAB_71035ba2f8:
    uVar18 = 0;
  }
  if (plVar20 == (long *)0x0) {
    return uVar18;
  }
  plVar64 = plVar20 + 1;
  do {
    lVar19 = *plVar64;
    cVar13 = '\x01';
    bVar15 = (bool)ExclusiveMonitorPass(plVar64,0x10);
    if (bVar15) {
      *plVar64 = lVar19 + -1;
      cVar13 = ExclusiveMonitorsStatus();
    }
  } while (cVar13 != '\0');
  if (lVar19 == 0) {
    (**(code **)(*plVar20 + 0x10))(plVar20);
    std::__shared_weak_count::__release_weak();
  }
LAB_71035bb804:
  do {
    plVar64 = plVar20 + 1;
    lVar19 = *plVar64;
    cVar13 = '\x01';
    bVar15 = (bool)ExclusiveMonitorPass(plVar64,0x10);
    if (bVar15) {
      *plVar64 = lVar19 + -1;
      cVar13 = ExclusiveMonitorsStatus();
    }
  } while (cVar13 != '\0');
  if (lVar19 == 0) {
    (**(code **)(*plVar20 + 0x10))(plVar20);
    std::__shared_weak_count::__release_weak();
  }
  return uVar18;
}

