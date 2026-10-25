// addr:      7101c59330
// offset:    0x1c59330
// name:      FUN_7101c59330
// mangled:   
// signature: undefined __cdecl FUN_7101c59330(long param_1, byte param_2, undefined8 param_3, ulong param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101c59330(long param_1,byte param_2,ulong param_3,ulong param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  ulong uVar2;
  undefined ***pppuVar3;
  char *pcVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  undefined **local_70;
  ulong local_68;
  undefined **local_60;
  long *local_58;
  
  iVar5 = (int)param_3;
  pppuVar3 = &local_70;
  uVar10 = param_3 & 0xffffffff;
  if (*(byte *)(param_1 + 9) != (param_2 & 1)) {
    uVar6 = param_4;
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x18),0x71042a30da);
    FUN_71037780e0(&local_60,param_1 + 0x10,(long ****)"txt_disp_on",param_3,uVar6,param_5,param_6,
                   param_7,param_8);
    FUN_71037780e0(&local_70,param_1 + 0x10,(long ****)"txt_disp_off",param_3,uVar6,param_5,param_6,
                   param_7,param_8);
    if ((param_2 & 1) == 0) {
      FUN_710377b140((long)&local_60);
      if ((param_4 & 1) == 0) goto LAB_7101c594d8;
      FUN_710377b140((long)&local_70);
    }
    else {
      FUN_710377b140((long)&local_70);
      plVar12 = local_58;
      if ((param_4 & 1) == 0) {
        pppuVar3 = &local_60;
LAB_7101c594d8:
        FUN_710377aee0(0x3f800000,(long)pppuVar3);
      }
      else {
        plVar11 = (long *)local_58[1];
        if (plVar11 != (long *)0x0) {
          if ((char)local_58[2] != '\0') {
            plVar13 = *(long **)(*local_58 + 0x80);
            plVar1 = (long *)(*local_58 + 0x88);
            if (plVar13 != plVar1) {
              do {
                while( true ) {
                  uVar2 = (**(code **)(*(long *)plVar13[0xd] + 0x148))();
                  if (((uVar2 & 1) != 0) &&
                     (uVar2 = (**(code **)(*plVar11 + 0x120))(plVar11,plVar13[0xd]),
                     (uVar2 & 1) != 0)) {
                    (**(code **)(*(long *)plVar13[0xd] + 0x178))();
                    (**(code **)(*(long *)plVar13[0xd] + 0x140))((long *)plVar13[0xd],0);
                  }
                  plVar7 = (long *)plVar13[1];
                  if ((long *)plVar13[1] == (long *)0x0) break;
                  do {
                    plVar13 = plVar7;
                    plVar7 = (long *)*plVar13;
                  } while ((long *)*plVar13 != (long *)0x0);
LAB_7101c5947c:
                  if (plVar13 == plVar1) goto LAB_7101c59494;
                }
                plVar7 = plVar13 + 2;
                plVar8 = (long *)*plVar7;
                if ((long *)*plVar8 != plVar13) {
                  do {
                    lVar9 = *plVar7;
                    plVar7 = (long *)(lVar9 + 0x10);
                    plVar13 = (long *)*plVar7;
                  } while (*plVar13 != lVar9);
                  goto LAB_7101c5947c;
                }
                plVar13 = plVar8;
              } while (plVar8 != plVar1);
LAB_7101c59494:
              plVar11 = (long *)plVar12[1];
            }
          }
          (**(code **)(*plVar11 + 0x178))(plVar11);
        }
      }
    }
    uVar2 = local_68;
    local_70 = &PTR_FUN_710523d9e8;
    local_68 = 0;
    param_4 = uVar6;
    if (uVar2 != 0) {
      FUN_710392eb40(uVar2);
    }
    plVar12 = local_58;
    local_60 = &PTR_FUN_710523d9e8;
    local_58 = (long *)0x0;
    if (plVar12 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar12);
    }
  }
  *(byte *)(param_1 + 9) = param_2 & 1;
  if (*(int *)(param_1 + 0xd8) == iVar5) goto LAB_7101c59630;
  pcVar4 = "txt_next";
  switch(uVar10) {
  case 0:
    goto switchD_7101c5953c_caseD_0;
  case 1:
    break;
  case 2:
    pcVar4 = "txt_wait_start";
    break;
  case 3:
    FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x18),0x7104412a48);
    FUN_7103776640(&local_60,param_1 + 0x10,(byte ****)"set_parts_txt_start",param_3,param_4,param_5
                   ,param_6,param_7,param_8);
    plVar12 = local_58;
    FUN_7103778300(0x3f800000,(long)local_58,0x71043f0fa9);
    goto LAB_7101c59600;
  case 4:
    pcVar4 = "txt_getready";
    break;
  case 5:
    pcVar4 = "txt_in_battle";
    break;
  case 6:
    pcVar4 = "txt_wait_other";
    break;
  case 7:
    pcVar4 = "txt_wait_rule";
    break;
  default:
    pcVar4 = "";
  }
  FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x18),(long)pcVar4);
switchD_7101c5953c_caseD_0:
  FUN_7103776640(&local_60,param_1 + 0x10,(byte ****)"set_parts_txt_start",param_3,param_4,param_5,
                 param_6,param_7,param_8);
  plVar12 = local_58;
  FUN_7103778760((long)local_58,0x71043f0fa9);
LAB_7101c59600:
  local_60 = &PTR_FUN_710523d988;
  local_58 = (long *)0x0;
  if (plVar12 != (long *)0x0) {
    uVar10 = plVar12[3];
    plVar12[2] = (long)&PTR_FUN_710523d9a8;
    plVar12[3] = 0;
    if (uVar10 != 0) {
      FUN_710392eb40(uVar10);
    }
    FUN_710392eb40((ulong)plVar12);
  }
LAB_7101c59630:
  *(int *)(param_1 + 0xd8) = iVar5;
  return;
}

