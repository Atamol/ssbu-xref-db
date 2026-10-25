// addr:      7102c2bf50
// offset:    0x2c2bf50
// name:      FUN_7102c2bf50
// mangled:   
// signature: undefined __cdecl FUN_7102c2bf50(undefined8 * param_1, long param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, long * * * param_7, long * * * param_8)


void FUN_7102c2bf50(undefined8 *param_1,long param_2,undefined **param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,long ***param_7,long ***param_8)

{
  int iVar1;
  undefined1 uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong *puVar10;
  long *plVar11;
  long lVar12;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 uVar13;
  long *plVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  uint *puVar18;
  byte *pbVar19;
  uint uVar20;
  code *pcVar21;
  uint uVar22;
  long lVar23;
  void *__src;
  undefined1 (*__n) [16];
  ulong uVar24;
  long *plVar25;
  long lVar26;
  float fVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined1 auVar31 [16];
  undefined8 local_a0;
  undefined4 local_94;
  
  *param_1 = &PTR_FUN_7105123198;
  param_1[1] = param_2;
  param_1[2] = param_2 + 0x738;
  param_1[3] = 0x447a0000447a0000;
  *(undefined4 *)(param_1 + 6) = 0x44960000;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined8 *)((long)param_1 + 0x39) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  *(undefined2 *)(param_1 + 0x17) = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0x10100ffffffff;
  *(undefined4 *)(param_1 + 0x1c) = 0x3f800000;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  if (((DAT_71053144d8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_71053144d8), iVar5 != 0)) {
    FUN_7101764000();
    param_3 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  lVar26 = 0;
  plVar25 = param_1 + 0xf;
  do {
    switch((int)lVar26) {
    case 1:
      puVar7 = (undefined8 *)
               FUN_710392e290(0x10,0x158,(long ****)param_3,param_4,param_5,param_6,param_7,param_8)
      ;
      if (puVar7 == (undefined8 *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_94 = 0;
          local_a0 = 0x158;
          param_3 = (undefined **)&local_a0;
          uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_94);
          if (((uVar8 & 1) != 0) &&
             (puVar7 = (undefined8 *)
                       FUN_710392e290(0x10,0x158,(long ****)param_3,param_4,param_5,param_6,param_7,
                                      param_8), puVar7 != (undefined8 *)0x0)) goto LAB_7102c2c088;
        }
        puVar7 = (undefined8 *)0x0;
      }
LAB_7102c2c088:
      puVar7[1] = param_1[1];
      puVar7[2] = 0x100000000;
      *(undefined4 *)(puVar7 + 0x23) = 0x42f00000;
      *puVar7 = &PTR_FUN_71051242f8;
      *(undefined8 *)((long)puVar7 + 300) = 0;
      *(undefined8 *)((long)puVar7 + 0x124) = 0;
      *(undefined8 *)((long)puVar7 + 0x11c) = 0;
      *(undefined1 *)(puVar7 + 0x2a) = 0;
      puVar7[0x21] = 0;
      puVar7[0x22] = 0;
      puVar7[0x27] = 0x42f000003dcccccd;
      *(undefined4 *)((long)puVar7 + 0x134) = 0;
      *(undefined4 *)((long)puVar7 + 0x154) = 0xbf800000;
      puVar7[0x1f] = 0;
      puVar7[0x20] = 0;
      puVar7[0x28] = 0xbf80000000000000;
      puVar7[0x29] = 0;
      puVar7[0x1d] = 0;
      puVar7[0x1e] = 0;
      puVar7[0x1b] = 0;
      puVar7[0x1c] = 0;
      puVar7[0x19] = 0;
      puVar7[0x1a] = 0;
      puVar7[0x17] = 0;
      puVar7[0x18] = 0;
      puVar7[0x15] = 0;
      puVar7[0x16] = 0;
      puVar7[0x13] = 0;
      puVar7[0x14] = 0;
      puVar7[0x11] = 0;
      puVar7[0x12] = 0;
      puVar7[0xf] = 0;
      puVar7[0x10] = 0;
      puVar7[0xd] = 0;
      puVar7[0xe] = 0;
      puVar7[0xb] = 0;
      puVar7[0xc] = 0;
      puVar7[9] = 0;
      puVar7[10] = 0;
      puVar7[7] = 0;
      puVar7[8] = 0;
      puVar7[5] = 0;
      puVar7[6] = 0;
      puVar7[3] = 0;
      puVar7[4] = 0;
      plVar6 = (long *)*plVar25;
      *plVar25 = (long)puVar7;
      if (plVar6 == (long *)0x0) goto switchD_7102c2c030_default;
      (**(code **)(*plVar6 + 8))(plVar6);
      plVar6 = (long *)*plVar25;
      goto joined_r0x007102c2c44c;
    case 2:
      puVar7 = (undefined8 *)
               FUN_710392e290(0x10,0x58,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
      if (puVar7 == (undefined8 *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_94 = 0;
          local_a0 = 0x58;
          param_3 = (undefined **)&local_a0;
          uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_94);
          if (((uVar8 & 1) != 0) &&
             (puVar7 = (undefined8 *)
                       FUN_710392e290(0x10,0x58,(long ****)param_3,param_4,param_5,param_6,param_7,
                                      param_8), puVar7 != (undefined8 *)0x0)) goto LAB_7102c2c380;
        }
        puVar7 = (undefined8 *)0x0;
      }
LAB_7102c2c380:
      uVar13 = param_1[1];
      *puVar7 = &PTR_FUN_7105124228;
      puVar7[1] = uVar13;
      puVar7[4] = 0;
      puVar7[5] = 0;
      puVar7[2] = 0x100000000;
      puVar7[3] = 0;
      puVar9 = (undefined8 *)
               FUN_710392e290(0x10,0x60,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
      if (puVar9 == (undefined8 *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_94 = 0;
          local_a0 = 0x60;
          param_3 = (undefined **)&local_a0;
          uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_94);
          if (((uVar8 & 1) != 0) &&
             (puVar9 = (undefined8 *)
                       FUN_710392e290(0x10,0x60,(long ****)param_3,param_4,param_5,param_6,param_7,
                                      param_8), puVar9 != (undefined8 *)0x0)) goto LAB_7102c2c3ec;
        }
        puVar9 = (undefined8 *)0x0;
      }
LAB_7102c2c3ec:
      puVar7[8] = puVar9 + 0xc;
      puVar9[10] = 0;
      puVar9[0xb] = 0;
      puVar9[8] = 0;
      puVar9[9] = 0;
      puVar9[6] = 0;
      puVar9[7] = 0;
      puVar9[4] = 0;
      puVar9[5] = 0;
      puVar9[2] = 0;
      puVar9[3] = 0;
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar7[6] = puVar9;
      puVar7[7] = puVar9 + 0xc;
      puVar7[9] = 0x427000003dcccccd;
      puVar7[10] = 0x3f8000003d4ccccd;
      break;
    case 3:
      puVar7 = (undefined8 *)
               FUN_710392e290(0x10,0x88,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
      if (puVar7 == (undefined8 *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_94 = 0;
          local_a0 = 0x88;
          param_3 = (undefined **)&local_a0;
          uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_94);
          if (((uVar8 & 1) != 0) &&
             (puVar7 = (undefined8 *)
                       FUN_710392e290(0x10,0x88,(long ****)param_3,param_4,param_5,param_6,param_7,
                                      param_8), puVar7 != (undefined8 *)0x0)) goto LAB_7102c2c2ac;
        }
        puVar7 = (undefined8 *)0x0;
      }
LAB_7102c2c2ac:
      FUN_7102c3a5f0(puVar7,param_1[1],(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
      break;
    case 4:
      puVar7 = (undefined8 *)
               FUN_710392e290(0x10,0xd8,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
      if (puVar7 == (undefined8 *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_94 = 0;
          local_a0 = 0xd8;
          param_3 = (undefined **)&local_a0;
          uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_94);
          if (((uVar8 & 1) != 0) &&
             (puVar7 = (undefined8 *)
                       FUN_710392e290(0x10,0xd8,(long ****)param_3,param_4,param_5,param_6,param_7,
                                      param_8), puVar7 != (undefined8 *)0x0)) goto LAB_7102c2c314;
        }
        puVar7 = (undefined8 *)0x0;
      }
LAB_7102c2c314:
      FUN_7102c3ef30(puVar7,param_1[1],(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
      break;
    case 5:
      puVar7 = (undefined8 *)
               FUN_710392e290(0x10,0xd0,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
      if (puVar7 == (undefined8 *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_94 = 0;
          local_a0 = 0xd0;
          param_3 = (undefined **)&local_a0;
          uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_94);
          if (((uVar8 & 1) != 0) &&
             (puVar7 = (undefined8 *)
                       FUN_710392e290(0x10,0xd0,(long ****)param_3,param_4,param_5,param_6,param_7,
                                      param_8), puVar7 != (undefined8 *)0x0)) goto LAB_7102c2c1a0;
        }
        puVar7 = (undefined8 *)0x0;
      }
LAB_7102c2c1a0:
      uVar13 = param_1[1];
      puVar7[8] = 0;
      puVar7[9] = 0;
      puVar7[4] = 0;
      puVar7[5] = 0;
      *puVar7 = &PTR_FUN_7105124190;
      puVar7[1] = uVar13;
      puVar7[6] = 0;
      puVar7[7] = 0;
      puVar7[2] = 0x100000000;
      puVar7[3] = 0;
      puVar9 = (undefined8 *)
               FUN_710392e290(0x10,0x40,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
      if (puVar9 == (undefined8 *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_94 = 0;
          local_a0 = 0x40;
          param_3 = (undefined **)&local_a0;
          uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_94);
          if (((uVar8 & 1) != 0) &&
             (puVar9 = (undefined8 *)
                       FUN_710392e290(0x10,0x40,(long ****)param_3,param_4,param_5,param_6,param_7,
                                      param_8), puVar9 != (undefined8 *)0x0)) goto LAB_7102c2c214;
        }
        puVar9 = (undefined8 *)0x0;
      }
LAB_7102c2c214:
      puVar7[0xc] = puVar9 + 8;
      puVar7[0xd] = 0;
      puVar9[6] = 0;
      puVar9[7] = 0;
      puVar9[4] = 0;
      puVar9[5] = 0;
      puVar9[2] = 0;
      puVar9[3] = 0;
      *puVar9 = 0;
      puVar9[1] = 0;
      *(undefined8 *)((long)puVar7 + 0x7d) = 0;
      *(undefined4 *)(puVar7 + 0x11) = 0xbf800000;
      *(undefined4 *)(puVar7 + 0x18) = 0xffffffff;
      puVar7[10] = puVar9;
      puVar7[0xb] = puVar9 + 8;
      puVar7[0xe] = 0;
      puVar7[0xf] = 0;
      puVar7[0x16] = 0;
      puVar7[0x17] = 0;
      puVar7[0x14] = 0;
      puVar7[0x15] = 0;
      puVar7[0x12] = 0;
      puVar7[0x13] = 0;
      break;
    default:
      goto switchD_7102c2c030_default;
    }
    plVar6 = (long *)*plVar25;
    *plVar25 = (long)puVar7;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 8))();
    }
switchD_7102c2c030_default:
    plVar6 = (long *)*plVar25;
joined_r0x007102c2c44c:
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x18))(plVar6,param_1[2]);
    }
    lVar26 = lVar26 + 1;
    plVar25 = plVar25 + 1;
  } while (lVar26 != 6);
  puVar7 = (undefined8 *)
           FUN_710392e290(0x10,0x20,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar7 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_94 = 0;
      local_a0 = 0x20;
      param_3 = (undefined **)&local_a0;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_94);
      if (((uVar8 & 1) != 0) &&
         (puVar7 = (undefined8 *)
                   FUN_710392e290(0x10,0x20,(long ****)param_3,param_4,param_5,param_6,param_7,
                                  param_8), puVar7 != (undefined8 *)0x0)) goto LAB_7102c2c4c4;
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_7102c2c4c4:
  uVar13 = *(undefined8 *)(param_1[1] + 0x340);
  *(undefined1 *)(puVar7 + 3) = 0;
  *puVar7 = uVar13;
  puVar7[1] = 0xffffffffffffffff;
  puVar7[2] = 0xffffffffffffffff;
  uVar8 = param_1[0xd];
  param_1[0xd] = puVar7;
  if (uVar8 != 0) {
    FUN_710392eb40(uVar8);
  }
  puVar7 = (undefined8 *)
           FUN_710392e290(0x10,0x40,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar7 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_94 = 0;
      local_a0 = 0x40;
      param_3 = (undefined **)&local_a0;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_94);
      if (((uVar8 & 1) != 0) &&
         (puVar7 = (undefined8 *)
                   FUN_710392e290(0x10,0x40,(long ****)param_3,param_4,param_5,param_6,param_7,
                                  param_8), puVar7 != (undefined8 *)0x0)) goto LAB_7102c2c54c;
    }
    puVar7 = (undefined8 *)0x0;
  }
