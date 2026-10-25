// addr:      7101d727a0
// offset:    0x1d727a0
// name:      FUN_7101d727a0
// mangled:   
// signature: undefined __cdecl FUN_7101d727a0(long param_1, undefined4 param_2, long * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Removing unreachable block (ram,0x007101d729bc) */
/* WARNING: Removing unreachable block (ram,0x007101d729c0) */

void FUN_7101d727a0(long param_1,undefined4 param_2,long *param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long **pplVar1;
  long ***ppplVar2;
  long *plVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  long **pplVar7;
  undefined ***pppuVar8;
  char *pcVar9;
  undefined8 extraout_x1;
  undefined **ppuVar10;
  long *********ppppppppplVar11;
  byte ****ppppbVar12;
  undefined4 uVar13;
  code *pcVar14;
  int iVar15;
  ulong uVar16;
  byte *pbVar17;
  uint uVar18;
  long lVar19;
  long *plVar20;
  long *plVar21;
  long lVar22;
  ulong uVar23;
  long *plVar24;
  long lVar25;
  byte ***local_1e0;
  ulong local_1d8;
  undefined8 local_1d0;
  undefined1 *local_1c8;
  ulong local_1c0;
  undefined1 local_1b8;
  long alStack_1b0 [4];
  long *local_190;
  undefined **ppuStack_180;
  undefined8 local_178;
  char local_170 [16];
  undefined ***local_160;
  long alStack_150 [4];
  long *local_130;
  long lStack_128;
  long local_120;
  long lStack_118;
  long local_110;
  long lStack_108;
  long *local_100;
  long lStack_f8;
  long **local_f0;
  undefined4 local_e8;
  undefined4 local_e0;
  long ***local_d0;
  undefined4 local_c0;
  undefined **local_b0;
  long *local_a8;
  undefined ***local_90;
  
  ppppbVar12 = &local_1e0;
  plVar21 = *(long **)(param_1 + 0x80);
  *(undefined4 *)(plVar21 + 0x52) = param_2;
  lVar22 = *param_3;
  plVar21[0x54] = param_3[1];
  plVar21[0x53] = lVar22;
  lVar22 = param_3[2];
  lVar25 = param_3[3];
  lVar19 = param_3[4];
  *(char *)(plVar21 + 0x58) = (char)param_3[5];
  plVar21[0x57] = lVar19;
  plVar21[0x56] = lVar25;
  plVar21[0x55] = lVar22;
  lVar22 = param_3[6];
  lVar25 = param_3[7];
  *(int *)(plVar21 + 0x5b) = (int)param_3[8];
  plVar21[0x5a] = lVar25;
  plVar21[0x59] = lVar22;
  if (plVar21 + 0x53 != param_3) {
    FUN_7101d71ea0(plVar21 + 0x5c,(void *)param_3[9],(long ****)param_3[10],param_4,param_5,param_6,
                   param_7,param_8);
    FUN_7101796d70((uint *)(plVar21 + 0x5f),(ushort *)(param_3 + 0xd));
    plVar21[0x66] = param_3[0x13];
    FUN_710184cdd0(plVar21 + 0x67,(void *)param_3[0x14],(long ****)param_3[0x15],param_4,param_5,
                   param_6,param_7,param_8);
  }
  lVar22 = param_3[0x17];
  *(undefined4 *)(plVar21 + 0x6b) = 0xffffffff;
  *(char *)(plVar21 + 0x6a) = (char)lVar22;
  *(undefined2 *)((long)plVar21 + 0x35c) = 1;
  memset(&local_1e0,0,0x108);
  local_1d8 = 0xd9ffff0000000000;
  local_1d0 = 0;
  local_1c8 = (undefined1 *)((ulong)local_1c8 & 0xffffffffffffff00);
  local_1b8 = 0;
  local_1c0 = 0;
  local_170[0] = '\0';
  local_178 = 0;
  local_f0 = &local_130;
  local_e8 = 0;
  local_e0 = 0;
  local_100 = (long *)0x0;
  lStack_f8 = 0;
  local_110 = 0;
  lStack_108 = 0;
  local_120 = 0;
  lStack_118 = 0;
  local_130 = (long *)0x0;
  lStack_128 = 0;
  *(undefined1 *)(plVar21 + 0x6f) = 0;
  plVar21[0x6e] = 0;
  plVar21[0x6d] = -0x2600010000000000;
  plVar21[0x6c] = (long)local_1e0;
  if ((byte ****)(plVar21 + 0x6c) != &local_1e0) {
    uVar5 = 0x811c9dc5;
    *(undefined1 *)(plVar21 + 0x71) = 0;
    plVar21[0x70] = 0x811c9dc5;
    for (uVar16 = 0; local_170[uVar16] != '\0'; uVar16 = uVar16 + 2) {
      *(char *)((long)plVar21 + uVar16 + 0x3d0) = local_170[uVar16];
      if (0x3e < (int)uVar16 + 1U) {
        uVar16 = (ulong)((int)uVar16 + 1);
        break;
      }
      if (local_170[uVar16 + 1] == '\0') {
        uVar16 = uVar16 + 1;
        break;
      }
      *(char *)((long)plVar21 + uVar16 + 0x3d1) = local_170[uVar16 + 1];
    }
    *(undefined1 *)((long)plVar21 + (uVar16 & 0xffffffff) + 0x3d0) = 0;
    uVar18 = (uint)*(byte *)(plVar21 + 0x7a);
    *(int *)((long)plVar21 + 0x3cc) = (int)uVar16;
    if (*(byte *)(plVar21 + 0x7a) != 0) {
      pbVar17 = (byte *)((long)plVar21 + 0x3d1);
      uVar5 = 0x811c9dc5;
      do {
        uVar5 = uVar5 * 0x89 ^ uVar18;
        uVar18 = (uint)*pbVar17;
        pbVar17 = pbVar17 + 1;
      } while (uVar18 != 0);
    }
    *(uint *)(plVar21 + 0x79) = uVar5;
  }
  pplVar1 = (long **)(plVar21 + 0x82);
  if (pplVar1 == &local_130) {
    *(undefined4 *)(plVar21 + 0x8c) = 0;
  }
  else {
    pplVar7 = (long **)plVar21[0x8a];
    if ((pplVar1 != pplVar7) && (pplVar7 != (long **)0x0)) {
      FUN_710392eb40((ulong)pplVar7);
    }
    *(undefined2 *)(plVar21 + 0x82) = 0;
    plVar21[0x8a] = (long)pplVar1;
    *(undefined4 *)(plVar21 + 0x8b) = 0;
    if (local_f0 == &local_130) {
      plVar21[0x84] = local_120;
      plVar21[0x85] = lStack_118;
      *pplVar1 = local_130;
      plVar21[0x83] = lStack_128;
      plVar21[0x88] = (long)local_100;
      plVar21[0x89] = lStack_f8;
      plVar21[0x86] = local_110;
      plVar21[0x87] = lStack_108;
    }
    else {
      plVar21[0x8a] = (long)local_f0;
    }
    *(undefined4 *)(plVar21 + 0x8b) = local_e8;
    local_130 = (long *)((ulong)local_130 & 0xffffffffffff0000);
    *(undefined4 *)(plVar21 + 0x8c) = local_e0;
    local_f0 = &local_130;
  }
  local_e8 = 0;
  *(undefined1 *)(plVar21 + 0x8f) = 0;
  *(undefined4 *)((long)plVar21 + 0x479) = 0;
  *(undefined1 *)((long)plVar21 + 0x47f) = 0;
  *(undefined2 *)((long)plVar21 + 0x47d) = 0;
  plVar21[0x90] = -0x2600010000000000;
  plVar21[0x92] = 0;
  plVar21[0x91] = 0;
  plVar21[0x93] = 0x3bffff0000000000;
  *(undefined4 *)(plVar21 + 0x94) = 0;
  *(undefined1 *)((long)plVar21 + 0x4e3) = 0;
  if (((DAT_71053144d8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_71053144d8), iVar6 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  iVar6 = DAT_71053050f0;
  plVar21[0x97] = plVar21[0x96];
  plVar21[0x95] = 0xffffffff;
  *(undefined4 *)(plVar21 + 0x99) = 0;
  FUN_71037760f0(**(long **)plVar21[0x38],0);
  uVar5 = 0x500016;
  if (iVar6 != 0x4090000) {
    uVar5 = 0x1016;
  }
  iVar15 = 9;
  if (iVar6 != 0x4090000) {
    iVar15 = 0;
  }
  FUN_7103775dc0(*(long **)plVar21[0x38],iVar15,(long ****)(ulong)uVar5,param_4,param_5,param_6,
                 param_7,param_8);
  lVar22 = *(long *)plVar21[0x38];
  local_1d0 = CONCAT17(local_1d0._7_1_,0x1000100000001);
  local_1c8 = &DAT_41f0000000000000;
  local_1e0 = (byte ***)0x0;
  local_1c0 = local_1c0 & 0xffffffff00000000;
  local_190 = (long *)0x0;
  local_160 = (undefined ***)0x0;
  local_130 = (long *)0x0;
  local_100 = (long *)0x0;
  local_d0 = (long ***)0x0;
  local_c0 = 0;
  local_1d8 = 0x100;
  FUN_710337df20((long)&local_1e0);
  pppuVar8 = local_160;
  if ((int)plVar21[0x52] == 2) {
    bVar4 = &ppuStack_180 == local_160;
    local_160 = (undefined ***)0x0;
    if (bVar4) goto LAB_7101d72b24;
LAB_7101d72b5c:
    if (pppuVar8 != (undefined ***)0x0) {
      pcVar14 = (code *)(*pppuVar8)[5];
      goto LAB_7101d72b68;
    }
  }
  else {
    local_b0 = &PTR_FUN_71050afb98;
    local_a8 = plVar21;
    local_90 = &local_b0;
    FUN_7101989a30((long *)&local_b0,&local_120);
    pppuVar8 = local_90;
    if (&local_b0 != local_90) goto LAB_7101d72b5c;
LAB_7101d72b24:
    pcVar14 = (code *)(*pppuVar8)[4];
LAB_7101d72b68:
    (*pcVar14)();
  }
  plVar20 = local_130;
  local_130 = (long *)0x0;
  if (alStack_150 == plVar20) {
    pcVar14 = *(code **)(*plVar20 + 0x20);
LAB_7101d72ba0:
    (*pcVar14)();
  }
  else if (plVar20 != (long *)0x0) {
    pcVar14 = *(code **)(*plVar20 + 0x28);
    goto LAB_7101d72ba0;
  }
  ppplVar2 = local_d0;
  bVar4 = &local_f0 == local_d0;
  local_d0 = (long ***)0x0;
  if (bVar4) {
    pcVar14 = (code *)(*ppplVar2)[4];
LAB_7101d72bd4:
    (*pcVar14)();
  }
  else if (ppplVar2 != (long ***)0x0) {
    pcVar14 = (code *)(*ppplVar2)[5];
    goto LAB_7101d72bd4;
  }
  plVar20 = plVar21 + 0x4f;
  FUN_7103770b30(plVar20,(undefined8 *)(lVar22 + 8),(long ****)"selector_00",&local_1e0,param_5,
                 param_6,param_7,param_8);
  FUN_71037717d0(plVar20,0,"set_ctl_btn_00",ppppbVar12,param_5,param_6,param_7,param_8);
  FUN_71037717d0(plVar20,1,"set_ctl_btn_01",ppppbVar12,param_5,param_6,param_7,param_8);
  FUN_71037717d0(plVar20,2,"set_ctl_btn_02",ppppbVar12,param_5,param_6,param_7,param_8);
  FUN_71037717d0(plVar20,3,"set_ctl_btn_03",ppppbVar12,param_5,param_6,param_7,param_8);
  FUN_71037717d0(plVar20,4,"set_dummy",ppppbVar12,param_5,param_6,param_7,param_8);
  FUN_7103771930(plVar21[0x4f],1,(long ****)&DAT_00000007,(byte ****)0x0,param_5,param_6,param_7,
                 param_8);
  ppppbVar12 = (byte ****)0x0;
  FUN_7103771930(plVar21[0x4f],3,(long ****)&DAT_00000009,(byte ****)0x0,param_5,param_6,param_7,
                 param_8);
  if ((int)plVar21[0x52] == 2) {
    FUN_7103771930(*plVar20,0,(long ****)0x6,(byte ****)0x0,param_5,param_6,param_7,param_8);
    ppppbVar12 = (byte ****)0x0;
    FUN_7103771930(*plVar20,2,(long ****)&DAT_00000008,(byte ****)0x0,param_5,param_6,param_7,
                   param_8);
  }
  else {
    FUN_7103771d60(&local_b0,*plVar20,(long ****)0x0,ppppbVar12,param_5,param_6,param_7,param_8);
    plVar3 = local_a8;
    plVar24 = (long *)*local_a8;
    if (plVar24 != (long *)0x0) {
      (**(code **)(*plVar24 + 0x208))(plVar24,0);
      uVar16 = (**(code **)(*plVar24 + 0x200))(plVar24);
      if ((uVar16 & 1) == 0) {
        uVar5 = 1;
      }
      else {
        uVar5 = (**(code **)(*plVar24 + 0x210))(plVar24);
        uVar5 = uVar5 ^ 1;
      }
      (**(code **)(*plVar24 + 0x388))(plVar24,uVar5 & 1,0);
    }
    local_b0 = &PTR_FUN_710523d9c8;
    local_a8 = (undefined8 *)0x0;
    if (plVar3 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar3);
    }
    FUN_7103771d60(&local_b0,*plVar20,(long ****)0x2,ppppbVar12,param_5,param_6,param_7,param_8);
    plVar3 = local_a8;
    plVar24 = (long *)*local_a8;
    if (plVar24 != (long *)0x0) {
      (**(code **)(*plVar24 + 0x208))(plVar24,0);
      uVar16 = (**(code **)(*plVar24 + 0x200))(plVar24);
      if ((uVar16 & 1) == 0) {
        uVar5 = 1;
      }
      else {
        uVar5 = (**(code **)(*plVar24 + 0x210))(plVar24);
        uVar5 = uVar5 ^ 1;
      }
      (**(code **)(*plVar24 + 0x388))(plVar24,uVar5 & 1,0);
    }
    local_b0 = &PTR_FUN_710523d9c8;
    local_a8 = (long *)0x0;
    if (plVar3 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)plVar3);
    }
  }
  iVar6 = 4;
  if ((int)plVar21[0x53] == 0) {
    iVar6 = 1;
  }
  ppuVar10 = (undefined **)0x1;
  FUN_7103771a80(plVar20,iVar6,1);
  (**(code **)(*(long *)plVar21[0x4f] + 0x60))((long *)plVar21[0x4f],0);
  (**(code **)(*(long *)plVar21[0x4f] + 0x70))((long *)plVar21[0x4f],0);
  if (&local_f0 == local_d0) {
    pcVar14 = (code *)(*local_d0)[4];
LAB_7101d72e38:
    (*pcVar14)();
  }
  else if (local_d0 != (long ***)0x0) {
    pcVar14 = (code *)(*local_d0)[5];
    goto LAB_7101d72e38;
  }
  if (&local_120 == local_100) {
    pcVar14 = *(code **)(*local_100 + 0x20);
LAB_7101d72e68:
    (*pcVar14)();
  }
  else if (local_100 != (long *)0x0) {
    pcVar14 = *(code **)(*local_100 + 0x28);
    goto LAB_7101d72e68;
  }
  if (alStack_150 == local_130) {
    pcVar14 = *(code **)(*local_130 + 0x20);
LAB_7101d72e90:
    (*pcVar14)();
  }
  else if (local_130 != (long *)0x0) {
    pcVar14 = *(code **)(*local_130 + 0x28);
    goto LAB_7101d72e90;
  }
  if (&ppuStack_180 == local_160) {
    pcVar14 = (code *)(*local_160)[4];
LAB_7101d72ec0:
    (*pcVar14)();
  }
  else if (local_160 != (undefined ***)0x0) {
    pcVar14 = (code *)(*local_160)[5];
    goto LAB_7101d72ec0;
  }
  if (alStack_1b0 == local_190) {
    pcVar14 = *(code **)(*local_190 + 0x20);
LAB_7101d72ef0:
    (*pcVar14)();
  }
  else if (local_190 != (long *)0x0) {
    pcVar14 = *(code **)(*local_190 + 0x28);
    goto LAB_7101d72ef0;
  }
  lVar25 = *(long *)plVar21[0x38];
  lVar22 = lVar25 + 8;
  switch((int)plVar21[0x52]) {
  case 0:
    FUN_7103778300(0x3f800000,*(long *)(lVar25 + 0x10),0x71042a337d);
    FUN_7103778300(0x3f800000,plVar21[0x3a],0x710436c744);
    FUN_7103778300(0x3f800000,plVar21[0x3c],0x71043f0ced);
    FUN_7103778300(0x3f800000,plVar21[0x3e],0x71042c5196);
    FUN_7103778300(0x3f800000,plVar21[0x40],0x71042d65de);
    pcVar9 = "set_parts_bg_wave_ser";
    goto LAB_7101d730d0;
  case 1:
    FUN_7103778300(0x3f800000,*(long *)(lVar25 + 0x10),0x710435bb14);
    FUN_7103778300(0x3f800000,plVar21[0x3a],0x710436c744);
    FUN_7103778300(0x3f800000,plVar21[0x3c],0x71043f0ced);
    FUN_7103778300(0x3f800000,plVar21[0x3e],0x71042c5196);
    FUN_7103778300(0x3f800000,plVar21[0x40],0x71042d65de);
    pcVar9 = "set_parts_bg_wave_plylst";
LAB_7101d730d0:
    FUN_7103776640(&local_1e0,lVar22,(byte ****)pcVar9,ppuVar10,ppppbVar12,param_5,param_6,param_7,
                   param_8);
    uVar16 = local_1d8;
    FUN_7103778300(0x3f800000,local_1d8,0x71043ef19a);
    local_1e0 = (byte ***)&PTR_FUN_710523d988;
    local_1d8 = 0;
    if (uVar16 != 0) {
      uVar23 = *(ulong *)(uVar16 + 0x18);
      *(undefined ***)(uVar16 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar16 + 0x18) = 0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_710392eb40(uVar16);
    }
    uVar13 = 0;
    break;
  case 2:
    FUN_7103778300(0x3f800000,*(long *)(lVar25 + 0x10),0x710433a4b4);
    FUN_7103778300(0x3f800000,plVar21[0x3a],0x710436c744);
    FUN_7103778300(0x3f800000,plVar21[0x3c],0x71043f0ced);
    FUN_7103778300(0x3f800000,plVar21[0x3e],0x71042c5196);
    FUN_7103778300(0x3f800000,plVar21[0x40],0x710435baf8);
    FUN_7103776640(&local_1e0,lVar22,(byte ****)"set_parts_bg_wave_voi",ppuVar10,ppppbVar12,param_5,
                   param_6,param_7,param_8);
    uVar16 = local_1d8;
    FUN_7103778300(0x3f800000,local_1d8,0x71043ef19a);
    local_1e0 = (byte ***)&PTR_FUN_710523d988;
    local_1d8 = 0;
    if (uVar16 != 0) {
      uVar23 = *(ulong *)(uVar16 + 0x18);
      *(undefined ***)(uVar16 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar16 + 0x18) = 0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_710392eb40(uVar16);
    }
    uVar13 = 2;
    break;
  default:
    goto switchD_7101d72f1c_caseD_3;
  case 4:
    FUN_7103778300(0x3f800000,*(long *)(lVar25 + 0x10),0x71042c51a5);
    FUN_7103778300(0x3f800000,plVar21[0x3a],0x7104308804);
    FUN_7103778300(0x3f800000,plVar21[0x3c],0x71043f0ced);
    FUN_7103778300(0x3f800000,plVar21[0x3e],0x7104308804);
    FUN_7103778300(0x3f800000,plVar21[0x40],0x7104308804);
    FUN_7103776640(&local_1e0,lVar22,(byte ****)"set_parts_bg_wave_ser",ppuVar10,ppppbVar12,param_5,
                   param_6,param_7,param_8);
    uVar16 = local_1d8;
    FUN_7103778300(0x3f800000,local_1d8,0x71043ef19a);
    local_1e0 = (byte ***)&PTR_FUN_710523d988;
    local_1d8 = 0;
    if (uVar16 != 0) {
      uVar23 = *(ulong *)(uVar16 + 0x18);
      *(undefined ***)(uVar16 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar16 + 0x18) = 0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_710392eb40(uVar16);
    }
    uVar13 = 4;
  }
  *(undefined4 *)((long)plVar21 + 0x4cc) = uVar13;
