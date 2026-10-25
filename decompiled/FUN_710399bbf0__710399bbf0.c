// addr:      710399bbf0
// offset:    0x399bbf0
// name:      FUN_710399bbf0
// mangled:   
// signature: undefined1[16] * __cdecl FUN_710399bbf0(undefined1[16] * param_1, undefined1[16] * param_2, ulong param_3, uint param_4)


undefined1 (*) [16]
FUN_710399bbf0(undefined1 (*param_1) [16],undefined1 (*param_2) [16],ulong param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 (*pauVar10) [16];
  undefined1 (*pauVar11) [16];
  undefined1 (*pauVar12) [16];
  undefined1 (*pauVar13) [16];
  undefined8 *puVar14;
  float *pfVar15;
  undefined1 (*pauVar16) [16];
  undefined1 (*pauVar17) [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  long lVar22;
  uint uVar23;
  int iVar24;
  ulong uVar25;
  undefined1 (*pauVar26) [16];
  uint uVar27;
  float fVar28;
  undefined8 uVar29;
  float fVar30;
  float fVar31;
  undefined8 uVar32;
  float fVar33;
  float fVar34;
  undefined8 uVar35;
  float fVar36;
  float fVar37;
  undefined8 uVar38;
  float fVar39;
  float fVar40;
  undefined8 uVar41;
  float fVar42;
  float fVar43;
  undefined8 uVar44;
  float fVar45;
  float fVar46;
  float fVar49;
  float fVar50;
  undefined1 auVar47 [12];
  undefined1 auVar48 [12];
  float fVar51;
  undefined1 auVar52 [12];
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  undefined1 auVar59 [12];
  undefined1 auVar60 [12];
  float fVar65;
  float fVar66;
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  float fVar76;
  float fVar77;
  float fVar78;
  float fVar84;
  float fVar85;
  float fVar86;
  float fVar87;
  undefined1 auVar79 [12];
  undefined1 auVar80 [12];
  float fVar88;
  float fVar89;
  undefined1 auVar83 [16];
  float fVar90;
  undefined1 auVar91 [12];
  undefined1 auVar92 [12];
  undefined1 auVar93 [12];
  float fVar98;
  float fVar99;
  float fVar100;
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 uVar101;
  undefined1 uVar102;
  undefined1 uVar103;
  undefined1 uVar104;
  undefined1 uVar105;
  undefined1 uVar106;
  undefined1 uVar107;
  undefined1 uVar108;
  undefined1 uVar109;
  undefined1 uVar110;
  undefined1 uVar111;
  undefined1 uVar112;
  float fVar113;
  float fVar121;
  float fVar122;
  undefined1 auVar114 [12];
  undefined1 auVar115 [12];
  undefined1 auVar116 [12];
  float fVar123;
  undefined1 auVar118 [16];
  float fVar124;
  float fVar132;
  float fVar133;
  byte bVar134;
  undefined1 auVar125 [12];
  undefined1 auVar126 [12];
  undefined1 auVar127 [12];
  float fVar135;
  undefined1 auVar129 [16];
  float fVar136;
  float fVar142;
  float fVar143;
  undefined1 auVar137 [12];
  float fVar144;
  undefined1 auVar139 [16];
  undefined1 auVar140 [16];
  undefined1 auVar141 [16];
  undefined1 auVar145 [12];
  undefined1 auVar146 [12];
  undefined1 auVar147 [12];
  undefined1 auVar151 [12];
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  float fVar155;
  float fVar159;
  float fVar160;
  undefined1 auVar156 [12];
  float fVar161;
  undefined1 auVar158 [16];
  undefined1 auVar162 [12];
  undefined1 auVar164 [16];
  undefined1 auVar165 [16];
  undefined1 auVar166 [16];
  undefined1 auVar167 [16];
  undefined1 auVar168 [16];
  undefined1 auVar169 [16];
  undefined1 auVar170 [12];
  undefined1 auVar171 [16];
  undefined1 auVar173 [16];
  undefined1 auVar174 [16];
  undefined1 auVar175 [16];
  undefined1 auVar176 [16];
  undefined1 auVar177 [16];
  undefined1 auVar178 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar117 [16];
  undefined1 auVar119 [16];
  undefined1 auVar120 [16];
  undefined1 auVar128 [16];
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  undefined1 auVar138 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined1 auVar150 [16];
  undefined1 auVar154 [16];
  undefined1 auVar157 [16];
  undefined1 auVar163 [16];
  undefined1 auVar172 [16];
  
  if (param_1 == (undefined1 (*) [16])0x0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("pReal != NULL",".\\xdsp_nx.h",0x165,"FFT");
  }
  if (param_2 == (undefined1 (*) [16])0x0) {
                    /* WARNING: Subroutine does not return */
    __assert_fail("pImaginary != NULL",".\\xdsp_nx.h",0x166,"FFT");
  }
  if (param_3 != 0) {
    uVar23 = 1;
    do {
      if (((ulong)param_1 & 0xf) != 0) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("(uintptr_t)pReal % 16 == 0",".\\xdsp_nx.h",0x168,"FFT");
      }
      if (((ulong)param_2 & 0xf) != 0) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("(uintptr_t)pImaginary % 16 == 0",".\\xdsp_nx.h",0x169,"FFT");
      }
      if ((param_3 & 0xf) != 0) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("(uintptr_t)pUnityTable % 16 == 0",".\\xdsp_nx.h",0x16a,"FFT");
      }
      if (param_4 < 0x11) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("uLength > 16",".\\xdsp_nx.h",0x16b,"FFT");
      }
      if ((param_4 - 1 & param_4) != 0) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("ISPOWEROF2(uLength)",".\\xdsp_nx.h",0x16c,"FFT");
      }
      if ((uVar23 == 0) || ((uVar23 - 1 & uVar23) != 0)) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("ISPOWEROF2(uCount)",".\\xdsp_nx.h",0x16d,"FFT");
      }
      uVar7 = param_4 >> 2;
      uVar8 = uVar23 * param_4 >> 4;
      if (uVar8 != 0) {
        uVar9 = param_4 >> 4;
        uVar25 = param_3 + (ulong)uVar7 * 0x10;
        if ((uVar9 - 1 & uVar9) != 0) {
          if ((uVar25 & 0xf) == 0) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("ISPOWEROF2(uStride)",".\\xdsp_nx.h",0xb2,"ButterflyDIT4_4");
          }
LAB_710399c450:
                    /* WARNING: Subroutine does not return */
          __assert_fail("(uintptr_t)pUnityTableImaginary % 16 == 0",".\\xdsp_nx.h",0xb1,
                        "ButterflyDIT4_4");
        }
        uVar27 = 0;
        do {
          uVar1 = (uVar27 & uVar9 - 1) + (uVar27 & -uVar9) * 4;
          lVar22 = (ulong)(uVar1 & uVar7 - 1) * 0x10;
          uVar5 = param_3 + lVar22;
          if ((uVar5 & 0xf) != 0) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("(uintptr_t)pUnityTableReal % 16 == 0",".\\xdsp_nx.h",0xb0,
                          "ButterflyDIT4_4");
          }
          uVar6 = uVar25 + lVar22;
          if ((uVar6 & 0xf) != 0) goto LAB_710399c450;
          uVar2 = uVar1 + uVar9;
          uVar3 = uVar1 + uVar9 * 2;
          uVar4 = uVar1 + uVar9 * 3;
          uVar32 = *(undefined8 *)(param_1[uVar1] + 8);
          uVar29 = *(undefined8 *)param_1[uVar1];
          uVar38 = *(undefined8 *)(param_2[uVar1] + 8);
          uVar35 = *(undefined8 *)param_2[uVar1];
          uVar44 = *(undefined8 *)(param_1[uVar3] + 8);
          uVar41 = *(undefined8 *)param_1[uVar3];
          uVar27 = uVar27 + 1;
          pauVar26 = param_2 + uVar3;
          pauVar10 = param_1 + uVar2;
          pauVar11 = param_1 + uVar4;
          pauVar12 = param_2 + uVar2;
          pauVar13 = param_2 + uVar4;
          fVar28 = (float)uVar29;
          fVar78 = (float)uVar41;
          fVar57 = fVar28 + fVar78;
          fVar30 = (float)((ulong)uVar29 >> 0x20);
          fVar85 = (float)((ulong)uVar41 >> 0x20);
          fVar61 = fVar30 + fVar85;
          fVar31 = (float)uVar32;
          fVar87 = (float)uVar44;
          fVar63 = fVar31 + fVar87;
          fVar33 = (float)((ulong)uVar32 >> 0x20);
          fVar89 = (float)((ulong)uVar44 >> 0x20);
          fVar65 = fVar33 + fVar89;
          fVar34 = (float)uVar35;
          fVar69 = fVar34 + *(float *)*pauVar26;
          fVar36 = (float)((ulong)uVar35 >> 0x20);
          fVar71 = fVar36 + *(float *)(*pauVar26 + 4);
          fVar37 = (float)uVar38;
          fVar73 = fVar37 + *(float *)(*pauVar26 + 8);
          fVar39 = (float)((ulong)uVar38 >> 0x20);
          fVar75 = fVar39 + *(float *)(*pauVar26 + 0xc);
          fVar77 = *(float *)*pauVar10 + *(float *)*pauVar11;
          fVar84 = *(float *)(*pauVar10 + 4) + *(float *)(*pauVar11 + 4);
          fVar86 = *(float *)(*pauVar10 + 8) + *(float *)(*pauVar11 + 8);
          fVar88 = *(float *)(*pauVar10 + 0xc) + *(float *)(*pauVar11 + 0xc);
          fVar28 = fVar28 - fVar78;
          fVar30 = fVar30 - fVar85;
          fVar31 = fVar31 - fVar87;
          fVar33 = fVar33 - fVar89;
          fVar34 = fVar34 - *(float *)*pauVar26;
          fVar36 = fVar36 - *(float *)(*pauVar26 + 4);
          fVar37 = fVar37 - *(float *)(*pauVar26 + 8);
          fVar39 = fVar39 - *(float *)(*pauVar26 + 0xc);
          fVar40 = *(float *)*pauVar10 - *(float *)*pauVar11;
          fVar42 = *(float *)(*pauVar10 + 4) - *(float *)(*pauVar11 + 4);
          fVar43 = *(float *)(*pauVar10 + 8) - *(float *)(*pauVar11 + 8);
          fVar45 = *(float *)(*pauVar10 + 0xc) - *(float *)(*pauVar11 + 0xc);
          fVar46 = *(float *)*pauVar12 - *(float *)*pauVar13;
          fVar49 = *(float *)(*pauVar12 + 4) - *(float *)(*pauVar13 + 4);
          fVar50 = *(float *)(*pauVar12 + 8) - *(float *)(*pauVar13 + 8);
          fVar51 = *(float *)(*pauVar12 + 0xc) - *(float *)(*pauVar13 + 0xc);
          fVar78 = *(float *)*pauVar12 + *(float *)*pauVar13;
          fVar85 = *(float *)(*pauVar12 + 4) + *(float *)(*pauVar13 + 4);
          fVar87 = *(float *)(*pauVar12 + 8) + *(float *)(*pauVar13 + 8);
          fVar89 = *(float *)(*pauVar12 + 0xc) + *(float *)(*pauVar13 + 0xc);
          fVar90 = fVar34 - fVar40;
          fVar98 = fVar36 - fVar42;
          fVar99 = fVar37 - fVar43;
          fVar100 = fVar39 - fVar45;
          fVar58 = fVar57 - fVar77;
          fVar62 = fVar61 - fVar84;
          fVar64 = fVar63 - fVar86;
          fVar66 = fVar65 - fVar88;
          fVar34 = fVar34 + fVar40;
          fVar36 = fVar36 + fVar42;
          fVar37 = fVar37 + fVar43;
          fVar39 = fVar39 + fVar45;
          puVar14 = (undefined8 *)(uVar6 + (ulong)uVar9 * 0x10);
          uVar32 = puVar14[1];
          uVar29 = *puVar14;
          pfVar15 = (float *)(uVar5 + (ulong)uVar9 * 0x10);
          fVar40 = *pfVar15;
          fVar42 = pfVar15[1];
          fVar43 = pfVar15[2];
          fVar45 = pfVar15[3];
          lVar22 = (ulong)(uVar9 * 2) * 0x10;
          fVar53 = fVar28 + fVar46;
          fVar54 = fVar30 + fVar49;
          fVar55 = fVar31 + fVar50;
          fVar56 = fVar33 + fVar51;
          fVar70 = fVar69 - fVar78;
          fVar72 = fVar71 - fVar85;
          fVar74 = fVar73 - fVar87;
          fVar76 = fVar75 - fVar89;
          fVar28 = fVar28 - fVar46;
          fVar30 = fVar30 - fVar49;
          fVar31 = fVar31 - fVar50;
          fVar33 = fVar33 - fVar51;
          fVar155 = (float)uVar29;
          fVar159 = (float)((ulong)uVar29 >> 0x20);
          fVar160 = (float)uVar32;
          fVar161 = (float)((ulong)uVar32 >> 0x20);
          pfVar15 = (float *)(uVar6 + lVar22);
          fVar46 = *pfVar15;
          fVar49 = pfVar15[1];
          fVar50 = pfVar15[2];
          fVar51 = pfVar15[3];
          pfVar15 = (float *)(uVar5 + lVar22);
          fVar113 = *pfVar15;
          fVar121 = pfVar15[1];
          fVar122 = pfVar15[2];
          fVar123 = pfVar15[3];
          lVar22 = (ulong)(uVar9 * 3) * 0x10;
          pfVar15 = (float *)(uVar6 + lVar22);
          fVar124 = *pfVar15;
          fVar132 = pfVar15[1];
          fVar133 = pfVar15[2];
          fVar135 = pfVar15[3];
          pfVar15 = (float *)(uVar5 + lVar22);
          fVar136 = *pfVar15;
          fVar142 = pfVar15[1];
          fVar143 = pfVar15[2];
          fVar144 = pfVar15[3];
          pauVar26 = param_1 + uVar1;
          *(float *)(*pauVar26 + 8) = fVar63 + fVar86;
          *(float *)(*pauVar26 + 0xc) = fVar65 + fVar88;
          *(float *)*pauVar26 = fVar57 + fVar77;
          *(float *)(*pauVar26 + 4) = fVar61 + fVar84;
          pauVar26 = param_2 + uVar1;
          *(float *)(*pauVar26 + 8) = fVar73 + fVar87;
          *(float *)(*pauVar26 + 0xc) = fVar75 + fVar89;
          *(float *)*pauVar26 = fVar69 + fVar78;
          *(float *)(*pauVar26 + 4) = fVar71 + fVar85;
          *(ulong *)(param_2[uVar2] + 8) =
               CONCAT44(fVar161 * fVar56 + fVar100 * fVar45,fVar160 * fVar55 + fVar99 * fVar43);
          *(ulong *)param_2[uVar2] =
               CONCAT44(fVar159 * fVar54 + fVar98 * fVar42,fVar155 * fVar53 + fVar90 * fVar40);
          pauVar26 = param_1 + uVar2;
          *(float *)(*pauVar26 + 8) = fVar55 * fVar43 - fVar99 * fVar160;
          *(float *)(*pauVar26 + 0xc) = fVar56 * fVar45 - fVar100 * fVar161;
          *(float *)*pauVar26 = fVar53 * fVar40 - fVar90 * fVar155;
          *(float *)(*pauVar26 + 4) = fVar54 * fVar42 - fVar98 * fVar159;
          pauVar26 = param_1 + uVar3;
          *(float *)(*pauVar26 + 8) = fVar64 * fVar122 - fVar74 * fVar50;
          *(float *)(*pauVar26 + 0xc) = fVar66 * fVar123 - fVar76 * fVar51;
          *(float *)*pauVar26 = fVar58 * fVar113 - fVar70 * fVar46;
          *(float *)(*pauVar26 + 4) = fVar62 * fVar121 - fVar72 * fVar49;
          pauVar26 = param_2 + uVar3;
          *(float *)(*pauVar26 + 8) = fVar64 * fVar50 + fVar74 * fVar122;
          *(float *)(*pauVar26 + 0xc) = fVar66 * fVar51 + fVar76 * fVar123;
          *(float *)*pauVar26 = fVar58 * fVar46 + fVar70 * fVar113;
          *(float *)(*pauVar26 + 4) = fVar62 * fVar49 + fVar72 * fVar121;
          *(ulong *)(param_1[uVar4] + 8) =
               CONCAT44(fVar33 * fVar144 - fVar39 * fVar135,fVar31 * fVar143 - fVar37 * fVar133);
          *(ulong *)param_1[uVar4] =
               CONCAT44(fVar30 * fVar142 - fVar36 * fVar132,fVar28 * fVar136 - fVar34 * fVar124);
          *(ulong *)(param_2[uVar4] + 8) =
               CONCAT44(fVar33 * fVar135 + fVar39 * fVar144,fVar31 * fVar133 + fVar37 * fVar143);
          *(ulong *)param_2[uVar4] =
               CONCAT44(fVar30 * fVar132 + fVar36 * fVar142,fVar28 * fVar124 + fVar34 * fVar136);
        } while (uVar27 < uVar8);
      }
      if (param_4 < 0x41) {
        if (param_4 == 0x10) {
          uVar23 = uVar23 * 4;
          if ((uVar23 == 0) || ((uVar23 - 1 & uVar23) != 0)) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("ISPOWEROF2(uCount)",".\\xdsp_nx.h",0xf3,"FFT4");
          }
          uVar25 = (ulong)uVar23;
          pauVar26 = param_1;
          do {
            param_1 = pauVar26 + 1;
            auVar175 = *pauVar26;
            uVar25 = uVar25 - 1;
            auVar68 = *param_2;
            auVar47._0_8_ =
                 CONCAT17(auVar175[0xb],
                          CONCAT16(auVar175[10],
                                   CONCAT15(auVar175[9],CONCAT14(auVar175[8],auVar175._8_4_)))) ^
                 0x8000000000000000;
            auVar47[8] = auVar175[0xc];
            auVar47[9] = auVar175[0xd];
            auVar47[10] = auVar175[0xe];
            auVar47[0xb] = auVar175[0xf];
            auVar95[0xc] = auVar47[8];
            auVar95._0_12_ = auVar47;
            auVar95[0xd] = auVar47[9];
            auVar95[0xe] = auVar47[10];
            auVar95[0xf] = auVar47[0xb] ^ 0x80;
            auVar165._0_4_ = auVar175._0_4_ + auVar175._8_4_;
            auVar165._4_4_ = auVar175._0_4_ + (float)(auVar47._0_8_ >> 0x20);
            auVar165._8_4_ = auVar175._4_4_ + auVar47._8_4_;
            auVar165._12_4_ = auVar175._4_4_ + auVar95._12_4_;
            auVar52._0_8_ =
                 CONCAT17(auVar68[0xb],
                          CONCAT16(auVar68[10],
                                   CONCAT15(auVar68[9],CONCAT14(auVar68[8],auVar68._8_4_)))) ^
                 0x8000000000000000;
            auVar52[8] = auVar68[0xc];
            auVar52[9] = auVar68[0xd];
            auVar52[10] = auVar68[0xe];
            auVar52[0xb] = auVar68[0xf];
            auVar153[0xc] = auVar68[0xc];
            auVar153._0_12_ = auVar52;
            auVar153[0xd] = auVar68[0xd];
            auVar153[0xe] = auVar68[0xe];
            auVar153[0xf] = auVar68[0xf] ^ 0x80;
            auVar167._0_4_ = auVar68._0_4_ + auVar68._8_4_;
            auVar167._4_4_ = auVar68._0_4_ + (float)(auVar52._0_8_ >> 0x20);
            auVar167._8_4_ = auVar68._4_4_ + auVar52._8_4_;
            auVar167._12_4_ = auVar68._4_4_ + auVar153._12_4_;
            auVar95 = NEON_ext(auVar165,auVar165,8,1);
            auVar175 = NEON_ext(auVar167,auVar165,8,1);
            auVar68 = NEON_ext(auVar165,auVar175,8,1);
            auVar175 = NEON_ext(auVar95,auVar165,8,1);
            fVar78 = auVar68._0_4_;
            auVar168._4_4_ = auVar68._8_4_;
            auVar168._0_4_ = fVar78;
            auVar168._8_4_ = fVar78;
            auVar168._12_4_ = auVar68._8_4_;
            auVar95 = NEON_ext(auVar168,auVar68,8,1);
            auVar165 = NEON_ext(auVar167,auVar167,8,1);
            auVar60._0_8_ =
                 CONCAT17(auVar68[0xf],
                          CONCAT16(auVar68[0xe],CONCAT15(auVar68[0xd],CONCAT14(auVar68[0xc],fVar78))
                                  ));
            auVar60[8] = auVar68[0];
            auVar60[9] = auVar68[1];
            auVar60[10] = auVar68[2];
            auVar60[0xb] = auVar68[3] ^ 0x80;
            auVar169[0xc] = auVar68[0xc];
            auVar169._0_12_ = auVar60;
            auVar169[0xd] = auVar68[0xd];
            auVar169[0xe] = auVar68[0xe];
            auVar169[0xf] = auVar68[0xf] ^ 0x80;
            auVar68 = NEON_ext(auVar165,auVar167,8,1);
            *(float *)(*pauVar26 + 8) = auVar175._8_4_ + auVar60._8_4_;
            *(float *)(*pauVar26 + 0xc) = auVar175._12_4_ + auVar169._12_4_;
            *(float *)*pauVar26 = auVar175._0_4_ + fVar78;
            *(float *)(*pauVar26 + 4) = auVar175._4_4_ + (float)((ulong)auVar60._0_8_ >> 0x20);
            auVar48._0_8_ =
                 CONCAT17(auVar95[0xf],
                          CONCAT16(auVar95[0xe],
                                   CONCAT15(auVar95[0xd],CONCAT14(auVar95[0xc],auVar95._4_4_)))) ^
                 0x8000000000000000;
            auVar48[8] = auVar95[4];
            auVar48[9] = auVar95[5];
            auVar48[10] = auVar95[6];
            auVar48[0xb] = auVar95[7] ^ 0x80;
            auVar175[0xc] = auVar95[0xc];
            auVar175._0_12_ = auVar48;
            auVar175[0xd] = auVar95[0xd];
            auVar175[0xe] = auVar95[0xe];
            auVar175[0xf] = auVar95[0xf];
            *(float *)(*param_2 + 8) = auVar68._8_4_ + auVar48._8_4_;
            *(float *)(*param_2 + 0xc) = auVar68._12_4_ + auVar175._12_4_;
            *(float *)*param_2 = auVar68._0_4_ + auVar95._4_4_;
            *(float *)(*param_2 + 4) = auVar68._4_4_ + (float)(auVar48._0_8_ >> 0x20);
            pauVar26 = param_1;
            param_2 = param_2 + 1;
          } while (uVar25 != 0);
        }
        else if (param_4 == 0x20) {
          uVar23 = uVar23 * 4;
          if ((uVar23 == 0) || ((uVar23 - 1 & uVar23) != 0)) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("ISPOWEROF2(uCount)",".\\xdsp_nx.h",0x10d,"FFT8");
          }
          uVar25 = 0;
          do {
            uVar5 = uVar25 + 2;
            pauVar26 = param_1 + (uVar25 & 0xfffffffe);
            pauVar10 = param_2 + (uVar25 & 0xfffffffe);
            auVar175 = *pauVar26;
            fVar89 = *(float *)pauVar26[1];
            fVar85 = *(float *)(pauVar26[1] + 4);
            fVar87 = *(float *)pauVar10[1];
            fVar78 = auVar175._4_4_;
            auVar93._0_8_ =
                 CONCAT17(pauVar26[1][7],
                          CONCAT16(pauVar26[1][6],
                                   CONCAT15(pauVar26[1][5],CONCAT14(pauVar26[1][4],fVar85)))) ^
                 0x8000000000000000;
            auVar93[8] = pauVar26[1][0xc];
            auVar93[9] = pauVar26[1][0xd];
            auVar93[10] = pauVar26[1][0xe];
            auVar93[0xb] = pauVar26[1][0xf];
            auVar173[0xc] = pauVar26[1][0xc];
            auVar173._0_12_ = auVar93;
            auVar173[0xd] = pauVar26[1][0xd];
            auVar173[0xe] = pauVar26[1][0xe];
            auVar173[0xf] = pauVar26[1][0xf] ^ 0x80;
            auVar115._0_8_ =
                 CONCAT17(pauVar10[1][3],
                          CONCAT16(pauVar10[1][2],
                                   CONCAT15(pauVar10[1][1],CONCAT14(pauVar10[1][0],fVar87)))) ^
                 0x8000000000000000;
            auVar115[8] = pauVar10[1][8];
            auVar115[9] = pauVar10[1][9];
            auVar115[10] = pauVar10[1][10];
            auVar115[0xb] = pauVar10[1][0xb];
            auVar119[0xc] = pauVar10[1][8];
            auVar119._0_12_ = auVar115;
            auVar119[0xd] = pauVar10[1][9];
            auVar119[0xe] = pauVar10[1][10];
            auVar119[0xf] = pauVar10[1][0xb] ^ 0x80;
            auVar176._0_4_ = fVar78 + fVar85;
            auVar176._4_4_ = fVar78 + (float)(auVar93._0_8_ >> 0x20);
            auVar176._8_4_ =
                 (float)(CONCAT17(auVar175[0xf],
                                  CONCAT16(auVar175[0xe],
                                           CONCAT15(auVar175[0xd],CONCAT14(auVar175[0xc],fVar78))))
                        >> 0x20) + auVar93._8_4_;
            auVar176._12_4_ =
                 (float)(CONCAT17(auVar175[0xf],
                                  CONCAT16(auVar175[0xe],
                                           CONCAT15(auVar175[0xd],CONCAT14(auVar175[0xc],fVar78))))
                        >> 0x20) + auVar173._12_4_;
            auVar153 = NEON_ext(auVar176,auVar176,8,1);
            auVar177._0_4_ = *(float *)(*pauVar10 + 4) + *(float *)(pauVar10[1] + 4);
            auVar177._4_4_ = *(float *)(*pauVar10 + 4) + -*(float *)(pauVar10[1] + 4);
            auVar177._8_4_ = *(float *)(*pauVar10 + 0xc) + *(float *)(pauVar10[1] + 0xc);
            auVar177._12_4_ = *(float *)(*pauVar10 + 0xc) + -*(float *)(pauVar10[1] + 0xc);
            auVar95 = NEON_ext(auVar177,auVar176,8,1);
            auVar59._0_8_ =
                 CONCAT17(pauVar26[1][3],
                          CONCAT16(pauVar26[1][2],
                                   CONCAT15(pauVar26[1][1],CONCAT14(pauVar26[1][0],fVar89)))) ^
                 0x8000000000000000;
            auVar59[8] = pauVar26[1][8];
            auVar59[9] = pauVar26[1][9];
            auVar59[10] = pauVar26[1][10];
            auVar59[0xb] = pauVar26[1][0xb];
            auVar68[0xc] = pauVar26[1][8];
            auVar68._0_12_ = auVar59;
            auVar68[0xd] = pauVar26[1][9];
            auVar68[0xe] = pauVar26[1][10];
            auVar68[0xf] = pauVar26[1][0xb] ^ 0x80;
            auVar166._0_4_ = auVar175._0_4_ + fVar89;
            auVar166._4_4_ = auVar175._0_4_ + (float)(auVar59._0_8_ >> 0x20);
            auVar166._8_4_ = auVar175._8_4_ + auVar59._8_4_;
            auVar166._12_4_ = auVar175._8_4_ + auVar68._12_4_;
            auVar68 = NEON_ext(auVar176,auVar95,8,1);
            auVar171._0_4_ = *(float *)*pauVar10 + fVar87;
            auVar171._4_4_ = *(float *)*pauVar10 + (float)(auVar115._0_8_ >> 0x20);
            auVar171._8_4_ = *(float *)(*pauVar10 + 8) + auVar115._8_4_;
            auVar171._12_4_ = *(float *)(*pauVar10 + 8) + auVar119._12_4_;
            fVar78 = auVar68._0_4_;
            auVar140._4_4_ = auVar68._8_4_;
            auVar140._0_4_ = fVar78;
            auVar140._8_4_ = fVar78;
            auVar140._12_4_ = auVar68._8_4_;
            auVar95 = NEON_ext(auVar140,auVar68,8,1);
            auVar175 = NEON_ext(auVar171,auVar166,8,1);
            auVar165 = NEON_ext(auVar166,auVar175,8,1);
            fVar85 = auVar165._0_4_;
            auVar141._4_4_ = auVar165._8_4_;
            auVar141._0_4_ = fVar85;
            auVar141._8_4_ = fVar85;
            auVar141._12_4_ = auVar165._8_4_;
            auVar167 = NEON_ext(auVar141,auVar165,8,1);
            auVar175 = NEON_ext(auVar153,auVar176,8,1);
            auVar168 = NEON_ext(auVar177,auVar177,8,1);
            auVar153 = NEON_ext(auVar166,auVar166,8,1);
            fVar122 = auVar175._0_4_ + fVar78;
            fVar123 = auVar175._4_4_ + auVar68._12_4_;
            fVar124 = auVar175._8_4_ + -fVar78;
            fVar132 = auVar175._12_4_ + -auVar68._12_4_;
            auVar68 = NEON_ext(auVar168,auVar177,8,1);
            auVar116._0_8_ =
                 CONCAT17(auVar95[0xf],
                          CONCAT16(auVar95[0xe],
                                   CONCAT15(auVar95[0xd],CONCAT14(auVar95[0xc],auVar95._4_4_)))) ^
                 0x8000000000000000;
            auVar116[8] = auVar95[4];
            auVar116[9] = auVar95[5];
            auVar116[10] = auVar95[6];
            auVar116[0xb] = auVar95[7] ^ 0x80;
            auVar120[0xc] = auVar95[0xc];
            auVar120._0_12_ = auVar116;
            auVar120[0xd] = auVar95[0xd];
            auVar120[0xe] = auVar95[0xe];
            auVar120[0xf] = auVar95[0xf];
            auVar175 = NEON_ext(auVar153,auVar166,8,1);
            auVar153 = NEON_ext(auVar171,auVar171,8,1);
            fVar43 = auVar68._0_4_ + auVar95._4_4_;
            fVar45 = auVar68._4_4_ + (float)(auVar116._0_8_ >> 0x20);
            fVar46 = auVar68._8_4_ + auVar116._8_4_;
            fVar49 = auVar68._12_4_ + auVar120._12_4_;
            auVar68 = NEON_ext(auVar153,auVar171,8,1);
            fVar87 = auVar175._0_4_ + fVar85;
            fVar89 = auVar175._4_4_ + auVar165._12_4_;
            fVar40 = auVar175._8_4_ + -fVar85;
            fVar42 = auVar175._12_4_ + -auVar165._12_4_;
            auVar127._0_8_ =
                 CONCAT17(auVar167[0xf],
                          CONCAT16(auVar167[0xe],
                                   CONCAT15(auVar167[0xd],CONCAT14(auVar167[0xc],auVar167._4_4_))))
                 ^ 0x8000000000000000;
            auVar127[8] = auVar167[4];
            auVar127[9] = auVar167[5];
            auVar127[10] = auVar167[6];
            auVar127[0xb] = auVar167[7] ^ 0x80;
            auVar131[0xc] = auVar167[0xc];
            auVar131._0_12_ = auVar127;
            auVar131[0xd] = auVar167[0xd];
            auVar131[0xe] = auVar167[0xe];
            auVar131[0xf] = auVar167[0xf];
            fVar50 = auVar68._0_4_ + auVar167._4_4_;
            fVar51 = auVar68._4_4_ + (float)(auVar127._0_8_ >> 0x20);
            fVar113 = auVar68._8_4_ + auVar127._8_4_;
            fVar121 = auVar68._12_4_ + auVar131._12_4_;
            fVar78 = fVar51 + fVar123 * -0.70710677 + fVar45 * 0.70710677;
            fVar85 = fVar121 + fVar132 * -0.70710677 + fVar49 * -0.70710677;
            *(float *)(*pauVar26 + 8) = fVar40 + (fVar124 * 0.0 - fVar46 * -1.0);
            *(float *)(*pauVar26 + 0xc) = fVar42 + (fVar132 * -0.70710677 - fVar49 * -0.70710677);
            *(float *)*pauVar26 = fVar87 + (fVar122 * 1.0 - fVar43 * 0.0);
            *(float *)(*pauVar26 + 4) = fVar89 + (fVar123 * 0.70710677 - fVar45 * -0.70710677);
            *(float *)(pauVar26[1] + 8) = fVar40 + (fVar124 * 0.0 - fVar46 * 1.0);
            *(float *)(pauVar26[1] + 0xc) = fVar42 + (fVar132 * 0.70710677 - fVar49 * 0.70710677);
            *(float *)pauVar26[1] = fVar87 + (fVar122 * -1.0 - fVar43 * 0.0);
            *(float *)(pauVar26[1] + 4) = fVar89 + (fVar123 * -0.70710677 - fVar45 * 0.70710677);
            *(ulong *)(*pauVar10 + 8) =
                 CONCAT17((char)((uint)fVar85 >> 0x18),
                          CONCAT16((char)((uint)fVar85 >> 0x10),
                                   CONCAT15((char)((uint)fVar85 >> 8),
                                            CONCAT14(SUB41(fVar85,0),
                                                     fVar113 + fVar124 * -1.0 + fVar46 * 0.0))));
            *(ulong *)*pauVar10 =
                 CONCAT17((char)((uint)fVar78 >> 0x18),
                          CONCAT16((char)((uint)fVar78 >> 0x10),
                                   CONCAT15((char)((uint)fVar78 >> 8),
                                            CONCAT14(SUB41(fVar78,0),
                                                     fVar50 + fVar122 * 0.0 + fVar43 * 1.0))));
            *(float *)(pauVar10[1] + 8) = fVar113 + fVar124 * 1.0 + fVar46 * 0.0;
            *(float *)(pauVar10[1] + 0xc) = fVar121 + fVar132 * 0.70710677 + fVar49 * 0.70710677;
            *(float *)pauVar10[1] = fVar50 + fVar122 * 0.0 + fVar43 * -1.0;
            *(float *)(pauVar10[1] + 4) = fVar51 + fVar123 * 0.70710677 + fVar45 * -0.70710677;
            uVar25 = uVar5;
          } while ((ulong)uVar23 * 2 - uVar5 != 0);
        }
        else if (param_4 == 0x40) {
          uVar23 = uVar23 * 4;
          if ((uVar23 == 0) || ((uVar23 - 1 & uVar23) != 0)) {
                    /* WARNING: Subroutine does not return */
            __assert_fail("ISPOWEROF2(uCount)",".\\xdsp_nx.h",0x13c,"FFT16");
          }
          uVar25 = 0;
          do {
            iVar24 = (int)uVar25;
            uVar7 = iVar24 + 1;
            uVar8 = iVar24 + 2;
            uVar9 = iVar24 + 3;
            uVar5 = uVar25 & 0xffffffff;
            pauVar26 = param_1 + uVar5;
            pauVar10 = param_2 + uVar5;
            uVar25 = uVar25 + 4;
            uVar32 = *(undefined8 *)(param_1[uVar8] + 8);
            uVar29 = *(undefined8 *)param_1[uVar8];
            pauVar11 = param_2 + uVar8;
            pauVar12 = param_1 + uVar7;
            pauVar13 = param_1 + uVar9;
            pauVar16 = param_2 + uVar7;
            pauVar17 = param_2 + uVar9;
            fVar78 = (float)uVar29;
            fVar155 = *(float *)*pauVar26 + fVar78;
            fVar85 = (float)((ulong)uVar29 >> 0x20);
            fVar159 = *(float *)(*pauVar26 + 4) + fVar85;
            fVar87 = (float)uVar32;
            fVar160 = *(float *)(*pauVar26 + 8) + fVar87;
            fVar89 = (float)((ulong)uVar32 >> 0x20);
            fVar161 = *(float *)(*pauVar26 + 0xc) + fVar89;
            fVar53 = *(float *)*pauVar10 + *(float *)*pauVar11;
            fVar54 = *(float *)(*pauVar10 + 4) + *(float *)(*pauVar11 + 4);
            fVar55 = *(float *)(*pauVar10 + 8) + *(float *)(*pauVar11 + 8);
            fVar56 = *(float *)(*pauVar10 + 0xc) + *(float *)(*pauVar11 + 0xc);
            fVar78 = *(float *)*pauVar26 - fVar78;
            fVar85 = *(float *)(*pauVar26 + 4) - fVar85;
            fVar87 = *(float *)(*pauVar26 + 8) - fVar87;
            fVar89 = *(float *)(*pauVar26 + 0xc) - fVar89;
            fVar46 = *(float *)*pauVar10 - *(float *)*pauVar11;
            fVar49 = *(float *)(*pauVar10 + 4) - *(float *)(*pauVar11 + 4);
            fVar50 = *(float *)(*pauVar10 + 8) - *(float *)(*pauVar11 + 8);
            fVar51 = *(float *)(*pauVar10 + 0xc) - *(float *)(*pauVar11 + 0xc);
            fVar40 = *(float *)*pauVar12 - *(float *)*pauVar13;
            fVar42 = *(float *)(*pauVar12 + 4) - *(float *)(*pauVar13 + 4);
            fVar43 = *(float *)(*pauVar12 + 8) - *(float *)(*pauVar13 + 8);
            fVar45 = *(float *)(*pauVar12 + 0xc) - *(float *)(*pauVar13 + 0xc);
            fVar113 = *(float *)*pauVar16 - *(float *)*pauVar17;
            fVar121 = *(float *)(*pauVar16 + 4) - *(float *)(*pauVar17 + 4);
            fVar122 = *(float *)(*pauVar16 + 8) - *(float *)(*pauVar17 + 8);
            fVar123 = *(float *)(*pauVar16 + 0xc) - *(float *)(*pauVar17 + 0xc);
            fVar57 = *(float *)*pauVar12 + *(float *)*pauVar13;
            fVar58 = *(float *)(*pauVar12 + 4) + *(float *)(*pauVar13 + 4);
            fVar61 = *(float *)(*pauVar12 + 8) + *(float *)(*pauVar13 + 8);
            fVar62 = *(float *)(*pauVar12 + 0xc) + *(float *)(*pauVar13 + 0xc);
            fVar63 = *(float *)*pauVar16 + *(float *)*pauVar17;
            fVar64 = *(float *)(*pauVar16 + 4) + *(float *)(*pauVar17 + 4);
            fVar65 = *(float *)(*pauVar16 + 8) + *(float *)(*pauVar17 + 8);
            fVar66 = *(float *)(*pauVar16 + 0xc) + *(float *)(*pauVar17 + 0xc);
            fVar28 = fVar78 + fVar113;
            fVar30 = fVar85 + fVar121;
            fVar31 = fVar87 + fVar122;
            fVar33 = fVar89 + fVar123;
            fVar34 = fVar46 - fVar40;
            fVar36 = fVar49 - fVar42;
            fVar37 = fVar50 - fVar43;
            fVar39 = fVar51 - fVar45;
            fVar124 = fVar155 + fVar57;
            fVar132 = fVar159 + fVar58;
            fVar133 = fVar160 + fVar61;
            fVar135 = fVar161 + fVar62;
            fVar78 = fVar78 - fVar113;
            fVar85 = fVar85 - fVar121;
            fVar87 = fVar87 - fVar122;
            fVar89 = fVar89 - fVar123;
            fVar46 = fVar46 + fVar40;
            fVar49 = fVar49 + fVar42;
            fVar50 = fVar50 + fVar43;
            fVar51 = fVar51 + fVar45;
            fVar136 = fVar53 + fVar63;
            fVar142 = fVar54 + fVar64;
            fVar143 = fVar55 + fVar65;
            fVar144 = fVar56 + fVar66;
            fVar155 = fVar155 - fVar57;
            fVar159 = fVar159 - fVar58;
            fVar160 = fVar160 - fVar61;
            fVar161 = fVar161 - fVar62;
            fVar53 = fVar53 - fVar63;
            fVar54 = fVar54 - fVar64;
            fVar55 = fVar55 - fVar65;
            fVar56 = fVar56 - fVar66;
            fVar113 = fVar28 * 1.0 - fVar34 * -0.0;
            fVar121 = fVar30 * 0.9238795 - fVar36 * -0.38268343;
            fVar122 = fVar31 * 0.70710677 - fVar37 * -0.70710677;
            fVar123 = fVar33 * 0.38268343 - fVar39 * -0.9238795;
            fVar28 = fVar34 * 1.0 + fVar28 * -0.0;
            fVar30 = fVar36 * 0.9238795 + fVar30 * -0.38268343;
            fVar31 = fVar37 * 0.70710677 + fVar31 * -0.70710677;
            fVar33 = fVar39 * 0.38268343 + fVar33 * -0.9238795;
            fVar40 = fVar46 * 1.0 + fVar78 * -0.0;
            fVar42 = fVar49 * 0.38268343 + fVar85 * -0.9238795;
            uVar102 = (undefined1)((uint)fVar42 >> 8);
            uVar104 = (undefined1)((uint)fVar42 >> 0x10);
            uVar106 = (undefined1)((uint)fVar42 >> 0x18);
            fVar43 = fVar50 * -0.70710677 + fVar87 * -0.70710677;
            fVar45 = fVar51 * -0.9238795 + fVar89 * 0.38268343;
            auVar79._0_8_ =
                 CONCAT17((char)((uint)fVar133 >> 0x18),
                          CONCAT16((char)((uint)fVar133 >> 0x10),
                                   CONCAT15((char)((uint)fVar133 >> 8),
                                            CONCAT14(SUB41(fVar133,0),fVar133)))) ^
                 0x8000000000000000;
            auVar79[8] = SUB41(fVar135,0);
            uVar101 = (undefined1)((uint)fVar135 >> 8);
            auVar79[9] = uVar101;
            uVar103 = (undefined1)((uint)fVar135 >> 0x10);
            auVar79[10] = uVar103;
            bVar134 = (byte)((uint)fVar135 >> 0x18);
            auVar79[0xb] = bVar134;
            auVar81[0xc] = SUB41(fVar135,0);
            auVar81._0_12_ = auVar79;
            auVar81[0xd] = uVar101;
            auVar81[0xe] = uVar103;
            auVar81[0xf] = bVar134 ^ 0x80;
            fVar135 = fVar155 * -0.0 + fVar53 * 1.0;
            fVar34 = fVar159 * -0.70710677 + fVar54 * 0.70710677;
            fVar36 = fVar160 * -1.0 + fVar55 * -4.371139e-08;
            fVar37 = fVar161 * -0.70710677 + fVar56 * -0.70710677;
            auVar114._0_8_ =
                 CONCAT17((char)((uint)fVar122 >> 0x18),
                          CONCAT16((char)((uint)fVar122 >> 0x10),
                                   CONCAT15((char)((uint)fVar122 >> 8),
                                            CONCAT14(SUB41(fVar122,0),fVar122)))) ^
                 0x8000000000000000;
            auVar114[8] = SUB41(fVar123,0);
            auVar114[9] = (undefined1)((uint)fVar123 >> 8);
            auVar114[10] = (undefined1)((uint)fVar123 >> 0x10);
            auVar114[0xb] = (byte)((uint)fVar123 >> 0x18);
            auVar117[0xc] = auVar114[8];
            auVar117._0_12_ = auVar114;
            auVar117[0xd] = auVar114[9];
            auVar117[0xe] = auVar114[10];
            auVar117[0xf] = auVar114[0xb] ^ 0x80;
            auVar94._0_4_ = fVar124 + fVar133;
            auVar94._4_4_ = fVar124 + (float)(auVar79._0_8_ >> 0x20);
            auVar94._8_4_ = fVar132 + auVar79._8_4_;
            auVar94._12_4_ = fVar132 + auVar81._12_4_;
            auVar80._0_8_ =
                 CONCAT17((char)((uint)fVar143 >> 0x18),
                          CONCAT16((char)((uint)fVar143 >> 0x10),
                                   CONCAT15((char)((uint)fVar143 >> 8),
                                            CONCAT14(SUB41(fVar143,0),fVar143)))) ^
                 0x8000000000000000;
            auVar80[8] = SUB41(fVar144,0);
            uVar101 = (undefined1)((uint)fVar144 >> 8);
            auVar80[9] = uVar101;
            uVar103 = (undefined1)((uint)fVar144 >> 0x10);
            auVar80[10] = uVar103;
            bVar134 = (byte)((uint)fVar144 >> 0x18);
            auVar80[0xb] = bVar134;
            auVar82[0xc] = SUB41(fVar144,0);
            auVar82._0_12_ = auVar80;
            auVar82[0xd] = uVar101;
            auVar82[0xe] = uVar103;
            auVar82[0xf] = bVar134 ^ 0x80;
            fVar123 = fVar155 * 1.0 - fVar53 * -0.0;
            fVar124 = fVar159 * 0.70710677 - fVar54 * -0.70710677;
            fVar132 = fVar160 * -4.371139e-08 - fVar55 * -1.0;
            fVar133 = fVar161 * -0.70710677 - fVar56 * -0.70710677;
            fVar78 = fVar78 * 1.0 - fVar46 * -0.0;
            fVar85 = fVar85 * 0.38268343 - fVar49 * -0.9238795;
            fVar87 = fVar87 * -0.70710677 - fVar50 * -0.70710677;
            fVar89 = fVar89 * -0.9238795 - fVar51 * 0.38268343;
            auVar83._0_4_ = fVar136 + fVar143;
            auVar83._4_4_ = fVar136 + (float)(auVar80._0_8_ >> 0x20);
            auVar83._8_4_ = fVar142 + auVar80._8_4_;
            auVar83._12_4_ = fVar142 + auVar82._12_4_;
            auVar175 = NEON_ext(auVar83,auVar94,8,1);
            auVar118._0_4_ = fVar113 + fVar122;
            auVar118._4_4_ = fVar113 + (float)(auVar114._0_8_ >> 0x20);
            auVar118._8_4_ = fVar121 + auVar114._8_4_;
            auVar118._12_4_ = fVar121 + auVar117._12_4_;
            auVar125._0_8_ =
                 CONCAT17((char)((uint)fVar31 >> 0x18),
                          CONCAT16((char)((uint)fVar31 >> 0x10),
                                   CONCAT15((char)((uint)fVar31 >> 8),
                                            CONCAT14(SUB41(fVar31,0),fVar31)))) ^ 0x8000000000000000
            ;
            auVar125[8] = SUB41(fVar33,0);
            uVar101 = (undefined1)((uint)fVar33 >> 8);
            auVar125[9] = uVar101;
            uVar103 = (undefined1)((uint)fVar33 >> 0x10);
            auVar125[10] = uVar103;
            bVar134 = (byte)((uint)fVar33 >> 0x18);
            auVar125[0xb] = bVar134;
            auVar128[0xc] = SUB41(fVar33,0);
            auVar128._0_12_ = auVar125;
            auVar128[0xd] = uVar101;
            auVar128[0xe] = uVar103;
            auVar128[0xf] = bVar134 ^ 0x80;
            auVar129._0_4_ = fVar28 + fVar31;
            auVar129._4_4_ = fVar28 + (float)(auVar125._0_8_ >> 0x20);
            auVar129._8_4_ = fVar30 + auVar125._8_4_;
            auVar129._12_4_ = fVar30 + auVar128._12_4_;
            auVar156._0_8_ =
                 CONCAT17((char)((uint)fVar36 >> 0x18),
                          CONCAT16((char)((uint)fVar36 >> 0x10),
                                   CONCAT15((char)((uint)fVar36 >> 8),
                                            CONCAT14(SUB41(fVar36,0),fVar36)))) ^ 0x8000000000000000
            ;
            auVar156[8] = SUB41(fVar37,0);
            auVar156[9] = (undefined1)((uint)fVar37 >> 8);
            auVar156[10] = (undefined1)((uint)fVar37 >> 0x10);
            auVar156[0xb] = (byte)((uint)fVar37 >> 0x18);
            auVar157[0xc] = auVar156[8];
            auVar157._0_12_ = auVar156;
            auVar157[0xd] = auVar156[9];
            auVar157[0xe] = auVar156[10];
            auVar157[0xf] = auVar156[0xb] ^ 0x80;
            auVar176 = NEON_ext(auVar94,auVar175,8,1);
            auVar137._0_8_ =
                 CONCAT17((char)((uint)fVar132 >> 0x18),
                          CONCAT16((char)((uint)fVar132 >> 0x10),
                                   CONCAT15((char)((uint)fVar132 >> 8),
                                            CONCAT14(SUB41(fVar132,0),fVar132)))) ^
                 0x8000000000000000;
            auVar137[8] = SUB41(fVar133,0);
            uVar101 = (undefined1)((uint)fVar133 >> 8);
            auVar137[9] = uVar101;
            uVar103 = (undefined1)((uint)fVar133 >> 0x10);
            auVar137[10] = uVar103;
            bVar134 = (byte)((uint)fVar133 >> 0x18);
            auVar137[0xb] = bVar134;
            auVar138[0xc] = SUB41(fVar133,0);
            auVar138._0_12_ = auVar137;
            auVar138[0xd] = uVar101;
            auVar138[0xe] = uVar103;
            auVar138[0xf] = bVar134 ^ 0x80;
            auVar162._0_8_ =
                 CONCAT17((char)((uint)fVar87 >> 0x18),
                          CONCAT16((char)((uint)fVar87 >> 0x10),
                                   CONCAT15((char)((uint)fVar87 >> 8),
                                            CONCAT14(SUB41(fVar87,0),fVar87)))) ^ 0x8000000000000000
            ;
            auVar162[8] = SUB41(fVar89,0);
            auVar162[9] = (undefined1)((uint)fVar89 >> 8);
            auVar162[10] = (undefined1)((uint)fVar89 >> 0x10);
            auVar162[0xb] = (byte)((uint)fVar89 >> 0x18);
            auVar163[0xc] = auVar162[8];
            auVar163._0_12_ = auVar162;
            auVar163[0xd] = auVar162[9];
            auVar163[0xe] = auVar162[10];
            auVar163[0xf] = auVar162[0xb] ^ 0x80;
            auVar175 = NEON_ext(auVar94,auVar94,8,1);
            auVar95 = NEON_ext(auVar175,auVar94,8,1);
            auVar175 = NEON_ext(auVar118,auVar118,8,1);
            auVar68 = NEON_ext(auVar83,auVar83,8,1);
            auVar68 = NEON_ext(auVar68,auVar83,8,1);
            auVar158._0_4_ = fVar135 + fVar36;
            auVar158._4_4_ = fVar135 + (float)(auVar156._0_8_ >> 0x20);
            auVar158._8_4_ = fVar34 + auVar156._8_4_;
            auVar158._12_4_ = fVar34 + auVar157._12_4_;
            auVar167 = NEON_ext(auVar129,auVar129,8,1);
            auVar139._0_4_ = fVar123 + fVar132;
            auVar139._4_4_ = fVar123 + (float)(auVar137._0_8_ >> 0x20);
            auVar139._8_4_ = fVar124 + auVar137._8_4_;
            auVar139._12_4_ = fVar124 + auVar138._12_4_;
            auVar165 = NEON_ext(auVar129,auVar118,8,1);
            auVar167 = NEON_ext(auVar167,auVar129,8,1);
            auVar168 = NEON_ext(auVar158,auVar158,8,1);
            auVar166 = NEON_ext(auVar118,auVar165,8,1);
            auVar165 = NEON_ext(auVar175,auVar118,8,1);
            auVar175 = NEON_ext(auVar139,auVar139,8,1);
            auVar164._0_4_ = fVar78 + fVar87;
            auVar164._4_4_ = fVar78 + (float)(auVar162._0_8_ >> 0x20);
            auVar164._8_4_ = fVar85 + auVar162._8_4_;
            auVar164._12_4_ = fVar85 + auVar163._12_4_;
            fVar78 = fVar40 + fVar43;
            fVar85 = fVar40 + -fVar43;
            uVar101 = SUB41(fVar85,0);
            uVar103 = (undefined1)((uint)fVar85 >> 8);
            uVar105 = (undefined1)((uint)fVar85 >> 0x10);
            uVar107 = (undefined1)((uint)fVar85 >> 0x18);
            fVar85 = (float)(CONCAT17(uVar106,CONCAT16(uVar104,CONCAT15(uVar102,CONCAT14(SUB41(
                                                  fVar42,0),fVar40)))) >> 0x20) + fVar45;
            uVar108 = SUB41(fVar85,0);
            uVar109 = (undefined1)((uint)fVar85 >> 8);
            uVar110 = (undefined1)((uint)fVar85 >> 0x10);
            uVar111 = (undefined1)((uint)fVar85 >> 0x18);
            fVar85 = (float)(CONCAT17(uVar106,CONCAT16(uVar104,CONCAT15(uVar102,CONCAT14(SUB41(
                                                  fVar42,0),fVar40)))) >> 0x20) + -fVar45;
            uVar102 = SUB41(fVar85,0);
            uVar104 = (undefined1)((uint)fVar85 >> 8);
            uVar106 = (undefined1)((uint)fVar85 >> 0x10);
            uVar112 = (undefined1)((uint)fVar85 >> 0x18);
            auVar173 = NEON_ext(auVar164,auVar164,8,1);
            fVar85 = auVar176._0_4_;
            auVar152._4_4_ = auVar176._8_4_;
            auVar152._0_4_ = fVar85;
            auVar152._8_4_ = fVar85;
            auVar152._12_4_ = auVar176._8_4_;
            auVar153 = NEON_ext(auVar152,auVar176,8,1);
            auVar177 = NEON_ext(auVar158,auVar139,8,1);
            auVar168 = NEON_ext(auVar168,auVar158,8,1);
            auVar18[4] = uVar101;
            auVar18._0_4_ = fVar78;
            auVar18[5] = uVar103;
            auVar18[6] = uVar105;
            auVar18[7] = uVar107;
            auVar18[8] = uVar108;
            auVar18[9] = uVar109;
            auVar18[10] = uVar110;
            auVar18[0xb] = uVar111;
            auVar18[0xc] = uVar102;
            auVar18[0xd] = uVar104;
            auVar18[0xe] = uVar106;
            auVar18[0xf] = uVar112;
            auVar169 = NEON_ext(auVar18,auVar164,8,1);
            auVar171 = NEON_ext(auVar139,auVar177,8,1);
            auVar177 = NEON_ext(auVar164,auVar169,8,1);
            auVar169 = NEON_ext(auVar173,auVar164,8,1);
            auVar145._0_8_ =
                 CONCAT17(auVar176[0xf],
                          CONCAT16(auVar176[0xe],
                                   CONCAT15(auVar176[0xd],CONCAT14(auVar176[0xc],fVar85))));
            auVar145[8] = auVar176[0];
            auVar145[9] = auVar176[1];
            auVar145[10] = auVar176[2];
            auVar145[0xb] = auVar176[3] ^ 0x80;
            auVar148[0xc] = auVar176[0xc];
            auVar148._0_12_ = auVar145;
            auVar148[0xd] = auVar176[0xd];
            auVar148[0xe] = auVar176[0xe];
            auVar148[0xf] = auVar176[0xf] ^ 0x80;
            auVar175 = NEON_ext(auVar175,auVar139,8,1);
            pauVar26 = param_1 + uVar5;
            *(float *)(*pauVar26 + 8) = auVar95._8_4_ + auVar145._8_4_;
            *(float *)(*pauVar26 + 0xc) = auVar95._12_4_ + auVar148._12_4_;
            *(float *)*pauVar26 = auVar95._0_4_ + fVar85;
            *(float *)(*pauVar26 + 4) = auVar95._4_4_ + (float)((ulong)auVar145._0_8_ >> 0x20);
            fVar85 = auVar166._0_4_;
            auVar174._4_4_ = auVar166._8_4_;
            auVar174._0_4_ = fVar85;
            auVar174._8_4_ = fVar85;
            auVar174._12_4_ = auVar166._8_4_;
            auVar95 = NEON_ext(auVar174,auVar166,8,1);
            auVar146._0_8_ =
                 CONCAT17(auVar166[0xf],
                          CONCAT16(auVar166[0xe],
                                   CONCAT15(auVar166[0xd],CONCAT14(auVar166[0xc],fVar85))));
            auVar146[8] = auVar166[0];
            auVar146[9] = auVar166[1];
            auVar146[10] = auVar166[2];
            auVar146[0xb] = auVar166[3] ^ 0x80;
            auVar149[0xc] = auVar166[0xc];
            auVar149._0_12_ = auVar146;
            auVar149[0xd] = auVar166[0xd];
            auVar149[0xe] = auVar166[0xe];
            auVar149[0xf] = auVar166[0xf] ^ 0x80;
            pauVar26 = param_1 + uVar7;
            *(float *)(*pauVar26 + 8) = auVar165._8_4_ + auVar146._8_4_;
            *(float *)(*pauVar26 + 0xc) = auVar165._12_4_ + auVar149._12_4_;
            *(float *)*pauVar26 = auVar165._0_4_ + fVar85;
            *(float *)(*pauVar26 + 4) = auVar165._4_4_ + (float)((ulong)auVar146._0_8_ >> 0x20);
            fVar85 = auVar171._0_4_;
            auVar178._4_4_ = auVar171._8_4_;
            auVar178._0_4_ = fVar85;
            auVar178._8_4_ = fVar85;
            auVar178._12_4_ = auVar171._8_4_;
            auVar165 = NEON_ext(auVar178,auVar171,8,1);
            auVar91._0_8_ =
                 CONCAT17(auVar153[0xf],
                          CONCAT16(auVar153[0xe],
                                   CONCAT15(auVar153[0xd],CONCAT14(auVar153[0xc],auVar153._4_4_))))
                 ^ 0x8000000000000000;
            auVar91[8] = auVar153[4];
            auVar91[9] = auVar153[5];
            auVar91[10] = auVar153[6];
            auVar91[0xb] = auVar153[7] ^ 0x80;
            auVar96[0xc] = auVar153[0xc];
            auVar96._0_12_ = auVar91;
            auVar96[0xd] = auVar153[0xd];
            auVar96[0xe] = auVar153[0xe];
            auVar96[0xf] = auVar153[0xf];
            pauVar26 = param_2 + uVar5;
            *(float *)(*pauVar26 + 8) = auVar68._8_4_ + auVar91._8_4_;
            *(float *)(*pauVar26 + 0xc) = auVar68._12_4_ + auVar96._12_4_;
            *(float *)*pauVar26 = auVar68._0_4_ + auVar153._4_4_;
            *(float *)(*pauVar26 + 4) = auVar68._4_4_ + (float)(auVar91._0_8_ >> 0x20);
            fVar87 = auVar177._0_4_;
            auVar67._4_4_ = auVar177._8_4_;
            auVar67._0_4_ = fVar87;
            auVar67._8_4_ = fVar87;
            auVar67._12_4_ = auVar177._8_4_;
            auVar92._0_8_ =
                 CONCAT17(auVar177[0xf],
                          CONCAT16(auVar177[0xe],
                                   CONCAT15(auVar177[0xd],CONCAT14(auVar177[0xc],fVar87))));
            auVar92[8] = auVar177[0];
            auVar92[9] = auVar177[1];
            auVar92[10] = auVar177[2];
            auVar92[0xb] = auVar177[3] ^ 0x80;
            auVar97[0xc] = auVar177[0xc];
            auVar97._0_12_ = auVar92;
            auVar97[0xd] = auVar177[0xd];
            auVar97[0xe] = auVar177[0xe];
            auVar97[0xf] = auVar177[0xf] ^ 0x80;
            auVar68 = NEON_ext(auVar67,auVar177,8,1);
            auVar147._0_8_ =
                 CONCAT17(auVar95[0xf],
                          CONCAT16(auVar95[0xe],
                                   CONCAT15(auVar95[0xd],CONCAT14(auVar95[0xc],auVar95._4_4_)))) ^
                 0x8000000000000000;
            auVar147[8] = auVar95[4];
            auVar147[9] = auVar95[5];
            auVar147[10] = auVar95[6];
            auVar147[0xb] = auVar95[7] ^ 0x80;
            auVar150[0xc] = auVar95[0xc];
            auVar150._0_12_ = auVar147;
            auVar150[0xd] = auVar95[0xd];
            auVar150[0xe] = auVar95[0xe];
            auVar150[0xf] = auVar95[0xf];
            pauVar26 = param_2 + uVar7;
            *(float *)(*pauVar26 + 8) = auVar167._8_4_ + auVar147._8_4_;
            *(float *)(*pauVar26 + 0xc) = auVar167._12_4_ + auVar150._12_4_;
            *(float *)*pauVar26 = auVar167._0_4_ + auVar95._4_4_;
            *(float *)(*pauVar26 + 4) = auVar167._4_4_ + (float)(auVar147._0_8_ >> 0x20);
            auVar170._0_8_ =
                 CONCAT17(auVar171[0xf],
                          CONCAT16(auVar171[0xe],
                                   CONCAT15(auVar171[0xd],CONCAT14(auVar171[0xc],fVar85))));
            auVar170[8] = auVar171[0];
            auVar170[9] = auVar171[1];
            auVar170[10] = auVar171[2];
            auVar170[0xb] = auVar171[3] ^ 0x80;
            auVar172[0xc] = auVar171[0xc];
            auVar172._0_12_ = auVar170;
            auVar172[0xd] = auVar171[0xd];
            auVar172[0xe] = auVar171[0xe];
            auVar172[0xf] = auVar171[0xf] ^ 0x80;
            auVar151._0_8_ =
                 CONCAT17(auVar165[0xf],
                          CONCAT16(auVar165[0xe],
                                   CONCAT15(auVar165[0xd],CONCAT14(auVar165[0xc],auVar165._4_4_))))
                 ^ 0x8000000000000000;
            auVar151[8] = auVar165[4];
            auVar151[9] = auVar165[5];
            auVar151[10] = auVar165[6];
            auVar151[0xb] = auVar165[7] ^ 0x80;
            auVar154[0xc] = auVar165[0xc];
            auVar154._0_12_ = auVar151;
            auVar154[0xd] = auVar165[0xd];
            auVar154[0xe] = auVar165[0xe];
            auVar154[0xf] = auVar165[0xf];
            pauVar26 = param_1 + uVar8;
            *(float *)(*pauVar26 + 8) = auVar175._8_4_ + auVar170._8_4_;
            *(float *)(*pauVar26 + 0xc) = auVar175._12_4_ + auVar172._12_4_;
            *(float *)*pauVar26 = auVar175._0_4_ + fVar85;
            *(float *)(*pauVar26 + 4) = auVar175._4_4_ + (float)((ulong)auVar170._0_8_ >> 0x20);
            pauVar26 = param_1 + uVar9;
            *(float *)(*pauVar26 + 8) = auVar169._8_4_ + auVar92._8_4_;
            *(float *)(*pauVar26 + 0xc) = auVar169._12_4_ + auVar97._12_4_;
            *(float *)*pauVar26 = auVar169._0_4_ + fVar87;
            *(float *)(*pauVar26 + 4) = auVar169._4_4_ + (float)((ulong)auVar92._0_8_ >> 0x20);
            auVar19[4] = uVar101;
            auVar19._0_4_ = fVar78;
            auVar19[5] = uVar103;
            auVar19[6] = uVar105;
            auVar19[7] = uVar107;
            auVar19[8] = uVar108;
            auVar19[9] = uVar109;
            auVar19[10] = uVar110;
            auVar19[0xb] = uVar111;
            auVar19[0xc] = uVar102;
            auVar19[0xd] = uVar104;
            auVar19[0xe] = uVar106;
            auVar19[0xf] = uVar112;
            auVar20[4] = uVar101;
            auVar20._0_4_ = fVar78;
            auVar20[5] = uVar103;
            auVar20[6] = uVar105;
            auVar20[7] = uVar107;
            auVar20[8] = uVar108;
            auVar20[9] = uVar109;
            auVar20[10] = uVar110;
            auVar20[0xb] = uVar111;
            auVar20[0xc] = uVar102;
            auVar20[0xd] = uVar104;
            auVar20[0xe] = uVar106;
            auVar20[0xf] = uVar112;
            auVar175 = NEON_ext(auVar19,auVar20,8,1);
            auVar21[4] = uVar101;
            auVar21._0_4_ = fVar78;
            auVar21[5] = uVar103;
            auVar21[6] = uVar105;
            auVar21[7] = uVar107;
            auVar21[8] = uVar108;
            auVar21[9] = uVar109;
            auVar21[10] = uVar110;
            auVar21[0xb] = uVar111;
            auVar21[0xc] = uVar102;
            auVar21[0xd] = uVar104;
            auVar21[0xe] = uVar106;
            auVar21[0xf] = uVar112;
            auVar175 = NEON_ext(auVar175,auVar21,8,1);
            fVar78 = auVar168._4_4_ + (float)(auVar151._0_8_ >> 0x20);
            fVar85 = auVar168._12_4_ + auVar154._12_4_;
            *(ulong *)(param_2[uVar8] + 8) =
                 CONCAT17((char)((uint)fVar85 >> 0x18),
                          CONCAT16((char)((uint)fVar85 >> 0x10),
                                   CONCAT15((char)((uint)fVar85 >> 8),
                                            CONCAT14(SUB41(fVar85,0),auVar168._8_4_ + auVar151._8_4_
                                                    ))));
            *(ulong *)param_2[uVar8] =
                 CONCAT17((char)((uint)fVar78 >> 0x18),
                          CONCAT16((char)((uint)fVar78 >> 0x10),
                                   CONCAT15((char)((uint)fVar78 >> 8),
                                            CONCAT14(SUB41(fVar78,0),auVar168._0_4_ + auVar165._4_4_
                                                    ))));
            auVar126._0_8_ =
                 CONCAT17(auVar68[0xf],
                          CONCAT16(auVar68[0xe],
                                   CONCAT15(auVar68[0xd],CONCAT14(auVar68[0xc],auVar68._4_4_)))) ^
                 0x8000000000000000;
            auVar126[8] = auVar68[4];
            auVar126[9] = auVar68[5];
            auVar126[10] = auVar68[6];
            auVar126[0xb] = auVar68[7] ^ 0x80;
            auVar130[0xc] = auVar68[0xc];
            auVar130._0_12_ = auVar126;
            auVar130[0xd] = auVar68[0xd];
            auVar130[0xe] = auVar68[0xe];
            auVar130[0xf] = auVar68[0xf];
            pauVar26 = param_2 + uVar9;
            *(float *)(*pauVar26 + 8) = auVar175._8_4_ + auVar126._8_4_;
            *(float *)(*pauVar26 + 0xc) = auVar175._12_4_ + auVar130._12_4_;
            *(float *)*pauVar26 = auVar175._0_4_ + auVar68._4_4_;
            *(float *)(*pauVar26 + 4) = auVar175._4_4_ + (float)(auVar126._0_8_ >> 0x20);
          } while ((ulong)uVar23 * 4 - uVar25 != 0);
        }
        return param_1;
      }
      param_3 = param_3 + (ulong)(param_4 >> 1) * 0x10;
      uVar23 = uVar23 << 2;
      param_4 = uVar7;
    } while (param_3 != 0);
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("pUnityTable != NULL",".\\xdsp_nx.h",0x167,"FFT");
}

