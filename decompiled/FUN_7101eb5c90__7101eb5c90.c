// addr:      7101eb5c90
// offset:    0x1eb5c90
// name:      FUN_7101eb5c90
// mangled:   
// signature: undefined __cdecl FUN_7101eb5c90(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101eb5c90(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar6;
  char *pcVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = *(long *)(param_1 + 0x318);
  lVar9 = **(long **)(param_1 + 8);
  if (*(char *)(lVar8 + 0x161) == '\0') {
    if (*(int *)(param_1 + 0x270) != 1) {
      if (*(char *)(lVar8 + 0x162) == '\0') {
        FUN_7103778300(0xbf800000,*(long *)(lVar9 + 0x10),0x71043cfc04);
        *(undefined4 *)(param_1 + 0x270) = 1;
        return;
      }
      FUN_7101ec57e0(*(long *)(lVar8 + 8),param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      if (*(char *)(lVar8 + 0x161) == '\0') {
        pcVar7 = "mnu_stgcreate_edit_display_back";
      }
      else {
        pcVar7 = "mnu_stgcreate_edit_display_erase";
      }
      FUN_710377a120(lVar8 + 0x38,pcVar7,param_3,param_4,param_5,param_6,param_7,param_8);
      goto LAB_7101eb6078;
    }
  }
  else {
    if (*(int *)(param_1 + 0x270) != 1) {
      FUN_7103778300(0x3f800000,*(long *)(lVar9 + 0x10),0x71043f1012);
      FUN_7103778300(0x3f800000,*(long *)(lVar9 + 0x10),0x7104422aec);
      FUN_7103778300(0xbf800000,*(long *)(lVar9 + 0x10),0x71043bed92);
      FUN_7103778300(0xbf800000,*(long *)(lVar9 + 0x10),0x7104433811);
      FUN_7103778300(0xbf800000,*(long *)(lVar9 + 0x10),0x71042b4b57);
      FUN_7103778300(0x3f800000,*(long *)(lVar9 + 0x10),0x710436caa8);
      FUN_7103778300(0x3f800000,*(long *)(lVar9 + 0x10),0x7104401c9e);
      lVar8 = *(long *)(param_1 + 0x318);
      bVar3 = *(int *)(lVar8 + 0xb8) != 0;
      puVar1 = (undefined8 *)(lVar8 + 0xd8);
      if (bVar3) {
        puVar1 = (undefined8 *)(lVar8 + 0x108);
      }
      lVar2 = 0xd8;
      if (bVar3) {
        lVar2 = 0x108;
      }
      **(undefined8 **)(lVar8 + 0x128) = *(undefined8 *)*puVar1;
      *(undefined8 *)(*(long *)(lVar8 + 0x128) + 8) = *(undefined8 *)(*(long *)(lVar8 + lVar2) + 8);
      *(undefined1 *)(*(long *)(lVar8 + 0x128) + 0x10) =
           *(undefined1 *)(*(long *)(lVar8 + lVar2) + 0x10);
      FUN_710377aee0(0x3f800000,lVar8 + 0x120);
      uVar6 = extraout_x1;
      if (*(char *)(*(long *)(param_1 + 0x358) + 0x1ec) != '\0') {
        FUN_710377aee0(0x3f800000,*(long *)(param_1 + 0x358) + 0x1b8);
        uVar6 = extraout_x1_00;
      }
      *(undefined4 *)(param_1 + 0x270) = 1;
      lVar8 = *(long *)(param_1 + 0x318);
      if (*(char *)(lVar8 + 0x162) != '\0') {
        FUN_7101ec57e0(*(long *)(lVar8 + 8),uVar6,param_3,param_4,param_5,param_6,param_7,param_8);
        if (*(char *)(lVar8 + 0x161) == '\0') {
          pcVar7 = "mnu_stgcreate_edit_display_back";
        }
        else {
          pcVar7 = "mnu_stgcreate_edit_display_erase";
        }
        FUN_710377a120(lVar8 + 0x38,pcVar7,param_3,param_4,param_5,param_6,param_7,param_8);
        return;
      }
      FUN_7103778300(0xbf800000,*(long *)(lVar9 + 0x10),0x71043cfc04);
      return;
    }
    lVar8 = *(long *)(*(long *)(lVar9 + 0x10) + 8);
    if (lVar8 != 0) {
      plVar4 = (long *)FUN_71037964b0(lVar8,0x71043f1012);
      if (plVar4 != (long *)0x0) {
        uVar5 = (**(code **)(*plVar4 + 0x138))();
        if ((uVar5 & 1) == 0) {
          return;
        }
        lVar8 = *(long *)(*(long *)(lVar9 + 0x10) + 8);
        if (lVar8 == 0) goto LAB_7101eb5e18;
      }
      plVar4 = (long *)FUN_71037964b0(lVar8,0x7104422aec);
      if (plVar4 != (long *)0x0) {
        uVar5 = (**(code **)(*plVar4 + 0x138))();
        if ((uVar5 & 1) == 0) {
          return;
        }
        lVar8 = *(long *)(*(long *)(lVar9 + 0x10) + 8);
        if (lVar8 == 0) goto LAB_7101eb5e18;
      }
      plVar4 = (long *)FUN_71037964b0(lVar8,0x71043bed92);
      if (plVar4 != (long *)0x0) {
        uVar5 = (**(code **)(*plVar4 + 0x138))();
        if ((uVar5 & 1) == 0) {
          return;
        }
        lVar8 = *(long *)(*(long *)(lVar9 + 0x10) + 8);
        if (lVar8 == 0) goto LAB_7101eb5e18;
      }
      plVar4 = (long *)FUN_71037964b0(lVar8,0x7104433811);
      if (plVar4 != (long *)0x0) {
        uVar5 = (**(code **)(*plVar4 + 0x138))();
        if ((uVar5 & 1) == 0) {
          return;
        }
        lVar8 = *(long *)(*(long *)(lVar9 + 0x10) + 8);
        if (lVar8 == 0) goto LAB_7101eb5e18;
      }
      plVar4 = (long *)FUN_71037964b0(lVar8,0x71042b4b57);
      if (plVar4 != (long *)0x0) {
        uVar5 = (**(code **)(*plVar4 + 0x138))();
        if ((uVar5 & 1) == 0) {
          return;
        }
        lVar8 = *(long *)(*(long *)(lVar9 + 0x10) + 8);
        if (lVar8 == 0) goto LAB_7101eb5e18;
      }
      plVar4 = (long *)FUN_71037964b0(lVar8,0x710436caa8);
      if (plVar4 != (long *)0x0) {
        uVar5 = (**(code **)(*plVar4 + 0x138))();
        if ((uVar5 & 1) == 0) {
          return;
        }
        lVar8 = *(long *)(*(long *)(lVar9 + 0x10) + 8);
        if (lVar8 == 0) goto LAB_7101eb5e18;
      }
      plVar4 = (long *)FUN_71037964b0(lVar8,0x7104401c9e);
      if ((plVar4 != (long *)0x0) && (uVar5 = (**(code **)(*plVar4 + 0x138))(), (uVar5 & 1) == 0)) {
        return;
      }
    }
LAB_7101eb5e18:
    plVar4 = *(long **)(*(long *)(*(long *)(param_1 + 0x318) + 0x128) + 8);
    if ((plVar4 != (long *)0x0) && (uVar5 = (**(code **)(*plVar4 + 0x138))(), (uVar5 & 1) == 0)) {
      return;
    }
    if (((*(char *)(*(long *)(param_1 + 0x358) + 0x1ec) != '\0') &&
        (plVar4 = *(long **)(*(long *)(*(long *)(param_1 + 0x358) + 0x1c0) + 8),
        plVar4 != (long *)0x0)) && (uVar5 = (**(code **)(*plVar4 + 0x138))(), (uVar5 & 1) == 0)) {
      return;
    }
    if (*(char *)(*(long *)(param_1 + 0x318) + 0x162) != '\0') goto LAB_7101eb6078;
  }
  lVar8 = *(long *)(*(long *)(lVar9 + 0x10) + 8);
  if (((lVar8 != 0) && (plVar4 = (long *)FUN_71037964b0(lVar8,0x71043cfc04), plVar4 != (long *)0x0))
     && (uVar5 = (**(code **)(*plVar4 + 0x138))(), (uVar5 & 1) == 0)) {
    return;
  }
LAB_7101eb6078:
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}

