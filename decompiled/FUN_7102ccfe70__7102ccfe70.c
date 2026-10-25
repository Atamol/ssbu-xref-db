// addr:      7102ccfe70
// offset:    0x2ccfe70
// name:      FUN_7102ccfe70
// mangled:   
// signature: undefined __cdecl FUN_7102ccfe70(long param_1, undefined8 param_2, char * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7102ccfe70(long param_1,undefined8 param_2,char *param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte **ppbVar1;
  undefined4 uVar2;
  bool bVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  ulong uVar10;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  byte ****ppppbVar11;
  undefined **ppuVar12;
  byte ****ppppbVar13;
  long ****pppplVar14;
  byte ***pppbVar15;
  long *plVar16;
  long lVar17;
  ulong uVar18;
  char cVar19;
  byte **ppbVar20;
  byte **ppbVar21;
  ulong uVar22;
  undefined8 uVar23;
  undefined8 *puVar24;
  byte ***pppbVar25;
  undefined8 uVar26;
  byte ****ppppbVar27;
  long lVar28;
  undefined8 uVar29;
  byte ***pppbVar30;
  long lVar31;
  undefined8 *puVar32;
  long lVar33;
  long *plVar34;
  long *plVar35;
  byte ***pppbVar36;
  float fVar37;
  undefined1 auVar38 [16];
  byte ***local_b8;
  byte ***local_b0;
  byte ***local_a8;
  byte ***local_a0;
  byte ***local_98;
  undefined8 uStack_90;
  byte ***local_88;
  byte ***local_80;
  byte ***local_78;
  byte ***local_70;
  undefined4 local_64;
  
  plVar34 = *(long **)(param_1 + 0x738);
  if (plVar34 == (long *)0x0) {
    return;
  }
  lVar28 = plVar34[0xf0];
  puVar5 = (undefined8 *)
           FUN_710392e290(0x10,0x10,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar5 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (byte ***)((ulong)local_a0 & 0xffffffff00000000);
      local_88 = (byte ***)&DAT_00000010;
      param_3 = (char *)&local_88;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      if (((uVar6 & 1) != 0) &&
         (puVar5 = (undefined8 *)
                   FUN_710392e290(0x10,0x10,(long ****)param_3,param_4,param_5,param_6,param_7,
                                  param_8), puVar5 != (undefined8 *)0x0)) goto LAB_7102ccfefc;
    }
    puVar5 = (undefined8 *)0x0;
  }
LAB_7102ccfefc:
  lVar31 = *plVar34;
  *puVar5 = &PTR_FUN_7105130618;
  plVar7 = (long *)FUN_710392e290(0x10,0x110,(long ****)param_3,param_4,param_5,param_6,param_7,
                                  param_8);
  if (plVar7 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (byte ***)((ulong)local_a0 & 0xffffffff00000000);
      local_88 = (byte ***)&DAT_00000110;
      param_3 = (char *)&local_88;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      if (((uVar6 & 1) != 0) &&
         (plVar7 = (long *)FUN_710392e290(0x10,0x110,(long ****)param_3,param_4,param_5,param_6,
                                          param_7,param_8), plVar7 != (long *)0x0))
      goto LAB_7102ccff68;
    }
    plVar7 = (long *)0x0;
  }
LAB_7102ccff68:
  plVar7[2] = (long)(plVar34 + 1);
  *plVar7 = lVar31;
  plVar7[1] = lVar28;
  plVar35 = plVar7 + 3;
  *plVar35 = 0;
  plVar7[4] = 0;
  plVar7[5] = (long)plVar7;
  *(undefined1 *)(plVar7 + 0x20) = 0;
  *(undefined2 *)(plVar7 + 9) = 0;
  plVar7[6] = 0;
  plVar7[7] = 0;
  plVar7[8] = 0;
  plVar7[0x1c] = 0;
  plVar7[0x1d] = 0;
  plVar7[0x1a] = 0;
  plVar7[0x1b] = 0;
  plVar7[0x18] = 0;
  plVar7[0x19] = 0;
  plVar7[0x16] = 0;
  plVar7[0x17] = 0;
  plVar7[0x14] = 0;
  plVar7[0x15] = 0;
  plVar7[0x12] = 0;
  plVar7[0x13] = 0;
  plVar7[0x10] = 0;
  plVar7[0x11] = 0;
  plVar7[0xe] = 0;
  plVar7[0xf] = 0;
  plVar7[0xc] = 0;
  plVar7[0xd] = 0;
  plVar7[10] = 0;
  plVar7[0xb] = 0;
  *(undefined8 *)((long)plVar7 + 0x104) = 0xffffffffffffffff;
  puVar8 = (undefined8 *)
           FUN_710392e290(0x10,0x10,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (byte ***)((ulong)local_a0 & 0xffffffff00000000);
      local_88 = (byte ***)&DAT_00000010;
      param_3 = (char *)&local_88;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      if (((uVar6 & 1) != 0) &&
         (puVar8 = (undefined8 *)
                   FUN_710392e290(0x10,0x10,(long ****)param_3,param_4,param_5,param_6,param_7,
                                  param_8), puVar8 != (undefined8 *)0x0)) goto LAB_7102cd001c;
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_7102cd001c:
  *puVar8 = &PTR_FUN_7105130408;
  plVar9 = (long *)FUN_710392e290(0x10,0x10,(long ****)param_3,param_4,param_5,param_6,param_7,
                                  param_8);
  if (plVar9 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (byte ***)((ulong)local_a0 & 0xffffffff00000000);
      local_88 = (byte ***)&DAT_00000010;
      param_3 = (char *)&local_88;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      if (((uVar6 & 1) != 0) &&
         (plVar9 = (long *)FUN_710392e290(0x10,0x10,(long ****)param_3,param_4,param_5,param_6,
                                          param_7,param_8), plVar9 != (long *)0x0))
      goto LAB_7102cd0084;
    }
    plVar9 = (long *)0x0;
  }
LAB_7102cd0084:
  *plVar9 = 0;
  *(undefined4 *)(plVar9 + 1) = 1;
  if (lVar31 != 0) {
    param_3 = *(char **)(*(long *)(lVar31 + 0x308) + 8);
    param_4 = (byte ****)0x1;
    FUN_710315a0a0(&local_88,*(long *)(*lib::Singleton<app::StageManager>::instance_ + 0x1c0),
                   (long ****)param_3,(byte ****)0x1,param_5,param_6,param_7,param_8);
    pppbVar15 = local_88;
    local_88 = (byte ***)0x0;
    puVar32 = (undefined8 *)*plVar9;
    *plVar9 = (long)pppbVar15;
    if (puVar32 != (undefined8 *)0x0) {
      FUN_71025e8370(puVar32);
      FUN_710392eb40((ulong)puVar32);
      pppbVar15 = (byte ***)*plVar9;
    }
    local_88 = (byte ***)0x0;
    *(undefined4 *)((long)pppbVar15[1] + 0x14) = 1;
    lVar28 = *plVar9;
    if (*(char *)(lVar28 + 0x10) == '\0') {
      lVar31 = *(long *)(lVar28 + 8);
      *(undefined1 *)(lVar28 + 0x10) = 1;
      if (*(char *)(lVar28 + 0x11) == '\0') {
        if (*(char *)(lVar31 + 0x1c) != '\0') {
          (**(code **)(*(long *)(*DAT_71052b8f00 + 0xa30) + 0x18))(*DAT_71052b8f00 + 0xa30,lVar31);
          *(undefined1 *)(lVar31 + 0x1c) = 0;
        }
      }
      else if (*(char *)(lVar31 + 0x1c) == '\0') {
        (**(code **)(*(long *)(*DAT_71052b8f00 + 0xa30) + 0x10))(*DAT_71052b8f00 + 0xa30,lVar31);
        *(undefined1 *)(lVar31 + 0x1c) = 1;
      }
    }
    lVar28 = *(long *)(*plVar9 + 8);
    *(undefined8 *)(lVar28 + 0x38) = 0;
    *(undefined8 *)(lVar28 + 0x30) = 0x42dc000000000000;
    *(undefined4 *)(plVar9 + 1) = 1;
    *(undefined4 *)(*(long *)(*plVar9 + 8) + 0x10) = 1;
  }
  puVar8[1] = plVar9;
  plVar9 = (long *)plVar7[4];
  plVar7[4] = (long)puVar8;
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 8))();
  }
  plVar7[0x1e] = -1;
  plVar7[0x1f] = -1;
  if (((DAT_71053144d8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_71053144d8), iVar4 != 0)) {
    FUN_7101764000();
    ppuVar12 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
    param_3 = (char *)ppuVar12;
  }
  cVar19 = DAT_71052c51ba;
  *(char *)(plVar7 + 0x20) = DAT_71052c51ba;
  plVar16 = *(long **)(*(long *)(*plVar7 + 0x300) + 0x18);
  plVar9 = (long *)*plVar16;
  do {
    if (plVar9 == (long *)plVar16[1]) goto LAB_7102cd0258;
    lVar28 = *plVar9;
    plVar9 = plVar9 + 1;
  } while ((*(ulong *)(lVar28 + 0xa0) & 0xffffffffff) != 0x7b569df99);
  puVar8 = *(undefined8 **)(lVar28 + 0x130);
  if (puVar8 != (undefined8 *)0x0) {
    *plVar35 = (long)puVar8;
    puVar32 = (undefined8 *)*puVar8;
    puVar8 = (undefined8 *)puVar8[1];
    if (puVar32 != puVar8) {
      do {
        plVar9 = (long *)*puVar32;
        if ((char)plVar9[4] != '\0') {
          plVar16 = (long *)plVar9[1];
          lVar28 = plVar9[2];
          lVar31 = *plVar9;
          *(undefined1 *)(plVar9 + 4) = 0;
          *plVar16 = lVar31;
          *(long **)(lVar31 + 8) = plVar16;
          *(long *)(lVar28 + 0x18) = *(long *)(lVar28 + 0x18) + -1;
          *plVar9 = 0;
          plVar9[1] = 0;
          puVar24 = *(undefined8 **)(lVar28 + 0x40);
          *plVar9 = lVar28 + 0x38;
          plVar9[1] = (long)puVar24;
          *(long **)(lVar28 + 0x40) = plVar9;
          *puVar24 = plVar9;
          *(long *)(lVar28 + 0x30) = *(long *)(lVar28 + 0x30) + 1;
          iVar4 = 0;
          if (plVar9[3] != 0) {
            iVar4 = *(int *)(plVar9[3] + 0x110);
          }
          *(int *)(lVar28 + 0x48) = *(int *)(lVar28 + 0x48) - iVar4;
        }
        puVar32 = puVar32 + 1;
      } while (puVar8 != puVar32);
      cVar19 = (char)plVar7[0x20];
    }
  }
