// addr:      7101d26720
// offset:    0x1d26720
// name:      FUN_7101d26720
// mangled:   
// signature: undefined __cdecl FUN_7101d26720(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101d26720(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong *puVar1;
  uint *puVar2;
  long *plVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  long *plVar10;
  undefined8 extraout_x1;
  long ****pppplVar11;
  int *piVar12;
  uint uVar13;
  uint uVar14;
  byte *pbVar15;
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
    if (*(int *)(param_1 + 0x1fc) != 0) {
      lVar6 = *(long *)(*(long *)(param_1 + 0x108) + 8);
      if ((lVar6 != 0) &&
         (plVar7 = (long *)FUN_71037964b0(lVar6,param_1 + 0x200), plVar7 != (long *)0x0)) {
        uVar8 = (**(code **)(*plVar7 + 0x138))();
        if ((uVar8 & 1) == 0) {
          return;
        }
        if (*(int *)(param_1 + 0x1fc) == 0) goto LAB_7101d267bc;
      }
      FUN_7103778630(0,*(long *)(param_1 + 0x108),0x71044229ef);
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x108),0x71042f856f);
      *(undefined1 *)(param_1 + 0x200) = 0;
      *(undefined8 *)(param_1 + 0x1f8) = 0;
    }
LAB_7101d267bc:
    if (*(char *)(param_1 + 0x120) != '\x04') {
      if (*(uint *)(param_1 + 0xe4) < 0x13) {
        *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0xe4) * 4 + 0x98) = 2;
        if ((*(char *)(param_1 + 0x120) == '\x05') && (*(char *)(param_1 + 0x25d) != '\0')) {
          *(undefined1 *)(param_1 + 0x268) = 0;
          return;
        }
        *(undefined1 *)(param_1 + 0x268) = 1;
        return;
      }
      goto LAB_7101d26fd0;
    }
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x108),0x71042f856f);
    FUN_7103776640(&local_258,param_1 + 0x100,(byte ****)"set_parts_item",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    uVar8 = local_250;
    FUN_7103778300(0x3f800000,local_250,0x7104306de4);
    local_258 = &PTR_FUN_710523d988;
    local_250 = 0;
    if (uVar8 != 0) {
      uVar9 = *(ulong *)(uVar8 + 0x18);
      *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar8 + 0x18) = 0;
      if (uVar9 != 0) {
        FUN_710392eb40(uVar9);
      }
      FUN_710392eb40(uVar8);
    }
    FUN_7103776640(&local_2e8,param_1 + 0x100,(byte ****)"set_parts_item",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    FUN_7103776640(&local_258,(long)&local_2e8,(byte ****)"set_parts_atr_bg",param_3,param_4,param_5
                   ,param_6,param_7,param_8);
    plVar7 = local_2e0;
    local_2e8 = (long ***)&PTR_FUN_710523d988;
    local_2e0 = (long *)0x0;
    if (plVar7 != (long *)0x0) {
      uVar8 = plVar7[3];
      plVar7[2] = (long)&PTR_FUN_710523d9a8;
      plVar7[3] = 0;
      if (uVar8 != 0) {
        FUN_710392eb40(uVar8);
      }
      FUN_710392eb40((ulong)plVar7);
    }
    plVar7 = (long *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
    if (plVar7 == (long *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_64 = 0;
        local_2e8 = (long ***)&SUB_00000020;
        pppplVar11 = &local_2e8;
        uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
        if (((uVar8 & 1) != 0) &&
           (plVar7 = (long *)FUN_710392e290(0x10,0x20,pppplVar11,param_4,param_5,param_6,param_7,
                                            param_8), plVar7 != (long *)0x0)) goto LAB_7101d268f0;
      }
      plVar7 = (long *)0x0;
    }
LAB_7101d268f0:
    uVar16 = 0;
    plVar7[2] = 0;
    plVar7[3] = 0;
    *plVar7 = 0;
    plVar7[1] = 0;
    do {
      uVar8 = (ulong)uVar16;
      FUN_7103776910(&local_2e8,(long)&local_258,(long ****)"set_fxui_eff_aura_%02d",uVar8,param_4,
                     param_5,param_6,param_7,param_8);
      plVar3 = local_2e0;
      local_2e0 = (long *)0x0;
      if (plVar7 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar7);
      }
      local_2e8 = (long ***)&PTR_FUN_710523d9a8;
      local_2e0 = (long *)0x0;
      FUN_710377aa20((long *)*plVar3,0);
      uVar9 = local_250;
      lVar6 = *plVar3;
      if (lVar6 != 0) {
        *(byte *)(lVar6 + 0x58) = *(byte *)(lVar6 + 0x58) & 0xfe;
      }
      FUN_7103778300(0x3f800000,local_250,0x7104338aad);
      FUN_710377acb0((long *)*plVar3,1,uVar8,param_4,param_5,param_6,param_7,param_8);
      uVar16 = uVar16 + 1;
      plVar7 = plVar3;
    } while (uVar16 != 0x10);
    if (*(uint *)(param_1 + 0xe4) < 0x13) {
      *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0xe4) * 4 + 0x98) = 5;
      if (plVar3 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar3);
      }
      local_258 = &PTR_FUN_710523d988;
      local_250 = 0;
      if (uVar9 == 0) {
        return;
      }
      uVar8 = *(ulong *)(uVar9 + 0x18);
      *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar9 + 0x18) = 0;
      if (uVar8 != 0) {
        FUN_710392eb40(uVar8);
      }
      FUN_710392eb40(uVar9);
      return;
    }
