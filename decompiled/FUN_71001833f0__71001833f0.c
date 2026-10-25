// addr:      71001833f0
// offset:    0x1833f0
// name:      FUN_71001833f0
// mangled:   
// signature: undefined __cdecl FUN_71001833f0(int * param_1, long param_2, undefined4 * param_3, long * param_4)


void FUN_71001833f0(int *param_1,long param_2,undefined4 *param_3,long *param_4)

{
  long lVar1;
  long *plVar2;
  int *piVar3;
  int local_58 [4];
  int local_48 [4];
  undefined4 local_38 [2];
  
  lVar1 = FUN_71001815f0(*(long **)(param_2 + 0x68),*param_4);
  if (*(byte *)(lVar1 + 8) < 7) {
    if (*(byte *)(lVar1 + 8) != 6) {
      local_48[0] = 0x641f;
      goto LAB_71001834f4;
    }
    if (*(int *)(lVar1 + 4) != (int)param_4[1]) {
      local_48[0] = 0x6c51;
      goto LAB_71001834f4;
    }
    plVar2 = *(long **)(*(long *)(param_2 + 0x68) + 0x400);
    (**(code **)(*plVar2 + 0x40))(local_48,plVar2,*(undefined8 *)(param_2 + 0x60),param_4);
    if (local_48[0] == 0) {
      *(undefined4 **)(param_2 + 0x58) = param_3;
      FUN_71000b40e0(param_3);
      FUN_71000b4160(*(undefined4 **)(param_2 + 0x58));
      FUN_71000b4820(*(long *)(*(long *)(param_2 + 0x68) + 0x400),1);
      lVar1 = *(long *)(param_2 + 0x68);
      *(undefined1 *)(lVar1 + 0x47d) = 0;
      *(undefined1 *)(lVar1 + 0x569) = 1;
      *(undefined8 *)(param_2 + 0x38) = 0;
      *(char **)(param_2 + 0x40) = "LocalConnectNetworkJob::WaitConnectNetwork";
      *(code **)(param_2 + 0x30) = FUN_7100183540;
      local_58[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_58 | 4));
      local_38[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_38);
      piVar3 = local_58;
      goto LAB_710018351c;
    }
  }
  else {
    local_48[0] = 0x641e;
LAB_71001834f4:
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_48 | 4));
    local_58[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_58);
  }
  piVar3 = local_48;
LAB_710018351c:
  FUN_71000bce50(param_1,piVar3);
  return;
}

