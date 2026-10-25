// addr:      710013dd90
// offset:    0x13dd90
// name:      FUN_710013dd90
// mangled:   
// signature: undefined __cdecl FUN_710013dd90(int * param_1, long * param_2, undefined4 * param_3)


void FUN_710013dd90(int *param_1,long *param_2,undefined4 *param_3)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  int *piVar4;
  long lVar5;
  int local_60 [4];
  int local_50 [4];
  undefined4 local_38 [2];
  
  piVar4 = local_60;
  if (param_3 == (undefined4 *)0x0) {
    local_50[0] = 0x10c07;
LAB_710013ddec:
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_50 | 4));
    local_60[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)local_50 | 4),(Result *)local_60);
  }
  else {
    if (param_2[0xb] != 0) {
LAB_710013ddd4:
      local_50[0] = 0x10c08;
      goto LAB_710013ddec;
    }
    uVar3 = FUN_7100146ed0(DAT_71052adb38);
    if ((uVar3 & 1) != 0) goto LAB_710013ddd4;
    (**(code **)(*param_2 + 0x38))(local_50,param_2);
    if (local_50[0] == 0) {
      param_2[8] = (long)"DestroySessionJob::WaitForcedTerminatingOfJointSessionJob";
      param_2[6] = (long)FUN_710013df30;
      param_2[7] = 0;
      param_2[0xb] = (long)param_3;
      FUN_71000b4160(param_3);
      *(undefined1 *)(param_2 + 0x13) = 0;
      (**(code **)(*param_2 + 0x10))(param_2,1);
      param_2[0x12] = *(long *)(DAT_71052ac580 + 0x30);
      lVar1 = DAT_71052adb38;
      lVar5 = *(long *)(DAT_71052adb38 + 0x70);
      if (lVar5 != 0) {
        local_60[0] = 0x6c05;
        nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_60 | 4))
        ;
        local_38[0] = 0;
        nn::err::ErrorResultVariant::operator=
                  ((ErrorResultVariant *)((ulong)local_60 | 4),(Result *)local_38);
        *(undefined1 *)(lVar5 + 0xfb) = 1;
        FUN_71000bcf30((int *)(lVar5 + 0x100),local_60);
      }
      lVar5 = *(long *)(lVar1 + 0x10);
      if ((lVar5 != 0) && (uVar2 = FUN_71000b4990(lVar5), (uVar2 & 1) != 0)) {
        *(undefined1 *)(*(long *)(lVar1 + 0x10) + 0x48) = 1;
      }
      local_60[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_60 | 4));
      local_38[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)local_60 | 4),(Result *)local_38);
      goto LAB_710013de14;
    }
  }
  piVar4 = local_50;
LAB_710013de14:
  FUN_71000bce50(param_1,piVar4);
  return;
}

