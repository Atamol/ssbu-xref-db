// addr:      710001edb0
// offset:    0x1edb0
// name:      FUN_710001edb0
// mangled:   
// signature: ulong __cdecl FUN_710001edb0(long * * * * * * * param_1, uint param_2)


ulong FUN_710001edb0(long *******param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  long ******pppppplVar3;
  long *plVar4;
  long *plVar5;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  
  if (*(char *)((long)param_1 + 0x817) == '\0') {
    return 0;
  }
  plVar5 = (long *)(ulong)param_2;
  if (*(char *)((long)param_1 + 0x816) == '\0') {
    if (*(char *)((long)param_1 + 0x813) == '\0') {
      if (param_2 == 1) {
        pppppplVar3 = param_1[0x1d];
        plVar4 = (long *)(ulong)*(ushort *)(param_1 + 0x34);
        goto LAB_710001eddc;
      }
      pppppplVar3 = param_1[0x1b];
    }
    else {
      pppppplVar3 = param_1[0x20];
      if (param_2 == 1) {
        plVar4 = (long *)(ulong)*(ushort *)(param_1 + 0x34);
        goto LAB_710001eddc;
      }
    }
    if (*(char *)((long)param_1 + 0x814) == '\0') {
      plVar4 = (long *)(ulong)*(uint *)(param_1 + 0x33);
    }
    else {
      plVar4 = (long *)(ulong)*(uint *)((long)param_1 + 0x19c);
    }
  }
  else {
    pppppplVar3 = param_1[0x2c];
    plVar4 = (long *)(ulong)*(uint *)(param_1 + 0x2e);
  }
LAB_710001eddc:
  *(undefined1 *)((long)param_1 + 0x833) = 1;
  switch(*(undefined4 *)(param_1 + 0x27)) {
  case 4:
  case 6:
    uVar2 = FUN_7100022dc0((char *)param_1[0x28],pppppplVar3,(uint)plVar4,plVar5,param_1,in_x5,in_x6
                           ,in_x7);
    *(undefined1 *)((long)param_1 + 0x833) = 0;
    return uVar2;
  case 5:
  case 7:
    uVar1 = FUN_7100023290((ulong)param_1[0x28],(char *)param_1[0x29],(byte *)pppppplVar3,plVar4,
                           plVar5,(long *)param_1,in_x6,in_x7);
    *(undefined1 *)((long)param_1 + 0x833) = 0;
    return (ulong)uVar1;
  default:
    FUN_7100016040((long)*param_1,(byte *)"unknown proxytype option given",pppppplVar3,plVar4,plVar5
                   ,in_x5,in_x6,in_x7);
    *(undefined1 *)((long)param_1 + 0x833) = 0;
    return 7;
  }
}

