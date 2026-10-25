// addr:      7101a1f7d0
// offset:    0x1a1f7d0
// name:      FUN_7101a1f7d0
// mangled:   
// signature: undefined __cdecl FUN_7101a1f7d0(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101a1f7d0(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  uint uVar9;
  undefined **local_60;
  ulong local_58;
  undefined **local_50;
  ulong local_48;
  
  iVar6 = *(int *)(param_1 + 0x16c);
  if (iVar6 != 5) goto LAB_7101a1f954;
  if (*(int *)(param_1 + 0x160) < 1) {
    iVar6 = 0;
    iVar5 = *(int *)(param_1 + 0xcb8);
    if (iVar5 == 0) goto LAB_7101a1f868;
LAB_7101a1f850:
    uVar9 = *(int *)(param_1 + 0x2b4) - iVar5;
  }
  else {
    uVar7 = 0;
    iVar6 = 0;
    plVar8 = (long *)(*(long *)(param_1 + 0x250) + 8);
    do {
      if ((ulong)(*(long *)(param_1 + 600) - *(long *)(param_1 + 0x250) >> 4) <= uVar7) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      uVar7 = uVar7 + 1;
      if (*(int *)(*plVar8 + 0x1f8) != 3) {
        iVar6 = iVar6 + 1;
      }
      plVar8 = plVar8 + 2;
    } while ((long)uVar7 < (long)*(int *)(param_1 + 0x160));
    iVar5 = *(int *)(param_1 + 0xcb8);
    if (iVar5 != 0) goto LAB_7101a1f850;
LAB_7101a1f868:
    if (7 < iVar6) {
      iVar6 = 8;
    }
    if (iVar6 < 3) {
      iVar6 = 2;
    }
    uVar2 = 0;
    if (iVar6 != 0) {
      uVar2 = *(int *)(param_1 + 0x2ac) / iVar6;
    }
    uVar9 = *(uint *)(param_1 + 0x2b0);
    if ((int)uVar2 <= (int)*(uint *)(param_1 + 0x2b0)) {
      uVar9 = uVar2;
    }
  }
  FUN_7103776910(&local_50,**(long **)(param_1 + 0x1a0) + 8,(long ****)"set_txt_all_gamenum_00",
                 param_3,param_4,param_5,param_6,param_7,param_8);
  FUN_7103776910(&local_60,**(long **)(param_1 + 0x1a0) + 8,(long ****)"set_txt_all_gamenum_01",
                 param_3,param_4,param_5,param_6,param_7,param_8);
  if ((int)uVar9 < 2) {
    FUN_710377a120((long)&local_50,"mel_chara_select_allbattle_match_final",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    FUN_710377a120((long)&local_60,"mel_chara_select_allbattle_match_final",param_3,param_4,param_5,
                   param_6,param_7,param_8);
  }
  else {
    FUN_710377a280((long)&local_50,(byte *)"mel_chara_select_allbattle_remaining",1);
    param_3 = (long ****)0x1;
    param_4 = (byte ****)(ulong)uVar9;
    FUN_710377a280((long)&local_60,(byte *)"mel_chara_select_allbattle_remaining",1);
  }
  uVar7 = local_58;
  local_60 = &PTR_FUN_710523d9a8;
  local_58 = 0;
  if (uVar7 != 0) {
    FUN_710392eb40(uVar7);
  }
  uVar7 = local_48;
  local_50 = &PTR_FUN_710523d9a8;
  local_48 = 0;
  if (uVar7 != 0) {
    FUN_710392eb40(uVar7);
  }
  iVar6 = *(int *)(param_1 + 0x16c);
LAB_7101a1f954:
  if (iVar6 == 9) {
    iVar6 = (int)((ulong)((*(long **)(param_1 + 0xdd0))[1] - **(long **)(param_1 + 0xdd0)) >> 4) *
            -0x45d1745d;
    if (iVar6 < 1) {
      return;
    }
    iVar5 = 0;
    do {
      iVar1 = *(int *)(param_1 + 0x160);
      puVar4 = FUN_71019f1fa0(param_1 + 0xdc8,iVar5,0);
      bVar3 = FUN_7101a0dd00(iVar1,puVar4);
      if (bVar3) {
        param_3 = (long ****)0x2;
      }
      else {
        param_3 = (long ****)0x0;
      }
      FUN_71019f0fb0(*(long **)(param_1 + 0xdd0),iVar5,param_3,param_4,param_5,param_6,param_7,
                     param_8);
      iVar5 = iVar5 + 1;
    } while (iVar6 != iVar5);
    iVar6 = *(int *)(param_1 + 0x16c);
  }
  if ((iVar6 == 0xf) && (0 < *(int *)(param_1 + 0x160))) {
    iVar6 = 0;
    do {
      FUN_7101a19990(param_1,iVar6,param_3,param_4,param_5,param_6,param_7,param_8);
      iVar6 = iVar6 + 1;
    } while (iVar6 < *(int *)(param_1 + 0x160));
  }
  return;
}

