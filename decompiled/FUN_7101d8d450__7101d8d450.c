// addr:      7101d8d450
// offset:    0x1d8d450
// name:      FUN_7101d8d450
// mangled:   
// signature: undefined __cdecl FUN_7101d8d450(long param_1, undefined8 param_2, undefined8 param_3, ulong param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101d8d450(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined2 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  ushort uVar6;
  short sVar7;
  char cVar8;
  bool bVar9;
  long *plVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  int *piVar18;
  byte bVar19;
  uint uVar20;
  ulong uVar21;
  ulong uVar22;
  undefined2 *puVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  undefined **local_b0;
  long *local_a8;
  undefined **local_a0;
  long *local_98;
  undefined **local_90;
  long *local_88;
  undefined **local_80;
  ulong local_78;
  
  uVar5 = *(ushort *)(param_1 + 0x15e);
  if ((ulong)uVar5 == 0xffff) {
    return;
  }
  if (uVar5 >> 4 < 0x177) {
    puVar23 = (undefined2 *)(*(long *)(*DAT_7105329f98 + 0x30) + (ulong)uVar5 * 0x50 + 72000);
  }
  else {
    puVar23 = &DAT_710532a878;
    if (((ushort)(uVar5 + 0xe890) < 100) &&
       (lVar16 = *(long *)(*DAT_7105329f98 + 0x30) + (ulong)(ushort)(uVar5 + 0xe890) * 0x50,
       *(short *)(lVar16 + 0x88cc8) != -1)) {
      puVar23 = (undefined2 *)(lVar16 + 0x88cc0);
    }
  }
  FUN_7103776640(&local_80,param_1 + 0x130,(byte ****)"set_parts_param_03",param_3,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_7103776910(&local_90,(long)&local_80,(long ****)"nextlevel",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  FUN_710377a120((long)&local_90,"mnu_spirits_raise_next_lv",param_3,param_4,param_5,param_6,param_7
                 ,param_8);
  plVar15 = local_88;
  local_90 = &PTR_FUN_710523d9a8;
  local_88 = (long *)0x0;
  if (plVar15 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar15);
  }
  uVar5 = puVar23[4];
  if ((uVar5 == 0xffff) || (1999 < (short)uVar5)) goto LAB_7101d8dc34;
  lVar17 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
  lVar16 = *(long *)(lVar17 + 0x20);
  uVar6 = *(ushort *)(lVar17 + (long)(int)(short)uVar5 * 2 + 0x60);
  uVar21 = (ulong)uVar6;
  uVar22 = (*(long *)(lVar17 + 0x28) - lVar16 >> 6) * -0x3333333333333333;
  if ((uint)uVar22 <= (uint)uVar6) goto LAB_7101d8dc34;
  puVar1 = (undefined2 *)(lVar16 + uVar21 * 0x140);
  if (uVar22 < uVar21 || uVar22 - uVar21 == 0) {
    puVar1 = &DAT_7105182b08;
  }
  uVar2 = *(uint *)(param_1 + 0x268);
  iVar11 = FUN_71025c9ac0(*(float *)(puVar1 + 0x3a),uVar2,*(uint *)(puVar1 + 0x38));
  uVar20 = *(int *)(param_1 + 0x270) - uVar2;
  if (uVar20 == 0) {
    uVar20 = *(uint *)(param_1 + 0x26c);
  }
  if (iVar11 == 99) {
    FUN_7103776910(&local_90,(long)&local_80,(long ****)"set_bar_exp",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    plVar15 = local_88;
    lVar16 = *local_88;
    if (lVar16 != 0) {
      *(undefined1 **)(lVar16 + 0x48) = &DAT_3f8000003f800000;
      *(byte *)(lVar16 + 0x58) = *(byte *)(lVar16 + 0x58) | 0x10;
    }
    local_90 = &PTR_FUN_710523d9a8;
    local_88 = (long *)0x0;
    if (plVar15 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar15);
    }
    FUN_7103776910(&local_90,(long)&local_80,(long ****)"set_txt_next_lv_exp",param_3,param_4,
                   param_5,param_6,param_7,param_8);
    FUN_710377a120((long)&local_90,"",param_3,param_4,param_5,param_6,param_7,param_8);
    plVar15 = local_88;
    local_90 = &PTR_FUN_710523d9a8;
    local_88 = (long *)0x0;
    if (plVar15 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar15);
    }
    *(undefined4 *)(param_1 + 0x268) = *(undefined4 *)(param_1 + 0x270);
    FUN_7103776910(&local_90,(long)&local_80,(long ****)&DAT_71042f86cb,param_3,param_4,param_5,
                   param_6,param_7,param_8);
    plVar15 = local_88;
    lVar16 = *local_88;
    if (lVar16 != 0) {
      *(byte *)(lVar16 + 0x58) = *(byte *)(lVar16 + 0x58) & 0xfe;
    }
    local_90 = &PTR_FUN_710523d9a8;
    local_88 = (long *)0x0;
    if (plVar15 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar15);
    }
    FUN_7103776910(&local_90,(long)&local_80,(long ****)"set_txt_lv_add",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    plVar15 = local_88;
    lVar16 = *local_88;
    if (lVar16 != 0) {
      *(byte *)(lVar16 + 0x58) = *(byte *)(lVar16 + 0x58) & 0xfe;
    }
    local_90 = &PTR_FUN_710523d9a8;
    local_88 = (long *)0x0;
    if (plVar15 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar15);
    }
    if (*(int *)(param_1 + 0x2c4) != -1) {
      FUN_710373b540(param_1 + 0x298,0);
      *(undefined4 *)(param_1 + 0x298) = 0;
      FUN_71039602c0(param_1 + 0x2a0);
      *(undefined ***)(param_1 + 0x2a0) = &PTR_FUN_7104f73d50;
      if (((*(long *)(param_1 + 0x2a8) != 0) && (DAT_7106dd53a8 == '\x01')) &&
         (*(int *)(param_1 + 0x2b0) == DAT_7106dd53ac)) {
        piVar18 = (int *)(*(long *)(param_1 + 0x2a8) + 0x38);
        do {
          cVar8 = '\x01';
          bVar9 = (bool)ExclusiveMonitorPass(piVar18,0x10);
          if (bVar9) {
            *piVar18 = *piVar18 + -1;
            cVar8 = ExclusiveMonitorsStatus();
          }
        } while (cVar8 != '\0');
      }
      *(undefined8 *)(param_1 + 0x2b0) = 0;
      *(undefined8 *)(param_1 + 0x2b8) = 0;
      *(undefined8 *)(param_1 + 0x2a0) = 0;
      *(undefined8 *)(param_1 + 0x2a8) = 0;
      *(undefined8 *)(param_1 + 0x2b0) = 0x87650000000000;
      *(undefined ***)(param_1 + 0x2a0) = &PTR_FUN_7104f73d30;
      *(undefined8 *)(param_1 + 0x2a8) = 0;
      *(undefined1 *)(param_1 + 0x2b8) = 0;
      *(undefined8 *)(param_1 + 0x2c0) = 0xffffffffffffffff;
      *(undefined8 *)(param_1 + 0x2c8) = 0;
      *(undefined4 *)(param_1 + 0x2d4) = 0;
    }