LAB_7102c2c54c:
  uVar13 = *(undefined8 *)(param_1[1] + 0x340);
  *(undefined1 *)((long)puVar7 + 0x1c) = 0;
  *(undefined4 *)(puVar7 + 3) = 0xffffffff;
  *(undefined4 *)(puVar7 + 7) = 0;
  puVar7[1] = 0xffffffffffffffff;
  puVar7[2] = 0xffffffffffffffff;
  puVar7[5] = 0;
  puVar7[6] = 0;
  *puVar7 = uVar13;
  uVar8 = param_1[0xe];
  param_1[0xe] = puVar7;
  if (uVar8 != 0) {
    FUN_710392eb40(uVar8);
    puVar7 = (undefined8 *)param_1[0xe];
  }
  *(undefined4 *)(puVar7 + 5) = 1;
  *(undefined4 *)(param_1[0xe] + 0x2c) = 2;
  *(undefined4 *)(param_1[0xe] + 0x30) = 3;
  *(undefined4 *)(param_1[0xe] + 0x34) = 4;
  *(undefined4 *)(param_1[0xe] + 0x38) = 5;
  *(undefined2 *)((long)param_1 + 0xb4) = 0x100;
  if (3 < (uint)((ulong)(*(long *)(param_1[1] + 0x1b0) - *(long *)(param_1[1] + 0x1a8)) >> 3)) {
    lVar26 = 0;
    plVar25 = param_1 + 9;
    do {
      if ((int)lVar26 == 3) {
        puVar7 = (undefined8 *)
                 FUN_710392e290(0x10,0x130,(long ****)param_3,param_4,param_5,param_6,param_7,
                                param_8);
        if (puVar7 == (undefined8 *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_94 = 0;
            local_a0 = 0x130;
            param_3 = (undefined **)&local_a0;
            uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_94);
            if (((uVar8 & 1) != 0) &&
               (puVar7 = (undefined8 *)
                         FUN_710392e290(0x10,0x130,(long ****)param_3,param_4,param_5,param_6,
                                        param_7,param_8), puVar7 != (undefined8 *)0x0))
            goto LAB_7102c2c734;
          }
          puVar7 = (undefined8 *)0x0;
        }
LAB_7102c2c734:
        uVar13 = param_1[1];
        *(undefined8 *)((long)puVar7 + 0x14) = 0x3f80000000000000;
        *(undefined8 *)((long)puVar7 + 0x1c) = 0x3f800000;
        puVar7[5] = 0x3f80000000000000;
        *(undefined4 *)(puVar7 + 6) = 0x3f800000;
        puVar7[0x12] = 0;
        puVar7[0x13] = 0;
        *(undefined1 *)((long)puVar7 + 0x8c) = 0;
        *(undefined8 *)((long)puVar7 + 0x84) = 0;
        *(undefined8 *)((long)puVar7 + 0x7c) = 0;
        *(undefined8 *)((long)puVar7 + 0x74) = 0;
        *(undefined8 *)((long)puVar7 + 0x6c) = 0;
        *(undefined8 *)((long)puVar7 + 100) = 0;
        *(undefined8 *)((long)puVar7 + 0x5c) = 0;
        *(undefined8 *)((long)puVar7 + 0x54) = 0;
        *(undefined8 *)((long)puVar7 + 0x4c) = 0;
        *(undefined8 *)((long)puVar7 + 0x44) = 0;
        *(undefined8 *)((long)puVar7 + 0x3c) = 0;
        *(undefined8 *)((long)puVar7 + 0x34) = 0;
        *puVar7 = &PTR_FUN_71051240a0;
        puVar7[1] = uVar13;
        puVar9 = (undefined8 *)
                 FUN_710392e290(0x10,0xa0,(long ****)param_3,param_4,param_5,param_6,param_7,param_8
                               );
        if (puVar9 == (undefined8 *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_94 = 0;
            local_a0 = 0xa0;
            param_3 = (undefined **)&local_a0;
            uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_94);
            if (((uVar8 & 1) != 0) &&
               (puVar9 = (undefined8 *)
                         FUN_710392e290(0x10,0xa0,(long ****)param_3,param_4,param_5,param_6,param_7
                                        ,param_8), puVar9 != (undefined8 *)0x0))
            goto LAB_7102c2c7d8;
          }
          puVar9 = (undefined8 *)0x0;
        }
LAB_7102c2c7d8:
        puVar7[0x14] = puVar9;
        puVar7[0x16] = puVar9 + 0x14;
        *(undefined1 *)(puVar9 + 4) = 0;
        *(undefined1 *)(puVar9 + 9) = 0;
        *(undefined1 *)(puVar9 + 0xe) = 0;
        *(undefined1 *)(puVar9 + 0x13) = 0;
        puVar9[2] = 0;
        puVar9[3] = 0;
        *puVar9 = 0;
        puVar9[1] = 0;
        puVar9[7] = 0;
        puVar9[8] = 0;
        puVar9[5] = 0;
        puVar9[6] = 0;
        puVar9[0xc] = 0;
        puVar9[0xd] = 0;
        puVar9[10] = 0;
        puVar9[0xb] = 0;
        puVar9[0x11] = 0;
        puVar9[0x12] = 0;
        puVar9[0xf] = 0;
        puVar9[0x10] = 0;
        puVar7[0x15] = puVar9 + 0x14;
        *(undefined4 *)(puVar7 + 0x1a) = 0xffffffff;
        *(undefined1 *)((long)puVar7 + 0xd4) = 0;
        puVar7[0x18] = 0;
        puVar7[0x19] = 0;
        puVar7[0x24] = 0;
        puVar7[0x25] = 0;
        puVar7[0x22] = 0;
        puVar7[0x23] = 0;
        puVar7[0x20] = 0;
        puVar7[0x21] = 0;
        puVar7[0x1e] = 0;
        puVar7[0x1f] = 0;
        puVar7[0x1c] = 0;
        puVar7[0x1d] = 0;
        plVar6 = (long *)*plVar25;
        *plVar25 = (long)puVar7;
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 8))();
        }
      }
      else {
        if ((int)lVar26 == 0) {
          puVar7 = (undefined8 *)
                   FUN_710392e290(0x10,0xf0,(long ****)param_3,param_4,param_5,param_6,param_7,
                                  param_8);
          if (puVar7 == (undefined8 *)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_94 = 0;
              local_a0 = 0xf0;
              param_3 = (undefined **)&local_a0;
              uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_94);
              if (((uVar8 & 1) != 0) &&
                 (puVar7 = (undefined8 *)
                           FUN_710392e290(0x10,0xf0,(long ****)param_3,param_4,param_5,param_6,
                                          param_7,param_8), puVar7 != (undefined8 *)0x0))
              goto LAB_7102c2c660;
            }
            puVar7 = (undefined8 *)0x0;
          }
