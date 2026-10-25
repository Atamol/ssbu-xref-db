// addr:      7101e380e0
// offset:    0x1e380e0
// name:      FUN_7101e380e0
// mangled:   
// signature: undefined __cdecl FUN_7101e380e0(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101e380e0(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long ****pppplVar12;
  long lVar13;
  short *psVar14;
  undefined **local_80;
  ulong local_78;
  undefined **local_70;
  ulong local_68;
  undefined **local_60;
  ulong local_58;
  long ***local_50;
  undefined4 local_44;
  
  lVar11 = (long)*(int *)(param_1 + 0xbf4);
  iVar3 = *(int *)(param_1 + 0xbf8);
  iVar5 = iVar3 + 1;
  iVar4 = *(int *)(param_1 + lVar11 * 4 + 0xc08);
  if (iVar5 < iVar4) {
    lVar13 = 0;
    psVar14 = (short *)(param_1 + lVar11 * 0x40 + (long)iVar5 * 2 + 0xf18);
    do {
      if ((*psVar14 == -1) && (psVar14[9] == -1)) {
        if ((int)lVar13 != -1) {
          iVar5 = (int)lVar13 + iVar5;
          goto LAB_7101e381b0;
        }
        break;
      }
      lVar13 = lVar13 + 1;
      psVar14 = psVar14 + 1;
    } while (iVar5 + lVar13 < (long)iVar4);
  }
  if (iVar3 < 1) {
    return;
  }
  lVar13 = (long)iVar3;
  iVar5 = iVar3;
  while( true ) {
    iVar5 = iVar5 + -1;
    lVar2 = param_1 + lVar11 * 0x40 + lVar13 * 2;
    if ((*(short *)(lVar2 + 0xf16) == -1) && (*(short *)(lVar2 + 0xf28) == -1)) break;
    bVar1 = lVar13 < 2;
    lVar13 = lVar13 + -1;
    if (bVar1) {
      return;
    }
  }
LAB_7101e381b0:
  if (iVar5 == iVar3) {
    return;
  }
  *(int *)(param_1 + 0xc00) = iVar3;
  *(int *)(param_1 + 0xbf8) = iVar5;
  FUN_7103776640(&local_60,param_1 + 0xba0,(byte ****)"set_parts_list_%02d",lVar11,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_7103776640(&local_70,(long)&local_60,(byte ****)"set_parts_base_%02d",
                 (ulong)*(uint *)(param_1 + 0xbf8),param_4,param_5,param_6,param_7,param_8);
  uVar10 = local_68;
  FUN_7103778300(0x3f800000,local_68,0x710438d054);
  FUN_7103778300(0x3f800000,local_68,0x7104308a06);
  pppplVar12 = (long ****)(ulong)*(uint *)(param_1 + 0xc00);
  FUN_7103776640(&local_80,(long)&local_60,(byte ****)"set_parts_base_%02d",pppplVar12,param_4,
                 param_5,param_6,param_7,param_8);
  uVar9 = local_78;
  lVar11 = param_1 + (long)*(int *)(param_1 + 0xbf4) * 0x40 + (long)*(int *)(param_1 + 0xc00) * 2;
  if ((*(short *)(lVar11 + 0xf18) != -1) || (*(short *)(lVar11 + 0xf2a) != -1)) {
    FUN_7103778300(0x3f800000,local_78,0x7104401a6f);
  }
  FUN_7103778300(0x3f800000,local_78,0x71043add49);
  plVar6 = (long *)FUN_710392e290(0x10,8,pppplVar12,param_4,param_5,param_6,param_7,param_8);
  if (plVar6 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_44 = 0;
      local_50 = (long ***)&DAT_00000008;
      pppplVar12 = &local_50;
      uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_44);
      if (((uVar7 & 1) != 0) &&
         (plVar6 = (long *)FUN_710392e290(0x10,8,pppplVar12,param_4,param_5,param_6,param_7,param_8)
         , plVar6 != (long *)0x0)) goto LAB_7101e382e4;
    }
    plVar6 = (long *)0x0;
  }
LAB_7101e382e4:
  *plVar6 = 0;
  lVar11 = *(long *)(local_78 + 8);
  if ((lVar11 == 0) || (*(long *)(lVar11 + 0x60) == 0)) {
    *plVar6 = 0;
  }
  else {
    plVar8 = (long *)FUN_7103796f20(*(long *)(lVar11 + 0x60),*(long *)(lVar11 + 0x18) + 0xb0);
    *plVar6 = (long)plVar8;
    if (plVar8 != (long *)0x0) {
      (**(code **)(*plVar8 + 0x218))(plVar8,0);
      (**(code **)(*plVar8 + 0x410))(plVar8);
      (**(code **)(*plVar8 + 0x3f0))(plVar8,0);
      iVar5 = (**(code **)(*plVar8 + 0x140))(plVar8);
      if ((iVar5 != 6) && (iVar5 = (**(code **)(*plVar8 + 0x140))(plVar8), iVar5 != 1)) {
        (**(code **)(*plVar8 + 0x400))(plVar8);
      }
      uVar7 = (**(code **)(*plVar8 + 0x158))(plVar8);
      if ((uVar7 & 1) == 0) {
        (**(code **)(*plVar8 + 0x370))(plVar8);
      }
    }
  }
  FUN_710392eb40((ulong)plVar6);
  FUN_7101e24380(param_1,1,1,param_4,param_5,param_6,param_7,param_8);
  local_80 = &PTR_FUN_710523d988;
  local_78 = 0;
  uVar7 = *(ulong *)(uVar9 + 0x18);
  *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
  *(undefined8 *)(uVar9 + 0x18) = 0;
  if (uVar7 != 0) {
    FUN_710392eb40(uVar7);
  }
  FUN_710392eb40(uVar9);
  local_70 = &PTR_FUN_710523d988;
  local_68 = 0;
  if (uVar10 != 0) {
    uVar9 = *(ulong *)(uVar10 + 0x18);
    *(undefined ***)(uVar10 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar10 + 0x18) = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    FUN_710392eb40(uVar10);
  }
  uVar9 = local_58;
  local_60 = &PTR_FUN_710523d988;
  local_58 = 0;
  if (uVar9 != 0) {
    uVar10 = *(ulong *)(uVar9 + 0x18);
    *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar9 + 0x18) = 0;
    if (uVar10 != 0) {
      FUN_710392eb40(uVar10);
    }
    FUN_710392eb40(uVar9);
  }
  return;
}