LAB_7102cd0258:
  puVar8 = (undefined8 *)*plVar35;
  if (cVar19 == '\0') {
    if (puVar8 != (undefined8 *)0x0) {
      FUN_71025f5420((undefined8 *)*puVar8,(undefined8 *)puVar8[1],"IPP0002");
      FUN_71025f55b0(*(undefined8 **)*plVar35,(undefined8 *)((undefined8 *)*plVar35)[1],"IPP0001");
      param_3 = "IPP0005";
      FUN_71025f55b0(*(undefined8 **)*plVar35,(undefined8 *)((undefined8 *)*plVar35)[1],"IPP0005");
    }
  }
  else if (puVar8 != (undefined8 *)0x0) {
    FUN_71025f5420((undefined8 *)*puVar8,(undefined8 *)puVar8[1],"IPP0001");
    param_3 = "IPP0005";
    FUN_71025f5420(*(undefined8 **)*plVar35,(undefined8 *)((undefined8 *)*plVar35)[1],"IPP0005");
  }
  puVar5[1] = plVar7;
  plVar7 = (long *)plVar34[0xf1];
  plVar34[0xf1] = (long)puVar5;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 8))();
    puVar5 = (undefined8 *)plVar34[0xf1];
  }
  puVar5 = (undefined8 *)puVar5[1];
  local_80 = (byte ***)0x0;
  local_78 = (byte ***)0x0;
  local_88 = (byte ***)0x0;
  lVar28 = puVar5[2];
  uVar6 = *(long *)(lVar28 + 0xa8) - *(long *)(lVar28 + 0xa0);
  if (0 < (int)(uVar6 >> 5)) {
    lVar33 = 0;
    pppbVar25 = (byte ***)0x0;
    pppbVar36 = (byte ***)0x0;
    pppbVar15 = (byte ***)0x0;
    lVar31 = 1;
    do {
      uVar22 = 0x5d1745d1745d174;
      lVar28 = *(long *)(lVar28 + 0x230);
      if (pppbVar15 < pppbVar36) {
        puVar8 = (undefined8 *)(lVar28 + lVar33);
        ppbVar1 = (byte **)puVar8[1];
        *pppbVar15 = (byte **)*puVar8;
        pppbVar15[1] = ppbVar1;
        ppbVar21 = (byte **)puVar8[4];
        ppbVar1 = (byte **)puVar8[2];
        ppbVar20 = (byte **)puVar8[3];
        *(undefined4 *)(pppbVar15 + 5) = *(undefined4 *)(puVar8 + 5);
        pppbVar15[3] = ppbVar20;
        pppbVar15[4] = ppbVar21;
        pppbVar15[2] = ppbVar1;
        pppbVar15 = (byte ***)((long)pppbVar15 + 0x2c);
        pppbVar30 = pppbVar25;
        local_80 = pppbVar15;
      }
      else {
        ppppbVar11 = (byte ****)((long)pppbVar15 - (long)pppbVar25);
        uVar10 = ((long)ppppbVar11 >> 2) * 0x2e8ba2e8ba2e8ba3 + 1;
        if (0x5d1745d1745d174 < uVar10) goto LAB_7102cd23e8;
        lVar17 = (long)pppbVar36 - (long)pppbVar25 >> 2;
        if ((ulong)(lVar17 * 0x2e8ba2e8ba2e8ba3) < 0x2e8ba2e8ba2e8ba) {
          uVar18 = lVar17 * 0x5d1745d1745d1746;
          uVar22 = uVar10;
          if (uVar10 <= uVar18) {
            uVar22 = uVar18;
          }
          if (uVar22 != 0) goto LAB_7102cd03f8;
LAB_7102cd0454:
          lVar17 = 0;
        }
        else {
LAB_7102cd03f8:
          pppbVar15 = (byte ***)(uVar22 * 0x2c);
          if (pppbVar15 == (byte ***)0x0) {
            pppbVar15 = (byte ***)0x1;
          }
          lVar17 = FUN_710392e290(0x10,pppbVar15,(long ****)param_3,param_4,param_5,param_6,param_7,
                                  param_8);
          if (lVar17 == 0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_b8 = (byte ***)((ulong)local_b8 & 0xffffffff00000000);
              param_3 = (char *)&local_a0;
              local_a0 = pppbVar15;
              uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b8);
              if (((uVar10 & 1) != 0) &&
                 (lVar17 = FUN_710392e290(0x10,pppbVar15,(long ****)param_3,param_4,param_5,param_6,
                                          param_7,param_8), lVar17 != 0)) goto LAB_7102cd0458;
            }
            goto LAB_7102cd0454;
          }
        }
LAB_7102cd0458:
        puVar32 = (undefined8 *)(lVar17 + ((long)ppppbVar11 >> 2) * 4);
        puVar8 = (undefined8 *)(lVar28 + lVar33);
        uVar26 = puVar8[1];
        *puVar32 = *puVar8;
        puVar32[1] = uVar26;
        uVar23 = puVar8[4];
        uVar26 = puVar8[2];
        uVar29 = puVar8[3];
        *(undefined4 *)(puVar32 + 5) = *(undefined4 *)(puVar8 + 5);
        puVar32[3] = uVar29;
        puVar32[4] = uVar23;
        lVar28 = SUB168(SEXT816((long)ppppbVar11) * SEXT816(-0x2e8ba2e8ba2e8ba3),8);
        puVar32[2] = uVar26;
        pppbVar36 = (byte ***)(lVar17 + uVar22 * 0x2c);
        pppbVar30 = (byte ***)((long)puVar32 + ((lVar28 >> 3) - (lVar28 >> 0x3f)) * 0x2c);
        pppbVar15 = (byte ***)((long)puVar32 + 0x2c);
        if (0 < (long)ppppbVar11) {
          memcpy(pppbVar30,pppbVar25,(size_t)ppppbVar11);
          param_3 = (char *)ppppbVar11;
        }
        local_88 = pppbVar30;
        local_80 = pppbVar15;
        local_78 = pppbVar36;
        if (pppbVar25 != (byte ***)0x0) {
          FUN_710392eb40((ulong)pppbVar25);
        }
      }
      pppbVar25 = pppbVar30;
      if ((long)(uVar6 * 0x8000000) >> 0x20 <= lVar31) break;
      lVar28 = puVar5[2];
      lVar31 = lVar31 + 1;
      lVar33 = lVar33 + 0x2c;
    } while( true );
  }
  puVar8 = (undefined8 *)
           FUN_710392e290(0x10,0x10,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b8 = (byte ***)((ulong)local_b8 & 0xffffffff00000000);
      local_a0 = (byte ***)&DAT_00000010;
      param_3 = (char *)&local_a0;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b8);
      if (((uVar6 & 1) != 0) &&
         (puVar8 = (undefined8 *)
                   FUN_710392e290(0x10,0x10,(long ****)param_3,param_4,param_5,param_6,param_7,
                                  param_8), puVar8 != (undefined8 *)0x0)) goto LAB_7102cd0558;
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_7102cd0558:
  uVar26 = *puVar5;
  uVar29 = puVar5[2];
  *puVar8 = &PTR_FUN_71051305f8;
  puVar32 = (undefined8 *)
            FUN_710392e290(0x10,200,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
  if (puVar32 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b8 = (byte ***)((ulong)local_b8 & 0xffffffff00000000);
      local_a0 = (byte ***)&DAT_000000c8;
      param_3 = (char *)&local_a0;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b8);
      if (((uVar6 & 1) != 0) &&
         (puVar32 = (undefined8 *)
                    FUN_710392e290(0x10,200,(long ****)param_3,param_4,param_5,param_6,param_7,
                                   param_8), puVar32 != (undefined8 *)0x0)) goto LAB_7102cd05c4;
    }
    puVar32 = (undefined8 *)0x0;
  }
LAB_7102cd05c4:
  *puVar32 = uVar26;
  puVar32[1] = uVar29;
  puVar32[0x17] = 0;
  puVar32[0x18] = 0;
  puVar32[2] = 0;
  puVar32[0x15] = 0;
  puVar32[0x16] = 0;
  puVar32[0x13] = 0;
  puVar32[0x14] = 0;
  puVar32[0x11] = 0;
  puVar32[0x12] = 0;
  puVar32[0xf] = 0;
  puVar32[0x10] = 0;
  puVar32[0xd] = 0;
  puVar32[0xe] = 0;
  puVar32[0xb] = 0;
  puVar32[0xc] = 0;
  puVar32[9] = 0;
  puVar32[10] = 0;
  puVar32[7] = 0;
  puVar32[8] = 0;
  puVar32[5] = 0;
  puVar32[6] = 0;
  puVar32[3] = 0;
  puVar32[4] = 0;
  puVar8[1] = puVar32;
  plVar7 = (long *)FUN_710392e290(0x10,0x20,(long ****)param_3,param_4,param_5,param_6,param_7,
                                  param_8);
  if (plVar7 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b8 = (byte ***)((ulong)local_b8 & 0xffffffff00000000);
      local_a0 = (byte ***)&SUB_00000020;
      ppppbVar11 = &local_a0;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b8);
      if (((uVar6 & 1) != 0) &&
         (plVar7 = (long *)FUN_710392e290(0x10,0x20,(long ****)ppppbVar11,param_4,param_5,param_6,
                                          param_7,param_8), plVar7 != (long *)0x0))
      goto LAB_7102cd0658;
    }
    plVar7 = (long *)0x0;
  }
