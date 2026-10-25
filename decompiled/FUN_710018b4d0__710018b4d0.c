// addr:      710018b4d0
// offset:    0x18b4d0
// name:      FUN_710018b4d0
// mangled:   
// signature: undefined8 __cdecl FUN_710018b4d0(long param_1)


undefined8 FUN_710018b4d0(long param_1)

{
  int iVar1;
  bool bVar2;
  byte bVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  int *piVar8;
  int aiStack_68 [4];
  int local_58 [4];
  int aiStack_48 [4];
  undefined4 local_38 [2];
  
  uVar4 = FUN_710018a7d0(param_1);
  if ((uVar4 & 1) != 0) {
    return 1;
  }
  lVar5 = FUN_7100161fa0(DAT_71052add68);
  lVar7 = DAT_71052ac580;
  if (*(long *)(lVar5 + 0x98) == 0) {
    lVar7 = *(long *)(DAT_71052ac580 + 0x30);
    lVar5 = *(long *)(param_1 + 0xb0);
    plVar6 = FUN_71000bb680();
    iVar1 = 0;
    if (*plVar6 != 0) {
      iVar1 = (int)((lVar7 - lVar5) / *plVar6);
    }
    if (-1 < iVar1) {
      DAT_71052ac6d7 = (undefined1)*(undefined4 *)(param_1 + 0x98);
      DAT_71052ac6c8 = iVar1;
    }
    piVar8 = *(int **)(param_1 + 0x58);
    if (piVar8 == (int *)0x0) goto LAB_710018b748;
    if (2 < *piVar8 - 2U) {
      local_58[0] = 0x6439;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_58 | 4));
      local_38[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_38);
      FUN_71000bce50(aiStack_48,local_58);
      FUN_71000b41f0(piVar8,aiStack_48);
    }
    bVar3 = FUN_7100193710();
    if ((bVar3 & 1) == 0) {
      local_58[0] = 0x6439;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_58 | 4));
      local_38[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_38);
      DAT_71052ac6c0 = local_58[0];
      DAT_71052ac6d0 = *(undefined4 *)(param_1 + 0xac);
    }
  }
  else {
    plVar6 = FUN_71000bb680();
    lVar5 = *plVar6;
    lVar7 = *(long *)(lVar7 + 0x30);
    plVar6 = (long *)FUN_7100193580(DAT_71052adfc0);
    bVar2 = FUN_710019b0c0(plVar6,lVar7 + lVar5 * 10000,(undefined4 *)(param_1 + 0x68));
    if (bVar2) {
      lVar7 = FUN_7100193580(DAT_71052adfc0);
      FUN_710019b550(lVar7,param_1);
      *(undefined4 *)(param_1 + 0x80) = 0x1010101;
      *(char **)(param_1 + 0x40) = "JoinMeshJob::WaitRequestAck";
      *(code **)(param_1 + 0x30) = FUN_710018b770;
      *(undefined8 *)(param_1 + 0x38) = 0;
      return 5;
    }
    lVar7 = *(long *)(DAT_71052ac580 + 0x30);
    lVar5 = *(long *)(param_1 + 0xb0);
    plVar6 = FUN_71000bb680();
    iVar1 = 0;
    if (*plVar6 != 0) {
      iVar1 = (int)((lVar7 - lVar5) / *plVar6);
    }
    if (-1 < iVar1) {
      DAT_71052ac6d7 = (undefined1)*(undefined4 *)(param_1 + 0x98);
      DAT_71052ac6c8 = iVar1;
    }
    piVar8 = *(int **)(param_1 + 0x58);
    if (piVar8 == (int *)0x0) goto LAB_710018b748;
    if (2 < *piVar8 - 2U) {
      local_58[0] = 0x6439;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_58 | 4));
      local_38[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_38);
      FUN_71000bce50(aiStack_68,local_58);
      FUN_71000b41f0(piVar8,aiStack_68);
    }
    bVar3 = FUN_7100193710();
    if ((bVar3 & 1) == 0) {
      local_58[0] = 0x6439;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_58 | 4));
      local_38[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_38);
      DAT_71052ac6c0 = local_58[0];
      DAT_71052ac6d0 = *(undefined4 *)(param_1 + 0xac);
    }
  }
  FUN_7100193390(DAT_71052adfc0);
  *(undefined8 *)(param_1 + 0x58) = 0;
LAB_710018b748:
  FUN_71000b4260(*(undefined4 **)(param_1 + 0x60));
  FUN_71000b40e0(*(undefined4 **)(param_1 + 0x60));
  return 1;
}

