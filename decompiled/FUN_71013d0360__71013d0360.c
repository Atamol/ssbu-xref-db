// addr:      71013d0360
// offset:    0x13d0360
// name:      FUN_71013d0360
// mangled:   
// signature: undefined __cdecl FUN_71013d0360(long param_1)


void FUN_71013d0360(long param_1)

{
  long lVar1;
  long ****pppplVar2;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar3;
  ulong local_18;
  
  lVar3 = *(long *)(**(long **)(**(long **)(param_1 + 0x50) + 8) + 0xcd0);
  lVar1 = *(long *)(lVar3 + 0x28);
  pppplVar2 = (long ****)0x0;
  FUN_710323beb0(lVar1,(ulong *)&DAT_7104544e38,(long)*(int *)(lVar1 + 0x70),
                 (ulong)*(uint *)(lVar1 + 0x68),(long ****)0x0,in_x5,in_x6,in_x7);
  local_18 = FUN_710323af70(0x71043ad508,1);
  if ((local_18 & 0xffffffffff) != 0) {
    lVar1 = *(long *)(lVar3 + 0x28);
    FUN_710323c4e0(lVar1,&local_18,(long *********)(long)*(int *)(lVar1 + 0x70),
                   (byte ****)(ulong)*(uint *)(lVar1 + 0x68),pppplVar2,in_x5,in_x6,in_x7);
  }
  local_18 = FUN_710323af70(0x71042d6046,1);
  if ((local_18 & 0xffffffffff) != 0) {
    lVar1 = *(long *)(lVar3 + 0x28);
    FUN_710323c4e0(lVar1,&local_18,(long *********)(long)*(int *)(lVar1 + 0x70),
                   (byte ****)(ulong)*(uint *)(lVar1 + 0x68),pppplVar2,in_x5,in_x6,in_x7);
  }
  local_18 = FUN_710323af70(0x7104329ce9,1);
  if ((local_18 & 0xffffffffff) != 0) {
    lVar1 = *(long *)(lVar3 + 0x28);
    FUN_710323c4e0(lVar1,&local_18,(long *********)(long)*(int *)(lVar1 + 0x70),
                   (byte ****)(ulong)*(uint *)(lVar1 + 0x68),pppplVar2,in_x5,in_x6,in_x7);
  }
  return;
}

