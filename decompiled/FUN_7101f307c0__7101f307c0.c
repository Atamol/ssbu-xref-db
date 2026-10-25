// addr:      7101f307c0
// offset:    0x1f307c0
// name:      FUN_7101f307c0
// mangled:   
// signature: undefined __cdecl FUN_7101f307c0(long param_1, long param_2, long * * * * param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101f307c0(long param_1,long param_2,long ****param_3,undefined8 param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  undefined1 *puVar2;
  short *psVar3;
  int iVar4;
  undefined8 *puVar5;
  byte ****ppppbVar6;
  byte ****ppppbVar7;
  long lVar8;
  ushort *puVar9;
  code *pcVar10;
  uint uVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  ulong uVar18;
  byte ***local_180;
  ulong local_178;
  undefined4 local_170;
  undefined2 local_16c;
  undefined1 local_16a;
  undefined1 *local_168;
  undefined4 local_160;
  long alStack_150 [4];
  long *local_130;
  long alStack_120 [4];
  long *local_100;
  long alStack_f0 [4];
  long *local_d0;
  long alStack_c0 [4];
  long *local_a0;
  long alStack_90 [4];
  long *local_70;
  undefined4 local_60;
  undefined **local_50;
  ulong local_48;
  
  ppppbVar7 = &local_180;
  puVar17 = (undefined8 *)(param_1 + 0xb8);
  ppppbVar6 = (byte ****)0x1;
  FUN_71032cbf30(puVar17,param_2,(ulong *)param_3,(byte ****)0x1,param_5,param_6,param_7,param_8);
  lVar12 = *(long *)**(undefined8 **)(param_1 + 0xb8);
  *(undefined4 *)(*(long *)(lVar12 + 0x600) + 0x494) = 0;
  lVar8 = *(long *)(lVar12 + 0x608);
  lVar12 = *(long *)(lVar12 + 0x610);
  if (lVar8 != lVar12) {
    uVar14 = (lVar12 + -0x10) - lVar8;
    uVar11 = ((uint)(uVar14 >> 4) & 0xfffffff) + 1;
    if ((uVar11 & 3) != 0) {
      lVar15 = -((ulong)uVar11 & 3);
      do {
        plVar1 = (long *)(lVar8 + 8);
        lVar8 = lVar8 + 0x10;
        lVar15 = lVar15 + 1;
        *(undefined4 *)(*plVar1 + 0x494) = 0;
      } while (lVar15 != 0);
    }
    if (0x2f < uVar14) {
      do {
        *(undefined4 *)(*(long *)(lVar8 + 8) + 0x494) = 0;
        *(undefined4 *)(*(long *)(lVar8 + 0x18) + 0x494) = 0;
        *(undefined4 *)(*(long *)(lVar8 + 0x28) + 0x494) = 0;
        plVar1 = (long *)(lVar8 + 0x38);
        lVar8 = lVar8 + 0x40;
        *(undefined4 *)(*plVar1 + 0x494) = 0;
      } while (lVar12 != lVar8);
    }
  }
  FUN_71037760f0(**(long **)*puVar17,1);
  lVar12 = **(long **)*puVar17;
  *(undefined1 *)(lVar12 + 0x656) = 0;
  *(undefined1 *)(*(long *)(lVar12 + 0x600) + 0x4ab) = 0;
  lVar8 = *(long *)(lVar12 + 0x608);
  lVar15 = *(long *)(lVar12 + 0x610);
  if (lVar8 != lVar15) {
    uVar14 = (lVar15 + -0x10) - lVar8;
    uVar11 = ((uint)(uVar14 >> 4) & 0xfffffff) + 1;
    if ((uVar11 & 3) != 0) {
      lVar16 = -((ulong)uVar11 & 3);
      do {
        plVar1 = (long *)(lVar8 + 8);
        lVar8 = lVar8 + 0x10;
        lVar16 = lVar16 + 1;
        *(undefined1 *)(*plVar1 + 0x4ab) = *(undefined1 *)(lVar12 + 0x656);
      } while (lVar16 != 0);
    }
    if (0x2f < uVar14) {
      do {
        *(undefined1 *)(*(long *)(lVar8 + 8) + 0x4ab) = *(undefined1 *)(lVar12 + 0x656);
        *(undefined1 *)(*(long *)(lVar8 + 0x18) + 0x4ab) = *(undefined1 *)(lVar12 + 0x656);
        *(undefined1 *)(*(long *)(lVar8 + 0x28) + 0x4ab) = *(undefined1 *)(lVar12 + 0x656);
        plVar1 = (long *)(lVar8 + 0x38);
        lVar8 = lVar8 + 0x40;
        *(undefined1 *)(*plVar1 + 0x4ab) = *(undefined1 *)(lVar12 + 0x656);
      } while (lVar15 != lVar8);
    }
  }
  FUN_7103776640(&local_180,**(long **)(param_1 + 0xb8) + 8,(byte ****)"set_parts_text_scroll",
                 param_3,ppppbVar6,param_5,param_6,param_7,param_8);
  uVar14 = local_178;
  puVar2 = (undefined1 *)(param_1 + 0xc0);
  if ((byte ****)puVar2 != &local_180) {
    local_178 = 0;
    uVar18 = *(ulong *)(param_1 + 200);
    *(ulong *)(param_1 + 200) = uVar14;
    if (uVar18 != 0) {
      uVar14 = *(ulong *)(uVar18 + 0x18);
      *(undefined ***)(uVar18 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar18 + 0x18) = 0;
      if (uVar14 != 0) {
        FUN_710392eb40(uVar14);
      }
      FUN_710392eb40(uVar18);
    }
  }
  uVar14 = local_178;
  local_180 = (byte ***)&PTR_FUN_710523d988;
  local_178 = 0;
  if (uVar14 != 0) {
    uVar18 = *(ulong *)(uVar14 + 0x18);
    *(undefined ***)(uVar14 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar14 + 0x18) = 0;
    if (uVar18 != 0) {
      FUN_710392eb40(uVar18);
    }
    FUN_710392eb40(uVar14);
  }
  FUN_7103776910(&local_180,(long)puVar2,(long ****)"set_txt_main",param_3,ppppbVar6,param_5,param_6
                 ,param_7,param_8);
  uVar14 = local_178;
  if ((byte ****)(param_1 + 0xd0) != &local_180) {
    local_178 = 0;
    uVar18 = *(ulong *)(param_1 + 0xd8);
    *(ulong *)(param_1 + 0xd8) = uVar14;
    if (uVar18 != 0) {
      FUN_710392eb40(uVar18);
    }
  }
  uVar14 = local_178;
  local_180 = (byte ***)&PTR_FUN_710523d9a8;
  local_178 = 0;
  if (uVar14 != 0) {
    FUN_710392eb40(uVar14);
  }
  FUN_7103776910(&local_180,(long)puVar2,(long ****)"set_txt_mask",param_3,ppppbVar6,param_5,param_6
                 ,param_7,param_8);
  uVar14 = local_178;
  if ((byte ****)(param_1 + 0xe0) != &local_180) {
    local_178 = 0;
    uVar18 = *(ulong *)(param_1 + 0xe8);
    *(ulong *)(param_1 + 0xe8) = uVar14;
    if (uVar18 != 0) {
      FUN_710392eb40(uVar18);
    }
  }
  uVar14 = local_178;
  local_180 = (byte ***)&PTR_FUN_710523d9a8;
  local_178 = 0;
  if (uVar14 != 0) {
    FUN_710392eb40(uVar14);
  }
  FUN_7103776910(&local_180,**(long **)(param_1 + 0xb8) + 8,(long ****)"set_txt_date_num",param_3,
                 ppppbVar6,param_5,param_6,param_7,param_8);
  uVar14 = local_178;
  if ((byte ****)(param_1 + 0xf0) != &local_180) {
    local_178 = 0;
    uVar18 = *(ulong *)(param_1 + 0xf8);
    *(ulong *)(param_1 + 0xf8) = uVar14;
    if (uVar18 != 0) {
      FUN_710392eb40(uVar18);
    }
  }
  uVar14 = local_178;
  local_180 = (byte ***)&PTR_FUN_710523d9a8;
  local_178 = 0;
  if (uVar14 != 0) {
    FUN_710392eb40(uVar14);
  }
  FUN_7103776910(&local_180,**(long **)(param_1 + 0xb8) + 8,(long ****)"set_rep_movie",param_3,
                 ppppbVar6,param_5,param_6,param_7,param_8);
  uVar14 = local_178;
  if ((byte ****)(param_1 + 0x100) != &local_180) {
    local_178 = 0;
    uVar18 = *(ulong *)(param_1 + 0x108);
    *(ulong *)(param_1 + 0x108) = uVar14;
    if (uVar18 != 0) {
      FUN_710392eb40(uVar18);
    }
  }
  uVar14 = local_178;
  local_180 = (byte ***)&PTR_FUN_710523d9a8;
  local_178 = 0;
  if (uVar14 != 0) {
    FUN_710392eb40(uVar14);
  }
  FUN_7103776910(&local_180,**(long **)(param_1 + 0xb8) + 8,(long ****)"set_pic_thumbnail",param_3,
                 ppppbVar6,param_5,param_6,param_7,param_8);
  uVar14 = local_178;
  if ((byte ****)(param_1 + 0x110) != &local_180) {
    local_178 = 0;
    uVar18 = *(ulong *)(param_1 + 0x118);
    *(ulong *)(param_1 + 0x118) = uVar14;
    if (uVar18 != 0) {
      FUN_710392eb40(uVar18);
    }
  }
  uVar14 = local_178;
  local_180 = (byte ***)&PTR_FUN_710523d9a8;
  local_178 = 0;
  if (uVar14 != 0) {
    FUN_710392eb40(uVar14);
  }
  FUN_7103776390(&local_50,(undefined8 *)(**(long **)(param_1 + 0xb8) + 8),param_3,ppppbVar6,param_5
                 ,param_6,param_7,param_8);
  FUN_7101f3e4e0(*(undefined ****)(param_1 + 0x128),&local_50,(byte ****)"set_parts_preview",
                 (byte ****)0x1,param_5,param_6,param_7,param_8);
  uVar14 = local_48;
  local_50 = &PTR_FUN_710523d988;
  local_48 = 0;
  if (uVar14 != 0) {
    uVar18 = *(ulong *)(uVar14 + 0x18);
    *(undefined ***)(uVar14 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar14 + 0x18) = 0;
    if (uVar18 != 0) {
      FUN_710392eb40(uVar18);
    }
    FUN_710392eb40(uVar14);
  }
  lVar8 = *(long *)(*(long *)(param_1 + 200) + 8);
  if (lVar8 != 0) {
    puVar17 = *(undefined8 **)(lVar8 + 0x78);
    if (((DAT_710593ba40 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_710593ba40), iVar4 != 0)) {
      if (((DAT_710593ba48 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_710593ba48), iVar4 != 0))
      {
        DAT_710593ba50 = 0;
        __cxa_guard_release(&DAT_710593ba48);
      }
      DAT_710593ba58 = &DAT_710593ba50;
      __cxa_guard_release(&DAT_710593ba40);
    }
    if (puVar17 != (undefined8 *)0x0) {
      for (puVar5 = (undefined8 *)(**(code **)*puVar17)(puVar17); puVar5 != (undefined8 *)0x0;
          puVar5 = (undefined8 *)*puVar5) {
        if ((undefined8 **)puVar5 == &DAT_710593ba58) {
          *(undefined1 *)(puVar17 + 0xc) = 1;
          break;
        }
      }
    }
  }
  local_170 = 1;
  local_16c = 1;
  local_16a = 1;
  local_180 = (byte ***)0x0;
  local_178 = 0x101;
  local_168 = &DAT_41f0000000000000;
  local_160 = 0;
  local_130 = (long *)0x0;
  local_100 = (long *)0x0;
  local_d0 = (long *)0x0;
  local_a0 = (long *)0x0;
  local_70 = (long *)0x0;
  local_60 = 0;
  FUN_710337df20((long)&local_180);
  plVar1 = (long *)(param_1 + 0x130);
  FUN_7103770b30(plVar1,(undefined8 *)(**(long **)(param_1 + 0xb8) + 8),(long ****)"selector_00",
                 &local_180,param_5,param_6,param_7,param_8);
  FUN_71037717d0(plVar1,1,"set_parts_btn_00",ppppbVar7,param_5,param_6,param_7,param_8);
  FUN_71037717d0(plVar1,2,"set_parts_btn_01",ppppbVar7,param_5,param_6,param_7,param_8);
  FUN_71037717d0(plVar1,3,"set_parts_btn_02",ppppbVar7,param_5,param_6,param_7,param_8);
  (**(code **)(**(long **)(param_1 + 0x130) + 0x60))(*(long **)(param_1 + 0x130),0);
  (**(code **)(**(long **)(param_1 + 0x130) + 0x70))(*(long **)(param_1 + 0x130),0);
  FUN_71037ab600(param_1 + 0x148,0x200,(byte *)"mnu_replay_movie_edit_keyboard_title_sample",0);
  for (uVar14 = 0; psVar3 = (short *)(param_1 + 0x148 + uVar14 * 2), *psVar3 != 0;
      uVar14 = uVar14 + 2) {
    if ((0x1fe < (int)uVar14 + 1U) || (psVar3[1] == 0)) {
      uVar14 = (ulong)((int)uVar14 + 1);
      break;
    }
  }
  *(undefined2 *)(param_1 + (uVar14 & 0xffffffff) * 2 + 0x148) = 0;
  uVar13 = (uint)*(ushort *)(param_1 + 0x148);
  uVar11 = 0x811c9dc5;
  *(int *)(param_1 + 0x144) = (int)uVar14;
  if (*(ushort *)(param_1 + 0x148) != 0) {
    puVar9 = (ushort *)(param_1 + 0x14a);
    do {
      uVar11 = uVar11 * 0x89 ^ uVar13;
      uVar13 = (uint)*puVar9;
      puVar9 = puVar9 + 1;
    } while (uVar13 != 0);
  }
  *(uint *)(param_1 + 0x140) = uVar11;
  FUN_7103778760(*(long *)(**(long **)(param_1 + 0xb8) + 0x10),0x710428ff7d);
  if (alStack_90 == local_70) {
    pcVar10 = *(code **)(*local_70 + 0x20);
LAB_7101f30da8:
    (*pcVar10)();
  }
  else if (local_70 != (long *)0x0) {
    pcVar10 = *(code **)(*local_70 + 0x28);
    goto LAB_7101f30da8;
  }
  if (alStack_c0 == local_a0) {
    pcVar10 = *(code **)(*local_a0 + 0x20);
LAB_7101f30dd8:
    (*pcVar10)();
  }
  else if (local_a0 != (long *)0x0) {
    pcVar10 = *(code **)(*local_a0 + 0x28);
    goto LAB_7101f30dd8;
  }
  if (alStack_f0 == local_d0) {
    pcVar10 = *(code **)(*local_d0 + 0x20);
LAB_7101f30e08:
    (*pcVar10)();
  }
  else if (local_d0 != (long *)0x0) {
    pcVar10 = *(code **)(*local_d0 + 0x28);
    goto LAB_7101f30e08;
  }
  if (alStack_120 == local_100) {
    pcVar10 = *(code **)(*local_100 + 0x20);
  }
  else {
    if (local_100 == (long *)0x0) goto LAB_7101f30e3c;
    pcVar10 = *(code **)(*local_100 + 0x28);
  }
  (*pcVar10)();
LAB_7101f30e3c:
  if (alStack_150 == local_130) {
    pcVar10 = *(code **)(*local_130 + 0x20);
  }
  else {
    if (local_130 == (long *)0x0) {
      return;
    }
    pcVar10 = *(code **)(*local_130 + 0x28);
  }
  (*pcVar10)();
  return;
}

