// addr:      7101c176e0
// offset:    0x1c176e0
// name:      FUN_7101c176e0
// mangled:   
// signature: undefined __cdecl FUN_7101c176e0(long param_1, uint param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101c176e0(long param_1,uint param_2,undefined8 param_3,undefined8 param_4,long ****param_5
                   ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined **local_40;
  long *local_38;
  
  if (param_2 < 4) {
    if (*(undefined8 **)(param_1 + 0x18) == *(undefined8 **)(param_1 + 0x10)) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    lVar4 = **(long **)**(undefined8 **)(param_1 + 0x10);
    lVar3 = lVar4 + 8;
    FUN_7103776910(&local_40,lVar3,(long ****)"set_rep_item",param_3,param_4,param_5,param_6,param_7
                   ,param_8);
    plVar1 = local_38;
    lVar2 = *local_38;
    if (lVar2 != 0) {
      *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
    }
    local_40 = &PTR_FUN_710523d9a8;
    local_38 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar1);
    }
    FUN_7103776910(&local_40,lVar3,(long ****)"set_rep_item_sdw",param_3,param_4,param_5,param_6,
                   param_7,param_8);
    plVar1 = local_38;
    lVar2 = *local_38;
    if (lVar2 != 0) {
      *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
    }
    local_40 = &PTR_FUN_710523d9a8;
    local_38 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar1);
    }
    FUN_7103776910(&local_40,lVar3,(long ****)"bg_category",param_3,param_4,param_5,param_6,param_7,
                   param_8);
    plVar1 = local_38;
    lVar2 = *local_38;
    if (lVar2 != 0) {
      *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
    }
    local_40 = &PTR_FUN_710523d9a8;
    local_38 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar1);
    }
    FUN_7103776910(&local_40,lVar3,(long ****)"set_txt_item_name",param_3,param_4,param_5,param_6,
                   param_7,param_8);
    plVar1 = local_38;
    lVar2 = *local_38;
    if (lVar2 != 0) {
      *(byte *)(lVar2 + 0x58) = *(byte *)(lVar2 + 0x58) & 0xfe;
    }
    local_40 = &PTR_FUN_710523d9a8;
    local_38 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar1);
    }
    FUN_7103776910(&local_40,lVar3,(long ****)"set_txt_item_help",param_3,param_4,param_5,param_6,
                   param_7,param_8);
    plVar1 = local_38;
    lVar3 = *local_38;
    if (lVar3 != 0) {
      *(byte *)(lVar3 + 0x58) = *(byte *)(lVar3 + 0x58) | 1;
    }
    FUN_710377a120((long)&local_40,"mel_rule_item_help_freq_0%d",(ulong)param_2,param_4,param_5,
                   param_6,param_7,param_8);
    FUN_7103778300(0x3f800000,*(long *)(lVar4 + 0x10),0x710430843f);
    local_40 = &PTR_FUN_710523d9a8;
    local_38 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar1);
    }
  }
  return;
}

