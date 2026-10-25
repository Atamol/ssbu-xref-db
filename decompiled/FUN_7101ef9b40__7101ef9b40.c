// addr:      7101ef9b40
// offset:    0x1ef9b40
// name:      FUN_7101ef9b40
// mangled:   
// signature: undefined __cdecl FUN_7101ef9b40(uint * param_1, int param_2)


void FUN_7101ef9b40(uint *param_1,int param_2)

{
  long *plVar1;
  ulong uVar2;
  char *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  long ****pppplVar6;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  uint uVar7;
  long lVar8;
  long lVar9;
  uint *puVar10;
  ulong uVar11;
  undefined **local_60;
  long *local_58;
  
  uVar7 = 3;
  if (param_2 != 0) {
    uVar7 = 5;
  }
  lVar8 = *(long *)**(undefined8 **)(param_1 + 4);
  puVar10 = param_1 + 0x84;
  if (puVar10 != (uint *)(lVar8 + 8)) {
    **(undefined8 **)(param_1 + 0x86) = **(undefined8 **)(lVar8 + 0x10);
    *(undefined8 *)(*(long *)(param_1 + 0x86) + 8) = *(undefined8 *)(*(long *)(lVar8 + 0x10) + 8);
    lVar9 = *(long *)(lVar8 + 0x10);
    lVar8 = *(long *)(param_1 + 0x86);
    if (lVar8 != lVar9) {
      **(undefined8 **)(lVar8 + 0x18) = **(undefined8 **)(lVar9 + 0x18);
      *(undefined8 *)(*(long *)(lVar8 + 0x18) + 8) = *(undefined8 *)(*(long *)(lVar9 + 0x18) + 8);
      *(undefined8 *)(*(long *)(lVar8 + 0x18) + 0x10) =
           *(undefined8 *)(*(long *)(lVar9 + 0x18) + 0x10);
      *(undefined8 *)(*(long *)(lVar8 + 0x18) + 0x18) =
           *(undefined8 *)(*(long *)(lVar9 + 0x18) + 0x18);
    }
  }
  if (param_1[1] == 0) {
    if (*param_1 < 2) {
      pppplVar6 = (long ****)(ulong)param_1[2];
      puVar4 = (&PTR_DAT_71050b3e88)[*param_1];
      uVar5 = (ulong)uVar7;
      FUN_7103776640(&local_60,(long)puVar10,(byte ****)"set_part_%s%d_entry_%02d",puVar4,uVar5,
                     pppplVar6,in_x5,in_x6,in_x7);
      plVar1 = local_58;
      if ((undefined ***)(param_1 + 0x88) != &local_60) {
        local_58 = (long *)0x0;
        uVar11 = *(ulong *)(param_1 + 0x8a);
        *(long **)(param_1 + 0x8a) = plVar1;
        if (uVar11 != 0) {
          uVar2 = *(ulong *)(uVar11 + 0x18);
          *(undefined ***)(uVar11 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar11 + 0x18) = 0;
          if (uVar2 != 0) {
            FUN_710392eb40(uVar2);
          }
          FUN_710392eb40(uVar11);
        }
      }
      plVar1 = local_58;
      local_60 = &PTR_FUN_710523d988;
      local_58 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        uVar11 = *(ulong *)((long)plVar1 + 0x18);
        *(undefined ***)((long)plVar1 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)((long)plVar1 + 0x18) = 0;
        if (uVar11 != 0) {
          FUN_710392eb40(uVar11);
        }
        FUN_710392eb40((ulong)plVar1);
      }
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x8a),0x71042d6b3e);
LAB_7101ef9e34:
      puVar10 = param_1 + 0x88;
      FUN_7103776910(&local_60,(long)puVar10,(long ****)"set_part_sp_levelup",puVar4,uVar5,pppplVar6
                     ,in_x5,in_x6,in_x7);
      plVar1 = local_58;
      lVar8 = *local_58;
      if (lVar8 != 0) {
        *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) & 0xfe;
      }
      local_60 = &PTR_FUN_710523d9a8;
      local_58 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar1);
      }
      FUN_7103776910(&local_60,(long)puVar10,(long ****)"set_part_fp_levelup",puVar4,uVar5,pppplVar6
                     ,in_x5,in_x6,in_x7);
      plVar1 = local_58;
      lVar8 = *local_58;
      if (lVar8 != 0) {
        *(byte *)(lVar8 + 0x58) = *(byte *)(lVar8 + 0x58) & 0xfe;
      }
      local_60 = &PTR_FUN_710523d9a8;
      local_58 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar1);
      }
      FUN_7103776640(&local_60,(long)puVar10,(byte ****)"set_part_fp_levelup",puVar4,uVar5,pppplVar6
                     ,in_x5,in_x6,in_x7);
      plVar1 = local_58;
      if ((undefined ***)(param_1 + 0x92) != &local_60) {
        local_58 = (long *)0x0;
        uVar5 = *(ulong *)(param_1 + 0x94);
        *(long **)(param_1 + 0x94) = plVar1;
        if (uVar5 != 0) {
          uVar11 = *(ulong *)(uVar5 + 0x18);
          *(undefined ***)(uVar5 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar5 + 0x18) = 0;
          if (uVar11 != 0) {
            FUN_710392eb40(uVar11);
          }
          FUN_710392eb40(uVar5);
        }
      }
      plVar1 = local_58;
      local_60 = &PTR_FUN_710523d988;
      local_58 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        uVar5 = *(ulong *)((long)plVar1 + 0x18);
        *(undefined ***)((long)plVar1 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)((long)plVar1 + 0x18) = 0;
        if (uVar5 != 0) {
          FUN_710392eb40(uVar5);
        }
        FUN_710392eb40((ulong)plVar1);
      }
      if (*param_1 == 0) {
        pcVar3 = "pos_left";
      }
      else {
        pcVar3 = "pos_right";
      }
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x94),(long)pcVar3);
      return;
    }
  }
  else if (*param_1 < 2) {
    pppplVar6 = (long ****)(ulong)param_1[2];
    puVar4 = (&PTR_DAT_71050b3e88)[*param_1];
    uVar5 = (ulong)uVar7;
    FUN_7103776640(&local_60,(long)puVar10,(byte ****)"set_part_%s%d_%02d",puVar4,uVar5,pppplVar6,
                   in_x5,in_x6,in_x7);
    plVar1 = local_58;
    if ((undefined ***)(param_1 + 0x88) != &local_60) {
      local_58 = (long *)0x0;
      uVar11 = *(ulong *)(param_1 + 0x8a);
      *(long **)(param_1 + 0x8a) = plVar1;
      if (uVar11 != 0) {
        uVar2 = *(ulong *)(uVar11 + 0x18);
        *(undefined ***)(uVar11 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar11 + 0x18) = 0;
        if (uVar2 != 0) {
          FUN_710392eb40(uVar2);
        }
        FUN_710392eb40(uVar11);
      }
    }
    plVar1 = local_58;
    local_60 = &PTR_FUN_710523d988;
    local_58 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      uVar11 = *(ulong *)((long)plVar1 + 0x18);
      *(undefined ***)((long)plVar1 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)((long)plVar1 + 0x18) = 0;
      if (uVar11 != 0) {
        FUN_710392eb40(uVar11);
      }
      FUN_710392eb40((ulong)plVar1);
    }
    FUN_7103776640(&local_60,(long)(param_1 + 0x88),(byte ****)"set_bg_effect",puVar4,uVar5,
                   pppplVar6,in_x5,in_x6,in_x7);
    plVar1 = local_58;
    FUN_7103778300(0x3f800000,(long)local_58,0x7104328277);
    local_60 = &PTR_FUN_710523d988;
    local_58 = (long *)0x0;
    if (plVar1 != (long *)0x0) {
      uVar5 = *(ulong *)((long)plVar1 + 0x18);
      *(undefined ***)((long)plVar1 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)((long)plVar1 + 0x18) = 0;
      if (uVar5 != 0) {
        FUN_710392eb40(uVar5);
      }
      FUN_710392eb40((ulong)plVar1);
    }
    if (*param_1 < 2) {
      puVar4 = (&PTR_DAT_71050b3e88)[*param_1];
      pppplVar6 = (long ****)(ulong)param_1[2];
      uVar5 = (ulong)uVar7;
      FUN_7103776910(&local_60,(long)puVar10,(long ****)"set_part_%s%d_%02d",puVar4,uVar5,pppplVar6,
                     in_x5,in_x6,in_x7);
      plVar1 = local_58;
      if ((undefined ***)(param_1 + 0x8c) != &local_60) {
        local_58 = (long *)0x0;
        uVar11 = *(ulong *)(param_1 + 0x8e);
        *(long **)(param_1 + 0x8e) = plVar1;
        if (uVar11 != 0) {
          FUN_710392eb40(uVar11);
        }
      }
      plVar1 = local_58;
      local_60 = &PTR_FUN_710523d9a8;
      local_58 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar1);
      }
      goto LAB_7101ef9e34;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

