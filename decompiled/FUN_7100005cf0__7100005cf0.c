// addr:      7100005cf0
// offset:    0x5cf0
// name:      FUN_7100005cf0
// mangled:   
// signature: long __cdecl FUN_7100005cf0(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


long FUN_7100005cf0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  byte *__s;
  size_t sVar5;
  long lVar6;
  long lVar7;
  long local_38;
  
  __s = (byte *)FUN_7100007fd0((byte *)"%s:%d");
  if (__s == (byte *)0x0) {
    lVar6 = 0;
  }
  else {
    bVar2 = *__s;
    pbVar3 = __s;
    while ((bVar2 != 0 && (bVar2 != 0x3a))) {
      iVar4 = tolower((uint)bVar2);
      *pbVar3 = (byte)iVar4;
      bVar2 = pbVar3[1];
      pbVar3 = pbVar3 + 1;
    }
    sVar5 = strlen((char *)__s);
    lVar1 = sVar5 + 1;
    lVar7 = lVar1;
    lVar6 = FUN_71000055b0(*(long **)(param_1 + 0x98),__s,lVar1);
    if ((lVar6 != 0) && (*(long *)(param_1 + 0x668) != -1)) {
      FUN_7100027620(&local_38);
      if ((*(long *)(lVar6 + 8) != 0) &&
         (*(long *)(param_1 + 0x668) <= local_38 - *(long *)(lVar6 + 8))) {
        FUN_7100015de0(param_1,(byte *)"Hostname in DNS cache was stale, zapped\n",lVar7,param_4,
                       param_5,param_6,param_7,param_8);
        FUN_7100005500(*(long **)(param_1 + 0x98),__s,lVar1);
        lVar6 = 0;
      }
    }
    FUN_71000272a0();
  }
  return lVar6;
}

