// addr:      7100282f80
// offset:    0x282f80
// name:      FUN_7100282f80
// mangled:   
// signature: undefined FUN_7100282f80(void)


void FUN_7100282f80(long *param_1)

{
  uint uVar1;
  bool bVar2;
  uint *puVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  code *pcVar7;
  long *plVar8;
  long *plVar9;
  int aiStack_70 [6];
  long lStack_58;
  long lStack_50;
  long lStack_48;
  undefined4 uStack_34;
  
  plVar8 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar3;
    if (uVar1 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) goto LAB_7100283204;
      plVar8 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  lVar4 = FUN_71001cd7d0(*(long *)(*(long *)(*plVar8 + 0x10) + 0x18),*(uint *)(param_1 + 0x14));
  if (lVar4 == 0) {
    aiStack_70[0] = -0x7ffefffc;
  }
  else {
    plVar8 = param_1 + 0x1f;
    if (*(int *)((long)param_1 + 0x10c) != 2) {
      lStack_58 = param_1[0x2a];
      lStack_50 = param_1[0x2b];
      lStack_48 = param_1[0x2c];
      aiStack_70[0] = -0x7ffaffe8;
      bVar2 = FUN_71001b4260((int *)&lStack_58,aiStack_70);
      if (bVar2) {
        uStack_34 = 0x80690004;
LAB_7100283090:
        FUN_71001b4200(aiStack_70,&uStack_34);
        FUN_71001b4300((undefined4 *)&lStack_58,aiStack_70);
      }
      else {
        aiStack_70[0] = -0x7ffeffee;
        bVar2 = FUN_71001b4260((int *)&lStack_58,aiStack_70);
        if (bVar2) {
          uStack_34 = 0x80690009;
          goto LAB_7100283090;
        }
      }
      FUN_71001b4300((undefined4 *)(param_1 + 0x4a),(undefined4 *)&lStack_58);
    }
    FUN_71001d1590(plVar8);
    uVar5 = (**(code **)(*param_1 + 0x80))(param_1,plVar8,param_1 + 0x4a);
    if ((uVar5 & 1) != 0) {
      if ((int)param_1[8] == 5) {
        return;
      }
      plVar9 = &DAT_71052af138;
      if (DAT_71052af1d8 != '\0') {
        puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
        uVar1 = *puVar3;
        if (uVar1 != 0) {
          if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
LAB_7100283204:
            FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,
                           0);
            return;
          }
          plVar9 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x20);
        }
      }
      FUN_71001d3780(*(long *)(*(long *)(*plVar9 + 0x10) + 0x18),*(uint *)(param_1 + 0x14),
                     (int)param_1[0x22]);
      FUN_71001d6410((long)param_1,2);
      puVar6 = FUN_71001af850(0x20);
      if (puVar6 != (undefined8 *)0x0) {
        puVar6[2] = 0;
        puVar6[3] = &DAT_71044114cc;
        *puVar6 = &PTR_FUN_7104f56e28;
        puVar6[1] = FUN_7100283220;
      }
      FUN_71001d4200((long)param_1,(long)plVar8,puVar6);
      return;
    }
    pcVar7 = FUN_710170d030;
    if ((int)param_1[0x4a] < 0) {
      pcVar7 = (code *)0x0;
    }
    if (pcVar7 == (code *)0x0) {
      lStack_58 = param_1[0x4a];
      lStack_50 = param_1[0x4b];
      lStack_48 = CONCAT44(lStack_48._4_4_,(int)param_1[0x4c]);
      goto LAB_71002831cc;
    }
    aiStack_70[0] = -0x7ffefff3;
  }
  FUN_71001b4200((undefined4 *)&lStack_58,aiStack_70);
LAB_71002831cc:
  FUN_71002827c0(param_1,(int *)&lStack_58);
  return;
}

