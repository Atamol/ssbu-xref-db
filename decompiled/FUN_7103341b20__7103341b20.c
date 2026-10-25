// addr:      7103341b20
// offset:    0x3341b20
// name:      FUN_7103341b20
// mangled:   
// signature: undefined __cdecl FUN_7103341b20(ulong param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7103341b20(ulong param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  long lVar2;
  undefined8 local_98;
  ulong local_90;
  long local_88;
  long ***local_80;
  byte local_78 [64];
  undefined8 local_38;
  ulong local_30;
  long local_28;
  
  if ((param_1 & 0xff00000000000000) != 0x800000000000000) {
    return;
  }
  if ((param_1 & 0xffffffffff) == 0) {
    return;
  }
  lVar2 = *(long *)(DAT_710532f730 + 8);
  local_30 = FUN_710392e290(0x10,0x200,param_3,param_4,param_5,param_6,param_7,param_8);
  if (local_30 == 0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_38 = (ulong)local_38._4_4_ << 0x20;
      local_80 = (long ***)&DAT_00000200;
      param_3 = &local_80;
      uVar1 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_38);
      if (((uVar1 & 1) != 0) &&
         (local_30 = FUN_710392e290(0x10,0x200,param_3,param_4,param_5,param_6,param_7,param_8),
         local_30 != 0)) goto LAB_7103341bac;
    }
    local_30 = 0;
  }
LAB_7103341bac:
  local_28 = local_30 + 0x200;
  local_38 = local_30;
  uVar1 = FUN_71032b6c10(*(long *)(lVar2 + 0x1b8),param_1);
  if ((int)uVar1 == -1) {
    local_78[0] = 0;
    local_80 = (long ***)0x0;
  }
  else {
    FUN_71003a4ca0((uint *)&local_80,"tip_title_%04d",uVar1 & 0xffffffff,param_3,param_4,param_5,
                   param_6,param_7,param_8);
  }
  FUN_71037ab310(&local_38,local_78,param_3,param_4,param_5,param_6,param_7,param_8);
  FUN_71033793a0("FOT-RodinNTLGPro-B64",&local_38,param_3,param_4,param_5,param_6,param_7,param_8);
  local_90 = FUN_710392e290(0x10,0x200,param_3,param_4,param_5,param_6,param_7,param_8);
  if (local_90 == 0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_98 = (ulong)local_98._4_4_ << 0x20;
      local_80 = (long ***)&DAT_00000200;
      param_3 = &local_80;
      uVar1 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_98);
      if (((uVar1 & 1) != 0) &&
         (local_90 = FUN_710392e290(0x10,0x200,param_3,param_4,param_5,param_6,param_7,param_8),
         local_90 != 0)) goto LAB_7103341c60;
    }
    local_90 = 0;
  }
LAB_7103341c60:
  local_88 = local_90 + 0x200;
  local_98 = local_90;
  uVar1 = FUN_71032b6c10(*(long *)(lVar2 + 0x1b8),param_1);
  if ((int)uVar1 == -1) {
    local_78[0] = 0;
    local_80 = (long ***)0x0;
  }
  else {
    FUN_71003a4ca0((uint *)&local_80,"tip_text_%04d",uVar1 & 0xffffffff,param_3,param_4,param_5,
                   param_6,param_7,param_8);
  }
  FUN_71037ab310(&local_98,local_78,param_3,param_4,param_5,param_6,param_7,param_8);
  FUN_71033793a0("FOT-RodinNTLGPro-B64",&local_98,param_3,param_4,param_5,param_6,param_7,param_8);
  if (local_98 != 0) {
    local_90 = local_98;
    FUN_710392eb40(local_98);
  }
  if (local_38 != 0) {
    local_30 = local_38;
    FUN_710392eb40(local_38);
  }
  return;
}

