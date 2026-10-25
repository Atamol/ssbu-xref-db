// addr:      710161b560
// offset:    0x161b560
// name:      FUN_710161b560
// mangled:   
// signature: undefined __cdecl FUN_710161b560(long * param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_710161b560(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong local_38;
  
  *(undefined1 *)((long)param_1 + 0x1e1) = 0;
  *(undefined4 *)((long)param_1 + 0x1e4) = 10;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  FUN_71003ab220((long)(param_1 + 3),param_1[1]);
  *(undefined4 *)((long)param_1 + 0x1e4) = 0;
  (**(code **)(*param_1 + 0x58))(param_1,0);
  uVar2 = (**(code **)(*param_1 + 0x50))(param_1);
  if ((uVar2 & 1) == 0) {
    FUN_7103727a80(*(long *)(*(long *)param_1[2] + 8),"__item_entry",param_3,param_4,param_5,param_6
                   ,param_7,param_8);
    return;
  }
  local_38 = 0;
  FUN_710372e100(param_1[0x3b],0xc3c70c426,&local_38,0,param_5,param_6,param_7,param_8);
  uVar2 = local_38;
  if (local_38 == 0) {
    return;
  }
  lVar5 = *(long *)(local_38 + 0x10);
  lVar4 = 0;
  do {
    cVar1 = *(char *)(lVar5 + lVar4);
    if (cVar1 == 's') {
      lVar6 = *(long *)(uVar2 + 8);
      uVar3 = *(ulong *)(lVar6 + lVar4 * 8);
      if (uVar3 != 0) {
        FUN_710392eb40(uVar3);
      }
      *(undefined8 *)(lVar6 + lVar4 * 8) = 0;
    }
    else if (cVar1 == '\0') {
      if (local_38 == 0) {
        return;
      }
      FUN_710392eb40(local_38);
      return;
    }
    lVar4 = lVar4 + 1;
  } while( true );
}

