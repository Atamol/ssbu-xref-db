// addr:      7103789fb0
// offset:    0x3789fb0
// name:      FUN_7103789fb0
// mangled:   
// signature: undefined __cdecl FUN_7103789fb0(long * param_1, byte * * * * param_2, long param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7103789fb0(long *param_1,byte ****param_2,long param_3,undefined8 param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  char *pcVar2;
  byte **ppbVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined8 *puVar7;
  byte ***pppbVar8;
  undefined8 *puVar9;
  byte ****ppppbVar10;
  long lVar11;
  uint auStack_88 [2];
  char acStack_80 [64];
  
  param_1[0x13] = (long)param_2;
  *(int *)((long)param_1 + 0x1ac) = (int)*(float *)(*DAT_710593ba90 + 0x424);
  if (param_2[3][3] == (byte **)0x0) {
    pppbVar8 = param_2[6];
  }
  else {
    pppbVar8 = param_2[3] + 0x16;
  }
  param_1[0x11] = (long)pppbVar8;
  lVar6 = param_3;
  pcVar2 = (char *)FUN_7100044b00(param_3,"OnOff");
  if ((pcVar2 == (char *)0x0) || (*pcVar2 == '\0')) {
    param_1[0x14] = 0;
    param_1[9] = 0;
    ppppbVar10 = (byte ****)param_1[0x13];
    if (ppppbVar10 != (byte ****)0x0) goto LAB_710378a06c;
LAB_710378a0a8:
    ppppbVar10 = (byte ****)0x0;
    ppbVar3 = (byte **)0x0;
  }
  else {
    ppbVar3 = FUN_7103796720(param_2,(long)pcVar2,lVar6,param_4,param_5,param_6,param_7,param_8);
    param_1[0x14] = (long)ppbVar3;
    param_1[9] = (long)ppbVar3;
    if (ppbVar3 != (byte **)0x0) {
      (**(code **)(*ppbVar3 + 0x140))(ppbVar3,1);
      (**(code **)(*(long *)param_1[0x14] + 0x180))(0);
    }
    ppppbVar10 = (byte ****)param_1[0x13];
    if (ppppbVar10 == (byte ****)0x0) goto LAB_710378a0a8;
LAB_710378a06c:
    pcVar2 = (char *)FUN_7100044b00(param_3,"Down");
    ppbVar3 = (byte **)0x0;
    if (pcVar2 != (char *)0x0) {
      if (*pcVar2 == '\0') {
        ppbVar3 = (byte **)0x0;
      }
      else {
        ppbVar3 = FUN_7103796720(ppppbVar10,(long)pcVar2,lVar6,param_4,param_5,param_6,param_7,
                                 param_8);
      }
    }
    ppppbVar10 = (byte ****)param_1[0x13];
  }
  param_1[0x17] = (long)ppbVar3;
  param_1[0x18] = 0;
  param_1[10] = (long)ppbVar3;
  param_1[0xb] = 0;
  if (ppppbVar10 == (byte ****)0x0) {
    param_1[0x19] = 0;
    param_1[0xc] = 0;
LAB_710378a13c:
    param_1[0x15] = 0;
    param_1[0x16] = 0;
LAB_710378a140:
    param_1[0x1a] = 0;
LAB_710378a144:
    param_1[0x1b] = 0;
    param_1[0x1c] = 0;
LAB_710378a148:
    param_1[0x1d] = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
LAB_710378a150:
    lVar11 = param_1[0x13];
joined_r0x00710378a314:
    if (lVar11 != 0) {
LAB_710378a158:
      pcVar2 = (char *)FUN_7100044a80(param_3,"Hit");
      lVar4 = 0;
      if (pcVar2 == (char *)0x0) goto LAB_710378a36c;
      if (*pcVar2 != '\0') {
        lVar6 = 1;
        lVar4 = (**(code **)(**(long **)(lVar11 + 0x18) + 0x60))(*(long **)(lVar11 + 0x18),pcVar2);
        goto LAB_710378a36c;
      }
    }
  }
  else {
    pcVar2 = (char *)FUN_7100044b00(param_3,"Disable");
    ppbVar3 = (byte **)0x0;
    if (pcVar2 != (char *)0x0) {
      if (*pcVar2 == '\0') {
        ppbVar3 = (byte **)0x0;
      }
      else {
        ppbVar3 = FUN_7103796720(ppppbVar10,(long)pcVar2,lVar6,param_4,param_5,param_6,param_7,
                                 param_8);
      }
    }
    ppppbVar10 = (byte ****)param_1[0x13];
    param_1[0x19] = (long)ppbVar3;
    param_1[0xc] = (long)ppbVar3;
    if (ppppbVar10 == (byte ****)0x0) goto LAB_710378a13c;
    pcVar2 = (char *)FUN_7100044b00(param_3,"Decide");
    ppbVar3 = (byte **)0x0;
    if (pcVar2 != (char *)0x0) {
      if (*pcVar2 == '\0') {
        ppbVar3 = (byte **)0x0;
      }
      else {
        ppbVar3 = FUN_7103796720(ppppbVar10,(long)pcVar2,lVar6,param_4,param_5,param_6,param_7,
                                 param_8);
      }
    }
    ppppbVar10 = (byte ****)param_1[0x13];
    param_1[0x15] = (long)ppbVar3;
    param_1[0x16] = 0;
    if (ppppbVar10 == (byte ****)0x0) goto LAB_710378a140;
    pcVar2 = (char *)FUN_7100044b00(param_3,"SelectOn");
    ppbVar3 = (byte **)0x0;
    if (pcVar2 != (char *)0x0) {
      if (*pcVar2 == '\0') {
        ppbVar3 = (byte **)0x0;
      }
      else {
        ppbVar3 = FUN_7103796720(ppppbVar10,(long)pcVar2,lVar6,param_4,param_5,param_6,param_7,
                                 param_8);
      }
    }
    ppppbVar10 = (byte ****)param_1[0x13];
    param_1[0x1a] = (long)ppbVar3;
    if (ppppbVar10 == (byte ****)0x0) goto LAB_710378a144;
    pcVar2 = (char *)FUN_7100044b00(param_3,"SelectOff");
    ppbVar3 = (byte **)0x0;
    if (pcVar2 != (char *)0x0) {
      if (*pcVar2 == '\0') {
        ppbVar3 = (byte **)0x0;
      }
      else {
        ppbVar3 = FUN_7103796720(ppppbVar10,(long)pcVar2,lVar6,param_4,param_5,param_6,param_7,
                                 param_8);
      }
    }
    ppppbVar10 = (byte ****)param_1[0x13];
    param_1[0x1b] = (long)ppbVar3;
    if (ppppbVar10 == (byte ****)0x0) {
      param_1[0x1c] = 0;
      param_1[0x1d] = 0;
LAB_710378a2c4:
      lVar4 = 0;
      param_1[0x1e] = 0;
      param_1[0x1f] = 0;
      goto LAB_710378a36c;
    }
    pcVar2 = (char *)FUN_7100044b00(param_3,"BlinkOn");
    ppbVar3 = (byte **)0x0;
    if (pcVar2 != (char *)0x0) {
      if (*pcVar2 == '\0') {
        ppbVar3 = (byte **)0x0;
      }
      else {
        ppbVar3 = FUN_7103796720(ppppbVar10,(long)pcVar2,lVar6,param_4,param_5,param_6,param_7,
                                 param_8);
      }
    }
    ppppbVar10 = (byte ****)param_1[0x13];
    param_1[0x1c] = (long)ppbVar3;
    if (ppppbVar10 == (byte ****)0x0) goto LAB_710378a148;
    pcVar2 = (char *)FUN_7100044b00(param_3,"BlinkOff");
    ppbVar3 = (byte **)0x0;
    if (pcVar2 != (char *)0x0) {
      if (*pcVar2 == '\0') {
        ppbVar3 = (byte **)0x0;
      }
      else {
        ppbVar3 = FUN_7103796720(ppppbVar10,(long)pcVar2,lVar6,param_4,param_5,param_6,param_7,
                                 param_8);
      }
    }
    ppppbVar10 = (byte ****)param_1[0x13];
    param_1[0x1d] = (long)ppbVar3;
    if (ppppbVar10 == (byte ****)0x0) goto LAB_710378a2c4;
    pcVar2 = (char *)FUN_7100044b00(param_3,"Check");
    ppbVar3 = (byte **)0x0;
    if (pcVar2 != (char *)0x0) {
      if (*pcVar2 == '\0') {
        ppbVar3 = (byte **)0x0;
      }
      else {
        ppbVar3 = FUN_7103796720(ppppbVar10,(long)pcVar2,lVar6,param_4,param_5,param_6,param_7,
                                 param_8);
      }
    }
    ppppbVar10 = (byte ****)param_1[0x13];
    param_1[0x1e] = (long)ppbVar3;
    if (ppppbVar10 == (byte ****)0x0) {
      param_1[0x1f] = 0;
      lVar11 = param_1[0x13];
      goto joined_r0x00710378a314;
    }
    pcVar2 = (char *)FUN_7100044b00(param_3,"Press");
    ppbVar3 = (byte **)0x0;
    if (pcVar2 != (char *)0x0) {
      if (*pcVar2 == '\0') {
        ppbVar3 = (byte **)0x0;
      }
      else {
        ppbVar3 = FUN_7103796720(ppppbVar10,(long)pcVar2,lVar6,param_4,param_5,param_6,param_7,
                                 param_8);
      }
    }
    ppppbVar10 = (byte ****)param_1[0x13];
    param_1[0x1f] = (long)ppbVar3;
    if (ppppbVar10 != (byte ****)0x0) {
      pcVar2 = (char *)FUN_7100044b00(param_3,"OldStyle");
      if (((pcVar2 == (char *)0x0) || (*pcVar2 == '\0')) ||
         (ppbVar3 = FUN_7103796720(ppppbVar10,(long)pcVar2,lVar6,param_4,param_5,param_6,param_7,
                                   param_8), ppbVar3 == (byte **)0x0)) goto LAB_710378a150;
      *(undefined1 *)((long)param_1 + 0x1bd) = 1;
      lVar11 = param_1[0x13];
      if (lVar11 == 0) goto LAB_710378a368;
      goto LAB_710378a158;
    }
  }
