// addr:      710273f950
// offset:    0x273f950
// name:      FUN_710273f950
// mangled:   
// signature: undefined __cdecl FUN_710273f950(long param_1, long param_2, ulong param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710273f950(long param_1,long param_2,ulong param_3,undefined8 param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  code *pcVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  uVar5 = FUN_710273b1f0(param_3);
  plVar6 = *(long **)(*(long *)(param_1 + 0x310) + 0xd0);
  iVar1 = (int)uVar5 - (int)((ulong)uVar5 >> 0x20);
  do {
    if (plVar6 == *(long **)(*(long *)(param_1 + 0x310) + 0xd8)) {
LAB_710273f9d0:
      lVar8 = (long)(iVar1 + 3);
      FUN_71025f7350(*(long *)(*(long *)(param_1 + 0x318) + 0x10),
                     (&PTR_s_light_dark2_71050d7850)[lVar8 * 4]);
      FUN_7102633a10(*(long *)(param_1 + 0x318),
                     (long *********)(&PTR_s_chara_dark2_71050d7858)[lVar8 * 4],1,param_4,param_5,
                     param_6,param_7,param_8);
      uVar5 = 1;
      FUN_7102633b90(*(long *)(param_1 + 0x318),
                     (long *********)(&PTR_s_stage_dark2_71050d7860)[lVar8 * 4],1,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_7102633800(*(long *)(param_1 + 0x318),
                     (long *********)(&PTR_s_reflection_cubemap_dark2_71050d7868)[lVar8 * 4],uVar5,
                     param_4,param_5,param_6,param_7,param_8);
      return;
    }
    if ((*(uint *)(plVar6 + 1) < 2) && (lVar8 = *plVar6, *(long *)(lVar8 + 0x68) == 0x14a2af697d)) {
      if (lVar8 != 0) {
        switch(iVar1) {
        case 0:
          fVar10 = *(float *)(param_2 + 0x1ec);
          plVar6 = *(long **)(**(long **)(param_1 + 0x338) + 8);
          if (plVar6 != (long *)0x0) {
            pcVar7 = *(code **)(*plVar6 + 0x58);
            uVar5 = 0x12;
            goto LAB_710273fb6c;
          }
          break;
        case 1:
          fVar10 = *(float *)(param_2 + 0x1e8);
          plVar6 = *(long **)(**(long **)(param_1 + 0x338) + 8);
          if (plVar6 != (long *)0x0) {
            pcVar7 = *(code **)(*plVar6 + 0x58);
            uVar5 = 0x13;
            goto LAB_710273fb6c;
          }
          break;
        case 2:
          fVar10 = *(float *)(param_2 + 0x1e4);
          plVar6 = *(long **)(**(long **)(param_1 + 0x338) + 8);
          if (plVar6 != (long *)0x0) {
            pcVar7 = *(code **)(*plVar6 + 0x58);
            uVar5 = 0x14;
            goto LAB_710273fb6c;
          }
          break;
        case 3:
          fVar10 = *(float *)(param_2 + 0x1e0);
          plVar6 = *(long **)(**(long **)(param_1 + 0x338) + 8);
          if (plVar6 != (long *)0x0) {
            pcVar7 = *(code **)(*plVar6 + 0x58);
            uVar5 = 0x15;
            goto LAB_710273fb6c;
          }
          break;
        case -3:
          fVar10 = *(float *)(param_2 + 0x1f8);
          plVar6 = *(long **)(**(long **)(param_1 + 0x338) + 8);
          if (plVar6 != (long *)0x0) {
            pcVar7 = *(code **)(*plVar6 + 0x58);
            uVar5 = 0xf;
LAB_710273fb6c:
            (*pcVar7)(plVar6,uVar5,0xffffffff);
          }
          break;
        case -2:
          fVar10 = *(float *)(param_2 + 500);
          plVar6 = *(long **)(**(long **)(param_1 + 0x338) + 8);
          if (plVar6 != (long *)0x0) {
            pcVar7 = *(code **)(*plVar6 + 0x58);
            uVar5 = 0x10;
            goto LAB_710273fb6c;
          }
          break;
        case -1:
          fVar10 = *(float *)(param_2 + 0x1f0);
          plVar6 = *(long **)(**(long **)(param_1 + 0x338) + 8);
          if (plVar6 != (long *)0x0) {
            pcVar7 = *(code **)(*plVar6 + 0x58);
            uVar5 = 0x11;
            goto LAB_710273fb6c;
          }
          break;
        default:
          fVar10 = 0.0;
        }
        uVar4 = uRam0000007107531008;
        uVar3 = _ConstantUnitY;
        fVar9 = sinf(fVar10 * 0.017453292);
        fVar10 = cosf(fVar10 * 0.017453292);
        uVar2 = uRam0000007107530008;
        uVar5 = _ConstantUnitX;
        fVar11 = 1.0 - fVar10;
        fVar17 = (float)uVar4;
        fVar13 = (float)uVar3;
        fVar14 = fVar11 * fVar13;
        fVar12 = (float)((ulong)uVar3 >> 0x20);
        fVar28 = fVar9 * fVar17 + fVar14 * fVar12;
        fVar20 = fVar14 * fVar12 - fVar9 * fVar17;
        fVar15 = fVar10 + fVar14 * fVar13;
        fVar23 = fVar11 * fVar12 * fVar17;
        fVar16 = fVar10 + fVar11 * fVar12 * fVar12;
        fVar10 = fVar10 + fVar11 * fVar17 * fVar17;
        fVar21 = fVar14 * fVar17 - fVar9 * fVar12;
        fVar12 = fVar9 * fVar12 + fVar14 * fVar17;
        fVar17 = fVar9 * fVar13 + fVar23;
        fVar23 = fVar23 - fVar9 * fVar13;
        fVar11 = *(float *)(param_2 + 0x1dc) * 0.017453292;
        fVar9 = sinf(fVar11);
        fVar11 = cosf(fVar11);
        fVar14 = 1.0 - fVar11;
        fVar29 = (float)uVar5;
        fVar13 = fVar14 * fVar29;
        fVar19 = (float)((ulong)uVar5 >> 0x20);
        fVar30 = (float)uVar2;
        fVar25 = fVar9 * fVar30 + fVar13 * fVar19;
        fVar18 = fVar11 + fVar13 * fVar29;
        fVar22 = fVar13 * fVar19 - fVar9 * fVar30;
        fVar26 = fVar13 * fVar30 - fVar9 * fVar19;
        fVar13 = fVar9 * fVar19 + fVar13 * fVar30;
        fVar24 = fVar14 * fVar19 * fVar30;
        fVar27 = fVar11 + fVar14 * fVar19 * fVar19;
        fVar19 = fVar24 - fVar9 * fVar29;
        fVar24 = fVar9 * fVar29 + fVar24;
        fVar11 = fVar11 + fVar14 * fVar30 * fVar30;
        local_e0 = CONCAT44(fVar25 * fVar15 + fVar27 * fVar28 + fVar19 * fVar21 + 0.0,
                            fVar18 * fVar15 + fVar22 * fVar28 + fVar13 * fVar21 + 0.0);
        uStack_d8 = CONCAT44(fVar15 * 0.0 + fVar28 * 0.0 + fVar21 * 0.0 + 0.0,
                             fVar26 * fVar15 + fVar24 * fVar28 + fVar11 * fVar21 + 0.0);
        local_c8 = CONCAT44(fVar20 * 0.0 + fVar16 * 0.0 + fVar17 * 0.0 + 0.0,
                            fVar26 * fVar20 + fVar24 * fVar16 + fVar11 * fVar17 + 0.0);
        local_c0 = CONCAT44(fVar25 * fVar12 + fVar27 * fVar23 + fVar19 * fVar10 + 0.0,
                            fVar18 * fVar12 + fVar22 * fVar23 + fVar13 * fVar10 + 0.0);
        uStack_b8 = CONCAT44(fVar12 * 0.0 + fVar23 * 0.0 + fVar10 * 0.0 + 0.0,
                             fVar26 * fVar12 + fVar24 * fVar23 + fVar11 * fVar10 + 0.0);
        local_d0 = CONCAT44(fVar25 * fVar20 + fVar27 * fVar16 + fVar19 * fVar17 + 0.0,
                            fVar18 * fVar20 + fVar22 * fVar16 + fVar13 * fVar17 + 0.0);
        local_b0 = CONCAT44(fVar25 * 0.0 + fVar27 * 0.0 + fVar19 * 0.0 + 0.0,
                            fVar18 * 0.0 + fVar22 * 0.0 + fVar13 * 0.0 + 0.0);
        local_a8 = CONCAT44(0x3f800000,fVar26 * 0.0 + fVar24 * 0.0 + fVar11 * 0.0 + 0.0);
        (**(code **)(**(long **)(lVar8 + 0x90) + 0x148))(*(long **)(lVar8 + 0x90),&local_e0);
        lVar8 = *(long *)(lVar8 + 0xd8);
        if (lVar8 != 0) {
          local_88 = local_c8;
          local_90 = local_d0;
          local_98 = uStack_d8;
          local_a0 = local_e0;
          local_68 = local_a8;
          local_70 = local_b0;
          local_78 = uStack_b8;
          local_80 = local_c0;
          if (*(char *)(*(long *)(lVar8 + 8) + 0xa8) != '\0') {
            plVar6 = *(long **)(*(long *)(lVar8 + 8) + 0x48);
            (**(code **)(*plVar6 + 0x20))(plVar6,&local_a0);
          }
          *(undefined1 *)(lVar8 + 0x20) = 1;
        }
      }
      goto LAB_710273f9d0;
    }
    plVar6 = plVar6 + 2;
  } while( true );
}

