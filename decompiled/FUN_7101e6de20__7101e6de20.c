// addr:      7101e6de20
// offset:    0x1e6de20
// name:      FUN_7101e6de20
// mangled:   
// signature: undefined __cdecl FUN_7101e6de20(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101e6de20(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  bool bVar2;
  long *plVar3;
  long ****pppplVar4;
  byte ****ppppbVar5;
  undefined1 uVar6;
  long lVar7;
  char cVar8;
  undefined8 *puVar9;
  uint auStack_78 [2];
  byte abStack_70 [64];
  
  if (*(int *)(param_1 + 0x194) == 0) {
    if ((ulong)*(byte *)(param_1 + 0x2da) < 4) {
      lVar7 = *(long *)(param_1 + (ulong)*(byte *)(param_1 + 0x2da) * 8 + 0x210);
      ppppbVar5 = (byte ****)"cam_shop_buy_dialog_item";
      if ((lVar7 != 0) && (*(char *)(lVar7 + 0xf9) != '\0')) {
        ppppbVar5 = (byte ****)"cam_shop_buy_dialog_spirit";
      }
    }
    else {
      ppppbVar5 = (byte ****)"cam_shop_buy_dialog_item";
    }
    plVar3 = *(long **)(param_1 + 0x2b0);
    FUN_71003a4ca0(auStack_78,"cam_shop%d_dialog_buy",(ulong)*(byte *)(param_1 + 0x2a8),param_3,
                   param_4,param_5,param_6,param_7,param_8);
    pppplVar4 = (long ****)0x1;
    FUN_7101e94890(plVar3,abStack_70,1,ppppbVar5,param_5,param_6,param_7,param_8);
    FUN_7101e94ba0(*(long **)(param_1 + 0x2b0),0,pppplVar4,ppppbVar5,param_5,param_6,param_7,param_8
                  );
    puVar9 = *(undefined8 **)(param_1 + 0x1c0);
    plVar3 = (long *)*puVar9;
    (**(code **)(*plVar3 + 0x60))(plVar3,1);
    plVar3 = (long *)*puVar9;
    (**(code **)(*plVar3 + 0x70))(plVar3,1);
    FUN_7103771a80(*(long **)(param_1 + 0x1c0),
                   (uint)((char)(*(long **)(param_1 + 0x1c0))[1] != '\0'),1);
    FUN_71037760f0(*(long *)**(undefined8 **)(param_1 + 0x1a0),1);
    return;
  }
  lVar7 = **(long **)(param_1 + 0x1c0);
  uVar1 = *(uint *)(lVar7 + 0x25c);
  if (uVar1 == 0xffffffff) {
    bVar2 = false;
    cVar8 = '\0';
    if (*(char *)(lVar7 + 0x280) != '\0') goto LAB_7101e6deb4;
LAB_7101e6de74:
    if (bVar2) {
      if (cVar8 == '\0') goto LAB_7101e6deb4;
      if (cVar8 != '\x01') goto LAB_7101e6debc;
      uVar6 = 2;
      goto LAB_7101e6deb8;
    }
  }
  else {
    if (1 < uVar1) goto LAB_7101e6dff0;
    bVar2 = true;
    cVar8 = (char)(*(long **)(param_1 + 0x1c0))[(long)(int)uVar1 * 9 + 1];
    if (*(char *)(lVar7 + 0x280) == '\0') goto LAB_7101e6de74;
LAB_7101e6deb4:
    uVar6 = 1;
LAB_7101e6deb8:
    *(undefined1 *)(param_1 + 0x2d8) = uVar6;
  }
LAB_7101e6debc:
  if (*(char *)(param_1 + 0x2d8) != '\0') {
    FUN_71037760f0(*(long *)**(undefined8 **)(param_1 + 0x1a0),0);
    puVar9 = *(undefined8 **)(param_1 + 0x1c0);
    plVar3 = (long *)*puVar9;
    (**(code **)(*plVar3 + 0x60))(plVar3,0);
    plVar3 = (long *)*puVar9;
    (**(code **)(*plVar3 + 0x70))(plVar3,0);
    if (0x12 < *(uint *)(param_1 + 0x18c)) {
LAB_7101e6dff0:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x18c) * 4 + 0x140) = 10;
  }
  return;
}

