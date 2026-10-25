// addr:      7101dbc630
// offset:    0x1dbc630
// name:      FUN_7101dbc630
// mangled:   
// signature: undefined __cdecl FUN_7101dbc630(long param_1, int param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101dbc630(long param_1,int param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  char cVar3;
  ushort uVar4;
  ushort uVar5;
  bool bVar6;
  uint uVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  long ***ppplVar11;
  undefined1 *puVar12;
  undefined *puVar13;
  char *pcVar14;
  long ****pppplVar15;
  byte ****ppppbVar16;
  long **pplVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  long *********ppppppppplVar21;
  byte bVar22;
  long lVar23;
  undefined1 *puVar24;
  long lVar25;
  undefined **local_a0;
  ulong local_98;
  long ***local_90;
  ulong local_88;
  long ***local_80;
  ulong local_78;
  
  pppplVar15 = param_3;
  plVar8 = (long *)FUN_710392e290(0x10,8,param_3,param_4,param_5,param_6,param_7,param_8);
  if (plVar8 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_90 = (long ***)((ulong)local_90 & 0xffffffff00000000);
      local_80 = (long ***)&DAT_00000008;
      pppplVar15 = &local_80;
      uVar9 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_90);
      if (((uVar9 & 1) != 0) &&
         (plVar8 = (long *)FUN_710392e290(0x10,8,pppplVar15,param_4,param_5,param_6,param_7,param_8)
         , plVar8 != (long *)0x0)) goto LAB_7101dbc6bc;
    }
    plVar8 = (long *)0x0;
  }
