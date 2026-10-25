// addr:      7101b0a030
// offset:    0x1b0a030
// name:      FUN_7101b0a030
// mangled:   
// signature: undefined __cdecl FUN_7101b0a030(long param_1, uint param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101b0a030(long param_1,uint param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long *plVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  long *********ppppppppplVar8;
  long lVar9;
  undefined **ppuVar10;
  undefined **local_68;
  ulong local_60;
  undefined **local_58;
  ulong local_50;
  undefined **local_48;
  undefined **local_40;
  undefined **ppuStack_38;
  
  if ((param_2 & 1) == 0) {
    lVar9 = *(long *)(param_1 + 0x400);
    local_40 = (undefined **)0x0;
    ppuStack_38 = (undefined **)0x0;
    local_48 = (undefined **)0x0;
    FUN_71019bb740((ulong *)&local_48,*(long *)(lVar9 + 0x170) - *(long *)(lVar9 + 0x168) >> 3,
                   (long ****)param_3,param_4,param_5,param_6,param_7,param_8);
    plVar2 = *(long **)(lVar9 + 0x170);
    ppuVar10 = local_40;
    for (plVar1 = *(long **)(lVar9 + 0x168); ppuVar3 = local_48, ppuVar4 = local_48,
        local_40 = ppuVar10, plVar1 != plVar2; plVar1 = plVar1 + 1) {
      if (ppuVar10 == ppuStack_38) {
        FUN_71019bb8f0((long *)&local_48,(undefined8 *)(*plVar1 + 8),(long ****)param_3,param_4,
                       param_5,param_6,param_7,param_8);
      }
      else {
        FUN_7103776390(ppuVar10,(undefined8 *)(*plVar1 + 8),(long ****)param_3,param_4,param_5,
                       param_6,param_7,param_8);
        local_40 = local_40 + 2;
      }
      ppuVar10 = local_40;
    }
    for (; local_48 = ppuVar4, ppuVar3 != ppuVar10; ppuVar3 = ppuVar3 + 2) {
      FUN_7101b11920((long)ppuVar3,0,param_3,param_4,param_5,param_6,param_7,param_8);
      ppuVar4 = local_48;
    }
    ppuVar10 = local_40;
    if (ppuVar4 != (undefined **)0x0) {
      while (ppuVar10 != ppuVar4) {
        ppuVar10 = ppuVar10 + -2;
        (**(code **)*ppuVar10)(ppuVar10);
      }
      local_40 = ppuVar4;
      if (local_48 != (undefined **)0x0) {
        FUN_710392eb40((ulong)local_48);
      }
    }
  }
  else {
    FUN_710377cc80(*(long *)(param_1 + 0x400),1);
  }
  FUN_7103776640(&local_48,param_1 + 0x3d0,(byte ****)"set_parts_spirit",param_3,param_4,param_5,
                 param_6,param_7,param_8);
  ppppppppplVar8 = (long *********)(ulong)(param_2 & 1);
  FUN_71025af7f0((long)&local_48,*(ushort *)(param_1 + 0x490),ppppppppplVar8,param_4,param_5,param_6
                 ,param_7,param_8);
  if (*(int *)(param_1 + 0x278) == 2) {
    if (*(long *)(*(long *)(*(long *)(param_1 + 0x470) + 0x18) + 8) != 0) {
      FUN_7103776390(&local_68,(undefined8 *)(*(long *)(param_1 + 0x470) + 0x10),
                     (long ****)ppppppppplVar8,param_4,param_5,param_6,param_7,param_8);
      FUN_7103776640(&local_58,(long)&local_68,(byte ****)"set_part_spirits",ppppppppplVar8,param_4,
                     param_5,param_6,param_7,param_8);
      uVar5 = local_60;
      local_68 = &PTR_FUN_710523d988;
      local_60 = 0;
      if (uVar5 != 0) {
        uVar6 = *(ulong *)(uVar5 + 0x18);
        *(undefined ***)(uVar5 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar5 + 0x18) = 0;
        if (uVar6 != 0) {
          FUN_710392eb40(uVar6);
        }
        FUN_710392eb40(uVar5);
      }
      ppppppppplVar8 = (long *********)(ulong)(param_2 & 1);
      FUN_71025af7f0((long)&local_58,**(ushort **)(param_1 + 0x470),ppppppppplVar8,param_4,param_5,
                     param_6,param_7,param_8);
      uVar5 = local_50;
      local_58 = &PTR_FUN_710523d988;
      local_50 = 0;
      if (uVar5 != 0) {
        uVar6 = *(ulong *)(uVar5 + 0x18);
        *(undefined ***)(uVar5 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar5 + 0x18) = 0;
        if (uVar6 != 0) {
          FUN_710392eb40(uVar6);
        }
        FUN_710392eb40(uVar5);
      }
    }
    if (*(long *)(*(long *)(*(long *)(param_1 + 0x478) + 0x18) + 8) != 0) {
      FUN_7103776390(&local_68,(undefined8 *)(*(long *)(param_1 + 0x478) + 0x10),
                     (long ****)ppppppppplVar8,param_4,param_5,param_6,param_7,param_8);
      FUN_7103776640(&local_58,(long)&local_68,(byte ****)"set_part_spirits",ppppppppplVar8,param_4,
                     param_5,param_6,param_7,param_8);
      uVar5 = local_60;
      local_68 = &PTR_FUN_710523d988;
      local_60 = 0;
      if (uVar5 != 0) {
        uVar6 = *(ulong *)(uVar5 + 0x18);
        *(undefined ***)(uVar5 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar5 + 0x18) = 0;
        if (uVar6 != 0) {
          FUN_710392eb40(uVar6);
        }
        FUN_710392eb40(uVar5);
      }
      ppppppppplVar8 = (long *********)(ulong)(param_2 & 1);
      FUN_71025af7f0((long)&local_58,**(ushort **)(param_1 + 0x478),ppppppppplVar8,param_4,param_5,
                     param_6,param_7,param_8);
      uVar5 = local_50;
      local_58 = &PTR_FUN_710523d988;
      local_50 = 0;
      if (uVar5 != 0) {
        uVar6 = *(ulong *)(uVar5 + 0x18);
        *(undefined ***)(uVar5 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar5 + 0x18) = 0;
        if (uVar6 != 0) {
          FUN_710392eb40(uVar6);
        }
        FUN_710392eb40(uVar5);
      }
    }
    if (*(long *)(*(long *)(*(long *)(param_1 + 0x480) + 0x18) + 8) != 0) {
      FUN_7103776390(&local_68,(undefined8 *)(*(long *)(param_1 + 0x480) + 0x10),
                     (long ****)ppppppppplVar8,param_4,param_5,param_6,param_7,param_8);
      FUN_7103776640(&local_58,(long)&local_68,(byte ****)"set_part_spirits",ppppppppplVar8,param_4,
                     param_5,param_6,param_7,param_8);
      uVar5 = local_60;
      local_68 = &PTR_FUN_710523d988;
      local_60 = 0;
      if (uVar5 != 0) {
        uVar6 = *(ulong *)(uVar5 + 0x18);
        *(undefined ***)(uVar5 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar5 + 0x18) = 0;
        if (uVar6 != 0) {
          FUN_710392eb40(uVar6);
        }
        FUN_710392eb40(uVar5);
      }
      ppppppppplVar8 = (long *********)(ulong)(param_2 & 1);
      FUN_71025af7f0((long)&local_58,**(ushort **)(param_1 + 0x480),ppppppppplVar8,param_4,param_5,
                     param_6,param_7,param_8);
      uVar5 = local_50;
      local_58 = &PTR_FUN_710523d988;
      local_50 = 0;
      if (uVar5 != 0) {
        uVar6 = *(ulong *)(uVar5 + 0x18);
        *(undefined ***)(uVar5 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar5 + 0x18) = 0;
        if (uVar6 != 0) {
          FUN_710392eb40(uVar6);
        }
        FUN_710392eb40(uVar5);
      }
    }
    if (*(long *)(*(long *)(*(long *)(param_1 + 0x488) + 0x18) + 8) != 0) {
      FUN_7103776390(&local_68,(undefined8 *)(*(long *)(param_1 + 0x488) + 0x10),
                     (long ****)ppppppppplVar8,param_4,param_5,param_6,param_7,param_8);
      FUN_7103776640(&local_58,(long)&local_68,(byte ****)"set_part_spirits",ppppppppplVar8,param_4,
                     param_5,param_6,param_7,param_8);
      uVar5 = local_60;
      local_68 = &PTR_FUN_710523d988;
      local_60 = 0;
      if (uVar5 != 0) {
        uVar6 = *(ulong *)(uVar5 + 0x18);
        *(undefined ***)(uVar5 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar5 + 0x18) = 0;
        if (uVar6 != 0) {
          FUN_710392eb40(uVar6);
        }
        FUN_710392eb40(uVar5);
      }
      FUN_71025af7f0((long)&local_58,**(ushort **)(param_1 + 0x488),
                     (long *********)(ulong)(param_2 & 1),param_4,param_5,param_6,param_7,param_8);
      uVar5 = local_50;
      local_58 = &PTR_FUN_710523d988;
      local_50 = 0;
      if (uVar5 != 0) {
        uVar6 = *(ulong *)(uVar5 + 0x18);
        *(undefined ***)(uVar5 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar5 + 0x18) = 0;
        if (uVar6 != 0) {
          FUN_710392eb40(uVar6);
        }
        FUN_710392eb40(uVar5);
      }
    }
  }
  ppuVar10 = local_40;
  local_48 = &PTR_FUN_710523d988;
  local_40 = (undefined **)0x0;
  if (ppuVar10 != (undefined **)0x0) {
    puVar7 = ppuVar10[3];
    ppuVar10[2] = (undefined *)&PTR_FUN_710523d9a8;
    ppuVar10[3] = (undefined *)0x0;
    if (puVar7 != (undefined *)0x0) {
      FUN_710392eb40((ulong)puVar7);
    }
    FUN_710392eb40((ulong)ppuVar10);
  }
  return;
}

