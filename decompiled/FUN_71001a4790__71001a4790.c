// addr:      71001a4790
// offset:    0x1a4790
// name:      FUN_71001a4790
// mangled:   
// signature: ulong __cdecl FUN_71001a4790(long * param_1, long param_2, undefined8 param_3, uint param_4)


ulong FUN_71001a4790(long *param_1,long param_2,undefined8 param_3,uint param_4)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  char *pcVar4;
  
  uVar3 = FUN_71001a48a0((long)param_1,param_2);
  if ((int)uVar3 == 4) {
    FUN_71001a4b30((long)param_1,param_4 & 1);
    if ((param_4 & 1) == 0) {
      param_1[0x1d] = 0;
    }
    else {
      *(int *)(param_1 + 0x1f) = (int)param_1[0x1f] + 1;
    }
    *(char *)((long)param_1 + 0xf5) = (char)(param_4 & 1);
    memset(param_1 + 0x10,0xff,0x20);
    *(undefined1 *)((long)param_1 + 0xf4) = 1;
    (**(code **)(*param_1 + 0x10))(param_1,1);
    uVar2 = FUN_71001a4c50((long)param_1);
    *(byte *)((long)param_1 + 0xfc) = (byte)uVar2 & 1;
    if ((uVar2 & 1) == 0) {
      param_1[6] = (long)FUN_71001a65f0;
      pcVar4 = "ProcessUpdateMeshJob::UpdateFailed";
    }
    else {
      bVar1 = FUN_7100193a00(DAT_71052adfc0);
      if ((bVar1 & 1) == 0) {
        param_1[6] = (long)FUN_71001a5e80;
        pcVar4 = "ProcessUpdateMeshJob::CheckConnectionAll";
      }
      else {
        param_1[6] = (long)FUN_71001a5780;
        pcVar4 = "ProcessUpdateMeshJob::WaitDirectConnection";
      }
    }
    param_1[7] = 0;
    param_1[8] = (long)pcVar4;
  }
  return uVar3 & 0xffffffff;
}

