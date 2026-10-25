// addr:      7101e62bd0
// offset:    0x1e62bd0
// name:      FUN_7101e62bd0
// mangled:   
// signature: undefined __cdecl FUN_7101e62bd0(undefined8 * param_1)


void FUN_7101e62bd0(undefined8 *param_1)

{
  undefined8 *puVar1;
  char cVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  ulong uVar6;
  ushort uVar7;
  int iVar8;
  undefined *puVar9;
  char *pcVar10;
  undefined8 uVar11;
  char *pcVar12;
  byte ****ppppbVar13;
  long ****in_x4;
  long ****pppplVar14;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar15;
  char *pcVar16;
  ulong uVar17;
  code *pcVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  long *plVar22;
  long lVar23;
  long lVar24;
  long *plVar25;
  long *plVar26;
  undefined **local_1c0;
  ulong local_1b8;
  byte ***local_1b0;
  undefined8 local_1a8;
  char *local_1a0;
  undefined1 *local_198;
  undefined4 local_190;
  long alStack_180 [4];
  long *local_160;
  long alStack_150 [4];
  long *local_130;
  long alStack_120 [4];
  long *local_100;
  long alStack_f0 [4];
  long *local_d0;
  long alStack_c0 [4];
  long *local_a0;
  undefined4 local_90;
  undefined **local_80;
  ulong local_78;
  undefined ***local_60;
  
  puVar9 = &DAT_7104545b80;
  uVar11 = 1;
  FUN_71032cbf30(param_1 + 0x36,*(long *)*param_1,(ulong *)&DAT_7104545b80,(byte ****)0x1,in_x4,
                 in_x5,in_x6,in_x7);
  lVar15 = *(long *)param_1[0x36];
  puVar1 = param_1 + 0x37;
  if (puVar1 != (undefined8 *)(lVar15 + 8)) {
    *(undefined8 *)param_1[0x38] = **(undefined8 **)(lVar15 + 0x10);
    *(undefined8 *)(param_1[0x38] + 8) = *(undefined8 *)(*(long *)(lVar15 + 0x10) + 8);
    lVar20 = *(long *)(lVar15 + 0x10);
    lVar15 = param_1[0x38];
    if (lVar15 != lVar20) {
      **(undefined8 **)(lVar15 + 0x18) = **(undefined8 **)(lVar20 + 0x18);
      *(undefined8 *)(*(long *)(lVar15 + 0x18) + 8) = *(undefined8 *)(*(long *)(lVar20 + 0x18) + 8);
      *(undefined8 *)(*(long *)(lVar15 + 0x18) + 0x10) =
           *(undefined8 *)(*(long *)(lVar20 + 0x18) + 0x10);
      *(undefined8 *)(*(long *)(lVar15 + 0x18) + 0x18) =
           *(undefined8 *)(*(long *)(lVar20 + 0x18) + 0x18);
    }
  }
  lVar15 = **(long **)param_1[0x36];
  *(undefined4 *)(*(long *)(lVar15 + 0x600) + 0x20) = 0xff0000f;
  *(undefined4 *)(*(long *)(lVar15 + 0x600) + 0x18) = 0x10;
  *(undefined4 *)(*(long *)(lVar15 + 0x600) + 0x1c) = 0x40000;
  *(undefined4 *)(*(long *)(lVar15 + 0x600) + 0x10) = 0x20;
  *(undefined4 *)(*(long *)(lVar15 + 0x600) + 0x14) = 0x40;
  FUN_7103776640(&local_1c0,(long)puVar1,(byte ****)"header_band",puVar9,uVar11,in_x4,in_x5,in_x6,
                 in_x7);
  bVar3 = *(byte *)(param_1[0x53] + 8);
  FUN_7103776910(&local_80,(long)&local_1c0,(long ****)"set_txt_title",puVar9,uVar11,in_x4,in_x5,
                 in_x6,in_x7);
  FUN_71003a4ca0((uint *)&local_1b0,"cam_searchfield%d_field_name",(ulong)bVar3,puVar9,uVar11,in_x4,
                 in_x5,in_x6,in_x7);
  FUN_710377a120((long)&local_80,(char *)&local_1a8,puVar9,uVar11,in_x4,in_x5,in_x6,in_x7);
  uVar17 = local_78;
  local_80 = &PTR_FUN_710523d9a8;
  local_78 = 0;
  if (uVar17 != 0) {
    FUN_710392eb40(uVar17);
  }
  uVar17 = local_1b8;
  local_1c0 = &PTR_FUN_710523d988;
  local_1b8 = 0;
  if (uVar17 != 0) {
    uVar6 = *(ulong *)(uVar17 + 0x18);
    *(undefined ***)(uVar17 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar17 + 0x18) = 0;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
    FUN_710392eb40(uVar17);
  }
  local_1b0 = (byte ***)0x7104401b7d;
  local_1a8 = "set_parts_cursor";
  local_1a0 = "set_parts_slot_%02d";
  local_198 = (undefined1 *)CONCAT44(local_198._4_4_,0x1010204);
  FUN_7101e9aa40(param_1 + 0x39,puVar1,&local_1b0,uVar11,in_x4,in_x5,in_x6,in_x7);
  *(undefined8 *)param_1[0x3e] = *(undefined8 *)param_1[0x38];
  *(undefined8 *)(param_1[0x3e] + 8) = *(undefined8 *)(param_1[0x38] + 8);
  lVar20 = param_1[0x38];
  lVar15 = param_1[0x3e];
  if (lVar15 != lVar20) {
    **(undefined8 **)(lVar15 + 0x18) = **(undefined8 **)(lVar20 + 0x18);
    *(undefined8 *)(*(long *)(lVar15 + 0x18) + 8) = *(undefined8 *)(*(long *)(lVar20 + 0x18) + 8);
    *(undefined8 *)(*(long *)(lVar15 + 0x18) + 0x10) =
         *(undefined8 *)(*(long *)(lVar20 + 0x18) + 0x10);
    *(undefined8 *)(*(long *)(lVar15 + 0x18) + 0x18) =
         *(undefined8 *)(*(long *)(lVar20 + 0x18) + 0x18);
  }
  pcVar10 = "selector_menu";
  pcVar12 = "set_parts_menu_%02d";
  FUN_7101e965f0((long)(param_1 + 0x3b),puVar1,(long ****)"selector_menu","set_parts_menu_%02d",
                 in_x4,in_x5,in_x6,in_x7);
  *(undefined1 *)(param_1[0x3c] + 8) = 1;
  *(undefined1 *)(param_1[0x3c] + 0x50) = 0;
  *(undefined1 *)(param_1 + 0x3f) = 0;
  FUN_7103778300(0x3f800000,param_1[0x3e],0x71043e07cf);
  pcVar16 = (char *)(param_1[0x3c] + 8);
  bVar4 = *pcVar16 != '\x01';
  FUN_710377a120((long)(pcVar16 + (ulong)bVar4 * 0x48 + 0x18),"cam_searchfield_go",pcVar10,pcVar12,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_710377a120((long)(pcVar16 + (ulong)bVar4 * 0x48 + 0x28),"cam_searchfield_go",pcVar10,pcVar12,
                 in_x4,in_x5,in_x6,in_x7);
  FUN_710377a120((long)(pcVar16 + (ulong)bVar4 * 0x48 + 0x38),"cam_searchfield_go",pcVar10,pcVar12,
                 in_x4,in_x5,in_x6,in_x7);
  pcVar16 = (char *)(param_1[0x3c] + 8);
  cVar2 = *pcVar16;
  FUN_7103778300(0x3f800000,*(long *)(pcVar16 + (ulong)(cVar2 != '\x01') * 0x48 + 0x10),0x710433a880
                );
  FUN_7103778300(0x3f800000,*(long *)(pcVar16 + (ulong)(cVar2 != '\x01') * 0x48 + 0x10),0x7104433776
                );
  FUN_7101e96fc0((long)(param_1 + 0x3b),'\x01',pcVar10,pcVar12,in_x4,in_x5,in_x6,in_x7);
  ppppbVar13 = (byte ****)0x0;
  FUN_7103771930(*(long *)param_1[0x3c],(uint)((char)((long *)param_1[0x3c])[1] != '\x01'),
                 (long ****)&DAT_00000007,(byte ****)0x0,in_x4,in_x5,in_x6,in_x7);
  local_1b0 = (byte ***)0xf57a523f5;
  FUN_7103772070(*(long *)param_1[0x3c],(uint)((char)((long *)param_1[0x3c])[1] != '\x01'),
                 (long ****)&local_1b0,ppppbVar13,in_x4,in_x5,in_x6,in_x7);
  plVar26 = (long *)param_1[0x3c];
  bVar4 = (char)plVar26[1] != '\0';
  lVar15 = *(long *)(*plVar26 + 0x1b8);
  if (lVar15 != 0) {
    lVar20 = *plVar26 + 0x1b8;
    lVar19 = lVar20;
    lVar23 = lVar15;
    do {
      uVar5 = (uint)bVar4;
      if ((int)uVar5 <= *(int *)(lVar23 + 0x20)) {
        lVar19 = lVar23;
      }
      lVar23 = *(long *)(lVar23 + (ulong)(*(int *)(lVar23 + 0x20) < (int)uVar5) * 8);
    } while (lVar23 != 0);
    uVar5 = (uint)bVar4;
    if (((lVar19 != lVar20) && (*(int *)(lVar19 + 0x20) <= (int)uVar5)) &&
       (plVar25 = *(long **)(lVar19 + 0x28), plVar25 != (long *)0x0)) {
      (**(code **)(*plVar25 + 0x208))(plVar25,0);
      (**(code **)(*plVar25 + 0x388))(plVar25,1,0);
      lVar20 = *plVar26 + 0x1b8;
      lVar15 = *(long *)(*plVar26 + 0x1b8);
    }
    lVar19 = lVar20;
    if (lVar15 != 0) {
      do {
        if ((int)uVar5 <= *(int *)(lVar15 + 0x20)) {
          lVar19 = lVar15;
        }
        lVar15 = *(long *)(lVar15 + (ulong)(*(int *)(lVar15 + 0x20) < (int)uVar5) * 8);
      } while (lVar15 != 0);
      if (((lVar19 != lVar20) && (*(int *)(lVar19 + 0x20) <= (int)uVar5)) &&
         (plVar26 = *(long **)(lVar19 + 0x28), plVar26 != (long *)0x0)) {
        (**(code **)(*plVar26 + 0x1f8))(plVar26,0);
        (**(code **)(*plVar26 + 0x388))(plVar26,1,0);
      }
    }
  }
  *(undefined1 *)(param_1[0x3c] + 0x98) = 0;
  pppplVar14 = (long ****)(ulong)*(byte *)(param_1[0x53] + 8);
  ppppbVar13 = (byte ****)0x2;
  FUN_7101e945c0(param_1 + 0x42,(long)puVar1,(byte ****)"set_parts_talk",2,pppplVar14,in_x5,in_x6,
                 in_x7);
  lVar15 = *(long *)(*DAT_7105329fa0 + 0x858);
  uVar17 = (ulong)*(byte *)(param_1[0x53] + 8);
  uVar6 = (*(long *)(*DAT_7105329fa0 + 0x860) - lVar15 >> 4) * -0x5555555555555555;
  if (uVar6 < uVar17 || uVar6 - uVar17 == 0) {
LAB_7101e63104:
    uVar7 = 0xffff;
  }
  else {
    lVar20 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
    uVar5 = FUN_71032a7800(lVar20,*(ulong *)(lVar15 + uVar17 * 0x30));
    if ((uint)((int)((ulong)(*(long *)(lVar20 + 0x28) - *(long *)(lVar20 + 0x20)) >> 6) *
              -0x33333333) <= uVar5) goto LAB_7101e63104;
    uVar7 = *(ushort *)(*(long *)(lVar20 + 0x20) + (ulong)uVar5 * 0x140);
  }
  FUN_7101e95dd0(param_1 + 0x42,uVar7,(long *)*param_1,ppppbVar13,pppplVar14,in_x5,in_x6,in_x7);
  FUN_7101e95110(param_1 + 0x46,puVar1,(long ****)"selector_return",(byte ****)"set_btn_return",
                 pppplVar14,in_x5,in_x6,in_x7);
  FUN_7103778300(0x3f800000,*(long *)(param_1[0x46] + 0x10),0x71043adec5);
  (**(code **)(**(long **)param_1[0x46] + 0x60))(*(long **)param_1[0x46],0);
  *(undefined4 *)(param_1 + 0x49) = 3;
  local_1a0 = (char *)CONCAT17(local_1a0._7_1_,0x1000100000001);
  local_1b0 = (byte ***)0x0;
  local_198 = &DAT_41f0000000000000;
  local_1a8 = (char *)0x101;
  local_190 = 0;
  local_160 = (long *)0x0;
  local_130 = (long *)0x0;
  local_100 = (long *)0x0;
  local_d0 = (long *)0x0;
  local_a0 = (long *)0x0;
  local_90 = 0;
  local_80 = (undefined **)&DAT_7105186040;
  local_60 = &local_80;
  FUN_7101989a30((long *)&local_80,alStack_150);
  if (&local_80 == local_60) {
    pcVar18 = (code *)(*local_60)[4];
LAB_7101e631f8:
    (*pcVar18)();
  }
  else if (local_60 != (undefined ***)0x0) {
    pcVar18 = (code *)(*local_60)[5];
    goto LAB_7101e631f8;
  }
  plVar26 = param_1 + 0x48;
  ppppbVar13 = &local_1b0;
  local_1a8._0_3_ = CONCAT12(1,(undefined2)local_1a8);
  FUN_7103770b30(plVar26,puVar1,(long ****)"selector_keyhelp",ppppbVar13,pppplVar14,in_x5,in_x6,
                 in_x7);
  FUN_71037717d0(plVar26,*(int *)(param_1 + 0x49),"btn_keyhelp_remove",ppppbVar13,pppplVar14,in_x5,
                 in_x6,in_x7);
  lVar15 = param_1[0x48];
  iVar8 = *(int *)(param_1 + 0x49);
  lVar20 = *(long *)(lVar15 + 0x1b8);
  if (lVar20 != 0) {
    lVar19 = lVar15 + 0x1b8;
    lVar23 = lVar19;
    lVar24 = lVar20;
    do {
      if (iVar8 <= *(int *)(lVar24 + 0x20)) {
        lVar23 = lVar24;
      }
      lVar24 = *(long *)(lVar24 + (ulong)(*(int *)(lVar24 + 0x20) < iVar8) * 8);
    } while (lVar24 != 0);
    if (((lVar23 != lVar19) && (*(int *)(lVar23 + 0x20) <= iVar8)) &&
       (plVar25 = *(long **)(lVar23 + 0x28), plVar25 != (long *)0x0)) {
      (**(code **)(*plVar25 + 0x208))(plVar25,1);
      (**(code **)(*plVar25 + 0x388))(plVar25,0,0);
      lVar15 = param_1[0x48];
      iVar8 = *(int *)(param_1 + 0x49);
      lVar19 = lVar15 + 0x1b8;
      lVar20 = *(long *)(lVar15 + 0x1b8);
    }
    lVar23 = lVar19;
    if (lVar20 != 0) {
      do {
        if (iVar8 <= *(int *)(lVar20 + 0x20)) {
          lVar23 = lVar20;
        }
        lVar20 = *(long *)(lVar20 + (ulong)(*(int *)(lVar20 + 0x20) < iVar8) * 8);
      } while (lVar20 != 0);
      if (((lVar23 != lVar19) && (*(int *)(lVar23 + 0x20) <= iVar8)) &&
         (plVar25 = *(long **)(lVar23 + 0x28), plVar25 != (long *)0x0)) {
        (**(code **)(*plVar25 + 0x1f8))(plVar25,1);
        (**(code **)(*plVar25 + 0x388))(plVar25,0,0);
        iVar8 = *(int *)(param_1 + 0x49);
        lVar15 = param_1[0x48];
      }
    }
  }
  FUN_7103771930(lVar15,iVar8,(long ****)0x6,(byte ****)0x0,pppplVar14,in_x5,in_x6,in_x7);
  if (alStack_c0 == local_a0) {
    pcVar18 = *(code **)(*local_a0 + 0x20);
LAB_7101e63368:
    (*pcVar18)();
  }
  else if (local_a0 != (long *)0x0) {
    pcVar18 = *(code **)(*local_a0 + 0x28);
    goto LAB_7101e63368;
  }
  if (alStack_f0 == local_d0) {
    pcVar18 = *(code **)(*local_d0 + 0x20);
LAB_7101e63398:
    (*pcVar18)();
  }
  else if (local_d0 != (long *)0x0) {
    pcVar18 = *(code **)(*local_d0 + 0x28);
    goto LAB_7101e63398;
  }
  if (alStack_120 == local_100) {
    pcVar18 = *(code **)(*local_100 + 0x20);
LAB_7101e633c8:
    (*pcVar18)();
  }
  else if (local_100 != (long *)0x0) {
    pcVar18 = *(code **)(*local_100 + 0x28);
    goto LAB_7101e633c8;
  }
  if (alStack_150 == local_130) {
    pcVar18 = *(code **)(*local_130 + 0x20);
LAB_7101e633f8:
    (*pcVar18)();
  }
  else if (local_130 != (long *)0x0) {
    pcVar18 = *(code **)(*local_130 + 0x28);
    goto LAB_7101e633f8;
  }
  if (alStack_180 == local_160) {
    pcVar18 = *(code **)(*local_160 + 0x20);
  }
  else {
    if (local_160 == (long *)0x0) goto LAB_7101e6342c;
    pcVar18 = *(code **)(*local_160 + 0x28);
  }
  (*pcVar18)();
LAB_7101e6342c:
  plVar25 = (long *)param_1[0x48];
  plVar22 = (long *)plVar25[0x37];
  if (plVar22 != (long *)0x0) {
    iVar8 = *(int *)(param_1 + 0x49);
    plVar21 = plVar25 + 0x37;
    do {
      if (iVar8 <= (int)plVar22[4]) {
        plVar21 = plVar22;
      }
      plVar22 = (long *)plVar22[(int)plVar22[4] < iVar8];
    } while (plVar22 != (long *)0x0);
    if (((plVar21 != plVar25 + 0x37) && ((int)plVar21[4] <= iVar8)) &&
       (plVar22 = (long *)plVar21[5], plVar22 != (long *)0x0)) {
      (**(code **)(*plVar22 + 0x208))(plVar22,0);
      (**(code **)(*plVar22 + 0x388))(plVar22,1,0);
      plVar25 = (long *)*plVar26;
    }
  }
  (**(code **)(*plVar25 + 0x60))(plVar25,0);
  *(undefined1 *)((long)param_1 + 0x24c) = 0;
  return;
}

