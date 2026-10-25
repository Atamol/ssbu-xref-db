// addr:      7101c1fa30
// offset:    0x1c1fa30
// name:      FUN_7101c1fa30
// mangled:   
// signature: undefined __cdecl FUN_7101c1fa30(long param_1, int param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101c1fa30(long param_1,int param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined8 extraout_x1;
  char *pcVar8;
  undefined **ppuVar9;
  undefined4 uVar10;
  ulong uVar11;
  long ********pppppppplVar12;
  char cVar13;
  long lVar14;
  long *********ppppppppplVar15;
  size_t __n;
  long lVar16;
  undefined4 *puVar17;
  long ********local_5e8;
  undefined1 local_5e0 [64];
  undefined4 *local_5a0;
  undefined4 *local_598;
  undefined4 *local_590;
  undefined **local_588;
  ulong local_580;
  undefined **local_578;
  ulong local_570;
  long ********local_568;
  int local_560;
  undefined4 uStack_55c;
  undefined5 uStack_558;
  undefined8 local_514;
  undefined2 local_50c;
  undefined1 local_10c;
  undefined8 local_108;
  undefined8 local_100;
  undefined2 local_f8;
  undefined2 local_c8;
  undefined1 local_c6;
  undefined2 local_c4;
  undefined8 local_c2;
  undefined8 local_ba;
  undefined2 local_b2;
  undefined1 local_b0;
  undefined8 local_ac;
  undefined8 local_a4;
  undefined8 local_9c;
  undefined4 local_94;
  undefined **local_90;
  ulong local_88;
  undefined **local_80;
  ulong local_78;
  undefined4 local_6c [3];
  
  FUN_7103776390(&local_80,(undefined8 *)(**(long **)(param_1 + 0x170) + 8),param_3,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_7103776640(&local_90,(long)&local_80,(byte ****)"set_parts_title_00",param_3,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_7101c20d40(param_1,param_2);
  FUN_7101c20fa0(param_1,extraout_x1,param_3,param_4,param_5,param_6,param_7,param_8);
  if (*(char *)(param_1 + 0x20c) == '\0') {
    FUN_7101c21290(param_1,0,param_3,param_4,param_5,param_6,param_7,param_8);
    goto LAB_7101c20c64;
  }
  local_514 = 0;
  local_50c = 0;
  local_10c = 0;
  uStack_558 = 0;
  local_c4 = 0x3c;
  local_568 = (long ********)0xffffffffffffffff;
  local_560 = 0;
  uStack_55c = 0;
  local_108 = 0xffffffffffffffff;
  local_100 = 0;
  local_f8 = 0;
  local_c8 = 0;
  local_c6 = 0;
  local_c2 = 0x200000503;
  local_ba = 0x10300010100000a;
  local_b2 = 0x100;
  local_b0 = 2;
  local_9c = 0xffffffffffffffff;
  local_a4 = 0xffffffffffffffff;
  local_ac = 0xffffffffffffffff;
  local_94 = 0xffffffff;
  if (DAT_710532f730 != 0) {
    lVar16 = *(long *)(DAT_710532f730 + 8);
    lVar14 = *(long *)(lVar16 + 0x178);
    uVar3 = FUN_71032b23e0(*(long *)(lVar14 + 8),0xd56784f97);
    uVar4 = FUN_71032b1e40(lVar14,uVar3);
    if (-1 < (int)uVar4) {
      uVar3 = FUN_71032b1e40(*(long *)(lVar16 + 0x178),uVar3);
      lVar14 = (uVar3 >> 5 & 0x7ffffff) * 4;
      *(uint *)((long)&local_a4 + lVar14 + 4) =
           *(uint *)((long)&local_a4 + lVar14 + 4) &
           (1 << (ulong)((uint)uVar3 & 0x1f) ^ 0xffffffffU);
    }
  }
  ppuVar9 = (undefined **)&local_568;
  uVar3 = FUN_7101c1d0b0(param_1,param_2,ppuVar9);
  if ((uVar3 & 1) == 0) goto LAB_7101c20c64;
  FUN_7101c21290(param_1,1,(long ****)ppuVar9,param_4,param_5,param_6,param_7,param_8);
  if (local_560 == 2) {
    pcVar8 = "det_etc_on";
  }
  else {
    pcVar8 = "det_etc_off";
  }
  FUN_7103778300(0x3f800000,local_78,(long)pcVar8);
  if (*(char *)(param_1 + 0x719) != '\0') {
    if ((char)local_c8 == '\x02') {
      pcVar8 = "rule_icon_tourn";
LAB_7101c1fc28:
      FUN_7103778300(0x3f800000,local_78,(long)pcVar8);
      cVar13 = '\x01';
    }
    else {
      if ((char)local_c8 == '\x01') {
        pcVar8 = "rule_icon_compe";
        goto LAB_7101c1fc28;
      }
      cVar13 = '\0';
    }
    if (cVar13 != *(char *)(param_1 + 0x219)) {
      if (cVar13 == '\0') {
        pcVar8 = "rule_icon_out";
      }
      else {
        pcVar8 = "rule_icon_in";
      }
      FUN_7103778300(0x3f800000,local_78,(long)pcVar8);
      *(char *)(param_1 + 0x219) = cVar13;
    }
  }
  FUN_7103776910(&local_578,(long)&local_90,(long ****)"set_rep_etc_00",ppuVar9,param_4,param_5,
                 param_6,param_7,param_8);
  if (local_560 == 2) {
    lVar14 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x198);
    uVar3 = 0x1520c862b7;
LAB_7101c1fccc:
    uVar3 = FUN_71032821b0(lVar14,uVar3);
    plVar5 = FUN_710323f760(*(long **)(param_1 + 0x160),uVar3,(long ****)ppuVar9,param_4,param_5,
                            param_6,param_7,param_8);
    FUN_7103778b80(local_570,(long)plVar5,(long *********)ppuVar9,param_4,param_5,param_6,param_7,
                   param_8);
    pcVar8 = "icn_etc_on";
  }
  else {
    if (local_560 == 1) {
      lVar14 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x198);
      uVar3 = 0x13b479d9f1;
      goto LAB_7101c1fccc;
    }
    pcVar8 = "icn_etc_off";
  }
  FUN_7103778300(0x3f800000,local_88,(long)pcVar8);
  cVar13 = local_c8._1_1_;
  FUN_7103776910(&local_588,(long)&local_90,(long ****)"set_rep_det_title_00",ppuVar9,param_4,
                 param_5,param_6,param_7,param_8);
  local_598 = (undefined4 *)0x0;
  local_590 = (undefined4 *)0x0;
  local_5a0 = (undefined4 *)0x0;
  if (((DAT_71053144d8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_71053144d8), iVar2 != 0)) {
    FUN_7101764000();
    ppuVar9 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  iVar2 = DAT_71053050f0;
  if (cVar13 == '\x02') {
    FUN_7103778300(0x3f800000,local_88,0x71043cf3e5);
    uVar3 = FUN_71032821b0(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x198),0xf83b14356);
    plVar5 = FUN_710323f760(*(long **)(param_1 + 0x160),uVar3,(long ****)ppuVar9,param_4,param_5,
                            param_6,param_7,param_8);
    FUN_7103778b80(local_580,(long)plVar5,(long *********)ppuVar9,param_4,param_5,param_6,param_7,
                   param_8);
    puVar6 = local_5a0;
    uVar3 = local_580;
    if ((char)local_c8 != '\x01') {
      if (local_598 < local_590) {
        *local_598 = 3;
        local_598 = local_598 + 1;
      }
      else {
        ppppppppplVar15 = (long *********)((long)local_598 - (long)local_5a0);
        uVar4 = ((long)ppppppppplVar15 >> 2) + 1;
        if (uVar4 >> 0x3e != 0) goto LAB_7101c20d2c;
        if ((ulong)((long)local_590 - (long)local_5a0 >> 2) < 0x1fffffffffffffff) {
          uVar11 = (long)local_590 - (long)local_5a0 >> 1;
          if (uVar4 <= uVar11) {
            uVar4 = uVar11;
          }
          if (uVar4 != 0) {
            if (uVar4 >> 0x3e != 0) goto LAB_7101c20ab4;
            goto LAB_7101c20244;
          }
LAB_7101c202a4:
          puVar7 = (undefined4 *)0x0;
        }
        else {
          uVar4 = 0x3fffffffffffffff;
LAB_7101c20244:
          pppppppplVar12 = (long ********)(uVar4 * 4);
          if (pppppppplVar12 == (long ********)0x0) {
            pppppppplVar12 = (long ********)0x1;
          }
          puVar7 = (undefined4 *)
                   FUN_710392e290(0x10,pppppppplVar12,(long ****)ppuVar9,param_4,param_5,param_6,
                                  param_7,param_8);
          if (puVar7 == (undefined4 *)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_6c[0] = 0;
              ppuVar9 = (undefined **)&local_5e8;
              local_5e8 = pppppppplVar12;
              uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_6c);
              if (((uVar11 & 1) != 0) &&
                 (puVar7 = (undefined4 *)
                           FUN_710392e290(0x10,pppppppplVar12,(long ****)ppuVar9,param_4,param_5,
                                          param_6,param_7,param_8), puVar7 != (undefined4 *)0x0))
              goto LAB_7101c202a8;
            }
            goto LAB_7101c202a4;
          }
        }
LAB_7101c202a8:
        puVar17 = puVar7 + ((long)ppppppppplVar15 >> 2);
        *puVar17 = 3;
        if (0 < (long)ppppppppplVar15) {
          memcpy(puVar7,puVar6,(size_t)ppppppppplVar15);
          ppuVar9 = (undefined **)ppppppppplVar15;
        }
        local_5a0 = puVar7;
        local_598 = puVar17 + 1;
        local_590 = puVar7 + uVar4;
        if (puVar6 != (undefined4 *)0x0) {
          FUN_710392eb40((ulong)puVar6);
        }
      }
      if (local_598 < local_590) {
        *local_598 = 2;
        goto LAB_7101c202fc;
      }
      ppppppppplVar15 = (long *********)((long)local_598 - (long)local_5a0);
