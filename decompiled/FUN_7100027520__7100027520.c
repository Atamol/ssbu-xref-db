// addr:      7100027520
// offset:    0x27520
// name:      FUN_7100027520
// mangled:   
// signature: uint __cdecl FUN_7100027520(long param_1)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_7100027520(long param_1)

{
  uint uVar1;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined2 local_28;
  
  local_28 = 0;
  local_38 = 0;
  uStack_30 = 0;
  local_d0 = 0;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_50 = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  uVar1 = nn::nifm::GetCurrentProxySetting((ProxySetting *)&local_d0);
  if (uVar1 == 0) {
    *(ProxySetting *)(param_1 + 4) = local_d0._0_1_;
    if (local_d0._0_1_ != (ProxySetting)0x0) {
      *(undefined2 *)(param_1 + 6) = local_d0._2_2_;
      strncpy((char *)(param_1 + 8),(char *)((ulong)&local_d0 | 4),99);
      *(undefined1 *)(param_1 + 0x6b) = 0;
      *(char *)(param_1 + 0x70) = (char)local_68;
      if ((char)local_68 != '\0') {
        strncpy((char *)(param_1 + 0x71),(char *)((long)&local_68 + 1),0x1f);
        *(undefined1 *)(param_1 + 0x90) = 0;
        strncpy((char *)(param_1 + 0x91),(char *)((long)&local_48 + 1),0x1f);
        *(undefined1 *)(param_1 + 0xb0) = 0;
        return 0;
      }
    }
    uVar1 = 0;
  }
  else {
    uVar1 = uVar1 >> 9 & 0x1fff;
    FUN_7100008270(_stderr);
  }
  return uVar1;
}

