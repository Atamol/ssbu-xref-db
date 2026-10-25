// addr:      710001e860
// offset:    0x1e860
// name:      FUN_710001e860
// mangled:   
// signature: undefined8 __cdecl FUN_710001e860(long * param_1, uint param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


undefined8
FUN_710001e860(long *param_1,uint param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
              undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  
  if (((param_1 != (long *)0x0) && (lVar2 = *param_1, lVar2 != 0)) &&
     ((*(char *)((long)param_1 + 0x811) != '\0' || (param_1[0x11d] + param_1[0x121] == 0)))) {
    if ((long *)param_1[0xe] != (long *)0x0) {
      FUN_71000060d0(lVar2,(long *)param_1[0xe]);
      param_1[0xe] = 0;
    }
    FUN_7100005bd0(lVar2);
    if (*(code **)(param_1[0x10b] + 0x60) != (code *)0x0) {
      (**(code **)(param_1[0x10b] + 0x60))(param_1,param_2 & 1);
    }
    FUN_7100015de0(lVar2,(byte *)"Closing connection %ld\n",param_1[0xd],param_4,param_5,param_6,
                   param_7,param_8);
    FUN_71000045c0(*(long **)(lVar2 + 0xb60),(long)param_1);
    thunk_FUN_7100026d50((long)param_1,0);
    bVar1 = FUN_71000093f0(*(long *)(lVar2 + 0xa8),3);
    if (bVar1) {
      if ((long *)param_1[0x11a] != (long *)0x0) {
        plVar3 = (long *)param_1[0x11a];
        do {
          lVar2 = *plVar3;
          plVar4 = (long *)plVar3[2];
          *(undefined1 *)(lVar2 + 0x4f69) = 1;
          FUN_7100009410(lVar2);
          FUN_7100006870(param_1 + 0x11a,plVar3,0);
          plVar3 = plVar4;
        } while (plVar4 != (long *)0x0);
      }
      if ((long *)param_1[0x11e] != (long *)0x0) {
        plVar3 = (long *)param_1[0x11e];
        do {
          lVar2 = *plVar3;
          plVar4 = (long *)plVar3[2];
          *(undefined1 *)(lVar2 + 0x4f69) = 1;
          FUN_7100009410(lVar2);
          FUN_7100006870(param_1 + 0x11e,plVar3,0);
          plVar3 = plVar4;
        } while (plVar4 != (long *)0x0);
      }
    }
    FUN_710001e9b0(param_1);
  }
  return 0;
}