LAB_7102cd0658:
  plVar35 = plVar7 + 1;
  *plVar35 = 0;
  plVar7[2] = 0;
  plVar7[3] = (long)puVar8;
  *plVar7 = (long)&DAT_7105130670;
  ppppbVar11 = (byte ****)(puVar5[2] + 0xa0);
  pppplVar14 = (long ****)(puVar5[2] + 0x6d0);
  ppppbVar13 = &local_88;
  FUN_7102cd8ae0((long *)puVar8[1],"s06_dogs_asibaa",(long ****)ppppbVar13,ppppbVar11,pppplVar14,
                 param_6,param_7,param_8);
  do {
    cVar19 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar35,0x10);
    if (bVar3) {
      *plVar35 = *plVar35 + 1;
      cVar19 = ExclusiveMonitorsStatus();
    }
  } while (cVar19 != '\0');
  puVar5[10] = puVar8;
  plVar9 = (long *)puVar5[0xb];
  puVar5[0xb] = plVar7;
  if (plVar9 != (long *)0x0) {
    plVar16 = plVar9 + 1;
    do {
      lVar28 = *plVar16;
      cVar19 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar3) {
        *plVar16 = lVar28 + -1;
        cVar19 = ExclusiveMonitorsStatus();
      }
    } while (cVar19 != '\0');
    if (lVar28 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      std::__shared_weak_count::__release_weak();
    }
  }
  do {
    lVar28 = *plVar35;
    cVar19 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar35,0x10);
    if (bVar3) {
      *plVar35 = lVar28 + -1;
      cVar19 = ExclusiveMonitorsStatus();
    }
  } while (cVar19 != '\0');
  if (lVar28 == 0) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    std::__shared_weak_count::__release_weak();
  }
  if (local_88 != (byte ***)0x0) {
    local_80 = local_88;
    FUN_710392eb40((ulong)local_88);
  }
  local_80 = (byte ***)0x0;
  local_78 = (byte ***)0x0;
  local_88 = (byte ***)0x0;
  lVar28 = puVar5[2];
  uVar6 = *(long *)(lVar28 + 0xc0) - *(long *)(lVar28 + 0xb8);
  if (0 < (int)(uVar6 >> 5)) {
    pppbVar25 = (byte ***)0x0;
    pppbVar36 = (byte ***)0x0;
    pppbVar15 = (byte ***)0x0;
    lVar31 = 1;
    lVar33 = 0x134;
    do {
      uVar22 = 0x5d1745d1745d174;
      lVar28 = *(long *)(lVar28 + 0x230);
      if (pppbVar15 < pppbVar36) {
        puVar8 = (undefined8 *)(lVar28 + lVar33);
        ppbVar1 = (byte **)puVar8[1];
        *pppbVar15 = (byte **)*puVar8;
        pppbVar15[1] = ppbVar1;
        ppbVar21 = (byte **)puVar8[4];
        ppbVar1 = (byte **)puVar8[2];
        ppbVar20 = (byte **)puVar8[3];
        *(undefined4 *)(pppbVar15 + 5) = *(undefined4 *)(puVar8 + 5);
        pppbVar15[3] = ppbVar20;
        pppbVar15[4] = ppbVar21;
        pppbVar15[2] = ppbVar1;
        pppbVar15 = (byte ***)((long)pppbVar15 + 0x2c);
        pppbVar30 = pppbVar25;
        local_80 = pppbVar15;
      }
      else {
        ppppbVar27 = (byte ****)((long)pppbVar15 - (long)pppbVar25);
        uVar10 = ((long)ppppbVar27 >> 2) * 0x2e8ba2e8ba2e8ba3 + 1;
        if (0x5d1745d1745d174 < uVar10) goto LAB_7102cd23e8;
        lVar17 = (long)pppbVar36 - (long)pppbVar25 >> 2;
        if ((ulong)(lVar17 * 0x2e8ba2e8ba2e8ba3) < 0x2e8ba2e8ba2e8ba) {
          uVar18 = lVar17 * 0x5d1745d1745d1746;
          uVar22 = uVar10;
          if (uVar10 <= uVar18) {
            uVar22 = uVar18;
          }
          if (uVar22 != 0) goto LAB_7102cd082c;
LAB_7102cd0888:
          lVar17 = 0;
        }
        else {
LAB_7102cd082c:
          pppbVar15 = (byte ***)(uVar22 * 0x2c);
          if (pppbVar15 == (byte ***)0x0) {
            pppbVar15 = (byte ***)0x1;
          }
          lVar17 = FUN_710392e290(0x10,pppbVar15,(long ****)ppppbVar13,ppppbVar11,pppplVar14,param_6
                                  ,param_7,param_8);
          if (lVar17 == 0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_b8 = (byte ***)((ulong)local_b8 & 0xffffffff00000000);
              ppppbVar13 = &local_a0;
              local_a0 = pppbVar15;
              uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b8);
              if (((uVar10 & 1) != 0) &&
                 (lVar17 = FUN_710392e290(0x10,pppbVar15,(long ****)ppppbVar13,ppppbVar11,pppplVar14
                                          ,param_6,param_7,param_8), lVar17 != 0))
              goto LAB_7102cd088c;
            }
            goto LAB_7102cd0888;
          }
        }
LAB_7102cd088c:
        puVar32 = (undefined8 *)(lVar17 + ((long)ppppbVar27 >> 2) * 4);
        puVar8 = (undefined8 *)(lVar28 + lVar33);
        uVar26 = puVar8[1];
        *puVar32 = *puVar8;
        puVar32[1] = uVar26;
        uVar23 = puVar8[4];
        uVar26 = puVar8[2];
        uVar29 = puVar8[3];
        *(undefined4 *)(puVar32 + 5) = *(undefined4 *)(puVar8 + 5);
        puVar32[3] = uVar29;
        puVar32[4] = uVar23;
        lVar28 = SUB168(SEXT816((long)ppppbVar27) * SEXT816(-0x2e8ba2e8ba2e8ba3),8);
        puVar32[2] = uVar26;
        pppbVar36 = (byte ***)(lVar17 + uVar22 * 0x2c);
        pppbVar30 = (byte ***)((long)puVar32 + ((lVar28 >> 3) - (lVar28 >> 0x3f)) * 0x2c);
        pppbVar15 = (byte ***)((long)puVar32 + 0x2c);
        if (0 < (long)ppppbVar27) {
          memcpy(pppbVar30,pppbVar25,(size_t)ppppbVar27);
          ppppbVar13 = ppppbVar27;
        }
        local_88 = pppbVar30;
        local_80 = pppbVar15;
        local_78 = pppbVar36;
        if (pppbVar25 != (byte ***)0x0) {
          FUN_710392eb40((ulong)pppbVar25);
        }
      }
      pppbVar25 = pppbVar30;
      if ((long)(uVar6 * 0x8000000) >> 0x20 <= lVar31) break;
      lVar28 = puVar5[2];
      lVar31 = lVar31 + 1;
      lVar33 = lVar33 + 0x2c;
    } while( true );
  }
  puVar8 = (undefined8 *)
           FUN_710392e290(0x10,0x10,(long ****)ppppbVar13,ppppbVar11,pppplVar14,param_6,param_7,
                          param_8);
  if (puVar8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b8 = (byte ***)((ulong)local_b8 & 0xffffffff00000000);
      local_a0 = (byte ***)&DAT_00000010;
      ppppbVar13 = &local_a0;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b8);
      if (((uVar6 & 1) != 0) &&
         (puVar8 = (undefined8 *)
                   FUN_710392e290(0x10,0x10,(long ****)ppppbVar13,ppppbVar11,pppplVar14,param_6,
                                  param_7,param_8), puVar8 != (undefined8 *)0x0))
      goto LAB_7102cd098c;
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_7102cd098c:
  uVar26 = *puVar5;
  uVar29 = puVar5[2];
  *puVar8 = &PTR_FUN_71051305f8;
  puVar32 = (undefined8 *)
            FUN_710392e290(0x10,200,(long ****)ppppbVar13,ppppbVar11,pppplVar14,param_6,param_7,
                           param_8);
  if (puVar32 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b8 = (byte ***)((ulong)local_b8 & 0xffffffff00000000);
      local_a0 = (byte ***)&DAT_000000c8;
      ppppbVar13 = &local_a0;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b8);
      if (((uVar6 & 1) != 0) &&
         (puVar32 = (undefined8 *)
                    FUN_710392e290(0x10,200,(long ****)ppppbVar13,ppppbVar11,pppplVar14,param_6,
                                   param_7,param_8), puVar32 != (undefined8 *)0x0))
      goto LAB_7102cd0a00;
    }
    puVar32 = (undefined8 *)0x0;
  }
LAB_7102cd0a00:
  *puVar32 = uVar26;
  puVar32[1] = uVar29;
  puVar32[0x17] = 0;
  puVar32[0x18] = 0;
  puVar32[2] = 0;
  puVar32[0x15] = 0;
  puVar32[0x16] = 0;
  puVar32[0x13] = 0;
  puVar32[0x14] = 0;
  puVar32[0x11] = 0;
  puVar32[0x12] = 0;
  puVar32[0xf] = 0;
  puVar32[0x10] = 0;
  puVar32[0xd] = 0;
  puVar32[0xe] = 0;
  puVar32[0xb] = 0;
  puVar32[0xc] = 0;
  puVar32[9] = 0;
  puVar32[10] = 0;
  puVar32[7] = 0;
  puVar32[8] = 0;
  puVar32[5] = 0;
  puVar32[6] = 0;
  puVar32[3] = 0;
  puVar32[4] = 0;
  puVar8[1] = puVar32;
  plVar7 = (long *)FUN_710392e290(0x10,0x20,(long ****)ppppbVar13,ppppbVar11,pppplVar14,param_6,
                                  param_7,param_8);
  if (plVar7 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b8 = (byte ***)((ulong)local_b8 & 0xffffffff00000000);
      local_a0 = (byte ***)&SUB_00000020;
      ppppbVar13 = &local_a0;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b8);
      if (((uVar6 & 1) != 0) &&
         (plVar7 = (long *)FUN_710392e290(0x10,0x20,(long ****)ppppbVar13,ppppbVar11,pppplVar14,
                                          param_6,param_7,param_8), plVar7 != (long *)0x0))
      goto LAB_7102cd0a94;
    }
    plVar7 = (long *)0x0;
  }
