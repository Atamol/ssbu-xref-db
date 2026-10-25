// addr:      7100197f50
// offset:    0x197f50
// name:      FUN_7100197f50
// mangled:   
// signature: undefined __cdecl FUN_7100197f50(long * param_1, long * param_2)


void FUN_7100197f50(long *param_1,long *param_2)

{
  char cVar1;
  undefined1 uVar2;
  byte bVar3;
  bool bVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long *plVar11;
  code *pcVar12;
  undefined8 local_40;
  ulong local_38;
  
  if ((int)param_2[1] == 0) {
    return;
  }
  switch(*(undefined1 *)*param_2) {
  case 1:
    FUN_71001989e0((long)param_1,param_2);
    return;
  case 2:
    FUN_7100198b70((long)param_1,param_2);
    return;
  default:
    local_40 = 0x80000000000;
    local_38 = local_38 & 0xffffffff00000000;
    plVar11 = param_2 + 3;
    pcVar12 = *(code **)(*plVar11 + 0x28);
    goto LAB_7100197ff0;
  case 4:
    FUN_7100198c80(param_1,param_2);
    return;
  case 8:
    plVar11 = (long *)FUN_7100161fa0(DAT_71052add68);
    if (((plVar11[0x13] != 0) && (lVar10 = param_1[0xc], lVar10 != 0)) &&
       (*(char *)(lVar10 + 0x78) != '\0')) {
      cVar1 = *(char *)(*param_2 + 1);
      uVar2 = FUN_7100193110(DAT_71052adfc0);
      lVar8 = (**(code **)(*plVar11 + 0x48))(plVar11,uVar2);
      if ((lVar8 != 0) && (*(char *)(lVar8 + 0x38) == cVar1)) {
        *(undefined1 *)(lVar10 + 0x78) = 0;
      }
    }
    break;
  case 0x10:
    FUN_7100198d70(param_1,param_2);
    return;
  case 0x11:
    lVar10 = FUN_7100161fa0(DAT_71052add68);
    if ((*(long *)(lVar10 + 0x98) != 0) &&
       (*(char *)(*(long *)(DAT_71052adfc0 + 0x28) + 0x8c) != '\0')) {
      FUN_7100193f90(*(long *)(DAT_71052adfc0 + 0x28),*(byte *)(*param_2 + 1));
      return;
    }
    break;
  case 0x20:
    FUN_7100198e30(param_1,param_2);
    return;
  case 0x21:
    bVar4 = FUN_71001931d0(DAT_71052adfc0);
    if ((!bVar4) && ((int)param_2[1] == 3)) {
      lVar10 = *param_2;
      bVar5 = *(byte *)(lVar10 + 1);
      if ((bVar5 < 0x20) && (bVar3 = FUN_7100193110(DAT_71052adfc0), bVar5 == bVar3)) {
        plVar11 = *(long **)(DAT_71052adfc0 + 0x50);
        uVar9 = FUN_710018dc30(plVar11,(uint)*(byte *)(lVar10 + 2));
        if ((uVar9 & 1) != 0) {
          FUN_71000b4820((long)plVar11,0);
          return;
        }
      }
    }
    break;
  case 0x24:
    FUN_71001990f0(param_1,param_2);
    return;
  case 0x25:
    if (param_2[2] == 0) {
      return;
    }
    bVar4 = FUN_71001931d0(DAT_71052adfc0);
    if (!bVar4) {
      return;
    }
    if ((int)param_2[1] != 10) {
      return;
    }
    lVar10 = *param_2;
    bVar5 = *(byte *)(lVar10 + 1);
    uVar6 = FUN_71000bb9a0((uint *)(lVar10 + 2));
    uVar7 = FUN_71000bb9a0((uint *)(lVar10 + 6));
    if (uVar7 < *(uint *)(DAT_71052adfc0 + 0xcc)) {
      return;
    }
    bVar4 = FUN_7100190a90(DAT_71052adfc0,bVar5);
    if (!bVar4) {
      return;
    }
    plVar11 = *(long **)(DAT_71052adfc0 + 0x120);
    if (plVar11 == (long *)0x0) {
      return;
    }
    local_40._0_5_ = CONCAT14(bVar5,0x1a);
    local_38 = (ulong)uVar6;
    goto LAB_7100198434;
  case 0x40:
    bVar5 = FUN_71001921a0(DAT_71052adfc0);
    if ((bVar5 & 1) == 0) {
      return;
    }
    lVar10 = FUN_7100161fa0(DAT_71052add68);
    if (*(long *)(lVar10 + 0x98) == 0) {
      return;
    }
    lVar10 = *(long *)(DAT_71052adfc0 + 0x38);
    if (*(char *)(lVar10 + 0xb2) != '\0') {
      FUN_71001a26a0(lVar10,(uint)*(byte *)(*param_2 + 1));
      return;
    }
    if (*(char *)(lVar10 + 0x84) != '\0') {
      return;
    }
    plVar11 = *(long **)(DAT_71052adfc0 + 0x120);
    if (plVar11 == (long *)0x0) {
      return;
    }
    local_40._0_5_ = CONCAT14(*(byte *)(*param_2 + 1),0x15);
    local_38 = 0;
LAB_7100198434:
    pcVar12 = *(code **)(*plVar11 + 0x10);
LAB_7100197ff0:
    (*pcVar12)(plVar11,&local_40);
    break;
  case 0x41:
    bVar5 = FUN_71001921a0(DAT_71052adfc0);
    if ((((bVar5 & 1) != 0) &&
        (lVar10 = FUN_7100161fa0(DAT_71052add68), *(long *)(lVar10 + 0x98) != 0)) &&
       (*(char *)(*(long *)(DAT_71052adfc0 + 0x38) + 0x84) != '\0')) {
      FUN_71001a2740(*(long *)(DAT_71052adfc0 + 0x38),(uint)*(byte *)(*param_2 + 1),
                     *(char *)(*param_2 + 2) != '\0');
      return;
    }
    break;
  case 0x42:
    bVar5 = FUN_71001921a0(DAT_71052adfc0);
    if ((((bVar5 & 1) != 0) &&
        (lVar10 = FUN_7100161fa0(DAT_71052add68), *(long *)(lVar10 + 0x98) != 0)) &&
       (*(char *)(*(long *)(DAT_71052adfc0 + 0x38) + 0xb1) != '\0')) {
      FUN_71001a2680(*(long *)(DAT_71052adfc0 + 0x38),*(byte *)(*param_2 + 1));
      return;
    }
    break;
  case 0x44:
    FUN_7100199290(param_1,param_2);
    return;
  case 0x48:
    bVar5 = FUN_71001921a0(DAT_71052adfc0);
    if ((((bVar5 & 1) != 0) &&
        (lVar10 = FUN_7100161fa0(DAT_71052add68), *(long *)(lVar10 + 0x98) != 0)) &&
       (*(char *)(*(long *)(DAT_71052adfc0 + 0x40) + 0x8e) != '\0')) {
      FUN_710018f980(*(long *)(DAT_71052adfc0 + 0x40),*(byte *)(*param_2 + 1));
      return;
    }
    break;
  case 0x49:
    FUN_7100199360(param_1,param_2);
    return;
  case 0x4a:
    FUN_7100199450(param_1,param_2);
    return;
  case 0x80:
    FUN_71001995b0(param_1,param_2);
    return;
  case 0x81:
    FUN_71001996c0(param_1,param_2);
    return;
  }
  return;
}

