// addr:      7101dcac70
// offset:    0x1dcac70
// name:      FUN_7101dcac70
// mangled:   
// signature: undefined __cdecl FUN_7101dcac70(long * param_1, long param_2, byte * * * * param_3, long * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101dcac70(long *param_1,long param_2,byte ****param_3,long ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  int iVar5;
  undefined8 uVar6;
  long ****pppplVar7;
  byte ****ppppbVar8;
  undefined8 uVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  ulong uVar16;
  byte ***local_1a0;
  undefined2 local_198;
  undefined1 uStack_196;
  undefined5 uStack_195;
  undefined2 uStack_190;
  undefined4 local_18e;
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
  undefined **local_70;
  ulong local_68;
  
  ppppbVar8 = &local_1a0;
  pppplVar7 = param_4;
  FUN_7103776640(&local_1a0,param_2,param_3,param_3,param_4,param_5,param_6,param_7,param_8);
  plVar1 = param_1 + 1;
  if ((byte ****)plVar1 != &local_1a0) {
    lVar4 = CONCAT53(uStack_195,CONCAT12(uStack_196,local_198));
    local_198 = 0;
    uStack_196 = 0;
    uStack_195 = 0;
    uVar16 = param_1[2];
    param_1[2] = lVar4;
    if (uVar16 != 0) {
      uVar2 = *(ulong *)(uVar16 + 0x18);
      *(undefined ***)(uVar16 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar16 + 0x18) = 0;
      if (uVar2 != 0) {
        FUN_710392eb40(uVar2);
      }
      FUN_710392eb40(uVar16);
    }
  }
  uVar16 = CONCAT53(uStack_195,CONCAT12(uStack_196,local_198));
  local_1a0 = (byte ***)&PTR_FUN_710523d988;
  local_198 = 0;
  uStack_196 = 0;
  uStack_195 = 0;
  if (uVar16 != 0) {
    uVar2 = *(ulong *)(uVar16 + 0x18);
    *(undefined ***)(uVar16 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar16 + 0x18) = 0;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
    FUN_710392eb40(uVar16);
  }
  FUN_7103776910(&local_1a0,(long)plVar1,param_4,param_3,pppplVar7,param_5,param_6,param_7,param_8);
  if ((byte ****)(param_1 + 3) != &local_1a0) {
    lVar4 = CONCAT53(uStack_195,CONCAT12(uStack_196,local_198));
    local_198 = 0;
    uStack_196 = 0;
    uStack_195 = 0;
    uVar16 = param_1[4];
    param_1[4] = lVar4;
    if (uVar16 != 0) {
      FUN_710392eb40(uVar16);
    }
  }
  uVar16 = CONCAT53(uStack_195,CONCAT12(uStack_196,local_198));
  local_1a0 = (byte ***)&PTR_FUN_710523d9a8;
  local_198 = 0;
  uStack_196 = 0;
  uStack_195 = 0;
  if (uVar16 != 0) {
    FUN_710392eb40(uVar16);
  }
  (**(code **)(*param_1 + 0x18))(param_1,(int)param_1[0xe]);
  FUN_71003a4ca0((uint *)&local_1a0,"set_parts_sp_anim_%02d",0,param_3,pppplVar7,param_5,param_6,
                 param_7,param_8);
  FUN_7103776640(&local_70,param_2,(byte ****)&local_198,param_3,pppplVar7,param_5,param_6,param_7,
                 param_8);
  uVar16 = local_68;
  if ((undefined ***)(param_1 + 0x1a) != &local_70) {
    local_68 = 0;
    uVar2 = param_1[0x1b];
    param_1[0x1b] = uVar16;
    if (uVar2 != 0) {
      uVar16 = *(ulong *)(uVar2 + 0x18);
      *(undefined ***)(uVar2 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar2 + 0x18) = 0;
      if (uVar16 != 0) {
        FUN_710392eb40(uVar16);
      }
      FUN_710392eb40(uVar2);
    }
  }
  uVar16 = local_68;
  local_70 = &PTR_FUN_710523d988;
  local_68 = 0;
  if (uVar16 != 0) {
    uVar2 = *(ulong *)(uVar16 + 0x18);
    *(undefined ***)(uVar16 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar16 + 0x18) = 0;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
    FUN_710392eb40(uVar16);
  }
  FUN_7103776910(&local_70,(long)(param_1 + 0x1a),(long ****)"set_txt_num_anim_sp",param_3,pppplVar7
                 ,param_5,param_6,param_7,param_8);
  uVar16 = local_68;
  if ((undefined ***)(param_1 + 0x1c) != &local_70) {
    local_68 = 0;
    uVar2 = param_1[0x1d];
    param_1[0x1d] = uVar16;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
  }
  uVar16 = local_68;
  local_70 = &PTR_FUN_710523d9a8;
  local_68 = 0;
  if (uVar16 != 0) {
    FUN_710392eb40(uVar16);
  }
  plVar3 = (long *)param_1[0x1e];
  if (plVar3 != (long *)0x0) {
    param_1[0x1e] = 0;
    (**(code **)(*plVar3 + 8))();
  }
  FUN_7103778300(0x3f800000,param_1[0x1b],0x710438cf5a);
  *(undefined1 *)((long)param_1 + 0xfa) = 0;
  FUN_71003a4ca0((uint *)&local_1a0,"set_parts_sp_anim_%02d",1,param_3,pppplVar7,param_5,param_6,
                 param_7,param_8);
  FUN_7103776640(&local_70,param_2,(byte ****)&local_198,param_3,pppplVar7,param_5,param_6,param_7,
                 param_8);
  uVar16 = local_68;
  if ((undefined ***)(param_1 + 0x20) != &local_70) {
    local_68 = 0;
    uVar2 = param_1[0x21];
    param_1[0x21] = uVar16;
    if (uVar2 != 0) {
      uVar16 = *(ulong *)(uVar2 + 0x18);
      *(undefined ***)(uVar2 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar2 + 0x18) = 0;
      if (uVar16 != 0) {
        FUN_710392eb40(uVar16);
      }
      FUN_710392eb40(uVar2);
    }
  }
  uVar16 = local_68;
  local_70 = &PTR_FUN_710523d988;
  local_68 = 0;
  if (uVar16 != 0) {
    uVar2 = *(ulong *)(uVar16 + 0x18);
    *(undefined ***)(uVar16 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar16 + 0x18) = 0;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
    FUN_710392eb40(uVar16);
  }
  FUN_7103776910(&local_70,(long)(param_1 + 0x20),(long ****)"set_txt_num_anim_sp",param_3,pppplVar7
                 ,param_5,param_6,param_7,param_8);
  uVar16 = local_68;
  if ((undefined ***)(param_1 + 0x22) != &local_70) {
    local_68 = 0;
    uVar2 = param_1[0x23];
    param_1[0x23] = uVar16;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
  }
  uVar16 = local_68;
  local_70 = &PTR_FUN_710523d9a8;
  local_68 = 0;
  if (uVar16 != 0) {
    FUN_710392eb40(uVar16);
  }
  plVar3 = (long *)param_1[0x24];
  if (plVar3 != (long *)0x0) {
    param_1[0x24] = 0;
    (**(code **)(*plVar3 + 8))();
  }
  FUN_7103778300(0x3f800000,param_1[0x21],0x710438cf5a);
  *(undefined4 *)(param_1 + 0x26) = 3;
  *(undefined1 *)((long)param_1 + 0x12a) = 0;
  plVar3 = param_1 + 0xf;
  uStack_195 = 0;
  uStack_190 = 1;
  local_198 = 0x101;
  local_18e = 0x10100;
  local_18a = 1;
  local_188 = &DAT_41f0000000000000;
  local_180 = 0;
  local_150 = (long *)0x0;
  local_120 = (long *)0x0;
  local_f0 = (long *)0x0;
  local_c0 = (long *)0x0;
  local_90 = (long *)0x0;
  local_80 = 0;
  local_1a0 = (byte ***)0x0;
  uStack_196 = 1;
  FUN_7103770b30(plVar3,plVar1,(long ****)"selector_0",&local_1a0,param_5,param_6,param_7,param_8);
  FUN_71037717d0(plVar3,(int)param_1[0x26],"set_btn_keyhelp",ppppbVar8,param_5,param_6,param_7,
                 param_8);
  lVar4 = param_1[0xf];
  iVar5 = (int)param_1[0x26];
  lVar12 = *(long *)(lVar4 + 0x1b8);
  if (lVar12 != 0) {
    lVar10 = lVar4 + 0x1b8;
    lVar13 = lVar10;
    lVar14 = lVar12;
    do {
      if (iVar5 <= *(int *)(lVar14 + 0x20)) {
        lVar13 = lVar14;
      }
      lVar14 = *(long *)(lVar14 + (ulong)(*(int *)(lVar14 + 0x20) < iVar5) * 8);
    } while (lVar14 != 0);
    if (((lVar13 != lVar10) && (*(int *)(lVar13 + 0x20) <= iVar5)) &&
       (plVar15 = *(long **)(lVar13 + 0x28), plVar15 != (long *)0x0)) {
      (**(code **)(*plVar15 + 0x208))(plVar15,1);
      (**(code **)(*plVar15 + 0x388))(plVar15,0,0);
      lVar4 = param_1[0xf];
      iVar5 = (int)param_1[0x26];
      lVar10 = lVar4 + 0x1b8;
      lVar12 = *(long *)(lVar4 + 0x1b8);
    }
    lVar13 = lVar10;
    if (lVar12 != 0) {
      do {
        if (iVar5 <= *(int *)(lVar12 + 0x20)) {
          lVar13 = lVar12;
        }
        lVar12 = *(long *)(lVar12 + (ulong)(*(int *)(lVar12 + 0x20) < iVar5) * 8);
      } while (lVar12 != 0);
      if (((lVar13 != lVar10) && (*(int *)(lVar13 + 0x20) <= iVar5)) &&
         (plVar15 = *(long **)(lVar13 + 0x28), plVar15 != (long *)0x0)) {
        (**(code **)(*plVar15 + 0x1f8))(plVar15,1);
        (**(code **)(*plVar15 + 0x388))(plVar15,0,0);
        iVar5 = (int)param_1[0x26];
        lVar4 = param_1[0xf];
      }
    }
  }
  uVar6 = 7;
  uVar9 = 0;
  FUN_7103771930(lVar4,iVar5,(long ****)&DAT_00000007,(byte ****)0x0,param_5,param_6,param_7,param_8
                );
  FUN_7103776640(&local_70,(long)plVar1,(byte ****)"set_btn_keyhelp",uVar6,uVar9,param_5,param_6,
                 param_7,param_8);
  uVar16 = local_68;
  if ((undefined ***)(param_1 + 0x10) != &local_70) {
    local_68 = 0;
    uVar2 = param_1[0x11];
    param_1[0x11] = uVar16;
    if (uVar2 != 0) {
      uVar16 = *(ulong *)(uVar2 + 0x18);
      *(undefined ***)(uVar2 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar2 + 0x18) = 0;
      if (uVar16 != 0) {
        FUN_710392eb40(uVar16);
      }
      FUN_710392eb40(uVar2);
    }
  }
  uVar16 = local_68;
  local_70 = &PTR_FUN_710523d988;
  local_68 = 0;
  if (uVar16 != 0) {
    uVar2 = *(ulong *)(uVar16 + 0x18);
    *(undefined ***)(uVar16 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar16 + 0x18) = 0;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
    FUN_710392eb40(uVar16);
  }
  (**(code **)(*(long *)*plVar3 + 0x60))((long *)*plVar3,0);
  if (alStack_b0 == local_90) {
    pcVar11 = *(code **)(*local_90 + 0x20);
LAB_7101dcb1d4:
    (*pcVar11)();
  }
  else if (local_90 != (long *)0x0) {
    pcVar11 = *(code **)(*local_90 + 0x28);
    goto LAB_7101dcb1d4;
  }
  if (alStack_e0 == local_c0) {
    pcVar11 = *(code **)(*local_c0 + 0x20);
LAB_7101dcb204:
    (*pcVar11)();
  }
  else if (local_c0 != (long *)0x0) {
    pcVar11 = *(code **)(*local_c0 + 0x28);
    goto LAB_7101dcb204;
  }
  if (alStack_110 == local_f0) {
    pcVar11 = *(code **)(*local_f0 + 0x20);
LAB_7101dcb234:
    (*pcVar11)();
  }
  else if (local_f0 != (long *)0x0) {
    pcVar11 = *(code **)(*local_f0 + 0x28);
    goto LAB_7101dcb234;
  }
  if (alStack_140 == local_120) {
    pcVar11 = *(code **)(*local_120 + 0x20);
  }
  else {
    if (local_120 == (long *)0x0) goto LAB_7101dcb268;
    pcVar11 = *(code **)(*local_120 + 0x28);
  }
  (*pcVar11)();
LAB_7101dcb268:
  if (alStack_170 == local_150) {
    pcVar11 = *(code **)(*local_150 + 0x20);
  }
  else {
    if (local_150 == (long *)0x0) {
      return;
    }
    pcVar11 = *(code **)(*local_150 + 0x28);
  }
  (*pcVar11)();
  return;
}

