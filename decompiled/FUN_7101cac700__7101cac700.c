// addr:      7101cac700
// offset:    0x1cac700
// name:      FUN_7101cac700
// mangled:   
// signature: undefined __cdecl FUN_7101cac700(long param_1, uint * param_2, char * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101cac700(long param_1,uint *param_2,char *param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  uint uVar4;
  bool bVar5;
  ushort uVar6;
  long *plVar8;
  ulong uVar9;
  char *pcVar10;
  undefined8 uVar11;
  byte ****ppppbVar12;
  code *pcVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long *plVar19;
  long lVar20;
  long *plVar21;
  byte ****ppppbVar22;
  undefined **local_1b0;
  long *local_1a8;
  long *local_190;
  byte ***local_180;
  undefined2 local_178;
  undefined4 local_176;
  undefined2 local_172;
  undefined4 local_170;
  undefined2 local_16c;
  undefined1 local_16a;
  undefined1 *local_168;
  undefined4 local_160;
  long alStack_150 [4];
  long *local_130;
  long alStack_120 [4];
  long *local_100;
  long alStack_f0 [4];
  long *local_d0;
  long alStack_c0 [4];
  long *local_a0;
  long alStack_90 [4];
  long *local_70;
  undefined4 local_60;
  uint uVar7;
  
  lVar20 = *(long *)(param_1 + 0x2350);
  *(undefined8 *)(lVar20 + 0x2a0) = *(undefined8 *)(lVar20 + 0x290);
  *(int *)(lVar20 + 0x280) = (int)param_3;
  *(undefined8 *)(lVar20 + 0x298) = *(undefined8 *)(lVar20 + 0x288);
  uVar11 = *(undefined8 *)param_2;
  *(undefined8 *)(lVar20 + 0x290) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(lVar20 + 0x288) = uVar11;
  FUN_7101ce0260(lVar20,(int *)(lVar20 + 0x288));
  if (*(ulong *)(param_2 + 2) == 0) {
    uVar7 = 0xffff;
  }
  else {
    param_3 = (char *)(ulong)*param_2;
    uVar6 = FUN_710334c7d0(*(long *)(DAT_710532f8f8 + 8),*(ulong *)(param_2 + 2),*param_2);
    uVar7 = (uint)uVar6;
  }
  puVar2 = (undefined8 *)(lVar20 + 0x250);
  if (*(long *)(*(long *)(lVar20 + 600) + 8) != 0) {
    plVar8 = *(long **)(lVar20 + 0x2b0);
    plVar3 = (long *)(lVar20 + 0x2b0);
    if (plVar8 == (long *)0x0) {
      local_178 = 0x101;
      local_170 = 1;
      local_16c = 1;
      local_16a = 1;
      local_168 = &DAT_41f0000000000000;
      local_180 = (byte ***)0x0;
      local_172 = 0;
      local_176 = 0;
      local_160 = 0;
      local_130 = (long *)0x0;
      local_100 = (long *)0x0;
      local_d0 = (long *)0x0;
      local_a0 = (long *)0x0;
      local_70 = (long *)0x0;
      local_60 = 0;
      local_1b0 = (undefined **)&DAT_71051860d0;
      local_190 = (long *)&local_1b0;
      FUN_7101989a30((long *)&local_1b0,alStack_c0);
      if (&local_1b0 == (undefined ***)local_190) {
        pcVar13 = *(code **)(*local_190 + 0x20);
LAB_7101cac824:
        (*pcVar13)();
      }
      else if (local_190 != (long *)0x0) {
        pcVar13 = *(code **)(*local_190 + 0x28);
        goto LAB_7101cac824;
      }
      param_4 = &local_180;
      FUN_7103770b30(plVar3,puVar2,(long ****)"selector_00",param_4,param_5,param_6,param_7,param_8)
      ;
      FUN_71037717d0(plVar3,2,"set_playbtn_dummy",param_4,param_5,param_6,param_7,param_8);
      FUN_71037717d0(plVar3,3,"set_test_save_dummy",param_4,param_5,param_6,param_7,param_8);
      FUN_71037717d0(plVar3,5,"set_parts_btn_00",param_4,param_5,param_6,param_7,param_8);
      FUN_71037717d0(plVar3,6,"set_parts_btn_01",param_4,param_5,param_6,param_7,param_8);
      param_3 = "set_detailbtn_dummy";
      FUN_71037717d0(plVar3,7,"set_detailbtn_dummy",param_4,param_5,param_6,param_7,param_8);
      if (alStack_90 == local_70) {
        pcVar13 = *(code **)(*local_70 + 0x20);
LAB_7101cac8d0:
        (*pcVar13)();
      }
      else if (local_70 != (long *)0x0) {
        pcVar13 = *(code **)(*local_70 + 0x28);
        goto LAB_7101cac8d0;
      }
      if (alStack_c0 == local_a0) {
        pcVar13 = *(code **)(*local_a0 + 0x20);
LAB_7101cac900:
        (*pcVar13)();
      }
      else if (local_a0 != (long *)0x0) {
        pcVar13 = *(code **)(*local_a0 + 0x28);
        goto LAB_7101cac900;
      }
      if (alStack_f0 == local_d0) {
        pcVar13 = *(code **)(*local_d0 + 0x20);
LAB_7101cac930:
        (*pcVar13)();
      }
      else if (local_d0 != (long *)0x0) {
        pcVar13 = *(code **)(*local_d0 + 0x28);
        goto LAB_7101cac930;
      }
      if (alStack_120 == local_100) {
        pcVar13 = *(code **)(*local_100 + 0x20);
LAB_7101cac960:
        (*pcVar13)();
      }
      else if (local_100 != (long *)0x0) {
        pcVar13 = *(code **)(*local_100 + 0x28);
        goto LAB_7101cac960;
      }
      if (alStack_150 == local_130) {
        pcVar13 = *(code **)(*local_130 + 0x20);
LAB_7101cac990:
        (*pcVar13)();
      }
      else if (local_130 != (long *)0x0) {
        pcVar13 = *(code **)(*local_130 + 0x28);
        goto LAB_7101cac990;
      }
      plVar8 = (long *)*plVar3;
    }
    plVar15 = (long *)plVar8[0x37];
    if (plVar15 != (long *)0x0) {
      plVar14 = plVar8 + 0x37;
      plVar21 = plVar14;
      plVar19 = plVar15;
      do {
        if (1 < (int)plVar19[4]) {
          plVar21 = plVar19;
        }
        plVar19 = (long *)plVar19[(int)plVar19[4] < 2];
      } while (plVar19 != (long *)0x0);
      if (((plVar21 != plVar14) && ((int)plVar21[4] < 3)) &&
         (plVar21 = (long *)plVar21[5], plVar21 != (long *)0x0)) {
        uVar4 = uVar7 - 2 & 0xffff;
        (**(code **)(*plVar21 + 0x1f8))(plVar21,uVar4 < 3);
        param_3 = (char *)0x0;
        (**(code **)(*plVar21 + 0x388))(plVar21,2 < uVar4);
        plVar8 = (long *)*plVar3;
        plVar15 = (long *)plVar8[0x37];
        plVar14 = plVar8 + 0x37;
      }
      plVar21 = plVar14;
      plVar19 = plVar15;
      if (plVar15 != (long *)0x0) {
        do {
          if (2 < (int)plVar19[4]) {
            plVar21 = plVar19;
          }
          plVar1 = plVar19 + ((int)plVar19[4] < 3);
          plVar19 = (long *)*plVar1;
        } while ((long *)*plVar1 != (long *)0x0);
        if (((plVar21 != plVar14) && ((int)plVar21[4] < 4)) &&
           (plVar21 = (long *)plVar21[5], plVar21 != (long *)0x0)) {
          (**(code **)(*plVar21 + 0x1f8))(plVar21,uVar7 < 2);
          param_3 = (char *)0x0;
          (**(code **)(*plVar21 + 0x388))(plVar21,1 < uVar7);
          plVar8 = (long *)*plVar3;
          plVar15 = (long *)plVar8[0x37];
          plVar14 = plVar8 + 0x37;
        }
        plVar21 = plVar14;
        plVar19 = plVar15;
        if (plVar15 != (long *)0x0) {
          do {
            if (4 < (int)plVar19[4]) {
              plVar21 = plVar19;
            }
            plVar1 = plVar19 + ((int)plVar19[4] < 5);
            plVar19 = (long *)*plVar1;
          } while ((long *)*plVar1 != (long *)0x0);
          if (((plVar21 != plVar14) && ((int)plVar21[4] < 6)) &&
             (plVar21 = (long *)plVar21[5], plVar21 != (long *)0x0)) {
            (**(code **)(*plVar21 + 0x1f8))(plVar21,uVar7 != 3);
            param_3 = (char *)0x0;
            (**(code **)(*plVar21 + 0x388))(plVar21,uVar7 == 3);
            plVar8 = (long *)*plVar3;
            plVar15 = (long *)plVar8[0x37];
            plVar14 = plVar8 + 0x37;
          }
          plVar21 = plVar14;
          plVar19 = plVar15;
          if (plVar15 != (long *)0x0) {
            do {
              if (5 < (int)plVar19[4]) {
                plVar21 = plVar19;
              }
              plVar1 = plVar19 + ((int)plVar19[4] < 6);
              plVar19 = (long *)*plVar1;
            } while ((long *)*plVar1 != (long *)0x0);
            if (((plVar21 != plVar14) && ((int)plVar21[4] < 7)) &&
               (plVar21 = (long *)plVar21[5], plVar21 != (long *)0x0)) {
              (**(code **)(*plVar21 + 0x1f8))(plVar21,1);
              param_3 = (char *)0x0;
              (**(code **)(*plVar21 + 0x388))(plVar21,0);
              plVar8 = (long *)*plVar3;
              plVar15 = (long *)plVar8[0x37];
              plVar14 = plVar8 + 0x37;
            }
            if (plVar15 != (long *)0x0) {
              plVar21 = plVar14;
              do {
                if (6 < (int)plVar15[4]) {
                  plVar21 = plVar15;
                }
                plVar15 = (long *)plVar15[(int)plVar15[4] < 7];
              } while (plVar15 != (long *)0x0);
              if (((plVar21 != plVar14) && ((int)plVar21[4] < 8)) &&
                 (plVar15 = (long *)plVar21[5], plVar15 != (long *)0x0)) {
                bVar5 = (uVar7 | 2) == 2;
                (**(code **)(*plVar15 + 0x1f8))(plVar15,bVar5);
                param_3 = (char *)0x0;
                (**(code **)(*plVar15 + 0x388))(plVar15,!bVar5);
                plVar8 = (long *)*plVar3;
              }
            }
          }
        }
      }
    }
    (**(code **)(*plVar8 + 0x60))(plVar8,1);
    FUN_7101ce19a0(lVar20,uVar7);
  }
  FUN_7101cdf660(lVar20,*(int *)(lVar20 + 0x280),param_3,param_4,param_5,param_6,param_7,param_8);
  if (*(long *)(*(long *)(lVar20 + 600) + 8) == 0) {
    return;
  }
  lVar16 = *(long *)(lVar20 + 0x2c8);
  plVar3 = (long *)(lVar20 + 0x2c8);
  if (lVar16 == 0) {
    local_178 = 0x101;
    local_170 = 1;
    local_16c = 1;
    local_16a = 1;
    local_168 = &DAT_41f0000000000000;
    local_180 = (byte ***)0x0;
    local_172 = 0;
    local_176 = 0;
    local_160 = 0;
    local_130 = (long *)0x0;
    local_100 = (long *)0x0;
    local_d0 = (long *)0x0;
    local_a0 = (long *)0x0;
    local_70 = (long *)0x0;
    local_60 = 0;
    local_1b0 = (undefined **)&DAT_71051860d0;
    local_190 = (long *)&local_1b0;
    FUN_7101989a30((long *)&local_1b0,alStack_c0);
    if (&local_1b0 == (undefined ***)local_190) {
      pcVar13 = *(code **)(*local_190 + 0x20);
LAB_7101caccfc:
      (*pcVar13)();
    }
    else if (local_190 != (long *)0x0) {
      pcVar13 = *(code **)(*local_190 + 0x28);
      goto LAB_7101caccfc;
    }
    ppppbVar12 = &local_180;
    FUN_7103770b30(plVar3,puVar2,(long ****)"selector_04",ppppbVar12,param_5,param_6,param_7,param_8
                  );
    FUN_71037717d0(plVar3,3,"set_parts_btn_04",ppppbVar12,param_5,param_6,param_7,param_8);
    FUN_71037717d0(plVar3,4,"set_parts_btn_05",ppppbVar12,param_5,param_6,param_7,param_8);
    pcVar10 = "set_detailbtn_dummy_00";
    FUN_71037717d0(plVar3,7,"set_detailbtn_dummy_00",ppppbVar12,param_5,param_6,param_7,param_8);
    if (*plVar3 == 0) {
      FUN_7103776290(&local_1b0,0,(long ****)pcVar10,ppppbVar12,param_5,param_6,param_7,param_8);
    }
    else {
      pcVar10 = (char *)0x3;
      FUN_7103771d60(&local_1b0,*plVar3,(long ****)0x3,ppppbVar12,param_5,param_6,param_7,param_8);
      plVar8 = local_1a8;
      if (*local_1a8 == 0) {
        ppppbVar22 = (byte ****)&DAT_7104867c2e;
      }
      else {
        ppppbVar22 = *(byte *****)(*local_1a8 + 0x88);
      }
      local_1b0 = &PTR_FUN_710523d9c8;
      local_1a8 = (long *)0x0;
      if (plVar8 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar8);
      }
      FUN_7103776640(&local_1b0,(long)puVar2,ppppbVar22,pcVar10,ppppbVar12,param_5,param_6,param_7,
                     param_8);
    }
    plVar8 = local_1a8;
    FUN_7103778300(0x3f800000,(long)local_1a8,0x71042a3672);
    local_1b0 = &PTR_FUN_710523d988;
    local_1a8 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      uVar9 = plVar8[3];
      plVar8[2] = (long)&PTR_FUN_710523d9a8;
      plVar8[3] = 0;
      if (uVar9 != 0) {
        FUN_710392eb40(uVar9);
      }
      FUN_710392eb40((ulong)plVar8);
    }
    if (*(long *)(lVar20 + 0x2c8) == 0) {
      FUN_7103776290(&local_1b0,0,(long ****)pcVar10,ppppbVar12,param_5,param_6,param_7,param_8);
    }
    else {
      pcVar10 = (char *)0x3;
      FUN_7103771d60(&local_1b0,*(long *)(lVar20 + 0x2c8),(long ****)0x3,ppppbVar12,param_5,param_6,
                     param_7,param_8);
      plVar8 = local_1a8;
      if (*local_1a8 == 0) {
        ppppbVar22 = (byte ****)&DAT_7104867c2e;
      }
      else {
        ppppbVar22 = *(byte *****)(*local_1a8 + 0x88);
      }
      local_1b0 = &PTR_FUN_710523d9c8;
      local_1a8 = (long *)0x0;
      if (plVar8 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar8);
      }
      FUN_7103776640(&local_1b0,lVar20 + 0x260,ppppbVar22,pcVar10,ppppbVar12,param_5,param_6,param_7
                     ,param_8);
    }
    plVar8 = local_1a8;
    FUN_7103778300(0x3f800000,(long)local_1a8,0x71042a3672);
    local_1b0 = &PTR_FUN_710523d988;
    local_1a8 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      uVar9 = plVar8[3];
      plVar8[2] = (long)&PTR_FUN_710523d9a8;
      plVar8[3] = 0;
      if (uVar9 != 0) {
        FUN_710392eb40(uVar9);
      }
      FUN_710392eb40((ulong)plVar8);
    }
    if (*plVar3 == 0) {
      FUN_7103776290(&local_1b0,0,(long ****)pcVar10,ppppbVar12,param_5,param_6,param_7,param_8);
    }
    else {
      pcVar10 = &DAT_00000004;
      FUN_7103771d60(&local_1b0,*plVar3,(long ****)&DAT_00000004,ppppbVar12,param_5,param_6,param_7,
                     param_8);
      plVar8 = local_1a8;
      if (*local_1a8 == 0) {
        ppppbVar22 = (byte ****)&DAT_7104867c2e;
      }
      else {
        ppppbVar22 = *(byte *****)(*local_1a8 + 0x88);
      }
      local_1b0 = &PTR_FUN_710523d9c8;
      local_1a8 = (long *)0x0;
      if (plVar8 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar8);
      }
      FUN_7103776640(&local_1b0,(long)puVar2,ppppbVar22,pcVar10,ppppbVar12,param_5,param_6,param_7,
                     param_8);
    }
    plVar8 = local_1a8;
    FUN_7103778300(0x3f800000,(long)local_1a8,0x710424fbb2);
    local_1b0 = &PTR_FUN_710523d988;
    local_1a8 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      uVar9 = plVar8[3];
      plVar8[2] = (long)&PTR_FUN_710523d9a8;
      plVar8[3] = 0;
      if (uVar9 != 0) {
        FUN_710392eb40(uVar9);
      }
      FUN_710392eb40((ulong)plVar8);
    }
    if (*plVar3 == 0) {
      FUN_7103776290(&local_1b0,0,(long ****)pcVar10,ppppbVar12,param_5,param_6,param_7,param_8);
    }
    else {
      uVar11 = 4;
      FUN_7103771d60(&local_1b0,*plVar3,(long ****)&DAT_00000004,ppppbVar12,param_5,param_6,param_7,
                     param_8);
      plVar8 = local_1a8;
      if (*local_1a8 == 0) {
        ppppbVar22 = (byte ****)&DAT_7104867c2e;
      }
      else {
        ppppbVar22 = *(byte *****)(*local_1a8 + 0x88);
      }
      local_1b0 = &PTR_FUN_710523d9c8;
      local_1a8 = (long *)0x0;
      if (plVar8 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar8);
      }
      FUN_7103776640(&local_1b0,lVar20 + 0x260,ppppbVar22,uVar11,ppppbVar12,param_5,param_6,param_7,
                     param_8);
    }
    plVar8 = local_1a8;
    FUN_7103778300(0x3f800000,(long)local_1a8,0x710424fbb2);
    local_1b0 = &PTR_FUN_710523d988;
    local_1a8 = (long *)0x0;
    if (plVar8 != (long *)0x0) {
      uVar9 = plVar8[3];
      plVar8[2] = (long)&PTR_FUN_710523d9a8;
      plVar8[3] = 0;
      if (uVar9 != 0) {
        FUN_710392eb40(uVar9);
      }
      FUN_710392eb40((ulong)plVar8);
    }
    if (alStack_90 == local_70) {
      pcVar13 = *(code **)(*local_70 + 0x20);
LAB_7101cad00c:
      (*pcVar13)();
    }
    else if (local_70 != (long *)0x0) {
      pcVar13 = *(code **)(*local_70 + 0x28);
      goto LAB_7101cad00c;
    }
    if (alStack_c0 == local_a0) {
      pcVar13 = *(code **)(*local_a0 + 0x20);
LAB_7101cad03c:
      (*pcVar13)();
    }
    else if (local_a0 != (long *)0x0) {
      pcVar13 = *(code **)(*local_a0 + 0x28);
      goto LAB_7101cad03c;
    }
    if (alStack_f0 == local_d0) {
      pcVar13 = *(code **)(*local_d0 + 0x20);
LAB_7101cad06c:
      (*pcVar13)();
    }
    else if (local_d0 != (long *)0x0) {
      pcVar13 = *(code **)(*local_d0 + 0x28);
      goto LAB_7101cad06c;
    }
    if (alStack_120 == local_100) {
      pcVar13 = *(code **)(*local_100 + 0x20);
LAB_7101cad09c:
      (*pcVar13)();
    }
    else if (local_100 != (long *)0x0) {
      pcVar13 = *(code **)(*local_100 + 0x28);
      goto LAB_7101cad09c;
    }
    if (alStack_150 == local_130) {
      pcVar13 = *(code **)(*local_130 + 0x20);
LAB_7101cad0cc:
      (*pcVar13)();
    }
    else if (local_130 != (long *)0x0) {
      pcVar13 = *(code **)(*local_130 + 0x28);
      goto LAB_7101cad0cc;
    }
    lVar16 = *plVar3;
  }
  lVar18 = *(long *)(lVar16 + 0x1b8);
  if (lVar18 != 0) {
    lVar17 = lVar16 + 0x1b8;
    do {
      if (6 < *(int *)(lVar18 + 0x20)) {
        lVar17 = lVar18;
      }
      lVar18 = *(long *)(lVar18 + (ulong)(*(int *)(lVar18 + 0x20) < 7) * 8);
    } while (lVar18 != 0);
    if (((lVar17 != lVar16 + 0x1b8) && (*(int *)(lVar17 + 0x20) < 8)) &&
       (plVar8 = *(long **)(lVar17 + 0x28), plVar8 != (long *)0x0)) {
      bVar5 = (uVar7 | 2) == 2;
      (**(code **)(*plVar8 + 0x1f8))(plVar8,bVar5);
      (**(code **)(*plVar8 + 0x388))(plVar8,!bVar5,0);
    }
  }
  FUN_7103771a80(plVar3,3,1);
  (**(code **)(**(long **)(lVar20 + 0x2c8) + 0x60))(*(long **)(lVar20 + 0x2c8),1);
  (**(code **)(**(long **)(lVar20 + 0x2c8) + 0x70))(*(long **)(lVar20 + 0x2c8),0);
  if (*(long *)(*(long *)(lVar20 + 600) + 8) == 0) {
    return;
  }
  plVar3 = (long *)(lVar20 + 0x2d8);
  if (*(long *)(lVar20 + 0x2d8) != 0) goto LAB_7101cad320;
  local_168 = &DAT_41f0000000000000;
  local_178 = 0x101;
  ppppbVar12 = &local_180;
  local_180 = (byte ***)0x0;
  local_172 = 0;
  local_170 = 1;
  local_16c = 1;
  local_16a = 1;
  local_160 = 0;
  local_130 = (long *)0x0;
  local_100 = (long *)0x0;
  local_d0 = (long *)0x0;
  local_a0 = (long *)0x0;
  local_70 = (long *)0x0;
  local_60 = 0;
  local_176 = 1;
  FUN_7103770b30(plVar3,puVar2,(long ****)"selector_03",ppppbVar12,param_5,param_6,param_7,param_8);
  FUN_71037717d0(plVar3,8,"set_parts_btn_like",ppppbVar12,param_5,param_6,param_7,param_8);
  FUN_7103771930(*plVar3,8,(long ****)&DAT_00000009,(byte ****)0x0,param_5,param_6,param_7,param_8);
  if (alStack_90 == local_70) {
    pcVar13 = *(code **)(*local_70 + 0x20);
LAB_7101cad25c:
    (*pcVar13)();
  }
  else if (local_70 != (long *)0x0) {
    pcVar13 = *(code **)(*local_70 + 0x28);
    goto LAB_7101cad25c;
  }
  if (alStack_c0 == local_a0) {
    pcVar13 = *(code **)(*local_a0 + 0x20);
LAB_7101cad28c:
    (*pcVar13)();
  }
  else if (local_a0 != (long *)0x0) {
    pcVar13 = *(code **)(*local_a0 + 0x28);
    goto LAB_7101cad28c;
  }
  if (alStack_f0 == local_d0) {
    pcVar13 = *(code **)(*local_d0 + 0x20);
LAB_7101cad2bc:
    (*pcVar13)();
  }
  else if (local_d0 != (long *)0x0) {
    pcVar13 = *(code **)(*local_d0 + 0x28);
    goto LAB_7101cad2bc;
  }
  if (alStack_120 == local_100) {
    pcVar13 = *(code **)(*local_100 + 0x20);
LAB_7101cad2ec:
    (*pcVar13)();
  }
  else if (local_100 != (long *)0x0) {
    pcVar13 = *(code **)(*local_100 + 0x28);
    goto LAB_7101cad2ec;
  }
  if (alStack_150 == local_130) {
    pcVar13 = *(code **)(*local_130 + 0x20);
  }
  else {
    if (local_130 == (long *)0x0) goto LAB_7101cad320;
    pcVar13 = *(code **)(*local_130 + 0x28);
  }
  (*pcVar13)();
LAB_7101cad320:
  FUN_7103771a80(plVar3,8,1);
  if (*(char *)(lVar20 + 0x305) == '\0') {
    bVar5 = *(char *)(lVar20 + 0x304) == '\0';
  }
  else {
    bVar5 = false;
  }
  (**(code **)(*(long *)*plVar3 + 0x60))((long *)*plVar3,bVar5);
  (**(code **)(*(long *)*plVar3 + 0x70))((long *)*plVar3,0);
  return;
}

