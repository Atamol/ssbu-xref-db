// addr:      7101e5cdb0
// offset:    0x1e5cdb0
// name:      FUN_7101e5cdb0
// mangled:   
// signature: undefined __cdecl FUN_7101e5cdb0(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101e5cdb0(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined **ppuVar1;
  undefined ***pppuVar2;
  ulong uVar3;
  long ****pppplVar4;
  long *plVar5;
  undefined **local_48;
  undefined **local_40;
  long ***local_38;
  undefined4 local_24;
  
  FUN_71037780e0(&local_48,param_1 + 0x1f8,(long ****)"menu_out",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  pppuVar2 = (undefined ***)
             FUN_710392e290(0x10,0x10,param_3,param_4,param_5,param_6,param_7,param_8);
  if (pppuVar2 == (undefined ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_24 = 0;
      local_38 = (long ***)&DAT_00000010;
      pppplVar4 = &local_38;
      uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_24);
      if (((uVar3 & 1) != 0) &&
         (pppuVar2 = (undefined ***)
                     FUN_710392e290(0x10,0x10,pppplVar4,param_4,param_5,param_6,param_7,param_8),
         pppuVar2 != (undefined ***)0x0)) goto LAB_7101e5ce34;
    }
    pppuVar2 = (undefined ***)0x0;
  }
LAB_7101e5ce34:
  ppuVar1 = local_40;
  *pppuVar2 = &PTR_FUN_710523d9e8;
  pppuVar2[1] = (undefined **)0x0;
  if (&local_48 != pppuVar2) {
    local_40 = (undefined **)0x0;
    pppuVar2[1] = ppuVar1;
  }
  plVar5 = *(long **)(param_1 + 0x368);
  *(undefined ****)(param_1 + 0x368) = pppuVar2;
  if (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 8))(plVar5);
  }
  ppuVar1 = local_40;
  local_48 = &PTR_FUN_710523d9e8;
  local_40 = (undefined **)0x0;
  if (ppuVar1 != (undefined **)0x0) {
    FUN_710392eb40((ulong)ppuVar1);
  }
  FUN_710377aee0(0x3f800000,*(long *)(param_1 + 0x368));
  *(undefined4 *)(param_1 + 0x1d8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1c8) = 0;
  *(undefined8 *)(param_1 + 0x1d0) = 0;
  *(undefined8 *)(param_1 + 0x1b8) = 0;
  *(undefined8 *)(param_1 + 0x1c0) = 0;
  *(undefined8 *)(param_1 + 0x1a8) = 0;
  *(undefined8 *)(param_1 + 0x1b0) = 0;
  *(undefined8 *)(param_1 + 0x198) = 0;
  *(undefined8 *)(param_1 + 0x1a0) = 0;
  *(undefined8 *)(param_1 + 0x1e4) = 0xffffffff00000000;
  *(undefined8 *)(param_1 + 400) = 0x1400000015;
  *(undefined1 *)(param_1 + 0x1ec) = 0;
  *(undefined8 *)(param_1 + 0x1dc) = 0xffffffff00000001;
  return;
}

