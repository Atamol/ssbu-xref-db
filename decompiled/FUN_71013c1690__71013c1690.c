// addr:      71013c1690
// offset:    0x13c1690
// name:      FUN_71013c1690
// mangled:   
// signature: undefined __cdecl FUN_71013c1690(long * param_1, undefined8 param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71013c1690(long *param_1,undefined8 param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined4 *puVar1;
  void *pvVar2;
  char cVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 *puVar10;
  ulong uVar11;
  void *pvVar12;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar13;
  undefined8 extraout_x1_01;
  long *********ppppppppplVar14;
  char *pcVar15;
  undefined4 uVar16;
  uint uVar17;
  long lVar18;
  code *pcVar19;
  long ********pppppppplVar20;
  long lVar21;
  int *piVar22;
  byte bVar23;
  long lVar24;
  int *piVar25;
  long lVar26;
  int *piVar27;
  long lVar28;
  void *pvVar29;
  undefined4 *puVar30;
  long lVar31;
  long *********ppppppppplVar32;
  long *plVar33;
  int iVar34;
  long *plVar35;
  long *plVar36;
  uint uVar37;
  uint uVar38;
  undefined1 auVar39 [16];
  undefined **local_1b0;
  ulong local_1a8;
  long ********local_1a0;
  ulong local_198;
  undefined4 local_190;
  undefined2 local_18c;
  undefined1 local_18a;
  undefined1 *local_188;
  undefined4 local_180;
  long alStack_170 [4];
  long *local_150;
  long alStack_140 [4];
  long *local_120;
  long alStack_110 [4];
  long *local_f0;
  long alStack_e0 [4];
  long *local_c0;
  long alStack_b0 [4];
  long *local_90;
  undefined4 local_80;
  
  lVar31 = **(long **)(*param_1 + 8);
  uVar17 = *(uint *)(lVar31 + 0xd4c);
  if (((uVar17 & 0xfffffffe) != 4) && (*(int *)(lVar31 + 0xd48) != 4)) {
    plVar36 = (long *)(*(long *)(lVar31 + 0xcd0) + 0x28);
    puVar7 = (undefined8 *)
             FUN_710392e290(0x10,0x88,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
    if (puVar7 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
        local_1a0 = (long ********)&DAT_00000088;
        param_3 = &local_1a0;
        uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
        if (((uVar8 & 1) != 0) &&
           (puVar7 = (undefined8 *)
                     FUN_710392e290(0x10,0x88,(long ****)param_3,param_4,param_5,param_6,param_7,
                                    param_8), puVar7 != (undefined8 *)0x0)) goto LAB_71013c1744;
      }
      puVar7 = (undefined8 *)0x0;
    }
LAB_71013c1744:
    *puVar7 = &PTR_FUN_71050ab6d8;
    puVar7[1] = 0;
    puVar7[0xc] = 0;
    puVar7[0xd] = 0x1ffffffff;
    puVar7[2] = 0;
    puVar7[3] = 0;
    *(undefined1 *)(puVar7 + 0xb) = 0;
    puVar7[0xf] = plVar36;
    *(undefined1 *)(puVar7 + 0xe) = 1;
    puVar7[9] = 0;
    puVar7[10] = 0;
    plVar9 = (long *)FUN_710392e290(0x10,0x1e0,(long ****)param_3,param_4,param_5,param_6,param_7,
                                    param_8);
    if (plVar9 == (long *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
        local_1a0 = (long ********)&DAT_000001e0;
        param_3 = &local_1a0;
        uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
        if (((uVar8 & 1) != 0) &&
           (plVar9 = (long *)FUN_710392e290(0x10,0x1e0,(long ****)param_3,param_4,param_5,param_6,
                                            param_7,param_8), plVar9 != (long *)0x0))
        goto LAB_71013c17cc;
      }
      plVar9 = (long *)0x0;
    }
LAB_71013c17cc:
    plVar33 = plVar9 + 1;
    *plVar9 = (long)plVar36;
    puVar10 = (undefined8 *)
              FUN_710392e290(0x10,8,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
    uVar13 = extraout_x1;
    if (puVar10 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
        local_1a0 = (long ********)&DAT_00000008;
        param_3 = &local_1a0;
        auVar39 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
        uVar13 = auVar39._8_8_;
        if (((auVar39._0_8_ & 1) != 0) &&
           (puVar10 = (undefined8 *)
                      FUN_710392e290(0x10,8,(long ****)param_3,param_4,param_5,param_6,param_7,
                                     param_8), uVar13 = extraout_x1_00, puVar10 != (undefined8 *)0x0
           )) goto LAB_71013c1834;
      }
      puVar10 = (undefined8 *)0x0;
    }
LAB_71013c1834:
    FUN_7103773200(puVar10,uVar13,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
    plVar9[1] = (long)puVar10;
    FUN_7101414b10(plVar9 + 2,plVar33,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
    plVar35 = plVar9 + 4;
    *plVar35 = 0;
    plVar9[5] = (long)&PTR_FUN_710523d9a8;
    plVar9[7] = 0;
    plVar9[8] = 0;
    plVar9[6] = 0;
    puVar10 = (undefined8 *)
              FUN_710392e290(0x10,0x20,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
    if (puVar10 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
        local_1a0 = (long ********)&SUB_00000020;
        param_3 = &local_1a0;
        uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
        if (((uVar8 & 1) != 0) &&
           (puVar10 = (undefined8 *)
                      FUN_710392e290(0x10,0x20,(long ****)param_3,param_4,param_5,param_6,param_7,
                                     param_8), puVar10 != (undefined8 *)0x0)) goto LAB_71013c18c4;
      }
      puVar10 = (undefined8 *)0x0;
    }
LAB_71013c18c4:
    puVar10[2] = 0;
    puVar10[3] = 0;
    *puVar10 = 0;
    puVar10[1] = 0;
    plVar9[7] = (long)&PTR_FUN_710523d9e8;
    plVar9[6] = (long)puVar10;
    puVar10 = (undefined8 *)
              FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
    if (puVar10 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
        local_1a0 = (long ********)&SUB_00000018;
        param_3 = &local_1a0;
        uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
        if (((uVar8 & 1) != 0) &&
           (puVar10 = (undefined8 *)
                      FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,param_5,param_6,param_7,
                                     param_8), puVar10 != (undefined8 *)0x0)) goto LAB_71013c1938;
      }
      puVar10 = (undefined8 *)0x0;
    }
LAB_71013c1938:
    *puVar10 = 0;
    puVar10[1] = 0;
    *(undefined1 *)(puVar10 + 2) = 1;
    plVar9[9] = (long)&PTR_FUN_710523d9e8;
    plVar9[8] = (long)puVar10;
    plVar9[10] = 0;
    plVar9[0xd] = 0;
    plVar9[0xe] = 0;
    plVar9[0xb] = 0;
    plVar9[0xc] = 0;
    puVar10 = (undefined8 *)
              FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
    if (puVar10 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
        local_1a0 = (long ********)&SUB_00000018;
        param_3 = &local_1a0;
        uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
        if (((uVar8 & 1) != 0) &&
           (puVar10 = (undefined8 *)
                      FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,param_5,param_6,param_7,
                                     param_8), puVar10 != (undefined8 *)0x0)) goto LAB_71013c19b0;
      }
      puVar10 = (undefined8 *)0x0;
    }
LAB_71013c19b0:
    *puVar10 = 0;
    puVar10[1] = 0;
    *(undefined1 *)(puVar10 + 2) = 1;
    ppppppppplVar32 = (long *********)(plVar9 + 0xb);
    *ppppppppplVar32 = (long ********)&PTR_FUN_710523d9e8;
    plVar9[10] = (long)puVar10;
    puVar10 = (undefined8 *)
              FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
    if (puVar10 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
        local_1a0 = (long ********)&SUB_00000018;
        param_3 = &local_1a0;
        uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
        if (((uVar8 & 1) != 0) &&
           (puVar10 = (undefined8 *)
                      FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,param_5,param_6,param_7,
                                     param_8), puVar10 != (undefined8 *)0x0)) goto LAB_71013c1a1c;
      }
      puVar10 = (undefined8 *)0x0;
    }
LAB_71013c1a1c:
    *puVar10 = 0;
    puVar10[1] = 0;
    *(undefined1 *)(puVar10 + 2) = 1;
    plVar9[0xd] = (long)&PTR_FUN_710523d9e8;
    plVar9[0xc] = (long)puVar10;
    puVar10 = (undefined8 *)
              FUN_710392e290(0x10,0x18,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
    if (puVar10 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
        local_1a0 = (long ********)&SUB_00000018;
        ppppppppplVar14 = &local_1a0;
        uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
        if (((uVar8 & 1) != 0) &&
           (puVar10 = (undefined8 *)
                      FUN_710392e290(0x10,0x18,(long ****)ppppppppplVar14,param_4,param_5,param_6,
                                     param_7,param_8), puVar10 != (undefined8 *)0x0))
        goto LAB_71013c1a8c;
      }
      puVar10 = (undefined8 *)0x0;
    }
LAB_71013c1a8c:
    *puVar10 = 0;
    puVar10[1] = 0;
    *(undefined1 *)(puVar10 + 2) = 1;
    ppppppppplVar14 = (long *********)&DAT_00000168;
    plVar9[0xe] = (long)puVar10;
    memset(plVar9 + 0xf,0,0x168);
    plVar9[0x10] = (long)&PTR_FUN_710523d9a8;
    puVar10 = (undefined8 *)
              FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar14,param_4,param_5,param_6,param_7,
                             param_8);
    if (puVar10 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
        local_1a0 = (long ********)&SUB_00000020;
        ppppppppplVar14 = &local_1a0;
        uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
        if (((uVar8 & 1) != 0) &&
           (puVar10 = (undefined8 *)
                      FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar14,param_4,param_5,param_6,
                                     param_7,param_8), puVar10 != (undefined8 *)0x0))
        goto LAB_71013c1b04;
      }
      puVar10 = (undefined8 *)0x0;
    }
LAB_71013c1b04:
    puVar10[2] = 0;
    puVar10[3] = 0;
    *puVar10 = 0;
    puVar10[1] = 0;
    plVar9[0x11] = (long)puVar10;
    plVar9[0x12] = (long)&PTR_FUN_710523d9a8;
    puVar10 = (undefined8 *)
              FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar14,param_4,param_5,param_6,param_7,
                             param_8);
    if (puVar10 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
        local_1a0 = (long ********)&SUB_00000020;
        ppppppppplVar14 = &local_1a0;
        uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
        if (((uVar8 & 1) != 0) &&
           (puVar10 = (undefined8 *)
                      FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar14,param_4,param_5,param_6,
                                     param_7,param_8), puVar10 != (undefined8 *)0x0))
        goto LAB_71013c1b64;
      }
      puVar10 = (undefined8 *)0x0;
    }
LAB_71013c1b64:
    puVar10[2] = 0;
    puVar10[3] = 0;
    *puVar10 = 0;
    puVar10[1] = 0;
    plVar9[0x13] = (long)puVar10;
    plVar9[0x14] = (long)&PTR_FUN_710523d9a8;
    puVar10 = (undefined8 *)
              FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar14,param_4,param_5,param_6,param_7,
                             param_8);
    if (puVar10 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
        local_1a0 = (long ********)&SUB_00000020;
        ppppppppplVar14 = &local_1a0;
        uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
        if (((uVar8 & 1) != 0) &&
           (puVar10 = (undefined8 *)
                      FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar14,param_4,param_5,param_6,
                                     param_7,param_8), puVar10 != (undefined8 *)0x0))
        goto LAB_71013c1bc4;
      }
      puVar10 = (undefined8 *)0x0;
    }
LAB_71013c1bc4:
    puVar10[2] = 0;
    puVar10[3] = 0;
    *puVar10 = 0;
    puVar10[1] = 0;
    plVar9[0x15] = (long)puVar10;
    plVar9[0x16] = (long)&PTR_FUN_710523d9e8;
    puVar10 = (undefined8 *)
              FUN_710392e290(0x10,0x18,(long ****)ppppppppplVar14,param_4,param_5,param_6,param_7,
                             param_8);
    if (puVar10 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
        local_1a0 = (long ********)&SUB_00000018;
        ppppppppplVar14 = &local_1a0;
        uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
        if (((uVar8 & 1) != 0) &&
           (puVar10 = (undefined8 *)
                      FUN_710392e290(0x10,0x18,(long ****)ppppppppplVar14,param_4,param_5,param_6,
                                     param_7,param_8), puVar10 != (undefined8 *)0x0))
        goto LAB_71013c1c24;
      }
      puVar10 = (undefined8 *)0x0;
    }
LAB_71013c1c24:
    *puVar10 = 0;
    puVar10[1] = 0;
    *(undefined1 *)(puVar10 + 2) = 1;
    plVar9[0x17] = (long)puVar10;
    plVar9[0x19] = (long)&PTR_FUN_710523d9a8;
    puVar10 = (undefined8 *)
              FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar14,param_4,param_5,param_6,param_7,
                             param_8);
    if (puVar10 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
        local_1a0 = (long ********)&SUB_00000020;
        ppppppppplVar14 = &local_1a0;
        uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
        if (((uVar8 & 1) != 0) &&
           (puVar10 = (undefined8 *)
                      FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar14,param_4,param_5,param_6,
                                     param_7,param_8), puVar10 != (undefined8 *)0x0))
        goto LAB_71013c1c8c;
      }
      puVar10 = (undefined8 *)0x0;
    }
LAB_71013c1c8c:
    puVar10[2] = 0;
    puVar10[3] = 0;
    *puVar10 = 0;
    puVar10[1] = 0;
    plVar9[0x1a] = (long)puVar10;
    plVar9[0x1b] = (long)&PTR_FUN_710523d9a8;
    puVar10 = (undefined8 *)
              FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar14,param_4,param_5,param_6,param_7,
                             param_8);
    if (puVar10 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
        local_1a0 = (long ********)&SUB_00000020;
        ppppppppplVar14 = &local_1a0;
        uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
        if (((uVar8 & 1) != 0) &&
           (puVar10 = (undefined8 *)
                      FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar14,param_4,param_5,param_6,
                                     param_7,param_8), puVar10 != (undefined8 *)0x0))
        goto LAB_71013c1cec;
      }
      puVar10 = (undefined8 *)0x0;
    }
LAB_71013c1cec:
    puVar10[2] = 0;
    puVar10[3] = 0;
    *puVar10 = 0;
    puVar10[1] = 0;
    plVar9[0x1c] = (long)puVar10;
    plVar9[0x1d] = (long)&PTR_FUN_710523d9a8;
    puVar10 = (undefined8 *)
              FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar14,param_4,param_5,param_6,param_7,
                             param_8);
    if (puVar10 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
        local_1a0 = (long ********)&SUB_00000020;
        ppppppppplVar14 = &local_1a0;
        uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
        if (((uVar8 & 1) != 0) &&
           (puVar10 = (undefined8 *)
                      FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar14,param_4,param_5,param_6,
                                     param_7,param_8), puVar10 != (undefined8 *)0x0))
        goto LAB_71013c1d4c;
      }
      puVar10 = (undefined8 *)0x0;
    }
LAB_71013c1d4c:
    puVar10[2] = 0;
    puVar10[3] = 0;
    *puVar10 = 0;
    puVar10[1] = 0;
    plVar9[0x1e] = (long)puVar10;
    plVar9[0x1f] = (long)&PTR_FUN_710523d9e8;
    puVar10 = (undefined8 *)
              FUN_710392e290(0x10,0x18,(long ****)ppppppppplVar14,param_4,param_5,param_6,param_7,
                             param_8);
    if (puVar10 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
        local_1a0 = (long ********)&SUB_00000018;
        ppppppppplVar14 = &local_1a0;
        uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
        if (((uVar8 & 1) != 0) &&
           (puVar10 = (undefined8 *)
                      FUN_710392e290(0x10,0x18,(long ****)ppppppppplVar14,param_4,param_5,param_6,
                                     param_7,param_8), puVar10 != (undefined8 *)0x0))
        goto LAB_71013c1dac;
      }
      puVar10 = (undefined8 *)0x0;
    }
