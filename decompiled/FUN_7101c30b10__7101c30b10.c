// addr:      7101c30b10
// offset:    0x1c30b10
// name:      FUN_7101c30b10
// mangled:   
// signature: undefined __cdecl FUN_7101c30b10(long param_1, undefined8 param_2, char * param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101c30b10(long param_1,undefined8 param_2,char *param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined ***pppuVar1;
  long *plVar2;
  ushort uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ushort *puVar7;
  ushort *puVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  long *plVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined **local_14d0;
  undefined8 local_14c8;
  uint local_1470 [2];
  ushort local_1468 [512];
  undefined **local_1068;
  ulong local_1060 [512];
  
  if (*(int *)(param_1 + 0x21b4) == 0) {
    if (*(short *)(*(long *)(DAT_7105329060 + 8) + 0x1b8) != 0) {
      nn::swkbd::SetInitialText
                ((ShowKeyboardArg *)**(undefined8 **)(param_1 + 0x2030),
                 (wchar16 *)(*(long *)(DAT_7105329060 + 8) + 0x1b8));
    }
    lVar14 = *(long *)(DAT_710532f850 + 8);
    if (*(char *)(lVar14 + 0xd8) == '\0') {
      plVar2 = (long *)((long *)*DAT_710593ba90)[1];
      for (plVar12 = *(long **)*DAT_710593ba90; plVar12 != plVar2; plVar12 = plVar12 + 1) {
        lVar15 = *plVar12;
        lVar17 = *(long *)(lVar15 + 0x600);
        memset((void *)(lVar17 + 0x198),0,0x264);
        *(undefined8 *)(lVar17 + 0x40c) = 0;
        *(undefined8 *)(lVar17 + 0x424) = 0;
        *(undefined4 *)(lVar17 + 0x480) = 0;
        uVar4 = uRam0000007107459008;
        uVar6 = _ConstantZero;
        *(undefined8 *)(lVar17 + 0x468) = uRam0000007107459008;
        *(undefined8 *)(lVar17 + 0x460) = uVar6;
        *(undefined8 *)(lVar17 + 0x438) = uVar4;
        *(undefined8 *)(lVar17 + 0x430) = uVar6;
        *(undefined8 *)(lVar17 + 0x448) = uVar4;
        *(undefined8 *)(lVar17 + 0x440) = uVar6;
        *(undefined8 *)(lVar17 + 0x4a0) = 0;
        *(undefined8 *)(lVar17 + 0x498) = 0;
        *(undefined8 *)(lVar17 + 0x458) = uVar4;
        *(undefined8 *)(lVar17 + 0x450) = uVar6;
        lVar17 = *(long *)(lVar15 + 0x608);
        lVar19 = *(long *)(lVar15 + 0x610);
        if (lVar17 != lVar19) {
          uVar9 = (lVar19 + -0x10) - lVar17;
          if (((uint)uVar9 >> 4 & 1) == 0) {
            lVar13 = *(long *)(lVar17 + 8);
            memset((void *)(lVar13 + 0x198),0,0x264);
            *(undefined8 *)(lVar13 + 0x40c) = 0;
            lVar17 = lVar17 + 0x10;
            *(undefined8 *)(lVar13 + 0x424) = 0;
            *(undefined4 *)(lVar13 + 0x480) = 0;
            *(undefined8 *)(lVar13 + 0x4a0) = 0;
            *(undefined8 *)(lVar13 + 0x498) = 0;
            *(undefined8 *)(lVar13 + 0x468) = uVar4;
            *(undefined8 *)(lVar13 + 0x460) = uVar6;
            *(undefined8 *)(lVar13 + 0x438) = uVar4;
            *(undefined8 *)(lVar13 + 0x430) = uVar6;
            *(undefined8 *)(lVar13 + 0x448) = uVar4;
            *(undefined8 *)(lVar13 + 0x440) = uVar6;
            *(undefined8 *)(lVar13 + 0x458) = uVar4;
            *(undefined8 *)(lVar13 + 0x450) = uVar6;
          }
          if (0xf < uVar9) {
            do {
              lVar13 = *(long *)(lVar17 + 8);
              memset((void *)(lVar13 + 0x198),0,0x264);
              *(undefined8 *)(lVar13 + 0x40c) = 0;
              *(undefined8 *)(lVar13 + 0x424) = 0;
              *(undefined4 *)(lVar13 + 0x480) = 0;
              *(undefined8 *)(lVar13 + 0x468) = uVar4;
              *(undefined8 *)(lVar13 + 0x460) = uVar6;
              *(undefined8 *)(lVar13 + 0x4a0) = 0;
              *(undefined8 *)(lVar13 + 0x498) = 0;
              *(undefined8 *)(lVar13 + 0x438) = uVar4;
              *(undefined8 *)(lVar13 + 0x430) = uVar6;
              *(undefined8 *)(lVar13 + 0x448) = uVar4;
              *(undefined8 *)(lVar13 + 0x440) = uVar6;
              *(undefined8 *)(lVar13 + 0x458) = uVar4;
              *(undefined8 *)(lVar13 + 0x450) = uVar6;
              lVar13 = *(long *)(lVar17 + 0x18);
              memset((void *)(lVar13 + 0x198),0,0x264);
              lVar17 = lVar17 + 0x20;
              *(undefined8 *)(lVar13 + 0x40c) = 0;
              *(undefined8 *)(lVar13 + 0x424) = 0;
              *(undefined4 *)(lVar13 + 0x480) = 0;
              *(undefined8 *)(lVar13 + 0x4a0) = 0;
              *(undefined8 *)(lVar13 + 0x468) = uVar4;
              *(undefined8 *)(lVar13 + 0x460) = uVar6;
              *(undefined8 *)(lVar13 + 0x438) = uVar4;
              *(undefined8 *)(lVar13 + 0x430) = uVar6;
              *(undefined8 *)(lVar13 + 0x498) = 0;
              *(undefined8 *)(lVar13 + 0x448) = uVar4;
              *(undefined8 *)(lVar13 + 0x440) = uVar6;
              *(undefined8 *)(lVar13 + 0x458) = uVar4;
              *(undefined8 *)(lVar13 + 0x450) = uVar6;
            } while (lVar19 != lVar17);
          }
        }
        puVar16 = *(undefined8 **)(lVar15 + 0x468);
        for (puVar18 = *(undefined8 **)(lVar15 + 0x460); puVar18 != puVar16; puVar18 = puVar18 + 1)
        {
          (**(code **)(*(long *)*puVar18 + 0x58))();
        }
      }
      **(uint **)(DAT_710593b988 + 8) = **(uint **)(DAT_710593b988 + 8) | 0x2000;
      plVar12 = *(long **)(*(long *)(DAT_710532f7d0 + 8) + 0x18);
      if ((plVar12 != (long *)0x0) &&
         (uVar9 = (**(code **)(*plVar12 + 0x48))(plVar12), (uVar9 & 1) != 0)) {
        (**(code **)(*plVar12 + 0x38))(plVar12,1,4);
      }
      *(undefined1 *)(lVar14 + 0xd8) = 1;
      *(undefined8 **)(lVar14 + 0xe0) = (undefined8 *)(param_1 + 0x2030);
      if (0x12 < *(uint *)(lVar14 + 0xc4)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar14 = lVar14 + (long)(int)*(uint *)(lVar14 + 0xc4) * 4;
      *(int *)(lVar14 + 0x78) = *(int *)(lVar14 + 0x78) + 1;
    }
  }
  else if (*(char *)(*(long *)(DAT_710532f850 + 8) + 0xd8) == '\0') {
    if (*(char *)((long)*(long **)(param_1 + 0x2030) + 0x11) != '\0') {
      local_1470[0] = 0;
      local_1470[1] = 0;
      puVar8 = local_1468;
      local_1468[0] = 0;
      FUN_7103392360(*(long **)(param_1 + 0x2030),local_1470);
      if (local_1470[1] == 0) {
        param_3 = "mel_tournament_title_default";
        param_4 = 0;
        FUN_71037ab600(&local_1068,0x800,(byte *)"mel_tournament_title_default",0);
        local_14d0 = (undefined **)0x0;
        FUN_7101c32670((uint *)&local_14d0,(ushort *)&local_1068);
        uVar9 = 0;
        while( true ) {
          uVar3 = *(ushort *)((long)&local_14c8 + uVar9 * 2);
          if (uVar3 == 0) break;
          local_1468[uVar9] = uVar3;
          if (0x1fe < (int)uVar9 + 1U) {
            uVar9 = (ulong)((int)uVar9 + 1);
            break;
          }
          uVar3 = *(ushort *)((long)&local_14c8 + uVar9 * 2 + 2);
          if (uVar3 == 0) {
            uVar9 = uVar9 + 1;
            break;
          }
          local_1468[uVar9 + 1] = uVar3;
          uVar9 = uVar9 + 2;
        }
        local_1468[uVar9 & 0xffffffff] = 0;
        uVar11 = (uint)local_1468[0];
        uVar10 = 0x811c9dc5;
        local_1470[1] = (int)uVar9;
        if (local_1468[0] != 0) {
          puVar7 = local_1468;
          do {
            puVar7 = puVar7 + 1;
            uVar10 = uVar10 * 0x89 ^ uVar11;
            uVar11 = (uint)*puVar7;
          } while (uVar11 != 0);
        }
        local_1470[0] = uVar10;
      }
      lVar14 = DAT_7105329060;
      local_1068 = (undefined **)0x0;
      FUN_7101c32670((uint *)&local_1068,puVar8);
      pppuVar1 = (undefined ***)(*(long *)(lVar14 + 8) + 0x1b0);
      if (pppuVar1 != &local_1068) {
        FUN_7101c32670((uint *)pppuVar1,(ushort *)local_1060);
      }
      FUN_7103776640(&local_14d0,**(long **)(param_1 + 0x21d0) + 8,(byte ****)"set_parts_title",
                     param_3,param_4,param_5,param_6,param_7,param_8);
      FUN_7103776910(&local_1068,(long)&local_14d0,(long ****)"set_txt_tnmt_title",param_3,param_4,
                     param_5,param_6,param_7,param_8);
      uVar6 = 1;
      puVar7 = puVar8;
      FUN_710377a280((long)&local_1068,(byte *)"mel_tournament_confirm_title",1);
      uVar9 = local_1060[0];
      local_1068 = &PTR_FUN_710523d9a8;
      local_1060[0] = 0;
      if (uVar9 != 0) {
        FUN_710392eb40(uVar9);
      }
      uVar9 = local_14c8;
      local_14d0 = &PTR_FUN_710523d988;
      local_14c8 = 0;
      if (uVar9 != 0) {
        uVar5 = *(ulong *)(uVar9 + 0x18);
        *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar9 + 0x18) = 0;
        if (uVar5 != 0) {
          FUN_710392eb40(uVar5);
        }
        FUN_710392eb40(uVar9);
      }
      FUN_7103776640(&local_14d0,**(long **)(param_1 + 0x21c8) + 8,(byte ****)"set_parts_header",
                     uVar6,puVar7,param_5,param_6,param_7,param_8);
      FUN_7103776910(&local_1068,(long)&local_14d0,(long ****)"set_txt_tnmt_title",uVar6,puVar7,
                     param_5,param_6,param_7,param_8);
      uVar6 = 1;
      puVar7 = puVar8;
      FUN_710377a280((long)&local_1068,(byte *)"mel_tournament_confirm_title",1);
      uVar9 = local_1060[0];
      local_1068 = &PTR_FUN_710523d9a8;
      local_1060[0] = 0;
      if (uVar9 != 0) {
        FUN_710392eb40(uVar9);
      }
      uVar9 = local_14c8;
      local_14d0 = &PTR_FUN_710523d988;
      local_14c8 = 0;
      if (uVar9 != 0) {
        uVar5 = *(ulong *)(uVar9 + 0x18);
        *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar9 + 0x18) = 0;
        if (uVar5 != 0) {
          FUN_710392eb40(uVar5);
        }
        FUN_710392eb40(uVar9);
      }
      FUN_7103776910(&local_1068,**(long **)(param_1 + 0x21d8) + 8,(long ****)"set_txt_tnmt_title",
                     uVar6,puVar7,param_5,param_6,param_7,param_8);
      uVar6 = 1;
      FUN_710377a280((long)&local_1068,(byte *)"mel_tournament_confirm_title",1);
      uVar9 = local_1060[0];
      local_1068 = &PTR_FUN_710523d9a8;
      local_1060[0] = 0;
      if (uVar9 != 0) {
        FUN_710392eb40(uVar9);
      }
      FUN_7103776910(&local_1068,**(long **)(param_1 + 0x21e0) + 8,(long ****)"set_txt_title",uVar6,
                     puVar8,param_5,param_6,param_7,param_8);
      FUN_710377a280((long)&local_1068,(byte *)"mel_tournament_confirm_title",1);
      uVar9 = local_1060[0];
      local_1068 = &PTR_FUN_710523d9a8;
      local_1060[0] = 0;
      if (uVar9 != 0) {
        FUN_710392eb40(uVar9);
      }
    }
    if (0 < *(int *)(param_1 + 0x21ac)) {
      *(int *)(param_1 + 0x21ac) = *(int *)(param_1 + 0x21ac) + -1;
    }
  }
  return;
}

