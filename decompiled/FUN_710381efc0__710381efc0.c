// addr:      710381efc0
// offset:    0x381efc0
// name:      FUN_710381efc0
// mangled:   
// signature: undefined __cdecl FUN_710381efc0(ulong * param_1, long * param_2, undefined8 param_3, undefined8 param_4, byte * * * * param_5, long * * * * param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9)


void FUN_710381efc0(ulong *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                   byte ****param_5,long ****param_6,undefined8 param_7,undefined8 param_8,
                   undefined8 param_9)

{
  void *pvVar1;
  byte ****ppppbVar2;
  int iVar3;
  size_t __n;
  ulong uVar4;
  ulong uVar5;
  char *__s;
  byte ****ppppbVar6;
  void *pvVar7;
  long ****pppplVar8;
  ulong local_a8;
  ulong local_a0;
  void *local_98;
  ulong local_90;
  byte ****local_88;
  void *local_80;
  ulong local_78;
  ulong local_70;
  void *local_68;
  ulong local_60;
  byte ****local_58;
  void *local_50;
  void *local_48;
  long ****local_38;
  
  FUN_71038135a0(&local_78,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  local_88 = (byte ****)0x0;
  local_90 = 0x203a2006;
  uVar4 = (ulong)((byte)local_78 >> 1);
  pvVar7 = (void *)((ulong)&local_78 | 1);
  if (((byte)local_78 & 1) != 0) {
    uVar4 = local_70;
    pvVar7 = local_68;
  }
  local_80 = (void *)0x0;
  FUN_7103558bd0(&local_90,pvVar7,uVar4,param_5,param_6,param_7,param_8,param_9);
  local_58 = local_88;
  local_60 = local_90;
  local_50 = local_80;
  local_88 = (byte ****)0x0;
  local_80 = (void *)0x0;
  local_90 = 0;
  if (*(uint *)((long)param_2 + 0x74) < 6) {
    __s = (&PTR_s_kActiveShaderStages_RasterDefaul_7105268c30)[(int)*(uint *)((long)param_2 + 0x74)]
    ;
  }
  else {
    __s = "INVALID";
  }
  local_a0 = 0;
  local_98 = (void *)0x0;
  local_a8 = 0;
  __n = strlen(__s);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    local_a8 = CONCAT71(local_a8._1_7_,(char)((int)__n << 1));
    pvVar7 = (void *)((ulong)&local_a8 | 1);
    local_48 = pvVar7;
    if (__n == 0) goto LAB_710381f148;
  }
  else {
    pppplVar8 = (long ****)(__n + 0x10 & 0xfffffffffffffff0);
    iVar3 = FUN_710392e1f0(&local_48,0x10,pppplVar8,param_5,param_6,param_7,param_8,param_9);
    if (((iVar3 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
       (local_38 = pppplVar8,
       uVar4 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_38), (uVar4 & 1) != 0)) {
      FUN_710392e1f0(&local_48,0x10,pppplVar8,param_5,param_6,param_7,param_8,param_9);
    }
    nu::VirtualAllocHook((ulong)pppplVar8,0x10,local_48);
    local_a8 = (ulong)pppplVar8 | 1;
    pvVar7 = (void *)((ulong)&local_a8 | 1);
    local_98 = local_48;
    local_a0 = __n;
  }
  memcpy(local_48,__s,__n);
LAB_710381f148:
  *(undefined1 *)((long)local_48 + __n) = 0;
  uVar4 = local_a8 >> 1 & 0x7f;
  if ((local_a8 & 1) != 0) {
    uVar4 = local_a0;
    pvVar7 = local_98;
  }
  if ((local_60 & 1) == 0) {
    uVar5 = 0x16;
    ppppbVar6 = (byte ****)(local_60 >> 1 & 0x7f);
  }
  else {
    uVar5 = (local_60 & 0xfffffffffffffffe) - 1;
    ppppbVar6 = local_58;
  }
  if (uVar5 - (long)ppppbVar6 < uVar4) {
    FUN_71037cfe00(&local_60,uVar5,(long)ppppbVar6 + (uVar4 - uVar5),ppppbVar6,(long ****)ppppbVar6,
                   0,uVar4,pvVar7);
  }
  else if (uVar4 != 0) {
    pvVar1 = (void *)((ulong)&local_60 | 1);
    if ((local_60 & 1) != 0) {
      pvVar1 = local_50;
    }
    memcpy((void *)((long)pvVar1 + (long)ppppbVar6),pvVar7,uVar4);
    ppppbVar6 = (byte ****)((long)ppppbVar6 + uVar4);
    ppppbVar2 = ppppbVar6;
    if ((local_60 & 1) == 0) {
      local_60 = CONCAT71(local_60._1_7_,(char)((int)ppppbVar6 << 1));
      ppppbVar2 = local_58;
    }
    local_58 = ppppbVar2;
    *(undefined1 *)((long)pvVar1 + (long)ppppbVar6) = 0;
  }
  pvVar1 = local_50;
  ppppbVar6 = local_58;
  pvVar7 = local_98;
  local_58 = (byte ****)0x0;
  local_50 = (void *)0x0;
  *param_1 = local_60;
  param_1[1] = (ulong)ppppbVar6;
  param_1[2] = (ulong)pvVar1;
  local_60 = 0;
  if ((local_a8 & 1) != 0) {
    nu::VirtualFreeHook(local_98);
    FUN_710392eb40((ulong)pvVar7);
    pvVar7 = local_50;
    if ((local_60 & 1) != 0) {
      nu::VirtualFreeHook(local_50);
      FUN_710392eb40((ulong)pvVar7);
    }
  }
  pvVar7 = local_80;
  if ((local_90 & 1) != 0) {
    nu::VirtualFreeHook(local_80);
    FUN_710392eb40((ulong)pvVar7);
  }
  if (((byte)local_78 & 1) != 0) {
    nu::VirtualFreeHook(local_68);
    FUN_710392eb40((ulong)local_68);
  }
  return;
}

