// addr:      7102ab5540
// offset:    0x2ab5540
// name:      FUN_7102ab5540
// mangled:   
// signature: undefined __cdecl FUN_7102ab5540(float param_1, long param_2, undefined8 param_3, long * * * * param_4, undefined1[16] * param_5, undefined1[16] * param_6, undefined1[16] * param_7, undefined8 param_8, undefined8 param_9)


/* WARNING: Removing unreachable block (ram,0x007102ab7858) */
/* WARNING: Removing unreachable block (ram,0x007102ab7830) */
/* WARNING: Removing unreachable block (ram,0x007102ab786c) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7102ab5540(float param_1,long param_2,undefined8 param_3,long ****param_4,
                   undefined1 (*param_5) [16],undefined1 (*param_6) [16],undefined1 (*param_7) [16],
                   undefined8 param_8,undefined8 param_9)

{
  long ***ppplVar1;
  uint uVar2;
  undefined8 uVar3;
  char cVar4;
  undefined1 auVar5 [16];
  undefined2 uVar6;
  float fVar7;
  undefined4 uVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  byte *pbVar13;
  bool bVar14;
  bool bVar15;
  uint uVar16;
  int iVar17;
  long *plVar18;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined8 extraout_x1_09;
  undefined8 extraout_x1_10;
  undefined8 extraout_x1_11;
  undefined8 extraout_x1_12;
  undefined8 extraout_x1_13;
  undefined8 extraout_x1_14;
  undefined8 extraout_x1_15;
  undefined8 extraout_x1_16;
  undefined8 extraout_x1_17;
  undefined8 extraout_x1_18;
  undefined8 extraout_x1_19;
  undefined8 extraout_x1_20;
  undefined8 extraout_x1_21;
  undefined8 extraout_x1_22;
  undefined8 extraout_x1_23;
  undefined8 extraout_x1_24;
  undefined8 extraout_x1_25;
  undefined8 extraout_x1_26;
  undefined8 extraout_x1_27;
  undefined8 extraout_x1_28;
  undefined8 extraout_x1_29;
  undefined8 extraout_x1_30;
  undefined8 extraout_x1_31;
  undefined8 extraout_x1_32;
  undefined8 extraout_x1_33;
  undefined8 extraout_x1_34;
  undefined8 extraout_x1_35;
  undefined8 extraout_x1_36;
  undefined8 extraout_x1_37;
  undefined8 extraout_x1_38;
  undefined8 extraout_x1_39;
  undefined8 extraout_x1_40;
  undefined8 extraout_x1_41;
  undefined8 extraout_x1_42;
  undefined8 extraout_x1_43;
  undefined8 extraout_x1_44;
  char cVar19;
  undefined4 uVar20;
  long lVar21;
  long lVar22;
  int *piVar23;
  long *plVar24;
  uint *puVar25;
  long *plVar26;
  undefined8 uVar27;
  undefined8 *puVar28;
  undefined8 uVar29;
  long *plVar30;
  long lVar31;
  float fVar32;
  undefined1 uVar33;
  undefined1 uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined1 uVar43;
  undefined1 uVar44;
  undefined1 uVar45;
  undefined1 uVar46;
  undefined1 uVar47;
  undefined1 uVar48;
  float fVar49;
  float fVar53;
  byte bVar54;
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar55 [12];
  undefined1 auVar56 [16];
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  float fVar62;
  int iVar69;
  int iVar70;
  undefined1 auVar63 [12];
  float fVar68;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  int iVar71;
  float fVar72;
  float fVar76;
  float fVar77;
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  float fVar78;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  float fVar83;
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  long **local_118;
  long *local_110;
  long local_108;
  long **local_100;
  long *local_f8;
  long local_f0;
  long **local_e8;
  long *local_e0;
  long local_d8;
  undefined8 local_d0;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  long local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 auVar57 [16];
  undefined1 auVar67 [16];
  
  fVar7 = 0.0;
  if (*(char *)(param_2 + 0xab0) != '\0') {
    fVar7 = param_1;
  }
  fVar83 = *(float *)(param_2 + 0xa4c) + fVar7;
  uVar33 = SUB41(fVar83,0);
  uVar34 = (undefined1)((uint)fVar83 >> 8);
  uVar35 = (undefined1)((uint)fVar83 >> 0x10);
  uVar36 = (undefined1)((uint)fVar83 >> 0x18);
  *(float *)(param_2 + 0xa4c) = fVar83;
  switch(*(undefined1 *)(param_2 + 0xa48)) {
  case 0:
    *(undefined4 *)(param_2 + 0xa4c) = 0;
    *(undefined1 *)(param_2 + 0xa54) = 2;
    uVar33 = 1;
LAB_7102ab59f0:
    *(undefined1 *)(param_2 + 0xa48) = uVar33;
    break;
  case 1:
    if ((float)(0x2d0 - *(int *)(param_2 + 0x75c)) <= fVar83) {
LAB_7102ab59ec:
      uVar33 = 2;
      goto LAB_7102ab59f0;
    }
    break;
  case 2:
    if (*(char *)(param_2 + 0xab1) == '\0') {
      if (680.0 <= fVar83 && *(char *)(param_2 + 0xab2) != '\0') {
        param_6 = (undefined1 (*) [16])&DAT_50000000;
        param_4 = (long ****)0x0;
        param_5 = (undefined1 (*) [16])0x0;
        FUN_710067de90(*lib::Singleton<app::FighterManager>::instance_,0x140fd240be,0,0,0x50000000);
        *(undefined1 *)(param_2 + 0xab2) = 0;
        param_3 = extraout_x1_13;
      }
      if (*(char *)(param_2 + 0xab4) == '\0') goto LAB_7102ab5648;
      fVar83 = *(float *)(param_2 + 0xa4c);
      uVar33 = SUB41(fVar83,0);
      uVar34 = (undefined1)((uint)fVar83 >> 8);
      uVar35 = (undefined1)((uint)fVar83 >> 0x10);
      uVar36 = (undefined1)((uint)fVar83 >> 0x18);
      if (4770.0 <= fVar83) {
        param_6 = (undefined1 (*) [16])&DAT_50000000;
        param_4 = (long ****)0x0;
        param_5 = (undefined1 (*) [16])0x0;
        FUN_710067de90(*lib::Singleton<app::FighterManager>::instance_,0x121c137e0e,0,0,0x50000000);
        *(undefined1 *)(param_2 + 0xab4) = 0;
        param_3 = extraout_x1_14;
        goto LAB_7102ab5648;
      }
    }
    else {
LAB_7102ab5648:
      uVar20 = *(undefined4 *)(param_2 + 0xa4c);
      uVar33 = (undefined1)uVar20;
      uVar34 = (undefined1)((uint)uVar20 >> 8);
      uVar35 = (undefined1)((uint)uVar20 >> 0x10);
      uVar36 = (undefined1)((uint)uVar20 >> 0x18);
    }
    if (5100.0 <= (float)CONCAT13(uVar36,CONCAT12(uVar35,CONCAT11(uVar34,uVar33)))) {
      puVar25 = *(uint **)(param_2 + 0x340);
      iVar17 = *(int *)(param_2 + 0x764);
      iVar69 = *(int *)(param_2 + 0x768);
      *(float *)(param_2 + 0xa4c) =
           (float)CONCAT13(uVar36,CONCAT12(uVar35,CONCAT11(uVar34,uVar33))) + -5100.0;
      uVar16 = *puVar25;
      *puVar25 = puVar25[1];
      uVar2 = puVar25[3];
      uVar16 = uVar16 ^ uVar16 << 0xb;
      uVar16 = uVar16 ^ uVar16 >> 8 ^ uVar2 ^ uVar2 >> 0x13;
      puVar25[1] = puVar25[2];
      puVar25[2] = uVar2;
      puVar25[3] = uVar16;
      *(undefined1 *)(param_2 + 0xa54) = 3;
      *(float *)(param_2 + 0xa50) =
           (float)uVar16 * 2.3283064e-10 * (float)(iVar69 - iVar17) + (float)iVar17;
      if (*(char *)(param_2 + 0xa68) == '\0') {
        iVar17 = *(int *)(param_2 + 0x748);
        iVar69 = *(int *)(param_2 + 0x74c);
        puVar25 = *(uint **)(param_2 + 0x340);
        uVar16 = *puVar25;
        *puVar25 = puVar25[1];
        uVar2 = puVar25[3];
        uVar16 = uVar16 ^ uVar16 << 0xb;
        uVar16 = uVar16 ^ uVar16 >> 8 ^ uVar2 ^ uVar2 >> 0x13;
        fVar83 = (float)uVar16 * 2.3283064e-10 * (float)(iVar69 - iVar17) + (float)iVar17;
        uVar33 = SUB41(fVar83,0);
        uVar34 = (undefined1)((uint)fVar83 >> 8);
        uVar35 = (undefined1)((uint)fVar83 >> 0x10);
        uVar36 = (undefined1)((uint)fVar83 >> 0x18);
        puVar25[1] = puVar25[2];
        puVar25[2] = uVar2;
        puVar25[3] = uVar16;
      }
      else {
        iVar17 = *(int *)(param_2 + 0x740);
        iVar69 = *(int *)(param_2 + 0x744);
        puVar25 = *(uint **)(param_2 + 0x340);
        uVar16 = *puVar25;
        *puVar25 = puVar25[1];
        uVar2 = puVar25[3];
        uVar16 = uVar16 ^ uVar16 << 0xb;
        uVar16 = uVar16 ^ uVar16 >> 8 ^ uVar2 ^ uVar2 >> 0x13;
        puVar25[1] = puVar25[2];
        puVar25[2] = uVar2;
        puVar25[3] = uVar16;
        *(undefined1 *)(param_2 + 0xa68) = 0;
        fVar83 = (float)uVar16 * 2.3283064e-10 * (float)(iVar69 - iVar17) + (float)iVar17;
        uVar33 = SUB41(fVar83,0);
        uVar34 = (undefined1)((uint)fVar83 >> 8);
        uVar35 = (undefined1)((uint)fVar83 >> 0x10);
        uVar36 = (undefined1)((uint)fVar83 >> 0x18);
      }
      *(uint *)(param_2 + 0xa58) = CONCAT13(uVar36,CONCAT12(uVar35,CONCAT11(uVar34,uVar33)));
      FUN_71025f7350(*(long *)(*(long *)(param_2 + 0x318) + 0x10),(byte *)"light_wait");
      FUN_7102633a10(*(long *)(param_2 + 0x318),(long *********)"chara_wait",1,param_5,
                     (long ****)param_6,param_7,param_8,param_9);
      param_4 = (long ****)0x1;
      FUN_7102633b90(*(long *)(param_2 + 0x318),(long *********)"stage_wait",1,param_5,
                     (long ****)param_6,param_7,param_8,param_9);
      *(undefined1 *)(param_2 + 0xa48) = 3;
      *(undefined2 *)(param_2 + 0xab2) = 0x100;
      *(undefined1 *)(param_2 + 0xab4) = 1;
      param_3 = extraout_x1_43;
    }
    else if (5030.0 <= (float)CONCAT13(uVar36,CONCAT12(uVar35,CONCAT11(uVar34,uVar33)))) {
      plVar30 = *(long **)(param_2 + 0x1a8);
      plVar18 = *(long **)(param_2 + 0x1b0);
      if (plVar18 == plVar30) {
LAB_7102ab7e38:
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      lVar21 = *(long *)(*plVar30 + 0x20);
      if (((int)((ulong)(*(long *)(*plVar30 + 0x28) - lVar21) >> 3) != 0) &&
         (plVar26 = *(long **)(lVar21 + 8), (char)plVar26[4] != '\0')) {
        plVar30 = (long *)plVar26[1];
        lVar21 = plVar26[2];
        lVar22 = *plVar26;
        *(undefined1 *)(plVar26 + 4) = 0;
        *plVar30 = lVar22;
        *(long **)(lVar22 + 8) = plVar30;
        *(long *)(lVar21 + 0x18) = *(long *)(lVar21 + 0x18) + -1;
        *plVar26 = 0;
        plVar26[1] = 0;
        puVar28 = *(undefined8 **)(lVar21 + 0x40);
        *plVar26 = lVar21 + 0x38;
        plVar26[1] = (long)puVar28;
        *(long **)(lVar21 + 0x40) = plVar26;
        *puVar28 = plVar26;
        *(long *)(lVar21 + 0x30) = *(long *)(lVar21 + 0x30) + 1;
        iVar17 = 0;
        if (plVar26[3] != 0) {
          iVar17 = *(int *)(plVar26[3] + 0x110);
        }
        *(int *)(lVar21 + 0x48) = *(int *)(lVar21 + 0x48) - iVar17;
        plVar30 = *(long **)(param_2 + 0x1a8);
        plVar18 = *(long **)(param_2 + 0x1b0);
      }
      if (plVar18 == plVar30) goto LAB_7102ab7e38;
      lVar21 = *(long *)(*plVar30 + 0x20);
      if (((int)((ulong)(*(long *)(*plVar30 + 0x28) - lVar21) >> 3) != 0) &&
         (plVar30 = *(long **)(lVar21 + 0x10), (char)plVar30[4] == '\0')) {
        *(undefined1 *)(plVar30 + 4) = 1;
        lVar22 = *plVar30;
        plVar18 = (long *)plVar30[1];
        lVar21 = plVar30[2];
        *plVar18 = lVar22;
        *(long **)(lVar22 + 8) = plVar18;
        *(long *)(lVar21 + 0x30) = *(long *)(lVar21 + 0x30) + -1;
        *plVar30 = 0;
        plVar30[1] = 0;
        puVar28 = *(undefined8 **)(lVar21 + 0x28);
        *plVar30 = lVar21 + 0x20;
        plVar30[1] = (long)puVar28;
        *(long **)(lVar21 + 0x28) = plVar30;
        *puVar28 = plVar30;
        *(long *)(lVar21 + 0x18) = *(long *)(lVar21 + 0x18) + 1;
        iVar17 = 0;
        if (plVar30[3] != 0) {
          iVar17 = *(int *)(plVar30[3] + 0x110);
        }
        *(int *)(lVar21 + 0x48) = *(int *)(lVar21 + 0x48) + iVar17;
      }
    }
    break;
  case 3:
    if (*(char *)(param_2 + 0xa5c) == '\x15') {
      if ((*(float *)(param_2 + 0xa50) <= fVar83) && (*(char *)(param_2 + 0xab1) == '\0')) {
        *(undefined1 *)(param_2 + 0xa54) = 4;
        plVar30 = *(long **)(param_2 + 0x1a8);
        plVar18 = *(long **)(param_2 + 0x1b0);
        *(undefined4 *)(param_2 + 0xa4c) = 0;
        if (plVar18 == plVar30) goto LAB_7102ab7e38;
        lVar21 = *(long *)(*plVar30 + 0x20);
        if (((int)((ulong)(*(long *)(*plVar30 + 0x28) - lVar21) >> 3) != 0) &&
           (plVar26 = *(long **)(lVar21 + 8), (char)plVar26[4] != '\0')) {
          plVar30 = (long *)plVar26[1];
          lVar21 = plVar26[2];
          lVar22 = *plVar26;
          *(undefined1 *)(plVar26 + 4) = 0;
          *plVar30 = lVar22;
          *(long **)(lVar22 + 8) = plVar30;
          *(long *)(lVar21 + 0x18) = *(long *)(lVar21 + 0x18) + -1;
          *plVar26 = 0;
          plVar26[1] = 0;
          puVar28 = *(undefined8 **)(lVar21 + 0x40);
          *plVar26 = lVar21 + 0x38;
          plVar26[1] = (long)puVar28;
          *(long **)(lVar21 + 0x40) = plVar26;
          *puVar28 = plVar26;
          *(long *)(lVar21 + 0x30) = *(long *)(lVar21 + 0x30) + 1;
          iVar17 = 0;
          if (plVar26[3] != 0) {
            iVar17 = *(int *)(plVar26[3] + 0x110);
          }
          *(int *)(lVar21 + 0x48) = *(int *)(lVar21 + 0x48) - iVar17;
          plVar30 = *(long **)(param_2 + 0x1a8);
          plVar18 = *(long **)(param_2 + 0x1b0);
        }
        if (plVar18 == plVar30) goto LAB_7102ab7e38;
        lVar21 = *(long *)(*plVar30 + 0x20);
        if (((int)((ulong)(*(long *)(*plVar30 + 0x28) - lVar21) >> 3) != 0) &&
           (plVar30 = *(long **)(lVar21 + 0x10), (char)plVar30[4] != '\0')) {
          plVar18 = (long *)plVar30[1];
          lVar21 = plVar30[2];
          lVar22 = *plVar30;
          *(undefined1 *)(plVar30 + 4) = 0;
          *plVar18 = lVar22;
          *(long **)(lVar22 + 8) = plVar18;
          *(long *)(lVar21 + 0x18) = *(long *)(lVar21 + 0x18) + -1;
          *plVar30 = 0;
          plVar30[1] = 0;
          puVar28 = *(undefined8 **)(lVar21 + 0x40);
          *plVar30 = lVar21 + 0x38;
          plVar30[1] = (long)puVar28;
          *(long **)(lVar21 + 0x40) = plVar30;
          *puVar28 = plVar30;
          *(long *)(lVar21 + 0x30) = *(long *)(lVar21 + 0x30) + 1;
          iVar17 = 0;
          if (plVar30[3] != 0) {
            iVar17 = *(int *)(plVar30[3] + 0x110);
          }
          *(int *)(lVar21 + 0x48) = *(int *)(lVar21 + 0x48) - iVar17;
        }
        FUN_71025f7350(*(long *)(*(long *)(param_2 + 0x318) + 0x10),(byte *)"light_loop");
        FUN_7102633a10(*(long *)(param_2 + 0x318),(long *********)"chara_loop",1,param_5,
                       (long ****)param_6,param_7,param_8,param_9);
        param_4 = (long ****)0x1;
        FUN_7102633b90(*(long *)(param_2 + 0x318),(long *********)"stage_loop",1,param_5,
                       (long ****)param_6,param_7,param_8,param_9);
        uVar33 = 4;
        param_3 = extraout_x1_44;
        goto LAB_7102ab59f0;
      }
      if (*(char *)(param_2 + 0x18) != '\0') {
        fVar83 = *(float *)(param_2 + 0xa58) - fVar7;
        uVar33 = SUB41(fVar83,0);
        uVar34 = (undefined1)((uint)fVar83 >> 8);
        uVar35 = (undefined1)((uint)fVar83 >> 0x10);
        uVar36 = (undefined1)((uint)fVar83 >> 0x18);
        if (fVar83 <= 0.0) {
          uVar33 = 0;
          uVar34 = 0;
          uVar35 = 0;
          uVar36 = 0;
        }
        *(uint *)(param_2 + 0xa58) = CONCAT13(uVar36,CONCAT12(uVar35,CONCAT11(uVar34,uVar33)));
        *(undefined4 *)(*(long *)(*(long *)(param_2 + 0xa70) + 8) + 0x10) = 1;
        if (*(float *)(param_2 + 0xa58) <= 0.0) {
          puVar28 = *(undefined8 **)(param_2 + 0xa60);
          uVar16 = *(uint *)(puVar28 + 1);
          if (uVar16 == 0xffffffff) {
            FUN_7102666c30(puVar28);
            uVar16 = *(uint *)(puVar28 + 1);
            param_3 = extraout_x1_00;
          }
          *(undefined4 *)(puVar28 + 1) = *(undefined4 *)((long)puVar28 + 0xc);
          *(undefined4 *)((long)puVar28 + 0xc) = *(undefined4 *)(puVar28 + 2);
          *(undefined4 *)(puVar28 + 2) = 0xffffffff;
          *(uint *)(puVar28 + 3) = uVar16;
          *(undefined1 *)((long)puVar28 + 0x14) = 1;
          cVar19 = *(char *)((long)puVar28 + (ulong)uVar16 + 0x20);
          *(char *)(param_2 + 0xa5c) = cVar19;
          if (cVar19 == '\a') {
            *(undefined1 *)(*(long *)(param_2 + 0xaa0) + 200) = 7;
          }
          else if (cVar19 == '\x06') {
            *(undefined1 *)(*(long *)(param_2 + 0xaa8) + 0x60) = 6;
          }
          else if (cVar19 == '\x05') {
            *(undefined1 *)(*(long *)(param_2 + 0xa98) + 0x2b0) = 5;
          }
          iVar17 = *(int *)(param_2 + 0x748);
          iVar69 = *(int *)(param_2 + 0x74c);
          puVar25 = *(uint **)(param_2 + 0x340);
          uVar16 = *puVar25;
          *puVar25 = puVar25[1];
          uVar2 = puVar25[3];
          uVar16 = uVar16 ^ uVar16 << 0xb;
          uVar16 = uVar16 ^ uVar16 >> 8 ^ uVar2 ^ uVar2 >> 0x13;
          puVar25[1] = puVar25[2];
          puVar25[2] = uVar2;
          puVar25[3] = uVar16;
          *(float *)(param_2 + 0xa58) =
               (float)uVar16 * 2.3283064e-10 * (float)(iVar69 - iVar17) + (float)iVar17;
          *(undefined4 *)(*(long *)(*(long *)(param_2 + 0xa70) + 8) + 0x10) = 0;
          *(undefined4 *)(*(long *)(*(long *)(param_2 + 0xa70) + 8) + 0x14) = 1;
          lVar21 = *(long *)(*(long *)(param_2 + 0xa70) + 8);
          *(undefined8 *)(lVar21 + 0x38) = 0;
          *(undefined8 *)(lVar21 + 0x30) = 0x4248000000000000;
          lVar21 = *(long *)(*(long *)(param_2 + 0xa70) + 8);
          *(undefined8 *)(lVar21 + 0xac) = 0x41c80000c1c80000;
          *(undefined8 *)(lVar21 + 0xb4) = 0x42480000;
        }
      }
    }
    break;
  case 4:
    if ((*(char *)(param_2 + 0xab1) == '\0') &&
       (300.0 <= fVar83 && *(char *)(param_2 + 0xab3) != '\0')) {
      param_6 = (undefined1 (*) [16])&DAT_50000000;
      param_4 = (long ****)0x0;
      param_5 = (undefined1 (*) [16])0x0;
      FUN_710067de90(*lib::Singleton<app::FighterManager>::instance_,0x140fd240be,0,0,0x50000000);
      uVar20 = *(undefined4 *)(param_2 + 0xa4c);
      uVar33 = (undefined1)uVar20;
      uVar34 = (undefined1)((uint)uVar20 >> 8);
      uVar35 = (undefined1)((uint)uVar20 >> 0x10);
      uVar36 = (undefined1)((uint)uVar20 >> 0x18);
      *(undefined1 *)(param_2 + 0xab3) = 0;
      param_3 = extraout_x1;
    }
    if ((float)(0x4b0 - *(int *)(param_2 + 0x75c)) <=
        (float)CONCAT13(uVar36,CONCAT12(uVar35,CONCAT11(uVar34,uVar33)))) {
      *(undefined1 *)(param_2 + 0xa48) = 5;
      *(undefined2 *)(param_2 + 0xab2) = 0x100;
      *(undefined1 *)(param_2 + 0xab4) = 1;
    }
    break;
  case 5:
    if (1200.0 <= fVar83) {
      plVar30 = *(long **)(param_2 + 0x1a8);
      plVar18 = *(long **)(param_2 + 0x1b0);
      *(undefined1 *)(param_2 + 0xa54) = 2;
      *(float *)(param_2 + 0xa4c) = fVar83 + -1200.0 + 1121.0;
      if (plVar18 == plVar30) goto LAB_7102ab7e38;
      lVar21 = *(long *)(*plVar30 + 0x20);
      if (((int)((ulong)(*(long *)(*plVar30 + 0x28) - lVar21) >> 3) != 0) &&
         (plVar26 = *(long **)(lVar21 + 8), (char)plVar26[4] == '\0')) {
        *(undefined1 *)(plVar26 + 4) = 1;
        lVar22 = *plVar26;
        plVar30 = (long *)plVar26[1];
        lVar21 = plVar26[2];
        *plVar30 = lVar22;
        *(long **)(lVar22 + 8) = plVar30;
        *(long *)(lVar21 + 0x30) = *(long *)(lVar21 + 0x30) + -1;
        *plVar26 = 0;
        plVar26[1] = 0;
        puVar28 = *(undefined8 **)(lVar21 + 0x28);
        *plVar26 = lVar21 + 0x20;
        plVar26[1] = (long)puVar28;
        *(long **)(lVar21 + 0x28) = plVar26;
        *puVar28 = plVar26;
        *(long *)(lVar21 + 0x18) = *(long *)(lVar21 + 0x18) + 1;
        iVar17 = 0;
        if (plVar26[3] != 0) {
          iVar17 = *(int *)(plVar26[3] + 0x110);
        }
        *(int *)(lVar21 + 0x48) = *(int *)(lVar21 + 0x48) + iVar17;
        plVar30 = *(long **)(param_2 + 0x1a8);
        plVar18 = *(long **)(param_2 + 0x1b0);
      }
      if (plVar18 == plVar30) goto LAB_7102ab7e38;
      lVar21 = *(long *)(*plVar30 + 0x20);
      if (((int)((ulong)(*(long *)(*plVar30 + 0x28) - lVar21) >> 3) != 0) &&
         (plVar30 = *(long **)(lVar21 + 0x10), (char)plVar30[4] != '\0')) {
        plVar18 = (long *)plVar30[1];
        lVar21 = plVar30[2];
        lVar22 = *plVar30;
        *(undefined1 *)(plVar30 + 4) = 0;
        *plVar18 = lVar22;
        *(long **)(lVar22 + 8) = plVar18;
        *(long *)(lVar21 + 0x18) = *(long *)(lVar21 + 0x18) + -1;
        *plVar30 = 0;
        plVar30[1] = 0;
        puVar28 = *(undefined8 **)(lVar21 + 0x40);
        *plVar30 = lVar21 + 0x38;
        plVar30[1] = (long)puVar28;
        *(long **)(lVar21 + 0x40) = plVar30;
        *puVar28 = plVar30;
        *(long *)(lVar21 + 0x30) = *(long *)(lVar21 + 0x30) + 1;
        iVar17 = 0;
        if (plVar30[3] != 0) {
          iVar17 = *(int *)(plVar30[3] + 0x110);
        }
        *(int *)(lVar21 + 0x48) = *(int *)(lVar21 + 0x48) - iVar17;
      }
      FUN_71025f7350(*(long *)(*(long *)(param_2 + 0x318) + 0x10),(byte *)"light");
      FUN_7102633a10(*(long *)(param_2 + 0x318),(long *********)"chara",1,param_5,(long ****)param_6
                     ,param_7,param_8,param_9);
      param_4 = (long ****)0x1;
      FUN_7102633b90(*(long *)(param_2 + 0x318),(long *********)"stage",1,param_5,(long ****)param_6
                     ,param_7,param_8,param_9);
      param_3 = extraout_x1_01;
      goto LAB_7102ab59ec;
    }
  }
  plVar30 = *(long **)(param_2 + 0xa78);
  cVar19 = *(char *)((long)plVar30 + 0x381);
  if (cVar19 != '\x04') {
    cVar4 = *(char *)((long)plVar30 + 0x38c);
    if (cVar4 == '\x04') {
      fVar83 = *(float *)(plVar30 + 0x71);
      if (410.0 <= fVar83) {
        plVar18 = *(long **)plVar30[3];
        plVar26 = (long *)((undefined8 *)plVar30[3])[1];
LAB_7102ab5c5c:
        FUN_71025f4d80(plVar18,plVar26,1);
        plVar18 = *(long **)plVar30[4];
        plVar26 = (long *)((undefined8 *)plVar30[4])[1];
      }
      else {
        plVar26 = (long *)((long *)plVar30[3])[1];
        for (plVar18 = *(long **)plVar30[3]; plVar18 != plVar26; plVar18 = plVar18 + 1) {
          lVar21 = *plVar18;
          *(undefined1 *)(lVar21 + 0x128) = 1;
          if (*(long *)(lVar21 + 8) != 0) {
            *(undefined8 *)(*(long *)(lVar21 + 8) + 0xd8) = 0xffffffffffffffff;
            FUN_7100532bc0(*(long *)(lVar21 + 8),0);
            param_3 = extraout_x1_04;
          }
        }
        plVar18 = *(long **)plVar30[4];
        plVar26 = (long *)((long *)plVar30[4])[1];
        if (fVar83 < 15.0) {
          for (; plVar18 != plVar26; plVar18 = plVar18 + 1) {
            lVar21 = *plVar18;
            *(undefined1 *)(lVar21 + 0x128) = 1;
            if (*(long *)(lVar21 + 8) != 0) {
              *(undefined8 *)(*(long *)(lVar21 + 8) + 0xd8) = 0xffffffffffffffff;
              FUN_7100532bc0(*(long *)(lVar21 + 8),0);
              param_3 = extraout_x1_05;
            }
          }
          goto LAB_7102ab5c70;
        }
      }
      param_4 = (long ****)0x1;
      FUN_71025f4d80(plVar18,plVar26,1);
      param_3 = extraout_x1_06;
LAB_7102ab5c70:
      cVar19 = *(char *)((long)plVar30 + 0x381);
    }
    else {
      if (cVar4 == '\x03') {
        plVar26 = (long *)((long *)plVar30[3])[1];
        for (plVar18 = *(long **)plVar30[3]; plVar18 != plVar26; plVar18 = plVar18 + 1) {
          lVar21 = *plVar18;
          *(undefined1 *)(lVar21 + 0x128) = 1;
          if (*(long *)(lVar21 + 8) != 0) {
            *(undefined8 *)(*(long *)(lVar21 + 8) + 0xd8) = 0xffffffffffffffff;
            FUN_7100532bc0(*(long *)(lVar21 + 8),0);
            param_3 = extraout_x1_02;
          }
        }
        plVar26 = (long *)((long *)plVar30[4])[1];
        for (plVar18 = *(long **)plVar30[4]; plVar18 != plVar26; plVar18 = plVar18 + 1) {
          lVar21 = *plVar18;
          *(undefined1 *)(lVar21 + 0x128) = 1;
          if (*(long *)(lVar21 + 8) != 0) {
            *(undefined8 *)(*(long *)(lVar21 + 8) + 0xd8) = 0xffffffffffffffff;
            FUN_7100532bc0(*(long *)(lVar21 + 8),0);
            param_3 = extraout_x1_03;
          }
        }
        goto LAB_7102ab5c70;
      }
      if (cVar4 == '\x02') {
        plVar18 = *(long **)plVar30[3];
        plVar26 = (long *)((long *)plVar30[3])[1];
        if (*(float *)(plVar30 + 0x71) < 4710.0) goto LAB_7102ab5c5c;
        for (; plVar18 != plVar26; plVar18 = plVar18 + 1) {
          lVar21 = *plVar18;
          *(undefined1 *)(lVar21 + 0x128) = 1;
          if (*(long *)(lVar21 + 8) != 0) {
            *(undefined8 *)(*(long *)(lVar21 + 8) + 0xd8) = 0xffffffffffffffff;
            FUN_7100532bc0(*(long *)(lVar21 + 8),0);
            param_3 = extraout_x1_11;
          }
        }
        plVar26 = (long *)((long *)plVar30[4])[1];
        for (plVar18 = *(long **)plVar30[4]; plVar18 != plVar26; plVar18 = plVar18 + 1) {
          lVar21 = *plVar18;
          *(undefined1 *)(lVar21 + 0x128) = 1;
          if (*(long *)(lVar21 + 8) != 0) {
            *(undefined8 *)(*(long *)(lVar21 + 8) + 0xd8) = 0xffffffffffffffff;
            FUN_7100532bc0(*(long *)(lVar21 + 8),0);
            param_3 = extraout_x1_12;
          }
        }
        goto LAB_7102ab5c70;
      }
    }
    *(undefined1 *)((long)plVar30 + 0x395) = 0;
    *(float *)((long)plVar30 + 900) = *(float *)((long)plVar30 + 900) + fVar7;
    if (cVar19 == '\x02') {
      if (((0.0 < fVar7) &&
          (fVar83 = *(float *)(plVar30 + 0x84), *(float *)(plVar30 + 0x84) = fVar83 - fVar7,
          fVar83 - fVar7 <= 0.0)) && ((char)plVar30[0x79] == '\0')) {
        plVar18 = *(long **)(*(long *)plVar30[0x78] + 8);
        if (plVar18 != (long *)0x0) {
          param_4 = (long ****)(ulong)*(uint *)((long)plVar30 + 0x3cc);
          (**(code **)(*plVar18 + 0x58))(plVar18,(int)plVar30[0x7c]);
          param_3 = extraout_x1_08;
        }
        *(undefined1 *)(plVar30 + 0x79) = 1;
      }
      if (5100.0 <= *(float *)(plVar30 + 0x71)) {
        lVar21 = *plVar30;
        if (lVar21 != 0) {
          if ((*(char *)(lVar21 + 0xe0) != '\0') && (*(long *)(lVar21 + 200) != 0)) {
            *(undefined2 *)(*(long *)(lVar21 + 200) + 0x30) = 0x101;
          }
          if (*(long *)(lVar21 + 0xd8) != 0) {
            *(undefined1 *)(*(long *)(lVar21 + 0xd8) + 0x21) = 1;
          }
          if (*(char *)(lVar21 + 0xe0) != '\0') {
            *(undefined1 *)(*(long *)(lVar21 + 0xb0) + 0x10) = 0;
          }
        }
        *(undefined1 *)((long)plVar30 + 0x381) = 3;
      }
      *(undefined1 *)((long)plVar30 + 0x395) = 1;
    }
    else {
      if (cVar19 != '\x01') {
        if (cVar19 != '\0') goto LAB_7102ab5d90;
        *(undefined1 *)((long)plVar30 + 0x395) = 1;
        *(undefined1 *)((long)plVar30 + 0x381) = 1;
      }
      if (*(char *)((long)plVar30 + 0x38c) == '\x02') {
        FUN_7102abb730((int)plVar30[0x71],plVar30,0);
        *(undefined4 *)(plVar30 + 0x84) = 0x42700000;
        *(undefined1 *)((long)plVar30 + 0x395) = 1;
        *(undefined1 *)((long)plVar30 + 0x381) = 2;
        param_3 = extraout_x1_07;
      }
    }
LAB_7102ab5d90:
    if ((char)plVar30[0x70] == '\x01') {
      fVar83 = 0.0;
      if ((*plVar30 != 0) && (lVar21 = *(long *)(*plVar30 + 0xd8), fVar83 = 0.0, lVar21 != 0)) {
        fVar83 = *(float *)(lVar21 + 0x10);
        if (1100.0 <= fVar83) {
          if ((char)plVar30[0x7f] != '\0') {
            plVar18 = *(long **)(*(long *)plVar30[0x7e] + 8);
            if (plVar18 != (long *)0x0) {
              param_4 = (long ****)(ulong)*(uint *)((long)plVar30 + 0x3fc);
              (**(code **)(*plVar18 + 0x58))(plVar18,*(undefined4 *)((long)plVar30 + 0x414));
              param_3 = extraout_x1_18;
            }
            *(undefined1 *)(plVar30 + 0x7f) = 0;
          }
        }
        else if ((200.0 <= fVar83) && ((char)plVar30[0x7f] == '\0')) {
          plVar18 = *(long **)(*(long *)plVar30[0x7e] + 8);
          if (plVar18 != (long *)0x0) {
            param_4 = (long ****)(ulong)*(uint *)((long)plVar30 + 0x3fc);
            (**(code **)(*plVar18 + 0x58))(plVar18,(int)plVar30[0x82]);
            param_3 = extraout_x1_10;
          }
          *(undefined1 *)(plVar30 + 0x7f) = 1;
        }
      }
      bVar58 = *(byte *)((long)plVar30 + 0x3b1);
      if (*(float *)(&DAT_7104556fd0 + (ulong)bVar58 * 8) <= fVar83) {
        lVar21 = *(long *)plVar30[0x73];
        if (*(long *)(lVar21 + 8) != 0) {
          param_4 = (long ****)0x1;
          local_d0._0_4_ = 0.0;
          local_d0._4_4_ = 0.0;
          uVar16 = FUN_7102405040(*(long *)(lVar21 + 8),&local_d0,1,(byte ****)param_5,
                                  (long ****)param_6,param_7,param_8,param_9);
          param_3 = extraout_x1_19;
          if (uVar16 != 0xffffffff) {
            fVar83 = *(float *)(&DAT_7104556fd4 + (ulong)bVar58 * 8);
            param_4 = (long ****)(ulong)uVar16;
            if (uVar16 < 0x19) {
              plVar18 = *(long **)(*(long *)(lVar21 + 8) + (long)(int)uVar16 * 0x50 + 0x68);
              if (((*plVar18 != 0) && ((int)plVar18[1] != -1)) &&
                 ((int)plVar18[1] == *(int *)(*plVar18 + 0x20))) {
                FUN_7103736cf0(plVar18,(undefined1 (*) [12])(plVar30 + 0x74));
              }
            }
            (**(code **)(**(long **)(lVar21 + 8) + 0x58))(*(long **)(lVar21 + 8),(int)fVar83);
            param_3 = extraout_x1_20;
          }
          bVar58 = *(byte *)((long)plVar30 + 0x3b1);
        }
        *(byte *)((long)plVar30 + 0x3b1) = bVar58 + 1;
      }
      if (*(char *)((long)plVar30 + 0x38c) == '\x02') {
        FUN_7102abb730((int)plVar30[0x71],plVar30,0);
        *(undefined1 *)(plVar30 + 0x76) = 5;
        param_3 = extraout_x1_21;
      }
LAB_7102ab61c0:
      if (*(char *)((long)plVar30 + 0x395) == '\0') goto LAB_7102ab61f0;
      lVar21 = *plVar30;
    }
    else {
      if ((char)plVar30[0x70] != '\0') goto LAB_7102ab61c0;
      fVar83 = 0.0;
      if ((*plVar30 != 0) && (lVar21 = *(long *)(*plVar30 + 0xd8), fVar83 = 0.0, lVar21 != 0)) {
        fVar83 = *(float *)(lVar21 + 0x10);
        if (4930.0 <= fVar83) {
          if ((char)plVar30[0x7f] != '\0') {
            plVar18 = *(long **)(*(long *)plVar30[0x7e] + 8);
            if (plVar18 != (long *)0x0) {
              param_4 = (long ****)(ulong)*(uint *)((long)plVar30 + 0x3fc);
              (**(code **)(*plVar18 + 0x58))(plVar18,*(undefined4 *)((long)plVar30 + 0x414));
              param_3 = extraout_x1_15;
            }
            *(undefined1 *)(plVar30 + 0x7f) = 0;
          }
        }
        else if ((600.0 <= fVar83) && ((char)plVar30[0x7f] == '\0')) {
          plVar18 = *(long **)(*(long *)plVar30[0x7e] + 8);
          if (plVar18 != (long *)0x0) {
            param_4 = (long ****)(ulong)*(uint *)((long)plVar30 + 0x3fc);
            (**(code **)(*plVar18 + 0x58))(plVar18,(int)plVar30[0x82]);
            param_3 = extraout_x1_09;
          }
          *(undefined1 *)(plVar30 + 0x7f) = 1;
        }
      }
      bVar58 = *(byte *)(plVar30 + 0x76);
      if (*(float *)(&DAT_7104556fe8 + (ulong)bVar58 * 8) <= fVar83) {
        lVar21 = *(long *)plVar30[0x73];
        if (*(long *)(lVar21 + 8) != 0) {
          param_4 = (long ****)0x1;
          local_d0._0_4_ = 0.0;
          local_d0._4_4_ = 0.0;
          uVar16 = FUN_7102405040(*(long *)(lVar21 + 8),&local_d0,1,(byte ****)param_5,
                                  (long ****)param_6,param_7,param_8,param_9);
          param_3 = extraout_x1_16;
          if (uVar16 != 0xffffffff) {
            fVar83 = *(float *)(&DAT_7104556fec + (ulong)bVar58 * 8);
            param_4 = (long ****)(ulong)uVar16;
            if (uVar16 < 0x19) {
              plVar18 = *(long **)(*(long *)(lVar21 + 8) + (long)(int)uVar16 * 0x50 + 0x68);
              if (((*plVar18 != 0) && ((int)plVar18[1] != -1)) &&
                 ((int)plVar18[1] == *(int *)(*plVar18 + 0x20))) {
                FUN_7103736cf0(plVar18,(undefined1 (*) [12])(plVar30 + 0x74));
              }
            }
            (**(code **)(**(long **)(lVar21 + 8) + 0x58))(*(long **)(lVar21 + 8),(int)fVar83);
            param_3 = extraout_x1_17;
          }
          bVar58 = *(byte *)(plVar30 + 0x76);
        }
        *(byte *)(plVar30 + 0x76) = bVar58 + 1;
      }
      if (*(char *)((long)plVar30 + 0x38c) != '\x04') goto LAB_7102ab61c0;
      FUN_7102abb730((int)plVar30[0x71],plVar30,1);
      *(undefined1 *)((long)plVar30 + 0x3b1) = 0;
      *(undefined1 *)((long)plVar30 + 0x395) = 1;
      *(undefined1 *)((long)plVar30 + 0x381) = 2;
      lVar21 = *plVar30;
    }
    if ((lVar21 == 0) ||
       (FUN_71025ed6c0(fVar7,lVar21 + 0x60), param_3 = extraout_x1_22,
       *(char *)((long)plVar30 + 0x395) != '\0')) {
      FUN_7102abb920(fVar7,(long)plVar30);
      param_3 = extraout_x1_23;
    }
  }
LAB_7102ab61f0:
  lVar21 = *(long *)(param_2 + 0xa80);
  cVar19 = *(char *)(lVar21 + 0x1e1);
  if (cVar19 != '\x04') {
    *(undefined1 *)(lVar21 + 0x1f5) = 0;
    *(float *)(lVar21 + 0x1e4) = *(float *)(lVar21 + 0x1e4) + fVar7;
    if (cVar19 == '\x02') {
      if ((*(char *)(lVar21 + 0x1a0) == '\0') &&
         (bVar15 = FUN_710260ffb0(*(long *)(lVar21 + 8)), param_3 = extraout_x1_24, bVar15)) {
        lVar22 = *(long *)(lVar21 + 8);
        if (lVar22 != 0) {
          if ((*(char *)(lVar22 + 0xe0) != '\0') && (*(long *)(lVar22 + 200) != 0)) {
            *(undefined2 *)(*(long *)(lVar22 + 200) + 0x30) = 0x101;
          }
          if (*(long *)(lVar22 + 0xd8) != 0) {
            *(undefined1 *)(*(long *)(lVar22 + 0xd8) + 0x21) = 1;
          }
          if (*(char *)(lVar22 + 0xe0) != '\0') {
            *(undefined1 *)(*(long *)(lVar22 + 0xb0) + 0x10) = 0;
          }
        }
        plVar30 = *(long **)(**(long **)(lVar21 + 0x210) + 8);
        if (plVar30 != (long *)0x0) {
          param_4 = (long ****)(ulong)*(uint *)(lVar21 + 0x21c);
          (**(code **)(*plVar30 + 0x58))(plVar30,*(undefined4 *)(lVar21 + 0x234));
          param_3 = extraout_x1_25;
        }
        *(undefined1 *)(lVar21 + 0x218) = 0;
        lVar22 = **(long **)(lVar21 + 0x1f8);
        if (*(long *)(lVar22 + 8) != 0) {
          param_4 = (long ****)0x1;
          local_d0._0_4_ = 0.0;
          local_d0._4_4_ = 0.0;
          uVar16 = FUN_7102405040(*(long *)(lVar22 + 8),&local_d0,1,(byte ****)param_5,
                                  (long ****)param_6,param_7,param_8,param_9);
          param_3 = extraout_x1_26;
          if (uVar16 != 0xffffffff) {
            param_4 = (long ****)(ulong)uVar16;
            if (uVar16 < 0x19) {
              plVar30 = *(long **)(*(long *)(lVar22 + 8) + (long)(int)uVar16 * 0x50 + 0x68);
              if (((*plVar30 != 0) && ((int)plVar30[1] != -1)) &&
                 ((int)plVar30[1] == *(int *)(*plVar30 + 0x20))) {
                FUN_7103736cf0(plVar30,(undefined1 (*) [12])(lVar21 + 0x200));
              }
            }
            (**(code **)(**(long **)(lVar22 + 8) + 0x58))(*(long **)(lVar22 + 8),0xf);
            param_3 = extraout_x1_27;
          }
        }
        *(char *)(lVar21 + 0x240) = *(char *)(lVar21 + 0x240) + '\x01';
        *(undefined1 *)(lVar21 + 0x1e1) = 3;
      }
      *(undefined1 *)(lVar21 + 0x1f5) = 1;
    }
    else {
      if (cVar19 != '\x01') {
        if (cVar19 != '\0') goto LAB_7102ab64d0;
        *(undefined1 *)(lVar21 + 0x1f5) = 1;
        *(undefined1 *)(lVar21 + 0x1e1) = 1;
      }
      if (*(char *)(lVar21 + 0x1ec) == '\x02') {
        *(undefined4 *)(lVar21 + 0x1e4) = *(undefined4 *)(lVar21 + 0x1e8);
        lVar22 = *(long *)(lVar21 + 8);
        *(undefined1 *)(lVar21 + 0x1a0) = 0;
        if ((lVar22 != 0) && (*(long *)(lVar21 + 0x110) != 0)) {
          lVar31 = *(long *)(lVar22 + 0xd8);
          if ((lVar31 != 0) &&
             ((*(long *)(lVar22 + 0xd0) != 0 &&
              (bVar15 = FUN_710367c160(0,*(long *)(lVar31 + 8),*(long *)(lVar21 + 0x110)), bVar15)))
             ) {
            *(undefined4 *)(lVar31 + 0x10) = 0;
          }
          lVar22 = *(long *)(lVar21 + 8);
        }
        if (lVar22 == 0) {
          lVar22 = 0;
        }
        else {
          param_4 = (long ****)0x1;
          FUN_71025ee080(lVar22 + 0x60,
                         (byte *)(lVar21 + (ulong)*(byte *)(lVar21 + 0x1a0) * 0x40 + 0x120),1);
          lVar22 = *(long *)(lVar21 + 8);
        }
        FUN_710260fdd0((ulong)*(uint *)(lVar21 + 0x1e4),lVar22,1);
        lVar22 = *(long *)(lVar21 + 8);
        if (lVar22 != 0) {
          if ((*(char *)(lVar22 + 0xe0) != '\0') && (*(long *)(lVar22 + 200) != 0)) {
            *(undefined2 *)(*(long *)(lVar22 + 200) + 0x32) = 0;
          }
          if (*(long *)(lVar22 + 0xd8) != 0) {
            *(undefined1 *)(*(long *)(lVar22 + 0xd8) + 0x22) = 0;
          }
          lVar22 = *(long *)(lVar21 + 8);
          if (lVar22 != 0) {
            if ((*(char *)(lVar22 + 0xe0) != '\0') && (*(long *)(lVar22 + 200) != 0)) {
              *(undefined2 *)(*(long *)(lVar22 + 200) + 0x30) = 0;
            }
            if (*(long *)(lVar22 + 0xd8) != 0) {
              *(undefined1 *)(*(long *)(lVar22 + 0xd8) + 0x21) = 0;
            }
            if (*(char *)(lVar22 + 0xe0) != '\0') {
              *(undefined1 *)(*(long *)(lVar22 + 0xb0) + 0x10) = 1;
            }
          }
        }
        plVar18 = (long *)(*(long **)(lVar21 + 0x10))[1];
        param_3 = extraout_x1_28;
        for (plVar30 = (long *)**(long **)(lVar21 + 0x10); plVar30 != plVar18; plVar30 = plVar30 + 1
            ) {
          lVar22 = *plVar30;
          *(undefined1 *)(lVar22 + 0x128) = 1;
          if (*(long *)(lVar22 + 8) != 0) {
            *(undefined8 *)(*(long *)(lVar22 + 8) + 0xd8) = 0xffffffffffffffff;
            FUN_7100532bc0(*(long *)(lVar22 + 8),0);
            param_3 = extraout_x1_29;
          }
        }
        plVar18 = (long *)(*(long **)(lVar21 + 0x90))[1];
        for (plVar30 = (long *)**(long **)(lVar21 + 0x90); plVar30 != plVar18; plVar30 = plVar30 + 1
            ) {
          lVar22 = *plVar30;
          *(undefined1 *)(lVar22 + 0x128) = 1;
          if (*(long *)(lVar22 + 8) != 0) {
            *(undefined8 *)(*(long *)(lVar22 + 8) + 0xd8) = 0xffffffffffffffff;
            FUN_7100532bc0(*(long *)(lVar22 + 8),0);
            param_3 = extraout_x1_30;
          }
        }
        *(undefined1 *)(lVar21 + 0x1f5) = 1;
        *(undefined1 *)(lVar21 + 0x1e1) = 2;
      }
    }
LAB_7102ab64d0:
    if (*(char *)(lVar21 + 0x1a0) == '\x01') {
      FUN_7102ac02a0(lVar21,param_3,param_4,(byte ****)param_5,(long ****)param_6,param_7,param_8,
                     param_9);
      if (*(char *)(lVar21 + 0x1ec) != '\x02') goto LAB_7102ab6840;
      plVar30 = (long *)(lVar21 + 8);
      lVar22 = *plVar30;
      *(undefined1 *)(lVar21 + 0x1a0) = 0;
      *(undefined4 *)(lVar21 + 0x1e4) = *(undefined4 *)(lVar21 + 0x1e8);
      if ((lVar22 != 0) && (*(long *)(lVar21 + 0x110) != 0)) {
        lVar31 = *(long *)(lVar22 + 0xd8);
        if ((lVar31 != 0) &&
           ((*(long *)(lVar22 + 0xd0) != 0 &&
            (bVar15 = FUN_710367c160(0,*(long *)(lVar31 + 8),*(long *)(lVar21 + 0x110)), bVar15))))
        {
          *(undefined4 *)(lVar31 + 0x10) = 0;
        }
        lVar22 = *plVar30;
      }
      if (lVar22 == 0) {
        lVar22 = 0;
      }
      else {
        param_4 = (long ****)0x1;
        FUN_71025ee080(lVar22 + 0x60,
                       (byte *)(lVar21 + (ulong)*(byte *)(lVar21 + 0x1a0) * 0x40 + 0x120),1);
        lVar22 = *(long *)(lVar21 + 8);
      }
      FUN_710260fdd0((ulong)*(uint *)(lVar21 + 0x1e4),lVar22,1);
      lVar22 = *(long *)(lVar21 + 8);
      if (lVar22 != 0) {
        if ((*(char *)(lVar22 + 0xe0) != '\0') && (*(long *)(lVar22 + 200) != 0)) {
          *(undefined2 *)(*(long *)(lVar22 + 200) + 0x32) = 0;
        }
        if (*(long *)(lVar22 + 0xd8) != 0) {
          *(undefined1 *)(*(long *)(lVar22 + 0xd8) + 0x22) = 0;
        }
        lVar22 = *plVar30;
        if (lVar22 != 0) {
          if ((*(char *)(lVar22 + 0xe0) != '\0') && (*(long *)(lVar22 + 200) != 0)) {
            *(undefined2 *)(*(long *)(lVar22 + 200) + 0x30) = 0;
          }
          if (*(long *)(lVar22 + 0xd8) != 0) {
            *(undefined1 *)(*(long *)(lVar22 + 0xd8) + 0x21) = 0;
          }
          if (*(char *)(lVar22 + 0xe0) != '\0') {
            *(undefined1 *)(*(long *)(lVar22 + 0xb0) + 0x10) = 1;
          }
        }
      }
      *(undefined2 *)(lVar21 + 500) = 0x100;
      *(undefined1 *)(lVar21 + 0x240) = 2;
      cVar19 = '\x01';
      *(undefined1 *)(lVar21 + 0x280) = 0;
      lVar22 = *plVar30;
      if (lVar22 == 0) goto LAB_7102ab6864;
LAB_7102ab6854:
      FUN_71025ed6c0(fVar7,lVar22 + 0x60);
      cVar19 = *(char *)(lVar21 + 0x1f5);
    }
    else if (*(char *)(lVar21 + 0x1a0) == '\0') {
      if (*(char *)(lVar21 + 500) == '\0') {
        fVar83 = *(float *)(lVar21 + 0x1e8);
        uVar33 = SUB41(fVar83,0);
        uVar34 = (undefined1)((uint)fVar83 >> 8);
        uVar35 = (undefined1)((uint)fVar83 >> 0x10);
        uVar36 = (undefined1)((uint)fVar83 >> 0x18);
        if (4800.0 <= fVar83) {
          FUN_71025efd10((long ***)&local_d0,
                         (long *)(*(long *)(*(long *)(lVar21 + 0x288) + 800) + 0x48),
                         *(uint *)(lVar21 + 0x1f0),(byte ****)0x0,(long ****)param_6,param_7,param_8
                         ,param_9);
          if (local_c0 != 0) {
            *(long *)CONCAT44(uStack_c4,uStack_c8) = CONCAT44(local_d0._4_4_,(float)local_d0);
            *(long **)(CONCAT44(local_d0._4_4_,(float)local_d0) + 8) =
                 (long *)CONCAT44(uStack_c4,uStack_c8);
            *(long *)(local_c0 + 0x10) = *(long *)(local_c0 + 0x10) + -1;
            uStack_c8 = 0;
            uStack_c4 = 0;
            local_c0 = 0;
            local_d0._0_4_ = 0.0;
            local_d0._4_4_ = 0.0;
          }
          FUN_71025efd10(&local_e8,(long *)(*(long *)(*(long *)(lVar21 + 0x288) + 800) + 0x48),
                         *(uint *)(lVar21 + 0x1f0),(byte ****)0x1,(long ****)param_6,param_7,param_8
                         ,param_9);
          if (local_d8 != 0) {
            *local_e0 = (long)local_e8;
            local_e8[1] = local_e0;
            *(long *)(local_d8 + 0x10) = *(long *)(local_d8 + 0x10) + -1;
            local_e0 = (long *)0x0;
            local_d8 = 0;
            local_e8 = (long **)0x0;
          }
          FUN_71025efd10(&local_100,(long *)(*(long *)(*(long *)(lVar21 + 0x288) + 800) + 0x48),
                         *(uint *)(lVar21 + 0x1f0),(byte ****)0x2,(long ****)param_6,param_7,param_8
                         ,param_9);
          if (local_f0 != 0) {
            *local_f8 = (long)local_100;
            local_100[1] = local_f8;
            *(long *)(local_f0 + 0x10) = *(long *)(local_f0 + 0x10) + -1;
            local_f8 = (long *)0x0;
            local_f0 = 0;
            local_100 = (long **)0x0;
          }
          param_4 = (long ****)(ulong)*(uint *)(lVar21 + 0x1f0);
          param_5 = (undefined1 (*) [16])0x3;
          FUN_71025efd10(&local_118,(long *)(*(long *)(*(long *)(lVar21 + 0x288) + 800) + 0x48),
                         *(uint *)(lVar21 + 0x1f0),(byte ****)0x3,(long ****)param_6,param_7,param_8
                         ,param_9);
          if (local_108 != 0) {
            *local_110 = (long)local_118;
            local_118[1] = local_110;
            *(long *)(local_108 + 0x10) = *(long *)(local_108 + 0x10) + -1;
            local_110 = (long *)0x0;
            local_108 = 0;
            local_118 = (long **)0x0;
          }
          *(char *)(lVar21 + 500) = *(char *)(lVar21 + 500) + '\x01';
          param_3 = extraout_x1_31;
          goto LAB_7102ab6618;
        }
      }
      else {
LAB_7102ab6618:
        uVar20 = *(undefined4 *)(lVar21 + 0x1e8);
        uVar33 = (undefined1)uVar20;
        uVar34 = (undefined1)((uint)uVar20 >> 8);
        uVar35 = (undefined1)((uint)uVar20 >> 0x10);
        uVar36 = (undefined1)((uint)uVar20 >> 0x18);
      }
      if (5050.0 <= (float)CONCAT13(uVar36,CONCAT12(uVar35,CONCAT11(uVar34,uVar33)))) {
        param_4 = (long ****)0x1;
        FUN_71025f4d80((long *)**(undefined8 **)(lVar21 + 0x10),
                       (long *)(*(undefined8 **)(lVar21 + 0x10))[1],1);
        uVar20 = *(undefined4 *)(lVar21 + 0x1e8);
        uVar33 = (undefined1)uVar20;
        uVar34 = (undefined1)((uint)uVar20 >> 8);
        uVar35 = (undefined1)((uint)uVar20 >> 0x10);
        uVar36 = (undefined1)((uint)uVar20 >> 0x18);
        param_3 = extraout_x1_32;
      }
      if (4900.0 <= (float)CONCAT13(uVar36,CONCAT12(uVar35,CONCAT11(uVar34,uVar33)))) {
        plVar30 = *(long **)(*(long *)(lVar21 + 0x10) + 0x18);
        plVar18 = *(long **)(*(long *)(lVar21 + 0x10) + 0x20);
        if (plVar30 != plVar18) {
          bVar58 = *(byte *)(lVar21 + 0x1a1);
          plVar26 = plVar30;
          do {
            lVar22 = *plVar26;
            uVar16 = 0x811c9dc5;
            pbVar13 = (byte *)(lVar21 + 0x1a2);
            bVar59 = bVar58;
            while (bVar59 != 0) {
              uVar16 = uVar16 * 0x89 ^ (uint)bVar59;
              bVar59 = *pbVar13;
              pbVar13 = pbVar13 + 1;
            }
            if ((*(uint *)(lVar22 + 0x18) == uVar16) &&
               (iVar17 = strcmp((char *)(lVar22 + 0x20),(char *)(lVar21 + 0x1a1)),
               param_3 = extraout_x1_33, iVar17 == 0)) {
              if ((lVar22 != 0) && (lVar22 = *(long *)(*(long *)(lVar22 + 8) + 0x108), lVar22 != 0))
              {
                *(undefined1 *)(lVar22 + 0x44) = 0;
                plVar30 = *(long **)(*(long *)(lVar21 + 0x10) + 0x18);
                plVar18 = *(long **)(*(long *)(lVar21 + 0x10) + 0x20);
                if (plVar30 == plVar18) goto LAB_7102ab673c;
                goto LAB_7102ab66dc;
              }
              break;
            }
            plVar26 = plVar26 + 1;
          } while (plVar26 != plVar18);
          if (plVar30 != plVar18) {
LAB_7102ab66dc:
            bVar58 = *(byte *)(lVar21 + 0x1c1);
            do {
              lVar22 = *plVar30;
              uVar16 = 0x811c9dc5;
              pbVar13 = (byte *)(lVar21 + 0x1c2);
              bVar59 = bVar58;
              while (bVar59 != 0) {
                uVar16 = uVar16 * 0x89 ^ (uint)bVar59;
                bVar59 = *pbVar13;
                pbVar13 = pbVar13 + 1;
              }
              if ((*(uint *)(lVar22 + 0x18) == uVar16) &&
                 (iVar17 = strcmp((char *)(lVar22 + 0x20),(char *)(lVar21 + 0x1c1)),
                 param_3 = extraout_x1_34, iVar17 == 0)) {
                if ((lVar22 != 0) &&
                   (lVar22 = *(long *)(*(long *)(lVar22 + 8) + 0x108), lVar22 != 0)) {
                  *(undefined1 *)(lVar22 + 0x44) = 0;
                }
                break;
              }
              plVar30 = plVar30 + 1;
            } while (plVar30 != plVar18);
          }
        }
      }
LAB_7102ab673c:
      FUN_7102ac02a0(lVar21,param_3,param_4,(byte ****)param_5,(long ****)param_6,param_7,param_8,
                     param_9);
      if (*(char *)(lVar21 + 0x1ec) != '\x04') goto LAB_7102ab6840;
      plVar30 = (long *)(lVar21 + 8);
      lVar22 = *plVar30;
      *(undefined1 *)(lVar21 + 0x1a0) = 1;
      *(undefined4 *)(lVar21 + 0x1e4) = *(undefined4 *)(lVar21 + 0x1e8);
      if ((lVar22 != 0) && (*(long *)(lVar21 + 0x118) != 0)) {
        lVar31 = *(long *)(lVar22 + 0xd8);
        if ((lVar31 != 0) &&
           ((*(long *)(lVar22 + 0xd0) != 0 &&
            (bVar15 = FUN_710367c160(0,*(long *)(lVar31 + 8),*(long *)(lVar21 + 0x118)), bVar15))))
        {
          *(undefined4 *)(lVar31 + 0x10) = 0;
        }
        lVar22 = *plVar30;
      }
      if (lVar22 == 0) {
        lVar22 = 0;
      }
      else {
        param_4 = (long ****)0x1;
        FUN_71025ee080(lVar22 + 0x60,
                       (byte *)(lVar21 + (ulong)*(byte *)(lVar21 + 0x1a0) * 0x40 + 0x120),1);
        lVar22 = *(long *)(lVar21 + 8);
      }
      FUN_710260fdd0((ulong)*(uint *)(lVar21 + 0x1e4),lVar22,1);
      lVar22 = *(long *)(lVar21 + 8);
      if (lVar22 != 0) {
        if ((*(char *)(lVar22 + 0xe0) != '\0') && (*(long *)(lVar22 + 200) != 0)) {
          *(undefined2 *)(*(long *)(lVar22 + 200) + 0x32) = 0;
        }
        if (*(long *)(lVar22 + 0xd8) != 0) {
          *(undefined1 *)(*(long *)(lVar22 + 0xd8) + 0x22) = 0;
        }
        lVar22 = *plVar30;
        if (lVar22 != 0) {
          if ((*(char *)(lVar22 + 0xe0) != '\0') && (*(long *)(lVar22 + 200) != 0)) {
            *(undefined2 *)(*(long *)(lVar22 + 200) + 0x30) = 0;
          }
          if (*(long *)(lVar22 + 0xd8) != 0) {
            *(undefined1 *)(*(long *)(lVar22 + 0xd8) + 0x21) = 0;
          }
          if (*(char *)(lVar22 + 0xe0) != '\0') {
            *(undefined1 *)(*(long *)(lVar22 + 0xb0) + 0x10) = 1;
          }
        }
      }
      plVar24 = *(long **)(lVar21 + 0x10);
      plVar18 = (long *)*plVar24;
      plVar26 = (long *)plVar24[1];
      if (plVar18 != plVar26) {
        do {
          lVar22 = *plVar18;
          *(undefined1 *)(lVar22 + 0x128) = 1;
          if (*(long *)(lVar22 + 8) != 0) {
            *(undefined8 *)(*(long *)(lVar22 + 8) + 0xd8) = 0xffffffffffffffff;
            FUN_7100532bc0(*(long *)(lVar22 + 8),0);
          }
          plVar18 = plVar18 + 1;
        } while (plVar26 != plVar18);
        plVar24 = *(long **)(lVar21 + 0x10);
      }
      plVar18 = (long *)plVar24[3];
      plVar26 = (long *)plVar24[4];
      if (plVar18 != plVar26) {
        bVar58 = *(byte *)(lVar21 + 0x1a1);
        plVar24 = plVar18;
        do {
          lVar22 = *plVar24;
          uVar16 = 0x811c9dc5;
          pbVar13 = (byte *)(lVar21 + 0x1a2);
          bVar59 = bVar58;
          while (bVar59 != 0) {
            uVar16 = uVar16 * 0x89 ^ (uint)bVar59;
            bVar59 = *pbVar13;
            pbVar13 = pbVar13 + 1;
          }
          if ((*(uint *)(lVar22 + 0x18) == uVar16) &&
             (iVar17 = strcmp((char *)(lVar22 + 0x20),(char *)(lVar21 + 0x1a1)), iVar17 == 0)) {
            if ((lVar22 != 0) && (lVar22 = *(long *)(*(long *)(lVar22 + 8) + 0x108), lVar22 != 0)) {
              *(undefined1 *)(lVar22 + 0x44) = 1;
              plVar18 = *(long **)(*(long *)(lVar21 + 0x10) + 0x18);
              plVar26 = *(long **)(*(long *)(lVar21 + 0x10) + 0x20);
              if (plVar18 == plVar26) goto LAB_7102ab7a18;
              goto LAB_7102ab79b8;
            }
            break;
          }
          plVar24 = plVar24 + 1;
        } while (plVar24 != plVar26);
        if (plVar18 != plVar26) {
LAB_7102ab79b8:
          bVar58 = *(byte *)(lVar21 + 0x1c1);
          do {
            lVar22 = *plVar18;
            uVar16 = 0x811c9dc5;
            pbVar13 = (byte *)(lVar21 + 0x1c2);
            bVar59 = bVar58;
            while (bVar59 != 0) {
              uVar16 = uVar16 * 0x89 ^ (uint)bVar59;
              bVar59 = *pbVar13;
              pbVar13 = pbVar13 + 1;
            }
            if ((*(uint *)(lVar22 + 0x18) == uVar16) &&
               (iVar17 = strcmp((char *)(lVar22 + 0x20),(char *)(lVar21 + 0x1c1)), iVar17 == 0)) {
              if ((lVar22 != 0) && (lVar22 = *(long *)(*(long *)(lVar22 + 8) + 0x108), lVar22 != 0))
              {
                *(undefined1 *)(lVar22 + 0x44) = 1;
              }
              break;
            }
            plVar18 = plVar18 + 1;
          } while (plVar18 != plVar26);
        }
      }
LAB_7102ab7a18:
      cVar19 = '\x01';
      *(undefined1 *)(lVar21 + 0x1f5) = 1;
      *(undefined1 *)(lVar21 + 0x1e1) = 2;
      lVar22 = *plVar30;
joined_r0x007102ab6850:
      if (lVar22 != 0) goto LAB_7102ab6854;
    }
    else {
LAB_7102ab6840:
      cVar19 = *(char *)(lVar21 + 0x1f5);
      if (cVar19 != '\0') {
        lVar22 = *(long *)(lVar21 + 8);
        goto joined_r0x007102ab6850;
      }
    }
LAB_7102ab6864:
    if (cVar19 != '\0') {
      uStack_c8 = 0;
      uStack_c4 = 0;
      local_d0._0_4_ = 1.0;
      local_d0._4_4_ = 0.0;
      uStack_b8 = 0;
      local_c0 = 0x3f80000000000000;
      uStack_a8 = 0x3f800000;
      local_b0 = 0;
      uStack_98 = 0;
      uStack_97 = 0x3f800000000000;
      local_a0 = 0;
      FUN_710314fa90(lVar21 + 0x20,&local_d0);
      auVar50[8] = uStack_98;
      auVar50._0_8_ = local_a0;
      plVar30 = (long *)**(long **)(lVar21 + 0x10);
      plVar18 = (long *)(*(long **)(lVar21 + 0x10))[1];
      auVar50[9] = (char)uStack_97;
      auVar50[10] = (char)((uint7)uStack_97 >> 8);
      auVar50[0xb] = (char)((uint7)uStack_97 >> 0x10);
      auVar50[0xc] = (char)((uint7)uStack_97 >> 0x18);
      auVar50[0xd] = (char)((uint7)uStack_97 >> 0x20);
      auVar50[0xe] = (char)((uint7)uStack_97 >> 0x28);
      auVar50[0xf] = (char)((uint7)uStack_97 >> 0x30);
      auVar50 = NEON_ext(ZEXT816(0),auVar50,8,1);
      auVar50 = NEON_ext(auVar50,auVar50,8,1);
      if (plVar30 != plVar18) {
        do {
          lVar22 = *plVar30;
          if (*(char *)(lVar22 + 0x128) == '\0' ||
              (*(char *)(*(long *)(lVar22 + 8) + 0xe8) != '\0' ||
              *(char *)(*(long *)(lVar22 + 8) + 0xe7) != '\0')) {
            *(undefined1 *)(lVar22 + 0x129) = 1;
LAB_7102ab6928:
            *(long *)(lVar22 + 0x18) = auVar50._8_8_;
            *(long *)(lVar22 + 0x10) = auVar50._0_8_;
          }
          else if ((1e-05 < ABS(*(float *)(lVar22 + 0x10) - (float)local_a0)) ||
                  (1e-05 < ABS(*(float *)(lVar22 + 0x14) - (float)((ulong)local_a0 >> 0x20)))) {
            *(undefined1 *)(lVar22 + 0x12a) = 1;
            goto LAB_7102ab6928;
          }
          if (1e-05 <= ABS(*(float *)(lVar22 + 0x30))) {
            *(undefined4 *)(lVar22 + 0x30) = 0;
            *(undefined1 *)(lVar22 + 0x129) = 1;
          }
          fVar83 = *(float *)(lVar22 + 0x50);
          fVar77 = *(float *)(lVar22 + 0x54);
          uVar20 = *(undefined4 *)(lVar22 + 0x58);
          uVar8 = *(undefined4 *)(lVar22 + 0x5c);
          if (1e-05 <= ABS(fVar83 + -1.0)) {
            fVar83 = 1.0;
            *(undefined1 *)(lVar22 + 0x129) = 1;
            *(undefined4 *)(lVar22 + 0x58) = uVar20;
            *(undefined4 *)(lVar22 + 0x5c) = uVar8;
            *(undefined4 *)(lVar22 + 0x50) = 0x3f800000;
            *(float *)(lVar22 + 0x54) = fVar77;
          }
          if (1e-05 <= ABS(fVar77 + -1.0)) {
            *(undefined1 *)(lVar22 + 0x129) = 1;
            *(undefined4 *)(lVar22 + 0x58) = uVar20;
            *(undefined4 *)(lVar22 + 0x5c) = uVar8;
            *(ulong *)(lVar22 + 0x50) = CONCAT44(0x3f800000,fVar83);
          }
          plVar30 = plVar30 + 1;
        } while (plVar18 != plVar30);
      }
      FUN_710314fa90(lVar21 + 0xa0,&local_d0);
      plVar30 = (long *)**(long **)(lVar21 + 0x90);
      plVar18 = (long *)(*(long **)(lVar21 + 0x90))[1];
      if (plVar30 != plVar18) {
        auVar74[8] = uStack_98;
        auVar74._0_8_ = local_a0;
        auVar74[9] = (char)uStack_97;
        auVar74[10] = (char)((uint7)uStack_97 >> 8);
        auVar74[0xb] = (char)((uint7)uStack_97 >> 0x10);
        auVar74[0xc] = (char)((uint7)uStack_97 >> 0x18);
        auVar74[0xd] = (char)((uint7)uStack_97 >> 0x20);
        auVar74[0xe] = (char)((uint7)uStack_97 >> 0x28);
        auVar74[0xf] = (char)((uint7)uStack_97 >> 0x30);
        auVar50 = NEON_ext(auVar50,auVar74,8,1);
        auVar50 = NEON_ext(auVar50,auVar50,8,1);
        do {
          lVar21 = *plVar30;
          if (*(char *)(lVar21 + 0x128) == '\0' ||
              (*(char *)(*(long *)(lVar21 + 8) + 0xe8) != '\0' ||
              *(char *)(*(long *)(lVar21 + 8) + 0xe7) != '\0')) {
            *(undefined1 *)(lVar21 + 0x129) = 1;
LAB_7102ab6a2c:
            *(long *)(lVar21 + 0x18) = auVar50._8_8_;
            *(long *)(lVar21 + 0x10) = auVar50._0_8_;
          }
          else if ((1e-05 < ABS(*(float *)(lVar21 + 0x10) - (float)local_a0)) ||
                  (1e-05 < ABS(*(float *)(lVar21 + 0x14) - (float)((ulong)local_a0 >> 0x20)))) {
            *(undefined1 *)(lVar21 + 0x12a) = 1;
            goto LAB_7102ab6a2c;
          }
          if (1e-05 <= ABS(*(float *)(lVar21 + 0x30))) {
            *(undefined4 *)(lVar21 + 0x30) = 0;
            *(undefined1 *)(lVar21 + 0x129) = 1;
          }
          fVar83 = *(float *)(lVar21 + 0x50);
          fVar77 = *(float *)(lVar21 + 0x54);
          uVar20 = *(undefined4 *)(lVar21 + 0x58);
          uVar8 = *(undefined4 *)(lVar21 + 0x5c);
          if (1e-05 <= ABS(fVar83 + -1.0)) {
            fVar83 = 1.0;
            *(undefined1 *)(lVar21 + 0x129) = 1;
            *(undefined4 *)(lVar21 + 0x58) = uVar20;
            *(undefined4 *)(lVar21 + 0x5c) = uVar8;
            *(undefined4 *)(lVar21 + 0x50) = 0x3f800000;
            *(float *)(lVar21 + 0x54) = fVar77;
          }
          if (1e-05 <= ABS(fVar77 + -1.0)) {
            *(undefined1 *)(lVar21 + 0x129) = 1;
            *(undefined4 *)(lVar21 + 0x58) = uVar20;
            *(undefined4 *)(lVar21 + 0x5c) = uVar8;
            *(float *)(lVar21 + 0x50) = fVar83;
            *(undefined4 *)(lVar21 + 0x54) = 0x3f800000;
          }
          plVar30 = plVar30 + 1;
        } while (plVar18 != plVar30);
      }
    }
  }
  *(undefined4 *)(*(long *)(*(long *)(param_2 + 0x318) + 0x10) + 0x48) =
       *(undefined4 *)(param_2 + 0xa4c);
  lVar21 = *(long *)(param_2 + 0x318);
  local_d0._0_4_ = *(float *)(param_2 + 0xa4c);
  uVar33 = SUB41((float)local_d0,0);
  uVar34 = (undefined1)((uint)(float)local_d0 >> 8);
  uVar35 = (undefined1)((uint)(float)local_d0 >> 0x10);
  uVar36 = (undefined1)((uint)(float)local_d0 >> 0x18);
  lVar22 = *(long *)(lVar21 + 0x40);
  if (lVar22 != 0) {
    plVar30 = *(long **)(lVar22 + 0x10);
    if ((plVar30 != (long *)0x0) && (uVar16 = *(uint *)(*plVar30 + 4), uVar16 != 0)) {
      if ((float)local_d0 < 0.0) {
        uVar33 = 0;
        uVar34 = 0;
        uVar35 = 0;
        uVar36 = 0;
        local_d0._0_4_ = 0.0;
      }
      if (*(char *)(lVar22 + 0x21) == '\0') {
        fVar83 = (float)uVar16;
        local_e8 = (long **)CONCAT44(local_e8._4_4_,fVar83);
        ppplVar1 = &local_e8;
        if ((float)CONCAT13(uVar36,CONCAT12(uVar35,CONCAT11(uVar34,uVar33))) == fVar83 ||
            (float)CONCAT13(uVar36,CONCAT12(uVar35,CONCAT11(uVar34,uVar33))) < fVar83) {
          ppplVar1 = (long ***)&local_d0;
        }
        fVar83 = *(float *)ppplVar1;
        *(float *)(lVar22 + 0x1c) = fVar83;
        uVar33 = SUB41(fVar83,0);
        uVar34 = (undefined1)((uint)fVar83 >> 8);
        uVar35 = (undefined1)((uint)fVar83 >> 0x10);
        uVar36 = (undefined1)((uint)fVar83 >> 0x18);
      }
      else {
        fVar83 = fmodf((float)CONCAT13(uVar36,CONCAT12(uVar35,CONCAT11(uVar34,uVar33))),
                       (float)uVar16);
        uVar33 = SUB41(fVar83,0);
        uVar34 = (undefined1)((uint)fVar83 >> 8);
        uVar35 = (undefined1)((uint)fVar83 >> 0x10);
        uVar36 = (undefined1)((uint)fVar83 >> 0x18);
        plVar30 = *(long **)(lVar22 + 0x10);
        *(float *)(lVar22 + 0x1c) = fVar83;
        if (plVar30 == (long *)0x0) goto LAB_7102ab6b2c;
      }
      *(int *)(*plVar30 + 0x40) =
           (int)(float)CONCAT13(uVar36,CONCAT12(uVar35,CONCAT11(uVar34,uVar33)));
    }
LAB_7102ab6b2c:
    uVar20 = *(undefined4 *)(param_2 + 0xa4c);
    uVar33 = (undefined1)uVar20;
    uVar34 = (undefined1)((uint)uVar20 >> 8);
    uVar35 = (undefined1)((uint)uVar20 >> 0x10);
    uVar36 = (undefined1)((uint)uVar20 >> 0x18);
    lVar21 = *(long *)(param_2 + 0x318);
  }
  lVar21 = *(long *)(lVar21 + 0x48);
  if (lVar21 == 0) {
    uVar20 = CONCAT13(uVar36,CONCAT12(uVar35,CONCAT11(uVar34,uVar33)));
  }
  else {
    local_d0._0_4_ = (float)CONCAT13(uVar36,CONCAT12(uVar35,CONCAT11(uVar34,uVar33)));
    plVar30 = *(long **)(lVar21 + 0x10);
    if ((plVar30 != (long *)0x0) && (uVar16 = *(uint *)(*plVar30 + 4), uVar16 != 0)) {
      if (!NAN((float)CONCAT13(uVar36,CONCAT12(uVar35,CONCAT11(uVar34,uVar33)))) &&
          (float)CONCAT13(uVar36,CONCAT12(uVar35,CONCAT11(uVar34,uVar33))) < 0.0) {
        uVar33 = 0;
        uVar34 = 0;
        uVar35 = 0;
        uVar36 = 0;
        local_d0._0_4_ = 0.0;
      }
      if (*(char *)(lVar21 + 0x21) == '\0') {
        fVar83 = (float)uVar16;
        local_e8 = (long **)CONCAT44(local_e8._4_4_,fVar83);
        ppplVar1 = &local_e8;
        if ((float)CONCAT13(uVar36,CONCAT12(uVar35,CONCAT11(uVar34,uVar33))) == fVar83 ||
            (float)CONCAT13(uVar36,CONCAT12(uVar35,CONCAT11(uVar34,uVar33))) < fVar83) {
          ppplVar1 = (long ***)&local_d0;
        }
        fVar83 = *(float *)ppplVar1;
        *(float *)(lVar21 + 0x1c) = fVar83;
        uVar33 = SUB41(fVar83,0);
        uVar34 = (undefined1)((uint)fVar83 >> 8);
        uVar35 = (undefined1)((uint)fVar83 >> 0x10);
        uVar36 = (undefined1)((uint)fVar83 >> 0x18);
      }
      else {
        fVar83 = fmodf((float)CONCAT13(uVar36,CONCAT12(uVar35,CONCAT11(uVar34,uVar33))),
                       (float)uVar16);
        uVar33 = SUB41(fVar83,0);
        uVar34 = (undefined1)((uint)fVar83 >> 8);
        uVar35 = (undefined1)((uint)fVar83 >> 0x10);
        uVar36 = (undefined1)((uint)fVar83 >> 0x18);
        plVar30 = *(long **)(lVar21 + 0x10);
        *(float *)(lVar21 + 0x1c) = fVar83;
        if (plVar30 == (long *)0x0) goto LAB_7102ab6bbc;
      }
      *(int *)(*plVar30 + 0x40) =
           (int)(float)CONCAT13(uVar36,CONCAT12(uVar35,CONCAT11(uVar34,uVar33)));
    }
LAB_7102ab6bbc:
    uVar20 = *(undefined4 *)(param_2 + 0xa4c);
  }
  *(undefined4 *)(*(long *)(param_2 + 0xa90) + 0xf8) = uVar20;
  *(undefined4 *)(*(long *)(param_2 + 0xa88) + 0x1c4) = *(undefined4 *)(param_2 + 0xa4c);
  *(undefined4 *)(*(long *)(param_2 + 0xa78) + 0x388) = *(undefined4 *)(param_2 + 0xa4c);
  *(undefined4 *)(*(long *)(param_2 + 0xa80) + 0x1e8) = *(undefined4 *)(param_2 + 0xa4c);
  *(undefined1 *)(*(long *)(param_2 + 0xa90) + 0xfc) = *(undefined1 *)(param_2 + 0xa54);
  *(undefined1 *)(*(long *)(param_2 + 0xa88) + 0x1c8) = *(undefined1 *)(param_2 + 0xa54);
  *(undefined1 *)(*(long *)(param_2 + 0xa78) + 0x38c) = *(undefined1 *)(param_2 + 0xa54);
  *(undefined1 *)(*(long *)(param_2 + 0xa80) + 0x1ec) = *(undefined1 *)(param_2 + 0xa54);
  uStack_c8 = 0;
  uStack_c4 = 0;
  local_d0._0_4_ = 1.0;
  local_d0._4_4_ = 0.0;
  uStack_b8 = 0;
  local_c0 = 0x3f80000000000000;
  uStack_a8 = 0x3f800000;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_97 = 0x3f800000000000;
  local_a0 = 0;
  plVar30 = (long *)(*(long *)(param_2 + 0xa78) + 0xa0);
  (**(code **)(*plVar30 + 0x10))(plVar30,&local_d0);
  lVar21 = *(long *)(param_2 + 0xa88);
  *(ulong *)(lVar21 + 0x188) = CONCAT44(uStack_c4,uStack_c8);
  *(ulong *)(lVar21 + 0x180) = CONCAT44(local_d0._4_4_,(float)local_d0);
  *(undefined8 *)(lVar21 + 0x198) = uStack_b8;
  *(long *)(lVar21 + 400) = local_c0;
  *(undefined8 *)(lVar21 + 0x1a8) = uStack_a8;
  *(undefined8 *)(lVar21 + 0x1a0) = local_b0;
  *(ulong *)(lVar21 + 0x1b8) = CONCAT71(uStack_97,uStack_98);
  *(undefined8 *)(lVar21 + 0x1b0) = local_a0;
  uStack_c8 = 0;
  uStack_c4 = 0;
  local_d0._0_4_ = 1.0;
  local_d0._4_4_ = 0.0;
  uStack_b8 = 0;
  local_c0 = 0x3f80000000000000;
  uStack_a8 = 0x3f800000;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_97 = 0x3f800000000000;
  local_a0 = 0;
  (**(code **)(*(long *)(*(long *)(param_2 + 0xa78) + 0x110) + 0x10))
            (*(long *)(param_2 + 0xa78) + 0x110,&local_d0);
  lVar21 = *(long *)(param_2 + 0xa90);
  *(ulong *)(lVar21 + 0xb8) = CONCAT44(uStack_c4,uStack_c8);
  *(ulong *)(lVar21 + 0xb0) = CONCAT44(local_d0._4_4_,(float)local_d0);
  *(undefined8 *)(lVar21 + 200) = uStack_b8;
  *(long *)(lVar21 + 0xc0) = local_c0;
  *(undefined8 *)(lVar21 + 0xd8) = uStack_a8;
  *(undefined8 *)(lVar21 + 0xd0) = local_b0;
  *(ulong *)(lVar21 + 0xe8) = CONCAT71(uStack_97,uStack_98);
  *(undefined8 *)(lVar21 + 0xe0) = local_a0;
  uStack_c8 = 0;
  uStack_c4 = 0;
  local_d0._0_4_ = 1.0;
  local_d0._4_4_ = 0.0;
  uStack_b8 = 0;
  local_c0 = 0x3f80000000000000;
  uStack_a8 = 0x3f800000;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_97 = 0x3f800000000000;
  local_a0 = 0;
  (**(code **)(*(long *)(*(long *)(param_2 + 0xa78) + 0x180) + 0x10))
            (*(long *)(param_2 + 0xa78) + 0x180,&local_d0);
  lVar21 = *(long *)(param_2 + 0xa98);
  *(ulong *)(lVar21 + 0x28) = CONCAT44(uStack_c4,uStack_c8);
  *(ulong *)(lVar21 + 0x20) = CONCAT44(local_d0._4_4_,(float)local_d0);
  *(undefined8 *)(lVar21 + 0x38) = uStack_b8;
  *(long *)(lVar21 + 0x30) = local_c0;
  *(undefined8 *)(lVar21 + 0x48) = uStack_a8;
  *(undefined8 *)(lVar21 + 0x40) = local_b0;
  *(ulong *)(lVar21 + 0x58) = CONCAT71(uStack_97,uStack_98);
  *(undefined8 *)(lVar21 + 0x50) = local_a0;
  FUN_7102abec80(fVar7,*(long *)(param_2 + 0xa90));
  lVar21 = *(long *)(param_2 + 0xa88);
  uVar27 = extraout_x1_35;
  switch(*(undefined1 *)(lVar21 + 0x1c0)) {
  case 0:
    *(undefined1 *)(lVar21 + 0x1c0) = 1;
  case 1:
    if ((0.0 < fVar7) && (*(char *)(lVar21 + 0x1c8) == '\x02')) {
      lVar22 = *(long *)(lVar21 + 0x10);
      if (lVar22 != 0) {
        if ((*(char *)(lVar22 + 0xe0) != '\0') && (*(long *)(lVar22 + 200) != 0)) {
          *(undefined2 *)(*(long *)(lVar22 + 200) + 0x30) = 0;
        }
        if (*(long *)(lVar22 + 0xd8) != 0) {
          *(undefined1 *)(*(long *)(lVar22 + 0xd8) + 0x21) = 0;
        }
        if (*(char *)(lVar22 + 0xe0) != '\0') {
          *(undefined1 *)(*(long *)(lVar22 + 0xb0) + 0x10) = 1;
        }
      }
      plVar30 = *(long **)(**(long **)(lVar21 + 0x1d8) + 8);
      if (plVar30 != (long *)0x0) {
        param_4 = (long ****)&DAT_ffffffff;
        (**(code **)(*plVar30 + 0x58))(plVar30,0);
      }
      plVar30 = *(long **)(**(long **)(lVar21 + 0x1e0) + 8);
      if (plVar30 != (long *)0x0) {
        param_4 = (long ****)(ulong)*(uint *)(lVar21 + 0x1ec);
        (**(code **)(*plVar30 + 0x58))(plVar30,*(undefined4 *)(lVar21 + 0x200));
      }
      *(undefined1 *)(lVar21 + 0x1e8) = 1;
      *(undefined1 *)(*(long *)(lVar21 + 0x1d0) + 0x140) = 0;
      uVar33 = 2;
LAB_7102ab6f64:
      *(undefined1 *)(lVar21 + 0x1c0) = uVar33;
    }
    break;
  case 2:
    if ((((*(long *)(lVar21 + 0x10) != 0) &&
         (lVar22 = *(long *)(*(long *)(lVar21 + 0x10) + 0xd8), lVar22 != 0)) &&
        (480.0 <= *(float *)(lVar22 + 0x10))) && (*(char *)(lVar21 + 0x210) == '\0')) {
      plVar30 = *(long **)(**(long **)(lVar21 + 0x1e0) + 8);
      if (plVar30 != (long *)0x0) {
        param_4 = (long ****)(ulong)*(uint *)(lVar21 + 0x1ec);
        (**(code **)(*plVar30 + 0x58))(plVar30,*(undefined4 *)(lVar21 + 0x204));
        uVar27 = extraout_x1_36;
      }
      *(undefined1 *)(lVar21 + 0x1e8) = 0;
      plVar30 = *(long **)(**(long **)(lVar21 + 0x1d8) + 8);
      if (plVar30 != (long *)0x0) {
        param_4 = (long ****)&DAT_ffffffff;
        (**(code **)(*plVar30 + 0x58))(plVar30,3);
        uVar27 = extraout_x1_37;
      }
      *(undefined1 *)(lVar21 + 0x210) = 1;
    }
    if (*(float *)(lVar21 + 0x1c4) < 850.0) break;
    lVar22 = *(long *)(lVar21 + 0x1d0);
    lVar31 = *(long *)(lVar22 + 0x10);
    if (lVar31 != 0) {
      if ((*(char *)(lVar31 + 0xe0) != '\0') && (*(long *)(lVar31 + 200) != 0)) {
        *(undefined2 *)(*(long *)(lVar31 + 200) + 0x30) = 0x101;
      }
      if (*(long *)(lVar31 + 0xd8) != 0) {
        *(undefined1 *)(*(long *)(lVar31 + 0xd8) + 0x21) = 1;
      }
      if (*(char *)(lVar31 + 0xe0) != '\0') {
        *(undefined1 *)(*(long *)(lVar31 + 0xb0) + 0x10) = 0;
      }
      lVar22 = *(long *)(lVar22 + 0x10);
      if (lVar22 != 0) {
        *(undefined1 *)(lVar22 + 0x110) = 0;
        FUN_71025e9d50((long *)(lVar22 + 0x108),uVar27,param_4,(byte ****)param_5,(long ****)param_6
                       ,param_7,param_8,param_9);
      }
    }
    uVar33 = 4;
    goto LAB_7102ab6f64;
  case 3:
    goto switchD_7102ab6d48_caseD_3;
  case 4:
    if (1100.0 <= *(float *)(lVar21 + 0x1c4)) {
      lVar22 = *(long *)(lVar21 + 0x10);
      if (lVar22 != 0) {
        if ((*(char *)(lVar22 + 0xe0) != '\0') && (*(long *)(lVar22 + 200) != 0)) {
          *(undefined2 *)(*(long *)(lVar22 + 200) + 0x30) = 0x101;
        }
        if (*(long *)(lVar22 + 0xd8) != 0) {
          *(undefined1 *)(*(long *)(lVar22 + 0xd8) + 0x21) = 1;
        }
        if (*(char *)(lVar22 + 0xe0) != '\0') {
          *(undefined1 *)(*(long *)(lVar22 + 0xb0) + 0x10) = 0;
        }
        lVar22 = *(long *)(lVar21 + 0x10);
        if (lVar22 != 0) {
          *(undefined1 *)(lVar22 + 0x110) = 0;
          FUN_71025e9d50((long *)(lVar22 + 0x108),extraout_x1_35,param_4,(byte ****)param_5,
                         (long ****)param_6,param_7,param_8,param_9);
        }
      }
      uVar33 = 3;
      goto LAB_7102ab6f64;
    }
  }
  lVar22 = *(long *)(lVar21 + 0x10);
  if (lVar22 != 0) {
    (**(code **)(**(long **)(lVar22 + 0x90) + 0x148))
              (*(long **)(lVar22 + 0x90),(undefined8 *)(lVar21 + 0x180));
    lVar22 = *(long *)(lVar22 + 0xd8);
    if (lVar22 != 0) {
      local_c0 = *(undefined8 *)(lVar21 + 400);
      uStack_b8 = *(undefined8 *)(lVar21 + 0x198);
      uVar27 = *(undefined8 *)(lVar21 + 0x180);
      local_d0._0_4_ = (float)uVar27;
      local_d0._4_4_ = (float)((ulong)uVar27 >> 0x20);
      uStack_c8 = (undefined4)*(undefined8 *)(lVar21 + 0x188);
      uStack_c4 = (undefined4)((ulong)*(undefined8 *)(lVar21 + 0x188) >> 0x20);
      local_a0 = *(undefined8 *)(lVar21 + 0x1b0);
      uStack_98 = (undefined1)*(undefined8 *)(lVar21 + 0x1b8);
      uStack_97 = (undefined7)((ulong)*(undefined8 *)(lVar21 + 0x1b8) >> 8);
      local_b0 = *(undefined8 *)(lVar21 + 0x1a0);
      uStack_a8 = *(undefined8 *)(lVar21 + 0x1a8);
      if (*(char *)(*(long *)(lVar22 + 8) + 0xa8) != '\0') {
        plVar30 = *(long **)(*(long *)(lVar22 + 8) + 0x48);
        (**(code **)(*plVar30 + 0x20))(plVar30,&local_d0);
      }
      *(undefined1 *)(lVar22 + 0x20) = 1;
    }
    if (*(long *)(lVar21 + 0x10) != 0) {
      FUN_71025ed6c0(fVar7,*(long *)(lVar21 + 0x10) + 0x60);
    }
  }
  if (*(char *)(lVar21 + 0x1c8) == '\x02') {
    fVar83 = *(float *)(lVar21 + 0x1c4);
    if (fVar83 <= 720.0) {
      if (fVar83 <= 435.0) {
        plVar18 = (long *)(*(long **)(lVar21 + 0x18))[1];
        for (plVar30 = (long *)**(long **)(lVar21 + 0x18); plVar30 != plVar18; plVar30 = plVar30 + 1
            ) {
          lVar22 = *plVar30;
          *(undefined1 *)(lVar22 + 0x128) = 1;
          if (*(long *)(lVar22 + 8) != 0) {
            *(undefined8 *)(*(long *)(lVar22 + 8) + 0xd8) = 0xffffffffffffffff;
            FUN_7100532bc0(*(long *)(lVar22 + 8),0);
          }
        }
        plVar30 = (long *)**(undefined8 **)(lVar21 + 0x20);
        plVar18 = (long *)(*(undefined8 **)(lVar21 + 0x20))[1];
        if (fVar83 <= 170.0) {
          for (; plVar30 != plVar18; plVar30 = plVar30 + 1) {
            lVar22 = *plVar30;
            *(undefined1 *)(lVar22 + 0x128) = 1;
            if (*(long *)(lVar22 + 8) != 0) {
              *(undefined8 *)(*(long *)(lVar22 + 8) + 0xd8) = 0xffffffffffffffff;
              FUN_7100532bc0(*(long *)(lVar22 + 8),0);
            }
          }
        }
        else {
          param_4 = (long ****)0x1;
          FUN_71025f4d80(plVar30,plVar18,1);
        }
      }
      else {
        plVar18 = (long *)(*(long **)(lVar21 + 0x18))[1];
        for (plVar30 = (long *)**(long **)(lVar21 + 0x18); plVar30 != plVar18; plVar30 = plVar30 + 1
            ) {
          lVar22 = *plVar30;
          *(undefined1 *)(lVar22 + 0x128) = 1;
          if (*(long *)(lVar22 + 8) != 0) {
            *(undefined8 *)(*(long *)(lVar22 + 8) + 0xd8) = 0xffffffffffffffff;
            FUN_7100532bc0(*(long *)(lVar22 + 8),0);
          }
        }
        plVar18 = (long *)(*(long **)(lVar21 + 0x20))[1];
        for (plVar30 = (long *)**(long **)(lVar21 + 0x20); plVar30 != plVar18; plVar30 = plVar30 + 1
            ) {
          lVar22 = *plVar30;
          *(undefined1 *)(lVar22 + 0x128) = 1;
          if (*(long *)(lVar22 + 8) != 0) {
            *(undefined8 *)(*(long *)(lVar22 + 8) + 0xd8) = 0xffffffffffffffff;
            FUN_7100532bc0(*(long *)(lVar22 + 8),0);
          }
        }
      }
    }
    else {
      FUN_71025f4d80((long *)**(undefined8 **)(lVar21 + 0x18),
                     (long *)(*(undefined8 **)(lVar21 + 0x18))[1],1);
      param_4 = (long ****)0x1;
      FUN_71025f4d80((long *)**(undefined8 **)(lVar21 + 0x20),
                     (long *)(*(undefined8 **)(lVar21 + 0x20))[1],1);
    }
    if (*(float *)(lVar21 + 0x1c4) <= 720.0) {
      if ((*(float *)(*(long *)(lVar21 + 8) + 0x308) < *(float *)(lVar21 + 0x1c4)) &&
         (*(char *)(lVar21 + 0x23a) == '\0')) {
        FUN_710317dc90(lVar21 + 0x230);
      }
    }
    else if (*(char *)(lVar21 + 0x23a) != '\0') {
      if (*(char *)(lVar21 + 0x239) != '\0') {
        uVar16 = *(uint *)(lVar21 + 0x23c);
        if ((uVar16 < 0x38) &&
           (piVar23 = *(int **)(*DAT_71052b6fd8 + 0xc0),
           *(char *)((long)piVar23 + (long)(int)uVar16 + 0x464) != '\0')) {
          *(undefined1 *)((long)piVar23 + (long)(int)uVar16 + 0x464) = 0;
          *piVar23 = *piVar23 + -1;
        }
        *(undefined4 *)(lVar21 + 0x23c) = 0xffffffff;
        *(undefined1 *)(lVar21 + 0x239) = 0;
      }
      *(undefined1 *)(lVar21 + 0x23a) = 0;
    }
    if (*(float *)(lVar21 + 0x1c4) <= 720.0) {
      lVar22 = *(long *)(lVar21 + 8);
      local_d0._0_4_ = *(float *)(lVar22 + 0xb4);
      local_d0._4_4_ = *(float *)(lVar22 + 0xb8);
      uStack_c8 = *(undefined4 *)(lVar22 + 0xbc);
      uStack_c4 = *(undefined4 *)(lVar22 + 0xc0);
      FUN_71026249a0(*(long *)(*(long *)(lVar21 + 0x280) + 0x308),&local_d0);
    }
    else if (*(char *)(lVar21 + 0x224) == '\0') {
      FUN_71026249a0(*(long *)(*(long *)(lVar21 + 0x280) + 0x308),(undefined8 *)(lVar21 + 0x214));
      *(undefined1 *)(lVar21 + 0x224) = 1;
    }
  }
  uStack_c8 = 0;
  uStack_c4 = 0;
  local_d0._0_4_ = 1.0;
  local_d0._4_4_ = 0.0;
  uStack_b8 = 0;
  local_c0 = 0x3f80000000000000;
  uStack_a8 = 0x3f800000;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_97 = 0x3f800000000000;
  local_a0 = 0;
  (**(code **)(*(long *)(lVar21 + 0x30) + 0x10))((long *)(lVar21 + 0x30),&local_d0);
  uVar27 = local_a0;
  auVar11._4_4_ = local_d0._4_4_;
  auVar11._0_4_ = (float)local_d0;
  auVar11._8_4_ = uStack_c8;
  auVar11._12_4_ = uStack_c4;
  auVar12._8_8_ = uStack_b8;
  auVar12._0_8_ = local_c0;
  fVar83 = (float)local_d0 * (float)local_d0;
  fVar77 = (float)local_c0 * (float)local_c0;
  uVar33 = (undefined1)((uint)fVar77 >> 8);
  uVar34 = (undefined1)((uint)fVar77 >> 0x10);
  uVar35 = (undefined1)((uint)fVar77 >> 0x18);
  fVar32 = (float)local_b0 * (float)local_b0;
  uVar36 = (undefined1)((uint)fVar32 >> 8);
  uVar37 = (undefined1)((uint)fVar32 >> 0x10);
  uVar38 = (undefined1)((uint)fVar32 >> 0x18);
  auVar79[4] = SUB41(fVar77,0);
  auVar79._0_4_ = fVar83;
  auVar79[5] = uVar33;
  auVar79[6] = uVar34;
  auVar79[7] = uVar35;
  auVar79[8] = SUB41(fVar32,0);
  auVar79[9] = uVar36;
  auVar79[10] = uVar37;
  auVar79[0xb] = uVar38;
  auVar79._12_4_ = 0;
  auVar85[4] = SUB41(fVar77,0);
  auVar85._0_4_ = fVar83;
  auVar85[5] = uVar33;
  auVar85[6] = uVar34;
  auVar85[7] = uVar35;
  auVar85[8] = SUB41(fVar32,0);
  auVar85[9] = uVar36;
  auVar85[10] = uVar37;
  auVar85[0xb] = uVar38;
  auVar85._12_4_ = 0;
  auVar50 = NEON_ext(auVar79,auVar85,8,1);
  fVar83 = auVar50._0_4_ + fVar83;
  fVar77 = auVar50._4_4_ + fVar77;
  fVar32 = fVar83 + fVar77;
  fVar83 = fVar83 + fVar77;
  uVar33 = SUB41(fVar83,0);
  uVar34 = (undefined1)((uint)fVar83 >> 8);
  uVar35 = (undefined1)((uint)fVar83 >> 0x10);
  uVar36 = (undefined1)((uint)fVar83 >> 0x18);
  auVar5[4] = uVar33;
  auVar5._0_4_ = fVar32;
  auVar5[5] = uVar34;
  auVar5[6] = uVar35;
  auVar5[7] = uVar36;
  auVar5[8] = SUB41(fVar32,0);
  auVar5[9] = (char)((uint)fVar32 >> 8);
  auVar5[10] = (char)((uint)fVar32 >> 0x10);
  auVar5[0xb] = (char)((uint)fVar32 >> 0x18);
  auVar5[0xc] = uVar33;
  auVar5[0xd] = uVar34;
  auVar5[0xe] = uVar35;
  auVar5[0xf] = uVar36;
  auVar50 = NEON_frsqrte(auVar5,4);
  auVar73._0_4_ = auVar50._0_4_ * fVar32;
  auVar73._4_4_ = auVar50._4_4_ * fVar83;
  auVar73._8_4_ = auVar50._8_4_ * fVar32;
  uVar6 = (undefined2)(CONCAT15(uVar34,CONCAT14(uVar33,fVar32)) >> 0x20);
  auVar73._12_4_ = auVar50._12_4_ * (float)CONCAT13(uVar36,CONCAT12(uVar35,uVar6));
  auVar74 = NEON_frsqrts(auVar50,auVar73,4);
  auVar64._0_4_ = auVar50._0_4_ * auVar74._0_4_;
  auVar64._4_4_ = auVar50._4_4_ * auVar74._4_4_;
  auVar64._8_4_ = auVar50._8_4_ * auVar74._8_4_;
  auVar64._12_4_ = auVar50._12_4_ * auVar74._12_4_;
  auVar75._0_4_ = fVar32 * auVar64._0_4_;
  auVar75._4_4_ = fVar83 * auVar64._4_4_;
  auVar75._8_4_ = fVar32 * auVar64._8_4_;
  auVar75._12_4_ = (float)CONCAT13(uVar36,CONCAT12(uVar35,uVar6)) * auVar64._12_4_;
  iVar17 = -(uint)(fVar32 == 0.0);
  auVar50 = NEON_frsqrts(auVar64,auVar75,4);
  fVar76 = (float)((ulong)local_c0 >> 0x20);
  fVar83 = (float)local_d0 * auVar64._0_4_ * auVar50._0_4_;
  fVar77 = (float)((ulong)local_b0 >> 0x20);
  auVar74 = NEON_ext(auVar12,auVar12,8,1);
  auVar50 = NEON_ext(auVar11,auVar11,8,1);
  auVar65._0_4_ = local_d0._4_4_ * local_d0._4_4_;
  auVar65._4_4_ = fVar76 * fVar76;
  auVar65._8_4_ = fVar77 * fVar77;
  auVar65._12_4_ = 0;
  auVar79 = NEON_ext(auVar65,auVar65,8,1);
  fVar62 = auVar79._0_4_ + auVar65._0_4_;
  fVar68 = auVar79._4_4_ + auVar65._4_4_;
  fVar32 = fVar62 + fVar68;
  fVar62 = fVar62 + fVar68;
  bVar58 = SUB41(fVar83,0) & ~(byte)iVar17;
  bVar59 = (byte)((uint)fVar83 >> 8) & ~(byte)((uint)iVar17 >> 8);
  bVar60 = (byte)((uint)fVar83 >> 0x10) & ~(byte)((uint)iVar17 >> 0x10);
  bVar61 = (byte)((uint)fVar83 >> 0x18) & ~(byte)((uint)iVar17 >> 0x18);
  auVar66._8_8_ = CONCAT44(fVar62,fVar32);
  auVar66._0_8_ = CONCAT44(fVar62,fVar32);
  auVar79 = NEON_frsqrte(auVar66,4);
  auVar84._0_4_ = auVar79._0_4_ * fVar32;
  auVar84._4_4_ = auVar79._4_4_ * fVar62;
  auVar84._8_4_ = auVar79._8_4_ * fVar32;
  auVar84._12_4_ = auVar79._12_4_ * fVar62;
  auVar85 = NEON_frsqrts(auVar79,auVar84,4);
  auVar80._0_4_ = auVar79._0_4_ * auVar85._0_4_;
  auVar80._4_4_ = auVar79._4_4_ * auVar85._4_4_;
  auVar80._8_4_ = auVar79._8_4_ * auVar85._8_4_;
  auVar80._12_4_ = auVar79._12_4_ * auVar85._12_4_;
  auVar86._0_4_ = fVar32 * auVar80._0_4_;
  auVar86._4_4_ = fVar62 * auVar80._4_4_;
  auVar86._8_4_ = fVar32 * auVar80._8_4_;
  auVar86._12_4_ = fVar62 * auVar80._12_4_;
  iVar17 = -(uint)(fVar32 == 0.0);
  iVar69 = -(uint)(fVar62 == 0.0);
  iVar70 = -(uint)(fVar32 == 0.0);
  iVar71 = -(uint)(fVar62 == 0.0);
  auVar79 = NEON_frsqrts(auVar80,auVar86,4);
  fVar72 = local_d0._4_4_ * auVar80._0_4_ * auVar79._0_4_;
  fVar76 = fVar76 * auVar80._4_4_ * auVar79._4_4_;
  fVar77 = fVar77 * auVar80._8_4_ * auVar79._8_4_;
  fVar78 = auVar80._12_4_ * auVar79._12_4_ * 0.0;
  fVar83 = auVar50._0_4_;
  auVar51._0_4_ = fVar83 * fVar83;
  fVar32 = auVar74._0_4_;
  auVar51._4_4_ = fVar32 * fVar32;
  fVar62 = (float)uStack_a8;
  auVar51._8_4_ = fVar62 * fVar62;
  auVar51._12_4_ = 0;
  auVar50 = NEON_ext(auVar51,auVar51,8,1);
  fVar49 = auVar50._0_4_ + auVar51._0_4_;
  fVar53 = auVar50._4_4_ + auVar51._4_4_;
  fVar68 = fVar49 + fVar53;
  fVar49 = fVar49 + fVar53;
  auVar52._8_8_ = CONCAT44(fVar49,fVar68);
  auVar52._0_8_ = CONCAT44(fVar49,fVar68);
  auVar50 = NEON_frsqrte(auVar52,4);
  auVar81._0_4_ = auVar50._0_4_ * fVar68;
  auVar81._4_4_ = auVar50._4_4_ * fVar49;
  auVar81._8_4_ = auVar50._8_4_ * fVar68;
  auVar81._12_4_ = auVar50._12_4_ * fVar49;
  auVar74 = NEON_frsqrts(auVar50,auVar81,4);
  auVar56._0_4_ = auVar50._0_4_ * auVar74._0_4_;
  auVar56._4_4_ = auVar50._4_4_ * auVar74._4_4_;
  auVar56._8_4_ = auVar50._8_4_ * auVar74._8_4_;
  auVar56._12_4_ = auVar50._12_4_ * auVar74._12_4_;
  auVar82._0_4_ = fVar68 * auVar56._0_4_;
  auVar82._4_4_ = fVar49 * auVar56._4_4_;
  auVar82._8_4_ = fVar68 * auVar56._8_4_;
  auVar82._12_4_ = fVar49 * auVar56._12_4_;
  auVar50 = NEON_frsqrts(auVar56,auVar82,4);
  auVar63._0_8_ =
       CONCAT44(fVar32 * auVar56._4_4_ * auVar50._4_4_,fVar83 * auVar56._0_4_ * auVar50._0_4_);
  auVar63._8_4_ = fVar62 * auVar56._8_4_ * auVar50._8_4_;
  auVar67._12_4_ = auVar56._12_4_ * auVar50._12_4_ * 0.0;
  auVar67._0_12_ = auVar63;
  fVar83 = (float)CONCAT13((byte)((uint)fVar72 >> 0x18) & ~(byte)((uint)iVar17 >> 0x18),
                           CONCAT12((byte)((uint)fVar72 >> 0x10) & ~(byte)((uint)iVar17 >> 0x10),
                                    CONCAT11((byte)((uint)fVar72 >> 8) & ~(byte)((uint)iVar17 >> 8),
                                             SUB41(fVar72,0) & ~(byte)iVar17)));
  auVar55._0_8_ =
       CONCAT17((byte)((uint)fVar76 >> 0x18) & ~(byte)((uint)iVar69 >> 0x18),
                CONCAT16((byte)((uint)fVar76 >> 0x10) & ~(byte)((uint)iVar69 >> 0x10),
                         CONCAT15((byte)((uint)fVar76 >> 8) & ~(byte)((uint)iVar69 >> 8),
                                  CONCAT14(SUB41(fVar76,0) & ~(byte)iVar69,fVar83))));
  auVar55[8] = SUB41(fVar77,0) & ~(byte)iVar70;
  auVar55[9] = (byte)((uint)fVar77 >> 8) & ~(byte)((uint)iVar70 >> 8);
  auVar55[10] = (byte)((uint)fVar77 >> 0x10) & ~(byte)((uint)iVar70 >> 0x10);
  auVar55[0xb] = (byte)((uint)fVar77 >> 0x18) & ~(byte)((uint)iVar70 >> 0x18);
  auVar57[0xc] = SUB41(fVar78,0) & ~(byte)iVar71;
  auVar57._0_12_ = auVar55;
  auVar57[0xd] = (byte)((uint)fVar78 >> 8) & ~(byte)((uint)iVar71 >> 8);
  auVar57[0xe] = (byte)((uint)fVar78 >> 0x10) & ~(byte)((uint)iVar71 >> 0x10);
  auVar57[0xf] = (byte)((uint)fVar78 >> 0x18) & ~(byte)((uint)iVar71 >> 0x18);
  iVar17 = -(uint)(fVar68 == 0.0);
  iVar69 = -(uint)(fVar49 == 0.0);
  iVar70 = -(uint)(fVar68 == 0.0);
  fVar83 = (float)CONCAT13(bVar61,CONCAT12(bVar60,CONCAT11(bVar59,bVar58))) *
           (float)CONCAT13(bVar61,CONCAT12(bVar60,CONCAT11(bVar59,bVar58))) + fVar83 * fVar83;
  fVar77 = SQRT(fVar83);
  if (NAN(fVar77)) {
    fVar77 = sqrtf(fVar83);
    auVar9._8_8_ = auVar57._8_8_;
    auVar9._0_8_ = auVar55._0_8_;
    auVar55 = auVar9._0_12_;
    auVar10._8_8_ = auVar67._8_8_;
    auVar10._0_8_ = auVar63._0_8_;
    auVar63 = auVar10._0_12_;
  }
  fVar83 = (float)CONCAT13(auVar63[3] & ~(byte)((uint)iVar17 >> 0x18),
                           CONCAT12(auVar63[2] & ~(byte)((uint)iVar17 >> 0x10),
                                    CONCAT11(auVar63[1] & ~(byte)((uint)iVar17 >> 8),
                                             auVar63[0] & ~(byte)iVar17)));
  bVar54 = auVar63[7] & ~(byte)((uint)iVar69 >> 0x18);
  if (fVar77 <= 0.0001) {
    atan2f(-auVar55._8_4_,auVar55._4_4_);
    atan2f(-fVar83,fVar77);
    fVar83 = 0.0;
    if (*(char *)(lVar21 + 0x225) == '\0') goto LAB_7102ab7468;
LAB_7102ab7428:
    uVar41 = (undefined1)uRam0000007107459008;
    uVar42 = (undefined1)((ulong)uRam0000007107459008 >> 8);
    uVar43 = (undefined1)((ulong)uRam0000007107459008 >> 0x10);
    uVar44 = (undefined1)((ulong)uRam0000007107459008 >> 0x18);
    uVar45 = (undefined1)((ulong)uRam0000007107459008 >> 0x20);
    uVar46 = (undefined1)((ulong)uRam0000007107459008 >> 0x28);
    uVar47 = (undefined1)((ulong)uRam0000007107459008 >> 0x30);
    uVar48 = (undefined1)((ulong)uRam0000007107459008 >> 0x38);
    uVar33 = (undefined1)_ConstantZero;
    uVar34 = (undefined1)((ulong)_ConstantZero >> 8);
    uVar35 = (undefined1)((ulong)_ConstantZero >> 0x10);
    uVar36 = (undefined1)((ulong)_ConstantZero >> 0x18);
    uVar37 = (undefined1)((ulong)_ConstantZero >> 0x20);
    uVar38 = (undefined1)((ulong)_ConstantZero >> 0x28);
    uVar39 = (undefined1)((ulong)_ConstantZero >> 0x30);
    uVar40 = (undefined1)((ulong)_ConstantZero >> 0x38);
    *(undefined1 *)(lVar21 + 0x225) = 0;
  }
  else {
    atan2f((float)CONCAT13(bVar54,CONCAT12(auVar63[6] & ~(byte)((uint)iVar69 >> 0x10),
                                           (short)(CONCAT15(auVar63[5] & ~(byte)((uint)iVar69 >> 8),
                                                            CONCAT14(auVar63[4] & ~(byte)iVar69,
                                                                     fVar83)) >> 0x20))),
           (float)(CONCAT14(auVar63[0xb] & ~(byte)((uint)iVar70 >> 0x18),
                            CONCAT13(auVar63[10] & ~(byte)((uint)iVar70 >> 0x10),
                                     CONCAT12(auVar63[9] & ~(byte)((uint)iVar70 >> 8),
                                              CONCAT11(auVar63[8] & ~(byte)iVar70,bVar54)))) >> 8));
    atan2f(-fVar83,fVar77);
    fVar83 = atan2f(auVar55._0_4_,(float)CONCAT13(bVar61,CONCAT12(bVar60,CONCAT11(bVar59,bVar58))));
    if (*(char *)(lVar21 + 0x225) != '\0') goto LAB_7102ab7428;
LAB_7102ab7468:
    uVar36 = (undefined1)((ulong)uVar27 >> 0x18);
    uVar41 = 0;
    uVar42 = 0;
    uVar43 = 0;
    uVar44 = 0;
    uVar45 = 0;
    uVar46 = 0;
    uVar47 = 0;
    uVar48 = 0;
    uVar33 = (undefined1)uVar27;
    uVar34 = (undefined1)((ulong)uVar27 >> 8);
    uVar35 = (undefined1)((ulong)uVar27 >> 0x10);
    fVar77 = (float)((ulong)uVar27 >> 0x20) + -42.3864;
    uVar37 = SUB41(fVar77,0);
    uVar38 = (undefined1)((uint)fVar77 >> 8);
    uVar39 = (undefined1)((uint)fVar77 >> 0x10);
    uVar40 = (undefined1)((uint)fVar77 >> 0x18);
  }
  plVar30 = (long *)**(long **)(lVar21 + 0x18);
  plVar18 = (long *)(*(long **)(lVar21 + 0x18))[1];
  if (plVar30 != plVar18) {
    do {
      lVar22 = *plVar30;
      if (*(char *)(lVar22 + 0x128) == '\0' ||
          (*(char *)(*(long *)(lVar22 + 8) + 0xe8) != '\0' ||
          *(char *)(*(long *)(lVar22 + 8) + 0xe7) != '\0')) {
        *(undefined1 *)(lVar22 + 0x129) = 1;
LAB_7102ab750c:
        *(ulong *)(lVar22 + 0x18) =
             CONCAT17(uVar48,CONCAT16(uVar47,CONCAT15(uVar46,CONCAT14(uVar45,CONCAT13(uVar44,
                                                  CONCAT12(uVar43,CONCAT11(uVar42,uVar41)))))));
        *(ulong *)(lVar22 + 0x10) =
             CONCAT17(uVar40,CONCAT16(uVar39,CONCAT15(uVar38,CONCAT14(uVar37,CONCAT13(uVar36,
                                                  CONCAT12(uVar35,CONCAT11(uVar34,uVar33)))))));
      }
      else if ((1e-05 < ABS(*(float *)(lVar22 + 0x10) -
                            (float)CONCAT13(uVar36,CONCAT12(uVar35,CONCAT11(uVar34,uVar33))))) ||
              (1e-05 < ABS(*(float *)(lVar22 + 0x14) -
                           (float)CONCAT13(uVar40,CONCAT12(uVar39,CONCAT11(uVar38,uVar37)))))) {
        *(undefined1 *)(lVar22 + 0x12a) = 1;
        goto LAB_7102ab750c;
      }
      if ((1e-05 <= ABS(0.0 - fVar83)) || (1e-05 <= ABS(*(float *)(lVar22 + 0x30) - fVar83))) {
        *(float *)(lVar22 + 0x30) = fVar83;
        *(undefined1 *)(lVar22 + 0x129) = 1;
      }
      fVar77 = *(float *)(lVar22 + 0x50);
      fVar32 = *(float *)(lVar22 + 0x54);
      uVar20 = *(undefined4 *)(lVar22 + 0x58);
      uVar8 = *(undefined4 *)(lVar22 + 0x5c);
      if (1e-05 <= ABS(fVar77 + -1.0)) {
        fVar77 = 1.0;
        *(undefined1 *)(lVar22 + 0x129) = 1;
        *(undefined4 *)(lVar22 + 0x58) = uVar20;
        *(undefined4 *)(lVar22 + 0x5c) = uVar8;
        *(undefined4 *)(lVar22 + 0x50) = 0x3f800000;
        *(float *)(lVar22 + 0x54) = fVar32;
      }
      if (1e-05 <= ABS(fVar32 + -1.0)) {
        *(undefined1 *)(lVar22 + 0x129) = 1;
        *(undefined4 *)(lVar22 + 0x58) = uVar20;
        *(undefined4 *)(lVar22 + 0x5c) = uVar8;
        *(ulong *)(lVar22 + 0x50) = CONCAT44(0x3f800000,fVar77);
      }
      plVar30 = plVar30 + 1;
    } while (plVar18 != plVar30);
  }
  plVar30 = (long *)**(long **)(lVar21 + 0x20);
  plVar18 = (long *)(*(long **)(lVar21 + 0x20))[1];
  if (plVar30 != plVar18) {
    do {
      lVar22 = *plVar30;
      if (*(char *)(lVar22 + 0x128) == '\0' ||
          (*(char *)(*(long *)(lVar22 + 8) + 0xe8) != '\0' ||
          *(char *)(*(long *)(lVar22 + 8) + 0xe7) != '\0')) {
        *(undefined1 *)(lVar22 + 0x129) = 1;
LAB_7102ab7600:
        *(ulong *)(lVar22 + 0x18) =
             CONCAT17(uVar48,CONCAT16(uVar47,CONCAT15(uVar46,CONCAT14(uVar45,CONCAT13(uVar44,
                                                  CONCAT12(uVar43,CONCAT11(uVar42,uVar41)))))));
        *(ulong *)(lVar22 + 0x10) =
             CONCAT17(uVar40,CONCAT16(uVar39,CONCAT15(uVar38,CONCAT14(uVar37,CONCAT13(uVar36,
                                                  CONCAT12(uVar35,CONCAT11(uVar34,uVar33)))))));
      }
      else if ((1e-05 < ABS(*(float *)(lVar22 + 0x10) -
                            (float)CONCAT13(uVar36,CONCAT12(uVar35,CONCAT11(uVar34,uVar33))))) ||
              (1e-05 < ABS(*(float *)(lVar22 + 0x14) -
                           (float)CONCAT13(uVar40,CONCAT12(uVar39,CONCAT11(uVar38,uVar37)))))) {
        *(undefined1 *)(lVar22 + 0x12a) = 1;
        goto LAB_7102ab7600;
      }
      if ((1e-05 <= ABS(0.0 - fVar83)) || (1e-05 <= ABS(*(float *)(lVar22 + 0x30) - fVar83))) {
        *(float *)(lVar22 + 0x30) = fVar83;
        *(undefined1 *)(lVar22 + 0x129) = 1;
      }
      fVar77 = *(float *)(lVar22 + 0x50);
      fVar32 = *(float *)(lVar22 + 0x54);
      uVar20 = *(undefined4 *)(lVar22 + 0x58);
      uVar8 = *(undefined4 *)(lVar22 + 0x5c);
      if (1e-05 <= ABS(fVar77 + -1.0)) {
        fVar77 = 1.0;
        *(undefined1 *)(lVar22 + 0x129) = 1;
        *(undefined4 *)(lVar22 + 0x58) = uVar20;
        *(undefined4 *)(lVar22 + 0x5c) = uVar8;
        *(undefined4 *)(lVar22 + 0x50) = 0x3f800000;
        *(float *)(lVar22 + 0x54) = fVar32;
      }
      if (1e-05 <= ABS(fVar32 + -1.0)) {
        *(undefined1 *)(lVar22 + 0x129) = 1;
        *(undefined4 *)(lVar22 + 0x58) = uVar20;
        *(undefined4 *)(lVar22 + 0x5c) = uVar8;
        *(ulong *)(lVar22 + 0x50) = CONCAT44(0x3f800000,fVar77);
      }
      plVar30 = plVar30 + 1;
    } while (plVar18 != plVar30);
  }
  uStack_c8 = 0;
  uStack_c4 = 0;
  local_d0._0_4_ = 1.0;
  local_d0._4_4_ = 0.0;
  uStack_b8 = 0;
  local_c0 = 0x3f80000000000000;
  uStack_a8 = 0x3f800000;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_97 = 0x3f800000000000;
  local_a0 = 0;
  (**(code **)(*(long *)(lVar21 + 0x110) + 0x10))(lVar21 + 0x110,&local_d0);
  lVar22 = *(long *)(lVar21 + 0x1d0);
  *(ulong *)(lVar22 + 0x28) = CONCAT44(uStack_c4,uStack_c8);
  *(ulong *)(lVar22 + 0x20) = CONCAT44(local_d0._4_4_,(float)local_d0);
  *(undefined8 *)(lVar22 + 0x38) = uStack_b8;
  *(long *)(lVar22 + 0x30) = local_c0;
  *(undefined8 *)(lVar22 + 0x48) = uStack_a8;
  *(undefined8 *)(lVar22 + 0x40) = local_b0;
  *(ulong *)(lVar22 + 0x58) = CONCAT71(uStack_97,uStack_98);
  *(undefined8 *)(lVar22 + 0x50) = local_a0;
  *(undefined4 *)(*(long *)(lVar21 + 0x1d0) + 0x144) = *(undefined4 *)(lVar21 + 0x1c4);
  FUN_7102ac09e0(fVar7,*(long *)(lVar21 + 0x1d0),extraout_x1_38,param_4,(byte ****)param_5,
                 (long ****)param_6,param_7,param_8,param_9);
  uVar27 = extraout_x1_39;
switchD_7102ab6d48_caseD_3:
  FUN_7102abbed0(fVar7,*(long *)(param_2 + 0xa98),uVar27,param_4,(byte ****)param_5,
                 (long ****)param_6,param_7,param_8,param_9);
  lVar21 = *(long *)(param_2 + 0xa98);
  lVar22 = *(long *)(param_2 + 0xaa8);
  uVar27 = *(undefined8 *)(lVar21 + 0xb8);
  *(undefined8 *)(lVar22 + 0x18) = *(undefined8 *)(lVar21 + 0xa8);
  uVar29 = *(undefined8 *)(lVar21 + 0xb0);
  *(undefined8 *)(lVar22 + 0x10) = *(undefined8 *)(lVar21 + 0xa0);
  *(undefined8 *)(lVar22 + 0x20) = uVar29;
  *(undefined8 *)(lVar22 + 0x28) = uVar27;
  uVar27 = *(undefined8 *)(lVar21 + 0xd0);
  uVar29 = *(undefined8 *)(lVar21 + 0xd8);
  uVar3 = *(undefined8 *)(lVar21 + 200);
  *(undefined8 *)(lVar22 + 0x30) = *(undefined8 *)(lVar21 + 0xc0);
  *(undefined8 *)(lVar22 + 0x38) = uVar3;
  *(undefined8 *)(lVar22 + 0x40) = uVar27;
  *(undefined8 *)(lVar22 + 0x48) = uVar29;
  FUN_7102ab9360(fVar7,*(long **)(param_2 + 0xaa8),extraout_x1_40,param_4,(byte ****)param_5,
                 (long ****)param_6,param_7,param_8,param_9);
  lVar21 = *(long *)(param_2 + 0xa98);
  lVar22 = *(long *)(param_2 + 0xaa0);
  uVar27 = *(undefined8 *)(lVar21 + 0x78);
  *(undefined8 *)(lVar22 + 0x48) = *(undefined8 *)(lVar21 + 0x68);
  uVar29 = *(undefined8 *)(lVar21 + 0x70);
  *(undefined8 *)(lVar22 + 0x40) = *(undefined8 *)(lVar21 + 0x60);
  *(undefined8 *)(lVar22 + 0x50) = uVar29;
  *(undefined8 *)(lVar22 + 0x58) = uVar27;
  uVar27 = *(undefined8 *)(lVar21 + 0x90);
  uVar29 = *(undefined8 *)(lVar21 + 0x98);
  uVar3 = *(undefined8 *)(lVar21 + 0x88);
  *(undefined8 *)(lVar22 + 0x60) = *(undefined8 *)(lVar21 + 0x80);
  *(undefined8 *)(lVar22 + 0x68) = uVar3;
  *(undefined8 *)(lVar22 + 0x70) = uVar27;
  *(undefined8 *)(lVar22 + 0x78) = uVar29;
  FUN_7102abf340(fVar7,*(long *)(param_2 + 0xaa0),extraout_x1_41,param_4,(byte ****)param_5,
                 (undefined1 (*) [12])param_6,(undefined1 (*) [12])param_7,param_8,param_9);
  cVar19 = *(char *)(param_2 + 0xa5c);
  if (cVar19 == '\x05') {
    bVar15 = false;
    bVar14 = false;
    if (*(char *)(*(long *)(param_2 + 0xa98) + 0x2b0) != '\x15') goto LAB_7102ab7784;
  }
  else {
    if (cVar19 == '\x06') {
      bVar15 = *(char *)(*(long *)(param_2 + 0xaa8) + 0x60) == '\x15';
      bVar14 = false;
    }
    else if (cVar19 == '\a') {
      bVar14 = *(char *)(*(long *)(param_2 + 0xaa0) + 200) == '\x15';
      bVar15 = false;
    }
    else {
      bVar15 = false;
      bVar14 = false;
    }
LAB_7102ab7784:
    if ((!bVar15) && (!bVar14)) goto LAB_7102ab7794;
  }
  *(undefined1 *)(param_2 + 0xa5c) = 0x15;
LAB_7102ab7794:
  uStack_c8 = 0;
  uStack_c4 = 0;
  local_d0._0_4_ = 1.0;
  local_d0._4_4_ = 0.0;
  uStack_b8 = 0;
  local_c0 = 0x3f80000000000000;
  uStack_a8 = 0x3f800000;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_97 = 0x3f800000000000;
  local_a0 = 0;
  (**(code **)(*(long *)(*(long *)(param_2 + 0xa78) + 0x110) + 0x10))
            (*(long *)(param_2 + 0xa78) + 0x110,&local_d0);
  *(ulong *)(param_2 + 0x388) = CONCAT44(uStack_c4,uStack_c8);
  *(ulong *)(param_2 + 0x380) = CONCAT44(local_d0._4_4_,(float)local_d0);
  *(undefined8 *)(param_2 + 0x398) = uStack_b8;
  *(long *)(param_2 + 0x390) = local_c0;
  *(undefined8 *)(param_2 + 0x3a8) = uStack_a8;
  *(undefined8 *)(param_2 + 0x3a0) = local_b0;
  *(ulong *)(param_2 + 0x3b8) = CONCAT71(uStack_97,uStack_98);
  *(undefined8 *)(param_2 + 0x3b0) = local_a0;
  FUN_71025dd540((ulong)(uint)fVar7,param_2,extraout_x1_42,param_4,param_5,param_6,param_7,param_8,
                 param_9);
  return;
}

