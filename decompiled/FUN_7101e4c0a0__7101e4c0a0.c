// addr:      7101e4c0a0
// offset:    0x1e4c0a0
// name:      FUN_7101e4c0a0
// mangled:   
// signature: undefined8 __cdecl FUN_7101e4c0a0(long param_1, byte param_2, long * * * * * * * * * param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


undefined8
FUN_7101e4c0a0(long param_1,byte param_2,long *********param_3,undefined8 param_4,long ****param_5,
              undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  byte ****ppppbVar4;
  long ****pppplVar5;
  long *plVar6;
  long lVar7;
  undefined2 *puVar8;
  ulong uVar9;
  ushort *puVar10;
  long lVar11;
  ushort uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  
  plVar6 = *(long **)(**(long **)(param_1 + 0x250) + 8);
  if (((char)plVar6[0x71] != '\0') && (lVar7 = *plVar6, lVar7 != 0 && param_2 < 4)) {
    uVar14 = (ulong)param_2;
    puVar10 = (ushort *)(lVar7 + uVar14 * 0x1d8);
    if (puVar10 != (ushort *)0x0) {
      uVar1 = *puVar10;
      ppppbVar4 = (byte ****)(ulong)uVar1;
      plVar6 = (long *)(param_1 + 0x1a8);
      if (uVar1 != 0xffff) {
        pppplVar5 = (long ****)(ulong)*(byte *)(lVar7 + uVar14 * 0x1d8 + 2);
        FUN_7101e957e0(plVar6,param_2,param_1 + 0x1f8,ppppbVar4,pppplVar5,param_6,param_7,param_8);
        puVar15 = *(undefined8 **)(param_1 + 0x220);
        lVar7 = puVar15[1];
        puVar10 = (ushort *)(lVar7 + uVar14 * 0x1d8);
        uVar1 = *puVar10;
        if (uVar1 >> 4 < 0x177) {
          puVar8 = (undefined2 *)(*(long *)(*DAT_7105329f98 + 0x30) + (ulong)uVar1 * 0x50 + 72000);
        }
        else {
          puVar8 = &DAT_710532a878;
          if (((ushort)(uVar1 + 0xe890) < 100) &&
             (lVar11 = *(long *)(*DAT_7105329f98 + 0x30) + (ulong)(ushort)(uVar1 + 0xe890) * 0x50,
             *(short *)(lVar11 + 0x88cc8) != -1)) {
            puVar8 = (undefined2 *)(lVar11 + 0x88cc0);
          }
        }
        fVar17 = (float)NEON_ucvtf(*(undefined4 *)(puVar8 + 6));
        uVar1 = puVar8[4];
        plVar6 = (long *)*puVar15;
        uVar2 = 1;
        if ((uVar1 != 0xffff) && ((short)uVar1 < 2000)) {
          lVar11 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
          uVar12 = *(ushort *)(lVar11 + (long)(short)uVar1 * 2 + 0x60);
          uVar9 = (ulong)uVar12;
          uVar13 = (*(long *)(lVar11 + 0x28) - *(long *)(lVar11 + 0x20) >> 6) * -0x3333333333333333;
          if ((uint)uVar12 < (uint)uVar13) {
            puVar8 = (undefined2 *)(*(long *)(lVar11 + 0x20) + uVar9 * 0x140);
            if (uVar13 < uVar9 || uVar13 - uVar9 == 0) {
              puVar8 = &DAT_7105182b08;
            }
            uVar2 = FUN_71025c9ac0(*(float *)(puVar8 + 0x3a),(int)fVar17,*(uint *)(puVar8 + 0x38));
            if (0x61 < uVar2) {
              uVar2 = 0x62;
            }
          }
          else {
            uVar2 = 1;
          }
        }
        uVar3 = FUN_71025c9e50(uVar1,uVar2);
        fVar18 = (float)uVar3;
        uVar3 = FUN_71025c9e50(uVar1,uVar2 + 1);
        if (((fVar18 < (float)uVar3) && (param_2 < *(byte *)(plVar6 + 1))) &&
           (uVar9 = FUN_7101e9c280((fVar17 - fVar18) / ((float)uVar3 - fVar18),plVar6,param_2,
                                   (uint)(0x61 < uVar2)), (uVar9 & 1) != 0)) {
          uVar1 = *puVar10;
          uVar12 = 0xffff;
          if ((ulong)uVar1 != 0xffff) {
            if (uVar1 >> 4 < 0x177) {
              puVar8 = (undefined2 *)
                       (*(long *)(*DAT_7105329f98 + 0x30) + (ulong)uVar1 * 0x50 + 72000);
            }
            else {
              puVar8 = &DAT_710532a878;
              if (((ushort)(uVar1 + 0xe890) < 100) &&
                 (lVar11 = *(long *)(*DAT_7105329f98 + 0x30) +
                           (ulong)(ushort)(uVar1 + 0xe890) * 0x50,
                 *(short *)(lVar11 + 0x88cc8) != -1)) {
                puVar8 = (undefined2 *)(lVar11 + 0x88cc0);
              }
            }
            uVar12 = puVar8[4];
          }
          if ((uVar12 != 0xffff) && ((short)uVar12 < 2000)) {
            lVar11 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
            uVar1 = *(ushort *)(lVar11 + ((long)((ulong)uVar12 << 0x30) >> 0x2f) + 0x60);
            uVar2 = (int)((ulong)(*(long *)(lVar11 + 0x28) - *(long *)(lVar11 + 0x20)) >> 6) *
                    -0x33333333;
            if ((uVar1 < uVar2) &&
               (((uVar1 = *(ushort *)(lVar11 + (ulong)uVar1 * 2 + 0x1000), uVar1 < uVar2 &&
                 (*(short *)(*(long *)(lVar11 + 0x20) + (ulong)uVar1 * 0x140) != -1)) &&
                (lVar11 = *(long *)(*(long *)*puVar15 + uVar14 * 8 + 0x48), lVar11 != 0)))) {
              if (*(char *)(lVar11 + 0xb4) == '\0') {
                FUN_7103778300(0x3f800000,*(long *)(lVar11 + 8),0x71042f8a52);
                uVar9 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x1d0d1b1eaf,(long ****)0xa,
                                       ppppbVar4,pppplVar5,param_6,param_7,param_8);
                if ((uVar9 & 1) != 0) {
                  FUN_7103314c70(*(long *)(DAT_710532f8d0 + 8),0x1d0d1b1eaf,(long ****)&DAT_00000050
                                 ,ppppbVar4,pppplVar5,param_6,param_7,param_8);
                }
              }
              *(undefined1 *)(lVar11 + 0xb4) = 1;
            }
          }
        }
        uVar16 = NEON_ucvtf(*(undefined4 *)(lVar7 + uVar14 * 0x1d8 + 0x1d0));
        *(undefined4 *)(puVar15 + uVar14 * 2 + 0xd) = uVar16;
        *(undefined4 *)((long)puVar15 + uVar14 * 0x10 + 0x6c) = uVar16;
        *(undefined4 *)((long)puVar15 + uVar14 * 0x10 + 0x74) = 0x3b;
        return 1;
      }
      if ((*(char *)(param_1 + 0x1b2) != '\0') &&
         (lVar7 = *(long *)(*plVar6 + uVar14 * 8 + 0x48), lVar7 != 0)) {
        FUN_7103778300(0x3f800000,*(long *)(lVar7 + 8),0x710438d258);
        *(undefined1 *)(lVar7 + 0xb1) = 0;
      }
      FUN_7101e9b720(plVar6,param_2,param_3,ppppbVar4,param_5,param_6,param_7,param_8);
      lVar7 = param_1 + uVar14 * 4;
      if (*(ushort *)(lVar7 + 0x1fc) != 0xffff) {
        FUN_710259c720(*(long *)(*DAT_7105329f98 + 0x20),*(byte *)(lVar7 + 0x1fe),
                       *(ushort *)(lVar7 + 0x1fc),0,param_5,param_6,param_7,param_8);
        *(undefined2 *)(lVar7 + 0x1fc) = 0xffff;
        *(undefined1 *)(lVar7 + 0x1fe) = 0;
        return 0;
      }
    }
  }
  return 0;
}

