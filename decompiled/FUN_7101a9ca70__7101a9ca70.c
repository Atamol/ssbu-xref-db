// addr:      7101a9ca70
// offset:    0x1a9ca70
// name:      FUN_7101a9ca70
// mangled:   
// signature: undefined __cdecl FUN_7101a9ca70(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101a9ca70(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  undefined8 *puVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  undefined4 uVar11;
  undefined **local_70;
  ulong local_68;
  undefined **local_60;
  ulong local_58;
  undefined **local_50;
  undefined8 *local_48;
  
  if (*(int *)(param_1 + 0x1dc) == 0) {
    plVar10 = *(long **)(*DAT_7105314510 + 0x68);
    uVar7 = 1;
    FUN_7103771d60(&local_50,*(long *)(param_1 + 0x200),(long ****)0x1,param_4,param_5,param_6,
                   param_7,param_8);
    puVar2 = local_48;
    plVar9 = (long *)*local_48;
    if (plVar9 != (long *)0x0) {
      (**(code **)(*plVar9 + 0x1f8))
                (plVar9,*(char *)(*(long *)(*plVar10 + 8) + (long)*(int *)(param_1 + 0x294) * 0x48 +
                                 0x354c) == '\0');
      uVar5 = (**(code **)(*plVar9 + 0x200))(plVar9);
      if ((uVar5 & 1) == 0) {
        uVar4 = 1;
      }
      else {
        uVar4 = (**(code **)(*plVar9 + 0x210))(plVar9);
        uVar4 = uVar4 ^ 1;
      }
      uVar7 = 0;
      (**(code **)(*plVar9 + 0x388))(plVar9,uVar4 & 1);
    }
    local_50 = &PTR_FUN_710523d9c8;
    local_48 = (undefined8 *)0x0;
    if (puVar2 != (undefined8 *)0x0) {
      FUN_710392eb40((ulong)puVar2);
    }
    pcVar1 = "mnu_playing_together_report";
    if (*(char *)(*(long *)(*plVar10 + 8) + (long)*(int *)(param_1 + 0x294) * 0x48 + 0x354c) != '\0'
       ) {
      pcVar1 = "mnu_playing_together_reported";
    }
    FUN_7103776640(&local_50,**(long **)(param_1 + 0x1f0) + 8,(byte ****)"set_parts_submenu",uVar7,
                   param_4,param_5,param_6,param_7,param_8);
    FUN_7103776640(&local_70,(long)&local_50,(byte ****)"submenu_item_01",uVar7,param_4,param_5,
                   param_6,param_7,param_8);
    FUN_7103776910(&local_60,(long)&local_70,(long ****)"set_txt_title",uVar7,param_4,param_5,
                   param_6,param_7,param_8);
    FUN_710377a120((long)&local_60,pcVar1,uVar7,param_4,param_5,param_6,param_7,param_8);
    uVar5 = local_58;
    local_60 = &PTR_FUN_710523d9a8;
    local_58 = 0;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
    uVar5 = local_68;
    local_70 = &PTR_FUN_710523d988;
    local_68 = 0;
    if (uVar5 != 0) {
      uVar6 = *(ulong *)(uVar5 + 0x18);
      *(undefined ***)(uVar5 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar5 + 0x18) = 0;
      if (uVar6 != 0) {
        FUN_710392eb40(uVar6);
      }
      FUN_710392eb40(uVar5);
    }
    FUN_7103771a80((long *)(param_1 + 0x200),0,0);
    FUN_7103783c10((long *)(param_1 + 0x1f8),*(int *)(*(long *)(param_1 + 0x1f8) + 0x2a4),0,0,
                   param_5,param_6,param_7,param_8);
    (**(code **)(**(long **)(param_1 + 0x1f8) + 0x70))(*(long **)(param_1 + 0x1f8),0);
    puVar2 = local_48;
    local_50 = &PTR_FUN_710523d988;
    local_48 = (undefined8 *)0x0;
    if (puVar2 != (undefined8 *)0x0) {
      uVar5 = *(ulong *)((long)puVar2 + 0x18);
      *(undefined ***)((long)puVar2 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)((long)puVar2 + 0x18) = 0;
      if (uVar5 != 0) {
        FUN_710392eb40(uVar5);
      }
      FUN_710392eb40((ulong)puVar2);
    }
  }
  else {
    bVar3 = FUN_71037814c0(*(long *)(param_1 + 0x1f8),*(int *)(*(long *)(param_1 + 0x1f8) + 0x2a4));
    if (bVar3) {
      FUN_7103778300(0x3f800000,*(long *)(**(long **)(param_1 + 0x1f0) + 0x10),0x71042b486a);
      if (**(long **)(param_1 + 0x240) == 0) {
        uVar11 = (undefined4)((ulong)_ConstantZero >> 0x20);
      }
      else {
        uVar11 = *(undefined4 *)(**(long **)(param_1 + 0x240) + 0x34);
      }
      lVar8 = **(long **)(param_1 + 0x230);
      if (lVar8 != 0) {
        *(undefined4 *)(lVar8 + 0x34) = uVar11;
        *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) | 0x10;
      }
      if (0x12 < *(uint *)(param_1 + 0x1d4)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x1d4) * 4 + 0x188) = 4;
    }
  }
  return;
}