LAB_7101d26fd0:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  puVar2 = (uint *)(*(long *)(**(long **)(*DAT_7105314510 + 0x68) + 8) + 0x10dc8);
  uVar16 = *puVar2;
  uVar13 = uVar16 - *(uint *)(param_1 + 0x138);
  if (uVar16 < *(uint *)(param_1 + 0x138)) {
    uVar13 = 0;
  }
  else if (0xf423e < uVar13) {
    uVar13 = 999999;
  }
  puVar1 = (ulong *)(param_1 + 0x118);
  *puVar2 = uVar13;
  FUN_710338ed30(puVar1,param_2,(ulong)param_3,param_4,param_5,param_6,param_7,param_8);
  if (*(char *)(param_1 + 0x25d) == '\0') {
    uVar16 = *(uint *)(param_1 + 0x1dc);
    if (((DAT_71053144d8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_71053144d8), iVar5 != 0)) {
      FUN_7101764000();
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    memcpy(&local_258,&DAT_7105308570,0x1e0);
    if (9 < uVar16) goto LAB_7101d26fd0;
    param_3 = (long ****)&DAT_000001e0;
    auStack_230[(ulong)uVar16 * 0x30] = 1;
    memcpy(&DAT_7105308570,&local_258,0x1e0);
    if (*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') {
      param_3 = (long ****)&DAT_00000004;
      uVar8 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0xf57a523f5,(long ****)&DAT_00000004,
                             param_4,param_5,param_6,param_7,param_8);
      if ((uVar8 & 1) == 0) goto LAB_7101d26b70;
      FUN_71024076d0(local_298,0xf57a523f5);
      if (((local_288 != 0) && (DAT_7106dd53a8 == '\x01')) && (local_280 == DAT_7106dd53ac)) {
        piVar12 = (int *)(local_288 + 0x38);
        do {
          cVar17 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar12,0x10);
          if (bVar4) {
            *piVar12 = *piVar12 + -1;
            cVar17 = ExclusiveMonitorsStatus();
          }
        } while (cVar17 != '\0');
      }
    }
    else {
LAB_7101d26b70:
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
  *(int *)(param_1 + 0x264) = *(int *)(param_1 + 0x264) + 1;
  *(undefined1 *)(param_1 + 0x260) = 1;
  if (*(char *)(param_1 + 0x120) == '\x04') {
    *(undefined2 *)(param_1 + 0x24c) = 1;
    *(undefined1 *)(param_1 + 0x24e) = 0;
    *(undefined4 *)(param_1 + 0x250) = 0;
    *(undefined1 *)(param_1 + 0x254) = 0;
    bVar4 = FUN_71017831e0(puVar1);
    *(bool *)(param_1 + 0x24e) = bVar4;
    *(undefined4 *)(param_1 + 0x250) = 0;
    *(undefined1 *)(param_1 + 0x24c) = 0;
    FUN_71017830a0(puVar1);
    cVar17 = *(char *)(param_1 + 0x25d);
  }
  else if (*(char *)(param_1 + 0x25d) == '\0') {
    local_250 = 0x7465675f6d696e61;
    uVar13 = 0x811c9dc5;
    local_248 = 0x7261646e6174735f;
    uVar14 = 0x61;
    local_240 = 100;
    lVar6 = 9;
    uVar16 = uVar13;
    do {
      uVar16 = uVar16 * 0x89 ^ uVar14;
      uVar14 = (uint)*(byte *)((long)&local_258 + lVar6);
      lVar6 = lVar6 + 1;
    } while (uVar14 != 0);
    local_258 = (undefined **)CONCAT44(0x11,uVar16);
    if ((uint *)(param_1 + 0x1f8) != (uint *)&local_258) {
      uVar8 = 0;
      cVar17 = 'a';
      do {
        *(char *)(param_1 + 0x200 + uVar8) = cVar17;
        if (0x3e < (int)uVar8 + 1U) {
          uVar8 = (ulong)((int)uVar8 + 1);
          break;
        }
        cVar17 = *(char *)((long)&local_250 + uVar8 + 1);
        uVar8 = uVar8 + 1;
      } while (cVar17 != '\0');
      *(undefined1 *)(param_1 + 0x200 + (uVar8 & 0xffffffff)) = 0;
      uVar16 = (uint)*(byte *)(param_1 + 0x200);
      *(int *)(param_1 + 0x1fc) = (int)uVar8;
      if (*(byte *)(param_1 + 0x200) != 0) {
        pbVar15 = (byte *)(param_1 + 0x201);
        do {
          uVar13 = uVar13 * 0x89 ^ uVar16;
          uVar16 = (uint)*pbVar15;
          pbVar15 = pbVar15 + 1;
        } while (uVar16 != 0);
      }
      *(uint *)(param_1 + 0x1f8) = uVar13;
    }
    cVar17 = *(char *)(param_1 + 0x25d);
  }
  else {
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x108),0x71042c5006);
    FUN_7103399f50(*(long *)(param_1 + 0x240),
                   *(int *)(*(long *)(**(long **)(*DAT_7105314510 + 0x68) + 8) + 0x10dc8),param_3,
                   param_4,param_5,param_6,param_7,param_8);
    cVar17 = *(char *)(param_1 + 0x25d);
  }
  if (cVar17 != '\0') {
    *(undefined1 *)(param_1 + 0x25f) = 1;
    goto LAB_7101d26df8;
  }
  plVar7 = (long *)(*DAT_7105314508 + 0x5b4dd8);
  plVar3 = (long *)(*DAT_7105314508 + 0x5b4de8);
  if (*plVar3 != 0) {
    *(byte *)(*plVar7 + 0x10) = *(byte *)(*plVar7 + 0x10) & 1;
    goto LAB_7101d26df8;
  }
  plVar10 = (long *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar10 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_2e8 = (long ***)((ulong)local_2e8 & 0xffffffff00000000);
      local_258 = (undefined **)&SUB_00000018;
      param_3 = (long ****)&local_258;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_2e8);
      if (((uVar8 & 1) != 0) &&
         (plVar10 = (long *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,param_8
                                          ), plVar10 != (long *)0x0)) goto LAB_7101d26dd4;
    }
    plVar10 = (long *)0x0;
  }
