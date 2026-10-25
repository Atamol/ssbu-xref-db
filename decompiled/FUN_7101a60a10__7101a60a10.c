// addr:      7101a60a10
// offset:    0x1a60a10
// name:      FUN_7101a60a10
// mangled:   
// signature: undefined __cdecl FUN_7101a60a10(long param_1, int param_2, long param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101a60a10(long param_1,int param_2,long param_3,undefined8 param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  uint auStack_120 [18];
  undefined **local_d8;
  ulong local_d0;
  undefined **local_c8;
  ulong local_c0;
  undefined **local_b8;
  ulong local_b0;
  uint auStack_a8 [2];
  undefined1 auStack_a0 [64];
  
  lVar2 = param_3;
  FUN_7103776910(&local_b8,param_3,(long ****)"set_txt_honbun",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  FUN_7103776910(&local_c8,param_3,(long ****)"set_txt_day",lVar2,param_4,param_5,param_6,param_7,
                 param_8);
  FUN_7103776910(&local_d8,param_3,(long ****)"set_txt_time",lVar2,param_4,param_5,param_6,param_7,
                 param_8);
  lVar2 = *(long *)(param_1 + 8);
  uVar4 = (ulong)param_2;
  uVar3 = (*(long *)(param_1 + 0x10) - lVar2 >> 4) * 0x6db6db6db6db6db7;
  if (uVar4 <= uVar3 && uVar3 - uVar4 != 0) {
    uVar3 = *(ulong *)(lVar2 + uVar4 * 0x70 + 0x68);
    if ((uVar3 & 0xff00000000000000) == 0xc100000000000000 && (uVar3 & 0xffffffffff) != 0) {
      lVar5 = *(long *)(DAT_710532f730 + 8);
      uVar1 = FUN_7103263540(*(long *)(lVar5 + 0x168),uVar3,0,param_4,param_5,param_6,param_7,
                             param_8);
      FUN_7103262310(auStack_a8,*(long *)(lVar5 + 0x168),uVar3);
      FUN_71003a4ca0(auStack_120,"nam_chr1_%02d_%s",(ulong)uVar1,auStack_a0,param_4,param_5,param_6,
                     param_7,param_8);
      FUN_710377a280((long)&local_b8,(byte *)(lVar2 + uVar4 * 0x70 + 0x20),1);
    }
    else {
      FUN_710377a280((long)&local_b8,(byte *)(lVar2 + uVar4 * 0x70 + 0x20),1);
    }
    uVar3 = (*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 4) * 0x6db6db6db6db6db7;
    if ((uVar4 <= uVar3 && uVar3 - uVar4 != 0) &&
       (FUN_710377a310((long)&local_c8,1),
       uVar3 = (*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 4) * 0x6db6db6db6db6db7,
       uVar4 <= uVar3 && uVar3 - uVar4 != 0)) {
      FUN_710377a310((long)&local_d8,1);
      uVar3 = local_d0;
      local_d8 = &PTR_FUN_710523d9a8;
      local_d0 = 0;
      if (uVar3 != 0) {
        FUN_710392eb40(uVar3);
      }
      uVar3 = local_c0;
      local_c8 = &PTR_FUN_710523d9a8;
      local_c0 = 0;
      if (uVar3 != 0) {
        FUN_710392eb40(uVar3);
      }
      uVar3 = local_b0;
      local_b8 = &PTR_FUN_710523d9a8;
      local_b0 = 0;
      if (uVar3 != 0) {
        FUN_710392eb40(uVar3);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__vector_base_common<true>::__throw_out_of_range();
}