LAB_7102cd0a94:
  plVar35 = plVar7 + 1;
  *plVar35 = 0;
  plVar7[2] = 0;
  plVar7[3] = (long)puVar8;
  *plVar7 = (long)&DAT_7105130670;
  ppppbVar11 = (byte ****)(puVar5[2] + 0xb8);
  pppplVar14 = (long ****)(puVar5[2] + 0x6e8);
  ppppbVar13 = &local_88;
  FUN_7102cd8ae0((long *)puVar8[1],"s06_dogs_asibab",(long ****)ppppbVar13,ppppbVar11,pppplVar14,
                 param_6,param_7,param_8);
  do {
    cVar19 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar35,0x10);
    if (bVar3) {
      *plVar35 = *plVar35 + 1;
      cVar19 = ExclusiveMonitorsStatus();
    }
  } while (cVar19 != '\0');
  puVar5[0xc] = puVar8;
  plVar9 = (long *)puVar5[0xd];
  puVar5[0xd] = plVar7;
  if (plVar9 != (long *)0x0) {
    plVar16 = plVar9 + 1;
    do {
      lVar28 = *plVar16;
      cVar19 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar3) {
        *plVar16 = lVar28 + -1;
        cVar19 = ExclusiveMonitorsStatus();
      }
    } while (cVar19 != '\0');
    if (lVar28 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      std::__shared_weak_count::__release_weak();
    }
  }
  do {
    lVar28 = *plVar35;
    cVar19 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar35,0x10);
    if (bVar3) {
      *plVar35 = lVar28 + -1;
      cVar19 = ExclusiveMonitorsStatus();
    }
  } while (cVar19 != '\0');
  if (lVar28 == 0) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    std::__shared_weak_count::__release_weak();
  }
  if (local_88 != (byte ***)0x0) {
    local_80 = local_88;
    FUN_710392eb40((ulong)local_88);
  }
  local_80 = (byte ***)0x0;
  local_78 = (byte ***)0x0;
  local_88 = (byte ***)0x0;
  lVar28 = puVar5[2];
  uVar6 = *(long *)(lVar28 + 0xd8) - *(long *)(lVar28 + 0xd0);
  if (0 < (int)(uVar6 >> 5)) {
    pppbVar25 = (byte ***)0x0;
    pppbVar36 = (byte ***)0x0;
    pppbVar15 = (byte ***)0x0;
    lVar31 = 1;
    lVar33 = 0x2c0;
    do {
      uVar22 = 0x5d1745d1745d174;
      lVar28 = *(long *)(lVar28 + 0x230);
      if (pppbVar15 < pppbVar36) {
        puVar8 = (undefined8 *)(lVar28 + lVar33);
        ppbVar1 = (byte **)puVar8[1];
        *pppbVar15 = (byte **)*puVar8;
        pppbVar15[1] = ppbVar1;
        ppbVar21 = (byte **)puVar8[4];
        ppbVar1 = (byte **)puVar8[2];
        ppbVar20 = (byte **)puVar8[3];
        *(undefined4 *)(pppbVar15 + 5) = *(undefined4 *)(puVar8 + 5);
        pppbVar15[3] = ppbVar20;
        pppbVar15[4] = ppbVar21;
        pppbVar15[2] = ppbVar1;
        pppbVar15 = (byte ***)((long)pppbVar15 + 0x2c);
        pppbVar30 = pppbVar25;
        local_80 = pppbVar15;
      }
      else {
        ppppbVar27 = (byte ****)((long)pppbVar15 - (long)pppbVar25);
        uVar10 = ((long)ppppbVar27 >> 2) * 0x2e8ba2e8ba2e8ba3 + 1;
        if (0x5d1745d1745d174 < uVar10) {
LAB_7102cd23e8:
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        lVar17 = (long)pppbVar36 - (long)pppbVar25 >> 2;
        if ((ulong)(lVar17 * 0x2e8ba2e8ba2e8ba3) < 0x2e8ba2e8ba2e8ba) {
          uVar18 = lVar17 * 0x5d1745d1745d1746;
          uVar22 = uVar10;
          if (uVar10 <= uVar18) {
            uVar22 = uVar18;
          }
          if (uVar22 != 0) goto LAB_7102cd0c60;
LAB_7102cd0cbc:
          lVar17 = 0;
        }
        else {
LAB_7102cd0c60:
          pppbVar15 = (byte ***)(uVar22 * 0x2c);
          if (pppbVar15 == (byte ***)0x0) {
            pppbVar15 = (byte ***)0x1;
          }
          lVar17 = FUN_710392e290(0x10,pppbVar15,(long ****)ppppbVar13,ppppbVar11,pppplVar14,param_6
                                  ,param_7,param_8);
          if (lVar17 == 0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_b8 = (byte ***)((ulong)local_b8 & 0xffffffff00000000);
              ppppbVar13 = &local_a0;
              local_a0 = pppbVar15;
              uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b8);
              if (((uVar10 & 1) != 0) &&
                 (lVar17 = FUN_710392e290(0x10,pppbVar15,(long ****)ppppbVar13,ppppbVar11,pppplVar14
                                          ,param_6,param_7,param_8), lVar17 != 0))
              goto LAB_7102cd0cc0;
            }
            goto LAB_7102cd0cbc;
          }
        }
LAB_7102cd0cc0:
        puVar32 = (undefined8 *)(lVar17 + ((long)ppppbVar27 >> 2) * 4);
        puVar8 = (undefined8 *)(lVar28 + lVar33);
        uVar26 = puVar8[1];
        *puVar32 = *puVar8;
        puVar32[1] = uVar26;
        uVar23 = puVar8[4];
        uVar26 = puVar8[2];
        uVar29 = puVar8[3];
        *(undefined4 *)(puVar32 + 5) = *(undefined4 *)(puVar8 + 5);
        puVar32[3] = uVar29;
        puVar32[4] = uVar23;
        lVar28 = SUB168(SEXT816((long)ppppbVar27) * SEXT816(-0x2e8ba2e8ba2e8ba3),8);
        puVar32[2] = uVar26;
        pppbVar36 = (byte ***)(lVar17 + uVar22 * 0x2c);
        pppbVar30 = (byte ***)((long)puVar32 + ((lVar28 >> 3) - (lVar28 >> 0x3f)) * 0x2c);
        pppbVar15 = (byte ***)((long)puVar32 + 0x2c);
        if (0 < (long)ppppbVar27) {
          memcpy(pppbVar30,pppbVar25,(size_t)ppppbVar27);
          ppppbVar13 = ppppbVar27;
        }
        local_88 = pppbVar30;
        local_80 = pppbVar15;
        local_78 = pppbVar36;
        if (pppbVar25 != (byte ***)0x0) {
          FUN_710392eb40((ulong)pppbVar25);
        }
      }
      pppbVar25 = pppbVar30;
      if ((long)(uVar6 * 0x8000000) >> 0x20 <= lVar31) break;
      lVar28 = puVar5[2];
      lVar31 = lVar31 + 1;
      lVar33 = lVar33 + 0x2c;
    } while( true );
  }
  puVar8 = (undefined8 *)
           FUN_710392e290(0x10,0x10,(long ****)ppppbVar13,ppppbVar11,pppplVar14,param_6,param_7,
                          param_8);
  if (puVar8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b8 = (byte ***)((ulong)local_b8 & 0xffffffff00000000);
      local_a0 = (byte ***)&DAT_00000010;
      ppppbVar13 = &local_a0;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b8);
      if (((uVar6 & 1) != 0) &&
         (puVar8 = (undefined8 *)
                   FUN_710392e290(0x10,0x10,(long ****)ppppbVar13,ppppbVar11,pppplVar14,param_6,
                                  param_7,param_8), puVar8 != (undefined8 *)0x0))
      goto LAB_7102cd0dc0;
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_7102cd0dc0:
  uVar26 = *puVar5;
  uVar29 = puVar5[2];
  *puVar8 = &PTR_FUN_71051305f8;
  puVar32 = (undefined8 *)
            FUN_710392e290(0x10,200,(long ****)ppppbVar13,ppppbVar11,pppplVar14,param_6,param_7,
                           param_8);
  if (puVar32 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b8 = (byte ***)((ulong)local_b8 & 0xffffffff00000000);
      local_a0 = (byte ***)&DAT_000000c8;
      ppppbVar13 = &local_a0;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b8);
      if (((uVar6 & 1) != 0) &&
         (puVar32 = (undefined8 *)
                    FUN_710392e290(0x10,200,(long ****)ppppbVar13,ppppbVar11,pppplVar14,param_6,
                                   param_7,param_8), puVar32 != (undefined8 *)0x0))
      goto LAB_7102cd0e38;
    }
    puVar32 = (undefined8 *)0x0;
  }
LAB_7102cd0e38:
  *puVar32 = uVar26;
  puVar32[1] = uVar29;
  puVar32[0x17] = 0;
  puVar32[0x18] = 0;
  puVar32[2] = 0;
  puVar32[0x15] = 0;
  puVar32[0x16] = 0;
  puVar32[0x13] = 0;
  puVar32[0x14] = 0;
  puVar32[0x11] = 0;
  puVar32[0x12] = 0;
  puVar32[0xf] = 0;
  puVar32[0x10] = 0;
  puVar32[0xd] = 0;
  puVar32[0xe] = 0;
  puVar32[0xb] = 0;
  puVar32[0xc] = 0;
  puVar32[9] = 0;
  puVar32[10] = 0;
  puVar32[7] = 0;
  puVar32[8] = 0;
  puVar32[5] = 0;
  puVar32[6] = 0;
  puVar32[3] = 0;
  puVar32[4] = 0;
  puVar8[1] = puVar32;
  plVar7 = (long *)FUN_710392e290(0x10,0x20,(long ****)ppppbVar13,ppppbVar11,pppplVar14,param_6,
                                  param_7,param_8);
  if (plVar7 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b8 = (byte ***)((ulong)local_b8 & 0xffffffff00000000);
      local_a0 = (byte ***)&SUB_00000020;
      ppppbVar13 = &local_a0;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b8);
      if (((uVar6 & 1) != 0) &&
         (plVar7 = (long *)FUN_710392e290(0x10,0x20,(long ****)ppppbVar13,ppppbVar11,pppplVar14,
                                          param_6,param_7,param_8), plVar7 != (long *)0x0))
      goto LAB_7102cd0ecc;
    }
    plVar7 = (long *)0x0;
  }
LAB_7102cd0ecc:
  plVar35 = plVar7 + 1;
  *plVar35 = 0;
  plVar7[2] = 0;
  plVar7[3] = (long)puVar8;
  *plVar7 = (long)&DAT_7105130670;
  ppppbVar11 = (byte ****)(puVar5[2] + 0xd0);
  pppplVar14 = (long ****)(puVar5[2] + 0x700);
  ppppbVar13 = &local_88;
  FUN_7102cd8ae0((long *)puVar8[1],"s06_dogs_asibac",(long ****)ppppbVar13,ppppbVar11,pppplVar14,
                 param_6,param_7,param_8);
  do {
    cVar19 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar35,0x10);
    if (bVar3) {
      *plVar35 = *plVar35 + 1;
      cVar19 = ExclusiveMonitorsStatus();
    }
  } while (cVar19 != '\0');
  puVar5[0xe] = puVar8;
  plVar9 = (long *)puVar5[0xf];
  puVar5[0xf] = plVar7;
  if (plVar9 != (long *)0x0) {
    plVar16 = plVar9 + 1;
    do {
      lVar28 = *plVar16;
      cVar19 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar3) {
        *plVar16 = lVar28 + -1;
        cVar19 = ExclusiveMonitorsStatus();
      }
    } while (cVar19 != '\0');
    if (lVar28 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      std::__shared_weak_count::__release_weak();
    }
  }
  do {
    lVar28 = *plVar35;
    cVar19 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar35,0x10);
    if (bVar3) {
      *plVar35 = lVar28 + -1;
      cVar19 = ExclusiveMonitorsStatus();
    }
  } while (cVar19 != '\0');
  if (lVar28 == 0) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    std::__shared_weak_count::__release_weak();
  }
  if (local_88 != (byte ***)0x0) {
    local_80 = local_88;
    FUN_710392eb40((ulong)local_88);
  }
  lVar31 = puVar5[2];
  lVar28 = *(long *)(lVar31 + 0x230);
  local_88 = (byte ***)
             FUN_710392e290(0x10,0x2c,(long ****)ppppbVar13,ppppbVar11,pppplVar14,param_6,param_7,
                            param_8);
  if (local_88 == (byte ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (byte ***)((ulong)local_a0 & 0xffffffff00000000);
      local_88 = (byte ***)&DAT_0000002c;
      ppppbVar13 = &local_88;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      if (((uVar6 & 1) != 0) &&
         (local_88 = (byte ***)
                     FUN_710392e290(0x10,0x2c,(long ****)ppppbVar13,ppppbVar11,pppplVar14,param_6,
                                    param_7,param_8), local_88 != (byte ***)0x0))
      goto LAB_7102cd0ff4;
    }
    local_88 = (byte ***)0x0;
  }
LAB_7102cd0ff4:
  ppbVar1 = *(byte ***)(lVar28 + 0x454);
  *local_88 = *(byte ***)(lVar28 + 0x44c);
  local_88[1] = ppbVar1;
  ppbVar20 = *(byte ***)(lVar28 + 0x46c);
  ppbVar1 = *(byte ***)(lVar28 + 0x464);
  uVar2 = *(undefined4 *)(lVar28 + 0x474);
  local_88[2] = *(byte ***)(lVar28 + 0x45c);
  local_80 = (byte ***)((long)local_88 + 0x2c);
  *(undefined4 *)(local_88 + 5) = uVar2;
  local_88[3] = ppbVar1;
  local_88[4] = ppbVar20;
  local_98 = (byte ***)0x0;
  uStack_90 = 0;
  local_a0 = (byte ***)0x0;
  local_78 = local_80;
  local_b8 = (byte ***)
             FUN_710392e290(0x10,0x20,(long ****)ppppbVar13,ppppbVar11,pppplVar14,param_6,param_7,
                            param_8);
  if (local_b8 == (byte ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (byte ***)((ulong)local_70 & 0xffffffff00000000);
      local_b8 = (byte ***)&SUB_00000020;
      ppppbVar13 = &local_b8;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar6 & 1) != 0) &&
         (local_b8 = (byte ***)
                     FUN_710392e290(0x10,0x20,(long ****)ppppbVar13,ppppbVar11,pppplVar14,param_6,
                                    param_7,param_8), local_b8 != (byte ***)0x0))
      goto LAB_7102cd1080;
    }
    local_b8 = (byte ***)0x0;
  }
LAB_7102cd1080:
  ppbVar20 = *(byte ***)(lVar31 + 0xf0);
  ppbVar1 = *(byte ***)(lVar31 + 0xf8);
  ppbVar21 = *(byte ***)(lVar31 + 0x100);
  *local_b8 = *(byte ***)(lVar31 + 0xe8);
  local_b8[1] = ppbVar20;
  local_b0 = local_b8 + 4;
  local_b8[2] = ppbVar1;
  local_b8[3] = ppbVar21;
  local_a8 = local_b0;
  puVar8 = (undefined8 *)
           FUN_710392e290(0x10,0x10,(long ****)ppppbVar13,ppppbVar11,pppplVar14,param_6,param_7,
                          param_8);
  if (puVar8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_70 = (byte ***)&DAT_00000010;
      ppppbVar13 = &local_70;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar6 & 1) != 0) &&
         (puVar8 = (undefined8 *)
                   FUN_710392e290(0x10,0x10,(long ****)ppppbVar13,ppppbVar11,pppplVar14,param_6,
                                  param_7,param_8), puVar8 != (undefined8 *)0x0))
      goto LAB_7102cd10f8;
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_7102cd10f8:
  uVar26 = *puVar5;
  *puVar8 = &PTR_FUN_71051305f8;
  puVar32 = (undefined8 *)
            FUN_710392e290(0x10,200,(long ****)ppppbVar13,ppppbVar11,pppplVar14,param_6,param_7,
                           param_8);
  if (puVar32 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_70 = (byte ***)&DAT_000000c8;
      ppppbVar13 = &local_70;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar6 & 1) != 0) &&
         (puVar32 = (undefined8 *)
                    FUN_710392e290(0x10,200,(long ****)ppppbVar13,ppppbVar11,pppplVar14,param_6,
                                   param_7,param_8), puVar32 != (undefined8 *)0x0))
      goto LAB_7102cd1158;
    }
    puVar32 = (undefined8 *)0x0;
  }