LAB_7101d26dd4:
  *(undefined1 *)(plVar10 + 2) = 0;
  plVar10[1] = (long)plVar7;
  lVar6 = *plVar7;
  *plVar10 = lVar6;
  *(long **)(lVar6 + 8) = plVar10;
  *plVar7 = (long)plVar10;
  *plVar3 = *plVar3 + 1;
LAB_7101d26df8:
  if (*(char *)(param_1 + 0x120) != '\x04') {
    FUN_7103776640(&local_258,param_1 + 0x100,(byte ****)"set_parts_item",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    uVar8 = local_250;
    FUN_7103778300(0x3f800000,local_250,0x71043176ce);
    local_258 = &PTR_FUN_710523d988;
    local_250 = 0;
    if (uVar8 != 0) {
      uVar9 = *(ulong *)(uVar8 + 0x18);
      *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar8 + 0x18) = 0;
      if (uVar9 != 0) {
        FUN_710392eb40(uVar9);
      }
      FUN_710392eb40(uVar8);
    }
    *(undefined1 *)(param_1 + 0x25e) = 0;
  }
  if (*(int *)(param_1 + 0x1fc) != 0) {
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x108),param_1 + 0x200);
  }
  FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x108),0x71044229ef);
  FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x108),0x7104319105);
  FUN_7101d27300(param_1,extraout_x1,param_3,param_4,param_5,param_6,param_7,param_8);
  if (((*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') &&
      (uVar8 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x1057d635e7,(long ****)&DAT_00000004,
                              param_4,param_5,param_6,param_7,param_8), (uVar8 & 1) != 0)) &&
     ((FUN_71024076d0(local_2d8,0x1057d635e7), local_2c8 != 0 &&
      ((DAT_7106dd53a8 == '\x01' && (local_2c0 == DAT_7106dd53ac)))))) {
    piVar12 = (int *)(local_2c8 + 0x38);
    do {
      cVar17 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar12,0x10);
      if (bVar4) {
        *piVar12 = *piVar12 + -1;
        cVar17 = ExclusiveMonitorsStatus();
      }
    } while (cVar17 != '\0');
  }
  return;
}

