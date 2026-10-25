// addr:      710018eaf0
// offset:    0x18eaf0
// name:      FUN_710018eaf0
// mangled:   
// signature: undefined4 __cdecl FUN_710018eaf0(long * param_1, undefined4 * param_2)


undefined4 FUN_710018eaf0(long *param_1,undefined4 *param_2)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  undefined4 uVar4;
  long lVar5;
  
  iVar2 = FUN_71000b4920((long)param_1);
  if (((iVar2 == 4) || (iVar2 = FUN_71000b4920((long)param_1), iVar2 == 1)) ||
     (iVar2 = FUN_71000b4920((long)param_1), iVar2 == 3)) {
    uVar4 = 0;
  }
  else {
    if (param_2 != (undefined4 *)0x0) {
      param_1[0xd] = (long)param_2;
      FUN_71000b4160(param_2);
    }
    lVar1 = DAT_71052ac580;
    lVar5 = param_1[0xc];
    plVar3 = FUN_71000bb680();
    param_1[0xb] = *(long *)(lVar1 + 0x30) + *plVar3 * (long)(int)lVar5;
    FUN_7100191ed0(DAT_71052adfc0,2);
    (**(code **)(*param_1 + 0x10))(param_1,1);
    param_1[6] = (long)FUN_710018ec10;
    param_1[7] = 0;
    param_1[8] = (long)"LeaveMeshJob::SendLeaveRequest";
    lVar5 = *(long *)(DAT_71052adfc0 + 0x20);
    if (*(char *)(lVar5 + 0xf4) != '\0') {
      FUN_71001a85d0(lVar5);
      *(undefined1 *)(lVar5 + 0x48) = 1;
    }
    plVar3 = *(long **)(DAT_71052adfc0 + 0x38);
    if (plVar3 == (long *)0x0) {
      uVar4 = 1;
    }
    else {
      uVar4 = 1;
      if (*(char *)((long)plVar3 + 0x84) != '\0') {
        FUN_71001a2880(plVar3);
        *(undefined1 *)(plVar3 + 9) = 1;
      }
    }
  }
  return uVar4;
}