LAB_7101c20314:
      puVar6 = local_5a0;
      uVar4 = ((long)ppppppppplVar15 >> 2) + 1;
      if (uVar4 >> 0x3e != 0) goto LAB_7101c20d2c;
      if ((ulong)((long)local_590 - (long)local_5a0 >> 2) < 0x1fffffffffffffff) {
        uVar11 = (long)local_590 - (long)local_5a0 >> 1;
        if (uVar4 <= uVar11) {
          uVar4 = uVar11;
        }
        if (uVar4 != 0) {
          if (uVar4 >> 0x3e != 0) goto LAB_7101c20ab4;
          goto LAB_7101c20358;
        }
LAB_7101c203b8:
        puVar7 = (undefined4 *)0x0;
      }
      else {
        uVar4 = 0x3fffffffffffffff;
LAB_7101c20358:
        pppppppplVar12 = (long ********)(uVar4 * 4);
        if (pppppppplVar12 == (long ********)0x0) {
          pppppppplVar12 = (long ********)0x1;
        }
        puVar7 = (undefined4 *)
                 FUN_710392e290(0x10,pppppppplVar12,(long ****)ppuVar9,param_4,param_5,param_6,
                                param_7,param_8);
        if (puVar7 == (undefined4 *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_6c[0] = 0;
            ppuVar9 = (undefined **)&local_5e8;
            local_5e8 = pppppppplVar12;
            uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_6c);
            if (((uVar11 & 1) != 0) &&
               (puVar7 = (undefined4 *)
                         FUN_710392e290(0x10,pppppppplVar12,(long ****)ppuVar9,param_4,param_5,
                                        param_6,param_7,param_8), puVar7 != (undefined4 *)0x0))
            goto LAB_7101c203bc;
          }
          goto LAB_7101c203b8;
        }
      }
