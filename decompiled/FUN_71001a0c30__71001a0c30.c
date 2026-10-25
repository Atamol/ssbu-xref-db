// addr:      71001a0c30
// offset:    0x1a0c30
// name:      FUN_71001a0c30
// mangled:   
// signature: undefined4 __cdecl FUN_71001a0c30(long * param_1, long * param_2, int param_3, ulong param_4)


undefined4 FUN_71001a0c30(long *param_1,long *param_2,int param_3,ulong param_4)

{
  long lVar1;
  long *plVar2;
  int *piVar3;
  long *plVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int local_f0 [4];
  int local_e0 [4];
  ulong local_d0;
  undefined4 local_c8;
  int aiStack_50 [4];
  
  if (param_2 == (long *)0x0) {
    uVar5 = 0;
  }
  else {
    param_1[0xe] = (long)param_2;
    local_d0 = 0x80000000000;
    local_c8 = 0;
    (**(code **)(*param_2 + 0x18))(param_2,&local_d0);
    puVar6 = (undefined4 *)param_1[0xf];
    local_d0 = local_d0 & 0xffffffff00000000;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)&local_d0 | 4));
    local_e0[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)&local_d0 | 4),(Result *)local_e0);
    FUN_71000bce50(aiStack_50,(int *)&local_d0);
    FUN_71000b4180(puVar6,aiStack_50);
    piVar3 = (int *)(param_1[0xe] + 0x48);
    if ((*piVar3 == 3) && ((param_4 & 1) == 0)) {
      plVar4 = *(long **)(param_1[0xe] + 0xa0);
      FUN_710015fd60(&local_d0);
      plVar2 = (long *)FUN_7100161fb0(DAT_71052add68);
      (**(code **)(*plVar2 + 0x28))(local_e0,plVar2,param_1[0xe],&local_d0);
      if ((local_e0[0] == 0) && (FUN_7100187200(local_f0,plVar4), local_f0[0] == 0)) {
        FUN_71000b4820((long)plVar4,0);
      }
      FUN_710015ff20(&local_d0);
      piVar3 = (int *)(param_1[0xe] + 0x48);
    }
    else {
      if (*piVar3 == 3) {
        return 0;
      }
      if ((param_4 & 1) == 0) {
        return 0;
      }
    }
    *(int *)(param_1 + 0xc) = param_3;
    *piVar3 = 4;
    lVar1 = DAT_71052ac580;
    plVar2 = FUN_71000bb680();
    param_1[0xb] = *(long *)(lVar1 + 0x30) + *plVar2 * (long)param_3;
    uVar5 = 1;
    *(undefined8 *)((long)param_1 + 100) = 0;
    *(undefined1 *)(param_1 + 0x10) = 1;
    (**(code **)(*param_1 + 0x10))(param_1,1);
    param_1[6] = (long)FUN_71001a0590;
    param_1[7] = 0;
    param_1[8] = (long)"ProcessConnectionRequestJob::WaitInverseConnection";
  }
  return uVar5;
}

