// addr:      7101d9ba10
// offset:    0x1d9ba10
// name:      FUN_7101d9ba10
// mangled:   
// signature: undefined __cdecl FUN_7101d9ba10(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101d9ba10(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 uVar11;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  char *pcVar12;
  char cVar13;
  long lVar14;
  undefined4 uVar15;
  long *plVar16;
  undefined **local_80;
  ulong local_78;
  undefined **local_70;
  ulong local_68;
  undefined **local_60;
  ulong local_58;
  undefined **local_50;
  ulong local_48;
  
  if (*(int *)(param_1 + 0x11c) == 0) {
    plVar5 = (long *)(param_1 + 0x1b0);
    (**(code **)(**(long **)(param_1 + 0x1b0) + 0x60))(*(long **)(param_1 + 0x1b0),1);
    cVar13 = *(char *)(param_1 + 0x1c5);
    lVar4 = *(long *)(*(long *)(param_1 + 0x1b0) + 0x1b8);
    if (lVar4 != 0) {
      lVar1 = *(long *)(param_1 + 0x1b0) + 0x1b8;
      lVar14 = lVar1;
      do {
        bVar3 = *(int *)(lVar4 + 0x20) < 0;
        if (!bVar3) {
          lVar14 = lVar4;
        }
        lVar4 = *(long *)(lVar4 + (ulong)bVar3 * 8);
      } while (lVar4 != 0);
      if (((lVar14 != lVar1) && (*(int *)(lVar14 + 0x20) < 1)) &&
         (plVar16 = *(long **)(lVar14 + 0x28), plVar16 != (long *)0x0)) {
        (**(code **)(*plVar16 + 0x1f8))(plVar16,cVar13 != '\0');
        (**(code **)(*plVar16 + 0x388))(plVar16,cVar13 == '\0',0);
        cVar13 = *(char *)(param_1 + 0x1c5);
      }
    }
    plVar16 = (long *)*plVar5;
    if (cVar13 == '\0') {
      (**(code **)(*plVar16 + 0x70))(plVar16,0);
    }
    else {
      (**(code **)(*plVar16 + 0x70))(plVar16,1);
      FUN_7103771a80(plVar5,0,1);
      lVar4 = *(long *)(*plVar5 + 0x1b8);
      if (lVar4 != 0) {
        lVar1 = *plVar5 + 0x1b8;
        lVar14 = lVar1;
        do {
          bVar3 = *(int *)(lVar4 + 0x20) < 0;
          if (!bVar3) {
            lVar14 = lVar4;
          }
          lVar4 = *(long *)(lVar4 + (ulong)bVar3 * 8);
        } while (lVar4 != 0);
        if (((lVar14 != lVar1) && (*(int *)(lVar14 + 0x20) < 1)) &&
           (plVar5 = *(long **)(lVar14 + 0x28), plVar5 != (long *)0x0)) {
          (**(code **)(*plVar5 + 0x1f8))(plVar5,1);
          (**(code **)(*plVar5 + 0x388))(plVar5,0,0);
        }
      }
    }
    *(undefined1 *)(param_1 + 0x1c8) = 0;
  }
  else {
    lVar4 = *(long *)(*(long *)(param_1 + 0x178) + 8);
    if ((((lVar4 == 0) ||
         (plVar5 = (long *)FUN_71037964b0(lVar4,0x71042e7633), plVar5 == (long *)0x0)) ||
        (uVar6 = (**(code **)(*plVar5 + 0x138))(), (uVar6 & 1) != 0)) &&
       (((lVar4 = *(long *)(*(long *)(param_1 + 0x168) + 8), lVar4 == 0 ||
         (plVar5 = (long *)FUN_71037964b0(lVar4,0x71042e7633), plVar5 == (long *)0x0)) ||
        (uVar6 = (**(code **)(*plVar5 + 0x138))(), (uVar6 & 1) != 0)))) {
      lVar4 = *(long *)(*(long *)(param_1 + 0x140) + 0x80);
      (**(code **)(**(long **)(lVar4 + 0x2268) + 0x70))(*(long **)(lVar4 + 0x2268),0);
      if (*(char *)(lVar4 + 0x11b4) == '\0') {
        param_3 = (long ****)0x0;
        FUN_7103771a80((long *)(lVar4 + 0x2268),3,0);
        uVar11 = extraout_x1_01;
      }
      else {
        lVar4 = *(long *)(lVar4 + 0x2268);
        uVar11 = extraout_x1;
        if (*(int *)(lVar4 + 0x254) == 3) {
          FUN_710376b960(lVar4);
          uVar11 = extraout_x1_00;
        }
      }
      lVar4 = *(long *)(param_1 + 0x1e0);
      lVar1 = *(long *)(param_1 + 0x1e8);
      if (lVar1 != lVar4) {
        for (; lVar4 != lVar1; lVar4 = lVar4 + 0x18) {
          if (*(int *)(lVar4 + 0x10) != 0) {
            param_3 = (long ****)(ulong)*(byte *)(lVar4 + 0x15);
            FUN_71025b1740(lVar4,(ulong)*(byte *)(lVar4 + 0x14),(uint)*(byte *)(lVar4 + 0x15));
            *(undefined4 *)(lVar4 + 0x10) = 2;
            uVar11 = extraout_x1_02;
          }
        }
        *(undefined4 *)(param_1 + 0x1f8) = 2;
      }
      uVar2 = *(uint *)(param_1 + 0x114);
      if (*(char *)(param_1 + 0x1c5) == '\0') {
        if (0x12 < uVar2) goto LAB_7101d9beec;
        uVar15 = 4;
      }
      else {
        if (0x12 < uVar2) {
LAB_7101d9beec:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        uVar15 = 2;
      }
      lVar4 = param_1 + 0x160;
      *(undefined4 *)(param_1 + (long)(int)uVar2 * 4 + 200) = uVar15;
      FUN_7103776290(&local_70,uVar11,param_3,param_4,param_5,param_6,param_7,param_8);
      FUN_7103776290(&local_60,extraout_x1_03,param_3,param_4,param_5,param_6,param_7,param_8);
      FUN_7103776290(&local_50,extraout_x1_04,param_3,param_4,param_5,param_6,param_7,param_8);
      FUN_7103776640(&local_80,lVar4,(byte ****)"set_parts_rule_01",param_3,param_4,param_5,param_6,
                     param_7,param_8);
      uVar10 = local_68;
      uVar6 = local_78;
      local_78 = 0;
      local_68 = uVar6;
      if (uVar10 != 0) {
        uVar7 = *(ulong *)(uVar10 + 0x18);
        *(undefined ***)(uVar10 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar10 + 0x18) = 0;
        if (uVar7 != 0) {
          FUN_710392eb40(uVar7);
        }
        FUN_710392eb40(uVar10);
      }
      local_80 = &PTR_FUN_710523d988;
      local_78 = 0;
      FUN_7103776640(&local_80,lVar4,(byte ****)"set_parts_rule_02",param_3,param_4,param_5,param_6,
                     param_7,param_8);
      uVar7 = local_58;
      uVar10 = local_78;
      local_78 = 0;
      local_58 = uVar10;
      if (uVar7 != 0) {
        uVar8 = *(ulong *)(uVar7 + 0x18);
        *(undefined ***)(uVar7 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar7 + 0x18) = 0;
        if (uVar8 != 0) {
          FUN_710392eb40(uVar8);
        }
        FUN_710392eb40(uVar7);
      }
      local_80 = &PTR_FUN_710523d988;
      local_78 = 0;
      FUN_7103776640(&local_80,lVar4,(byte ****)"set_parts_rule_03",param_3,param_4,param_5,param_6,
                     param_7,param_8);
      uVar8 = local_48;
      uVar7 = local_78;
      local_78 = 0;
      local_48 = uVar7;
      if (uVar8 != 0) {
        uVar9 = *(ulong *)(uVar8 + 0x18);
        *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar8 + 0x18) = 0;
        if (uVar9 != 0) {
          FUN_710392eb40(uVar9);
        }
        FUN_710392eb40(uVar8);
      }
      local_80 = &PTR_FUN_710523d988;
      local_78 = 0;
      if (*(int *)(param_1 + 0x204) != 0) {
        if ((*(char *)(param_1 + 0x290) == '\0') || (*(char *)(param_1 + 0x291) == '\0')) {
          pcVar12 = "hide_icon_check";
        }
        else {
          pcVar12 = "show_icon_check";
        }
        FUN_7103778300(0x3f800000,uVar6,(long)pcVar12);
      }
      if (*(int *)(param_1 + 0x2a4) != 0) {
        if ((*(char *)(param_1 + 0x330) == '\0') || (*(char *)(param_1 + 0x331) == '\0')) {
          pcVar12 = "hide_icon_check";
        }
        else {
          pcVar12 = "show_icon_check";
        }
        FUN_7103778300(0x3f800000,uVar10,(long)pcVar12);
      }
      if (*(int *)(param_1 + 0x344) != 0) {
        if ((*(char *)(param_1 + 0x3d0) == '\0') || (*(char *)(param_1 + 0x3d1) == '\0')) {
          pcVar12 = "hide_icon_check";
        }
        else {
          pcVar12 = "show_icon_check";
        }
        FUN_7103778300(0x3f800000,uVar7,(long)pcVar12);
      }
      local_50 = &PTR_FUN_710523d988;
      local_48 = 0;
      if (uVar7 != 0) {
        uVar10 = *(ulong *)(uVar7 + 0x18);
        *(undefined ***)(uVar7 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar7 + 0x18) = 0;
        if (uVar10 != 0) {
          FUN_710392eb40(uVar10);
        }
        FUN_710392eb40(uVar7);
        uVar10 = local_58;
      }
      local_60 = &PTR_FUN_710523d988;
      local_58 = 0;
      if (uVar10 != 0) {
        uVar7 = *(ulong *)(uVar10 + 0x18);
        *(undefined ***)(uVar10 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar10 + 0x18) = 0;
        if (uVar7 != 0) {
          FUN_710392eb40(uVar7);
        }
        FUN_710392eb40(uVar10);
      }
      local_70 = &PTR_FUN_710523d988;
      local_68 = 0;
      if (uVar6 != 0) {
        uVar10 = *(ulong *)(uVar6 + 0x18);
        *(undefined ***)(uVar6 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar6 + 0x18) = 0;
        if (uVar10 != 0) {
          FUN_710392eb40(uVar10);
        }
        FUN_710392eb40(uVar6);
      }
    }
  }
  return;
}

