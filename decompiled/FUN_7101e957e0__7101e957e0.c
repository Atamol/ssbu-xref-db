// addr:      7101e957e0
// offset:    0x1e957e0
// name:      FUN_7101e957e0
// mangled:   
// signature: undefined __cdecl FUN_7101e957e0(long * param_1, byte param_2, long param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101e957e0(long *param_1,byte param_2,long param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined2 *puVar1;
  char cVar2;
  ushort uVar3;
  undefined1 uVar4;
  uint uVar5;
  char *pcVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  ushort *puVar13;
  ulong uVar14;
  long *plVar15;
  byte ****ppppbVar16;
  undefined2 *puVar17;
  long lVar18;
  long *plVar19;
  
  if (param_2 < 4) {
    uVar4 = SUB81(param_5,0);
    if (((uint)param_4 >> 4 & 0xfff) < 0x177) {
      puVar17 = (undefined2 *)
                (*(long *)(*DAT_7105329f98 + 0x30) + ((ulong)param_4 & 0xffff) * 0x50 + 72000);
    }
    else {
      uVar5 = (uint)param_4 - 6000;
      puVar17 = &DAT_710532a878;
      if (((uVar5 & 0xffff) < 100) &&
         (lVar7 = *(long *)(*DAT_7105329f98 + 0x30) + ((ulong)uVar5 & 0xffff) * 0x50,
         *(short *)(lVar7 + 0x88cc8) != -1)) {
        puVar17 = (undefined2 *)(lVar7 + 0x88cc0);
      }
    }
    uVar8 = (ulong)(short)puVar17[4];
    lVar7 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
    if (uVar8 != 0xffffffffffffffff) {
      uVar8 = (ulong)*(ushort *)(lVar7 + uVar8 * 2 + 0x60);
    }
    uVar11 = (*(long *)(lVar7 + 0x28) - *(long *)(lVar7 + 0x20) >> 6) * -0x3333333333333333;
    lVar18 = *(long *)(*param_1 + (ulong)param_2 * 8 + 0x48);
    puVar1 = (undefined2 *)(*(long *)(lVar7 + 0x20) + uVar8 * 0x140);
    if (uVar11 < uVar8 || uVar11 - uVar8 == 0) {
      puVar1 = &DAT_7105182b08;
    }
    if (lVar18 != 0) {
      cVar2 = *(char *)(puVar1 + 0x2f);
      uVar3 = puVar17[8];
      ppppbVar16 = (byte ****)(ulong)uVar3;
      if (cVar2 == '\x01') {
        pcVar6 = "rank_supporter";
      }
      else if (*(byte *)(puVar1 + 0x34) < 4) {
        pcVar6 = (&PTR_s_rank_novice_71050b2340)[(char)*(byte *)(puVar1 + 0x34)];
      }
      else {
        pcVar6 = "rank_non";
      }
      FUN_7103778300(0x3f800000,*(long *)(lVar18 + 8),(long)pcVar6);
      if (*(char *)((long)param_1 + 9) != '\0') {
        FUN_710377a280(lVar18 + 0x40,(byte *)"cam_gym_level",1);
        *(ushort *)(lVar18 + 0xb6) = uVar3;
        param_4 = ppppbVar16;
      }
      pcVar6 = "type_supporter_on";
      if (cVar2 != '\x01') {
        pcVar6 = "type_supporter_off";
      }
      FUN_7103778300(0x3f800000,*(long *)(lVar18 + 8),(long)pcVar6);
      *(undefined1 *)(lVar18 + 0x99) = uVar4;
      *(undefined1 *)(lVar18 + 0xb0) = 1;
      *(undefined1 *)(lVar18 + 0x98) = 1;
      if (*(char *)((long)param_1 + 10) != '\0') {
        plVar9 = *(long **)(lVar18 + 0x88);
        plVar15 = (long *)plVar9[1];
        if (plVar15 != (long *)0x0) {
          if ((char)plVar9[2] != '\0') {
            plVar19 = *(long **)(*plVar9 + 0x80);
            plVar9 = (long *)(*plVar9 + 0x88);
            if (plVar19 != plVar9) {
              do {
                while( true ) {
                  uVar8 = (**(code **)(*(long *)plVar19[0xd] + 0x148))();
                  if (((uVar8 & 1) != 0) &&
                     (uVar8 = (**(code **)(*plVar15 + 0x120))(plVar15,plVar19[0xd]),
                     (uVar8 & 1) != 0)) {
                    (**(code **)(*(long *)plVar19[0xd] + 0x178))();
                    (**(code **)(*(long *)plVar19[0xd] + 0x140))((long *)plVar19[0xd],0);
                  }
                  plVar10 = (long *)plVar19[1];
                  if ((long *)plVar19[1] == (long *)0x0) break;
                  do {
                    plVar19 = plVar10;
                    plVar10 = (long *)*plVar19;
                  } while ((long *)*plVar19 != (long *)0x0);
LAB_7101e95a78:
                  if (plVar19 == plVar9) goto LAB_7101e95a90;
                }
                plVar10 = plVar19 + 2;
                plVar12 = (long *)*plVar10;
                if ((long *)*plVar12 != plVar19) {
                  do {
                    lVar7 = *plVar10;
                    plVar10 = (long *)(lVar7 + 0x10);
                    plVar19 = (long *)*plVar10;
                  } while (*plVar19 != lVar7);
                  goto LAB_7101e95a78;
                }
                plVar19 = plVar12;
              } while (plVar12 != plVar9);
LAB_7101e95a90:
              plVar15 = *(long **)(*(long *)(lVar18 + 0x88) + 8);
            }
          }
          (**(code **)(*plVar15 + 0x188))(plVar15);
        }
        FUN_7103778300(0x3f800000,*(long *)(lVar18 + 8),0x710425fbe5);
        FUN_7103778300(0x3f800000,*(long *)(lVar18 + 8),0x710435bea3);
        FUN_7103778300(0x3f800000,*(long *)(lVar18 + 0x28),0x710425fbe5);
        *(undefined1 *)(lVar18 + 0xb3) = 0;
        if (*(char *)(lVar18 + 0xb4) != '\0') {
          FUN_7103778300(0x3f800000,*(long *)(lVar18 + 8),0x71043cfbc9);
        }
        *(undefined1 *)(lVar18 + 0xb4) = 0;
      }
    }
    uVar8 = (ulong)param_2;
    if (((param_2 < 4) && (*(char *)((long)param_1 + 10) != '\0')) &&
       (lVar7 = *(long *)(*param_1 + uVar8 * 8 + 0x48), lVar7 != 0)) {
      FUN_7103778300(0x3f800000,*(long *)(lVar7 + 8),0x710434aaac);
      *(undefined1 *)(lVar7 + 0xb1) = 1;
    }
    uVar3 = puVar17[4];
    lVar7 = *(long *)(*DAT_7105329f98 + 0x20);
    if (uVar3 != 0xffff) {
      puVar13 = *(ushort **)(lVar7 + 0x10);
      lVar18 = *(long *)(lVar7 + 0x18) - (long)puVar13;
      uVar11 = lVar18 >> 3;
      if (0 < (int)uVar11) {
        uVar14 = 0;
        do {
          if (uVar11 <= uVar14) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_out_of_range();
          }
          if (*puVar13 == uVar3) {
            if (-1 < (int)uVar14) goto LAB_7101e95bcc;
            break;
          }
          uVar14 = uVar14 + 1;
          puVar13 = puVar13 + 4;
        } while ((long)uVar14 < lVar18 * 0x20000000 >> 0x20);
      }
    }
    param_4 = (byte ****)0x1;
    FUN_710259c150(lVar7,0,uVar3,(byte ****)0x1,param_5,param_6,param_7,param_8);