LAB_7102cd1158:
  *puVar32 = uVar26;
  puVar32[1] = lVar31;
  puVar32[0x17] = 0;
  puVar32[0x18] = 0;
  puVar32[2] = 0;
  puVar32[0x15] = 0;
  puVar32[0x16] = 0;
  puVar32[0x13] = 0;
  puVar32[0x14] = 0;
  puVar32[0x11] = 0;
  puVar32[0x12] = 0;
  puVar32[0xf] = 0;
  puVar32[0x10] = 0;
  puVar32[0xd] = 0;
  puVar32[0xe] = 0;
  puVar32[0xb] = 0;
  puVar32[0xc] = 0;
  puVar32[9] = 0;
  puVar32[10] = 0;
  puVar32[7] = 0;
  puVar32[8] = 0;
  puVar32[5] = 0;
  puVar32[6] = 0;
  puVar32[3] = 0;
  puVar32[4] = 0;
  puVar8[1] = puVar32;
  plVar7 = (long *)FUN_710392e290(0x10,0x20,(long ****)ppppbVar13,ppppbVar11,pppplVar14,param_6,
                                  param_7,param_8);
  if (plVar7 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_70 = (byte ***)&SUB_00000020;
      ppppbVar13 = &local_70;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar6 & 1) != 0) &&
         (plVar7 = (long *)FUN_710392e290(0x10,0x20,(long ****)ppppbVar13,ppppbVar11,pppplVar14,
                                          param_6,param_7,param_8), plVar7 != (long *)0x0))
      goto LAB_7102cd11ec;
    }
    plVar7 = (long *)0x0;
  }
LAB_7102cd11ec:
  plVar35 = plVar7 + 1;
  *plVar35 = 0;
  plVar7[2] = 0;
  plVar7[3] = (long)puVar8;
  *plVar7 = (long)&DAT_7105130670;
  ppppbVar27 = &local_88;
  ppppbVar11 = &local_b8;
  ppppbVar13 = &local_a0;
  FUN_7102cd8ae0((long *)puVar8[1],"s06_item_gold",(long ****)ppppbVar27,ppppbVar11,
                 (long ****)ppppbVar13,param_6,param_7,param_8);
  do {
    cVar19 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar35,0x10);
    if (bVar3) {
      *plVar35 = *plVar35 + 1;
      cVar19 = ExclusiveMonitorsStatus();
    }
  } while (cVar19 != '\0');
  puVar5[0x10] = puVar8;
  plVar9 = (long *)puVar5[0x11];
  puVar5[0x11] = plVar7;
  if (plVar9 != (long *)0x0) {
    plVar16 = plVar9 + 1;
    do {
      lVar28 = *plVar16;
      cVar19 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar3) {
        *plVar16 = lVar28 + -1;
        cVar19 = ExclusiveMonitorsStatus();
      }
    } while (cVar19 != '\0');
    if (lVar28 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      std::__shared_weak_count::__release_weak();
    }
  }
  do {
    lVar28 = *plVar35;
    cVar19 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar35,0x10);
    if (bVar3) {
      *plVar35 = lVar28 + -1;
      cVar19 = ExclusiveMonitorsStatus();
    }
  } while (cVar19 != '\0');
  if (lVar28 == 0) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    std::__shared_weak_count::__release_weak();
  }
  if (local_b8 != (byte ***)0x0) {
    local_b0 = local_b8;
    FUN_710392eb40((ulong)local_b8);
  }
  if (local_a0 != (byte ***)0x0) {
    local_98 = local_a0;
    FUN_710392eb40((ulong)local_a0);
  }
  if (local_88 != (byte ***)0x0) {
    local_80 = local_88;
    FUN_710392eb40((ulong)local_88);
  }
  lVar31 = puVar5[2];
  lVar28 = *(long *)(lVar31 + 0x230);
  local_88 = (byte ***)
             FUN_710392e290(0x10,0x2c,(long ****)ppppbVar27,ppppbVar11,(long ****)ppppbVar13,param_6
                            ,param_7,param_8);
  if (local_88 == (byte ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (byte ***)((ulong)local_a0 & 0xffffffff00000000);
      local_88 = (byte ***)&DAT_0000002c;
      ppppbVar27 = &local_88;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      if (((uVar6 & 1) != 0) &&
         (local_88 = (byte ***)
                     FUN_710392e290(0x10,0x2c,(long ****)ppppbVar27,ppppbVar11,(long ****)ppppbVar13
                                    ,param_6,param_7,param_8), local_88 != (byte ***)0x0))
      goto LAB_7102cd132c;
    }
    local_88 = (byte ***)0x0;
  }
LAB_7102cd132c:
  ppbVar1 = *(byte ***)(lVar28 + 0x480);
  *local_88 = *(byte ***)(lVar28 + 0x478);
  local_88[1] = ppbVar1;
  ppbVar20 = *(byte ***)(lVar28 + 0x498);
  ppbVar1 = *(byte ***)(lVar28 + 0x490);
  uVar2 = *(undefined4 *)(lVar28 + 0x4a0);
  local_88[2] = *(byte ***)(lVar28 + 0x488);
  local_80 = (byte ***)((long)local_88 + 0x2c);
  *(undefined4 *)(local_88 + 5) = uVar2;
  local_88[3] = ppbVar1;
  local_88[4] = ppbVar20;
  local_98 = (byte ***)0x0;
  uStack_90 = 0;
  local_a0 = (byte ***)0x0;
  local_78 = local_80;
  local_b8 = (byte ***)
             FUN_710392e290(0x10,0x20,(long ****)ppppbVar27,ppppbVar11,(long ****)ppppbVar13,param_6
                            ,param_7,param_8);
  if (local_b8 == (byte ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (byte ***)((ulong)local_70 & 0xffffffff00000000);
      local_b8 = (byte ***)&SUB_00000020;
      ppppbVar27 = &local_b8;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar6 & 1) != 0) &&
         (local_b8 = (byte ***)
                     FUN_710392e290(0x10,0x20,(long ****)ppppbVar27,ppppbVar11,(long ****)ppppbVar13
                                    ,param_6,param_7,param_8), local_b8 != (byte ***)0x0))
      goto LAB_7102cd13b8;
    }
    local_b8 = (byte ***)0x0;
  }
LAB_7102cd13b8:
  ppbVar20 = *(byte ***)(lVar31 + 0x110);
  ppbVar1 = *(byte ***)(lVar31 + 0x118);
  ppbVar21 = *(byte ***)(lVar31 + 0x120);
  *local_b8 = *(byte ***)(lVar31 + 0x108);
  local_b8[1] = ppbVar20;
  local_b0 = local_b8 + 4;
  local_b8[2] = ppbVar1;
  local_b8[3] = ppbVar21;
  local_a8 = local_b0;
  puVar8 = (undefined8 *)
           FUN_710392e290(0x10,0x10,(long ****)ppppbVar27,ppppbVar11,(long ****)ppppbVar13,param_6,
                          param_7,param_8);
  if (puVar8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_70 = (byte ***)&DAT_00000010;
      ppppbVar27 = &local_70;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar6 & 1) != 0) &&
         (puVar8 = (undefined8 *)
                   FUN_710392e290(0x10,0x10,(long ****)ppppbVar27,ppppbVar11,(long ****)ppppbVar13,
                                  param_6,param_7,param_8), puVar8 != (undefined8 *)0x0))
      goto LAB_7102cd1430;
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_7102cd1430:
  uVar26 = *puVar5;
  *puVar8 = &PTR_FUN_71051305f8;
  puVar32 = (undefined8 *)
            FUN_710392e290(0x10,200,(long ****)ppppbVar27,ppppbVar11,(long ****)ppppbVar13,param_6,
                           param_7,param_8);
  if (puVar32 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_70 = (byte ***)&DAT_000000c8;
      ppppbVar27 = &local_70;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar6 & 1) != 0) &&
         (puVar32 = (undefined8 *)
                    FUN_710392e290(0x10,200,(long ****)ppppbVar27,ppppbVar11,(long ****)ppppbVar13,
                                   param_6,param_7,param_8), puVar32 != (undefined8 *)0x0))
      goto LAB_7102cd1490;
    }
    puVar32 = (undefined8 *)0x0;
  }
LAB_7102cd1490:
  *puVar32 = uVar26;
  puVar32[1] = lVar31;
  puVar32[0x17] = 0;
  puVar32[0x18] = 0;
  puVar32[2] = 0;
  puVar32[0x15] = 0;
  puVar32[0x16] = 0;
  puVar32[0x13] = 0;
  puVar32[0x14] = 0;
  puVar32[0x11] = 0;
  puVar32[0x12] = 0;
  puVar32[0xf] = 0;
  puVar32[0x10] = 0;
  puVar32[0xd] = 0;
  puVar32[0xe] = 0;
  puVar32[0xb] = 0;
  puVar32[0xc] = 0;
  puVar32[9] = 0;
  puVar32[10] = 0;
  puVar32[7] = 0;
  puVar32[8] = 0;
  puVar32[5] = 0;
  puVar32[6] = 0;
  puVar32[3] = 0;
  puVar32[4] = 0;
  puVar8[1] = puVar32;
  plVar7 = (long *)FUN_710392e290(0x10,0x20,(long ****)ppppbVar27,ppppbVar11,(long ****)ppppbVar13,
                                  param_6,param_7,param_8);
  if (plVar7 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_70 = (byte ***)&SUB_00000020;
      ppppbVar27 = &local_70;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar6 & 1) != 0) &&
         (plVar7 = (long *)FUN_710392e290(0x10,0x20,(long ****)ppppbVar27,ppppbVar11,
                                          (long ****)ppppbVar13,param_6,param_7,param_8),
         plVar7 != (long *)0x0)) goto LAB_7102cd1524;
    }
    plVar7 = (long *)0x0;
  }
