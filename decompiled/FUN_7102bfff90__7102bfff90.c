// addr:      7102bfff90
// offset:    0x2bfff90
// name:      FUN_7102bfff90
// mangled:   
// signature: undefined __cdecl FUN_7102bfff90(long * param_1, undefined8 param_2, char * param_3, undefined1[16] * param_4, undefined1[16] * param_5, undefined1[16] * param_6, long * * * * * * param_7, long * * * param_8)


void FUN_7102bfff90(long *param_1,undefined8 param_2,char *param_3,undefined1 (*param_4) [16],
                   undefined1 (*param_5) [16],undefined1 (*param_6) [16],long ******param_7,
                   long ***param_8)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  int iVar4;
  undefined8 extraout_x1;
  undefined8 uVar5;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined **ppuVar6;
  uint *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long *plVar10;
  undefined8 local_50;
  undefined8 uStack_48;
  
  FUN_71025d9250(param_1,param_2,(long *********)param_3,param_4,param_5,param_6,param_7,param_8);
  if (2 < *(uint *)(param_1 + 0x17)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  plVar10 = param_1 + 0xe7;
  lVar9 = *(long *)(DAT_710532a9d0 + (ulong)*(uint *)(param_1 + 0x17) * 8);
  for (puVar7 = *(uint **)(lVar9 + 0x228); puVar7 != *(uint **)(lVar9 + 0x230); puVar7 = puVar7 + 1)
  {
    uVar3 = *puVar7;
    if (((uVar3 != 0xffffff) &&
        (uVar3 < *(uint *)(*(long *)(**(long **)(DAT_7105332f20 + 0x78) + 0x40) + 4))) &&
       (*(long *)(*(long *)(**(long **)(DAT_7105332f20 + 0x78) + 0x60) + (ulong)uVar3 * 0x20 + 0x18)
        == 0x1129cd4ed3)) {
      FUN_7103540a00(DAT_7105332f20,uVar3);
      FUN_7103720ec0(plVar10,uVar3,(long *********)param_3,(byte ****)param_4,(long ****)param_5,
                     param_6,param_7,param_8);
      FUN_7103540b10(DAT_7105332f20,uVar3,(long *********)param_3,(byte ****)param_4,
                     (long ****)param_5,param_6,param_7,param_8);
      uVar5 = extraout_x1_01;
      goto LAB_7102c00044;
    }
  }
  FUN_7103720ec0(plVar10,0xffffff,(long *********)param_3,(byte ****)param_4,(long ****)param_5,
                 param_6,param_7,param_8);
  uVar5 = extraout_x1;
LAB_7102c00044:
  plVar1 = *(long **)(param_1[0x62] + 0xd0);
  plVar2 = *(long **)(param_1[0x62] + 0xd8);
  DAT_710532e070 = plVar10;
  if (plVar1 != plVar2) {
    iVar4 = (int)plVar1[1];
    while (iVar4 - 2U < 3) {
      if (plVar2 == plVar1 + 2) goto LAB_7102c00118;
      iVar4 = (int)plVar1[3];
      plVar1 = plVar1 + 2;
    }
  }
  while (plVar1 != plVar2) {
    lVar9 = *plVar1;
    if (lVar9 != 0) {
      *(undefined1 *)(lVar9 + 0x110) = 0;
      FUN_71025e9d50((long *)(lVar9 + 0x108),uVar5,(long ****)param_3,(byte ****)param_4,
                     (long ****)param_5,param_6,param_7,param_8);
      if ((*(char *)(lVar9 + 0xe0) != '\0') && (*(long *)(lVar9 + 200) != 0)) {
        *(undefined2 *)(*(long *)(lVar9 + 200) + 0x30) = 0x101;
      }
      if (*(long *)(lVar9 + 0xd8) != 0) {
        *(undefined1 *)(*(long *)(lVar9 + 0xd8) + 0x21) = 1;
      }
      uVar5 = extraout_x1_00;
      if (*(char *)(lVar9 + 0xe0) != '\0') {
        *(undefined1 *)(*(long *)(lVar9 + 0xb0) + 0x10) = 0;
      }
    }
    do {
      plVar1 = plVar1 + 2;
      if (plVar1 == plVar2) goto LAB_7102c00118;
    } while ((int)plVar1[1] - 2U < 3);
  }
LAB_7102c00118:
  if (((DAT_71053144d8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_71053144d8), iVar4 != 0)) {
    FUN_7101764000();
    ppuVar6 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
    param_3 = (char *)ppuVar6;
  }
  if (DAT_71052c51ba == '\0') {
    plVar10 = (long *)**(long **)(param_1[0x60] + 0x18);
    do {
      if (plVar10 == (long *)(*(long **)(param_1[0x60] + 0x18))[1]) goto LAB_7102c00134;
      lVar9 = *plVar10;
      plVar10 = plVar10 + 1;
    } while ((*(ulong *)(lVar9 + 0xa0) & 0xffffffffff) != 0x7b569df99);
    puVar8 = *(undefined8 **)(lVar9 + 0x130);
    param_3 = "IPP0002";
    FUN_71025f55b0((undefined8 *)*puVar8,(undefined8 *)puVar8[1],"IPP0002");
  }
LAB_7102c00134:
  plVar10 = (long *)param_1[0x66];
  local_50 = 0;
  uStack_48 = 0x6d68e50c5;
  FUN_7102632aa0(*plVar10,&local_50,(long ****)param_3,(byte ****)param_4,(long ****)param_5,param_6
                 ,param_7,param_8);
  FUN_7102630ae0((ulong *)*plVar10);
  *(undefined4 *)((long)param_1 + 0x8fc) = 0;
  return;
}

