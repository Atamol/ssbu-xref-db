// addr:      7101c44ff0
// offset:    0x1c44ff0
// name:      FUN_7101c44ff0
// mangled:   
// signature: undefined __cdecl FUN_7101c44ff0(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101c44ff0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  char *pcVar5;
  ulong uVar6;
  char *pcVar7;
  long lVar8;
  byte ****ppppbVar9;
  long ****pppplVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  uint uVar14;
  long *plVar15;
  long lVar16;
  float fVar17;
  undefined **local_1d0;
  ulong local_1c8;
  byte ***local_1c0;
  ulong local_1b8;
  undefined4 local_1b0;
  undefined2 local_1ac;
  undefined1 local_1aa;
  undefined1 *local_1a8;
  undefined4 local_1a0;
  long alStack_190 [4];
  long *local_170;
  long alStack_160 [4];
  long *local_140;
  long alStack_130 [4];
  long *local_110;
  long alStack_100 [4];
  long *local_e0;
  long alStack_d0 [4];
  long *local_b0;
  undefined4 local_a0;
  undefined **local_88;
  ulong local_80;
  ulong local_78;
  undefined **local_70;
  ulong local_68;
  ulong local_58;
  
  lVar16 = **(long **)(param_1 + 0x528);
  lVar4 = lVar16 + 8;
  if (DAT_71052c4c58 == 0) {
    uVar14 = 0;
  }
  else {
    fVar17 = (float)NEON_ucvtf(*(undefined4 *)
                                (*(long *)(*(long *)(DAT_71052c4c58 + 8) + 0xa8) + 0x2984));
    uVar14 = (uint)(fVar17 / 100.0);
  }
  FUN_7103776910(&local_1c0,lVar4,(long ****)"set_txt_title",param_3,param_4,param_5,param_6,param_7
                 ,param_8);
  lVar13 = param_1 + 0x15c;
  FUN_710377a310((long)&local_1c0,1);
  uVar2 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9a8;
  local_1b8 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  FUN_7103776640(&local_70,lVar4,(byte ****)"set_parts_lct",lVar13,param_4,param_5,param_6,param_7,
                 param_8);
  FUN_7103776910(&local_1c0,(long)&local_70,(long ****)"set_txt_score",lVar13,param_4,param_5,
                 param_6,param_7,param_8);
  uVar6 = (ulong)uVar14;
  FUN_710377a310((long)&local_1c0,1);
  uVar2 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9a8;
  local_1b8 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  uVar2 = local_68;
  local_70 = &PTR_FUN_710523d988;
  local_68 = 0;
  if (uVar2 != 0) {
    uVar3 = *(ulong *)(uVar2 + 0x18);
    *(undefined ***)(uVar2 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar2 + 0x18) = 0;
    if (uVar3 != 0) {
      FUN_710392eb40(uVar3);
    }
    FUN_710392eb40(uVar2);
  }
  local_58 = 0;
  FUN_7103741810(*(undefined8 *)(param_1 + 0x270),&local_58);
  local_78 = 0;
  FUN_7103741810(*(undefined8 *)(param_1 + 0x278),&local_78);
  lVar13 = (local_58 & 0xfff) * 1000000 + (local_58 >> 0xc & 0xf) * 1000 + (local_58 >> 0x10 & 0x1f)
  ;
  lVar8 = (local_58 >> 0x15 & 0x1f) * 1000000 + (local_58 >> 0x1a & 0x3f) * 1000 +
          (local_58 >> 0x20 & 0x3f);
  pppplVar10 = (long ****)
               ((local_78 >> 0x15 & 0x1f) * 1000000 + (local_78 >> 0x1a & 0x3f) * 1000 +
               (local_78 >> 0x20 & 0x3f));
  FUN_7103776910(&local_1c0,lVar4,(long ****)"set_txt_term",uVar6,param_4,param_5,param_6,param_7,
                 param_8);
  FUN_710377a310((long)&local_1c0,3);
  uVar2 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d9a8;
  local_1b8 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  FUN_7103776640(&local_1c0,lVar4,(byte ****)"set_parts_btn_00",lVar13,lVar8,pppplVar10,param_6,
                 param_7,param_8);
  FUN_7103776910(&local_70,(long)&local_1c0,(long ****)"set_txt_00",lVar13,lVar8,pppplVar10,param_6,
                 param_7,param_8);
  uVar2 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d988;
  local_1b8 = 0;
  if (uVar2 != 0) {
    uVar6 = *(ulong *)(uVar2 + 0x18);
    *(undefined ***)(uVar2 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar2 + 0x18) = 0;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
    FUN_710392eb40(uVar2);
  }
  FUN_7103776640(&local_1c0,lVar4,(byte ****)"set_parts_btn_01",lVar13,lVar8,pppplVar10,param_6,
                 param_7,param_8);
  FUN_7103776910(&local_88,(long)&local_1c0,(long ****)"set_txt_00",lVar13,lVar8,pppplVar10,param_6,
                 param_7,param_8);
  uVar2 = local_1b8;
  local_1c0 = (byte ***)&PTR_FUN_710523d988;
  local_1b8 = 0;
  if (uVar2 != 0) {
    uVar6 = *(ulong *)(uVar2 + 0x18);
    *(undefined ***)(uVar2 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar2 + 0x18) = 0;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
    FUN_710392eb40(uVar2);
  }
  local_1b0 = 1;
  local_1ac = 1;
  local_1aa = 1;
  local_1c0 = (byte ***)0x0;
  local_1b8 = 0x101;
  local_1a8 = &DAT_41f0000000000000;
  local_1a0 = 0;
  local_170 = (long *)0x0;
  local_140 = (long *)0x0;
  local_110 = (long *)0x0;
  local_e0 = (long *)0x0;
  local_b0 = (long *)0x0;
  local_a0 = 0;
  FUN_710337df20((long)&local_1c0);
  plVar1 = (long *)(param_1 + 0x530);
  pcVar7 = "selector";
  ppppbVar9 = &local_1c0;
  FUN_7103770b30(plVar1,(undefined8 *)(**(long **)(param_1 + 0x528) + 8),(long ****)"selector",
                 ppppbVar9,pppplVar10,param_6,param_7,param_8);
  if ((*(uint *)(param_1 + 0x520) & 0xfffffffe) == 2) {
    pcVar5 = "btn_disp_1";
    if (*(char *)(param_1 + 0x651) != '\0') {
      pcVar5 = "btn_disp_2";
    }
    FUN_7103778300(0x3f800000,*(long *)(lVar16 + 0x10),(long)pcVar5);
    FUN_710377a120((long)&local_70,"mnu_convention_top_info_btn",pcVar7,ppppbVar9,pppplVar10,param_6
                   ,param_7,param_8);
    FUN_710377a120((long)&local_88,"mnu_convention_top_result_btn",pcVar7,ppppbVar9,pppplVar10,
                   param_6,param_7,param_8);
    FUN_71037717d0(plVar1,1,"set_parts_btn_00",ppppbVar9,pppplVar10,param_6,param_7,param_8);
    pcVar7 = "set_parts_btn_01";
    FUN_71037717d0(plVar1,2,"set_parts_btn_01",ppppbVar9,pppplVar10,param_6,param_7,param_8);
    if (*(int *)(param_1 + 0x538) + 1U < 2) {
      *(undefined4 *)(param_1 + 0x538) = 1;
    }
    if (*(char *)(param_1 + 0x651) == '\0') {
      lVar13 = *(long *)(*plVar1 + 0x1b8);
      if (lVar13 != 0) {
        lVar8 = *plVar1 + 0x1b8;
        lVar11 = lVar8;
        do {
          if (0 < *(int *)(lVar13 + 0x20)) {
            lVar11 = lVar13;
          }
          lVar13 = *(long *)(lVar13 + (ulong)(*(int *)(lVar13 + 0x20) < 1) * 8);
        } while (lVar13 != 0);
        if (((lVar11 != lVar8) && (*(int *)(lVar11 + 0x20) < 2)) &&
           (plVar15 = *(long **)(lVar11 + 0x28), plVar15 != (long *)0x0)) {
          (**(code **)(*plVar15 + 0x1f8))(plVar15,0);
          pcVar7 = (char *)0x0;
          (**(code **)(*plVar15 + 0x388))(plVar15,1);
        }
      }
      *(undefined4 *)(param_1 + 0x538) = 2;
    }
  }
  else {
    FUN_7103778300(0x3f800000,*(long *)(lVar16 + 0x10),0x71042c4db8);
    FUN_710377a120((long)&local_70,"mnu_convention_top_info_btn",pcVar7,ppppbVar9,pppplVar10,param_6
                   ,param_7,param_8);
    FUN_710377a120((long)&local_88,"mnu_convention_top_join_btn",pcVar7,ppppbVar9,pppplVar10,param_6
                   ,param_7,param_8);
    FUN_71037717d0(plVar1,1,"set_parts_btn_00",ppppbVar9,pppplVar10,param_6,param_7,param_8);
    pcVar7 = "set_parts_btn_01";
    FUN_71037717d0(plVar1,0,"set_parts_btn_01",ppppbVar9,pppplVar10,param_6,param_7,param_8);
    if ((*(int *)(param_1 + 0x538) == 2) || (*(int *)(param_1 + 0x538) == -1)) {
      *(undefined4 *)(param_1 + 0x538) = 1;
    }
  }
  FUN_7103776910(&local_1d0,lVar4,(long ****)"set_txt_status",pcVar7,ppppbVar9,pppplVar10,param_6,
                 param_7,param_8);
  switch(*(undefined4 *)(param_1 + 0x520)) {
  case 0:
    lVar4 = *(long *)(lVar16 + 0x10);
    pcVar5 = "type_1";
    goto LAB_7101c454b0;
  case 1:
    FUN_7103778300(0x3f800000,*(long *)(lVar16 + 0x10),0x710436cbbd);
    pcVar5 = "mnu_convention_top_in_session";
    break;
  case 2:
    FUN_7103778300(0x3f800000,*(long *)(lVar16 + 0x10),0x710438ca38);
    pcVar5 = "mnu_convention_top_aggregate";
    break;
  case 3:
    FUN_7103778300(0x3f800000,*(long *)(lVar16 + 0x10),0x71042a37d6);
    pcVar5 = "mnu_convention_top_entry_closed";
    break;
  default:
    lVar4 = *(long *)(lVar16 + 0x10);
    pcVar5 = "type_3";
LAB_7101c454b0:
    FUN_7103778300(0x3f800000,lVar4,(long)pcVar5);
    pcVar5 = "mnu_convention_top_date";
  }
  FUN_710377a120((long)&local_1d0,pcVar5,pcVar7,ppppbVar9,pppplVar10,param_6,param_7,param_8);
  (**(code **)(**(long **)(param_1 + 0x530) + 0x60))(*(long **)(param_1 + 0x530),1);
  (**(code **)(**(long **)(param_1 + 0x530) + 0x70))(*(long **)(param_1 + 0x530),1);
  FUN_7103771a80(plVar1,*(int *)(param_1 + 0x538),1);
  FUN_7101c456b0(param_1,*(int *)(param_1 + 0x538),0,ppppbVar9,pppplVar10,param_6,param_7,param_8);
  uVar2 = local_1c8;
  local_1d0 = &PTR_FUN_710523d9a8;
  local_1c8 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  if (alStack_d0 == local_b0) {
    pcVar12 = *(code **)(*local_b0 + 0x20);
LAB_7101c455ac:
    (*pcVar12)();
  }
  else if (local_b0 != (long *)0x0) {
    pcVar12 = *(code **)(*local_b0 + 0x28);
    goto LAB_7101c455ac;
  }
  if (alStack_100 == local_e0) {
    pcVar12 = *(code **)(*local_e0 + 0x20);
LAB_7101c455dc:
    (*pcVar12)();
  }
  else if (local_e0 != (long *)0x0) {
    pcVar12 = *(code **)(*local_e0 + 0x28);
    goto LAB_7101c455dc;
  }
  if (alStack_130 == local_110) {
    pcVar12 = *(code **)(*local_110 + 0x20);
LAB_7101c4560c:
    (*pcVar12)();
  }
  else if (local_110 != (long *)0x0) {
    pcVar12 = *(code **)(*local_110 + 0x28);
    goto LAB_7101c4560c;
  }
  if (alStack_160 == local_140) {
    pcVar12 = *(code **)(*local_140 + 0x20);
LAB_7101c4563c:
    (*pcVar12)();
  }
  else if (local_140 != (long *)0x0) {
    pcVar12 = *(code **)(*local_140 + 0x28);
    goto LAB_7101c4563c;
  }
  if (alStack_190 == local_170) {
    pcVar12 = *(code **)(*local_170 + 0x20);
  }
  else {
    if (local_170 == (long *)0x0) goto LAB_7101c45670;
    pcVar12 = *(code **)(*local_170 + 0x28);
  }
  (*pcVar12)();
LAB_7101c45670:
  uVar2 = local_80;
  local_88 = &PTR_FUN_710523d9a8;
  local_80 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  uVar2 = local_68;
  local_70 = &PTR_FUN_710523d9a8;
  local_68 = 0;
  if (uVar2 != 0) {
    FUN_710392eb40(uVar2);
  }
  return;
}

