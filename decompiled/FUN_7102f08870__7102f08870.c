// addr:      7102f08870
// offset:    0x2f08870
// name:      FUN_7102f08870
// mangled:   
// signature: undefined __cdecl FUN_7102f08870(long * param_1, undefined8 param_2, long * * * * * * * * * param_3, undefined1[16] * param_4, undefined1[16] * param_5, undefined1[16] * param_6, long * * * * * * param_7, long * * * param_8)


void FUN_7102f08870(long *param_1,undefined8 param_2,long *********param_3,
                   undefined1 (*param_4) [16],undefined1 (*param_5) [16],undefined1 (*param_6) [16],
                   long ******param_7,long ***param_8)

{
  undefined8 *puVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  undefined1 *puVar5;
  long *plVar6;
  long *********ppppppppplVar7;
  char *pcVar8;
  long *********ppppppppplVar9;
  long lVar10;
  ulong uVar11;
  uint *puVar12;
  undefined8 *puVar13;
  long *plVar14;
  long ********local_40;
  undefined4 local_34;
  
  ppppppppplVar7 = &local_40;
  ppppppppplVar9 = &local_40;
  FUN_71025d9250(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  plVar4 = (long *)FUN_710392e290(0x10,0x18,(long ****)param_3,(byte ****)param_4,(long ****)param_5
                                  ,param_6,param_7,param_8);
  if (plVar4 == (long *)0x0) {
    local_34 = 0;
    local_40 = (long ********)&SUB_00000018;
    (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
    plVar4 = (long *)FUN_710392e290(0x10,0x18,(long ****)ppppppppplVar7,(byte ****)param_4,
                                    (long ****)param_5,param_6,param_7,param_8);
    param_3 = ppppppppplVar7;
  }
  lVar10 = param_1[0x68];
  *(undefined1 *)(plVar4 + 2) = 0;
  *plVar4 = lVar10;
  plVar4[1] = -1;
  uVar11 = param_1[0xf9];
  param_1[0xf9] = (long)plVar4;
  if (uVar11 != 0) {
    FUN_710392eb40(uVar11);
  }
  if (2 < *(uint *)(param_1 + 0x17)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar10 = *(long *)(DAT_710532a9d0 + (ulong)*(uint *)(param_1 + 0x17) * 8);
  for (puVar12 = *(uint **)(lVar10 + 0x228); puVar12 != *(uint **)(lVar10 + 0x230);
      puVar12 = puVar12 + 1) {
    uVar2 = *puVar12;
    if (((uVar2 != 0xffffff) &&
        (uVar2 < *(uint *)(*(long *)(**(long **)(DAT_7105332f20 + 0x78) + 0x40) + 4))) &&
       (*(long *)(*(long *)(**(long **)(DAT_7105332f20 + 0x78) + 0x60) + (ulong)uVar2 * 0x20 + 0x18)
        == 0xfdccdbe26)) {
      FUN_7103540a00(DAT_7105332f20,uVar2);
      FUN_7103720ec0(param_1 + 0xe7,uVar2,param_3,(byte ****)param_4,(long ****)param_5,param_6,
                     param_7,param_8);
      FUN_7103540b10(DAT_7105332f20,uVar2,param_3,(byte ****)param_4,(long ****)param_5,param_6,
                     param_7,param_8);
      goto LAB_7102f08988;
    }
  }
  FUN_7103720ec0(param_1 + 0xe7,0xffffff,param_3,(byte ****)param_4,(long ****)param_5,param_6,
                 param_7,param_8);
LAB_7102f08988:
  plVar4 = (long *)**(long **)(param_1[0x60] + 0x18);
  while ((*(ulong *)(*plVar4 + 0xa0) & 0xffffffffff) != 0x7b569df99) {
    plVar4 = plVar4 + 1;
  }
  puVar13 = *(undefined8 **)(*plVar4 + 0x130);
  if (((DAT_71053144d8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_71053144d8), iVar3 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  pcVar8 = "IPP0002";
  puVar1 = (undefined8 *)*puVar13;
  puVar13 = (undefined8 *)puVar13[1];
  if (DAT_71052c51ba == '\0') {
    FUN_71025f55b0(puVar1,puVar13,"IPP0002");
  }
  else {
    FUN_71025f5420(puVar1,puVar13,"IPP0002");
  }
  puVar5 = (undefined1 *)
           FUN_710392e290(0x10,0x40,(long ****)pcVar8,(byte ****)param_4,(long ****)param_5,param_6,
                          param_7,param_8);
  if (puVar5 == (undefined1 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_34 = 0;
      local_40 = (long ********)&DAT_00000040;
      uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
      pcVar8 = (char *)ppppppppplVar9;
      if (((uVar11 & 1) != 0) &&
         (puVar5 = (undefined1 *)
                   FUN_710392e290(0x10,0x40,(long ****)ppppppppplVar9,(byte ****)param_4,
                                  (long ****)param_5,param_6,param_7,param_8),
         pcVar8 = (char *)ppppppppplVar9, puVar5 != (undefined1 *)0x0)) goto LAB_7102f08a50;
    }
    puVar5 = (undefined1 *)0x0;
  }
LAB_7102f08a50:
  FUN_7102f09230(puVar5,param_1[0x67],(undefined **)pcVar8,(byte ****)param_4,(long ****)param_5,
                 param_6,param_7,param_8);
  plVar4 = (long *)param_1[0xfa];
  param_1[0xfa] = (long)puVar5;
  if (plVar4 != (long *)0x0) {
    lVar10 = plVar4[5];
    plVar14 = plVar4;
    while (lVar10 != 0) {
      plVar14 = plVar14 + 1;
      plVar6 = (long *)*plVar14;
      lVar10 = lVar10 + -1;
      *plVar14 = 0;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 8))();
      }
    }
    FUN_710392eb40((ulong)plVar4);
  }
  return;
}

