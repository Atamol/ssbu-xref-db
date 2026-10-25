// addr:      71020bf290
// offset:    0x20bf290
// name:      FUN_71020bf290
// mangled:   
// signature: undefined __cdecl FUN_71020bf290(ushort * param_1, long param_2)


void FUN_71020bf290(ushort *param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ulong *puVar3;
  undefined4 *puVar4;
  uint *puVar5;
  
  puVar1 = *(undefined8 **)(param_2 + 0x10);
  *puVar1 = FUN_71020bf3c0;
  *(undefined4 *)(puVar1 + 1) = 2;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"new_instance_lua");
  puVar3 = *(ulong **)(param_2 + 0x10);
  *puVar3 = (ulong)*param_1;
  *(undefined4 *)(puVar3 + 1) = 0x13;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"_gimmickKind");
  puVar4 = *(undefined4 **)(param_2 + 0x10);
  *puVar4 = *(undefined4 *)(param_1 + 2);
  puVar4[2] = 3;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"_rTop");
  puVar4 = *(undefined4 **)(param_2 + 0x10);
  *puVar4 = *(undefined4 *)(param_1 + 4);
  puVar4[2] = 3;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"_rSpeed");
  puVar5 = *(uint **)(param_2 + 0x10);
  *puVar5 = (uint)(byte)param_1[6];
  puVar5[2] = 1;
  lVar2 = *(long *)(param_2 + 0x10);
  *(long *)(param_2 + 0x10) = lVar2 + 0x10;
  FUN_71038f5390(param_2,(long *)(lVar2 + -0x10),"_fDrowned");
  return;
}

