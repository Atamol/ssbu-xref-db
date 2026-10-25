// addr:      71019f67b0
// offset:    0x19f67b0
// name:      FUN_71019f67b0
// mangled:   
// signature: undefined __cdecl FUN_71019f67b0(long param_1, int param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71019f67b0(long param_1,int param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  char *pcVar7;
  long ****pppplVar8;
  long **pplVar9;
  char *pcVar10;
  undefined1 *puVar11;
  long *plVar12;
  undefined **local_48;
  ulong local_40;
  long ***local_38;
  undefined4 local_24;
  
  pppplVar8 = param_3;
  FUN_7103776910(&local_48,(long)param_3,(long ****)"set_txt",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  if (param_2 == 1) {
    FUN_7103778300(0x3f800000,(long)param_3[1],0x710439cda9);
    if (*(int *)(param_1 + 0x94) == -1) {
      pcVar7 = "mel_player_n";
    }
    else {
      pcVar7 = "mel_tournament_guest_n";
    }
    FUN_710377a280((long)&local_48,(byte *)pcVar7,1);
    goto LAB_71019f6a88;
  }
  if (param_2 != 0) {
    FUN_7103778300(0x3f800000,(long)param_3[1],0x7104400dd2);
    if ((param_2 < 1) || ((int)*(ulong *)(param_1 + 0x30) < param_2)) {
      uVar3 = 0xffffffff;
    }
    else {
      if (*(ulong *)(param_1 + 0x30) <= (ulong)(long)(param_2 + -1)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar5 = *(long *)(param_1 + 0x28) + (long)(param_2 + -1);
      uVar3 = *(uint *)(*(long *)(*(long *)(param_1 + 0x10) + (uVar5 >> 7 & 0x1fffffffffffff8)) +
                       (uVar5 & 0x3ff) * 4);
    }
    puVar11 = &DAT_7105314518;
    if ((uVar3 < 0x3d) && (*(char *)*DAT_7105314510 == '\0')) {
      puVar11 = (undefined1 *)
                (*(long *)**(undefined8 **)((char *)*DAT_7105314510 + 0x58) + (ulong)uVar3 * 0xf7d8)
      ;
    }
    if (*(long **)(local_40 + 0x10) != (long *)0x0) {
      FUN_71037a2270(*(long **)(local_40 + 0x10),(ushort *)(puVar11 + 0xc),0xffffffff,1);
    }
    goto LAB_71019f6a88;
  }
  FUN_7103778300(0x3f800000,(long)param_3[1],0x71043dfa62);
  FUN_710377a120((long)&local_48,"mel_chara_select_key_input",pppplVar8,param_4,param_5,param_6,
                 param_7,param_8);
  plVar4 = (long *)FUN_710392e290(0x10,8,pppplVar8,param_4,param_5,param_6,param_7,param_8);
  if (plVar4 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_24 = 0;
      local_38 = (long ***)&DAT_00000008;
      pppplVar8 = &local_38;
      uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_24);
      if (((uVar5 & 1) != 0) &&
         (plVar4 = (long *)FUN_710392e290(0x10,8,pppplVar8,param_4,param_5,param_6,param_7,param_8),
         plVar4 != (long *)0x0)) goto LAB_71019f6870;
    }
    plVar4 = (long *)0x0;
  }
LAB_71019f6870:
  *plVar4 = 0;
  pplVar9 = param_3[1][1];
  if (pplVar9 == (long **)0x0) {
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    if (pplVar9[0xc] != (long *)0x0) {
      lVar6 = FUN_7103796f20((long)pplVar9[0xc],(long)(pplVar9[3] + 0x16));
    }
  }
  *plVar4 = lVar6;
  pcVar10 = *(char **)**(undefined8 **)(*DAT_7105314510 + 0x58);
  lVar6 = 0;
  pcVar7 = pcVar10 + 0xf7d8;
  cVar1 = *pcVar10;
  while (cVar1 != '\0') {
    if (0x3c < lVar6 + 1U) {
      bVar2 = false;
      plVar12 = (long *)*plVar4;
      goto joined_r0x0071019f6988;
    }
    if (*pcVar7 == '\0') {
      lVar6 = lVar6 + 1;
      break;
    }
    lVar6 = lVar6 + 2;
    pcVar7 = pcVar7 + 0x1efb0;
    pcVar10 = pcVar10 + 0x1efb0;
    cVar1 = *pcVar10;
  }
  bVar2 = (int)lVar6 != -1;
  plVar12 = (long *)*plVar4;
joined_r0x0071019f6988:
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x1f8))(plVar12,bVar2);
    uVar5 = (**(code **)(*plVar12 + 0x200))(plVar12);
    if ((uVar5 & 1) == 0) {
      uVar3 = 1;
    }
    else {
      uVar3 = (**(code **)(*plVar12 + 0x210))(plVar12);
      uVar3 = uVar3 ^ 1;
    }
    (**(code **)(*plVar12 + 0x388))(plVar12,uVar3 & 1,0);
  }
  FUN_710392eb40((ulong)plVar4);
LAB_71019f6a88:
  uVar5 = local_40;
  local_48 = &PTR_FUN_710523d9a8;
  local_40 = 0;
  if (uVar5 != 0) {
    FUN_710392eb40(uVar5);
  }
  return;
}

