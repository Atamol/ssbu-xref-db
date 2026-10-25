// addr:      71028a7560
// offset:    0x28a7560
// name:      FUN_71028a7560
// mangled:   
// signature: undefined __cdecl FUN_71028a7560(float param_1, int * param_2, undefined8 param_3, undefined8 param_4, byte * * * * param_5, long * * * * param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9)


/* WARNING: Removing unreachable block (ram,0x0071028a833c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71028a7560(float param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                   byte ****param_5,long ****param_6,undefined8 param_7,undefined8 param_8,
                   undefined8 param_9)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined5 uVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  int iVar20;
  int iVar21;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  uint uVar28;
  uint uVar29;
  uint uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  uint uVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  uint uVar37;
  int iVar38;
  char cVar39;
  code *pcVar40;
  long ***ppplVar41;
  long lVar42;
  ulong uVar43;
  long lVar44;
  long **pplVar45;
  undefined8 *puVar46;
  long *plVar47;
  long lVar48;
  uint *puVar49;
  undefined1 (*pauVar50) [12];
  undefined8 uVar51;
  undefined8 uVar52;
  undefined8 uVar53;
  undefined4 uVar56;
  undefined1 auVar54 [12];
  undefined1 auVar55 [12];
  undefined1 uVar57;
  undefined1 uVar58;
  undefined1 uVar59;
  undefined1 uVar60;
  undefined1 uVar61;
  undefined1 uVar62;
  undefined1 uVar63;
  undefined1 uVar64;
  undefined1 uVar65;
  undefined1 uVar66;
  undefined1 uVar67;
  undefined1 uVar68;
  undefined1 uVar69;
  undefined1 uVar70;
  undefined1 uVar71;
  undefined1 uVar72;
  undefined1 uVar73;
  undefined1 uVar74;
  undefined1 uVar75;
  undefined1 uVar76;
  undefined1 uVar77;
  undefined1 uVar78;
  undefined1 uVar79;
  undefined1 uVar80;
  float fVar93;
  undefined8 uVar81;
  float fVar94;
  undefined1 auVar87 [12];
  undefined1 auVar88 [16];
  undefined8 uVar82;
  undefined8 uVar83;
  undefined8 uVar84;
  undefined8 uVar85;
  undefined8 uVar86;
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  float fVar95;
  undefined8 uVar96;
  float fVar100;
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  undefined1 auVar104 [16];
  undefined1 auVar105 [16];
  float fVar106;
  undefined1 auVar107 [16];
  undefined1 auVar108 [16];
  float fVar109;
  float fVar110;
  float fVar111;
  undefined8 uVar112;
  undefined1 auVar113 [16];
  undefined1 auVar114 [16];
  undefined1 auVar115 [16];
  float fVar116;
  undefined8 uVar117;
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  float fVar120;
  undefined8 uVar121;
  float fVar122;
  float fVar123;
  undefined1 auVar124 [16];
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  undefined1 auVar129 [16];
  float fVar130;
  float fVar132;
  undefined1 auVar131 [16];
  float fVar133;
  float fVar134;
  float fVar140;
  undefined1 auVar135 [16];
  undefined1 auVar136 [16];
  undefined1 auVar137 [16];
  undefined1 auVar138 [16];
  undefined1 auVar139 [16];
  float fVar141;
  float fVar142;
  undefined8 uVar143;
  float fVar149;
  undefined1 auVar144 [16];
  undefined1 auVar145 [16];
  float fVar148;
  float fVar150;
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  float fVar151;
  undefined1 auVar152 [16];
  undefined1 auVar153 [16];
  undefined1 auVar154 [16];
  float fVar155;
  float fVar156;
  undefined1 auVar157 [16];
  float fVar158;
  undefined8 uVar159;
  undefined8 uVar160;
  undefined1 auVar161 [16];
  undefined1 auVar162 [16];
  float fVar163;
  float fVar165;
  float fVar166;
  undefined1 auVar164 [16];
  float fStack_e4;
  undefined1 local_c0 [8];
  undefined8 uStack_b8;
  undefined1 local_b0 [8];
  undefined8 uStack_a8;
  long **local_98;
  long *local_90;
  long local_88;
  
  if (*param_2 != 2) {
    if (*param_2 != 1) {
      return;
    }
    puVar49 = *(uint **)(*(long *)(param_2 + 2) + 0x340);
    if (((DAT_710532d168 & 1) == 0) && (iVar38 = __cxa_guard_acquire(&DAT_710532d168), iVar38 != 0))
    {
      _DAT_710532d178 = 0;
      _DAT_710532d170 = 0xc2dc000000000000;
      __cxa_guard_release(&DAT_710532d168);
    }
    fVar36 = _DAT_710752900c;
    fVar35 = _CosCoefficients;
    fVar34 = _DAT_710752800c;
    fVar140 = _DAT_7107528004;
    fVar133 = _SinCoefficients;
    auVar137 = _DAT_7104467790;
    uVar5 = puVar49[1];
    uVar4 = puVar49[2];
    uVar6 = puVar49[3];
    uVar37 = *puVar49 ^ *puVar49 << 0xb;
    uVar37 = uVar37 ^ uVar37 >> 8 ^ uVar6;
    uVar1 = uVar37 ^ uVar6 >> 0x13;
    auVar88 = NEON_fmov(0xbf800000,4);
    uVar2 = uVar5 ^ uVar5 << 0xb;
    uVar2 = uVar2 ^ uVar2 >> 8 ^ uVar1;
    uVar37 = uVar2 ^ uVar37 >> 0x13;
    uVar57 = (undefined1)_DAT_7107529004;
    uVar58 = (undefined1)((uint)_DAT_7107529004 >> 8);
    uVar59 = (undefined1)((uint)_DAT_7107529004 >> 0x10);
    uVar60 = (undefined1)((uint)_DAT_7107529004 >> 0x18);
    uVar3 = uVar4 ^ uVar4 << 0xb;
    uVar3 = uVar3 ^ uVar3 >> 8 ^ uVar37;
    uVar2 = uVar3 ^ uVar2 >> 0x13;
    fVar116 = ((float)uVar1 * 110.0 * 2.3283064e-10 + -145.0) * 0.017453292 * 0.5;
    fVar109 = ((float)uVar37 * 17.0 * 2.3283064e-10 + 0.0) * 0.017453292 * 0.5;
    fVar130 = _Float1Divided2Pi * fVar116;
    fVar111 = _Float1Divided2Pi * fVar109;
    uVar7 = CONCAT14(uVar57,_DAT_7107529004);
    fVar141 = ((float)uVar2 * 6.2831855 * 2.3283064e-10 + 0.0) * 0.5;
    auVar131 = NEON_fmov(0x3f800000,4);
    fVar151 = _Float1Divided2Pi * fVar141;
    auVar97._0_4_ = (int)(fVar130 + (float)(-(uint)(0.0 <= fVar130) & 0x80000000 ^ 0xbf000000));
    auVar97._4_4_ = (int)(fVar130 + (float)(-(uint)(0.0 <= fVar130) & 0x80000000 ^ 0xbf000000));
    auVar97._8_4_ = (int)(fVar130 + (float)(-(uint)(0.0 <= fVar130) & 0x80000000 ^ 0xbf000000));
    auVar97._12_4_ = (int)(fVar130 + (float)(-(uint)(0.0 <= fVar130) & 0x80000000 ^ 0xbf000000));
    fVar156 = -_FloatPiDivided2;
    auVar152._0_4_ = (int)(fVar151 + (float)(-(uint)(0.0 <= fVar151) & 0x80000000 ^ 0xbf000000));
    auVar152._4_4_ = (int)(fVar151 + (float)(-(uint)(0.0 <= fVar151) & 0x80000000 ^ 0xbf000000));
    auVar152._8_4_ = (int)(fVar151 + (float)(-(uint)(0.0 <= fVar151) & 0x80000000 ^ 0xbf000000));
    auVar152._12_4_ = (int)(fVar151 + (float)(-(uint)(0.0 <= fVar151) & 0x80000000 ^ 0xbf000000));
    fVar95 = -_DAT_7107529010;
    auVar113._0_4_ = (int)(fVar111 + (float)(-(uint)(0.0 <= fVar111) & 0x80000000 ^ 0xbf000000));
    auVar113._4_4_ = (int)(fVar111 + (float)(-(uint)(0.0 <= fVar111) & 0x80000000 ^ 0xbf000000));
    auVar113._8_4_ = (int)(fVar111 + (float)(-(uint)(0.0 <= fVar111) & 0x80000000 ^ 0xbf000000));
    auVar113._12_4_ = (int)(fVar111 + (float)(-(uint)(0.0 <= fVar111) & 0x80000000 ^ 0xbf000000));
    auVar98 = NEON_scvtf(auVar97,4);
    auVar108._0_4_ = fVar116 - auVar98._0_4_ * _Float2Pi;
    auVar108._4_4_ = fVar116 - auVar98._4_4_ * _Float2Pi;
    auVar108._8_4_ = fVar116 - auVar98._8_4_ * _Float2Pi;
    auVar108._12_4_ = fVar116 - auVar98._12_4_ * _Float2Pi;
    auVar98 = NEON_scvtf(auVar152,4);
    auVar119._0_4_ = fVar141 - auVar98._0_4_ * _Float2Pi;
    auVar119._4_4_ = fVar141 - auVar98._4_4_ * _Float2Pi;
    auVar119._8_4_ = fVar141 - auVar98._8_4_ * _Float2Pi;
    auVar119._12_4_ = fVar141 - auVar98._12_4_ * _Float2Pi;
    auVar98 = NEON_scvtf(auVar113,4);
    fVar111 = fVar109 - auVar98._0_4_ * _Float2Pi;
    fVar116 = fVar109 - auVar98._4_4_ * _Float2Pi;
    fVar130 = fVar109 - auVar98._8_4_ * _Float2Pi;
    fVar109 = fVar109 - auVar98._12_4_ * _Float2Pi;
    auVar99._0_8_ =
         CONCAT44(-(uint)(_FloatPiDivided2 < auVar108._4_4_),
                  -(uint)(_FloatPiDivided2 < auVar108._0_4_));
    auVar99._8_4_ = -(uint)(_FloatPiDivided2 < auVar108._8_4_);
    auVar99._12_4_ = -(uint)(_FloatPiDivided2 < auVar108._12_4_);
    fVar155 = -_FloatPi;
    auVar153._0_4_ = _FloatPi - auVar108._0_4_;
    auVar153._4_4_ = _FloatPi - auVar108._4_4_;
    auVar153._8_4_ = _FloatPi - auVar108._8_4_;
    auVar153._12_4_ = _FloatPi - auVar108._12_4_;
    fVar158 = -_DAT_7107528008;
    auVar101._0_8_ =
         CONCAT44(-(uint)(_FloatPiDivided2 < auVar119._4_4_),
                  -(uint)(_FloatPiDivided2 < auVar119._0_4_));
    auVar101._8_4_ = -(uint)(_FloatPiDivided2 < auVar119._8_4_);
    auVar101._12_4_ = -(uint)(_FloatPiDivided2 < auVar119._12_4_);
    auVar114._0_8_ =
         CONCAT44(-(uint)(_FloatPiDivided2 < fVar116),-(uint)(_FloatPiDivided2 < fVar111));
    auVar114._8_4_ = -(uint)(_FloatPiDivided2 < fVar130);
    auVar114._12_4_ = -(uint)(_FloatPiDivided2 < fVar109);
    auVar107._8_8_ = auVar99._8_8_;
    auVar107._0_8_ = auVar99._0_8_;
    auVar161._0_4_ = _FloatPi - auVar119._0_4_;
    auVar161._4_4_ = _FloatPi - auVar119._4_4_;
    auVar161._8_4_ = _FloatPi - auVar119._8_4_;
    auVar161._12_4_ = _FloatPi - auVar119._12_4_;
    auVar126._0_4_ = _FloatPi - fVar111;
    auVar126._4_4_ = _FloatPi - fVar116;
    auVar126._8_4_ = _FloatPi - fVar130;
    auVar126._12_4_ = _FloatPi - fVar109;
    fVar132 = auVar131._12_4_;
    uVar33 = auVar88._12_4_;
    uVar30 = (uint)fVar132 ^ ((uint)fVar132 ^ uVar33) & auVar99._12_4_;
    auVar108 = auVar108 ^ (auVar108 ^ auVar153) & auVar107;
    auVar118._8_8_ = auVar101._8_8_;
    auVar118._0_8_ = auVar101._0_8_;
    uVar28 = (uint)fVar132 ^ ((uint)fVar132 ^ uVar33) & auVar101._12_4_;
    auVar119 = auVar119 ^ (auVar119 ^ auVar161) & auVar118;
    auVar144._8_8_ = auVar114._8_8_;
    auVar144._0_8_ = auVar114._0_8_;
    auVar157._0_8_ = CONCAT44(-(uint)(auVar108._4_4_ < fVar156),-(uint)(auVar108._0_4_ < fVar156));
    auVar157._8_4_ = -(uint)(auVar108._8_4_ < fVar156);
    auVar157._12_4_ = -(uint)(auVar108._12_4_ < fVar156);
    uVar29 = (uint)fVar132 ^ ((uint)fVar132 ^ uVar33) & auVar114._12_4_;
    auVar23._4_4_ = fVar116;
    auVar23._0_4_ = fVar111;
    auVar23._8_4_ = fVar130;
    auVar23._12_4_ = fVar109;
    auVar145._4_4_ = fVar116;
    auVar145._0_4_ = fVar111;
    auVar145._8_4_ = fVar130;
    auVar145._12_4_ = fVar109;
    auVar145 = auVar145 ^ (auVar23 ^ auVar126) & auVar144;
    auVar127._8_8_ = auVar157._8_8_;
    auVar127._0_8_ = auVar157._0_8_;
    fVar110 = -_DAT_7107528010;
    auVar124._0_8_ = CONCAT44(-(uint)(auVar145._4_4_ < fVar156),-(uint)(auVar145._0_4_ < fVar156));
    auVar124._8_4_ = -(uint)(auVar145._8_4_ < fVar156);
    auVar124._12_4_ = -(uint)(auVar145._12_4_ < fVar156);
    auVar164._0_4_ = fVar155 - auVar145._0_4_;
    auVar164._4_4_ = fVar155 - auVar145._4_4_;
    auVar164._8_4_ = fVar155 - auVar145._8_4_;
    auVar164._12_4_ = fVar155 - auVar145._12_4_;
    auVar27._4_4_ = fVar155 - auVar108._4_4_;
    auVar27._0_4_ = fVar155 - auVar108._0_4_;
    auVar27._8_4_ = fVar155 - auVar108._8_4_;
    auVar27._12_4_ = fVar155 - auVar108._12_4_;
    auVar108 = auVar108 ^ (auVar108 ^ auVar27) & auVar127;
    auVar154._0_4_ = -(uint)(auVar119._0_4_ < fVar156);
    auVar154._4_4_ = -(uint)(auVar119._4_4_ < fVar156);
    auVar154._8_4_ = -(uint)(auVar119._8_4_ < fVar156);
    auVar154._12_4_ = -(uint)(auVar119._12_4_ < fVar156);
    fVar106 = -_DAT_7107529008;
    auVar162._8_8_ = auVar124._8_8_;
    auVar162._0_8_ = auVar124._0_8_;
    auVar145 = auVar145 ^ (auVar145 ^ auVar164) & auVar162;
    fVar141 = auVar108._0_4_;
    fVar109 = fVar141 * fVar141;
    fVar151 = auVar108._4_4_;
    fVar111 = fVar151 * fVar151;
    fVar156 = auVar108._8_4_;
    fVar116 = fVar156 * fVar156;
    fVar130 = auVar108._12_4_ * auVar108._12_4_;
    fVar100 = auVar145._0_4_;
    fVar142 = fVar100 * fVar100;
    fVar120 = auVar145._4_4_;
    fVar148 = fVar120 * fVar120;
    fVar122 = auVar145._8_4_;
    fVar149 = fVar122 * fVar122;
    fVar150 = auVar145._12_4_ * auVar145._12_4_;
    auVar22._4_4_ = fVar155 - auVar119._4_4_;
    auVar22._0_4_ = fVar155 - auVar119._0_4_;
    auVar22._8_4_ = fVar155 - auVar119._8_4_;
    auVar22._12_4_ = fVar155 - auVar119._12_4_;
    auVar119 = auVar119 ^ (auVar119 ^ auVar22) & auVar154;
    fVar155 = auVar131._0_4_;
    fVar93 = auVar131._4_4_;
    fVar94 = auVar131._8_4_;
    auVar24._12_4_ = 0;
    auVar24._0_12_ = _DAT_71044669b0;
    uVar96 = a64_TBL(ZEXT816(0),auVar24,0x30201000b0a0908);
    auVar25._12_4_ = 0;
    auVar25._0_12_ = _DAT_71044669b0;
    uVar121 = a64_TBL(ZEXT816(0),auVar25,0xb0a090807060504);
    fVar150 = (fVar132 +
              fVar150 * (fVar95 + fVar150 * (_DAT_710752900c +
                                            fVar150 * (fVar106 +
                                                      fVar150 * ((float)(CONCAT17(uVar60,CONCAT16(
                                                  uVar59,CONCAT15(uVar58,CONCAT14(uVar57,
                                                  _DAT_7107529004)))) >> 0x20) -
                                                  fVar150 * _CosCoefficients))))) *
              (float)(uVar29 ^ (uVar29 ^ uVar33) & auVar124._12_4_);
    auVar125._0_4_ =
         (fVar155 +
         fVar142 * (fVar110 +
                   fVar142 * (_DAT_710752800c +
                             fVar142 * (fVar158 +
                                       fVar142 * (_DAT_7107528004 - fVar142 * _SinCoefficients)))))
         * fVar100 * 1.0;
    auVar125._4_4_ =
         (fVar93 + fVar148 * (fVar110 +
                             fVar148 * (_DAT_710752800c +
                                       fVar148 * (fVar158 +
                                                 fVar148 * (_DAT_7107528004 -
                                                           fVar148 * _SinCoefficients))))) * fVar120
         * 0.0;
    auVar125._8_4_ =
         (fVar94 + fVar149 * (fVar110 +
                             fVar149 * (_DAT_710752800c +
                                       fVar149 * (fVar158 +
                                                 fVar149 * (_DAT_7107528004 -
                                                           fVar149 * _SinCoefficients))))) * fVar122
         * 0.0;
    auVar102._0_4_ =
         (fVar155 +
         fVar109 * (fVar110 +
                   fVar109 * (_DAT_710752800c +
                             fVar109 * (fVar158 +
                                       fVar109 * (_DAT_7107528004 - fVar109 * _SinCoefficients)))))
         * fVar141 * 0.0;
    auVar102._4_4_ =
         (fVar93 + fVar111 * (fVar110 +
                             fVar111 * (_DAT_710752800c +
                                       fVar111 * (fVar158 +
                                                 fVar111 * (_DAT_7107528004 -
                                                           fVar111 * _SinCoefficients))))) * fVar151
         * 1.0;
    auVar102._8_4_ =
         (fVar94 + fVar116 * (fVar110 +
                             fVar116 * (_DAT_710752800c +
                                       fVar116 * (fVar158 +
                                                 fVar116 * (_DAT_7107528004 -
                                                           fVar116 * _SinCoefficients))))) * fVar156
         * 0.0;
    fVar109 = (fVar132 +
              fVar130 * (fVar95 + fVar130 * (_DAT_710752900c +
                                            fVar130 * (fVar106 +
                                                      fVar130 * ((float)(CONCAT17(uVar60,CONCAT16(
                                                  uVar59,CONCAT15(uVar58,CONCAT14(uVar57,
                                                  _DAT_7107529004)))) >> 0x20) -
                                                  fVar130 * _CosCoefficients))))) *
              (float)(uVar30 ^ (uVar30 ^ uVar33) & auVar157._12_4_);
    auVar125._12_4_ = fVar150;
    auVar102._12_4_ = fVar109;
    auVar128._0_8_ = CONCAT44(auVar125._4_4_ * -1.0,auVar125._0_4_ * -1.0);
    auVar128._8_4_ = auVar125._8_4_ * -1.0;
    auVar128._12_4_ = fVar150 * 1.0;
    uVar51 = a64_TBL(ZEXT816(0),auVar128,0xf0e0d0c0f0e0d0c);
    auVar146._0_8_ = CONCAT44(auVar102._4_4_ * -1.0,auVar102._0_4_ * -1.0);
    auVar146._8_4_ = auVar102._8_4_ * -1.0;
    auVar146._12_4_ = fVar109 * 1.0;
    uVar159 = a64_TBL(ZEXT816(0),auVar146,0xf0e0d0c0f0e0d0c);
    uVar81 = a64_TBL(ZEXT816(0),auVar146,0x30201000f0e0d0c);
    uVar112 = a64_TBL(ZEXT816(0),auVar146,0xb0a090807060504);
    uVar52 = a64_TBL(ZEXT816(0),auVar128,0xb0a090807060504);
    uVar82 = a64_TBL(ZEXT816(0),auVar146,0xb0a090803020100);
    uVar83 = a64_TBL(ZEXT816(0),auVar128,0x30201000f0e0d0c);
    uVar84 = a64_TBL(ZEXT816(0),auVar128,0xb0a090803020100);
    uVar53 = a64_TBL(ZEXT816(0),_DAT_7104467790,0x30201000b0a0908);
    uVar117 = a64_TBL(ZEXT816(0),auVar146,0x30201000b0a0908);
    fVar150 = (float)((ulong)uVar96 >> 0x20);
    *puVar49 = uVar5;
    puVar49[1] = uVar4;
    fVar111 = (float)((ulong)uVar53 >> 0x20);
    uVar160 = a64_TBL(ZEXT816(0),auVar137,0xf0e0d0c0f0e0d0c);
    uVar85 = a64_TBL(ZEXT816(0),auVar137,0xb0a090807060504);
    fVar116 = (float)((ulong)uVar160 >> 0x20);
    auVar147._8_8_ = auVar146._0_8_;
    auVar147._0_8_ = auVar146._0_8_;
    uVar143 = a64_TBL(ZEXT816(0),auVar147,0x706050407060504);
    fVar109 = (float)((ulong)uVar85 >> 0x20);
    uVar86 = a64_TBL(ZEXT816(0),auVar128,0x30201000b0a0908);
    fVar151 = ((float)uVar160 * auVar102._0_4_ * -1.0 + (float)uVar159 * 0.0 * 1.0 +
              (float)uVar85 * (float)uVar117 * 1.0) - (float)uVar53 * (float)uVar112;
    fVar156 = (fVar116 * auVar102._4_4_ * -1.0 + (float)((ulong)uVar159 >> 0x20) * 0.0 * 1.0 +
              fVar109 * (float)((ulong)uVar117 >> 0x20) * 1.0) -
              fVar111 * (float)((ulong)uVar112 >> 0x20);
    auVar135._0_8_ = CONCAT44(fVar156,fVar151);
    auVar135._8_4_ =
         ((float)uVar160 * auVar146._8_4_ + (float)uVar53 * (float)uVar81 * 1.0 +
         (float)uVar143 * 0.0 * 1.0) - (float)uVar85 * (float)uVar82;
    auVar135._12_4_ =
         (fVar116 * auVar146._12_4_ + fVar111 * (float)((ulong)uVar81 >> 0x20) * -1.0 +
         (float)((ulong)uVar143 >> 0x20) * 0.0 * -1.0) - fVar109 * (float)((ulong)uVar82 >> 0x20);
    auVar137._9_7_ = 0;
    auVar137._0_9_ = (unkuint9)0x408ccccd00000000;
    uVar53 = a64_TBL(ZEXT816(0),auVar137,0xf0e0d0c0f0e0d0c);
    uVar117 = a64_TBL(ZEXT816(0),auVar135,0x30201000f0e0d0c);
    fVar109 = (float)((ulong)uVar53 >> 0x20);
    auVar129._8_8_ = auVar128._0_8_;
    auVar129._0_8_ = auVar128._0_8_;
    uVar85 = a64_TBL(ZEXT816(0),auVar102,0xf0e0d0c0f0e0d0c);
    uVar81 = a64_TBL(ZEXT816(0),auVar129,0x706050407060504);
    uVar159 = a64_TBL(ZEXT816(0),auVar135,0xb0a090803020100);
    puVar49[2] = uVar6;
    puVar49[3] = uVar1;
    uVar82 = a64_TBL(ZEXT816(0),auVar135,0xf0e0d0c0f0e0d0c);
    uVar143 = a64_TBL(ZEXT816(0),auVar135,0xb0a090807060504);
    uVar160 = a64_TBL(ZEXT816(0),auVar102,0x30201000b0a0908);
    fVar130 = (float)((ulong)uVar121 >> 0x20);
    uVar112 = a64_TBL(ZEXT816(0),auVar135,0x30201000b0a0908);
    auVar136._8_8_ = auVar135._0_8_;
    auVar136._0_8_ = auVar135._0_8_;
    fVar111 = ((float)uVar53 * auVar125._0_4_ * -1.0 + (float)uVar51 * 0.0 * 1.0 +
              (float)uVar121 * (float)uVar86 * 1.0) - (float)uVar96 * (float)uVar52;
    fVar116 = (fVar109 * auVar125._4_4_ * -1.0 + (float)((ulong)uVar51 >> 0x20) * 4.4 * 1.0 +
              fVar130 * (float)((ulong)uVar86 >> 0x20) * 1.0) -
              fVar150 * (float)((ulong)uVar52 >> 0x20);
    uVar57 = SUB41(fVar116,0);
    uVar61 = (undefined1)((uint)fVar116 >> 8);
    uVar62 = (undefined1)((uint)fVar116 >> 0x10);
    uVar63 = (undefined1)((uint)fVar116 >> 0x18);
    fVar141 = ((float)uVar53 * auVar128._8_4_ + (float)uVar96 * (float)uVar83 * 1.0 +
              (float)uVar81 * 0.0 * 1.0) - (float)uVar121 * (float)uVar84;
    uVar64 = SUB41(fVar141,0);
    uVar65 = (undefined1)((uint)fVar141 >> 8);
    uVar66 = (undefined1)((uint)fVar141 >> 0x10);
    uVar67 = (undefined1)((uint)fVar141 >> 0x18);
    fVar109 = (fVar109 * auVar128._12_4_ + fVar150 * (float)((ulong)uVar83 >> 0x20) * -1.0 +
              (float)((ulong)uVar81 >> 0x20) * 4.4 * -1.0) -
              fVar130 * (float)((ulong)uVar84 >> 0x20);
    uVar68 = SUB41(fVar109,0);
    uVar69 = (undefined1)((uint)fVar109 >> 8);
    uVar70 = (undefined1)((uint)fVar109 >> 0x10);
    uVar71 = (undefined1)((uint)fVar109 >> 0x18);
    uVar81 = a64_TBL(ZEXT816(0),auVar102,0xb0a090807060504);
    uVar53 = a64_TBL(ZEXT816(0),auVar136,0x706050407060504);
    auVar8[4] = uVar57;
    auVar8._0_4_ = fVar111;
    auVar8[5] = uVar61;
    auVar8[6] = uVar62;
    auVar8[7] = uVar63;
    auVar8[8] = uVar64;
    auVar8[9] = uVar65;
    auVar8[10] = uVar66;
    auVar8[0xb] = uVar67;
    auVar8[0xc] = uVar68;
    auVar8[0xd] = uVar69;
    auVar8[0xe] = uVar70;
    auVar8[0xf] = uVar71;
    uVar52 = a64_TBL(ZEXT816(0),auVar8,0xf0e0d0c0f0e0d0c);
    fVar148 = ((float)uVar85 * fVar151 + (float)uVar82 * auVar102._0_4_ * 1.0 +
              (float)uVar81 * (float)uVar112 * 1.0) - (float)uVar160 * (float)uVar143;
    fVar109 = ((float)((ulong)uVar85 >> 0x20) * fVar156 +
               (float)((ulong)uVar82 >> 0x20) * auVar102._4_4_ * 1.0 +
              (float)((ulong)uVar81 >> 0x20) * (float)((ulong)uVar112 >> 0x20) * 1.0) -
              (float)((ulong)uVar160 >> 0x20) * (float)((ulong)uVar143 >> 0x20);
    fVar130 = ((float)uVar85 * auVar135._8_4_ + (float)uVar117 * (float)uVar160 * 1.0 +
              auVar102._0_4_ * (float)uVar53 * 1.0) - (float)uVar81 * (float)uVar159;
    uVar53 = CONCAT17((char)((uint)fVar109 >> 0x18),
                      CONCAT16((char)((uint)fVar109 >> 0x10),
                               CONCAT15((char)((uint)fVar109 >> 8),
                                        CONCAT14(SUB41(fVar109,0),fVar148))));
    auVar87[8] = SUB41(fVar130,0);
    auVar87._0_8_ = uVar53;
    auVar87[9] = (undefined1)((uint)fVar130 >> 8);
    auVar87[10] = (undefined1)((uint)fVar130 >> 0x10);
    auVar87[0xb] = (undefined1)((uint)fVar130 >> 0x18);
    auVar9[4] = uVar57;
    auVar9._0_4_ = fVar111;
    auVar9[5] = uVar61;
    auVar9[6] = uVar62;
    auVar9[7] = uVar63;
    auVar9[8] = uVar64;
    auVar9[9] = uVar65;
    auVar9[10] = uVar66;
    auVar9[0xb] = uVar67;
    auVar9[0xc] = uVar68;
    auVar9[0xd] = uVar69;
    auVar9[0xe] = uVar70;
    auVar9[0xf] = uVar71;
    uVar51 = a64_TBL(ZEXT816(0),auVar9,0x30201000f0e0d0c);
    fVar148 = _DAT_710532d170 + fVar148;
    fVar149 = DAT_710532d170_4 + (float)((ulong)uVar53 >> 0x20);
    fVar100 = DAT_710532d178 + auVar87._8_4_;
    fVar109 = _DAT_710532d170 - fVar148;
    fVar130 = DAT_710532d170_4 - fVar149;
    fVar151 = DAT_710532d178 - fVar100;
    fVar156 = DAT_710532d178_4 - (DAT_710532d178_4 + 0.0);
    auVar10[4] = uVar57;
    auVar10._0_4_ = fVar111;
    auVar10[5] = uVar61;
    auVar10[6] = uVar62;
    auVar10[7] = uVar63;
    auVar10[8] = uVar64;
    auVar10[9] = uVar65;
    auVar10[10] = uVar66;
    auVar10[0xb] = uVar67;
    auVar10[0xc] = uVar68;
    auVar10[0xd] = uVar69;
    auVar10[0xe] = uVar70;
    auVar10[0xf] = uVar71;
    uVar81 = a64_TBL(ZEXT816(0),auVar10,0xb0a090807060504);
    auVar89._0_4_ = fVar109 * fVar109;
    auVar89._4_4_ = fVar130 * fVar130;
    auVar89._8_4_ = fVar151 * fVar151;
    auVar89._12_4_ = fVar156 * fVar156;
    auVar137 = NEON_ext(auVar89,auVar89,8,1);
    fVar142 = auVar137._0_4_ + auVar89._0_4_;
    fVar156 = auVar137._4_4_ + auVar89._4_4_;
    fVar150 = fVar142 + fVar156;
    fVar142 = fVar142 + fVar156;
    auVar115._8_8_ = CONCAT44(fVar142,fVar150);
    auVar115._0_8_ = CONCAT44(fVar142,fVar150);
    uVar6 = uVar6 ^ uVar6 << 0xb;
    auVar137 = NEON_frsqrte(auVar115,4);
    auVar138._0_4_ = auVar137._0_4_ * fVar150;
    auVar138._4_4_ = auVar137._4_4_ * fVar142;
    auVar138._8_4_ = auVar137._8_4_ * fVar150;
    auVar138._12_4_ = auVar137._12_4_ * fVar142;
    auVar88 = NEON_frsqrts(auVar137,auVar138,4);
    uVar3 = uVar6 ^ uVar6 >> 8 ^ uVar2 ^ uVar3 >> 0x13;
    auVar90._0_4_ = auVar137._0_4_ * auVar88._0_4_;
    auVar90._4_4_ = auVar137._4_4_ * auVar88._4_4_;
    auVar90._8_4_ = auVar137._8_4_ * auVar88._8_4_;
    auVar90._12_4_ = auVar137._12_4_ * auVar88._12_4_;
    auVar139._0_4_ = fVar150 * auVar90._0_4_;
    auVar139._4_4_ = fVar142 * auVar90._4_4_;
    auVar139._8_4_ = fVar150 * auVar90._8_4_;
    auVar139._12_4_ = fVar142 * auVar90._12_4_;
    auVar137 = NEON_frsqrts(auVar90,auVar139,4);
    auVar11[4] = uVar57;
    auVar11._0_4_ = fVar111;
    auVar11[5] = uVar61;
    auVar11[6] = uVar62;
    auVar11[7] = uVar63;
    auVar11[8] = uVar64;
    auVar11[9] = uVar65;
    auVar11[10] = uVar66;
    auVar11[0xb] = uVar67;
    auVar11[0xc] = uVar68;
    auVar11[0xd] = uVar69;
    auVar11[0xe] = uVar70;
    auVar11[0xf] = uVar71;
    uVar83 = a64_TBL(ZEXT816(0),auVar11,0x30201000b0a0908);
    fVar120 = auVar90._0_4_ * auVar137._0_4_ * fVar109 * 5.0 + 0.0;
    fVar122 = auVar90._4_4_ * auVar137._4_4_ * fVar130 * 5.0 + 0.0;
    fVar123 = auVar90._8_4_ * auVar137._8_4_ * fVar151 * 5.0 + 0.0;
    uVar82 = a64_TBL(ZEXT816(0),auVar125,0x30201000b0a0908);
    auVar103[4] = uVar57;
    auVar103._0_4_ = fVar111;
    auVar103[5] = uVar61;
    auVar103[6] = uVar62;
    auVar103[7] = uVar63;
    auVar103[0xc] = uVar57;
    auVar103._8_4_ = fVar111;
    auVar103[0xd] = uVar61;
    auVar103[0xe] = uVar62;
    auVar103[0xf] = uVar63;
    uVar85 = a64_TBL(ZEXT816(0),auVar103,0x706050407060504);
    uVar112 = a64_TBL(ZEXT816(0),auVar125,0xb0a090807060504);
    uVar84 = a64_TBL(ZEXT816(0),auVar125,0xf0e0d0c0f0e0d0c);
    auVar12[4] = uVar57;
    auVar12._0_4_ = fVar111;
    auVar12[5] = uVar61;
    auVar12[6] = uVar62;
    auVar12[7] = uVar63;
    auVar12[8] = uVar64;
    auVar12[9] = uVar65;
    auVar12[10] = uVar66;
    auVar12[0xb] = uVar67;
    auVar12[0xc] = uVar68;
    auVar12[0xd] = uVar69;
    auVar12[0xe] = uVar70;
    auVar12[0xf] = uVar71;
    uVar53 = a64_TBL(ZEXT816(0),auVar12,0xb0a090803020100);
    fVar163 = auVar119._0_4_;
    fVar109 = fVar163 * fVar163;
    fVar165 = auVar119._4_4_;
    fVar130 = fVar165 * fVar165;
    fVar166 = auVar119._8_4_;
    fVar151 = fVar166 * fVar166;
    fVar156 = auVar119._12_4_ * auVar119._12_4_;
    fVar134 = ((float)uVar84 * fVar111 + (float)uVar52 * auVar125._0_4_ * 1.0 +
              (float)uVar112 * (float)uVar83 * 1.0) - (float)uVar82 * (float)uVar81;
    fVar111 = ((float)((ulong)uVar84 >> 0x20) * fVar116 +
               (float)((ulong)uVar52 >> 0x20) * auVar125._4_4_ * 1.0 +
              (float)((ulong)uVar112 >> 0x20) * (float)((ulong)uVar83 >> 0x20) * 1.0) -
              (float)((ulong)uVar82 >> 0x20) * (float)((ulong)uVar81 >> 0x20);
    fVar116 = ((float)uVar84 * fVar141 + (float)uVar51 * (float)uVar82 * 1.0 +
              auVar125._0_4_ * (float)uVar85 * 1.0) - (float)uVar112 * (float)uVar53;
    fStack_e4 = (float)(CONCAT17(uVar60,CONCAT16(uVar59,CONCAT15(uVar58,uVar7))) >> 0x20);
    uVar53 = CONCAT17((char)((uint)fVar111 >> 0x18),
                      CONCAT16((char)((uint)fVar111 >> 0x10),
                               CONCAT15((char)((uint)fVar111 >> 8),
                                        CONCAT14(SUB41(fVar111,0),fVar134))));
    auVar54[8] = SUB41(fVar116,0);
    auVar54._0_8_ = uVar53;
    auVar54[9] = (char)((uint)fVar116 >> 8);
    auVar54[10] = (char)((uint)fVar116 >> 0x10);
    auVar54[0xb] = (char)((uint)fVar116 >> 0x18);
    fVar109 = (fVar155 +
              fVar109 * (fVar110 +
                        fVar109 * (fVar34 + fVar109 * (fVar158 +
                                                      fVar109 * (fVar140 - fVar109 * fVar133))))) *
              fVar163 * 0.0;
    fVar111 = (fVar93 + fVar130 * (fVar110 +
                                  fVar130 * (fVar34 + fVar130 * (fVar158 +
                                                                fVar130 * (fVar140 -
                                                                          fVar130 * fVar133))))) *
              fVar165 * 1.0;
    uVar57 = SUB41(fVar111,0);
    uVar58 = (undefined1)((uint)fVar111 >> 8);
    uVar59 = (undefined1)((uint)fVar111 >> 0x10);
    uVar60 = (undefined1)((uint)fVar111 >> 0x18);
    fVar116 = (fVar94 + fVar151 * (fVar110 +
                                  fVar151 * (fVar34 + fVar151 * (fVar158 +
                                                                fVar151 * (fVar140 -
                                                                          fVar151 * fVar133))))) *
              fVar166 * 0.0;
    uVar61 = SUB41(fVar116,0);
    uVar62 = (undefined1)((uint)fVar116 >> 8);
    uVar63 = (undefined1)((uint)fVar116 >> 0x10);
    uVar64 = (undefined1)((uint)fVar116 >> 0x18);
    fVar141 = (fVar132 +
              fVar156 * (fVar95 + fVar156 * (fVar36 + fVar156 * (fVar106 +
                                                                fVar156 * (fStack_e4 -
                                                                          fVar156 * fVar35))))) *
              (float)(uVar28 ^ (uVar28 ^ uVar33) & auVar154._12_4_);
    uVar79 = (undefined1)((uint)fVar141 >> 0x18);
    auVar104._4_12_ = SUB1612(ZEXT816(0),4);
    auVar104._0_4_ = auVar54._8_4_;
    uVar65 = SUB41(fVar141,0);
    uVar66 = (undefined1)((uint)fVar141 >> 8);
    uVar67 = (undefined1)((uint)fVar141 >> 0x10);
    auVar91._8_8_ = auVar104._0_8_;
    auVar91._0_8_ = uVar53;
    uVar52 = a64_TBL(ZEXT816(0),auVar91,0x30201000b0a0908);
    fVar130 = fVar109 * -1.0;
    fVar111 = fVar111 * -1.0;
    uVar68 = SUB41(fVar111,0);
    uVar69 = (undefined1)((uint)fVar111 >> 8);
    uVar70 = (undefined1)((uint)fVar111 >> 0x10);
    uVar71 = (undefined1)((uint)fVar111 >> 0x18);
    fVar116 = fVar116 * -1.0;
    uVar72 = SUB41(fVar116,0);
    uVar73 = (undefined1)((uint)fVar116 >> 8);
    uVar74 = (undefined1)((uint)fVar116 >> 0x10);
    uVar75 = (undefined1)((uint)fVar116 >> 0x18);
    fVar141 = fVar141 * 1.0;
    uVar76 = SUB41(fVar141,0);
    uVar77 = (undefined1)((uint)fVar141 >> 8);
    uVar78 = (undefined1)((uint)fVar141 >> 0x10);
    uVar80 = (undefined1)((uint)fVar141 >> 0x18);
    auVar13[4] = uVar68;
    auVar13._0_4_ = fVar130;
    auVar13[5] = uVar69;
    auVar13[6] = uVar70;
    auVar13[7] = uVar71;
    auVar13[8] = uVar72;
    auVar13[9] = uVar73;
    auVar13[10] = uVar74;
    auVar13[0xb] = uVar75;
    auVar13[0xc] = uVar76;
    auVar13[0xd] = uVar77;
    auVar13[0xe] = uVar78;
    auVar13[0xf] = uVar80;
    uVar83 = a64_TBL(ZEXT816(0),auVar13,0xf0e0d0c0f0e0d0c);
    auVar14[4] = uVar68;
    auVar14._0_4_ = fVar130;
    auVar14[5] = uVar69;
    auVar14[6] = uVar70;
    auVar14[7] = uVar71;
    auVar14[8] = uVar72;
    auVar14[9] = uVar73;
    auVar14[10] = uVar74;
    auVar14[0xb] = uVar75;
    auVar14[0xc] = uVar76;
    auVar14[0xd] = uVar77;
    auVar14[0xe] = uVar78;
    auVar14[0xf] = uVar80;
    uVar81 = a64_TBL(ZEXT816(0),auVar14,0x30201000f0e0d0c);
    fVar132 = (float)((ulong)uVar53 >> 0x20);
    fVar133 = (float)((ulong)uVar52 >> 0x20);
    uVar84 = a64_TBL(ZEXT816(0),auVar91,0xb0a090807060504);
    uVar112 = a64_TBL(ZEXT816(0),auVar91,0xf0e0d0c0f0e0d0c);
    auVar26._4_4_ =
         (int)(CONCAT17(uVar71,CONCAT16(uVar70,CONCAT15(uVar69,CONCAT14(uVar68,fVar130)))) >> 0x20);
    auVar26._0_4_ = fVar130;
    auVar26._8_4_ = fVar130;
    auVar26._12_4_ =
         (int)(CONCAT17(uVar71,CONCAT16(uVar70,CONCAT15(uVar69,CONCAT14(uVar68,fVar130)))) >> 0x20);
    uVar82 = a64_TBL(ZEXT816(0),auVar26,0x706050407060504);
    auVar15[4] = uVar68;
    auVar15._0_4_ = fVar130;
    auVar15[5] = uVar69;
    auVar15[6] = uVar70;
    auVar15[7] = uVar71;
    auVar15[8] = uVar72;
    auVar15[9] = uVar73;
    auVar15[10] = uVar74;
    auVar15[0xb] = uVar75;
    auVar15[0xc] = uVar76;
    auVar15[0xd] = uVar77;
    auVar15[0xe] = uVar78;
    auVar15[0xf] = uVar80;
    uVar51 = a64_TBL(ZEXT816(0),auVar15,0x30201000b0a0908);
    fVar151 = (float)((ulong)uVar112 >> 0x20);
    fVar140 = (float)((ulong)uVar84 >> 0x20);
    auVar16[4] = uVar68;
    auVar16._0_4_ = fVar130;
    auVar16[5] = uVar69;
    auVar16[6] = uVar70;
    auVar16[7] = uVar71;
    auVar16[8] = uVar72;
    auVar16[9] = uVar73;
    auVar16[10] = uVar74;
    auVar16[0xb] = uVar75;
    auVar16[0xc] = uVar76;
    auVar16[0xd] = uVar77;
    auVar16[0xe] = uVar78;
    auVar16[0xf] = uVar80;
    uVar85 = a64_TBL(ZEXT816(0),auVar16,0xb0a090807060504);
    auVar17[4] = uVar68;
    auVar17._0_4_ = fVar130;
    auVar17[5] = uVar69;
    auVar17[6] = uVar70;
    auVar17[7] = uVar71;
    auVar17[8] = uVar72;
    auVar17[9] = uVar73;
    auVar17[10] = uVar74;
    auVar17[0xb] = uVar75;
    auVar17[0xc] = uVar76;
    auVar17[0xd] = uVar77;
    auVar17[0xe] = uVar78;
    auVar17[0xf] = uVar80;
    uVar53 = a64_TBL(ZEXT816(0),auVar17,0xb0a090803020100);
    fVar130 = ((float)uVar112 * fVar130 + (float)uVar83 * fVar134 * 1.0 +
              (float)uVar84 * (float)uVar51 * 1.0) - (float)uVar52 * (float)uVar85;
    fVar156 = (fVar151 * fVar111 + (float)((ulong)uVar83 >> 0x20) * fVar132 * 1.0 +
              fVar140 * (float)((ulong)uVar51 >> 0x20) * 1.0) -
              fVar133 * (float)((ulong)uVar85 >> 0x20);
    auVar92._0_8_ = CONCAT44(fVar156,fVar130);
    auVar92._8_4_ =
         ((float)uVar112 * fVar116 + (float)uVar81 * (float)uVar52 * 1.0 +
         fVar134 * (float)uVar82 * 1.0) - (float)uVar84 * (float)uVar53;
    auVar92._12_4_ =
         (fVar151 * fVar141 + (float)((ulong)uVar81 >> 0x20) * fVar133 * -1.0 +
         fVar132 * (float)((ulong)uVar82 >> 0x20) * -1.0) - fVar140 * (float)((ulong)uVar53 >> 0x20)
    ;
    auVar88[4] = uVar57;
    auVar88._0_4_ = fVar109;
    auVar88[5] = uVar58;
    auVar88[6] = uVar59;
    auVar88[7] = uVar60;
    auVar88[8] = uVar61;
    auVar88[9] = uVar62;
    auVar88[10] = uVar63;
    auVar88[0xb] = uVar64;
    auVar88[0xc] = uVar65;
    auVar88[0xd] = uVar66;
    auVar88[0xe] = uVar67;
    auVar88[0xf] = uVar79;
    uVar51 = a64_TBL(ZEXT816(0),auVar88,0x30201000b0a0908);
    uVar81 = a64_TBL(ZEXT816(0),auVar92,0xf0e0d0c0f0e0d0c);
    uVar112 = a64_TBL(ZEXT816(0),auVar92,0x30201000f0e0d0c);
    uVar84 = a64_TBL(ZEXT816(0),auVar92,0x30201000b0a0908);
    auVar105._8_8_ = auVar92._0_8_;
    auVar105._0_8_ = auVar92._0_8_;
    uVar52 = a64_TBL(ZEXT816(0),auVar105,0x706050407060504);
    auVar98[4] = uVar57;
    auVar98._0_4_ = fVar109;
    auVar98[5] = uVar58;
    auVar98[6] = uVar59;
    auVar98[7] = uVar60;
    auVar98[8] = uVar61;
    auVar98[9] = uVar62;
    auVar98[10] = uVar63;
    auVar98[0xb] = uVar64;
    auVar98[0xc] = uVar65;
    auVar98[0xd] = uVar66;
    auVar98[0xe] = uVar67;
    auVar98[0xf] = uVar79;
    uVar83 = a64_TBL(ZEXT816(0),auVar98,0xb0a090807060504);
    uVar82 = a64_TBL(ZEXT816(0),auVar92,0xb0a090807060504);
    auVar131[4] = uVar57;
    auVar131._0_4_ = fVar109;
    auVar131[5] = uVar58;
    auVar131[6] = uVar59;
    auVar131[7] = uVar60;
    auVar131[8] = uVar61;
    auVar131[9] = uVar62;
    auVar131[10] = uVar63;
    auVar131[0xb] = uVar64;
    auVar131[0xc] = uVar65;
    auVar131[0xd] = uVar66;
    auVar131[0xe] = uVar67;
    auVar131[0xf] = uVar79;
    uVar53 = a64_TBL(ZEXT816(0),auVar131,0xf0e0d0c0f0e0d0c);
    uVar85 = a64_TBL(ZEXT816(0),auVar92,0xb0a090803020100);
    iVar38 = -(uint)(fVar150 == 0.0);
    iVar20 = -(uint)(fVar142 == 0.0);
    iVar21 = -(uint)(fVar150 == 0.0);
    fVar111 = ((float)uVar53 * fVar130 + (float)uVar81 * fVar109 * 1.0 +
              (float)uVar83 * (float)uVar84 * 1.0) - (float)uVar51 * (float)uVar82;
    fVar116 = ((float)((ulong)uVar53 >> 0x20) * fVar156 +
               (float)((ulong)uVar81 >> 0x20) *
               (float)(CONCAT17(uVar60,CONCAT16(uVar59,CONCAT15(uVar58,CONCAT14(uVar57,fVar109))))
                      >> 0x20) * 1.0 +
              (float)((ulong)uVar83 >> 0x20) * (float)((ulong)uVar84 >> 0x20) * 1.0) -
              (float)((ulong)uVar51 >> 0x20) * (float)((ulong)uVar82 >> 0x20);
    fVar130 = (float)CONCAT13((byte)((uint)fVar120 >> 0x18) & ~(byte)((uint)iVar38 >> 0x18),
                              CONCAT12((byte)((uint)fVar120 >> 0x10) & ~(byte)((uint)iVar38 >> 0x10)
                                       ,CONCAT11((byte)((uint)fVar120 >> 8) &
                                                 ~(byte)((uint)iVar38 >> 8),
                                                 SUB41(fVar120,0) & ~(byte)iVar38)));
    auVar55._0_8_ =
         CONCAT17((byte)((uint)fVar122 >> 0x18) & ~(byte)((uint)iVar20 >> 0x18),
                  CONCAT16((byte)((uint)fVar122 >> 0x10) & ~(byte)((uint)iVar20 >> 0x10),
                           CONCAT15((byte)((uint)fVar122 >> 8) & ~(byte)((uint)iVar20 >> 8),
                                    CONCAT14(SUB41(fVar122,0) & ~(byte)iVar20,fVar130))));
    auVar55[8] = SUB41(fVar123,0) & ~(byte)iVar21;
    auVar55[9] = (byte)((uint)fVar123 >> 8) & ~(byte)((uint)iVar21 >> 8);
    auVar55[10] = (byte)((uint)fVar123 >> 0x10) & ~(byte)((uint)iVar21 >> 0x10);
    auVar55[0xb] = (byte)((uint)fVar123 >> 0x18) & ~(byte)((uint)iVar21 >> 0x18);
    *puVar49 = uVar1;
    puVar49[1] = uVar37;
    puVar49[2] = uVar2;
    puVar49[3] = uVar3;
    fVar141 = (float)uVar3 * 0.18 * 2.3283064e-10 + 0.82;
    fVar116 = fVar141 * ((float)((ulong)auVar55._0_8_ >> 0x20) +
                        (float)(CONCAT17((char)((uint)fVar116 >> 0x18),
                                         CONCAT16((char)((uint)fVar116 >> 0x10),
                                                  CONCAT15((char)((uint)fVar116 >> 8),
                                                           CONCAT14(SUB41(fVar116,0),fVar111)))) >>
                               0x20));
    fVar109 = fVar141 * (auVar55._8_4_ +
                        (((float)uVar53 * auVar92._8_4_ + (float)uVar112 * (float)uVar51 * 1.0 +
                         fVar109 * (float)uVar52 * 1.0) - (float)uVar83 * (float)uVar85));
    fVar151 = fVar116 / 0.024524998;
    if (fVar151 < 0.0) {
      return;
    }
    if ((int)((uint)(fVar100 + fVar109 * fVar151 + fVar151 * fVar151 * 0.0) ^
             (uint)fVar100 & 0xff000000) < 0) {
      return;
    }
    pauVar50 = (undefined1 (*) [12])(param_2 + 0xc);
    *(ulong *)(param_2 + 0xe) = (ulong)(uint)fVar100;
    *(ulong *)*pauVar50 = CONCAT44(fVar149,fVar148);
    *(ulong *)(param_2 + 0x12) = (ulong)(uint)fVar109;
    *(ulong *)(param_2 + 0x10) = CONCAT44(fVar116,fVar141 * (fVar130 + fVar111));
    param_2[0x14] = 0x43340000;
    uStack_a8 = _DAT_7107521008;
    local_b0 = (undefined1  [8])_ConstantZero;
    uStack_b8 = uRam0000007107558008;
    local_c0 = (undefined1  [8])_ConstantOne;
    FUN_7102627430(&local_98,*(ulong **)(*(long *)(param_2 + 2) + 800),
                   (byte *)"STG_EMBLEM_ISHI_FRONT",pauVar50,(undefined1 (*) [12])local_b0,
                   (undefined1 (*) [12])local_c0,param_8,param_9);
    ppplVar41 = (long ***)(param_2 + 6);
    if ((ppplVar41 != &local_98) && (lVar42 = *(long *)(param_2 + 10), lVar42 != local_88)) {
      if (local_88 == 0) {
        if (lVar42 != 0) {
          lVar44 = *(long *)(param_2 + 6);
          plVar47 = *(long **)(param_2 + 8);
          *plVar47 = lVar44;
          *(long **)(lVar44 + 8) = plVar47;
          *(long *)(lVar42 + 0x10) = *(long *)(lVar42 + 0x10) + -1;
          param_2[8] = 0;
          param_2[9] = 0;
          param_2[10] = 0;
          param_2[0xb] = 0;
          *ppplVar41 = (long **)0x0;
        }
      }
      else {
        if (lVar42 != 0) {
          pplVar45 = *ppplVar41;
          plVar47 = *(long **)(param_2 + 8);
          *plVar47 = (long)pplVar45;
          pplVar45[1] = plVar47;
          *(long *)(lVar42 + 0x10) = *(long *)(lVar42 + 0x10) + -1;
          param_2[8] = 0;
          param_2[9] = 0;
          param_2[10] = 0;
          param_2[0xb] = 0;
          *ppplVar41 = (long **)0x0;
        }
        puVar46 = *(undefined8 **)(local_88 + 0x20);
        *(long *)(param_2 + 6) = local_88 + 0x18;
        *(undefined8 **)(param_2 + 8) = puVar46;
        *(long ****)(local_88 + 0x20) = ppplVar41;
        *puVar46 = ppplVar41;
        *(long *)(local_88 + 0x10) = *(long *)(local_88 + 0x10) + 1;
        *(long *)(param_2 + 10) = local_88;
      }
    }
    if (local_88 != 0) {
      *local_90 = (long)local_98;
      local_98[1] = local_90;
      *(long *)(local_88 + 0x10) = *(long *)(local_88 + 0x10) + -1;
      local_90 = (long *)0x0;
      local_88 = 0;
      local_98 = (long **)0x0;
    }
    uVar37 = param_2[4];
    if (uVar37 != 0xffffffff) {
      lVar42 = *(long *)(param_2 + 2);
      lVar44 = *(long *)(**(long **)(lVar42 + 0x338) + 8);
      if ((lVar44 != 0) && (uVar37 < 0x19)) {
        plVar47 = *(long **)(lVar44 + (long)(int)uVar37 * 0x50 + 0x68);
        if ((*plVar47 != 0) &&
           (((int)plVar47[1] != -1 && ((int)plVar47[1] == *(int *)(*plVar47 + 0x20))))) {
          FUN_7103736cf0(plVar47,pauVar50);
          lVar42 = *(long *)(param_2 + 2);
        }
      }
      puVar49 = *(uint **)(lVar42 + 0x340);
      uVar37 = *puVar49;
      *puVar49 = puVar49[1];
      uVar1 = puVar49[3];
      uVar37 = uVar37 ^ uVar37 << 0xb;
      uVar37 = uVar37 ^ uVar37 >> 8 ^ uVar1 ^ uVar1 >> 0x13;
      puVar49[1] = puVar49[2];
      puVar49[2] = uVar1;
      puVar49[3] = uVar37;
      plVar47 = *(long **)(**(long **)(*(long *)(param_2 + 2) + 0x338) + 8);
      if (plVar47 != (long *)0x0) {
        uVar37 = uVar37 % 5;
        iVar38 = uVar37 + 4;
        if (3 < uVar37 - 1) {
          iVar38 = 4;
        }
        (**(code **)(*plVar47 + 0x58))(plVar47,iVar38,param_2[4]);
      }
    }
    *(undefined1 *)(param_2 + 0x15) = 0;
    *param_2 = 2;
    return;
  }
  pauVar50 = (undefined1 (*) [12])(param_2 + 0xc);
  fVar130 = (float)param_2[0x10] + param_1 * 0.0;
  fVar141 = (float)param_2[0x11] + param_1 * -0.049049996;
  fVar151 = (float)param_2[0x12] + param_1 * 0.0;
  lVar42 = *(long *)(param_2 + 10);
  fVar130 = fVar130 + (fVar130 * 0.997 - fVar130) * param_1;
  fVar141 = fVar141 + (fVar141 * 0.997 - fVar141) * param_1;
  fVar151 = fVar151 + (fVar151 * 0.997 - fVar151) * param_1;
  fVar109 = (float)*(undefined8 *)*pauVar50 + param_1 * fVar130;
  fVar111 = (float)((ulong)*(undefined8 *)*pauVar50 >> 0x20) + param_1 * fVar141;
  uVar57 = SUB41(fVar111,0);
  uVar58 = (undefined1)((uint)fVar111 >> 8);
  uVar59 = (undefined1)((uint)fVar111 >> 0x10);
  uVar60 = (undefined1)((uint)fVar111 >> 0x18);
  fVar111 = (float)*(undefined8 *)(param_2 + 0xe) + param_1 * fVar151;
  uVar61 = (undefined1)((uint)fVar111 >> 8);
  uVar62 = (undefined1)((uint)fVar111 >> 0x10);
  uVar63 = (undefined1)((uint)fVar111 >> 0x18);
  fVar116 = (float)((ulong)*(undefined8 *)(param_2 + 0xe) >> 0x20) + 0.0;
  uVar64 = SUB41(fVar116,0);
  uVar65 = (undefined1)((uint)fVar116 >> 8);
  uVar66 = (undefined1)((uint)fVar116 >> 0x10);
  uVar67 = (undefined1)((uint)fVar116 >> 0x18);
  *(ulong *)(param_2 + 0xe) =
       CONCAT17(uVar67,CONCAT16(uVar66,CONCAT15(uVar65,CONCAT14(uVar64,fVar111))));
  *(ulong *)*pauVar50 = CONCAT17(uVar60,CONCAT16(uVar59,CONCAT15(uVar58,CONCAT14(uVar57,fVar109))));
  *(ulong *)(param_2 + 0x12) = (ulong)(uint)fVar151;
  *(ulong *)(param_2 + 0x10) = CONCAT44(fVar141,fVar130);
  if (lVar42 != 0) {
    auVar18[4] = uVar57;
    auVar18._0_4_ = fVar109;
    auVar18[5] = uVar58;
    auVar18[6] = uVar59;
    auVar18[7] = uVar60;
    auVar18[8] = SUB41(fVar111,0);
    auVar18[9] = uVar61;
    auVar18[10] = uVar62;
    auVar18[0xb] = uVar63;
    auVar18[0xc] = uVar64;
    auVar18[0xd] = uVar65;
    auVar18[0xe] = uVar66;
    auVar18[0xf] = uVar67;
    auVar19[4] = uVar57;
    auVar19._0_4_ = fVar109;
    auVar19[5] = uVar58;
    auVar19[6] = uVar59;
    auVar19[7] = uVar60;
    auVar19[8] = SUB41(fVar111,0);
    auVar19[9] = uVar61;
    auVar19[10] = uVar62;
    auVar19[0xb] = uVar63;
    auVar19[0xc] = uVar64;
    auVar19[0xd] = uVar65;
    auVar19[0xe] = uVar66;
    auVar19[0xf] = uVar67;
    auVar137 = NEON_ext(auVar18,auVar19,8,1);
    *(ulong *)(lVar42 + 0x58) = (ulong)auVar137._0_4_;
    *(ulong *)(lVar42 + 0x50) =
         CONCAT17(uVar60,CONCAT16(uVar59,CONCAT15(uVar58,CONCAT14(uVar57,fVar109))));
    if (*(char *)(lVar42 + 0x35) == '\0') {
      *(ulong *)(lVar42 + 0x48) = *(ulong *)(lVar42 + 0x48) | 1;
    }
    else {
      uVar37 = *(uint *)(lVar42 + 0x3c);
      if (0 < (int)uVar37) {
        lVar44 = *lib::Singleton<lib::EffectManager>::instance_;
        uVar43 = (ulong)(uVar37 >> 0x18);
        lVar48 = lVar44 + uVar43 * 0x300;
        if (lVar48 != 0 && *(uint *)(lVar48 + 4) == uVar37) {
          if (*(char *)(lVar44 + uVar43 * 0x300 + 0x2d6) == '\0') {
            lVar42 = lVar44 + uVar43 * 0x300;
            *(undefined1 *)(lVar42 + 0x2da) = 1;
            *(ulong *)(lVar42 + 0x128) = (ulong)auVar137._0_4_;
            *(ulong *)(lVar42 + 0x120) =
                 CONCAT17(uVar60,CONCAT16(uVar59,CONCAT15(uVar58,CONCAT14(uVar57,fVar109))));
          }
          else {
            lVar48 = lVar44 + uVar43 * 0x300;
            uVar31 = *(undefined4 *)(lVar48 + 0xf8);
            uVar32 = *(undefined4 *)(lVar48 + 0xfc);
            *(undefined4 *)(lVar48 + 0xf8) = uVar31;
            *(undefined4 *)(lVar48 + 0xfc) = uVar32;
            *(float *)(lVar48 + 0xf0) = fVar109;
            *(undefined4 *)(lVar48 + 0xf4) = *(undefined4 *)(lVar48 + 0xf4);
            uVar56 = *(undefined4 *)(lVar42 + 0x54);
            *(undefined4 *)(lVar48 + 0xf8) = uVar31;
            *(undefined4 *)(lVar48 + 0xfc) = uVar32;
            *(float *)(lVar48 + 0xf0) = fVar109;
            *(undefined4 *)(lVar48 + 0xf4) = uVar56;
            *(undefined4 *)(lVar48 + 0xf8) = *(undefined4 *)(lVar42 + 0x58);
            *(undefined4 *)(lVar48 + 0xfc) = uVar32;
            *(float *)(lVar48 + 0xf0) = fVar109;
            *(undefined4 *)(lVar48 + 0xf4) = uVar56;
          }
          if (*(long *)(lVar44 + uVar43 * 0x300 + 0x58) == 0) {
            lVar44 = lVar44 + uVar43 * 0x300;
            *(undefined8 *)(lVar44 + 0x130) = 0;
            *(undefined8 *)(lVar44 + 0x138) = 0;
          }
        }
      }
    }
  }
  uVar37 = param_2[4];
  if ((uVar37 != 0xffffffff) &&
     (lVar42 = *(long *)(**(long **)(*(long *)(param_2 + 2) + 0x338) + 8),
     lVar42 != 0 && uVar37 < 0x19)) {
    plVar47 = *(long **)(lVar42 + (long)(int)uVar37 * 0x50 + 0x68);
    if ((*plVar47 != 0) &&
       (((int)plVar47[1] != -1 && ((int)plVar47[1] == *(int *)(*plVar47 + 0x20))))) {
      FUN_7103736cf0(plVar47,pauVar50);
    }
  }
  if ((char)param_2[0x15] == '\0') {
    if ((0.0 <= (float)param_2[0x11]) ||
       (-110.0 <= (float)((ulong)*(undefined8 *)*pauVar50 >> 0x20))) {
      cVar39 = '\0';
    }
    else {
      lVar44 = **(long **)(*(long *)(param_2 + 2) + 0x338);
      lVar42 = *(long *)(lVar44 + 8);
      if (-70.0 <= (float)*(undefined8 *)(param_2 + 0xe)) {
        if (lVar42 != 0) {
          local_98 = (long **)0x0;
          uVar37 = FUN_7102405040(lVar42,&local_98,1,param_5,param_6,param_7,param_8,param_9);
          if (uVar37 != 0xffffffff) {
            if (uVar37 < 0x19) {
              plVar47 = *(long **)(*(long *)(lVar44 + 8) + (long)(int)uVar37 * 0x50 + 0x68);
              if (((*plVar47 != 0) && ((int)plVar47[1] != -1)) &&
                 ((int)plVar47[1] == *(int *)(*plVar47 + 0x20))) {
                FUN_7103736cf0(plVar47,pauVar50);
              }
            }
            plVar47 = *(long **)(lVar44 + 8);
            pcVar40 = *(code **)(*plVar47 + 0x58);
            uVar53 = 9;
            goto LAB_71028a8264;
          }
        }
      }
      else if (lVar42 != 0) {
        local_98 = (long **)0x0;
        uVar37 = FUN_7102405040(lVar42,&local_98,1,param_5,param_6,param_7,param_8,param_9);
        if (uVar37 != 0xffffffff) {
          if (uVar37 < 0x19) {
            plVar47 = *(long **)(*(long *)(lVar44 + 8) + (long)(int)uVar37 * 0x50 + 0x68);
            if (((*plVar47 != 0) && ((int)plVar47[1] != -1)) &&
               ((int)plVar47[1] == *(int *)(*plVar47 + 0x20))) {
              FUN_7103736cf0(plVar47,pauVar50);
            }
          }
          plVar47 = *(long **)(lVar44 + 8);
          pcVar40 = *(code **)(*plVar47 + 0x58);
          uVar53 = 10;
LAB_71028a8264:
          (*pcVar40)(plVar47,uVar53,uVar37);
        }
      }
      cVar39 = '\x01';
      *(undefined1 *)(param_2 + 0x15) = 1;
    }
  }
  else {
    cVar39 = '\x01';
  }
  fVar109 = (float)param_2[0x14];
  param_2[0x14] = (int)(fVar109 - param_1);
  if (0.0 < fVar109 - param_1) {
    return;
  }
  lVar42 = *(long *)(param_2 + 10);
  param_2[0x14] = 0;
  if (lVar42 != 0) {
    if (*(char *)(lVar42 + 0x35) != '\0') {
      lVar44 = *lib::Singleton<lib::EffectManager>::instance_;
      uVar37 = *(uint *)(lVar42 + 0x3c);
      std::mutex::lock();
      if (((0 < (int)uVar37) && (lVar44 = lVar44 + (ulong)(uVar37 >> 0x18) * 0x300, lVar44 != 0)) &&
         (*(uint *)(lVar44 + 4) == uVar37)) {
        param_5 = (byte ****)0x0;
        FUN_71035707d0(lVar44,0,(long ****)0x0,0,param_6,param_7,param_8,param_9);
      }
      std::mutex::unlock();
    }
    lVar42 = *(long *)(param_2 + 10);
    if (lVar42 != 0) {
      lVar44 = *(long *)(param_2 + 6);
      plVar47 = *(long **)(param_2 + 8);
      *plVar47 = lVar44;
      *(long **)(lVar44 + 8) = plVar47;
      *(long *)(lVar42 + 0x10) = *(long *)(lVar42 + 0x10) + -1;
      param_2[6] = 0;
      param_2[7] = 0;
      param_2[8] = 0;
      param_2[9] = 0;
      param_2[10] = 0;
      param_2[0xb] = 0;
    }
    local_88 = 0;
    local_90 = (long *)0x0;
    cVar39 = (char)param_2[0x15];
  }
  if (cVar39 != '\0') goto LAB_71028a847c;
  lVar44 = **(long **)(*(long *)(param_2 + 2) + 0x338);
  lVar42 = *(long *)(lVar44 + 8);
  if (-70.0 <= (float)param_2[0xe]) {
    if (lVar42 != 0) {
      local_98 = (long **)0x0;
      uVar37 = FUN_7102405040(lVar42,&local_98,1,param_5,param_6,param_7,param_8,param_9);
      if (uVar37 != 0xffffffff) {
        if (uVar37 < 0x19) {
          plVar47 = *(long **)(*(long *)(lVar44 + 8) + (long)(int)uVar37 * 0x50 + 0x68);
          if (((*plVar47 != 0) && ((int)plVar47[1] != -1)) &&
             ((int)plVar47[1] == *(int *)(*plVar47 + 0x20))) {
            FUN_7103736cf0(plVar47,pauVar50);
          }
        }
        plVar47 = *(long **)(lVar44 + 8);
        pcVar40 = *(code **)(*plVar47 + 0x58);
        uVar53 = 9;
        goto LAB_71028a846c;
      }
    }
  }
  else if (lVar42 != 0) {
    local_98 = (long **)0x0;
    uVar37 = FUN_7102405040(lVar42,&local_98,1,param_5,param_6,param_7,param_8,param_9);
    if (uVar37 != 0xffffffff) {
      if (uVar37 < 0x19) {
        plVar47 = *(long **)(*(long *)(lVar44 + 8) + (long)(int)uVar37 * 0x50 + 0x68);
        if (((*plVar47 != 0) && ((int)plVar47[1] != -1)) &&
           ((int)plVar47[1] == *(int *)(*plVar47 + 0x20))) {
          FUN_7103736cf0(plVar47,pauVar50);
        }
      }
      plVar47 = *(long **)(lVar44 + 8);
      pcVar40 = *(code **)(*plVar47 + 0x58);
      uVar53 = 10;
LAB_71028a846c:
      (*pcVar40)(plVar47,uVar53,uVar37);
    }
  }
  *(undefined1 *)(param_2 + 0x15) = 1;
LAB_71028a847c:
  *param_2 = 0;
                    /* WARNING: Read-only address (ram,0x0071044669b0) is written */
                    /* WARNING: Read-only address (ram,0x007104467790) is written */
  return;
}