switchD_7101d72f1c_caseD_3:
  if (((DAT_71053144d8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_71053144d8), iVar6 != 0)) {
    FUN_7101764000();
    ppuVar10 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  if ((DAT_7105307b68._4_4_ < 7) && ((1 << (ulong)(DAT_7105307b68._4_4_ & 0x1f) & 0x58U) != 0)) {
    lVar19 = *(long *)(lVar25 + 0x10);
    pcVar9 = "keyhelp_minus_off";
  }
  else {
    lVar19 = *(long *)(lVar25 + 0x10);
    pcVar9 = "keyhelp_minus_on";
  }
  FUN_7103778300(0x3f800000,lVar19,(long)pcVar9);
  switch((int)plVar21[0x52]) {
  case 0:
  case 4:
    FUN_7103776640(&local_1e0,lVar22,(byte ****)"set_parts_scr_s_name_00",ppuVar10,ppppbVar12,
                   param_5,param_6,param_7,param_8);
    uVar16 = local_1d8;
    if ((byte ****)(plVar21 + 0x43) != &local_1e0) {
      local_1d8 = 0;
      uVar23 = plVar21[0x44];
      plVar21[0x44] = uVar16;
      if (uVar23 != 0) {
        uVar16 = *(ulong *)(uVar23 + 0x18);
        *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar23 + 0x18) = 0;
        if (uVar16 != 0) {
          FUN_710392eb40(uVar16);
        }
        FUN_710392eb40(uVar23);
      }
    }
    uVar16 = local_1d8;
    local_1e0 = (byte ***)&PTR_FUN_710523d988;
    local_1d8 = 0;
    if (uVar16 != 0) {
      uVar23 = *(ulong *)(uVar16 + 0x18);
      *(undefined ***)(uVar16 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar16 + 0x18) = 0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_710392eb40(uVar16);
    }
    FUN_7103776640(&local_1e0,lVar22,(byte ****)"set_txt_scr_sound_source",ppuVar10,ppppbVar12,
                   param_5,param_6,param_7,param_8);
    uVar16 = local_1d8;
    if ((byte ****)(plVar21 + 0x45) != &local_1e0) {
      local_1d8 = 0;
      uVar23 = plVar21[0x46];
      plVar21[0x46] = uVar16;
      if (uVar23 != 0) {
        uVar16 = *(ulong *)(uVar23 + 0x18);
        *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar23 + 0x18) = 0;
        if (uVar16 != 0) {
          FUN_710392eb40(uVar16);
        }
        FUN_710392eb40(uVar23);
      }
    }
    uVar16 = local_1d8;
    local_1e0 = (byte ***)&PTR_FUN_710523d988;
    local_1d8 = 0;
    if (uVar16 != 0) {
      uVar23 = *(ulong *)(uVar16 + 0x18);
      *(undefined ***)(uVar16 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar16 + 0x18) = 0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_710392eb40(uVar16);
    }
    FUN_7103776910(&local_1e0,lVar22,(long ****)"set_txt_arranger_01",ppuVar10,ppppbVar12,param_5,
                   param_6,param_7,param_8);
    uVar16 = local_1d8;
    if ((byte ****)(plVar21 + 0x4b) != &local_1e0) {
      local_1d8 = 0;
      uVar23 = plVar21[0x4c];
      plVar21[0x4c] = uVar16;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
    }
    uVar16 = local_1d8;
    local_1e0 = (byte ***)&PTR_FUN_710523d9a8;
    local_1d8 = 0;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
    pcVar9 = "set_timebar_ser";
    goto LAB_7101d73620;
  case 1:
    FUN_7103776640(&local_1e0,lVar22,(byte ****)"set_parts_scr_s_name_01",ppuVar10,ppppbVar12,
                   param_5,param_6,param_7,param_8);
    uVar16 = local_1d8;
    if ((byte ****)(plVar21 + 0x43) != &local_1e0) {
      local_1d8 = 0;
      uVar23 = plVar21[0x44];
      plVar21[0x44] = uVar16;
      if (uVar23 != 0) {
        uVar16 = *(ulong *)(uVar23 + 0x18);
        *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar23 + 0x18) = 0;
        if (uVar16 != 0) {
          FUN_710392eb40(uVar16);
        }
        FUN_710392eb40(uVar23);
      }
    }
    uVar16 = local_1d8;
    local_1e0 = (byte ***)&PTR_FUN_710523d988;
    local_1d8 = 0;
    if (uVar16 != 0) {
      uVar23 = *(ulong *)(uVar16 + 0x18);
      *(undefined ***)(uVar16 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar16 + 0x18) = 0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_710392eb40(uVar16);
    }
    FUN_7103776640(&local_1e0,lVar22,(byte ****)"set_txt_scr_sound_sou_01",ppuVar10,ppppbVar12,
                   param_5,param_6,param_7,param_8);
    uVar16 = local_1d8;
    if ((byte ****)(plVar21 + 0x45) != &local_1e0) {
      local_1d8 = 0;
      uVar23 = plVar21[0x46];
      plVar21[0x46] = uVar16;
      if (uVar23 != 0) {
        uVar16 = *(ulong *)(uVar23 + 0x18);
        *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar23 + 0x18) = 0;
        if (uVar16 != 0) {
          FUN_710392eb40(uVar16);
        }
        FUN_710392eb40(uVar23);
      }
    }
    uVar16 = local_1d8;
    local_1e0 = (byte ***)&PTR_FUN_710523d988;
    local_1d8 = 0;
    if (uVar16 != 0) {
      uVar23 = *(ulong *)(uVar16 + 0x18);
      *(undefined ***)(uVar16 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar16 + 0x18) = 0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_710392eb40(uVar16);
    }
    FUN_7103776910(&local_1e0,lVar22,(long ****)"set_txt_arranger_00",ppuVar10,ppppbVar12,param_5,
                   param_6,param_7,param_8);
    uVar16 = local_1d8;
    if ((byte ****)(plVar21 + 0x4b) != &local_1e0) {
      local_1d8 = 0;
      uVar23 = plVar21[0x4c];
      plVar21[0x4c] = uVar16;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
    }
    uVar16 = local_1d8;
    local_1e0 = (byte ***)&PTR_FUN_710523d9a8;
    local_1d8 = 0;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
    pcVar9 = "set_timebar_list";
