// addr:      7101ca5760
// offset:    0x1ca5760
// name:      FUN_7101ca5760
// mangled:   
// signature: undefined __cdecl FUN_7101ca5760(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101ca5760(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint *puVar1;
  char *pcVar2;
  int *piVar3;
  char cVar4;
  byte bVar5;
  uint uVar6;
  long ***ppplVar7;
  long lVar8;
  long *plVar9;
  uint *puVar10;
  ulong uVar11;
  long ***ppplVar12;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 uVar13;
  char *pcVar14;
  ulong uVar15;
  byte *pbVar16;
  uint uVar17;
  uint uVar18;
  int *piVar19;
  undefined1 auVar20 [16];
  long ***local_e8;
  long ***local_e0;
  long ***local_d8;
  long ***local_d0;
  long *local_c8;
  byte ***local_c0;
  undefined4 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined **local_a0;
  ulong local_98;
  uint *local_78;
  uint *local_70;
  uint *puStack_68;
  undefined4 local_54;
  
  local_70 = (uint *)0x0;
  puStack_68 = (uint *)0x0;
  local_78 = (uint *)0x0;
  piVar19 = *(int **)(param_1 + 0x1d8);
  piVar3 = *(int **)(param_1 + 0x1e0);
  uVar6 = 0x811c9dc5;
  if (piVar19 != piVar3) {
    do {
      pcVar14 = "mnu_share_list_recommend";
      if (*piVar19 - 1U < 3) {
        pcVar14 = (&PTR_s_mnu_share_list_popular_71050ae080)[(int)(*piVar19 - 1U)];
      }
      uVar15 = 0;
      do {
        pcVar2 = pcVar14 + uVar15;
        uVar11 = uVar15;
        if (*pcVar2 == '\0') break;
        *(char *)((long)&local_b8 + uVar15) = *pcVar2;
        if (pcVar2[1] == '\0') {
          uVar11 = uVar15 + 1;
          break;
        }
        *(char *)((long)&local_b8 + uVar15 + 1) = pcVar2[1];
        if (pcVar2[2] == '\0') {
          uVar11 = uVar15 + 2;
          break;
        }
        uVar11 = uVar15 + 3;
        *(char *)((long)&local_b8 + uVar15 + 2) = pcVar2[2];
        uVar15 = uVar11;
      } while ((uint)uVar11 < 0x3f);
      *(undefined1 *)((long)&local_b8 + (uVar11 & 0xffffffff)) = 0;
      uVar17 = local_b8 & 0xff;
      uVar18 = uVar6;
      pbVar16 = (byte *)((long)&local_b8 + 1);
      while (uVar17 != 0) {
        uVar18 = uVar18 * 0x89 ^ uVar17;
        uVar17 = (uint)*pbVar16;
        pbVar16 = pbVar16 + 1;
      }
      local_c0 = (byte ***)CONCAT44((int)uVar11,uVar18);
      if (local_70 < puStack_68) {
        uVar15 = 0;
        *local_70 = 0;
        cVar4 = (char)local_b8;
        while (cVar4 != '\0') {
          *(char *)((long)local_70 + uVar15 + 8) = cVar4;
          bVar5 = ((byte *)((long)&local_b8 + 1))[uVar15];
          if (bVar5 == 0) {
            uVar15 = uVar15 + 1;
            break;
          }
          *(byte *)((long)local_70 + uVar15 + 9) = bVar5;
          cVar4 = *(char *)((long)&local_b8 + uVar15 + 2);
          if (cVar4 == '\0') {
            uVar15 = uVar15 + 2;
            break;
          }
          *(char *)((long)local_70 + uVar15 + 10) = cVar4;
          if (0x3e < (int)uVar15 + 3U) {
            uVar15 = (ulong)((int)uVar15 + 3);
            break;
          }
          lVar8 = uVar15 + 3;
          uVar15 = uVar15 + 3;
          cVar4 = *(char *)((long)&local_b8 + lVar8);
        }
        *(undefined1 *)((long)local_70 + (uVar15 & 0xffffffff) + 8) = 0;
        local_70[1] = (uint)uVar15;
        uVar17 = (uint)(byte)local_70[2];
        uVar18 = uVar6;
        if ((byte)local_70[2] != 0) {
          pbVar16 = (byte *)((long)local_70 + 9);
          do {
            uVar18 = uVar18 * 0x89 ^ uVar17;
            uVar17 = (uint)*pbVar16;
            pbVar16 = pbVar16 + 1;
          } while (uVar17 != 0);
        }
        *local_70 = uVar18;
        local_70 = local_70 + 0x12;
      }
      else {
        FUN_71019c1c50((ulong *)&local_78,(long)&local_c0,param_3,param_4,param_5,param_6,param_7,
                       param_8);
        param_2 = extraout_x1;
      }
      piVar19 = piVar19 + 1;
    } while (piVar19 != piVar3);
  }
  local_b0 = 0;
  uStack_a8 = 0;
  FUN_7103776290(&local_a0,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  local_c0 = (byte ***)0x0;
  local_b8 = 0;
  uStack_a8 = uRam0000007107459008;
  local_b0 = _ConstantZero;
  *(undefined8 *)(local_98 + 8) = 0;
  FUN_7103776640(&local_d0,**(long **)(param_1 + 0x150) + 8,(byte ****)"scr_sort",param_3,param_4,
                 param_5,param_6,param_7,param_8);
  uVar15 = local_98;
  local_98 = (ulong)local_c8;
  local_c8 = (long *)0x0;
  if (uVar15 != 0) {
    uVar11 = *(ulong *)(uVar15 + 0x18);
    *(undefined ***)(uVar15 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar15 + 0x18) = 0;
    if (uVar11 != 0) {
      FUN_710392eb40(uVar11);
    }
    FUN_710392eb40(uVar15);
  }
  local_d0 = (long ***)&PTR_FUN_710523d988;
  local_c8 = (long *)0x0;
  FUN_7103776910(&local_d0,**(long **)(param_1 + 0x150) + 8,(long ****)"sort_window",param_3,param_4
                 ,param_5,param_6,param_7,param_8);
  plVar9 = local_c8;
  local_b0 = _ConstantZero;
  uStack_a8 = uRam0000007107459008;
  if (*local_c8 != 0) {
    local_b0 = *(undefined8 *)(*local_c8 + 0x30);
    uStack_a8 = 0;
  }
  local_d0 = (long ***)&PTR_FUN_710523d9a8;
  local_c8 = (long *)0x0;
  uVar13 = extraout_x1_00;
  if (plVar9 != (long *)0x0) {
    FUN_710392eb40((ulong)plVar9);
    uVar13 = extraout_x1_01;
  }
  puVar10 = local_70;
  puVar1 = local_78;
  local_c0 = (byte ***)CONCAT44(local_c0._4_4_,4);
  local_e0 = (long ***)0x0;
  local_d8 = (long ***)0x0;
  ppplVar7 = (long ***)((long)local_70 - (long)local_78);
  local_e8 = (long ***)0x0;
  if (ppplVar7 == (long ***)0x0) goto LAB_7101ca5b7c;
  if (0x38e38e38e38e38e < (ulong)(((long)ppplVar7 >> 3) * -0x71c71c71c71c71c7)) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  ppplVar12 = (long ***)
              FUN_710392e290(0x10,ppplVar7,param_3,param_4,param_5,param_6,param_7,param_8);
  uVar13 = extraout_x1_02;
  if (ppplVar12 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_54 = 0;
      param_3 = &local_d0;
      local_d0 = ppplVar7;
      auVar20 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
      uVar13 = auVar20._8_8_;
      if (((auVar20._0_8_ & 1) != 0) &&
         (ppplVar12 = (long ***)
                      FUN_710392e290(0x10,ppplVar7,param_3,param_4,param_5,param_6,param_7,param_8),
         uVar13 = extraout_x1_03, ppplVar12 != (long ***)0x0)) goto LAB_7101ca5abc;
    }
    ppplVar12 = (long ***)0x0;
  }
