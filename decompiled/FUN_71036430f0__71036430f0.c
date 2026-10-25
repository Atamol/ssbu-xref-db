// addr:      71036430f0
// offset:    0x36430f0
// name:      FUN_71036430f0
// mangled:   
// signature: undefined __cdecl FUN_71036430f0(long * * * * * param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71036430f0(long *****param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  char *pcVar2;
  int iVar3;
  long ****pppplVar4;
  ulong uVar5;
  long *****ppppplVar6;
  long ****local_40;
  undefined8 local_38;
  char *local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  
  ppppplVar6 = &local_40;
  *(undefined4 *)(param_1 + 1) = 0;
  *(undefined1 *)((long)param_1 + 0xc) = 0;
  param_1[2] = (long ****)0x0;
  param_1[3] = (long ****)0x0;
  param_1[4] = (long ****)0x0;
  *param_1 = (long ****)&PTR_FUN_7105238668;
  pppplVar4 = (long ****)FUN_710392e290(0x10,0x38,param_3,param_4,param_5,param_6,param_7,param_8);
  if (pppplVar4 == (long ****)0x0) {
    local_28 = 0;
    local_40 = (long ****)&DAT_00000038;
    (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_28);
    pppplVar4 = (long ****)
                FUN_710392e290(0x10,0x38,(long ****)ppppplVar6,param_4,param_5,param_6,param_7,
                               param_8);
  }
  *(undefined2 *)(pppplVar4 + 6) = 0;
  *pppplVar4 = (long ***)0x0;
  pppplVar4[1] = (long ***)0xffffffffffffffff;
  pppplVar4[2] = (long ***)0xffffffffffffffff;
  pppplVar4[3] = (long ***)&DAT_3f80000000000000;
  pppplVar4[4] = (long ***)0x0;
  pppplVar4[5] = (long ***)0x0;
  param_1[5] = pppplVar4;
  *(undefined4 *)(param_1 + 1) = 1;
  plVar1 = DAT_7105338018;
  iVar3 = FUN_710392e1f0(&local_28,0x10,(long ****)&SUB_00000020,param_4,param_5,param_6,param_7,
                         param_8);
  if ((iVar3 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
    local_40 = (long ****)&SUB_00000020;
    uVar5 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_40);
    if ((uVar5 & 1) != 0) {
      FUN_710392e1f0(&local_28,0x10,(long ****)&SUB_00000020,param_4,param_5,param_6,param_7,param_8
                    );
    }
  }
  nu::VirtualAllocHook(0x20,0x10,(void *)CONCAT44(uStack_24,local_28));
  local_40 = (long ****)&DAT_00000021;
  local_30 = (char *)CONCAT44(uStack_24,local_28);
  local_38 = 0x1e;
  builtin_strncpy(local_30,"FinalSubstanceParameterUpdater",0x1f);
  FUN_710361f020(plVar1,&local_40,param_1,param_4,param_5,param_6,param_7,param_8);
  pcVar2 = local_30;
  if (((ulong)local_40 & 1) != 0) {
    nu::VirtualFreeHook(local_30);
    FUN_710392eb40((ulong)pcVar2);
  }
  *(undefined1 *)((long)param_1 + 0xc) = 1;
  return;
}

