// addr:      7100278640
// offset:    0x278640
// name:      FUN_7100278640
// mangled:   
// signature: undefined FUN_7100278640(void)


void FUN_7100278640(long param_1)

{
  uint uVar1;
  bool bVar2;
  uint *puVar3;
  long lVar4;
  long *plVar5;
  int aiStack_60 [6];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_24;
  
  plVar5 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar3;
    if (uVar1 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        return;
      }
      plVar5 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  lVar4 = FUN_71001cd7d0(*(long *)(*(long *)(*plVar5 + 0x10) + 0x18),*(uint *)(param_1 + 0xa8));
  if (lVar4 == 0) {
    aiStack_60[0] = -0x7ffefffc;
  }
  else if (*(int *)(param_1 + 0x114) == 2) {
    if (*(ulong *)(param_1 + 0x318) == (ulong)*(uint *)(param_1 + 0x270)) {
      aiStack_60[0] = 0x10001;
    }
    else {
LAB_7100278724:
      aiStack_60[0] = -0x7f96ffff;
    }
  }
  else if (*(char *)(param_1 + 800) == '\0') {
    if (*(char *)(param_1 + 0x321) == '\0') {
      if (*(char *)(param_1 + 0x322) == '\0') {
        uStack_48 = *(undefined8 *)(param_1 + 0x158);
        uStack_40 = *(undefined8 *)(param_1 + 0x160);
        uStack_38 = *(undefined8 *)(param_1 + 0x168);
        aiStack_60[0] = -0x7ffaffe8;
        bVar2 = FUN_71001b4260((int *)&uStack_48,aiStack_60);
        if (bVar2) {
          uStack_24 = 0x80690004;
        }
        else {
          aiStack_60[0] = -0x7ffeffee;
          bVar2 = FUN_71001b4260((int *)&uStack_48,aiStack_60);
          if (!bVar2) goto LAB_710027873c;
          uStack_24 = 0x80690009;
        }
        FUN_71001b4200(aiStack_60,&uStack_24);
        FUN_71001b4300((undefined4 *)&uStack_48,aiStack_60);
        goto LAB_710027873c;
      }
      goto LAB_7100278724;
    }
    aiStack_60[0] = -0x7f8bffec;
  }
  else {
    aiStack_60[0] = -0x7ffaffe9;
  }
  FUN_71001b4200((undefined4 *)&uStack_48,aiStack_60);
LAB_710027873c:
  FUN_7100278090(param_1,(int *)&uStack_48);
  return;
}