LAB_7101c203bc:
      puVar17 = puVar7 + ((long)ppppppppplVar15 >> 2);
      *puVar17 = 2;
      if (0 < (long)ppppppppplVar15) {
        memcpy(puVar7,puVar6,(size_t)ppppppppplVar15);
        ppuVar9 = (undefined **)ppppppppplVar15;
      }
      local_5a0 = puVar7;
      local_598 = puVar17 + 1;
      local_590 = puVar7 + uVar4;
      if (puVar6 != (undefined4 *)0x0) {
        FUN_710392eb40((ulong)puVar6);
      }
      goto LAB_7101c203fc;
    }
    if (local_598 < local_590) {
      *local_598 = 6;
      local_598 = local_598 + 1;
    }
    else {
      ppppppppplVar15 = (long *********)((long)local_598 - (long)local_5a0);
      uVar4 = ((long)ppppppppplVar15 >> 2) + 1;
      if (uVar4 >> 0x3e != 0) goto LAB_7101c20d2c;
      if ((ulong)((long)local_590 - (long)local_5a0 >> 2) < 0x1fffffffffffffff) {
        uVar11 = (long)local_590 - (long)local_5a0 >> 1;
        if (uVar4 <= uVar11) {
          uVar4 = uVar11;
        }
        if (uVar4 != 0) {
          if (uVar4 >> 0x3e != 0) goto LAB_7101c20ab4;
          goto LAB_7101c20130;
        }
LAB_7101c20190:
        puVar7 = (undefined4 *)0x0;
      }
      else {
        uVar4 = 0x3fffffffffffffff;
LAB_7101c20130:
        pppppppplVar12 = (long ********)(uVar4 * 4);
        if (pppppppplVar12 == (long ********)0x0) {
          pppppppplVar12 = (long ********)0x1;
        }
        puVar7 = (undefined4 *)
                 FUN_710392e290(0x10,pppppppplVar12,(long ****)ppuVar9,param_4,param_5,param_6,
                                param_7,param_8);
        if (puVar7 == (undefined4 *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_6c[0] = 0;
            ppuVar9 = (undefined **)&local_5e8;
            local_5e8 = pppppppplVar12;
            uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_6c);
            if (((uVar11 & 1) != 0) &&
               (puVar7 = (undefined4 *)
                         FUN_710392e290(0x10,pppppppplVar12,(long ****)ppuVar9,param_4,param_5,
                                        param_6,param_7,param_8), puVar7 != (undefined4 *)0x0))
            goto LAB_7101c20194;
          }
          goto LAB_7101c20190;
        }
      }
