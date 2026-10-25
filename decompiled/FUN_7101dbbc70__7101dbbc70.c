// addr:      7101dbbc70
// offset:    0x1dbbc70
// name:      FUN_7101dbbc70
// mangled:   
// signature: undefined __cdecl FUN_7101dbbc70(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101dbbc70(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  int iVar9;
  undefined4 uVar10;
  long lVar11;
  float fVar12;
  undefined **local_60;
  ulong local_58;
  undefined **local_50;
  ulong local_48;
  
  if (*(int *)(param_1 + 0xc4) == 0) {
    uVar8 = 0x23000;
    FUN_7103775dc0((long *)**(undefined8 **)(param_1 + 0xd0),1,(long ****)0x23000,param_4,param_5,
                   param_6,param_7,param_8);
    if (*(char *)(param_1 + 0x2d8) == '\0') {
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0xe0),0x7104421055);
      FUN_7103776640(&local_50,param_1 + 0xd8,(byte ****)"set_parts_bg_00",uVar8,param_4,param_5,
                     param_6,param_7,param_8);
      uVar3 = local_48;
      FUN_7103778300(0x3f800000,local_48,0x710432a70e);
      FUN_7103778300(0x3f800000,local_48,0x71043f0fa9);
      FUN_7103776640(&local_60,param_1 + 0xd8,(byte ****)"set_parts_bg_01",uVar8,param_4,param_5,
                     param_6,param_7,param_8);
      uVar6 = local_58;
      FUN_7103778300(0x3f800000,local_58,0x710432a70e);
      FUN_7103778300(0x3f800000,local_58,0x71043f0fa9);
      local_60 = &PTR_FUN_710523d988;
      local_58 = 0;
      if (uVar6 != 0) {
        uVar7 = *(ulong *)(uVar6 + 0x18);
        *(undefined ***)(uVar6 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar6 + 0x18) = 0;
        if (uVar7 != 0) {
          FUN_710392eb40(uVar7);
        }
        FUN_710392eb40(uVar6);
      }
      local_50 = &PTR_FUN_710523d988;
      local_48 = 0;
      if (uVar3 != 0) {
        uVar6 = *(ulong *)(uVar3 + 0x18);
        *(undefined ***)(uVar3 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar3 + 0x18) = 0;
        if (uVar6 != 0) {
          FUN_710392eb40(uVar6);
        }
        FUN_710392eb40(uVar3);
      }
    }
    else {
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0xe0),0x710434a7d0);
    }
    if (*(long *)(param_1 + 0x2e8) == *(long *)(param_1 + 0x2e0)) {
      return;
    }
    *(undefined4 *)(param_1 + 0x2f8) = 1;
    return;
  }
  if (*(long *)(param_1 + 0x2e8) == *(long *)(param_1 + 0x2e0)) {
    return;
  }
  lVar4 = *(long *)(*(long *)(param_1 + 0xe0) + 8);
  if (lVar4 == 0) {
LAB_7101dbbd7c:
    iVar9 = *(int *)(param_1 + 0x2f8);
  }
  else {
    pcVar1 = "in";
    if (*(char *)(param_1 + 0x2d8) != '\0') {
      pcVar1 = "in_campaign";
    }
    plVar5 = (long *)FUN_71037964b0(lVar4,(long)pcVar1);
    if (plVar5 == (long *)0x0) goto LAB_7101dbbd7c;
    fVar12 = (float)(**(code **)(*plVar5 + 0x198))();
    iVar9 = *(int *)(param_1 + 0x2f8);
    if (105.0 < fVar12 && iVar9 == 1) {
      lVar11 = *(long *)(param_1 + 0x2e8);
      for (lVar4 = *(long *)(param_1 + 0x2e0); lVar4 != lVar11; lVar4 = lVar4 + 0x18) {
        if (*(int *)(lVar4 + 0x10) != 0) {
          FUN_71025b1740(lVar4,(ulong)*(byte *)(lVar4 + 0x14),(uint)*(byte *)(lVar4 + 0x15));
          *(undefined4 *)(lVar4 + 0x10) = 2;
        }
      }
      uVar10 = 2;
      goto LAB_7101dbbde4;
    }
  }
  if (iVar9 != 2) {
    return;
  }
  lVar4 = *(long *)(param_1 + 0x2e0);
  lVar11 = *(long *)(param_1 + 0x2e8);
  if (lVar4 != lVar11) {
    bVar2 = true;
    do {
      if (*(int *)(lVar4 + 0x10) == 2) {
        uVar6 = FUN_71025b18c0(lVar4,(ulong)*(byte *)(lVar4 + 0x14),(uint)*(byte *)(lVar4 + 0x15));
        if ((uVar6 & 1) == 0) {
          bVar2 = false;
        }
        else {
          *(undefined4 *)(lVar4 + 0x10) = 3;
        }
      }
      lVar4 = lVar4 + 0x18;
    } while (lVar11 != lVar4);
    if (!bVar2) {
      return;
    }
  }
  uVar10 = 3;
LAB_7101dbbde4:
  *(undefined4 *)(param_1 + 0x2f8) = uVar10;
  return;
}

