// addr:      7103903230
// offset:    0x3903230
// name:      FUN_7103903230
// mangled:   
// signature: undefined8 __cdecl FUN_7103903230(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


undefined8
FUN_7103903230(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  bool bVar2;
  char *pcVar3;
  long lVar4;
  
  plVar1 = (long *)(**(long **)(param_1 + 0x20) + 0x10);
  if (*(long **)(param_1 + 0x10) <= plVar1) {
    plVar1 = &DAT_7104862960;
  }
  if (((int)plVar1[1] == 0x48) && (lVar4 = *plVar1, lVar4 != 0)) {
    bVar2 = lVar4 == param_1;
  }
  else {
    FUN_71038f6d60(param_1,1,"thread expected",param_4,param_5,param_6,param_7,param_8);
    lVar4 = 0;
    bVar2 = param_1 == 0;
  }
  if (bVar2) {
    pcVar3 = "running";
    goto LAB_710390330c;
  }
  if (*(char *)(lVar4 + 0xc) == '\0') {
    if (*(long **)(lVar4 + 0x20) != (long *)(lVar4 + 0x60)) {
      pcVar3 = "normal";
      goto LAB_710390330c;
    }
    if ((int)((ulong)(*(long *)(lVar4 + 0x10) - (**(long **)(lVar4 + 0x20) + 0x10)) >> 4) != 0)
    goto LAB_7103903304;
  }
  else if (*(char *)(lVar4 + 0xc) == '\x01') {
LAB_7103903304:
    pcVar3 = "suspended";
    goto LAB_710390330c;
  }
  pcVar3 = "dead";
LAB_710390330c:
  FUN_71038f4b20(param_1,pcVar3);
  return 1;
}