LAB_7102c2c660:
          uVar13 = param_1[1];
          puVar7[0x15] = 0;
          puVar7[0x16] = 0;
          *(undefined8 *)((long)puVar7 + 0x14) = 0x3f80000000000000;
          puVar7[0x1a] = 0;
          puVar7[0x1b] = 0;
          *(undefined8 *)((long)puVar7 + 0x1c) = 0x3f800000;
          puVar7[5] = 0x3f80000000000000;
          *(undefined4 *)(puVar7 + 6) = 0x3f800000;
          puVar7[0x12] = 0;
          *(undefined1 *)((long)puVar7 + 0x8c) = 0;
          *(undefined8 *)((long)puVar7 + 0x84) = 0;
          *(undefined8 *)((long)puVar7 + 0x7c) = 0;
          *(undefined8 *)((long)puVar7 + 0x74) = 0;
          *(undefined8 *)((long)puVar7 + 0x6c) = 0;
          *(undefined8 *)((long)puVar7 + 100) = 0;
          *(undefined8 *)((long)puVar7 + 0x5c) = 0;
          *(undefined8 *)((long)puVar7 + 0x54) = 0;
          *(undefined8 *)((long)puVar7 + 0x4c) = 0;
          *(undefined8 *)((long)puVar7 + 0x44) = 0;
          *(undefined8 *)((long)puVar7 + 0x3c) = 0;
          *(undefined8 *)((long)puVar7 + 0x34) = 0;
          *(undefined8 *)((long)puVar7 + 0x9c) = 0;
          *(undefined4 *)((long)puVar7 + 0xa4) = 0x3f800000;
          *(undefined4 *)(puVar7 + 0x18) = 0x3f800000;
          *(undefined4 *)(puVar7 + 0x1c) = 0xffffffff;
          *(undefined1 *)((long)puVar7 + 0xe4) = 0;
          *puVar7 = &PTR_FUN_7105124128;
          puVar7[1] = uVar13;
          puVar7[0x17] = 0x100000005;
        }
        else {
          puVar7 = (undefined8 *)
                   FUN_710392e290(0x10,0x98,(long ****)param_3,param_4,param_5,param_6,param_7,
                                  param_8);
          if (puVar7 == (undefined8 *)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_94 = 0;
              local_a0 = 0x98;
              param_3 = (undefined **)&local_a0;
              uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_94);
              if (((uVar8 & 1) != 0) &&
                 (puVar7 = (undefined8 *)
                           FUN_710392e290(0x10,0x98,(long ****)param_3,param_4,param_5,param_6,
                                          param_7,param_8), puVar7 != (undefined8 *)0x0))
              goto LAB_7102c2c8a0;
            }
            puVar7 = (undefined8 *)0x0;
          }