LAB_7101dbc6bc:
  *plVar8 = 0;
  pplVar17 = param_3[1][1];
  if ((pplVar17 == (long **)0x0) || (pplVar17[0xc] == (long *)0x0)) {
    *plVar8 = 0;
  }
  else {
    plVar10 = (long *)FUN_7103796f20((long)pplVar17[0xc],(long)(pplVar17[3] + 0x16));
    *plVar8 = (long)plVar10;
    if (plVar10 != (long *)0x0) {
      (**(code **)(*plVar10 + 0x2e0))(plVar10,0);
    }
  }
  FUN_710392eb40((ulong)plVar8);
  if ((ulong)(*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8) >> 1) <= (ulong)(long)param_2) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  uVar5 = *(ushort *)(*(long *)(param_1 + 8) + (long)param_2 * 2);
  ppppppppplVar21 = (long *********)(ulong)uVar5;
  lVar23 = *DAT_7105329f98;
  lVar18 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
  lVar25 = (long)(short)uVar5;
  if (ppppppppplVar21 == (long *********)0xffff) {
    uVar9 = 0xffffffff;
  }
  else {
    uVar9 = (ulong)*(ushort *)(lVar18 + lVar25 * 2 + 0x60);
  }
  uVar19 = (*(long *)(lVar18 + 0x28) - *(long *)(lVar18 + 0x20) >> 6) * -0x3333333333333333;
  puVar1 = (undefined2 *)(*(long *)(lVar18 + 0x20) + uVar9 * 0x140);
  if (uVar19 < uVar9 || uVar19 - uVar9 == 0) {
    puVar1 = &DAT_7105182b08;
  }
  FUN_7103776910(&local_80,(long)param_3,(long ****)"set_txt_num",pppplVar15,param_4,param_5,param_6
                 ,param_7,param_8);
  ppppbVar16 = (byte ****)(ulong)(ushort)puVar1[0x2e];
  pppplVar15 = (long ****)0x1;
  FUN_710377a280((long)&local_80,(byte *)"mnu_spirits_directory_spirit_n_00",1);
  uVar9 = local_78;
  local_80 = (long ***)&PTR_FUN_710523d9a8;
  local_78 = 0;
  if (uVar9 != 0) {
    FUN_710392eb40(uVar9);
  }
  FUN_7103776640(&local_80,(long)param_3,(byte ****)"set_parts_new",pppplVar15,ppppbVar16,param_5,
                 param_6,param_7,param_8);
  if (uVar5 == 0xffff || 1999 < (short)uVar5) {
LAB_7101dbc890:
    FUN_7103778300(0x3f800000,(long)param_3[1],0x7104270403);
    uVar9 = local_78;
    FUN_7103778300(0x3f800000,local_78,0x71043cd335);
    plVar8 = (long *)FUN_710392e290(0x10,8,pppplVar15,ppppbVar16,param_5,param_6,param_7,param_8);
    if (plVar8 == (long *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_a0 = (undefined **)((ulong)local_a0 & 0xffffffff00000000);
        local_90 = (long ***)&DAT_00000008;
        pppplVar15 = &local_90;
        uVar19 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
        if (((uVar19 & 1) != 0) &&
           (plVar8 = (long *)FUN_710392e290(0x10,8,pppplVar15,ppppbVar16,param_5,param_6,param_7,
                                            param_8), plVar8 != (long *)0x0)) goto LAB_7101dbc91c;
      }
      plVar8 = (long *)0x0;
    }
LAB_7101dbc91c:
    *plVar8 = 0;
    pplVar17 = param_3[1][1];
    if ((pplVar17 == (long **)0x0) || (pplVar17[0xc] == (long *)0x0)) {
      *plVar8 = 0;
    }
    else {
      plVar10 = (long *)FUN_7103796f20((long)pplVar17[0xc],(long)(pplVar17[3] + 0x16));
      *plVar8 = (long)plVar10;
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x208))(plVar10,0);
        uVar19 = (**(code **)(*plVar10 + 0x200))(plVar10);
        if ((uVar19 & 1) == 0) {
          uVar7 = 1;
        }
        else {
          uVar7 = (**(code **)(*plVar10 + 0x210))(plVar10);
          uVar7 = uVar7 ^ 1;
        }
        (**(code **)(*plVar10 + 0x388))(plVar10,uVar7 & 1,0);
      }
    }
    FUN_710392eb40((ulong)plVar8);
    bVar6 = false;
    cVar3 = *(char *)(param_1 + 0x108);
  }
  else {
    lVar18 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
    if (((uint)*(ushort *)(lVar18 + (long)(short)uVar5 * 2 + 0x60) <
         (uint)((int)((ulong)(*(long *)(lVar18 + 0x28) - *(long *)(lVar18 + 0x20)) >> 6) *
               -0x33333333)) &&
       ((*(byte *)(*(long *)(lVar23 + 0x30) + lVar25 * 0x24 + 1) >> 3 & 1) != 0)) {
      FUN_7103778300(0x3f800000,(long)param_3[1],0x710438cf4d);
      uVar9 = local_78;
      lVar18 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
      if (((uint)*(ushort *)(lVar18 + lVar25 * 2 + 0x60) <
           (uint)((int)((ulong)(*(long *)(lVar18 + 0x28) - *(long *)(lVar18 + 0x20)) >> 6) *
                 -0x33333333)) &&
         ((*(byte *)(*(long *)(lVar23 + 0x30) + lVar25 * 0x24 + 1) >> 4 & 1) != 0)) {
        puVar13 = &DAT_710429257e;
      }
      else {
        puVar13 = &DAT_71043cd335;
      }
      FUN_7103778300(0x3f800000,local_78,(long)puVar13);
      plVar8 = (long *)FUN_710392e290(0x10,8,pppplVar15,ppppbVar16,param_5,param_6,param_7,param_8);
      if (plVar8 == (long *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_a0 = (undefined **)((ulong)local_a0 & 0xffffffff00000000);
          local_90 = (long ***)&DAT_00000008;
          pppplVar15 = &local_90;
          uVar19 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
          if (((uVar19 & 1) != 0) &&
             (plVar8 = (long *)FUN_710392e290(0x10,8,pppplVar15,ppppbVar16,param_5,param_6,param_7,
                                              param_8), plVar8 != (long *)0x0)) goto LAB_7101dbccd8;
        }
        plVar8 = (long *)0x0;
      }
LAB_7101dbccd8:
      *plVar8 = 0;
      pplVar17 = param_3[1][1];
      if ((pplVar17 == (long **)0x0) || (pplVar17[0xc] == (long *)0x0)) {
LAB_7101dbcd64:
        *plVar8 = 0;
      }
      else {
        plVar10 = (long *)FUN_7103796f20((long)pplVar17[0xc],(long)(pplVar17[3] + 0x16));
        *plVar8 = (long)plVar10;
        if (plVar10 != (long *)0x0) {
          (**(code **)(*plVar10 + 0x208))(plVar10,1);
          uVar19 = (**(code **)(*plVar10 + 0x200))(plVar10);
          uVar7 = 1;
          if ((uVar19 & 1) != 0) {
            uVar7 = (**(code **)(*plVar10 + 0x210))(plVar10);
            uVar7 = uVar7 ^ 1;
          }
          (**(code **)(*plVar10 + 0x388))(plVar10,uVar7 & 1,0);
        }
      }
    }
    else {
      if (((uint)((int)((ulong)(*(long *)(lVar18 + 0x28) - *(long *)(lVar18 + 0x20)) >> 6) *
                 -0x33333333) <= (uint)*(ushort *)(lVar18 + lVar25 * 2 + 0x60)) ||
         ((*(byte *)(*(long *)(lVar23 + 0x30) + lVar25 * 0x24 + 1) >> 2 & 1) == 0))
      goto LAB_7101dbc890;
      FUN_7103778300(0x3f800000,(long)param_3[1],0x7104454f5e);
      uVar9 = local_78;
      FUN_7103778300(0x3f800000,local_78,0x71043cd335);
      plVar8 = (long *)FUN_710392e290(0x10,8,pppplVar15,ppppbVar16,param_5,param_6,param_7,param_8);
      if (plVar8 == (long *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_a0 = (undefined **)((ulong)local_a0 & 0xffffffff00000000);
          local_90 = (long ***)&DAT_00000008;
          pppplVar15 = &local_90;
          uVar19 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
          if (((uVar19 & 1) != 0) &&
             (plVar8 = (long *)FUN_710392e290(0x10,8,pppplVar15,ppppbVar16,param_5,param_6,param_7,
                                              param_8), plVar8 != (long *)0x0)) goto LAB_7101dbcb98;
        }
        plVar8 = (long *)0x0;
      }
LAB_7101dbcb98:
      *plVar8 = 0;
      pplVar17 = param_3[1][1];
      if ((pplVar17 == (long **)0x0) || (pplVar17[0xc] == (long *)0x0)) goto LAB_7101dbcd64;
      plVar10 = (long *)FUN_7103796f20((long)pplVar17[0xc],(long)(pplVar17[3] + 0x16));
      *plVar8 = (long)plVar10;
      if (plVar10 != (long *)0x0) {
        (**(code **)(*plVar10 + 0x208))(plVar10,0);
        uVar19 = (**(code **)(*plVar10 + 0x200))(plVar10);
        if ((uVar19 & 1) == 0) {
          uVar7 = 1;
        }
        else {
          uVar7 = (**(code **)(*plVar10 + 0x210))(plVar10);
          uVar7 = uVar7 ^ 1;
        }
        (**(code **)(*plVar10 + 0x388))(plVar10,uVar7 & 1,0);
      }
    }
    FUN_710392eb40((ulong)plVar8);
    bVar6 = true;
    cVar3 = *(char *)(param_1 + 0x108);
  }
  if (cVar3 == '\0') goto LAB_7101dbcdf0;
  if (uVar5 == 0xffff || 1999 < (short)uVar5) {
LAB_7101dbcddc:
    ppplVar11 = param_3[1];
    pcVar14 = "battle_color_off";
  }
  else {
    lVar18 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
    uVar4 = *(ushort *)(lVar18 + lVar25 * 2 + 0x60);
    uVar19 = (ulong)uVar4;
    uVar20 = (*(long *)(lVar18 + 0x28) - *(long *)(lVar18 + 0x20) >> 6) * -0x3333333333333333;
    if ((uint)uVar20 <= (uint)uVar4) goto LAB_7101dbcddc;
    puVar2 = (undefined2 *)(*(long *)(lVar18 + 0x20) + uVar19 * 0x140);
    if (uVar20 < uVar19 || uVar20 - uVar19 == 0) {
      puVar2 = &DAT_7105182b08;
    }
    if (*(char *)(puVar2 + 0x2d) != '\0') {
      if (*(char *)(puVar2 + 0x49) != '\0') goto LAB_7101dbca88;
      goto LAB_7101dbcddc;
    }
    if (*(char *)(puVar2 + 0x90) == '\0') goto LAB_7101dbcddc;
    puVar24 = *(undefined1 **)(puVar2 + 0x4c);
    puVar12 = FUN_71032631a0(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x168),0xfd5f7fa78);
    if ((((((ulong)puVar24 & 0xff00000000000000) == 0xc100000000000000) &&
         (((ulong)puVar24 & 0xffffffffff) != 0)) &&
        (((ulong)puVar12 & 0xff00000000000000) == 0xc100000000000000)) &&
       (((ulong)puVar12 & 0xffffffffff) != 0)) {
      if ((((ulong)puVar12 ^ (ulong)puVar24) & 0xffffffffff) != 0) {
LAB_7101dbcdb8:
        uVar19 = FUN_7101797560(puVar24,0,0);
        if ((uVar19 & 1) == 0) goto LAB_7101dbcddc;
        lVar18 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
      }
    }
    else if ((((ulong)puVar12 & 0xffffffffff) != 0 &&
             ((ulong)puVar12 & 0xff00000000000000) == 0xc100000000000000) !=
             (((ulong)puVar24 & 0xff00000000000000) == 0xc100000000000000 &&
             ((ulong)puVar24 & 0xffffffffff) != 0)) goto LAB_7101dbcdb8;
