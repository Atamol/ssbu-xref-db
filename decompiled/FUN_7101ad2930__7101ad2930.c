// addr:      7101ad2930
// offset:    0x1ad2930
// name:      FUN_7101ad2930
// mangled:   
// signature: undefined __cdecl FUN_7101ad2930(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101ad2930(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong *puVar1;
  long *plVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 extraout_x1;
  long ****pppplVar9;
  uint uVar10;
  int *piVar11;
  undefined8 *puVar12;
  uint *puVar13;
  byte *pbVar14;
  uint uVar15;
  uint uVar16;
  char cVar17;
  long ***local_2e8;
  long *local_2e0;
  undefined4 local_2d8 [4];
  long local_2c8;
  int local_2c0;
  undefined4 local_298 [2];
  undefined **local_290;
  long local_288;
  int local_280;
  undefined4 uStack_27c;
  undefined1 local_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined2 local_240;
  undefined1 auStack_230 [448];
  undefined4 local_64;
  
  if (*(int *)(param_1 + 0xec) != 0) {
    if (*(int *)(param_1 + 500) != 0) {
      lVar4 = *(long *)(*(long *)(param_1 + 0x108) + 8);
      if ((lVar4 != 0) &&
         (plVar5 = (long *)FUN_71037964b0(lVar4,param_1 + 0x1f8), plVar5 != (long *)0x0)) {
        uVar6 = (**(code **)(*plVar5 + 0x138))();
        if ((uVar6 & 1) == 0) {
          return;
        }
        if (*(int *)(param_1 + 500) == 0) goto LAB_7101ad29cc;
      }
      FUN_7103778630(0,*(long *)(param_1 + 0x108),0x71044229ef);
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x108),0x71042f856f);
      *(undefined1 *)(param_1 + 0x1f8) = 0;
      *(undefined8 *)(param_1 + 0x1f0) = 0;
    }
LAB_7101ad29cc:
    if ((4 < *(byte *)(param_1 + 0x120)) || (*(byte *)(param_1 + 0x120) == 2)) {
      if (*(uint *)(param_1 + 0xe4) < 0x13) {
        *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0xe4) * 4 + 0x98) = 2;
        if ((*(char *)(param_1 + 0x120) != '\x05') || (*(char *)(param_1 + 0x253) == '\0')) {
          *(undefined1 *)(param_1 + 0x260) = 1;
          return;
        }
        uVar16 = (uint)*(byte *)(*(long *)**(undefined8 **)(*DAT_7105314510 + 0x1c8) + 0x3f0);
        if ((uVar16 != 3) &&
           (uVar6 = FUN_710329d690(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x368),uVar16,0),
           (uint)uVar6 <= *(uint *)(*(long *)**(undefined8 **)(*DAT_7105314510 + 0x1c8) + 0x3ec))) {
          *(undefined1 *)(param_1 + 0x260) = 1;
          FUN_7103778630(0,*(long *)(param_1 + 0x108),0x71044229ef);
          FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x108),0x71042f856f);
          return;
        }
        *(undefined1 *)(param_1 + 0x260) = 0;
        return;
      }
      goto LAB_7101ad33b4;
    }
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x108),0x71042f856f);
    FUN_7103776640(&local_258,param_1 + 0x100,(byte ****)"set_parts_item",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    uVar6 = local_250;
    FUN_7103778300(0x3f800000,local_250,0x7104306de4);
    local_258 = &PTR_FUN_710523d988;
    local_250 = 0;
    if (uVar6 != 0) {
      uVar7 = *(ulong *)(uVar6 + 0x18);
      *(undefined ***)(uVar6 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar6 + 0x18) = 0;
      if (uVar7 != 0) {
        FUN_710392eb40(uVar7);
      }
      FUN_710392eb40(uVar6);
    }
    FUN_7103776640(&local_2e8,param_1 + 0x100,(byte ****)"set_parts_item",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    FUN_7103776640(&local_258,(long)&local_2e8,(byte ****)"set_parts_atr_bg",param_3,param_4,param_5
                   ,param_6,param_7,param_8);
    plVar5 = local_2e0;
    local_2e8 = (long ***)&PTR_FUN_710523d988;
    local_2e0 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      uVar6 = plVar5[3];
      plVar5[2] = (long)&PTR_FUN_710523d9a8;
      plVar5[3] = 0;
      if (uVar6 != 0) {
        FUN_710392eb40(uVar6);
      }
      FUN_710392eb40((ulong)plVar5);
    }
    plVar5 = (long *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
    if (plVar5 == (long *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_64 = 0;
        local_2e8 = (long ***)&SUB_00000020;
        pppplVar9 = &local_2e8;
        uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
        if (((uVar6 & 1) != 0) &&
           (plVar5 = (long *)FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,
                                            param_8), plVar5 != (long *)0x0)) goto LAB_7101ad2b08;
      }
      plVar5 = (long *)0x0;
    }
LAB_7101ad2b08:
    uVar16 = 0;
    plVar5[2] = 0;
    plVar5[3] = 0;
    *plVar5 = 0;
    plVar5[1] = 0;
    do {
      uVar6 = (ulong)uVar16;
      FUN_7103776910(&local_2e8,(long)&local_258,(long ****)"set_fxui_eff_aura_%02d",uVar6,param_4,
                     param_5,param_6,param_7,param_8);
      plVar2 = local_2e0;
      local_2e0 = (long *)0x0;
      if (plVar5 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar5);
      }
      local_2e8 = (long ***)&PTR_FUN_710523d9a8;
      local_2e0 = (long *)0x0;
      FUN_710377aa20((long *)*plVar2,0);
      uVar7 = local_250;
      lVar4 = *plVar2;
      if (lVar4 != 0) {
        *(byte *)(lVar4 + 0x58) = *(byte *)(lVar4 + 0x58) & 0xfe;
      }
      FUN_7103778300(0x3f800000,local_250,0x7104338aad);
      FUN_710377acb0((long *)*plVar2,1,uVar6,param_4,param_5,param_6,param_7,param_8);
      uVar16 = uVar16 + 1;
      plVar5 = plVar2;
    } while (uVar16 != 0x10);
    if (*(uint *)(param_1 + 0xe4) < 0x13) {
      *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0xe4) * 4 + 0x98) = 5;
      if (plVar2 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar2);
      }
      local_258 = &PTR_FUN_710523d988;
      local_250 = 0;
      if (uVar7 == 0) {
        return;
      }
      uVar6 = *(ulong *)(uVar7 + 0x18);
      *(undefined ***)(uVar7 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar7 + 0x18) = 0;
      if (uVar6 != 0) {
        FUN_710392eb40(uVar6);
      }
      FUN_710392eb40(uVar7);
      return;
    }
