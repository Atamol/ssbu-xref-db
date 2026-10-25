// addr:      7101b414f0
// offset:    0x1b414f0
// name:      FUN_7101b414f0
// mangled:   
// signature: undefined __cdecl FUN_7101b414f0(undefined8 * param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101b414f0(undefined8 *param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long *plVar2;
  long *__s;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  uint uVar7;
  long ****pppplVar8;
  long ****pppplVar9;
  long ****pppplVar10;
  long ****pppplVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined1 auVar18 [16];
  long ***local_70;
  ulong local_68;
  undefined4 local_54;
  
  pppplVar9 = &local_70;
  pppplVar8 = &local_70;
  pppplVar10 = &local_70;
  pppplVar11 = &local_70;
  *param_1 = &PTR_FUN_71050aacd8;
  param_1[1] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0x1ffffffff;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar7 = (uint)param_3;
  *(undefined1 *)(param_1 + 0xb) = 0;
  param_1[0xf] = param_2;
  *(undefined1 *)(param_1 + 0xe) = 1;
  param_1[9] = 0;
  param_1[10] = 0;
  plVar3 = (long *)FUN_710392e290(0x10,0x1f8,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar3 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_54 = 0;
      local_70 = (long ***)&DAT_000001f8;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
      param_3 = pppplVar9;
      if (((uVar4 & 1) != 0) &&
         (plVar3 = (long *)FUN_710392e290(0x10,0x1f8,pppplVar9,param_4,param_5,param_6,param_7,
                                          param_8), param_3 = pppplVar9, plVar3 != (long *)0x0))
      goto LAB_7101b415a4;
    }
    plVar3 = (long *)0x0;
  }
LAB_7101b415a4:
  *plVar3 = (long)param_1;
  plVar2 = plVar3 + 2;
  *(uint *)(plVar3 + 1) = ~uVar7 & 1;
  puVar5 = (undefined8 *)FUN_710392e290(0x10,8,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar13 = extraout_x1;
  if (puVar5 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_54 = 0;
      local_70 = (long ***)&DAT_00000008;
      auVar18 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
      uVar13 = auVar18._8_8_;
      param_3 = pppplVar8;
      if (((auVar18._0_8_ & 1) != 0) &&
         (puVar5 = (undefined8 *)
                   FUN_710392e290(0x10,8,pppplVar8,param_4,param_5,param_6,param_7,param_8),
         uVar13 = extraout_x1_00, param_3 = pppplVar8, puVar5 != (undefined8 *)0x0))
      goto LAB_7101b4160c;
    }
    puVar5 = (undefined8 *)0x0;
  }
LAB_7101b4160c:
  FUN_7103773200(puVar5,uVar13,param_3,param_4,param_5,param_6,param_7,param_8);
  plVar3[2] = (long)puVar5;
  FUN_7101414b10(plVar3 + 3,plVar2,param_3,param_4,param_5,param_6,param_7,param_8);
  __s = plVar3 + 5;
  pppplVar9 = (long ****)&DAT_000001b0;
  memset(__s,0,0x1b0);
  FUN_7101b42450(__s,extraout_x1_01,pppplVar9,param_4,param_5,param_6,param_7,param_8);
  plVar3[0x3d] = 0;
  plVar3[0x3e] = 0;
  plVar3[0x3b] = (long)&PTR_FUN_710523d9a8;
  plVar3[0x3c] = 0;
  puVar5 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar5 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_54 = 0;
      local_70 = (long ***)&SUB_00000020;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
      pppplVar9 = pppplVar10;
      if (((uVar4 & 1) != 0) &&
         (puVar5 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar10,param_4,param_5,param_6,param_7,param_8),
         pppplVar9 = pppplVar10, puVar5 != (undefined8 *)0x0)) goto LAB_7101b416a4;
    }
    puVar5 = (undefined8 *)0x0;
  }
