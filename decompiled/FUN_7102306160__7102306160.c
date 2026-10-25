// addr:      7102306160
// offset:    0x2306160
// name:      FUN_7102306160
// mangled:   
// signature: undefined __cdecl FUN_7102306160(long param_1, long param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7102306160(long param_1,long param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long ****pppplVar7;
  long ****pppplVar8;
  undefined **ppuVar9;
  long lVar10;
  long *plVar11;
  long ***local_40;
  undefined4 local_34;
  
  pppplVar7 = &local_40;
  pppplVar8 = &local_40;
  plVar3 = (long *)FUN_710392e290(0x10,0x2290,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar3 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_34 = 0;
      local_40 = (long ***)0x2290;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
      param_3 = pppplVar7;
      if (((uVar4 & 1) != 0) &&
         (plVar3 = (long *)FUN_710392e290(0x10,0x2290,pppplVar7,param_4,param_5,param_6,param_7,
                                          param_8), param_3 = pppplVar7, plVar3 != (long *)0x0))
      goto LAB_71023061dc;
    }
    plVar3 = (long *)0x0;
  }
LAB_71023061dc:
  *plVar3 = param_1 + 0x50;
  plVar3[1] = (long)plVar3;
  *(undefined4 *)(plVar3 + 0x1b) = 0xffffffff;
  plVar3[2] = 0;
  plVar3[3] = 0;
  *(undefined1 *)((long)plVar3 + 0xdc) = 0;
  plVar3[6] = 0;
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
  puVar5 = (undefined8 *)FUN_710392e290(0x10,0x80,param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar5 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_34 = 0;
      local_40 = (long ***)&DAT_00000080;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
      if (((uVar4 & 1) != 0) &&
         (puVar5 = (undefined8 *)
                   FUN_710392e290(0x10,0x80,pppplVar8,param_4,param_5,param_6,param_7,param_8),
         puVar5 != (undefined8 *)0x0)) goto LAB_7102306274;
    }
    puVar5 = (undefined8 *)0x0;
  }
