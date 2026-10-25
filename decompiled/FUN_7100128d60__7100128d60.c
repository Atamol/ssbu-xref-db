// addr:      7100128d60
// offset:    0x128d60
// name:      FUN_7100128d60
// mangled:   
// signature: undefined __cdecl FUN_7100128d60(long param_1, undefined8 * param_2, long param_3)


void FUN_7100128d60(long param_1,undefined8 *param_2,long param_3)

{
  int aiStack_48 [4];
  undefined8 local_38 [3];
  
  switch(*(undefined4 *)((long)param_2 + 0xc)) {
  case 3:
    FUN_7100128e20(param_1,param_2,param_3);
    return;
  case 4:
    FUN_7100128f60(param_1,param_2,param_3);
    return;
  case 5:
    FUN_7100129190(param_1,param_2,param_3);
    return;
  case 6:
    FUN_71001292e0(param_1,param_2,param_3);
    return;
  case 7:
    FUN_710012a740(local_38);
    FUN_710012a840(aiStack_48,(long)local_38,(byte *)*param_2,(uint)*(ushort *)(param_2 + 1));
  }
  return;
}

