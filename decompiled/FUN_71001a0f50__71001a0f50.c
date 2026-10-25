// addr:      71001a0f50
// offset:    0x1a0f50
// name:      FUN_71001a0f50
// mangled:   
// signature: undefined4 __cdecl FUN_71001a0f50(long * param_1)


undefined4 FUN_71001a0f50(long *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  int local_58 [4];
  int aiStack_48 [4];
  undefined4 local_38 [2];
  
  if (*(char *)((long)param_1 + 100) == '\0') {
    plVar5 = *(long **)(DAT_71052adfc0 + 0x20);
    if (*(char *)((long)plVar5 + 0xf4) != '\0') {
      FUN_71001a85d0((long)plVar5);
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
    plVar5 = *(long **)(DAT_71052adfc0 + 0x38);
    if ((plVar5 != (long *)0x0) && (*(char *)((long)plVar5 + 0x84) != '\0')) {
      FUN_71001a2880(plVar5);
      (**(code **)(*plVar5 + 0x10))(plVar5,0);
    }
    lVar6 = *(long *)(DAT_71052adfc0 + 0x10);
    iVar2 = FUN_71000b4920(lVar6);
    if ((iVar2 != 4) && (iVar2 = FUN_71000b4920(lVar6), iVar2 != 1)) {
      plVar5 = *(long **)(DAT_71052adfc0 + 8);
      uVar3 = FUN_71000b4990((long)plVar5);
      lVar6 = DAT_71052ac580;
      if ((uVar3 & 1) != 0) {
        local_58[0] = 0x6439;
        nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_58 | 4))
        ;
        local_38[0] = 0;
        nn::err::ErrorResultVariant::operator=
                  ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_38);
        FUN_71000bce50(aiStack_48,local_58);
        FUN_710018d800(plVar5,aiStack_48);
        (**(code **)(*plVar5 + 0x10))(plVar5,1);
        *(undefined1 *)((long)param_1 + 100) = 1;
        return 0;
      }
      lVar1 = param_1[0xc];
      plVar5 = FUN_71000bb680();
      lVar4 = *plVar5;
      lVar6 = *(long *)(lVar6 + 0x30);
      *(undefined1 *)((long)param_1 + 100) = 1;
      param_1[0xb] = lVar6 + lVar4 * (int)lVar1;
      FUN_7100191ed0(DAT_71052adfc0,3);
      (**(code **)(*param_1 + 0x10))(param_1,1);
      param_1[6] = (long)FUN_71001a1100;
      param_1[7] = 0;
      param_1[8] = (long)"ProcessDestroyMeshJob::SendDestroyResponse";
      return 1;
    }
  }
  return 0;
}