LAB_7102c2c8a0:
          uVar13 = param_1[1];
          *(undefined8 *)((long)puVar7 + 0x14) = 0x3f80000000000000;
          *(undefined8 *)((long)puVar7 + 0x1c) = 0x3f800000;
          puVar7[5] = 0x3f80000000000000;
          *puVar7 = &PTR_FUN_7105124038;
          puVar7[1] = uVar13;
          *(undefined4 *)(puVar7 + 6) = 0x3f800000;
          puVar7[0x12] = 0;
          *(undefined1 *)((long)puVar7 + 0x8c) = 0;
          *(undefined8 *)((long)puVar7 + 0x84) = 0;
          *(undefined8 *)((long)puVar7 + 0x7c) = 0;
          *(undefined8 *)((long)puVar7 + 0x74) = 0;
          *(undefined8 *)((long)puVar7 + 0x6c) = 0;
          *(undefined8 *)((long)puVar7 + 100) = 0;
          *(undefined8 *)((long)puVar7 + 0x5c) = 0;
          *(undefined8 *)((long)puVar7 + 0x54) = 0;
          *(undefined8 *)((long)puVar7 + 0x4c) = 0;
          *(undefined8 *)((long)puVar7 + 0x44) = 0;
          *(undefined8 *)((long)puVar7 + 0x3c) = 0;
          *(undefined8 *)((long)puVar7 + 0x34) = 0;
        }
        plVar6 = (long *)*plVar25;
        *plVar25 = (long)puVar7;
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 8))(plVar6);
        }
      }
      (**(code **)(*(long *)*plVar25 + 0x10))((long *)*plVar25,param_1[2]);
      lVar26 = lVar26 + 1;
      plVar25 = plVar25 + 1;
    } while (lVar26 != 4);
    *(undefined4 *)(param_1 + 4) = 1;
    lVar26 = *(long *)(param_1[1] + 0x300);
    FUN_710262bb40(lVar26,0xf);
    FUN_710262beb0(lVar26,0xfffffff0);
    lVar26 = param_1[1];
    uVar8 = (ulong)*(uint *)(param_1 + 4);
    lVar16 = *(long *)(*(long *)(*(long *)(lVar26 + 0x300) + 0x48) + uVar8 * 8);
    puVar10 = *(ulong **)(*(long *)(lVar26 + 0x300) + 0x60);
    if (puVar10 != (ulong *)(lVar16 + 8)) {
      param_3 = *(undefined ***)(lVar16 + 0x10);
      FUN_7102616cf0(puVar10,*(undefined1 (**) [16])(lVar16 + 8),(undefined1 (*) [16])param_3,
                     param_4,param_5,param_6,param_7,param_8);
      lVar26 = param_1[1];
      uVar8 = (ulong)*(uint *)(param_1 + 4);
      lVar16 = *(long *)(*(long *)(*(long *)(lVar26 + 0x300) + 0x48) + uVar8 * 8);
      puVar10 = *(ulong **)(*(long *)(lVar26 + 0x300) + 0x60);
    }
    if (puVar10 + 3 != (ulong *)(lVar16 + 0x20)) {
      param_3 = *(undefined ***)(lVar16 + 0x28);
      FUN_7102616cf0(puVar10 + 3,*(undefined1 (**) [16])(lVar16 + 0x20),(undefined1 (*) [16])param_3
                     ,param_4,param_5,param_6,param_7,param_8);
      lVar26 = param_1[1];
      uVar8 = (ulong)*(uint *)(param_1 + 4);
    }
    FUN_7102624870(*(long *)(lVar26 + 0x308),uVar8);
    FUN_7102624740(*(long *)(param_1[1] + 0x308),(ulong)*(uint *)(param_1 + 4));
    *(undefined4 *)((long)param_1 + 0x24) = 0;
    puVar18 = *(uint **)(param_1[1] + 0x340);
    iVar5 = *(int *)(param_1[2] + 0x88);
    iVar1 = *(int *)(param_1[2] + 0x8c);
    uVar22 = *puVar18;
    *puVar18 = puVar18[1];
    uVar20 = puVar18[3];
    uVar22 = uVar22 ^ uVar22 << 0xb;
    uVar15 = (1 - iVar5) + iVar1;
    uVar22 = uVar22 ^ uVar22 >> 8 ^ uVar20 ^ uVar20 >> 0x13;
    uVar3 = 0;
    if (uVar15 != 0) {
      uVar3 = uVar22 / uVar15;
    }
    puVar18[1] = puVar18[2];
    puVar18[2] = uVar20;
    puVar18[3] = uVar22;
    *(float *)(param_1 + 3) = (float)(((uVar22 - uVar3 * uVar15) + iVar5) * 0x3c);
    puVar18 = *(uint **)(param_1[1] + 0x340);
    uVar15 = *puVar18;
    iVar5 = *(int *)(param_1[2] + 0x9c);
    iVar1 = *(int *)(param_1[2] + 0xa0);
    *puVar18 = puVar18[1];
    uVar22 = puVar18[3];
    uVar15 = uVar15 ^ uVar15 << 0xb;
    puVar18[1] = puVar18[2];
    puVar18[2] = uVar22;
    uVar22 = uVar15 ^ uVar15 >> 8 ^ uVar22 ^ uVar22 >> 0x13;
    uVar15 = (1 - iVar5) + iVar1;
    uVar20 = 0;
    if (uVar15 != 0) {
      uVar20 = uVar22 / uVar15;
    }
    puVar18[3] = uVar22;
    lVar26 = param_1[2];
    *(float *)((long)param_1 + 0x1c) = (float)(((uVar22 - uVar20 * uVar15) + iVar5) * 0x3c);
    fVar27 = (float)(uint)(*(int *)(lVar26 + 0xb0) * 0x3c);
    *(float *)(param_1 + 6) = fVar27;
    *(undefined4 *)((long)param_1 + 0x34) = *(undefined4 *)(lVar26 + 0xb4);
    uVar28 = *(undefined4 *)(lVar26 + 0xb8);
    *(undefined1 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 7) = uVar28;
    *(undefined4 *)((long)param_1 + 0x3c) = 0;
    *(float *)((long)param_1 + 0x2c) = fVar27;
    *(undefined2 *)((long)param_1 + 0xb6) = 1;
    if (*(char *)(param_1 + 0x17) != '\0') {
      *(float *)(param_1 + 6) = (float)(uint)(*(int *)(lVar26 + 0xbc) * 0x3c);
      *(undefined4 *)((long)param_1 + 0x34) = *(undefined4 *)(lVar26 + 0xc0);
      *(undefined4 *)(param_1 + 7) = *(undefined4 *)(lVar26 + 0xc4);
    }
    plVar25 = *(long **)(*(long *)(param_1[1] + 0x310) + 0xd0);
    plVar6 = *(long **)(*(long *)(param_1[1] + 0x310) + 0xd8);
    if (plVar25 != plVar6) {
      iVar5 = (int)plVar25[1];
      while (iVar5 - 2U < 3) {
        if (plVar6 == plVar25 + 2) {
          return;
        }
        iVar5 = (int)plVar25[3];
        plVar25 = plVar25 + 2;
      }
    }
    if (plVar25 != plVar6) {
      uVar13 = extraout_x1;
      do {
        lVar26 = 0x7105123500;
        lVar16 = *plVar25;
        if (lVar16 == 0) {
          bVar4 = true;
          puVar10 = (ulong *)&DAT_00000068;
LAB_7102c2cc00:
          uVar15 = 1;
          do {
            if (!bVar4) {
              pbVar19 = *(byte **)((ulong)uVar15 * 0x18 + 0x7105123218);
              uVar22 = (uint)*pbVar19;
              if (*pbVar19 == 0) {
                uVar24 = 0;
                uVar8 = 0;
              }
              else {
                uVar8 = 0;
                uVar20 = 0xffffffff;
                do {
                  pbVar19 = pbVar19 + 1;
                  uVar3 = uVar22 + 0x20;
                  if (0x19 < uVar22 - 0x41) {
                    uVar3 = uVar22;
                  }
                  uVar20 = (&DAT_7104754084)[(uVar3 ^ uVar20) & 0xff] ^ uVar20 >> 8;
                  uVar22 = (uint)*pbVar19;
                  uVar8 = uVar8 + 0x100000000;
                } while (uVar22 != 0);
                uVar24 = (ulong)~uVar20;
                uVar8 = uVar8 & 0xff00000000;
              }
              if (*puVar10 == (uVar8 | uVar24)) goto LAB_7102c2cd70;
            }
            uVar15 = uVar15 + 1;
          } while (uVar15 != 0x1e);
          if ((!bVar4) && (*puVar10 == 0x12fc5ced08)) {
            uVar15 = 0;
LAB_7102c2cd60:
            lVar23 = 1;
            goto LAB_7102c2cd74;
          }
          uVar15 = 1;
          do {
            if (!bVar4) {
              pbVar19 = *(byte **)((ulong)uVar15 * 0x18 + 0x7105123500);
              uVar22 = (uint)*pbVar19;
              if (*pbVar19 == 0) {
                uVar24 = 0;
                uVar8 = 0;
              }
              else {
                uVar8 = 0;
                uVar20 = 0xffffffff;
                do {
                  pbVar19 = pbVar19 + 1;
                  uVar3 = uVar22 + 0x20;
                  if (0x19 < uVar22 - 0x41) {
                    uVar3 = uVar22;
                  }
                  uVar20 = (&DAT_7104754084)[(uVar3 ^ uVar20) & 0xff] ^ uVar20 >> 8;
                  uVar22 = (uint)*pbVar19;
                  uVar8 = uVar8 + 0x100000000;
                } while (uVar22 != 0);
                uVar24 = (ulong)~uVar20;
                uVar8 = uVar8 & 0xff00000000;
              }
              if (*puVar10 == (uVar8 | uVar24)) goto LAB_7102c2cd60;
            }
            uVar15 = uVar15 + 1;
          } while (uVar15 != 0x1e);
          if ((!bVar4) && (*puVar10 == 0x176388b74c)) {
            uVar15 = 0;
LAB_7102c2ce88:
            lVar23 = 2;
            lVar26 = 0x71051237e8;
            goto LAB_7102c2cd74;
          }
          uVar15 = 1;
          do {
            if (!bVar4) {
              pbVar19 = *(byte **)((ulong)uVar15 * 0x18 + 0x71051237e8);
              uVar22 = (uint)*pbVar19;
              if (*pbVar19 == 0) {
                uVar24 = 0;
                uVar8 = 0;
              }
              else {
                uVar8 = 0;
                uVar20 = 0xffffffff;
                do {
                  pbVar19 = pbVar19 + 1;
                  uVar3 = uVar22 + 0x20;
                  if (0x19 < uVar22 - 0x41) {
                    uVar3 = uVar22;
                  }
                  uVar20 = (&DAT_7104754084)[(uVar3 ^ uVar20) & 0xff] ^ uVar20 >> 8;
                  uVar22 = (uint)*pbVar19;
                  uVar8 = uVar8 + 0x100000000;
                } while (uVar22 != 0);
                uVar24 = (ulong)~uVar20;
                uVar8 = uVar8 & 0xff00000000;
              }
              if (*puVar10 == (uVar8 | uVar24)) goto LAB_7102c2ce88;
            }
            uVar15 = uVar15 + 1;
          } while (uVar15 != 0x1c);
          if ((!bVar4) && (*puVar10 == 0x159bac14a2)) {
            uVar15 = 0;
LAB_7102c2cb88:
            lVar23 = 3;
            lVar26 = 0x7105123aa0;
            goto LAB_7102c2cd74;
          }
          uVar15 = 1;
          do {
            if (!bVar4) {
              pbVar19 = *(byte **)((ulong)uVar15 * 0x18 + 0x7105123aa0);
              uVar22 = (uint)*pbVar19;
              if (*pbVar19 == 0) {
                uVar24 = 0;
                uVar8 = 0;
              }
              else {
                uVar8 = 0;
                uVar20 = 0xffffffff;
                do {
                  pbVar19 = pbVar19 + 1;
                  uVar3 = uVar22 + 0x20;
                  if (0x19 < uVar22 - 0x41) {
                    uVar3 = uVar22;
                  }
                  uVar20 = (&DAT_7104754084)[(uVar3 ^ uVar20) & 0xff] ^ uVar20 >> 8;
                  uVar22 = (uint)*pbVar19;
                  uVar8 = uVar8 + 0x100000000;
                } while (uVar22 != 0);
                uVar24 = (ulong)~uVar20;
                uVar8 = uVar8 & 0xff00000000;
              }
              if (*puVar10 == (uVar8 | uVar24)) goto LAB_7102c2cb88;
            }
            uVar15 = uVar15 + 1;
          } while (uVar15 != 0x26);
        }
        else {
          *(undefined1 *)(lVar16 + 0x110) = 0;
          FUN_71025e9d50((long *)(lVar16 + 0x108),uVar13,(long ****)param_3,param_4,param_5,param_6,
                         param_7,param_8);
          puVar10 = (ulong *)(lVar16 + 0x68);
          uVar13 = extraout_x1_00;
          if (*puVar10 != 0x1267f9a167) {
            bVar4 = false;
            goto LAB_7102c2cc00;
          }
          bVar4 = false;
          uVar15 = 0;
LAB_7102c2cd70:
          lVar26 = 0x7105123218;
          lVar23 = 0;
LAB_7102c2cd74:
          lVar26 = lVar26 + (ulong)uVar15 * 0x18;
          lVar23 = param_1[lVar23 + 9];
          iVar5 = *(int *)(lVar26 + 8);
          uVar28 = *(undefined4 *)(lVar26 + 0xc);
          uVar2 = *(undefined1 *)(lVar26 + 0x10);
          if (iVar5 == 4) {
            pcVar21 = FUN_7102c34eb0;
            uVar29 = 0x40c90fdb;
          }
          else if ((((iVar5 != 5) && (iVar5 != 6)) || (bVar4)) || (*(long *)(lVar16 + 0xd8) != 0)) {
            pcVar21 = (code *)0x0;
            uVar29 = 0x3f800000;
          }
          else {
            plVar14 = FUN_71026533a0((undefined8 *)(lVar16 + 0x90),0,(long ****)param_3,param_4,
                                     param_5,param_6,param_7,param_8);
            plVar11 = *(long **)(lVar16 + 0xd8);
            *(long **)(lVar16 + 0xd8) = plVar14;
            uVar13 = extraout_x1_01;
            if (plVar11 != (long *)0x0) {
              (**(code **)(*plVar11 + 8))();
              uVar13 = extraout_x1_02;
            }
            pcVar21 = (code *)0x0;
            uVar29 = 0x3f800000;
          }
          uVar30 = NEON_fminnm(uVar28,0);
          plVar14 = *(long **)(lVar23 + 0x58);
          if (plVar14 == *(long **)(lVar23 + 0x60)) {
            __src = *(void **)(lVar23 + 0x50);
            __n = (undefined1 (*) [16])((long)plVar14 - (long)__src);
            uVar24 = 0x492492492492492;
            uVar8 = ((long)__n >> 3) * 0x6db6db6db6db6db7 + 1;
            if (0x492492492492492 < uVar8) {
                    /* WARNING: Subroutine does not return */
              std::__vector_base_common<true>::__throw_length_error();
            }
            lVar26 = (long)*(long **)(lVar23 + 0x60) - (long)__src >> 3;
            if ((ulong)(lVar26 * 0x6db6db6db6db6db7) < 0x249249249249249) {
              uVar17 = lVar26 * -0x2492492492492492;
              uVar24 = uVar8;
              if (uVar8 <= uVar17) {
                uVar24 = uVar17;
              }
              if (uVar24 != 0) goto LAB_7102c2d038;
              lVar12 = 0;
            }
            else {
LAB_7102c2d038:
              lVar26 = uVar24 * 0x38;
              if (lVar26 == 0) {
                lVar26 = 1;
              }
              lVar12 = FUN_710392e290(0x10,lVar26,(long ****)param_3,param_4,param_5,param_6,param_7
                                      ,param_8);
              uVar13 = extraout_x1_03;
              if (lVar12 == 0) {
                if (DAT_7105332f00 != (long *)0x0) {
                  local_94 = 0;
                  param_3 = (undefined **)&local_a0;
                  local_a0 = lVar26;
                  auVar31 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_94);
                  uVar13 = auVar31._8_8_;
                  if (((auVar31._0_8_ & 1) != 0) &&
                     (lVar12 = FUN_710392e290(0x10,lVar26,(long ****)param_3,param_4,param_5,param_6
                                              ,param_7,param_8), uVar13 = extraout_x1_04,
                     lVar12 != 0)) goto LAB_7102c2d0a4;
                }
                lVar12 = 0;
              }
            }
LAB_7102c2d0a4:
            plVar14 = (long *)(lVar12 + ((long)__n >> 3) * 8);
            *(undefined4 *)((long)plVar14 + 0x14) = uVar29;
            *(undefined4 *)(plVar14 + 3) = uVar28;
            *plVar14 = lVar16;
            *(int *)(plVar14 + 1) = iVar5;
            *(undefined4 *)(plVar14 + 2) = 0;
            *(undefined4 *)((long)plVar14 + 0x1c) = uVar30;
            *(undefined1 *)(plVar14 + 4) = uVar2;
            *(undefined4 *)((long)plVar14 + 0x21) = (undefined4)local_a0;
            plVar14[5] = (long)pcVar21;
            plVar14[6] = 0;
            lVar26 = SUB168(SEXT816((long)__n) * SEXT816(-0x4924924924924925),8);
            *(undefined2 *)((long)plVar14 + 0x25) = local_a0._4_2_;
            *(undefined1 *)((long)plVar14 + 0x27) = local_a0._6_1_;
            if (0 < (long)__n) {
              memcpy(plVar14 + ((lVar26 >> 4) - (lVar26 >> 0x3f)) * 7,__src,(size_t)__n);
              uVar13 = extraout_x1_05;
              param_3 = (undefined **)__n;
            }
            *(ulong *)(lVar23 + 0x60) = lVar12 + uVar24 * 0x38;
            *(long **)(lVar23 + 0x50) = plVar14 + ((lVar26 >> 4) - (lVar26 >> 0x3f)) * 7;
            *(long **)(lVar23 + 0x58) = plVar14 + 7;
            if (__src != (void *)0x0) {
              FUN_710392eb40((ulong)__src);
              uVar13 = extraout_x1_06;
            }
          }
          else {
            *plVar14 = lVar16;
            *(int *)(plVar14 + 1) = iVar5;
            *(undefined4 *)(plVar14 + 2) = 0;
            *(undefined4 *)((long)plVar14 + 0x14) = uVar29;
            *(undefined4 *)(plVar14 + 3) = uVar28;
            *(undefined4 *)((long)plVar14 + 0x1c) = uVar30;
            *(undefined1 *)(plVar14 + 4) = uVar2;
            *(undefined1 *)((long)plVar14 + 0x27) = local_a0._6_1_;
            *(undefined2 *)((long)plVar14 + 0x25) = local_a0._4_2_;
            *(undefined4 *)((long)plVar14 + 0x21) = (undefined4)local_a0;
            plVar14[5] = (long)pcVar21;
            plVar14[6] = 0;
            *(long *)(lVar23 + 0x58) = *(long *)(lVar23 + 0x58) + 0x38;
          }
        }
        plVar14 = plVar25 + 2;
        if (plVar14 == plVar6) {
          return;
        }
        do {
          plVar25 = plVar14;
          if (2 < (int)plVar14[1] - 2U) break;
          plVar14 = plVar14 + 2;
          plVar25 = plVar6;
        } while (plVar6 != plVar14);
      } while (plVar25 != plVar6);
    }
  }
  return;
}