LAB_7101ad33b4:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  puVar12 = *(undefined8 **)(*DAT_7105314510 + 0x1b8);
  lVar4 = *(long *)**(undefined8 **)(**(long **)(*DAT_7105314510 + 0x188) + 8);
  uVar10 = *(uint *)(param_1 + 0x138);
  uVar16 = *(int *)(lVar4 + 0x3c) + uVar10;
  if (0x3b9ac9fe < uVar16) {
    uVar16 = 999999999;
  }
  *(uint *)(lVar4 + 0x3c) = uVar16;
  puVar13 = *(uint **)*puVar12;
  uVar15 = *puVar13;
  puVar1 = (ulong *)(param_1 + 0x118);
  uVar16 = uVar10;
  if (uVar10 <= uVar15) {
    uVar16 = uVar15;
  }
  *puVar13 = uVar16 - uVar10;
  FUN_710338ed30(puVar1,param_2,(ulong)param_3,param_4,param_5,param_6,param_7,param_8);
  lVar4 = *(long *)**(undefined8 **)(*DAT_7105314510 + 0x1c8);
  if (*(char *)(lVar4 + 0x3f0) != '\x03') {
    *(int *)(lVar4 + 0x3ec) = *(int *)(param_1 + 0x138) + *(int *)(lVar4 + 0x3ec);
  }
  if (*(int *)(param_1 + 0x13c) != 0) {
    FUN_710177a5c0(0x68);
  }
  if (*(char *)(param_1 + 0x253) == '\0') {
    uVar16 = *(uint *)(param_1 + 0x1dc);
    FUN_71033872b0(&local_258,5,param_3,param_4,param_5,param_6,param_7,param_8);
    if (9 < uVar16) goto LAB_7101ad33b4;
    auStack_230[(ulong)uVar16 * 0x30] = 1;
    FUN_710338aca0(5,&local_258);
    if (*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') {
      param_3 = (long ****)&DAT_00000004;
      uVar6 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0xf57a523f5,(long ****)&DAT_00000004,
                             param_4,param_5,param_6,param_7,param_8);
      if ((uVar6 & 1) == 0) goto LAB_7101ad2d78;
      FUN_71024076d0(local_298,0xf57a523f5);
      if (((local_288 != 0) && (DAT_7106dd53a8 == '\x01')) && (local_280 == DAT_7106dd53ac)) {
        piVar11 = (int *)(local_288 + 0x38);
        do {
          cVar17 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
          if (bVar3) {
            *piVar11 = *piVar11 + -1;
            cVar17 = ExclusiveMonitorsStatus();
          }
        } while (cVar17 != '\0');
      }
    }
    else {
LAB_7101ad2d78:
      local_270 = 0xffffffffffffffff;
      uStack_268 = 0;
      local_280 = 0;
      uStack_27c = 0x876500;
      local_298[0] = 0;
      local_260 = 0;
    }
    local_290 = &PTR_FUN_7104f73d50;
    local_288 = 0;
    local_278 = 0;
  }
  *(int *)(param_1 + 0x25c) = *(int *)(param_1 + 0x25c) + 1;
  *(undefined1 *)(param_1 + 600) = 1;
  if (*(char *)(param_1 + 0x120) == '\x05') {
    if (*(char *)(param_1 + 0x253) == '\0') {
      local_250 = 0x7465675f6d696e61;
      uVar10 = 0x811c9dc5;
      local_248 = 0x7261646e6174735f;
      uVar15 = 0x61;
      local_240 = 100;
      lVar4 = 9;
      uVar16 = uVar10;
      do {
        uVar16 = uVar16 * 0x89 ^ uVar15;
        uVar15 = (uint)*(byte *)((long)&local_258 + lVar4);
        lVar4 = lVar4 + 1;
      } while (uVar15 != 0);
      local_258 = (undefined **)CONCAT44(0x11,uVar16);
      if ((uint *)(param_1 + 0x1f0) == (uint *)&local_258) goto LAB_7101ad2e94;
      uVar6 = 0;
      cVar17 = 'a';
      do {
        *(char *)(param_1 + 0x1f8 + uVar6) = cVar17;
        if (0x3e < (int)uVar6 + 1U) {
          uVar6 = (ulong)((int)uVar6 + 1);
          break;
        }
        cVar17 = *(char *)((long)&local_250 + uVar6 + 1);
        uVar6 = uVar6 + 1;
      } while (cVar17 != '\0');
      *(undefined1 *)(param_1 + 0x1f8 + (uVar6 & 0xffffffff)) = 0;
      uVar16 = (uint)*(byte *)(param_1 + 0x1f8);
      *(int *)(param_1 + 500) = (int)uVar6;
      if (*(byte *)(param_1 + 0x1f8) != 0) {
        pbVar14 = (byte *)(param_1 + 0x1f9);
        do {
          uVar10 = uVar10 * 0x89 ^ uVar16;
          uVar16 = (uint)*pbVar14;
          pbVar14 = pbVar14 + 1;
        } while (uVar16 != 0);
      }
      *(uint *)(param_1 + 0x1f0) = uVar10;
      cVar17 = *(char *)(param_1 + 0x253);
    }
    else {
      uVar16 = (uint)*(byte *)(*(long *)**(undefined8 **)(*DAT_7105314510 + 0x1c8) + 0x3f0);
      if (uVar16 == 3) {
LAB_7101ad2e24:
        FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x108),0x71042c5006);
        plVar5 = DAT_7105314510;
      }
      else {
        param_3 = (long ****)0x0;
        uVar6 = FUN_710329d690(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x368),uVar16,0);
        plVar5 = DAT_7105314510;
        if (*(uint *)(*(long *)**(undefined8 **)(*DAT_7105314510 + 0x1c8) + 0x3ec) < (uint)uVar6)
        goto LAB_7101ad2e24;
        uVar6 = (ulong)local_248 >> 0x30;
        uVar10 = 0x811c9dc5;
        local_250 = 0x7465675f6d696e61;
        uVar15 = 0x61;
        lVar4 = 9;
        local_248 = CONCAT26((ushort)uVar6 & 0xff00,0x69746c756d5f);
        uVar16 = uVar10;
        do {
          uVar16 = uVar16 * 0x89 ^ uVar15;
          uVar15 = (uint)*(byte *)((long)&local_258 + lVar4);
          lVar4 = lVar4 + 1;
        } while (uVar15 != 0);
        local_258 = (undefined **)CONCAT44(0xe,uVar16);
        if ((uint *)(param_1 + 0x1f0) != (uint *)&local_258) {
          uVar6 = 0;
          cVar17 = 'a';
          do {
            *(char *)(param_1 + 0x1f8 + uVar6) = cVar17;
            if (0x3e < (int)uVar6 + 1U) {
              uVar6 = (ulong)((int)uVar6 + 1);
              break;
            }
            cVar17 = *(char *)((long)&local_250 + uVar6 + 1);
            uVar6 = uVar6 + 1;
          } while (cVar17 != '\0');
          *(undefined1 *)(param_1 + 0x1f8 + (uVar6 & 0xffffffff)) = 0;
          uVar16 = (uint)*(byte *)(param_1 + 0x1f8);
          *(int *)(param_1 + 500) = (int)uVar6;
          if (*(byte *)(param_1 + 0x1f8) != 0) {
            pbVar14 = (byte *)(param_1 + 0x1f9);
            do {
              uVar10 = uVar10 * 0x89 ^ uVar16;
              uVar16 = (uint)*pbVar14;
              pbVar14 = pbVar14 + 1;
            } while (uVar16 != 0);
          }
          *(uint *)(param_1 + 0x1f0) = uVar10;
        }
      }
      FUN_7103399f50(*(long *)(param_1 + 0x238),**(int **)**(undefined8 **)(*plVar5 + 0x1b8),param_3
                     ,param_4,param_5,param_6,param_7,param_8);
      cVar17 = *(char *)(param_1 + 0x253);
    }
  }
  else {
    *(undefined2 *)(param_1 + 0x244) = 1;
    *(undefined1 *)(param_1 + 0x246) = 0;
    *(undefined4 *)(param_1 + 0x248) = 0;
    *(undefined1 *)(param_1 + 0x24c) = 0;
    bVar3 = FUN_71017831e0(puVar1);
    *(bool *)(param_1 + 0x246) = bVar3;
    *(undefined4 *)(param_1 + 0x248) = 0;
    *(undefined1 *)(param_1 + 0x244) = 0;
    FUN_71017830a0(puVar1);
LAB_7101ad2e94:
    cVar17 = *(char *)(param_1 + 0x253);
  }
  if (cVar17 != '\0') {
    *(undefined1 *)(param_1 + 0x255) = 1;
    goto LAB_7101ad3194;
  }
  plVar5 = (long *)(*DAT_7105314508 + 0x5b4dd8);
  plVar2 = (long *)(*DAT_7105314508 + 0x5b4de8);
  if (*plVar2 != 0) {
    *(byte *)(*plVar5 + 0x10) = *(byte *)(*plVar5 + 0x10) & 1;
    goto LAB_7101ad3194;
  }
  plVar8 = (long *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar8 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_2e8 = (long ***)((ulong)local_2e8 & 0xffffffff00000000);
      local_258 = (undefined **)&SUB_00000018;
      param_3 = (long ****)&local_258;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_2e8);
      if (((uVar6 & 1) != 0) &&
         (plVar8 = (long *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8)
         , plVar8 != (long *)0x0)) goto LAB_7101ad3170;
    }
    plVar8 = (long *)0x0;
  }
