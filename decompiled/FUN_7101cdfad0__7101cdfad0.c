// addr:      7101cdfad0
// offset:    0x1cdfad0
// name:      FUN_7101cdfad0
// mangled:   
// signature: undefined __cdecl FUN_7101cdfad0(long param_1, int param_2, undefined8 param_3, ulong param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101cdfad0(long param_1,int param_2,undefined8 param_3,ulong param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  ulong uVar2;
  ulong uVar3;
  byte *pbVar4;
  uint uVar5;
  undefined8 local_d0;
  char local_c8 [64];
  uint local_88;
  undefined4 uStack_84;
  undefined1 local_80;
  byte abStack_7f [63];
  undefined **local_40;
  ulong local_38;
  
  FUN_7103776640(&local_40,param_1,(byte ****)"set_parts_det_panel",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  if (((uint)param_3 & 0xffff | 2) == 2) {
    local_88 = 0x811c9dc5;
    if (param_2 == 0) {
      local_80 = 0x69;
      abStack_7f[0] = 0x6e;
      uVar5 = 0x69;
      abStack_7f[1] = 0;
      uStack_84 = 2;
      pbVar4 = abStack_7f;
      do {
        local_88 = local_88 * 0x89 ^ uVar5;
        uVar5 = (uint)*pbVar4;
        pbVar4 = pbVar4 + 1;
      } while (uVar5 != 0);
    }
    else {
      uVar5 = 0x6f;
      uStack_84 = 3;
      local_80 = 0x6f;
      abStack_7f[0] = 0x75;
      abStack_7f[1] = 0x74;
      abStack_7f[2] = 0;
      pbVar4 = abStack_7f;
      do {
        local_88 = local_88 * 0x89 ^ uVar5;
        uVar5 = (uint)*pbVar4;
        pbVar4 = pbVar4 + 1;
      } while (uVar5 != 0);
    }
    local_c8[0] = '\0';
    local_d0 = 0;
    FUN_710062dc20((uint *)&local_d0,"sl_%s_mode_%02d");
    pcVar1 = local_c8;
    uVar2 = local_38;
  }
  else {
    pcVar1 = "sl_reset";
    uVar2 = local_38;
  }
  if ((param_4 & 1) == 0) {
    FUN_7103778760(uVar2,(long)pcVar1);
  }
  else {
    FUN_7103778300(0x3f800000,uVar2,(long)pcVar1);
  }
  local_40 = &PTR_FUN_710523d988;
  local_38 = 0;
  if (uVar2 != 0) {
    uVar3 = *(ulong *)(uVar2 + 0x18);
    *(undefined ***)(uVar2 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar2 + 0x18) = 0;
    if (uVar3 != 0) {
      FUN_710392eb40(uVar3);
    }
    FUN_710392eb40(uVar2);
  }
  return;
}