LAB_7101d73620:
    FUN_7103776640(&local_1e0,lVar22,(byte ****)pcVar9,ppuVar10,ppppbVar12,param_5,param_6,param_7,
                   param_8);
    uVar16 = local_1d8;
    if ((byte ****)(plVar21 + 0x47) != &local_1e0) {
      local_1d8 = 0;
      uVar23 = plVar21[0x48];
      plVar21[0x48] = uVar16;
      if (uVar23 != 0) {
        uVar16 = *(ulong *)(uVar23 + 0x18);
        *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar23 + 0x18) = 0;
        if (uVar16 != 0) {
          FUN_710392eb40(uVar16);
        }
        FUN_710392eb40(uVar23);
      }
    }
    uVar16 = local_1d8;
    local_1e0 = (byte ***)&PTR_FUN_710523d988;
    local_1d8 = 0;
    if (uVar16 != 0) {
      uVar23 = *(ulong *)(uVar16 + 0x18);
      *(undefined ***)(uVar16 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar16 + 0x18) = 0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_710392eb40(uVar16);
    }
    FUN_7103776910(&local_1e0,(long)(plVar21 + 0x47),(long ****)"set_txt_time",ppuVar10,ppppbVar12,
                   param_5,param_6,param_7,param_8);
    uVar16 = local_1d8;
    if ((byte ****)(plVar21 + 0x4d) != &local_1e0) {
      local_1d8 = 0;
      uVar23 = plVar21[0x4e];
      plVar21[0x4e] = uVar16;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
    }
    uVar16 = local_1d8;
    local_1e0 = (byte ***)&PTR_FUN_710523d9a8;
    local_1d8 = 0;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
    lVar19 = *(long *)plVar21[0x4e];
    if (lVar19 != 0) {
      *(byte *)(lVar19 + 0x58) = *(byte *)(lVar19 + 0x58) | 1;
    }
    break;
  case 2:
    FUN_7103776640(&local_1e0,lVar22,(byte ****)"set_parts_scr_voi_nam",ppuVar10,ppppbVar12,param_5,
                   param_6,param_7,param_8);
    uVar16 = local_1d8;
    if ((byte ****)(plVar21 + 0x43) != &local_1e0) {
      local_1d8 = 0;
      uVar23 = plVar21[0x44];
      plVar21[0x44] = uVar16;
      if (uVar23 != 0) {
        uVar16 = *(ulong *)(uVar23 + 0x18);
        *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar23 + 0x18) = 0;
        if (uVar16 != 0) {
          FUN_710392eb40(uVar16);
        }
        FUN_710392eb40(uVar23);
      }
    }
    uVar16 = local_1d8;
    local_1e0 = (byte ***)&PTR_FUN_710523d988;
    local_1d8 = 0;
    if (uVar16 != 0) {
      uVar23 = *(ulong *)(uVar16 + 0x18);
      *(undefined ***)(uVar16 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar16 + 0x18) = 0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_710392eb40(uVar16);
    }
    *(undefined8 *)(plVar21[0x46] + 8) = 0;
    *(undefined8 *)plVar21[0x4c] = 0;
    *(undefined8 *)(plVar21[0x4c] + 8) = 0;
    *(undefined8 *)(plVar21[0x4c] + 0x10) = 0;
    *(undefined8 *)(plVar21[0x4c] + 0x18) = 0;
    *(undefined8 *)(plVar21[0x48] + 8) = 0;
    *(undefined8 *)plVar21[0x4e] = 0;
    *(undefined8 *)(plVar21[0x4e] + 8) = 0;
    *(undefined8 *)(plVar21[0x4e] + 0x10) = 0;
    *(undefined8 *)(plVar21[0x4e] + 0x18) = 0;
  }
  plVar21[0x8d] = 0;
  FUN_7103778300(0x3f800000,*(long *)(lVar25 + 0x10),0x710435bb35);
  plVar21[0x1f] = 0;
  plVar21[0x20] = 0;
  *(undefined8 *)((long)plVar21 + 0x19c) = 0;
  *(undefined8 *)((long)plVar21 + 0x194) = 0;
  *(undefined8 *)((long)plVar21 + 0x18c) = 0;
  *(undefined8 *)((long)plVar21 + 0x184) = 0;
  *(undefined8 *)((long)plVar21 + 0x17c) = 0;
  *(undefined8 *)((long)plVar21 + 0x174) = 0;
  *(undefined8 *)((long)plVar21 + 0x16c) = 0;
  *(undefined8 *)((long)plVar21 + 0x164) = 0;
  *(undefined8 *)((long)plVar21 + 0x15c) = 0;
  *(undefined4 *)((long)plVar21 + 0x1a4) = 0;
  plVar21[0x35] = 0xffffffff;
  *(undefined4 *)(plVar21 + 0x36) = 0xffffffff;
  *(undefined1 *)((long)plVar21 + 0x1b4) = 0;
  *(undefined4 *)(plVar21 + 0x2b) = 0;
  if (4 < *(uint *)((long)plVar21 + 0x4cc)) {
LAB_7101d73aac:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  FUN_7103778300(0x3f800000,*(long *)(lVar25 + 0x10),
                 (long)(&PTR_s_badge_fullplay_71050afb60)[(int)*(uint *)((long)plVar21 + 0x4cc)]);
  if (4 < *(uint *)((long)plVar21 + 0x4cc)) goto LAB_7101d73aac;
  ppppppppplVar11 =
       (long *********)(&PTR_s_badge_fullplay_71050afb60)[(int)*(uint *)((long)plVar21 + 0x4cc)];
  FUN_7103776640(&local_1e0,lVar22,(byte ****)"set_%s",ppppppppplVar11,ppppbVar12,param_5,param_6,
                 param_7,param_8);
  uVar16 = local_1d8;
  if ((byte ****)(plVar21 + 0x49) != &local_1e0) {
    local_1d8 = 0;
    uVar23 = plVar21[0x4a];
    plVar21[0x4a] = uVar16;
    if (uVar23 != 0) {
      uVar16 = *(ulong *)(uVar23 + 0x18);
      *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar23 + 0x18) = 0;
      if (uVar16 != 0) {
        FUN_710392eb40(uVar16);
      }
      FUN_710392eb40(uVar23);
    }
  }
  uVar16 = local_1d8;
  local_1e0 = (byte ***)&PTR_FUN_710523d988;
  local_1d8 = 0;
  if (uVar16 != 0) {
    uVar23 = *(ulong *)(uVar16 + 0x18);
    *(undefined ***)(uVar16 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar16 + 0x18) = 0;
    if (uVar23 != 0) {
      FUN_710392eb40(uVar23);
    }
    FUN_710392eb40(uVar16);
  }
  FUN_7103778760(plVar21[0x4a],0x710428ff7d);
  uVar5 = *(uint *)(plVar21 + 0x52);
  if ((uVar5 < 2) && (DAT_710593b534 == 0)) {
    iVar6 = 0;
    if (uVar5 < 5) {
      uVar16 = (ulong)*(int *)((long)plVar21 + 0x2ac);
      plVar20 = (long *)*plVar21;
      switch(uVar5) {
      default:
        uVar23 = (plVar20[1] - *plVar20 >> 4) * -0x5555555555555555;
        if (uVar16 <= uVar23 && uVar23 - uVar16 != 0) {
          lVar25 = *plVar20 + uVar16 * 0x30;
          lVar22 = *(long *)(lVar25 + 8);
          lVar25 = *(long *)(lVar25 + 0x10);
          goto LAB_7101d73934;
        }
LAB_7101d7394c:
        iVar6 = 0;
        break;
      case 1:
        uVar23 = (plVar20[4] - plVar20[3] >> 3) * 0x2e8ba2e8ba2e8ba3;
        if (uVar23 < uVar16 || uVar23 - uVar16 == 0) goto LAB_7101d7394c;
        lVar25 = plVar20[3] + uVar16 * 0x58;
        lVar22 = *(long *)(lVar25 + 0x38);
        lVar25 = *(long *)(lVar25 + 0x40);
LAB_7101d73934:
        iVar6 = (int)((ulong)(lVar25 - lVar22) >> 3) * -0x55555555;
        break;
      case 2:
        uVar23 = (plVar20[7] - plVar20[6] >> 3) * -0x70a3d70a3d70a3d7;
        if (uVar23 < uVar16 || uVar23 - uVar16 == 0) goto LAB_7101d7394c;
        lVar22 = plVar20[6] + uVar16 * 200;
        iVar6 = (int)((ulong)(*(long *)(lVar22 + 0xb0) - *(long *)(lVar22 + 0xa8)) >> 4);
        break;
      case 3:
        break;
      }
    }
    *(bool *)((long)plVar21 + 0x4e2) = (int)plVar21[0x56] < iVar6;
    lVar22 = *(long *)plVar21[0x38];
    if ((int)plVar21[0x56] < iVar6) {
      pcVar9 = "bgm_btn_on";
      goto LAB_7101d7397c;
    }
  }
  else {
    *(undefined1 *)((long)plVar21 + 0x4e2) = 0;
    lVar22 = *(long *)plVar21[0x38];
  }
  pcVar9 = "bgm_btn_off";
