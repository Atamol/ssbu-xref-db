// addr:      7101d79600
// offset:    0x1d79600
// name:      FUN_7101d79600
// mangled:   
// signature: undefined __cdecl FUN_7101d79600(long param_1, int param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101d79600(long param_1,int param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint *puVar1;
  char cVar2;
  uint uVar3;
  long ***ppplVar4;
  uint *puVar5;
  byte ***pppbVar6;
  undefined **ppuVar7;
  long ****pppplVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  byte ***local_d0;
  byte ***local_c8;
  byte ***local_c0;
  uint *local_b8;
  uint *local_b0;
  uint *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  undefined1 local_84;
  long ***local_58;
  undefined4 local_44;
  
  if (*(int *)(param_1 + 0x250) != 1) {
    return;
  }
  uVar3 = 0x811c9dc5;
  local_98 = (undefined1 *)((ulong)local_98 & 0xffffffffffffff00);
  local_a8 = (uint *)0x0;
  local_a0 = (long ***)0x0;
  local_b8 = (uint *)0x0;
  local_b0 = (uint *)0x0;
  uVar14 = uVar3;
  if (param_2 == 1) {
    local_98 = &DAT_747261705f746573;
    uStack_90 = 0x6e656d6275735f73;
    local_88 = CONCAT22(local_88._2_2_,0x75);
    uVar11 = 0x73;
    pbVar9 = (byte *)((long)&local_98 + 1);
    do {
      uVar14 = uVar14 * 0x89 ^ uVar11;
      uVar11 = (uint)*pbVar9;
      pbVar9 = pbVar9 + 1;
    } while (uVar11 != 0);
    local_a0 = (long ***)CONCAT44(0x11,uVar14);
    FUN_7101d79b80((ulong *)&local_b8,(long *)&PTR_s_mnu_sound_test_playlist_submenu__71050aff98,
                   param_3,param_4,param_5,param_6,param_7,param_8);
    if (local_b0 < local_a8) {
      local_b0[0] = 0;
      local_b0[1] = 0;
      for (uVar12 = 0; "mnu_sound_test_playlist_submenu_detail"[uVar12] != '\0'; uVar12 = uVar12 + 2
          ) {
        *(char *)((long)local_b0 + uVar12 + 8) = "mnu_sound_test_playlist_submenu_detail"[uVar12];
        if ("mnu_sound_test_playlist_submenu_detail"[uVar12 + 1] == '\0') {
          uVar12 = uVar12 + 1;
          break;
        }
        *(char *)((long)local_b0 + uVar12 + 9) =
             "mnu_sound_test_playlist_submenu_detail"[uVar12 + 1];
      }
      *(undefined1 *)((long)local_b0 + (uVar12 & 0xffffffff) + 8) = 0;
      local_b0[1] = (uint)uVar12;
      uVar11 = (uint)(byte)local_b0[2];
      uVar14 = uVar3;
      if ((byte)local_b0[2] != 0) {
        pbVar9 = (byte *)((long)local_b0 + 9);
        do {
          uVar14 = uVar14 * 0x89 ^ uVar11;
          uVar11 = (uint)*pbVar9;
          pbVar9 = pbVar9 + 1;
        } while (uVar11 != 0);
      }
      *local_b0 = uVar14;
      local_b0 = local_b0 + 0x12;
    }
    else {
      FUN_7101d79b80((ulong *)&local_b8,(long *)&PTR_s_mnu_sound_test_playlist_submenu__71050affa0,
                     param_3,param_4,param_5,param_6,param_7,param_8);
    }
    if (local_b0 < local_a8) {
      local_b0[0] = 0;
      local_b0[1] = 0;
      for (uVar12 = 0; "mnu_sound_test_series_add"[uVar12] != '\0'; uVar12 = uVar12 + 2) {
        *(char *)((long)local_b0 + uVar12 + 8) = "mnu_sound_test_series_add"[uVar12];
        if ("mnu_sound_test_series_add"[uVar12 + 1] == '\0') {
          uVar12 = uVar12 + 1;
          break;
        }
        *(char *)((long)local_b0 + uVar12 + 9) = "mnu_sound_test_series_add"[uVar12 + 1];
      }
      *(undefined1 *)((long)local_b0 + (uVar12 & 0xffffffff) + 8) = 0;
      local_b0[1] = (uint)uVar12;
      uVar11 = (uint)(byte)local_b0[2];
      uVar14 = 0x811c9dc5;
      if ((byte)local_b0[2] != 0) {
        pbVar9 = (byte *)((long)local_b0 + 9);
        uVar14 = uVar3;
        do {
          uVar14 = uVar14 * 0x89 ^ uVar11;
          uVar11 = (uint)*pbVar9;
          pbVar9 = pbVar9 + 1;
        } while (uVar11 != 0);
      }
      goto LAB_7101d79984;
    }
    ppuVar7 = &PTR_s_mnu_sound_test_series_add_71050affa8;
LAB_7101d799a0:
    FUN_7101d79b80((ulong *)&local_b8,(long *)ppuVar7,param_3,param_4,param_5,param_6,param_7,
                   param_8);
  }
  else if (param_2 == 0) {
    local_84 = 0;
    local_98 = &DAT_747261705f746573;
    uStack_90 = 0x6e656d6275735f73;
    local_88 = 0x30305f75;
    uVar10 = 0x73;
    pbVar9 = (byte *)((long)&local_98 + 1);
    uVar11 = uVar3;
    do {
      uVar11 = uVar11 * 0x89 ^ uVar10;
      uVar10 = (uint)*pbVar9;
      pbVar9 = pbVar9 + 1;
    } while (uVar10 != 0);
    local_a0 = (long ***)CONCAT44(0x14,uVar11);
    FUN_7101d79b80((ulong *)&local_b8,(long *)&PTR_s_mnu_sound_test_playlist_submenu__71050aff80,
                   param_3,param_4,param_5,param_6,param_7,param_8);
    if (local_b0 < local_a8) {
      local_b0[0] = 0;
      local_b0[1] = 0;
      for (uVar12 = 0; "mnu_sound_test_playlist_submenu_change_name"[uVar12] != '\0';
          uVar12 = uVar12 + 2) {
        *(char *)((long)local_b0 + uVar12 + 8) =
             "mnu_sound_test_playlist_submenu_change_name"[uVar12];
        if ("mnu_sound_test_playlist_submenu_change_name"[uVar12 + 1] == '\0') {
          uVar12 = uVar12 + 1;
          break;
        }
        *(char *)((long)local_b0 + uVar12 + 9) =
             "mnu_sound_test_playlist_submenu_change_name"[uVar12 + 1];
      }
      *(undefined1 *)((long)local_b0 + (uVar12 & 0xffffffff) + 8) = 0;
      local_b0[1] = (uint)uVar12;
      uVar10 = (uint)(byte)local_b0[2];
      uVar11 = uVar3;
      if ((byte)local_b0[2] != 0) {
        pbVar9 = (byte *)((long)local_b0 + 9);
        do {
          uVar11 = uVar11 * 0x89 ^ uVar10;
          uVar10 = (uint)*pbVar9;
          pbVar9 = pbVar9 + 1;
        } while (uVar10 != 0);
      }
      *local_b0 = uVar11;
      local_b0 = local_b0 + 0x12;
    }
    else {
      FUN_7101d79b80((ulong *)&local_b8,(long *)&PTR_s_mnu_sound_test_playlist_submenu__71050aff88,
                     param_3,param_4,param_5,param_6,param_7,param_8);
    }
    if (local_a8 <= local_b0) {
      ppuVar7 = &PTR_s_mnu_sound_test_playlist_submenu__71050aff90;
      goto LAB_7101d799a0;
    }
    local_b0[0] = 0;
    local_b0[1] = 0;
    for (uVar12 = 0; "mnu_sound_test_playlist_submenu_delete"[uVar12] != '\0'; uVar12 = uVar12 + 2)
    {
      *(char *)((long)local_b0 + uVar12 + 8) = "mnu_sound_test_playlist_submenu_delete"[uVar12];
      if ("mnu_sound_test_playlist_submenu_delete"[uVar12 + 1] == '\0') {
        uVar12 = uVar12 + 1;
        break;
      }
      *(char *)((long)local_b0 + uVar12 + 9) = "mnu_sound_test_playlist_submenu_delete"[uVar12 + 1];
    }
    *(undefined1 *)((long)local_b0 + (uVar12 & 0xffffffff) + 8) = 0;
    local_b0[1] = (uint)uVar12;
    uVar11 = (uint)(byte)local_b0[2];
    if ((byte)local_b0[2] != 0) {
      pbVar9 = (byte *)((long)local_b0 + 9);
      do {
        uVar14 = uVar14 * 0x89 ^ uVar11;
        uVar11 = (uint)*pbVar9;
        pbVar9 = pbVar9 + 1;
      } while (uVar11 != 0);
    }
LAB_7101d79984:
    *local_b0 = uVar14;
    local_b0 = local_b0 + 0x12;
  }
  puVar5 = local_b0;
  puVar1 = local_b8;
  uVar14 = *(uint *)(param_1 + 0x250);
  if (2 < uVar14) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  local_d0 = (byte ***)0x0;
  local_c8 = (byte ***)0x0;
  local_c0 = (byte ***)0x0;
  ppplVar4 = (long ***)((long)local_b0 - (long)local_b8);
  if (ppplVar4 == (long ***)0x0) goto LAB_7101d79b08;
  if (0x38e38e38e38e38e < (ulong)(((long)ppplVar4 >> 3) * -0x71c71c71c71c71c7)) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_length_error();
  }
  pppbVar6 = (byte ***)FUN_710392e290(0x10,ppplVar4,param_3,param_4,param_5,param_6,param_7,param_8)
  ;
  if (pppbVar6 == (byte ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_44 = 0;
      pppplVar8 = &local_58;
      local_58 = ppplVar4;
      uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_44);
      if (((uVar12 & 1) != 0) &&
         (pppbVar6 = (byte ***)
                     FUN_710392e290(0x10,ppplVar4,pppplVar8,param_4,param_5,param_6,param_7,param_8)
         , pppbVar6 != (byte ***)0x0)) goto LAB_7101d79a48;
    }
    pppbVar6 = (byte ***)0x0;
  }
