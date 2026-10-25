// addr:      710008b350
// offset:    0x8b350
// name:      FUN_710008b350
// mangled:   
// signature: undefined8 __cdecl FUN_710008b350(char * param_1, long param_2)


undefined8 FUN_710008b350(char *param_1,long param_2)

{
  char *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (*param_1 != '\0') {
    return 1;
  }
  if (*(char *)(param_2 + 0x4c0) == '\0') {
    return 0;
  }
  if (*(char *)(param_2 + 0x508) == '\0') {
    return 0;
  }
  lVar4 = *(long *)(param_1 + 0x10);
  uVar5 = *(undefined8 *)(param_2 + 0x10);
  pcVar1 = (char *)(param_2 + 0x4c0);
  if ((*(long *)(lVar4 + 0x8c8) != -1) &&
     ((*(int *)(param_1 + 0x330) == 0 || (3 < *(int *)(param_1 + 0x330))))) {
    lVar2 = FUN_710009b550(param_2,*(long *)(lVar4 + 0x8c8));
    lVar4 = *(long *)(param_1 + 0x10);
    *(long *)(param_1 + 0x78) = lVar2;
  }
  param_1[0x350] = '\0';
  param_1[0x351] = '\0';
  param_1[0x352] = '\0';
  param_1[0x353] = '\0';
  param_1[0x354] = '\0';
  param_1[0x355] = '\0';
  param_1[0x356] = '\0';
  param_1[0x357] = '\0';
  param_1[0x348] = '\0';
  param_1[0x349] = '\0';
  param_1[0x34a] = '\0';
  param_1[0x34b] = '\0';
  param_1[0x34c] = '\0';
  param_1[0x34d] = '\0';
  param_1[0x34e] = '\0';
  param_1[0x34f] = '\0';
  lVar4 = FUN_710009ccf0(pcVar1,*(int *)(lVar4 + 0x914));
  lVar2 = *(long *)(param_1 + 0x10);
  *(long *)(param_1 + 0x340) = lVar4;
  if (*(int *)(lVar2 + 0x91c) == -1) {
LAB_710008b404:
    if (*(int *)(lVar2 + 0x920) != -1) {
      lVar4 = FUN_710009ccf0(pcVar1,*(int *)(lVar2 + 0x920));
      *(long *)(param_1 + 0x350) = lVar4;
      if (lVar4 == 0) goto LAB_710008b458;
      lVar2 = *(long *)(param_1 + 0x10);
    }
    if (*(int *)(lVar2 + 0x918) != -1) {
      *(long *)(param_1 + 0x358) = *(long *)(param_2 + 0x520) + (long)*(int *)(lVar2 + 0x918) * 0x40
      ;
    }
    uVar3 = FUN_710008a850((long)param_1,uVar5);
    if ((uVar3 & 1) != 0) {
      *param_1 = '\x01';
      return 1;
    }
  }
  else {
    lVar4 = FUN_710009ccf0(pcVar1,*(int *)(lVar2 + 0x91c));
    *(long *)(param_1 + 0x348) = lVar4;
    if (lVar4 != 0) {
      lVar2 = *(long *)(param_1 + 0x10);
      goto LAB_710008b404;
    }
LAB_710008b458:
    FUN_7100093660();
  }
  return 0;
}