LAB_7101dbca88:
    if (((uint)((int)((ulong)(*(long *)(lVar18 + 0x28) - *(long *)(lVar18 + 0x20)) >> 6) *
               -0x33333333) <= (uint)*(ushort *)(lVar18 + lVar25 * 2 + 0x60)) ||
       ((*(byte *)(*(long *)(lVar23 + 0x30) + lVar25 * 0x24 + 1) >> 3 & 1) == 0))
    goto LAB_7101dbcddc;
    if ((uVar5 < 2000) &&
       (*(int *)(*(long *)**(undefined8 **)(*DAT_7105314510 + 0x268) + lVar25 * 4 + 0x65a0) != 0)) {
      ppplVar11 = param_3[1];
      pcVar14 = "battle_color_00";
    }
    else {
      ppplVar11 = param_3[1];
      pcVar14 = "battle_color_01";
    }
    FUN_7103778300(0x3f800000,(long)ppplVar11,(long)pcVar14);
    ppplVar11 = param_3[1];
    pcVar14 = "loop_anim";
  }
  FUN_7103778300(0x3f800000,(long)ppplVar11,(long)pcVar14);
LAB_7101dbcdf0:
  if (bVar6) {
    if (*(char *)(puVar1 + 0x2f) == '\x03') {
      bVar6 = FUN_71025c9890(uVar5);
      bVar22 = 3;
      if (!bVar6) {
        bVar22 = 1;
      }
    }
    else {
      bVar22 = 1;
    }
    FUN_710259a790((ulong *)(param_1 + 0x20),bVar22,(long ****)ppppppppplVar21,ppppbVar16,param_5,
                   param_6,param_7,param_8);
    plVar8 = FUN_710259dce0(*(long *)(*DAT_7105329f98 + 0x20),bVar22,uVar5,ppppbVar16,param_5,
                            param_6,param_7,param_8);
    FUN_7103776910(&local_90,(long)param_3,(long ****)"set_rep_spirits",ppppppppplVar21,ppppbVar16,
                   param_5,param_6,param_7,param_8);
    FUN_7103776910(&local_a0,(long)param_3,(long ****)"set_rep_spirits_shadow",ppppppppplVar21,
                   ppppbVar16,param_5,param_6,param_7,param_8);
    uVar20 = local_88;
    FUN_7103778b80(local_88,(long)plVar8,ppppppppplVar21,ppppbVar16,param_5,param_6,param_7,param_8)
    ;
    uVar19 = local_98;
    FUN_7103778b80(local_98,(long)plVar8,ppppppppplVar21,ppppbVar16,param_5,param_6,param_7,param_8)
    ;
    local_a0 = &PTR_FUN_710523d9a8;
    local_98 = 0;
    if (uVar19 != 0) {
      FUN_710392eb40(uVar19);
    }
    local_90 = (long ***)&PTR_FUN_710523d9a8;
    local_88 = 0;
    if (uVar20 != 0) {
      FUN_710392eb40(uVar20);
    }
  }
  local_80 = (long ***)&PTR_FUN_710523d988;
  local_78 = 0;
  if (uVar9 != 0) {
    uVar19 = *(ulong *)(uVar9 + 0x18);
    *(undefined ***)(uVar9 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar9 + 0x18) = 0;
    if (uVar19 != 0) {
      FUN_710392eb40(uVar19);
    }
    FUN_710392eb40(uVar9);
  }
  return;
}

