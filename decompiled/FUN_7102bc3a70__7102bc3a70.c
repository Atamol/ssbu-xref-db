// addr:      7102bc3a70
// offset:    0x2bc3a70
// name:      FUN_7102bc3a70
// mangled:   
// signature: undefined __cdecl FUN_7102bc3a70(undefined8 param_1, long param_2, undefined8 param_3, undefined1[16] * param_4, undefined1[16] * param_5, undefined1[16] * param_6, undefined1[16] * param_7, undefined8 param_8, undefined8 param_9)


void FUN_7102bc3a70(undefined8 param_1,long param_2,undefined8 param_3,undefined1 (*param_4) [16],
                   undefined1 (*param_5) [16],undefined1 (*param_6) [16],undefined1 (*param_7) [16],
                   undefined8 param_8,undefined8 param_9)

{
  undefined8 *puVar1;
  int iVar2;
  long *plVar3;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar4;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined4 uVar5;
  uint uVar6;
  code *pcVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  undefined8 local_48;
  
  FUN_71025dd540(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  iVar2 = *(int *)(param_2 + 0x9f4);
  fVar13 = (float)param_1;
  if (*(char *)(param_2 + 0x58) == '\0') {
    switch(iVar2) {
    case 0:
switchD_7102bc3ad8_caseD_0:
      FUN_7102bc4300(param_2,extraout_x1,(long ****)param_4,(byte ****)param_5,(long ****)param_6,
                     param_7,param_8,param_9);
      break;
    case 1:
switchD_7102bc3ad8_caseD_1:
      FUN_7102bc49e0(fVar13,param_2,extraout_x1,(undefined **)param_4,(byte ****)param_5,
                     (long ****)param_6,param_7,param_8,param_9);
      break;
    case 2:
      *(undefined4 *)(param_2 + 0x9f8) = *(undefined4 *)(param_2 + 0x76c);
      uVar6 = 0;
      if (*(int *)(param_2 + 0x9fc) < 2) {
        uVar6 = *(int *)(param_2 + 0x9fc) + 1;
      }
      uVar9 = (ulong)(int)uVar6;
      *(undefined4 *)(param_2 + 0xa00) = 0;
      *(undefined1 *)(param_2 + 0xbc1) = 0;
      *(undefined1 *)(param_2 + 0x9f0) = 0;
      if ((ulong)(*(long *)(param_2 + 0x938) - *(long *)(param_2 + 0x930) >> 2) <= uVar9) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      fVar12 = *(float *)(*(long *)(param_2 + 0x930) + uVar9 * 4);
      *(float *)(param_2 + 0xa80) = fVar12;
      if (fVar12 <= 0.0) {
        *(undefined4 *)(param_2 + 0xa80) = 0;
        if (2 < uVar6) goto LAB_7102bc42d0;
        FUN_7102633800(*(long *)(param_2 + 0x318),
                       (long *********)(&PTR_s_reflection_cubemap_710511c0b8)[uVar9],param_4,param_5
                       ,(long ****)param_6,param_7,param_8,param_9);
        FUN_7102633b90(*(long *)(param_2 + 0x318),
                       (long *********)(&PTR_s_stage_land_710511c0d0)[uVar9],1,param_5,
                       (long ****)param_6,param_7,param_8,param_9);
      }
      else if (2 < uVar6) goto LAB_7102bc42d0;
      param_4 = (undefined1 (*) [16])0x0;
      FUN_7102633a10(*(long *)(param_2 + 0x318),
                     (long *********)(&PTR_s_chara_sky_land_710511c0e8)[uVar9 * 2],0,param_5,
                     (long ****)param_6,param_7,param_8,param_9);
      fVar12 = *(float *)(&DAT_710511c0f0 + uVar9 * 0x10);
      *(float *)(param_2 + 0xa7c) = fVar12;
      FUN_71025f74f0(fVar12,*(long *)(*(long *)(param_2 + 0x318) + 0x10),
                     (&PTR_s_light00_710511c0a0)[uVar9]);
      FUN_7102bca9f0(param_2,uVar6);
      iVar2 = *(int *)(param_2 + 0x9fc);
      if (iVar2 == 0) {
        *(undefined8 *)(param_2 + 0xa84) = 0;
        *(undefined4 *)(param_2 + 0xbc4) = 0xc2c80000;
        lVar8 = *(long *)(param_2 + 0x990);
        *(undefined1 *)(lVar8 + 0x1c) = 1;
        *(undefined4 *)(lVar8 + 0x18) = 6;
        FUN_7102bcae60(fVar13,*(long **)(param_2 + 0x990),extraout_x1_00,param_4,(byte ****)param_5,
                       (long ****)param_6,param_7,param_8,param_9);
        lVar8 = *(long *)(param_2 + 0x9c0);
        *(undefined4 *)(lVar8 + 0xa0) = 0x41a00000;
        *(undefined4 *)(lVar8 + 0x10) = 4;
        *(undefined1 *)(lVar8 + 0x14) = 1;
        *(undefined1 *)(lVar8 + 0xb8) = 1;
        FUN_7102bcfb40(fVar13,*(long **)(param_2 + 0x9c0),extraout_x1_01,(long ****)param_4,
                       (byte ****)param_5,(long ****)param_6,param_7,param_8,param_9);
        lVar8 = *(long *)(param_2 + 0x9a0);
        *(undefined1 *)(lVar8 + 0x70) = 1;
        *(undefined1 *)(lVar8 + 0x24) = 1;
        *(undefined4 *)(lVar8 + 0x20) = 7;
        FUN_7102bcce20(fVar13,*(long **)(param_2 + 0x9a0),extraout_x1_02,(undefined **)param_4,
                       (byte ****)param_5,(long ****)param_6,param_7,param_8,param_9);
        lVar8 = *(long *)(param_2 + 0x9a8);
        *(undefined1 *)(lVar8 + 0x70) = 1;
        *(undefined1 *)(lVar8 + 0x24) = 1;
        *(undefined4 *)(lVar8 + 0x20) = 7;
        FUN_7102bcce20(fVar13,*(long **)(param_2 + 0x9a8),extraout_x1_03,(undefined **)param_4,
                       (byte ****)param_5,(long ****)param_6,param_7,param_8,param_9);
        lVar8 = *(long *)(param_2 + 0x9b0);
        *(undefined1 *)(lVar8 + 0x70) = 1;
        *(undefined1 *)(lVar8 + 0x24) = 1;
        *(undefined4 *)(lVar8 + 0x20) = 7;
        FUN_7102bcce20(fVar13,*(long **)(param_2 + 0x9b0),extraout_x1_04,(undefined **)param_4,
                       (byte ****)param_5,(long ****)param_6,param_7,param_8,param_9);
        lVar8 = *(long *)(param_2 + 0x9b8);
        *(undefined4 *)(lVar8 + 0x18) = 6;
        *(undefined1 *)(lVar8 + 0x1c) = 1;
        FUN_7102bcde30(fVar13,*(long **)(param_2 + 0x9b8),extraout_x1_05,(long ****)param_4,
                       (byte ****)param_5,(long ****)param_6,param_7,param_8,param_9);
        lVar8 = *(long *)(param_2 + 0xb08);
        *(undefined1 *)(param_2 + 0xaec) = 1;
        *(undefined1 *)(lVar8 + 0x128) = 1;
        if (*(long *)(lVar8 + 8) != 0) {
          *(undefined8 *)(*(long *)(lVar8 + 8) + 0xd8) = 0xffffffffffffffff;
          FUN_7100532bc0(*(long *)(lVar8 + 8),0);
        }
        lVar8 = *(long *)(param_2 + 0xb10);
        *(undefined1 *)(lVar8 + 0x128) = 1;
        if (*(long *)(lVar8 + 8) != 0) {
          *(undefined8 *)(*(long *)(lVar8 + 8) + 0xd8) = 0xffffffffffffffff;
          FUN_7100532bc0(*(long *)(lVar8 + 8),0);
        }
        lVar8 = *(long *)(param_2 + 0xb18);
        *(undefined1 *)(lVar8 + 0x128) = 1;
        if (*(long *)(lVar8 + 8) != 0) {
          *(undefined8 *)(*(long *)(lVar8 + 8) + 0xd8) = 0xffffffffffffffff;
          FUN_7100532bc0(*(long *)(lVar8 + 8),0);
        }
        *(undefined4 *)(param_2 + 0xa00) = 0;
        plVar3 = *(long **)(**(long **)(param_2 + 0x338) + 8);
        if (plVar3 != (long *)0x0) {
          pcVar7 = *(code **)(*plVar3 + 0x58);
          uVar4 = 0x20;
LAB_7102bc4174:
          (*pcVar7)(plVar3,uVar4,0xffffffff);
        }
LAB_7102bc4178:
        param_6 = (undefined1 (*) [16])&DAT_50000000;
        param_4 = (undefined1 (*) [16])0x0;
        param_5 = (undefined1 (*) [16])0x0;
        FUN_710067de90(*lib::Singleton<app::FighterManager>::instance_,0x17b87a9f8c,0,0,0x50000000);
      }
      else {
        if (iVar2 == 1) {
          lVar8 = *(long *)(param_2 + 0xa38);
          if (lVar8 != 0) {
            *(undefined1 *)(lVar8 + 0x110) = 1;
            FUN_71025e9d50((long *)(lVar8 + 0x108),extraout_x1_00,(long ****)param_4,
                           (byte ****)param_5,(long ****)param_6,param_7,param_8,param_9);
            lVar8 = *(long *)(param_2 + 0xa38);
            if (lVar8 != 0) {
              if ((*(char *)(lVar8 + 0xe0) != '\0') && (lVar8 = *(long *)(lVar8 + 200), lVar8 != 0))
              {
                puVar11 = *(undefined8 **)(lVar8 + 0x18);
                puVar1 = *(undefined8 **)(lVar8 + 0x20);
                *(undefined4 *)(lVar8 + 0x3c) = 0;
                if (puVar11 == puVar1) {
                  *(undefined4 *)(lVar8 + 0x40) = 0;
                }
                else {
                  do {
                    puVar10 = puVar11 + 1;
                    (**(code **)(*(long *)*puVar11 + 0x18))(0,(long *)*puVar11,0);
                    puVar11 = puVar10;
                  } while (puVar1 != puVar10);
                  puVar11 = *(undefined8 **)(lVar8 + 0x18);
                  puVar1 = *(undefined8 **)(lVar8 + 0x20);
                  *(undefined4 *)(lVar8 + 0x40) = 0;
                  if (puVar11 != puVar1) {
                    do {
                      puVar10 = puVar11 + 1;
                      (**(code **)(*(long *)*puVar11 + 0x18))(0,(long *)*puVar11,1);
                      puVar11 = puVar10;
                    } while (puVar1 != puVar10);
                    puVar1 = *(undefined8 **)(lVar8 + 0x20);
                    for (puVar11 = *(undefined8 **)(lVar8 + 0x18); puVar11 != puVar1;
                        puVar11 = puVar11 + 1) {
                      (**(code **)(*(long *)*puVar11 + 0x38))();
                    }
                  }
                }
              }
              lVar8 = *(long *)(param_2 + 0xa38);
              if (lVar8 != 0) {
                if ((*(char *)(lVar8 + 0xe0) != '\0') && (*(long *)(lVar8 + 200) != 0)) {
                  *(undefined2 *)(*(long *)(lVar8 + 200) + 0x32) = 0;
                  lVar8 = *(long *)(param_2 + 0xa38);
                  if (lVar8 == 0) goto LAB_7102bc3ed0;
                }
                if ((*(char *)(lVar8 + 0xe0) != '\0') && (*(long *)(lVar8 + 200) != 0)) {
                  *(undefined2 *)(*(long *)(lVar8 + 200) + 0x30) = 0;
                }
              }
            }
          }
LAB_7102bc3ed0:
          lVar8 = *(long *)(param_2 + 0xb18);
          *(undefined1 *)(lVar8 + 0x128) = 1;
          if (*(long *)(lVar8 + 8) != 0) {
            *(undefined8 *)(*(long *)(lVar8 + 8) + 0xd8) = 0xffffffffffffffff;
            FUN_7100532bc0(*(long *)(lVar8 + 8),0);
          }
          fVar12 = (float)*(undefined8 *)(param_2 + 0xb50);
          lVar8 = *(long *)(param_2 + 0xb18);
          puVar11 = (undefined8 *)(lVar8 + 0x10);
          *(undefined8 *)(param_2 + 0xb58) = *(undefined8 *)(param_2 + 0xb58);
          *(ulong *)(param_2 + 0xb50) = CONCAT44(0xc2c80000,fVar12);
          if ((*(char *)(lVar8 + 0x128) == '\0') ||
             (*(char *)(*(long *)(lVar8 + 8) + 0xe8) != '\0' ||
              *(char *)(*(long *)(lVar8 + 8) + 0xe7) != '\0')) {
            *(undefined8 *)(lVar8 + 0x18) = *(undefined8 *)(param_2 + 0xb58);
            *puVar11 = *(undefined8 *)(param_2 + 0xb50);
            *(undefined1 *)(lVar8 + 0x129) = 1;
          }
          else if ((1e-05 < ABS((float)*puVar11 - fVar12)) ||
                  (1e-05 < ABS((float)((ulong)*puVar11 >> 0x20) + 100.0))) {
            *(undefined8 *)(lVar8 + 0x18) = *(undefined8 *)(param_2 + 0xb58);
            *puVar11 = *(undefined8 *)(param_2 + 0xb50);
            *(undefined1 *)(lVar8 + 0x12a) = 1;
          }
          if (1e-05 <= ABS(*(float *)(lVar8 + 0x30))) {
            *(undefined4 *)(lVar8 + 0x30) = 0;
            *(undefined1 *)(lVar8 + 0x129) = 1;
          }
          uVar14 = *(undefined8 *)(lVar8 + 0x58);
          uVar4 = *(undefined8 *)(lVar8 + 0x50);
          if (1e-05 <= ABS((float)uVar4 + -1.0)) {
            uVar4 = CONCAT44((int)((ulong)uVar4 >> 0x20),0x3f800000);
            *(undefined1 *)(lVar8 + 0x129) = 1;
            *(undefined8 *)(lVar8 + 0x58) = uVar14;
            *(undefined8 *)(lVar8 + 0x50) = uVar4;
          }
          if (1e-05 <= ABS((float)((ulong)uVar4 >> 0x20) + -1.0)) {
            *(undefined1 *)(lVar8 + 0x129) = 1;
            *(undefined8 *)(lVar8 + 0x58) = uVar14;
            *(ulong *)(lVar8 + 0x50) = CONCAT44(0x3f800000,(int)uVar4);
          }
          local_90 = (ulong)*(uint *)(param_2 + 0xb54) << 0x20;
          uStack_b8 = 0;
          local_c0 = 0x3f800000;
          uStack_a8 = 0;
          local_b0 = 0x3f80000000000000;
          uStack_98 = 0x3f800000;
          local_a0 = 0;
          local_88 = 0x3f80000000000000;
          lVar8 = *(long *)(param_2 + 0xa38);
          if (lVar8 != 0) {
            (**(code **)(**(long **)(lVar8 + 0x90) + 0x148))(*(long **)(lVar8 + 0x90),&local_c0);
            lVar8 = *(long *)(lVar8 + 0xd8);
            if (lVar8 != 0) {
              local_68 = uStack_a8;
              local_70 = local_b0;
              local_78 = uStack_b8;
              local_80 = local_c0;
              local_48 = local_88;
              local_50 = local_90;
              local_58 = uStack_98;
              local_60 = local_a0;
              if (*(char *)(*(long *)(lVar8 + 8) + 0xa8) != '\0') {
                plVar3 = *(long **)(*(long *)(lVar8 + 8) + 0x48);
                (**(code **)(*plVar3 + 0x20))(plVar3,&local_80);
              }
              *(undefined1 *)(lVar8 + 0x20) = 1;
            }
          }
          *(undefined4 *)(param_2 + 0xac4) = 0x40a00000;
          *(undefined4 *)(param_2 + 0xbd8) = 0x41a00000;
          if ((*(uint *)(param_2 + 0xbdc) != 0) &&
             (fVar12 = *(float *)(param_2 + 0xbd4) * (float)*(uint *)(param_2 + 0xbdc),
             fVar12 < 20.0)) {
            *(float *)(param_2 + 0xbd8) = fVar12;
          }
          *(undefined4 *)(param_2 + 0xae4) = 1;
          *(undefined1 *)(param_2 + 0xbc2) = 1;
          *(undefined4 *)(param_2 + 0xac8) = 0;
          *(undefined4 *)(param_2 + 0xa00) = 0;
          plVar3 = *(long **)(**(long **)(param_2 + 0x338) + 8);
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x58))(plVar3,0xe,0xffffffff);
            plVar3 = *(long **)(**(long **)(param_2 + 0x338) + 8);
            if (plVar3 != (long *)0x0) {
              pcVar7 = *(code **)(*plVar3 + 0x58);
              uVar4 = 0x21;
              goto LAB_7102bc4174;
            }
          }
          goto LAB_7102bc4178;
        }
        if (iVar2 == 2) {
          if (*(char *)(param_2 + 0xb00) != '\0') {
            *(undefined1 *)(param_2 + 0xb00) = 0;
            *(undefined4 *)(*(long *)(*(long *)(param_2 + 0xaf0) + 8) + 0x10) = 1;
          }
          if (*(char *)(param_2 + 0xb01) != '\0') {
            *(undefined1 *)(param_2 + 0xb01) = 0;
            *(undefined4 *)(*(long *)(*(long *)(param_2 + 0xaf8) + 8) + 0x10) = 1;
          }
          *(undefined4 *)(param_2 + 0xae4) = 0;
          *(undefined4 *)(param_2 + 0xa00) = 0;
          plVar3 = *(long **)(**(long **)(param_2 + 0x338) + 8);
          if (plVar3 != (long *)0x0) {
            pcVar7 = *(code **)(*plVar3 + 0x58);
            uVar4 = 0x22;
            goto LAB_7102bc4174;
          }
          goto LAB_7102bc4178;
        }
      }
      uVar5 = 3;
      goto LAB_7102bc41a4;
    case 3:
      FUN_7102bc64c0(fVar13,param_2,extraout_x1,param_4,(byte ****)param_5,(long ****)param_6,
                     param_7,param_8,param_9);
    }
  }
  else {
    if (1 < iVar2 - 2U) {
      if (iVar2 == 1) {
        *(undefined4 *)(param_2 + 0x9f8) = *(undefined4 *)(param_2 + 0x76c);
        goto switchD_7102bc3ad8_caseD_1;
      }
      if (iVar2 == 0) goto switchD_7102bc3ad8_caseD_0;
      goto switchD_7102bc3ad8_default;
    }
    uVar5 = 1;
LAB_7102bc41a4:
    *(undefined4 *)(param_2 + 0x9f4) = uVar5;
  }
