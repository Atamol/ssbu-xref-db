// addr:      7102eab970
// offset:    0x2eab970
// name:      FUN_7102eab970
// mangled:   
// signature: undefined __cdecl FUN_7102eab970(float param_1, long * param_2, undefined8 param_3, char * param_4, byte * * * * param_5, long * * * * param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7102eab970(float param_1,long *param_2,undefined8 param_3,char *param_4,byte ****param_5,
                   long ****param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  byte bVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  int iVar11;
  long *plVar12;
  undefined4 uVar13;
  long lVar14;
  uint *puVar15;
  char cVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  long lVar20;
  float fVar21;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined8 uVar29;
  undefined1 auVar30 [12];
  undefined1 auVar31 [12];
  uint uVar38;
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar40 [12];
  undefined8 uVar39;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  long lVar49;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  float fVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  float fVar59;
  undefined8 uVar60;
  undefined1 auVar61 [12];
  undefined1 auVar62 [12];
  undefined1 auVar63 [16];
  float fVar68;
  float fVar69;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  float fVar70;
  undefined8 uVar71;
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined8 uVar72;
  undefined8 uVar73;
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  float fVar81;
  long local_120;
  ulong uStack_118;
  float local_100;
  float fStack_fc;
  float fStack_f8;
  long local_f0 [2];
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  long local_c0;
  undefined8 local_b8;
  long local_b0 [2];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  undefined8 local_78;
  
  iVar11 = (int)param_2[0x2a];
  if (iVar11 == 1) {
    if ((int)param_2[0x2b] != 0) {
      *(undefined4 *)(param_2 + 0x2b) = 0;
      fVar21 = *(float *)(param_2[0x22] + 0x50);
      *(float *)((long)param_2 + 0x174) = fVar21;
      param_2[7] = 0xc0f00000;
      param_2[6] = 0x428e3e77c3aef873;
      param_2[0x31] = param_2[0x31];
      param_2[0x30] = CONCAT44(-71.639 / fVar21,270.1 / fVar21);
      (**(code **)(*(long *)*param_2 + 0x98))();
      FUN_710313ef20((long *)param_2[3]);
      lVar14 = *(long *)(*param_2 + 0x70);
      if (lVar14 != 0) {
        if ((*(char *)(lVar14 + 0xe0) != '\0') && (*(long *)(lVar14 + 200) != 0)) {
          *(undefined2 *)(*(long *)(lVar14 + 200) + 0x30) = 0x101;
        }
        if (*(long *)(lVar14 + 0xd8) != 0) {
          *(undefined1 *)(*(long *)(lVar14 + 0xd8) + 0x21) = 1;
        }
        if (*(char *)(lVar14 + 0xe0) != '\0') {
          *(undefined1 *)(*(long *)(lVar14 + 0xb0) + 0x10) = 0;
        }
      }
      param_2[0x17] = 0x40cdb22d;
      param_2[0x16] = 0x4297ddb243aef893;
      param_2[0x33] = param_2[0x33];
      param_2[0x32] =
           CONCAT44(-76.45 / *(float *)((long)param_2 + 0x174),
                    -270.10098 / *(float *)((long)param_2 + 0x174));
      (**(code **)(*(long *)param_2[0x10] + 0x98))();
      FUN_710313ef20((long *)param_2[0x13]);
      lVar14 = *(long *)(param_2[0x10] + 0x70);
      if (lVar14 != 0) {
        if ((*(char *)(lVar14 + 0xe0) != '\0') && (*(long *)(lVar14 + 200) != 0)) {
          *(undefined2 *)(*(long *)(lVar14 + 200) + 0x30) = 0x101;
        }
        if (*(long *)(lVar14 + 0xd8) != 0) {
          *(undefined1 *)(*(long *)(lVar14 + 0xd8) + 0x21) = 1;
        }
        if (*(char *)(lVar14 + 0xe0) != '\0') {
          *(undefined1 *)(*(long *)(lVar14 + 0xb0) + 0x10) = 0;
        }
      }
      plVar18 = *(long **)(**(long **)(param_2[0x21] + 0x338) + 8);
      if (plVar18 != (long *)0x0) {
        param_4 = &DAT_ffffffff;
        (**(code **)(*plVar18 + 0x58))(plVar18,6);
      }
    }
    *(float *)(param_2 + 7) = *(float *)(param_2 + 7) + param_1 * *(float *)(param_2 + 0x31);
    *(float *)((long)param_2 + 0x3c) =
         *(float *)((long)param_2 + 0x3c) + *(float *)((long)param_2 + 0x18c) * 0.0;
    *(float *)(param_2 + 6) = *(float *)(param_2 + 6) + param_1 * *(float *)(param_2 + 0x30);
    *(float *)((long)param_2 + 0x34) =
         *(float *)((long)param_2 + 0x34) + param_1 * *(float *)((long)param_2 + 0x184);
    *(float *)(param_2 + 0x17) = *(float *)(param_2 + 0x17) + param_1 * *(float *)(param_2 + 0x33);
    *(float *)((long)param_2 + 0xbc) =
         *(float *)((long)param_2 + 0xbc) + *(float *)((long)param_2 + 0x19c) * 0.0;
    *(float *)(param_2 + 0x16) = *(float *)(param_2 + 0x16) + param_1 * *(float *)(param_2 + 0x32);
    *(float *)((long)param_2 + 0xb4) =
         *(float *)((long)param_2 + 0xb4) + param_1 * *(float *)((long)param_2 + 0x194);
    fVar21 = *(float *)((long)param_2 + 0x174) - param_1;
    *(float *)((long)param_2 + 0x174) = fVar21;
    if (fVar21 <= 0.0) {
      param_2[7] = 0xc0f00000;
      param_2[6] = -0x40fba5e23d605168;
      *(undefined4 *)(param_2 + 4) = 1;
      *(undefined4 *)(param_2 + 0x14) = 1;
      param_2[0x17] = 0x40cdb22d;
      param_2[0x16] = -0x40fba5e2bd605168;
      plVar19 = *(long **)(*(long *)(param_2[0x23] + 0x68) + 0x18);
      plVar12 = *(long **)(*(long *)(param_2[0x23] + 0x68) + 0x20);
      plVar18 = plVar19;
      if (plVar19 != plVar12) {
        do {
          lVar14 = *plVar18;
          if ((*(int *)(lVar14 + 0x18) == 0x751d6287) &&
             (iVar11 = strcmp((char *)(lVar14 + 0x20),"00_Floor01L"), iVar11 == 0)) {
            if ((lVar14 != 0) && (lVar14 = *(long *)(*(long *)(lVar14 + 8) + 0x108), lVar14 != 0)) {
              *(undefined1 *)(lVar14 + 0x44) = 0;
              plVar19 = *(long **)(*(long *)(param_2[0x23] + 0x68) + 0x18);
              plVar12 = *(long **)(*(long *)(param_2[0x23] + 0x68) + 0x20);
              if (plVar19 != plVar12) goto LAB_7102eabd30;
              goto LAB_7102eabd60;
            }
            break;
          }
          plVar18 = plVar18 + 1;
        } while (plVar12 != plVar18);
        if (plVar19 != plVar12) {
LAB_7102eabd30:
          do {
            lVar14 = *plVar19;
            if ((*(int *)(lVar14 + 0x18) == 0x751d6299) &&
               (iVar11 = strcmp((char *)(lVar14 + 0x20),"00_Floor01R"), iVar11 == 0)) {
              if ((lVar14 != 0) && (lVar14 = *(long *)(*(long *)(lVar14 + 8) + 0x108), lVar14 != 0))
              {
                *(undefined1 *)(lVar14 + 0x44) = 0;
              }
              break;
            }
            plVar19 = plVar19 + 1;
          } while (plVar12 != plVar19);
        }
      }
LAB_7102eabd60:
      FUN_71025f5420(*(undefined8 **)param_2[0x48],(undefined8 *)((undefined8 *)param_2[0x48])[1],
                     "IPP0002");
      param_4 = "IPP0003";
      FUN_71025f5420(*(undefined8 **)param_2[0x48],(undefined8 *)((undefined8 *)param_2[0x48])[1],
                     "IPP0003");
      if ((char)param_2[0x49] != '\0') {
        FUN_71025f5420(*(undefined8 **)param_2[0x48],(undefined8 *)((undefined8 *)param_2[0x48])[1],
                       "IPP0004");
        param_4 = "IPP0005";
        FUN_71025f5420(*(undefined8 **)param_2[0x48],(undefined8 *)((undefined8 *)param_2[0x48])[1],
                       "IPP0005");
      }
      if (*(long *)(**(long **)(*(long *)(*lib::Singleton<app::StageManager>::instance_ + 0x1c0) +
                               0xb0) + 0x20) == *(long *)(*(long *)(param_2[0x21] + 0x308) + 8)) {
        local_b0[0] = _ConstantZero;
        local_b0[1] = _DAT_7107521008;
        param_4 = (char *)local_b0;
        FUN_71005162f0(*DAT_71052b8f00 + 0x2b0,5,(undefined1 (*) [16])param_4);
      }
      uVar13 = 2;
LAB_7102eac2c8:
      *(undefined4 *)(param_2 + 0x2a) = uVar13;
    }
  }
  else if (iVar11 == 3) {
    if ((int)param_2[0x2b] != 0) {
      fVar21 = -349.941 - *(float *)(param_2 + 6);
      fVar26 = 71.122 - *(float *)((long)param_2 + 0x34);
      fVar27 = -7.5 - *(float *)(param_2 + 7);
      fVar28 = 0.0 - *(float *)((long)param_2 + 0x3c);
      lVar14 = param_2[0x22];
      auVar51._0_4_ = fVar21 * fVar21;
      auVar51._4_4_ = fVar26 * fVar26;
      auVar51._8_4_ = fVar27 * fVar27;
      auVar51._12_4_ = fVar28 * fVar28;
      auVar41 = NEON_ext(auVar51,auVar51,8,1);
      *(undefined4 *)(param_2 + 0x2b) = 0;
      *(undefined4 *)(param_2 + 4) = 0;
      fVar28 = SQRT(auVar41._0_4_ + auVar51._0_4_ + auVar41._4_4_ + auVar51._4_4_);
      fVar70 = *(float *)(lVar14 + 0x54);
      fVar50 = *(float *)(lVar14 + 0x58);
      if (fVar28 <= 0.0) {
        auVar41._8_8_ = _DAT_7107521008;
        auVar41._0_8_ = _ConstantZero;
        auVar61 = auVar41._0_12_;
        auVar30 = auVar61;
      }
      else {
        auVar78._8_8_ = _DAT_7107521008;
        auVar78._0_8_ = _ConstantZero;
        auVar61._0_4_ = fVar21 / fVar28;
        auVar61._4_4_ = fVar26 / fVar28;
        auVar61._8_4_ = fVar27 / fVar28;
        auVar30 = auVar78._0_12_;
      }
      *(float *)(param_2 + 0x34) = fVar28;
      *(undefined4 *)(param_2 + 0x14) = 0;
      uVar38 = auVar30._8_4_;
      lVar20 = auVar30._0_8_;
      param_2[0x37] = (ulong)(uint)*(float *)(param_2 + 7);
      *(float *)(param_2 + 0x36) = *(float *)(param_2 + 6);
      *(float *)((long)param_2 + 0x1b4) = *(float *)((long)param_2 + 0x34);
      param_2[0x39] = (ulong)uVar38;
      param_2[0x38] = lVar20;
      param_2[0x3b] = (ulong)(uint)(fVar70 * auVar61._8_4_);
      param_2[0x3a] = CONCAT44(fVar70 * auVar61._4_4_,fVar70 * auVar61._0_4_);
      param_2[0x3d] = (ulong)(uint)(fVar50 * auVar61._8_4_);
      param_2[0x3c] = CONCAT44(fVar50 * auVar61._4_4_,fVar50 * auVar61._0_4_);
      fVar28 = 349.942 - *(float *)(param_2 + 0x16);
      fVar50 = 75.933 - *(float *)((long)param_2 + 0xb4);
      fVar70 = 6.428 - *(float *)(param_2 + 0x17);
      fVar81 = 0.0 - *(float *)((long)param_2 + 0xbc);
      fVar27 = *(float *)(lVar14 + 0x54);
      fVar26 = *(float *)(lVar14 + 0x58);
      auVar42._0_4_ = fVar28 * fVar28;
      auVar42._4_4_ = fVar50 * fVar50;
      auVar42._8_4_ = fVar70 * fVar70;
      auVar42._12_4_ = fVar81 * fVar81;
      auVar51 = NEON_ext(auVar42,auVar42,8,1);
      fVar21 = SQRT(auVar51._0_4_ + auVar42._0_4_ + auVar51._4_4_ + auVar42._4_4_);
      if (0.0 < fVar21) {
        auVar52._0_8_ = CONCAT44(fVar50 / fVar21,fVar28 / fVar21);
        auVar52._8_4_ = fVar70 / fVar21;
        auVar52._12_4_ = fVar81 / fVar21;
        auVar51 = NEON_ext(auVar52,auVar52,8,1);
        auVar30._8_4_ = auVar51._0_4_;
        auVar30._0_8_ = auVar52._0_8_;
      }
      param_2[0x41] = (ulong)(uint)*(float *)(param_2 + 0x17);
      *(float *)(param_2 + 0x40) = *(float *)(param_2 + 0x16);
      *(float *)((long)param_2 + 0x204) = *(float *)((long)param_2 + 0xb4);
      param_2[0x43] = (ulong)uVar38;
      param_2[0x42] = lVar20;
      *(float *)(param_2 + 0x3e) = fVar21;
      param_2[0x45] = (ulong)(uint)(fVar27 * auVar30._8_4_);
      param_2[0x44] = CONCAT44(fVar27 * auVar30._4_4_,fVar27 * auVar30._0_4_);
      param_2[0x47] = (ulong)(uint)(fVar26 * auVar30._8_4_);
      param_2[0x46] = CONCAT44(fVar26 * auVar30._4_4_,fVar26 * auVar30._0_4_);
      plVar19 = *(long **)(*(long *)(param_2[0x23] + 0x68) + 0x18);
      plVar12 = *(long **)(*(long *)(param_2[0x23] + 0x68) + 0x20);
      plVar18 = plVar19;
      if (plVar19 != plVar12) {
        do {
          lVar14 = *plVar18;
          if ((*(int *)(lVar14 + 0x18) == 0x751d6287) &&
             (iVar11 = strcmp((char *)(lVar14 + 0x20),"00_Floor01L"), iVar11 == 0)) {
            if ((lVar14 != 0) && (lVar14 = *(long *)(*(long *)(lVar14 + 8) + 0x108), lVar14 != 0)) {
              *(undefined1 *)(lVar14 + 0x44) = 1;
              plVar19 = *(long **)(*(long *)(param_2[0x23] + 0x68) + 0x18);
              plVar12 = *(long **)(*(long *)(param_2[0x23] + 0x68) + 0x20);
              if (plVar19 != plVar12) goto LAB_7102eac014;
              goto LAB_7102eac044;
            }
            break;
          }
          plVar18 = plVar18 + 1;
        } while (plVar12 != plVar18);
        if (plVar19 != plVar12) {
LAB_7102eac014:
          do {
            lVar14 = *plVar19;
            if ((*(int *)(lVar14 + 0x18) == 0x751d6299) &&
               (iVar11 = strcmp((char *)(lVar14 + 0x20),"00_Floor01R"), iVar11 == 0)) {
              if ((lVar14 != 0) && (lVar14 = *(long *)(*(long *)(lVar14 + 8) + 0x108), lVar14 != 0))
              {
                *(undefined1 *)(lVar14 + 0x44) = 1;
              }
              break;
            }
            plVar19 = plVar19 + 1;
          } while (plVar12 != plVar19);
        }
      }
LAB_7102eac044:
      FUN_71025f55b0(*(undefined8 **)param_2[0x48],(undefined8 *)((undefined8 *)param_2[0x48])[1],
                     "IPP0002");
      param_4 = "IPP0003";
      FUN_71025f55b0(*(undefined8 **)param_2[0x48],(undefined8 *)((undefined8 *)param_2[0x48])[1],
                     "IPP0003");
      if ((char)param_2[0x49] != '\0') {
        FUN_71025f55b0(*(undefined8 **)param_2[0x48],(undefined8 *)((undefined8 *)param_2[0x48])[1],
                       "IPP0004");
        param_4 = "IPP0005";
        FUN_71025f55b0(*(undefined8 **)param_2[0x48],(undefined8 *)((undefined8 *)param_2[0x48])[1],
                       "IPP0005");
      }
      plVar18 = *(long **)(**(long **)(param_2[0x21] + 0x338) + 8);
      if (plVar18 != (long *)0x0) {
        param_4 = &DAT_ffffffff;
        (**(code **)(*plVar18 + 0x58))(plVar18,7);
      }
    }
    fVar21 = *(float *)(param_2 + 0x34);
    if (fVar21 <= 0.0) {
      auVar54 = *(undefined1 (*) [16])(param_2 + 0x36);
    }
    else {
      auVar40._0_4_ = *(float *)(param_2 + 0x38) + param_1 * *(float *)(param_2 + 0x3a);
      auVar40._4_4_ =
           *(float *)((long)param_2 + 0x1c4) + param_1 * *(float *)((long)param_2 + 0x1d4);
      auVar40._8_4_ = *(float *)(param_2 + 0x39) + param_1 * *(float *)(param_2 + 0x3b);
      fVar26 = *(float *)((long)param_2 + 0x1cc) + *(float *)((long)param_2 + 0x1dc) * 0.0;
      auVar53._0_4_ = auVar40._0_4_ * auVar40._0_4_;
      auVar53._4_4_ = auVar40._4_4_ * auVar40._4_4_;
      auVar53._8_4_ = auVar40._8_4_ * auVar40._8_4_;
      auVar53._12_4_ = fVar26 * fVar26;
      auVar41 = NEON_ext(auVar53,auVar53,8,1);
      auVar51 = *(undefined1 (*) [16])(param_2 + 0x3c);
      auVar74._0_4_ = auVar51._0_4_ * auVar51._0_4_;
      auVar74._4_4_ = auVar51._4_4_ * auVar51._4_4_;
      auVar74._8_4_ = auVar51._8_4_ * auVar51._8_4_;
      auVar74._12_4_ = auVar51._12_4_ * auVar51._12_4_;
      auVar78 = NEON_ext(auVar74,auVar74,8,1);
      if (auVar78._0_4_ + auVar74._0_4_ + auVar78._4_4_ + auVar74._4_4_ <
          auVar41._0_4_ + auVar53._0_4_ + auVar41._4_4_ + auVar53._4_4_) {
        auVar41 = NEON_ext(auVar51,auVar51,8,1);
        auVar40._8_4_ = (float)auVar41._0_4_;
        auVar40._0_8_ = auVar51._0_8_;
      }
      fVar26 = param_1 * auVar40._0_4_;
      fVar27 = param_1 * auVar40._4_4_;
      fVar28 = param_1 * auVar40._8_4_;
      auVar54._0_8_ =
           CONCAT44(*(float *)((long)param_2 + 0x1b4) + fVar27,*(float *)(param_2 + 0x36) + fVar26);
      auVar54._8_4_ = *(float *)(param_2 + 0x37) + fVar28;
      auVar54._12_4_ = *(float *)((long)param_2 + 0x1bc) + 0.0;
      auVar43._0_4_ = fVar26 * fVar26;
      auVar43._4_4_ = fVar27 * fVar27;
      auVar43._8_4_ = fVar28 * fVar28;
      auVar43._12_4_ = 0;
      auVar51 = NEON_ext(auVar43,auVar43,8,1);
      param_2[0x37] = auVar54._8_8_;
      param_2[0x36] = auVar54._0_8_;
      param_2[0x39] = (ulong)(uint)auVar40._8_4_;
      param_2[0x38] = auVar40._0_8_;
      fVar21 = fVar21 - SQRT(auVar51._0_4_ + auVar43._0_4_ + auVar51._4_4_ + auVar43._4_4_);
      *(float *)(param_2 + 0x34) = fVar21;
    }
    auVar51 = NEON_ext(auVar54,auVar54,8,1);
    param_2[7] = (ulong)auVar51._0_4_;
    param_2[6] = auVar54._0_8_;
    fVar26 = *(float *)(param_2 + 0x3e);
    if (fVar26 <= 0.0) {
      auVar32 = *(undefined1 (*) [16])(param_2 + 0x40);
    }
    else {
      auVar62._0_4_ = *(float *)(param_2 + 0x42) + param_1 * *(float *)(param_2 + 0x44);
      auVar62._4_4_ =
           *(float *)((long)param_2 + 0x214) + param_1 * *(float *)((long)param_2 + 0x224);
      auVar62._8_4_ = *(float *)(param_2 + 0x43) + param_1 * *(float *)(param_2 + 0x45);
      fVar27 = *(float *)((long)param_2 + 0x21c) + *(float *)((long)param_2 + 0x22c) * 0.0;
      auVar75._0_4_ = auVar62._0_4_ * auVar62._0_4_;
      auVar75._4_4_ = auVar62._4_4_ * auVar62._4_4_;
      auVar75._8_4_ = auVar62._8_4_ * auVar62._8_4_;
      auVar75._12_4_ = fVar27 * fVar27;
      auVar41 = NEON_ext(auVar75,auVar75,8,1);
      auVar51 = *(undefined1 (*) [16])(param_2 + 0x46);
      fVar27 = auVar51._0_4_ * auVar51._0_4_;
      fVar28 = auVar51._4_4_ * auVar51._4_4_;
      fVar50 = auVar51._8_4_ * auVar51._8_4_;
      fVar70 = auVar51._12_4_ * auVar51._12_4_;
      auVar2._4_4_ = fVar28;
      auVar2._0_4_ = fVar27;
      auVar2._8_4_ = fVar50;
      auVar2._12_4_ = fVar70;
      auVar3._4_4_ = fVar28;
      auVar3._0_4_ = fVar27;
      auVar3._8_4_ = fVar50;
      auVar3._12_4_ = fVar70;
      auVar78 = NEON_ext(auVar2,auVar3,8,1);
      if (auVar78._0_4_ + fVar27 + auVar78._4_4_ + fVar28 <
          auVar41._0_4_ + auVar75._0_4_ + auVar41._4_4_ + auVar75._4_4_) {
        auVar41 = NEON_ext(auVar51,auVar51,8,1);
        auVar62._8_4_ = (float)auVar41._0_4_;
        auVar62._0_8_ = auVar51._0_8_;
      }
      fVar27 = param_1 * auVar62._0_4_;
      fVar28 = param_1 * auVar62._4_4_;
      fVar50 = param_1 * auVar62._8_4_;
      auVar32._0_8_ =
           CONCAT44(*(float *)((long)param_2 + 0x204) + fVar28,*(float *)(param_2 + 0x40) + fVar27);
      auVar32._8_4_ = *(float *)(param_2 + 0x41) + fVar50;
      auVar32._12_4_ = *(float *)((long)param_2 + 0x20c) + 0.0;
      auVar63._0_4_ = fVar27 * fVar27;
      auVar63._4_4_ = fVar28 * fVar28;
      auVar63._8_4_ = fVar50 * fVar50;
      auVar63._12_4_ = 0;
      auVar51 = NEON_ext(auVar63,auVar63,8,1);
      param_2[0x41] = auVar32._8_8_;
      param_2[0x40] = auVar32._0_8_;
      param_2[0x43] = (ulong)(uint)auVar62._8_4_;
      param_2[0x42] = auVar62._0_8_;
      fVar26 = fVar26 - SQRT(auVar51._0_4_ + auVar63._0_4_ + auVar51._4_4_ + auVar63._4_4_);
      *(float *)(param_2 + 0x3e) = fVar26;
    }
    auVar51 = NEON_ext(auVar32,auVar32,8,1);
    param_2[0x17] = (ulong)auVar51._0_4_;
    param_2[0x16] = auVar32._0_8_;
    if ((fVar21 <= 0.0) && (fVar26 <= 0.0)) {
      FUN_71025f4d80((long *)**(undefined8 **)(*param_2 + 0x68),
                     (long *)(*(undefined8 **)(*param_2 + 0x68))[1],1);
      auVar51 = _DAT_7104465ba0;
      param_2[7] = DAT_7104465ba0._8_8_;
      param_2[6] = auVar51._0_8_;
      (**(code **)(*(long *)*param_2 + 0x90))();
      param_4 = (char *)0x1;
      FUN_71025f4d80((long *)**(undefined8 **)(param_2[0x10] + 0x68),
                     (long *)(*(undefined8 **)(param_2[0x10] + 0x68))[1],1);
      auVar51 = _DAT_7104467010;
      param_2[0x17] = DAT_7104467010._8_8_;
      param_2[0x16] = auVar51._0_8_;
      (**(code **)(*(long *)param_2[0x10] + 0x90))();
      uVar13 = 4;
      goto LAB_7102eac2c8;
    }
  }
  else if (iVar11 == 2) {
    plVar18 = (long *)param_2[3];
    plVar19 = (long *)plVar18[6];
    if (plVar19 == (long *)0x0) {
      cVar16 = (char)plVar18[8];
LAB_7102eab9d8:
      if (cVar16 != '\0') goto LAB_7102eabbcc;
    }
    else {
      cVar16 = (char)plVar18[8];
      if ((char)plVar19[2] == '\0') goto LAB_7102eab9d8;
LAB_7102eabbcc:
      if (cVar16 != '\0') {
        if (((plVar19 != (long *)0x0) && ((char)plVar19[2] != '\0')) &&
           (*(undefined1 *)(plVar19 + 2) = 0, (char)plVar19[10] != '\0')) {
          plVar12 = (long *)FUN_71003ac560((ulong)*(uint *)(*plVar19 + 8));
          (**(code **)(*plVar12 + 0x48))(plVar12,0);
          *(undefined1 *)(plVar19 + 10) = 0;
        }
        (**(code **)(*plVar18 + 0x30))(plVar18);
      }
      *(undefined1 *)(plVar18 + 8) = 0;
    }
    plVar18 = (long *)param_2[0x13];
    plVar19 = (long *)plVar18[6];
    if (plVar19 == (long *)0x0) {
      cVar16 = (char)plVar18[8];
LAB_7102eabc3c:
      if (cVar16 == '\0') goto LAB_7102eac2cc;
    }
    else {
      cVar16 = (char)plVar18[8];
      if ((char)plVar19[2] == '\0') goto LAB_7102eabc3c;
    }
    if (cVar16 != '\0') {
      if (((plVar19 != (long *)0x0) && ((char)plVar19[2] != '\0')) &&
         (*(undefined1 *)(plVar19 + 2) = 0, (char)plVar19[10] != '\0')) {
        plVar12 = (long *)FUN_71003ac560((ulong)*(uint *)(*plVar19 + 8));
        (**(code **)(*plVar12 + 0x48))(plVar12,0);
        *(undefined1 *)(plVar19 + 10) = 0;
      }
      (**(code **)(*plVar18 + 0x30))(plVar18);
    }
    *(undefined1 *)(plVar18 + 8) = 0;
  }
