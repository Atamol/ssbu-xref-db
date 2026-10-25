// addr:      7101ce5140
// offset:    0x1ce5140
// name:      FUN_7101ce5140
// mangled:   
// signature: undefined __cdecl FUN_7101ce5140(long param_1, ulong param_2, ushort param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101ce5140(long param_1,ulong param_2,ushort param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  ulong uVar2;
  ulong uVar3;
  byte ****ppppbVar4;
  long ****pppplVar5;
  undefined **local_88;
  long *local_80 [8];
  undefined **local_40;
  ulong local_38;
  
  pppplVar5 = (long ****)(param_2 & 0xffffffff);
  if (*(long *)(param_1 + 0x2b8) == 0) {
    return;
  }
  FUN_7103771d60(&local_88,*(long *)(param_1 + 0x2b8),pppplVar5,param_4,param_5,param_6,param_7,
                 param_8);
  plVar1 = local_80[0];
  if (*local_80[0] == 0) {
    ppppbVar4 = (byte ****)&DAT_7104867c2e;
  }
  else {
    ppppbVar4 = *(byte *****)(*local_80[0] + 0x88);
  }
  FUN_7103776640(&local_40,param_1 + 0x240,ppppbVar4,pppplVar5,param_4,param_5,param_6,param_7,
                 param_8);
  local_88 = &PTR_FUN_710523d9c8;
  local_80[0] = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar1);
  }
  uVar2 = local_38;
  if (*(long *)(local_38 + 8) != 0) {
    if (param_3 == 0xffff) {
      if (*(ulong *)(param_1 + 0x290) == 0) goto LAB_7101ce5240;
      param_3 = FUN_710334c7d0(*(long *)(DAT_710532f8f8 + 8),*(ulong *)(param_1 + 0x290),
                               *(int *)(param_1 + 0x288));
    }
    if (param_3 < 5) {
      local_80[0] = (long *)((ulong)local_80[0] & 0xffffffffffffff00);
      local_88 = (undefined **)0x0;
      FUN_710062dc20((uint *)&local_88,"mode_%02d");
      FUN_7103778300(0x3f800000,local_38,(long)local_80);
    }
  }
LAB_7101ce5240:
  local_40 = &PTR_FUN_710523d988;
  local_38 = 0;
  if (uVar2 != 0) {
    uVar3 = *(ulong *)(uVar2 + 0x18);
    *(undefined ***)(uVar2 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar2 + 0x18) = 0;
    if (uVar3 != 0) {
      FUN_710392eb40(uVar3);
    }
    FUN_710392eb40(uVar2);
  }
  return;
}

