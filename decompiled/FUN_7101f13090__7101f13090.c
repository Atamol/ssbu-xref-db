// addr:      7101f13090
// offset:    0x1f13090
// name:      FUN_7101f13090
// mangled:   
// signature: undefined __cdecl FUN_7101f13090(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101f13090(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  bool bVar2;
  undefined **ppuVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 extraout_x1;
  char *pcVar8;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  int iVar9;
  long *plVar10;
  code *pcVar11;
  long lVar12;
  undefined4 uVar13;
  long lVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  int *piVar18;
  undefined **local_1b0;
  undefined **local_1a8;
  long local_1a0;
  undefined8 local_198;
  undefined1 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  byte ***local_170;
  ulong local_168;
  undefined4 local_160;
  undefined2 local_15c;
  undefined1 local_15a;
  undefined1 *local_158;
  undefined4 local_150;
  long alStack_140 [4];
  long *local_120;
  long alStack_110 [4];
  long *local_f0;
  long alStack_e0 [4];
  long *local_c0;
  long alStack_b0 [4];
  long *local_90;
  long alStack_80 [4];
  long *local_60;
  undefined4 local_50;
  
  if (*(int *)(param_1 + 0x2ac) == 0) {
    *(undefined4 *)(param_1 + 0x328) = 4;
    FUN_7101f1cb60(param_1);
    puVar16 = *(undefined8 **)(param_1 + 0x360);
    *(undefined4 *)(param_1 + 0x530) = 0;
    puVar17 = (undefined8 *)puVar16[0x61];
    piVar18 = *(int **)(param_1 + 0x510);
    *(undefined1 *)((long)puVar17 + 0x34) = 1;
    local_170 = (byte ***)0x0;
    local_160 = 1;
    local_15c = 1;
    local_15a = 1;
    local_168 = 0x10000000101;
    local_158 = &DAT_41f0000000000000;
    local_150 = 0;
    local_120 = (long *)0x0;
    local_f0 = (long *)0x0;
    local_c0 = (long *)0x0;
    local_90 = (long *)0x0;
    local_60 = (long *)0x0;
    local_50 = 0;
    FUN_710337df20((long)&local_170);
    iVar9 = *piVar18;
    if (iVar9 == 2) {
      plVar5 = puVar17 + 7;
      param_4 = &local_170;
      FUN_7103770b30(plVar5,puVar17,(long ****)"selector_tlmenu_tellop",param_4,param_5,param_6,
                     param_7,param_8);
      FUN_71037717d0(plVar5,0xb,"set_tlmenu_tellop_00",param_4,param_5,param_6,param_7,param_8);
      FUN_71037717d0(plVar5,0xc,"set_tlmenu_tellop_01",param_4,param_5,param_6,param_7,param_8);
      FUN_71037717d0(plVar5,0xe,"set_tlmenu_tellop_02",param_4,param_5,param_6,param_7,param_8);
      param_3 = (long ****)0x1;
      FUN_7103771a80(plVar5,0xc,1);
      lVar12 = puVar17[1];
      pcVar8 = "tlmenu_tellop";
LAB_7101f133ec:
      FUN_7103778300(0x3f800000,lVar12,(long)pcVar8);
    }
    else {
      if (iVar9 == 1) {
        plVar5 = puVar17 + 7;
        param_4 = &local_170;
        FUN_7103770b30(plVar5,puVar17,(long ****)"selector_tlmenu_sound",param_4,param_5,param_6,
                       param_7,param_8);
        FUN_71037717d0(plVar5,7,"set_tlmenu_sound_00",param_4,param_5,param_6,param_7,param_8);
        FUN_71037717d0(plVar5,8,"set_tlmenu_sound_01",param_4,param_5,param_6,param_7,param_8);
        FUN_71037717d0(plVar5,9,"set_tlmenu_sound_02",param_4,param_5,param_6,param_7,param_8);
        FUN_71037717d0(plVar5,10,"set_tlmenu_sound_03",param_4,param_5,param_6,param_7,param_8);
        param_3 = (long ****)0x1;
        FUN_7103771a80(plVar5,8,1);
        lVar12 = puVar17[1];
        pcVar8 = "tlmenu_sound";
        goto LAB_7101f133ec;
      }
      if (iVar9 == 0) {
        plVar5 = puVar17 + 7;
        if (piVar18[1] != 1) {
          param_4 = &local_170;
          FUN_7103770b30(plVar5,puVar17,(long ****)"selector_tlmenu_image",param_4,param_5,param_6,
                         param_7,param_8);
          FUN_71037717d0(plVar5,2,"set_tlmenu_image_00",param_4,param_5,param_6,param_7,param_8);
          FUN_71037717d0(plVar5,3,"set_tlmenu_image_01",param_4,param_5,param_6,param_7,param_8);
          FUN_71037717d0(plVar5,4,"set_tlmenu_image_02",param_4,param_5,param_6,param_7,param_8);
          FUN_71037717d0(plVar5,5,"set_tlmenu_image_03",param_4,param_5,param_6,param_7,param_8);
          param_3 = (long ****)0x1;
          FUN_7103771a80(plVar5,4,1);
          lVar12 = puVar17[1];
          pcVar8 = "tlmenu_image";
          goto LAB_7101f133ec;
        }
        param_4 = &local_170;
        FUN_7103770b30(plVar5,puVar17,(long ****)"selector_tlmenu_movie",param_4,param_5,param_6,
                       param_7,param_8);
        FUN_71037717d0(plVar5,2,"set_tlmenu_movie_00",param_4,param_5,param_6,param_7,param_8);
        FUN_71037717d0(plVar5,3,"set_tlmenu_movie_01",param_4,param_5,param_6,param_7,param_8);
        FUN_71037717d0(plVar5,4,"set_tlmenu_movie_02",param_4,param_5,param_6,param_7,param_8);
        FUN_71037717d0(plVar5,5,"set_tlmenu_movie_03",param_4,param_5,param_6,param_7,param_8);
        FUN_71037717d0(plVar5,6,"set_tlmenu_movie_04",param_4,param_5,param_6,param_7,param_8);
        param_3 = (long ****)0x1;
        FUN_7103771a80(plVar5,4,1);
        FUN_7103778300(0x3f800000,puVar17[1],0x71042708fe);
        lVar12 = puVar17[7];
        iVar9 = piVar18[0x30];
        lVar15 = *(long *)(lVar12 + 0x1b8);
        if (lVar15 == 0) {
LAB_7101f13888:
          FUN_7103776290(&local_1b0,extraout_x1,param_3,param_4,param_5,param_6,param_7,param_8);
        }
        else {
          lVar14 = lVar12 + 0x1b8;
          do {
            if (5 < *(int *)(lVar15 + 0x20)) {
              lVar14 = lVar15;
            }
            lVar15 = *(long *)(lVar15 + (ulong)(*(int *)(lVar15 + 0x20) < 6) * 8);
          } while (lVar15 != 0);
          if (((lVar14 == lVar12 + 0x1b8) || (6 < *(int *)(lVar14 + 0x20))) ||
             (*(long *)(lVar14 + 0x28) == 0)) goto LAB_7101f13888;
          FUN_7103776640(&local_1b0,lVar12 + 0x160,*(byte *****)(*(long *)(lVar14 + 0x28) + 0x88),
                         param_3,param_4,param_5,param_6,param_7,param_8);
        }
        ppuVar3 = local_1a8;
        pcVar8 = "state_enable";
        if ((char)iVar9 != '\0') {
          pcVar8 = "state_disable";
        }
        FUN_7103778300(0x3f800000,(long)local_1a8,(long)pcVar8);
        local_1b0 = &PTR_FUN_710523d988;
        local_1a8 = (undefined **)0x0;
        if (ppuVar3 != (undefined **)0x0) {
          puVar7 = ppuVar3[3];
          ppuVar3[2] = (undefined *)&PTR_FUN_710523d9a8;
          ppuVar3[3] = (undefined *)0x0;
          if (puVar7 != (undefined *)0x0) {
            FUN_710392eb40((ulong)puVar7);
          }
          FUN_710392eb40((ulong)ppuVar3);
        }
      }
    }
    uVar13 = *(undefined4 *)(puVar17 + 6);
    (**(code **)(*(long *)puVar17[7] + 0x48))((long *)puVar17[7],uVar13);
    plVar5 = (long *)puVar17[7];
    plVar10 = (long *)plVar5[0x41];
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x48))(plVar10,uVar13);
      plVar5 = (long *)puVar17[7];
    }
    (**(code **)(*plVar5 + 0x60))(plVar5,1);
    (**(code **)(*(long *)puVar17[7] + 0x70))((long *)puVar17[7],1);
    if (*(char *)(*(long *)(DAT_710532f8d0 + 8) + 0x191) == '\0') {
      param_3 = (long ****)&DAT_00000004;
      uVar6 = FUN_7103313f20(*(long *)(DAT_710532f8d0 + 8),0x19b197f89a,(long ****)&DAT_00000004,
                             param_4,param_5,param_6,param_7,param_8);
      if ((uVar6 & 1) == 0) goto LAB_7101f134e4;
      FUN_71024076d0((undefined4 *)&local_1b0,0x19b197f89a);
      if (((local_1a0 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_198 == DAT_7106dd53ac)) {
        piVar18 = (int *)(local_1a0 + 0x38);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar18,0x10);
          if (bVar2) {
            *piVar18 = *piVar18 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
    }
    else {
LAB_7101f134e4:
      local_198 = 0x87650000000000;
      local_188 = 0xffffffffffffffff;
      uStack_180 = 0;
      local_1b0 = (undefined **)((ulong)local_1b0 & 0xffffffff00000000);
      local_178 = 0;
    }
    local_1a8 = &PTR_FUN_7104f73d50;
    local_1a0 = 0;
    local_190 = 0;
    FUN_7103778300(0x3f800000,puVar17[1],0x7104421055);
    if (alStack_80 == local_60) {
      pcVar11 = *(code **)(*local_60 + 0x20);
LAB_7101f13558:
      (*pcVar11)();
      param_2 = extraout_x1_01;
    }
    else {
      param_2 = extraout_x1_00;
      if (local_60 != (long *)0x0) {
        pcVar11 = *(code **)(*local_60 + 0x28);
        goto LAB_7101f13558;
      }
    }
    if (alStack_b0 == local_90) {
      pcVar11 = *(code **)(*local_90 + 0x20);
LAB_7101f13588:
      (*pcVar11)();
      param_2 = extraout_x1_02;
    }
    else if (local_90 != (long *)0x0) {
      pcVar11 = *(code **)(*local_90 + 0x28);
      goto LAB_7101f13588;
    }
    if (alStack_e0 == local_c0) {
      pcVar11 = *(code **)(*local_c0 + 0x20);
LAB_7101f135b8:
      (*pcVar11)();
      param_2 = extraout_x1_03;
    }
    else if (local_c0 != (long *)0x0) {
      pcVar11 = *(code **)(*local_c0 + 0x28);
      goto LAB_7101f135b8;
    }
    if (alStack_110 == local_f0) {
      pcVar11 = *(code **)(*local_f0 + 0x20);
LAB_7101f135e8:
      (*pcVar11)();
      param_2 = extraout_x1_04;
    }
    else if (local_f0 != (long *)0x0) {
      pcVar11 = *(code **)(*local_f0 + 0x28);
      goto LAB_7101f135e8;
    }
    if (alStack_140 == local_120) {
      pcVar11 = *(code **)(*local_120 + 0x20);
LAB_7101f13618:
      (*pcVar11)();
      param_2 = extraout_x1_05;
    }
    else if (local_120 != (long *)0x0) {
      pcVar11 = *(code **)(*local_120 + 0x28);
      goto LAB_7101f13618;
    }
    lVar15 = **(long **)*puVar16;
    lVar12 = *(long *)(lVar15 + 0x608);
    if ((ulong)(*(long *)(lVar15 + 0x610) - lVar12 >> 4) < 2) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    *(undefined1 *)(*(long *)(lVar12 + 0x18) + 0x4aa) = 1;
    iVar9 = *(int *)(param_1 + 0x530);
  }
  else {
    iVar9 = *(int *)(param_1 + 0x530);
  }
  if (iVar9 == 0) {
    piVar18 = (int *)(param_1 + 0x530);
    lVar12 = *(long *)(*(long *)(*(long *)(param_1 + 0x360) + 0x308) + 0x38);
    if (lVar12 == 0) {
      return;
    }
    if (*(int *)(lVar12 + 0x25c) == -1) {
      if (*(char *)(lVar12 + 0x280) == '\0') {
        return;
      }
      iVar9 = 1;
      *piVar18 = 1;
    }
    else {
      iVar9 = *(int *)(lVar12 + 0x254);
      *piVar18 = iVar9;
      if (iVar9 == 6) {
        cVar1 = *(char *)(*(long *)(param_1 + 0x510) + 0xc0);
        lVar12 = *(long *)(*(long *)(*(long *)(param_1 + 0x360) + 0x308) + 0x38);
        lVar15 = *(long *)(lVar12 + 0x1b8);
        if (lVar15 == 0) {
LAB_7101f13700:
          FUN_7103776290(&local_170,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
        }
        else {
          lVar14 = lVar12 + 0x1b8;
          do {
            if (5 < *(int *)(lVar15 + 0x20)) {
              lVar14 = lVar15;
            }
            lVar15 = *(long *)(lVar15 + (ulong)(*(int *)(lVar15 + 0x20) < 6) * 8);
          } while (lVar15 != 0);
          if (((lVar14 == lVar12 + 0x1b8) || (6 < *(int *)(lVar14 + 0x20))) ||
             (*(long *)(lVar14 + 0x28) == 0)) goto LAB_7101f13700;
          FUN_7103776640(&local_170,lVar12 + 0x160,*(byte *****)(*(long *)(lVar14 + 0x28) + 0x88),
                         param_3,param_4,param_5,param_6,param_7,param_8);
        }
        uVar6 = local_168;
        pcVar8 = "state_disable";
        if (cVar1 != '\0') {
          pcVar8 = "state_enable";
        }
        FUN_7103778300(0x3f800000,local_168,(long)pcVar8);
        local_170 = (byte ***)&PTR_FUN_710523d988;
        local_168 = 0;
        if (uVar6 != 0) {
          uVar4 = *(ulong *)(uVar6 + 0x18);
          *(undefined ***)(uVar6 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar6 + 0x18) = 0;
          if (uVar4 != 0) {
            FUN_710392eb40(uVar4);
          }
          FUN_710392eb40(uVar6);
        }
        iVar9 = *piVar18;
      }
      if (iVar9 == 0) {
        return;
      }
    }
  }
  puVar17 = *(undefined8 **)(param_1 + 0x360);
  lVar12 = puVar17[0x61];
  if (*(char *)(lVar12 + 0x34) == '\0') {
    plVar5 = *(long **)(*(long *)(lVar12 + 0x48) + 8);
    if (plVar5 != (long *)0x0) {
      uVar6 = (**(code **)(*plVar5 + 0x138))();
      if ((uVar6 & 1) == 0) {
        return;
      }
      iVar9 = *(int *)(param_1 + 0x530);
    }
    switch(iVar9) {
    case 2:
    case 7:
    case 0xb:
      if (0x12 < *(uint *)(param_1 + 0x2a4)) goto LAB_7101f13a14;
      lVar12 = param_1 + (long)(int)*(uint *)(param_1 + 0x2a4) * 4;
      uVar13 = 10;
      break;
    case 3:
      if (0x12 < *(uint *)(param_1 + 0x2a4)) goto LAB_7101f13a14;
      lVar12 = param_1 + (long)(int)*(uint *)(param_1 + 0x2a4) * 4;
      uVar13 = 0xb;
      break;
    case 4:
      if (0x12 < *(uint *)(param_1 + 0x2a4)) goto LAB_7101f13a14;
      lVar12 = param_1 + (long)(int)*(uint *)(param_1 + 0x2a4) * 4;
      uVar13 = 8;
      break;
    case 5:
      if (0x12 < *(uint *)(param_1 + 0x2a4)) goto LAB_7101f13a14;
      lVar12 = param_1 + (long)(int)*(uint *)(param_1 + 0x2a4) * 4;
      uVar13 = 0xe;
      break;
    case 6:
      *(byte *)(*(long *)(param_1 + 0x510) + 0xc0) =
           *(byte *)(*(long *)(param_1 + 0x510) + 0xc0) ^ 1;
    default:
      if (0x12 < *(uint *)(param_1 + 0x2a4)) {
LAB_7101f13a14:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar12 = param_1 + (long)(int)*(uint *)(param_1 + 0x2a4) * 4;
      uVar13 = 4;
      break;
    case 8:
      if (0x12 < *(uint *)(param_1 + 0x2a4)) goto LAB_7101f13a14;
      lVar12 = param_1 + (long)(int)*(uint *)(param_1 + 0x2a4) * 4;
      uVar13 = 0x11;
      break;
    case 9:
      if (0x12 < *(uint *)(param_1 + 0x2a4)) goto LAB_7101f13a14;
      lVar12 = param_1 + (long)(int)*(uint *)(param_1 + 0x2a4) * 4;
      uVar13 = 0x13;
      break;
    case 10:
      if (0x12 < *(uint *)(param_1 + 0x2a4)) goto LAB_7101f13a14;
      lVar12 = param_1 + (long)(int)*(uint *)(param_1 + 0x2a4) * 4;
      uVar13 = 0x14;
      break;
    case 0xc:
      if (0x12 < *(uint *)(param_1 + 0x2a4)) goto LAB_7101f13a14;
      lVar12 = param_1 + (long)(int)*(uint *)(param_1 + 0x2a4) * 4;
      uVar13 = 0x15;
      break;
    case 0xd:
      if (0x12 < *(uint *)(param_1 + 0x2a4)) goto LAB_7101f13a14;
      lVar12 = param_1 + (long)(int)*(uint *)(param_1 + 0x2a4) * 4;
      uVar13 = 0xc;
      break;
    case 0xe:
      if (0x12 < *(uint *)(param_1 + 0x2a4)) goto LAB_7101f13a14;
      lVar12 = param_1 + (long)(int)*(uint *)(param_1 + 0x2a4) * 4;
      uVar13 = 0xd;
    }
    *(undefined4 *)(lVar12 + 600) = uVar13;
  }
  else {
    *(undefined1 *)(lVar12 + 0x34) = 0;
    pcVar8 = "";
    if ((*(long *)(lVar12 + 0x38) != 0) &&
       (pcVar8 = "_sound", *(int *)(*(long *)(lVar12 + 0x38) + 0x254) != 6)) {
      pcVar8 = "";
    }
    FUN_71037780e0(&local_170,lVar12,(long ****)"out%s",pcVar8,param_4,param_5,param_6,param_7,
                   param_8);
    uVar6 = local_168;
    if ((byte ****)(lVar12 + 0x40) != &local_170) {
      local_168 = 0;
      uVar4 = *(ulong *)(lVar12 + 0x48);
      *(ulong *)(lVar12 + 0x48) = uVar6;
      if (uVar4 != 0) {
        FUN_710392eb40(uVar4);
      }
    }
    uVar6 = local_168;
    local_170 = (byte ***)&PTR_FUN_710523d9e8;
    local_168 = 0;
    if (uVar6 != 0) {
      FUN_710392eb40(uVar6);
    }
    FUN_710377aee0(0x3f800000,lVar12 + 0x40);
    lVar12 = **(long **)*puVar17;
    lVar15 = *(long *)(lVar12 + 0x608);
    if ((ulong)(*(long *)(lVar12 + 0x610) - lVar15 >> 4) < 2) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    *(undefined1 *)(*(long *)(lVar15 + 0x18) + 0x4aa) = 0;
  }
  return;
}

