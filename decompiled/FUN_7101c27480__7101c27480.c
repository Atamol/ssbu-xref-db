// addr:      7101c27480
// offset:    0x1c27480
// name:      FUN_7101c27480
// mangled:   
// signature: undefined8 __cdecl FUN_7101c27480(long param_1, uint param_2, ulong param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


undefined8
FUN_7101c27480(long param_1,uint param_2,ulong param_3,undefined8 param_4,long ****param_5,
              undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined **local_a8;
  ulong local_a0;
  undefined **local_98;
  ulong local_90;
  uint local_88 [2];
  char local_80 [64];
  
  uVar2 = 0;
  local_80[0] = '\0';
  local_88[0] = 0;
  local_88[1] = 0;
  if (param_2 < 5) {
    uVar4 = (ulong)param_2;
    FUN_710149ebc0(local_88,"mel_rule_select_sort%d");
    if ((DAT_7105324f58 == param_2) && ((param_3 & 1) == 0)) {
      uVar2 = 0;
    }
    else {
      FUN_7103776640(&local_98,**(long **)(param_1 + 0x170) + 8,(byte ****)"scr_sort",uVar4,param_4,
                     param_5,param_6,param_7,param_8);
      FUN_7103776910(&local_a8,(long)&local_98,(long ****)"set_txt_list",uVar4,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_710377a120((long)&local_a8,local_80,uVar4,param_4,param_5,param_6,param_7,param_8);
      uVar4 = local_a0;
      DAT_7105324f58 = param_2;
      if (*(int *)(param_1 + 0x14c) < 0x12) {
        uVar1 = *(int *)(param_1 + 0x14c) + 1;
        *(uint *)(param_1 + 0x14c) = uVar1;
        if (0x12 < uVar1) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined4 *)(param_1 + (long)(int)uVar1 * 4 + 0x100) = 9;
      }
      local_a8 = &PTR_FUN_710523d9a8;
      local_a0 = 0;
      if (uVar4 != 0) {
        FUN_710392eb40(uVar4);
      }
      uVar4 = local_90;
      local_98 = &PTR_FUN_710523d988;
      local_90 = 0;
      if (uVar4 != 0) {
        uVar3 = *(ulong *)(uVar4 + 0x18);
        *(undefined ***)(uVar4 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar4 + 0x18) = 0;
        if (uVar3 != 0) {
          FUN_710392eb40(uVar3);
        }
        FUN_710392eb40(uVar4);
      }
      uVar2 = 1;
    }
  }
  return uVar2;
}

