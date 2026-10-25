// addr:      7103060b10
// offset:    0x3060b10
// name:      FUN_7103060b10
// mangled:   
// signature: undefined8 __cdecl FUN_7103060b10(float param_1, long param_2)


undefined8 FUN_7103060b10(float param_1,long param_2)

{
  char *pcVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  uint *puVar10;
  byte *pbVar11;
  undefined *puVar12;
  uint uVar13;
  float fVar14;
  uint local_68 [2];
  char local_60 [64];
  
  if (*(char *)(param_2 + 0x38) == '\0') {
    if (*(char *)(param_2 + 0x39) != '\0') {
      *(undefined1 *)(param_2 + 0x39) = 0;
    }
  }
  else {
    fVar14 = *(float *)(param_2 + 0x34) - param_1;
    *(float *)(param_2 + 0x34) = fVar14;
    if (fVar14 < 0.0) {
      *(undefined4 *)(param_2 + 0x34) = 0;
      *(undefined2 *)(param_2 + 0x38) = 0x100;
    }
  }
  if (*(float *)(param_2 + 0x34) != 0.0) {
    lVar8 = *(long *)(*(long *)(param_2 + 0x20) + 8);
    if ((lVar8 != 0) && (*(int *)(lVar8 + 0xc) != 0)) {
      *(undefined4 *)(lVar8 + 0xc) = 0;
    }
    lVar8 = *(long *)(*(long *)(param_2 + 0x18) + 8);
    if (lVar8 == 0) {
      return 0;
    }
    if (*(char *)(lVar8 + 9) == '\0') {
      return 0;
    }
    goto LAB_7103060ba4;
  }
  if (*(char *)(param_2 + 0x10) != '\0') {
    return 1;
  }
  lVar8 = *(long *)(*(long *)(param_2 + 0x20) + 8);
  if (lVar8 != 0) {
    switch(*(undefined4 *)(lVar8 + 0xc)) {
    case 1:
      uVar6 = *(uint *)(param_2 + 0xb8);
      if (uVar6 == 0xffffffff) {
        FUN_7102666c30((undefined8 *)(param_2 + 0xb0));
        uVar6 = *(uint *)(param_2 + 0xb8);
      }
      *(undefined4 *)(param_2 + 0xb8) = *(undefined4 *)(param_2 + 0xbc);
      *(uint *)(param_2 + 200) = uVar6;
      *(undefined4 *)(param_2 + 0xbc) = *(undefined4 *)(param_2 + 0xc0);
      *(undefined4 *)(param_2 + 0xc0) = 0xffffffff;
      *(undefined1 *)(param_2 + 0xc4) = 1;
      if (uVar6 < 3) {
        puVar12 = (&PTR_s_seiryu_support_voice01_7105165128)[uVar6];
        if (puVar12 == (undefined *)0x0) {
          uVar9 = 0;
        }
        else {
          uVar9 = 0;
          while( true ) {
            pcVar1 = puVar12 + uVar9;
            cVar5 = *pcVar1;
            if (cVar5 == '\0') break;
            lVar8 = param_2 + uVar9;
            *(char *)(lVar8 + 0x44) = cVar5;
            if (0x3e < (int)uVar9 + 1U) {
              uVar9 = (ulong)((int)uVar9 + 1);
              break;
            }
            cVar5 = pcVar1[1];
            if (cVar5 == '\0') {
              uVar9 = uVar9 + 1;
              break;
            }
            uVar9 = uVar9 + 2;
            *(char *)(lVar8 + 0x45) = cVar5;
          }
        }
        *(undefined1 *)(param_2 + 0x44 + (uVar9 & 0xffffffff)) = 0;
        uVar13 = (uint)*(byte *)(param_2 + 0x44);
        uVar6 = 0x811c9dc5;
        *(int *)(param_2 + 0x40) = (int)uVar9;
        if (*(byte *)(param_2 + 0x44) != 0) {
          pbVar11 = (byte *)(param_2 + 0x45);
          uVar6 = 0x811c9dc5;
          do {
            uVar6 = uVar6 * 0x89 ^ uVar13;
            uVar13 = (uint)*pbVar11;
            pbVar11 = pbVar11 + 1;
          } while (uVar13 != 0);
        }
LAB_710306122c:
        *(uint *)(param_2 + 0x3c) = uVar6;
        *(undefined1 *)(param_2 + 0x10) = 1;
        lVar8 = *(long *)(*(long *)(param_2 + 0x20) + 8);
        if (lVar8 == 0) {
          return 0;
        }
        *(undefined4 *)(lVar8 + 0xc) = 0;
        return 0;
      }
      break;
    case 2:
      uVar6 = *(uint *)(param_2 + 0xf8);
      if (uVar6 == 0xffffffff) {
        FUN_7102666c30((undefined8 *)(param_2 + 0xf0));
        uVar6 = *(uint *)(param_2 + 0xf8);
      }
      *(undefined4 *)(param_2 + 0xf8) = *(undefined4 *)(param_2 + 0xfc);
      *(uint *)(param_2 + 0x108) = uVar6;
      *(undefined4 *)(param_2 + 0xfc) = *(undefined4 *)(param_2 + 0x100);
      *(undefined4 *)(param_2 + 0x100) = 0xffffffff;
      *(undefined1 *)(param_2 + 0x104) = 1;
      if (uVar6 < 3) {
        lVar8 = *(long *)(&DAT_71051650f8 + (ulong)uVar6 * 8);
        if (lVar8 == 0) {
          uVar9 = 0;
        }
        else {
          uVar9 = 0;
          while( true ) {
            pcVar1 = (char *)(lVar8 + uVar9);
            cVar5 = *pcVar1;
            if (cVar5 == '\0') break;
            lVar2 = param_2 + uVar9;
            *(char *)(lVar2 + 0x44) = cVar5;
            if (0x3e < (int)uVar9 + 1U) {
              uVar9 = (ulong)((int)uVar9 + 1);
              break;
            }
            cVar5 = pcVar1[1];
            if (cVar5 == '\0') {
              uVar9 = uVar9 + 1;
              break;
            }
            uVar9 = uVar9 + 2;
            *(char *)(lVar2 + 0x45) = cVar5;
          }
        }
        *(undefined1 *)(param_2 + 0x44 + (uVar9 & 0xffffffff)) = 0;
        uVar13 = (uint)*(byte *)(param_2 + 0x44);
        uVar6 = 0x811c9dc5;
        *(int *)(param_2 + 0x40) = (int)uVar9;
        if (*(byte *)(param_2 + 0x44) != 0) {
          pbVar11 = (byte *)(param_2 + 0x45);
          uVar6 = 0x811c9dc5;
          do {
            uVar6 = uVar6 * 0x89 ^ uVar13;
            uVar13 = (uint)*pbVar11;
            pbVar11 = pbVar11 + 1;
          } while (uVar13 != 0);
        }
        goto LAB_710306122c;
      }
      break;
    case 3:
      uVar6 = *(uint *)(param_2 + 0xd8);
      if (uVar6 == 0xffffffff) {
        FUN_7102666c30((undefined8 *)(param_2 + 0xd0));
        uVar6 = *(uint *)(param_2 + 0xd8);
      }
      *(undefined4 *)(param_2 + 0xd8) = *(undefined4 *)(param_2 + 0xdc);
      *(uint *)(param_2 + 0xe8) = uVar6;
      *(undefined4 *)(param_2 + 0xdc) = *(undefined4 *)(param_2 + 0xe0);
      *(undefined4 *)(param_2 + 0xe0) = 0xffffffff;
      *(undefined1 *)(param_2 + 0xe4) = 1;
      if (uVar6 < 3) {
        puVar12 = (&PTR_s_seiryu_support_voice03_7105165110)[uVar6];
        if (puVar12 == (undefined *)0x0) {
          uVar9 = 0;
        }
        else {
          uVar9 = 0;
          while( true ) {
            pcVar1 = puVar12 + uVar9;
            cVar5 = *pcVar1;
            if (cVar5 == '\0') break;
            lVar8 = param_2 + uVar9;
            *(char *)(lVar8 + 0x44) = cVar5;
            if (0x3e < (int)uVar9 + 1U) {
              uVar9 = (ulong)((int)uVar9 + 1);
              break;
            }
            cVar5 = pcVar1[1];
            if (cVar5 == '\0') {
              uVar9 = uVar9 + 1;
              break;
            }
            uVar9 = uVar9 + 2;
            *(char *)(lVar8 + 0x45) = cVar5;
          }
        }
        *(undefined1 *)(param_2 + 0x44 + (uVar9 & 0xffffffff)) = 0;
        uVar13 = (uint)*(byte *)(param_2 + 0x44);
        uVar6 = 0x811c9dc5;
        *(int *)(param_2 + 0x40) = (int)uVar9;
        if (*(byte *)(param_2 + 0x44) != 0) {
          pbVar11 = (byte *)(param_2 + 0x45);
          do {
            uVar6 = uVar6 * 0x89 ^ uVar13;
            uVar13 = (uint)*pbVar11;
            pbVar11 = pbVar11 + 1;
          } while (uVar13 != 0);
        }
        goto LAB_710306122c;
      }
      break;
    case 4:
      uVar6 = *(uint *)(param_2 + 0x118);
      if (uVar6 == 0xffffffff) {
        *(undefined8 *)(param_2 + 0x118) = 0x100000000;
        puVar10 = *(uint **)(param_2 + 0x110);
        uVar6 = *puVar10;
        *puVar10 = puVar10[1];
        uVar13 = puVar10[3];
        uVar6 = uVar6 ^ uVar6 << 0xb;
        uVar6 = uVar6 ^ uVar6 >> 8 ^ uVar13 ^ uVar13 >> 0x13;
        puVar10[1] = puVar10[2];
        puVar10[2] = uVar13;
        puVar10[3] = uVar6;
        lVar8 = (ulong)(uVar6 & 1) * 4;
        uVar3 = *(undefined4 *)(param_2 + 0x11c);
        *(undefined4 *)(param_2 + 0x11c) = *(undefined4 *)(param_2 + 0x118 + lVar8);
        *(undefined4 *)(param_2 + 0x118 + lVar8) = uVar3;
        if (*(char *)(param_2 + 0x120) == '\0') {
          uVar6 = *(uint *)(param_2 + 0x118);
        }
        else {
          uVar6 = *(uint *)(param_2 + 0x118);
          if (*(uint *)(param_2 + 0x124) == uVar6) {
            puVar10 = *(uint **)(param_2 + 0x110);
            uVar6 = *puVar10;
            *puVar10 = puVar10[1];
            uVar13 = puVar10[3];
            uVar6 = uVar6 ^ uVar6 << 0xb;
            puVar10[1] = puVar10[2];
            puVar10[2] = uVar13;
            puVar10[3] = uVar6 ^ uVar6 >> 8 ^ uVar13 ^ uVar13 >> 0x13;
            uVar3 = *(undefined4 *)(param_2 + 0x118);
            uVar6 = *(uint *)(param_2 + 0x11c);
            *(uint *)(param_2 + 0x118) = uVar6;
            *(undefined4 *)(param_2 + 0x11c) = uVar3;
          }
        }
      }
      uVar3 = *(undefined4 *)(param_2 + 0x11c);
      *(undefined4 *)(param_2 + 0x11c) = 0xffffffff;
      *(undefined4 *)(param_2 + 0x118) = uVar3;
      *(uint *)(param_2 + 0x124) = uVar6;
      *(undefined1 *)(param_2 + 0x120) = 1;
      if (uVar6 < 2) {
        puVar12 = (&PTR_s_seiryu_support_voice03_7105165140)[uVar6];
        if (puVar12 == (undefined *)0x0) {
          uVar9 = 0;
        }
        else {
          uVar9 = 0;
          while( true ) {
            pcVar1 = puVar12 + uVar9;
            cVar5 = *pcVar1;
            if (cVar5 == '\0') break;
            lVar8 = param_2 + uVar9;
            *(char *)(lVar8 + 0x44) = cVar5;
            if (0x3e < (int)uVar9 + 1U) {
              uVar9 = (ulong)((int)uVar9 + 1);
              break;
            }
            cVar5 = pcVar1[1];
            if (cVar5 == '\0') {
              uVar9 = uVar9 + 1;
              break;
            }
            uVar9 = uVar9 + 2;
            *(char *)(lVar8 + 0x45) = cVar5;
          }
        }
        *(undefined1 *)(param_2 + 0x44 + (uVar9 & 0xffffffff)) = 0;
        uVar13 = (uint)*(byte *)(param_2 + 0x44);
        uVar6 = 0x811c9dc5;
        *(int *)(param_2 + 0x40) = (int)uVar9;
        if (*(byte *)(param_2 + 0x44) != 0) {
          pbVar11 = (byte *)(param_2 + 0x45);
          do {
            uVar6 = uVar6 * 0x89 ^ uVar13;
            uVar13 = (uint)*pbVar11;
            pbVar11 = pbVar11 + 1;
          } while (uVar13 != 0);
        }
        goto LAB_710306122c;
      }
      break;
    default:
      goto switchD_7103060bdc_default;
    }
LAB_7103061308:
                    /* WARNING: Subroutine does not return */
    abort();
  }
switchD_7103060bdc_default:
  lVar8 = *(long *)(*(long *)(param_2 + 0x18) + 8);
  if (lVar8 == 0) {
    return 0;
  }
  if (*(char *)(lVar8 + 9) == '\0') {
    return 0;
  }
  *(undefined1 *)(param_2 + 0x10) = 1;
  lVar8 = *(long *)(*(long *)(param_2 + 0x18) + 8);
  if (lVar8 == 0) {
LAB_7103060f78:
    iVar7 = *(int *)(param_2 + 0x90);
    if (iVar7 == -1) {
      FUN_7102c2f880((undefined8 *)(param_2 + 0x88));
      iVar7 = *(int *)(param_2 + 0x90);
    }
    uVar3 = *(undefined4 *)(param_2 + 0xa0);
    *(undefined4 *)(param_2 + 0xa0) = 0xffffffff;
    *(undefined4 *)(param_2 + 0x90) = *(undefined4 *)(param_2 + 0x94);
    *(int *)(param_2 + 0xa8) = iVar7;
    *(undefined8 *)(param_2 + 0x94) = *(undefined8 *)(param_2 + 0x98);
    *(undefined4 *)(param_2 + 0x9c) = uVar3;
    *(undefined1 *)(param_2 + 0xa4) = 1;
    local_60[0] = '\0';
    local_68[0] = 0;
    local_68[1] = 0;
    FUN_710062dc20(local_68,"seiryu_support_voice%02d");
    if ((uint *)(param_2 + 0x3c) != local_68) {
      for (uVar9 = 0; local_60[uVar9] != '\0'; uVar9 = uVar9 + 2) {
        *(char *)(param_2 + uVar9 + 0x44) = local_60[uVar9];
        if (0x3e < (int)uVar9 + 1U) {
          uVar9 = (ulong)((int)uVar9 + 1);
          break;
        }
        if (local_60[uVar9 + 1] == '\0') {
          uVar9 = uVar9 + 1;
          break;
        }
        *(char *)(param_2 + uVar9 + 0x45) = local_60[uVar9 + 1];
      }
      *(undefined1 *)(param_2 + 0x44 + (uVar9 & 0xffffffff)) = 0;
      uVar13 = (uint)*(byte *)(param_2 + 0x44);
      uVar6 = 0x811c9dc5;
      *(int *)(param_2 + 0x40) = (int)uVar9;
      if (*(byte *)(param_2 + 0x44) != 0) {
        pbVar11 = (byte *)(param_2 + 0x45);
        do {
          uVar6 = uVar6 * 0x89 ^ uVar13;
          uVar13 = (uint)*pbVar11;
          pbVar11 = pbVar11 + 1;
        } while (uVar13 != 0);
      }
      *(uint *)(param_2 + 0x3c) = uVar6;
    }
  }
  else {
    if ((*(int **)(lVar8 + 0x10) == (int *)0x0) || (**(int **)(lVar8 + 0x10) != 0x5a)) {
      if ((*(int **)(lVar8 + 0x10) == (int *)0x0) || (**(int **)(lVar8 + 0x10) != 0x5b))
      goto LAB_7103060f78;
      uVar6 = *(uint *)(param_2 + 0x150);
      if (uVar6 == 0xffffffff) {
        FUN_7102666c30((undefined8 *)(param_2 + 0x148));
        uVar6 = *(uint *)(param_2 + 0x150);
      }
      uVar3 = *(undefined4 *)(param_2 + 0x158);
      *(undefined4 *)(param_2 + 0x158) = 0xffffffff;
      uVar4 = *(undefined4 *)(param_2 + 0x154);
      *(undefined4 *)(param_2 + 0x154) = uVar3;
      *(uint *)(param_2 + 0x160) = uVar6;
      *(undefined4 *)(param_2 + 0x150) = uVar4;
      *(undefined1 *)(param_2 + 0x15c) = 1;
      if (2 < uVar6) goto LAB_7103061308;
      puVar12 = (&PTR_s_seiryu_support_voice03_7105165110)[uVar6];
      if (puVar12 == (undefined *)0x0) {
        uVar9 = 0;
      }
      else {
        uVar9 = 0;
        while( true ) {
          pcVar1 = puVar12 + uVar9;
          cVar5 = *pcVar1;
          if (cVar5 == '\0') break;
          lVar8 = param_2 + uVar9;
          *(char *)(lVar8 + 0x44) = cVar5;
          if (0x3e < (int)uVar9 + 1U) {
            uVar9 = (ulong)((int)uVar9 + 1);
            break;
          }
          cVar5 = pcVar1[1];
          if (cVar5 == '\0') {
            uVar9 = uVar9 + 1;
            break;
          }
          uVar9 = uVar9 + 2;
          *(char *)(lVar8 + 0x45) = cVar5;
        }
      }
      *(undefined1 *)(param_2 + 0x44 + (uVar9 & 0xffffffff)) = 0;
      uVar13 = (uint)*(byte *)(param_2 + 0x44);
      uVar6 = 0x811c9dc5;
      *(int *)(param_2 + 0x40) = (int)uVar9;
      if (*(byte *)(param_2 + 0x44) != 0) {
        pbVar11 = (byte *)(param_2 + 0x45);
        do {
          uVar6 = uVar6 * 0x89 ^ uVar13;
          uVar13 = (uint)*pbVar11;
          pbVar11 = pbVar11 + 1;
        } while (uVar13 != 0);
      }
    }
    else {
      uVar6 = *(uint *)(param_2 + 0x130);
      if (uVar6 == 0xffffffff) {
        FUN_7102666c30((undefined8 *)(param_2 + 0x128));
        uVar6 = *(uint *)(param_2 + 0x130);
      }
      uVar3 = *(undefined4 *)(param_2 + 0x138);
      *(undefined4 *)(param_2 + 0x138) = 0xffffffff;
      uVar4 = *(undefined4 *)(param_2 + 0x134);
      *(undefined4 *)(param_2 + 0x134) = uVar3;
      *(uint *)(param_2 + 0x140) = uVar6;
      *(undefined4 *)(param_2 + 0x130) = uVar4;
      *(undefined1 *)(param_2 + 0x13c) = 1;
      if (2 < uVar6) goto LAB_7103061308;
      lVar8 = *(long *)(&DAT_71051650f8 + (ulong)uVar6 * 8);
      if (lVar8 == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = 0;
        while( true ) {
          pcVar1 = (char *)(lVar8 + uVar9);
          cVar5 = *pcVar1;
          if (cVar5 == '\0') break;
          lVar2 = param_2 + uVar9;
          *(char *)(lVar2 + 0x44) = cVar5;
          if (0x3e < (int)uVar9 + 1U) {
            uVar9 = (ulong)((int)uVar9 + 1);
            break;
          }
          cVar5 = pcVar1[1];
          if (cVar5 == '\0') {
            uVar9 = uVar9 + 1;
            break;
          }
          uVar9 = uVar9 + 2;
          *(char *)(lVar2 + 0x45) = cVar5;
        }
      }
      *(undefined1 *)(param_2 + 0x44 + (uVar9 & 0xffffffff)) = 0;
      uVar13 = (uint)*(byte *)(param_2 + 0x44);
      uVar6 = 0x811c9dc5;
      *(int *)(param_2 + 0x40) = (int)uVar9;
      if (*(byte *)(param_2 + 0x44) != 0) {
        pbVar11 = (byte *)(param_2 + 0x45);
        do {
          uVar6 = uVar6 * 0x89 ^ uVar13;
          uVar13 = (uint)*pbVar11;
          pbVar11 = pbVar11 + 1;
        } while (uVar13 != 0);
      }
    }
    *(uint *)(param_2 + 0x3c) = uVar6;
  }
  lVar8 = *(long *)(*(long *)(param_2 + 0x18) + 8);
  if (lVar8 == 0) {
    return 0;
  }
LAB_7103060ba4:
  *(undefined1 *)(lVar8 + 9) = 0;
  return 0;
}

