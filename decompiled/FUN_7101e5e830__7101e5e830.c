// addr:      7101e5e830
// offset:    0x1e5e830
// name:      FUN_7101e5e830
// mangled:   
// signature: undefined8 __cdecl FUN_7101e5e830(long param_1, byte param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Removing unreachable block (ram,0x007101e5ec28) */

undefined8
FUN_7101e5e830(long param_1,byte param_2,long *********param_3,byte ****param_4,long ****param_5,
              undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  ulong uVar2;
  byte bVar3;
  ushort uVar4;
  ulong uVar5;
  byte ****ppppbVar6;
  long lVar7;
  undefined2 *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  float fVar14;
  float fVar15;
  
  uVar5 = FUN_71032a3d90(*(long *)(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x208) + 8),
                         0x1530ff0e86);
  uVar12 = *(ulong *)(param_1 + 0x3b8);
  if ((((uVar5 & 0xff00000000000000) == 0x5200000000000000 && (uVar5 & 0xffffffffff) != 0) &&
      ((uVar12 & 0xff00000000000000) == 0x5200000000000000)) && ((uVar12 & 0xffffffffff) != 0)) {
    if (((uVar12 ^ uVar5) & 0xffffffffff) == 0) goto LAB_7101e5e920;
  }
  else if (((uVar12 & 0xffffffffff) != 0 && (uVar12 & 0xff00000000000000) == 0x5200000000000000) ==
           ((uVar5 & 0xff00000000000000) == 0x5200000000000000 && (uVar5 & 0xffffffffff) != 0))
  goto LAB_7101e5e920;
  lVar7 = *(long *)(**(long **)(param_1 + 0x3b0) + 8);
  if (((*(char *)(lVar7 + 0x388) != '\0') &&
      (uVar5 = (ulong)*(byte *)(*(long **)(param_1 + 0x3b0) + 1), uVar5 < 0xe)) &&
     (lVar7 = *(long *)(lVar7 + uVar5 * 8 + 8), lVar7 != 0 && param_2 < 4)) {
    uVar5 = (ulong)param_2;
    uVar4 = *(ushort *)(lVar7 + uVar5 * 0x1c8 + 8);
    ppppbVar6 = (byte ****)(ulong)uVar4;
    plVar1 = (long *)(param_1 + 0x208);
    if (uVar4 != 0xffff) {
      FUN_7101e957e0(plVar1,param_2,param_1 + 0x350,ppppbVar6,
                     (long ****)(ulong)*(byte *)(lVar7 + uVar5 * 0x1c8 + 10),param_6,param_7,param_8
                    );
      puVar13 = *(undefined8 **)(param_1 + 0x378);
      lVar7 = puVar13[2];
      if (lVar7 != 0) {
        bVar3 = *(byte *)(*(long *)(param_1 + 0x3b0) + 8);
        if (bVar3 < 0xe) {
          uVar4 = *(ushort *)(lVar7 + uVar5 * 0x1c8);
          if (uVar4 >> 4 < 0x177) {
            puVar8 = (undefined2 *)(*(long *)(*DAT_7105329f98 + 0x30) + (ulong)uVar4 * 0x50 + 72000)
            ;
          }
          else {
            puVar8 = &DAT_710532a878;
            if (((ushort)(uVar4 + 0xe890) < 100) &&
               (lVar9 = *(long *)(*DAT_7105329f98 + 0x30) + (ulong)(ushort)(uVar4 + 0xe890) * 0x50,
               *(short *)(lVar9 + 0x88cc8) != -1)) {
              puVar8 = (undefined2 *)(lVar9 + 0x88cc0);
            }
          }
          uVar12 = (ulong)(ushort)puVar8[(ulong)bVar3 + 0x10] * 60000000000;
        }
        else {
          uVar12 = 0;
        }
        if (param_2 < *(byte *)((long *)*puVar13 + 1)) {
          uVar10 = (uVar12 >> 0x20) * 0xe353f7cf + ((uVar12 & 0xfffff800) * 0xe353f7cf >> 0x20);
          uVar11 = *(ulong *)(lVar7 + uVar5 * 0x1c8 + 8);
          uVar2 = ((long)uVar11 >> 0x20) * 0xe353f7cf + ((uVar11 & 0xffffffff) * 0xe353f7cf >> 0x20)
          ;
          uVar12 = FUN_7101e9c280((float)((uVar12 >> 0x20) * 0x20c49ba5 + (uVar10 >> 0x20) +
                                          ((uVar12 & 0xfffff800) * 0x20c49ba5 +
                                           (uVar10 & 0xffffffff) >> 0x20) >> 7) /
                                  (float)(((long)(((long)uVar11 >> 0x20) * 0x20c49ba5 +
                                                  ((long)uVar2 >> 0x20) +
                                                 ((uVar11 & 0xffffffff) * 0x20c49ba5 +
                                                  (uVar2 & 0xffffffff) >> 0x20)) >> 7) -
                                         ((long)uVar11 >> 0x3f)),(long *)*puVar13,param_2,1);
          if ((uVar12 & 1) != 0) {
            FUN_7103778300(0x3f800000,*(long *)(puVar13[1] + uVar5 * 0x30 + 8),0x710438b28f);
          }
        }
        lVar7 = lVar7 + uVar5 * 0x1c8;
        uVar12 = *(ulong *)(lVar7 + 0x18);
        uVar10 = *(ulong *)(lVar7 + 8);
        if (uVar12 == uVar10) {
          fVar15 = 1.0;
        }
        else {
          uVar2 = ((long)uVar10 >> 0x20) * 0xe353f7cf + ((uVar10 & 0xffffffff) * 0xe353f7cf >> 0x20)
          ;
          lVar7 = ((long)(((long)uVar10 >> 0x20) * 0x20c49ba5 + ((long)uVar2 >> 0x20) +
                         ((uVar10 & 0xffffffff) * 0x20c49ba5 + (uVar2 & 0xffffffff) >> 0x20)) >> 7)
                  - ((long)uVar10 >> 0x3f);
          if (lVar7 < 1) {
            fVar15 = 0.0;
          }
          else {
            uVar10 = ((long)uVar12 >> 0x20) * 0xe353f7cf +
                     ((uVar12 & 0xffffffff) * 0xe353f7cf >> 0x20);
            fVar14 = (float)(((long)(((long)uVar12 >> 0x20) * 0x20c49ba5 + ((long)uVar10 >> 0x20) +
                                    ((uVar12 & 0xffffffff) * 0x20c49ba5 + (uVar10 & 0xffffffff) >>
                                    0x20)) >> 7) - ((long)uVar12 >> 0x3f)) / (float)lVar7;
            fVar15 = 0.0;
            if (0.0 <= fVar14) {
              fVar15 = fVar14;
            }
          }
        }
        *(float *)((long)puVar13 + uVar5 * 0x10 + 0xa4) = fVar15;
        *(float *)(puVar13 + uVar5 * 2 + 0x15) = fVar15;
        *(undefined4 *)(puVar13 + uVar5 * 2 + 0x16) = 0x3b;
      }
      return 1;
    }
    if ((*(char *)(param_1 + 0x212) != '\0') &&
       (lVar7 = *(long *)(*plVar1 + uVar5 * 8 + 0x48), lVar7 != 0)) {
      FUN_7103778300(0x3f800000,*(long *)(lVar7 + 8),0x710438d258);
      *(undefined1 *)(lVar7 + 0xb1) = 0;
    }
    FUN_7101e9b720(plVar1,param_2,param_3,ppppbVar6,param_5,param_6,param_7,param_8);
    lVar7 = param_1 + uVar5 * 4;
    if (*(ushort *)(lVar7 + 0x354) == 0xffff) {
      return 0;
    }
    FUN_710259c720(*(long *)(*DAT_7105329f98 + 0x20),*(byte *)(lVar7 + 0x356),
                   *(ushort *)(lVar7 + 0x354),0,param_5,param_6,param_7,param_8);
    *(undefined2 *)(lVar7 + 0x354) = 0xffff;
    *(undefined1 *)(lVar7 + 0x356) = 0;
    return 0;
  }
LAB_7101e5e920:
  FUN_7101e9b720((long *)(param_1 + 0x208),param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return 0;
}