LAB_7101d79a48:
  local_c0 = pppbVar6 + ((long)ppplVar4 >> 3);
  local_c8 = pppbVar6;
  for (; local_d0 = pppbVar6, puVar1 != puVar5; puVar1 = puVar1 + 0x12) {
    *(uint *)local_c8 = 0;
    uVar12 = 0;
    do {
      cVar2 = *(char *)((long)puVar1 + uVar12 + 8);
      uVar13 = uVar12;
      if (cVar2 == '\0') break;
      *(char *)((long)local_c8 + uVar12 + 8) = cVar2;
      cVar2 = *(char *)((long)puVar1 + uVar12 + 9);
      if (cVar2 == '\0') {
        uVar13 = uVar12 + 1;
        break;
      }
      *(char *)((long)local_c8 + uVar12 + 9) = cVar2;
      cVar2 = *(char *)((long)puVar1 + uVar12 + 10);
      if (cVar2 == '\0') {
        uVar13 = uVar12 + 2;
        break;
      }
      uVar13 = uVar12 + 3;
      *(char *)((long)local_c8 + uVar12 + 10) = cVar2;
      uVar12 = uVar13;
    } while ((uint)uVar13 < 0x3f);
    *(undefined1 *)((long)local_c8 + (uVar13 & 0xffffffff) + 8) = 0;
    *(uint *)((long)local_c8 + 4) = (uint)uVar13;
    uVar10 = (uint)*(byte *)(local_c8 + 1);
    uVar11 = uVar3;
    if (*(byte *)(local_c8 + 1) != 0) {
      pbVar9 = (byte *)((long)local_c8 + 9);
      do {
        uVar11 = uVar11 * 0x89 ^ uVar10;
        uVar10 = (uint)*pbVar9;
        pbVar9 = pbVar9 + 1;
      } while (uVar10 != 0);
    }
    *(uint *)local_c8 = uVar11;
    local_c8 = local_c8 + 9;
  }
LAB_7101d79b08:
  FUN_71032d6470(*(long *)(param_1 + 0x2f0),(undefined8 *)(param_1 + (ulong)uVar14 * 8 + 0x238),
                 (long ****)&local_a0,&local_d0,(long ****)0x1,0,1,param_8);
  if (local_d0 != (byte ***)0x0) {
    local_c8 = local_d0;
    FUN_710392eb40((ulong)local_d0);
  }
  if (local_b8 != (uint *)0x0) {
    local_b0 = local_b8;
    FUN_710392eb40((ulong)local_b8);
  }
  return;
}

