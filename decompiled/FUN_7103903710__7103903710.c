// addr:      7103903710
// offset:    0x3903710
// name:      FUN_7103903710
// mangled:   
// signature: ulong __cdecl FUN_7103903710(long param_1, long param_2, uint param_3)


/* WARNING: Removing unreachable block (ram,0x0071039037ec) */
/* WARNING: Removing unreachable block (ram,0x007103903a84) */

ulong FUN_7103903710(long param_1,long param_2,uint param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong *puVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  uint local_48;
  int local_44;
  
  puVar11 = (ulong *)(param_2 + 0x10);
  uVar6 = *puVar11;
  lVar14 = *(long *)(param_2 + 0x20);
  lVar12 = (long)(int)param_3;
  lVar10 = lVar12;
  local_48 = param_3;
  if (lVar12 < (long)(*(long *)(param_2 + 0x30) - uVar6) >> 4) {
LAB_7103903760:
    uVar6 = uVar6 + lVar10 * 0x10;
    if (*(ulong *)(lVar14 + 8) < uVar6) {
      *(ulong *)(lVar14 + 8) = uVar6;
    }
    if ((*(char *)(param_2 + 0xc) == '\0') &&
       ((int)((ulong)(*(long *)(param_2 + 0x10) - (**(long **)(param_2 + 0x20) + 0x10)) >> 4) == 0))
    {
      pcVar5 = "cannot resume dead coroutine";
      goto LAB_7103903a44;
    }
    if (param_1 != param_2) {
      puVar7 = (undefined8 *)(*(long *)(param_1 + 0x10) + lVar12 * -0x10);
      *(undefined8 **)(param_1 + 0x10) = puVar7;
      if (0 < (int)param_3) {
        puVar9 = (undefined8 *)*puVar11;
        uVar2 = puVar7[1];
        *puVar9 = *puVar7;
        puVar9[1] = uVar2;
        puVar7 = (undefined8 *)(*puVar11 + 0x10);
        *puVar11 = (ulong)puVar7;
        if (param_3 != 1) {
          if (param_3 == 2) {
            lVar10 = 1;
          }
          else {
            lVar12 = 0;
            lVar10 = 1;
            do {
              lVar14 = *(long *)(param_1 + 0x10) + lVar12;
              lVar10 = lVar10 + 2;
              uVar2 = *(undefined8 *)(lVar14 + 0x18);
              *puVar7 = *(undefined8 *)(lVar14 + 0x10);
              puVar7[1] = uVar2;
              uVar6 = *puVar11;
              *puVar11 = uVar6 + 0x10;
              lVar14 = *(long *)(param_1 + 0x10) + lVar12;
              lVar12 = lVar12 + 0x20;
              uVar2 = *(undefined8 *)(lVar14 + 0x28);
              *(undefined8 *)(uVar6 + 0x10) = *(undefined8 *)(lVar14 + 0x20);
              *(undefined8 *)(uVar6 + 0x18) = uVar2;
              puVar7 = (undefined8 *)(*puVar11 + 0x10);
              *puVar11 = (ulong)puVar7;
            } while ((ulong)param_3 - (ulong)(~param_3 & 1) != lVar10);
            if ((~param_3 & 1) == 0) goto LAB_71039038cc;
          }
          puVar9 = (undefined8 *)(*(long *)(param_1 + 0x10) + lVar10 * 0x10);
          uVar2 = puVar9[1];
          *puVar7 = *puVar9;
          puVar7[1] = uVar2;
          *puVar11 = *puVar11 + 0x10;
        }
      }
    }
LAB_71039038cc:
    uVar3 = FUN_71038fc360(param_2,param_1,param_3);
    if (uVar3 < 2) {
      uVar13 = *(long *)(param_2 + 0x10) - (**(long **)(param_2 + 0x20) + 0x10);
      uVar6 = uVar13 >> 4;
      uVar3 = (uint)uVar6;
      local_44 = uVar3 + 1;
      lVar10 = *(long *)(param_1 + 0x10);
      lVar14 = *(long *)(param_1 + 0x20);
      lVar12 = (long)local_44;
      if (*(long *)(param_1 + 0x30) - lVar10 >> 4 <= lVar12) {
        if (((int)(999999 - uVar3) < (int)((ulong)(lVar10 - *(long *)(param_1 + 0x38)) >> 4) + 5) ||
           (iVar4 = FUN_71038fb4b0(param_1,FUN_71038f3f70,&local_44), iVar4 != 0)) {
          if ((int)uVar3 < 0) {
            uVar6 = **(long **)(param_2 + 0x20) +
                    ((long)(uVar13 * 0x10000000 ^ 0xffffffff00000000) >> 0x1c) + 0x10;
            uVar13 = *(ulong *)(param_2 + 0x10);
            while (uVar13 < uVar6) {
              *puVar11 = uVar13 + 0x10;
              *(undefined4 *)(uVar13 + 8) = 0;
              uVar13 = *puVar11;
            }
          }
          else {
            uVar6 = *puVar11 + ((long)(uVar13 * -0x10000000) >> 0x1c);
          }
          *puVar11 = uVar6;
          pcVar5 = "too many results to resume";
          goto LAB_7103903a44;
        }
        lVar10 = *(long *)(param_1 + 0x10);
        lVar12 = (long)local_44;
      }
      uVar1 = lVar10 + lVar12 * 0x10;
      if (*(ulong *)(lVar14 + 8) < uVar1) {
        *(ulong *)(lVar14 + 8) = uVar1;
      }
      if (param_1 != param_2) {
        puVar7 = (undefined8 *)(*puVar11 - ((long)(uVar13 * 0x10000000) >> 0x1c));
        *puVar11 = (ulong)puVar7;
        if (0 < (int)uVar3) {
          puVar9 = *(undefined8 **)(param_1 + 0x10);
          uVar2 = puVar7[1];
          *puVar9 = *puVar7;
          puVar9[1] = uVar2;
          puVar7 = (undefined8 *)(*(long *)(param_1 + 0x10) + 0x10);
          *(undefined8 **)(param_1 + 0x10) = puVar7;
          if (uVar3 == 1) {
            uVar6 = 1;
          }
          else {
            if (uVar3 == 2) {
              lVar10 = 1;
            }
            else {
              lVar12 = 0;
              lVar10 = 1;
              do {
                lVar10 = lVar10 + 2;
                uVar2 = *(undefined8 *)(*puVar11 + lVar12 + 0x18);
                *puVar7 = *(undefined8 *)(*puVar11 + lVar12 + 0x10);
                puVar7[1] = uVar2;
                lVar8 = *(long *)(param_1 + 0x10);
                *(long *)(param_1 + 0x10) = lVar8 + 0x10;
                lVar14 = *puVar11 + lVar12;
                lVar12 = lVar12 + 0x20;
                uVar2 = *(undefined8 *)(lVar14 + 0x28);
                *(undefined8 *)(lVar8 + 0x10) = *(undefined8 *)(lVar14 + 0x20);
                *(undefined8 *)(lVar8 + 0x18) = uVar2;
                puVar7 = (undefined8 *)(*(long *)(param_1 + 0x10) + 0x10);
                *(undefined8 **)(param_1 + 0x10) = puVar7;
              } while ((uVar13 >> 4 & 0xffffffff) - (ulong)(~uVar3 & 1) != lVar10);
              if ((~uVar3 & 1) == 0) goto LAB_7103903a50;
            }
            puVar9 = (undefined8 *)(*puVar11 + lVar10 * 0x10);
            uVar2 = puVar9[1];
            *puVar7 = *puVar9;
            puVar7[1] = uVar2;
            *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
          }
        }
      }
      goto LAB_7103903a50;
    }
    if (param_1 != param_2) {
      uVar6 = *puVar11;
      *puVar11 = uVar6 - 0x10;
      puVar7 = *(undefined8 **)(param_1 + 0x10);
      uVar2 = *(undefined8 *)(uVar6 - 8);
      *puVar7 = *(undefined8 *)(uVar6 - 0x10);
      puVar7[1] = uVar2;
      *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 0x10;
    }
  }
  else {
    if (((int)(uVar6 - *(long *)(param_2 + 0x38) >> 4) + 5 <= (int)(1000000 - param_3)) &&
       (iVar4 = FUN_71038fb4b0(param_2,FUN_71038f3f70,&local_48), iVar4 == 0)) {
      uVar6 = *puVar11;
      lVar10 = (long)(int)local_48;
      goto LAB_7103903760;
    }
    pcVar5 = "too many arguments to resume";
LAB_7103903a44:
    FUN_71038f4b20(param_1,pcVar5);
  }
  uVar6 = 0xffffffff;
LAB_7103903a50:
  return uVar6 & 0xffffffff;
}

