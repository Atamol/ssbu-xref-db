// addr:      7102363730
// offset:    0x2363730
// name:      FUN_7102363730
// mangled:   
// signature: undefined __cdecl FUN_7102363730(long param_1, long param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7102363730(long param_1,long param_2,undefined **param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 uVar7;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  long *********ppppppppplVar8;
  byte ****ppppbVar9;
  long ****pppplVar10;
  uint uVar11;
  long *plVar12;
  undefined1 auVar13 [16];
  long ***local_48;
  undefined4 local_34;
  
  plVar2 = (long *)FUN_710392e290(0x10,0x130,(long ****)param_3,param_4,param_5,param_6,param_7,
                                  param_8);
  if (plVar2 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_34 = 0;
      local_48 = (long ***)&DAT_00000130;
      param_3 = (undefined **)&local_48;
      uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
      if (((uVar3 & 1) != 0) &&
         (plVar2 = (long *)FUN_710392e290(0x10,0x130,(long ****)param_3,param_4,param_5,param_6,
                                          param_7,param_8), plVar2 != (long *)0x0))
      goto LAB_71023637b0;
    }
    plVar2 = (long *)0x0;
  }
LAB_71023637b0:
  *plVar2 = param_1 + 0x50;
  plVar2[1] = (long)plVar2;
  plVar2[2] = 0;
  plVar2[3] = 0;
  plVar2[4] = 0;
  plVar2[5] = 0;
  *(undefined4 *)(plVar2 + 0x23) = 0xffffffff;
  *(undefined1 *)((long)plVar2 + 0x11c) = 0;
  plVar2[6] = 0;
  plVar2[0x21] = 0;
  plVar2[0x22] = 0xffffffff;
  plVar2[0x1f] = 0;
  plVar2[0x20] = 0;
  plVar2[0x1d] = 0;
  plVar2[0x1e] = 0;
  plVar2[0x1b] = 0;
  plVar2[0x1c] = 0;
  plVar2[0x19] = 0;
  plVar2[0x1a] = 0;
  plVar2[0x17] = 0;
  plVar2[0x18] = 0;
  plVar2[0x15] = 0;
  plVar2[0x16] = 0;
  plVar2[0x13] = 0;
  plVar2[0x14] = 0;
  plVar2[0x11] = 0;
  plVar2[0x12] = 0;
  plVar2[0xf] = 0;
  plVar2[0x10] = 0;
  plVar2[0xd] = 0;
  plVar2[0xe] = 0;
  plVar2[0xb] = 0;
  plVar2[0xc] = 0;
  plVar2[9] = 0;
  plVar2[10] = 0;
  plVar2[7] = 0;
  plVar2[8] = 0;
  puVar4 = (undefined8 *)
           FUN_710392e290(0x10,0x80,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar4 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_34 = 0;
      local_48 = (long ***)&DAT_00000080;
      param_3 = (undefined **)&local_48;
      uVar3 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_34);
      if (((uVar3 & 1) != 0) &&
         (puVar4 = (undefined8 *)
                   FUN_710392e290(0x10,0x80,(long ****)param_3,param_4,param_5,param_6,param_7,
                                  param_8), puVar4 != (undefined8 *)0x0)) goto LAB_7102363860;
    }
    puVar4 = (undefined8 *)0x0;
  }
