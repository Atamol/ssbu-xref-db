// addr:      7101ca3c60
// offset:    0x1ca3c60
// name:      FUN_7101ca3c60
// mangled:   
// signature: undefined __cdecl FUN_7101ca3c60(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101ca3c60(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  byte *pbVar2;
  byte *pbVar3;
  bool bVar4;
  undefined2 uVar5;
  long *plVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  char *pcVar10;
  undefined8 extraout_x1;
  undefined8 uVar11;
  long ****pppplVar12;
  long lVar13;
  byte ****ppppbVar14;
  byte ****ppppbVar15;
  undefined **local_70;
  ulong local_68;
  undefined **local_60;
  long *local_58;
  
  FUN_71032d6810(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  lVar13 = *(long *)(param_1 + 0x20);
  *(undefined4 *)(lVar13 + 0x268) = 0;
  if (((DAT_71053144d8 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_71053144d8), iVar7 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  uVar11 = DAT_7105306970;
  pcVar1 = (char *)(lVar13 + 0x242);
  *(undefined2 *)(lVar13 + 0x24a) = (undefined2)DAT_7105306978;
  *(undefined8 *)pcVar1 = uVar11;
  uVar5 = (undefined2)DAT_7105306978;
  *(undefined8 *)(lVar13 + 0x24c) = DAT_7105306970;
  *(undefined2 *)(lVar13 + 0x254) = uVar5;
  if (*(char *)(lVar13 + 0x24d) == '\0') {
    *(undefined4 *)(lVar13 + 0x24c) = 0x2010200;
    *(undefined1 *)(lVar13 + 0x252) = 1;
    *(undefined2 *)(lVar13 + 0x250) = 0x202;
    *(undefined2 *)(lVar13 + 0x254) = 0x21e;
  }
  FUN_7103771d60(&local_60,*(long *)(lVar13 + 0x128),(long ****)0x1,param_4,param_5,param_6,param_7,
                 param_8);
  plVar6 = local_58;
  if (*local_58 == 0) {
    ppppbVar15 = (byte ****)&DAT_7104867c2e;
  }
  else {
    ppppbVar15 = *(byte *****)(*local_58 + 0x88);
  }
  local_60 = &PTR_FUN_710523d9c8;
  local_58 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar6);
  }
  uVar11 = 0;
  FUN_7103771d60(&local_60,*(long *)(lVar13 + 0x128),(long ****)0x0,param_4,param_5,param_6,param_7,
                 param_8);
  plVar6 = local_58;
  if (*local_58 == 0) {
    ppppbVar14 = (byte ****)&DAT_7104867c2e;
  }
  else {
    ppppbVar14 = *(byte *****)(*local_58 + 0x88);
  }
  local_60 = &PTR_FUN_710523d9c8;
  bVar4 = local_58 != (long *)0x0;
  local_58 = (long *)0;
  if (bVar4) {
    local_58 = (long *)0x0;
    local_60 = &PTR_FUN_710523d9c8;
    FUN_710392eb40((ulong)plVar6);
  }
  if (*pcVar1 == '\0') {
    FUN_7103776640(&local_60,lVar13 + 0x118,ppppbVar15,uVar11,param_4,param_5,param_6,param_7,
                   param_8);
    plVar6 = local_58;
    FUN_7103778300(0x3f800000,(long)local_58,0x710438cb9e);
    local_60 = &PTR_FUN_710523d988;
    local_58 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      uVar8 = *(ulong *)((long)plVar6 + 0x18);
      *(undefined ***)((long)plVar6 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)((long)plVar6 + 0x18) = 0;
      if (uVar8 != 0) {
        FUN_710392eb40(uVar8);
      }
      FUN_710392eb40((ulong)plVar6);
    }
    FUN_7103776640(&local_60,lVar13 + 0x118,ppppbVar14,uVar11,param_4,param_5,param_6,param_7,
                   param_8);
    pcVar10 = "selected";
  }
  else {
    FUN_7103776640(&local_60,lVar13 + 0x118,ppppbVar15,uVar11,param_4,param_5,param_6,param_7,
                   param_8);
    plVar6 = local_58;
    FUN_7103778300(0x3f800000,(long)local_58,0x710430865f);
    local_60 = &PTR_FUN_710523d988;
    local_58 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      uVar8 = *(ulong *)((long)plVar6 + 0x18);
      *(undefined ***)((long)plVar6 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)((long)plVar6 + 0x18) = 0;
      if (uVar8 != 0) {
        FUN_710392eb40(uVar8);
      }
      FUN_710392eb40((ulong)plVar6);
    }
    FUN_7103776640(&local_60,lVar13 + 0x118,ppppbVar14,uVar11,param_4,param_5,param_6,param_7,
                   param_8);
    pcVar10 = "not_selected";
  }
  plVar6 = local_58;
  FUN_7103778300(0x3f800000,(long)local_58,(long)pcVar10);
  local_60 = &PTR_FUN_710523d988;
  local_58 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    uVar8 = *(ulong *)((long)plVar6 + 0x18);
    *(undefined ***)((long)plVar6 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)plVar6 + 0x18) = 0;
    if (uVar8 != 0) {
      FUN_710392eb40(uVar8);
    }
    FUN_710392eb40((ulong)plVar6);
  }
  pppplVar12 = (long ****)0x1;
  *(uint *)(lVar13 + 600) = (uint)*(byte *)(lVar13 + 0x242);
  FUN_7103771a80((long *)(lVar13 + 0x128),(uint)*(byte *)(lVar13 + 0x242),1);
  FUN_7101c9e110(lVar13,*(char *)(lVar13 + 0x244),pppplVar12,param_4,param_5,param_6,param_7,param_8
                );
  pbVar3 = *(byte **)(lVar13 + 0x188);
  for (pbVar2 = *(byte **)(lVar13 + 0x180); pbVar2 != pbVar3; pbVar2 = pbVar2 + 1) {
    FUN_7101c9eb90(lVar13,(long)pcVar1,pbVar2,param_4,param_5,param_6,param_7,param_8);
  }
  pppplVar12 = (long ****)0x1;
  FUN_7101c9f350(lVar13,*(ushort *)(lVar13 + 0x24a),1,param_4,param_5,param_6,param_7,param_8);
  if (*(char *)(lVar13 + 0x242) == '\0') {
    FUN_7101ca1ee0(lVar13,0x7104454b34,pppplVar12,param_4,param_5,param_6,param_7,param_8);
    FUN_7103776910(&local_60,lVar13 + 0x118,(long ****)"set_txt_help",pppplVar12,param_4,param_5,
                   param_6,param_7,param_8);
    FUN_710377a120((long)&local_60,"mnu_anyone_rule_set_help_off",pppplVar12,param_4,param_5,param_6
                   ,param_7,param_8);
    plVar6 = local_58;
    local_60 = &PTR_FUN_710523d9a8;
    local_58 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar6);
    }
    (**(code **)(**(long **)(lVar13 + 0x130) + 0x60))(*(long **)(lVar13 + 0x130),0);
    (**(code **)(**(long **)(lVar13 + 0x130) + 0x70))(*(long **)(lVar13 + 0x130),0);
    FUN_7101ca10c0(lVar13,0,pppplVar12,param_4,param_5,param_6,param_7,param_8);
  }
  else {
    FUN_7101ca1ee0(lVar13,0x71042e72ce,pppplVar12,param_4,param_5,param_6,param_7,param_8);
    FUN_7103776910(&local_60,lVar13 + 0x118,(long ****)"set_txt_help",pppplVar12,param_4,param_5,
                   param_6,param_7,param_8);
    FUN_710377a120((long)&local_60,"mnu_anyone_rule_set_help_on",pppplVar12,param_4,param_5,param_6,
                   param_7,param_8);
    plVar6 = local_58;
    local_60 = &PTR_FUN_710523d9a8;
    local_58 = (long *)0x0;
    if (plVar6 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar6);
    }
    FUN_7101c9e110(lVar13,*(char *)(lVar13 + 0x24e),pppplVar12,param_4,param_5,param_6,param_7,
                   param_8);
    FUN_7101ca10c0(lVar13,1,pppplVar12,param_4,param_5,param_6,param_7,param_8);
    FUN_710376b960(*(long *)(lVar13 + 0x130));
    (**(code **)(**(long **)(lVar13 + 0x130) + 0x60))(*(long **)(lVar13 + 0x130),1);
  }
  FUN_7103776640(&local_60,lVar13 + 0x118,(byte ****)"set_btn_decide",pppplVar12,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_7103776390(&local_70,&local_60,pppplVar12,param_4,param_5,param_6,param_7,param_8);
  FUN_710337d360(&local_70,extraout_x1,(undefined **)pppplVar12,param_4,param_5,param_6,param_7,
                 param_8);
  uVar8 = local_68;
  local_70 = &PTR_FUN_710523d988;
  local_68 = 0;
  if (uVar8 != 0) {
    uVar9 = *(ulong *)(uVar8 + 0x18);
    *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar8 + 0x18) = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    FUN_710392eb40(uVar8);
  }
  plVar6 = local_58;
  if (1 < *(int *)(lVar13 + 0x108) - 1U) {
    if (0x12 < *(uint *)(lVar13 + 0x104)) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined4 *)(lVar13 + (long)(int)*(uint *)(lVar13 + 0x104) * 4 + 0xb8) = 1;
  }
  local_60 = &PTR_FUN_710523d988;
  local_58 = (long *)0x0;
  if (plVar6 != (long *)0x0) {
    uVar8 = *(ulong *)((long)plVar6 + 0x18);
    *(undefined ***)((long)plVar6 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)plVar6 + 0x18) = 0;
    if (uVar8 != 0) {
      FUN_710392eb40(uVar8);
    }
    FUN_710392eb40((ulong)plVar6);
  }
  return;
}

