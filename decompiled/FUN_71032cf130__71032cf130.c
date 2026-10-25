// addr:      71032cf130
// offset:    0x32cf130
// name:      FUN_71032cf130
// mangled:   
// signature: undefined __cdecl FUN_71032cf130(undefined * * * * * * * param_1, undefined8 * param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71032cf130(undefined *******param_1,undefined8 *param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *********pppppppppuVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *******pppppppuVar4;
  undefined *******pppppppuVar5;
  ulong uVar6;
  undefined ********ppppppppuVar7;
  char *pcVar8;
  undefined8 *extraout_x1;
  undefined8 *extraout_x1_00;
  undefined8 *puVar9;
  long ****pppplVar10;
  undefined ********ppppppppuVar11;
  long lVar12;
  undefined ******ppppppuVar13;
  byte bVar14;
  undefined *********pppppppppuVar15;
  ulong uVar16;
  float fVar17;
  float fVar18;
  undefined *******apppppppuStack_118 [2];
  undefined *******apppppppuStack_108 [2];
  undefined *******apppppppuStack_f8 [2];
  undefined *******pppppppuStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined ********local_c8;
  undefined ********local_c0;
  undefined ********local_b8;
  undefined ********local_b0;
  undefined ********local_a8;
  undefined ********local_a0;
  undefined *******local_98;
  undefined *******local_90;
  long ***local_88;
  undefined *******local_80;
  ushort local_74 [2];
  
  iVar2 = *(int *)param_3;
  *(undefined4 *)((long)param_1 + 0xbe4) = 0;
  *(int *)(param_1 + 0x17c) = iVar2;
  puVar9 = param_2;
  pppplVar10 = param_3;
  if (0 < iVar2) {
    local_a0 = apppppppuStack_118;
    local_a8 = apppppppuStack_108;
    local_b0 = apppppppuStack_f8;
    local_b8 = &pppppppuStack_e8;
    local_c0 = (undefined ********)&local_b8;
    local_c8 = (undefined ********)&local_a8;
    uVar16 = 0;
    uStack_d8 = 0x3f4ccccd3f4ccccd;
    local_e0 = 0x3f4ccccd3f4ccccd;
    pppppppppuVar15 = (undefined *********)param_1;
    do {
      if (9 < uVar16) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      FUN_7103776390(&local_98,param_2,pppplVar10,param_4,param_5,param_6,param_7,param_8);
      if ((undefined *********)&local_98 != pppppppppuVar15) {
        *pppppppppuVar15[1] = (undefined *******)*local_90;
        pppppppppuVar15[1][1] = (undefined *******)local_90[1];
        ppppppppuVar11 = pppppppppuVar15[1];
        if (ppppppppuVar11 != (undefined ********)local_90) {
          *ppppppppuVar11[3] = (undefined ******)*local_90[3];
          ppppppppuVar11[3][1] = (undefined ******)local_90[3][1];
          ppppppppuVar11[3][2] = (undefined ******)local_90[3][2];
          ppppppppuVar11[3][3] = (undefined ******)local_90[3][3];
        }
      }
      *(undefined4 *)((long)pppppppppuVar15 + 0x14) = *(undefined4 *)(param_3 + 1);
      *(int *)(pppppppppuVar15 + 3) = (int)uVar16;
      FUN_7103776640(&local_88,(long)&local_98,(byte ****)"set_medal_%02d",uVar16 & 0xffffffff,
                     param_4,param_5,param_6,param_7,param_8);
      pppppppuVar4 = local_80;
      if ((undefined *********)local_c8 != pppppppppuVar15) {
        local_80 = (undefined *******)0x0;
        ppppppppuVar11 = pppppppppuVar15[5];
        pppppppppuVar15[5] = (undefined ********)pppppppuVar4;
        if (ppppppppuVar11 != (undefined ********)0x0) {
          pppppppuVar4 = ppppppppuVar11[3];
          ppppppppuVar11[2] = (undefined *******)&PTR_FUN_710523d9a8;
          ppppppppuVar11[3] = (undefined *******)0x0;
          if (pppppppuVar4 != (undefined *******)0x0) {
            FUN_710392eb40((ulong)pppppppuVar4);
          }
          FUN_710392eb40((ulong)ppppppppuVar11);
        }
      }
      pppppppuVar4 = local_80;
      local_88 = (long ***)&PTR_FUN_710523d988;
      local_80 = (undefined *******)0x0;
      if ((undefined ********)pppppppuVar4 != (undefined ********)0x0) {
        pppppppuVar5 = (undefined *******)pppppppuVar4[3];
        pppppppuVar4[2] = (undefined ******)&PTR_FUN_710523d9a8;
        pppppppuVar4[3] = (undefined ******)0x0;
        if (pppppppuVar5 != (undefined *******)0x0) {
          FUN_710392eb40((ulong)pppppppuVar5);
        }
        FUN_710392eb40((ulong)pppppppuVar4);
      }
      pppplVar10 = (long ****)(uVar16 & 0xffffffff);
      FUN_7103776910(&local_88,(long)&local_98,(long ****)"set_medal_%02d",pppplVar10,param_4,
                     param_5,param_6,param_7,param_8);
      pppppppuVar4 = local_80;
      if ((undefined *********)local_c0 != pppppppppuVar15) {
        local_80 = (undefined *******)0x0;
        ppppppppuVar11 = pppppppppuVar15[7];
        pppppppppuVar15[7] = (undefined ********)pppppppuVar4;
        if (ppppppppuVar11 != (undefined ********)0x0) {
          FUN_710392eb40((ulong)ppppppppuVar11);
        }
      }
      pppppppuVar4 = local_80;
      local_88 = (long ***)&PTR_FUN_710523d9a8;
      local_80 = (undefined *******)0x0;
      if ((undefined ********)pppppppuVar4 != (undefined ********)0x0) {
        FUN_710392eb40((ulong)pppppppuVar4);
      }
      if (*pppppppppuVar15[7] == (undefined *******)0x0) {
        pppppppuVar4 = (undefined *******)0x0;
      }
      else {
        pppppppuVar4 = (undefined *******)(*pppppppppuVar15[7])[3];
      }
      ppppppppuVar11 =
           (undefined ********)
           FUN_710392e290(0x10,0x20,pppplVar10,param_4,param_5,param_6,param_7,param_8);
      if (ppppppppuVar11 == (undefined ********)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_74[0] = 0;
          local_74[1] = 0;
          local_88 = (long ***)&SUB_00000020;
          pppplVar10 = &local_88;
          uVar6 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_74);
          if (((uVar6 & 1) != 0) &&
             (ppppppppuVar11 =
                   (undefined ********)
                   FUN_710392e290(0x10,0x20,pppplVar10,param_4,param_5,param_6,param_7,param_8),
             ppppppppuVar11 != (undefined ********)0x0)) goto LAB_71032cf3a0;
        }
        ppppppppuVar11 = (undefined ********)0x0;
      }
