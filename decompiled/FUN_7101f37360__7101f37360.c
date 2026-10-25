// addr:      7101f37360
// offset:    0x1f37360
// name:      FUN_7101f37360
// mangled:   
// signature: undefined __cdecl FUN_7101f37360(long param_1, long * * * * * * * * * param_2, byte * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101f37360(long param_1,long *********param_2,byte ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  short sVar1;
  ulong uVar2;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 extraout_x1_08;
  undefined8 extraout_x1_09;
  long ****pppplVar5;
  byte *pbVar6;
  byte ***pppbVar7;
  byte ****ppppbVar8;
  uint uVar9;
  long lVar10;
  ushort uVar11;
  long lVar12;
  short *psVar13;
  long lVar14;
  ulong uVar15;
  int iVar16;
  undefined **local_c0;
  ulong local_b8;
  ushort local_b0 [22];
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  uint uStack_78;
  
  if (*(int *)(param_1 + 0xf8) == 0) {
    return;
  }
  local_b0[0xc] = 0;
  local_b0[0xd] = 0;
  local_b0[0xe] = 0;
  local_b0[0xf] = 0;
  local_b0[0x10] = 0;
  local_b0[0x11] = 0;
  local_b0[0x12] = 0;
  local_b0[0x13] = 0;
  local_b0[0] = 0;
  local_b0[1] = 0;
  local_b0[2] = 0;
  local_b0[3] = 0;
  local_b0[4] = 0;
  local_b0[5] = 0;
  local_b0[6] = 0;
  local_b0[7] = 0;
  local_b0[8] = 0;
  local_b0[9] = 0;
  local_b0[10] = 0;
  local_b0[0xb] = 0;
  uVar11 = *(ushort *)(param_1 + 0x1f8);
  if (uVar11 == 0) {
    uVar15 = 0;
  }
  else {
    uVar9 = 0xffffffff;
    psVar13 = (short *)(param_1 + 0x1fa);
    do {
      sVar1 = *psVar13;
      uVar9 = uVar9 + 1;
      psVar13 = psVar13 + 1;
    } while (sVar1 != 0);
    uVar2 = 0;
    do {
      uVar15 = uVar2 + 1;
      local_b0[uVar2] = uVar11;
      if ((uVar9 <= (uint)uVar2) || (0x13 < uVar15)) break;
      uVar11 = *(ushort *)(param_1 + 0x1fa + uVar2 * 2);
      uVar2 = uVar15;
    } while (uVar11 != 0);
  }
  local_b0[uVar15] = 0;
  local_b0[0x14] = 0;
  _local_84 = CONCAT44(*(undefined4 *)(*(long *)(param_1 + 0x198) + 0x254),
                       *(undefined4 *)(param_1 + 0x5fc));
  _local_7c = CONCAT44(*(undefined4 *)(*(long *)(param_1 + 400) + 0x254),
                       *(undefined4 *)(*(long *)(param_1 + 0x188) + 0x254));
  ppppbVar8 = param_4;
  FUN_7103778430(param_1 + 0x108,"txpos_old_%02d",(ulong)*(uint *)(param_1 + 0x604),param_4,param_5,
                 param_6,param_7,param_8);
  pppplVar5 = (long ****)(ulong)*(uint *)(param_1 + 0x5fc);
  FUN_7103778430(param_1 + 0x108,"txpos_00_%02d",pppplVar5,ppppbVar8,param_5,param_6,param_7,param_8
                );
  lVar10 = *(long *)(param_1 + 0x1a0);
  if (0 < (int)((ulong)(*(long *)(lVar10 + 0x188) - *(long *)(lVar10 + 0x180)) >> 3)) {
    iVar16 = 0;
    uVar3 = extraout_x1;
    do {
      lVar14 = *(long *)(lVar10 + 0x1b8);
      if (lVar14 == 0) {
LAB_7101f3750c:
        FUN_7103776290(&local_c0,uVar3,pppplVar5,ppppbVar8,param_5,param_6,param_7,param_8);
        uVar3 = extraout_x1_01;
      }
      else {
        lVar12 = lVar10 + 0x1b8;
        do {
          if (iVar16 <= *(int *)(lVar14 + 0x20)) {
            lVar12 = lVar14;
          }
          lVar14 = *(long *)(lVar14 + (ulong)(*(int *)(lVar14 + 0x20) < iVar16) * 8);
        } while (lVar14 != 0);
        if (((lVar12 == lVar10 + 0x1b8) || (iVar16 < *(int *)(lVar12 + 0x20))) ||
           (*(long *)(lVar12 + 0x28) == 0)) goto LAB_7101f3750c;
        FUN_7103776640(&local_c0,lVar10 + 0x160,*(byte *****)(*(long *)(lVar12 + 0x28) + 0x88),
                       pppplVar5,ppppbVar8,param_5,param_6,param_7,param_8);
        uVar3 = extraout_x1_00;
      }
      uVar15 = local_b8;
      if (*(long *)(local_b8 + 8) != 0) {
        pcVar4 = "selected_off";
        if (iVar16 == *(int *)(param_1 + 0x5fc)) {
          pcVar4 = "selected_on";
        }
        FUN_7103778300(0x3f800000,local_b8,(long)pcVar4);
        uVar3 = extraout_x1_02;
      }
      local_c0 = &PTR_FUN_710523d988;
      local_b8 = 0;
      if (uVar15 != 0) {
        uVar2 = *(ulong *)(uVar15 + 0x18);
        *(undefined ***)(uVar15 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar15 + 0x18) = 0;
        if (uVar2 != 0) {
          FUN_710392eb40(uVar2);
        }
        FUN_710392eb40(uVar15);
        uVar3 = extraout_x1_03;
      }
      lVar10 = *(long *)(param_1 + 0x1a0);
      iVar16 = iVar16 + 1;
    } while (iVar16 < (int)((ulong)(*(long *)(lVar10 + 0x188) - *(long *)(lVar10 + 0x180)) >> 3));
  }
  lVar10 = param_1 + 0x118;
  FUN_7103776910(&local_c0,lVar10,(long ****)"set_color_old_00",pppplVar5,ppppbVar8,param_5,param_6,
                 param_7,param_8);
  if ((ulong)(long)*(int *)(param_1 + 0x608) < (ulong)((long)param_4[1] - (long)*param_4 >> 3)) {
    pbVar6 = (byte *)((long)*param_4 + (long)*(int *)(param_1 + 0x608) * 8 + 4);
    FUN_7103779d90((long)&local_c0,1,pbVar6);
    uVar15 = local_b8;
    local_c0 = &PTR_FUN_710523d9a8;
    local_b8 = 0;
    if (uVar15 != 0) {
      FUN_710392eb40(uVar15);
    }
    FUN_7103776910(&local_c0,lVar10,(long ****)"set_color_old_01",pbVar6,ppppbVar8,param_5,param_6,
                   param_7,param_8);
    if ((ulong)(long)*(int *)(param_1 + 0x608) < (ulong)((long)param_4[1] - (long)*param_4 >> 3)) {
      pppbVar7 = *param_4 + *(int *)(param_1 + 0x608);
      FUN_7103779d90((long)&local_c0,1,(byte *)pppbVar7);
      uVar15 = local_b8;
      local_c0 = &PTR_FUN_710523d9a8;
      local_b8 = 0;
      if (uVar15 != 0) {
        FUN_710392eb40(uVar15);
      }
      uVar15 = (ulong)*(int *)(*(long *)(param_1 + 0x198) + 0x254);
      FUN_7103776910(&local_c0,lVar10,(long ****)"set_color_00_00",pppbVar7,ppppbVar8,param_5,
                     param_6,param_7,param_8);
      if (uVar15 < (ulong)((long)param_4[1] - (long)*param_4 >> 3)) {
        pbVar6 = (byte *)((long)*param_4 + uVar15 * 8 + 4);
        FUN_7103779d90((long)&local_c0,1,pbVar6);
        uVar2 = local_b8;
        local_c0 = &PTR_FUN_710523d9a8;
        local_b8 = 0;
        if (uVar2 != 0) {
          FUN_710392eb40(uVar2);
        }
        FUN_7103776910(&local_c0,lVar10,(long ****)"set_color_00_01",pbVar6,ppppbVar8,param_5,
                       param_6,param_7,param_8);
        if (uVar15 < (ulong)((long)param_4[1] - (long)*param_4 >> 3)) {
          pppplVar5 = (long ****)(*param_4 + uVar15);
          FUN_7103779d90((long)&local_c0,1,(byte *)pppplVar5);
          uVar15 = local_b8;
          local_c0 = &PTR_FUN_710523d9a8;
          local_b8 = 0;
          uVar3 = extraout_x1_04;
          if (uVar15 != 0) {
            FUN_710392eb40(uVar15);
            uVar3 = extraout_x1_05;
          }
          lVar10 = *(long *)(param_1 + 0x198);
          if (0 < (int)((ulong)(*(long *)(lVar10 + 0x188) - *(long *)(lVar10 + 0x180)) >> 3)) {
            iVar16 = 0;
            do {
              lVar14 = *(long *)(lVar10 + 0x1b8);
              if (lVar14 == 0) {
LAB_7101f37754:
                FUN_7103776290(&local_c0,uVar3,pppplVar5,ppppbVar8,param_5,param_6,param_7,param_8);
                uVar3 = extraout_x1_07;
              }
              else {
                lVar12 = lVar10 + 0x1b8;
                do {
                  if (iVar16 <= *(int *)(lVar14 + 0x20)) {
                    lVar12 = lVar14;
                  }
                  lVar14 = *(long *)(lVar14 + (ulong)(*(int *)(lVar14 + 0x20) < iVar16) * 8);
                } while (lVar14 != 0);
                if (((lVar12 == lVar10 + 0x1b8) || (iVar16 < *(int *)(lVar12 + 0x20))) ||
                   (*(long *)(lVar12 + 0x28) == 0)) goto LAB_7101f37754;
                FUN_7103776640(&local_c0,lVar10 + 0x160,
                               *(byte *****)(*(long *)(lVar12 + 0x28) + 0x88),pppplVar5,ppppbVar8,
                               param_5,param_6,param_7,param_8);
                uVar3 = extraout_x1_06;
              }
              uVar15 = local_b8;
              if (*(long *)(local_b8 + 8) != 0) {
                pcVar4 = "select_icon_off";
                if (iVar16 == *(int *)(param_1 + 0x608)) {
                  pcVar4 = "select_icon_on";
                }
                FUN_7103778300(0x3f800000,local_b8,(long)pcVar4);
                uVar3 = extraout_x1_08;
              }
              local_c0 = &PTR_FUN_710523d988;
              local_b8 = 0;
              if (uVar15 != 0) {
                uVar2 = *(ulong *)(uVar15 + 0x18);
                *(undefined ***)(uVar15 + 0x10) = &PTR_FUN_710523d9a8;
                *(undefined8 *)(uVar15 + 0x18) = 0;
                if (uVar2 != 0) {
                  FUN_710392eb40(uVar2);
                }
                FUN_710392eb40(uVar15);
                uVar3 = extraout_x1_09;
              }
              lVar10 = *(long *)(param_1 + 0x198);
              iVar16 = iVar16 + 1;
            } while (iVar16 < (int)((ulong)(*(long *)(lVar10 + 0x188) - *(long *)(lVar10 + 0x180))
                                   >> 3));
          }
          FUN_7101f3e830(*(long *)(param_1 + 0x1c0),1,param_2,param_3,(long ****)param_4,param_6,
                         param_7,param_8);
          FUN_7101f40510(*(long *)(param_1 + 0x1d0),local_b0,(long *)param_4);
          lVar10 = *(long *)(param_1 + 0x1e0);
          uVar9 = uStack_78;
          if (*(uint *)(lVar10 + 0x40) == uStack_78) {
            return;
          }
          if (uStack_78 < 3) {
            FUN_710377aee0(0x3f800000,lVar10 + (long)(int)uStack_78 * 0x10 + 0x10);
            *(uint *)(lVar10 + 0x40) = uVar9;
            return;
          }
                    /* WARNING: Subroutine does not return */
          abort();
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__vector_base_common<true>::__throw_out_of_range();
}