LAB_7101ca5abc:
  local_d8 = ppplVar12 + ((long)ppplVar7 >> 3);
  local_e0 = ppplVar12;
  for (; local_e8 = ppplVar12, puVar1 != puVar10; puVar1 = puVar1 + 0x12) {
    *(uint *)local_e0 = 0;
    uVar15 = 0;
    do {
      cVar4 = *(char *)((long)puVar1 + uVar15 + 8);
      uVar11 = uVar15;
      if (cVar4 == '\0') break;
      *(char *)((long)local_e0 + uVar15 + 8) = cVar4;
      cVar4 = *(char *)((long)puVar1 + uVar15 + 9);
      if (cVar4 == '\0') {
        uVar11 = uVar15 + 1;
        break;
      }
      *(char *)((long)local_e0 + uVar15 + 9) = cVar4;
      cVar4 = *(char *)((long)puVar1 + uVar15 + 10);
      if (cVar4 == '\0') {
        uVar11 = uVar15 + 2;
        break;
      }
      uVar11 = uVar15 + 3;
      *(char *)((long)local_e0 + uVar15 + 10) = cVar4;
      uVar15 = uVar11;
    } while ((uint)uVar11 < 0x3f);
    *(undefined1 *)((long)local_e0 + (uVar11 & 0xffffffff) + 8) = 0;
    *(uint *)((long)local_e0 + 4) = (uint)uVar11;
    uVar17 = (uint)*(byte *)(local_e0 + 1);
    uVar18 = uVar6;
    if (*(byte *)(local_e0 + 1) != 0) {
      pbVar16 = (byte *)((long)local_e0 + 9);
      do {
        uVar18 = uVar18 * 0x89 ^ uVar17;
        uVar17 = (uint)*pbVar16;
        pbVar16 = pbVar16 + 1;
      } while (uVar17 != 0);
    }
    *(uint *)local_e0 = uVar18;
    local_e0 = local_e0 + 9;
  }
