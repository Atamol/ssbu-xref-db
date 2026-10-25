// addr:      710019cef0
// offset:    0x19cef0
// name:      FUN_710019cef0
// mangled:   
// signature: undefined __cdecl FUN_710019cef0(int * param_1, long * param_2, long * param_3)


void FUN_710019cef0(int *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  int local_48 [4];
  undefined4 local_38 [2];
  
  if ((int)param_3[1] == 0) {
switchD_710019cf38_default:
    local_48[0] = 0x2c03;
    goto LAB_710019d070;
  }
  switch(*(undefined1 *)*param_3) {
  case 1:
    uVar1 = 0;
    goto LAB_710019d058;
  case 2:
    uVar4 = 0;
    goto LAB_710019d068;
  case 3:
    FUN_710019d0b0(param_2,(long)param_3);
    break;
  case 4:
    lVar2 = FUN_7100161fa0((long)DAT_71052add68);
    if (*(long *)(lVar2 + 0x98) != 0) {
      lVar2 = param_3[2];
      plVar3 = (long *)FUN_7100161fa0((long)DAT_71052add68);
      lVar2 = (**(code **)(*plVar3 + 0x78))(plVar3,lVar2);
      if (lVar2 == 0) {
        plVar3 = (long *)FUN_7100161fa0((long)DAT_71052add68);
        lVar2 = (**(code **)(*plVar3 + 0x58))(plVar3,param_3 + 3);
        if (lVar2 == 0) break;
      }
      if (*(char *)(*(long *)(lVar2 + 0xa8) + 0x7c) != '\0') {
        *(undefined1 *)(*(long *)(lVar2 + 0xa8) + 0x7c) = 0;
      }
    }
    break;
  case 5:
    lVar2 = FUN_7100161fa0((long)DAT_71052add68);
    if (*(long *)(lVar2 + 0x98) != 0) {
      uVar1 = FUN_71000bb9a0((uint *)(*param_3 + 4));
      plVar3 = (long *)FUN_7100161fa0((long)DAT_71052add68);
      lVar2 = (**(code **)(*plVar3 + 0x58))(plVar3,param_3 + 3);
      plVar3 = (long *)FUN_7100193a40(DAT_71052adfc0);
      FUN_71001ae030(plVar3,uVar1);
      if ((lVar2 != 0) && (0x1f < *(byte *)(lVar2 + 0x38))) {
        *(undefined8 *)(lVar2 + 0x88) = *DAT_71052add68;
      }
    }
    break;
  case 6:
    uVar1 = 1;
LAB_710019d058:
    FUN_710019d240(param_2,param_3,uVar1);
    break;
  case 7:
    uVar4 = 1;
LAB_710019d068:
    FUN_710019e200(param_2,param_3,uVar4);
    break;
  default:
    goto switchD_710019cf38_default;
  }
  local_48[0] = 0;
LAB_710019d070:
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_48 | 4));
  local_38[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_38);
  FUN_71000bce50(param_1,local_48);
  return;
}

