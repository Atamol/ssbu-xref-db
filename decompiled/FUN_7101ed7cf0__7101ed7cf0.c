// addr:      7101ed7cf0
// offset:    0x1ed7cf0
// name:      FUN_7101ed7cf0
// mangled:   
// signature: undefined __cdecl FUN_7101ed7cf0(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101ed7cf0(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  
  FUN_7103778300(0x3f800000,*(long *)(*(long *)(param_1 + 8) + 8),0x710435bf7f);
  FUN_7101ed3aa0(param_1,0x1e,"mnu_stgcreate_edit_setting_landform",param_4,param_5,param_6,param_7,
                 param_8);
  *(undefined1 *)(param_1 + 0x34) = 1;
  plVar2 = *(long **)(param_1 + 0x18);
  while (plVar2 != (long *)(param_1 + 0x20)) {
    *(undefined1 *)(plVar2[5] + 0x53) = 0;
    plVar3 = (long *)plVar2[1];
    if ((long *)plVar2[1] == (long *)0x0) {
      plVar3 = plVar2 + 2;
      bVar1 = *(long **)*plVar3 != plVar2;
      plVar2 = (long *)*plVar3;
      if (bVar1) {
        do {
          lVar4 = *plVar3;
          plVar3 = (long *)(lVar4 + 0x10);
          plVar2 = (long *)*plVar3;
        } while (*plVar2 != lVar4);
      }
    }
    else {
      do {
        plVar2 = plVar3;
        plVar3 = (long *)*plVar2;
      } while ((long *)*plVar2 != (long *)0x0);
    }
  }
  return;
}

