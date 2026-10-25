// addr:      7101f302b0
// offset:    0x1f302b0
// name:      FUN_7101f302b0
// mangled:   
// signature: undefined __cdecl FUN_7101f302b0(long param_1)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101f302b0(long param_1)

{
  short *psVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ushort *puVar6;
  uint uVar7;
  uint uVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  
  if (*(int *)(param_1 + 0xac) == 0) {
    if (*(short *)(param_1 + 0x148) != 0) {
      nn::swkbd::SetInitialText
                ((ShowKeyboardArg *)**(undefined8 **)(param_1 + 0x138),(wchar16 *)(param_1 + 0x148))
      ;
    }
    lVar11 = *(long *)(DAT_710532f850 + 8);
    if (*(char *)(lVar11 + 0xd8) == '\0') {
      plVar2 = (long *)((long *)*DAT_710593ba90)[1];
      for (plVar9 = *(long **)*DAT_710593ba90; plVar9 != plVar2; plVar9 = plVar9 + 1) {
        lVar12 = *plVar9;
        lVar14 = *(long *)(lVar12 + 0x600);
        memset((void *)(lVar14 + 0x198),0,0x264);
        *(undefined8 *)(lVar14 + 0x40c) = 0;
        *(undefined8 *)(lVar14 + 0x424) = 0;
        *(undefined4 *)(lVar14 + 0x480) = 0;
        uVar4 = uRam0000007107459008;
        uVar3 = _ConstantZero;
        *(undefined8 *)(lVar14 + 0x468) = uRam0000007107459008;
        *(undefined8 *)(lVar14 + 0x460) = uVar3;
        *(undefined8 *)(lVar14 + 0x438) = uVar4;
        *(undefined8 *)(lVar14 + 0x430) = uVar3;
        *(undefined8 *)(lVar14 + 0x448) = uVar4;
        *(undefined8 *)(lVar14 + 0x440) = uVar3;
        *(undefined8 *)(lVar14 + 0x4a0) = 0;
        *(undefined8 *)(lVar14 + 0x498) = 0;
        *(undefined8 *)(lVar14 + 0x458) = uVar4;
        *(undefined8 *)(lVar14 + 0x450) = uVar3;
        lVar14 = *(long *)(lVar12 + 0x608);
        lVar16 = *(long *)(lVar12 + 0x610);
        if (lVar14 != lVar16) {
          uVar5 = (lVar16 + -0x10) - lVar14;
          if (((uint)uVar5 >> 4 & 1) == 0) {
            lVar10 = *(long *)(lVar14 + 8);
            memset((void *)(lVar10 + 0x198),0,0x264);
            *(undefined8 *)(lVar10 + 0x40c) = 0;
            lVar14 = lVar14 + 0x10;
            *(undefined8 *)(lVar10 + 0x424) = 0;
            *(undefined4 *)(lVar10 + 0x480) = 0;
            *(undefined8 *)(lVar10 + 0x4a0) = 0;
            *(undefined8 *)(lVar10 + 0x498) = 0;
            *(undefined8 *)(lVar10 + 0x468) = uVar4;
            *(undefined8 *)(lVar10 + 0x460) = uVar3;
            *(undefined8 *)(lVar10 + 0x438) = uVar4;
            *(undefined8 *)(lVar10 + 0x430) = uVar3;
            *(undefined8 *)(lVar10 + 0x448) = uVar4;
            *(undefined8 *)(lVar10 + 0x440) = uVar3;
            *(undefined8 *)(lVar10 + 0x458) = uVar4;
            *(undefined8 *)(lVar10 + 0x450) = uVar3;
          }
          if (0xf < uVar5) {
            do {
              lVar10 = *(long *)(lVar14 + 8);
              memset((void *)(lVar10 + 0x198),0,0x264);
              *(undefined8 *)(lVar10 + 0x40c) = 0;
              *(undefined8 *)(lVar10 + 0x424) = 0;
              *(undefined4 *)(lVar10 + 0x480) = 0;
              *(undefined8 *)(lVar10 + 0x468) = uVar4;
              *(undefined8 *)(lVar10 + 0x460) = uVar3;
              *(undefined8 *)(lVar10 + 0x4a0) = 0;
              *(undefined8 *)(lVar10 + 0x498) = 0;
              *(undefined8 *)(lVar10 + 0x438) = uVar4;
              *(undefined8 *)(lVar10 + 0x430) = uVar3;
              *(undefined8 *)(lVar10 + 0x448) = uVar4;
              *(undefined8 *)(lVar10 + 0x440) = uVar3;
              *(undefined8 *)(lVar10 + 0x458) = uVar4;
              *(undefined8 *)(lVar10 + 0x450) = uVar3;
              lVar10 = *(long *)(lVar14 + 0x18);
              memset((void *)(lVar10 + 0x198),0,0x264);
              lVar14 = lVar14 + 0x20;
              *(undefined8 *)(lVar10 + 0x40c) = 0;
              *(undefined8 *)(lVar10 + 0x424) = 0;
              *(undefined4 *)(lVar10 + 0x480) = 0;
              *(undefined8 *)(lVar10 + 0x4a0) = 0;
              *(undefined8 *)(lVar10 + 0x468) = uVar4;
              *(undefined8 *)(lVar10 + 0x460) = uVar3;
              *(undefined8 *)(lVar10 + 0x438) = uVar4;
              *(undefined8 *)(lVar10 + 0x430) = uVar3;
              *(undefined8 *)(lVar10 + 0x498) = 0;
              *(undefined8 *)(lVar10 + 0x448) = uVar4;
              *(undefined8 *)(lVar10 + 0x440) = uVar3;
              *(undefined8 *)(lVar10 + 0x458) = uVar4;
              *(undefined8 *)(lVar10 + 0x450) = uVar3;
            } while (lVar16 != lVar14);
          }
        }
        puVar13 = *(undefined8 **)(lVar12 + 0x468);
        for (puVar15 = *(undefined8 **)(lVar12 + 0x460); puVar15 != puVar13; puVar15 = puVar15 + 1)
        {
          (**(code **)(*(long *)*puVar15 + 0x58))();
        }
      }
      **(uint **)(DAT_710593b988 + 8) = **(uint **)(DAT_710593b988 + 8) | 0x2000;
      plVar9 = *(long **)(*(long *)(DAT_710532f7d0 + 8) + 0x18);
      if ((plVar9 != (long *)0x0) &&
         (uVar5 = (**(code **)(*plVar9 + 0x48))(plVar9), (uVar5 & 1) != 0)) {
        (**(code **)(*plVar9 + 0x38))(plVar9,1,4);
      }
      *(undefined1 *)(lVar11 + 0xd8) = 1;
      *(undefined8 **)(lVar11 + 0xe0) = (undefined8 *)(param_1 + 0x138);
      if (0x12 < *(uint *)(lVar11 + 0xc4)) goto LAB_7101f30664;
      lVar11 = lVar11 + (long)(int)*(uint *)(lVar11 + 0xc4) * 4;
      *(int *)(lVar11 + 0x78) = *(int *)(lVar11 + 0x78) + 1;
    }
  }
  else if (*(char *)(*(long *)(DAT_710532f850 + 8) + 0xd8) == '\0') {
    if (*(char *)((long)*(long **)(param_1 + 0x138) + 0x11) != '\0') {
      FUN_7103392360(*(long **)(param_1 + 0x138),(uint *)(param_1 + 0x140));
      if (*(int *)(param_1 + 0x144) == 0) {
        FUN_71037ab600(param_1 + 0x148,0x200,(byte *)"mnu_replay_movie_edit_keyboard_title_sample",0
                      );
        for (uVar5 = 0; psVar1 = (short *)(param_1 + 0x148 + uVar5 * 2), *psVar1 != 0;
            uVar5 = uVar5 + 2) {
          if ((0x1fe < (int)uVar5 + 1U) || (psVar1[1] == 0)) {
            uVar5 = (ulong)((int)uVar5 + 1);
            break;
          }
        }
        *(undefined2 *)(param_1 + (uVar5 & 0xffffffff) * 2 + 0x148) = 0;
        uVar8 = (uint)*(ushort *)(param_1 + 0x148);
        uVar7 = 0x811c9dc5;
        *(int *)(param_1 + 0x144) = (int)uVar5;
        if (*(ushort *)(param_1 + 0x148) != 0) {
          puVar6 = (ushort *)(param_1 + 0x14a);
          do {
            uVar7 = uVar7 * 0x89 ^ uVar8;
            uVar8 = (uint)*puVar6;
            puVar6 = puVar6 + 1;
          } while (uVar8 != 0);
        }
        *(uint *)(param_1 + 0x140) = uVar7;
      }
      FUN_7103778950(*(long *)(*(long *)(param_1 + 200) + 8));
      FUN_710377a310(param_1 + 0xd0,1);
      FUN_710377a310(param_1 + 0xe0,1);
    }
    if (0x12 < *(uint *)(param_1 + 0xa4)) {
LAB_7101f30664:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0xa4) * 4 + 0x58) = 1;
  }
  return;
}

