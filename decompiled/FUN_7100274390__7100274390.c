// addr:      7100274390
// offset:    0x274390
// name:      FUN_7100274390
// mangled:   
// signature: undefined __cdecl FUN_7100274390(long param_1, long * param_2)


void FUN_7100274390(long param_1,long *param_2)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  size_t sVar6;
  long *plVar7;
  undefined1 *puVar8;
  undefined **local_200;
  undefined1 local_1f8 [16];
  undefined1 *local_1e8;
  undefined8 local_1e0;
  undefined1 auStack_1d8 [24];
  char *local_1c0;
  undefined **local_1b8;
  undefined1 local_1b0 [16];
  undefined1 *local_1a0;
  undefined8 uStack_198;
  long local_190;
  char *local_188;
  
  plVar7 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        return;
      }
      plVar7 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  lVar3 = FUN_71001cd7d0(*(long *)(*(long *)(*plVar7 + 0x10) + 0x18),*(uint *)(param_1 + 8));
  if (lVar3 != 0) {
    *(undefined4 *)((long)param_2 + 0xc) = *(undefined4 *)(param_1 + 0x28);
    (**(code **)(*param_2 + 0xb8))(param_2,*(undefined8 *)(param_1 + 0x30));
    param_2[2] = *(long *)(param_1 + 0x38);
    param_2[3] = *(long *)(param_1 + 0x40);
    lVar3 = **(long **)(param_1 + 0x10);
    if (lVar3 != (*(long **)(param_1 + 0x10))[1]) {
      do {
        FUN_71001b2b10(lVar3 + 0x10,&local_190);
        FUN_71001b2b10(lVar3 + 0x38,&local_1b8);
        (**(code **)(*param_2 + 0x18))(auStack_1d8,param_2,local_190,local_1b8);
        FUN_71001b2bf0(local_190);
        FUN_71001b2bf0((long)local_1b8);
        lVar3 = lVar3 + 0x60;
      } while (lVar3 != *(long *)(*(long *)(param_1 + 0x10) + 8));
    }
    lVar3 = **(long **)(param_1 + 0x20);
    lVar5 = (*(long **)(param_1 + 0x20))[1];
    if (lVar3 != lVar5) {
      (**(code **)(*param_2 + 0xb0))(param_2,lVar3,lVar5 - lVar3);
    }
    lVar3 = **(long **)(param_1 + 0x18);
    if (lVar3 != (*(long **)(param_1 + 0x18))[1]) {
      do {
        pcVar4 = FUN_71002209b0((long)param_2);
        local_1f8[0] = 0;
        local_1e0 = 0x10;
        local_200 = &PTR_FUN_710509cc08;
        local_1e8 = local_1f8;
        FUN_71001b47e0((long)&local_200,pcVar4,-1);
        FUN_71001b6080(&local_190);
        lVar5 = FUN_71001b0ab0((long)&local_190,"--");
        lVar5 = FUN_71001b5d60(lVar5,(long)&local_200);
        lVar5 = FUN_71001b0ab0(lVar5,"\r\n");
        lVar5 = FUN_71001b0ab0(lVar5,"Content-Disposition: form-data; name=\"");
        lVar5 = FUN_71001b5d60(lVar5,lVar3 + 0x10);
        lVar5 = FUN_71001b0ab0(lVar5,"\"");
        lVar5 = FUN_71001b0ab0(lVar5,"\r\n");
        lVar5 = FUN_71001b0ab0(lVar5,"\r\n");
        lVar5 = FUN_71001b5d60(lVar5,lVar3 + 0x38);
        FUN_71001b0ab0(lVar5,"\r\n");
        uStack_198 = 0x10;
        local_1b0[0] = 0;
        local_1b8 = &PTR_FUN_710509cc08;
        local_1a0 = local_1b0;
        FUN_71001b47e0((long)&local_1b8,local_188,-1);
        FUN_71001b2b10((long)&local_1b8,&local_1c0);
        pcVar4 = local_1c0;
        puVar8 = *(undefined1 **)(param_1 + 0x78);
        sVar6 = strlen(local_1c0);
        FUN_7100292150((long *)(param_1 + 0x70),puVar8,pcVar4,pcVar4 + sVar6);
        FUN_71001b2bf0((long)local_1c0);
        local_1b8 = &PTR_FUN_710509cc08;
        FUN_71001b4910((long)&local_1b8);
        FUN_71001b60c0(&local_190);
        local_200 = &PTR_FUN_710509cc08;
        FUN_71001b4910((long)&local_200);
        lVar3 = lVar3 + 0x60;
      } while (lVar3 != *(long *)(*(long *)(param_1 + 0x18) + 8));
    }
    pcVar4 = FUN_71002209b0((long)param_2);
    local_1f8[0] = 0;
    local_1e8 = local_1f8;
    local_1e0 = 0x10;
    local_200 = &PTR_FUN_710509cc08;
    FUN_71001b47e0((long)&local_200,pcVar4,-1);
    pcVar4 = *(char **)(param_1 + 0x58);
    FUN_71001b6080(&local_190);
    lVar3 = FUN_71001b0ab0((long)&local_190,"--");
    lVar3 = FUN_71001b5d60(lVar3,(long)&local_200);
    lVar3 = FUN_71001b0ab0(lVar3,"\r\n");
    FUN_71001b0ab0(lVar3,"Content-Disposition: form-data; name=\"file\"");
    if (pcVar4 != (char *)0x0) {
      lVar3 = FUN_71001b0ab0((long)&local_190,"; filename=\"");
      lVar3 = FUN_71001b0ab0(lVar3,pcVar4);
      FUN_71001b0ab0(lVar3,"\"");
    }
    lVar3 = FUN_71001b0ab0((long)&local_190,"\r\n");
    FUN_71001b0ab0(lVar3,"\r\n");
    local_1b0[0] = 0;
    uStack_198 = 0x10;
    local_1b8 = &PTR_FUN_710509cc08;
    local_1a0 = local_1b0;
    FUN_71001b47e0((long)&local_1b8,local_188,-1);
    FUN_71001b2b10((long)&local_1b8,&local_1c0);
    pcVar4 = local_1c0;
    puVar8 = *(undefined1 **)(param_1 + 0x78);
    sVar6 = strlen(local_1c0);
    FUN_7100292150((long *)(param_1 + 0x70),puVar8,pcVar4,pcVar4 + sVar6);
    FUN_71001b2bf0((long)local_1c0);
    local_1b8 = &PTR_FUN_710509cc08;
    FUN_71001b4910((long)&local_1b8);
    FUN_71001b60c0(&local_190);
    local_200 = &PTR_FUN_710509cc08;
    FUN_71001b4910((long)&local_200);
    pcVar4 = FUN_71002209b0((long)param_2);
    local_1e8 = local_1f8;
    local_1f8[0] = 0;
    local_1e0 = 0x10;
    local_200 = &PTR_FUN_710509cc08;
    FUN_71001b47e0((long)&local_200,pcVar4,-1);
    FUN_71001b6080(&local_190);
    lVar3 = FUN_71001b0ab0((long)&local_190,"\r\n");
    lVar3 = FUN_71001b0ab0(lVar3,"--");
    lVar3 = FUN_71001b5d60(lVar3,(long)&local_200);
    lVar3 = FUN_71001b0ab0(lVar3,"--");
    FUN_71001b0ab0(lVar3,"\r\n");
    uStack_198 = 0x10;
    local_1b0[0] = 0;
    local_1b8 = &PTR_FUN_710509cc08;
    local_1a0 = local_1b0;
    FUN_71001b47e0((long)&local_1b8,local_188,-1);
    FUN_71001b2b10((long)&local_1b8,&local_1c0);
    pcVar4 = local_1c0;
    puVar8 = *(undefined1 **)(param_1 + 0x90);
    sVar6 = strlen(local_1c0);
    FUN_7100292150((long *)(param_1 + 0x88),puVar8,pcVar4,pcVar4 + sVar6);
    FUN_71001b2bf0((long)local_1c0);
    local_1b8 = &PTR_FUN_710509cc08;
    FUN_71001b4910((long)&local_1b8);
    FUN_71001b60c0(&local_190);
    local_200 = &PTR_FUN_710509cc08;
    FUN_71001b4910((long)&local_200);
    (**(code **)(*param_2 + 0x30))
              (param_2,((*(long *)(param_1 + 0x78) - *(long *)(param_1 + 0x70)) +
                        *(long *)(param_1 + 0x50) + *(long *)(param_1 + 0x90)) -
                       *(long *)(param_1 + 0x88));
  }
  return;
}

