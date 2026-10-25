// addr:      7100140f00
// offset:    0x140f00
// name:      FUN_7100140f00
// mangled:   
// signature: undefined __cdecl FUN_7100140f00(int * param_1, long * param_2, undefined4 * param_3)


void FUN_7100140f00(int *param_1,long *param_2,undefined4 *param_3)

{
  long lVar1;
  bool bVar2;
  byte bVar3;
  uint uVar4;
  long lVar5;
  int local_58 [4];
  undefined4 local_48 [2];
  
  if (param_2[0xb] == 0) {
    bVar2 = FUN_71001931d0(DAT_71052adfc0);
    if ((!bVar2) || (bVar3 = FUN_71001921a0(DAT_71052adfc0), (bVar3 & 1) != 0)) {
      param_2[0xb] = (long)param_3;
      FUN_71000b4160(param_3);
      *(undefined1 *)(param_2 + 0x13) = 0;
      (**(code **)(*param_2 + 0x10))(param_2,1);
      param_2[0x14] = *(long *)(DAT_71052ac580 + 0x30);
      lVar1 = DAT_71052adb38;
      lVar5 = *(long *)(DAT_71052adb38 + 0x70);
      if (lVar5 != 0) {
        local_58[0] = 0x6c05;
        nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_58 | 4))
        ;
        local_48[0] = 0;
        nn::err::ErrorResultVariant::operator=
                  ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_48);
        *(undefined1 *)(lVar5 + 0xfb) = 1;
        FUN_71000bcf30((int *)(lVar5 + 0x100),local_58);
      }
      lVar5 = *(long *)(lVar1 + 0x10);
      if ((lVar5 != 0) && (uVar4 = FUN_71000b4990(lVar5), (uVar4 & 1) != 0)) {
        *(undefined1 *)(*(long *)(lVar1 + 0x10) + 0x48) = 1;
      }
      param_2[7] = 0;
      param_2[8] = (long)"LeaveSessionJob::WaitForcedTerminatingOfJointSessionJob";
      param_2[6] = (long)FUN_7100141060;
      local_58[0] = 0;
      goto LAB_710014101c;
    }
  }
  local_58[0] = 0x10c08;
LAB_710014101c:
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_58 | 4));
  local_48[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_48);
  FUN_71000bce50(param_1,local_58);
  return;
}

