// addr:      71022fe0d0
// offset:    0x22fe0d0
// name:      FUN_71022fe0d0
// mangled:   
// signature: undefined __cdecl FUN_71022fe0d0(long param_1, long param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71022fe0d0(long param_1,long param_2,undefined **param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined1 uVar6;
  byte *pbVar7;
  uint uVar8;
  long *plVar9;
  uint uVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  undefined4 local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined2 local_70;
  
  plVar3 = (long *)FUN_710392e290(0x10,0xe8,(long ****)param_3,param_4,param_5,param_6,param_7,
                                  param_8);
  if (plVar3 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_8c = 0;
      local_88 = (long ***)&DAT_000000e8;
      param_3 = (undefined **)&local_88;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_8c);
      if (((uVar4 & 1) != 0) &&
         (plVar3 = (long *)FUN_710392e290(0x10,0xe8,(long ****)param_3,param_4,param_5,param_6,
                                          param_7,param_8), plVar3 != (long *)0x0))
      goto LAB_71022fe150;
    }
    plVar3 = (long *)0x0;
  }
LAB_71022fe150:
  *plVar3 = param_1 + 0x50;
  plVar3[1] = (long)plVar3;
  plVar3[2] = 0;
  plVar3[3] = 0;
  *(undefined4 *)(plVar3 + 0x1b) = 0xffffffff;
  *(undefined1 *)((long)plVar3 + 0xdc) = 0;
  plVar3[6] = 0;
  *(undefined2 *)(plVar3 + 0x1c) = 0;
  plVar3[4] = 0;
  plVar3[5] = 0;
  plVar3[0x19] = 0;
  plVar3[0x1a] = 0xffffffff;
  plVar3[0x17] = 0;
  plVar3[0x18] = 0;
  plVar3[0x15] = 0;
  plVar3[0x16] = 0;
  plVar3[0x13] = 0;
  plVar3[0x14] = 0;
  plVar3[0x11] = 0;
  plVar3[0x12] = 0;
  plVar3[0xf] = 0;
  plVar3[0x10] = 0;
  plVar3[0xd] = 0;
  plVar3[0xe] = 0;
  plVar3[0xb] = 0;
  plVar3[0xc] = 0;
  plVar3[9] = 0;
  plVar3[10] = 0;
  plVar3[7] = 0;
  plVar3[8] = 0;
  puVar11 = *(undefined8 **)(param_2 + 0xa8);
  if (puVar11 != (undefined8 *)0x0) {
    if (((DAT_7105328520 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_7105328520), iVar2 != 0)) {
      if (((DAT_7105328150 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_7105328150), iVar2 != 0))
      {
        if (((DAT_7105324750 & 1) == 0) &&
           (iVar2 = __cxa_guard_acquire(&DAT_7105324750), iVar2 != 0)) {
          DAT_7105324758 = 0;
          __cxa_guard_release(&DAT_7105324750);
        }
        DAT_7105328158 = &DAT_7105324758;
        __cxa_guard_release(&DAT_7105328150);
      }
      DAT_7105328528 = &DAT_7105328158;
      __cxa_guard_release(&DAT_7105328520);
    }
    for (puVar5 = (undefined8 *)(**(code **)*puVar11)(puVar11); puVar5 != (undefined8 *)0x0;
        puVar5 = (undefined8 *)*puVar5) {
      if ((undefined8 **)puVar5 == &DAT_7105328528) {
        *(undefined1 *)(plVar3 + 0x1c) = *(undefined1 *)((long)puVar11 + 0x52);
        *(undefined1 *)((long)plVar3 + 0xe1) = *(undefined1 *)((long)puVar11 + 0x53);
        goto LAB_71022fe2f0;
      }
    }
  }
  if (((DAT_71053144d8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_71053144d8), iVar2 != 0)) {
    FUN_7101764000();
    param_3 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  iVar2 = DAT_71053050f0;
  if (((*(int *)(param_2 + 0x5c) == 0x66ef197f) &&
      (iVar1 = strcmp((char *)(param_2 + 100),"CollectionGetterSequenceScene"), iVar2 != 0x5020000))
     && (iVar1 == 0)) {
    uStack_80 = 0x75716553756e654d;
    local_78 = 0x6e65635365636e65;
    local_70 = 0x65;
    uVar10 = 0x811c9dc5;
    uVar8 = 0x4d;
    pbVar7 = (byte *)((long)&uStack_80 + 1);
    do {
      uVar10 = uVar10 * 0x89 ^ uVar8;
      uVar8 = (uint)*pbVar7;
      pbVar7 = pbVar7 + 1;
    } while (uVar8 != 0);
    local_88 = (long ***)CONCAT44(0x11,uVar10);
    lVar12 = *(long *)(*(long *)(param_2 + 8) + 0x20);
    for (lVar13 = *(long *)(lVar12 + 8); lVar12 != lVar13; lVar13 = *(long *)(lVar13 + 8)) {
      if ((*(uint *)(lVar13 + 0x10) == uVar10) &&
         (iVar2 = strcmp((char *)(lVar13 + 0x18),(char *)&uStack_80), iVar2 == 0)) {
        uVar6 = 0;
        goto LAB_71022fe2ec;
      }
    }
    uVar6 = 1;
LAB_71022fe2ec:
    *(undefined1 *)(plVar3 + 0x1c) = uVar6;
  }
LAB_71022fe2f0:
  FUN_7103723a90(*plVar3,&DAT_71053284e8,(long ****)param_3,param_4,param_5,param_6,param_7,param_8)
  ;
  plVar3[6] = (long)FUN_71022fd9a0;
  plVar3[7] = 0;
  plVar3[8] = (long)FUN_71022fda60;
  plVar3[9] = 0;
  plVar3[10] = (long)FUN_71022fda70;
  plVar3[0xb] = 0;
  plVar3[0xc] = (long)FUN_71022fdab0;
  plVar3[0xd] = 0;
  plVar3[0xe] = (long)FUN_71022fdcd0;
  plVar3[0xf] = 0;
  if (0x12 < *(uint *)((long)plVar3 + 0xcc)) {
LAB_71022fe448:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  *(undefined4 *)((long)plVar3 + (long)(int)*(uint *)((long)plVar3 + 0xcc) * 4 + 0x80) = 3;
  if (*(int *)((long)plVar3 + 0xcc) < 0x12) {
    uVar10 = *(int *)((long)plVar3 + 0xcc) + 1;
    *(uint *)((long)plVar3 + 0xcc) = uVar10;
    if (0x12 < uVar10) goto LAB_71022fe448;
    *(undefined4 *)((long)plVar3 + (long)(int)uVar10 * 4 + 0x80) = 0;
  }
  plVar9 = *(long **)(param_1 + 0xe8);
  *(long **)(param_1 + 0xe8) = plVar3;
  if (plVar9 == (long *)0x0) {
    return;
  }
  FUN_7103723e70(*plVar9,&DAT_71053284e8,(long ****)param_3,param_4,param_5,param_6,param_7,param_8)
  ;
  FUN_710392eb40((ulong)plVar9);
  return;
}

