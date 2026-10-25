// addr:      7101e4c680
// offset:    0x1e4c680
// name:      FUN_7101e4c680
// mangled:   
// signature: undefined __cdecl FUN_7101e4c680(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101e4c680(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  byte bVar2;
  ushort uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long lVar6;
  code *pcVar7;
  long lVar8;
  undefined2 *puVar9;
  uint uVar10;
  long *plVar11;
  long lVar12;
  uint *puVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  lVar12 = *(long *)(param_1 + 0x80);
  plVar11 = *(long **)(lVar12 + 0x220);
  if ((long *)plVar11[6] == (long *)0x0) {
    if (((char)plVar11[8] != '\0') && (plVar4 = (long *)*plVar11, (char)plVar4[1] != '\0')) {
      lVar6 = 0;
      uVar5 = 0;
      puVar13 = (uint *)((long)plVar11 + 0x74);
      do {
        if (3 < uVar5) goto LAB_7101e4ca24;
        lVar8 = plVar11[1];
        if (*(short *)(lVar8 + lVar6) != -1) {
          fVar15 = (float)NEON_ucvtf(*(undefined4 *)(lVar8 + lVar6 + 0x1d0));
          if (((float)puVar13[-3] < fVar15) && ((float)puVar13[-2] != fVar15)) {
            *puVar13 = 0;
            puVar13[-2] = (uint)fVar15;
            puVar13[-1] = puVar13[-3];
          }
          uVar10 = *puVar13;
          if (uVar10 < 0x3b) {
            uVar10 = uVar10 + 1;
            *puVar13 = uVar10;
          }
          if (1.0 <= (float)uVar10 / 59.0) {
            fVar15 = (float)puVar13[-2];
            puVar13[-3] = (uint)fVar15;
          }
          else {
            fVar16 = (float)puVar13[-2];
            fVar15 = (float)puVar13[-1];
            fVar14 = fVar15 + ((float)uVar10 / 59.0) * (fVar16 - fVar15);
            if (fVar14 <= fVar16) {
              fVar16 = fVar14;
            }
            if (fVar15 <= fVar14) {
              fVar15 = fVar16;
            }
            puVar13[-3] = (uint)fVar15;
          }
          uVar3 = *(ushort *)(lVar8 + lVar6);
          param_3 = (long ****)0xffff;
          if ((ulong)uVar3 != 0xffff) {
            if (uVar3 >> 4 < 0x177) {
              puVar9 = (undefined2 *)
                       (*(long *)(*DAT_7105329f98 + 0x30) + (ulong)uVar3 * 0x50 + 72000);
            }
            else {
              puVar9 = &DAT_710532a878;
              if (((ushort)(uVar3 + 0xe890) < 100) &&
                 (lVar8 = *(long *)(*DAT_7105329f98 + 0x30) + (ulong)(ushort)(uVar3 + 0xe890) * 0x50
                 , *(short *)(lVar8 + 0x88cc8) != -1)) {
                puVar9 = (undefined2 *)(lVar8 + 0x88cc0);
              }
            }
            param_3 = (long ****)(ulong)(ushort)puVar9[4];
          }
          param_4 = (byte ****)0x0;
          FUN_7101e4b7f0(fVar15,plVar4,(byte)uVar5,param_3,(byte ****)0x0,param_5,param_6,param_7,
                         param_8);
          plVar4 = (long *)*plVar11;
          param_2 = extraout_x1_00;
        }
        uVar5 = uVar5 + 1;
        lVar6 = lVar6 + 0x1d8;
        puVar13 = puVar13 + 4;
      } while (uVar5 < *(byte *)(plVar4 + 1));
    }
  }
  else {
    (**(code **)(*(long *)plVar11[6] + 0x30))();
    param_2 = extraout_x1;
  }
  plVar11 = (long *)(lVar12 + 0x1a8);
  FUN_7101e9bb40(plVar11,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  lVar6 = *(long *)(*(long *)(lVar12 + 0x1c8) + 0x40);
  if (((lVar6 == 0) || (plVar4 = *(long **)(*(long *)(lVar6 + 8) + 8), plVar4 == (long *)0x0)) ||
     (uVar5 = (**(code **)(*plVar4 + 0x138))(), (uVar5 & 1) != 0)) {
    if (*(char *)(lVar12 + 0x1d1) != '\0') {
      FUN_7103778300(0x3f800000,*(long *)(*(long *)(lVar12 + 0x1c8) + 8),0x71042f8a23);
      *(undefined1 *)(lVar12 + 0x1d1) = 0;
    }
    if (*(int *)(lVar12 + 0x1d4) != 0) {
      *(int *)(lVar12 + 0x1d4) = *(int *)(lVar12 + 0x1d4) + -1;
    }
  }
  if (*(long *)(lVar12 + 0x240) != 0) {
    bVar2 = *(byte *)(*(long *)(lVar12 + 0x238) + 0x10);
    uVar5 = FUN_7101e95cc0(plVar11,bVar2,lVar12 + 0x1f8,param_4,param_5,param_6,param_7,param_8);
    if ((uVar5 & 1) != 0) {
      if ((bVar2 < 4) && (lVar6 = *(long *)(*plVar11 + (ulong)bVar2 * 8 + 0x48), lVar6 != 0)) {
        FUN_7103778300(0x3f800000,*(long *)(lVar6 + 8),0x71044551e3);
      }
      plVar11 = *(long **)(lVar12 + 0x238);
      *(long *)(*plVar11 + 8) = plVar11[1];
      *(long *)plVar11[1] = *plVar11;
      *(long *)(lVar12 + 0x240) = *(long *)(lVar12 + 0x240) + -1;
      if (plVar11 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar11);
      }
    }
  }
  if (*(uint *)(lVar12 + 0x17c) < 0x13) {
    uVar10 = *(uint *)(lVar12 + (long)(int)*(uint *)(lVar12 + 0x17c) * 4 + 0x130);
    if (*(uint *)(lVar12 + 0x180) != uVar10) {
      *(uint *)(lVar12 + 0x188) = *(uint *)(lVar12 + 0x180);
      *(uint *)(lVar12 + 0x180) = uVar10;
      if (0xf < uVar10) goto LAB_7101e4ca24;
      lVar6 = lVar12 + (long)(int)uVar10 * 0x10;
      uVar1 = *(undefined8 *)(lVar6 + 0x38);
      *(undefined8 *)(lVar12 + 0x10) = *(undefined8 *)(lVar6 + 0x30);
      *(undefined8 *)(lVar12 + 0x18) = uVar1;
      pcVar7 = *(code **)(lVar12 + 0x20);
      uVar5 = *(ulong *)(lVar12 + 0x28) & 1;
      if (uVar5 != 0 || pcVar7 != (code *)0x0) {
        if (uVar5 != 0) {
          pcVar7 = *(code **)(pcVar7 + *(long *)(*(long *)(lVar12 + 8) +
                                                ((long)*(ulong *)(lVar12 + 0x28) >> 1)));
        }
        (*pcVar7)();
      }
      *(undefined4 *)(lVar12 + 0x184) = 0;
    }
    if (*(char *)(lVar12 + 0x18c) != '\0') {
      pcVar7 = *(code **)(lVar12 + 0x20);
      uVar5 = *(ulong *)(lVar12 + 0x28) & 1;
      if (uVar5 != 0 || pcVar7 != (code *)0x0) {
        if (uVar5 != 0) {
          pcVar7 = *(code **)(pcVar7 + *(long *)(*(long *)(lVar12 + 8) +
                                                ((long)*(ulong *)(lVar12 + 0x28) >> 1)));
        }
        (*pcVar7)();
      }
      *(undefined4 *)(lVar12 + 0x184) = 0;
      *(undefined1 *)(lVar12 + 0x18c) = 0;
    }
    if (*(long *)(lVar12 + 8) != 0) {
      pcVar7 = *(code **)(lVar12 + 0x10);
      uVar5 = *(ulong *)(lVar12 + 0x18) & 1;
      if (uVar5 != 0 || pcVar7 != (code *)0x0) {
        if (uVar5 != 0) {
          pcVar7 = *(code **)(pcVar7 + *(long *)(*(long *)(lVar12 + 8) +
                                                ((long)*(ulong *)(lVar12 + 0x18) >> 1)));
        }
        (*pcVar7)();
      }
    }
    *(int *)(lVar12 + 0x184) = *(int *)(lVar12 + 0x184) + 1;
    return;
  }
LAB_7101e4ca24:
                    /* WARNING: Subroutine does not return */
  abort();
}