LAB_7101c20194:
      puVar17 = puVar7 + ((long)ppppppppplVar15 >> 2);
      *puVar17 = 6;
      if (0 < (long)ppppppppplVar15) {
        memcpy(puVar7,puVar6,(size_t)ppppppppplVar15);
        ppuVar9 = (undefined **)ppppppppplVar15;
      }
      local_5a0 = puVar7;
      local_598 = puVar17 + 1;
      local_590 = puVar7 + uVar4;
      if (puVar6 != (undefined4 *)0x0) {
        FUN_710392eb40((ulong)puVar6);
      }
    }
    puVar6 = local_5a0;
    if (local_590 <= local_598) {
      ppppppppplVar15 = (long *********)((long)local_598 - (long)local_5a0);
      uVar4 = ((long)ppppppppplVar15 >> 2) + 1;
      if (uVar4 >> 0x3e != 0) goto LAB_7101c20d2c;
      if ((ulong)((long)local_590 - (long)local_5a0 >> 2) < 0x1fffffffffffffff) {
        uVar11 = (long)local_590 - (long)local_5a0 >> 1;
        if (uVar4 <= uVar11) {
          uVar4 = uVar11;
        }
        if (uVar4 != 0) {
          if (uVar4 >> 0x3e != 0) goto LAB_7101c20ab4;
          goto LAB_7101c20528;
        }
LAB_7101c20588:
        puVar7 = (undefined4 *)0x0;
      }
      else {
        uVar4 = 0x3fffffffffffffff;
LAB_7101c20528:
        pppppppplVar12 = (long ********)(uVar4 * 4);
        if (pppppppplVar12 == (long ********)0x0) {
          pppppppplVar12 = (long ********)0x1;
        }
        puVar7 = (undefined4 *)
                 FUN_710392e290(0x10,pppppppplVar12,(long ****)ppuVar9,param_4,param_5,param_6,
                                param_7,param_8);
        if (puVar7 == (undefined4 *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_6c[0] = 0;
            ppuVar9 = (undefined **)&local_5e8;
            local_5e8 = pppppppplVar12;
            uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_6c);
            if (((uVar11 & 1) != 0) &&
               (puVar7 = (undefined4 *)
                         FUN_710392e290(0x10,pppppppplVar12,(long ****)ppuVar9,param_4,param_5,
                                        param_6,param_7,param_8), puVar7 != (undefined4 *)0x0))
            goto LAB_7101c2058c;
          }
          goto LAB_7101c20588;
        }
      }
LAB_7101c2058c:
      puVar17 = puVar7 + ((long)ppppppppplVar15 >> 2);
      uVar10 = 3;
      goto LAB_7101c20594;
    }
    *local_598 = 3;
LAB_7101c201e8:
    uVar3 = local_580;
    local_598 = local_598 + 1;
LAB_7101c205cc:
    puVar6 = local_5a0;
    if (local_598 < local_590) {
      *local_598 = 2;
      local_598 = local_598 + 1;
    }
    else {
      ppppppppplVar15 = (long *********)((long)local_598 - (long)local_5a0);
      uVar4 = ((long)ppppppppplVar15 >> 2) + 1;
      if (uVar4 >> 0x3e != 0) goto LAB_7101c20d2c;
      if ((ulong)((long)local_590 - (long)local_5a0 >> 2) < 0x1fffffffffffffff) {
        uVar11 = (long)local_590 - (long)local_5a0 >> 1;
        if (uVar4 <= uVar11) {
          uVar4 = uVar11;
        }
        if (uVar4 != 0) {
          if (uVar4 >> 0x3e != 0) goto LAB_7101c20ab4;
          goto LAB_7101c2063c;
        }
LAB_7101c2069c:
        puVar7 = (undefined4 *)0x0;
      }
      else {
        uVar4 = 0x3fffffffffffffff;
LAB_7101c2063c:
        pppppppplVar12 = (long ********)(uVar4 * 4);
        if (pppppppplVar12 == (long ********)0x0) {
          pppppppplVar12 = (long ********)0x1;
        }
        puVar7 = (undefined4 *)
                 FUN_710392e290(0x10,pppppppplVar12,(long ****)ppuVar9,param_4,param_5,param_6,
                                param_7,param_8);
        if (puVar7 == (undefined4 *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_6c[0] = 0;
            ppuVar9 = (undefined **)&local_5e8;
            local_5e8 = pppppppplVar12;
            uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_6c);
            if (((uVar11 & 1) != 0) &&
               (puVar7 = (undefined4 *)
                         FUN_710392e290(0x10,pppppppplVar12,(long ****)ppuVar9,param_4,param_5,
                                        param_6,param_7,param_8), puVar7 != (undefined4 *)0x0))
            goto LAB_7101c206a0;
          }
          goto LAB_7101c2069c;
        }
      }
LAB_7101c206a0:
      puVar17 = puVar7 + ((long)ppppppppplVar15 >> 2);
      *puVar17 = 2;
      if (0 < (long)ppppppppplVar15) {
        memcpy(puVar7,puVar6,(size_t)ppppppppplVar15);
        ppuVar9 = (undefined **)ppppppppplVar15;
      }
      local_5a0 = puVar7;
      local_598 = puVar17 + 1;
      local_590 = puVar7 + uVar4;
      if (puVar6 != (undefined4 *)0x0) {
        FUN_710392eb40((ulong)puVar6);
      }
    }
    puVar6 = local_5a0;
    if (local_598 < local_590) {
      *local_598 = 1;
      local_598 = local_598 + 1;
    }
    else {
      ppppppppplVar15 = (long *********)((long)local_598 - (long)local_5a0);
      uVar4 = ((long)ppppppppplVar15 >> 2) + 1;
      if (uVar4 >> 0x3e != 0) goto LAB_7101c20d2c;
      if ((ulong)((long)local_590 - (long)local_5a0 >> 2) < 0x1fffffffffffffff) {
        uVar11 = (long)local_590 - (long)local_5a0 >> 1;
        if (uVar4 <= uVar11) {
          uVar4 = uVar11;
        }
        if (uVar4 != 0) {
          if (uVar4 >> 0x3e != 0) goto LAB_7101c20ab4;
          goto LAB_7101c20750;
        }
LAB_7101c207b0:
        puVar7 = (undefined4 *)0x0;
      }
      else {
        uVar4 = 0x3fffffffffffffff;
LAB_7101c20750:
        pppppppplVar12 = (long ********)(uVar4 * 4);
        if (pppppppplVar12 == (long ********)0x0) {
          pppppppplVar12 = (long ********)0x1;
        }
        puVar7 = (undefined4 *)
                 FUN_710392e290(0x10,pppppppplVar12,(long ****)ppuVar9,param_4,param_5,param_6,
                                param_7,param_8);
        if (puVar7 == (undefined4 *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_6c[0] = 0;
            ppuVar9 = (undefined **)&local_5e8;
            local_5e8 = pppppppplVar12;
            uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_6c);
            if (((uVar11 & 1) != 0) &&
               (puVar7 = (undefined4 *)
                         FUN_710392e290(0x10,pppppppplVar12,(long ****)ppuVar9,param_4,param_5,
                                        param_6,param_7,param_8), puVar7 != (undefined4 *)0x0))
            goto LAB_7101c207b4;
          }
          goto LAB_7101c207b0;
        }
      }
