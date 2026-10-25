// addr:      7101af4a80
// offset:    0x1af4a80
// name:      FUN_7101af4a80
// mangled:   
// signature: undefined __cdecl FUN_7101af4a80(long param_1, long param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101af4a80(long param_1,long param_2,undefined8 param_3,undefined8 param_4,long ****param_5
                   ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long lVar2;
  undefined **local_38;
  long *local_30;
  ushort local_24 [2];
  
  FUN_7103776910(&local_38,param_2,(long ****)"set_txt_mode",param_3,param_4,param_5,param_6,param_7
                 ,param_8);
  plVar1 = local_30;
  lVar2 = *local_30;
  if (*(int *)(param_1 + 0xd8) == 0) {
    if (lVar2 != 0) {
      *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
    }
    if ((long *)local_30[2] != (long *)0x0) {
      local_24[0] = 0;
      local_24[1] = 0;
      FUN_71037a2270((long *)local_30[2],local_24,0,0);
    }
  }
  else {
    if (lVar2 != 0) {
      *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) | 1;
    }
    if (*(int *)(param_1 + 0x120) == 0) {
      FUN_710377a120((long)&local_38,(char *)(param_1 + 0xdc),param_3,param_4,param_5,param_6,
                     param_7,param_8);
    }
    else if (*(int *)(param_1 + 0x168) == 0) {
      FUN_710377a280((long)&local_38,(byte *)(param_1 + 0x124),1);
    }
    else {
      FUN_710377a280((long)&local_38,(byte *)(param_1 + 0x124),2);
    }
    if (local_30 == (long *)0x0) {
      return;
    }
  }
  local_30 = (long *)0x0;
  local_38 = &PTR_FUN_710523d9a8;
  FUN_710392eb40((ulong)plVar1);
  return;
}