switchD_7102bc3ad8_default:
  if ((0.0 < *(float *)(param_2 + 0xa7c)) &&
     (fVar12 = *(float *)(param_2 + 0xa7c) - fVar13, *(float *)(param_2 + 0xa7c) = fVar12,
     fVar12 <= 0.0)) {
    uVar6 = *(uint *)(param_2 + 0x9fc);
    *(undefined4 *)(param_2 + 0xa7c) = 0;
    if (*(int *)(param_2 + 0x9f4) == 0) {
LAB_7102bc41e8:
      if (2 < uVar6) goto LAB_7102bc42d0;
      lVar8 = (long)(int)uVar6;
    }
    else {
      if ((int)uVar6 < 2) {
        uVar6 = uVar6 + 1;
        goto LAB_7102bc41e8;
      }
      lVar8 = 0;
    }
    param_4 = (undefined1 (*) [16])0x1;
    FUN_7102633a10(*(long *)(param_2 + 0x318),(long *********)(&PTR_s_chara_land_710511c088)[lVar8],
                   1,param_5,(long ****)param_6,param_7,param_8,param_9);
    FUN_71025f7350(*(long *)(*(long *)(param_2 + 0x318) + 0x10),(&PTR_s_light00_710511c0a0)[lVar8]);
  }
  if ((*(float *)(param_2 + 0xa80) <= 0.0) ||
     (fVar13 = *(float *)(param_2 + 0xa80) - fVar13, *(float *)(param_2 + 0xa80) = fVar13,
     0.0 < fVar13)) {
    return;
  }
  uVar6 = *(uint *)(param_2 + 0x9fc);
  *(undefined4 *)(param_2 + 0xa80) = 0;
  if (*(int *)(param_2 + 0x9f4) != 0) {
    if (1 < (int)uVar6) {
      lVar8 = 0;
      goto LAB_7102bc428c;
    }
    uVar6 = uVar6 + 1;
  }
  if (2 < uVar6) {
LAB_7102bc42d0:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar8 = (long)(int)uVar6;
LAB_7102bc428c:
  FUN_7102633800(*(long *)(param_2 + 0x318),
                 (long *********)(&PTR_s_reflection_cubemap_710511c0b8)[lVar8],param_4,param_5,
                 (long ****)param_6,param_7,param_8,param_9);
  FUN_7102633b90(*(long *)(param_2 + 0x318),(long *********)(&PTR_s_stage_land_710511c0d0)[lVar8],1,
                 param_5,(long ****)param_6,param_7,param_8,param_9);
  return;
}

