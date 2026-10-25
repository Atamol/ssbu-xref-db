// addr:      7101bca1b0
// offset:    0x1bca1b0
// name:      FUN_7101bca1b0
// mangled:   
// signature: undefined __cdecl FUN_7101bca1b0(long param_1, int param_2, ulong param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101bca1b0(long param_1,int param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  uint uVar2;
  
  if ((ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 2) <= (ulong)(long)param_2) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  uVar2 = *(uint *)(*(long *)(param_1 + 8) + (long)param_2 * 4);
  if (uVar2 < 7) {
    lVar1 = param_1 + (param_3 & 0xffffffff) * 0x10 + 0x28;
    switch(uVar2) {
    case 0:
      FUN_710377a120(lVar1,"mel_mockbattle_cp_auto",param_3,param_4,param_5,param_6,param_7,param_8)
      ;
      return;
    case 1:
      FUN_710377a280(lVar1,(byte *)"mel_mockbattle_cp_n",1);
      return;
    case 2:
      FUN_710377a280(lVar1,(byte *)"mel_mockbattle_cp_n",1);
      return;
    case 3:
      FUN_710377a280(lVar1,(byte *)"mel_mockbattle_cp_n",1);
      return;
    case 4:
      FUN_710377a280(lVar1,(byte *)"mel_mockbattle_cp_n",1);
      return;
    case 5:
      FUN_710377a120(lVar1,"mel_mockbattle_cp_attack",param_3,param_4,param_5,param_6,param_7,
                     param_8);
      return;
    case 6:
      FUN_710377a120(lVar1,"mel_mockbattle_cp_stop",param_3,param_4,param_5,param_6,param_7,param_8)
      ;
      return;
    }
  }
  return;
}

