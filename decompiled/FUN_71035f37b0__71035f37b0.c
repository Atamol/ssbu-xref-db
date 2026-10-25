// addr:      71035f37b0
// offset:    0x35f37b0
// name:      FUN_71035f37b0
// mangled:   
// signature: undefined __cdecl FUN_71035f37b0(long * * * param_1, byte * param_2, long param_3, byte * * * * param_4, long * * * * param_5, ulong param_6, undefined8 param_7, undefined8 param_8)


void FUN_71035f37b0(long ***param_1,byte *param_2,long param_3,byte ****param_4,long ****param_5,
                   ulong param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  byte *pbVar2;
  size_t sVar3;
  long lVar4;
  long ***ppplVar5;
  long **pplVar6;
  long **pplVar7;
  long ****pppplVar8;
  ulong uVar9;
  long **local_a0;
  long **local_98;
  long **local_90;
  long local_88;
  byte local_80;
  undefined7 uStack_7f;
  undefined1 local_78;
  undefined1 uStack_77;
  undefined6 uStack_76;
  long **local_70;
  long **local_68;
  long **local_60;
  long **local_58;
  char acStack_50 [32];
  
  pppplVar8 = param_5;
  uVar9 = param_6;
  sprintf(acStack_50,"%016llx",(long)param_4 + param_3);
  uStack_76 = 0;
  local_80 = 0x10;
  local_70 = (long **)0x0;
  uStack_7f = 0x5342505f584653;
  local_78 = 0x5f;
  uStack_77 = 0;
  sVar3 = strlen(acStack_50);
  FUN_710355b6b0((ulong *)&local_80,acStack_50,sVar3,param_4,pppplVar8,uVar9,param_7,param_8);
  local_90 = local_70;
  local_98 = (long **)CONCAT62(uStack_76,CONCAT11(uStack_77,local_78));
  local_78 = 0;
  uStack_77 = 0;
  uStack_76 = 0;
  local_70 = (void *)0x0;
  local_a0 = (long **)CONCAT71(uStack_7f,local_80);
  local_80 = 0;
  uStack_7f = 0;
  uVar1 = *(ulong *)(param_2 + 8);
  pbVar2 = *(byte **)(param_2 + 0x10);
  if ((*param_2 & 1) == 0) {
    pbVar2 = param_2 + 1;
    uVar1 = (ulong)(*param_2 >> 1);
  }
  FUN_710355b6b0((ulong *)&local_a0,pbVar2,uVar1,param_4,pppplVar8,uVar9,param_7,param_8);
  pplVar6 = local_70;
  local_58 = local_90;
  local_60 = local_98;
  local_68 = local_a0;
  local_98 = (long **)0x0;
  local_90 = (long **)0x0;
  local_a0 = (long **)0x0;
  if ((local_80 & 1) != 0) {
    nu::VirtualFreeHook(local_70);
    FUN_710392eb40((ulong)pplVar6);
  }
  lVar4 = FUN_71038cd8c0();
  FUN_71038b4780(&local_a0,lVar4 + 0x158,(byte *)&local_68);
  if (local_90 == (long **)0x0) {
    ppplVar5 = param_5[4] + (param_6 & 0xff) * 3;
LAB_71035f3920:
    if (ppplVar5 == param_1) goto LAB_71035f3944;
    pplVar6 = param_1[2];
    pplVar7 = param_1[1];
    if ((*(byte *)param_1 & 1) == 0) {
      pplVar6 = (long **)((long)param_1 + 1);
      pplVar7 = (long **)(ulong)(*(byte *)param_1 >> 1);
    }
  }
  else {
    ppplVar5 = param_5[4] + (param_6 & 0xff) * 3;
    if (*local_90 != (long *)local_88) goto LAB_71035f3920;
    if (ppplVar5 == &local_68) goto LAB_71035f3944;
    pplVar6 = (long **)((ulong)&local_68 | 1);
    pplVar7 = (long **)((ulong)local_68 >> 1 & 0x7f);
    if (((ulong)local_68 & 1) != 0) {
      pplVar6 = local_58;
      pplVar7 = local_60;
    }
  }
  FUN_71002c51f0((ulong *)ppplVar5,pplVar6,(ulong)pplVar7,param_4,pppplVar8,uVar9,param_7,param_8);
LAB_71035f3944:
  pplVar6 = local_58;
  if (((ulong)local_68 & 1) != 0) {
    nu::VirtualFreeHook(local_58);
    FUN_710392eb40((ulong)pplVar6);
  }
  return;
}