LAB_7102306274:
  *puVar5 = &PTR_FUN_7105181b40;
  puVar5[2] = 0;
  puVar5[1] = puVar5 + 2;
  puVar5[5] = 0;
  puVar5[3] = 0;
  puVar5[4] = puVar5 + 5;
  puVar5[8] = 0;
  puVar5[6] = 0;
  puVar5[7] = puVar5 + 8;
  puVar5[0xb] = 0;
  *(undefined4 *)(puVar5 + 0xd) = 3;
  *(undefined4 *)(puVar5 + 0xf) = 0;
  *(undefined2 *)(puVar5 + 0xf) = 0x101;
  puVar5[0xc] = 0;
  puVar5[0xe] = 0;
  puVar5[9] = 0;
  puVar5[10] = puVar5 + 0xb;
  plVar3[0x1c] = (long)puVar5;
  lVar10 = DAT_710532f840;
  plVar3[0x1d] = *(long *)(*(long *)(DAT_710532f840 + 8) + 0xb8);
  lVar10 = *(long *)(*(long *)(lVar10 + 8) + 0xc0);
  *(undefined2 *)((long)plVar3 + 0x104) = 0x100;
  *(undefined2 *)(plVar3 + 0x1f) = 0;
  *(undefined8 *)((long)plVar3 + 0xfc) = 0;
  *(undefined1 *)(plVar3 + 0x23) = 0;
  *(undefined1 *)(plVar3 + 0x2c) = 0;
  plVar3[0x21] = 0x100000000;
  plVar3[0x22] = 0;
  plVar3[0x2b] = 0;
  *(undefined1 *)(plVar3 + 0x35) = 0;
  plVar3[0x34] = 0;
  plVar3[0x1e] = lVar10;
  memset(plVar3 + 0x3d,0,0x1000);
  *(undefined1 *)(plVar3 + 0x23d) = 1;
  *(undefined4 *)((long)plVar3 + 0x11ec) = 0;
  *(undefined1 *)(plVar3 + 0x23e) = 1;
  *(undefined1 *)((long)plVar3 + 0x11fc) = 0;
  *(undefined8 *)((long)plVar3 + 0x11f4) = 0;
  ppuVar9 = (undefined **)&DAT_00001000;
  *(undefined4 *)((long)plVar3 + 0x123c) = 0x20;
  memset((void *)((long)plVar3 + 0x128c),0,0x1000);
  *(undefined8 *)((long)plVar3 + 0x1245) = 0;
  plVar3[0x248] = 0;
  FUN_7103723a90(*plVar3,&DAT_71053286c0,(long ****)ppuVar9,param_4,param_5,param_6,param_7,param_8)
  ;
  plVar3[6] = (long)FUN_71023047d0;
  plVar3[7] = 0;
  plVar3[8] = (long)FUN_71023049e0;
  plVar3[9] = 0;
  plVar3[0xc] = (long)FUN_7102305aa0;
  plVar3[0xd] = 0;
  plVar3[10] = (long)FUN_7102304a90;
  plVar3[0xb] = 0;
  plVar3[0xe] = (long)FUN_7102305d10;
  plVar3[0xf] = 0;
  puVar5 = *(undefined8 **)(param_2 + 0xa8);
  if (puVar5 != (undefined8 *)0x0) {
    if (((DAT_7105328150 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_7105328150), iVar2 != 0)) {
      if (((DAT_7105324750 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_7105324750), iVar2 != 0))
      {
        DAT_7105324758 = 0;
        __cxa_guard_release(&DAT_7105324750);
      }
      DAT_7105328158 = &DAT_7105324758;
      __cxa_guard_release(&DAT_7105328150);
    }
    for (puVar6 = (undefined8 *)(**(code **)*puVar5)(puVar5); puVar6 != (undefined8 *)0x0;
        puVar6 = (undefined8 *)*puVar6) {
      if ((undefined8 **)puVar6 == &DAT_7105328158) {
        if (*(int *)(puVar5 + 1) == -0x1cc470d9) {
          iVar2 = strcmp((char *)(puVar5 + 2),"StageSelectScene");
          if (iVar2 == 0) {
            ppuVar9 = (undefined **)0x1;
            FUN_71033145d0(DAT_710532f8d0,0xd9ffff198605a867,1,param_4,param_5,param_6,param_7,
                           param_8);
            if (0x12 < *(uint *)((long)plVar3 + 0xcc)) goto LAB_710230661c;
            *(undefined4 *)((long)plVar3 + (long)(int)*(uint *)((long)plVar3 + 0xcc) * 4 + 0x80) = 4
            ;
            break;
          }
        }
        else if ((*(int *)(puVar5 + 1) == -0xed9486) &&
                (iVar2 = strcmp((char *)(puVar5 + 2),"CharaSelectScene"), iVar2 == 0)) {
          ppuVar9 = (undefined **)0x1;
          FUN_71033145d0(DAT_710532f8d0,0xd9ffff198605a867,1,param_4,param_5,param_6,param_7,param_8
                        );
          if (0x12 < *(uint *)((long)plVar3 + 0xcc)) goto LAB_710230661c;
          *(undefined4 *)((long)plVar3 + (long)(int)*(uint *)((long)plVar3 + 0xcc) * 4 + 0x80) = 3;
          break;
        }
        if (0x12 < *(uint *)((long)plVar3 + 0xcc)) {
LAB_710230661c:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        *(undefined4 *)((long)plVar3 + (long)(int)*(uint *)((long)plVar3 + 0xcc) * 4 + 0x80) = 0;
        break;
      }
    }
  }
  plVar11 = *(long **)(param_1 + 0xe8);
  *(long **)(param_1 + 0xe8) = plVar3;
  if (plVar11 != (long *)0x0) {
    FUN_7103723e70(*plVar11,&DAT_71053286c0,(long ****)ppuVar9,param_4,param_5,param_6,param_7,
                   param_8);
    FUN_710323b9e0(plVar11[0x1c],extraout_x1,(long *********)ppuVar9,param_4,param_5,param_6,param_7
                   ,param_8);
    plVar3 = (long *)plVar11[0x1c];
    plVar11[0x1c] = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 8))();
    }
    FUN_710392eb40((ulong)plVar11);
  }
  if (((DAT_71053144d8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_71053144d8), iVar2 != 0)) {
    FUN_7101764000();
    ppuVar9 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  DAT_71053050f0 = 0x5040000;
  FUN_710178c070(&DAT_71053050f0);
  lVar10 = *(long *)(DAT_710532f8e0 + 8);
  uVar1 = FUN_7103318640(lVar10,2,(long ****)ppuVar9,param_4,param_5,param_6,param_7,param_8);
  if (((uVar1 & 1) == 0) && (*(char *)(lVar10 + 0x28) != '\0')) {
    return;
  }
  FUN_71033264b0(lVar10,extraout_x1_00,(long ****)ppuVar9,param_4,param_5,param_6,param_7,param_8);
  return;
}

