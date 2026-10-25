// addr:      7101762e80
// offset:    0x1762e80
// name:      FUN_7101762e80
// mangled:   
// signature: undefined __cdecl FUN_7101762e80(undefined8 param_1, long param_2)


void FUN_7101762e80(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  code *pcVar4;
  uint uVar5;
  ulong uVar6;
  byte *pbVar7;
  uint uVar8;
  undefined **local_50;
  code *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  long *local_30;
  
  *(undefined1 *)(param_2 + 0xd) = 0;
  *(undefined4 *)(param_2 + 0xf) = 0x1010101;
  for (uVar6 = 0; "https://www.youtube.com/embed/"[uVar6] != '\0'; uVar6 = uVar6 + 2) {
    *(char *)(param_2 + uVar6 + 0x28) = "https://www.youtube.com/embed/"[uVar6];
    if ("https://www.youtube.com/embed/"[uVar6 + 1] == '\0') {
      uVar6 = uVar6 + 1;
      break;
    }
    *(char *)(param_2 + uVar6 + 0x29) = "https://www.youtube.com/embed/"[uVar6 + 1];
  }
  *(undefined1 *)(param_2 + 0x28 + (uVar6 & 0xffffffff)) = 0;
  *(int *)(param_2 + 0x24) = (int)uVar6;
  uVar5 = (uint)*(byte *)(param_2 + 0x28);
  uVar3 = 0x811c9dc5;
  uVar8 = uVar3;
  if (*(byte *)(param_2 + 0x28) != 0) {
    pbVar7 = (byte *)(param_2 + 0x29);
    do {
      uVar8 = uVar8 * 0x89 ^ uVar5;
      uVar5 = (uint)*pbVar7;
      pbVar7 = pbVar7 + 1;
    } while (uVar5 != 0);
  }
  uVar6 = 0;
  *(uint *)(param_2 + 0x20) = uVar8;
  do {
    if ("https://www-aaaba-%-hac.cdn.nintendo.net/"[uVar6] == '\0') {
LAB_7101762f40:
      *(undefined1 *)(param_2 + 0x130 + (uVar6 & 0xffffffff)) = 0;
      uVar8 = (uint)*(byte *)(param_2 + 0x130);
      *(int *)(param_2 + 300) = (int)uVar6;
      if (*(byte *)(param_2 + 0x130) != 0) {
        pbVar7 = (byte *)(param_2 + 0x131);
        do {
          uVar3 = uVar3 * 0x89 ^ uVar8;
          uVar8 = (uint)*pbVar7;
          pbVar7 = pbVar7 + 1;
        } while (uVar8 != 0);
      }
      local_30 = (long *)&local_50;
      *(uint *)(param_2 + 0x128) = uVar3;
      local_50 = &PTR_FUN_710509eaf8;
      local_48 = FUN_7101762ff0;
      uStack_40 = 0;
      local_38 = param_1;
      FUN_71017633e0((long *)&local_50,(long *)(param_2 + 0x230));
      if (&local_50 == (undefined ***)local_30) {
        pcVar4 = *(code **)(*local_30 + 0x20);
      }
      else {
        if (local_30 == (long *)0x0) {
          return;
        }
        pcVar4 = *(code **)(*local_30 + 0x28);
      }
      (*pcVar4)();
      return;
    }
    lVar1 = param_2 + uVar6;
    *(char *)(lVar1 + 0x130) = "https://www-aaaba-%-hac.cdn.nintendo.net/"[uVar6];
    lVar2 = uVar6 + 1;
    if ("https://www-aaaba-%-hac.cdn.nintendo.net/"[lVar2] == '\0') {
      uVar6 = uVar6 + 1;
      goto LAB_7101762f40;
    }
    uVar6 = uVar6 + 2;
    *(char *)(lVar1 + 0x131) = "https://www-aaaba-%-hac.cdn.nintendo.net/"[lVar2];
  } while( true );
}

