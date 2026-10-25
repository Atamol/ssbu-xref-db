// addr:      71001d5f20
// offset:    0x1d5f20
// name:      FUN_71001d5f20
// mangled:   
// signature: undefined8 __cdecl FUN_71001d5f20(long param_1, long param_2, uint param_3, uint param_4)


undefined8 FUN_71001d5f20(long param_1,long param_2,uint param_3,uint param_4)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  
  if (param_4 == 0) {
    if (param_3 < 0x11) {
      plVar5 = (long *)(param_1 + (ulong)param_3 * 8 + 0x10);
      if (*plVar5 == 0) {
LAB_71001d6004:
        *plVar5 = param_2;
        return 1;
      }
      pcVar1 = "C:/home/ws/hac-appc2/Pack/7923402a/OnlineCore/src/Core/InstantiationContext.cpp";
      uVar2 = 0x44;
      uVar3 = 0xe000000f;
      goto LAB_71001d5ff0;
    }
    pcVar1 = "C:/home/ws/hac-appc2/Pack/7923402a/OnlineCore/src/Core/InstantiationContext.cpp";
    uVar2 = 0x3e;
  }
  else {
    lVar4 = **(long **)(param_1 + 0xa0);
    if ((ulong)param_4 < (ulong)((*(long **)(param_1 + 0xa0))[1] - lVar4 >> 3)) {
      lVar4 = *(long *)(lVar4 + (ulong)param_4 * 8);
      if (lVar4 == 0) {
        pcVar1 = "C:/home/ws/hac-appc2/Pack/7923402a/OnlineCore/src/Core/InstanceTable.cpp";
        uVar2 = 0x9f;
        uVar3 = 0xe0000008;
        goto LAB_71001d5ff0;
      }
      if (param_3 < 0x11) {
        plVar5 = (long *)(lVar4 + (ulong)param_3 * 8 + 8);
        if (*plVar5 == 0) goto LAB_71001d6004;
        uVar2 = 0x44;
        uVar3 = 0xe000000f;
      }
      else {
        uVar2 = 0x3e;
        uVar3 = 0xe0000003;
      }
      FUN_71001b1300("C:/home/ws/hac-appc2/Pack/7923402a/OnlineCore/src/Core/InstantiationContext.cpp"
                     ,uVar2,uVar3,0);
    }
    pcVar1 = "C:/home/ws/hac-appc2/Pack/7923402a/OnlineCore/src/Core/InstanceTable.cpp";
    uVar2 = 0xa6;
  }
  uVar3 = 0xe0000003;
LAB_71001d5ff0:
  FUN_71001b1300(pcVar1,uVar2,uVar3,0);
  return 0;
}

