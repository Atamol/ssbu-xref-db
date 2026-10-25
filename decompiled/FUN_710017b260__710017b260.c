// addr:      710017b260
// offset:    0x17b260
// name:      FUN_710017b260
// mangled:   
// signature: undefined8 __cdecl FUN_710017b260(long * param_1)


undefined8 FUN_710017b260(long *param_1)

{
  int iVar1;
  ulong uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int aiStack_90 [4];
  int aiStack_80 [4];
  int aiStack_70 [4];
  int aiStack_60 [4];
  int local_50 [4];
  int aiStack_40 [4];
  undefined4 local_28 [2];
  
  piVar3 = aiStack_90;
  if (DAT_71052adb38 == 0) {
switchD_710017b2a8_caseD_6:
    if (*(int *)param_1[0xb] == 4) {
      (**(code **)(*param_1 + 0x30))(param_1);
      return 1;
    }
    uVar2 = (**(code **)(*(long *)param_1[0x13] + 0x30))();
    if ((uVar2 & 1) == 0) {
      return 5;
    }
    if ((int)param_1[0xd] == 2) {
      param_1[6] = (long)FUN_710013cda0;
      param_1[7] = 0;
      param_1[8] = (long)"session::BrowseMatchmakeJob::CompleteProcess";
      return 0;
    }
    if ((int)param_1[0xd] != 3) {
      return 5;
    }
    puVar4 = (undefined4 *)param_1[0xb];
    FUN_71000bce50(aiStack_90,(int *)((long)param_1 + 0x6c));
  }
  else {
    iVar1 = FUN_7100146ba0(DAT_71052adb38);
    switch(iVar1) {
    case 4:
      puVar4 = (undefined4 *)param_1[0xb];
      local_50[0] = 0x8c56;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_50 | 4));
      local_28[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_28);
      FUN_71000bce50(aiStack_60,local_50);
      piVar3 = aiStack_60;
      break;
    case 5:
      puVar4 = (undefined4 *)param_1[0xb];
      local_50[0] = 0xc406;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_50 | 4));
      local_28[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_28);
      FUN_71000bce50(aiStack_40,local_50);
      piVar3 = aiStack_40;
      break;
    default:
      goto switchD_710017b2a8_caseD_6;
    case 7:
      puVar4 = (undefined4 *)param_1[0xb];
      local_50[0] = 0xc420;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_50 | 4));
      local_28[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_28);
      FUN_71000bce50(aiStack_70,local_50);
      piVar3 = aiStack_70;
      break;
    case 8:
      puVar4 = (undefined4 *)param_1[0xb];
      local_50[0] = 0xc421;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_50 | 4));
      local_28[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_28);
      FUN_71000bce50(aiStack_80,local_50);
      piVar3 = aiStack_80;
    }
  }
  FUN_71000b41f0(puVar4,piVar3);
  param_1[0xb] = 0;
  return 1;
}