LAB_7102363860:
  *puVar4 = &PTR_FUN_7105181b40;
  puVar4[2] = 0;
  puVar4[1] = puVar4 + 2;
  puVar4[5] = 0;
  puVar4[3] = 0;
  puVar4[4] = puVar4 + 5;
  puVar4[8] = 0;
  puVar4[6] = 0;
  puVar4[7] = puVar4 + 8;
  puVar4[0xb] = 0;
  puVar4[9] = 0;
  puVar4[10] = puVar4 + 0xb;
  *(undefined4 *)(puVar4 + 0xd) = 3;
  puVar4[0xc] = 0;
  *(undefined4 *)(puVar4 + 0xf) = 0;
  puVar4[0xe] = 0;
  *(undefined2 *)(puVar4 + 0xf) = 0x101;
  plVar2[0x24] = (long)puVar4;
  *(undefined2 *)(plVar2 + 0x25) = 0x100;
  *(undefined1 *)((long)plVar2 + 0x12a) = 0;
  FUN_7103723a90(*plVar2,&DAT_7105329190,(long ****)param_3,param_4,param_5,param_6,param_7,param_8)
  ;
  plVar2[6] = (long)FUN_710235ab70;
  plVar2[7] = 0;
  plVar2[10] = (long)FUN_710235ae90;
  plVar2[0xb] = 0;
  plVar2[0xc] = (long)FUN_710235aed0;
  plVar2[0xd] = 0;
  plVar2[0x10] = (long)FUN_710235c580;
  plVar2[0x11] = 0;
  plVar2[0x12] = (long)FUN_710235c780;
  plVar2[0x13] = 0;
  plVar2[8] = (long)FUN_710235ae80;
  plVar2[9] = 0;
  plVar2[0xe] = (long)FUN_710235c380;
  plVar2[0xf] = 0;
  plVar2[0x14] = (long)FUN_710235cb00;
  plVar2[0x15] = 0;
  plVar2[0x16] = (long)FUN_710235cd90;
  plVar2[0x17] = 0;
  if (*(uint *)((long)plVar2 + 0x10c) < 0x13) {
    *(undefined4 *)((long)plVar2 + (long)(int)*(uint *)((long)plVar2 + 0x10c) * 4 + 0xc0) = 0;
    uVar7 = extraout_x1;
    if (((DAT_71053144d8 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&DAT_71053144d8), uVar7 = extraout_x1_03, iVar1 != 0)) {
      FUN_7101764000();
      param_3 = &PTR_LOOP_7104f17000;
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
      uVar7 = extraout_x1_04;
    }
    if ((*(int *)(param_2 + 0x5c) == -0x2e04f471) &&
       (iVar1 = strcmp((char *)(param_2 + 100),"MenuSequenceScene"), uVar7 = extraout_x1_00,
       iVar1 == 0)) {
      if (0x12 < *(uint *)((long)plVar2 + 0x10c)) goto LAB_7102363d18;
      *(undefined4 *)((long)plVar2 + (long)(int)*(uint *)((long)plVar2 + 0x10c) * 4 + 0xc0) = 7;
      if (*(int *)((long)plVar2 + 0x10c) < 0x12) {
        uVar11 = *(int *)((long)plVar2 + 0x10c) + 1;
        *(uint *)((long)plVar2 + 0x10c) = uVar11;
        if (0x12 < uVar11) goto LAB_7102363d18;
        *(undefined4 *)((long)plVar2 + (long)(int)uVar11 * 4 + 0xc0) = 8;
      }
      *(undefined1 *)((long)plVar2 + 0x12a) = 1;
      puVar4 = *(undefined8 **)(param_2 + 0xa8);
    }
    else {
      DAT_71053050f0 = 0;
      if (0x12 < *(uint *)((long)plVar2 + 0x10c)) goto LAB_7102363d18;
      *(undefined4 *)((long)plVar2 + (long)(int)*(uint *)((long)plVar2 + 0x10c) * 4 + 0xc0) = 3;
      puVar4 = *(undefined8 **)(param_2 + 0xa8);
    }
    if (puVar4 != (undefined8 *)0x0) {
      if (((DAT_7105328150 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_7105328150), iVar1 != 0))
      {
        if (((DAT_7105324750 & 1) == 0) &&
           (iVar1 = __cxa_guard_acquire(&DAT_7105324750), iVar1 != 0)) {
          DAT_7105324758 = 0;
          __cxa_guard_release(&DAT_7105324750);
        }
        DAT_7105328158 = &DAT_7105324758;
        __cxa_guard_release(&DAT_7105328150);
      }
      auVar13 = (**(code **)*puVar4)(puVar4);
      uVar7 = auVar13._8_8_;
      for (puVar5 = auVar13._0_8_; puVar5 != (undefined8 *)0x0; puVar5 = (undefined8 *)*puVar5) {
        if ((undefined8 **)puVar5 == &DAT_7105328158) {
          DAT_71053050f0 = 0;
          if ((*(int *)(puVar4 + 1) == 0x2f9a03cb) &&
             (iVar1 = strcmp((char *)(puVar4 + 2),"MainMenuScene"), uVar7 = extraout_x1_01,
             iVar1 == 0)) {
            if (((DAT_71053144d8 & 1) == 0) &&
               (iVar1 = __cxa_guard_acquire(&DAT_71053144d8), uVar7 = extraout_x1_05, iVar1 != 0)) {
              FUN_7101764000();
              param_3 = &PTR_LOOP_7104f17000;
              FUN_71000001c0();
              __cxa_guard_release(&DAT_71053144d8);
              uVar7 = extraout_x1_06;
            }
            if (DAT_71053083c8 == 0) {
              DAT_7105307788 = 0;
            }
            plVar2[2] = 0;
            plVar2[3] = 0;
            *(undefined8 *)((long)plVar2 + 0x104) = 0;
            *(undefined8 *)((long)plVar2 + 0xfc) = 0;
            *(undefined8 *)((long)plVar2 + 0xf4) = 0;
            *(undefined8 *)((long)plVar2 + 0xec) = 0;
            *(undefined8 *)((long)plVar2 + 0xe4) = 0;
            *(undefined8 *)((long)plVar2 + 0xdc) = 0;
            *(undefined8 *)((long)plVar2 + 0xd4) = 0;
            *(undefined8 *)((long)plVar2 + 0xcc) = 0;
            *(undefined8 *)((long)plVar2 + 0x114) = 0xffffffff00000000;
            plVar2[0x18] = 0x800000007;
            *(undefined4 *)(plVar2 + 0x19) = 2;
            *(undefined1 *)((long)plVar2 + 0x11c) = 0;
            *(undefined8 *)((long)plVar2 + 0x10c) = 0xffffffff00000003;
            uVar11 = 3;
            goto LAB_7102363b10;
          }
          break;
        }
      }
    }
    if (*(int *)((long)plVar2 + 0x10c) < 0x12) {
      uVar11 = *(int *)((long)plVar2 + 0x10c) + 1;
      *(uint *)((long)plVar2 + 0x10c) = uVar11;
      if (0x12 < uVar11) goto LAB_7102363d18;
LAB_7102363b10:
      *(undefined4 *)((long)plVar2 + (long)(int)uVar11 * 4 + 0xc0) = 0;
    }
    FUN_71032e5e60(*(long *)(DAT_710532f7c8 + 8),uVar7,(long ****)param_3,param_4,param_5,param_6,
                   param_7,param_8);
    lVar6 = plVar2[0x24];
    FUN_710323beb0(lVar6,(ulong *)&DAT_7104545038,(long)*(int *)(lVar6 + 0x70),
                   (ulong)*(uint *)(lVar6 + 0x68),(long ****)0x0,param_6,param_7,param_8);
    lVar6 = plVar2[0x24];
    FUN_710323beb0(lVar6,(ulong *)&DAT_7104545040,(long)*(int *)(lVar6 + 0x70),
                   (ulong)*(uint *)(lVar6 + 0x68),(long ****)0x1,param_6,param_7,param_8);
    lVar6 = plVar2[0x24];
    FUN_710323beb0(lVar6,(ulong *)&DAT_7104544ff8,(long)*(int *)(lVar6 + 0x70),
                   (ulong)*(uint *)(lVar6 + 0x68),(long ****)0x0,param_6,param_7,param_8);
    lVar6 = plVar2[0x24];
    FUN_710323beb0(lVar6,(ulong *)&DAT_7104544e78,(long)*(int *)(lVar6 + 0x70),
                   (ulong)*(uint *)(lVar6 + 0x68),(long ****)0x0,param_6,param_7,param_8);
    lVar6 = plVar2[0x24];
    FUN_710323beb0(lVar6,(ulong *)&DAT_7104544e80,(long)*(int *)(lVar6 + 0x70),
                   (ulong)*(uint *)(lVar6 + 0x68),(long ****)0x1,param_6,param_7,param_8);
    lVar6 = plVar2[0x24];
    ppppppppplVar8 = (long *********)(long)*(int *)(lVar6 + 0x70);
    ppppbVar9 = (byte ****)(ulong)*(uint *)(lVar6 + 0x68);
    pppplVar10 = (long ****)0x0;
    FUN_710323beb0(lVar6,(ulong *)&DAT_7104544ff8,(long)ppppppppplVar8,(ulong)ppppbVar9,
                   (long ****)0x0,param_6,param_7,param_8);
    puVar4 = *(undefined8 **)(DAT_710593b990 + 8);
    puVar4[2] = 0xffffffffffffffff;
    puVar4[3] = 0xffffffffffffffff;
    *puVar4 = 0xffffffffffffffff;
    puVar4[1] = 0xffffffffffffffff;
    plVar12 = *(long **)(param_1 + 0xe8);
    *(long **)(param_1 + 0xe8) = plVar2;
    if (plVar12 == (long *)0x0) {
      return;
    }
    FUN_7103723e70(*plVar12,&DAT_7105329190,(long ****)ppppppppplVar8,ppppbVar9,pppplVar10,param_6,
                   param_7,param_8);
    FUN_710323b9e0(plVar12[0x24],extraout_x1_02,ppppppppplVar8,ppppbVar9,pppplVar10,param_6,param_7,
                   param_8);
    plVar2 = (long *)plVar12[0x24];
    plVar12[0x24] = 0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    FUN_710392eb40((ulong)plVar12);
    return;
  }
LAB_7102363d18:
                    /* WARNING: Subroutine does not return */
  abort();
}