LAB_7101ad3170:
  *(undefined1 *)(plVar8 + 2) = 0;
  plVar8[1] = (long)plVar5;
  lVar4 = *plVar5;
  *plVar8 = lVar4;
  *(long **)(lVar4 + 8) = plVar8;
  *plVar5 = (long)plVar8;
  *plVar2 = *plVar2 + 1;
LAB_7101ad3194:
  if (*(char *)(param_1 + 0x120) != '\x04') {
    FUN_7103776640(&local_258,param_1 + 0x100,(byte ****)"set_parts_item",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    uVar6 = local_250;
    FUN_7103778300(0x3f800000,local_250,0x71043176ce);
    local_258 = &PTR_FUN_710523d988;
    local_250 = 0;
    if (uVar6 != 0) {
      uVar7 = *(ulong *)(uVar6 + 0x18);
      *(undefined ***)(uVar6 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar6 + 0x18) = 0;
      if (uVar7 != 0) {
        FUN_710392eb40(uVar7);
      }
      FUN_710392eb40(uVar6);
    }
    *(undefined1 *)(param_1 + 0x254) = 0;
  }
  if (*(int *)(param_1 + 500) != 0) {
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x108),param_1 + 0x1f8);
  }
  FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x108),0x71044229ef);
  FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x108),0x7104319105);
  FUN_7101ad36e0(param_1,extraout_x1,param_3,param_4,param_5,param_6,param_7,param_8);
  if (((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
      (uVar6 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x1057d635e7,(long ****)&DAT_00000004,
                              param_4,param_5,param_6,param_7,param_8), (uVar6 & 1) != 0)) &&
     ((FUN_71024076d0(local_2d8,0x1057d635e7), local_2c8 != 0 &&
      ((DAT_7106dd53a8 == '\x01' && (local_2c0 == DAT_7106dd53ac)))))) {
    piVar11 = (int *)(local_2c8 + 0x38);
    do {
      cVar17 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar11,0x10);
      if (bVar3) {
        *piVar11 = *piVar11 + -1;
        cVar17 = ExclusiveMonitorsStatus();
      }
    } while (cVar17 != '\0');
  }
  return;
}