LAB_71013c1dac:
    *puVar10 = 0;
    puVar10[1] = 0;
    *(undefined1 *)(puVar10 + 2) = 1;
    plVar9[0x20] = (long)puVar10;
    plVar9[0x22] = (long)&PTR_FUN_710523d9a8;
    puVar10 = (undefined8 *)
              FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar14,param_4,param_5,param_6,param_7,
                             param_8);
    if (puVar10 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
        local_1a0 = (long ********)&SUB_00000020;
        ppppppppplVar14 = &local_1a0;
        uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
        if (((uVar8 & 1) != 0) &&
           (puVar10 = (undefined8 *)
                      FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar14,param_4,param_5,param_6,
                                     param_7,param_8), puVar10 != (undefined8 *)0x0))
        goto LAB_71013c1e14;
      }
      puVar10 = (undefined8 *)0x0;
    }
LAB_71013c1e14:
    puVar10[2] = 0;
    puVar10[3] = 0;
    *puVar10 = 0;
    puVar10[1] = 0;
    plVar9[0x23] = (long)puVar10;
    plVar9[0x24] = (long)&PTR_FUN_710523d9a8;
    puVar10 = (undefined8 *)
              FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar14,param_4,param_5,param_6,param_7,
                             param_8);
    if (puVar10 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
        local_1a0 = (long ********)&SUB_00000020;
        ppppppppplVar14 = &local_1a0;
        uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
        if (((uVar8 & 1) != 0) &&
           (puVar10 = (undefined8 *)
                      FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar14,param_4,param_5,param_6,
                                     param_7,param_8), puVar10 != (undefined8 *)0x0))
        goto LAB_71013c1e74;
      }
      puVar10 = (undefined8 *)0x0;
    }
LAB_71013c1e74:
    puVar10[2] = 0;
    puVar10[3] = 0;
    *puVar10 = 0;
    puVar10[1] = 0;
    plVar9[0x25] = (long)puVar10;
    plVar9[0x26] = (long)&PTR_FUN_710523d9a8;
    puVar10 = (undefined8 *)
              FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar14,param_4,param_5,param_6,param_7,
                             param_8);
    if (puVar10 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
        local_1a0 = (long ********)&SUB_00000020;
        ppppppppplVar14 = &local_1a0;
        uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
        if (((uVar8 & 1) != 0) &&
           (puVar10 = (undefined8 *)
                      FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar14,param_4,param_5,param_6,
                                     param_7,param_8), puVar10 != (undefined8 *)0x0))
        goto LAB_71013c1ed4;
      }
      puVar10 = (undefined8 *)0x0;
    }
LAB_71013c1ed4:
    puVar10[2] = 0;
    puVar10[3] = 0;
    *puVar10 = 0;
    puVar10[1] = 0;
    plVar9[0x27] = (long)puVar10;
    plVar9[0x28] = (long)&PTR_FUN_710523d9e8;
    puVar10 = (undefined8 *)
              FUN_710392e290(0x10,0x18,(long ****)ppppppppplVar14,param_4,param_5,param_6,param_7,
                             param_8);
    if (puVar10 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
        local_1a0 = (long ********)&SUB_00000018;
        ppppppppplVar14 = &local_1a0;
        uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
        if (((uVar8 & 1) != 0) &&
           (puVar10 = (undefined8 *)
                      FUN_710392e290(0x10,0x18,(long ****)ppppppppplVar14,param_4,param_5,param_6,
                                     param_7,param_8), puVar10 != (undefined8 *)0x0))
        goto LAB_71013c1f34;
      }
      puVar10 = (undefined8 *)0x0;
    }
LAB_71013c1f34:
    *puVar10 = 0;
    puVar10[1] = 0;
    *(undefined1 *)(puVar10 + 2) = 1;
    plVar9[0x29] = (long)puVar10;
    plVar9[0x2b] = (long)&PTR_FUN_710523d9a8;
    puVar10 = (undefined8 *)
              FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar14,param_4,param_5,param_6,param_7,
                             param_8);
    if (puVar10 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
        local_1a0 = (long ********)&SUB_00000020;
        ppppppppplVar14 = &local_1a0;
        uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
        if (((uVar8 & 1) != 0) &&
           (puVar10 = (undefined8 *)
                      FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar14,param_4,param_5,param_6,
                                     param_7,param_8), puVar10 != (undefined8 *)0x0))
        goto LAB_71013c1f9c;
      }
      puVar10 = (undefined8 *)0x0;
    }
LAB_71013c1f9c:
    puVar10[2] = 0;
    puVar10[3] = 0;
    *puVar10 = 0;
    puVar10[1] = 0;
    plVar9[0x2c] = (long)puVar10;
    plVar9[0x2d] = (long)&PTR_FUN_710523d9a8;
    puVar10 = (undefined8 *)
              FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar14,param_4,param_5,param_6,param_7,
                             param_8);
    if (puVar10 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
        local_1a0 = (long ********)&SUB_00000020;
        ppppppppplVar14 = &local_1a0;
        uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
        if (((uVar8 & 1) != 0) &&
           (puVar10 = (undefined8 *)
                      FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar14,param_4,param_5,param_6,
                                     param_7,param_8), puVar10 != (undefined8 *)0x0))
        goto LAB_71013c1ffc;
      }
      puVar10 = (undefined8 *)0x0;
    }
LAB_71013c1ffc:
    puVar10[2] = 0;
    puVar10[3] = 0;
    *puVar10 = 0;
    puVar10[1] = 0;
    plVar9[0x2e] = (long)puVar10;
    plVar9[0x2f] = (long)&PTR_FUN_710523d9a8;
    puVar10 = (undefined8 *)
              FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar14,param_4,param_5,param_6,param_7,
                             param_8);
    if (puVar10 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
        local_1a0 = (long ********)&SUB_00000020;
        ppppppppplVar14 = &local_1a0;
        uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
        if (((uVar8 & 1) != 0) &&
           (puVar10 = (undefined8 *)
                      FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar14,param_4,param_5,param_6,
                                     param_7,param_8), puVar10 != (undefined8 *)0x0))
        goto LAB_71013c205c;
      }
      puVar10 = (undefined8 *)0x0;
    }
LAB_71013c205c:
    puVar10[2] = 0;
    puVar10[3] = 0;
    *puVar10 = 0;
    puVar10[1] = 0;
    plVar9[0x30] = (long)puVar10;
    plVar9[0x31] = (long)&PTR_FUN_710523d9e8;
    puVar10 = (undefined8 *)
              FUN_710392e290(0x10,0x18,(long ****)ppppppppplVar14,param_4,param_5,param_6,param_7,
                             param_8);
    if (puVar10 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
        local_1a0 = (long ********)&SUB_00000018;
        ppppppppplVar14 = &local_1a0;
        uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
        if (((uVar8 & 1) != 0) &&
           (puVar10 = (undefined8 *)
                      FUN_710392e290(0x10,0x18,(long ****)ppppppppplVar14,param_4,param_5,param_6,
                                     param_7,param_8), puVar10 != (undefined8 *)0x0))
        goto LAB_71013c20bc;
      }
      puVar10 = (undefined8 *)0x0;
    }
LAB_71013c20bc:
    *puVar10 = 0;
    puVar10[1] = 0;
    *(undefined1 *)(puVar10 + 2) = 1;
    plVar9[0x32] = (long)puVar10;
    plVar9[0x34] = (long)&PTR_FUN_710523d9a8;
    puVar10 = (undefined8 *)
              FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar14,param_4,param_5,param_6,param_7,
                             param_8);
    if (puVar10 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
        local_1a0 = (long ********)&SUB_00000020;
        ppppppppplVar14 = &local_1a0;
        uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
        if (((uVar8 & 1) != 0) &&
           (puVar10 = (undefined8 *)
                      FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar14,param_4,param_5,param_6,
                                     param_7,param_8), puVar10 != (undefined8 *)0x0))
        goto LAB_71013c2124;
      }
      puVar10 = (undefined8 *)0x0;
    }
LAB_71013c2124:
    puVar10[2] = 0;
    puVar10[3] = 0;
    *puVar10 = 0;
    puVar10[1] = 0;
    plVar9[0x35] = (long)puVar10;
    plVar9[0x36] = (long)&PTR_FUN_710523d9a8;
    puVar10 = (undefined8 *)
              FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar14,param_4,param_5,param_6,param_7,
                             param_8);
    if (puVar10 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
        local_1a0 = (long ********)&SUB_00000020;
        ppppppppplVar14 = &local_1a0;
        uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
        if (((uVar8 & 1) != 0) &&
           (puVar10 = (undefined8 *)
                      FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar14,param_4,param_5,param_6,
                                     param_7,param_8), puVar10 != (undefined8 *)0x0))
        goto LAB_71013c2184;
      }
      puVar10 = (undefined8 *)0x0;
    }
LAB_71013c2184:
    puVar10[2] = 0;
    puVar10[3] = 0;
    *puVar10 = 0;
    puVar10[1] = 0;
    plVar9[0x37] = (long)puVar10;
    plVar9[0x38] = (long)&PTR_FUN_710523d9a8;
    puVar10 = (undefined8 *)
              FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar14,param_4,param_5,param_6,param_7,
                             param_8);
    if (puVar10 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
        local_1a0 = (long ********)&SUB_00000020;
        ppppppppplVar14 = &local_1a0;
        uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
        if (((uVar8 & 1) != 0) &&
           (puVar10 = (undefined8 *)
                      FUN_710392e290(0x10,0x20,(long ****)ppppppppplVar14,param_4,param_5,param_6,
                                     param_7,param_8), puVar10 != (undefined8 *)0x0))
        goto LAB_71013c21e4;
      }
      puVar10 = (undefined8 *)0x0;
    }
LAB_71013c21e4:
    puVar10[2] = 0;
    puVar10[3] = 0;
    *puVar10 = 0;
    puVar10[1] = 0;
    plVar9[0x39] = (long)puVar10;
    plVar9[0x3a] = (long)&PTR_FUN_710523d9e8;
    puVar10 = (undefined8 *)
              FUN_710392e290(0x10,0x18,(long ****)ppppppppplVar14,param_4,param_5,param_6,param_7,
                             param_8);
    if (puVar10 == (undefined8 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
        local_1a0 = (long ********)&SUB_00000018;
        ppppppppplVar14 = &local_1a0;
        uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
        if (((uVar8 & 1) != 0) &&
           (puVar10 = (undefined8 *)
                      FUN_710392e290(0x10,0x18,(long ****)ppppppppplVar14,param_4,param_5,param_6,
                                     param_7,param_8), puVar10 != (undefined8 *)0x0))
        goto LAB_71013c2244;
      }
      puVar10 = (undefined8 *)0x0;
    }