LAB_7102eac2cc:
  bVar8 = DAT_710532e748;
  switch(*(undefined4 *)((long)param_2 + 0x154)) {
  case 1:
    if (*(char *)((long)param_2 + 0x15c) == '\0') {
      fVar21 = *(float *)(param_2 + 0x2f);
    }
    else {
      *(undefined1 *)((long)param_2 + 0x15c) = 0;
      if (*(long *)(**(long **)(*(long *)(*lib::Singleton<app::StageManager>::instance_ + 0x1c0) +
                               0xb0) + 0x20) == *(long *)(*(long *)(param_2[0x21] + 0x308) + 8)) {
        local_b0[0] = _ConstantZero;
        local_b0[1] = _DAT_7107521008;
        param_4 = (char *)local_b0;
        FUN_71005162f0(*DAT_71052b8f00 + 0x2b0,3,(undefined1 (*) [16])param_4);
      }
      fVar21 = *(float *)(param_2[0x22] + 0x298);
      *(float *)(param_2 + 0x2f) = fVar21;
    }
    *(float *)(param_2 + 0x2f) = fVar21 - param_1;
    if (fVar21 - param_1 <= 0.0) {
      *(undefined1 *)((long)param_2 + 0x15c) = 1;
      *(undefined4 *)((long)param_2 + 0x154) = 2;
    }
    break;
  case 2:
    if (*(char *)((long)param_2 + 0x15c) == '\0') {
      DAT_710532e744 = DAT_710532e744 + param_1;
      *(float *)(param_2 + 0x2f) = *(float *)(param_2 + 0x2f) - param_1;
      fVar21 = DAT_71051468f0;
      if (((bVar8 & 1) != 0) ||
         (fVar26 = DAT_71051468f0 * (float)(bVar8 ^ 1), DAT_710532e744 <= fVar26))
      goto LAB_7102eacb70;
    }
    else {
      *(undefined1 *)((long)param_2 + 0x15c) = 0;
      lVar14 = _ConstantZero;
      auVar6._8_8_ = _DAT_7107521008;
      auVar6._0_8_ = _ConstantZero;
      auVar51 = NEON_ext(auVar6,auVar6,8,1);
      lVar20 = param_2[0x22];
      param_2[0x29] = (ulong)auVar51._0_4_;
      param_2[0x28] = lVar14;
      lVar17 = (long)(int)param_2[0x20] * 0xc;
      fVar27 = *(float *)(lVar20 + 0x1c8);
      fVar21 = *(float *)(*(long *)(lVar20 + 0x168) + lVar17) / fVar27;
      lVar14 = param_2[0x2d];
      uVar13 = *(undefined4 *)((long)param_2 + 0x16c);
      *(int *)(param_2 + 0x2d) = (int)lVar14;
      *(undefined4 *)((long)param_2 + 0x16c) = uVar13;
      *(float *)(param_2 + 0x2c) = fVar21;
      *(undefined4 *)((long)param_2 + 0x164) = *(undefined4 *)((long)param_2 + 0x164);
      fVar26 = *(float *)(*(long *)(lVar20 + 0x168) + lVar17 + 4);
      *(int *)(param_2 + 0x2d) = (int)lVar14;
      *(undefined4 *)((long)param_2 + 0x16c) = uVar13;
      param_2[0x2c] = CONCAT44(fVar26 / fVar27,fVar21);
      fVar21 = *(float *)(*(long *)(lVar20 + 0x168) + lVar17 + 8);
      *(float *)(param_2 + 0x2f) = fVar27;
      *(float *)(param_2 + 0x2e) = fVar21 / fVar27;
      fVar21 = DAT_71051468f0;
      if (DAT_710532e748 == 1) {
        *(float *)(param_2 + 0x2f) = fVar27 - param_1;
        DAT_710532e744 = param_1 + 0.0;
        fVar21 = DAT_71051468f0;
      }
      else {
        fVar26 = DAT_71051468f0 * (float)(DAT_710532e748 ^ 1);
        fVar28 = 0.0;
        if (fVar26 < 0.0) {
          fVar28 = fVar26;
        }
        DAT_710532e744 = fVar28 + param_1;
        *(float *)(param_2 + 0x2f) = fVar27 - param_1;
        if (fVar26 < DAT_710532e744) goto LAB_7102eacb74;
      }
LAB_7102eacb70:
      fVar26 = DAT_710532e744;
    }
LAB_7102eacb74:
    DAT_710532e744 = fVar26;
    fVar26 = *(float *)(*(long *)(param_2[0x22] + 0x168) + (long)(int)param_2[0x20] * 0xc);
    fVar21 = fmodf(DAT_710532e744,fVar21);
    fVar21 = fVar21 / DAT_71051468f0;
    if (0.5 <= fVar21) {
      fVar27 = fVar21 + -0.5 + fVar21 + -0.5;
      fVar21 = 1.0 - (fVar27 + -0.5 + fVar27 + -0.5);
      if (fVar27 < 0.5) {
        fVar21 = fVar27 + fVar27;
      }
      fVar21 = sinf(fVar21 * 1.5707964);
      fVar21 = (1.0 - fVar21) * 0.5;
    }
    else {
      fVar21 = fVar21 + fVar21;
      fVar27 = 1.0 - (fVar21 + -0.5 + fVar21 + -0.5);
      if (fVar21 < 0.5) {
        fVar27 = fVar21 + fVar21;
      }
      fVar21 = sinf(fVar27 * 1.5707964);
      fVar21 = fVar21 * 0.5 + 0.5;
    }
    fVar21 = DAT_710532e740 + fVar21 * (1.0 - DAT_710532e740);
    *(int *)(param_2 + 0x25) = (int)param_2[0x25];
    *(undefined4 *)((long)param_2 + 300) = *(undefined4 *)((long)param_2 + 300);
    *(float *)(param_2 + 0x24) = fVar26 * fVar21;
    *(undefined4 *)((long)param_2 + 0x124) = *(undefined4 *)((long)param_2 + 0x124);
    fVar26 = *(float *)(*(long *)(param_2[0x22] + 0x168) + (long)(int)param_2[0x20] * 0xc + 4);
    fVar21 = fmodf(DAT_710532e744,DAT_71051468f0);
    fVar21 = fVar21 / DAT_71051468f0;
    if (0.5 <= fVar21) {
      fVar27 = fVar21 + -0.5 + fVar21 + -0.5;
      fVar21 = 1.0 - (fVar27 + -0.5 + fVar27 + -0.5);
      if (fVar27 < 0.5) {
        fVar21 = fVar27 + fVar27;
      }
      fVar21 = sinf(fVar21 * 1.5707964);
      fVar21 = (1.0 - fVar21) * 0.5;
    }
    else {
      fVar21 = fVar21 + fVar21;
      fVar27 = 1.0 - (fVar21 + -0.5 + fVar21 + -0.5);
      if (fVar21 < 0.5) {
        fVar27 = fVar21 + fVar21;
      }
      fVar21 = sinf(fVar27 * 1.5707964);
      fVar21 = fVar21 * 0.5 + 0.5;
    }
    fVar21 = DAT_710532e740 + fVar21 * (1.0 - DAT_710532e740);
    *(int *)(param_2 + 0x25) = (int)param_2[0x25];
    *(undefined4 *)((long)param_2 + 300) = *(undefined4 *)((long)param_2 + 300);
    param_2[0x24] = CONCAT44(fVar26 * fVar21,(int)param_2[0x24]);
    fVar21 = *(float *)(*(long *)(param_2[0x22] + 0x168) + (long)(int)param_2[0x20] * 0xc + 8);
    fVar26 = fmodf(DAT_710532e744,DAT_71051468f0);
    fVar26 = fVar26 / DAT_71051468f0;
    if (0.5 <= fVar26) {
      fVar27 = fVar26 + -0.5 + fVar26 + -0.5;
      fVar26 = 1.0 - (fVar27 + -0.5 + fVar27 + -0.5);
      if (fVar27 < 0.5) {
        fVar26 = fVar27 + fVar27;
      }
      fVar26 = sinf(fVar26 * 1.5707964);
      fVar26 = (1.0 - fVar26) * 0.5;
    }
    else {
      fVar26 = fVar26 + fVar26;
      fVar27 = 1.0 - (fVar26 + -0.5 + fVar26 + -0.5);
      if (fVar26 < 0.5) {
        fVar27 = fVar26 + fVar26;
      }
      fVar26 = sinf(fVar27 * 1.5707964);
      fVar26 = fVar26 * 0.5 + 0.5;
    }
    fVar27 = *(float *)(param_2 + 0x28);
    fVar28 = *(float *)((long)param_2 + 0x144);
    fVar21 = fVar21 * (DAT_710532e740 + fVar26 * (1.0 - DAT_710532e740));
    param_2[0x29] = (ulong)(uint)fVar21;
    *(float *)(param_2 + 0x28) = fVar27;
    *(float *)((long)param_2 + 0x144) = fVar28;
    if (*(float *)(param_2 + 0x2f) <= 0.0) {
      lVar14 = (long)(int)param_2[0x20] * 0xc;
      local_120 = *(long *)(*(long *)(param_2[0x22] + 0x168) + lVar14);
      param_2[0x25] = 0;
      param_2[0x24] = local_120;
      uStack_118 = 0;
      fVar21 = *(float *)(*(long *)(param_2[0x22] + 0x168) + lVar14 + 8);
      *(undefined1 *)((long)param_2 + 0x15c) = 1;
      *(undefined4 *)((long)param_2 + 0x154) = 3;
      param_2[0x29] = (ulong)(uint)fVar21;
      *(float *)(param_2 + 0x28) = fVar27;
      *(float *)((long)param_2 + 0x144) = fVar28;
    }
    else {
      local_120 = param_2[0x24];
      uStack_118 = param_2[0x25];
    }
    uVar10 = uRam0000007107558008;
    uVar9 = _ConstantOne;
    auVar24._4_4_ = fVar28 * 0.017453292;
    auVar24._0_4_ = fVar27 * 0.017453292;
    auVar24._8_4_ = fVar21 * 0.017453292;
    auVar24._12_4_ = 0;
    auVar51 = FUN_71003d7950(auVar24,0);
    auVar57._0_12_ = auVar51._0_12_;
    auVar57._12_4_ = 0;
    uVar60 = a64_TBL(ZEXT816(0),auVar57,0xf0e0d0c03020100);
    uVar29 = NEON_ext(auVar51._0_8_,auVar51._0_8_,4,1);
    uVar39 = a64_TBL(ZEXT816(0),auVar57,0xb0a09080b0a0908);
    uVar71 = a64_TBL(ZEXT816(0),auVar57,0xf0e0d0c07060504);
    fVar21 = (float)uVar29 * (float)uVar29;
    fVar26 = (float)((ulong)uVar29 >> 0x20);
    fVar26 = fVar26 * fVar26;
    fVar50 = (float)uVar60;
    fVar27 = (float)((ulong)uVar60 >> 0x20);
    fVar28 = (float)uVar39 * (float)uVar39;
    fVar70 = (float)((ulong)uVar39 >> 0x20);
    fVar70 = fVar70 * fVar70;
    fVar81 = (float)uVar71;
    fVar59 = (float)((ulong)uVar71 >> 0x20);
    uVar29 = a64_TBL(ZEXT816(0),auVar57,0xb0a090807060504);
    auVar36._0_8_ =
         CONCAT44(1.0 - (fVar70 + fVar70 + fVar26 + fVar26),
                  1.0 - (fVar28 + fVar28 + fVar21 + fVar21));
    auVar36._8_4_ = 1.0 - (fVar81 * fVar81 + fVar81 * fVar81 + fVar50 * fVar50 + fVar50 * fVar50);
    auVar36._12_4_ = 0.0 - (fVar59 * fVar59 + fVar59 * fVar59 + fVar27 * fVar27 + fVar27 * fVar27);
    fVar70 = (float)uVar29 * auVar51._0_4_;
    fVar68 = (float)((ulong)uVar29 >> 0x20) * auVar51._4_4_;
    fVar50 = fVar50 * auVar51._8_4_;
    fVar70 = fVar70 + fVar70;
    fVar68 = fVar68 + fVar68;
    fVar50 = fVar50 + fVar50;
    fVar69 = fVar27 * 0.0 + fVar27 * 0.0;
    uVar29 = a64_TBL(ZEXT816(0),auVar57,0x30201000b0a0908);
    fVar28 = auVar51._12_4_;
    fVar21 = (float)uVar29 * fVar28;
    fVar26 = (float)((ulong)uVar29 >> 0x20) * fVar28;
    fVar21 = fVar21 + fVar21;
    fVar26 = fVar26 + fVar26;
    fVar27 = fVar81 * fVar28 + fVar81 * fVar28;
    fVar28 = fVar59 * fVar28 + fVar59 * fVar28;
    auVar77._0_4_ = fVar70 + fVar21;
    auVar77._4_4_ = fVar68 + fVar26;
    auVar77._8_4_ = fVar50 + fVar27;
    auVar77._12_4_ = fVar69 + fVar28;
    auVar80._0_4_ = fVar70 - fVar21;
    auVar80._4_4_ = fVar68 - fVar26;
    auVar80._8_4_ = fVar50 - fVar27;
    auVar80._12_4_ = fVar69 - fVar28;
    auVar47._0_8_ = a64_TBL(ZEXT816(0),auVar77,auVar80,0x171615140b0a0908);
    uVar29 = a64_TBL(ZEXT816(0),auVar77,auVar80,0x1f1e1d1c1f1e1d1c);
    auVar47._8_8_ = uVar29;
    auVar66._0_8_ = a64_TBL(ZEXT816(0),auVar77,auVar80,0x1b1a191803020100);
    uVar29 = a64_TBL(ZEXT816(0),auVar77,auVar80,0x706050413121110);
    auVar66._8_8_ = uVar29;
    auVar58._8_8_ = auVar36._8_8_;
    auVar58._0_8_ = auVar36._0_8_;
    uVar29 = a64_TBL(ZEXT816(0),auVar58,auVar66,0x1312111003020100);
    uVar72 = a64_TBL(ZEXT816(0),auVar58,auVar66,0xf0e0d0c17161514);
    uVar73 = a64_TBL(ZEXT816(0),auVar58,auVar66,0x70605041b1a1918);
    uVar60 = a64_TBL(ZEXT816(0),auVar58,auVar66,0xf0e0d0c1f1e1d1c);
    uVar71 = a64_TBL(ZEXT816(0),auVar36,auVar47,0x1716151413121110);
    uVar39 = a64_TBL(ZEXT816(0),auVar36,auVar47,0xf0e0d0c0b0a0908);
    local_100 = (float)uVar9;
    fStack_fc = (float)((ulong)uVar9 >> 0x20);
    fStack_f8 = (float)uVar10;
    auVar5._8_8_ = uStack_118;
    auVar5._0_8_ = local_120;
    auVar25._0_8_ = CONCAT44((float)((ulong)uVar29 >> 0x20) * local_100,(float)uVar29 * local_100);
    auVar25._8_4_ = (float)uVar72 * local_100;
    auVar25._12_4_ = (float)((ulong)uVar72 >> 0x20) * local_100;
    auVar37._0_8_ = CONCAT44((float)((ulong)uVar73 >> 0x20) * fStack_fc,(float)uVar73 * fStack_fc);
    auVar37._8_4_ = (float)uVar60 * fStack_fc;
    auVar37._12_4_ = (float)((ulong)uVar60 >> 0x20) * fStack_fc;
    local_f0[1] = auVar25._8_8_;
    local_d8 = auVar37._8_8_;
    auVar48._0_8_ = CONCAT44((float)((ulong)uVar71 >> 0x20) * fStack_f8,(float)uVar71 * fStack_f8);
    auVar48._8_4_ = (float)uVar39 * fStack_f8;
    auVar48._12_4_ = (float)((ulong)uVar39 >> 0x20) * fStack_f8;
    auVar67._0_12_ = auVar5._0_12_;
    auVar67._12_4_ = 0x3f800000;
    uStack_c8 = auVar48._8_8_;
    local_b8 = auVar67._8_8_;
    local_c0 = local_120;
    lVar14 = *(long *)(param_2[0x23] + 0x70);
    local_f0[0] = auVar25._0_8_;
    local_e0 = auVar37._0_8_;
    local_d0 = auVar48._0_8_;
    if (lVar14 != 0) {
      (**(code **)(**(long **)(lVar14 + 0x90) + 0x148))(*(long **)(lVar14 + 0x90),local_f0);
      lVar14 = *(long *)(lVar14 + 0xd8);
      if (lVar14 != 0) {
        local_98 = local_d8;
        local_a0 = local_e0;
        local_b0[1] = local_f0[1];
        local_b0[0] = local_f0[0];
        local_78 = local_b8;
        local_80 = local_c0;
        local_88 = uStack_c8;
        local_90 = local_d0;
        if (*(char *)(*(long *)(lVar14 + 8) + 0xa8) != '\0') {
          plVar18 = *(long **)(*(long *)(lVar14 + 8) + 0x48);
          (**(code **)(*plVar18 + 0x20))(plVar18,local_b0);
        }
        *(undefined1 *)(lVar14 + 0x20) = 1;
      }
    }
    plVar18 = *(long **)param_2[0x48];
    plVar19 = (long *)((long *)param_2[0x48])[1];
    if (plVar18 != plVar19) {
      fVar21 = *(float *)((long)param_2 + 0x124);
      lVar14 = param_2[0x24];
      fVar26 = *(float *)(param_2 + 0x29);
      do {
        plVar12 = plVar18 + 1;
        lVar20 = *plVar18;
        *(undefined8 *)(lVar20 + 0x40) = 0x3f800000;
        *(undefined8 *)(lVar20 + 0x48) = 0;
        *(float *)(lVar20 + 0x54) = -*(float *)(lVar20 + 0x34);
        *(undefined4 *)(lVar20 + 0x50) = 0x3f800000;
        *(float *)(lVar20 + 0x48) = -*(float *)(lVar20 + 0x30);
        fVar27 = cosf(fVar26 * 0.017453292);
        fVar28 = sinf(fVar26 * 0.017453292);
        fVar50 = fVar28 * *(float *)(lVar20 + 0x44) + fVar27 * *(float *)(lVar20 + 0x50);
        fVar81 = fVar28 * *(float *)(lVar20 + 0x48) + fVar27 * *(float *)(lVar20 + 0x54) + 0.0;
        fVar59 = fVar27 * *(float *)(lVar20 + 0x40) - *(float *)(lVar20 + 0x4c) * fVar28;
        fVar68 = fVar27 * *(float *)(lVar20 + 0x44) - *(float *)(lVar20 + 0x50) * fVar28;
        fVar70 = fVar28 * *(float *)(lVar20 + 0x40) + fVar27 * *(float *)(lVar20 + 0x4c);
        fVar27 = (fVar27 * *(float *)(lVar20 + 0x48) - *(float *)(lVar20 + 0x54) * fVar28) + 0.0;
        *(float *)(lVar20 + 0x40) = fVar59 + fVar70 * 0.0;
        *(float *)(lVar20 + 0x44) = fVar68 + fVar50 * 0.0;
        *(float *)(lVar20 + 0x4c) = fVar59 * 0.0 + fVar70;
        *(float *)(lVar20 + 0x50) = fVar68 * 0.0 + fVar50;
        local_100 = (float)lVar14;
        *(float *)(lVar20 + 0x48) = local_100 + fVar27 + fVar81 * 0.0;
        *(float *)(lVar20 + 0x54) = fVar21 + fVar27 * 0.0 + fVar81;
        plVar18 = plVar12;
      } while (plVar19 != plVar12);
    }
    break;
  case 3:
    if (*(char *)((long)param_2 + 0x15c) == '\0') {
      fVar21 = *(float *)(param_2 + 0x2f);
    }
    else {
      *(undefined1 *)((long)param_2 + 0x15c) = 0;
      puVar15 = *(uint **)(param_2[0x21] + 0x340);
      fVar21 = *(float *)(param_2[0x22] + 0x1cc);
      fVar26 = *(float *)(param_2[0x22] + 0x1d0);
      uVar38 = *puVar15;
      *puVar15 = puVar15[1];
      uVar1 = puVar15[3];
      uVar38 = uVar38 ^ uVar38 << 0xb;
      uVar38 = uVar38 ^ uVar38 >> 8 ^ uVar1 ^ uVar1 >> 0x13;
      puVar15[1] = puVar15[2];
      puVar15[2] = uVar1;
      puVar15[3] = uVar38;
      fVar21 = fVar21 + (fVar26 - fVar21) * (float)uVar38 * 2.3283064e-10;
      *(float *)(param_2 + 0x2f) = fVar21;
    }
    *(float *)(param_2 + 0x2f) = fVar21 - param_1;
    if (fVar21 - param_1 <= 0.0) {
      *(undefined4 *)((long)param_2 + 0x154) = 4;
    }
    break;
  case 4:
    lVar20 = param_2[0x22];
    fVar21 = *(float *)(lVar20 + 0x1d8);
    lVar17 = (long)(int)param_2[0x20] * 0xc;
    *(float *)(param_2 + 0x2f) = fVar21;
    fVar26 = *(float *)(*(long *)(lVar20 + 0x168) + lVar17) / fVar21;
    auVar44._4_12_ = SUB1612(*(undefined1 (*) [16])(param_2 + 0x2c),4);
    auVar44._0_4_ = fVar26;
    lVar49 = SUB168(*(undefined1 (*) [16])(param_2 + 0x2c),8);
    param_2[0x2d] = lVar49;
    param_2[0x2c] = auVar44._0_8_;
    fVar27 = *(float *)(*(long *)(lVar20 + 0x168) + lVar17 + 4);
    lVar14 = param_2[0x21];
    param_2[0x2d] = lVar49;
    param_2[0x2c] = CONCAT44(fVar27 / fVar21,fVar26);
    *(float *)(param_2 + 0x2e) = *(float *)(*(long *)(lVar20 + 0x168) + lVar17 + 8) / fVar21;
    plVar18 = *(long **)(**(long **)(lVar14 + 0x338) + 8);
    if (plVar18 != (long *)0x0) {
      param_4 = &DAT_ffffffff;
      (**(code **)(*plVar18 + 0x58))(plVar18,0x19);
      lVar14 = param_2[0x21];
    }
    if (*(long *)(**(long **)(*(long *)(*lib::Singleton<app::StageManager>::instance_ + 0x1c0) +
                             0xb0) + 0x20) == *(long *)(*(long *)(lVar14 + 0x308) + 8)) {
      local_b0[0] = _ConstantZero;
      local_b0[1] = _DAT_7107521008;
      param_4 = (char *)local_b0;
      FUN_71005162f0(*DAT_71052b8f00 + 0x2b0,3,(undefined1 (*) [16])param_4);
    }
    *(undefined4 *)((long)param_2 + 0x154) = 5;
  case 5:
    *(float *)(param_2 + 0x2f) = *(float *)(param_2 + 0x2f) - param_1;
    *(int *)(param_2 + 0x25) = (int)param_2[0x25];
    *(undefined4 *)((long)param_2 + 300) = *(undefined4 *)((long)param_2 + 300);
    param_2[0x24] =
         CONCAT44(*(float *)((long)param_2 + 0x124) - param_1 * *(float *)((long)param_2 + 0x164),
                  *(float *)(param_2 + 0x24) - param_1 * *(float *)(param_2 + 0x2c));
    puVar15 = *(uint **)(param_2[0x21] + 0x340);
    uVar38 = *puVar15;
    *puVar15 = puVar15[1];
    uVar1 = puVar15[3];
    uVar38 = uVar38 ^ uVar38 << 0xb;
    uVar38 = uVar38 ^ uVar38 >> 8 ^ uVar1 ^ uVar1 >> 0x13;
    puVar15[1] = puVar15[2];
    puVar15[2] = uVar1;
    puVar15[3] = uVar38;
    local_120 = param_2[0x24];
    fVar21 = (float)param_2[0x29] - *(float *)(param_2 + 0x2e) * param_1;
    auVar31._8_4_ = fVar21;
    auVar31._0_8_ = param_2[0x28];
    auVar33._12_4_ = 0;
    auVar33._0_12_ = auVar31;
    param_2[0x29] = (ulong)(uint)fVar21;
    param_2[0x28] = param_2[0x28];
    uStack_118 = (ulong)(uint)((float)uVar38 * 0.8 * 2.3283064e-10 + -0.4);
    param_2[0x25] = uStack_118;
    param_2[0x24] = local_120;
    uVar9 = _DAT_7107521008;
    lVar14 = _ConstantZero;
    if (*(float *)(param_2 + 0x2f) <= 0.0) {
      auVar7._8_8_ = _DAT_7107521008;
      auVar7._0_8_ = _ConstantZero;
      *(undefined4 *)((long)param_2 + 0x154) = 6;
      auVar41 = NEON_ext(auVar7,auVar7,8,1);
      auVar51 = NEON_ext(ZEXT816(0),auVar33,8,1);
      auVar51 = NEON_ext(auVar51,auVar51,8,1);
      param_2[0x25] = (ulong)auVar41._0_4_;
      param_2[0x24] = lVar14;
      param_2[0x29] = auVar51._8_8_;
      param_2[0x28] = auVar51._0_8_;
      if (*(long *)(**(long **)(*(long *)(*lib::Singleton<app::StageManager>::instance_ + 0x1c0) +
                               0xb0) + 0x20) == *(long *)(*(long *)(param_2[0x21] + 0x308) + 8)) {
        local_b0[0] = lVar14;
        local_b0[1] = uVar9;
        FUN_71005162f0(*DAT_71052b8f00 + 0x2b0,3,(undefined1 (*) [16])local_b0);
      }
      param_6 = (long ****)&DAT_50000000;
      param_4 = (char *)0x0;
      param_5 = (byte ****)0x0;
      FUN_710067de90(*lib::Singleton<app::FighterManager>::instance_,0x137fff509b,0,0,0x50000000);
      auVar31 = SUB1612(*(undefined1 (*) [16])(param_2 + 0x28),0);
      local_120 = param_2[0x24];
      uStack_118 = param_2[0x25];
    }
    uVar10 = uRam0000007107558008;
    uVar9 = _ConstantOne;
    auVar22._4_4_ = auVar31._4_4_ * 0.017453292;
    auVar22._0_4_ = auVar31._0_4_ * 0.017453292;
    auVar22._8_4_ = auVar31._8_4_ * 0.017453292;
    auVar22._12_4_ = 0;
    auVar51 = FUN_71003d7950(auVar22,0);
    auVar55._0_12_ = auVar51._0_12_;
    auVar55._12_4_ = 0;
    uVar60 = a64_TBL(ZEXT816(0),auVar55,0xf0e0d0c03020100);
    uVar29 = NEON_ext(auVar51._0_8_,auVar51._0_8_,4,1);
    uVar39 = a64_TBL(ZEXT816(0),auVar55,0xb0a09080b0a0908);
    uVar71 = a64_TBL(ZEXT816(0),auVar55,0xf0e0d0c07060504);
    fVar21 = (float)uVar29 * (float)uVar29;
    fVar26 = (float)((ulong)uVar29 >> 0x20);
    fVar26 = fVar26 * fVar26;
    fVar50 = (float)uVar60;
    fVar27 = (float)((ulong)uVar60 >> 0x20);
    fVar28 = (float)uVar39 * (float)uVar39;
    fVar70 = (float)((ulong)uVar39 >> 0x20);
    fVar70 = fVar70 * fVar70;
    fVar81 = (float)uVar71;
    fVar59 = (float)((ulong)uVar71 >> 0x20);
    uVar29 = a64_TBL(ZEXT816(0),auVar55,0xb0a090807060504);
    auVar34._0_8_ =
         CONCAT44(1.0 - (fVar70 + fVar70 + fVar26 + fVar26),
                  1.0 - (fVar28 + fVar28 + fVar21 + fVar21));
    auVar34._8_4_ = 1.0 - (fVar81 * fVar81 + fVar81 * fVar81 + fVar50 * fVar50 + fVar50 * fVar50);
    auVar34._12_4_ = 0.0 - (fVar59 * fVar59 + fVar59 * fVar59 + fVar27 * fVar27 + fVar27 * fVar27);
    fVar70 = (float)uVar29 * auVar51._0_4_;
    fVar68 = (float)((ulong)uVar29 >> 0x20) * auVar51._4_4_;
    fVar50 = fVar50 * auVar51._8_4_;
    fVar70 = fVar70 + fVar70;
    fVar68 = fVar68 + fVar68;
    fVar50 = fVar50 + fVar50;
    fVar69 = fVar27 * 0.0 + fVar27 * 0.0;
    uVar29 = a64_TBL(ZEXT816(0),auVar55,0x30201000b0a0908);
    fVar28 = auVar51._12_4_;
    fVar21 = (float)uVar29 * fVar28;
    fVar26 = (float)((ulong)uVar29 >> 0x20) * fVar28;
    fVar21 = fVar21 + fVar21;
    fVar26 = fVar26 + fVar26;
    fVar27 = fVar81 * fVar28 + fVar81 * fVar28;
    fVar28 = fVar59 * fVar28 + fVar59 * fVar28;
    auVar76._0_4_ = fVar70 + fVar21;
    auVar76._4_4_ = fVar68 + fVar26;
    auVar76._8_4_ = fVar50 + fVar27;
    auVar76._12_4_ = fVar69 + fVar28;
    auVar79._0_4_ = fVar70 - fVar21;
    auVar79._4_4_ = fVar68 - fVar26;
    auVar79._8_4_ = fVar50 - fVar27;
    auVar79._12_4_ = fVar69 - fVar28;
    auVar45._0_8_ = a64_TBL(ZEXT816(0),auVar76,auVar79,0x171615140b0a0908);
    uVar29 = a64_TBL(ZEXT816(0),auVar76,auVar79,0x1f1e1d1c1f1e1d1c);
    auVar45._8_8_ = uVar29;
    auVar64._0_8_ = a64_TBL(ZEXT816(0),auVar76,auVar79,0x1b1a191803020100);
    uVar29 = a64_TBL(ZEXT816(0),auVar76,auVar79,0x706050413121110);
    auVar64._8_8_ = uVar29;
    auVar56._8_8_ = auVar34._8_8_;
    auVar56._0_8_ = auVar34._0_8_;
    uVar29 = a64_TBL(ZEXT816(0),auVar56,auVar64,0x1312111003020100);
    uVar72 = a64_TBL(ZEXT816(0),auVar56,auVar64,0xf0e0d0c17161514);
    uVar73 = a64_TBL(ZEXT816(0),auVar56,auVar64,0x70605041b1a1918);
    uVar60 = a64_TBL(ZEXT816(0),auVar56,auVar64,0xf0e0d0c1f1e1d1c);
    uVar71 = a64_TBL(ZEXT816(0),auVar34,auVar45,0x1716151413121110);
    uVar39 = a64_TBL(ZEXT816(0),auVar34,auVar45,0xf0e0d0c0b0a0908);
    local_100 = (float)uVar9;
    fStack_fc = (float)((ulong)uVar9 >> 0x20);
    fStack_f8 = (float)uVar10;
    auVar4._8_8_ = uStack_118;
    auVar4._0_8_ = local_120;
    auVar23._0_8_ = CONCAT44((float)((ulong)uVar29 >> 0x20) * local_100,(float)uVar29 * local_100);
    auVar23._8_4_ = (float)uVar72 * local_100;
    auVar23._12_4_ = (float)((ulong)uVar72 >> 0x20) * local_100;
    auVar35._0_8_ = CONCAT44((float)((ulong)uVar73 >> 0x20) * fStack_fc,(float)uVar73 * fStack_fc);
    auVar35._8_4_ = (float)uVar60 * fStack_fc;
    auVar35._12_4_ = (float)((ulong)uVar60 >> 0x20) * fStack_fc;
    local_f0[1] = auVar23._8_8_;
    local_d8 = auVar35._8_8_;
    auVar46._0_8_ = CONCAT44((float)((ulong)uVar71 >> 0x20) * fStack_f8,(float)uVar71 * fStack_f8);
    auVar46._8_4_ = (float)uVar39 * fStack_f8;
    auVar46._12_4_ = (float)((ulong)uVar39 >> 0x20) * fStack_f8;
    auVar65._0_12_ = auVar4._0_12_;
    auVar65._12_4_ = 0x3f800000;
    uStack_c8 = auVar46._8_8_;
    local_b8 = auVar65._8_8_;
    local_c0 = local_120;
    lVar14 = *(long *)(param_2[0x23] + 0x70);
    local_f0[0] = auVar23._0_8_;
    local_e0 = auVar35._0_8_;
    local_d0 = auVar46._0_8_;
    if (lVar14 != 0) {
      (**(code **)(**(long **)(lVar14 + 0x90) + 0x148))(*(long **)(lVar14 + 0x90),local_f0);
      lVar14 = *(long *)(lVar14 + 0xd8);
      if (lVar14 != 0) {
        local_98 = local_d8;
        local_a0 = local_e0;
        local_b0[1] = local_f0[1];
        local_b0[0] = local_f0[0];
        local_78 = local_b8;
        local_80 = local_c0;
        local_88 = uStack_c8;
        local_90 = local_d0;
        if (*(char *)(*(long *)(lVar14 + 8) + 0xa8) != '\0') {
          plVar18 = *(long **)(*(long *)(lVar14 + 8) + 0x48);
          (**(code **)(*plVar18 + 0x20))(plVar18,local_b0);
        }
        *(undefined1 *)(lVar14 + 0x20) = 1;
      }
    }
    plVar18 = *(long **)param_2[0x48];
    plVar19 = (long *)((long *)param_2[0x48])[1];
    if (plVar18 != plVar19) {
      fVar21 = *(float *)((long)param_2 + 0x124);
      lVar14 = param_2[0x24];
      fVar26 = *(float *)(param_2 + 0x29);
      do {
        plVar12 = plVar18 + 1;
        lVar20 = *plVar18;
        *(undefined8 *)(lVar20 + 0x40) = 0x3f800000;
        *(undefined8 *)(lVar20 + 0x48) = 0;
        *(float *)(lVar20 + 0x54) = -*(float *)(lVar20 + 0x34);
        *(undefined4 *)(lVar20 + 0x50) = 0x3f800000;
        *(float *)(lVar20 + 0x48) = -*(float *)(lVar20 + 0x30);
        fVar27 = cosf(fVar26 * 0.017453292);
        fVar28 = sinf(fVar26 * 0.017453292);
        fVar50 = fVar28 * *(float *)(lVar20 + 0x44) + fVar27 * *(float *)(lVar20 + 0x50);
        fVar81 = fVar28 * *(float *)(lVar20 + 0x48) + fVar27 * *(float *)(lVar20 + 0x54) + 0.0;
        fVar59 = fVar27 * *(float *)(lVar20 + 0x40) - *(float *)(lVar20 + 0x4c) * fVar28;
        fVar68 = fVar27 * *(float *)(lVar20 + 0x44) - *(float *)(lVar20 + 0x50) * fVar28;
        fVar70 = fVar28 * *(float *)(lVar20 + 0x40) + fVar27 * *(float *)(lVar20 + 0x4c);
        fVar27 = (fVar27 * *(float *)(lVar20 + 0x48) - *(float *)(lVar20 + 0x54) * fVar28) + 0.0;
        *(float *)(lVar20 + 0x40) = fVar59 + fVar70 * 0.0;
        *(float *)(lVar20 + 0x44) = fVar68 + fVar50 * 0.0;
        *(float *)(lVar20 + 0x4c) = fVar59 * 0.0 + fVar70;
        *(float *)(lVar20 + 0x50) = fVar68 * 0.0 + fVar50;
        local_100 = (float)lVar14;
        *(float *)(lVar20 + 0x48) = local_100 + fVar27 + fVar81 * 0.0;
        *(float *)(lVar20 + 0x54) = fVar21 + fVar27 * 0.0 + fVar81;
        plVar18 = plVar12;
      } while (plVar19 != plVar12);
    }
  }
  FUN_7102ead260(param_1,(long)param_2,param_2,(long ****)param_4,param_5,param_6,param_7,param_8,
                 param_9);
  FUN_7102ead260(param_1,(long)param_2,param_2 + 0x10,(long ****)param_4,param_5,param_6,param_7,
                 param_8,param_9);
  return;
}