LAB_7101c207b4:
      puVar17 = puVar7 + ((long)ppppppppplVar15 >> 2);
      *puVar17 = 1;
      if (0 < (long)ppppppppplVar15) {
        memcpy(puVar7,puVar6,(size_t)ppppppppplVar15);
        ppuVar9 = (undefined **)ppppppppplVar15;
      }
      local_5a0 = puVar7;
      local_598 = puVar17 + 1;
      local_590 = puVar7 + uVar4;
      if (puVar6 != (undefined4 *)0x0) {
        FUN_710392eb40((ulong)puVar6);
      }
    }
    puVar6 = local_5a0;
    if (iVar2 == 0x7010200) goto LAB_7101c20b5c;
    if (local_598 < local_590) {
      *local_598 = 5;
      goto LAB_7101c20a60;
    }
    __n = (long)local_598 - (long)local_5a0;
    uVar4 = ((long)__n >> 2) + 1;
    if (uVar4 >> 0x3e != 0) goto LAB_7101c20d2c;
    if ((ulong)((long)local_590 - (long)local_5a0 >> 2) < 0x1fffffffffffffff) {
      uVar11 = (long)local_590 - (long)local_5a0 >> 1;
      if (uVar4 <= uVar11) {
        uVar4 = uVar11;
      }
      if (uVar4 != 0) {
        if (uVar4 >> 0x3e != 0) goto LAB_7101c20ab4;
        goto LAB_7101c20868;
      }
LAB_7101c208c8:
      puVar7 = (undefined4 *)0x0;
    }
    else {
      uVar4 = 0x3fffffffffffffff;
LAB_7101c20868:
      pppppppplVar12 = (long ********)(uVar4 * 4);
      if (pppppppplVar12 == (long ********)0x0) {
        pppppppplVar12 = (long ********)0x1;
      }
      puVar7 = (undefined4 *)
               FUN_710392e290(0x10,pppppppplVar12,(long ****)ppuVar9,param_4,param_5,param_6,param_7
                              ,param_8);
      if (puVar7 == (undefined4 *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_6c[0] = 0;
          ppppppppplVar15 = &local_5e8;
          local_5e8 = pppppppplVar12;
          uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_6c);
          if (((uVar11 & 1) != 0) &&
             (puVar7 = (undefined4 *)
                       FUN_710392e290(0x10,pppppppplVar12,(long ****)ppppppppplVar15,param_4,param_5
                                      ,param_6,param_7,param_8), puVar7 != (undefined4 *)0x0))
          goto LAB_7101c208cc;
        }
        goto LAB_7101c208c8;
      }
    }
LAB_7101c208cc:
    puVar17 = puVar7 + ((long)__n >> 2);
    uVar10 = 5;
LAB_7101c20b28:
    *puVar17 = uVar10;
    if (0 < (long)__n) {
      memcpy(puVar7,puVar6,__n);
    }
    local_5a0 = puVar7;
    local_598 = puVar17 + 1;
    local_590 = puVar7 + uVar4;
    if (puVar6 != (undefined4 *)0x0) {
      FUN_710392eb40((ulong)puVar6);
    }
  }
  else if (cVar13 == '\x01') {
    FUN_7103778300(0x3f800000,local_88,0x7104291c1b);
    uVar3 = FUN_71032821b0(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x198),0x12bf2b2922);
    plVar5 = FUN_710323f760(*(long **)(param_1 + 0x160),uVar3,(long ****)ppuVar9,param_4,param_5,
                            param_6,param_7,param_8);
    FUN_7103778b80(local_580,(long)plVar5,(long *********)ppuVar9,param_4,param_5,param_6,param_7,
                   param_8);
    puVar6 = local_5a0;
    uVar3 = local_580;
    if ((char)local_c8 == '\x01') {
      if (local_598 < local_590) {
        *local_598 = 6;
        goto LAB_7101c201e8;
      }
      ppppppppplVar15 = (long *********)((long)local_598 - (long)local_5a0);
      uVar4 = ((long)ppppppppplVar15 >> 2) + 1;
      if (uVar4 >> 0x3e != 0) goto LAB_7101c20d2c;
      if ((ulong)((long)local_590 - (long)local_5a0 >> 2) < 0x1fffffffffffffff) {
        uVar11 = (long)local_590 - (long)local_5a0 >> 1;
        if (uVar4 <= uVar11) {
          uVar4 = uVar11;
        }
        if (uVar4 != 0) {
          if (uVar4 >> 0x3e != 0) goto LAB_7101c20ab4;
          goto LAB_7101c200bc;
        }
LAB_7101c2011c:
        puVar7 = (undefined4 *)0x0;
      }
      else {
        uVar4 = 0x3fffffffffffffff;
LAB_7101c200bc:
        pppppppplVar12 = (long ********)(uVar4 * 4);
        if (pppppppplVar12 == (long ********)0x0) {
          pppppppplVar12 = (long ********)0x1;
        }
        puVar7 = (undefined4 *)
                 FUN_710392e290(0x10,pppppppplVar12,(long ****)ppuVar9,param_4,param_5,param_6,
                                param_7,param_8);
        if (puVar7 == (undefined4 *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_6c[0] = 0;
            ppuVar9 = (undefined **)&local_5e8;
            local_5e8 = pppppppplVar12;
            uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_6c);
            if (((uVar11 & 1) != 0) &&
               (puVar7 = (undefined4 *)
                         FUN_710392e290(0x10,pppppppplVar12,(long ****)ppuVar9,param_4,param_5,
                                        param_6,param_7,param_8), puVar7 != (undefined4 *)0x0))
            goto LAB_7101c20120;
          }
          goto LAB_7101c2011c;
        }
      }
