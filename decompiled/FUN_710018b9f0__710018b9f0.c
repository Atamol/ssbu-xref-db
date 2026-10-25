// addr:      710018b9f0
// offset:    0x18b9f0
// name:      FUN_710018b9f0
// mangled:   
// signature: undefined8 __cdecl FUN_710018b9f0(long param_1)


undefined8 FUN_710018b9f0(long param_1)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  int aiStack_98 [4];
  int aiStack_88 [4];
  int aiStack_78 [4];
  int aiStack_68 [4];
  int local_58;
  undefined1 local_54;
  undefined8 local_50;
  int aiStack_48 [4];
  undefined4 local_38 [2];
  
  uVar4 = FUN_710018a7d0(param_1);
  if ((uVar4 & 1) != 0) {
    return 1;
  }
  if (*(short *)(param_1 + 0x6c) != 0) {
    bVar3 = FUN_7100193710();
    if ((bVar3 & 1) == 0) {
      DAT_71052ac6d4 = *(undefined1 *)(param_1 + 0x6c);
    }
    *(code **)(param_1 + 0x30) = FUN_710018c4c0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined4 *)(param_1 + 0xac) = 0xffffffff;
    *(char **)(param_1 + 0x40) = "JoinMeshJob::WaitAllConnection";
    *(undefined4 *)(param_1 + 0x98) = 2;
    return 0;
  }
  lVar6 = *(long *)(DAT_71052ac580 + 0x30);
  lVar7 = *(long *)(param_1 + 0xb0);
  plVar5 = FUN_71000bb680();
  iVar2 = 0;
  if (*plVar5 != 0) {
    iVar2 = (int)((lVar6 - lVar7) / *plVar5);
  }
  if (-1 < iVar2) {
    DAT_71052ac6d7 = (undefined1)*(undefined4 *)(param_1 + 0x98);
    DAT_71052ac6c8 = iVar2;
  }
  piVar8 = *(int **)(param_1 + 0x58);
  if (piVar8 == (int *)0x0) goto LAB_710018bda8;
  cVar1 = *(char *)(param_1 + 0x84);
  if (cVar1 == '\0') {
    if (2 < *piVar8 - 2U) {
      local_58 = 0x6c3d;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)&local_58 | 4));
      local_38[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)&local_58 | 4),(Result *)local_38);
      FUN_71000bce50(aiStack_68,&local_58);
      FUN_71000b41f0(piVar8,aiStack_68);
    }
    bVar3 = FUN_7100193710();
    if ((bVar3 & 1) == 0) {
      local_58 = 0x6c3d;
      goto LAB_710018bd64;
    }
  }
  else if (cVar1 == '\x02') {
    plVar5 = *(long **)(DAT_71052adfc0 + 0x120);
    if (plVar5 != (long *)0x0) {
      local_58 = 0x14;
      local_54 = 0xfd;
      local_50 = 0;
      (**(code **)(*plVar5 + 0x10))(plVar5,&local_58);
      piVar8 = *(int **)(param_1 + 0x58);
    }
    if (2 < *piVar8 - 2U) {
      local_58 = 0x6439;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)&local_58 | 4));
      local_38[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)&local_58 | 4),(Result *)local_38);
      FUN_71000bce50(aiStack_78,&local_58);
      FUN_71000b41f0(piVar8,aiStack_78);
    }
    bVar3 = FUN_7100193710();
    if ((bVar3 & 1) == 0) {
      local_58 = 0x6439;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)&local_58 | 4));
      local_38[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)&local_58 | 4),(Result *)local_38);
      DAT_71052ac6c0 = local_58;
      DAT_71052ac6d0 = *(undefined4 *)(param_1 + 0xac);
    }
  }
  else if (cVar1 == '\x01') {
    if (2 < *piVar8 - 2U) {
      local_58 = 0x6838;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)&local_58 | 4));
      local_38[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)&local_58 | 4),(Result *)local_38);
      FUN_71000bce50(aiStack_48,&local_58);
      FUN_71000b41f0(piVar8,aiStack_48);
    }
    bVar3 = FUN_7100193710();
    if ((bVar3 & 1) == 0) {
      local_58 = 0x6838;
      goto LAB_710018bd64;
    }
  }
  else if (cVar1 == '\x04') {
    if (2 < *piVar8 - 2U) {
      local_58 = 0x6439;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)&local_58 | 4));
      local_38[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)&local_58 | 4),(Result *)local_38);
      FUN_71000bce50(aiStack_88,&local_58);
      FUN_71000b41f0(piVar8,aiStack_88);
    }
    bVar3 = FUN_7100193710();
    if ((bVar3 & 1) == 0) {
      local_58 = 0x6439;
LAB_710018bd64:
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)&local_58 | 4));
      local_38[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)&local_58 | 4),(Result *)local_38);
      DAT_71052ac6c0 = local_58;
      DAT_71052ac6d0 = *(undefined4 *)(param_1 + 0xac);
    }
  }
  else {
    if (2 < *piVar8 - 2U) {
      local_58 = 0x10c3e;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)&local_58 | 4));
      local_38[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)&local_58 | 4),(Result *)local_38);
      FUN_71000bce50(aiStack_98,&local_58);
      FUN_71000b41f0(piVar8,aiStack_98);
    }
    bVar3 = FUN_7100193710();
    if ((bVar3 & 1) == 0) {
      local_58 = 0x10c3e;
      goto LAB_710018bd64;
    }
  }
  FUN_7100193390(DAT_71052adfc0);
  *(undefined8 *)(param_1 + 0x58) = 0;
LAB_710018bda8:
  FUN_71000b4260(*(undefined4 **)(param_1 + 0x60));
  FUN_71000b40e0(*(undefined4 **)(param_1 + 0x60));
  return 1;
}

