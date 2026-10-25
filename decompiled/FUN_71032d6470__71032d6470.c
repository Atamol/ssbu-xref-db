// addr:      71032d6470
// offset:    0x32d6470
// name:      FUN_71032d6470
// mangled:   
// signature: undefined __cdecl FUN_71032d6470(long param_1, undefined8 * param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71032d6470(long param_1,undefined8 *param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined **ppuVar1;
  ulong uVar2;
  char *pcVar3;
  long ****pppplVar4;
  long ****pppplVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  ulong local_80;
  ulong local_78;
  undefined **local_68;
  undefined **local_60;
  
  plVar10 = (long *)*param_2;
  lVar8 = *plVar10;
  pppplVar4 = param_3;
  pppplVar5 = param_5;
  uVar6 = param_6;
  uVar7 = param_7;
  FUN_7101f2dd30(&local_80,(long *)param_4,param_3,param_4,param_5,param_6,param_7,param_8);
  *(byte *)(param_1 + 0xf4) = (byte)param_7 & 1;
  *(undefined8 *)(*(long *)(param_1 + 0xd8) + 8) = 0;
  if (*(int *)((long)param_3 + 4) == 0) {
    pcVar3 = "set_parts_submenu";
  }
  else {
    pcVar3 = (char *)(param_3 + 1);
  }
  FUN_7103776640(&local_68,lVar8 + 8,(byte ****)pcVar3,pppplVar4,param_4,pppplVar5,uVar6,uVar7,
                 param_8);
  ppuVar1 = local_60;
  if ((undefined ***)(param_1 + 0xd0) != &local_68) {
    local_60 = (undefined **)0x0;
    uVar9 = *(ulong *)(param_1 + 0xd8);
    *(undefined ***)(param_1 + 0xd8) = ppuVar1;
    if (uVar9 != 0) {
      uVar2 = *(ulong *)(uVar9 + 0x18);
      *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar9 + 0x18) = 0;
      if (uVar2 != 0) {
        FUN_710392eb40(uVar2);
      }
      FUN_710392eb40(uVar9);
    }
  }
  ppuVar1 = local_60;
  local_68 = &PTR_FUN_710523d988;
  local_60 = (undefined **)0x0;
  if (ppuVar1 != (undefined **)0x0) {
    uVar9 = *(ulong *)((long)ppuVar1 + 0x18);
    *(undefined ***)((long)ppuVar1 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)ppuVar1 + 0x18) = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    FUN_710392eb40((ulong)ppuVar1);
  }
  *(long *)(param_1 + 0xe8) = *(long *)*plVar10 + 0x5f8;
  FUN_7101f2dd30(&local_68,(long *)&local_80,pppplVar4,param_4,pppplVar5,uVar6,uVar7,param_8);
  FUN_71032d5130(param_1,(long *)&local_68,(int)param_5,(int)param_6,pppplVar5,uVar6,uVar7,param_8);
  if (local_68 != (undefined **)0x0) {
    local_60 = local_68;
    FUN_710392eb40((ulong)local_68);
  }
  if (local_80 != 0) {
    local_78 = local_80;
    FUN_710392eb40(local_80);
  }
  return;
}

