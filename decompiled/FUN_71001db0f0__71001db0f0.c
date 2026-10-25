// addr:      71001db0f0
// offset:    0x1db0f0
// name:      FUN_71001db0f0
// mangled:   
// signature: undefined __cdecl FUN_71001db0f0(long * param_1)


void FUN_71001db0f0(long *param_1)

{
  uint *puVar1;
  code *pcVar2;
  
  do {
    (**(code **)(*param_1 + 0x60))(param_1);
    if ((int)param_1[8] != 4) {
      return;
    }
    if (DAT_71052af1d8 != '\0') {
      puVar1 = (uint *)FUN_7101717960(DAT_71052af1d0);
      if ((*puVar1 != 0) && ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)*puVar1)) {
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
      }
    }
    pcVar2 = (code *)param_1[0x10];
    if ((param_1[0x11] & 1U) != 0) {
      pcVar2 = *(code **)(pcVar2 + *(long *)((long)param_1 + (param_1[0x11] >> 1)));
    }
    (*pcVar2)();
    *(int *)(param_1 + 0xe) = (int)param_1[0xe] + 1;
  } while ((int)param_1[8] == 4);
  return;
}