LAB_71032cf3a0:
      ppppppppuVar11[2] = (undefined *******)0x0;
      ppppppppuVar11[3] = (undefined *******)0x0;
      *ppppppppuVar11 = (undefined *******)0x0;
      ppppppppuVar11[1] = (undefined *******)0x0;
      if (pppppppuVar4 != (undefined *******)0x0) {
        *ppppppppuVar11 = pppppppuVar4;
        pppppppuVar5 = (undefined *******)FUN_7103772ed0((long *)pppppppuVar4);
        ppppppppuVar11[1] = pppppppuVar5;
        pppppppuVar5 = (undefined *******)FUN_7103772fe0((long *)pppppppuVar4);
        ppppppppuVar11[2] = pppppppuVar5;
        pppppppuVar4 = (undefined *******)FUN_71037730f0((long *)pppppppuVar4);
        ppppppppuVar11[3] = pppppppuVar4;
      }
      ppppppppuVar7 = pppppppppuVar15[0xb];
      pppppppppuVar15[0xb] = ppppppppuVar11;
      if (ppppppppuVar7 != (undefined ********)0x0) {
        FUN_710392eb40((ulong)ppppppppuVar7);
      }
      FUN_7103776910(&local_88,(long)pppppppppuVar15,(long ****)"set_medal_over_%02d",
                     uVar16 & 0xffffffff,param_4,param_5,param_6,param_7,param_8);
      pppppppuVar4 = local_80;
      if ((undefined *********)local_b8 != pppppppppuVar15) {
        local_80 = (undefined *******)0x0;
        ppppppppuVar11 = pppppppppuVar15[0xd];
        pppppppppuVar15[0xd] = (undefined ********)pppppppuVar4;
        if (ppppppppuVar11 != (undefined ********)0x0) {
          FUN_710392eb40((ulong)ppppppppuVar11);
        }
      }
      pppppppuVar4 = local_80;
      local_88 = (long ***)&PTR_FUN_710523d9a8;
      local_80 = (undefined *******)0x0;
      if ((undefined ********)pppppppuVar4 != (undefined ********)0x0) {
        FUN_710392eb40((ulong)pppppppuVar4);
      }
      uVar6 = uVar16 & 0xffffffff;
      pppppppppuVar1 = pppppppppuVar15 + 4;
      FUN_7103776910(&local_88,(long)pppppppppuVar15,(long ****)"set_medal_hold_%02d",uVar6,param_4,
                     param_5,param_6,param_7,param_8);
      pppppppuVar4 = local_80;
      if ((undefined *********)local_b0 != pppppppppuVar15) {
        local_80 = (undefined *******)0x0;
        ppppppppuVar11 = pppppppppuVar15[0xf];
        pppppppppuVar15[0xf] = (undefined ********)pppppppuVar4;
        if (ppppppppuVar11 != (undefined ********)0x0) {
          FUN_710392eb40((ulong)ppppppppuVar11);
        }
      }
      pppppppuVar4 = local_80;
      local_88 = (long ***)&PTR_FUN_710523d9a8;
      local_80 = (undefined *******)0x0;
      if ((undefined ********)pppppppuVar4 != (undefined ********)0x0) {
        FUN_710392eb40((ulong)pppppppuVar4);
      }
      *pppppppppuVar15[9] = *pppppppppuVar15[0xb];
      pppppppppuVar15[9][1] = pppppppppuVar15[0xb][1];
      pppppppppuVar15[9][2] = pppppppppuVar15[0xb][2];
      pppppppppuVar15[9][3] = pppppppppuVar15[0xb][3];
      FUN_71037780e0(&local_88,(long)pppppppppuVar1,(long ****)&DAT_71043ef051,uVar6,param_4,param_5
                     ,param_6,param_7,param_8);
      pppppppuVar4 = local_80;
      if ((undefined *********)local_a8 != pppppppppuVar15) {
        local_80 = (undefined *******)0x0;
        ppppppppuVar11 = pppppppppuVar15[0x11];
        pppppppppuVar15[0x11] = (undefined ********)pppppppuVar4;
        if (ppppppppuVar11 != (undefined ********)0x0) {
          FUN_710392eb40((ulong)ppppppppuVar11);
        }
      }
      pppppppuVar4 = local_80;
      local_88 = (long ***)&PTR_FUN_710523d9e8;
      local_80 = (undefined *******)0x0;
      if ((undefined ********)pppppppuVar4 != (undefined ********)0x0) {
        FUN_710392eb40((ulong)pppppppuVar4);
      }
      FUN_71037780e0(&local_88,(long)pppppppppuVar1,(long ****)"catch",uVar6,param_4,param_5,param_6
                     ,param_7,param_8);
      pppppppuVar4 = local_80;
      if ((undefined *********)local_a0 != pppppppppuVar15) {
        local_80 = (undefined *******)0x0;
        ppppppppuVar11 = pppppppppuVar15[0x13];
        pppppppppuVar15[0x13] = (undefined ********)pppppppuVar4;
        if (ppppppppuVar11 != (undefined ********)0x0) {
          FUN_710392eb40((ulong)ppppppppuVar11);
        }
      }
      pppppppuVar4 = local_80;
      local_88 = (long ***)&PTR_FUN_710523d9e8;
      local_80 = (undefined *******)0x0;
      if ((undefined ********)pppppppuVar4 != (undefined ********)0x0) {
        FUN_710392eb40((ulong)pppppppuVar4);
      }
      FUN_7103776910(&local_88,(long)pppppppppuVar1,(long ****)&DAT_71044641f6,uVar6,param_4,param_5
                     ,param_6,param_7,param_8);
      pppppppuVar4 = local_80;
      lVar12 = (long)*local_80;
      fVar17 = 0.0;
      fVar18 = 0.0;
      if (lVar12 != 0) {
        fVar18 = ABS(*(float *)(lVar12 + 0x50));
        fVar17 = ABS(*(float *)(lVar12 + 0x54));
      }
      pppppppppuVar15[0x15] = (undefined ********)0x0;
      pppppppppuVar15[0x14] = (undefined ********)CONCAT44(fVar17,fVar18);
      local_88 = (long ***)&PTR_FUN_710523d9a8;
      local_80 = (undefined *******)0x0;
      if (pppppppuVar4 != (undefined *******)0x0) {
        FUN_710392eb40((ulong)pppppppuVar4);
      }
      ppppppuVar13 = *pppppppppuVar15[5][3];
      if (ppppppuVar13 != (undefined ******)0x0) {
        uVar3 = *(undefined4 *)(pppppppppuVar15 + 0x21);
        *(undefined4 *)(ppppppuVar13 + 9) = uVar3;
        *(undefined4 *)((long)ppppppuVar13 + 0x4c) = uVar3;
        *(byte *)(ppppppuVar13 + 0xb) = *(byte *)(ppppppuVar13 + 0xb) | 0x10;
      }
      fVar17 = *(float *)(pppppppppuVar15 + 0x20);
      pppppppppuVar15[0x17] =
           (undefined ********)
           CONCAT44((float)((ulong)pppppppppuVar15[0x15] >> 0x20) * fVar17 *
                    (float)((ulong)uStack_d8 >> 0x20),
                    SUB84(pppppppppuVar15[0x15],0) * fVar17 * (float)uStack_d8);
      pppppppppuVar15[0x16] =
           (undefined ********)
           CONCAT44((float)((ulong)pppppppppuVar15[0x14] >> 0x20) * fVar17 *
                    (float)((ulong)local_e0 >> 0x20),
                    SUB84(pppppppppuVar15[0x14],0) * fVar17 * (float)local_e0);
      FUN_7103776910(&local_88,(long)pppppppppuVar1,(long ****)"set_txt_number",uVar6,param_4,
                     param_5,param_6,param_7,param_8);
      pppppppuVar4 = local_80;
      if (local_80[2] != (undefined ******)0x0) {
        param_4 = (byte ****)0x0;
        local_74[0] = 0;
        local_74[1] = 0;
        FUN_71037a2270((long *)local_80[2],local_74,0,0);
      }
      if (*(int *)((long)param_3 + 4) == 1) {
        ppppppppuVar11 = pppppppppuVar15[5];
        pcVar8 = "txt_check";
LAB_71032cf648:
        FUN_7103778300(0x3f800000,(long)ppppppppuVar11,(long)pcVar8);
        lVar12 = (long)*pppppppuVar4;
        if (lVar12 != 0) {
          bVar14 = *(byte *)(lVar12 + 0x58) & 0xfe;
LAB_71032cf688:
          *(byte *)(lVar12 + 0x58) = bVar14;
        }
      }
      else {
        if (*(int *)((long)param_3 + 4) == 2) {
          ppppppppuVar11 = pppppppppuVar15[5];
          pcVar8 = "txt_on";
          goto LAB_71032cf648;
        }
        FUN_7103778300(0x3f800000,(long)pppppppppuVar15[5],0x71042b27a3);
        lVar12 = (long)*pppppppuVar4;
        if (lVar12 != 0) {
          bVar14 = *(byte *)(lVar12 + 0x58) | 1;
          goto LAB_71032cf688;
        }
      }
      FUN_7103778760((long)pppppppppuVar15[5],0x71044641ee);
      FUN_7103778760((long)pppppppppuVar15[5],0x71042f63e8);
      FUN_7103778760((long)pppppppppuVar15[5],0x7104441f72);
      FUN_7103778760((long)pppppppppuVar15[5],0x71042d4aad);
      local_88 = (long ***)&PTR_FUN_710523d9a8;
      local_80 = (undefined *******)0x0;
      FUN_710392eb40((ulong)pppppppuVar4);
      pppppppuVar4 = local_90;
      local_98 = (undefined *******)&PTR_FUN_710523d988;
      local_90 = (undefined *******)0x0;
      if ((undefined ********)pppppppuVar4 != (undefined ********)0x0) {
        pppppppuVar5 = (undefined *******)pppppppuVar4[3];
        pppppppuVar4[2] = (undefined ******)&PTR_FUN_710523d9a8;
        pppppppuVar4[3] = (undefined ******)0x0;
        if (pppppppuVar5 != (undefined *******)0x0) {
          FUN_710392eb40((ulong)pppppppuVar5);
        }
        FUN_710392eb40((ulong)pppppppuVar4);
      }
      pppplVar10 = (long ****)(uVar16 & 0xffffffff);
      FUN_7103776640(&local_88,(long)param_2,(byte ****)"set_medal_%02d",pppplVar10,param_4,param_5,
                     param_6,param_7,param_8);
      pppppppuVar4 = local_80;
      if ((*(long *)((long)local_80 + 8) != 0) &&
         (lVar12 = *(long *)(*(long *)((long)local_80 + 8) + 0x18), lVar12 != 0)) {
        *(byte *)(lVar12 + 0x58) = *(byte *)(lVar12 + 0x58) & 0xfe;
      }
      local_88 = (long ***)&PTR_FUN_710523d988;
      local_80 = (undefined *******)0x0;
      puVar9 = extraout_x1;
      if (pppppppuVar4 != (undefined *******)0x0) {
        uVar6 = *(ulong *)((long)pppppppuVar4 + 0x18);
        *(undefined ***)((long)pppppppuVar4 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)((long)pppppppuVar4 + 0x18) = 0;
        if (uVar6 != 0) {
          FUN_710392eb40(uVar6);
        }
        FUN_710392eb40((ulong)pppppppuVar4);
        puVar9 = extraout_x1_00;
      }
      *(undefined1 *)((long)pppppppppuVar15 + 0x11a) = 0;
      ppppppppuVar11 = pppppppppuVar15[5] + 1;
      if ((*ppppppppuVar11 != (undefined *******)0x0) &&
         (ppppppuVar13 = (*ppppppppuVar11)[3], ppppppuVar13 != (undefined ******)0x0)) {
        *(byte *)(ppppppuVar13 + 0xb) = *(byte *)(ppppppuVar13 + 0xb) & 0xfe;
        ppppppppuVar11 = pppppppppuVar15[5] + 1;
      }
      *(undefined1 *)((long)pppppppppuVar15 + 0x11b) = 0;
      if ((*ppppppppuVar11 != (undefined *******)0x0) &&
         (ppppppuVar13 = (*ppppppppuVar11)[3], ppppppuVar13 != (undefined ******)0x0)) {
        *(byte *)(ppppppuVar13 + 0xb) = *(byte *)(ppppppuVar13 + 0xb) & 0xfe;
      }
      uVar16 = uVar16 + 1;
      pppppppppuVar15 = pppppppppuVar15 + 0x26;
    } while ((long)uVar16 < (long)*(int *)(param_1 + 0x17c));
  }
  FUN_71032ce230((long)param_1,puVar9,pppplVar10,param_4,param_5,param_6,param_7,param_8);
  return;
}