LAB_710378a368:
  lVar4 = 0;
LAB_710378a36c:
  param_1[0xd] = lVar4;
  FUN_71003a4ca0(auStack_88,"TitleText%d",0,lVar6,param_4,param_5,param_6,param_7,param_8);
  pcVar2 = acStack_80;
  plVar5 = FUN_710378c150(param_1[0x13],param_3,acStack_80);
  param_1[0x20] = (long)plVar5;
  FUN_71003a4ca0(auStack_88,"TitleText%d",1,pcVar2,param_4,param_5,param_6,param_7,param_8);
  pcVar2 = acStack_80;
  plVar5 = FUN_710378c150(param_1[0x13],param_3,acStack_80);
  param_1[0x21] = (long)plVar5;
  FUN_71003a4ca0(auStack_88,"TitleText%d",2,pcVar2,param_4,param_5,param_6,param_7,param_8);
  pcVar2 = acStack_80;
  plVar5 = FUN_710378c150(param_1[0x13],param_3,acStack_80);
  param_1[0x22] = (long)plVar5;
  FUN_71003a4ca0(auStack_88,"TitleText%d",3,pcVar2,param_4,param_5,param_6,param_7,param_8);
  pcVar2 = acStack_80;
  plVar5 = FUN_710378c150(param_1[0x13],param_3,acStack_80);
  param_1[0x23] = (long)plVar5;
  FUN_71003a4ca0(auStack_88,"TitleText%d",4,pcVar2,param_4,param_5,param_6,param_7,param_8);
  pcVar2 = acStack_80;
  plVar5 = FUN_710378c150(param_1[0x13],param_3,acStack_80);
  param_1[0x24] = (long)plVar5;
  FUN_71003a4ca0(auStack_88,"TitleText%d",5,pcVar2,param_4,param_5,param_6,param_7,param_8);
  pcVar2 = acStack_80;
  plVar5 = FUN_710378c150(param_1[0x13],param_3,acStack_80);
  param_1[0x25] = (long)plVar5;
  FUN_71003a4ca0(auStack_88,"TitleText%d",6,pcVar2,param_4,param_5,param_6,param_7,param_8);
  pcVar2 = acStack_80;
  plVar5 = FUN_710378c150(param_1[0x13],param_3,acStack_80);
  param_1[0x26] = (long)plVar5;
  FUN_71003a4ca0(auStack_88,"TitleText%d",7,pcVar2,param_4,param_5,param_6,param_7,param_8);
  pcVar2 = acStack_80;
  plVar5 = FUN_710378c150(param_1[0x13],param_3,acStack_80);
  param_1[0x27] = (long)plVar5;
  FUN_71003a4ca0(auStack_88,"TitleText%d",8,pcVar2,param_4,param_5,param_6,param_7,param_8);
  pcVar2 = acStack_80;
  plVar5 = FUN_710378c150(param_1[0x13],param_3,acStack_80);
  param_1[0x28] = (long)plVar5;
  FUN_71003a4ca0(auStack_88,"TitleText%d",9,pcVar2,param_4,param_5,param_6,param_7,param_8);
  plVar5 = FUN_710378c150(param_1[0x13],param_3,acStack_80);
  param_1[0x29] = (long)plVar5;
  plVar5 = (long *)(*(code *)(*param_2[3])[0xc])(param_2[3],"set_parts_text_scroll",1);
  lVar6 = FUN_710379de90(plVar5);
  if (lVar6 != 0) {
    puVar9 = *(undefined8 **)(lVar6 + 0x78);
    if (((DAT_710593ba40 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_710593ba40), iVar1 != 0)) {
      if (((DAT_710593ba48 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_710593ba48), iVar1 != 0))
      {
        DAT_710593ba50 = 0;
        __cxa_guard_release(&DAT_710593ba48);
      }
      DAT_710593ba58 = &DAT_710593ba50;
      __cxa_guard_release(&DAT_710593ba40);
    }
    if (puVar9 != (undefined8 *)0x0) {
      for (puVar7 = (undefined8 *)(**(code **)*puVar9)(puVar9); puVar7 != (undefined8 *)0x0;
          puVar7 = (undefined8 *)*puVar7) {
        if ((undefined8 **)puVar7 == &DAT_710593ba58) goto LAB_710378a554;
      }
      puVar9 = (undefined8 *)0x0;
    }
LAB_710378a554:
    param_1[0x2f] = (long)puVar9;
  }
  (**(code **)(*param_1 + 0x3f0))(param_1,1);
  (**(code **)(*param_1 + 0x400))(param_1);
  (**(code **)(*param_1 + 0x410))(param_1);
  (**(code **)(*param_1 + 0x3d8))(param_1);
  (**(code **)(*param_1 + 0x3e0))(param_1);
  if ((long *)param_1[0x1e] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x1e] + 0x180))(0);
  }
  return;
}