LAB_7101e95bcc:
    lVar7 = param_3 + uVar8 * 4;
    *(ushort *)(lVar7 + 4) = uVar3;
    *(undefined1 *)(lVar7 + 6) = 0;
    if (((((param_2 < 4) && (lVar7 = *(long *)(*param_1 + uVar8 * 8 + 0x48), lVar7 != 0)) &&
         ((*(char *)(lVar7 + 0xb0) != '\0' &&
          ((uVar3 != 0xffff && (*(char *)(lVar7 + 0xb2) == '\0')))))) &&
        (uVar5 = FUN_710259d0a0(*(long *)(*DAT_7105329f98 + 0x20),0,uVar3,param_4,param_5,param_6,
                                param_7,param_8), (uVar5 & 1) != 0)) &&
       (lVar7 = *(long *)(*param_1 + uVar8 * 8 + 0x48), lVar7 != 0)) {
      FUN_71025ae1b0(uVar3,(undefined8 *)(lVar7 + 0x60),1,(byte ****)0x0,param_5,param_6,param_7,
                     param_8);
      FUN_71025ae1b0(uVar3,(undefined8 *)(lVar7 + 0x70),1,(byte ****)0x0,param_5,param_6,param_7,
                     param_8);
      FUN_71025ad150(uVar3,lVar7 + 0x10,1,1,0,0,(ulong)*(uint *)(*DAT_7105329fa0 + 0x77c),param_8);
      *(undefined1 *)(lVar7 + 0xb2) = 1;
    }
  }
  return;
}

