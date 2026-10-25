// addr:      7101e73240
// offset:    0x1e73240
// name:      FUN_7101e73240
// mangled:   
// signature: undefined __cdecl FUN_7101e73240(long param_1, char param_2, long * * * * param_3, char * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101e73240(long param_1,char param_2,long ****param_3,char *param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar1;
  int iVar2;
  long lVar3;
  ushort *puVar4;
  uint uVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  ushort *puVar9;
  long *plVar10;
  uint auStack_78 [2];
  byte abStack_70 [64];
  
  plVar10 = *(long **)(param_1 + 0x2b0);
  if (param_2 == '\0') {
    FUN_71003a4ca0(auStack_78,"cam_shop%d_dialog_sp_lack",(ulong)*(byte *)(param_1 + 0x2a8),param_3,
                   param_4,param_5,param_6,param_7,param_8);
    FUN_710377a120(*plVar10 + 0x10,(char *)abStack_70,param_3,param_4,param_5,param_6,param_7,
                   param_8);
    lVar3 = *(long *)(*(long *)(*plVar10 + 0x18) + 0x10);
    iVar2 = 0;
    uVar1 = extraout_x1_00;
    if (lVar3 != 0) {
      puVar4 = *(ushort **)(lVar3 + 0xd8);
      if ((puVar4 == (ushort *)0x0) || (uVar6 = *puVar4, uVar6 == 0)) {
        *(undefined4 *)(plVar10 + 2) = 0;
        goto LAB_7101e7335c;
      }
      uVar5 = 0;
      iVar2 = 0;
      puVar9 = puVar4;
      do {
        if ((uVar6 | 1) == 0xf) {
          if (uVar6 == 0xe) {
            iVar7 = 0;
            iVar8 = (puVar9[3] >> 1) + 4;
          }
          else {
            iVar7 = 0;
            iVar8 = 3;
            if (uVar6 != 0xf) {
              iVar8 = 0;
            }
          }
        }
        else {
          iVar7 = 1;
          iVar8 = 1;
        }
        uVar5 = iVar8 + uVar5;
        puVar9 = puVar4 + uVar5;
        iVar2 = iVar7 + iVar2;
        uVar6 = *puVar9;
      } while (uVar6 != 0);
    }
    *(int *)(plVar10 + 2) = iVar2;
  }
  else {
    FUN_71003a4ca0(auStack_78,"cam_shop%d_dialog_return",(ulong)*(byte *)(param_1 + 0x2a8),param_3,
                   param_4,param_5,param_6,param_7,param_8);
    param_4 = "cam_shop_buy_dialog_item";
    param_3 = (long ****)0x1;
    FUN_7101e94890(plVar10,abStack_70,1,"cam_shop_buy_dialog_item",param_5,param_6,param_7,param_8);
    uVar1 = extraout_x1;
  }
LAB_7101e7335c:
  FUN_7101e949d0(*(long **)(param_1 + 0x2b0),uVar1,param_3,(byte ****)param_4,param_5,param_6,
                 param_7,param_8);
  *(undefined1 *)(param_1 + 0x2d8) = 0;
  if (0x12 < *(uint *)(param_1 + 0x18c)) {
LAB_7101e733bc:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x18c) * 4 + 0x140) = 0x10;
  if (*(int *)(param_1 + 0x18c) < 0x12) {
    uVar5 = *(int *)(param_1 + 0x18c) + 1;
    *(uint *)(param_1 + 0x18c) = uVar5;
    if (0x12 < uVar5) goto LAB_7101e733bc;
    *(undefined4 *)(param_1 + (long)(int)uVar5 * 4 + 0x140) = 0xd;
  }
  return;
}

