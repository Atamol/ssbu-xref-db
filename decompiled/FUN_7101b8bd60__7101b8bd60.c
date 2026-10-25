// addr:      7101b8bd60
// offset:    0x1b8bd60
// name:      FUN_7101b8bd60
// mangled:   
// signature: undefined __cdecl FUN_7101b8bd60(long param_1, undefined8 param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101b8bd60(long param_1,undefined8 param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  long *plVar4;
  long *********ppppppppplVar5;
  byte ****ppppbVar6;
  byte ****ppppbVar7;
  long lVar8;
  code *pcVar9;
  undefined8 *puVar10;
  long *plVar11;
  long *plVar12;
  undefined8 *puVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  ulong uVar17;
  float fVar18;
  float fVar19;
  byte ***local_1a0;
  long *local_198;
  undefined4 local_190;
  undefined2 local_18c;
  undefined1 local_18a;
  undefined1 *local_188;
  undefined4 local_180;
  long alStack_170 [4];
  long *local_150;
  long alStack_140 [4];
  long *local_120;
  long alStack_110 [4];
  long *local_f0;
  long alStack_e0 [4];
  long *local_c0;
  long alStack_b0 [4];
  long *local_90;
  undefined4 local_80;
  undefined **local_68;
  long *local_60;
  undefined1 local_54 [4];
  
  ppppbVar7 = &local_1a0;
  uVar3 = FUN_710323cb80(*(long *)(param_1 + 200),param_2,param_3,param_4,param_5,param_6,param_7,
                         param_8);
  if ((uVar3 & 1) == 0) {
    return;
  }
  ppppppppplVar5 = (long *********)&DAT_7104544c90;
  ppppbVar6 = (byte ****)0x1;
  FUN_71032cbf30((undefined8 *)(param_1 + 0xd0),*(long *)(param_1 + 200),(ulong *)&DAT_7104544c90,
                 (byte ****)0x1,param_5,param_6,param_7,param_8);
  FUN_710323eba0((undefined8 *)(*(long *)(param_1 + 200) + 8),(ulong *)&DAT_7104544c90,
                 ppppppppplVar5,ppppbVar6,param_5,param_6,param_7,param_8);
  puVar10 = *(undefined8 **)(param_1 + 0xd0);
  plVar12 = (long *)*puVar10;
  plVar4 = plVar12 + 1;
  lVar8 = *plVar12;
  *(undefined4 *)(*(long *)(lVar8 + 0x600) + 0x18) = 0x20;
  *(undefined1 *)(*(long *)(lVar8 + 0x600) + 0x4aa) = 0;
  FUN_7103776910(&local_1a0,(long)plVar4,(long ****)"set_rep_pic_mov",ppppppppplVar5,ppppbVar6,
                 param_5,param_6,param_7,param_8);
  plVar11 = local_198;
  lVar8 = *local_198;
  if (lVar8 != 0) {
    *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) & 0xfe;
  }
  local_1a0 = (byte ***)&PTR_FUN_710523d9a8;
  local_198 = (long *)0x0;
  if (plVar11 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar11);
  }
  FUN_7103776910(&local_1a0,(long)plVar4,(long ****)"set_parts_txt_time",ppppppppplVar5,ppppbVar6,
                 param_5,param_6,param_7,param_8);
  plVar11 = local_198;
  if ((byte ****)(param_1 + 0xd8) != &local_1a0) {
    local_198 = (long *)0x0;
    uVar3 = *(ulong *)(param_1 + 0xe0);
    *(long **)(param_1 + 0xe0) = plVar11;
    if (uVar3 != 0) {
      FUN_710392eb40(uVar3);
    }
  }
  plVar11 = local_198;
  local_1a0 = (byte ***)&PTR_FUN_710523d9a8;
  local_198 = (long *)0x0;
  if (plVar11 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar11);
  }
  FUN_71037780e0(&local_1a0,(long)plVar4,(long ****)"bottom_out",ppppppppplVar5,ppppbVar6,param_5,
                 param_6,param_7,param_8);
  plVar11 = local_198;
  if ((byte ****)(param_1 + 0xe8) != &local_1a0) {
    local_198 = (long *)0x0;
    uVar3 = *(ulong *)(param_1 + 0xf0);
    *(long **)(param_1 + 0xf0) = plVar11;
    if (uVar3 != 0) {
      FUN_710392eb40(uVar3);
    }
  }
  plVar11 = local_198;
  local_1a0 = (byte ***)&PTR_FUN_710523d9e8;
  local_198 = (long *)0x0;
  if (plVar11 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar11);
  }
  FUN_71037780e0(&local_1a0,(long)plVar4,(long ****)"time_now",ppppppppplVar5,ppppbVar6,param_5,
                 param_6,param_7,param_8);
  plVar11 = local_198;
  if ((byte ****)(param_1 + 0xf8) != &local_1a0) {
    local_198 = (long *)0x0;
    uVar3 = *(ulong *)(param_1 + 0x100);
    *(long **)(param_1 + 0x100) = plVar11;
    if (uVar3 != 0) {
      FUN_710392eb40(uVar3);
    }
  }
  plVar11 = local_198;
  local_1a0 = (byte ***)&PTR_FUN_710523d9e8;
  local_198 = (long *)0x0;
  if (plVar11 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar11);
  }
  FUN_7103778760(plVar12[2],0x71042a3845);
  lVar8 = *(long *)*puVar10;
  (**(code **)(**(long **)(lVar8 + 0x458) + 0x58))(*(undefined4 *)(lVar8 + 0x640));
  puVar13 = *(undefined8 **)(lVar8 + 0x468);
  for (puVar10 = *(undefined8 **)(lVar8 + 0x460); puVar10 != puVar13; puVar10 = puVar10 + 1) {
    plVar11 = (long *)*puVar10;
    uVar3 = (**(code **)(*plVar11 + 0x40))(plVar11);
    if ((uVar3 & 1) != 0) {
      (**(code **)(*plVar11 + 0x20))(plVar11);
    }
  }
  FUN_7103776910(&local_68,(long)plVar4,(long ****)"set_parts_timebar_rec",ppppppppplVar5,ppppbVar6,
                 param_5,param_6,param_7,param_8);
  plVar11 = local_60;
  lVar8 = *local_60;
  if (lVar8 != 0) {
    *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) & 0xfe;
  }
  uVar2 = FUN_7103779cc0((long)local_60);
  *(uint *)(param_1 + 0x178) = uVar2;
  lVar8 = *local_60;
  if (lVar8 == 0) {
    fVar15 = 0.0;
    fVar14 = 0.0;
  }
  else {
    fVar15 = ABS(*(float *)(lVar8 + 0x50) * *(float *)(lVar8 + 0x48));
    fVar14 = ABS(*(float *)(lVar8 + 0x54) * *(float *)(lVar8 + 0x4c));
  }
  *(float *)(param_1 + 0x170) = fVar15;
  *(float *)(param_1 + 0x174) = fVar14;
  lVar8 = *local_60;
  if (lVar8 == 0) {
    fVar15 = 0.0;
    fVar16 = 0.0;
    fVar18 = (float)(_ConstantZero >> 0x20);
    uVar3 = _ConstantZero;
  }
  else {
    fVar18 = *(float *)(lVar8 + 0x30);
    fVar15 = ABS(*(float *)(lVar8 + 0x50) * *(float *)(lVar8 + 0x48));
    uVar17 = *(ulong *)(lVar8 + 0x30);
    fVar16 = ABS(*(float *)(lVar8 + 0x54) * *(float *)(lVar8 + 0x4c));
    bVar1 = *(byte *)(lVar8 + 0x5b) & 3;
    if (bVar1 == 2) {
      fVar18 = fVar18 - fVar15 * 0.5;
LAB_7101b8c06c:
      uVar17 = CONCAT44((int)(uVar17 >> 0x20),fVar18);
    }
    else if (bVar1 == 1) {
      fVar18 = fVar18 + fVar15 * 0.5;
      goto LAB_7101b8c06c;
    }
    bVar1 = *(byte *)(lVar8 + 0x5b) >> 2 & 3;
    fVar18 = (float)(uVar17 >> 0x20);
    if (bVar1 == 2) {
      fVar18 = fVar16 * 0.5 + fVar18;
LAB_7101b8c09c:
      uVar17 = CONCAT44(fVar18,(int)uVar17);
    }
    else if (bVar1 == 1) {
      fVar18 = fVar18 - fVar16 * 0.5;
      goto LAB_7101b8c09c;
    }
    lVar8 = *(long *)(lVar8 + 0x18);
    if (lVar8 == 0) {
      fVar18 = (float)(uVar17 >> 0x20);
      uVar3 = uVar17;
    }
    else {
      do {
        fVar19 = (float)uVar17 + *(float *)(lVar8 + 0x30);
        uVar3 = (ulong)(uint)fVar19;
        fVar18 = (float)(uVar17 >> 0x20) + *(float *)(lVar8 + 0x34);
        uVar17 = CONCAT44(fVar18,fVar19);
        lVar8 = *(long *)(lVar8 + 0x18);
      } while (lVar8 != 0);
    }
  }
  *(undefined8 *)(param_1 + 0x168) = 0;
  *(ulong *)(param_1 + 0x160) =
       CONCAT44(((540.0 - fVar18) - fVar16 * 0.5) + fVar14 * 0.5,
                ((float)uVar3 + 960.0) - fVar15 * 0.5);
  FUN_7103776ad0(&local_1a0,(long)plVar4,(long ****)"set_parts_recbtn",ppppppppplVar5,ppppbVar6,
                 param_5,param_6,param_7,param_8);
  plVar12 = local_198;
  if ((byte ****)(param_1 + 0x108) != &local_1a0) {
    local_198 = (long *)0x0;
    uVar3 = *(ulong *)(param_1 + 0x110);
    *(long **)(param_1 + 0x110) = plVar12;
    if (uVar3 != 0) {
      FUN_710392eb40(uVar3);
    }
  }
  plVar12 = local_198;
  local_1a0 = (byte ***)&PTR_FUN_710523d9c8;
  local_198 = (long *)0x0;
  if (plVar12 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar12);
  }
  plVar12 = (long *)**(long **)(param_1 + 0x110);
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x268))(plVar12,1,0);
    plVar12 = (long *)**(long **)(param_1 + 0x110);
    if (plVar12 != (long *)0x0) {
      (**(code **)(*plVar12 + 0x2e0))(plVar12,0);
    }
  }
  local_1a0 = (byte ***)0x0;
  local_190 = 1;
  local_18c = 1;
  local_18a = 1;
  local_188 = &DAT_41f0000000000000;
  local_180 = 0;
  local_150 = (long *)0x0;
  local_120 = (long *)0x0;
  local_f0 = (long *)0x0;
  local_c0 = (long *)0x0;
  local_90 = (long *)0x0;
  local_80 = 0;
  local_198 = (long *)&DAT_00010101;
  FUN_7103770b30((long *)(param_1 + 0x118),plVar4,(long ****)"selector",&local_1a0,param_5,param_6,
                 param_7,param_8);
  FUN_71037717d0((long *)(param_1 + 0x118),0,"set_parts_recbtn",ppppbVar7,param_5,param_6,param_7,
                 param_8);
  FUN_7103771930(*(long *)(param_1 + 0x118),0,(long ****)0x6,(byte ****)0x0,param_5,param_6,param_7,
                 param_8);
  (**(code **)(**(long **)(param_1 + 0x118) + 0x60))(*(long **)(param_1 + 0x118),0);
  (**(code **)(**(long **)(param_1 + 0x118) + 0x70))(*(long **)(param_1 + 0x118),0);
  plVar4 = *(long **)(param_1 + 0x1b0);
  if (plVar4 != (long *)0x0) {
    local_54[0] = 1;
    (**(code **)(*plVar4 + 0x30))(plVar4,local_54);
  }
  *(undefined1 *)(param_1 + 0x180) = 1;
  if (alStack_b0 == local_90) {
    pcVar9 = *(code **)(*local_90 + 0x20);
LAB_7101b8c2d0:
    (*pcVar9)();
  }
  else if (local_90 != (long *)0x0) {
    pcVar9 = *(code **)(*local_90 + 0x28);
    goto LAB_7101b8c2d0;
  }
  if (alStack_e0 == local_c0) {
    pcVar9 = *(code **)(*local_c0 + 0x20);
LAB_7101b8c300:
    (*pcVar9)();
  }
  else if (local_c0 != (long *)0x0) {
    pcVar9 = *(code **)(*local_c0 + 0x28);
    goto LAB_7101b8c300;
  }
  if (alStack_110 == local_f0) {
    pcVar9 = *(code **)(*local_f0 + 0x20);
LAB_7101b8c330:
    (*pcVar9)();
  }
  else if (local_f0 != (long *)0x0) {
    pcVar9 = *(code **)(*local_f0 + 0x28);
    goto LAB_7101b8c330;
  }
  if (alStack_140 == local_120) {
    pcVar9 = *(code **)(*local_120 + 0x20);
LAB_7101b8c360:
    (*pcVar9)();
  }
  else if (local_120 != (long *)0x0) {
    pcVar9 = *(code **)(*local_120 + 0x28);
    goto LAB_7101b8c360;
  }
  if (alStack_170 == local_150) {
    pcVar9 = *(code **)(*local_150 + 0x20);
  }
  else {
    if (local_150 == (long *)0x0) goto LAB_7101b8c394;
    pcVar9 = *(code **)(*local_150 + 0x28);
  }
  (*pcVar9)();
LAB_7101b8c394:
  local_68 = &PTR_FUN_710523d9a8;
  local_60 = (long *)0x0;
  if (plVar11 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar11);
  }
  if (*(uint *)(param_1 + 0xb4) < 0x13) {
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0xb4) * 4 + 0x68) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