LAB_7102cd1524:
  plVar35 = plVar7 + 1;
  *plVar35 = 0;
  plVar7[2] = 0;
  plVar7[3] = (long)puVar8;
  *plVar7 = (long)&DAT_7105130670;
  ppppbVar27 = &local_88;
  ppppbVar11 = &local_b8;
  ppppbVar13 = &local_a0;
  FUN_7102cd8ae0((long *)puVar8[1],"s06_item_hamburger",(long ****)ppppbVar27,ppppbVar11,
                 (long ****)ppppbVar13,param_6,param_7,param_8);
  do {
    cVar19 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar35,0x10);
    if (bVar3) {
      *plVar35 = *plVar35 + 1;
      cVar19 = ExclusiveMonitorsStatus();
    }
  } while (cVar19 != '\0');
  puVar5[0x12] = puVar8;
  plVar9 = (long *)puVar5[0x13];
  puVar5[0x13] = plVar7;
  if (plVar9 != (long *)0x0) {
    plVar16 = plVar9 + 1;
    do {
      lVar28 = *plVar16;
      cVar19 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar3) {
        *plVar16 = lVar28 + -1;
        cVar19 = ExclusiveMonitorsStatus();
      }
    } while (cVar19 != '\0');
    if (lVar28 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      std::__shared_weak_count::__release_weak();
    }
  }
  do {
    lVar28 = *plVar35;
    cVar19 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar35,0x10);
    if (bVar3) {
      *plVar35 = lVar28 + -1;
      cVar19 = ExclusiveMonitorsStatus();
    }
  } while (cVar19 != '\0');
  if (lVar28 == 0) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    std::__shared_weak_count::__release_weak();
  }
  if (local_b8 != (byte ***)0x0) {
    local_b0 = local_b8;
    FUN_710392eb40((ulong)local_b8);
  }
  if (local_a0 != (byte ***)0x0) {
    local_98 = local_a0;
    FUN_710392eb40((ulong)local_a0);
  }
  if (local_88 != (byte ***)0x0) {
    local_80 = local_88;
    FUN_710392eb40((ulong)local_88);
  }
  lVar31 = puVar5[2];
  lVar28 = *(long *)(lVar31 + 0x230);
  local_88 = (byte ***)
             FUN_710392e290(0x10,0x2c,(long ****)ppppbVar27,ppppbVar11,(long ****)ppppbVar13,param_6
                            ,param_7,param_8);
  if (local_88 == (byte ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (byte ***)((ulong)local_a0 & 0xffffffff00000000);
      local_88 = (byte ***)&DAT_0000002c;
      ppppbVar27 = &local_88;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      if (((uVar6 & 1) != 0) &&
         (local_88 = (byte ***)
                     FUN_710392e290(0x10,0x2c,(long ****)ppppbVar27,ppppbVar11,(long ****)ppppbVar13
                                    ,param_6,param_7,param_8), local_88 != (byte ***)0x0))
      goto LAB_7102cd1664;
    }
    local_88 = (byte ***)0x0;
  }
LAB_7102cd1664:
  ppbVar1 = *(byte ***)(lVar28 + 0x4ac);
  *local_88 = *(byte ***)(lVar28 + 0x4a4);
  local_88[1] = ppbVar1;
  ppbVar20 = *(byte ***)(lVar28 + 0x4c4);
  ppbVar1 = *(byte ***)(lVar28 + 0x4bc);
  uVar2 = *(undefined4 *)(lVar28 + 0x4cc);
  local_88[2] = *(byte ***)(lVar28 + 0x4b4);
  local_80 = (byte ***)((long)local_88 + 0x2c);
  *(undefined4 *)(local_88 + 5) = uVar2;
  local_88[3] = ppbVar1;
  local_88[4] = ppbVar20;
  local_98 = (byte ***)0x0;
  uStack_90 = 0;
  local_a0 = (byte ***)0x0;
  local_78 = local_80;
  local_b8 = (byte ***)
             FUN_710392e290(0x10,0x20,(long ****)ppppbVar27,ppppbVar11,(long ****)ppppbVar13,param_6
                            ,param_7,param_8);
  if (local_b8 == (byte ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (byte ***)((ulong)local_70 & 0xffffffff00000000);
      local_b8 = (byte ***)&SUB_00000020;
      ppppbVar27 = &local_b8;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar6 & 1) != 0) &&
         (local_b8 = (byte ***)
                     FUN_710392e290(0x10,0x20,(long ****)ppppbVar27,ppppbVar11,(long ****)ppppbVar13
                                    ,param_6,param_7,param_8), local_b8 != (byte ***)0x0))
      goto LAB_7102cd16f0;
    }
    local_b8 = (byte ***)0x0;
  }
LAB_7102cd16f0:
  ppbVar20 = *(byte ***)(lVar31 + 0x130);
  ppbVar1 = *(byte ***)(lVar31 + 0x138);
  ppbVar21 = *(byte ***)(lVar31 + 0x140);
  *local_b8 = *(byte ***)(lVar31 + 0x128);
  local_b8[1] = ppbVar20;
  local_b0 = local_b8 + 4;
  local_b8[2] = ppbVar1;
  local_b8[3] = ppbVar21;
  local_a8 = local_b0;
  puVar8 = (undefined8 *)
           FUN_710392e290(0x10,0x10,(long ****)ppppbVar27,ppppbVar11,(long ****)ppppbVar13,param_6,
                          param_7,param_8);
  if (puVar8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_70 = (byte ***)&DAT_00000010;
      ppppbVar27 = &local_70;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar6 & 1) != 0) &&
         (puVar8 = (undefined8 *)
                   FUN_710392e290(0x10,0x10,(long ****)ppppbVar27,ppppbVar11,(long ****)ppppbVar13,
                                  param_6,param_7,param_8), puVar8 != (undefined8 *)0x0))
      goto LAB_7102cd1768;
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_7102cd1768:
  uVar26 = *puVar5;
  *puVar8 = &PTR_FUN_71051305f8;
  puVar32 = (undefined8 *)
            FUN_710392e290(0x10,200,(long ****)ppppbVar27,ppppbVar11,(long ****)ppppbVar13,param_6,
                           param_7,param_8);
  if (puVar32 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_70 = (byte ***)&DAT_000000c8;
      ppppbVar27 = &local_70;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar6 & 1) != 0) &&
         (puVar32 = (undefined8 *)
                    FUN_710392e290(0x10,200,(long ****)ppppbVar27,ppppbVar11,(long ****)ppppbVar13,
                                   param_6,param_7,param_8), puVar32 != (undefined8 *)0x0))
      goto LAB_7102cd17c8;
    }
    puVar32 = (undefined8 *)0x0;
  }
LAB_7102cd17c8:
  *puVar32 = uVar26;
  puVar32[1] = lVar31;
  puVar32[0x17] = 0;
  puVar32[0x18] = 0;
  puVar32[2] = 0;
  puVar32[0x15] = 0;
  puVar32[0x16] = 0;
  puVar32[0x13] = 0;
  puVar32[0x14] = 0;
  puVar32[0x11] = 0;
  puVar32[0x12] = 0;
  puVar32[0xf] = 0;
  puVar32[0x10] = 0;
  puVar32[0xd] = 0;
  puVar32[0xe] = 0;
  puVar32[0xb] = 0;
  puVar32[0xc] = 0;
  puVar32[9] = 0;
  puVar32[10] = 0;
  puVar32[7] = 0;
  puVar32[8] = 0;
  puVar32[5] = 0;
  puVar32[6] = 0;
  puVar32[3] = 0;
  puVar32[4] = 0;
  puVar8[1] = puVar32;
  plVar7 = (long *)FUN_710392e290(0x10,0x20,(long ****)ppppbVar27,ppppbVar11,(long ****)ppppbVar13,
                                  param_6,param_7,param_8);
  if (plVar7 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_70 = (byte ***)&SUB_00000020;
      ppppbVar27 = &local_70;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar6 & 1) != 0) &&
         (plVar7 = (long *)FUN_710392e290(0x10,0x20,(long ****)ppppbVar27,ppppbVar11,
                                          (long ****)ppppbVar13,param_6,param_7,param_8),
         plVar7 != (long *)0x0)) goto LAB_7102cd185c;
    }
    plVar7 = (long *)0x0;
  }
LAB_7102cd185c:
  plVar35 = plVar7 + 1;
  *plVar35 = 0;
  plVar7[2] = 0;
  plVar7[3] = (long)puVar8;
  *plVar7 = (long)&DAT_7105130670;
  ppppbVar27 = &local_88;
  ppppbVar11 = &local_b8;
  ppppbVar13 = &local_a0;
  FUN_7102cd8ae0((long *)puVar8[1],"s06_item_shoe_highheel",(long ****)ppppbVar27,ppppbVar11,
                 (long ****)ppppbVar13,param_6,param_7,param_8);
  do {
    cVar19 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar35,0x10);
    if (bVar3) {
      *plVar35 = *plVar35 + 1;
      cVar19 = ExclusiveMonitorsStatus();
    }
  } while (cVar19 != '\0');
  puVar5[0x14] = puVar8;
  plVar9 = (long *)puVar5[0x15];
  puVar5[0x15] = plVar7;
  if (plVar9 != (long *)0x0) {
    plVar16 = plVar9 + 1;
    do {
      lVar28 = *plVar16;
      cVar19 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar3) {
        *plVar16 = lVar28 + -1;
        cVar19 = ExclusiveMonitorsStatus();
      }
    } while (cVar19 != '\0');
    if (lVar28 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      std::__shared_weak_count::__release_weak();
    }
  }
  do {
    lVar28 = *plVar35;
    cVar19 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar35,0x10);
    if (bVar3) {
      *plVar35 = lVar28 + -1;
      cVar19 = ExclusiveMonitorsStatus();
    }
  } while (cVar19 != '\0');
  if (lVar28 == 0) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    std::__shared_weak_count::__release_weak();
  }
  if (local_b8 != (byte ***)0x0) {
    local_b0 = local_b8;
    FUN_710392eb40((ulong)local_b8);
  }
  if (local_a0 != (byte ***)0x0) {
    local_98 = local_a0;
    FUN_710392eb40((ulong)local_a0);
  }
  if (local_88 != (byte ***)0x0) {
    local_80 = local_88;
    FUN_710392eb40((ulong)local_88);
  }
  lVar31 = puVar5[2];
  lVar28 = *(long *)(lVar31 + 0x230);
  local_88 = (byte ***)
             FUN_710392e290(0x10,0x2c,(long ****)ppppbVar27,ppppbVar11,(long ****)ppppbVar13,param_6
                            ,param_7,param_8);
  if (local_88 == (byte ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (byte ***)((ulong)local_a0 & 0xffffffff00000000);
      local_88 = (byte ***)&DAT_0000002c;
      ppppbVar27 = &local_88;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      if (((uVar6 & 1) != 0) &&
         (local_88 = (byte ***)
                     FUN_710392e290(0x10,0x2c,(long ****)ppppbVar27,ppppbVar11,(long ****)ppppbVar13
                                    ,param_6,param_7,param_8), local_88 != (byte ***)0x0))
      goto LAB_7102cd199c;
    }
    local_88 = (byte ***)0x0;
  }
LAB_7102cd199c:
  ppbVar1 = *(byte ***)(lVar28 + 0x4d8);
  *local_88 = *(byte ***)(lVar28 + 0x4d0);
  local_88[1] = ppbVar1;
  ppbVar20 = *(byte ***)(lVar28 + 0x4f0);
  ppbVar1 = *(byte ***)(lVar28 + 0x4e8);
  uVar2 = *(undefined4 *)(lVar28 + 0x4f8);
  local_88[2] = *(byte ***)(lVar28 + 0x4e0);
  local_80 = (byte ***)((long)local_88 + 0x2c);
  *(undefined4 *)(local_88 + 5) = uVar2;
  local_88[3] = ppbVar1;
  local_88[4] = ppbVar20;
  local_98 = (byte ***)0x0;
  uStack_90 = 0;
  local_a0 = (byte ***)0x0;
  local_78 = local_80;
  local_b8 = (byte ***)
             FUN_710392e290(0x10,0x20,(long ****)ppppbVar27,ppppbVar11,(long ****)ppppbVar13,param_6
                            ,param_7,param_8);
  if (local_b8 == (byte ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (byte ***)((ulong)local_70 & 0xffffffff00000000);
      local_b8 = (byte ***)&SUB_00000020;
      ppppbVar27 = &local_b8;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar6 & 1) != 0) &&
         (local_b8 = (byte ***)
                     FUN_710392e290(0x10,0x20,(long ****)ppppbVar27,ppppbVar11,(long ****)ppppbVar13
                                    ,param_6,param_7,param_8), local_b8 != (byte ***)0x0))
      goto LAB_7102cd1a28;
    }
    local_b8 = (byte ***)0x0;
  }