LAB_7101c20120:
      puVar17 = puVar7 + ((long)ppppppppplVar15 >> 2);
      uVar10 = 6;
LAB_7101c20594:
      *puVar17 = uVar10;
      if (0 < (long)ppppppppplVar15) {
        memcpy(puVar7,puVar6,(size_t)ppppppppplVar15);
        ppuVar9 = (undefined **)ppppppppplVar15;
      }
      local_5a0 = puVar7;
      local_598 = puVar17 + 1;
      local_590 = puVar7 + uVar4;
      if (puVar6 != (undefined4 *)0x0) {
        FUN_710392eb40((ulong)puVar6);
      }
      goto LAB_7101c205cc;
    }
    if (local_590 <= local_598) {
      ppppppppplVar15 = (long *********)((long)local_598 - (long)local_5a0);
      goto LAB_7101c20314;
    }
    *local_598 = 2;
LAB_7101c202fc:
    uVar3 = local_580;
    local_598 = local_598 + 1;
LAB_7101c203fc:
    puVar6 = local_5a0;
    if (local_598 < local_590) {
      *local_598 = 1;
      puVar7 = local_5a0;
      local_598 = local_598 + 1;
      goto joined_r0x007101c2051c;
    }
    ppppppppplVar15 = (long *********)((long)local_598 - (long)local_5a0);
    uVar4 = ((long)ppppppppplVar15 >> 2) + 1;
    if (uVar4 >> 0x3e != 0) goto LAB_7101c20d2c;
    if ((ulong)((long)local_590 - (long)local_5a0 >> 2) < 0x1fffffffffffffff) {
      uVar11 = (long)local_590 - (long)local_5a0 >> 1;
      if (uVar4 <= uVar11) {
        uVar4 = uVar11;
      }
      if (uVar4 != 0) {
        if (uVar4 >> 0x3e != 0) goto LAB_7101c20ab4;
        goto LAB_7101c2046c;
      }
LAB_7101c204cc:
      puVar7 = (undefined4 *)0x0;
    }
    else {
      uVar4 = 0x3fffffffffffffff;
LAB_7101c2046c:
      pppppppplVar12 = (long ********)(uVar4 * 4);
      if (pppppppplVar12 == (long ********)0x0) {
        pppppppplVar12 = (long ********)0x1;
      }
      puVar7 = (undefined4 *)
               FUN_710392e290(0x10,pppppppplVar12,(long ****)ppuVar9,param_4,param_5,param_6,param_7
                              ,param_8);
      if (puVar7 == (undefined4 *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_6c[0] = 0;
          ppuVar9 = (undefined **)&local_5e8;
          local_5e8 = pppppppplVar12;
          uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_6c);
          if (((uVar11 & 1) != 0) &&
             (puVar7 = (undefined4 *)
                       FUN_710392e290(0x10,pppppppplVar12,(long ****)ppuVar9,param_4,param_5,param_6
                                      ,param_7,param_8), puVar7 != (undefined4 *)0x0))
          goto LAB_7101c204d0;
        }
        goto LAB_7101c204cc;
      }
    }
LAB_7101c204d0:
    puVar17 = puVar7 + ((long)ppppppppplVar15 >> 2);
    *puVar17 = 1;
    if (0 < (long)ppppppppplVar15) {
      memcpy(puVar7,puVar6,(size_t)ppppppppplVar15);
      ppuVar9 = (undefined **)ppppppppplVar15;
    }
    local_598 = puVar17 + 1;
    local_590 = puVar7 + uVar4;
    if (puVar6 != (undefined4 *)0x0) {
      local_5a0 = puVar7;
      FUN_710392eb40((ulong)puVar6);
      puVar7 = local_5a0;
    }
