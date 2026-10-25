// addr:      7100004910
// offset:    0x4910
// name:      FUN_7100004910
// mangled:   
// signature: undefined4 __cdecl FUN_7100004910(long * param_1, long * param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


undefined4
FUN_7100004910(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
              undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  
  iVar3 = FUN_71000281b0((long *)param_1[0x14b]);
  if (iVar3 == 0) {
    uVar4 = 0;
    *(undefined1 *)(param_1 + 0x14a) = 1;
  }
  else {
    lVar5 = param_1[0x14b];
    uVar4 = FUN_7100005940(param_1,*(int *)(lVar5 + 0x34),*(long *)(lVar5 + 0x38));
    *(undefined8 *)(lVar5 + 0x38) = 0;
    *(undefined1 *)(param_1 + 0x14a) = 1;
  }
  if (param_2 != (long *)0x0) {
    *param_2 = param_1[0x149];
  }
  if (param_1[0x149] == 0) {
    bVar2 = *(char *)((long)param_1 + 0x816) != '\0';
    pcVar1 = "host";
    if (bVar2) {
      pcVar1 = "proxy";
    }
    uVar4 = 5;
    if (!bVar2) {
      uVar4 = 6;
    }
    FUN_7100016040(*param_1,(byte *)"Could not resolve %s: %s",pcVar1,param_1[0x147],param_5,param_6
                   ,param_7,param_8);
    FUN_7100004840(param_1 + 0x147);
    lVar5 = param_1[0x149];
  }
  else {
    FUN_7100004840(param_1 + 0x147);
    lVar5 = param_1[0x149];
  }
  if (lVar5 == 0) {
    FUN_7100004200((long)param_1,1);
  }
  return uVar4;
}

