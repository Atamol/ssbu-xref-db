// addr:      7101df5880
// offset:    0x1df5880
// name:      FUN_7101df5880
// mangled:   
// signature: undefined __cdecl FUN_7101df5880(long param_1, undefined8 param_2, undefined8 param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101df5880(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined2 *puVar1;
  ushort uVar2;
  short sVar3;
  uint uVar4;
  long *plVar5;
  byte bVar6;
  long ****pppplVar7;
  undefined8 uVar8;
  byte ****ppppbVar9;
  undefined8 uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  int iVar17;
  uint uVar18;
  ulong uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  undefined **local_100;
  long *local_f8 [8];
  undefined **local_b8;
  long *local_b0;
  undefined **local_a8;
  ulong local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined4 local_88;
  long *local_80;
  long *local_78;
  undefined8 uStack_70;
  
  if (*(char *)(param_1 + 0x6c1) == '\0') {
    FUN_7103776910(&local_100,param_1 + 0x18,(long ****)"set_check_visible",param_3,param_4,param_5,
                   param_6,param_7,param_8);
    plVar5 = local_f8[0];
    lVar13 = *local_f8[0];
    if (lVar13 != 0) {
      *(byte *)(lVar13 + 0x58) = *(byte *)(lVar13 + 0x58) & 0xfe;
    }
    local_100 = &PTR_FUN_710523d9a8;
    local_f8[0] = (long *)0x0;
    if (plVar5 == (long *)0x0) {
      return;
    }
  }
  else {
    lVar13 = param_1 + 0x18;
    FUN_7103776910(&local_100,lVar13,(long ****)"set_check_visible",param_3,param_4,param_5,param_6,
                   param_7,param_8);
    plVar5 = local_f8[0];
    lVar11 = *local_f8[0];
    if (lVar11 != 0) {
      *(byte *)(lVar11 + 0x58) = *(byte *)(lVar11 + 0x58) | 1;
    }
    local_100 = &PTR_FUN_710523d9a8;
    local_f8[0] = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar5);
    }
    FUN_7103776910(&local_100,lVar13,(long ****)"set_txt_num_check",param_3,param_4,param_5,param_6,
                   param_7,param_8);
    ppppbVar9 = (byte ****)(ulong)*(uint *)(param_1 + 0x6c4);
    pppplVar7 = (long ****)0x1;
    FUN_710377a280((long)&local_100,(byte *)"mnu_spirits_return_check_n",1);
    plVar5 = local_f8[0];
    local_100 = &PTR_FUN_710523d9a8;
    local_f8[0] = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar5);
    }
    local_80 = (long *)0x0;
    local_78 = (long *)0x0;
    uStack_70 = 0;
    FUN_7101e02ee0(param_1 + 0x60,&local_80,pppplVar7,ppppbVar9,param_5,param_6,param_7,param_8);
    iVar17 = 0;
    local_88 = 0;
    local_98 = 0;
    uStack_90 = 0;
    if (local_78 != local_80) {
      iVar17 = 0;
      plVar12 = local_78;
      plVar5 = local_80;
      uVar15 = 1;
      uVar16 = 0;
      do {
        uVar19 = uVar15;
        if (*(ushort *)plVar5[uVar16] == 0xffff) {
          uVar14 = (long)plVar12 - (long)plVar5 >> 3;
        }
        else {
          uVar4 = FUN_71025ca5d0((ulong)*(ushort *)plVar5[uVar16]);
          plVar12 = local_78;
          plVar5 = local_80;
          uVar14 = (long)local_78 - (long)local_80 >> 3;
          if (uVar14 <= uVar16) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_out_of_range();
          }
          sVar3 = *(short *)(local_80[uVar16] + 8);
          uVar15 = 0;
          if ((sVar3 != -1) && (sVar3 < 2000)) {
            lVar11 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x1d8);
            uVar2 = *(ushort *)(lVar11 + (long)(int)sVar3 * 2 + 0x60);
            uVar15 = (ulong)uVar2;
            uVar16 = (*(long *)(lVar11 + 0x28) - *(long *)(lVar11 + 0x20) >> 6) *
                     -0x3333333333333333;
            if ((uint)uVar2 < (uint)uVar16) {
              puVar1 = (undefined2 *)(*(long *)(lVar11 + 0x20) + uVar15 * 0x140);
              if (uVar16 < uVar15 || uVar16 - uVar15 == 0) {
                puVar1 = &DAT_7105182b08;
              }
              if (*(char *)(puVar1 + 0x2f) == '\0') {
                if (2 < *(byte *)(puVar1 + 0x36) - 1) goto LAB_7101df5a54;
                uVar18 = 0x20301 >> (ulong)((*(byte *)(puVar1 + 0x36) - 1 & 3) << 3);
                uVar15 = (ulong)uVar18;
                if (4 < (uVar18 & 0xff)) {
                    /* WARNING: Subroutine does not return */
                  abort();
                }
              }
              else {
                uVar15 = 4;
              }
            }
            else {
LAB_7101df5a54:
              uVar15 = 0;
            }
          }
          lVar11 = (uVar15 & 0xff) * 4;
          iVar17 = uVar4 + iVar17;
          *(int *)((long)&local_98 + lVar11) = *(int *)((long)&local_98 + lVar11) + 1;
        }
        uVar15 = (ulong)((int)uVar19 + 1);
        uVar16 = uVar19;
      } while (uVar19 < uVar14);
    }
    if (*(int *)(param_1 + 0x6d8) != iVar17) {
      *(int *)(param_1 + 0x6d8) = iVar17;
    }
    if (iVar17 == 0) {
      FUN_7103776640(&local_a8,lVar13,(byte ****)"set_parts_sp",pppplVar7,ppppbVar9,param_5,param_6,
                     param_7,param_8);
      FUN_7103776910(&local_100,(long)&local_a8,(long ****)"set_txt_sp_spend",pppplVar7,ppppbVar9,
                     param_5,param_6,param_7,param_8);
      plVar5 = local_f8[0];
      lVar11 = *local_f8[0];
      if (lVar11 != 0) {
        *(byte *)(lVar11 + 0x58) = *(byte *)(lVar11 + 0x58) & 0xfe;
      }
      local_100 = &PTR_FUN_710523d9a8;
      local_f8[0] = (long *)0x0;
      if (plVar5 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar5);
      }
    }
    else {
      FUN_7103776640(&local_a8,lVar13,(byte ****)"set_parts_sp",pppplVar7,ppppbVar9,param_5,param_6,
                     param_7,param_8);
      FUN_7103776910(&local_100,(long)&local_a8,(long ****)"set_txt_sp_spend",pppplVar7,ppppbVar9,
                     param_5,param_6,param_7,param_8);
      ppppbVar9 = (byte ****)(ulong)*(uint *)(param_1 + 0x6d8);
      pppplVar7 = (long ****)0x1;
      FUN_710377a280((long)&local_100,(byte *)"mnu_spirits_return_confirm_sp",1);
      plVar5 = local_f8[0];
      local_100 = &PTR_FUN_710523d9a8;
      local_f8[0] = (long *)0x0;
      if (plVar5 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar5);
      }
      uVar15 = local_a0;
      local_a8 = &PTR_FUN_710523d988;
      local_a0 = 0;
      if (uVar15 != 0) {
        uVar16 = *(ulong *)(uVar15 + 0x18);
        *(undefined ***)(uVar15 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar15 + 0x18) = 0;
        if (uVar16 != 0) {
          FUN_710392eb40(uVar16);
        }
        FUN_710392eb40(uVar15);
      }
      FUN_7103776640(&local_a8,lVar13,(byte ****)"set_parts_sp",pppplVar7,ppppbVar9,param_5,param_6,
                     param_7,param_8);
      FUN_7103776910(&local_100,(long)&local_a8,(long ****)"set_txt_sp_spend",pppplVar7,ppppbVar9,
                     param_5,param_6,param_7,param_8);
      plVar5 = local_f8[0];
      lVar11 = *local_f8[0];
      if (lVar11 != 0) {
        *(byte *)(lVar11 + 0x58) = *(byte *)(lVar11 + 0x58) | 1;
      }
      local_100 = &PTR_FUN_710523d9a8;
      local_f8[0] = (long *)0x0;
      if (plVar5 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar5);
      }
    }
    uVar15 = local_a0;
    local_a8 = &PTR_FUN_710523d988;
    local_a0 = 0;
    if (uVar15 != 0) {
      uVar16 = *(ulong *)(uVar15 + 0x18);
      *(undefined ***)(uVar15 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar15 + 0x18) = 0;
      if (uVar16 != 0) {
        FUN_710392eb40(uVar16);
      }
      FUN_710392eb40(uVar15);
    }
    uVar18 = 0;
    uVar4 = 0;
    uVar20 = 0;
    do {
      FUN_7103776640(&local_100,lVar13,(byte ****)"set_parts_dialog_base",pppplVar7,ppppbVar9,
                     param_5,param_6,param_7,param_8);
      uVar15 = (ulong)uVar18;
      FUN_7103776640(&local_a8,(long)&local_100,(byte ****)"set_parts_icon_base_%02d",uVar15,
                     ppppbVar9,param_5,param_6,param_7,param_8);
      plVar5 = local_f8[0];
      local_100 = &PTR_FUN_710523d988;
      local_f8[0] = (long *)0x0;
      if (plVar5 != (long *)0x0) {
        uVar16 = plVar5[3];
        plVar5[2] = (long)&PTR_FUN_710523d9a8;
        plVar5[3] = 0;
        if (uVar16 != 0) {
          FUN_710392eb40(uVar16);
        }
        FUN_710392eb40((ulong)plVar5);
      }
      FUN_7103776640(&local_100,lVar13,(byte ****)"set_parts_dialog_base",uVar15,ppppbVar9,param_5,
                     param_6,param_7,param_8);
      pppplVar7 = (long ****)(ulong)uVar18;
      FUN_7103776910(&local_b8,(long)&local_100,(long ****)"set_txt_%02d",pppplVar7,ppppbVar9,
                     param_5,param_6,param_7,param_8);
      plVar5 = local_f8[0];
      local_100 = &PTR_FUN_710523d988;
      local_f8[0] = (long *)0x0;
      if (plVar5 != (long *)0x0) {
        uVar15 = plVar5[3];
        plVar5[2] = (long)&PTR_FUN_710523d9a8;
        plVar5[3] = 0;
        if (uVar15 != 0) {
          FUN_710392eb40(uVar15);
        }
        FUN_710392eb40((ulong)plVar5);
      }
      uVar15 = local_a0;
      plVar5 = local_b0;
      if (uVar20 < 5) {
        bVar6 = (&DAT_71045459b8)[(int)uVar20];
        uVar22 = *(uint *)((long)&local_98 + (ulong)bVar6 * 4);
        uVar21 = uVar20 + 1;
        if ((int)uVar22 < 1) {
          if (4 < uVar21) goto LAB_7101df5e58;
          bVar6 = (&DAT_71045459b9)[(int)uVar20];
          uVar22 = *(uint *)((long)&local_98 + (ulong)bVar6 * 4);
          uVar21 = uVar20 + 2;
          if ((int)uVar22 < 1) {
            if (4 < uVar21) goto LAB_7101df5e58;
            bVar6 = (&DAT_71045459ba)[(int)uVar20];
            uVar22 = *(uint *)((long)&local_98 + (ulong)bVar6 * 4);
            uVar21 = uVar20 + 3;
            if ((int)uVar22 < 1) {
              if (4 < uVar21) goto LAB_7101df5e58;
              bVar6 = (&DAT_71045459bb)[(int)uVar20];
              uVar22 = *(uint *)((long)&local_98 + (ulong)bVar6 * 4);
              uVar21 = uVar20 + 4;
              if ((int)uVar22 < 1) {
                if (4 < uVar21) goto LAB_7101df5e58;
                bVar6 = (&DAT_71045459bc)[(int)uVar20];
                uVar22 = *(uint *)((long)&local_98 + (ulong)bVar6 * 4);
                uVar21 = uVar20 + 5;
                if ((int)uVar22 < 1) {
                  if (4 < uVar21) goto LAB_7101df5e58;
                  bVar6 = (&DAT_71045459bd)[(int)uVar20];
                  uVar21 = uVar20 + 6;
                  uVar22 = *(uint *)((long)&local_98 + (ulong)bVar6 * 4);
                }
              }
            }
          }
        }
        if ((*(long *)(local_a0 + 8) != 0) &&
           (lVar11 = *(long *)(*(long *)(local_a0 + 8) + 0x18), lVar11 != 0)) {
          *(byte *)(lVar11 + 0x58) = *(byte *)(lVar11 + 0x58) | 1;
        }
        lVar11 = *local_b0;
        if (lVar11 != 0) {
          *(byte *)(lVar11 + 0x58) = *(byte *)(lVar11 + 0x58) | 1;
        }
        uVar8 = 0xffffffff;
        uVar10 = 0;
        param_5 = (long ****)0x0;
        FUN_71025b12c0((long)&local_a8,bVar6,-1,0,0,param_6,param_7,param_8);
        FUN_71003a4ca0((uint *)&local_100,"mnu_spirits_return_confirm_n_%02d",(ulong)uVar18,uVar8,
                       uVar10,param_5,param_6,param_7,param_8);
        pppplVar7 = (long ****)0x1;
        ppppbVar9 = (byte ****)(ulong)uVar22;
        FUN_710377a280((long)&local_b8,(byte *)local_f8,1);
        uVar4 = uVar4 + 1;
        uVar20 = uVar21;
      }
      else {
LAB_7101df5e58:
        if ((*(long *)(local_a0 + 8) != 0) &&
           (lVar11 = *(long *)(*(long *)(local_a0 + 8) + 0x18), lVar11 != 0)) {
          *(byte *)(lVar11 + 0x58) = *(byte *)(lVar11 + 0x58) & 0xfe;
        }
        lVar11 = *local_b0;
        if (lVar11 != 0) {
          *(byte *)(lVar11 + 0x58) = *(byte *)(lVar11 + 0x58) & 0xfe;
        }
      }
      local_b0 = (long *)0x0;
      local_b8 = &PTR_FUN_710523d9a8;
      if (plVar5 != (long *)0x0) {
        local_b0 = (long *)0x0;
        local_b8 = &PTR_FUN_710523d9a8;
        FUN_710392eb40((ulong)plVar5);
      }
      local_a8 = &PTR_FUN_710523d988;
      local_a0 = 0;
      if (uVar15 != 0) {
        uVar16 = *(ulong *)(uVar15 + 0x18);
        *(undefined ***)(uVar15 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar15 + 0x18) = 0;
        if (uVar16 != 0) {
          FUN_710392eb40(uVar16);
        }
        FUN_710392eb40(uVar15);
      }
      uVar18 = uVar18 + 1;
    } while (uVar18 != 5);
    if (uVar4 != 0) {
      FUN_7103776640(&local_a8,lVar13,(byte ****)"set_parts_dialog_base",pppplVar7,ppppbVar9,param_5
                     ,param_6,param_7,param_8);
      FUN_71003a4ca0((uint *)&local_100,"list_num_%02d",(ulong)uVar4,pppplVar7,ppppbVar9,param_5,
                     param_6,param_7,param_8);
      uVar15 = local_a0;
      FUN_7103778300(0x3f800000,local_a0,(long)local_f8);
      local_a8 = &PTR_FUN_710523d988;
      local_a0 = 0;
      if (uVar15 != 0) {
        uVar16 = *(ulong *)(uVar15 + 0x18);
        *(undefined ***)(uVar15 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar15 + 0x18) = 0;
        if (uVar16 != 0) {
          FUN_710392eb40(uVar16);
        }
        FUN_710392eb40(uVar15);
      }
    }
    if (local_80 == (long *)0x0) {
      return;
    }
    local_78 = local_80;
    plVar5 = local_80;
  }
  FUN_710392eb40((ulong)plVar5);
  return;
}