joined_r0x007101c2051c:
    local_5a0 = puVar7;
    if (iVar2 != 0x7010200) {
      if (local_598 < local_590) {
        *local_598 = 5;
        local_598 = local_598 + 1;
      }
      else {
        ppppppppplVar15 = (long *********)((long)local_598 - (long)puVar7);
        uVar4 = ((long)ppppppppplVar15 >> 2) + 1;
        if (uVar4 >> 0x3e != 0) goto LAB_7101c20d2c;
        if ((ulong)((long)local_590 - (long)puVar7 >> 2) < 0x1fffffffffffffff) {
          uVar11 = (long)local_590 - (long)puVar7 >> 1;
          if (uVar4 <= uVar11) {
            uVar4 = uVar11;
          }
          if (uVar4 != 0) {
            if (uVar4 >> 0x3e != 0) goto LAB_7101c20ab4;
            goto LAB_7101c209a8;
          }
LAB_7101c20a08:
          puVar6 = (undefined4 *)0x0;
        }
        else {
          uVar4 = 0x3fffffffffffffff;
LAB_7101c209a8:
          pppppppplVar12 = (long ********)(uVar4 * 4);
          if (pppppppplVar12 == (long ********)0x0) {
            pppppppplVar12 = (long ********)0x1;
          }
          puVar6 = (undefined4 *)
                   FUN_710392e290(0x10,pppppppplVar12,(long ****)ppuVar9,param_4,param_5,param_6,
                                  param_7,param_8);
          if (puVar6 == (undefined4 *)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_6c[0] = 0;
              ppuVar9 = (undefined **)&local_5e8;
              local_5e8 = pppppppplVar12;
              uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_6c);
              if (((uVar11 & 1) != 0) &&
                 (puVar6 = (undefined4 *)
                           FUN_710392e290(0x10,pppppppplVar12,(long ****)ppuVar9,param_4,param_5,
                                          param_6,param_7,param_8), puVar6 != (undefined4 *)0x0))
              goto LAB_7101c20a0c;
            }
            goto LAB_7101c20a08;
          }
        }
LAB_7101c20a0c:
        puVar17 = puVar6 + ((long)ppppppppplVar15 >> 2);
        *puVar17 = 5;
        if (0 < (long)ppppppppplVar15) {
          memcpy(puVar6,puVar7,(size_t)ppppppppplVar15);
          ppuVar9 = (undefined **)ppppppppplVar15;
        }
        local_5a0 = puVar6;
        local_598 = puVar17 + 1;
        local_590 = puVar6 + uVar4;
        if (puVar7 != (undefined4 *)0x0) {
          FUN_710392eb40((ulong)puVar7);
        }
      }
      puVar6 = local_5a0;
      if (local_590 <= local_598) {
        __n = (long)local_598 - (long)local_5a0;
        uVar4 = ((long)__n >> 2) + 1;
        if (uVar4 >> 0x3e != 0) {
LAB_7101c20d2c:
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        if ((ulong)((long)local_590 - (long)local_5a0 >> 2) < 0x1fffffffffffffff) {
          uVar11 = (long)local_590 - (long)local_5a0 >> 1;
          if (uVar4 <= uVar11) {
            uVar4 = uVar11;
          }
          if (uVar4 != 0) {
            if (uVar4 >> 0x3e != 0) {
LAB_7101c20ab4:
                    /* WARNING: Subroutine does not return */
              abort();
            }
            goto LAB_7101c20abc;
          }
LAB_7101c20b1c:
          puVar7 = (undefined4 *)0x0;
        }
        else {
          uVar4 = 0x3fffffffffffffff;
LAB_7101c20abc:
          pppppppplVar12 = (long ********)(uVar4 * 4);
          if (pppppppplVar12 == (long ********)0x0) {
            pppppppplVar12 = (long ********)0x1;
          }
          puVar7 = (undefined4 *)
                   FUN_710392e290(0x10,pppppppplVar12,(long ****)ppuVar9,param_4,param_5,param_6,
                                  param_7,param_8);
          if (puVar7 == (undefined4 *)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_6c[0] = 0;
              ppppppppplVar15 = &local_5e8;
              local_5e8 = pppppppplVar12;
              uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_6c);
              if (((uVar11 & 1) != 0) &&
                 (puVar7 = (undefined4 *)
                           FUN_710392e290(0x10,pppppppplVar12,(long ****)ppppppppplVar15,param_4,
                                          param_5,param_6,param_7,param_8),
                 puVar7 != (undefined4 *)0x0)) goto LAB_7101c20b20;
            }
            goto LAB_7101c20b1c;
          }
        }
LAB_7101c20b20:
        puVar17 = puVar7 + ((long)__n >> 2);
        uVar10 = 4;
        goto LAB_7101c20b28;
      }
      *local_598 = 4;