LAB_7102cd1a28:
  ppbVar20 = *(byte ***)(lVar31 + 0x150);
  ppbVar1 = *(byte ***)(lVar31 + 0x158);
  ppbVar21 = *(byte ***)(lVar31 + 0x160);
  *local_b8 = *(byte ***)(lVar31 + 0x148);
  local_b8[1] = ppbVar20;
  local_b0 = local_b8 + 4;
  local_b8[2] = ppbVar1;
  local_b8[3] = ppbVar21;
  local_a8 = local_b0;
  puVar8 = (undefined8 *)
           FUN_710392e290(0x10,0x10,(long ****)ppppbVar27,ppppbVar11,(long ****)ppppbVar13,param_6,
                          param_7,param_8);
  if (puVar8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_70 = (byte ***)&DAT_00000010;
      ppppbVar27 = &local_70;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar6 & 1) != 0) &&
         (puVar8 = (undefined8 *)
                   FUN_710392e290(0x10,0x10,(long ****)ppppbVar27,ppppbVar11,(long ****)ppppbVar13,
                                  param_6,param_7,param_8), puVar8 != (undefined8 *)0x0))
      goto LAB_7102cd1aa0;
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_7102cd1aa0:
  uVar26 = *puVar5;
  *puVar8 = &PTR_FUN_71051305f8;
  puVar32 = (undefined8 *)
            FUN_710392e290(0x10,200,(long ****)ppppbVar27,ppppbVar11,(long ****)ppppbVar13,param_6,
                           param_7,param_8);
  if (puVar32 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_70 = (byte ***)&DAT_000000c8;
      ppppbVar27 = &local_70;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar6 & 1) != 0) &&
         (puVar32 = (undefined8 *)
                    FUN_710392e290(0x10,200,(long ****)ppppbVar27,ppppbVar11,(long ****)ppppbVar13,
                                   param_6,param_7,param_8), puVar32 != (undefined8 *)0x0))
      goto LAB_7102cd1b00;
    }
    puVar32 = (undefined8 *)0x0;
  }
LAB_7102cd1b00:
  *puVar32 = uVar26;
  puVar32[1] = lVar31;
  puVar32[0x17] = 0;
  puVar32[0x18] = 0;
  puVar32[2] = 0;
  puVar32[0x15] = 0;
  puVar32[0x16] = 0;
  puVar32[0x13] = 0;
  puVar32[0x14] = 0;
  puVar32[0x11] = 0;
  puVar32[0x12] = 0;
  puVar32[0xf] = 0;
  puVar32[0x10] = 0;
  puVar32[0xd] = 0;
  puVar32[0xe] = 0;
  puVar32[0xb] = 0;
  puVar32[0xc] = 0;
  puVar32[9] = 0;
  puVar32[10] = 0;
  puVar32[7] = 0;
  puVar32[8] = 0;
  puVar32[5] = 0;
  puVar32[6] = 0;
  puVar32[3] = 0;
  puVar32[4] = 0;
  puVar8[1] = puVar32;
  plVar7 = (long *)FUN_710392e290(0x10,0x20,(long ****)ppppbVar27,ppppbVar11,(long ****)ppppbVar13,
                                  param_6,param_7,param_8);
  if (plVar7 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_70 = (byte ***)&SUB_00000020;
      ppppbVar27 = &local_70;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar6 & 1) != 0) &&
         (plVar7 = (long *)FUN_710392e290(0x10,0x20,(long ****)ppppbVar27,ppppbVar11,
                                          (long ****)ppppbVar13,param_6,param_7,param_8),
         plVar7 != (long *)0x0)) goto LAB_7102cd1b94;
    }
    plVar7 = (long *)0x0;
  }
LAB_7102cd1b94:
  plVar35 = plVar7 + 1;
  *plVar35 = 0;
  plVar7[2] = 0;
  plVar7[3] = (long)puVar8;
  *plVar7 = (long)&DAT_7105130670;
  ppppbVar27 = &local_88;
  ppppbVar11 = &local_b8;
  ppppbVar13 = &local_a0;
  FUN_7102cd8ae0((long *)puVar8[1],"s06_item_towelcube",(long ****)ppppbVar27,ppppbVar11,
                 (long ****)ppppbVar13,param_6,param_7,param_8);
  do {
    cVar19 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar35,0x10);
    if (bVar3) {
      *plVar35 = *plVar35 + 1;
      cVar19 = ExclusiveMonitorsStatus();
    }
  } while (cVar19 != '\0');
  puVar5[0x16] = puVar8;
  plVar9 = (long *)puVar5[0x17];
  puVar5[0x17] = plVar7;
  if (plVar9 != (long *)0x0) {
    plVar16 = plVar9 + 1;
    do {
      lVar28 = *plVar16;
      cVar19 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar3) {
        *plVar16 = lVar28 + -1;
        cVar19 = ExclusiveMonitorsStatus();
      }
    } while (cVar19 != '\0');
    if (lVar28 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      std::__shared_weak_count::__release_weak();
    }
  }
  do {
    lVar28 = *plVar35;
    cVar19 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar35,0x10);
    if (bVar3) {
      *plVar35 = lVar28 + -1;
      cVar19 = ExclusiveMonitorsStatus();
    }
  } while (cVar19 != '\0');
  if (lVar28 == 0) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    std::__shared_weak_count::__release_weak();
  }
  if (local_b8 != (byte ***)0x0) {
    local_b0 = local_b8;
    FUN_710392eb40((ulong)local_b8);
  }
  if (local_a0 != (byte ***)0x0) {
    local_98 = local_a0;
    FUN_710392eb40((ulong)local_a0);
  }
  if (local_88 != (byte ***)0x0) {
    local_80 = local_88;
    FUN_710392eb40((ulong)local_88);
  }
  lVar31 = puVar5[2];
  lVar28 = *(long *)(lVar31 + 0x230);
  local_88 = (byte ***)
             FUN_710392e290(0x10,0x2c,(long ****)ppppbVar27,ppppbVar11,(long ****)ppppbVar13,param_6
                            ,param_7,param_8);
  if (local_88 == (byte ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (byte ***)((ulong)local_a0 & 0xffffffff00000000);
      local_88 = (byte ***)&DAT_0000002c;
      ppppbVar27 = &local_88;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      if (((uVar6 & 1) != 0) &&
         (local_88 = (byte ***)
                     FUN_710392e290(0x10,0x2c,(long ****)ppppbVar27,ppppbVar11,(long ****)ppppbVar13
                                    ,param_6,param_7,param_8), local_88 != (byte ***)0x0))
      goto LAB_7102cd1cd4;
    }
    local_88 = (byte ***)0x0;
  }
LAB_7102cd1cd4:
  ppbVar1 = *(byte ***)(lVar28 + 0x504);
  *local_88 = *(byte ***)(lVar28 + 0x4fc);
  local_88[1] = ppbVar1;
  ppbVar20 = *(byte ***)(lVar28 + 0x51c);
  ppbVar1 = *(byte ***)(lVar28 + 0x514);
  uVar2 = *(undefined4 *)(lVar28 + 0x524);
  local_88[2] = *(byte ***)(lVar28 + 0x50c);
  local_80 = (byte ***)((long)local_88 + 0x2c);
  *(undefined4 *)(local_88 + 5) = uVar2;
  local_88[3] = ppbVar1;
  local_88[4] = ppbVar20;
  local_98 = (byte ***)0x0;
  uStack_90 = 0;
  local_a0 = (byte ***)0x0;
  local_78 = local_80;
  local_b8 = (byte ***)
             FUN_710392e290(0x10,0x20,(long ****)ppppbVar27,ppppbVar11,(long ****)ppppbVar13,param_6
                            ,param_7,param_8);
  if (local_b8 == (byte ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_70 = (byte ***)((ulong)local_70 & 0xffffffff00000000);
      local_b8 = (byte ***)&SUB_00000020;
      ppppbVar27 = &local_b8;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_70);
      if (((uVar6 & 1) != 0) &&
         (local_b8 = (byte ***)
                     FUN_710392e290(0x10,0x20,(long ****)ppppbVar27,ppppbVar11,(long ****)ppppbVar13
                                    ,param_6,param_7,param_8), local_b8 != (byte ***)0x0))
      goto LAB_7102cd1d60;
    }
    local_b8 = (byte ***)0x0;
  }
LAB_7102cd1d60:
  ppbVar20 = *(byte ***)(lVar31 + 0x170);
  ppbVar1 = *(byte ***)(lVar31 + 0x178);
  ppbVar21 = *(byte ***)(lVar31 + 0x180);
  *local_b8 = *(byte ***)(lVar31 + 0x168);
  local_b8[1] = ppbVar20;
  local_b0 = local_b8 + 4;
  local_b8[2] = ppbVar1;
  local_b8[3] = ppbVar21;
  local_a8 = local_b0;
  puVar8 = (undefined8 *)
           FUN_710392e290(0x10,0x10,(long ****)ppppbVar27,ppppbVar11,(long ****)ppppbVar13,param_6,
                          param_7,param_8);
  if (puVar8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_70 = (byte ***)&DAT_00000010;
      ppppbVar27 = &local_70;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar6 & 1) != 0) &&
         (puVar8 = (undefined8 *)
                   FUN_710392e290(0x10,0x10,(long ****)ppppbVar27,ppppbVar11,(long ****)ppppbVar13,
                                  param_6,param_7,param_8), puVar8 != (undefined8 *)0x0))
      goto LAB_7102cd1dd8;
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_7102cd1dd8:
  uVar26 = *puVar5;
  *puVar8 = &PTR_FUN_71051305f8;
  puVar32 = (undefined8 *)
            FUN_710392e290(0x10,200,(long ****)ppppbVar27,ppppbVar11,(long ****)ppppbVar13,param_6,
                           param_7,param_8);
  if (puVar32 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_70 = (byte ***)&DAT_000000c8;
      ppppbVar27 = &local_70;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar6 & 1) != 0) &&
         (puVar32 = (undefined8 *)
                    FUN_710392e290(0x10,200,(long ****)ppppbVar27,ppppbVar11,(long ****)ppppbVar13,
                                   param_6,param_7,param_8), puVar32 != (undefined8 *)0x0))
      goto LAB_7102cd1e38;
    }
    puVar32 = (undefined8 *)0x0;
  }
LAB_7102cd1e38:
  *puVar32 = uVar26;
  puVar32[1] = lVar31;
  puVar32[0x17] = 0;
  puVar32[0x18] = 0;
  puVar32[2] = 0;
  puVar32[0x15] = 0;
  puVar32[0x16] = 0;
  puVar32[0x13] = 0;
  puVar32[0x14] = 0;
  puVar32[0x11] = 0;
  puVar32[0x12] = 0;
  puVar32[0xf] = 0;
  puVar32[0x10] = 0;
  puVar32[0xd] = 0;
  puVar32[0xe] = 0;
  puVar32[0xb] = 0;
  puVar32[0xc] = 0;
  puVar32[9] = 0;
  puVar32[10] = 0;
  puVar32[7] = 0;
  puVar32[8] = 0;
  puVar32[5] = 0;
  puVar32[6] = 0;
  puVar32[3] = 0;
  puVar32[4] = 0;
  puVar8[1] = puVar32;
  plVar7 = (long *)FUN_710392e290(0x10,0x20,(long ****)ppppbVar27,ppppbVar11,(long ****)ppppbVar13,
                                  param_6,param_7,param_8);
  if (plVar7 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_70 = (byte ***)&SUB_00000020;
      ppppbVar27 = &local_70;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar6 & 1) != 0) &&
         (plVar7 = (long *)FUN_710392e290(0x10,0x20,(long ****)ppppbVar27,ppppbVar11,
                                          (long ****)ppppbVar13,param_6,param_7,param_8),
         plVar7 != (long *)0x0)) goto LAB_7102cd1ecc;
    }
    plVar7 = (long *)0x0;
  }
