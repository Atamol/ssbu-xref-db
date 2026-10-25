// addr:      7101e564a0
// offset:    0x1e564a0
// name:      FUN_7101e564a0
// mangled:   
// signature: undefined __cdecl FUN_7101e564a0(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, long param_6, ulong param_7, ulong param_8)


void FUN_7101e564a0(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,long param_6,ulong param_7,ulong param_8)

{
  ulong uVar1;
  long *plVar2;
  int iVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  long lVar4;
  char *pcVar5;
  uint uVar6;
  undefined **local_40;
  ulong local_38;
  
  if (DAT_7105325ed0 == 0) {
    FUN_7101e560c0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return;
  }
  *(undefined1 *)(*(long *)(*(long *)**(undefined8 **)(param_1 + 0x10) + 0x600) + 0x4aa) = 1;
  *(undefined2 *)(param_1 + 0x18c) = 0x101;
  FUN_7101e55e00(param_1);
  FUN_7101e54b40(param_1,extraout_x1,param_3,param_4,param_5,param_6,param_7,param_8);
  FUN_7101e54cc0(param_1,extraout_x1_00,param_3,param_4,param_5,param_6,param_7,param_8);
  FUN_7101e55c60(param_1,extraout_x1_01,param_3,param_4,param_5,param_6,param_7,param_8);
  (**(code **)(**(long **)(param_1 + 0x40) + 0x60))(*(long **)(param_1 + 0x40),1);
  (**(code **)(**(long **)(param_1 + 0x40) + 0x70))(*(long **)(param_1 + 0x40),0);
  FUN_710376b960(*(long *)(param_1 + 0x40));
  FUN_7103776910(&local_40,param_1 + 0x18,(long ****)"set_rep_map",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  uVar1 = local_38;
  if (((*(long **)(local_38 + 8) != (long *)0x0) && (DAT_710593bc38 != 0)) &&
     (lVar4 = *(long *)(*(long *)(DAT_710593bc38 + 8) + 0x78), lVar4 != 0)) {
    FUN_710379e9c0(*(long **)(local_38 + 8),lVar4,0);
  }
  local_40 = &PTR_FUN_710523d9a8;
  local_38 = 0;
  if (uVar1 != 0) {
    FUN_710392eb40(uVar1);
  }
  switch(DAT_7105325ed0) {
  case 1:
    plVar2 = (long *)(param_1 + 0x30);
    goto LAB_7101e5660c;
  case 2:
    plVar2 = (long *)(param_1 + 0x30);
    iVar3 = 1;
    break;
  case 3:
    plVar2 = (long *)(param_1 + 0x28);
    goto LAB_7101e56600;
  case 4:
    plVar2 = (long *)(param_1 + 0x28);
    iVar3 = 4;
    break;
  case 5:
    plVar2 = (long *)(param_1 + 0x28);
    iVar3 = 5;
    break;
  case 6:
    plVar2 = (long *)(param_1 + 0x38);
LAB_7101e5660c:
    iVar3 = 0;
    break;
  case 7:
    plVar2 = (long *)(param_1 + 0x38);
    iVar3 = 1;
    break;
  case 8:
    plVar2 = (long *)(param_1 + 0x38);
LAB_7101e56600:
    iVar3 = 2;
    break;
  case 9:
    plVar2 = (long *)(param_1 + 0x28);
    iVar3 = 3;
    break;
  default:
    goto switchD_7101e565ac_default;
  }
  FUN_7103771a80(plVar2,iVar3,1);
switchD_7101e565ac_default:
  FUN_7103778760(*(long *)(param_1 + 0x20),0x7104421055);
  uVar6 = DAT_7105325ed0;
  switch(DAT_7105325ed0) {
  case 1:
  case 2:
    if (0x12 < *(uint *)(param_1 + 0x16c)) {
LAB_7101e567c8:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x16c) * 4 + 0x120) = 5;
    FUN_7103771a80((long *)(param_1 + 0x28),0,1);
    lVar4 = *(long *)(param_1 + 0x20);
    pcVar5 = "menu_switch_edit";
    goto LAB_7101e56730;
  case 3:
    if (0x12 < *(uint *)(param_1 + 0x16c)) goto LAB_7101e567c8;
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x16c) * 4 + 0x120) = 3;
    lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    if ((lVar4 != 0) && (plVar2 = (long *)FUN_71037964b0(lVar4,0x7104412f1d), plVar2 != (long *)0x0)
       ) {
      (**(code **)(*plVar2 + 0x1a0))(0);
    }
    break;
  case 4:
  case 5:
  case 9:
    lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    if ((lVar4 != 0) && (plVar2 = (long *)FUN_71037964b0(lVar4,0x7104412f1d), plVar2 != (long *)0x0)
       ) {
      (**(code **)(*plVar2 + 0x1a0))(0);
      uVar6 = DAT_7105325ed0;
    }
    *(undefined1 *)(param_1 + 0x180) = 1;
    *(undefined4 *)(param_1 + 0x188) = 3;
    *(uint *)(param_1 + 0x184) = uVar6;
    if (0x12 < *(uint *)(param_1 + 0x16c)) goto LAB_7101e567c8;
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x16c) * 4 + 0x120) = 0;
    break;
  case 6:
  case 7:
  case 8:
    if (0x12 < *(uint *)(param_1 + 0x16c)) goto LAB_7101e567c8;
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x16c) * 4 + 0x120) = 4;
    FUN_7103771a80((long *)(param_1 + 0x28),1,1);
    lVar4 = *(long *)(param_1 + 0x20);
    pcVar5 = "menu_switch_spirits";
LAB_7101e56730:
    FUN_7103778760(lVar4,(long)pcVar5);
  }
  FUN_7103775dc0((long *)**(undefined8 **)(param_1 + 0x10),0,(long ****)0x1001,param_4,param_5,
                 param_6,param_7,param_8);
  if ((9 < DAT_7105325ed0) || ((1 << (ulong)(DAT_7105325ed0 & 0x1f) & 0x230U) == 0)) {
    DAT_7105325ed0 = 0;
  }
  return;
}

