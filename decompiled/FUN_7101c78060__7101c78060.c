// addr:      7101c78060
// offset:    0x1c78060
// name:      FUN_7101c78060
// mangled:   
// signature: undefined __cdecl FUN_7101c78060(undefined8 * param_1, undefined8 param_2, long * * * * * * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101c78060(undefined8 *param_1,undefined8 param_2,long *********param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  uint uVar2;
  char *pcVar3;
  undefined8 *puVar4;
  bool bVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  char cVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  long lVar14;
  ulong uVar15;
  long *plVar16;
  ulong uVar17;
  byte bVar18;
  char *pcVar19;
  byte *pbVar20;
  undefined **local_f8;
  ulong local_f0;
  undefined **local_e8;
  ulong local_e0 [8];
  undefined **local_a0;
  undefined8 *local_98;
  undefined **local_90;
  undefined8 *local_88;
  long ********local_80 [2];
  undefined4 local_64;
  
  uVar17 = 0;
  bVar18 = 0;
  plVar1 = param_1 + 0x19;
  *(undefined1 *)((long)param_1 + 0xe7) = 0;
  do {
    lVar14 = param_1[1];
    if (*(char *)(lVar14 + uVar17 * 0x1e8 + 0x1e4) != '\0') {
      if (*(char *)((long)param_1 + 0xe7) == '\0') {
        lVar9 = lVar14 + uVar17 * 0x1e8;
        *(bool *)((long)param_1 + 0xe7) =
             *(char *)(lVar9 + 0x1e2) != '\0' && *(char *)(lVar9 + 0x1e3) != '\0';
      }
      uVar2 = (uint)bVar18;
      if (7 < uVar2) goto LAB_7101c787e0;
      uVar15 = (ulong)bVar18;
      pcVar19 = (char *)((long)param_1 + uVar15 * 2 + 0xb8);
      *pcVar19 = '\x01';
      pbVar20 = (byte *)((long)param_1 + uVar15 * 2 + 0xb9);
      *pbVar20 = (byte)uVar17;
      FUN_71003a4ca0((uint *)&local_e8,"btn_%02d_on",(ulong)uVar2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
      FUN_7103778300(0x3f800000,param_1[4],(long)local_e0);
      cVar8 = *pcVar19;
      if (cVar8 == '\0') {
LAB_7101c781a0:
        bVar5 = false;
      }
      else {
        uVar10 = (ulong)*pbVar20;
        if (7 < uVar10) goto LAB_7101c787e0;
        if ((param_1[1] + uVar10 * 0x1e8 == 0) || (*(char *)((long)param_1 + 0xe5) == '\0'))
        goto LAB_7101c781a0;
        bVar5 = *(char *)(param_1[1] + uVar10 * 0x1e8 + 0x1e4) != '\0';
      }
      lVar9 = *(long *)(*plVar1 + 0x1b8);
      if (lVar9 != 0) {
        lVar11 = *plVar1 + 0x1b8;
        lVar12 = lVar11;
        do {
          if ((int)uVar2 <= *(int *)(lVar9 + 0x20)) {
            lVar12 = lVar9;
          }
          lVar9 = *(long *)(lVar9 + (ulong)(*(int *)(lVar9 + 0x20) < (int)uVar2) * 8);
        } while (lVar9 != 0);
        if (((lVar12 != lVar11) && (*(int *)(lVar12 + 0x20) <= (int)uVar2)) &&
           (plVar16 = *(long **)(lVar12 + 0x28), plVar16 != (long *)0x0)) {
          (**(code **)(*plVar16 + 0x1f8))(plVar16,bVar5);
          param_3 = (long *********)0x0;
          (**(code **)(*plVar16 + 0x388))(plVar16,bVar5 ^ 1);
          cVar8 = *pcVar19;
        }
      }
      if (cVar8 == '\0') {
        bVar5 = false;
      }
      else {
        uVar10 = (ulong)*pbVar20;
        if (7 < uVar10) {
LAB_7101c787e0:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        lVar9 = param_1[1];
        if (((lVar9 + uVar10 * 0x1e8 == 0) || (*(char *)(lVar9 + uVar10 * 0x1e8 + 0x1e3) != '\0'))
           || ((*(char *)(lVar9 + uVar10 * 0x1e8 + 0x1e2) != '\0' ||
               (*(char *)((long)param_1 + 0xe5) == '\0')))) {
          bVar5 = false;
        }
        else {
          bVar5 = *(char *)(lVar9 + uVar10 * 0x1e8 + 0x1e4) != '\0';
        }
      }
      lVar9 = *(long *)(*plVar1 + 0x1b8);
      if (lVar9 != 0) {
        lVar11 = *plVar1 + 0x1b8;
        lVar12 = lVar11;
        do {
          if ((int)uVar2 <= *(int *)(lVar9 + 0x20)) {
            lVar12 = lVar9;
          }
          lVar9 = *(long *)(lVar9 + (ulong)(*(int *)(lVar9 + 0x20) < (int)uVar2) * 8);
        } while (lVar9 != 0);
        if (((lVar12 != lVar11) && (*(int *)(lVar12 + 0x20) <= (int)uVar2)) &&
           (plVar16 = *(long **)(lVar12 + 0x28), plVar16 != (long *)0x0)) {
          (**(code **)(*plVar16 + 0x208))(plVar16,bVar5);
          param_3 = (long *********)0x0;
          (**(code **)(*plVar16 + 0x388))(plVar16,bVar5 ^ 1);
        }
      }
      pcVar19 = (char *)(lVar14 + uVar17 * 0x1e8);
      pcVar3 = "color_member";
      if (pcVar19[0x1e2] != '\0') {
        pcVar3 = "color_me";
      }
      puVar6 = param_1 + uVar15 * 2 + 7;
      FUN_7103778300(0x3f800000,param_1[uVar15 * 2 + 8],(long)pcVar3);
      pcVar3 = "own_off";
      if (pcVar19[0x1e3] != '\0') {
        pcVar3 = "own_on";
      }
      FUN_7103778300(0x3f800000,param_1[uVar15 * 2 + 8],(long)pcVar3);
      pcVar3 = "fri_off";
      if (*pcVar19 != '\0') {
        pcVar3 = "fri_on";
      }
      FUN_7103778300(0x3f800000,param_1[uVar15 * 2 + 8],(long)pcVar3);
      FUN_7103776910(&local_e8,(long)puVar6,(long ****)"set_txt_00",param_3,param_4,param_5,param_6,
                     param_7,param_8);
      pcVar19 = pcVar19 + 0xc;
      uVar7 = 1;
      FUN_710377a280((long)&local_e8,(byte *)"mnu_online_room_inside_account_nam",1);
      uVar15 = local_e0[0];
      local_e8 = &PTR_FUN_710523d9a8;
      local_e0[0] = 0;
      if (uVar15 != 0) {
        FUN_710392eb40(uVar15);
      }
      FUN_7103776910(&local_e8,(long)puVar6,(long ****)"set_txt_01",uVar7,pcVar19,param_5,param_6,
                     param_7,param_8);
      param_4 = (byte ****)(ulong)*(uint *)(lVar14 + uVar17 * 0x1e8 + 0x30);
      param_3 = (long *********)0x1;
      FUN_710377a280((long)&local_e8,(byte *)"mnu_online_room_inside_ko_total_n",1);
      uVar15 = local_e0[0];
      local_e8 = &PTR_FUN_710523d9a8;
      local_e0[0] = 0;
      if (uVar15 != 0) {
        FUN_710392eb40(uVar15);
      }
      FUN_7103776640(&local_f8,(long)puVar6,(byte ****)"set_rep_icn_fighter_00",param_3,param_4,
                     param_5,param_6,param_7,param_8);
      uVar15 = *(ulong *)(lVar14 + uVar17 * 0x1e8 + 0x28);
      plVar16 = (long *)*param_1;
      FUN_7103776910(&local_e8,(long)&local_f8,(long ****)"set_icn_profile",param_3,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_7103776910(&local_90,(long)&local_f8,(long ****)"set_icn_profile_bg",param_3,param_4,
                     param_5,param_6,param_7,param_8);
      plVar16 = FUN_7103240430(plVar16,uVar15,(long ****)param_3,param_4,param_5,param_6,param_7,
                               param_8);
      FUN_7103778b80(local_e0[0],(long)plVar16,param_3,param_4,param_5,param_6,param_7,param_8);
      local_a0 = &PTR_FUN_710523d9a8;
      puVar6 = (undefined8 *)
               FUN_710392e290(0x10,0x20,(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
      if (puVar6 == (undefined8 *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_64 = 0;
          local_80[0] = (long ********)&SUB_00000020;
          param_3 = local_80;
          uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
          if (((uVar10 & 1) != 0) &&
             (puVar6 = (undefined8 *)
                       FUN_710392e290(0x10,0x20,(long ****)param_3,param_4,param_5,param_6,param_7,
                                      param_8), puVar6 != (undefined8 *)0x0)) goto LAB_7101c784b0;
        }
        puVar6 = (undefined8 *)0x0;
      }
LAB_7101c784b0:
      puVar4 = local_88;
      puVar6[2] = 0;
      puVar6[3] = 0;
      *puVar6 = 0;
      puVar6[1] = 0;
      *puVar6 = *local_88;
      puVar6[1] = local_88[1];
      puVar6[2] = local_88[2];
      puVar6[3] = local_88[3];
      local_98 = puVar6;
      FUN_710337d450((long)&local_a0,uVar15);
      local_a0 = &PTR_FUN_710523d9a8;
      local_98 = (undefined8 *)0x0;
      if (puVar6 != (undefined8 *)0x0) {
        FUN_710392eb40((ulong)puVar6);
      }
      local_90 = &PTR_FUN_710523d9a8;
      local_88 = (undefined8 *)0x0;
      if (puVar4 != (undefined8 *)0x0) {
        FUN_710392eb40((ulong)puVar4);
      }
      uVar15 = local_e0[0];
      local_e8 = &PTR_FUN_710523d9a8;
      local_e0[0] = 0;
      if (uVar15 != 0) {
        FUN_710392eb40(uVar15);
      }
      uVar15 = local_f0;
      local_f8 = &PTR_FUN_710523d988;
      local_f0 = 0;
      if (uVar15 != 0) {
        uVar10 = *(ulong *)(uVar15 + 0x18);
        *(undefined ***)(uVar15 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar15 + 0x18) = 0;
        if (uVar10 != 0) {
          FUN_710392eb40(uVar10);
        }
        FUN_710392eb40(uVar15);
      }
      bVar18 = bVar18 + 1;
    }
    uVar17 = uVar17 + 1;
    if (7 < uVar17) {
      *(byte *)((long)param_1 + 0xe3) = bVar18;
      if (bVar18 < 8) {
        uVar17 = (ulong)bVar18;
        do {
          FUN_71003a4ca0((uint *)&local_e8,"btn_%02d_off",uVar17 & 0xffffffff,param_3,param_4,
                         param_5,param_6,param_7,param_8);
          FUN_7103778300(0x3f800000,param_1[4],(long)local_e0);
          lVar14 = *(long *)(param_1[0x19] + 0x1b8);
          if (lVar14 != 0) {
            lVar9 = param_1[0x19] + 0x1b8;
            lVar11 = lVar9;
            lVar12 = lVar14;
            do {
              iVar13 = (int)uVar17;
              if (iVar13 <= *(int *)(lVar12 + 0x20)) {
                lVar11 = lVar12;
              }
              lVar12 = *(long *)(lVar12 + (ulong)(*(int *)(lVar12 + 0x20) < iVar13) * 8);
            } while (lVar12 != 0);
            if (((lVar11 != lVar9) && (*(int *)(lVar11 + 0x20) <= iVar13)) &&
               (plVar16 = *(long **)(lVar11 + 0x28), plVar16 != (long *)0x0)) {
              (**(code **)(*plVar16 + 0x1f8))(plVar16,0);
              param_3 = (long *********)0x0;
              (**(code **)(*plVar16 + 0x388))(plVar16,1);
              lVar9 = *plVar1 + 0x1b8;
              lVar14 = *(long *)(*plVar1 + 0x1b8);
            }
            lVar11 = lVar9;
            if (lVar14 != 0) {
              do {
                if (iVar13 <= *(int *)(lVar14 + 0x20)) {
                  lVar11 = lVar14;
                }
                lVar14 = *(long *)(lVar14 + (ulong)(*(int *)(lVar14 + 0x20) < iVar13) * 8);
              } while (lVar14 != 0);
              if (((lVar11 != lVar9) && (*(int *)(lVar11 + 0x20) <= iVar13)) &&
                 (plVar16 = *(long **)(lVar11 + 0x28), plVar16 != (long *)0x0)) {
                (**(code **)(*plVar16 + 0x208))(plVar16,0);
                param_3 = (long *********)0x0;
                (**(code **)(*plVar16 + 0x388))(plVar16,1);
              }
            }
          }
          FUN_7103776640(&local_90,(long)(param_1 + uVar17 * 2 + 7),
                         (byte ****)"set_rep_icn_fighter_00",param_3,param_4,param_5,param_6,param_7
                         ,param_8);
          FUN_7103776910(&local_e8,(long)&local_90,(long ****)"set_icn_profile",param_3,param_4,
                         param_5,param_6,param_7,param_8);
          uVar15 = local_e0[0];
          FUN_71037790a0(local_e0[0],1,param_3,param_4,param_5,param_6,param_7,param_8);
          local_e8 = &PTR_FUN_710523d9a8;
          local_e0[0] = 0;
          if (uVar15 != 0) {
            FUN_710392eb40(uVar15);
          }
          puVar6 = local_88;
          local_90 = &PTR_FUN_710523d988;
          local_88 = (undefined8 *)0x0;
          if (puVar6 != (undefined8 *)0x0) {
            uVar15 = puVar6[3];
            puVar6[2] = &PTR_FUN_710523d9a8;
            puVar6[3] = 0;
            if (uVar15 != 0) {
              FUN_710392eb40(uVar15);
            }
            FUN_710392eb40((ulong)puVar6);
          }
          uVar17 = uVar17 + 1;
        } while (uVar17 != 8);
      }
      if (*(char *)((long)param_1 + 0xe5) != '\0') {
        lVar14 = *plVar1;
        iVar13 = *(int *)(lVar14 + 0x254);
        if (iVar13 != -1) {
          lVar9 = *(long *)(lVar14 + 0x1b8);
          if (lVar9 != 0) {
            lVar11 = lVar14 + 0x1b8;
            do {
              if (iVar13 <= *(int *)(lVar9 + 0x20)) {
                lVar11 = lVar9;
              }
              lVar9 = *(long *)(lVar9 + (ulong)(*(int *)(lVar9 + 0x20) < iVar13) * 8);
            } while (lVar9 != 0);
            if (((lVar11 != lVar14 + 0x1b8) && (*(int *)(lVar11 + 0x20) <= iVar13)) &&
               ((*(long **)(lVar11 + 0x28) != (long *)0x0 &&
                (uVar17 = (**(code **)(**(long **)(lVar11 + 0x28) + 0x200))(), (uVar17 & 1) != 0))))
            {
              return;
            }
          }
          if (bVar18 == 0) {
            iVar13 = 8;
          }
          else {
            iVar13 = bVar18 - 1;
          }
          FUN_7103771a80(plVar1,iVar13,1);
        }
      }
      return;
    }
  } while( true );
}

