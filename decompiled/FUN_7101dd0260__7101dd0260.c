// addr:      7101dd0260
// offset:    0x1dd0260
// name:      FUN_7101dd0260
// mangled:   
// signature: undefined __cdecl FUN_7101dd0260(long * param_1, undefined8 * param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101dd0260(long *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ushort uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long ****pppplVar9;
  char *pcVar10;
  byte ****ppppbVar11;
  undefined8 uVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  byte *pbVar16;
  long lVar17;
  uint uVar18;
  long lVar19;
  undefined8 *puVar20;
  long *plVar21;
  long *plVar22;
  long ***local_1f0;
  ulong local_1e8;
  byte ***local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined2 local_1c8;
  undefined1 uStack_1c6;
  undefined4 uStack_1c5;
  undefined1 uStack_1c1;
  undefined1 uStack_1c0;
  undefined1 uStack_1bf;
  undefined2 uStack_1be;
  long alStack_1b0 [4];
  long *local_190;
  long alStack_180 [4];
  long *local_160;
  long alStack_150 [4];
  long *local_130;
  long alStack_120 [4];
  long *local_100;
  long alStack_f0 [4];
  long *local_d0;
  undefined4 local_c0;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 *local_a0;
  long *local_98;
  long *local_90;
  undefined4 local_54;
  
  plVar21 = (long *)param_1[1];
  local_1d0 = CONCAT17(local_1d0._7_1_,0x1000100000001);
  ppppbVar11 = &local_1e0;
  local_1d8 = 0x101;
  local_1c8 = 0;
  uStack_1c6 = 0;
  uStack_1c5 = 0xf0000000;
  uStack_1c1 = 0x41;
  uStack_1c0 = 0;
  uStack_1bf = 0;
  uStack_1be = 0;
  local_190 = (long *)0x0;
  local_160 = (long *)0x0;
  local_130 = (long *)0x0;
  local_100 = (long *)0x0;
  local_d0 = (long *)0x0;
  local_c0 = 0;
  local_1e0 = (byte ***)0x0;
  FUN_7103770b30(plVar21,param_2,(long ****)"selector_2",ppppbVar11,param_5,param_6,param_7,param_8)
  ;
  FUN_71037717d0(plVar21,0,"set_scr_sort",ppppbVar11,param_5,param_6,param_7,param_8);
  pppplVar9 = (long ****)(ulong)*(uint *)(param_1[1] + 0x3c);
  uVar12 = 0;
  FUN_7103771930(*plVar21,0,pppplVar9,(byte ****)0x0,param_5,param_6,param_7,param_8);
  lVar13 = *(long *)(*plVar21 + 0x1b8);
  if (lVar13 != 0) {
    lVar15 = *plVar21 + 0x1b8;
    lVar17 = lVar15;
    lVar19 = lVar13;
    do {
      bVar4 = *(int *)(lVar19 + 0x20) < 0;
      if (!bVar4) {
        lVar17 = lVar19;
      }
      lVar19 = *(long *)(lVar19 + (ulong)bVar4 * 8);
    } while (lVar19 != 0);
    if (((lVar17 != lVar15) && (*(int *)(lVar17 + 0x20) < 1)) &&
       (plVar22 = *(long **)(lVar17 + 0x28), plVar22 != (long *)0x0)) {
      (**(code **)(*plVar22 + 0x208))(plVar22,1);
      pppplVar9 = (long ****)0x0;
      (**(code **)(*plVar22 + 0x388))(plVar22,0);
      lVar15 = *plVar21 + 0x1b8;
      lVar13 = *(long *)(*plVar21 + 0x1b8);
    }
    lVar17 = lVar15;
    if (lVar13 != 0) {
      do {
        bVar4 = *(int *)(lVar13 + 0x20) < 0;
        if (!bVar4) {
          lVar17 = lVar13;
        }
        lVar13 = *(long *)(lVar13 + (ulong)bVar4 * 8);
      } while (lVar13 != 0);
      if (((lVar17 != lVar15) && (*(int *)(lVar17 + 0x20) < 1)) &&
         (plVar21 = *(long **)(lVar17 + 0x28), plVar21 != (long *)0x0)) {
        (**(code **)(*plVar21 + 0x1f8))(plVar21,1);
        pppplVar9 = (long ****)0x0;
        (**(code **)(*plVar21 + 0x388))(plVar21,0);
      }
    }
  }
  FUN_7103776640(&local_1f0,(long)param_2,(byte ****)"set_scr_sort",pppplVar9,uVar12,param_5,param_6
                 ,param_7,param_8);
  uVar8 = local_1e8;
  FUN_7103778300(0x3f800000,local_1e8,0x71042a34ee);
  FUN_7103776910(&local_b0,(long)&local_1f0,(long ****)"set_txt_key",pppplVar9,uVar12,param_5,
                 param_6,param_7,param_8);
  FUN_710377a120((long)&local_b0,"mnu_spirits_itemview_sort_guide",pppplVar9,uVar12,param_5,param_6,
                 param_7,param_8);
  uVar7 = (ulong)local_a8;
  local_b0 = &PTR_FUN_710523d9a8;
  local_a8 = (code *)0x0;
  if (uVar7 != 0) {
    FUN_710392eb40(uVar7);
  }
  FUN_7103776910(&local_b0,(long)&local_1f0,(long ****)"set_txt_list",pppplVar9,uVar12,param_5,
                 param_6,param_7,param_8);
  uVar7 = (ulong)local_a8;
  lVar13 = param_1[1];
  if ((undefined8 *)(lVar13 + 8) != &local_b0) {
    local_a8 = (code *)0x0;
    uVar6 = *(ulong *)(lVar13 + 0x10);
    *(ulong *)(lVar13 + 0x10) = uVar7;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
  }
  uVar7 = (ulong)local_a8;
  local_b0 = &PTR_FUN_710523d9a8;
  local_a8 = (code *)0x0;
  if (uVar7 != 0) {
    FUN_710392eb40(uVar7);
  }
  uVar1 = *(ushort *)(*(long *)param_1[4] + 0x18);
  if (((uVar1 & 0xff) != 0) &&
     ((lVar13 = param_1[1], *(char *)(lVar13 + 0x3a) == '\0' ||
      ((ushort)*(byte *)(lVar13 + 0x3b) != uVar1 >> 8)))) {
    *(ushort *)(lVar13 + 0x3a) = uVar1;
    uVar1 = uVar1 >> 8;
    if (uVar1 < 4) {
      if (uVar1 < 5) {
                    /* WARNING: Switch is manually overridden */
        switch(uVar1) {
        case 0:
          local_a0 = (undefined8 *)0x74726f735f737469;
          local_98 = (long *)CONCAT44(local_98._4_4_,0x38315f);
          uVar5 = 0x811c9dc5;
          uVar18 = 0x6d;
          pbVar16 = (byte *)((long)&local_a8 + 1);
          do {
            uVar5 = uVar5 * 0x89 ^ uVar18;
            uVar18 = (uint)*pbVar16;
            pbVar16 = pbVar16 + 1;
          } while (uVar18 != 0);
          break;
        case 1:
          local_a0 = (undefined8 *)0x74726f735f737469;
          local_98 = (long *)CONCAT44(local_98._4_4_,0x33305f);
          uVar5 = 0x811c9dc5;
          uVar18 = 0x6d;
          pbVar16 = (byte *)((long)&local_a8 + 1);
          do {
            uVar5 = uVar5 * 0x89 ^ uVar18;
            uVar18 = (uint)*pbVar16;
            pbVar16 = pbVar16 + 1;
          } while (uVar18 != 0);
          break;
        case 2:
          local_a0 = (undefined8 *)0x74726f735f737469;
          local_98 = (long *)CONCAT44(local_98._4_4_,0x34305f);
          uVar5 = 0x811c9dc5;
          uVar18 = 0x6d;
          pbVar16 = (byte *)((long)&local_a8 + 1);
          do {
            uVar5 = uVar5 * 0x89 ^ uVar18;
            uVar18 = (uint)*pbVar16;
            pbVar16 = pbVar16 + 1;
          } while (uVar18 != 0);
          break;
        case 3:
          local_a0 = (undefined8 *)0x74726f735f737469;
          local_98 = (long *)CONCAT44(local_98._4_4_,0x32305f);
          uVar5 = 0x811c9dc5;
          uVar18 = 0x6d;
          pbVar16 = (byte *)((long)&local_a8 + 1);
          do {
            uVar5 = uVar5 * 0x89 ^ uVar18;
            uVar18 = (uint)*pbVar16;
            pbVar16 = pbVar16 + 1;
          } while (uVar18 != 0);
          break;
        case 4:
          local_a0 = (undefined8 *)0x74726f735f737469;
          local_98 = (long *)CONCAT44(local_98._4_4_,0x32325f);
          uVar5 = 0x811c9dc5;
          uVar18 = 0x6d;
          pbVar16 = (byte *)((long)&local_a8 + 1);
          do {
            uVar5 = uVar5 * 0x89 ^ uVar18;
            uVar18 = (uint)*pbVar16;
            pbVar16 = pbVar16 + 1;
          } while (uVar18 != 0);
        }
        goto LAB_7101dd05f4;
      }
      local_a8 = (code *)((ulong)local_a8 & 0xffffffffffffff00);
      local_b0 = (undefined **)0x0;
    }
    else {
      local_a0 = (undefined8 *)0x74726f735f737469;
      local_98 = (long *)CONCAT44(local_98._4_4_,0x35325f);
      uVar5 = 0x811c9dc5;
      uVar18 = 0x6d;
      pbVar16 = (byte *)((long)&local_a8 + 1);
      do {
        uVar5 = uVar5 * 0x89 ^ uVar18;
        uVar18 = (uint)*pbVar16;
        pbVar16 = pbVar16 + 1;
      } while (uVar18 != 0);
LAB_7101dd05f4:
      local_a0 = (undefined8 *)0x74726f735f737469;
      local_a8 = (code *)0x726970735f756e6d;
      local_b0 = (undefined **)CONCAT44(0x13,uVar5);
    }
    FUN_710377a120(param_1[1] + 8,(char *)&local_a8,pppplVar9,uVar12,param_5,param_6,param_7,param_8
                  );
  }
  local_1f0 = (long ***)&PTR_FUN_710523d988;
  local_1e8 = 0;
  if (uVar8 != 0) {
    uVar7 = *(ulong *)(uVar8 + 0x18);
    *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar8 + 0x18) = 0;
    if (uVar7 != 0) {
      FUN_710392eb40(uVar7);
    }
    FUN_710392eb40(uVar8);
  }
  if (alStack_f0 == local_d0) {
    pcVar14 = *(code **)(*local_d0 + 0x20);
LAB_7101dd0650:
    (*pcVar14)();
  }
  else if (local_d0 != (long *)0x0) {
    pcVar14 = *(code **)(*local_d0 + 0x28);
    goto LAB_7101dd0650;
  }
  if (alStack_120 == local_100) {
    pcVar14 = *(code **)(*local_100 + 0x20);
LAB_7101dd0680:
    (*pcVar14)();
  }
  else if (local_100 != (long *)0x0) {
    pcVar14 = *(code **)(*local_100 + 0x28);
    goto LAB_7101dd0680;
  }
  if (alStack_150 == local_130) {
    pcVar14 = *(code **)(*local_130 + 0x20);
LAB_7101dd06b0:
    (*pcVar14)();
  }
  else if (local_130 != (long *)0x0) {
    pcVar14 = *(code **)(*local_130 + 0x28);
    goto LAB_7101dd06b0;
  }
  if (alStack_180 == local_160) {
    pcVar14 = *(code **)(*local_160 + 0x20);
LAB_7101dd06e0:
    (*pcVar14)();
  }
  else if (local_160 != (long *)0x0) {
    pcVar14 = *(code **)(*local_160 + 0x28);
    goto LAB_7101dd06e0;
  }
  if (alStack_1b0 == local_190) {
    pcVar14 = *(code **)(*local_190 + 0x20);
LAB_7101dd0710:
    (*pcVar14)();
  }
  else if (local_190 != (long *)0x0) {
    pcVar14 = *(code **)(*local_190 + 0x28);
    goto LAB_7101dd0710;
  }
  lVar13 = param_1[1];
  local_1d8 = 0x4248000041800000;
  local_1c8 = 0;
  uStack_1c6 = 1;
  local_190 = (long *)0x0;
  local_160 = (long *)0x0;
  local_130 = (long *)0x0;
  local_100 = (long *)0x0;
  local_d0 = (long *)0x0;
  uStack_1bf = 0;
  local_1d0 = 0x13f800000;
  local_a0 = (undefined8 *)0x0;
  local_1e0 = (byte ***)(((ulong)((*(long **)param_1[4])[1] - **(long **)param_1[4]) >> 2) << 0x20);
  uStack_1c5 = 0x10100;
  uStack_1c1 = 0;
  uStack_1c0 = 1;
  local_b0 = (undefined **)&DAT_71050b0918;
  local_a8 = FUN_7101dd2690;
  local_98 = param_1;
  local_90 = &local_b0;
  FUN_71003cb050(&local_b0,alStack_150);
  if (&local_b0 == local_90) {
    pcVar14 = *(code **)(*local_90 + 0x20);
LAB_7101dd07d8:
    (*pcVar14)();
  }
  else if (local_90 != (long *)0x0) {
    pcVar14 = *(code **)(*local_90 + 0x28);
    goto LAB_7101dd07d8;
  }
  local_b0 = (undefined **)&DAT_7105186238;
  local_90 = &local_b0;
  FUN_71003cb050(&local_b0,alStack_120);
  if (&local_b0 == local_90) {
    pcVar14 = *(code **)(*local_90 + 0x20);
LAB_7101dd0828:
    (*pcVar14)();
  }
  else if (local_90 != (long *)0x0) {
    pcVar14 = *(code **)(*local_90 + 0x28);
    goto LAB_7101dd0828;
  }
  pppplVar9 = (long ****)param_1[2];
  pcVar10 = "scroll";
  ppppbVar11 = &local_1e0;
  FUN_7103781a20((long *)(lVar13 + 0x18),param_2,(byte ****)"scroll",ppppbVar11,pppplVar9,param_6,
                 param_7,param_8);
  lVar13 = *(long *)(lVar13 + 0x18);
  local_a8 = (code *)0x0;
  local_a0 = (undefined8 *)0x0;
  local_b0 = (undefined **)0x0;
  FUN_71019bb740(&local_b0,*(long *)(lVar13 + 0x170) - *(long *)(lVar13 + 0x168) >> 3,
                 (long ****)pcVar10,ppppbVar11,pppplVar9,param_6,param_7,param_8);
  plVar22 = *(long **)(lVar13 + 0x170);
  puVar20 = (undefined8 *)local_a8;
  for (plVar21 = *(long **)(lVar13 + 0x168); puVar2 = local_b0, puVar3 = local_b0,
      local_a8 = (code *)puVar20, plVar21 != plVar22; plVar21 = plVar21 + 1) {
    if (puVar20 == local_a0) {
      FUN_71019bb8f0(&local_b0,(undefined8 *)(*plVar21 + 8),(long ****)pcVar10,ppppbVar11,pppplVar9,
                     param_6,param_7,param_8);
    }
    else {
      FUN_7103776390(puVar20,(undefined8 *)(*plVar21 + 8),(long ****)pcVar10,ppppbVar11,pppplVar9,
                     param_6,param_7,param_8);
      local_a8 = (code *)((long)local_a8 + 0x10);
    }
    puVar20 = (undefined8 *)local_a8;
  }
  for (; local_b0 = (undefined **)puVar3, puVar2 != puVar20; puVar2 = puVar2 + 2) {
    plVar21 = (long *)FUN_710392e290(0x10,8,(long ****)pcVar10,ppppbVar11,pppplVar9,param_6,param_7,
                                     param_8);
    if (plVar21 == (long *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_54 = 0;
        local_1f0 = (long ***)&DAT_00000008;
        pcVar10 = (char *)&local_1f0;
        uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
        if (((uVar8 & 1) != 0) &&
           (plVar21 = (long *)FUN_710392e290(0x10,8,(long ****)pcVar10,ppppbVar11,pppplVar9,param_6,
                                             param_7,param_8), plVar21 != (long *)0x0))
        goto LAB_7101dd0918;
      }
      plVar21 = (long *)0x0;
    }
LAB_7101dd0918:
    *plVar21 = 0;
    lVar13 = *(long *)(puVar2[1] + 8);
    if ((lVar13 == 0) || (*(long *)(lVar13 + 0x60) == 0)) {
      *plVar21 = 0;
    }
    else {
      plVar22 = (long *)FUN_7103796f20(*(long *)(lVar13 + 0x60),*(long *)(lVar13 + 0x18) + 0xb0);
      *plVar21 = (long)plVar22;
      if (plVar22 != (long *)0x0) {
        uVar5 = 1;
        (**(code **)(*plVar22 + 0x1f8))(plVar22,1);
        uVar8 = (**(code **)(*plVar22 + 0x200))(plVar22);
        if ((uVar8 & 1) != 0) {
          uVar5 = (**(code **)(*plVar22 + 0x210))(plVar22);
          uVar5 = uVar5 ^ 1;
        }
        pcVar10 = (char *)0x0;
        (**(code **)(*plVar22 + 0x388))(plVar22,uVar5 & 1);
        plVar22 = (long *)*plVar21;
        if (plVar22 != (long *)0x0) {
          uVar5 = 1;
          (**(code **)(*plVar22 + 0x208))(plVar22,1);
          uVar8 = (**(code **)(*plVar22 + 0x200))(plVar22);
          if ((uVar8 & 1) != 0) {
            uVar5 = (**(code **)(*plVar22 + 0x210))(plVar22);
            uVar5 = uVar5 ^ 1;
          }
          pcVar10 = (char *)0x0;
          (**(code **)(*plVar22 + 0x388))(plVar22,uVar5 & 1);
          plVar22 = (long *)*plVar21;
          if (plVar22 != (long *)0x0) {
            (**(code **)(*plVar22 + 0x280))(plVar22,0);
          }
        }
      }
    }
    FUN_710392eb40((ulong)plVar21);
    puVar3 = local_b0;
  }
  puVar20 = (undefined8 *)local_a8;
  if (puVar3 != (undefined8 *)0x0) {
    while (puVar20 != puVar3) {
      puVar20 = puVar20 + -2;
      (**(code **)*puVar20)(puVar20);
    }
    local_a8 = (code *)puVar3;
    if (local_b0 != (undefined **)0x0) {
      FUN_710392eb40((ulong)local_b0);
    }
  }
  if (alStack_f0 == local_d0) {
    pcVar14 = *(code **)(*local_d0 + 0x20);
LAB_7101dd0a98:
    (*pcVar14)();
  }
  else if (local_d0 != (long *)0x0) {
    pcVar14 = *(code **)(*local_d0 + 0x28);
    goto LAB_7101dd0a98;
  }
  if (alStack_120 == local_100) {
    pcVar14 = *(code **)(*local_100 + 0x20);
LAB_7101dd0ac8:
    (*pcVar14)();
  }
  else if (local_100 != (long *)0x0) {
    pcVar14 = *(code **)(*local_100 + 0x28);
    goto LAB_7101dd0ac8;
  }
  if (alStack_150 == local_130) {
    pcVar14 = *(code **)(*local_130 + 0x20);
LAB_7101dd0af8:
    (*pcVar14)();
  }
  else if (local_130 != (long *)0x0) {
    pcVar14 = *(code **)(*local_130 + 0x28);
    goto LAB_7101dd0af8;
  }
  if (alStack_180 == local_160) {
    pcVar14 = *(code **)(*local_160 + 0x20);
LAB_7101dd0b28:
    (*pcVar14)();
  }
  else if (local_160 != (long *)0x0) {
    pcVar14 = *(code **)(*local_160 + 0x28);
    goto LAB_7101dd0b28;
  }
  if (alStack_1b0 == local_190) {
    pcVar14 = *(code **)(*local_190 + 0x20);
  }
  else {
    if (local_190 == (long *)0x0) goto LAB_7101dd0b5c;
    pcVar14 = *(code **)(*local_190 + 0x28);
  }
  (*pcVar14)();
LAB_7101dd0b5c:
                    /* WARNING: Could not recover jumptable at 0x007101dd0b88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))(param_1,0);
  return;
}

