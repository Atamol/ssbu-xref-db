// addr:      7100241d00
// offset:    0x241d00
// name:      FUN_7100241d00
// mangled:   
// signature: undefined FUN_7100241d00(void)


void FUN_7100241d00(long param_1)

{
  uint uVar1;
  uint *puVar2;
  long lVar3;
  undefined8 *puVar4;
  code *pcVar5;
  long *plVar6;
  long *plVar7;
  int aiStack_58 [6];
  undefined4 uStack_34;
  
  plVar6 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar2;
    if (uVar1 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) goto LAB_7100241eec;
      plVar6 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  lVar3 = FUN_71001cd7d0(*(long *)(*(long *)(*plVar6 + 0x10) + 0x18),*(uint *)(param_1 + 0xa8));
  if (lVar3 == 0) {
    uStack_34 = 0x80010004;
  }
  else {
    *(undefined4 *)(param_1 + 0x184) = 0;
    *(undefined8 *)(param_1 + 400) = *(undefined8 *)(param_1 + 0x188);
    *(undefined1 *)(param_1 + 0x1a0) = 0;
    FUN_71001b3cb0(param_1 + 0x1a8,"");
    plVar6 = (long *)(param_1 + 0xe8);
    *(int *)(param_1 + 0x180) = *(int *)(param_1 + 0x180) + 1;
    FUN_71001d1590(plVar6);
    FUN_7100221720(aiStack_58,param_1 + 0x178,plVar6,param_1 + 0xb0,*(undefined4 *)(param_1 + 0xd8),
                   param_1 + 0xa0,*(undefined8 *)(param_1 + 0x1d0));
    pcVar5 = FUN_710170d030;
    if (aiStack_58[0] < 0) {
      pcVar5 = (code *)0x0;
    }
    if (pcVar5 != (code *)0x0) {
      plVar7 = &DAT_71052af138;
      if (DAT_71052af1d8 != '\0') {
        puVar2 = (uint *)FUN_7101717960(DAT_71052af1d0);
        uVar1 = *puVar2;
        if (uVar1 != 0) {
          if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
LAB_7100241eec:
            FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,
                           0);
            return;
          }
          plVar7 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
        }
      }
      FUN_71001d3780(*(long *)(*(long *)(*plVar7 + 0x10) + 0x18),*(uint *)(param_1 + 0xa8),
                     *(undefined4 *)(param_1 + 0x100));
      FUN_71001d6410(param_1,2);
      puVar4 = FUN_71001af850(0x20);
      if (puVar4 != (undefined8 *)0x0) {
        puVar4[2] = 0;
        puVar4[3] = &DAT_71044114cc;
        *puVar4 = &PTR_FUN_7104f56e28;
        puVar4[1] = FUN_7100241f10;
      }
      FUN_71001d4200(param_1,(long)plVar6,puVar4);
      return;
    }
    uStack_34 = 0x8001000d;
  }
  FUN_71001b4200(aiStack_58,&uStack_34);
  FUN_7100241610(param_1,aiStack_58);
  return;
}

