// addr:      7101baf3d0
// offset:    0x1baf3d0
// name:      FUN_7101baf3d0
// mangled:   
// signature: undefined __cdecl FUN_7101baf3d0(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101baf3d0(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined **local_30;
  ulong local_28;
  
  plVar4 = (long *)**(undefined8 **)(param_1 + 0xd8);
  if (*(int *)(param_1 + 0xcc) == 0) {
    uVar3 = 0x1000;
    FUN_7103775dc0(plVar4,0,(long ****)&DAT_00001000,param_4,param_5,param_6,param_7,param_8);
    FUN_710376b960(*(long *)(param_1 + 0xf0));
    *(undefined8 *)(param_1 + 0x138) = *(undefined8 *)(param_1 + 0x130);
    FUN_7103776640(&local_30,**(long **)(param_1 + 0xd8) + 8,(byte ****)"set_parts_scr_item_00",
                   uVar3,param_4,param_5,param_6,param_7,param_8);
    FUN_7101bb0300(param_1,(long)&local_30,uVar3,param_4,param_5,param_6,param_7,param_8);
    uVar1 = local_28;
    local_30 = &PTR_FUN_710523d988;
    local_28 = 0;
    if (uVar1 != 0) {
      uVar2 = *(ulong *)(uVar1 + 0x18);
      *(undefined ***)(uVar1 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar1 + 0x18) = 0;
      if (uVar2 != 0) {
        FUN_710392eb40(uVar2);
      }
      FUN_710392eb40(uVar1);
    }
    FUN_7103778300(0x3f800000,plVar4[2],0x7104421055);
    *(undefined1 *)(*DAT_7105329f50 + 1) = 0;
  }
  else if (((*(long *)(plVar4[2] + 8) == 0) ||
           (plVar4 = (long *)FUN_71037964b0(*(long *)(plVar4[2] + 8),0x7104421055),
           plVar4 == (long *)0x0)) || (uVar1 = (**(code **)(*plVar4 + 0x138))(), (uVar1 & 1) != 0))
  {
    if (0x12 < *(uint *)(param_1 + 0xc4)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0xc4) * 4 + 0x78) = 2;
  }
  return;
}

