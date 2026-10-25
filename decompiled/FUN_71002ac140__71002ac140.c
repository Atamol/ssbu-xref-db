// addr:      71002ac140
// offset:    0x2ac140
// name:      FUN_71002ac140
// mangled:   
// signature: undefined FUN_71002ac140(void)


void FUN_71002ac140(long *param_1)

{
  uint uVar1;
  bool bVar2;
  uint *puVar3;
  long lVar4;
  int *piVar5;
  code *pcVar6;
  long *plVar7;
  int aiStack_60 [6];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_24;
  
  piVar5 = aiStack_60;
  plVar7 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar3;
    if (uVar1 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        return;
      }
      plVar7 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  lVar4 = FUN_71001cd7d0(*(long *)(*(long *)(*plVar7 + 0x10) + 0x18),*(uint *)(param_1 + 0x14));
  if (lVar4 == 0) {
    aiStack_60[0] = -0x7ffefffc;
    FUN_71001b4200((undefined4 *)&uStack_48,aiStack_60);
  }
  else {
    lVar4 = param_1[0x16];
    if (lVar4 == 0) {
      lVar4 = (**(code **)(*param_1 + 0x68))(param_1);
      param_1[0x16] = lVar4;
    }
    uStack_48 = *(undefined8 *)(lVar4 + 0x58);
    uStack_40 = *(undefined8 *)(lVar4 + 0x60);
    uStack_38 = *(undefined8 *)(lVar4 + 0x68);
    pcVar6 = FUN_710170d030;
    if ((int)uStack_48 < 0) {
      pcVar6 = (code *)0x0;
    }
    if (pcVar6 == (code *)0x0) {
      aiStack_60[0] = -0x7f8dfff9;
      bVar2 = FUN_71001b4260((int *)&uStack_48,aiStack_60);
      if ((undefined1 *)param_1[0x17] != (undefined1 *)0x0) {
        *(undefined1 *)param_1[0x17] = 0;
      }
      if (bVar2) {
        uStack_24 = 0x10001;
        FUN_71001b4200(aiStack_60,&uStack_24);
        goto LAB_71002ac280;
      }
    }
    else if ((undefined1 *)param_1[0x17] != (undefined1 *)0x0) {
      *(undefined1 *)param_1[0x17] = 1;
    }
  }
  piVar5 = (int *)&uStack_48;
LAB_71002ac280:
  FUN_71001d4010(param_1,piVar5);
  return;
}

