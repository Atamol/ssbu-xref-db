// addr:      7101af4340
// offset:    0x1af4340
// name:      FUN_7101af4340
// mangled:   
// signature: undefined __cdecl FUN_7101af4340(long param_1, byte param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101af4340(long param_1,byte param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  uint uVar2;
  int iVar3;
  ushort *puVar4;
  ulong uVar5;
  byte *pbVar6;
  char *pcVar7;
  long lVar8;
  long ****pppplVar9;
  byte ****ppppbVar10;
  long *plVar11;
  undefined **local_1080;
  ulong local_1078;
  undefined **local_1070;
  ulong local_1068;
  undefined **local_1060;
  ulong local_1058;
  undefined **local_1050;
  long *local_1048;
  int local_48 [2];
  
  if ((param_2 & 1) == *(byte *)(param_1 + 0x2258)) {
    return;
  }
  *(byte *)(param_1 + 0x2258) = param_2 & 1;
  lVar8 = **(long **)(param_1 + 0xb8) + 8;
  pppplVar9 = param_3;
  if ((param_2 & 1) == 0) {
    pcVar7 = "footer_btn_out";
    goto LAB_7101af4568;
  }
  if (*(int *)(param_1 + 0x11b0) < 6) {
    if (*(int *)(param_1 + 0x11b0) - 1U < 5) {
      pppplVar9 = (long ****)0x1;
      goto LAB_7101af43c4;
    }
  }
  else {
    pppplVar9 = (long ****)0x2;
LAB_7101af43c4:
    if (((DAT_71053144d8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_71053144d8), iVar3 != 0)) {
      FUN_7101764000();
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    iVar3 = DAT_7105307b68._4_4_;
    FUN_7103771d60(&local_1050,*(long *)(param_1 + 0x2268),pppplVar9,param_4,param_5,param_6,param_7
                   ,param_8);
    plVar11 = local_1048;
    if (*local_1048 == 0) {
      ppppbVar10 = (byte ****)&DAT_7104867c2e;
    }
    else {
      ppppbVar10 = *(byte *****)(*local_1048 + 0x88);
    }
    local_1050 = &PTR_FUN_710523d9c8;
    local_1048 = (long *)0x0;
    if (plVar11 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar11);
    }
    FUN_7103776640(&local_1060,lVar8,ppppbVar10,pppplVar9,param_4,param_5,param_6,param_7,param_8);
    FUN_7103776910(&local_1070,(long)&local_1060,(long ****)"set_txt_guide",pppplVar9,param_4,
                   param_5,param_6,param_7,param_8);
    uVar1 = local_1068;
    plVar11 = *(long **)(local_1068 + 0x10);
    if (plVar11 != (long *)0x0) {
      pbVar6 = (byte *)plVar11[0x1c];
      *(int *)((long)plVar11 + 0x25c) = iVar3;
      if (((pbVar6 != (byte *)0x0) && (*pbVar6 != 0x23)) && (*pbVar6 != 0x40)) {
        puVar4 = (ushort *)FUN_71037a4450((long *)*DAT_710593bc60,pbVar6);
        local_48[0] = *(int *)((long)plVar11 + 0x25c);
        memset(&local_1050,0,0x1000);
        uVar2 = FUN_71037ae170((long)&local_1050,puVar4,local_48);
        pppplVar9 = (long ****)(ulong)uVar2;
        param_4 = (byte ****)0x0;
        FUN_71037a2270(plVar11,(ushort *)&local_1050,uVar2,0);
      }
    }
    local_1070 = &PTR_FUN_710523d9a8;
    local_1068 = 0;
    if (uVar1 != 0) {
      FUN_710392eb40(uVar1);
    }
    FUN_7103776390(&local_1080,&local_1060,pppplVar9,param_4,param_5,param_6,param_7,param_8);
    pcVar7 = "keyhelp_gc";
    if (iVar3 != 6) {
      pcVar7 = "keyhelp_normal";
    }
    FUN_7103778300(0x3f800000,local_1078,(long)pcVar7);
    uVar1 = local_1078;
    local_1080 = &PTR_FUN_710523d988;
    local_1078 = 0;
    if (uVar1 != 0) {
      uVar5 = *(ulong *)(uVar1 + 0x18);
      *(undefined ***)(uVar1 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar1 + 0x18) = 0;
      if (uVar5 != 0) {
        FUN_710392eb40(uVar5);
      }
      FUN_710392eb40(uVar1);
    }
    uVar1 = local_1058;
    local_1060 = &PTR_FUN_710523d988;
    local_1058 = 0;
    if (uVar1 != 0) {
      uVar5 = *(ulong *)(uVar1 + 0x18);
      *(undefined ***)(uVar1 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar1 + 0x18) = 0;
      if (uVar5 != 0) {
        FUN_710392eb40(uVar5);
      }
      FUN_710392eb40(uVar1);
    }
    lVar8 = **(long **)(param_1 + 0xb8) + 8;
  }
  pcVar7 = "footer_btn_in";
LAB_7101af4568:
  FUN_71037780e0(&local_1050,lVar8,(long ****)pcVar7,pppplVar9,param_4,param_5,param_6,param_7,
                 param_8);
  if (((ulong)param_3 & 1) == 0) {
    FUN_710377b140((long)&local_1050);
  }
  else {
    FUN_710377aee0(0x3f800000,(long)&local_1050);
  }
  plVar11 = local_1048;
  local_1050 = &PTR_FUN_710523d9e8;
  local_1048 = (long *)0x0;
  if (plVar11 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar11);
  }
  return;
}

