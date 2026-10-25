// addr:      7100089500
// offset:    0x89500
// name:      FUN_7100089500
// mangled:   
// signature: char * __cdecl FUN_7100089500(undefined8 * param_1, long param_2, undefined4 param_3, long param_4, int param_5)


char * FUN_7100089500(undefined8 *param_1,long param_2,undefined4 param_3,long param_4,int param_5)

{
  undefined8 *puVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  char *pcVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  pcVar5 = (char *)FUN_71000a4e90(param_1[4]);
  if (pcVar5 == (char *)0x0) {
    return (char *)0x0;
  }
  if (0 < *(int *)(param_2 + 0x330)) {
    *(ulong *)(pcVar5 + 0x3f0) = param_1[4] + (ulong)(*(int *)(param_2 + 0x330) - 1) * 0x58 + 0xeb8;
  }
  iVar2 = *(int *)(*(long *)(param_2 + 0x10) + 0x924);
  if (iVar2 == 0) {
    if (*(char *)(param_1[4] + 0x8d0) != '\0') {
      lVar8 = param_1[4] + 0xba0;
      goto LAB_7100089598;
    }
  }
  else {
    uVar6 = (ulong)(iVar2 + 8);
    if (*(char *)(param_1[4] + uVar6 + 0x8c8) == '\0') {
      FUN_7100093660();
      iVar2 = *(int *)(*(long *)(param_2 + 0x10) + 0x960);
      goto joined_r0x0071000895a8;
    }
    lVar8 = param_1[4] + uVar6 * 0x58 + 0x8e0;
LAB_7100089598:
    *(long *)(pcVar5 + 1000) = lVar8;
  }
  iVar2 = *(int *)(*(long *)(param_2 + 0x10) + 0x960);
joined_r0x0071000895a8:
  if (0 < iVar2) {
    if (*(long *)(param_2 + 0x310) == 0) {
      *(undefined8 **)(pcVar5 + 0x78) = param_1;
      FUN_7100093650();
    }
    else if (*(char *)(param_1[4] + (ulong)(iVar2 - 1) + 0x8c8) == '\0') {
      FUN_7100093660();
    }
    else {
      *(ulong *)(pcVar5 + 0x3e0) = param_1[4] + (ulong)(iVar2 - 1) * 0x58 + 0x8e0;
    }
  }
  uVar4 = FUN_71000872a0(pcVar5,(undefined8 *)*param_1,(long)param_1,param_2,param_3,param_1[0x3c],
                         param_4);
  if ((uVar4 & 1) == 0) {
    cVar3 = pcVar5[6];
    if (cVar3 != '\0') {
      FUN_7100093660();
    }
    FUN_7100088660((long)pcVar5,*param_1,(ulong)(cVar3 == '\0'));
    FUN_71000a4f30(param_1[4],pcVar5);
    pcVar5 = (char *)0x0;
  }
  else {
    FUN_71000a4f20(param_1[4],(long)pcVar5);
    FUN_7100088970((long)pcVar5,*(undefined4 *)(*(long *)(param_2 + 0x10) + 0x764));
    *(int *)(pcVar5 + 0x20) = param_5;
    if (*pcVar5 == '\0') {
      if (param_1[0x2b] == 0) {
        param_1[0x2b] = pcVar5;
        pcVar5[0x88] = '\0';
        pcVar5[0x89] = '\0';
        pcVar5[0x8a] = '\0';
        pcVar5[0x8b] = '\0';
        pcVar5[0x8c] = '\0';
        pcVar5[0x8d] = '\0';
        pcVar5[0x8e] = '\0';
        pcVar5[0x8f] = '\0';
        pcVar5[0x80] = '\0';
        pcVar5[0x81] = '\0';
        pcVar5[0x82] = '\0';
        pcVar5[0x83] = '\0';
        pcVar5[0x84] = '\0';
        pcVar5[0x85] = '\0';
        pcVar5[0x86] = '\0';
        pcVar5[0x87] = '\0';
        lVar8 = param_1[0x2a];
      }
      else {
        *(char **)(param_1[0x2b] + 0x80) = pcVar5;
        *(undefined8 *)(pcVar5 + 0x88) = param_1[0x2b];
        param_1[0x2b] = pcVar5;
        pcVar5[0x80] = '\0';
        pcVar5[0x81] = '\0';
        pcVar5[0x82] = '\0';
        pcVar5[0x83] = '\0';
        pcVar5[0x84] = '\0';
        pcVar5[0x85] = '\0';
        pcVar5[0x86] = '\0';
        pcVar5[0x87] = '\0';
        lVar8 = param_1[0x2a];
      }
      if (lVar8 == 0) {
        param_1[0x2a] = pcVar5;
      }
    }
    else {
      lVar8 = param_4 + (long)param_5 * 8;
      *(long *)(pcVar5 + 0x548) = param_4;
      puVar1 = (undefined8 *)(lVar8 + 0x4c0);
      lVar8 = *(long *)(lVar8 + 0x4c0);
      if (lVar8 == 0) {
        *puVar1 = pcVar5;
        pcVar5[0x88] = '\0';
        pcVar5[0x89] = '\0';
        pcVar5[0x8a] = '\0';
        pcVar5[0x8b] = '\0';
        pcVar5[0x8c] = '\0';
        pcVar5[0x8d] = '\0';
        pcVar5[0x8e] = '\0';
        pcVar5[0x8f] = '\0';
        lVar8 = param_4 + (long)param_5 * 8;
        pcVar5[0x80] = '\0';
        pcVar5[0x81] = '\0';
        pcVar5[0x82] = '\0';
        pcVar5[0x83] = '\0';
        pcVar5[0x84] = '\0';
        pcVar5[0x85] = '\0';
        pcVar5[0x86] = '\0';
        pcVar5[0x87] = '\0';
        lVar7 = *(long *)(lVar8 + 0x440);
      }
      else {
        *(char **)(lVar8 + 0x80) = pcVar5;
        *(undefined8 *)(pcVar5 + 0x88) = *puVar1;
        *puVar1 = pcVar5;
        lVar8 = param_4 + (long)param_5 * 8;
        pcVar5[0x80] = '\0';
        pcVar5[0x81] = '\0';
        pcVar5[0x82] = '\0';
        pcVar5[0x83] = '\0';
        pcVar5[0x84] = '\0';
        pcVar5[0x85] = '\0';
        pcVar5[0x86] = '\0';
        pcVar5[0x87] = '\0';
        lVar7 = *(long *)(lVar8 + 0x440);
      }
      if (lVar7 == 0) {
        *(char **)(lVar8 + 0x440) = pcVar5;
      }
    }
    *(undefined4 *)(pcVar5 + 0x14) = *(undefined4 *)(param_1 + 7);
    *(int *)(param_1 + 7) = *(int *)(param_1 + 7) + 1;
  }
  return pcVar5;
}

