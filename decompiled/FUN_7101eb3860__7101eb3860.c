// addr:      7101eb3860
// offset:    0x1eb3860
// name:      FUN_7101eb3860
// mangled:   
// signature: undefined __cdecl FUN_7101eb3860(long param_1)


void FUN_7101eb3860(long param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  char *pcVar5;
  
  uVar1 = *(int *)(*(long *)(param_1 + 0x328) + 0x30) - 1;
  if (uVar1 < 7) {
    pcVar5 = (&PTR_s_submenu_draw_in_71050b2a30)[(int)uVar1];
  }
  else {
    pcVar5 = "submenu_material_in";
  }
  lVar2 = *(long *)(**(long **)(param_1 + 8) + 0x10);
  if (*(int *)(param_1 + 0x270) == 1) {
    lVar2 = *(long *)(lVar2 + 8);
    if ((((lVar2 == 0) ||
         (plVar3 = (long *)FUN_71037964b0(lVar2,(long)pcVar5), plVar3 == (long *)0x0)) ||
        (uVar4 = (**(code **)(*plVar3 + 0x138))(), (uVar4 & 1) != 0)) &&
       (((*(char *)(*(long *)(param_1 + 0x358) + 0x1ec) == '\0' ||
         (plVar3 = *(long **)(*(long *)(*(long *)(param_1 + 0x358) + 0x1d0) + 8),
         plVar3 == (long *)0x0)) || (uVar4 = (**(code **)(*plVar3 + 0x138))(), (uVar4 & 1) != 0))))
    {
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined8 *)(param_1 + 0x18) = 0;
    }
  }
  else {
    FUN_7103778300(0x3f800000,lVar2,(long)pcVar5);
    FUN_7101ec5050(*(long *)(param_1 + 0x318),1);
    if (*(char *)(*(long *)(param_1 + 0x358) + 0x1ec) != '\0') {
      FUN_710377aee0(0x3f800000,*(long *)(param_1 + 0x358) + 0x1c8);
    }
    *(undefined4 *)(param_1 + 0x270) = 1;
  }
  return;
}

