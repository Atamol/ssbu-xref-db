// addr:      71000b6c50
// offset:    0xb6c50
// name:      FUN_71000b6c50
// mangled:   
// signature: undefined __cdecl FUN_71000b6c50(undefined8 * param_1, undefined4 param_2, undefined8 param_3)


void FUN_71000b6c50(undefined8 *param_1,undefined4 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  uint local_48 [2];
  undefined **local_40;
  char *pcStack_38;
  
  local_40 = &PTR_FUN_7104f4a288;
  *param_1 = &PTR_FUN_7104f4a638;
  param_1[1] = param_1;
  param_1[2] = FUN_71000b6d70;
  param_1[3] = 0;
  puVar1 = param_1 + 4;
  pcStack_38 = "Pia BackgroundScheduler";
  plVar3 = (long *)FUN_71000b1b90();
  FUN_710013b4d0(puVar1,(long *)&local_40,param_1,plVar3,param_2,1,0x7fffffff,0x5000,0x20);
  param_1[0x23] = param_3;
  FUN_710013ba50(param_1 + 0x24,0);
  *(undefined1 *)(param_1 + 0x2d) = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  FUN_71000b7080((long)(param_1 + 0x2e));
  *(undefined4 *)((long)param_1 + 0x184) = 0xffffffff;
  lVar4 = nn::os::GetTlsValue(DAT_71052ad1fc);
  if (lVar4 == 0) {
    uVar2 = nn::os::GetCurrentCoreNumber();
  }
  else {
    uVar2 = (int)lVar4 - 1;
  }
  local_40 = (undefined **)CONCAT44(local_40._4_4_,uVar2);
  local_48[0] = 1 << (ulong)(uVar2 & 0x1f);
  FUN_710013c2e0((long)puVar1,local_48);
  FUN_710013c200((long)puVar1);
  *(undefined4 *)((long)param_1 + 0x184) = 0x18;
  return;
}

