// addr:      7101992150
// offset:    0x1992150
// name:      FUN_7101992150
// mangled:   
// signature: undefined __cdecl FUN_7101992150(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101992150(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  code *pcVar5;
  ulong uVar6;
  long lVar7;
  uint local_78 [2];
  undefined1 local_70;
  
  lVar7 = *(long *)(param_1 + 0x80);
  FUN_7101991ee0((long *)(lVar7 + 0x18));
  if (*(long *)(lVar7 + 0x18) != 0) {
    pcVar5 = *(code **)(lVar7 + 0x20);
    uVar6 = *(ulong *)(lVar7 + 0x28) & 1;
    if (uVar6 != 0 || pcVar5 != (code *)0x0) {
      if (uVar6 != 0) {
        pcVar5 = *(code **)(pcVar5 + *(long *)(*(long *)(lVar7 + 0x18) +
                                              ((long)*(ulong *)(lVar7 + 0x28) >> 1)));
      }
      (*pcVar5)();
    }
  }
  *(int *)(lVar7 + 0x134) = *(int *)(lVar7 + 0x134) + 1;
  if (3 < *(int *)(lVar7 + 0x1d8) - 1U) {
    return;
  }
  lVar1 = lVar7 + 0x1b0;
  switch(*(int *)(lVar7 + 0x1d8)) {
  default:
    uVar4 = *(uint *)(lVar7 + 0x1e0);
    if (uVar4 < 0x1e) goto LAB_71019922dc;
    iVar2 = 0;
    if (*(int *)(lVar7 + 0x1e4) + 1U < 4) {
      iVar2 = *(int *)(lVar7 + 0x1e4) + 1;
    }
    *(undefined4 *)(lVar7 + 0x1e0) = 0;
    *(int *)(lVar7 + 0x1e4) = iVar2;
    local_70 = 0;
    local_78[0] = 0;
    local_78[1] = 0;
    FUN_710062dc20(local_78,"mnu_amiibo_journey_online_mark_%d");
    if (*(int *)(lVar7 + 0x1d8) == 3) {
      pcVar3 = "mnu_amiibo_journey_newsletter";
LAB_71019922c8:
      FUN_710377a280(lVar1,(byte *)pcVar3,2);
    }
    else if (*(int *)(lVar7 + 0x1d8) == 1) {
      pcVar3 = "mnu_amiibo_journey_wait";
      goto LAB_71019922c8;
    }
    uVar4 = *(uint *)(lVar7 + 0x1e0);
    goto LAB_71019922dc;
  case 2:
    uVar4 = *(uint *)(lVar7 + 0x1e0);
    if (uVar4 < 300) goto LAB_71019922dc;
    *(undefined4 *)(lVar7 + 0x1e0) = 0;
    *(undefined4 *)(lVar7 + 0x1d8) = 0;
    FUN_7101991290(lVar1,3,param_3,param_4,param_5,param_6,param_7,param_8);
    break;
  case 4:
    uVar4 = *(uint *)(lVar7 + 0x1e0);
    if (uVar4 < 600) goto LAB_71019922dc;
    *(undefined4 *)(lVar7 + 0x1e0) = 0;
    *(undefined4 *)(lVar7 + 0x1d8) = 0;
    FUN_7101991290(lVar1,*(undefined4 *)(lVar7 + 0x1dc),param_3,param_4,param_5,param_6,param_7,
                   param_8);
    *(undefined4 *)(lVar7 + 0x1dc) = 0;
  }
  uVar4 = *(uint *)(lVar7 + 0x1e0);
LAB_71019922dc:
  *(uint *)(lVar7 + 0x1e0) = uVar4 + 1;
  return;
}