LAB_7102cd1ecc:
  plVar35 = plVar7 + 1;
  *plVar35 = 0;
  plVar7[2] = 0;
  plVar7[3] = (long)puVar8;
  *plVar7 = (long)&DAT_7105130670;
  ppppbVar11 = &local_88;
  ppppbVar13 = &local_b8;
  ppppbVar27 = &local_a0;
  FUN_7102cd8ae0((long *)puVar8[1],"s06_item_toy_mouse",(long ****)ppppbVar11,ppppbVar13,
                 (long ****)ppppbVar27,param_6,param_7,param_8);
  do {
    cVar19 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar35,0x10);
    if (bVar3) {
      *plVar35 = *plVar35 + 1;
      cVar19 = ExclusiveMonitorsStatus();
    }
  } while (cVar19 != '\0');
  puVar5[0x18] = puVar8;
  plVar9 = (long *)puVar5[0x19];
  puVar5[0x19] = plVar7;
  if (plVar9 != (long *)0x0) {
    plVar16 = plVar9 + 1;
    do {
      lVar28 = *plVar16;
      cVar19 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar16,0x10);
      if (bVar3) {
        *plVar16 = lVar28 + -1;
        cVar19 = ExclusiveMonitorsStatus();
      }
    } while (cVar19 != '\0');
    if (lVar28 == 0) {
      (**(code **)(*plVar9 + 0x10))(plVar9);
      std::__shared_weak_count::__release_weak();
    }
  }
  do {
    lVar28 = *plVar35;
    cVar19 = '\x01';
    bVar3 = (bool)ExclusiveMonitorPass(plVar35,0x10);
    if (bVar3) {
      *plVar35 = lVar28 + -1;
      cVar19 = ExclusiveMonitorsStatus();
    }
  } while (cVar19 != '\0');
  if (lVar28 == 0) {
    (**(code **)(*plVar7 + 0x10))(plVar7);
    std::__shared_weak_count::__release_weak();
  }
  if (local_b8 != (byte ***)0x0) {
    local_b0 = local_b8;
    FUN_710392eb40((ulong)local_b8);
  }
  if (local_a0 != (byte ***)0x0) {
    local_98 = local_a0;
    FUN_710392eb40((ulong)local_a0);
  }
  if (local_88 != (byte ***)0x0) {
    local_80 = local_88;
    FUN_710392eb40((ulong)local_88);
  }
  puVar8 = (undefined8 *)
           FUN_710392e290(0x10,0x10,(long ****)ppppbVar11,ppppbVar13,(long ****)ppppbVar27,param_6,
                          param_7,param_8);
  if (puVar8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (byte ***)((ulong)local_a0 & 0xffffffff00000000);
      local_88 = (byte ***)&DAT_00000010;
      ppppbVar11 = &local_88;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      if (((uVar6 & 1) != 0) &&
         (puVar8 = (undefined8 *)
                   FUN_710392e290(0x10,0x10,(long ****)ppppbVar11,ppppbVar13,(long ****)ppppbVar27,
                                  param_6,param_7,param_8), puVar8 != (undefined8 *)0x0))
      goto LAB_7102cd2004;
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_7102cd2004:
  ppppbVar11 = (byte ****)puVar5[2];
  ppppbVar13 = (byte ****)0x0;
  FUN_7102cdbae0(puVar8,(long ***)*puVar5,(long ****)ppppbVar11,(byte ****)0x0,(long ****)ppppbVar27
                 ,param_6,param_7,param_8);
  puVar32 = (undefined8 *)
            FUN_710392e290(0x10,0x20,(long ****)ppppbVar11,ppppbVar13,(long ****)ppppbVar27,param_6,
                           param_7,param_8);
  if (puVar32 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (byte ***)((ulong)local_a0 & 0xffffffff00000000);
      local_88 = (byte ***)&SUB_00000020;
      ppppbVar11 = &local_88;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      if (((uVar6 & 1) != 0) &&
         (puVar32 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,(long ****)ppppbVar11,ppppbVar13,(long ****)ppppbVar27,
                                   param_6,param_7,param_8), puVar32 != (undefined8 *)0x0))
      goto LAB_7102cd2070;
    }
    puVar32 = (undefined8 *)0x0;
  }
LAB_7102cd2070:
  *puVar32 = &DAT_7105130638;
  puVar32[1] = 0;
  puVar32[2] = 0;
  puVar32[3] = puVar8;
  puVar5[0x1a] = puVar8;
  plVar7 = (long *)puVar5[0x1b];
  puVar5[0x1b] = puVar32;
  if (plVar7 != (long *)0x0) {
    plVar35 = plVar7 + 1;
    do {
      lVar28 = *plVar35;
      cVar19 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar35,0x10);
      if (bVar3) {
        *plVar35 = lVar28 + -1;
        cVar19 = ExclusiveMonitorsStatus();
      }
    } while (cVar19 != '\0');
    if (lVar28 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__shared_weak_count::__release_weak();
    }
  }
  puVar8 = (undefined8 *)
           FUN_710392e290(0x10,0x10,(long ****)ppppbVar11,ppppbVar13,(long ****)ppppbVar27,param_6,
                          param_7,param_8);
  if (puVar8 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (byte ***)((ulong)local_a0 & 0xffffffff00000000);
      local_88 = (byte ***)&DAT_00000010;
      ppppbVar11 = &local_88;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      if (((uVar6 & 1) != 0) &&
         (puVar8 = (undefined8 *)
                   FUN_710392e290(0x10,0x10,(long ****)ppppbVar11,ppppbVar13,(long ****)ppppbVar27,
                                  param_6,param_7,param_8), puVar8 != (undefined8 *)0x0))
      goto LAB_7102cd2120;
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_7102cd2120:
  ppppbVar11 = (byte ****)puVar5[2];
  ppppbVar13 = (byte ****)0x1;
  FUN_7102cdbae0(puVar8,(long ***)*puVar5,(long ****)ppppbVar11,(byte ****)0x1,(long ****)ppppbVar27
                 ,param_6,param_7,param_8);
  puVar32 = (undefined8 *)
            FUN_710392e290(0x10,0x20,(long ****)ppppbVar11,ppppbVar13,(long ****)ppppbVar27,param_6,
                           param_7,param_8);
  if (puVar32 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (byte ***)((ulong)local_a0 & 0xffffffff00000000);
      local_88 = (byte ***)&SUB_00000020;
      ppppbVar11 = &local_88;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      if (((uVar6 & 1) != 0) &&
         (puVar32 = (undefined8 *)
                    FUN_710392e290(0x10,0x20,(long ****)ppppbVar11,ppppbVar13,(long ****)ppppbVar27,
                                   param_6,param_7,param_8), puVar32 != (undefined8 *)0x0))
      goto LAB_7102cd218c;
    }
    puVar32 = (undefined8 *)0x0;
  }
LAB_7102cd218c:
  *puVar32 = &DAT_7105130638;
  puVar32[1] = 0;
  puVar32[2] = 0;
  puVar32[3] = puVar8;
  puVar5[0x1c] = puVar8;
  plVar7 = (long *)puVar5[0x1d];
  puVar5[0x1d] = puVar32;
  if (plVar7 != (long *)0x0) {
    plVar35 = plVar7 + 1;
    do {
      lVar28 = *plVar35;
      cVar19 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar35,0x10);
      if (bVar3) {
        *plVar35 = lVar28 + -1;
        cVar19 = ExclusiveMonitorsStatus();
      }
    } while (cVar19 != '\0');
    if (lVar28 == 0) {
      (**(code **)(*plVar7 + 0x10))(plVar7);
      std::__shared_weak_count::__release_weak();
    }
  }
  fVar37 = *(float *)(puVar5[2] + 0x94);
  *(undefined2 *)(puVar5 + 9) = 1;
  puVar5[6] = FUN_7102cdac80;
  puVar5[7] = 0;
  fVar37 = fVar37 + 300.0;
  *(float *)((long)puVar5 + 0x44) = fVar37;
  *(float *)(puVar5 + 8) = fVar37;
  lVar28 = plVar34[0xf0];
  puVar5 = (undefined8 *)
           FUN_710392e290(0x10,0x10,(long ****)ppppbVar11,ppppbVar13,(long ****)ppppbVar27,param_6,
                          param_7,param_8);
  if (puVar5 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (byte ***)((ulong)local_a0 & 0xffffffff00000000);
      local_88 = (byte ***)&DAT_00000010;
      ppppbVar11 = &local_88;
      uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      if (((uVar6 & 1) != 0) &&
         (puVar5 = (undefined8 *)
                   FUN_710392e290(0x10,0x10,(long ****)ppppbVar11,ppppbVar13,(long ****)ppppbVar27,
                                  param_6,param_7,param_8), puVar5 != (undefined8 *)0x0))
      goto LAB_7102cd226c;
    }
    puVar5 = (undefined8 *)0x0;
  }
LAB_7102cd226c:
  lVar31 = *plVar34;
  *puVar5 = &PTR_FUN_7105130498;
  plVar7 = (long *)FUN_710392e290(0x10,0x70,(long ****)ppppbVar11,ppppbVar13,(long ****)ppppbVar27,
                                  param_6,param_7,param_8);
  uVar26 = extraout_x1;
  if (plVar7 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (byte ***)((ulong)local_a0 & 0xffffffff00000000);
      local_88 = (byte ***)&DAT_00000070;
      ppppbVar11 = &local_88;
      auVar38 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      uVar26 = auVar38._8_8_;
      if (((auVar38._0_8_ & 1) != 0) &&
         (plVar7 = (long *)FUN_710392e290(0x10,0x70,(long ****)ppppbVar11,ppppbVar13,
                                          (long ****)ppppbVar27,param_6,param_7,param_8),
         uVar26 = extraout_x1_00, plVar7 != (long *)0x0)) goto LAB_7102cd22d0;
    }
    plVar7 = (long *)0x0;
  }
LAB_7102cd22d0:
  *plVar7 = lVar31;
  plVar7[1] = lVar28;
  plVar7[0xb] = 0;
  plVar7[0xc] = 0;
  plVar7[2] = (long)(plVar34 + 1);
  *(undefined4 *)(plVar7 + 0xd) = 2;
  plVar7[9] = 0;
  plVar7[10] = 0;
  plVar7[7] = 0;
  plVar7[8] = 0;
  plVar7[5] = 0;
  plVar7[6] = 0;
  plVar7[3] = 0;
  plVar7[4] = 0;
  puVar5[1] = plVar7;
  plVar7 = (long *)plVar34[0xf2];
  plVar34[0xf2] = (long)puVar5;
  if (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 8))();
    puVar5 = (undefined8 *)plVar34[0xf2];
    uVar26 = extraout_x1_01;
  }
  FUN_7102cd48f0((long *)puVar5[1],uVar26,(long ****)ppppbVar11,ppppbVar13,(long ****)ppppbVar27,
                 param_6,param_7,param_8);
  return;
}

