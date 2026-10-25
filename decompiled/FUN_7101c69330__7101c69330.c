// addr:      7101c69330
// offset:    0x1c69330
// name:      FUN_7101c69330
// mangled:   
// signature: undefined __cdecl FUN_7101c69330(long param_1, long param_2, long param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101c69330(long param_1,long param_2,long param_3,undefined8 param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  undefined **local_98;
  ulong local_90;
  uint auStack_88 [2];
  byte ***apppbStack_80 [8];
  
  if (param_1 + 0x10 != param_2) {
    **(undefined8 **)(param_1 + 0x18) = **(undefined8 **)(param_2 + 8);
    *(undefined8 *)(*(long *)(param_1 + 0x18) + 8) = *(undefined8 *)(*(long *)(param_2 + 8) + 8);
    lVar7 = *(long *)(param_2 + 8);
    lVar5 = *(long *)(param_1 + 0x18);
    if (lVar5 != lVar7) {
      **(undefined8 **)(lVar5 + 0x18) = **(undefined8 **)(lVar7 + 0x18);
      *(undefined8 *)(*(long *)(lVar5 + 0x18) + 8) = *(undefined8 *)(*(long *)(lVar7 + 0x18) + 8);
      *(undefined8 *)(*(long *)(lVar5 + 0x18) + 0x10) =
           *(undefined8 *)(*(long *)(lVar7 + 0x18) + 0x10);
      *(undefined8 *)(*(long *)(lVar5 + 0x18) + 0x18) =
           *(undefined8 *)(*(long *)(lVar7 + 0x18) + 0x18);
    }
  }
  *(bool *)(param_1 + 10) = *(char *)(param_3 + 0x86) == '\x04';
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_3 + 0x88);
  lVar5 = param_3;
  FUN_71003a4ca0(auStack_88,"set_parts_bln_fig_%02d",0,param_3,param_4,param_5,param_6,param_7,
                 param_8);
  FUN_7103776640(&local_98,param_2,apppbStack_80,lVar5,param_4,param_5,param_6,param_7,param_8);
  uVar2 = local_90;
  if ((undefined ***)(param_1 + 0x28) != &local_98) {
    local_90 = 0;
    uVar8 = *(ulong *)(param_1 + 0x30);
    *(ulong *)(param_1 + 0x30) = uVar2;
    if (uVar8 != 0) {
      uVar2 = *(ulong *)(uVar8 + 0x18);
      *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar8 + 0x18) = 0;
      if (uVar2 != 0) {
        FUN_710392eb40(uVar2);
      }
      FUN_710392eb40(uVar8);
    }
  }
  uVar2 = local_90;
  local_98 = &PTR_FUN_710523d988;
  local_90 = 0;
  if (uVar2 != 0) {
    uVar8 = *(ulong *)(uVar2 + 0x18);
    *(undefined ***)(uVar2 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar2 + 0x18) = 0;
    if (uVar8 != 0) {
      FUN_710392eb40(uVar8);
    }
    FUN_710392eb40(uVar2);
  }
  uVar4 = 1;
  uVar3 = 0;
  FUN_7101c597c0(param_1,0,0,1,param_5,param_6,param_7,param_8);
  FUN_71003a4ca0(auStack_88,"set_parts_bln_fig_%02d",1,uVar3,uVar4,param_5,param_6,param_7,param_8);
  FUN_7103776640(&local_98,param_2,apppbStack_80,uVar3,uVar4,param_5,param_6,param_7,param_8);
  uVar2 = local_90;
  if ((undefined ***)(param_1 + 0x40) != &local_98) {
    local_90 = 0;
    uVar8 = *(ulong *)(param_1 + 0x48);
    *(ulong *)(param_1 + 0x48) = uVar2;
    if (uVar8 != 0) {
      uVar2 = *(ulong *)(uVar8 + 0x18);
      *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar8 + 0x18) = 0;
      if (uVar2 != 0) {
        FUN_710392eb40(uVar2);
      }
      FUN_710392eb40(uVar8);
    }
  }
  uVar2 = local_90;
  local_98 = &PTR_FUN_710523d988;
  local_90 = 0;
  if (uVar2 != 0) {
    uVar8 = *(ulong *)(uVar2 + 0x18);
    *(undefined ***)(uVar2 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar2 + 0x18) = 0;
    if (uVar8 != 0) {
      FUN_710392eb40(uVar8);
    }
    FUN_710392eb40(uVar2);
  }
  uVar4 = 1;
  uVar3 = 0;
  FUN_7101c597c0(param_1,1,0,1,param_5,param_6,param_7,param_8);
  FUN_71003a4ca0(auStack_88,"set_parts_bln_fig_%02d",2,uVar3,uVar4,param_5,param_6,param_7,param_8);
  FUN_7103776640(&local_98,param_2,apppbStack_80,uVar3,uVar4,param_5,param_6,param_7,param_8);
  uVar2 = local_90;
  if ((undefined ***)(param_1 + 0x58) != &local_98) {
    local_90 = 0;
    uVar8 = *(ulong *)(param_1 + 0x60);
    *(ulong *)(param_1 + 0x60) = uVar2;
    if (uVar8 != 0) {
      uVar2 = *(ulong *)(uVar8 + 0x18);
      *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar8 + 0x18) = 0;
      if (uVar2 != 0) {
        FUN_710392eb40(uVar2);
      }
      FUN_710392eb40(uVar8);
    }
  }
  uVar2 = local_90;
  local_98 = &PTR_FUN_710523d988;
  local_90 = 0;
  if (uVar2 != 0) {
    uVar8 = *(ulong *)(uVar2 + 0x18);
    *(undefined ***)(uVar2 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar2 + 0x18) = 0;
    if (uVar8 != 0) {
      FUN_710392eb40(uVar8);
    }
    FUN_710392eb40(uVar2);
  }
  uVar4 = 1;
  uVar3 = 0;
  FUN_7101c597c0(param_1,2,0,1,param_5,param_6,param_7,param_8);
  FUN_71003a4ca0(auStack_88,"set_parts_bln_fig_%02d",3,uVar3,uVar4,param_5,param_6,param_7,param_8);
  FUN_7103776640(&local_98,param_2,apppbStack_80,uVar3,uVar4,param_5,param_6,param_7,param_8);
  uVar2 = local_90;
  if ((undefined ***)(param_1 + 0x70) != &local_98) {
    local_90 = 0;
    uVar8 = *(ulong *)(param_1 + 0x78);
    *(ulong *)(param_1 + 0x78) = uVar2;
    if (uVar8 != 0) {
      uVar2 = *(ulong *)(uVar8 + 0x18);
      *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar8 + 0x18) = 0;
      if (uVar2 != 0) {
        FUN_710392eb40(uVar2);
      }
      FUN_710392eb40(uVar8);
    }
  }
  uVar2 = local_90;
  local_98 = &PTR_FUN_710523d988;
  local_90 = 0;
  if (uVar2 != 0) {
    uVar8 = *(ulong *)(uVar2 + 0x18);
    *(undefined ***)(uVar2 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar2 + 0x18) = 0;
    if (uVar8 != 0) {
      FUN_710392eb40(uVar8);
    }
    FUN_710392eb40(uVar2);
  }
  uVar4 = 1;
  uVar3 = 0;
  FUN_7101c597c0(param_1,3,0,1,param_5,param_6,param_7,param_8);
  uVar6 = 2;
  if (*(char *)(param_3 + 0x86) != '\x03') {
    uVar6 = 4;
  }
  uVar1 = 3;
  if (*(char *)(param_3 + 0x86) != '\x02') {
    uVar1 = uVar6;
  }
  FUN_71003a4ca0(auStack_88,"room_count%d",(ulong)uVar1,uVar3,uVar4,param_5,param_6,param_7,param_8)
  ;
  FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x18),(long)apppbStack_80);
  FUN_7101c69720(param_1 + 0x88,param_2,"pos_fight_%02d","pos_fight_%02d_pri",param_5,param_6,
                 param_7,param_8);
  FUN_7101c59660(param_1);
  return;
}

