// addr:      7101b1b9d0
// offset:    0x1b1b9d0
// name:      FUN_7101b1b9d0
// mangled:   
// signature: ulong __cdecl FUN_7101b1b9d0(long param_1, int param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


ulong FUN_7101b1b9d0(long param_1,int param_2,long ****param_3,byte ****param_4,long ****param_5,
                    undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined **local_30;
  ulong local_28;
  
  *(byte *****)(param_1 + 0x68) = param_4;
  *(int *)(param_1 + 0x78) = param_2;
  if ((ulong)(long)param_2 < (ulong)(*(long *)(param_1 + 0x40) - *(long *)(param_1 + 0x38) >> 5)) {
    puVar1 = (undefined8 *)(*(long *)(param_1 + 0x38) + (long)param_2 * 0x20);
    if ((undefined8 *)(param_1 + 0x50) != puVar1) {
      param_3 = (long ****)puVar1[1];
      FUN_7101b1bfe0((undefined8 *)(param_1 + 0x50),(void *)*puVar1,param_3,param_4,param_5,param_6,
                     param_7,param_8);
    }
    uVar4 = *(undefined4 *)(puVar1 + 3);
    *(undefined4 *)(param_1 + 0x7c) = uVar4;
    *(undefined4 *)(param_1 + 0x80) = uVar4;
    *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)((long)puVar1 + 0x1c);
    lVar2 = *(long *)(param_1 + 0x50);
    lVar3 = *(long *)(param_1 + 0x58);
    FUN_7103776910(&local_30,*(long *)**(undefined8 **)(param_1 + 8) + 8,(long ****)"set_txt_song_n"
                   ,param_3,param_4,param_5,param_6,param_7,param_8);
    FUN_710377a280((long)&local_30,(byte *)"mel_stage_select_song_n",1);
    uVar5 = local_28;
    local_30 = &PTR_FUN_710523d9a8;
    local_28 = 0;
    if (uVar5 != 0) {
      FUN_710392eb40(uVar5);
    }
    return (ulong)(lVar3 - lVar2) >> 4 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  std::__vector_base_common<true>::__throw_out_of_range();
}

