// addr:      7101db1910
// offset:    0x1db1910
// name:      FUN_7101db1910
// mangled:   
// signature: undefined8 __cdecl FUN_7101db1910(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


undefined8
FUN_7101db1910(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
              long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined **local_40;
  long *local_38;
  
  if ((*(uint *)(param_1 + 0x428) | 1) != 3) {
    if (*(char *)(param_1 + 0x44d) == '\0') {
      if (*(int *)(*(long *)(param_1 + 0x88) + 0x25c) != 0x1e) {
        lVar3 = *(long *)(*(long *)**(undefined8 **)(param_1 + 0x20) + 0x600);
        if (*(char *)(lVar3 + 0x4aa) == '\0') {
          return 0;
        }
        if ((*(byte *)(lVar3 + 0x1c4) >> 1 & 1) == 0) {
          return 0;
        }
        FUN_7103776ad0(&local_40,param_1 + 0x50,(long ****)"set_parts_btn_rule",param_3,param_4,
                       param_5,param_6,param_7,param_8);
        plVar1 = local_38;
        plVar4 = (long *)*local_38;
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x238))(plVar4,0);
          (**(code **)(*plVar4 + 0x228))(plVar4,0);
          uVar2 = (**(code **)(*plVar4 + 0x200))(plVar4);
          if (((uVar2 & 1) != 0) &&
             (uVar2 = (**(code **)(*plVar4 + 0x210))(plVar4), (uVar2 & 1) != 0)) {
            (**(code **)(*plVar4 + 0x238))(plVar4,1);
            (**(code **)(*plVar4 + 0x3c8))(plVar4);
            (**(code **)(*plVar4 + 0x10))(plVar4);
            (**(code **)(*plVar4 + 0x18))(plVar4);
          }
        }
        local_40 = &PTR_FUN_710523d9c8;
        local_38 = (long *)0x0;
        if (plVar1 != (long *)0x0) {
          FUN_710392eb40((ulong)plVar1);
        }
      }
      *(undefined1 *)(param_1 + 0x44d) = 1;
      return 0;
    }
    FUN_7103776ad0(&local_40,param_1 + 0x50,(long ****)"set_parts_btn_rule",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    plVar1 = local_38;
    if ((long *)*local_38 == (long *)0x0) {
      uVar2 = 1;
    }
    else {
      uVar2 = (**(code **)(*(long *)*local_38 + 0x3b8))();
      uVar2 = uVar2 & 0xffffffff;
    }
    local_40 = &PTR_FUN_710523d9c8;
    local_38 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar1);
    }
    if ((uVar2 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x44d) = 0;
      return 1;
    }
  }
  return 0;
}