LAB_7101d8dbbc:
    FUN_7103776910(&local_90,(long)&local_80,(long ****)"set_txt_exp_add",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    lVar16 = *local_88;
    plVar15 = local_88;
    if (lVar16 != 0) {
      *(byte *)(lVar16 + 0x58) = *(byte *)(lVar16 + 0x58) & 0xfe;
    }
LAB_7101d8dbe8:
    local_90 = &PTR_FUN_710523d9a8;
    local_88 = (long *)0x0;
    if (plVar15 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar15);
    }
  }
  else {
    puVar1 = (undefined2 *)(lVar16 + uVar21 * 0x140);
    if (uVar22 < uVar21 || uVar22 - uVar21 == 0) {
      puVar1 = &DAT_7105182b08;
    }
    uVar12 = FUN_71025c9ac0(*(float *)(puVar1 + 0x3a),uVar2,*(uint *)(puVar1 + 0x38));
    iVar11 = FUN_71025c9e50(uVar5,uVar12);
    iVar13 = FUN_71025c9e50(uVar5,uVar12 + 1);
    if ((uint)(iVar13 - iVar11) < 2) {
      fVar24 = 0.0;
      fVar26 = fVar24;
    }
    else {
      fVar26 = (float)(uint)(iVar13 - iVar11);
      fVar24 = (float)(uVar2 - iVar11) / fVar26;
      if (1.0 < fVar24) {
        fVar24 = 1.0;
      }
      fVar25 = (float)uVar20 / fVar26 + fVar24;
      fVar26 = 1.0;
      if (fVar25 < 1.0) {
        fVar26 = fVar25;
      }
    }
    FUN_7103776910(&local_90,(long)&local_80,(long ****)"set_bar_exp",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    FUN_7103776910(&local_a0,(long)&local_80,(long ****)"set_bar_exp_add",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    plVar10 = local_88;
    plVar15 = local_98;
    lVar16 = *local_88;
    if (lVar16 != 0) {
      *(undefined4 *)(lVar16 + 0x4c) = 0x3f800000;
      *(float *)(lVar16 + 0x48) = fVar24;
      *(byte *)(lVar16 + 0x58) = *(byte *)(lVar16 + 0x58) | 0x10;
    }
    lVar16 = *local_98;
    if (uVar20 == 0) {
      if (lVar16 != 0) {
        bVar19 = *(byte *)(lVar16 + 0x58) & 0xfe;
LAB_7101d8d8d0:
        *(byte *)(lVar16 + 0x58) = bVar19;
      }
    }
    else if (lVar16 != 0) {
      *(byte *)(lVar16 + 0x58) = *(byte *)(lVar16 + 0x58) | 1;
      lVar16 = *local_98;
      if (lVar16 != 0) {
        *(undefined4 *)(lVar16 + 0x4c) = 0x3f800000;
        bVar19 = *(byte *)(lVar16 + 0x58) | 0x10;
        *(float *)(lVar16 + 0x48) = fVar26;
        goto LAB_7101d8d8d0;
      }
    }
    sVar7 = puVar23[4];
    uVar3 = *(uint *)(param_1 + 0x270);
    uVar4 = *(uint *)(param_1 + 0x268);
    uVar2 = uVar3;
    if (uVar3 == uVar4) {
      uVar2 = *(int *)(param_1 + 0x26c) + uVar3;
    }
    if ((sVar7 == -1) || (1999 < sVar7)) {
LAB_7101d8d988:
      iVar11 = 1;
      if (uVar12 != 99) goto LAB_7101d8d964;
LAB_7101d8d990:
      *(undefined4 *)(param_1 + 0x274) = 0;
LAB_7101d8d998:
      FUN_7103776910(&local_b0,(long)&local_80,(long ****)&DAT_71042f86cb,param_3,param_4,param_5,
                     param_6,param_7,param_8);
      plVar14 = local_a8;
      lVar16 = *local_a8;
      if (lVar16 != 0) {
        *(byte *)(lVar16 + 0x58) = *(byte *)(lVar16 + 0x58) & 0xfe;
      }
      local_b0 = &PTR_FUN_710523d9a8;
      local_a8 = (long *)0x0;
      if (plVar14 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar14);
      }
      FUN_7103776910(&local_b0,(long)&local_80,(long ****)"set_txt_lv_add",param_3,param_4,param_5,
                     param_6,param_7,param_8);
      lVar16 = *local_a8;
      plVar14 = local_a8;
      if (lVar16 != 0) {
        *(byte *)(lVar16 + 0x58) = *(byte *)(lVar16 + 0x58) & 0xfe;
      }
    }
    else {
      lVar16 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
      uVar5 = *(ushort *)(lVar16 + (long)sVar7 * 2 + 0x60);
      uVar21 = (ulong)uVar5;
      uVar22 = (*(long *)(lVar16 + 0x28) - *(long *)(lVar16 + 0x20) >> 6) * -0x3333333333333333;
      if ((uint)uVar22 <= (uint)uVar5) goto LAB_7101d8d988;
      puVar23 = (undefined2 *)(*(long *)(lVar16 + 0x20) + uVar21 * 0x140);
      if (uVar22 < uVar21 || uVar22 - uVar21 == 0) {
        puVar23 = &DAT_7105182b08;
      }
      iVar11 = FUN_71025c9ac0(*(float *)(puVar23 + 0x3a),uVar2,*(uint *)(puVar23 + 0x38));
      if (uVar12 == 99) goto LAB_7101d8d990;
LAB_7101d8d964:
      if (uVar3 == uVar4) {
        iVar11 = iVar11 - uVar12;
        *(int *)(param_1 + 0x274) = iVar11;
      }
      else {
        iVar11 = *(int *)(param_1 + 0x274);
      }
      if (iVar11 == 0) goto LAB_7101d8d998;
      FUN_7103776910(&local_b0,(long)&local_80,(long ****)&DAT_71042f86cb,param_3,param_4,param_5,
                     param_6,param_7,param_8);
      plVar14 = local_a8;
      lVar16 = *local_a8;
      if (lVar16 != 0) {
        *(byte *)(lVar16 + 0x58) = *(byte *)(lVar16 + 0x58) | 1;
      }
      local_b0 = &PTR_FUN_710523d9a8;
      local_a8 = (long *)0x0;
      if (plVar14 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar14);
      }
      FUN_7103776910(&local_b0,(long)&local_80,(long ****)"set_txt_lv_add",param_3,param_4,param_5,
                     param_6,param_7,param_8);
      plVar14 = local_a8;
      lVar16 = *local_a8;
      if (lVar16 != 0) {
        *(byte *)(lVar16 + 0x58) = *(byte *)(lVar16 + 0x58) | 1;
      }
      local_b0 = &PTR_FUN_710523d9a8;
      local_a8 = (long *)0x0;
      if (plVar14 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar14);
      }
      FUN_7103776910(&local_b0,(long)&local_80,(long ****)&DAT_71042f86cb,param_3,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_710377a120((long)&local_b0,"mnu_spirits_raise_lv",param_3,param_4,param_5,param_6,param_7,
                     param_8);
      plVar14 = local_a8;
      local_b0 = &PTR_FUN_710523d9a8;
      local_a8 = (long *)0x0;
      if (plVar14 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar14);
      }
      FUN_7103776910(&local_b0,(long)&local_80,(long ****)"set_txt_lv_add",param_3,param_4,param_5,
                     param_6,param_7,param_8);
      param_4 = (ulong)*(uint *)(param_1 + 0x274);
      param_3 = 1;
      FUN_710377a280((long)&local_b0,(byte *)"mnu_spirits_raise_exp_add_n",1);
      plVar14 = local_a8;
    }
    local_b0 = &PTR_FUN_710523d9a8;
    local_a8 = (long *)0x0;
    if (plVar14 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar14);
    }
    local_a0 = &PTR_FUN_710523d9a8;
    local_98 = (long *)0x0;
    if (plVar15 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar15);
    }
    local_90 = &PTR_FUN_710523d9a8;
    local_88 = (long *)0x0;
    if (plVar10 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar10);
    }
    if (uVar20 == 0) goto LAB_7101d8dbbc;
    if (((*(long *)(param_1 + 0x2e0) == *(long *)(param_1 + 0x2d8)) &&
        (*(int *)(param_1 + 0x270) == *(int *)(param_1 + 0x268))) &&
       (*(int *)(param_1 + 0x290) == *(int *)(param_1 + 0x288))) {
      FUN_7103776910(&local_90,(long)&local_80,(long ****)"set_txt_exp_add",param_3,param_4,param_5,
                     param_6,param_7,param_8);
      plVar15 = local_88;
      lVar16 = *local_88;
      if (lVar16 != 0) {
        *(byte *)(lVar16 + 0x58) = *(byte *)(lVar16 + 0x58) | 1;
      }
      local_90 = &PTR_FUN_710523d9a8;
      local_88 = (long *)0x0;
      if (plVar15 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar15);
      }
      FUN_7103776910(&local_90,(long)&local_80,(long ****)"set_txt_exp_add",param_3,param_4,param_5,
                     param_6,param_7,param_8);
      param_4 = (ulong)*(uint *)(param_1 + 0x26c);
      param_3 = 1;
      FUN_710377a280((long)&local_90,(byte *)"mnu_spirits_raise_exp_add_n",1);
      plVar15 = local_88;
      goto LAB_7101d8dbe8;
    }
  }
  FUN_7103776910(&local_90,(long)&local_80,(long ****)"set_txt_next_lv_exp",param_3,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_710377a280((long)&local_90,(byte *)"mnu_spirits_raise_exp_next_n",1);
  plVar15 = local_88;
  local_90 = &PTR_FUN_710523d9a8;
  local_88 = (long *)0x0;
  if (plVar15 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar15);
  }
LAB_7101d8dc34:
  uVar21 = local_78;
  local_80 = &PTR_FUN_710523d988;
  local_78 = 0;
  if (uVar21 != 0) {
    uVar22 = *(ulong *)(uVar21 + 0x18);
    *(undefined ***)(uVar21 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar21 + 0x18) = 0;
    if (uVar22 != 0) {
      FUN_710392eb40(uVar22);
    }
    FUN_710392eb40(uVar21);
  }
  return;
}

