// addr:      710017b4d0
// offset:    0x17b4d0
// name:      FUN_710017b4d0
// mangled:   
// signature: undefined8 __cdecl FUN_710017b4d0(long param_1)


undefined8 FUN_710017b4d0(long param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  int aiStack_80 [4];
  int aiStack_70 [4];
  int aiStack_60 [4];
  int local_50 [4];
  int aiStack_40 [4];
  undefined4 local_28 [2];
  
  piVar4 = aiStack_80;
  if (DAT_71052adb38 == 0) {
switchD_710017b518_caseD_6:
    bVar1 = FUN_7100174cb0(*(long *)(param_1 + 0x60));
    if (bVar1) {
      uVar3 = 5;
    }
    else {
      uVar3 = 0;
      *(code **)(param_1 + 0x30) = FUN_710017b670;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(char **)(param_1 + 0x40) = "LocalMatchBrowseMatchmakeJob::UpdateCurrentConnectionStatus";
    }
  }
  else {
    iVar2 = FUN_7100146ba0(DAT_71052adb38);
    switch(iVar2) {
    case 4:
      puVar5 = *(undefined4 **)(param_1 + 0x58);
      local_50[0] = 0x8c56;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_50 | 4));
      local_28[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_28);
      FUN_71000bce50(aiStack_60,local_50);
      piVar4 = aiStack_60;
      break;
    case 5:
      puVar5 = *(undefined4 **)(param_1 + 0x58);
      local_50[0] = 0xc406;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_50 | 4));
      local_28[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_28);
      FUN_71000bce50(aiStack_40,local_50);
      piVar4 = aiStack_40;
      break;
    default:
      goto switchD_710017b518_caseD_6;
    case 7:
      puVar5 = *(undefined4 **)(param_1 + 0x58);
      local_50[0] = 0xc420;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_50 | 4));
      local_28[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_28);
      FUN_71000bce50(aiStack_70,local_50);
      piVar4 = aiStack_70;
      break;
    case 8:
      puVar5 = *(undefined4 **)(param_1 + 0x58);
      local_50[0] = 0xc421;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_50 | 4));
      local_28[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_28);
      FUN_71000bce50(aiStack_80,local_50);
    }
    FUN_71000b41f0(puVar5,piVar4);
    *(undefined8 *)(param_1 + 0x58) = 0;
    uVar3 = 1;
  }
  return uVar3;
}

