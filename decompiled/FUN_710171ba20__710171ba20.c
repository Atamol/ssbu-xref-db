// addr:      710171ba20
// offset:    0x171ba20
// name:      FUN_710171ba20
// mangled:   
// signature: ulong * __cdecl FUN_710171ba20(ulong * param_1, long param_2)


ulong * FUN_710171ba20(ulong *param_1,long param_2)

{
  char *pcVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined4 uVar5;
  ulong uVar6;
  byte *pbVar7;
  uint uVar8;
  long lVar9;
  uint uVar10;
  uint local_848;
  
  if (*(char *)(param_2 + 9) == '\0') {
    local_848 = local_848 & 0xffffff00;
    *param_1 = (ulong)local_848;
    *(undefined4 *)(param_1 + 1) = 0;
    *(undefined1 *)((long)param_1 + 0x14) = 0;
    *(undefined8 *)((long)param_1 + 0xc) = 0x811c9dc5;
  }
  else {
    *(undefined1 *)param_1 = 1;
    bVar2 = *(byte *)(param_2 + 10);
    *(uint *)((long)param_1 + 4) = (uint)bVar2;
    lVar9 = *(long *)(param_2 + 0x50);
    if (lVar9 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = 0;
      while( true ) {
        pcVar1 = (char *)(lVar9 + uVar6);
        cVar3 = *pcVar1;
        if (cVar3 == '\0') break;
        *(char *)((long)param_1 + uVar6 + 0x14) = cVar3;
        if (0x7fe < (int)uVar6 + 1U) {
          uVar6 = (ulong)((int)uVar6 + 1);
          break;
        }
        cVar3 = pcVar1[1];
        if (cVar3 == '\0') {
          uVar6 = uVar6 + 1;
          break;
        }
        *(char *)((long)param_1 + uVar6 + 0x15) = cVar3;
        uVar6 = uVar6 + 2;
      }
    }
    *(undefined1 *)((long)param_1 + (uVar6 & 0xffffffff) + 0x14) = 0;
    uVar10 = (uint)*(byte *)((long)param_1 + 0x14);
    uVar8 = 0x811c9dc5;
    *(int *)(param_1 + 2) = (int)uVar6;
    if (*(byte *)((long)param_1 + 0x14) != 0) {
      pbVar7 = (byte *)((long)param_1 + 0x15);
      do {
        uVar8 = uVar8 * 0x89 ^ uVar10;
        uVar10 = (uint)*pbVar7;
        pbVar7 = pbVar7 + 1;
      } while (uVar10 != 0);
    }
    *(uint *)((long)param_1 + 0xc) = uVar8;
    if (bVar2 == 3) {
      bVar4 = FUN_71001b4e00(*(char **)(param_2 + 0x78),"VIDEO_DUPLICATED");
      if (bVar4) {
        uVar5 = 2;
      }
      else {
        bVar4 = FUN_71001b4e00(*(char **)(param_2 + 0x78),"UNEXPECTED_ERROR");
        uVar5 = 1;
      }
      *(undefined4 *)(param_1 + 1) = uVar5;
      param_1 = (ulong *)(ulong)bVar4;
    }
  }
  return param_1;
}

