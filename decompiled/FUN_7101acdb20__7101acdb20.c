// addr:      7101acdb20
// offset:    0x1acdb20
// name:      FUN_7101acdb20
// mangled:   
// signature: undefined __cdecl FUN_7101acdb20(long param_1, undefined8 param_2, undefined8 param_3, undefined1 * param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101acdb20(long param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  char *pcVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  char *pcVar7;
  long lVar8;
  undefined1 *puVar9;
  int *piVar10;
  long lVar11;
  uint auStack_f0 [2];
  undefined1 auStack_e8 [64];
  uint auStack_a8 [2];
  undefined1 auStack_a0 [64];
  
  piVar10 = *(int **)(param_1 + 0x110);
  pcVar7 = "mnu_replay_refinement_all";
  if (*piVar10 - 1U < 3) {
    pcVar7 = (&PTR_s_mnu_replay_refinement_mode_melee_71050a99e0)[(int)(*piVar10 - 1U)];
  }
  puVar9 = *(undefined1 **)(piVar10 + 2);
  pcVar1 = "mnu_replay_refinement_spirits_no";
  if (piVar10[6] != 1) {
    pcVar1 = "mnu_replay_refinement_all";
  }
  pcVar2 = "mnu_replay_refinement_spirits_yes";
  if (piVar10[6] != 2) {
    pcVar2 = pcVar1;
  }
  lVar11 = *(long *)(DAT_710532f730 + 8);
  lVar8 = *(long *)(lVar11 + 0x168);
  uVar4 = FUN_71032632a0(lVar8,(ulong)puVar9);
  if ((uVar4 & 1) == 0) {
    bVar3 = FUN_71032648e0(lVar11 + 0x160,(ulong)puVar9);
    if (bVar3) {
      uVar6 = 0x143829f67e;
      goto LAB_7101acdbe4;
    }
  }
  else {
    uVar6 = 0x11b1ccb807;
LAB_7101acdbe4:
    puVar9 = FUN_71032631a0(lVar8,uVar6);
  }
  *(undefined1 **)(piVar10 + 2) = puVar9;
  uVar6 = *(ulong *)(*(long *)(param_1 + 0x110) + 8);
  if (((uVar6 & 0xff00000000000000) == 0xc100000000000000) && ((uVar6 & 0xffffffffff) != 0)) {
    lVar8 = *(long *)(lVar11 + 0x168);
    puVar9 = FUN_71032631a0(lVar8,0x14ca4126b0);
    if ((((ulong)puVar9 & 0xff00000000000000) == 0xc100000000000000) &&
       ((((ulong)puVar9 & 0xffffffffff) != 0 && (((uVar6 ^ (ulong)puVar9) & 0xffffffffff) == 0))))
    goto LAB_7101acdc58;
    uVar4 = FUN_7103263540(lVar8,uVar6,0,param_4,param_5,param_6,param_7,param_8);
    FUN_7103262310(auStack_a8,*(long *)(lVar11 + 0x168),uVar6);
    FUN_71003a4ca0(auStack_f0,"nam_chr1_%02d_%s",(ulong)uVar4,auStack_a0,param_4,param_5,param_6,
                   param_7,param_8);
    param_4 = auStack_e8;
    param_3 = 1;
    FUN_710377a280(param_1 + 0x1a0,(byte *)"mnu_replay_refinement_fighter_name",1);
  }
  else {
LAB_7101acdc58:
    FUN_710377a120(param_1 + 0x1a0,"mnu_replay_refinement_all",param_3,param_4,param_5,param_6,
                   param_7,param_8);
  }
  uVar6 = *(ulong *)(*(long *)(param_1 + 0x110) + 0x10);
  if (((uVar6 & 0xff00000000000000) == 0x6900000000000000) && ((uVar6 & 0xffffffffff) != 0)) {
    lVar8 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x178);
    uVar5 = FUN_71032b23e0(*(long *)(lVar8 + 8),0x14bebd6a0c);
    if (((uVar5 & 0xff00000000000000) == 0x6900000000000000) && ((uVar5 & 0xffffffffff) != 0)) {
      if (((uVar5 ^ uVar6) & 0xffffffffff) != 0) {
LAB_7101acdd50:
        FUN_71032b1a60(auStack_a8,lVar8,uVar6);
        FUN_71003a4ca0(auStack_f0,"nam_stg1_%s",auStack_a0,uVar6,param_4,param_5,param_6,param_7,
                       param_8);
        param_4 = auStack_e8;
        param_3 = 1;
        FUN_710377a280(param_1 + 0x1d8,(byte *)"mnu_replay_refinement_stage_name",1);
        goto LAB_7101acdd98;
      }
    }
    else if (((uVar5 & 0xffffffffff) == 0) || ((uVar5 & 0xff00000000000000) != 0x6900000000000000))
    goto LAB_7101acdd50;
  }
  FUN_710377a120(param_1 + 0x1d8,"mnu_replay_refinement_all",param_3,param_4,param_5,param_6,param_7
                 ,param_8);
LAB_7101acdd98:
  FUN_710377a120(param_1 + 0x168,pcVar7,param_3,param_4,param_5,param_6,param_7,param_8);
  FUN_710377a120(param_1 + 0x210,pcVar2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}

