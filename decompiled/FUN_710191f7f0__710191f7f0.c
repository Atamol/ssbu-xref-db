// addr:      710191f7f0
// offset:    0x191f7f0
// name:      FUN_710191f7f0
// mangled:   
// signature: undefined __cdecl FUN_710191f7f0(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_710191f7f0(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar1;
  long ****pppplVar2;
  int iVar3;
  long *plVar4;
  short *psVar5;
  ushort *puVar6;
  uint uVar7;
  ushort uVar8;
  int iVar9;
  int iVar10;
  ushort *puVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  
  lVar12 = *(long *)(*(long *)(param_1 + 0x180) + 0x80);
  uVar1 = 0x1000;
  FUN_7103775dc0((long *)**(undefined8 **)(lVar12 + 400),0,(long ****)&DAT_00001000,param_4,param_5,
                 param_6,param_7,param_8);
  FUN_7101e9c150(*(long *)(lVar12 + 0x1a8),1,uVar1,param_4,param_5,param_6,param_7,param_8);
  lVar12 = *(long *)(param_1 + 0x188);
  *(undefined1 *)(lVar12 + 0x70) = 0;
  pppplVar2 = (long ****)0x0;
  FUN_7103775dc0((long *)**(undefined8 **)(*(long *)(lVar12 + 0x80) + 8),3,(long ****)0x0,param_4,
                 param_5,param_6,param_7,param_8);
  plVar4 = *(long **)(*(long *)(*(long *)(param_1 + 0x1a0) + 8) + 8);
  uVar1 = extraout_x1;
  if (((((char)plVar4[0x71] != '\0') && (*(byte *)(param_1 + 0x1a8) < 4)) &&
      (lVar12 = *plVar4, psVar5 = (short *)(lVar12 + (ulong)*(byte *)(param_1 + 0x1a8) * 0x1d8),
      lVar12 != 0 && psVar5 != (short *)0x0)) && (*psVar5 != -1)) {
    lVar14 = *(long *)(*(long *)(param_1 + 0x180) + 0x80);
    puVar13 = *(undefined8 **)(lVar14 + 0x1a8);
    plVar4 = (long *)*puVar13;
    (**(code **)(*plVar4 + 0x60))(plVar4,0);
    plVar4 = (long *)*puVar13;
    (**(code **)(*plVar4 + 0x70))(plVar4,0);
    *(undefined1 *)(*(long *)(lVar14 + 0x220) + 0x40) = 0;
    FUN_710377a120(*(long *)(lVar14 + 0x1c8) + 0x10,"cam_gym_dialog_start",pppplVar2,param_4,param_5
                   ,param_6,param_7,param_8);
    lVar12 = *(long *)(*(long *)(*(long *)(lVar14 + 0x1c8) + 0x18) + 0x10);
    iVar3 = 0;
    if (lVar12 != 0) {
      puVar6 = *(ushort **)(lVar12 + 0xd8);
      if ((puVar6 == (ushort *)0x0) || (uVar8 = *puVar6, uVar8 == 0)) {
        iVar3 = 0;
      }
      else {
        uVar7 = 0;
        iVar3 = 0;
        puVar11 = puVar6;
        do {
          if ((uVar8 | 1) == 0xf) {
            if (uVar8 == 0xe) {
              iVar9 = 0;
              iVar10 = (puVar11[3] >> 1) + 4;
            }
            else {
              iVar9 = 0;
              iVar10 = 3;
              if (uVar8 != 0xf) {
                iVar10 = 0;
              }
            }
          }
          else {
            iVar9 = 1;
            iVar10 = 1;
          }
          uVar7 = iVar10 + uVar7;
          puVar11 = puVar6 + uVar7;
          iVar3 = iVar9 + iVar3;
          uVar8 = *puVar11;
        } while (uVar8 != 0);
      }
    }
    *(int *)(lVar14 + 0x1d8) = iVar3;
    FUN_7101e94ba0((long *)(lVar14 + 0x1c8),1,pppplVar2,param_4,param_5,param_6,param_7,param_8);
    *(undefined8 *)(lVar14 + 0x10) = 0;
    *(undefined8 *)(lVar14 + 0x18) = 0;
    *(undefined8 *)(lVar14 + 0x174) = 0;
    *(undefined8 *)(lVar14 + 0x16c) = 0;
    *(undefined8 *)(lVar14 + 0x164) = 0;
    *(undefined8 *)(lVar14 + 0x15c) = 0;
    *(undefined8 *)(lVar14 + 0x154) = 0;
    *(undefined8 *)(lVar14 + 0x14c) = 0;
    *(undefined8 *)(lVar14 + 0x144) = 0;
    *(undefined8 *)(lVar14 + 0x134) = 0;
    *(undefined8 *)(lVar14 + 0x13c) = 0;
    *(undefined8 *)(lVar14 + 0x180) = 0xffffffff;
    *(undefined4 *)(lVar14 + 0x188) = 0xffffffff;
    *(undefined4 *)(lVar14 + 0x17c) = 0;
    *(undefined1 *)(lVar14 + 0x18c) = 0;
    *(undefined4 *)(lVar14 + 0x130) = 7;
    uVar1 = extraout_x1_00;
  }
  FUN_71032e5b10(*(long *)(DAT_710532f7c8 + 8),uVar1,pppplVar2,param_4,param_5,param_6,param_7,
                 param_8);
  if (*(uint *)(param_1 + 0x164) < 0x13) {
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x164) * 4 + 0x118) = 4;
    if (*(int *)(param_1 + 0x164) < 0x12) {
      uVar7 = *(int *)(param_1 + 0x164) + 1;
      *(uint *)(param_1 + 0x164) = uVar7;
      if (0x12 < uVar7) goto LAB_710191fa50;
      *(undefined4 *)(param_1 + (long)(int)uVar7 * 4 + 0x118) = 0xe;
    }
    return;
  }
LAB_710191fa50:
                    /* WARNING: Subroutine does not return */
  abort();
}

