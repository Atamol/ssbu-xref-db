// addr:      710016b2f0
// offset:    0x16b2f0
// name:      FUN_710016b2f0
// mangled:   
// signature: undefined __cdecl FUN_710016b2f0(int * param_1, undefined8 param_2, Result * param_3)


void FUN_710016b2f0(int *param_1,undefined8 param_2,Result *param_3)

{
  uint uVar1;
  uint uVar2;
  int local_40 [4];
  undefined4 local_28 [2];
  
  uVar1 = *(uint *)param_3;
  if (uVar1 == 0) {
    local_40[0] = 0;
    goto LAB_710016b3f0;
  }
  if ((uVar1 & 0x1ff) == 0xcb) {
    uVar2 = uVar1 >> 9 & 0x1fff;
    if (uVar2 - 0x11 < 5) {
switchD_710016b3d8_caseD_5:
      local_40[0] = 0xa46e;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_40 | 4));
      local_28[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_28);
      FUN_71000bce50(param_1,local_40);
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)local_40,param_3);
      FUN_71000be900((long)param_1,(undefined8 *)local_40);
      return;
    }
    if (uVar2 - 0x16 < 5) {
      if ((uVar1 & 0x3ffe00) == 0x3000) {
        local_40[0] = 0xc421;
      }
      else {
        if ((uVar1 & 0x3ffe00) != 0x2e00) goto switchD_710016b3d8_caseD_5;
        local_40[0] = 0xc420;
      }
      goto LAB_710016b3f0;
    }
    switch((uVar1 & 0x3fe000) - 0x4000 >> 0xd) {
    case 0:
      local_40[0] = 0x6c1b;
      break;
    default:
      goto switchD_710016b3d8_caseD_1;
    case 2:
      uVar1 = uVar1 & 0x3ffe00;
      if (uVar1 == 0x8600) {
        local_40[0] = 0x6838;
      }
      else if (uVar1 == 0x8400) {
        local_40[0] = 0x6c0e;
      }
      else {
        if (uVar1 != 0x8200) goto switchD_710016b3d8_caseD_5;
        local_40[0] = 0x6c1c;
      }
      break;
    case 5:
      goto switchD_710016b3d8_caseD_5;
    case 7:
      local_40[0] = 0x6422;
    }
  }
  else {
switchD_710016b3d8_caseD_1:
    local_40[0] = 0x10c08;
  }
LAB_710016b3f0:
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_40 | 4));
  local_28[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)local_40 | 4),(Result *)local_28);
  FUN_71000bce50(param_1,local_40);
  return;
}

