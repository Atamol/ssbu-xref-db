// addr:      71002bcf10
// offset:    0x2bcf10
// name:      FUN_71002bcf10
// mangled:   
// signature: undefined __cdecl FUN_71002bcf10(long * param_1, long * param_2, undefined8 param_3, undefined8 param_4, uint param_5, undefined4 * param_6)


void FUN_71002bcf10(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,uint param_5,
                   undefined4 *param_6)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  long local_50;
  uint local_48;
  undefined4 local_38;
  undefined4 uStack_34;
  
  local_50 = nn::util::BinaryFileHeader::GetFirstBlock();
  local_48 = param_5;
  uVar1 = FUN_71002b47a0(param_6);
  uStack_34 = FUN_71002b47b0((long)param_6);
  local_38 = uVar1;
  FUN_71002bd020(param_1,param_3,param_2,(uint *)&DAT_71044a2624,6,&local_38,&local_50);
  lVar3 = *(long *)(*(long *)(*(long *)(local_50 + 0x20) + (&DAT_7105230c48)[local_48]) + 0x68);
  uVar2 = FUN_7100038e90(lVar3,0,3,"u_Matrix");
  *(int *)(param_1 + 6) = (int)uVar2;
  uVar2 = FUN_7100038e90(lVar3,4,3,"u_Modulate");
  *(int *)(param_1 + 7) = (int)uVar2;
  uVar2 = FUN_7100038e90(lVar3,4,2,"s_Tex");
  *(int *)((long)param_1 + 0x34) = (int)uVar2;
  return;
}