LAB_7101ca5b7c:
  FUN_7103776290(&local_d0,uVar13,param_3,param_4,param_5,param_6,param_7,param_8);
  FUN_71032ccb70(param_1 + 0x198,(undefined8 *)(param_1 + 0x158),&local_e8,&local_c0,&local_d0,
                 param_6,param_7,param_8);
  plVar9 = local_c8;
  local_d0 = (long ***)&PTR_FUN_710523d988;
  local_c8 = (long *)0x0;
  if (plVar9 != (long *)0x0) {
    uVar15 = *(ulong *)((long)plVar9 + 0x18);
    *(undefined ***)((long)plVar9 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)((long)plVar9 + 0x18) = 0;
    if (uVar15 != 0) {
      FUN_710392eb40(uVar15);
    }
    FUN_710392eb40((ulong)plVar9);
  }
  if (local_e8 != (long ***)0x0) {
    local_e0 = local_e8;
    FUN_710392eb40((ulong)local_e8);
  }
  uVar15 = local_98;
  local_a0 = &PTR_FUN_710523d988;
  local_98 = 0;
  if (uVar15 != 0) {
    uVar11 = *(ulong *)(uVar15 + 0x18);
    *(undefined ***)(uVar15 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar15 + 0x18) = 0;
    if (uVar11 != 0) {
      FUN_710392eb40(uVar11);
    }
    FUN_710392eb40(uVar15);
  }
  if (local_78 != (uint *)0x0) {
    local_70 = local_78;
    FUN_710392eb40((ulong)local_78);
  }
  return;
}

