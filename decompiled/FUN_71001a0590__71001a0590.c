// addr:      71001a0590
// offset:    0x1a0590
// name:      FUN_71001a0590
// mangled:   
// signature: undefined8 __cdecl FUN_71001a0590(long param_1)


undefined8 FUN_71001a0590(long param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  int local_30 [4];
  
  iVar1 = **(int **)(param_1 + 0x78);
  if (iVar1 == 1) {
    return 5;
  }
  if ((iVar1 - 2U < 3) && (FUN_71000bce50(local_30,*(int **)(param_1 + 0x78) + 1), local_30[0] != 0)
     ) {
    return 1;
  }
  lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x70) + 0xa0) + 0x58);
  lVar5 = *(long *)(param_1 + 0x58);
  plVar3 = FUN_71000bb680();
  lVar2 = 0;
  if (*plVar3 != 0) {
    lVar2 = (lVar4 - lVar5) / *plVar3;
  }
  if (0 < lVar2) {
    *(undefined8 *)(param_1 + 0x58) =
         *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x70) + 0xa0) + 0x58);
  }
  *(code **)(param_1 + 0x30) = FUN_71001a0660;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "ProcessConnectionRequestJob::SendConnectionResponse";
  return 0;
}

