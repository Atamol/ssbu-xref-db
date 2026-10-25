// addr:      710000fa20
// offset:    0xfa20
// name:      FUN_710000fa20
// mangled:   
// signature: ulong __cdecl FUN_710000fa20(long param_1, long * param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


ulong FUN_710000fa20(long param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  uint uVar2;
  size_t sVar3;
  ulong uVar4;
  char acStack_b8 [80];
  undefined8 local_68;
  uint local_5c;
  int iStack_58;
  int local_54;
  int local_50;
  
  if (*(int *)(param_1 + 0x470) == 0) {
    uVar4 = 0;
  }
  else {
    uVar2 = FUN_7100014040(*(time_t *)(param_1 + 0x478),&local_68);
    if (uVar2 == 0) {
      uVar2 = *(int *)(param_1 + 0x470) - 1;
      if (uVar2 < 3) {
        iVar1 = 6;
        if (local_50 != 0) {
          iVar1 = local_50 + -1;
        }
        FUN_7100007ef0(acStack_b8,0x50,"%s: %s, %02d %s %4d %02d:%02d:%02d GMT\r\n",
                       (&PTR_s_If_Modified_Since_7104f171e0)[(int)uVar2],
                       (&PTR_DAT_7104f17290)[iVar1],(ulong)local_5c,(&PTR_DAT_7104f172c8)[iStack_58]
                       ,(ulong)(local_54 + 0x76c));
        sVar3 = strlen(acStack_b8);
        uVar4 = FUN_710000f600(param_2,acStack_b8,sVar3);
        uVar4 = uVar4 & 0xffffffff;
      }
      else {
        uVar4 = 0x2b;
      }
    }
    else {
      uVar4 = (ulong)uVar2;
      FUN_7100016040(param_1,(byte *)"Invalid TIMEVALUE",param_3,param_4,param_5,param_6,param_7,
                     param_8);
    }
  }
  return uVar4;
}