LAB_7101c20a60:
      local_598 = local_598 + 1;
    }
  }
  else {
    if (cVar13 == '\0') {
      FUN_7103778300(0x3f800000,local_88,0x7104433014);
      uVar3 = FUN_71032821b0(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x198),0x11a65e8b53);
      plVar5 = FUN_710323f760(*(long **)(param_1 + 0x160),uVar3,(long ****)ppuVar9,param_4,param_5,
                              param_6,param_7,param_8);
      FUN_7103778b80(local_580,(long)plVar5,(long *********)ppuVar9,param_4,param_5,param_6,param_7,
                     param_8);
      puVar6 = local_5a0;
      uVar3 = local_580;
      if (local_598 < local_590) {
        *local_598 = 1;
        puVar7 = local_5a0;
        local_598 = local_598 + 1;
      }
      else {
        ppppppppplVar15 = (long *********)((long)local_598 - (long)local_5a0);
        uVar4 = ((long)ppppppppplVar15 >> 2) + 1;
        if (uVar4 >> 0x3e != 0) goto LAB_7101c20d2c;
        if ((ulong)((long)local_590 - (long)local_5a0 >> 2) < 0x1fffffffffffffff) {
          uVar11 = (long)local_590 - (long)local_5a0 >> 1;
          if (uVar4 <= uVar11) {
            uVar4 = uVar11;
          }
          if (uVar4 != 0) {
            if (uVar4 >> 0x3e != 0) goto LAB_7101c20ab4;
            goto LAB_7101c20054;
          }
LAB_7101c208dc:
          puVar7 = (undefined4 *)0x0;
        }
        else {
          uVar4 = 0x3fffffffffffffff;
LAB_7101c20054:
          pppppppplVar12 = (long ********)(uVar4 * 4);
          if (pppppppplVar12 == (long ********)0x0) {
            pppppppplVar12 = (long ********)0x1;
          }
          puVar7 = (undefined4 *)
                   FUN_710392e290(0x10,pppppppplVar12,(long ****)ppuVar9,param_4,param_5,param_6,
                                  param_7,param_8);
          if (puVar7 == (undefined4 *)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_6c[0] = 0;
              ppuVar9 = (undefined **)&local_5e8;
              local_5e8 = pppppppplVar12;
              uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_6c);
              if (((uVar11 & 1) != 0) &&
                 (puVar7 = (undefined4 *)
                           FUN_710392e290(0x10,pppppppplVar12,(long ****)ppuVar9,param_4,param_5,
                                          param_6,param_7,param_8), puVar7 != (undefined4 *)0x0))
              goto LAB_7101c208e0;
            }
            goto LAB_7101c208dc;
          }
        }
LAB_7101c208e0:
        puVar17 = puVar7 + ((long)ppppppppplVar15 >> 2);
        *puVar17 = 1;
        if (0 < (long)ppppppppplVar15) {
          memcpy(puVar7,puVar6,(size_t)ppppppppplVar15);
          ppuVar9 = (undefined **)ppppppppplVar15;
        }
        local_598 = puVar17 + 1;
        local_590 = puVar7 + uVar4;
        if (puVar6 != (undefined4 *)0x0) {
          local_5a0 = puVar7;
          FUN_710392eb40((ulong)puVar6);
          puVar7 = local_5a0;
        }
      }
      goto joined_r0x007101c2051c;
    }
    FUN_71037790a0(local_580,1,(long *********)ppuVar9,param_4,param_5,param_6,param_7,param_8);
    uVar3 = local_580;
  }
LAB_7101c20b5c:
  iVar2 = (int)((ulong)((long)local_598 - (long)local_5a0) >> 2);
  if (0 < iVar2) {
    local_5e0[0] = 0;
    local_5e8 = (long ********)0x0;
    if ((2 < iVar2) && (5 < iVar2)) {
      iVar2 = 5;
    }
    FUN_710062dc20((uint *)&local_5e8,"det_win_%d");
    FUN_7103778300(0x3f800000,local_78,(long)local_5e0);
    uVar4 = 0;
    do {
      if ((ulong)((long)local_598 - (long)local_5a0 >> 2) <= uVar4) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      FUN_7101c213a0(param_1,param_2,(uint)uVar4,(ulong)(uint)local_5a0[uVar4],param_5,param_6,
                     param_7,param_8);
      uVar4 = uVar4 + 1;
    } while ((long)uVar4 < (long)iVar2);
    if ((uint)uVar4 < 3) {
      do {
        FUN_7101c213a0(param_1,param_2,(uint)uVar4,0,param_5,param_6,param_7,param_8);
        uVar1 = (uint)uVar4 + 1;
        uVar4 = (ulong)uVar1;
      } while (uVar1 != 3);
    }
  }
  if (local_5a0 != (undefined4 *)0x0) {
    local_598 = local_5a0;
    FUN_710392eb40((ulong)local_5a0);
  }
  local_588 = &PTR_FUN_710523d9a8;
  local_580 = 0;
  if (uVar3 != 0) {
    FUN_710392eb40(uVar3);
  }
  uVar3 = local_570;
  local_578 = &PTR_FUN_710523d9a8;
  local_570 = 0;
  if (uVar3 != 0) {
    FUN_710392eb40(uVar3);
  }
LAB_7101c20c64:
  uVar3 = local_88;
  local_90 = &PTR_FUN_710523d988;
  local_88 = 0;
  if (uVar3 != 0) {
    uVar4 = *(ulong *)(uVar3 + 0x18);
    *(undefined ***)(uVar3 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar3 + 0x18) = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_710392eb40(uVar3);
  }
  uVar3 = local_78;
  local_80 = &PTR_FUN_710523d988;
  local_78 = 0;
  if (uVar3 != 0) {
    uVar4 = *(ulong *)(uVar3 + 0x18);
    *(undefined ***)(uVar3 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar3 + 0x18) = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_710392eb40(uVar3);
  }
  return;
}

