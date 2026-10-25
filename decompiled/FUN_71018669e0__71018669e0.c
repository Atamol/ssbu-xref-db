// addr:      71018669e0
// offset:    0x18669e0
// name:      FUN_71018669e0
// mangled:   
// signature: undefined __cdecl FUN_71018669e0(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71018669e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined **local_40;
  ulong local_38;
  
  lVar5 = *(long *)(*(long *)(param_1 + 0x138) + 0x80);
  FUN_7103776640(&local_40,**(long **)(lVar5 + 0x80) + 8,(byte ****)"set_parts_panel_%02d",
                 (ulong)*(uint *)(lVar5 + 0x10),param_4,param_5,param_6,param_7,param_8);
  uVar1 = local_38;
  if ((*(long *)(local_38 + 8) == 0) ||
     (plVar2 = (long *)FUN_71037964b0(*(long *)(local_38 + 8),0x7104453107), plVar2 == (long *)0x0))
  {
    uVar3 = 1;
  }
  else {
    uVar3 = (**(code **)(*plVar2 + 0x138))();
    uVar3 = uVar3 & 0xffffffff;
  }
  local_40 = &PTR_FUN_710523d988;
  local_38 = 0;
  if (uVar1 != 0) {
    uVar4 = *(ulong *)(uVar1 + 0x18);
    *(undefined ***)(uVar1 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar1 + 0x18) = 0;
    if (uVar4 != 0) {
      FUN_710392eb40(uVar4);
    }
    FUN_710392eb40(uVar1);
  }
  if ((uVar3 & 1) != 0) {
    lVar5 = *(long *)(*(long *)(param_1 + 0x138) + 0x80);
    *(undefined4 *)(lVar5 + 0xbd4) = *(undefined4 *)(lVar5 + 0x20);
    if (0x12 < *(uint *)(param_1 + 0x11c)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x11c) * 4 + 0xd0) = 4;
  }
  return;
}

