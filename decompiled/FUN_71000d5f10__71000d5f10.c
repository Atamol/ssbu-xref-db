// addr:      71000d5f10
// offset:    0xd5f10
// name:      FUN_71000d5f10
// mangled:   
// signature: undefined FUN_71000d5f10(void)


void FUN_71000d5f10(int *param_1,long *param_2)

{
  ulong uVar1;
  int aiStack_38 [4];
  undefined4 auStack_28 [2];
  
  (**(code **)(*param_2 + 0x10))(param_2,1);
  param_2[6] = (long)FUN_7100187730;
  param_2[7] = 0;
  param_2[8] = (long)"NexCreateMeshJob::SetupLocalPlayerInfo";
  uVar1 = (**(code **)(*DAT_71052acd90 + 0x58))();
  if ((uVar1 & 1) != 0) {
    DAT_71052ac680 = 0xffffffff;
    DAT_71052ac608 = 0xffffffffffffffff;
    DAT_71052ac610 = 0xffffffff;
    DAT_71052ac614 = 0xffffffffffffffff;
    DAT_71052ac61c = 0xffffffffffffffff;
  }
  aiStack_38[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_38 | 4));
  auStack_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_38 | 4),(Result *)auStack_28);
  FUN_71000bce50(param_1,aiStack_38);
  return;
}

