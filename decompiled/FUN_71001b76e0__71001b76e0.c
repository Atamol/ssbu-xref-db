// addr:      71001b76e0
// offset:    0x1b76e0
// name:      FUN_71001b76e0
// mangled:   
// signature: long * __cdecl FUN_71001b76e0(long * param_1, long * param_2)


long * FUN_71001b76e0(long *param_1,long *param_2)

{
  char cVar1;
  undefined8 uVar2;
  size_t sVar3;
  undefined8 *puVar4;
  code *pcVar5;
  char *pcVar6;
  char *pcVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined **local_68;
  char local_60 [16];
  char *local_50;
  undefined8 uStack_48;
  
  if (param_1 != param_2) {
    if ((int)param_1[1] == 4) {
      pcVar5 = *(code **)(*param_1 + -0x14);
      if (pcVar5 == (code *)0x0) {
        free((undefined8 *)(*param_1 + -0x14));
      }
      else {
        (*pcVar5)();
      }
    }
    *(int *)(param_1 + 1) = (int)param_2[1];
    switch((int)param_2[1]) {
    case 1:
    case 2:
    case 5:
    case 6:
      *param_1 = *param_2;
      break;
    case 3:
      *(char *)param_1 = (char)*param_2;
      break;
    case 4:
      local_60[0] = '\0';
      local_68 = &PTR_FUN_710509cc08;
      uStack_48 = 0x10;
      local_50 = local_60;
      FUN_71001b47e0((long)&local_68,(char *)*param_2,-1);
      pcVar6 = local_50;
      sVar3 = strlen(local_50);
      uVar10 = sVar3 + 1;
      if (DAT_71052ae0a8 == (code *)0x0) {
        puVar4 = malloc(sVar3 + 0x1c & 0xfffffffffffffff8);
      }
      else {
        puVar4 = (undefined8 *)(*DAT_71052ae0a8)();
      }
      uVar2 = DAT_71052ae0b0;
      *(int *)(puVar4 + 2) = (int)uVar10;
      *puVar4 = uVar2;
      *param_1 = (long)puVar4 + 0x14;
      pcVar7 = (char *)((long)puVar4 + 0x14);
      for (; 1 < uVar10; uVar10 = uVar10 - 1) {
        cVar1 = *pcVar6;
        if (cVar1 == '\0') goto LAB_71001b7838;
        pcVar6 = pcVar6 + 1;
        *pcVar7 = cVar1;
        pcVar7 = pcVar7 + 1;
      }
      if (uVar10 != 0) {
        uVar10 = 1;
LAB_71001b7838:
        uVar8 = uVar10 - 1;
        if ((uVar10 & 3) != 0) {
          lVar9 = -(uVar10 & 3);
          pcVar6 = pcVar7;
          do {
            uVar10 = uVar10 - 1;
            lVar9 = lVar9 + 1;
            pcVar7 = pcVar6 + 1;
            *pcVar6 = '\0';
            pcVar6 = pcVar7;
          } while (lVar9 != 0);
        }
        if (2 < uVar8) {
          do {
            uVar10 = uVar10 - 4;
            pcVar7[0] = '\0';
            pcVar7[1] = '\0';
            pcVar7[2] = '\0';
            pcVar7[3] = '\0';
            pcVar7 = pcVar7 + 4;
          } while (uVar10 != 0);
        }
      }
      local_68 = &PTR_FUN_710509cc08;
      if ((local_50 != (char *)0x0) && (local_50 != local_60)) {
        pcVar5 = *(code **)(local_50 + -0x14);
        if (pcVar5 == (code *)0x0) {
          free(local_50 + -0x14);
        }
        else {
          (*pcVar5)();
        }
      }
    }
  }
  return param_1;
}

