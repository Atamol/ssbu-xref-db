// addr:      7100193b50
// offset:    0x193b50
// name:      FUN_7100193b50
// mangled:   
// signature: undefined4 __cdecl FUN_7100193b50(long * param_1, undefined4 * param_2, byte param_3)


undefined4 FUN_7100193b50(long *param_1,undefined4 *param_2,byte param_3)

{
  long lVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined4 uVar6;
  
  if (*(char *)((long)param_1 + 0x8d) == '\0') {
    if (param_2 != (undefined4 *)0x0) {
      param_1[0xb] = (long)param_2;
      FUN_71000b4160(param_2);
    }
    lVar5 = DAT_71052ac580;
    lVar1 = param_1[0xd];
    plVar2 = FUN_71000bb680();
    lVar4 = *plVar2;
    lVar5 = *(long *)(lVar5 + 0x30);
    *(byte *)((long)param_1 + 0x8e) = param_3 & 1;
    param_1[0xc] = lVar5 + lVar4 * (int)lVar1;
    *(undefined1 *)((long)param_1 + 0x8d) = 1;
    if ((param_3 & 1) == 0) {
      iVar3 = 2;
    }
    else {
      iVar3 = *(int *)(DAT_71052adfc0 + 0xb4);
    }
    FUN_7100191ed0(DAT_71052adfc0,iVar3);
    uVar6 = 1;
    (**(code **)(*param_1 + 0x10))(param_1,1);
    param_1[6] = (long)FUN_7100193c30;
    param_1[7] = 0;
    param_1[8] = (long)"DestroyMeshJob::SendDestroyMesh";
  }
  else {
    uVar6 = 0;
  }
  return uVar6;
}

