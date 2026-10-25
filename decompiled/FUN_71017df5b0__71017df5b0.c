// addr:      71017df5b0
// offset:    0x17df5b0
// name:      FUN_71017df5b0
// mangled:   
// signature: undefined __cdecl FUN_71017df5b0(undefined1 * param_1, uint param_2, undefined4 param_3, ulong param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Removing unreachable block (ram,0x0071017df9e4) */

void FUN_71017df5b0(undefined1 *param_1,uint param_2,undefined4 param_3,ulong param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 uVar1;
  char *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  ushort uVar5;
  uint uVar6;
  ulong uVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined1 local_230 [256];
  ushort local_130;
  undefined4 local_128;
  undefined1 local_124;
  undefined2 local_28;
  
  puVar8 = local_230;
  uVar4 = param_4 & 0xffffffff;
  local_130 = 0;
  local_230[0] = 0;
  if (param_2 < 0x76) {
    puVar3 = (&PTR_s_mario_7104f81e20)[(int)param_2];
  }
  else {
    puVar3 = &DAT_71042b2e2e;
  }
  switch(param_3) {
  case 1:
    pcVar2 = "fighter/%s/model/body/c%02d/model.numdlb";
    break;
  case 2:
    local_128 = 0x79646f62;
    *(undefined2 *)(param_1 + 0x100) = 0;
    *param_1 = 0;
    local_28 = 4;
    local_124 = 0;
    if (param_2 < 0x76) {
      puVar3 = (&PTR_s_mario_7104f81e20)[(int)param_2];
    }
    else {
      puVar3 = &DAT_71042b2e2e;
    }
    FUN_710147f330((long)param_1,"fighter/%s/motion/%s/c%02d",puVar3,&local_128,uVar4,param_6,
                   param_7,param_8);
    return;
  case 3:
    pcVar2 = "effect/fighter/%s";
    goto LAB_71017df9b4;
  default:
switchD_71017df610_caseD_4:
    *param_1 = 0;
    *(undefined2 *)(param_1 + 0x100) = 0;
    goto LAB_71017dfa48;
  case 6:
    if (param_2 < 0x76) {
      puVar3 = (&PTR_s_Mario_7104f821d0)[(int)param_2];
    }
    else {
      puVar3 = &DAT_710431793d;
    }
    pcVar2 = "sound/bank/fighter/se_%s_c%02d.nus3bank";
    break;
  case 7:
    if (param_2 < 0x76) {
      puVar3 = (&PTR_s_Mario_7104f821d0)[(int)param_2];
    }
    else {
      puVar3 = &DAT_710431793d;
    }
    pcVar2 = "sound/bank/fighter/se_%s_c%02d.tonelabel";
    break;
  case 8:
    if (param_2 < 0x76) {
      puVar3 = (&PTR_s_Mario_7104f821d0)[(int)param_2];
    }
    else {
      puVar3 = &DAT_710431793d;
    }
    pcVar2 = "sound/bank/fighter/se_%s_c%02d.nus3audio";
    break;
  case 9:
    if (param_2 < 0x76) {
      puVar3 = (&PTR_s_Mario_7104f821d0)[(int)param_2];
    }
    else {
      puVar3 = &DAT_710431793d;
    }
    pcVar2 = "sound/bank/fighter_voice/vc_%s_c%02d.nus3bank";
    break;
  case 10:
    if (param_2 < 0x76) {
      puVar3 = (&PTR_s_Mario_7104f821d0)[(int)param_2];
    }
    else {
      puVar3 = &DAT_710431793d;
    }
    pcVar2 = "sound/bank/fighter_voice/vc_%s_c%02d.tonelabel";
    break;
  case 0xb:
    if (param_2 < 0x76) {
      puVar3 = (&PTR_s_Mario_7104f821d0)[(int)param_2];
    }
    else {
      puVar3 = &DAT_710431793d;
    }
    pcVar2 = "sound/bank/fighter_voice/vc_%s_c%02d.nus3audio";
    break;
  case 0xc:
    if (param_2 < 0x76) {
      puVar3 = (&PTR_s_Mario_7104f821d0)[(int)param_2];
    }
    else {
      puVar3 = &DAT_710431793d;
    }
    pcVar2 = "sound/bank/fighter_voice/vc_%s_cheer_c%02d.nus3bank";
    break;
  case 0xd:
    if (param_2 < 0x76) {
      puVar3 = (&PTR_s_Mario_7104f821d0)[(int)param_2];
    }
    else {
      puVar3 = &DAT_710431793d;
    }
    pcVar2 = "sound/bank/fighter_voice/vc_%s_cheer_c%02d.tonelabel";
    break;
  case 0xe:
    if (param_2 < 0x76) {
      puVar3 = (&PTR_s_Mario_7104f821d0)[(int)param_2];
    }
    else {
      puVar3 = &DAT_710431793d;
    }
    pcVar2 = "sound/bank/fighter_voice/vc_%s_cheer_c%02d.nus3audio";
    break;
  case 0xf:
    if (param_2 < 0x76) {
      puVar3 = (&PTR_s_Mario_7104f821d0)[(int)param_2];
    }
    else {
      puVar3 = &DAT_710431793d;
    }
    pcVar2 = "sound/sequence/fighter/%s.sqb";
    goto LAB_71017df9b4;
  case 0x11:
    pcVar2 = "fighter/%s/ai/param";
    goto LAB_71017df9b4;
  case 0x12:
    if ((int)param_4 == 1) {
      pcVar2 = "fighter/%s/param/expression_vl.prc";
    }
    else {
      if ((int)param_4 != 0) goto switchD_71017df610_caseD_4;
      pcVar2 = "fighter/%s/param/vl.prc";
    }
    goto LAB_71017df9b4;
  case 0x1e:
    if (param_2 < 0x76) {
      puVar3 = (&PTR_s_Mario_7104f821d0)[(int)param_2];
    }
    else {
      puVar3 = &DAT_710431793d;
    }
    pcVar2 = "sound/bank/fighter_voice/vc_Kirby_copy_%s.nus3bank";
    goto LAB_71017df9b4;
  case 0x1f:
    if (param_2 < 0x76) {
      puVar3 = (&PTR_s_Mario_7104f821d0)[(int)param_2];
    }
    else {
      puVar3 = &DAT_710431793d;
    }
    pcVar2 = "sound/bank/fighter_voice/vc_Kirby_copy_%s.tonelabel";
    goto LAB_71017df9b4;
  case 0x20:
    if (param_2 < 0x76) {
      puVar3 = (&PTR_s_Mario_7104f821d0)[(int)param_2];
    }
    else {
      puVar3 = &DAT_710431793d;
    }
    pcVar2 = "sound/bank/fighter_voice/vc_Kirby_copy_%s.nus3audio";
LAB_71017df9b4:
    FUN_710147f330((long)local_230,pcVar2,puVar3,param_4,uVar4,param_6,param_7,param_8);
    goto LAB_71017df9bc;
  case 0x21:
    if (param_2 < 0x76) {
      puVar3 = (&PTR_s_Mario_7104f821d0)[(int)param_2];
    }
    else {
      puVar3 = &DAT_710431793d;
    }
    pcVar2 = "sound/bank/fighter_voice/vc_%s_result_c%02d.nus3bank";
    break;
  case 0x22:
    if (param_2 < 0x76) {
      puVar3 = (&PTR_s_Mario_7104f821d0)[(int)param_2];
    }
    else {
      puVar3 = &DAT_710431793d;
    }
    pcVar2 = "sound/bank/fighter_voice/vc_%s_result_c%02d.tonelabel";
    break;
  case 0x23:
    if (param_2 < 0x76) {
      puVar3 = (&PTR_s_Mario_7104f821d0)[(int)param_2];
    }
    else {
      puVar3 = &DAT_710431793d;
    }
    pcVar2 = "sound/bank/fighter_voice/vc_%s_result_c%02d.nus3audio";
    break;
  case 0x24:
    pcVar2 = "camera/fighter/%s/c%02d";
    break;
  case 0x28:
    pcVar2 = "prebuilt:/movie/fighter/%s/c%02d";
    break;
  case 0x2a:
    FUN_710147f330((long)local_230,"append/effect/fighter/",puVar3,param_4,uVar4,param_6,param_7,
                   param_8);
    goto LAB_71017df9bc;
  }
  FUN_710147f330((long)local_230,pcVar2,puVar3,uVar4,uVar4,param_6,param_7,param_8);
LAB_71017df9bc:
  uVar4 = (ulong)local_130;
  *param_1 = 0;
  *(undefined2 *)(param_1 + 0x100) = 0;
  if (uVar4 == 0) goto LAB_71017dfa48;
  if (local_130 == 1) {
    uVar6 = 0;
    puVar8 = local_230;
LAB_71017dfa30:
    uVar1 = *puVar8;
    *(short *)(param_1 + 0x100) = (short)uVar6 + 1;
    param_1[uVar6] = uVar1;
    uVar5 = *(ushort *)(param_1 + 0x100);
  }
  else {
    uVar7 = 0;
    lVar9 = (uVar4 & 1) - uVar4;
    do {
      uVar1 = *puVar8;
      *(short *)(param_1 + 0x100) = (short)uVar7 + 1;
      param_1[uVar7] = uVar1;
      uVar5 = *(ushort *)(param_1 + 0x100);
      uVar1 = puVar8[1];
      puVar8 = puVar8 + 2;
      *(ushort *)(param_1 + 0x100) = uVar5 + 1;
      lVar9 = lVar9 + 2;
      param_1[uVar5] = uVar1;
      uVar5 = *(ushort *)(param_1 + 0x100);
      uVar7 = (ulong)uVar5;
      uVar6 = (uint)uVar5;
    } while (lVar9 != 0);
    if ((local_130 & 1) != 0) goto LAB_71017dfa30;
  }
  param_1 = param_1 + uVar5;
LAB_71017dfa48:
  *param_1 = 0;
  return;
}