LAB_7101b416a4:
  puVar5[2] = 0;
  puVar5[3] = 0;
  *puVar5 = 0;
  puVar5[1] = 0;
  plVar3[0x3c] = (long)puVar5;
  plVar3[0x3d] = (long)&PTR_FUN_710523d9a8;
  puVar5 = (undefined8 *)FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  if (puVar5 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_54 = 0;
      local_70 = (long ***)&SUB_00000020;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
      if (((uVar4 & 1) != 0) &&
         (puVar5 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,pppplVar11,param_4,param_5,param_6,param_7,param_8),
         puVar5 != (undefined8 *)0x0)) goto LAB_7101b41704;
    }
    puVar5 = (undefined8 *)0x0;
  }
LAB_7101b41704:
  puVar5[2] = 0;
  puVar5[3] = 0;
  *puVar5 = 0;
  puVar5[1] = 0;
  plVar3[0x3e] = (long)puVar5;
  if ((int)plVar3[1] == 1) {
    puVar12 = &DAT_7104544960;
    uVar13 = 1;
    FUN_71032cbf30(plVar2,**(long **)(*plVar3 + 0x78),(ulong *)&DAT_7104544960,(byte ****)0x1,
                   param_5,param_6,param_7,param_8);
    lVar14 = **(long **)plVar3[2];
    *(undefined1 *)(lVar14 + 0x656) = 0;
    *(undefined1 *)(*(long *)(lVar14 + 0x600) + 0x4ab) = 0;
    lVar15 = *(long *)(lVar14 + 0x608);
    lVar16 = *(long *)(lVar14 + 0x610);
    if (lVar15 != lVar16) {
      uVar4 = (lVar16 + -0x10) - lVar15;
      uVar7 = ((uint)(uVar4 >> 4) & 0xfffffff) + 1;
      if ((uVar7 & 3) != 0) {
        lVar17 = -((ulong)uVar7 & 3);
        do {
          plVar1 = (long *)(lVar15 + 8);
          lVar15 = lVar15 + 0x10;
          lVar17 = lVar17 + 1;
          *(undefined1 *)(*plVar1 + 0x4ab) = *(undefined1 *)(lVar14 + 0x656);
        } while (lVar17 != 0);
      }
      if (0x2f < uVar4) {
        do {
          *(undefined1 *)(*(long *)(lVar15 + 8) + 0x4ab) = *(undefined1 *)(lVar14 + 0x656);
          *(undefined1 *)(*(long *)(lVar15 + 0x18) + 0x4ab) = *(undefined1 *)(lVar14 + 0x656);
          *(undefined1 *)(*(long *)(lVar15 + 0x28) + 0x4ab) = *(undefined1 *)(lVar14 + 0x656);
          plVar1 = (long *)(lVar15 + 0x38);
          lVar15 = lVar15 + 0x40;
          *(undefined1 *)(*plVar1 + 0x4ab) = *(undefined1 *)(lVar14 + 0x656);
        } while (lVar16 != lVar15);
      }
    }
    FUN_71037780e0(&local_70,*(long *)*plVar2 + 8,(long ****)&DAT_7104421055,puVar12,uVar13,param_5,
                   param_6,param_7,param_8);
    uVar4 = local_68;
    if (&local_70 != (long ****)__s) {
      local_68 = 0;
      uVar6 = plVar3[6];
      plVar3[6] = uVar4;
      if (uVar6 != 0) {
        FUN_710392eb40(uVar6);
      }
    }
    uVar4 = local_68;
    local_70 = (long ***)&PTR_FUN_710523d9e8;
    local_68 = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_71037780e0(&local_70,*(long *)plVar3[2] + 8,(long ****)&DAT_710428ff7d,puVar12,uVar13,
                   param_5,param_6,param_7,param_8);
    uVar4 = local_68;
    if (&local_70 != (long ****)(plVar3 + 7)) {
      local_68 = 0;
      uVar6 = plVar3[8];
      plVar3[8] = uVar4;
      if (uVar6 != 0) {
        FUN_710392eb40(uVar6);
      }
    }
    uVar4 = local_68;
    local_70 = (long ***)&PTR_FUN_710523d9e8;
    local_68 = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_71037780e0(&local_70,*(long *)plVar3[2] + 8,(long ****)"on_noise",puVar12,uVar13,param_5,
                   param_6,param_7,param_8);
    uVar4 = local_68;
    if (&local_70 != (long ****)(plVar3 + 9)) {
      local_68 = 0;
      uVar6 = plVar3[10];
      plVar3[10] = uVar4;
      if (uVar6 != 0) {
        FUN_710392eb40(uVar6);
      }
    }
    uVar4 = local_68;
    local_70 = (long ***)&PTR_FUN_710523d9e8;
    local_68 = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_71037780e0(&local_70,*(long *)plVar3[2] + 8,(long ****)"on_fox",puVar12,uVar13,param_5,
                   param_6,param_7,param_8);
    uVar4 = local_68;
    if (&local_70 != (long ****)(plVar3 + 0xb)) {
      local_68 = 0;
      uVar6 = plVar3[0xc];
      plVar3[0xc] = uVar4;
      if (uVar6 != 0) {
        FUN_710392eb40(uVar6);
      }
    }
    uVar4 = local_68;
    local_70 = (long ***)&PTR_FUN_710523d9e8;
    local_68 = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_71037780e0(&local_70,*(long *)plVar3[2] + 8,(long ****)"on_peppy",puVar12,uVar13,param_5,
                   param_6,param_7,param_8);
    uVar4 = local_68;
    if (&local_70 != (long ****)(plVar3 + 0xd)) {
      local_68 = 0;
      uVar6 = plVar3[0xe];
      plVar3[0xe] = uVar4;
      if (uVar6 != 0) {
        FUN_710392eb40(uVar6);
      }
    }
    uVar4 = local_68;
    local_70 = (long ***)&PTR_FUN_710523d9e8;
    local_68 = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_71037780e0(&local_70,*(long *)plVar3[2] + 8,(long ****)"on_slippy",puVar12,uVar13,param_5,
                   param_6,param_7,param_8);
    uVar4 = local_68;
    if (&local_70 != (long ****)(plVar3 + 0xf)) {
      local_68 = 0;
      uVar6 = plVar3[0x10];
      plVar3[0x10] = uVar4;
      if (uVar6 != 0) {
        FUN_710392eb40(uVar6);
      }
    }
    uVar4 = local_68;
    local_70 = (long ***)&PTR_FUN_710523d9e8;
    local_68 = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_71037780e0(&local_70,*(long *)plVar3[2] + 8,(long ****)"on_falco",puVar12,uVar13,param_5,
                   param_6,param_7,param_8);
    uVar4 = local_68;
    if (&local_70 != (long ****)(plVar3 + 0x11)) {
      local_68 = 0;
      uVar6 = plVar3[0x12];
      plVar3[0x12] = uVar4;
      if (uVar6 != 0) {
        FUN_710392eb40(uVar6);
      }
    }
    uVar4 = local_68;
    local_70 = (long ***)&PTR_FUN_710523d9e8;
    local_68 = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_71037780e0(&local_70,*(long *)plVar3[2] + 8,(long ****)"on_krystal",puVar12,uVar13,param_5,
                   param_6,param_7,param_8);
    uVar4 = local_68;
    if (&local_70 != (long ****)(plVar3 + 0x13)) {
      local_68 = 0;
      uVar6 = plVar3[0x14];
      plVar3[0x14] = uVar4;
      if (uVar6 != 0) {
        FUN_710392eb40(uVar6);
      }
    }
    uVar4 = local_68;
    local_70 = (long ***)&PTR_FUN_710523d9e8;
    local_68 = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_71037780e0(&local_70,*(long *)plVar3[2] + 8,(long ****)"on_wolf",puVar12,uVar13,param_5,
                   param_6,param_7,param_8);
    uVar4 = local_68;
    if (&local_70 != (long ****)(plVar3 + 0x15)) {
      local_68 = 0;
      uVar6 = plVar3[0x16];
      plVar3[0x16] = uVar4;
      if (uVar6 != 0) {
        FUN_710392eb40(uVar6);
      }
    }
    uVar4 = local_68;
    local_70 = (long ***)&PTR_FUN_710523d9e8;
    local_68 = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_71037780e0(&local_70,*(long *)plVar3[2] + 8,(long ****)"on_panther",puVar12,uVar13,param_5,
                   param_6,param_7,param_8);
    uVar4 = local_68;
    if (&local_70 != (long ****)(plVar3 + 0x17)) {
      local_68 = 0;
      uVar6 = plVar3[0x18];
      plVar3[0x18] = uVar4;
      if (uVar6 != 0) {
        FUN_710392eb40(uVar6);
      }
    }
    uVar4 = local_68;
    local_70 = (long ***)&PTR_FUN_710523d9e8;
    local_68 = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_71037780e0(&local_70,*(long *)plVar3[2] + 8,(long ****)"on_nus64",puVar12,uVar13,param_5,
                   param_6,param_7,param_8);
    uVar4 = local_68;
    if (&local_70 != (long ****)(plVar3 + 0x19)) {
      local_68 = 0;
      uVar6 = plVar3[0x1a];
      plVar3[0x1a] = uVar4;
      if (uVar6 != 0) {
        FUN_710392eb40(uVar6);
      }
    }
    uVar4 = local_68;
    local_70 = (long ***)&PTR_FUN_710523d9e8;
    local_68 = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_71037780e0(&local_70,*(long *)plVar3[2] + 8,(long ****)"on_leon",puVar12,uVar13,param_5,
                   param_6,param_7,param_8);
    uVar4 = local_68;
    if (&local_70 != (long ****)(plVar3 + 0x1b)) {
      local_68 = 0;
      uVar6 = plVar3[0x1c];
      plVar3[0x1c] = uVar4;
      if (uVar6 != 0) {
        FUN_710392eb40(uVar6);
      }
    }
    uVar4 = local_68;
    local_70 = (long ***)&PTR_FUN_710523d9e8;
    local_68 = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_71037780e0(&local_70,*(long *)plVar3[2] + 8,(long ****)"loop_noise",puVar12,uVar13,param_5,
                   param_6,param_7,param_8);
    uVar4 = local_68;
    if (&local_70 != (long ****)(plVar3 + 0x1d)) {
      local_68 = 0;
      uVar6 = plVar3[0x1e];
      plVar3[0x1e] = uVar4;
      if (uVar6 != 0) {
        FUN_710392eb40(uVar6);
      }
    }
    uVar4 = local_68;
    local_70 = (long ***)&PTR_FUN_710523d9e8;
    local_68 = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_71037780e0(&local_70,*(long *)plVar3[2] + 8,(long ****)"loop_eye_00",puVar12,uVar13,param_5,
                   param_6,param_7,param_8);
    uVar4 = local_68;
    if (&local_70 != (long ****)(plVar3 + 0x1f)) {
      local_68 = 0;
      uVar6 = plVar3[0x20];
      plVar3[0x20] = uVar4;
      if (uVar6 != 0) {
        FUN_710392eb40(uVar6);
      }
    }
    uVar4 = local_68;
    local_70 = (long ***)&PTR_FUN_710523d9e8;
    local_68 = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_71037780e0(&local_70,*(long *)plVar3[2] + 8,(long ****)"loop_eye_01",puVar12,uVar13,param_5,
                   param_6,param_7,param_8);
    uVar4 = local_68;
    if (&local_70 != (long ****)(plVar3 + 0x21)) {
      local_68 = 0;
      uVar6 = plVar3[0x22];
      plVar3[0x22] = uVar4;
      if (uVar6 != 0) {
        FUN_710392eb40(uVar6);
      }
    }
    uVar4 = local_68;
    local_70 = (long ***)&PTR_FUN_710523d9e8;
    local_68 = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_71037780e0(&local_70,*(long *)plVar3[2] + 8,(long ****)"loop_eye_02",puVar12,uVar13,param_5,
                   param_6,param_7,param_8);
    uVar4 = local_68;
    if (&local_70 != (long ****)(plVar3 + 0x23)) {
      local_68 = 0;
      uVar6 = plVar3[0x24];
      plVar3[0x24] = uVar4;
      if (uVar6 != 0) {
        FUN_710392eb40(uVar6);
      }
    }
    uVar4 = local_68;
    local_70 = (long ***)&PTR_FUN_710523d9e8;
    local_68 = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_71037780e0(&local_70,*(long *)plVar3[2] + 8,(long ****)"loop_eye_03",puVar12,uVar13,param_5,
                   param_6,param_7,param_8);
    if (&local_70 != (long ****)(plVar3 + 0x25)) {
      uVar4 = plVar3[0x26];
      plVar3[0x26] = local_68;
joined_r0x007101b4201c:
      local_68 = 0;
      if (uVar4 != 0) {
        local_68 = 0;
        FUN_710392eb40(uVar4);
      }
    }
  }
  else {
    if ((int)plVar3[1] != 0) goto LAB_7101b42428;
    puVar12 = &DAT_7104544958;
    uVar13 = 0;
    FUN_71032cbf30(plVar2,**(long **)(*plVar3 + 0x78),(ulong *)&DAT_7104544958,(byte ****)0x0,
                   param_5,param_6,param_7,param_8);
    FUN_71037780e0(&local_70,*(long *)plVar3[2] + 8,(long ****)&DAT_7104421055,puVar12,uVar13,
                   param_5,param_6,param_7,param_8);
    uVar4 = local_68;
    if (&local_70 != (long ****)__s) {
      local_68 = 0;
      uVar6 = plVar3[6];
      plVar3[6] = uVar4;
      if (uVar6 != 0) {
        FUN_710392eb40(uVar6);
      }
    }
    uVar4 = local_68;
    local_70 = (long ***)&PTR_FUN_710523d9e8;
    local_68 = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_71037780e0(&local_70,*(long *)plVar3[2] + 8,(long ****)&DAT_710428ff7d,puVar12,uVar13,
                   param_5,param_6,param_7,param_8);
    uVar4 = local_68;
    if (&local_70 != (long ****)(plVar3 + 7)) {
      local_68 = 0;
      uVar6 = plVar3[8];
      plVar3[8] = uVar4;
      if (uVar6 != 0) {
        FUN_710392eb40(uVar6);
      }
    }
    uVar4 = local_68;
    local_70 = (long ***)&PTR_FUN_710523d9e8;
    local_68 = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_71037780e0(&local_70,*(long *)plVar3[2] + 8,(long ****)"on_noise",puVar12,uVar13,param_5,
                   param_6,param_7,param_8);
    uVar4 = local_68;
    if (&local_70 != (long ****)(plVar3 + 9)) {
      local_68 = 0;
      uVar6 = plVar3[10];
      plVar3[10] = uVar4;
      if (uVar6 != 0) {
        FUN_710392eb40(uVar6);
      }
    }
    uVar4 = local_68;
    local_70 = (long ***)&PTR_FUN_710523d9e8;
    local_68 = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_71037780e0(&local_70,*(long *)plVar3[2] + 8,(long ****)"on_fox",puVar12,uVar13,param_5,
                   param_6,param_7,param_8);
    uVar4 = local_68;
    if (&local_70 != (long ****)(plVar3 + 0xb)) {
      local_68 = 0;
      uVar6 = plVar3[0xc];
      plVar3[0xc] = uVar4;
      if (uVar6 != 0) {
        FUN_710392eb40(uVar6);
      }
    }
    uVar4 = local_68;
    local_70 = (long ***)&PTR_FUN_710523d9e8;
    local_68 = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_71037780e0(&local_70,*(long *)plVar3[2] + 8,(long ****)"on_peppy",puVar12,uVar13,param_5,
                   param_6,param_7,param_8);
    uVar4 = local_68;
    if (&local_70 != (long ****)(plVar3 + 0xd)) {
      local_68 = 0;
      uVar6 = plVar3[0xe];
      plVar3[0xe] = uVar4;
      if (uVar6 != 0) {
        FUN_710392eb40(uVar6);
      }
    }
    uVar4 = local_68;
    local_70 = (long ***)&PTR_FUN_710523d9e8;
    local_68 = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_71037780e0(&local_70,*(long *)plVar3[2] + 8,(long ****)"on_slippy",puVar12,uVar13,param_5,
                   param_6,param_7,param_8);
    uVar4 = local_68;
    if (&local_70 != (long ****)(plVar3 + 0xf)) {
      local_68 = 0;
      uVar6 = plVar3[0x10];
      plVar3[0x10] = uVar4;
      if (uVar6 != 0) {
        FUN_710392eb40(uVar6);
      }
    }
    uVar4 = local_68;
    local_70 = (long ***)&PTR_FUN_710523d9e8;
    local_68 = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_71037780e0(&local_70,*(long *)plVar3[2] + 8,(long ****)"on_falco",puVar12,uVar13,param_5,
                   param_6,param_7,param_8);
    uVar4 = local_68;
    if (&local_70 != (long ****)(plVar3 + 0x11)) {
      local_68 = 0;
      uVar6 = plVar3[0x12];
      plVar3[0x12] = uVar4;
      if (uVar6 != 0) {
        FUN_710392eb40(uVar6);
      }
    }
    uVar4 = local_68;
    local_70 = (long ***)&PTR_FUN_710523d9e8;
    local_68 = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_71037780e0(&local_70,*(long *)plVar3[2] + 8,(long ****)"loop_noise",puVar12,uVar13,param_5,
                   param_6,param_7,param_8);
    if (&local_70 != (long ****)(plVar3 + 0x1d)) {
      uVar4 = plVar3[0x1e];
      plVar3[0x1e] = local_68;
      goto joined_r0x007101b4201c;
    }
  }
  uVar4 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = 0;
  if (uVar4 != 0) {
    FUN_710392eb40(uVar4);
  }
  FUN_71037780e0(&local_70,*(long *)plVar3[2] + 8,(long ****)"loop_mouth_00",puVar12,uVar13,param_5,
                 param_6,param_7,param_8);
  uVar4 = local_68;
  if (&local_70 != (long ****)(plVar3 + 0x27)) {
    local_68 = 0;
    uVar6 = plVar3[0x28];
    plVar3[0x28] = uVar4;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
  }
  uVar4 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = 0;
  if (uVar4 != 0) {
    FUN_710392eb40(uVar4);
  }
  FUN_71037780e0(&local_70,*(long *)plVar3[2] + 8,(long ****)"loop_mouth_01",puVar12,uVar13,param_5,
                 param_6,param_7,param_8);
  uVar4 = local_68;
  if (&local_70 != (long ****)(plVar3 + 0x29)) {
    local_68 = 0;
    uVar6 = plVar3[0x2a];
    plVar3[0x2a] = uVar4;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
  }
  uVar4 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = 0;
  if (uVar4 != 0) {
    FUN_710392eb40(uVar4);
  }
  FUN_71037780e0(&local_70,*(long *)plVar3[2] + 8,(long ****)"loop_mouth_02",puVar12,uVar13,param_5,
                 param_6,param_7,param_8);
  uVar4 = local_68;
  if (&local_70 != (long ****)(plVar3 + 0x2b)) {
    local_68 = 0;
    uVar6 = plVar3[0x2c];
    plVar3[0x2c] = uVar4;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
  }
  uVar4 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = 0;
  if (uVar4 != 0) {
    FUN_710392eb40(uVar4);
  }
  FUN_71037780e0(&local_70,*(long *)plVar3[2] + 8,(long ****)"loop_mouth_03",puVar12,uVar13,param_5,
                 param_6,param_7,param_8);
  uVar4 = local_68;
  if (&local_70 != (long ****)(plVar3 + 0x2d)) {
    local_68 = 0;
    uVar6 = plVar3[0x2e];
    plVar3[0x2e] = uVar4;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
  }
  uVar4 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = 0;
  if (uVar4 != 0) {
    FUN_710392eb40(uVar4);
  }
  FUN_71037780e0(&local_70,*(long *)plVar3[2] + 8,(long ****)"serif_speed_00",puVar12,uVar13,param_5
                 ,param_6,param_7,param_8);
  uVar4 = local_68;
  if (&local_70 != (long ****)(plVar3 + 0x2f)) {
    local_68 = 0;
    uVar6 = plVar3[0x30];
    plVar3[0x30] = uVar4;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
  }
  uVar4 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = 0;
  if (uVar4 != 0) {
    FUN_710392eb40(uVar4);
  }
  FUN_71037780e0(&local_70,*(long *)plVar3[2] + 8,(long ****)"serif_speed_01",puVar12,uVar13,param_5
                 ,param_6,param_7,param_8);
  uVar4 = local_68;
  if (&local_70 != (long ****)(plVar3 + 0x31)) {
    local_68 = 0;
    uVar6 = plVar3[0x32];
    plVar3[0x32] = uVar4;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
  }
  uVar4 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = 0;
  if (uVar4 != 0) {
    FUN_710392eb40(uVar4);
  }
  FUN_71037780e0(&local_70,*(long *)plVar3[2] + 8,(long ****)"serif_speed_02",puVar12,uVar13,param_5
                 ,param_6,param_7,param_8);
  uVar4 = local_68;
  if (&local_70 != (long ****)(plVar3 + 0x33)) {
    local_68 = 0;
    uVar6 = plVar3[0x34];
    plVar3[0x34] = uVar4;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
  }
  uVar4 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = 0;
  if (uVar4 != 0) {
    FUN_710392eb40(uVar4);
  }
  FUN_71037780e0(&local_70,*(long *)plVar3[2] + 8,(long ****)"serif_speed_03",puVar12,uVar13,param_5
                 ,param_6,param_7,param_8);
  uVar4 = local_68;
  if (&local_70 != (long ****)(plVar3 + 0x35)) {
    local_68 = 0;
    uVar6 = plVar3[0x36];
    plVar3[0x36] = uVar4;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
  }
  uVar4 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = 0;
  if (uVar4 != 0) {
    FUN_710392eb40(uVar4);
  }
  FUN_71037780e0(&local_70,*(long *)plVar3[2] + 8,(long ****)"serif_speed_04",puVar12,uVar13,param_5
                 ,param_6,param_7,param_8);
  uVar4 = local_68;
  if (&local_70 != (long ****)(plVar3 + 0x37)) {
    local_68 = 0;
    uVar6 = plVar3[0x38];
    plVar3[0x38] = uVar4;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
  }
  uVar4 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = 0;
  if (uVar4 != 0) {
    FUN_710392eb40(uVar4);
  }
  FUN_71037780e0(&local_70,*(long *)plVar3[2] + 8,(long ****)"serif_speed_05",puVar12,uVar13,param_5
                 ,param_6,param_7,param_8);
  uVar4 = local_68;
  if (&local_70 != (long ****)(plVar3 + 0x39)) {
    local_68 = 0;
    uVar6 = plVar3[0x3a];
    plVar3[0x3a] = uVar4;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
  }
  uVar4 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9e8;
  local_68 = 0;
  if (uVar4 != 0) {
    FUN_710392eb40(uVar4);
  }
  FUN_7103776910(&local_70,*(long *)*plVar2 + 8,(long ****)"set_txt_chara",puVar12,uVar13,param_5,
                 param_6,param_7,param_8);
  uVar4 = local_68;
  if (&local_70 != (long ****)(plVar3 + 0x3b)) {
    local_68 = 0;
    uVar6 = plVar3[0x3c];
    plVar3[0x3c] = uVar4;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
  }
  uVar4 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9a8;
  local_68 = 0;
  if (uVar4 != 0) {
    FUN_710392eb40(uVar4);
  }
  FUN_7103776910(&local_70,*(long *)*plVar2 + 8,(long ****)"set_txt_serif",puVar12,uVar13,param_5,
                 param_6,param_7,param_8);
  uVar4 = local_68;
  if (&local_70 != (long ****)(plVar3 + 0x3d)) {
    local_68 = 0;
    uVar6 = plVar3[0x3e];
    plVar3[0x3e] = uVar4;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
  }
  uVar4 = local_68;
  local_70 = (long ***)&PTR_FUN_710523d9a8;
  local_68 = 0;
  if (uVar4 != 0) {
    FUN_710392eb40(uVar4);
  }
  FUN_710377aee0(0x3f800000,(long)(plVar3 + 0x1d));
LAB_7101b42428:
  param_1[0x10] = plVar3;
  return;
}

