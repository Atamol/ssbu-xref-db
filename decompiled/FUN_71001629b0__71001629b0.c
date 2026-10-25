// addr:      71001629b0
// offset:    0x1629b0
// name:      FUN_71001629b0
// mangled:   
// signature: undefined __cdecl FUN_71001629b0(int * param_1, long param_2, long param_3, uint param_4, undefined4 param_5, uint param_6, byte param_7)


void FUN_71001629b0(int *param_1,long param_2,long param_3,uint param_4,undefined4 param_5,
                   uint param_6,byte param_7)

{
  long lVar1;
  int *piVar2;
  int local_70 [4];
  int local_60 [4];
  undefined4 local_48 [2];
  
  piVar2 = local_70;
  if (*(long *)(param_2 + 0x4d0) == 0) {
    if (param_3 == 0) {
      local_60[0] = 0x10c07;
      goto LAB_71001629e0;
    }
    if (DAT_71052accf8 != 0) {
      lVar1 = FUN_71000bc710(DAT_71052accf8,0);
      FUN_71000bc730(lVar1,"SendThreadStream buffer num");
    }
    FUN_7100164df0(local_60,param_2,"Pia SendThreadStream",param_5,param_4,param_6,param_7 & 1);
    if (local_60[0] == 0) {
      if (*(long *)(param_2 + 0xb8) != 0) {
        FUN_7100163170(*(long *)(param_2 + 0xb8),param_3);
      }
      *(long *)(param_2 + 0x4d0) = param_3;
      *(undefined4 *)(param_2 + 0x4d8) = 0;
      *(undefined8 *)(param_2 + 0x4e0) = 0;
      local_70[0] = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_70 | 4));
      local_48[0] = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)local_70 | 4),(Result *)local_48);
      goto LAB_7100162a08;
    }
  }
  else {
    local_60[0] = 0x10c02;
LAB_71001629e0:
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_60 | 4));
    local_70[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)local_60 | 4),(Result *)local_70);
  }
  piVar2 = local_60;
LAB_7100162a08:
  FUN_71000bce50(param_1,piVar2);
  return;
}

