// addr:      710390efb0
// offset:    0x390efb0
// name:      FUN_710390efb0
// mangled:   
// signature: ulong __cdecl FUN_710390efb0(uint * param_1, float * param_2)


ulong FUN_710390efb0(uint *param_1,float *param_2)

{
  int iVar1;
  long lVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  char *pcVar6;
  byte *pbVar7;
  undefined8 *puVar8;
  int iVar9;
  uint *puVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  float *pfVar18;
  uint *puVar19;
  uint uVar20;
  undefined8 *puVar21;
  undefined1 *puVar22;
  uint uVar23;
  undefined1 uVar24;
  long local_90;
  long local_88;
  byte abStack_70 [7];
  byte local_69;
  long local_68;
  
  puVar10 = param_1 + 0x12;
  puVar19 = param_1 + 0x10;
  *(undefined8 *)(*(long *)puVar10 + 8) = 0;
LAB_710390f020:
  uVar23 = *param_1;
  uVar14 = 0x121;
  switch(uVar23) {
  default:
    if ((*(byte *)((long)&DAT_7104862970 + (long)(int)uVar23 + 1) & 1) != 0) goto LAB_710390f590;
    lVar11 = **(long **)puVar19;
    **(long **)puVar19 = lVar11 + -1;
    plVar15 = *(long **)puVar19;
    if (lVar11 == 0) {
      pbVar7 = (byte *)(*(code *)plVar15[2])(plVar15[4],plVar15[3],&local_68);
      uVar14 = 0xffffffff;
      if ((pbVar7 != (byte *)0x0) && (local_68 != 0)) {
        *plVar15 = local_68 + -1;
        plVar15[1] = (long)(pbVar7 + 1);
        uVar14 = (uint)*pbVar7;
      }
    }
    else {
      pbVar7 = (byte *)plVar15[1];
      plVar15[1] = (long)(pbVar7 + 1);
      uVar14 = (uint)*pbVar7;
    }
    *param_1 = uVar14;
    uVar14 = uVar23;
    goto switchD_710390f038_caseD_ffffffff;
  case 9:
  case 0xb:
  case 0xc:
  case 0x20:
    lVar11 = **(long **)puVar19;
    **(long **)puVar19 = lVar11 + -1;
    plVar15 = *(long **)puVar19;
    if (lVar11 == 0) {
      pbVar7 = (byte *)(*(code *)plVar15[2])(plVar15[4],plVar15[3],&local_68);
      if (pbVar7 == (byte *)0x0) {
        *param_1 = 0xffffffff;
      }
      else {
        uVar23 = 0xffffffff;
        if (local_68 != 0) {
          *plVar15 = local_68 + -1;
          plVar15[1] = (long)(pbVar7 + 1);
          uVar23 = (uint)*pbVar7;
        }
        *param_1 = uVar23;
      }
    }
    else {
      pbVar7 = (byte *)plVar15[1];
      plVar15[1] = (long)(pbVar7 + 1);
      *param_1 = (uint)*pbVar7;
    }
    goto LAB_710390f020;
  case 10:
  case 0xd:
    FUN_7103911ad0(param_1);
    goto LAB_710390f020;
  case 0x22:
  case 0x27:
    plVar15 = *(long **)puVar10;
    lVar11 = plVar15[1];
    uVar12 = plVar15[2];
    uVar5 = lVar11 + 1;
    if (uVar12 < uVar5) {
      if (0x3ffffffffffffffe < uVar12) goto LAB_7103911234;
      lVar17 = *(long *)(param_1 + 0xe);
      puVar21 = *(undefined8 **)(lVar17 + 0x18);
      lVar11 = *plVar15;
      lVar16 = uVar12 * 2;
      lVar4 = (*(code *)*puVar21)(puVar21[1],lVar11,uVar12,lVar16);
      if ((lVar16 != 0) && (lVar4 == 0)) {
        if (puVar21[0x1a] == 0) goto LAB_7103911248;
        FUN_71039004f0(lVar17,1);
        lVar4 = (*(code *)*puVar21)(puVar21[1],lVar11,uVar12,lVar16);
        if (lVar4 == 0) goto LAB_7103911248;
      }
      lVar17 = 0;
      if (lVar11 != 0) {
        lVar17 = -uVar12;
      }
      puVar21[3] = lVar17 + lVar16 + puVar21[3];
      lVar11 = plVar15[1];
      uVar5 = lVar11 + 1;
      *plVar15 = lVar4;
      plVar15[2] = lVar16;
    }
    else {
      lVar4 = *plVar15;
    }
    plVar15[1] = uVar5;
    *(char *)(lVar4 + lVar11) = (char)uVar23;
    lVar11 = **(long **)puVar19;
    **(long **)puVar19 = lVar11 + -1;
    plVar15 = *(long **)puVar19;
    if (lVar11 == 0) {
      pbVar7 = (byte *)(*(code *)plVar15[2])(plVar15[4],plVar15[3],&local_68);
      uVar14 = 0xffffffff;
      if ((pbVar7 != (byte *)0x0) && (local_68 != 0)) {
        *plVar15 = local_68 + -1;
        plVar15[1] = (long)(pbVar7 + 1);
        uVar14 = (uint)*pbVar7;
      }
    }
    else {
      pbVar7 = (byte *)plVar15[1];
      plVar15[1] = (long)(pbVar7 + 1);
      uVar14 = (uint)*pbVar7;
    }
    *param_1 = uVar14;
    break;
  case 0x2d:
    lVar11 = **(long **)puVar19;
    **(long **)puVar19 = lVar11 + -1;
    plVar15 = *(long **)puVar19;
    if (lVar11 == 0) {
      pbVar7 = (byte *)(*(code *)plVar15[2])(plVar15[4],plVar15[3],&local_68);
      if (pbVar7 == (byte *)0x0) {
        uVar23 = 0xffffffff;
      }
      else {
        uVar23 = 0xffffffff;
        if (local_68 != 0) {
          *plVar15 = local_68 + -1;
          plVar15[1] = (long)(pbVar7 + 1);
          uVar23 = (uint)*pbVar7;
        }
      }
    }
    else {
      pbVar7 = (byte *)plVar15[1];
      plVar15[1] = (long)(pbVar7 + 1);
      uVar23 = (uint)*pbVar7;
    }
    *param_1 = uVar23;
    if (uVar23 != 0x2d) {
      uVar14 = 0x2d;
      goto switchD_710390f038_caseD_ffffffff;
    }
    lVar11 = **(long **)puVar19;
    **(long **)puVar19 = lVar11 + -1;
    plVar15 = *(long **)puVar19;
    if (lVar11 == 0) {
      pbVar7 = (byte *)(*(code *)plVar15[2])(plVar15[4],plVar15[3],&local_68);
      if (pbVar7 == (byte *)0x0) {
        uVar23 = 0xffffffff;
      }
      else {
        uVar23 = 0xffffffff;
        if (local_68 != 0) {
          *plVar15 = local_68 + -1;
          plVar15[1] = (long)(pbVar7 + 1);
          uVar23 = (uint)*pbVar7;
        }
      }
    }
    else {
      pbVar7 = (byte *)plVar15[1];
      plVar15[1] = (long)(pbVar7 + 1);
      uVar23 = (uint)*pbVar7;
    }
    *param_1 = uVar23;
    if (uVar23 == 0x5b) {
      uVar23 = FUN_7103911c00(param_1);
      *(undefined8 *)(*(long *)(param_1 + 0x12) + 8) = 0;
      if ((int)uVar23 < 0) {
        uVar23 = *param_1;
        goto LAB_710390f1d0;
      }
      FUN_7103911ed0(param_1,(undefined8 *)0x0,uVar23);
      *(undefined8 *)(*(long *)(param_1 + 0x12) + 8) = 0;
    }
    else {
LAB_710390f1d0:
      while ((0xe < uVar23 + 1 || ((1 << (ulong)(uVar23 + 1 & 0x1f) & 0x4801U) == 0))) {
        lVar11 = **(long **)puVar19;
        **(long **)puVar19 = lVar11 + -1;
        plVar15 = *(long **)puVar19;
        if (lVar11 == 0) {
          pbVar7 = (byte *)(*(code *)plVar15[2])(plVar15[4],plVar15[3],&local_68);
          uVar23 = 0xffffffff;
          if (pbVar7 != (byte *)0x0 && local_68 != 0) {
            *plVar15 = local_68 + -1;
            plVar15[1] = (long)(pbVar7 + 1);
            uVar23 = (uint)*pbVar7;
          }
          *param_1 = uVar23;
        }
        else {
          pbVar7 = (byte *)plVar15[1];
          plVar15[1] = (long)(pbVar7 + 1);
          bVar3 = *pbVar7;
          uVar23 = (uint)bVar3;
          *param_1 = (uint)bVar3;
        }
      }
    }
    goto LAB_710390f020;
  case 0x2e:
    plVar15 = *(long **)puVar10;
    lVar11 = plVar15[1];
    uVar12 = plVar15[2];
    uVar5 = lVar11 + 1;
    if (uVar12 < uVar5) {
      if (0x3ffffffffffffffe < uVar12) goto LAB_7103911234;
      lVar17 = *(long *)(param_1 + 0xe);
      puVar21 = *(undefined8 **)(lVar17 + 0x18);
      lVar11 = *plVar15;
      lVar16 = uVar12 * 2;
      lVar4 = (*(code *)*puVar21)(puVar21[1],lVar11,uVar12,lVar16);
      if ((lVar16 != 0) && (lVar4 == 0)) {
        if (puVar21[0x1a] == 0) goto LAB_7103911248;
        FUN_71039004f0(lVar17,1);
        lVar4 = (*(code *)*puVar21)(puVar21[1],lVar11,uVar12,lVar16);
        if (lVar4 == 0) goto LAB_7103911248;
      }
      lVar17 = 0;
      if (lVar11 != 0) {
        lVar17 = -uVar12;
      }
      puVar21[3] = lVar17 + lVar16 + puVar21[3];
      lVar11 = plVar15[1];
      uVar5 = lVar11 + 1;
      *plVar15 = lVar4;
      plVar15[2] = lVar16;
    }
    else {
      lVar4 = *plVar15;
    }
    plVar15[1] = uVar5;
    *(undefined1 *)(lVar4 + lVar11) = 0x2e;
    lVar11 = **(long **)puVar19;
    **(long **)puVar19 = lVar11 + -1;
    plVar15 = *(long **)puVar19;
    if (lVar11 == 0) {
      pbVar7 = (byte *)(*(code *)plVar15[2])(plVar15[4],plVar15[3],&local_68);
      uVar23 = 0xffffffff;
      if ((pbVar7 != (byte *)0x0) && (local_68 != 0)) {
        *plVar15 = local_68 + -1;
        plVar15[1] = (long)(pbVar7 + 1);
        uVar23 = (uint)*pbVar7;
      }
    }
    else {
      pbVar7 = (byte *)plVar15[1];
      plVar15[1] = (long)(pbVar7 + 1);
      uVar23 = (uint)*pbVar7;
    }
    *param_1 = uVar23;
    if (uVar23 == 0x2e) {
      lVar11 = **(long **)puVar19;
      **(long **)puVar19 = lVar11 + -1;
      plVar15 = *(long **)puVar19;
      if (lVar11 == 0) {
        pbVar7 = (byte *)(*(code *)plVar15[2])(plVar15[4],plVar15[3],&local_68);
        uVar23 = 0xffffffff;
        if ((pbVar7 != (byte *)0x0) && (local_68 != 0)) {
          *plVar15 = local_68 + -1;
          plVar15[1] = (long)(pbVar7 + 1);
          uVar23 = (uint)*pbVar7;
        }
      }
      else {
        pbVar7 = (byte *)plVar15[1];
        plVar15[1] = (long)(pbVar7 + 1);
        uVar23 = (uint)*pbVar7;
      }
      *param_1 = uVar23;
      if (uVar23 == 0x2e) {
        lVar11 = **(long **)puVar19;
        **(long **)puVar19 = lVar11 + -1;
        plVar15 = *(long **)puVar19;
        if (lVar11 == 0) {
          pbVar7 = (byte *)(*(code *)plVar15[2])(plVar15[4],plVar15[3],&local_68);
          uVar23 = 0xffffffff;
          if ((pbVar7 != (byte *)0x0) && (local_68 != 0)) {
            *plVar15 = local_68 + -1;
            plVar15[1] = (long)(pbVar7 + 1);
            uVar23 = (uint)*pbVar7;
          }
        }
        else {
          pbVar7 = (byte *)plVar15[1];
          plVar15[1] = (long)(pbVar7 + 1);
          uVar23 = (uint)*pbVar7;
        }
        *param_1 = uVar23;
        uVar14 = 0x119;
      }
      else {
        uVar14 = 0x118;
      }
      goto switchD_710390f038_caseD_ffffffff;
    }
    if ((*(byte *)((long)&DAT_7104862970 + (long)(int)uVar23 + 1) >> 1 & 1) == 0) {
      uVar14 = 0x2e;
      goto switchD_710390f038_caseD_ffffffff;
    }
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
    uVar5 = FUN_7103912660(param_1,param_2);
    return uVar5;
  case 0x2f:
    lVar11 = **(long **)puVar19;
    **(long **)puVar19 = lVar11 + -1;
    plVar15 = *(long **)puVar19;
    if (lVar11 == 0) {
      pbVar7 = (byte *)(*(code *)plVar15[2])(plVar15[4],plVar15[3],&local_68);
      uVar23 = 0xffffffff;
      if ((pbVar7 != (byte *)0x0) && (local_68 != 0)) {
        *plVar15 = local_68 + -1;
        plVar15[1] = (long)(pbVar7 + 1);
        uVar23 = (uint)*pbVar7;
      }
    }
    else {
      pbVar7 = (byte *)plVar15[1];
      plVar15[1] = (long)(pbVar7 + 1);
      uVar23 = (uint)*pbVar7;
    }
    *param_1 = uVar23;
    if (uVar23 == 0x2f) {
      lVar11 = **(long **)puVar19;
      **(long **)puVar19 = lVar11 + -1;
      plVar15 = *(long **)puVar19;
      if (lVar11 == 0) {
        pbVar7 = (byte *)(*(code *)plVar15[2])(plVar15[4],plVar15[3],&local_68);
        uVar23 = 0xffffffff;
        if ((pbVar7 != (byte *)0x0) && (local_68 != 0)) {
          *plVar15 = local_68 + -1;
          plVar15[1] = (long)(pbVar7 + 1);
          uVar23 = (uint)*pbVar7;
        }
      }
      else {
        pbVar7 = (byte *)plVar15[1];
        plVar15[1] = (long)(pbVar7 + 1);
        uVar23 = (uint)*pbVar7;
      }
      *param_1 = uVar23;
      uVar14 = 0x117;
    }
    else {
      uVar14 = 0x2f;
    }
    goto switchD_710390f038_caseD_ffffffff;
  case 0x3a:
    lVar11 = **(long **)puVar19;
    **(long **)puVar19 = lVar11 + -1;
    plVar15 = *(long **)puVar19;
    if (lVar11 == 0) {
      pbVar7 = (byte *)(*(code *)plVar15[2])(plVar15[4],plVar15[3],&local_68);
      uVar23 = 0xffffffff;
      if ((pbVar7 != (byte *)0x0) && (local_68 != 0)) {
        *plVar15 = local_68 + -1;
        plVar15[1] = (long)(pbVar7 + 1);
        uVar23 = (uint)*pbVar7;
      }
    }
    else {
      pbVar7 = (byte *)plVar15[1];
      plVar15[1] = (long)(pbVar7 + 1);
      uVar23 = (uint)*pbVar7;
    }
    *param_1 = uVar23;
    if (uVar23 == 0x3a) {
      lVar11 = **(long **)puVar19;
      **(long **)puVar19 = lVar11 + -1;
      plVar15 = *(long **)puVar19;
      if (lVar11 == 0) {
        pbVar7 = (byte *)(*(code *)plVar15[2])(plVar15[4],plVar15[3],&local_68);
        uVar23 = 0xffffffff;
        if ((pbVar7 != (byte *)0x0) && (local_68 != 0)) {
          *plVar15 = local_68 + -1;
          plVar15[1] = (long)(pbVar7 + 1);
          uVar23 = (uint)*pbVar7;
        }
      }
      else {
        pbVar7 = (byte *)plVar15[1];
        plVar15[1] = (long)(pbVar7 + 1);
        uVar23 = (uint)*pbVar7;
      }
      *param_1 = uVar23;
      uVar14 = 0x120;
    }
    else {
      uVar14 = 0x3a;
    }
    goto switchD_710390f038_caseD_ffffffff;
  case 0x3c:
    lVar11 = **(long **)puVar19;
    **(long **)puVar19 = lVar11 + -1;
    plVar15 = *(long **)puVar19;
    if (lVar11 == 0) {
      pbVar7 = (byte *)(*(code *)plVar15[2])(plVar15[4],plVar15[3],&local_68);
      uVar23 = 0xffffffff;
      if ((pbVar7 != (byte *)0x0) && (local_68 != 0)) {
        *plVar15 = local_68 + -1;
        plVar15[1] = (long)(pbVar7 + 1);
        uVar23 = (uint)*pbVar7;
      }
    }
    else {
      pbVar7 = (byte *)plVar15[1];
      plVar15[1] = (long)(pbVar7 + 1);
      uVar23 = (uint)*pbVar7;
    }
    *param_1 = uVar23;
    if (uVar23 == 0x3c) {
      lVar11 = **(long **)puVar19;
      **(long **)puVar19 = lVar11 + -1;
      plVar15 = *(long **)puVar19;
      if (lVar11 == 0) {
        pbVar7 = (byte *)(*(code *)plVar15[2])(plVar15[4],plVar15[3],&local_68);
        uVar23 = 0xffffffff;
        if ((pbVar7 != (byte *)0x0) && (local_68 != 0)) {
          *plVar15 = local_68 + -1;
          plVar15[1] = (long)(pbVar7 + 1);
          uVar23 = (uint)*pbVar7;
        }
      }
      else {
        pbVar7 = (byte *)plVar15[1];
        plVar15[1] = (long)(pbVar7 + 1);
        uVar23 = (uint)*pbVar7;
      }
      *param_1 = uVar23;
      uVar14 = 0x11e;
    }
    else if (uVar23 == 0x3d) {
      lVar11 = **(long **)puVar19;
      **(long **)puVar19 = lVar11 + -1;
      plVar15 = *(long **)puVar19;
      if (lVar11 == 0) {
        pbVar7 = (byte *)(*(code *)plVar15[2])(plVar15[4],plVar15[3],&local_68);
        uVar23 = 0xffffffff;
        if ((pbVar7 != (byte *)0x0) && (local_68 != 0)) {
          *plVar15 = local_68 + -1;
          plVar15[1] = (long)(pbVar7 + 1);
          uVar23 = (uint)*pbVar7;
        }
      }
      else {
        pbVar7 = (byte *)plVar15[1];
        plVar15[1] = (long)(pbVar7 + 1);
        uVar23 = (uint)*pbVar7;
      }
      *param_1 = uVar23;
      uVar14 = 0x11c;
    }
    else {
      uVar14 = 0x3c;
    }
    goto switchD_710390f038_caseD_ffffffff;
  case 0x3d:
    lVar11 = **(long **)puVar19;
    **(long **)puVar19 = lVar11 + -1;
    plVar15 = *(long **)puVar19;
    if (lVar11 == 0) {
      pbVar7 = (byte *)(*(code *)plVar15[2])(plVar15[4],plVar15[3],&local_68);
      uVar23 = 0xffffffff;
      if ((pbVar7 != (byte *)0x0) && (local_68 != 0)) {
        *plVar15 = local_68 + -1;
        plVar15[1] = (long)(pbVar7 + 1);
        uVar23 = (uint)*pbVar7;
      }
    }
    else {
      pbVar7 = (byte *)plVar15[1];
      plVar15[1] = (long)(pbVar7 + 1);
      uVar23 = (uint)*pbVar7;
    }
    *param_1 = uVar23;
    if (uVar23 == 0x3d) {
      lVar11 = **(long **)puVar19;
      **(long **)puVar19 = lVar11 + -1;
      plVar15 = *(long **)puVar19;
      if (lVar11 == 0) {
        pbVar7 = (byte *)(*(code *)plVar15[2])(plVar15[4],plVar15[3],&local_68);
        uVar23 = 0xffffffff;
        if ((pbVar7 != (byte *)0x0) && (local_68 != 0)) {
          *plVar15 = local_68 + -1;
          plVar15[1] = (long)(pbVar7 + 1);
          uVar23 = (uint)*pbVar7;
        }
      }
      else {
        pbVar7 = (byte *)plVar15[1];
        plVar15[1] = (long)(pbVar7 + 1);
        uVar23 = (uint)*pbVar7;
      }
      *param_1 = uVar23;
      uVar14 = 0x11a;
    }
    else {
      uVar14 = 0x3d;
    }
    goto switchD_710390f038_caseD_ffffffff;
  case 0x3e:
    lVar11 = **(long **)puVar19;
    **(long **)puVar19 = lVar11 + -1;
    plVar15 = *(long **)puVar19;
    if (lVar11 == 0) {
      pbVar7 = (byte *)(*(code *)plVar15[2])(plVar15[4],plVar15[3],&local_68);
      uVar23 = 0xffffffff;
      if ((pbVar7 != (byte *)0x0) && (local_68 != 0)) {
        *plVar15 = local_68 + -1;
        plVar15[1] = (long)(pbVar7 + 1);
        uVar23 = (uint)*pbVar7;
      }
    }
    else {
      pbVar7 = (byte *)plVar15[1];
      plVar15[1] = (long)(pbVar7 + 1);
      uVar23 = (uint)*pbVar7;
    }
    *param_1 = uVar23;
    if (uVar23 == 0x3e) {
      lVar11 = **(long **)puVar19;
      **(long **)puVar19 = lVar11 + -1;
      plVar15 = *(long **)puVar19;
      if (lVar11 == 0) {
        pbVar7 = (byte *)(*(code *)plVar15[2])(plVar15[4],plVar15[3],&local_68);
        uVar23 = 0xffffffff;
        if ((pbVar7 != (byte *)0x0) && (local_68 != 0)) {
          *plVar15 = local_68 + -1;
          plVar15[1] = (long)(pbVar7 + 1);
          uVar23 = (uint)*pbVar7;
        }
      }
      else {
        pbVar7 = (byte *)plVar15[1];
        plVar15[1] = (long)(pbVar7 + 1);
        uVar23 = (uint)*pbVar7;
      }
      *param_1 = uVar23;
      uVar14 = 0x11f;
    }
    else if (uVar23 == 0x3d) {
      lVar11 = **(long **)puVar19;
      **(long **)puVar19 = lVar11 + -1;
      plVar15 = *(long **)puVar19;
      if (lVar11 == 0) {
        pbVar7 = (byte *)(*(code *)plVar15[2])(plVar15[4],plVar15[3],&local_68);
        uVar23 = 0xffffffff;
        if ((pbVar7 != (byte *)0x0) && (local_68 != 0)) {
          *plVar15 = local_68 + -1;
          plVar15[1] = (long)(pbVar7 + 1);
          uVar23 = (uint)*pbVar7;
        }
      }
      else {
        pbVar7 = (byte *)plVar15[1];
        plVar15[1] = (long)(pbVar7 + 1);
        uVar23 = (uint)*pbVar7;
      }
      *param_1 = uVar23;
      uVar14 = 0x11b;
    }
    else {
      uVar14 = 0x3e;
    }
    goto switchD_710390f038_caseD_ffffffff;
  case 0x5b:
    uVar23 = FUN_7103911c00(param_1);
    if (-1 < (int)uVar23) {
      FUN_7103911ed0(param_1,(undefined8 *)param_2,uVar23);
      goto LAB_71039111b0;
    }
    if (uVar23 != 0xffffffff) {
      pcVar6 = "invalid long string delimiter";
      goto LAB_7103911358;
    }
    uVar14 = 0x5b;
    goto switchD_710390f038_caseD_ffffffff;
  case 0x7e:
    lVar11 = **(long **)puVar19;
    **(long **)puVar19 = lVar11 + -1;
    plVar15 = *(long **)puVar19;
    if (lVar11 == 0) {
      pbVar7 = (byte *)(*(code *)plVar15[2])(plVar15[4],plVar15[3],&local_68);
      uVar23 = 0xffffffff;
      if ((pbVar7 != (byte *)0x0) && (local_68 != 0)) {
        *plVar15 = local_68 + -1;
        plVar15[1] = (long)(pbVar7 + 1);
        uVar23 = (uint)*pbVar7;
      }
    }
    else {
      pbVar7 = (byte *)plVar15[1];
      plVar15[1] = (long)(pbVar7 + 1);
      uVar23 = (uint)*pbVar7;
    }
    *param_1 = uVar23;
    if (uVar23 == 0x3d) {
      lVar11 = **(long **)puVar19;
      **(long **)puVar19 = lVar11 + -1;
      plVar15 = *(long **)puVar19;
      if (lVar11 == 0) {
        pbVar7 = (byte *)(*(code *)plVar15[2])(plVar15[4],plVar15[3],&local_68);
        uVar23 = 0xffffffff;
        if ((pbVar7 != (byte *)0x0) && (local_68 != 0)) {
          *plVar15 = local_68 + -1;
          plVar15[1] = (long)(pbVar7 + 1);
          uVar23 = (uint)*pbVar7;
        }
      }
      else {
        pbVar7 = (byte *)plVar15[1];
        plVar15[1] = (long)(pbVar7 + 1);
        uVar23 = (uint)*pbVar7;
      }
      *param_1 = uVar23;
      uVar14 = 0x11d;
    }
    else {
      uVar14 = 0x7e;
    }
  case 0xffffffff:
    goto switchD_710390f038_caseD_ffffffff;
  }
joined_r0x00710390f574:
  if (uVar14 == uVar23) goto LAB_7103910fe0;
  if ((int)uVar14 < 0x5c) {
    if (uVar14 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_710390eb90((long)param_1,"unfinished string",0x121);
    }
    if ((uVar14 != 10) && (uVar14 != 0xd)) {
LAB_710391041c:
      plVar15 = *(long **)puVar10;
      lVar11 = plVar15[1];
      uVar12 = plVar15[2];
      uVar5 = lVar11 + 1;
      if (uVar12 < uVar5) {
        if (0x3ffffffffffffffe < uVar12) goto LAB_7103911234;
        lVar17 = *(long *)(param_1 + 0xe);
        puVar21 = *(undefined8 **)(lVar17 + 0x18);
        lVar11 = *plVar15;
        lVar16 = uVar12 * 2;
        lVar4 = (*(code *)*puVar21)(puVar21[1],lVar11,uVar12,lVar16);
        if ((lVar16 != 0) && (lVar4 == 0)) {
          if (puVar21[0x1a] == 0) goto LAB_7103911248;
          FUN_71039004f0(lVar17,1);
          lVar4 = (*(code *)*puVar21)(puVar21[1],lVar11,uVar12,lVar16);
          if (lVar4 == 0) goto LAB_7103911248;
        }
        lVar17 = 0;
        if (lVar11 != 0) {
          lVar17 = -uVar12;
        }
        puVar21[3] = lVar17 + lVar16 + puVar21[3];
        lVar11 = plVar15[1];
        uVar5 = lVar11 + 1;
        *plVar15 = lVar4;
        plVar15[2] = lVar16;
      }
      else {
        lVar4 = *plVar15;
      }
      plVar15[1] = uVar5;
      *(char *)(lVar4 + lVar11) = (char)uVar14;
      lVar11 = **(long **)puVar19;
      **(long **)puVar19 = lVar11 + -1;
      plVar15 = *(long **)puVar19;
      if (lVar11 == 0) {
        pbVar7 = (byte *)(*(code *)plVar15[2])(plVar15[4],plVar15[3],&local_68);
        if (pbVar7 == (byte *)0x0) {
          uVar14 = 0xffffffff;
        }
        else {
          uVar14 = 0xffffffff;
          if (local_68 != 0) {
            *plVar15 = local_68 + -1;
            plVar15[1] = (long)(pbVar7 + 1);
            uVar14 = (uint)*pbVar7;
          }
        }
      }
      else {
        pbVar7 = (byte *)plVar15[1];
        plVar15[1] = (long)(pbVar7 + 1);
        uVar14 = (uint)*pbVar7;
      }
      *param_1 = uVar14;
      goto switchD_71039105d4_caseD_ffffffff;
    }
    pcVar6 = "unfinished string";
    goto LAB_7103911358;
  }
  if (uVar14 != 0x5c) goto LAB_710391041c;
  plVar15 = *(long **)puVar10;
  lVar11 = plVar15[1];
  uVar12 = plVar15[2];
  uVar5 = lVar11 + 1;
  if (uVar12 < uVar5) {
    if (0x3ffffffffffffffe < uVar12) goto LAB_7103911234;
    lVar17 = *(long *)(param_1 + 0xe);
    puVar21 = *(undefined8 **)(lVar17 + 0x18);
    lVar11 = *plVar15;
    lVar16 = uVar12 * 2;
    lVar4 = (*(code *)*puVar21)(puVar21[1],lVar11,uVar12,lVar16);
    if ((lVar16 != 0) && (lVar4 == 0)) {
      if (puVar21[0x1a] == 0) goto LAB_7103911248;
      FUN_71039004f0(lVar17,1);
      lVar4 = (*(code *)*puVar21)(puVar21[1],lVar11,uVar12,lVar16);
      if (lVar4 == 0) goto LAB_7103911248;
    }
    lVar17 = 0;
    if (lVar11 != 0) {
      lVar17 = -uVar12;
    }
    puVar21[3] = lVar17 + lVar16 + puVar21[3];
    lVar11 = plVar15[1];
    uVar5 = lVar11 + 1;
    *plVar15 = lVar4;
    plVar15[2] = lVar16;
  }
  else {
    lVar4 = *plVar15;
  }
  plVar15[1] = uVar5;
  *(undefined1 *)(lVar4 + lVar11) = 0x5c;
  lVar11 = **(long **)puVar19;
  **(long **)puVar19 = lVar11 + -1;
  plVar15 = *(long **)puVar19;
  if (lVar11 == 0) {
    pbVar7 = (byte *)(*(code *)plVar15[2])(plVar15[4],plVar15[3],&local_68);
    if (pbVar7 == (byte *)0x0) {
      uVar14 = 0xffffffff;
    }
    else {
      uVar14 = 0xffffffff;
      if (local_68 != 0) {
        *plVar15 = local_68 + -1;
        plVar15[1] = (long)(pbVar7 + 1);
        uVar14 = (uint)*pbVar7;
      }
    }
  }
  else {
    pbVar7 = (byte *)plVar15[1];
    plVar15[1] = (long)(pbVar7 + 1);
    uVar14 = (uint)*pbVar7;
  }
  *param_1 = uVar14;
  uVar20 = 7;
  switch(uVar14) {
  default:
    if ((*(byte *)((long)&DAT_7104862970 + (long)(int)uVar14 + 1) >> 1 & 1) != 0) {
      plVar15 = *(long **)puVar10;
      lVar11 = plVar15[1];
      uVar12 = plVar15[2];
      uVar5 = lVar11 + 1;
      if (uVar12 < uVar5) {
        if (0x3ffffffffffffffe < uVar12) goto LAB_7103911234;
        lVar17 = *(long *)(param_1 + 0xe);
        puVar21 = *(undefined8 **)(lVar17 + 0x18);
        lVar11 = *plVar15;
        lVar16 = uVar12 * 2;
        lVar4 = (*(code *)*puVar21)(puVar21[1],lVar11,uVar12,lVar16);
        if ((lVar16 != 0) && (lVar4 == 0)) {
          if (puVar21[0x1a] == 0) goto LAB_7103911248;
          FUN_71039004f0(lVar17,1);
          lVar4 = (*(code *)*puVar21)(puVar21[1],lVar11,uVar12,lVar16);
          if (lVar4 == 0) goto LAB_7103911248;
        }
        lVar17 = 0;
        if (lVar11 != 0) {
          lVar17 = -uVar12;
        }
        puVar21[3] = lVar17 + lVar16 + puVar21[3];
        lVar11 = plVar15[1];
        uVar5 = lVar11 + 1;
        *plVar15 = lVar4;
        plVar15[2] = lVar16;
      }
      else {
        lVar4 = *plVar15;
      }
      plVar15[1] = uVar5;
      *(char *)(lVar4 + lVar11) = (char)uVar14;
      lVar11 = **(long **)puVar19;
      **(long **)puVar19 = lVar11 + -1;
      plVar15 = *(long **)puVar19;
      if (lVar11 == 0) {
        pbVar7 = (byte *)(*(code *)plVar15[2])(plVar15[4],plVar15[3],&local_68);
        if (pbVar7 == (byte *)0x0) {
          uVar20 = 0xffffffff;
        }
        else {
          uVar20 = 0xffffffff;
          if (local_68 != 0) {
            *plVar15 = local_68 + -1;
            plVar15[1] = (long)(pbVar7 + 1);
            uVar20 = (uint)*pbVar7;
          }
        }
      }
      else {
        pbVar7 = (byte *)plVar15[1];
        plVar15[1] = (long)(pbVar7 + 1);
        uVar20 = (uint)*pbVar7;
      }
      *param_1 = uVar20;
      iVar9 = uVar14 - 0x30;
      if ((*(byte *)((long)&DAT_7104862970 + (long)(int)uVar20 + 1) >> 1 & 1) == 0) {
        lVar11 = 1;
      }
      else {
        plVar15 = *(long **)puVar10;
        lVar11 = plVar15[1];
        uVar12 = plVar15[2];
        uVar5 = lVar11 + 1;
        if (uVar12 < uVar5) {
          if (0x3ffffffffffffffe < uVar12) goto LAB_7103911234;
          local_88 = *(long *)(param_1 + 0xe);
          puVar21 = *(undefined8 **)(local_88 + 0x18);
          lVar11 = *plVar15;
          lVar16 = uVar12 * 2;
          lVar4 = (*(code *)*puVar21)(puVar21[1],lVar11,uVar12,lVar16);
          if ((lVar16 != 0) && (lVar4 == 0)) {
            if (puVar21[0x1a] == 0) goto LAB_710391178c;
            FUN_71039004f0(local_88,1);
            lVar4 = (*(code *)*puVar21)(puVar21[1],lVar11,uVar12,lVar16);
            if (lVar4 == 0) goto LAB_710391178c;
          }
          lVar17 = 0;
          if (lVar11 != 0) {
            lVar17 = -uVar12;
          }
          puVar21[3] = lVar17 + lVar16 + puVar21[3];
          lVar11 = plVar15[1];
          uVar5 = lVar11 + 1;
          *plVar15 = lVar4;
          plVar15[2] = lVar16;
        }
        else {
          lVar4 = *plVar15;
        }
        plVar15[1] = uVar5;
        *(char *)(lVar4 + lVar11) = (char)uVar20;
        lVar11 = **(long **)puVar19;
        **(long **)puVar19 = lVar11 + -1;
        plVar15 = *(long **)puVar19;
        if (lVar11 == 0) {
          pbVar7 = (byte *)(*(code *)plVar15[2])(plVar15[4],plVar15[3],&local_68);
          if (pbVar7 == (byte *)0x0) {
            uVar14 = 0xffffffff;
          }
          else {
            uVar14 = 0xffffffff;
            if (local_68 != 0) {
              *plVar15 = local_68 + -1;
              plVar15[1] = (long)(pbVar7 + 1);
              uVar14 = (uint)*pbVar7;
            }
          }
        }
        else {
          pbVar7 = (byte *)plVar15[1];
          plVar15[1] = (long)(pbVar7 + 1);
          uVar14 = (uint)*pbVar7;
        }
        *param_1 = uVar14;
        iVar9 = uVar20 + iVar9 * 10 + -0x30;
        if ((*(byte *)((long)&DAT_7104862970 + (long)(int)uVar14 + 1) >> 1 & 1) == 0) {
          lVar11 = 2;
        }
        else {
          plVar15 = *(long **)puVar10;
          lVar11 = plVar15[1];
          uVar12 = plVar15[2];
          uVar5 = lVar11 + 1;
          if (uVar12 < uVar5) {
            if (0x3ffffffffffffffe < uVar12) goto LAB_7103911234;
            local_88 = *(long *)(param_1 + 0xe);
            puVar21 = *(undefined8 **)(local_88 + 0x18);
            lVar11 = *plVar15;
            lVar16 = uVar12 * 2;
            lVar4 = (*(code *)*puVar21)(puVar21[1],lVar11,uVar12,lVar16);
            if ((lVar16 != 0) && (lVar4 == 0)) {
              if (puVar21[0x1a] == 0) goto LAB_710391178c;
              FUN_71039004f0(local_88,1);
              lVar4 = (*(code *)*puVar21)(puVar21[1],lVar11,uVar12,lVar16);
              if (lVar4 == 0) goto LAB_710391178c;
            }
            lVar17 = 0;
            if (lVar11 != 0) {
              lVar17 = -uVar12;
            }
            puVar21[3] = lVar17 + lVar16 + puVar21[3];
            lVar11 = plVar15[1];
            uVar5 = lVar11 + 1;
            *plVar15 = lVar4;
            plVar15[2] = lVar16;
          }
          else {
            lVar4 = *plVar15;
          }
          plVar15[1] = uVar5;
          *(char *)(lVar4 + lVar11) = (char)uVar14;
          iVar9 = uVar14 + iVar9 * 10 + -0x30;
          lVar11 = **(long **)puVar19;
          **(long **)puVar19 = lVar11 + -1;
          plVar15 = *(long **)puVar19;
          if (lVar11 == 0) {
            pbVar7 = (byte *)(*(code *)plVar15[2])(plVar15[4],plVar15[3],&local_68);
            if (pbVar7 == (byte *)0x0) {
              uVar14 = 0xffffffff;
            }
            else {
              uVar14 = 0xffffffff;
              if (local_68 != 0) {
                *plVar15 = local_68 + -1;
                plVar15[1] = (long)(pbVar7 + 1);
                uVar14 = (uint)*pbVar7;
              }
            }
          }
          else {
            pbVar7 = (byte *)plVar15[1];
            plVar15[1] = (long)(pbVar7 + 1);
            uVar14 = (uint)*pbVar7;
          }
          *param_1 = uVar14;
          lVar11 = 3;
        }
        if (0xff < iVar9) {
          if (uVar14 != 0xffffffff) {
            plVar15 = *(long **)puVar10;
            lVar11 = plVar15[1];
            uVar12 = plVar15[2];
            uVar5 = lVar11 + 1;
            if (uVar12 < uVar5) {
              if (0x3ffffffffffffffe < uVar12) goto LAB_7103911234;
              lVar17 = *(long *)(param_1 + 0xe);
              puVar21 = *(undefined8 **)(lVar17 + 0x18);
              lVar11 = *plVar15;
              lVar16 = uVar12 * 2;
              lVar4 = (*(code *)*puVar21)(puVar21[1],lVar11,uVar12,lVar16);
              if ((lVar16 != 0) && (lVar4 == 0)) {
                if (puVar21[0x1a] == 0) goto LAB_71039112b4;
                FUN_71039004f0(lVar17,1);
                lVar4 = (*(code *)*puVar21)(puVar21[1],lVar11,uVar12,lVar16);
                if (lVar4 == 0) goto LAB_71039112b4;
              }
              lVar17 = 0;
              if (lVar11 != 0) {
                lVar17 = -uVar12;
              }
              puVar21[3] = lVar17 + lVar16 + puVar21[3];
              lVar11 = plVar15[1];
              uVar5 = lVar11 + 1;
              *plVar15 = lVar4;
              plVar15[2] = lVar16;
            }
            else {
              lVar4 = *plVar15;
            }
            plVar15[1] = uVar5;
            *(char *)(lVar4 + lVar11) = (char)uVar14;
            lVar11 = **(long **)puVar19;
            **(long **)puVar19 = lVar11 + -1;
            plVar15 = *(long **)puVar19;
            if (lVar11 == 0) {
              pbVar7 = (byte *)(*(code *)plVar15[2])(plVar15[4],plVar15[3],&local_68);
              uVar23 = 0xffffffff;
              if ((pbVar7 != (byte *)0x0) && (local_68 != 0)) {
                *plVar15 = local_68 + -1;
                plVar15[1] = (long)(pbVar7 + 1);
                uVar23 = (uint)*pbVar7;
              }
            }
            else {
              pbVar7 = (byte *)plVar15[1];
              plVar15[1] = (long)(pbVar7 + 1);
              uVar23 = (uint)*pbVar7;
            }
            *param_1 = uVar23;
          }
          pcVar6 = "decimal escape too large";
          goto LAB_7103911358;
        }
      }
      uVar24 = (undefined1)iVar9;
      *(long *)(*(long *)puVar10 + 8) = *(long *)(*(long *)puVar10 + 8) - lVar11;
      goto LAB_7103910f10;
    }
    if (uVar14 != 0xffffffff) {
      plVar15 = *(long **)puVar10;
      lVar11 = plVar15[1];
      uVar12 = plVar15[2];
      uVar5 = lVar11 + 1;
      if (uVar12 < uVar5) {
        if (0x3ffffffffffffffe < uVar12) goto LAB_7103911234;
        lVar17 = *(long *)(param_1 + 0xe);
        puVar21 = *(undefined8 **)(lVar17 + 0x18);
        lVar11 = *plVar15;
        lVar16 = uVar12 * 2;
        lVar4 = (*(code *)*puVar21)(puVar21[1],lVar11,uVar12,lVar16);
        if ((lVar16 != 0) && (lVar4 == 0)) {
          if (puVar21[0x1a] == 0) goto LAB_71039112b4;
          FUN_71039004f0(lVar17,1);
          lVar4 = (*(code *)*puVar21)(puVar21[1],lVar11,uVar12,lVar16);
          if (lVar4 == 0) goto LAB_71039112b4;
        }
        lVar17 = 0;
        if (lVar11 != 0) {
          lVar17 = -uVar12;
        }
        puVar21[3] = lVar17 + lVar16 + puVar21[3];
        lVar11 = plVar15[1];
        uVar5 = lVar11 + 1;
        *plVar15 = lVar4;
        plVar15[2] = lVar16;
      }
      else {
        lVar4 = *plVar15;
      }
      plVar15[1] = uVar5;
      *(char *)(lVar4 + lVar11) = (char)uVar14;
      lVar11 = **(long **)puVar19;
      **(long **)puVar19 = lVar11 + -1;
      plVar15 = *(long **)puVar19;
      if (lVar11 == 0) {
        pbVar7 = (byte *)(*(code *)plVar15[2])(plVar15[4],plVar15[3],&local_68);
        uVar23 = 0xffffffff;
        if ((pbVar7 != (byte *)0x0) && (local_68 != 0)) {
          *plVar15 = local_68 + -1;
          plVar15[1] = (long)(pbVar7 + 1);
          uVar23 = (uint)*pbVar7;
        }
      }
      else {
        pbVar7 = (byte *)plVar15[1];
        plVar15[1] = (long)(pbVar7 + 1);
        uVar23 = (uint)*pbVar7;
      }
      *param_1 = uVar23;
    }
    pcVar6 = "invalid escape sequence";
    goto LAB_7103911358;
  case 10:
  case 0xd:
    FUN_7103911ad0(param_1);
    uVar24 = 10;
    goto LAB_7103910f10;
  case 0x22:
  case 0x27:
  case 0x5c:
    uVar20 = uVar14;
    break;
  case 0x61:
    break;
  case 0x62:
    uVar20 = 8;
    break;
  case 0x66:
    uVar20 = 0xc;
    break;
  case 0x6e:
    uVar20 = 10;
    break;
  case 0x72:
    uVar20 = 0xd;
    break;
  case 0x74:
    uVar20 = 9;
    break;
  case 0x75:
    plVar15 = *(long **)puVar10;
    lVar11 = plVar15[1];
    uVar12 = plVar15[2];
    uVar5 = lVar11 + 1;
    if (uVar12 < uVar5) {
      if (0x3ffffffffffffffe < uVar12) goto LAB_7103911234;
      lVar17 = *(long *)(param_1 + 0xe);
      puVar21 = *(undefined8 **)(lVar17 + 0x18);
      lVar11 = *plVar15;
      lVar16 = uVar12 * 2;
      lVar4 = (*(code *)*puVar21)(puVar21[1],lVar11,uVar12,lVar16);
      if ((lVar16 != 0) && (lVar4 == 0)) {
        if (puVar21[0x1a] == 0) goto LAB_7103911248;
        FUN_71039004f0(lVar17,1);
        lVar4 = (*(code *)*puVar21)(puVar21[1],lVar11,uVar12,lVar16);
        if (lVar4 == 0) goto LAB_7103911248;
      }
      lVar17 = 0;
      if (lVar11 != 0) {
        lVar17 = -uVar12;
      }
      puVar21[3] = lVar17 + lVar16 + puVar21[3];
      lVar11 = plVar15[1];
      uVar5 = lVar11 + 1;
      *plVar15 = lVar4;
      plVar15[2] = lVar16;
    }
    else {
      lVar4 = *plVar15;
    }
    plVar15[1] = uVar5;
    *(undefined1 *)(lVar4 + lVar11) = 0x75;
    lVar11 = **(long **)puVar19;
    **(long **)puVar19 = lVar11 + -1;
    plVar15 = *(long **)puVar19;
    if (lVar11 == 0) {
      pbVar7 = (byte *)(*(code *)plVar15[2])(plVar15[4],plVar15[3],&local_68);
      if (pbVar7 == (byte *)0x0) {
        uVar14 = 0xffffffff;
      }
      else {
        uVar14 = 0xffffffff;
        if (local_68 != 0) {
          *plVar15 = local_68 + -1;
          plVar15[1] = (long)(pbVar7 + 1);
          uVar14 = (uint)*pbVar7;
        }
      }
    }
    else {
      pbVar7 = (byte *)plVar15[1];
      plVar15[1] = (long)(pbVar7 + 1);
      uVar14 = (uint)*pbVar7;
    }
    *param_1 = uVar14;
    if (uVar14 == 0x7b) {
      plVar15 = *(long **)puVar10;
      lVar11 = plVar15[1];
      uVar12 = plVar15[2];
      uVar5 = lVar11 + 1;
      if (uVar12 < uVar5) {
        if (0x3ffffffffffffffe < uVar12) goto LAB_7103911234;
        lVar17 = *(long *)(param_1 + 0xe);
        puVar21 = *(undefined8 **)(lVar17 + 0x18);
        lVar11 = *plVar15;
        lVar16 = uVar12 * 2;
        lVar4 = (*(code *)*puVar21)(puVar21[1],lVar11,uVar12,lVar16);
        if ((lVar16 != 0) && (lVar4 == 0)) {
          if (puVar21[0x1a] == 0) goto LAB_7103911248;
          FUN_71039004f0(lVar17,1);
          lVar4 = (*(code *)*puVar21)(puVar21[1],lVar11,uVar12,lVar16);
          if (lVar4 == 0) goto LAB_7103911248;
        }
        lVar17 = 0;
        if (lVar11 != 0) {
          lVar17 = -uVar12;
        }
        puVar21[3] = lVar17 + lVar16 + puVar21[3];
        lVar11 = plVar15[1];
        uVar5 = lVar11 + 1;
        *plVar15 = lVar4;
        plVar15[2] = lVar16;
      }
      else {
        lVar4 = *plVar15;
      }
      plVar15[1] = uVar5;
      *(undefined1 *)(lVar4 + lVar11) = 0x7b;
      lVar11 = **(long **)puVar19;
      **(long **)puVar19 = lVar11 + -1;
      plVar15 = *(long **)puVar19;
      if (lVar11 == 0) {
        pbVar7 = (byte *)(*(code *)plVar15[2])(plVar15[4],plVar15[3],&local_68);
        if (pbVar7 == (byte *)0x0) {
          uVar14 = 0xffffffff;
        }
        else {
          uVar14 = 0xffffffff;
          if (local_68 != 0) {
            *plVar15 = local_68 + -1;
            plVar15[1] = (long)(pbVar7 + 1);
            uVar14 = (uint)*pbVar7;
          }
        }
      }
      else {
        pbVar7 = (byte *)plVar15[1];
        plVar15[1] = (long)(pbVar7 + 1);
        uVar14 = (uint)*pbVar7;
      }
      *param_1 = uVar14;
      bVar3 = *(byte *)((long)&DAT_7104862970 + (long)(int)uVar14 + 1);
      if ((bVar3 >> 4 & 1) == 0) {
        if (uVar14 == 0xffffffff) goto LAB_7103911a34;
        plVar15 = *(long **)puVar10;
        lVar11 = plVar15[1];
        uVar12 = plVar15[2];
        uVar5 = lVar11 + 1;
        if (uVar12 < uVar5) {
          if (0x3ffffffffffffffe < uVar12) goto LAB_7103911234;
          lVar17 = *(long *)(param_1 + 0xe);
          puVar21 = *(undefined8 **)(lVar17 + 0x18);
          lVar11 = *plVar15;
          lVar16 = uVar12 * 2;
          lVar4 = (*(code *)*puVar21)(puVar21[1],lVar11,uVar12,lVar16);
          if ((lVar16 != 0) && (lVar4 == 0)) {
            if (puVar21[0x1a] == 0) goto LAB_71039112b4;
            FUN_71039004f0(lVar17,1);
            lVar4 = (*(code *)*puVar21)(puVar21[1],lVar11,uVar12,lVar16);
            if (lVar4 == 0) goto LAB_71039112b4;
          }
          lVar17 = 0;
          if (lVar11 != 0) {
            lVar17 = -uVar12;
          }
          puVar21[3] = lVar17 + lVar16 + puVar21[3];
          lVar11 = plVar15[1];
          uVar5 = lVar11 + 1;
          *plVar15 = lVar4;
          plVar15[2] = lVar16;
        }
        else {
          lVar4 = *plVar15;
        }
        plVar15[1] = uVar5;
        *(char *)(lVar4 + lVar11) = (char)uVar14;
        goto LAB_71039119d4;
      }
      iVar9 = (uVar14 | 0x20) - 0x57;
      if ((bVar3 & 2) != 0) {
        iVar9 = uVar14 - 0x30;
      }
      uVar5 = (ulong)iVar9;
      lVar11 = -4;
      while( true ) {
        plVar15 = *(long **)puVar10;
        lVar4 = plVar15[1];
        uVar13 = plVar15[2];
        uVar12 = lVar4 + 1;
        if (uVar13 < uVar12) {
          if (0x3ffffffffffffffe < uVar13) goto LAB_7103911234;
          local_90 = *(long *)(param_1 + 0xe);
          puVar21 = *(undefined8 **)(local_90 + 0x18);
          lVar4 = *plVar15;
          lVar17 = uVar13 * 2;
          lVar16 = (*(code *)*puVar21)(puVar21[1],lVar4,uVar13,lVar17);
          if (lVar17 != 0 && lVar16 == 0) {
            if (puVar21[0x1a] == 0) goto LAB_71039111f8;
            FUN_71039004f0(local_90,1);
            lVar16 = (*(code *)*puVar21)(puVar21[1],lVar4,uVar13,lVar17);
            if (lVar16 == 0) goto LAB_71039111f8;
          }
          lVar2 = 0;
          if (lVar4 != 0) {
            lVar2 = -uVar13;
          }
          puVar21[3] = lVar2 + lVar17 + puVar21[3];
          lVar4 = plVar15[1];
          plVar15[2] = lVar17;
          uVar12 = lVar4 + 1;
          *plVar15 = lVar16;
        }
        else {
          lVar16 = *plVar15;
        }
        plVar15[1] = uVar12;
        *(char *)(lVar16 + lVar4) = (char)uVar14;
        lVar4 = **(long **)puVar19;
        **(long **)puVar19 = lVar4 + -1;
        plVar15 = *(long **)puVar19;
        if (lVar4 == 0) {
          pbVar7 = (byte *)(*(code *)plVar15[2])(plVar15[4],plVar15[3],&local_68);
          if (pbVar7 == (byte *)0x0) {
            uVar14 = 0xffffffff;
          }
          else {
            uVar14 = 0xffffffff;
            if (local_68 != 0) {
              *plVar15 = local_68 + -1;
              plVar15[1] = (long)(pbVar7 + 1);
              uVar14 = (uint)*pbVar7;
            }
          }
        }
        else {
          pbVar7 = (byte *)plVar15[1];
          plVar15[1] = (long)(pbVar7 + 1);
          uVar14 = (uint)*pbVar7;
        }
        *param_1 = uVar14;
        bVar3 = *(byte *)((long)&DAT_7104862970 + (long)(int)uVar14 + 1);
        if ((bVar3 >> 4 & 1) == 0) break;
        lVar11 = lVar11 + -1;
        iVar9 = (uVar14 | 0x20) - 0x57;
        if ((bVar3 & 2) != 0) {
          iVar9 = uVar14 - 0x30;
        }
        uVar5 = uVar5 * 0x10 + (long)iVar9;
        if (0x10ffff < uVar5) {
          if (uVar14 != 0xffffffff) {
            plVar15 = *(long **)puVar10;
            lVar11 = plVar15[1];
            uVar12 = plVar15[2];
            uVar5 = lVar11 + 1;
            if (uVar12 < uVar5) {
              if (0x3ffffffffffffffe < uVar12) goto LAB_7103911234;
              lVar17 = *(long *)(param_1 + 0xe);
              puVar21 = *(undefined8 **)(lVar17 + 0x18);
              lVar11 = *plVar15;
              lVar16 = uVar12 * 2;
              lVar4 = (*(code *)*puVar21)(puVar21[1],lVar11,uVar12,lVar16);
              if ((lVar16 != 0) && (lVar4 == 0)) {
                if (puVar21[0x1a] == 0) goto LAB_71039112b4;
                FUN_71039004f0(lVar17,1);
                lVar4 = (*(code *)*puVar21)(puVar21[1],lVar11,uVar12,lVar16);
                if (lVar4 == 0) goto LAB_71039112b4;
              }
              lVar17 = 0;
              if (lVar11 != 0) {
                lVar17 = -uVar12;
              }
              puVar21[3] = lVar17 + lVar16 + puVar21[3];
              lVar11 = plVar15[1];
              uVar5 = lVar11 + 1;
              *plVar15 = lVar4;
              plVar15[2] = lVar16;
            }
            else {
              lVar4 = *plVar15;
            }
            plVar15[1] = uVar5;
            *(char *)(lVar4 + lVar11) = (char)uVar14;
            lVar11 = **(long **)puVar19;
            **(long **)puVar19 = lVar11 + -1;
            plVar15 = *(long **)puVar19;
            if (lVar11 == 0) {
              pbVar7 = (byte *)(*(code *)plVar15[2])(plVar15[4],plVar15[3],&local_68);
              uVar23 = 0xffffffff;
              if ((pbVar7 != (byte *)0x0) && (local_68 != 0)) {
                *plVar15 = local_68 + -1;
                plVar15[1] = (long)(pbVar7 + 1);
                uVar23 = (uint)*pbVar7;
              }
            }
            else {
              pbVar7 = (byte *)plVar15[1];
              plVar15[1] = (long)(pbVar7 + 1);
              uVar23 = (uint)*pbVar7;
            }
            *param_1 = uVar23;
          }
          pcVar6 = "UTF-8 value too large";
          goto LAB_7103911358;
        }
      }
      if (uVar14 == 0x7d) {
        lVar4 = **(long **)puVar19;
        **(long **)puVar19 = lVar4 + -1;
        plVar15 = *(long **)puVar19;
        if (lVar4 == 0) {
          pbVar7 = (byte *)(*(code *)plVar15[2])(plVar15[4],plVar15[3],&local_68);
          if (pbVar7 == (byte *)0x0) {
            uVar14 = 0xffffffff;
          }
          else {
            uVar14 = 0xffffffff;
            if (local_68 != 0) {
              *plVar15 = local_68 + -1;
              plVar15[1] = (long)(pbVar7 + 1);
              uVar14 = (uint)*pbVar7;
            }
          }
        }
        else {
          pbVar7 = (byte *)plVar15[1];
          plVar15[1] = (long)(pbVar7 + 1);
          uVar14 = (uint)*pbVar7;
        }
        *param_1 = uVar14;
        *(long *)(*(long *)(param_1 + 0x12) + 8) = *(long *)(*(long *)(param_1 + 0x12) + 8) + lVar11
        ;
        if (uVar5 < 0x80) {
          local_69 = (byte)uVar5;
          iVar9 = 1;
        }
        else {
          lVar4 = 0;
          lVar11 = 0x700000000;
          uVar12 = 0x3f;
          do {
            uVar13 = uVar12;
            bVar3 = (byte)uVar5;
            uVar5 = uVar5 >> 6;
            uVar12 = uVar13 >> 1;
            lVar11 = lVar11 + -0x100000000;
            (&local_69)[lVar4] = bVar3 & 0x3f | 0x80;
            lVar4 = lVar4 + -1;
          } while (uVar12 < uVar5);
          iVar9 = 1 - (int)lVar4;
          abStack_70[lVar11 >> 0x20] = (byte)uVar5 | ~(byte)uVar13 & 0xfe;
          if (iVar9 < 1) goto switchD_71039105d4_caseD_ffffffff;
        }
        lVar11 = (long)iVar9 + 1;
        puVar22 = (undefined1 *)((long)&local_68 - (long)iVar9);
        do {
          plVar15 = *(long **)puVar10;
          lVar4 = plVar15[1];
          uVar12 = plVar15[2];
          uVar24 = *puVar22;
          uVar5 = lVar4 + 1;
          if (uVar12 < uVar5) {
            if (0x3ffffffffffffffe < uVar12) goto LAB_7103911234;
            local_90 = *(long *)(param_1 + 0xe);
            puVar21 = *(undefined8 **)(local_90 + 0x18);
            lVar4 = *plVar15;
            lVar17 = uVar12 * 2;
            lVar16 = (*(code *)*puVar21)(puVar21[1],lVar4,uVar12,lVar17);
            if (lVar17 != 0 && lVar16 == 0) {
              if (puVar21[0x1a] == 0) {
LAB_71039111f8:
                    /* WARNING: Subroutine does not return */
                FUN_71038fb3c0(local_90,4);
              }
              FUN_71039004f0(local_90,1);
              lVar16 = (*(code *)*puVar21)(puVar21[1],lVar4,uVar12,lVar17);
              if (lVar16 == 0) goto LAB_71039111f8;
            }
            lVar2 = 0;
            if (lVar4 != 0) {
              lVar2 = -uVar12;
            }
            puVar21[3] = lVar2 + lVar17 + puVar21[3];
            lVar4 = plVar15[1];
            plVar15[2] = lVar17;
            uVar5 = lVar4 + 1;
            *plVar15 = lVar16;
          }
          else {
            lVar16 = *plVar15;
          }
          lVar11 = lVar11 + -1;
          puVar22 = puVar22 + 1;
          plVar15[1] = uVar5;
          *(undefined1 *)(lVar16 + lVar4) = uVar24;
        } while (1 < lVar11);
        goto switchD_71039105d4_caseD_ffffffff;
      }
      if (uVar14 != 0xffffffff) {
        plVar15 = *(long **)puVar10;
        lVar11 = plVar15[1];
        uVar12 = plVar15[2];
        uVar5 = lVar11 + 1;
        if (uVar12 < uVar5) {
          if (0x3ffffffffffffffe < uVar12) goto LAB_7103911234;
          lVar17 = *(long *)(param_1 + 0xe);
          puVar21 = *(undefined8 **)(lVar17 + 0x18);
          lVar11 = *plVar15;
          lVar16 = uVar12 * 2;
          lVar4 = (*(code *)*puVar21)(puVar21[1],lVar11,uVar12,lVar16);
          if ((lVar16 != 0) && (lVar4 == 0)) {
            if (puVar21[0x1a] == 0) goto LAB_71039112b4;
            FUN_71039004f0(lVar17,1);
            lVar4 = (*(code *)*puVar21)(puVar21[1],lVar11,uVar12,lVar16);
            if (lVar4 == 0) goto LAB_71039112b4;
          }
          lVar17 = 0;
          if (lVar11 != 0) {
            lVar17 = -uVar12;
          }
          puVar21[3] = lVar17 + lVar16 + puVar21[3];
          lVar11 = plVar15[1];
          uVar5 = lVar11 + 1;
          *plVar15 = lVar4;
          plVar15[2] = lVar16;
        }
        else {
          lVar4 = *plVar15;
        }
        plVar15[1] = uVar5;
        *(char *)(lVar4 + lVar11) = (char)uVar14;
        lVar11 = **(long **)puVar19;
        **(long **)puVar19 = lVar11 + -1;
        plVar15 = *(long **)puVar19;
        if (lVar11 == 0) {
          pbVar7 = (byte *)(*(code *)plVar15[2])(plVar15[4],plVar15[3],&local_68);
          uVar23 = 0xffffffff;
          if ((pbVar7 != (byte *)0x0) && (local_68 != 0)) {
            *plVar15 = local_68 + -1;
            plVar15[1] = (long)(pbVar7 + 1);
            uVar23 = (uint)*pbVar7;
          }
        }
        else {
          pbVar7 = (byte *)plVar15[1];
          plVar15[1] = (long)(pbVar7 + 1);
          uVar23 = (uint)*pbVar7;
        }
        *param_1 = uVar23;
      }
      pcVar6 = "missing \'}\'";
    }
    else {
      if (uVar14 != 0xffffffff) {
        plVar15 = *(long **)puVar10;
        lVar11 = plVar15[1];
        uVar12 = plVar15[2];
        uVar5 = lVar11 + 1;
        if (uVar12 < uVar5) {
          if (0x3ffffffffffffffe < uVar12) goto LAB_7103911234;
          lVar17 = *(long *)(param_1 + 0xe);
          puVar21 = *(undefined8 **)(lVar17 + 0x18);
          lVar11 = *plVar15;
          lVar16 = uVar12 * 2;
          lVar4 = (*(code *)*puVar21)(puVar21[1],lVar11,uVar12,lVar16);
          if ((lVar16 != 0) && (lVar4 == 0)) {
            if (puVar21[0x1a] == 0) goto LAB_71039112b4;
            FUN_71039004f0(lVar17,1);
            lVar4 = (*(code *)*puVar21)(puVar21[1],lVar11,uVar12,lVar16);
            if (lVar4 == 0) goto LAB_71039112b4;
          }
          lVar17 = 0;
          if (lVar11 != 0) {
            lVar17 = -uVar12;
          }
          puVar21[3] = lVar17 + lVar16 + puVar21[3];
          lVar11 = plVar15[1];
          uVar5 = lVar11 + 1;
          *plVar15 = lVar4;
          plVar15[2] = lVar16;
        }
        else {
          lVar4 = *plVar15;
        }
        plVar15[1] = uVar5;
        *(char *)(lVar4 + lVar11) = (char)uVar14;
        lVar11 = **(long **)puVar19;
        **(long **)puVar19 = lVar11 + -1;
        plVar15 = *(long **)puVar19;
        if (lVar11 == 0) {
          pbVar7 = (byte *)(*(code *)plVar15[2])(plVar15[4],plVar15[3],&local_68);
          uVar23 = 0xffffffff;
          if ((pbVar7 != (byte *)0x0) && (local_68 != 0)) {
            *plVar15 = local_68 + -1;
            plVar15[1] = (long)(pbVar7 + 1);
            uVar23 = (uint)*pbVar7;
          }
        }
        else {
          pbVar7 = (byte *)plVar15[1];
          plVar15[1] = (long)(pbVar7 + 1);
          uVar23 = (uint)*pbVar7;
        }
        *param_1 = uVar23;
      }
      pcVar6 = "missing \'{\'";
    }
    goto LAB_7103911358;
  case 0x76:
    uVar20 = 0xb;
    break;
  case 0x78:
    plVar15 = *(long **)puVar10;
    lVar11 = plVar15[1];
    uVar12 = plVar15[2];
    uVar5 = lVar11 + 1;
    if (uVar12 < uVar5) {
      if (0x3ffffffffffffffe < uVar12) goto LAB_7103911234;
      lVar17 = *(long *)(param_1 + 0xe);
      puVar21 = *(undefined8 **)(lVar17 + 0x18);
      lVar11 = *plVar15;
      lVar16 = uVar12 * 2;
      lVar4 = (*(code *)*puVar21)(puVar21[1],lVar11,uVar12,lVar16);
      if ((lVar16 != 0) && (lVar4 == 0)) {
        if (puVar21[0x1a] == 0) goto LAB_7103911248;
        FUN_71039004f0(lVar17,1);
        lVar4 = (*(code *)*puVar21)(puVar21[1],lVar11,uVar12,lVar16);
        if (lVar4 == 0) goto LAB_7103911248;
      }
      lVar17 = 0;
      if (lVar11 != 0) {
        lVar17 = -uVar12;
      }
      puVar21[3] = lVar17 + lVar16 + puVar21[3];
      lVar11 = plVar15[1];
      uVar5 = lVar11 + 1;
      *plVar15 = lVar4;
      plVar15[2] = lVar16;
    }
    else {
      lVar4 = *plVar15;
    }
    plVar15[1] = uVar5;
    *(undefined1 *)(lVar4 + lVar11) = 0x78;
    lVar11 = **(long **)puVar19;
    **(long **)puVar19 = lVar11 + -1;
    plVar15 = *(long **)puVar19;
    if (lVar11 == 0) {
      pbVar7 = (byte *)(*(code *)plVar15[2])(plVar15[4],plVar15[3],&local_68);
      if (pbVar7 == (byte *)0x0) {
        uVar14 = 0xffffffff;
      }
      else {
        uVar14 = 0xffffffff;
        if (local_68 != 0) {
          *plVar15 = local_68 + -1;
          plVar15[1] = (long)(pbVar7 + 1);
          uVar14 = (uint)*pbVar7;
        }
      }
    }
    else {
      pbVar7 = (byte *)plVar15[1];
      plVar15[1] = (long)(pbVar7 + 1);
      uVar14 = (uint)*pbVar7;
    }
    *param_1 = uVar14;
    bVar3 = *(byte *)((long)&DAT_7104862970 + (long)(int)uVar14 + 1);
    if ((bVar3 >> 4 & 1) == 0) {
      if (uVar14 != 0xffffffff) {
        plVar15 = *(long **)puVar10;
        lVar11 = plVar15[1];
        uVar12 = plVar15[2];
        uVar5 = lVar11 + 1;
        if (uVar12 < uVar5) {
          if (0x3ffffffffffffffe < uVar12) goto LAB_7103911234;
          lVar17 = *(long *)(param_1 + 0xe);
          puVar21 = *(undefined8 **)(lVar17 + 0x18);
          lVar11 = *plVar15;
          lVar16 = uVar12 * 2;
          lVar4 = (*(code *)*puVar21)(puVar21[1],lVar11,uVar12,lVar16);
          if ((lVar16 != 0) && (lVar4 == 0)) {
            if (puVar21[0x1a] == 0) goto LAB_71039112b4;
            FUN_71039004f0(lVar17,1);
            lVar4 = (*(code *)*puVar21)(puVar21[1],lVar11,uVar12,lVar16);
            if (lVar4 == 0) goto LAB_71039112b4;
          }
          lVar17 = 0;
          if (lVar11 != 0) {
            lVar17 = -uVar12;
          }
          puVar21[3] = lVar17 + lVar16 + puVar21[3];
          lVar11 = plVar15[1];
          uVar5 = lVar11 + 1;
          *plVar15 = lVar4;
          plVar15[2] = lVar16;
        }
        else {
          lVar4 = *plVar15;
        }
        plVar15[1] = uVar5;
        *(char *)(lVar4 + lVar11) = (char)uVar14;
LAB_71039119d4:
        lVar11 = **(long **)puVar19;
        **(long **)puVar19 = lVar11 + -1;
        plVar15 = *(long **)puVar19;
        if (lVar11 == 0) {
          pbVar7 = (byte *)(*(code *)plVar15[2])(plVar15[4],plVar15[3],&local_68);
          uVar23 = 0xffffffff;
          if ((pbVar7 != (byte *)0x0) && (local_68 != 0)) {
            *plVar15 = local_68 + -1;
            plVar15[1] = (long)(pbVar7 + 1);
            uVar23 = (uint)*pbVar7;
          }
        }
        else {
          pbVar7 = (byte *)plVar15[1];
          plVar15[1] = (long)(pbVar7 + 1);
          uVar23 = (uint)*pbVar7;
        }
        *param_1 = uVar23;
      }
    }
    else {
      plVar15 = *(long **)puVar10;
      lVar11 = plVar15[1];
      uVar5 = plVar15[2];
      iVar9 = uVar14 + 0xffa9;
      if ((bVar3 & 2) != 0) {
        iVar9 = uVar14 + 0xffd0;
      }
      uVar12 = lVar11 + 1;
      if (uVar5 < uVar12) {
        if (0x3ffffffffffffffe < uVar5) goto LAB_7103911234;
        local_88 = *(long *)(param_1 + 0xe);
        puVar21 = *(undefined8 **)(local_88 + 0x18);
        lVar11 = *plVar15;
        lVar16 = uVar5 * 2;
        lVar4 = (*(code *)*puVar21)(puVar21[1],lVar11,uVar5,lVar16);
        if ((lVar16 != 0) && (lVar4 == 0)) {
          if (puVar21[0x1a] == 0) {
LAB_710391178c:
                    /* WARNING: Subroutine does not return */
            FUN_71038fb3c0(local_88,4);
          }
          FUN_71039004f0(local_88,1);
          lVar4 = (*(code *)*puVar21)(puVar21[1],lVar11,uVar5,lVar16);
          if (lVar4 == 0) goto LAB_710391178c;
        }
        lVar17 = 0;
        if (lVar11 != 0) {
          lVar17 = -uVar5;
        }
        puVar21[3] = lVar17 + lVar16 + puVar21[3];
        lVar11 = plVar15[1];
        plVar15[2] = lVar16;
        *plVar15 = lVar4;
        uVar12 = lVar11 + 1;
      }
      else {
        lVar4 = *plVar15;
      }
      plVar15[1] = uVar12;
      *(char *)(lVar4 + lVar11) = (char)uVar14;
      lVar11 = **(long **)puVar19;
      **(long **)puVar19 = lVar11 + -1;
      plVar15 = *(long **)puVar19;
      if (lVar11 == 0) {
        pbVar7 = (byte *)(*(code *)plVar15[2])(plVar15[4],plVar15[3],&local_68);
        if (pbVar7 == (byte *)0x0) {
          uVar14 = 0xffffffff;
        }
        else {
          uVar14 = 0xffffffff;
          if (local_68 != 0) {
            *plVar15 = local_68 + -1;
            plVar15[1] = (long)(pbVar7 + 1);
            uVar14 = (uint)*pbVar7;
          }
        }
      }
      else {
        pbVar7 = (byte *)plVar15[1];
        plVar15[1] = (long)(pbVar7 + 1);
        uVar14 = (uint)*pbVar7;
      }
      *param_1 = uVar14;
      bVar3 = *(byte *)((long)&DAT_7104862970 + (long)(int)uVar14 + 1);
      if ((bVar3 >> 4 & 1) != 0) {
        iVar1 = (uVar14 | 0x20) - 0x57;
        if ((bVar3 & 2) != 0) {
          iVar1 = uVar14 - 0x30;
        }
        *(long *)(*(long *)puVar10 + 8) = *(long *)(*(long *)puVar10 + 8) + -2;
        uVar20 = iVar1 + iVar9 * 0x10;
        break;
      }
      if (uVar14 != 0xffffffff) {
        plVar15 = *(long **)puVar10;
        lVar11 = plVar15[1];
        uVar12 = plVar15[2];
        uVar5 = lVar11 + 1;
        if (uVar12 < uVar5) {
          if (0x3ffffffffffffffe < uVar12) goto LAB_7103911234;
          lVar17 = *(long *)(param_1 + 0xe);
          puVar21 = *(undefined8 **)(lVar17 + 0x18);
          lVar11 = *plVar15;
          lVar16 = uVar12 * 2;
          lVar4 = (*(code *)*puVar21)(puVar21[1],lVar11,uVar12,lVar16);
          if ((lVar16 != 0) && (lVar4 == 0)) {
            if (puVar21[0x1a] == 0) goto LAB_71039112b4;
            FUN_71039004f0(lVar17,1);
            lVar4 = (*(code *)*puVar21)(puVar21[1],lVar11,uVar12,lVar16);
            if (lVar4 == 0) goto LAB_71039112b4;
          }
          lVar17 = 0;
          if (lVar11 != 0) {
            lVar17 = -uVar12;
          }
          puVar21[3] = lVar17 + lVar16 + puVar21[3];
          lVar11 = plVar15[1];
          uVar5 = lVar11 + 1;
          *plVar15 = lVar4;
          plVar15[2] = lVar16;
        }
        else {
          lVar4 = *plVar15;
        }
        plVar15[1] = uVar5;
        *(char *)(lVar4 + lVar11) = (char)uVar14;
        goto LAB_71039119d4;
      }
    }
LAB_7103911a34:
    pcVar6 = "hexadecimal digit expected";
LAB_7103911358:
                    /* WARNING: Subroutine does not return */
    FUN_710390eb90((long)param_1,pcVar6,0x125);
  case 0x7a:
    *(long *)(*(long *)puVar10 + 8) = *(long *)(*(long *)puVar10 + 8) + -1;
    lVar11 = **(long **)puVar19;
    **(long **)puVar19 = lVar11 + -1;
    plVar15 = *(long **)puVar19;
    if (lVar11 != 0) goto LAB_71039102ac;
    pbVar7 = (byte *)(*(code *)plVar15[2])(plVar15[4],plVar15[3],&local_68);
    if (pbVar7 != (byte *)0x0) goto LAB_71039102c0;
    uVar14 = 0xffffffff;
    do {
      *param_1 = uVar14;
      while( true ) {
        if ((*(byte *)((long)&DAT_7104862970 + (long)(int)uVar14 + 1) >> 3 & 1) == 0)
        goto switchD_71039105d4_caseD_ffffffff;
        if ((uVar14 != 0xd) && (uVar14 != 10)) break;
        FUN_7103911ad0(param_1);
        uVar14 = *param_1;
      }
      lVar11 = **(long **)puVar19;
      **(long **)puVar19 = lVar11 + -1;
      plVar15 = *(long **)puVar19;
      if (lVar11 == 0) {
        pbVar7 = (byte *)(*(code *)plVar15[2])(plVar15[4],plVar15[3],&local_68);
        if (pbVar7 == (byte *)0x0) {
          uVar14 = 0xffffffff;
        }
        else {
LAB_71039102c0:
          uVar14 = 0xffffffff;
          if (local_68 != 0) {
            *plVar15 = local_68 + -1;
            plVar15[1] = (long)(pbVar7 + 1);
            uVar14 = (uint)*pbVar7;
          }
        }
      }
      else {
LAB_71039102ac:
        pbVar7 = (byte *)plVar15[1];
        plVar15[1] = (long)(pbVar7 + 1);
        uVar14 = (uint)*pbVar7;
      }
    } while( true );
  case 0xffffffff:
    goto switchD_71039105d4_caseD_ffffffff;
  }
  uVar24 = (undefined1)uVar20;
  lVar11 = **(long **)puVar19;
  **(long **)puVar19 = lVar11 + -1;
  plVar15 = *(long **)puVar19;
  if (lVar11 == 0) {
    pbVar7 = (byte *)(*(code *)plVar15[2])(plVar15[4],plVar15[3],&local_68);
    if (pbVar7 == (byte *)0x0) {
      uVar14 = 0xffffffff;
    }
    else {
      uVar14 = 0xffffffff;
      if (local_68 != 0) {
        *plVar15 = local_68 + -1;
        plVar15[1] = (long)(pbVar7 + 1);
        uVar14 = (uint)*pbVar7;
      }
    }
  }
  else {
    pbVar7 = (byte *)plVar15[1];
    plVar15[1] = (long)(pbVar7 + 1);
    uVar14 = (uint)*pbVar7;
  }
  *param_1 = uVar14;
LAB_7103910f10:
  *(long *)(*(long *)puVar10 + 8) = *(long *)(*(long *)puVar10 + 8) + -1;
  plVar15 = *(long **)puVar10;
  lVar11 = plVar15[1];
  uVar12 = plVar15[2];
  uVar5 = lVar11 + 1;
  if (uVar12 < uVar5) {
    if (0x3ffffffffffffffe < uVar12) goto LAB_7103911234;
    lVar17 = *(long *)(param_1 + 0xe);
    puVar21 = *(undefined8 **)(lVar17 + 0x18);
    lVar11 = *plVar15;
    lVar16 = uVar12 * 2;
    lVar4 = (*(code *)*puVar21)(puVar21[1],lVar11,uVar12,lVar16);
    if ((lVar16 != 0) && (lVar4 == 0)) {
      if (puVar21[0x1a] == 0) goto LAB_7103911248;
      FUN_71039004f0(lVar17,1);
      lVar4 = (*(code *)*puVar21)(puVar21[1],lVar11,uVar12,lVar16);
      if (lVar4 == 0) goto LAB_7103911248;
    }
    lVar17 = 0;
    if (lVar11 != 0) {
      lVar17 = -uVar12;
    }
    puVar21[3] = lVar17 + lVar16 + puVar21[3];
    lVar11 = plVar15[1];
    uVar5 = lVar11 + 1;
    *plVar15 = lVar4;
    plVar15[2] = lVar16;
  }
  else {
    lVar4 = *plVar15;
  }
  plVar15[1] = uVar5;
  *(undefined1 *)(lVar4 + lVar11) = uVar24;
switchD_71039105d4_caseD_ffffffff:
  uVar14 = *param_1;
  goto joined_r0x00710390f574;
LAB_7103910fe0:
  plVar15 = *(long **)puVar10;
  lVar11 = plVar15[1];
  uVar12 = plVar15[2];
  uVar5 = lVar11 + 1;
  if (uVar12 < uVar5) {
    if (0x3ffffffffffffffe < uVar12) {
LAB_7103911234:
                    /* WARNING: Subroutine does not return */
      FUN_710390eb90((long)param_1,"lexical element too long",0);
    }
    lVar17 = *(long *)(param_1 + 0xe);
    puVar21 = *(undefined8 **)(lVar17 + 0x18);
    lVar11 = *plVar15;
    lVar16 = uVar12 * 2;
    lVar4 = (*(code *)*puVar21)(puVar21[1],lVar11,uVar12,lVar16);
    if ((lVar16 != 0) && (lVar4 == 0)) {
      if (puVar21[0x1a] == 0) {
LAB_7103911248:
                    /* WARNING: Subroutine does not return */
        FUN_71038fb3c0(lVar17,4);
      }
      FUN_71039004f0(lVar17,1);
      lVar4 = (*(code *)*puVar21)(puVar21[1],lVar11,uVar12,lVar16);
      if (lVar4 == 0) goto LAB_7103911248;
    }
    lVar17 = 0;
    if (lVar11 != 0) {
      lVar17 = -uVar12;
    }
    puVar21[3] = lVar17 + lVar16 + puVar21[3];
    lVar11 = plVar15[1];
    uVar5 = lVar11 + 1;
    *plVar15 = lVar4;
    plVar15[2] = lVar16;
  }
  else {
    lVar4 = *plVar15;
  }
  plVar15[1] = uVar5;
  *(char *)(lVar4 + lVar11) = (char)uVar23;
  lVar11 = **(long **)puVar19;
  **(long **)puVar19 = lVar11 + -1;
  plVar15 = *(long **)puVar19;
  if (lVar11 == 0) {
    pbVar7 = (byte *)(*(code *)plVar15[2])(plVar15[4],plVar15[3],&local_68);
    uVar23 = 0xffffffff;
    if ((pbVar7 != (byte *)0x0) && (local_68 != 0)) {
      *plVar15 = local_68 + -1;
      plVar15[1] = (long)(pbVar7 + 1);
      uVar23 = (uint)*pbVar7;
    }
  }
  else {
    pbVar7 = (byte *)plVar15[1];
    plVar15[1] = (long)(pbVar7 + 1);
    uVar23 = (uint)*pbVar7;
  }
  *param_1 = uVar23;
  lVar4 = *(long *)(param_1 + 0xe);
  puVar21 = FUN_7103917660(lVar4,(void *)(**(long **)(param_1 + 0x12) + 1),
                           (*(long **)(param_1 + 0x12))[1] - 2);
  puVar8 = *(undefined8 **)(lVar4 + 0x10);
  *(undefined8 **)(lVar4 + 0x10) = puVar8 + 2;
  *puVar8 = puVar21;
  *(uint *)(puVar8 + 1) = *(byte *)(puVar21 + 1) | 0x40;
  lVar11 = *(long *)(param_1 + 0x14);
  pfVar18 = (float *)(*(long *)(lVar4 + 0x10) + -0x10);
  puVar8 = FUN_710391dde0(lVar11,pfVar18);
  if (puVar8 == &DAT_7104862960) {
    puVar8 = FUN_710391d940(lVar4,lVar11,pfVar18);
  }
  if (*(int *)(puVar8 + 1) == 0) {
    *(undefined4 *)puVar8 = 1;
    *(undefined4 *)(puVar8 + 1) = 1;
    if (0 < *(long *)(*(long *)(lVar4 + 0x18) + 0x18)) {
      FUN_71038fec40(lVar4);
    }
  }
  else {
    puVar21 = (undefined8 *)puVar8[2];
  }
  *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + -0x10;
  *(undefined8 **)param_2 = puVar21;
LAB_71039111b0:
  uVar14 = 0x125;
  goto switchD_710390f038_caseD_ffffffff;
  while( true ) {
    plVar15[1] = uVar5;
    *(char *)(lVar4 + lVar11) = (char)uVar23;
    lVar11 = **(long **)puVar19;
    **(long **)puVar19 = lVar11 + -1;
    plVar15 = *(long **)puVar19;
    if (lVar11 == 0) {
      pbVar7 = (byte *)(*(code *)plVar15[2])(plVar15[4],plVar15[3],&local_68);
      if (pbVar7 == (byte *)0x0) {
        uVar23 = 0xffffffff;
      }
      else {
        uVar23 = 0xffffffff;
        if (local_68 != 0) {
          *plVar15 = local_68 + -1;
          plVar15[1] = (long)(pbVar7 + 1);
          uVar23 = (uint)*pbVar7;
        }
      }
    }
    else {
      pbVar7 = (byte *)plVar15[1];
      plVar15[1] = (long)(pbVar7 + 1);
      uVar23 = (uint)*pbVar7;
    }
    *param_1 = uVar23;
    if ((*(byte *)((long)&DAT_7104862970 + (long)(int)uVar23 + 1) & 3) == 0) break;
LAB_710390f590:
    plVar15 = *(long **)puVar10;
    lVar11 = plVar15[1];
    uVar12 = plVar15[2];
    uVar5 = lVar11 + 1;
    if (uVar12 < uVar5) {
      if (0x3ffffffffffffffe < uVar12) goto LAB_7103911234;
      lVar17 = *(long *)(param_1 + 0xe);
      puVar21 = *(undefined8 **)(lVar17 + 0x18);
      lVar11 = *plVar15;
      lVar16 = uVar12 * 2;
      lVar4 = (*(code *)*puVar21)(puVar21[1],lVar11,uVar12,lVar16);
      if (lVar16 != 0 && lVar4 == 0) {
        if (puVar21[0x1a] == 0) {
LAB_71039112b4:
                    /* WARNING: Subroutine does not return */
          FUN_71038fb3c0(lVar17,4);
        }
        FUN_71039004f0(lVar17,1);
        lVar4 = (*(code *)*puVar21)(puVar21[1],lVar11,uVar12,lVar16);
        if (lVar4 == 0) goto LAB_71039112b4;
      }
      lVar17 = 0;
      if (lVar11 != 0) {
        lVar17 = -uVar12;
      }
      puVar21[3] = lVar17 + lVar16 + puVar21[3];
      lVar11 = plVar15[1];
      plVar15[2] = lVar16;
      *plVar15 = lVar4;
      uVar5 = lVar11 + 1;
    }
    else {
      lVar4 = *plVar15;
    }
  }
  lVar4 = *(long *)(param_1 + 0xe);
  puVar21 = FUN_7103917660(lVar4,(void *)**(undefined8 **)(param_1 + 0x12),
                           (*(undefined8 **)(param_1 + 0x12))[1]);
  puVar8 = *(undefined8 **)(lVar4 + 0x10);
  *(undefined8 **)(lVar4 + 0x10) = puVar8 + 2;
  *puVar8 = puVar21;
  *(uint *)(puVar8 + 1) = *(byte *)(puVar21 + 1) | 0x40;
  lVar11 = *(long *)(param_1 + 0x14);
  pfVar18 = (float *)(*(long *)(lVar4 + 0x10) + -0x10);
  puVar8 = FUN_710391dde0(lVar11,pfVar18);
  if (puVar8 == &DAT_7104862960) {
    puVar8 = FUN_710391d940(lVar4,lVar11,pfVar18);
  }
  if (*(int *)(puVar8 + 1) == 0) {
    *(undefined4 *)puVar8 = 1;
    *(undefined4 *)(puVar8 + 1) = 1;
    if (0 < *(long *)(*(long *)(lVar4 + 0x18) + 0x18)) {
      FUN_71038fec40(lVar4);
    }
  }
  else {
    puVar21 = (undefined8 *)puVar8[2];
  }
  *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + -0x10;
  *(undefined8 **)param_2 = puVar21;
  if ((*(char *)(puVar21 + 1) == '\x04') && (*(byte *)((long)puVar21 + 10) != 0)) {
    uVar14 = *(byte *)((long)puVar21 + 10) | 0x100;
  }
  else {
    uVar14 = 0x124;
  }
switchD_710390f038_caseD_ffffffff:
  return (ulong)uVar14;
}