LAB_71013c2244:
    *puVar10 = 0;
    puVar10[1] = 0;
    *(undefined1 *)(puVar10 + 2) = 1;
    plVar9[0x3b] = (long)puVar10;
    puVar7[0x10] = plVar9;
    FUN_71032cbf30(plVar33,*plVar36,(ulong *)&DAT_7104544ca0,(byte ****)0x1,param_5,param_6,param_7,
                   param_8);
    *(undefined4 *)(**(long **)plVar9[1] + 0x650) = 0;
    FUN_71037760f0(**(long **)plVar9[1],0);
    lVar18 = **(long **)plVar9[1];
    *(bool *)(lVar18 + 0x656) = uVar17 == 10;
    *(bool *)(*(long *)(lVar18 + 0x600) + 0x4ab) = uVar17 == 10;
    lVar21 = *(long *)(lVar18 + 0x608);
    lVar24 = *(long *)(lVar18 + 0x610);
    if (lVar21 != lVar24) {
      uVar8 = (lVar24 + -0x10) - lVar21;
      uVar17 = ((uint)(uVar8 >> 4) & 0xfffffff) + 1;
      if ((uVar17 & 3) != 0) {
        lVar28 = -((ulong)uVar17 & 3);
        do {
          plVar36 = (long *)(lVar21 + 8);
          lVar21 = lVar21 + 0x10;
          lVar28 = lVar28 + 1;
          *(undefined1 *)(*plVar36 + 0x4ab) = *(undefined1 *)(lVar18 + 0x656);
        } while (lVar28 != 0);
      }
      if (0x2f < uVar8) {
        do {
          *(undefined1 *)(*(long *)(lVar21 + 8) + 0x4ab) = *(undefined1 *)(lVar18 + 0x656);
          *(undefined1 *)(*(long *)(lVar21 + 0x18) + 0x4ab) = *(undefined1 *)(lVar18 + 0x656);
          *(undefined1 *)(*(long *)(lVar21 + 0x28) + 0x4ab) = *(undefined1 *)(lVar18 + 0x656);
          plVar36 = (long *)(lVar21 + 0x38);
          lVar21 = lVar21 + 0x40;
          *(undefined1 *)(*plVar36 + 0x4ab) = *(undefined1 *)(lVar18 + 0x656);
        } while (lVar24 != lVar21);
      }
    }
    local_1a0 = (long ********)0x0;
    local_198 = 0x101;
    local_190 = 1;
    local_18c = 1;
    local_18a = 1;
    local_188 = &DAT_41f0000000000000;
    local_180 = 0;
    local_150 = (long *)0x0;
    local_120 = (long *)0x0;
    local_f0 = (long *)0x0;
    local_c0 = (long *)0x0;
    local_90 = (long *)0x0;
    local_80 = 0;
    FUN_710337df20((long)&local_1a0);
    local_1a0 = (long ********)0x0;
    FUN_7103770b30(plVar35,(undefined8 *)(*(long *)*plVar33 + 8),(long ****)"selector_0",
                   (byte ****)&local_1a0,param_5,param_6,param_7,param_8);
    FUN_71037717d0(plVar35,0,"set_parts_%02d",0,param_5,param_6,param_7,param_8);
    lVar21 = *(long *)(*plVar35 + 0x1b8);
    if (lVar21 != 0) {
      lVar18 = *plVar35 + 0x1b8;
      lVar24 = lVar18;
      lVar28 = lVar21;
      do {
        bVar4 = *(int *)(lVar28 + 0x20) < 0;
        if (!bVar4) {
          lVar24 = lVar28;
        }
        lVar28 = *(long *)(lVar28 + (ulong)bVar4 * 8);
      } while (lVar28 != 0);
      if (((lVar24 != lVar18) && (*(int *)(lVar24 + 0x20) < 1)) &&
         (plVar36 = *(long **)(lVar24 + 0x28), plVar36 != (long *)0x0)) {
        (**(code **)(*plVar36 + 0x1f8))(plVar36,1);
        (**(code **)(*plVar36 + 0x388))(plVar36,0,0);
        lVar18 = *plVar35 + 0x1b8;
        lVar21 = *(long *)(*plVar35 + 0x1b8);
      }
      lVar24 = lVar18;
      if (lVar21 != 0) {
        do {
          bVar4 = *(int *)(lVar21 + 0x20) < 0;
          if (!bVar4) {
            lVar24 = lVar21;
          }
          lVar21 = *(long *)(lVar21 + (ulong)bVar4 * 8);
        } while (lVar21 != 0);
        if (((lVar24 != lVar18) && (*(int *)(lVar24 + 0x20) < 1)) &&
           (plVar36 = *(long **)(lVar24 + 0x28), plVar36 != (long *)0x0)) {
          (**(code **)(*plVar36 + 0x208))(plVar36,1);
          (**(code **)(*plVar36 + 0x388))(plVar36,0,0);
        }
      }
    }
    FUN_71037717d0(plVar35,1,"set_parts_%02d",1,param_5,param_6,param_7,param_8);
    lVar21 = *(long *)(*plVar35 + 0x1b8);
    if (lVar21 != 0) {
      lVar18 = *plVar35 + 0x1b8;
      lVar24 = lVar18;
      lVar28 = lVar21;
      do {
        if (0 < *(int *)(lVar28 + 0x20)) {
          lVar24 = lVar28;
        }
        lVar28 = *(long *)(lVar28 + (ulong)(*(int *)(lVar28 + 0x20) < 1) * 8);
      } while (lVar28 != 0);
      if (((lVar24 != lVar18) && (*(int *)(lVar24 + 0x20) < 2)) &&
         (plVar36 = *(long **)(lVar24 + 0x28), plVar36 != (long *)0x0)) {
        (**(code **)(*plVar36 + 0x1f8))(plVar36,1);
        (**(code **)(*plVar36 + 0x388))(plVar36,0,0);
        lVar18 = *plVar35 + 0x1b8;
        lVar21 = *(long *)(*plVar35 + 0x1b8);
      }
      lVar24 = lVar18;
      if (lVar21 != 0) {
        do {
          if (0 < *(int *)(lVar21 + 0x20)) {
            lVar24 = lVar21;
          }
          lVar21 = *(long *)(lVar21 + (ulong)(*(int *)(lVar21 + 0x20) < 1) * 8);
        } while (lVar21 != 0);
        if (((lVar24 != lVar18) && (*(int *)(lVar24 + 0x20) < 2)) &&
           (plVar36 = *(long **)(lVar24 + 0x28), plVar36 != (long *)0x0)) {
          (**(code **)(*plVar36 + 0x208))(plVar36,1);
          (**(code **)(*plVar36 + 0x388))(plVar36,0,0);
        }
      }
    }
    FUN_71037717d0(plVar35,2,"set_parts_%02d",2,param_5,param_6,param_7,param_8);
    lVar21 = *(long *)(*plVar35 + 0x1b8);
    if (lVar21 != 0) {
      lVar18 = *plVar35 + 0x1b8;
      lVar24 = lVar18;
      lVar28 = lVar21;
      do {
        if (1 < *(int *)(lVar28 + 0x20)) {
          lVar24 = lVar28;
        }
        lVar28 = *(long *)(lVar28 + (ulong)(*(int *)(lVar28 + 0x20) < 2) * 8);
      } while (lVar28 != 0);
      if (((lVar24 != lVar18) && (*(int *)(lVar24 + 0x20) < 3)) &&
         (plVar36 = *(long **)(lVar24 + 0x28), plVar36 != (long *)0x0)) {
        (**(code **)(*plVar36 + 0x1f8))(plVar36,1);
        (**(code **)(*plVar36 + 0x388))(plVar36,0,0);
        lVar18 = *plVar35 + 0x1b8;
        lVar21 = *(long *)(*plVar35 + 0x1b8);
      }
      lVar24 = lVar18;
      if (lVar21 != 0) {
        do {
          if (1 < *(int *)(lVar21 + 0x20)) {
            lVar24 = lVar21;
          }
          lVar21 = *(long *)(lVar21 + (ulong)(*(int *)(lVar21 + 0x20) < 2) * 8);
        } while (lVar21 != 0);
        if (((lVar24 != lVar18) && (*(int *)(lVar24 + 0x20) < 3)) &&
           (plVar36 = *(long **)(lVar24 + 0x28), plVar36 != (long *)0x0)) {
          (**(code **)(*plVar36 + 0x208))(plVar36,1);
          (**(code **)(*plVar36 + 0x388))(plVar36,0,0);
        }
      }
    }
    FUN_71037717d0(plVar35,3,"set_parts_%02d",3,param_5,param_6,param_7,param_8);
    lVar21 = *(long *)(*plVar35 + 0x1b8);
    if (lVar21 != 0) {
      lVar18 = *plVar35 + 0x1b8;
      lVar24 = lVar18;
      lVar28 = lVar21;
      do {
        if (2 < *(int *)(lVar28 + 0x20)) {
          lVar24 = lVar28;
        }
        lVar28 = *(long *)(lVar28 + (ulong)(*(int *)(lVar28 + 0x20) < 3) * 8);
      } while (lVar28 != 0);
      if (((lVar24 != lVar18) && (*(int *)(lVar24 + 0x20) < 4)) &&
         (plVar36 = *(long **)(lVar24 + 0x28), plVar36 != (long *)0x0)) {
        (**(code **)(*plVar36 + 0x1f8))(plVar36,1);
        (**(code **)(*plVar36 + 0x388))(plVar36,0,0);
        lVar18 = *plVar35 + 0x1b8;
        lVar21 = *(long *)(*plVar35 + 0x1b8);
      }
      lVar24 = lVar18;
      if (lVar21 != 0) {
        do {
          if (2 < *(int *)(lVar21 + 0x20)) {
            lVar24 = lVar21;
          }
          lVar21 = *(long *)(lVar21 + (ulong)(*(int *)(lVar21 + 0x20) < 3) * 8);
        } while (lVar21 != 0);
        if (((lVar24 != lVar18) && (*(int *)(lVar24 + 0x20) < 4)) &&
           (plVar36 = *(long **)(lVar24 + 0x28), plVar36 != (long *)0x0)) {
          (**(code **)(*plVar36 + 0x208))(plVar36,1);
          (**(code **)(*plVar36 + 0x388))(plVar36,0,0);
        }
      }
    }
    pcVar15 = "set_parts_%02d";
    param_4 = (byte ****)&DAT_00000004;
    FUN_71037717d0(plVar35,4,"set_parts_%02d",4,param_5,param_6,param_7,param_8);
    lVar21 = *(long *)(*plVar35 + 0x1b8);
    if (lVar21 != 0) {
      lVar18 = *plVar35 + 0x1b8;
      lVar24 = lVar18;
      lVar28 = lVar21;
      do {
        if (3 < *(int *)(lVar28 + 0x20)) {
          lVar24 = lVar28;
        }
        lVar28 = *(long *)(lVar28 + (ulong)(*(int *)(lVar28 + 0x20) < 4) * 8);
      } while (lVar28 != 0);
      if (((lVar24 != lVar18) && (*(int *)(lVar24 + 0x20) < 5)) &&
         (plVar36 = *(long **)(lVar24 + 0x28), plVar36 != (long *)0x0)) {
        (**(code **)(*plVar36 + 0x1f8))(plVar36,1);
        pcVar15 = (char *)0x0;
        (**(code **)(*plVar36 + 0x388))(plVar36,0);
        lVar18 = *plVar35 + 0x1b8;
        lVar21 = *(long *)(*plVar35 + 0x1b8);
      }
      lVar24 = lVar18;
      if (lVar21 != 0) {
        do {
          if (3 < *(int *)(lVar21 + 0x20)) {
            lVar24 = lVar21;
          }
          lVar21 = *(long *)(lVar21 + (ulong)(*(int *)(lVar21 + 0x20) < 4) * 8);
        } while (lVar21 != 0);
        if (((lVar24 != lVar18) && (*(int *)(lVar24 + 0x20) < 5)) &&
           (plVar36 = *(long **)(lVar24 + 0x28), plVar36 != (long *)0x0)) {
          (**(code **)(*plVar36 + 0x208))(plVar36,1);
          pcVar15 = (char *)0x0;
          (**(code **)(*plVar36 + 0x388))(plVar36,0);
        }
      }
    }
    if (alStack_b0 == local_90) {
      (**(code **)(*local_90 + 0x20))();
    }
    else if (local_90 != (long *)0x0) {
      (**(code **)(*local_90 + 0x28))();
    }
    if (alStack_e0 == local_c0) {
      pcVar19 = *(code **)(*local_c0 + 0x20);
LAB_71013c292c:
      (*pcVar19)();
    }
    else if (local_c0 != (long *)0x0) {
      pcVar19 = *(code **)(*local_c0 + 0x28);
      goto LAB_71013c292c;
    }
    if (alStack_110 == local_f0) {
      pcVar19 = *(code **)(*local_f0 + 0x20);
LAB_71013c295c:
      (*pcVar19)();
    }
    else if (local_f0 != (long *)0x0) {
      pcVar19 = *(code **)(*local_f0 + 0x28);
      goto LAB_71013c295c;
    }
    if (alStack_140 == local_120) {
      pcVar19 = *(code **)(*local_120 + 0x20);
LAB_71013c298c:
      (*pcVar19)();
    }
    else if (local_120 != (long *)0x0) {
      pcVar19 = *(code **)(*local_120 + 0x28);
      goto LAB_71013c298c;
    }
    if (alStack_170 == local_150) {
      pcVar19 = *(code **)(*local_150 + 0x20);
LAB_71013c29bc:
      (*pcVar19)();
    }
    else if (local_150 != (long *)0x0) {
      pcVar19 = *(code **)(*local_150 + 0x28);
      goto LAB_71013c29bc;
    }
    FUN_71037780e0(&local_1a0,*(long *)*plVar33 + 8,(long ****)&DAT_7104421055,pcVar15,param_4,
                   param_5,param_6,param_7,param_8);
    uVar8 = local_198;
    if (&local_1a0 != (long *********)(plVar9 + 9)) {
      local_198 = 0;
      uVar11 = plVar9[10];
      plVar9[10] = uVar8;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
    }
    uVar8 = local_198;
    local_1a0 = (long ********)&PTR_FUN_710523d9e8;
    local_198 = 0;
    if (uVar8 != 0) {
      FUN_710392eb40(uVar8);
    }
    FUN_71037780e0(&local_1a0,*(long *)*plVar33 + 8,(long ****)&DAT_710428ff7d,pcVar15,param_4,
                   param_5,param_6,param_7,param_8);
    uVar8 = local_198;
    if (&local_1a0 != ppppppppplVar32) {
      local_198 = 0;
      uVar11 = plVar9[0xc];
      plVar9[0xc] = uVar8;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
    }
    uVar8 = local_198;
    local_1a0 = (long ********)&PTR_FUN_710523d9e8;
    local_198 = 0;
    if (uVar8 != 0) {
      FUN_710392eb40(uVar8);
    }
    FUN_71037780e0(&local_1a0,*(long *)*plVar33 + 8,(long ****)"btn_ptn",pcVar15,param_4,param_5,
                   param_6,param_7,param_8);
    uVar8 = local_198;
    if (&local_1a0 != (long *********)(plVar9 + 0xd)) {
      local_198 = 0;
      uVar11 = plVar9[0xe];
      plVar9[0xe] = uVar8;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
    }
    uVar8 = local_198;
    local_1a0 = (long ********)&PTR_FUN_710523d9e8;
    local_198 = 0;
    if (uVar8 != 0) {
      FUN_710392eb40(uVar8);
    }
    FUN_710377b140((long)ppppppppplVar32);
    FUN_7103776640(&local_1b0,*(long *)*plVar33 + 8,(byte ****)"set_parts_title",pcVar15,param_4,
                   param_5,param_6,param_7,param_8);
    FUN_71037780e0(&local_1a0,(long)&local_1b0,(long ****)"p_color",pcVar15,param_4,param_5,param_6,
                   param_7,param_8);
    uVar8 = local_198;
    if (&local_1a0 != (long *********)(plVar9 + 7)) {
      local_198 = 0;
      uVar11 = plVar9[8];
      plVar9[8] = uVar8;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
    }
    uVar8 = local_198;
    local_1a0 = (long ********)&PTR_FUN_710523d9e8;
    local_198 = 0;
    if (uVar8 != 0) {
      FUN_710392eb40(uVar8);
    }
    FUN_7103776910(&local_1a0,(long)&local_1b0,(long ****)"set_txt_pause_any",pcVar15,param_4,
                   param_5,param_6,param_7,param_8);
    uVar8 = local_198;
    if (&local_1a0 != (long *********)(plVar9 + 5)) {
      local_198 = 0;
      uVar11 = plVar9[6];
      plVar9[6] = uVar8;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
    }
    uVar8 = local_198;
    local_1a0 = (long ********)&PTR_FUN_710523d9a8;
    local_198 = 0;
    if (uVar8 != 0) {
      FUN_710392eb40(uVar8);
    }
    uVar8 = local_1a8;
    local_1b0 = &PTR_FUN_710523d988;
    local_1a8 = 0;
    if (uVar8 != 0) {
      uVar11 = *(ulong *)(uVar8 + 0x18);
      *(undefined ***)(uVar8 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar8 + 0x18) = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40(uVar8);
    }
    FUN_7101b8dde0((long)plVar9,(byte ****)"set_parts_00",0,param_4,param_5,param_6,param_7,param_8)
    ;
    FUN_7101b8dde0((long)plVar9,(byte ****)"set_parts_01",1,param_4,param_5,param_6,param_7,param_8)
    ;
    FUN_7101b8dde0((long)plVar9,(byte ****)"set_parts_02",2,param_4,param_5,param_6,param_7,param_8)
    ;
    FUN_7101b8dde0((long)plVar9,(byte ****)"set_parts_03",3,param_4,param_5,param_6,param_7,param_8)
    ;
    param_3 = (long *********)&DAT_00000004;
    FUN_7101b8dde0((long)plVar9,(byte ****)"set_parts_04",4,param_4,param_5,param_6,param_7,param_8)
    ;
    puVar7[2] = &DAT_7105333600;
    uVar16 = DAT_7105333664;
    *(undefined4 *)(puVar7 + 0xd) = DAT_7105333660;
    *(undefined4 *)((long)puVar7 + 0x6c) = uVar16;
    do {
      uVar17 = DAT_7105333650;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
      if (bVar4) {
        DAT_7105333650 = 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0' || (uVar17 & 1) != 0);
    puVar7[9] = DAT_7105333648;
    DAT_7105333650 = 0;
    DAT_7105333648 = puVar7;
    FUN_71032caea0((long)puVar7,extraout_x1_01,(long ****)param_3,param_4,param_5,param_6,param_7,
                   param_8);
    lVar21 = param_1[0x3d];
    param_1[0x3d] = (long)puVar7;
    if (lVar21 != 0) {
      FUN_71032cad20(lVar21);
    }
  }
  bVar5 = *(int *)(lVar31 + 0xf44) == 1;
  bVar23 = 2;
  if (!(bool)bVar5) {
    bVar23 = 1;
  }
  if (*(int *)(lVar31 + 0xd6c) == 1) {
    bVar5 = bVar23;
  }
  if (*(int *)(lVar31 + 0x111c) == 1) {
    bVar5 = bVar5 + 1;
  }
  if (*(int *)(lVar31 + 0x12f4) == 1) {
    bVar5 = bVar5 + 1;
  }
  if (*(int *)(lVar31 + 0x14cc) == 1) {
    bVar5 = bVar5 + 1;
  }
  if (*(int *)(lVar31 + 0x16a4) == 1) {
    bVar5 = bVar5 + 1;
  }
  if (*(int *)(lVar31 + 0x187c) == 1) {
    bVar5 = bVar5 + 1;
  }
  pvVar29 = (void *)param_1[0x3e];
  if (*(int *)(lVar31 + 0x1a54) == 1) {
    bVar5 = bVar5 + 1;
  }
  *(bool *)((long)param_1 + 0xe) = 1 < bVar5;
  if ((ulong)(param_1[0x40] - (long)pvVar29 >> 2) < 10) {
    ppppppppplVar32 = (long *********)(param_1[0x3f] - (long)pvVar29);
    lVar21 = (long)ppppppppplVar32 >> 2;
    pvVar12 = (void *)FUN_710392e290(0x10,0x28,(long ****)param_3,param_4,param_5,param_6,param_7,
                                     param_8);
    if (pvVar12 == (void *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
        local_1a0 = (long ********)&DAT_00000028;
        param_3 = &local_1a0;
        uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
        if (((uVar8 & 1) != 0) &&
           (pvVar12 = (void *)FUN_710392e290(0x10,0x28,(long ****)param_3,param_4,param_5,param_6,
                                             param_7,param_8), pvVar12 != (void *)0x0))
        goto LAB_71013c2d60;
      }
      pvVar12 = (void *)0x0;
    }
LAB_71013c2d60:
    if (0 < (long)ppppppppplVar32) {
      memcpy(pvVar12,pvVar29,(size_t)ppppppppplVar32);
      param_3 = ppppppppplVar32;
    }
    param_1[0x3e] = (long)pvVar12;
    param_1[0x3f] = (long)((long)pvVar12 + lVar21 * 4);
    param_1[0x40] = (long)pvVar12 + 0x28;
    if (pvVar29 != (void *)0x0) {
      FUN_710392eb40((ulong)pvVar29);
    }
  }
  plVar36 = param_1 + 0x3e;
  if (0xd < *(uint *)(lVar31 + 0xd4c)) {
switchD_71013c2dc0_caseD_4:
    lVar21 = param_1[0x3d];
    goto joined_r0x0071013c41dc;
  }
  plVar9 = param_1 + 0x40;
  switch(*(uint *)(lVar31 + 0xd4c)) {
  case 0:
    puVar30 = (undefined4 *)param_1[0x3f];
    plVar33 = param_1 + 0x3f;
    if (puVar30 < (undefined4 *)param_1[0x40]) {
      *puVar30 = 0;
      puVar30 = (undefined4 *)(*plVar33 + 4);
      *plVar33 = (long)puVar30;
    }
    else {
      pvVar29 = (void *)*plVar36;
      ppppppppplVar32 = (long *********)((long)puVar30 - (long)pvVar29);
      uVar8 = ((long)ppppppppplVar32 >> 2) + 1;
      if (uVar8 >> 0x3e != 0) goto LAB_71013c5220;
      lVar21 = param_1[0x40] - (long)pvVar29;
      if ((ulong)(lVar21 >> 2) < 0x1fffffffffffffff) {
        uVar11 = lVar21 >> 1;
        if (uVar8 <= uVar11) {
          uVar8 = uVar11;
        }
        if (uVar8 != 0) {
          if (uVar8 >> 0x3e != 0) goto LAB_71013c50b4;
          goto LAB_71013c32c8;
        }
LAB_71013c3328:
        pvVar12 = (void *)0x0;
      }
      else {
        uVar8 = 0x3fffffffffffffff;
LAB_71013c32c8:
        pppppppplVar20 = (long ********)(uVar8 * 4);
        if (pppppppplVar20 == (long ********)0x0) {
          pppppppplVar20 = (long ********)0x1;
        }
        pvVar12 = (void *)FUN_710392e290(0x10,pppppppplVar20,(long ****)param_3,param_4,param_5,
                                         param_6,param_7,param_8);
        if (pvVar12 == (void *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
            param_3 = &local_1a0;
            local_1a0 = pppppppplVar20;
            uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
            if (((uVar11 & 1) != 0) &&
               (pvVar12 = (void *)FUN_710392e290(0x10,pppppppplVar20,(long ****)param_3,param_4,
                                                 param_5,param_6,param_7,param_8),
               pvVar12 != (void *)0x0)) goto LAB_71013c332c;
          }
          goto LAB_71013c3328;
        }
      }
LAB_71013c332c:
      puVar1 = (undefined4 *)((long)pvVar12 + ((long)ppppppppplVar32 >> 2) * 4);
      puVar30 = puVar1 + 1;
      *puVar1 = 0;
      if (0 < (long)ppppppppplVar32) {
        memcpy(pvVar12,pvVar29,(size_t)ppppppppplVar32);
        param_3 = ppppppppplVar32;
      }
      *plVar36 = (long)pvVar12;
      *plVar33 = (long)puVar30;
      *plVar9 = (long)((long)pvVar12 + uVar8 * 4);
      if (pvVar29 != (void *)0x0) {
        FUN_710392eb40((ulong)pvVar29);
        puVar30 = (undefined4 *)*plVar33;
      }
    }
    if ((undefined4 *)*plVar9 <= puVar30) {
      pvVar29 = (void *)*plVar36;
      ppppppppplVar32 = (long *********)((long)puVar30 - (long)pvVar29);
      uVar8 = ((long)ppppppppplVar32 >> 2) + 1;
      if (uVar8 >> 0x3e != 0) goto LAB_71013c5220;
      lVar21 = *plVar9 - (long)pvVar29;
      if ((ulong)(lVar21 >> 2) < 0x1fffffffffffffff) {
        uVar11 = lVar21 >> 1;
        if (uVar8 <= uVar11) {
          uVar8 = uVar11;
        }
        if (uVar8 != 0) {
          if (uVar8 >> 0x3e != 0) goto LAB_71013c50b4;
          goto LAB_71013c3cd0;
        }
LAB_71013c3d30:
        pvVar12 = (void *)0x0;
      }
      else {
        uVar8 = 0x3fffffffffffffff;
LAB_71013c3cd0:
        pppppppplVar20 = (long ********)(uVar8 * 4);
        if (pppppppplVar20 == (long ********)0x0) {
          pppppppplVar20 = (long ********)0x1;
        }
        pvVar12 = (void *)FUN_710392e290(0x10,pppppppplVar20,(long ****)param_3,param_4,param_5,
                                         param_6,param_7,param_8);
        if (pvVar12 == (void *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
            param_3 = &local_1a0;
            local_1a0 = pppppppplVar20;
            uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
            if (((uVar11 & 1) != 0) &&
               (pvVar12 = (void *)FUN_710392e290(0x10,pppppppplVar20,(long ****)param_3,param_4,
                                                 param_5,param_6,param_7,param_8),
               pvVar12 != (void *)0x0)) goto LAB_71013c3d34;
          }
          goto LAB_71013c3d30;
        }
      }
LAB_71013c3d34:
      puVar30 = (undefined4 *)((long)pvVar12 + ((long)ppppppppplVar32 >> 2) * 4);
      uVar16 = 1;
      goto LAB_71013c3db0;
    }
    uVar16 = 1;
LAB_71013c348c:
    *puVar30 = uVar16;
LAB_71013c3490:
    puVar30 = (undefined4 *)(param_1[0x3f] + 4);
    param_1[0x3f] = (long)puVar30;
    goto LAB_71013c349c;
  case 1:
    puVar30 = (undefined4 *)param_1[0x3f];
    plVar33 = param_1 + 0x3f;
    if (puVar30 < (undefined4 *)param_1[0x40]) {
      *puVar30 = 0;
      puVar30 = (undefined4 *)(*plVar33 + 4);
      *plVar33 = (long)puVar30;
    }
    else {
      pvVar29 = (void *)*plVar36;
      ppppppppplVar32 = (long *********)((long)puVar30 - (long)pvVar29);
      uVar8 = ((long)ppppppppplVar32 >> 2) + 1;
      if (uVar8 >> 0x3e != 0) goto LAB_71013c5220;
      lVar21 = param_1[0x40] - (long)pvVar29;
      if ((ulong)(lVar21 >> 2) < 0x1fffffffffffffff) {
        uVar11 = lVar21 >> 1;
        if (uVar8 <= uVar11) {
          uVar8 = uVar11;
        }
        if (uVar8 != 0) {
          if (uVar8 >> 0x3e != 0) goto LAB_71013c50b4;
          goto LAB_71013c33d4;
        }
LAB_71013c3434:
        pvVar12 = (void *)0x0;
      }
      else {
        uVar8 = 0x3fffffffffffffff;
LAB_71013c33d4:
        pppppppplVar20 = (long ********)(uVar8 * 4);
        if (pppppppplVar20 == (long ********)0x0) {
          pppppppplVar20 = (long ********)0x1;
        }
        pvVar12 = (void *)FUN_710392e290(0x10,pppppppplVar20,(long ****)param_3,param_4,param_5,
                                         param_6,param_7,param_8);
        if (pvVar12 == (void *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
            param_3 = &local_1a0;
            local_1a0 = pppppppplVar20;
            uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
            if (((uVar11 & 1) != 0) &&
               (pvVar12 = (void *)FUN_710392e290(0x10,pppppppplVar20,(long ****)param_3,param_4,
                                                 param_5,param_6,param_7,param_8),
               pvVar12 != (void *)0x0)) goto LAB_71013c3438;
          }
          goto LAB_71013c3434;
        }
      }
LAB_71013c3438:
      puVar1 = (undefined4 *)((long)pvVar12 + ((long)ppppppppplVar32 >> 2) * 4);
      puVar30 = puVar1 + 1;
      *puVar1 = 0;
      if (0 < (long)ppppppppplVar32) {
        memcpy(pvVar12,pvVar29,(size_t)ppppppppplVar32);
        param_3 = ppppppppplVar32;
      }
      *plVar36 = (long)pvVar12;
      *plVar33 = (long)puVar30;
      *plVar9 = (long)((long)pvVar12 + uVar8 * 4);
      if (pvVar29 != (void *)0x0) {
        FUN_710392eb40((ulong)pvVar29);
        puVar30 = (undefined4 *)*plVar33;
      }
    }
    if (puVar30 < (undefined4 *)*plVar9) {
      uVar16 = 5;
      goto LAB_71013c348c;
    }
    pvVar29 = (void *)*plVar36;
    ppppppppplVar32 = (long *********)((long)puVar30 - (long)pvVar29);
    uVar8 = ((long)ppppppppplVar32 >> 2) + 1;
    if (uVar8 >> 0x3e != 0) goto LAB_71013c5220;
    lVar21 = *plVar9 - (long)pvVar29;
    if ((ulong)(lVar21 >> 2) < 0x1fffffffffffffff) {
      uVar11 = lVar21 >> 1;
      if (uVar8 <= uVar11) {
        uVar8 = uVar11;
      }
      if (uVar8 != 0) {
        if (uVar8 >> 0x3e != 0) goto LAB_71013c50b4;
        goto LAB_71013c3d44;
      }
LAB_71013c3da4:
      pvVar12 = (void *)0x0;
    }
    else {
      uVar8 = 0x3fffffffffffffff;
LAB_71013c3d44:
      pppppppplVar20 = (long ********)(uVar8 * 4);
      if (pppppppplVar20 == (long ********)0x0) {
        pppppppplVar20 = (long ********)0x1;
      }
      pvVar12 = (void *)FUN_710392e290(0x10,pppppppplVar20,(long ****)param_3,param_4,param_5,
                                       param_6,param_7,param_8);
      if (pvVar12 == (void *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
          param_3 = &local_1a0;
          local_1a0 = pppppppplVar20;
          uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
          if (((uVar11 & 1) != 0) &&
             (pvVar12 = (void *)FUN_710392e290(0x10,pppppppplVar20,(long ****)param_3,param_4,
                                               param_5,param_6,param_7,param_8),
             pvVar12 != (void *)0x0)) goto LAB_71013c3da8;
        }
        goto LAB_71013c3da4;
      }
    }
LAB_71013c3da8:
    puVar30 = (undefined4 *)((long)pvVar12 + ((long)ppppppppplVar32 >> 2) * 4);
    uVar16 = 5;
LAB_71013c3db0:
    pvVar2 = (void *)((long)pvVar12 + uVar8 * 4);
    *puVar30 = uVar16;
    break;
  case 2:
  case 3:
    puVar30 = (undefined4 *)param_1[0x3f];
    if (puVar30 < (undefined4 *)param_1[0x40]) {
      *puVar30 = 0;
      goto LAB_71013c3490;
    }
    pvVar29 = (void *)*plVar36;
    ppppppppplVar32 = (long *********)((long)puVar30 - (long)pvVar29);
    uVar8 = ((long)ppppppppplVar32 >> 2) + 1;
    if (uVar8 >> 0x3e != 0) goto LAB_71013c5220;
    lVar21 = param_1[0x40] - (long)pvVar29;
    if ((ulong)(lVar21 >> 2) < 0x1fffffffffffffff) {
      uVar11 = lVar21 >> 1;
      if (uVar8 <= uVar11) {
        uVar8 = uVar11;
      }
      if (uVar8 != 0) {
        if (uVar8 >> 0x3e != 0) goto LAB_71013c50b4;
        goto LAB_71013c30c0;
      }
LAB_71013c3120:
      pvVar12 = (void *)0x0;
    }
    else {
      uVar8 = 0x3fffffffffffffff;
LAB_71013c30c0:
      pppppppplVar20 = (long ********)(uVar8 * 4);
      if (pppppppplVar20 == (long ********)0x0) {
        pppppppplVar20 = (long ********)0x1;
      }
      pvVar12 = (void *)FUN_710392e290(0x10,pppppppplVar20,(long ****)param_3,param_4,param_5,
                                       param_6,param_7,param_8);
      if (pvVar12 == (void *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
          param_3 = &local_1a0;
          local_1a0 = pppppppplVar20;
          uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
          if (((uVar11 & 1) != 0) &&
             (pvVar12 = (void *)FUN_710392e290(0x10,pppppppplVar20,(long ****)param_3,param_4,
                                               param_5,param_6,param_7,param_8),
             pvVar12 != (void *)0x0)) goto LAB_71013c3124;
        }
        goto LAB_71013c3120;
      }
    }
LAB_71013c3124:
    puVar30 = (undefined4 *)((long)pvVar12 + ((long)ppppppppplVar32 >> 2) * 4);
    pvVar2 = (void *)((long)pvVar12 + uVar8 * 4);
    *puVar30 = 0;
    break;
  default:
    goto switchD_71013c2dc0_caseD_4;
  case 8:
    puVar30 = (undefined4 *)param_1[0x3f];
    plVar33 = param_1 + 0x3f;
    if (puVar30 < (undefined4 *)param_1[0x40]) {
      *puVar30 = 0;
      puVar30 = (undefined4 *)(*plVar33 + 4);
      *plVar33 = (long)puVar30;
    }
    else {
      pvVar29 = (void *)*plVar36;
      ppppppppplVar32 = (long *********)((long)puVar30 - (long)pvVar29);
      uVar8 = ((long)ppppppppplVar32 >> 2) + 1;
      if (uVar8 >> 0x3e != 0) goto LAB_71013c5220;
      lVar21 = param_1[0x40] - (long)pvVar29;
      if ((ulong)(lVar21 >> 2) < 0x1fffffffffffffff) {
        uVar11 = lVar21 >> 1;
        if (uVar8 <= uVar11) {
          uVar8 = uVar11;
        }
        if (uVar8 != 0) {
          if (uVar8 >> 0x3e != 0) goto LAB_71013c50b4;
          goto LAB_71013c3918;
        }
LAB_71013c3978:
        pvVar12 = (void *)0x0;
      }
      else {
        uVar8 = 0x3fffffffffffffff;
LAB_71013c3918:
        pppppppplVar20 = (long ********)(uVar8 * 4);
        if (pppppppplVar20 == (long ********)0x0) {
          pppppppplVar20 = (long ********)0x1;
        }
        pvVar12 = (void *)FUN_710392e290(0x10,pppppppplVar20,(long ****)param_3,param_4,param_5,
                                         param_6,param_7,param_8);
        if (pvVar12 == (void *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
            param_3 = &local_1a0;
            local_1a0 = pppppppplVar20;
            uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
            if (((uVar11 & 1) != 0) &&
               (pvVar12 = (void *)FUN_710392e290(0x10,pppppppplVar20,(long ****)param_3,param_4,
                                                 param_5,param_6,param_7,param_8),
               pvVar12 != (void *)0x0)) goto LAB_71013c397c;
          }
          goto LAB_71013c3978;
        }
      }
LAB_71013c397c:
      puVar1 = (undefined4 *)((long)pvVar12 + ((long)ppppppppplVar32 >> 2) * 4);
      puVar30 = puVar1 + 1;
      *puVar1 = 0;
      if (0 < (long)ppppppppplVar32) {
        memcpy(pvVar12,pvVar29,(size_t)ppppppppplVar32);
        param_3 = ppppppppplVar32;
      }
      *plVar36 = (long)pvVar12;
      *plVar33 = (long)puVar30;
      *plVar9 = (long)((long)pvVar12 + uVar8 * 4);
      if (pvVar29 != (void *)0x0) {
        FUN_710392eb40((ulong)pvVar29);
        puVar30 = (undefined4 *)*plVar33;
      }
    }
    if ((undefined4 *)*plVar9 <= puVar30) {
      pvVar29 = (void *)*plVar36;
      ppppppppplVar32 = (long *********)((long)puVar30 - (long)pvVar29);
      uVar8 = ((long)ppppppppplVar32 >> 2) + 1;
      if (uVar8 >> 0x3e != 0) goto LAB_71013c5220;
      lVar21 = *plVar9 - (long)pvVar29;
      if ((ulong)(lVar21 >> 2) < 0x1fffffffffffffff) {
        uVar11 = lVar21 >> 1;
        if (uVar8 <= uVar11) {
          uVar8 = uVar11;
        }
        if (uVar8 != 0) {
          if (uVar8 >> 0x3e != 0) goto LAB_71013c50b4;
          goto LAB_71013c4008;
        }
LAB_71013c4068:
        pvVar12 = (void *)0x0;
      }
      else {
        uVar8 = 0x3fffffffffffffff;
LAB_71013c4008:
        pppppppplVar20 = (long ********)(uVar8 * 4);
        if (pppppppplVar20 == (long ********)0x0) {
          pppppppplVar20 = (long ********)0x1;
        }
        pvVar12 = (void *)FUN_710392e290(0x10,pppppppplVar20,(long ****)param_3,param_4,param_5,
                                         param_6,param_7,param_8);
        if (pvVar12 == (void *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
            param_3 = &local_1a0;
            local_1a0 = pppppppplVar20;
            uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
            if (((uVar11 & 1) != 0) &&
               (pvVar12 = (void *)FUN_710392e290(0x10,pppppppplVar20,(long ****)param_3,param_4,
                                                 param_5,param_6,param_7,param_8),
               pvVar12 != (void *)0x0)) goto LAB_71013c406c;
          }
          goto LAB_71013c4068;
        }
      }
LAB_71013c406c:
      puVar30 = (undefined4 *)((long)pvVar12 + ((long)ppppppppplVar32 >> 2) * 4);
      uVar16 = 1;
      goto LAB_71013c4074;
    }
    uVar16 = 1;
    goto LAB_71013c3bf8;
  case 9:
    puVar30 = (undefined4 *)param_1[0x3f];
    if ((undefined4 *)param_1[0x40] <= puVar30) {
      pvVar29 = (void *)*plVar36;
      ppppppppplVar32 = (long *********)((long)puVar30 - (long)pvVar29);
      uVar8 = ((long)ppppppppplVar32 >> 2) + 1;
      if (uVar8 >> 0x3e != 0) goto LAB_71013c5220;
      lVar21 = param_1[0x40] - (long)pvVar29;
      if ((ulong)(lVar21 >> 2) < 0x1fffffffffffffff) {
        uVar11 = lVar21 >> 1;
        if (uVar8 <= uVar11) {
          uVar8 = uVar11;
        }
        if (uVar8 != 0) {
          if (uVar8 >> 0x3e != 0) goto LAB_71013c50b4;
          goto LAB_71013c3254;
        }
LAB_71013c32b4:
        pvVar12 = (void *)0x0;
      }
      else {
        uVar8 = 0x3fffffffffffffff;
LAB_71013c3254:
        pppppppplVar20 = (long ********)(uVar8 * 4);
        if (pppppppplVar20 == (long ********)0x0) {
          pppppppplVar20 = (long ********)0x1;
        }
        pvVar12 = (void *)FUN_710392e290(0x10,pppppppplVar20,(long ****)param_3,param_4,param_5,
                                         param_6,param_7,param_8);
        if (pvVar12 == (void *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
            param_3 = &local_1a0;
            local_1a0 = pppppppplVar20;
            uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
            if (((uVar11 & 1) != 0) &&
               (pvVar12 = (void *)FUN_710392e290(0x10,pppppppplVar20,(long ****)param_3,param_4,
                                                 param_5,param_6,param_7,param_8),
               pvVar12 != (void *)0x0)) goto LAB_71013c32b8;
          }
          goto LAB_71013c32b4;
        }
      }
LAB_71013c32b8:
      puVar30 = (undefined4 *)((long)pvVar12 + ((long)ppppppppplVar32 >> 2) * 4);
      *puVar30 = 0;
      goto LAB_71013c4078;
    }
    *puVar30 = 0;
    goto LAB_71013c3bfc;
  case 10:
    puVar30 = (undefined4 *)param_1[0x3f];
    plVar33 = param_1 + 0x3f;
    if (puVar30 < (undefined4 *)param_1[0x40]) {
      *puVar30 = 0;
      puVar30 = (undefined4 *)(*plVar33 + 4);
      *plVar33 = (long)puVar30;
    }
    else {
      pvVar29 = (void *)*plVar36;
      ppppppppplVar32 = (long *********)((long)puVar30 - (long)pvVar29);
      uVar8 = ((long)ppppppppplVar32 >> 2) + 1;
      if (uVar8 >> 0x3e != 0) goto LAB_71013c5220;
      lVar21 = param_1[0x40] - (long)pvVar29;
      if ((ulong)(lVar21 >> 2) < 0x1fffffffffffffff) {
        uVar11 = lVar21 >> 1;
        if (uVar8 <= uVar11) {
          uVar8 = uVar11;
        }
        if (uVar8 != 0) {
          if (uVar8 >> 0x3e != 0) goto LAB_71013c50b4;
          goto LAB_71013c36e0;
        }
LAB_71013c3740:
        pvVar12 = (void *)0x0;
      }
      else {
        uVar8 = 0x3fffffffffffffff;
LAB_71013c36e0:
        pppppppplVar20 = (long ********)(uVar8 * 4);
        if (pppppppplVar20 == (long ********)0x0) {
          pppppppplVar20 = (long ********)0x1;
        }
        pvVar12 = (void *)FUN_710392e290(0x10,pppppppplVar20,(long ****)param_3,param_4,param_5,
                                         param_6,param_7,param_8);
        if (pvVar12 == (void *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
            param_3 = &local_1a0;
            local_1a0 = pppppppplVar20;
            uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
            if (((uVar11 & 1) != 0) &&
               (pvVar12 = (void *)FUN_710392e290(0x10,pppppppplVar20,(long ****)param_3,param_4,
                                                 param_5,param_6,param_7,param_8),
               pvVar12 != (void *)0x0)) goto LAB_71013c3744;
          }
          goto LAB_71013c3740;
        }
      }
LAB_71013c3744:
      puVar1 = (undefined4 *)((long)pvVar12 + ((long)ppppppppplVar32 >> 2) * 4);
      puVar30 = puVar1 + 1;
      *puVar1 = 0;
      if (0 < (long)ppppppppplVar32) {
        memcpy(pvVar12,pvVar29,(size_t)ppppppppplVar32);
        param_3 = ppppppppplVar32;
      }
      *plVar36 = (long)pvVar12;
      *plVar33 = (long)puVar30;
      *plVar9 = (long)((long)pvVar12 + uVar8 * 4);
      if (pvVar29 != (void *)0x0) {
        FUN_710392eb40((ulong)pvVar29);
        puVar30 = (undefined4 *)*plVar33;
      }
    }
    if (puVar30 < (undefined4 *)*plVar9) {
      *puVar30 = 6;
      puVar30 = (undefined4 *)(*plVar33 + 4);
      *plVar33 = (long)puVar30;
    }
    else {
      pvVar29 = (void *)*plVar36;
      ppppppppplVar32 = (long *********)((long)puVar30 - (long)pvVar29);
      uVar8 = ((long)ppppppppplVar32 >> 2) + 1;
      if (uVar8 >> 0x3e != 0) goto LAB_71013c5220;
      lVar21 = *plVar9 - (long)pvVar29;
      if ((ulong)(lVar21 >> 2) < 0x1fffffffffffffff) {
        uVar11 = lVar21 >> 1;
        if (uVar8 <= uVar11) {
          uVar8 = uVar11;
        }
        if (uVar8 != 0) {
          if (uVar8 >> 0x3e != 0) goto LAB_71013c50b4;
          goto LAB_71013c3dc8;
        }
LAB_71013c3e28:
        pvVar12 = (void *)0x0;
      }
      else {
        uVar8 = 0x3fffffffffffffff;
LAB_71013c3dc8:
        pppppppplVar20 = (long ********)(uVar8 * 4);
        if (pppppppplVar20 == (long ********)0x0) {
          pppppppplVar20 = (long ********)0x1;
        }
        pvVar12 = (void *)FUN_710392e290(0x10,pppppppplVar20,(long ****)param_3,param_4,param_5,
                                         param_6,param_7,param_8);
        if (pvVar12 == (void *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
            param_3 = &local_1a0;
            local_1a0 = pppppppplVar20;
            uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
            if (((uVar11 & 1) != 0) &&
               (pvVar12 = (void *)FUN_710392e290(0x10,pppppppplVar20,(long ****)param_3,param_4,
                                                 param_5,param_6,param_7,param_8),
               pvVar12 != (void *)0x0)) goto LAB_71013c3e2c;
          }
          goto LAB_71013c3e28;
        }
      }
LAB_71013c3e2c:
      puVar1 = (undefined4 *)((long)pvVar12 + ((long)ppppppppplVar32 >> 2) * 4);
      puVar30 = puVar1 + 1;
      *puVar1 = 6;
      if (0 < (long)ppppppppplVar32) {
        memcpy(pvVar12,pvVar29,(size_t)ppppppppplVar32);
        param_3 = ppppppppplVar32;
      }
      *plVar36 = (long)pvVar12;
      *plVar33 = (long)puVar30;
      *plVar9 = (long)((long)pvVar12 + uVar8 * 4);
      if (pvVar29 != (void *)0x0) {
        FUN_710392eb40((ulong)pvVar29);
        puVar30 = (undefined4 *)*plVar33;
      }
    }
    if (puVar30 < (undefined4 *)*plVar9) {
      *puVar30 = 7;
      puVar30 = (undefined4 *)(*plVar33 + 4);
      *plVar33 = (long)puVar30;
    }
    else {
      pvVar29 = (void *)*plVar36;
      ppppppppplVar32 = (long *********)((long)puVar30 - (long)pvVar29);
      uVar8 = ((long)ppppppppplVar32 >> 2) + 1;
      if (uVar8 >> 0x3e != 0) goto LAB_71013c5220;
      lVar21 = *plVar9 - (long)pvVar29;
      if ((ulong)(lVar21 >> 2) < 0x1fffffffffffffff) {
        uVar11 = lVar21 >> 1;
        if (uVar8 <= uVar11) {
          uVar8 = uVar11;
        }
        if (uVar8 != 0) {
          if (uVar8 >> 0x3e != 0) goto LAB_71013c50b4;
          goto LAB_71013c4c5c;
        }
LAB_71013c4cbc:
        pvVar12 = (void *)0x0;
      }
      else {
        uVar8 = 0x3fffffffffffffff;
LAB_71013c4c5c:
        pppppppplVar20 = (long ********)(uVar8 * 4);
        if (pppppppplVar20 == (long ********)0x0) {
          pppppppplVar20 = (long ********)0x1;
        }
        pvVar12 = (void *)FUN_710392e290(0x10,pppppppplVar20,(long ****)param_3,param_4,param_5,
                                         param_6,param_7,param_8);
        if (pvVar12 == (void *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
            param_3 = &local_1a0;
            local_1a0 = pppppppplVar20;
            uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
            if (((uVar11 & 1) != 0) &&
               (pvVar12 = (void *)FUN_710392e290(0x10,pppppppplVar20,(long ****)param_3,param_4,
                                                 param_5,param_6,param_7,param_8),
               pvVar12 != (void *)0x0)) goto LAB_71013c4cc0;
          }
          goto LAB_71013c4cbc;
        }
      }
LAB_71013c4cc0:
      puVar1 = (undefined4 *)((long)pvVar12 + ((long)ppppppppplVar32 >> 2) * 4);
      puVar30 = puVar1 + 1;
      *puVar1 = 7;
      if (0 < (long)ppppppppplVar32) {
        memcpy(pvVar12,pvVar29,(size_t)ppppppppplVar32);
        param_3 = ppppppppplVar32;
      }
      *plVar36 = (long)pvVar12;
      *plVar33 = (long)puVar30;
      *plVar9 = (long)((long)pvVar12 + uVar8 * 4);
      if (pvVar29 != (void *)0x0) {
        FUN_710392eb40((ulong)pvVar29);
        puVar30 = (undefined4 *)*plVar33;
      }
    }
    if (puVar30 < (undefined4 *)*plVar9) {
      *puVar30 = 1;
      puVar30 = (undefined4 *)(*plVar33 + 4);
      *plVar33 = (long)puVar30;
    }
    else {
      pvVar29 = (void *)*plVar36;
      ppppppppplVar32 = (long *********)((long)puVar30 - (long)pvVar29);
      uVar8 = ((long)ppppppppplVar32 >> 2) + 1;
      if (uVar8 >> 0x3e != 0) goto LAB_71013c5220;
      lVar21 = *plVar9 - (long)pvVar29;
      if ((ulong)(lVar21 >> 2) < 0x1fffffffffffffff) {
        uVar11 = lVar21 >> 1;
        if (uVar8 <= uVar11) {
          uVar8 = uVar11;
        }
        if (uVar8 != 0) {
          if (uVar8 >> 0x3e != 0) goto LAB_71013c50b4;
          goto LAB_71013c4e9c;
        }
LAB_71013c4efc:
        pvVar12 = (void *)0x0;
      }
      else {
        uVar8 = 0x3fffffffffffffff;
LAB_71013c4e9c:
        pppppppplVar20 = (long ********)(uVar8 * 4);
        if (pppppppplVar20 == (long ********)0x0) {
          pppppppplVar20 = (long ********)0x1;
        }
        pvVar12 = (void *)FUN_710392e290(0x10,pppppppplVar20,(long ****)param_3,param_4,param_5,
                                         param_6,param_7,param_8);
        if (pvVar12 == (void *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
            param_3 = &local_1a0;
            local_1a0 = pppppppplVar20;
            uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
            if (((uVar11 & 1) != 0) &&
               (pvVar12 = (void *)FUN_710392e290(0x10,pppppppplVar20,(long ****)param_3,param_4,
                                                 param_5,param_6,param_7,param_8),
               pvVar12 != (void *)0x0)) goto LAB_71013c4f00;
          }
          goto LAB_71013c4efc;
        }
      }
LAB_71013c4f00:
      puVar1 = (undefined4 *)((long)pvVar12 + ((long)ppppppppplVar32 >> 2) * 4);
      puVar30 = puVar1 + 1;
      *puVar1 = 1;
      if (0 < (long)ppppppppplVar32) {
        memcpy(pvVar12,pvVar29,(size_t)ppppppppplVar32);
        param_3 = ppppppppplVar32;
      }
      *plVar36 = (long)pvVar12;
      *plVar33 = (long)puVar30;
      *plVar9 = (long)((long)pvVar12 + uVar8 * 4);
      if (pvVar29 != (void *)0x0) {
        FUN_710392eb40((ulong)pvVar29);
        puVar30 = (undefined4 *)*plVar33;
      }
    }
    if ((undefined4 *)*plVar9 <= puVar30) {
      pvVar29 = (void *)*plVar36;
      ppppppppplVar32 = (long *********)((long)puVar30 - (long)pvVar29);
      uVar8 = ((long)ppppppppplVar32 >> 2) + 1;
      if (uVar8 >> 0x3e != 0) goto LAB_71013c5220;
      lVar21 = *plVar9 - (long)pvVar29;
      if ((ulong)(lVar21 >> 2) < 0x1fffffffffffffff) {
        uVar11 = lVar21 >> 1;
        if (uVar8 <= uVar11) {
          uVar8 = uVar11;
        }
        if (uVar8 != 0) {
          if (uVar8 >> 0x3e != 0) goto LAB_71013c50b4;
          goto LAB_71013c50bc;
        }
LAB_71013c511c:
        pvVar12 = (void *)0x0;
      }
      else {
        uVar8 = 0x3fffffffffffffff;
LAB_71013c50bc:
        pppppppplVar20 = (long ********)(uVar8 * 4);
        if (pppppppplVar20 == (long ********)0x0) {
          pppppppplVar20 = (long ********)0x1;
        }
        pvVar12 = (void *)FUN_710392e290(0x10,pppppppplVar20,(long ****)param_3,param_4,param_5,
                                         param_6,param_7,param_8);
        if (pvVar12 == (void *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
            param_3 = &local_1a0;
            local_1a0 = pppppppplVar20;
            uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
            if (((uVar11 & 1) != 0) &&
               (pvVar12 = (void *)FUN_710392e290(0x10,pppppppplVar20,(long ****)param_3,param_4,
                                                 param_5,param_6,param_7,param_8),
               pvVar12 != (void *)0x0)) goto LAB_71013c5120;
          }
          goto LAB_71013c511c;
        }
      }
LAB_71013c5120:
      puVar30 = (undefined4 *)((long)pvVar12 + ((long)ppppppppplVar32 >> 2) * 4);
      uVar16 = 8;
      goto LAB_71013c419c;
    }
    uVar16 = 8;
    goto LAB_71013c40c4;
  case 0xb:
    puVar30 = (undefined4 *)param_1[0x3f];
    plVar33 = param_1 + 0x3f;
    if (puVar30 < (undefined4 *)param_1[0x40]) {
      *puVar30 = 0;
      puVar30 = (undefined4 *)(*plVar33 + 4);
      *plVar33 = (long)puVar30;
    }
    else {
      pvVar29 = (void *)*plVar36;
      ppppppppplVar32 = (long *********)((long)puVar30 - (long)pvVar29);
      uVar8 = ((long)ppppppppplVar32 >> 2) + 1;
      if (uVar8 >> 0x3e != 0) goto LAB_71013c5220;
      lVar21 = param_1[0x40] - (long)pvVar29;
      if ((ulong)(lVar21 >> 2) < 0x1fffffffffffffff) {
        uVar11 = lVar21 >> 1;
        if (uVar8 <= uVar11) {
          uVar8 = uVar11;
        }
        if (uVar8 != 0) {
          if (uVar8 >> 0x3e != 0) goto LAB_71013c50b4;
          goto LAB_71013c37fc;
        }
LAB_71013c385c:
        pvVar12 = (void *)0x0;
      }
      else {
        uVar8 = 0x3fffffffffffffff;
LAB_71013c37fc:
        pppppppplVar20 = (long ********)(uVar8 * 4);
        if (pppppppplVar20 == (long ********)0x0) {
          pppppppplVar20 = (long ********)0x1;
        }
        pvVar12 = (void *)FUN_710392e290(0x10,pppppppplVar20,(long ****)param_3,param_4,param_5,
                                         param_6,param_7,param_8);
        if (pvVar12 == (void *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
            param_3 = &local_1a0;
            local_1a0 = pppppppplVar20;
            uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
            if (((uVar11 & 1) != 0) &&
               (pvVar12 = (void *)FUN_710392e290(0x10,pppppppplVar20,(long ****)param_3,param_4,
                                                 param_5,param_6,param_7,param_8),
               pvVar12 != (void *)0x0)) goto LAB_71013c3860;
          }
          goto LAB_71013c385c;
        }
      }
LAB_71013c3860:
      puVar1 = (undefined4 *)((long)pvVar12 + ((long)ppppppppplVar32 >> 2) * 4);
      puVar30 = puVar1 + 1;
      *puVar1 = 0;
      if (0 < (long)ppppppppplVar32) {
        memcpy(pvVar12,pvVar29,(size_t)ppppppppplVar32);
        param_3 = ppppppppplVar32;
      }
      *plVar36 = (long)pvVar12;
      *plVar33 = (long)puVar30;
      *plVar9 = (long)((long)pvVar12 + uVar8 * 4);
      if (pvVar29 != (void *)0x0) {
        FUN_710392eb40((ulong)pvVar29);
        puVar30 = (undefined4 *)*plVar33;
      }
    }
    if (puVar30 < (undefined4 *)*plVar9) {
      *puVar30 = 6;
      puVar30 = (undefined4 *)(*plVar33 + 4);
      *plVar33 = (long)puVar30;
    }
    else {
      pvVar29 = (void *)*plVar36;
      ppppppppplVar32 = (long *********)((long)puVar30 - (long)pvVar29);
      uVar8 = ((long)ppppppppplVar32 >> 2) + 1;
      if (uVar8 >> 0x3e != 0) goto LAB_71013c5220;
      lVar21 = *plVar9 - (long)pvVar29;
      if ((ulong)(lVar21 >> 2) < 0x1fffffffffffffff) {
        uVar11 = lVar21 >> 1;
        if (uVar8 <= uVar11) {
          uVar8 = uVar11;
        }
        if (uVar8 != 0) {
          if (uVar8 >> 0x3e != 0) goto LAB_71013c50b4;
          goto LAB_71013c3ee8;
        }
LAB_71013c3f48:
        pvVar12 = (void *)0x0;
      }
      else {
        uVar8 = 0x3fffffffffffffff;
LAB_71013c3ee8:
        pppppppplVar20 = (long ********)(uVar8 * 4);
        if (pppppppplVar20 == (long ********)0x0) {
          pppppppplVar20 = (long ********)0x1;
        }
        pvVar12 = (void *)FUN_710392e290(0x10,pppppppplVar20,(long ****)param_3,param_4,param_5,
                                         param_6,param_7,param_8);
        if (pvVar12 == (void *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
            param_3 = &local_1a0;
            local_1a0 = pppppppplVar20;
            uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
            if (((uVar11 & 1) != 0) &&
               (pvVar12 = (void *)FUN_710392e290(0x10,pppppppplVar20,(long ****)param_3,param_4,
                                                 param_5,param_6,param_7,param_8),
               pvVar12 != (void *)0x0)) goto LAB_71013c3f4c;
          }
          goto LAB_71013c3f48;
        }
      }
LAB_71013c3f4c:
      puVar1 = (undefined4 *)((long)pvVar12 + ((long)ppppppppplVar32 >> 2) * 4);
      puVar30 = puVar1 + 1;
      *puVar1 = 6;
      if (0 < (long)ppppppppplVar32) {
        memcpy(pvVar12,pvVar29,(size_t)ppppppppplVar32);
        param_3 = ppppppppplVar32;
      }
      *plVar36 = (long)pvVar12;
      *plVar33 = (long)puVar30;
      *plVar9 = (long)((long)pvVar12 + uVar8 * 4);
      if (pvVar29 != (void *)0x0) {
        FUN_710392eb40((ulong)pvVar29);
        puVar30 = (undefined4 *)*plVar33;
      }
    }
    if (puVar30 < (undefined4 *)*plVar9) {
      *puVar30 = 7;
      puVar30 = (undefined4 *)(*plVar33 + 4);
      *plVar33 = (long)puVar30;
    }
    else {
      pvVar29 = (void *)*plVar36;
      ppppppppplVar32 = (long *********)((long)puVar30 - (long)pvVar29);
      uVar8 = ((long)ppppppppplVar32 >> 2) + 1;
      if (uVar8 >> 0x3e != 0) goto LAB_71013c5220;
      lVar21 = *plVar9 - (long)pvVar29;
      if ((ulong)(lVar21 >> 2) < 0x1fffffffffffffff) {
        uVar11 = lVar21 >> 1;
        if (uVar8 <= uVar11) {
          uVar8 = uVar11;
        }
        if (uVar8 != 0) {
          if (uVar8 >> 0x3e != 0) goto LAB_71013c50b4;
          goto LAB_71013c4d7c;
        }
LAB_71013c4ddc:
        pvVar12 = (void *)0x0;
      }
      else {
        uVar8 = 0x3fffffffffffffff;
LAB_71013c4d7c:
        pppppppplVar20 = (long ********)(uVar8 * 4);
        if (pppppppplVar20 == (long ********)0x0) {
          pppppppplVar20 = (long ********)0x1;
        }
        pvVar12 = (void *)FUN_710392e290(0x10,pppppppplVar20,(long ****)param_3,param_4,param_5,
                                         param_6,param_7,param_8);
        if (pvVar12 == (void *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
            param_3 = &local_1a0;
            local_1a0 = pppppppplVar20;
            uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
            if (((uVar11 & 1) != 0) &&
               (pvVar12 = (void *)FUN_710392e290(0x10,pppppppplVar20,(long ****)param_3,param_4,
                                                 param_5,param_6,param_7,param_8),
               pvVar12 != (void *)0x0)) goto LAB_71013c4de0;
          }
          goto LAB_71013c4ddc;
        }
      }
LAB_71013c4de0:
      puVar1 = (undefined4 *)((long)pvVar12 + ((long)ppppppppplVar32 >> 2) * 4);
      puVar30 = puVar1 + 1;
      *puVar1 = 7;
      if (0 < (long)ppppppppplVar32) {
        memcpy(pvVar12,pvVar29,(size_t)ppppppppplVar32);
        param_3 = ppppppppplVar32;
      }
      *plVar36 = (long)pvVar12;
      *plVar33 = (long)puVar30;
      *plVar9 = (long)((long)pvVar12 + uVar8 * 4);
      if (pvVar29 != (void *)0x0) {
        FUN_710392eb40((ulong)pvVar29);
        puVar30 = (undefined4 *)*plVar33;
      }
    }
    if (puVar30 < (undefined4 *)*plVar9) {
      *puVar30 = 1;
      puVar30 = (undefined4 *)(*plVar33 + 4);
      *plVar33 = (long)puVar30;
    }
    else {
      pvVar29 = (void *)*plVar36;
      ppppppppplVar32 = (long *********)((long)puVar30 - (long)pvVar29);
      uVar8 = ((long)ppppppppplVar32 >> 2) + 1;
      if (uVar8 >> 0x3e != 0) goto LAB_71013c5220;
      lVar21 = *plVar9 - (long)pvVar29;
      if ((ulong)(lVar21 >> 2) < 0x1fffffffffffffff) {
        uVar11 = lVar21 >> 1;
        if (uVar8 <= uVar11) {
          uVar8 = uVar11;
        }
        if (uVar8 != 0) {
          if (uVar8 >> 0x3e != 0) goto LAB_71013c50b4;
          goto LAB_71013c4fac;
        }
LAB_71013c500c:
        pvVar12 = (void *)0x0;
      }
      else {
        uVar8 = 0x3fffffffffffffff;
LAB_71013c4fac:
        pppppppplVar20 = (long ********)(uVar8 * 4);
        if (pppppppplVar20 == (long ********)0x0) {
          pppppppplVar20 = (long ********)0x1;
        }
        pvVar12 = (void *)FUN_710392e290(0x10,pppppppplVar20,(long ****)param_3,param_4,param_5,
                                         param_6,param_7,param_8);
        if (pvVar12 == (void *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
            param_3 = &local_1a0;
            local_1a0 = pppppppplVar20;
            uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
            if (((uVar11 & 1) != 0) &&
               (pvVar12 = (void *)FUN_710392e290(0x10,pppppppplVar20,(long ****)param_3,param_4,
                                                 param_5,param_6,param_7,param_8),
               pvVar12 != (void *)0x0)) goto LAB_71013c5010;
          }
          goto LAB_71013c500c;
        }
      }
LAB_71013c5010:
      puVar1 = (undefined4 *)((long)pvVar12 + ((long)ppppppppplVar32 >> 2) * 4);
      puVar30 = puVar1 + 1;
      *puVar1 = 1;
      if (0 < (long)ppppppppplVar32) {
        memcpy(pvVar12,pvVar29,(size_t)ppppppppplVar32);
        param_3 = ppppppppplVar32;
      }
      *plVar36 = (long)pvVar12;
      *plVar33 = (long)puVar30;
      *plVar9 = (long)((long)pvVar12 + uVar8 * 4);
      if (pvVar29 != (void *)0x0) {
        FUN_710392eb40((ulong)pvVar29);
        puVar30 = (undefined4 *)*plVar33;
      }
    }
    if (puVar30 < (undefined4 *)*plVar9) {
      uVar16 = 9;
      goto LAB_71013c40c4;
    }
    pvVar29 = (void *)*plVar36;
    ppppppppplVar32 = (long *********)((long)puVar30 - (long)pvVar29);
    uVar8 = ((long)ppppppppplVar32 >> 2) + 1;
    if (uVar8 >> 0x3e != 0) goto LAB_71013c5220;
    lVar21 = *plVar9 - (long)pvVar29;
    if ((ulong)(lVar21 >> 2) < 0x1fffffffffffffff) {
      uVar11 = lVar21 >> 1;
      if (uVar8 <= uVar11) {
        uVar8 = uVar11;
      }
      if (uVar8 != 0) {
        if (uVar8 >> 0x3e != 0) goto LAB_71013c50b4;
        goto LAB_71013c5130;
      }
LAB_71013c5190:
      pvVar12 = (void *)0x0;
    }
    else {
      uVar8 = 0x3fffffffffffffff;
LAB_71013c5130:
      pppppppplVar20 = (long ********)(uVar8 * 4);
      if (pppppppplVar20 == (long ********)0x0) {
        pppppppplVar20 = (long ********)0x1;
      }
      pvVar12 = (void *)FUN_710392e290(0x10,pppppppplVar20,(long ****)param_3,param_4,param_5,
                                       param_6,param_7,param_8);
      if (pvVar12 == (void *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
          param_3 = &local_1a0;
          local_1a0 = pppppppplVar20;
          uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
          if (((uVar11 & 1) != 0) &&
             (pvVar12 = (void *)FUN_710392e290(0x10,pppppppplVar20,(long ****)param_3,param_4,
                                               param_5,param_6,param_7,param_8),
             pvVar12 != (void *)0x0)) goto LAB_71013c5194;
        }
        goto LAB_71013c5190;
      }
    }
LAB_71013c5194:
    puVar30 = (undefined4 *)((long)pvVar12 + ((long)ppppppppplVar32 >> 2) * 4);
    uVar16 = 9;
    goto LAB_71013c419c;
  case 0xc:
    puVar30 = (undefined4 *)param_1[0x3f];
    plVar33 = param_1 + 0x3f;
    if (puVar30 < (undefined4 *)param_1[0x40]) {
      *puVar30 = 0;
      puVar30 = (undefined4 *)(*plVar33 + 4);
      *plVar33 = (long)puVar30;
    }
    else {
      pvVar29 = (void *)*plVar36;
      ppppppppplVar32 = (long *********)((long)puVar30 - (long)pvVar29);
      uVar8 = ((long)ppppppppplVar32 >> 2) + 1;
      if (uVar8 >> 0x3e != 0) goto LAB_71013c5220;
      lVar21 = param_1[0x40] - (long)pvVar29;
      if ((ulong)(lVar21 >> 2) < 0x1fffffffffffffff) {
        uVar11 = lVar21 >> 1;
        if (uVar8 <= uVar11) {
          uVar8 = uVar11;
        }
        if (uVar8 != 0) {
          if (uVar8 >> 0x3e != 0) goto LAB_71013c50b4;
          goto LAB_71013c3a24;
        }
LAB_71013c3a84:
        pvVar12 = (void *)0x0;
      }
      else {
        uVar8 = 0x3fffffffffffffff;
LAB_71013c3a24:
        pppppppplVar20 = (long ********)(uVar8 * 4);
        if (pppppppplVar20 == (long ********)0x0) {
          pppppppplVar20 = (long ********)0x1;
        }
        pvVar12 = (void *)FUN_710392e290(0x10,pppppppplVar20,(long ****)param_3,param_4,param_5,
                                         param_6,param_7,param_8);
        if (pvVar12 == (void *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
            param_3 = &local_1a0;
            local_1a0 = pppppppplVar20;
            uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
            if (((uVar11 & 1) != 0) &&
               (pvVar12 = (void *)FUN_710392e290(0x10,pppppppplVar20,(long ****)param_3,param_4,
                                                 param_5,param_6,param_7,param_8),
               pvVar12 != (void *)0x0)) goto LAB_71013c3a88;
          }
          goto LAB_71013c3a84;
        }
      }
LAB_71013c3a88:
      puVar1 = (undefined4 *)((long)pvVar12 + ((long)ppppppppplVar32 >> 2) * 4);
      puVar30 = puVar1 + 1;
      *puVar1 = 0;
      if (0 < (long)ppppppppplVar32) {
        memcpy(pvVar12,pvVar29,(size_t)ppppppppplVar32);
        param_3 = ppppppppplVar32;
      }
      *plVar36 = (long)pvVar12;
      *plVar33 = (long)puVar30;
      *plVar9 = (long)((long)pvVar12 + uVar8 * 4);
      if (pvVar29 != (void *)0x0) {
        FUN_710392eb40((ulong)pvVar29);
        puVar30 = (undefined4 *)*plVar33;
      }
    }
    if ((undefined4 *)*plVar9 <= puVar30) {
      pvVar29 = (void *)*plVar36;
      ppppppppplVar32 = (long *********)((long)puVar30 - (long)pvVar29);
      uVar8 = ((long)ppppppppplVar32 >> 2) + 1;
      if (uVar8 >> 0x3e != 0) goto LAB_71013c5220;
      lVar21 = *plVar9 - (long)pvVar29;
      if ((ulong)(lVar21 >> 2) < 0x1fffffffffffffff) {
        uVar11 = lVar21 >> 1;
        if (uVar8 <= uVar11) {
          uVar8 = uVar11;
        }
        if (uVar8 != 0) {
          if (uVar8 >> 0x3e != 0) goto LAB_71013c50b4;
          goto LAB_71013c4bd8;
        }
LAB_71013c4c38:
        pvVar12 = (void *)0x0;
      }
      else {
        uVar8 = 0x3fffffffffffffff;
LAB_71013c4bd8:
        pppppppplVar20 = (long ********)(uVar8 * 4);
        if (pppppppplVar20 == (long ********)0x0) {
          pppppppplVar20 = (long ********)0x1;
        }
        pvVar12 = (void *)FUN_710392e290(0x10,pppppppplVar20,(long ****)param_3,param_4,param_5,
                                         param_6,param_7,param_8);
        if (pvVar12 == (void *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
            param_3 = &local_1a0;
            local_1a0 = pppppppplVar20;
            uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
            if (((uVar11 & 1) != 0) &&
               (pvVar12 = (void *)FUN_710392e290(0x10,pppppppplVar20,(long ****)param_3,param_4,
                                                 param_5,param_6,param_7,param_8),
               pvVar12 != (void *)0x0)) goto LAB_71013c4c3c;
          }
          goto LAB_71013c4c38;
        }
      }
LAB_71013c4c3c:
      puVar30 = (undefined4 *)((long)pvVar12 + ((long)ppppppppplVar32 >> 2) * 4);
      pvVar2 = (void *)((long)pvVar12 + uVar8 * 4);
      *puVar30 = 5;
      goto joined_r0x0071013c3bb4;
    }
    *puVar30 = 5;
LAB_71013c3ae0:
    puVar30 = (undefined4 *)(param_1[0x3f] + 4);
    param_1[0x3f] = (long)puVar30;
    goto LAB_71013c3be8;
  case 0xd:
    puVar30 = (undefined4 *)param_1[0x3f];
    if (puVar30 < (undefined4 *)param_1[0x40]) {
      *puVar30 = 0;
      goto LAB_71013c3ae0;
    }
    pvVar29 = (void *)*plVar36;
    ppppppppplVar32 = (long *********)((long)puVar30 - (long)pvVar29);
    uVar8 = ((long)ppppppppplVar32 >> 2) + 1;
    if (uVar8 >> 0x3e != 0) goto LAB_71013c5220;
    lVar21 = param_1[0x40] - (long)pvVar29;
    if ((ulong)(lVar21 >> 2) < 0x1fffffffffffffff) {
      uVar11 = lVar21 >> 1;
      if (uVar8 <= uVar11) {
        uVar8 = uVar11;
      }
      if (uVar8 != 0) {
        if (uVar8 >> 0x3e != 0) goto LAB_71013c50b4;
        goto LAB_71013c3b40;
      }
LAB_71013c3ba0:
      pvVar12 = (void *)0x0;
    }
    else {
      uVar8 = 0x3fffffffffffffff;
LAB_71013c3b40:
      pppppppplVar20 = (long ********)(uVar8 * 4);
      if (pppppppplVar20 == (long ********)0x0) {
        pppppppplVar20 = (long ********)0x1;
      }
      pvVar12 = (void *)FUN_710392e290(0x10,pppppppplVar20,(long ****)param_3,param_4,param_5,
                                       param_6,param_7,param_8);
      if (pvVar12 == (void *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
          param_3 = &local_1a0;
          local_1a0 = pppppppplVar20;
          uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
          if (((uVar11 & 1) != 0) &&
             (pvVar12 = (void *)FUN_710392e290(0x10,pppppppplVar20,(long ****)param_3,param_4,
                                               param_5,param_6,param_7,param_8),
             pvVar12 != (void *)0x0)) goto LAB_71013c3ba4;
        }
        goto LAB_71013c3ba0;
      }
    }
LAB_71013c3ba4:
    puVar30 = (undefined4 *)((long)pvVar12 + ((long)ppppppppplVar32 >> 2) * 4);
    pvVar2 = (void *)((long)pvVar12 + uVar8 * 4);
    *puVar30 = 0;
joined_r0x0071013c3bb4:
    puVar30 = puVar30 + 1;
    if (0 < (long)ppppppppplVar32) {
      memcpy(pvVar12,pvVar29,(size_t)ppppppppplVar32);
      param_3 = ppppppppplVar32;
    }
    *plVar36 = (long)pvVar12;
    param_1[0x3f] = (long)puVar30;
    *plVar9 = (long)pvVar2;
    if (pvVar29 != (void *)0x0) {
      FUN_710392eb40((ulong)pvVar29);
      puVar30 = (undefined4 *)param_1[0x3f];
    }
LAB_71013c3be8:
    if ((undefined4 *)*plVar9 <= puVar30) {
      pvVar29 = (void *)*plVar36;
      ppppppppplVar32 = (long *********)((long)puVar30 - (long)pvVar29);
      uVar8 = ((long)ppppppppplVar32 >> 2) + 1;
      if (uVar8 >> 0x3e != 0) goto LAB_71013c5220;
      lVar21 = *plVar9 - (long)pvVar29;
      if ((ulong)(lVar21 >> 2) < 0x1fffffffffffffff) {
        uVar11 = lVar21 >> 1;
        if (uVar8 <= uVar11) {
          uVar8 = uVar11;
        }
        if (uVar8 != 0) {
          if (uVar8 >> 0x3e != 0) goto LAB_71013c50b4;
          goto LAB_71013c3c5c;
        }
LAB_71013c3cbc:
        pvVar12 = (void *)0x0;
      }
      else {
        uVar8 = 0x3fffffffffffffff;
LAB_71013c3c5c:
        pppppppplVar20 = (long ********)(uVar8 * 4);
        if (pppppppplVar20 == (long ********)0x0) {
          pppppppplVar20 = (long ********)0x1;
        }
        pvVar12 = (void *)FUN_710392e290(0x10,pppppppplVar20,(long ****)param_3,param_4,param_5,
                                         param_6,param_7,param_8);
        if (pvVar12 == (void *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
            param_3 = &local_1a0;
            local_1a0 = pppppppplVar20;
            uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
            if (((uVar11 & 1) != 0) &&
               (pvVar12 = (void *)FUN_710392e290(0x10,pppppppplVar20,(long ****)param_3,param_4,
                                                 param_5,param_6,param_7,param_8),
               pvVar12 != (void *)0x0)) goto LAB_71013c3cc0;
          }
          goto LAB_71013c3cbc;
        }
      }
LAB_71013c3cc0:
      puVar30 = (undefined4 *)((long)pvVar12 + ((long)ppppppppplVar32 >> 2) * 4);
      uVar16 = 2;
      goto LAB_71013c4074;
    }
    uVar16 = 2;
    goto LAB_71013c3bf8;
  }
  puVar30 = puVar30 + 1;
  if (0 < (long)ppppppppplVar32) {
    memcpy(pvVar12,pvVar29,(size_t)ppppppppplVar32);
    param_3 = ppppppppplVar32;
  }
  *plVar36 = (long)pvVar12;
  param_1[0x3f] = (long)puVar30;
  *plVar9 = (long)pvVar2;
  if (pvVar29 != (void *)0x0) {
    FUN_710392eb40((ulong)pvVar29);
    puVar30 = (undefined4 *)param_1[0x3f];
  }
LAB_71013c349c:
  plVar33 = param_1 + 0x3f;
  if (puVar30 < (undefined4 *)*plVar9) {
    *puVar30 = 2;
    puVar30 = (undefined4 *)(*plVar33 + 4);
    *plVar33 = (long)puVar30;
  }
  else {
    pvVar29 = (void *)*plVar36;
    ppppppppplVar32 = (long *********)((long)puVar30 - (long)pvVar29);
    uVar8 = ((long)ppppppppplVar32 >> 2) + 1;
    if (uVar8 >> 0x3e != 0) goto LAB_71013c5220;
    lVar21 = *plVar9 - (long)pvVar29;
    if ((ulong)(lVar21 >> 2) < 0x1fffffffffffffff) {
      uVar11 = lVar21 >> 1;
      if (uVar8 <= uVar11) {
        uVar8 = uVar11;
      }
      if (uVar8 != 0) {
        if (uVar8 >> 0x3e != 0) goto LAB_71013c50b4;
        goto LAB_71013c3510;
      }
LAB_71013c3570:
      pvVar12 = (void *)0x0;
    }
    else {
      uVar8 = 0x3fffffffffffffff;
LAB_71013c3510:
      pppppppplVar20 = (long ********)(uVar8 * 4);
      if (pppppppplVar20 == (long ********)0x0) {
        pppppppplVar20 = (long ********)0x1;
      }
      pvVar12 = (void *)FUN_710392e290(0x10,pppppppplVar20,(long ****)param_3,param_4,param_5,
                                       param_6,param_7,param_8);
      if (pvVar12 == (void *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
          param_3 = &local_1a0;
          local_1a0 = pppppppplVar20;
          uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
          if (((uVar11 & 1) != 0) &&
             (pvVar12 = (void *)FUN_710392e290(0x10,pppppppplVar20,(long ****)param_3,param_4,
                                               param_5,param_6,param_7,param_8),
             pvVar12 != (void *)0x0)) goto LAB_71013c3574;
        }
        goto LAB_71013c3570;
      }
    }
LAB_71013c3574:
    puVar1 = (undefined4 *)((long)pvVar12 + ((long)ppppppppplVar32 >> 2) * 4);
    puVar30 = puVar1 + 1;
    *puVar1 = 2;
    if (0 < (long)ppppppppplVar32) {
      memcpy(pvVar12,pvVar29,(size_t)ppppppppplVar32);
      param_3 = ppppppppplVar32;
    }
    *plVar36 = (long)pvVar12;
    *plVar33 = (long)puVar30;
    *plVar9 = (long)((long)pvVar12 + uVar8 * 4);
    if (pvVar29 != (void *)0x0) {
      FUN_710392eb40((ulong)pvVar29);
      puVar30 = (undefined4 *)*plVar33;
    }
  }
  if (puVar30 < (undefined4 *)*plVar9) {
    uVar16 = 3;
LAB_71013c3bf8:
    *puVar30 = uVar16;
LAB_71013c3bfc:
    puVar30 = (undefined4 *)(param_1[0x3f] + 4);
    param_1[0x3f] = (long)puVar30;
  }
  else {
    pvVar29 = (void *)*plVar36;
    ppppppppplVar32 = (long *********)((long)puVar30 - (long)pvVar29);
    uVar8 = ((long)ppppppppplVar32 >> 2) + 1;
    if (uVar8 >> 0x3e != 0) goto LAB_71013c5220;
    lVar21 = *plVar9 - (long)pvVar29;
    if ((ulong)(lVar21 >> 2) < 0x1fffffffffffffff) {
      uVar11 = lVar21 >> 1;
      if (uVar8 <= uVar11) {
        uVar8 = uVar11;
      }
      if (uVar8 != 0) {
        if (uVar8 >> 0x3e != 0) goto LAB_71013c50b4;
        goto LAB_71013c3620;
      }
LAB_71013c3680:
      pvVar12 = (void *)0x0;
    }
    else {
      uVar8 = 0x3fffffffffffffff;
LAB_71013c3620:
      pppppppplVar20 = (long ********)(uVar8 * 4);
      if (pppppppplVar20 == (long ********)0x0) {
        pppppppplVar20 = (long ********)0x1;
      }
      pvVar12 = (void *)FUN_710392e290(0x10,pppppppplVar20,(long ****)param_3,param_4,param_5,
                                       param_6,param_7,param_8);
      if (pvVar12 == (void *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
          param_3 = &local_1a0;
          local_1a0 = pppppppplVar20;
          uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
          if (((uVar11 & 1) != 0) &&
             (pvVar12 = (void *)FUN_710392e290(0x10,pppppppplVar20,(long ****)param_3,param_4,
                                               param_5,param_6,param_7,param_8),
             pvVar12 != (void *)0x0)) goto LAB_71013c3684;
        }
        goto LAB_71013c3680;
      }
    }
LAB_71013c3684:
    puVar30 = (undefined4 *)((long)pvVar12 + ((long)ppppppppplVar32 >> 2) * 4);
    uVar16 = 3;
LAB_71013c4074:
    *puVar30 = uVar16;
LAB_71013c4078:
    puVar30 = puVar30 + 1;
    if (0 < (long)ppppppppplVar32) {
      memcpy(pvVar12,pvVar29,(size_t)ppppppppplVar32);
      param_3 = ppppppppplVar32;
    }
    *plVar36 = (long)pvVar12;
    param_1[0x3f] = (long)puVar30;
    *plVar9 = (long)((long)pvVar12 + uVar8 * 4);
    if (pvVar29 != (void *)0x0) {
      FUN_710392eb40((ulong)pvVar29);
      puVar30 = (undefined4 *)param_1[0x3f];
    }
  }
  if (puVar30 < (undefined4 *)*plVar9) {
    uVar16 = 4;
LAB_71013c40c4:
    *puVar30 = uVar16;
    param_1[0x3f] = param_1[0x3f] + 4;
    lVar21 = param_1[0x3d];
  }
  else {
    pvVar29 = (void *)*plVar36;
    ppppppppplVar32 = (long *********)((long)puVar30 - (long)pvVar29);
    uVar8 = ((long)ppppppppplVar32 >> 2) + 1;
    if (uVar8 >> 0x3e != 0) {
LAB_71013c5220:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar21 = *plVar9 - (long)pvVar29;
    if ((ulong)(lVar21 >> 2) < 0x1fffffffffffffff) {
      uVar11 = lVar21 >> 1;
      if (uVar8 <= uVar11) {
        uVar8 = uVar11;
      }
      if (uVar8 != 0) {
        if (uVar8 >> 0x3e != 0) goto LAB_71013c50b4;
        goto LAB_71013c4130;
      }
LAB_71013c4190:
      pvVar12 = (void *)0x0;
    }
    else {
      uVar8 = 0x3fffffffffffffff;
LAB_71013c4130:
      pppppppplVar20 = (long ********)(uVar8 * 4);
      if (pppppppplVar20 == (long ********)0x0) {
        pppppppplVar20 = (long ********)0x1;
      }
      pvVar12 = (void *)FUN_710392e290(0x10,pppppppplVar20,(long ****)param_3,param_4,param_5,
                                       param_6,param_7,param_8);
      if (pvVar12 == (void *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
          param_3 = &local_1a0;
          local_1a0 = pppppppplVar20;
          uVar11 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_1b0);
          if (((uVar11 & 1) != 0) &&
             (pvVar12 = (void *)FUN_710392e290(0x10,pppppppplVar20,(long ****)param_3,param_4,
                                               param_5,param_6,param_7,param_8),
             pvVar12 != (void *)0x0)) goto LAB_71013c4194;
        }
        goto LAB_71013c4190;
      }
    }
LAB_71013c4194:
    puVar30 = (undefined4 *)((long)pvVar12 + ((long)ppppppppplVar32 >> 2) * 4);
    uVar16 = 4;
LAB_71013c419c:
    *puVar30 = uVar16;
    if (0 < (long)ppppppppplVar32) {
      memcpy(pvVar12,pvVar29,(size_t)ppppppppplVar32);
      param_3 = ppppppppplVar32;
    }
    *plVar36 = (long)pvVar12;
    param_1[0x3f] = (long)(puVar30 + 1);
    *plVar9 = (long)((long)pvVar12 + uVar8 * 4);
    if (pvVar29 != (void *)0x0) {
      FUN_710392eb40((ulong)pvVar29);
    }
    lVar21 = param_1[0x3d];
  }
joined_r0x0071013c41dc:
  if (lVar21 != 0) {
    plVar9 = param_1 + 0x3f;
    lVar21 = *(long *)(lVar21 + 0x80);
    iVar34 = (int)((ulong)(*plVar9 - *plVar36) >> 2);
    iVar6 = iVar34;
    if (4 < iVar34) {
      iVar6 = 5;
    }
    if (iVar6 < 3) {
      iVar6 = 2;
    }
    FUN_710377b010((ulong)(uint)(float)(iVar6 + -2),lVar21 + 0x68);
    lVar18 = *(long *)(*(long *)(lVar21 + 0x20) + 0x1b8);
    if (lVar18 != 0) {
      lVar24 = *(long *)(lVar21 + 0x20) + 0x1b8;
      lVar28 = lVar24;
      lVar26 = lVar18;
      do {
        bVar4 = *(int *)(lVar26 + 0x20) < 0;
        if (!bVar4) {
          lVar28 = lVar26;
        }
        lVar26 = *(long *)(lVar26 + (ulong)bVar4 * 8);
      } while (lVar26 != 0);
      if (((lVar28 != lVar24) && (*(int *)(lVar28 + 0x20) < 1)) &&
         (plVar33 = *(long **)(lVar28 + 0x28), plVar33 != (long *)0x0)) {
        (**(code **)(*plVar33 + 0x1f8))(plVar33,0 < iVar34);
        param_3 = (long *********)0x0;
        (**(code **)(*plVar33 + 0x388))(plVar33,iVar34 < 1);
        lVar24 = *(long *)(lVar21 + 0x20) + 0x1b8;
        lVar18 = *(long *)(*(long *)(lVar21 + 0x20) + 0x1b8);
      }
      lVar28 = lVar24;
      lVar26 = lVar18;
      if (lVar18 != 0) {
        do {
          bVar4 = *(int *)(lVar26 + 0x20) < 0;
          if (!bVar4) {
            lVar28 = lVar26;
          }
          lVar26 = *(long *)(lVar26 + (ulong)bVar4 * 8);
        } while (lVar26 != 0);
        if (((lVar28 != lVar24) && (*(int *)(lVar28 + 0x20) < 1)) &&
           (plVar33 = *(long **)(lVar28 + 0x28), plVar33 != (long *)0x0)) {
          (**(code **)(*plVar33 + 0x208))(plVar33,0 < iVar34);
          param_3 = (long *********)0x0;
          (**(code **)(*plVar33 + 0x388))(plVar33,iVar34 < 1);
          lVar24 = *(long *)(lVar21 + 0x20) + 0x1b8;
          lVar18 = *(long *)(*(long *)(lVar21 + 0x20) + 0x1b8);
        }
        lVar28 = lVar24;
        lVar26 = lVar18;
        if (lVar18 != 0) {
          do {
            if (0 < *(int *)(lVar26 + 0x20)) {
              lVar28 = lVar26;
            }
            lVar26 = *(long *)(lVar26 + (ulong)(*(int *)(lVar26 + 0x20) < 1) * 8);
          } while (lVar26 != 0);
          if (((lVar28 != lVar24) && (*(int *)(lVar28 + 0x20) < 2)) &&
             (plVar33 = *(long **)(lVar28 + 0x28), plVar33 != (long *)0x0)) {
            (**(code **)(*plVar33 + 0x1f8))(plVar33,1 < iVar34);
            param_3 = (long *********)0x0;
            (**(code **)(*plVar33 + 0x388))(plVar33,iVar34 < 2);
            lVar24 = *(long *)(lVar21 + 0x20) + 0x1b8;
            lVar18 = *(long *)(*(long *)(lVar21 + 0x20) + 0x1b8);
          }
          lVar28 = lVar24;
          lVar26 = lVar18;
          if (lVar18 != 0) {
            do {
              if (0 < *(int *)(lVar26 + 0x20)) {
                lVar28 = lVar26;
              }
              lVar26 = *(long *)(lVar26 + (ulong)(*(int *)(lVar26 + 0x20) < 1) * 8);
            } while (lVar26 != 0);
            if (((lVar28 != lVar24) && (*(int *)(lVar28 + 0x20) < 2)) &&
               (plVar33 = *(long **)(lVar28 + 0x28), plVar33 != (long *)0x0)) {
              (**(code **)(*plVar33 + 0x208))(plVar33,1 < iVar34);
              param_3 = (long *********)0x0;
              (**(code **)(*plVar33 + 0x388))(plVar33,iVar34 < 2);
              lVar24 = *(long *)(lVar21 + 0x20) + 0x1b8;
              lVar18 = *(long *)(*(long *)(lVar21 + 0x20) + 0x1b8);
            }
            lVar28 = lVar24;
            lVar26 = lVar18;
            if (lVar18 != 0) {
              do {
                if (1 < *(int *)(lVar26 + 0x20)) {
                  lVar28 = lVar26;
                }
                lVar26 = *(long *)(lVar26 + (ulong)(*(int *)(lVar26 + 0x20) < 2) * 8);
              } while (lVar26 != 0);
              if (((lVar28 != lVar24) && (*(int *)(lVar28 + 0x20) < 3)) &&
                 (plVar33 = *(long **)(lVar28 + 0x28), plVar33 != (long *)0x0)) {
                (**(code **)(*plVar33 + 0x1f8))(plVar33,2 < iVar34);
                param_3 = (long *********)0x0;
                (**(code **)(*plVar33 + 0x388))(plVar33,iVar34 < 3);
                lVar24 = *(long *)(lVar21 + 0x20) + 0x1b8;
                lVar18 = *(long *)(*(long *)(lVar21 + 0x20) + 0x1b8);
              }
              lVar28 = lVar24;
              lVar26 = lVar18;
              if (lVar18 != 0) {
                do {
                  if (1 < *(int *)(lVar26 + 0x20)) {
                    lVar28 = lVar26;
                  }
                  lVar26 = *(long *)(lVar26 + (ulong)(*(int *)(lVar26 + 0x20) < 2) * 8);
                } while (lVar26 != 0);
                if (((lVar28 != lVar24) && (*(int *)(lVar28 + 0x20) < 3)) &&
                   (plVar33 = *(long **)(lVar28 + 0x28), plVar33 != (long *)0x0)) {
                  (**(code **)(*plVar33 + 0x208))(plVar33,2 < iVar34);
                  param_3 = (long *********)0x0;
                  (**(code **)(*plVar33 + 0x388))(plVar33,iVar34 < 3);
                  lVar24 = *(long *)(lVar21 + 0x20) + 0x1b8;
                  lVar18 = *(long *)(*(long *)(lVar21 + 0x20) + 0x1b8);
                }
                lVar28 = lVar24;
                lVar26 = lVar18;
                if (lVar18 != 0) {
                  do {
                    if (2 < *(int *)(lVar26 + 0x20)) {
                      lVar28 = lVar26;
                    }
                    lVar26 = *(long *)(lVar26 + (ulong)(*(int *)(lVar26 + 0x20) < 3) * 8);
                  } while (lVar26 != 0);
                  if (((lVar28 != lVar24) && (*(int *)(lVar28 + 0x20) < 4)) &&
                     (plVar33 = *(long **)(lVar28 + 0x28), plVar33 != (long *)0x0)) {
                    (**(code **)(*plVar33 + 0x1f8))(plVar33,3 < iVar34);
                    param_3 = (long *********)0x0;
                    (**(code **)(*plVar33 + 0x388))(plVar33,iVar34 < 4);
                    lVar24 = *(long *)(lVar21 + 0x20) + 0x1b8;
                    lVar18 = *(long *)(*(long *)(lVar21 + 0x20) + 0x1b8);
                  }
                  lVar28 = lVar24;
                  lVar26 = lVar18;
                  if (lVar18 != 0) {
                    do {
                      if (2 < *(int *)(lVar26 + 0x20)) {
                        lVar28 = lVar26;
                      }
                      lVar26 = *(long *)(lVar26 + (ulong)(*(int *)(lVar26 + 0x20) < 3) * 8);
                    } while (lVar26 != 0);
                    if (((lVar28 != lVar24) && (*(int *)(lVar28 + 0x20) < 4)) &&
                       (plVar33 = *(long **)(lVar28 + 0x28), plVar33 != (long *)0x0)) {
                      (**(code **)(*plVar33 + 0x208))(plVar33,3 < iVar34);
                      param_3 = (long *********)0x0;
                      (**(code **)(*plVar33 + 0x388))(plVar33,iVar34 < 4);
                      lVar24 = *(long *)(lVar21 + 0x20) + 0x1b8;
                      lVar18 = *(long *)(*(long *)(lVar21 + 0x20) + 0x1b8);
                    }
                    lVar28 = lVar24;
                    lVar26 = lVar18;
                    if (lVar18 != 0) {
                      do {
                        if (3 < *(int *)(lVar26 + 0x20)) {
                          lVar28 = lVar26;
                        }
                        lVar26 = *(long *)(lVar26 + (ulong)(*(int *)(lVar26 + 0x20) < 4) * 8);
                      } while (lVar26 != 0);
                      if (((lVar28 != lVar24) && (*(int *)(lVar28 + 0x20) < 5)) &&
                         (plVar33 = *(long **)(lVar28 + 0x28), plVar33 != (long *)0x0)) {
                        (**(code **)(*plVar33 + 0x1f8))(plVar33,4 < iVar34);
                        param_3 = (long *********)0x0;
                        (**(code **)(*plVar33 + 0x388))(plVar33,iVar34 < 5);
                        lVar24 = *(long *)(lVar21 + 0x20) + 0x1b8;
                        lVar18 = *(long *)(*(long *)(lVar21 + 0x20) + 0x1b8);
                      }
                      lVar21 = lVar24;
                      if (lVar18 != 0) {
                        do {
                          if (3 < *(int *)(lVar18 + 0x20)) {
                            lVar21 = lVar18;
                          }
                          lVar18 = *(long *)(lVar18 + (ulong)(*(int *)(lVar18 + 0x20) < 4) * 8);
                        } while (lVar18 != 0);
                        if (((lVar21 != lVar24) && (*(int *)(lVar21 + 0x20) < 5)) &&
                           (plVar33 = *(long **)(lVar21 + 0x28), plVar33 != (long *)0x0)) {
                          (**(code **)(*plVar33 + 0x208))(plVar33,4 < iVar34);
                          param_3 = (long *********)0x0;
                          (**(code **)(*plVar33 + 0x388))(plVar33,iVar34 < 5);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    lVar21 = *plVar36;
    if (*plVar9 != lVar21) {
      uVar8 = 0;
      do {
        uVar37 = (uint)uVar8;
        uVar17 = uVar37;
        if (3 < (int)uVar37) {
          uVar17 = 4;
        }
        uVar17 = uVar17 & ((int)uVar17 >> 0x1f ^ 0xffffffffU);
        if (4 < uVar17) goto LAB_71013c50b4;
        puVar7 = *(undefined8 **)(param_1[0x3d] + 0x80);
        uVar38 = *(uint *)(lVar21 + uVar8 * 4);
        *(uint *)(puVar7 + (ulong)uVar17 * 9 + 0xf) = uVar38;
        uVar11 = FUN_7101b8dfe0(uVar38);
        plVar33 = FUN_710323f760((long *)*puVar7,uVar11,(long ****)param_3,param_4,param_5,param_6,
                                 param_7,param_8);
        FUN_7103778b80(puVar7[(ulong)uVar17 * 9 + 0x11],(long)plVar33,param_3,param_4,param_5,
                       param_6,param_7,param_8);
        if (9 < uVar38) goto LAB_71013c491c;
        uVar11 = (ulong)uVar17;
        switch(uVar38) {
        case 0:
          puVar7 = puVar7 + uVar11 * 9;
          puVar10 = puVar7 + 0x12;
          pcVar15 = "mel_pause_restart";
          break;
        case 1:
          puVar7 = puVar7 + uVar11 * 9;
          puVar10 = puVar7 + 0x12;
          pcVar15 = "mel_pause_restart_camera";
          break;
        case 2:
          puVar7 = puVar7 + uVar11 * 9;
          puVar10 = puVar7 + 0x12;
          pcVar15 = "mel_pause_sp_move_list";
          break;
        case 3:
          puVar7 = puVar7 + uVar11 * 9;
          puVar10 = puVar7 + 0x12;
          pcVar15 = "mel_pause_con_connect";
          break;
        case 4:
          FUN_710377a120((long)(puVar7 + uVar11 * 9 + 0x12),"mel_pause_end",param_3,param_4,param_5,
                         param_6,param_7,param_8);
          FUN_710377a120((long)(puVar7 + uVar11 * 9 + 0x14),"mel_pause_end_btn",param_3,param_4,
                         param_5,param_6,param_7,param_8);
          lVar21 = puVar7[4];
          param_3 = (long *********)0x6;
          goto LAB_71013c4910;
        case 5:
          puVar7 = puVar7 + uVar11 * 9;
          puVar10 = puVar7 + 0x12;
          pcVar15 = "mel_pause_kumite_retry";
          break;
        case 6:
          FUN_710377a120((long)(puVar7 + uVar11 * 9 + 0x12),"mnu_stgcreate_edit_stage_reset",param_3
                         ,param_4,param_5,param_6,param_7,param_8);
          FUN_710377a120((long)(puVar7 + uVar11 * 9 + 0x14),"mnu_stgcreate_edit_stage_reset_guide",
                         param_3,param_4,param_5,param_6,param_7,param_8);
          lVar21 = puVar7[4];
          param_3 = (long *********)&DAT_00000008;
          goto LAB_71013c4910;
        case 7:
          puVar7 = puVar7 + uVar11 * 9;
          puVar10 = puVar7 + 0x12;
          pcVar15 = "mnu_stgcreate_edit_fighter_select";
          break;
        case 8:
          pcVar15 = "mnu_stgcreate_edit_back";
          goto LAB_71013c48f4;
        case 9:
          pcVar15 = "mel_pause_end";
LAB_71013c48f4:
          FUN_710377a120((long)(puVar7 + uVar11 * 9 + 0x12),pcVar15,param_3,param_4,param_5,param_6,
                         param_7,param_8);
          FUN_710377a120((long)(puVar7 + uVar11 * 9 + 0x14),"mnu_stgcreate_edit_back_guide",param_3,
                         param_4,param_5,param_6,param_7,param_8);
          lVar21 = puVar7[4];
          param_3 = (long *********)&DAT_00000007;
LAB_71013c4910:
          param_4 = (byte ****)0x0;
          FUN_7103771930(lVar21,uVar37,(long ****)param_3,(byte ****)0x0,param_5,param_6,param_7,
                         param_8);
          goto LAB_71013c491c;
        }
        FUN_710377a120((long)puVar10,pcVar15,param_3,param_4,param_5,param_6,param_7,param_8);
        if (*(long **)(puVar7[0x15] + 0x10) != (long *)0x0) {
          param_3 = (long *********)0x0;
          param_4 = (byte ****)0x0;
          local_1a0 = (long ********)((ulong)local_1a0 & 0xffffffff00000000);
          FUN_71037a2270(*(long **)(puVar7[0x15] + 0x10),(ushort *)&local_1a0,0,0);
        }
LAB_71013c491c:
        uVar8 = uVar8 + 1;
        lVar21 = *plVar36;
      } while (uVar8 < (ulong)(*plVar9 - lVar21 >> 2));
    }
  }
  if (((DAT_71053144d8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_71053144d8), iVar6 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  cVar3 = *(char *)(lVar31 + 0xd36);
  bVar5 = DAT_71052c51b0 & 0xfe;
  bVar4 = bVar5 != 0x14;
  *(bool *)((long)param_1 + 0x14) = cVar3 == '\0' && bVar4;
  piVar25 = (int *)param_1[0x3e];
  piVar22 = (int *)param_1[0x3f];
  if (piVar22 != piVar25) {
    iVar6 = *piVar25;
    piVar27 = piVar25;
    while (iVar6 != 2) {
      piVar27 = piVar27 + 1;
      if (piVar22 == piVar27) goto LAB_71013c49fc;
      iVar6 = *piVar27;
    }
    if ((piVar27 != piVar22) && (param_1[0x3d] != 0)) {
      uVar17 = (uint)((ulong)((long)piVar27 - (long)piVar25) >> 2);
      if (4 < uVar17) goto LAB_71013c50b4;
      uVar37 = 0x3f800000;
      if (cVar3 == '\0' && bVar5 != 0x14) {
        uVar37 = 0;
      }
      FUN_710377b010((ulong)uVar37,*(long *)(param_1[0x3d] + 0x80) + (long)(int)uVar17 * 0x48 + 0xb0
                    );
    }
  }
LAB_71013c49fc:
  if (((DAT_71053144d8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_71053144d8), iVar6 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  if (DAT_71052c51b6 == '\0') {
    if (DAT_71052c51b0 - 9 < 0x1c) {
      uVar17 = 0x1ffffeeU >> (ulong)(DAT_71052c51b0 - 9 & 0x1f) & 1;
    }
    else {
      uVar17 = 1;
    }
  }
  else {
    uVar17 = 0;
  }
  piVar25 = (int *)param_1[0x3e];
  piVar22 = (int *)param_1[0x3f];
  *(char *)((long)param_1 + 0x15) = (char)(uVar17 & bVar4);
  if (piVar22 != piVar25) {
    iVar6 = *piVar25;
    piVar27 = piVar25;
    while (iVar6 != 3) {
      piVar27 = piVar27 + 1;
      if (piVar22 == piVar27) goto LAB_71013c4adc;
      iVar6 = *piVar27;
    }
    if ((piVar27 != piVar22) && (param_1[0x3d] != 0)) {
      uVar37 = (uint)((ulong)((long)piVar27 - (long)piVar25) >> 2);
      if (4 < uVar37) goto LAB_71013c50b4;
      uVar38 = 0;
      if ((uVar17 & bVar4) == 0) {
        uVar38 = 0x3f800000;
      }
      FUN_710377b010((ulong)uVar38,*(long *)(param_1[0x3d] + 0x80) + (long)(int)uVar37 * 0x48 + 0xb0
                    );
      piVar25 = (int *)*plVar36;
      piVar22 = (int *)param_1[0x3f];
    }
  }
LAB_71013c4adc:
  *(bool *)((long)param_1 + 0x16) = bVar4;
  piVar27 = piVar25;
  if (piVar25 != piVar22) {
    iVar6 = *piVar25;
    while (iVar6 != 1) {
      piVar27 = piVar27 + 1;
      if (piVar22 == piVar27) goto LAB_71013c4b68;
      iVar6 = *piVar27;
    }
  }
  if ((piVar27 != piVar22) && (param_1[0x3d] != 0)) {
    uVar17 = (uint)((ulong)((long)piVar27 - (long)piVar25) >> 2);
    if (4 < uVar17) {
LAB_71013c50b4:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar37 = 0x3f800000;
    if (bVar5 != 0x14) {
      uVar37 = 0;
    }
    FUN_710377b010((ulong)uVar37,*(long *)(param_1[0x3d] + 0x80) + (long)(int)uVar17 * 0x48 + 0xb0);
  }
LAB_71013c4b68:
  plVar36 = *(long **)(*param_1 + 0x48);
  lVar31 = (**(code **)(*plVar36 + 0x10))(plVar36,*param_1,0xd);
  param_1[0x41] = lVar31;
  param_1[0x3c] = (long)&DAT_c1ffff0000000000;
  plVar36 = *(long **)(*param_1 + 0x48);
  lVar31 = (**(code **)(*plVar36 + 0x10))(plVar36,*param_1,0x18);
  param_1[0x42] = lVar31;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