LAB_7101d7397c:
  FUN_7103778300(0x3f800000,*(long *)(lVar22 + 0x10),(long)pcVar9);
  plVar21[0x9a] = -0x100000000;
  *(undefined2 *)(plVar21 + 0x9c) = 0;
  plVar21[0x9b] = 0;
  FUN_71033152c0(*(long *)(DAT_710532f8d0 + 8),0);
  FUN_7101d70b60(plVar21,extraout_x1,ppppppppplVar11,ppppbVar12,param_5,param_6,param_7,param_8);
  FUN_7101d6e660(plVar21);
  *(undefined4 *)((long)plVar21 + 0xdc) = 0;
  plVar21[2] = 0;
  plVar21[3] = 0;
  *(undefined8 *)((long)plVar21 + 0xd4) = 0;
  *(undefined8 *)((long)plVar21 + 0xcc) = 0;
  *(undefined8 *)((long)plVar21 + 0xc4) = 0;
  *(undefined8 *)((long)plVar21 + 0xbc) = 0;
  *(undefined8 *)((long)plVar21 + 0xb4) = 0;
  *(undefined8 *)((long)plVar21 + 0xac) = 0;
  *(undefined8 *)((long)plVar21 + 0xa4) = 0;
  *(undefined8 *)((long)plVar21 + 0x9c) = 0;
  *(undefined8 *)((long)plVar21 + 0x94) = 0;
  plVar21[0x1c] = 0xffffffff;
  *(undefined4 *)(plVar21 + 0x1d) = 0xffffffff;
  *(undefined1 *)((long)plVar21 + 0xec) = 0;
  *(undefined4 *)(plVar21 + 0x12) = 1;
  FUN_7101d72060(plVar21 + 1);
  *(undefined1 *)(param_1 + 0x70) = 0;
  return;
}

