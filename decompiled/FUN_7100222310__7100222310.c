// addr:      7100222310
// offset:    0x222310
// name:      FUN_7100222310
// mangled:   
// signature: undefined __cdecl FUN_7100222310(undefined8 * param_1, long param_2)


void FUN_7100222310(undefined8 *param_1,long param_2)

{
  code *pcVar1;
  uint uVar2;
  undefined8 *puVar3;
  uint *puVar4;
  long lVar5;
  code *pcVar6;
  long *plVar7;
  undefined4 local_70 [6];
  int local_58;
  undefined4 uStack_54;
  undefined8 local_50;
  undefined8 local_48;
  long local_38;
  
  if (DAT_71052b5440 != (long *)0x0) {
    (**(code **)(*DAT_71052b5440 + 0x10))();
  }
  DAT_71052b5438 = DAT_71052b5438 + 1;
  puVar3 = FUN_71001af850(0x2e0);
  if (puVar3 != (undefined8 *)0x0) {
    FUN_710021fd80(puVar3);
  }
  *(undefined8 **)(param_2 + 0xa8) = puVar3;
  FUN_71001b2b10(param_2 + 0xb0,&local_38);
  (**(code **)(**(long **)(param_2 + 0xa8) + 0x10))
            (&local_58,*(long **)(param_2 + 0xa8),local_38,*(undefined4 *)(param_2 + 0xd8));
  FUN_71001b2bf0(local_38);
  pcVar6 = FUN_710170d030;
  pcVar1 = pcVar6;
  if (local_58 < 0) {
    pcVar1 = (code *)0x0;
  }
  if (pcVar1 == (code *)0x0) {
LAB_710022247c:
    param_1[2] = local_48;
    *param_1 = CONCAT44(uStack_54,local_58);
    param_1[1] = local_50;
  }
  else {
    (**(code **)(**(long **)(param_2 + 0x100) + 0x10))
              (*(long **)(param_2 + 0x100),*(undefined8 *)(param_2 + 0xa8));
    plVar7 = &DAT_71052af138;
    if (DAT_71052af1d8 != '\0') {
      puVar4 = (uint *)FUN_7101717960(DAT_71052af1d0);
      uVar2 = *puVar4;
      if (uVar2 != 0) {
        if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar2) {
          FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0)
          ;
          return;
        }
        plVar7 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x20);
      }
    }
    lVar5 = FUN_71001cd7d0(*(long *)(*(long *)(*plVar7 + 0x10) + 0x18),*(uint *)(param_2 + 0xa0));
    if (lVar5 == 0) {
      local_70[0] = 0x80010004;
    }
    else {
      (**(code **)(**(long **)(param_2 + 0xa8) + 0x50))(local_70);
      FUN_71001b4300(&local_58,local_70);
      if (local_58 < 0) {
        pcVar6 = (code *)0x0;
      }
      if (pcVar6 == (code *)0x0) goto LAB_710022247c;
      local_70[0] = 0x10001;
    }
    FUN_71001b4200((undefined4 *)param_1,local_70);
  }
  return;
}

