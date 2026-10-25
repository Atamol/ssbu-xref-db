// addr:      7101ad6b90
// offset:    0x1ad6b90
// name:      FUN_7101ad6b90
// mangled:   
// signature: undefined __cdecl FUN_7101ad6b90(long param_1, undefined8 param_2, char * param_3, byte * * * * param_4, long * * * * param_5, byte * * * * param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101ad6b90(long param_1,undefined8 param_2,char *param_3,byte ****param_4,long ****param_5,
                   byte ****param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  int iVar8;
  long *plVar9;
  long *plVar10;
  long ****pppplVar11;
  byte *pbVar12;
  byte bVar13;
  undefined4 uVar14;
  long lVar15;
  long *plVar16;
  long lVar17;
  ulong local_48;
  
  if (*(int *)(param_1 + 0x164) != 0) {
    if (*(int *)(*(long *)(param_1 + 0x198) + 0xe8) != 0) {
      return;
    }
    if (*(char *)(*(long *)(DAT_710532f7e8 + 8) + 0x161) == '\0') {
      return;
    }
    if (*(int *)(*(long *)(DAT_710532f7e8 + 8) + 0xe8) != 2) {
      return;
    }
    if ((ulong)(*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10) >> 3) < 2)
    goto LAB_7101ad6fc4;
    FUN_7103775fa0(*(long **)**(undefined8 **)(*(long *)(param_1 + 0x10) + 8),param_2,
                   (long ****)param_3,param_4,param_5,param_6,param_7,param_8);
    **(uint **)(DAT_710593b988 + 8) =
         **(uint **)(DAT_710593b988 + 8) &
         (1 << (ulong)(*(uint *)(param_1 + 0x18c) & 0x1f) ^ 0xffffffffU);
    FUN_71033145d0(DAT_710532f8d0,0xd9ffff13b148f9ab,1,param_4,param_5,param_6,param_7,param_8);
    uVar7 = (uint)*(byte *)(*(long *)**(undefined8 **)(*DAT_7105314510 + 0x1c8) + 0x3f0);
    if (uVar7 != 3) {
      uVar5 = FUN_710329d690(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x368),uVar7,0);
      plVar16 = DAT_7105314510;
      if ((uint)uVar5 <= *(uint *)(*(long *)**(undefined8 **)(*DAT_7105314510 + 0x1c8) + 0x3ec)) {
        *(uint *)(param_1 + 0x57c) =
             (uint)*(byte *)(*(long *)**(undefined8 **)(*DAT_7105314510 + 0x1c8) + 0x3f0);
        lVar15 = *(long *)**(undefined8 **)(*plVar16 + 0x1c8);
        if (*(char *)(lVar15 + 0x3f0) == '\x03') {
          pbVar12 = (byte *)(lVar15 + 0x3f0);
          bVar13 = 3;
LAB_7101ad6f28:
          *pbVar12 = bVar13;
        }
        else {
          *(undefined4 *)(lVar15 + 0x3ec) = 0;
          lVar15 = *(long *)**(undefined8 **)(*plVar16 + 0x1c8);
          pbVar12 = (byte *)(lVar15 + 0x3f0);
          bVar13 = *(byte *)(lVar15 + 0x3f0);
          if (bVar13 < 3) {
            bVar13 = bVar13 + 1;
            goto LAB_7101ad6f28;
          }
          if (bVar13 == 3) goto LAB_7101ad6f28;
        }
        uVar7 = *(uint *)(param_1 + 0x15c);
        *(undefined1 *)(param_1 + 0x598) = 0;
        if (0x12 < uVar7) goto LAB_7101ad6fc8;
        uVar14 = 7;
        goto LAB_7101ad6f44;
      }
    }
    if (*(char *)(param_1 + 0x590) == '\0') {
      uVar7 = *(uint *)(param_1 + 0x15c);
      if (uVar7 < 0x13) {
        uVar14 = 5;
LAB_7101ad6f44:
        *(undefined4 *)(param_1 + (long)(int)uVar7 * 4 + 0x110) = uVar14;
        return;
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x590) = 0;
      if (*(uint *)(param_1 + 0x15c) < 0x13) {
        *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x15c) * 4 + 0x110) = 8;
        *(undefined1 *)(param_1 + 0x598) = 0;
        return;
      }
    }
LAB_7101ad6fc8:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  plVar16 = *(long **)(param_1 + 0x40);
  if (*plVar16 != 0) {
    local_48 = 0;
    FUN_71037aea50(&local_48,"i",(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
    plVar16 = (long *)*plVar16;
    lVar4 = *plVar16;
    lVar15 = 0;
    if (lVar4 != 0) {
      lVar15 = *(long *)(*(long *)(lVar4 + 0x18) + 0x40);
      if (*(uint *)(lVar15 + 0xc) < 2) {
        plVar9 = (long *)(*(long *)(lVar15 + 0x18) +
                         ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)(lVar15 + 0xb) & 0x3f)) & 2
                         ) * 0x20);
        do {
          if (((int)plVar9[3] == 0x13) && (plVar10 = plVar9, plVar9[2] == 2)) break;
          piVar1 = (int *)((long)plVar9 + 0x1c);
          plVar9 = plVar9 + (long)*piVar1 * 4;
          plVar10 = &DAT_7104862960;
        } while (*piVar1 != 0);
      }
      else {
        plVar10 = (long *)(*(long *)(lVar15 + 0x10) + 0x10);
      }
      param_3 = "g_decided_item_id";
      FUN_71038f4d40(lVar4,plVar10,"g_decided_item_id");
      lVar15 = *plVar16;
    }
    FUN_710372d940(lVar15,(long *)&local_48,param_3,param_4,param_5,param_6,param_7,param_8);
    uVar5 = local_48;
    if (local_48 != 0) {
      lVar4 = *(long *)(local_48 + 0x10);
      uVar7 = **(uint **)(local_48 + 8);
      lVar15 = 0;
      do {
        cVar3 = *(char *)(lVar4 + lVar15);
        if (cVar3 == 's') {
          lVar17 = *(long *)(uVar5 + 8);
          uVar6 = *(ulong *)(lVar17 + lVar15 * 8);
          if (uVar6 != 0) {
            FUN_710392eb40(uVar6);
          }
          *(undefined8 *)(lVar17 + lVar15 * 8) = 0;
        }
        else if (cVar3 == '\0') goto LAB_7101ad6df0;
        lVar15 = lVar15 + 1;
      } while( true );
    }
  }
  uVar7 = 0;
  goto LAB_7101ad6dfc;
LAB_7101ad6df0:
  FUN_710392eb40(uVar5);
  local_48 = 0;
LAB_7101ad6dfc:
  if (1 < (ulong)(*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10) >> 3)) {
    uVar2 = *(uint *)(param_1 + 0x184);
    pppplVar11 = (long ****)(ulong)uVar2;
    if ((int)uVar2 < 0x500000) {
      if ((int)uVar2 < 0x250000) {
        if ((int)uVar2 < 0x200000) {
          if ((int)uVar2 < 0x150000) {
            if ((int)uVar2 < 0x100000) {
              if ((int)uVar2 < 0xfe000) {
                if ((int)uVar2 < 0x50000) {
                  if ((int)uVar2 < 0x10000) {
                    iVar8 = 3;
                    if (0 < (int)uVar2) {
                      iVar8 = 0;
                    }
                  }
                  else {
                    iVar8 = 1;
                  }
                }
                else {
                  iVar8 = 2;
                }
              }
              else {
                iVar8 = 8;
              }
            }
            else {
              iVar8 = 4;
            }
          }
          else {
            iVar8 = 6;
          }
        }
        else {
          iVar8 = 5;
        }
      }
      else {
        iVar8 = 7;
      }
    }
    else {
      iVar8 = 9;
    }
    FUN_7103775dc0(*(long **)**(undefined8 **)(*(long *)(param_1 + 0x10) + 8),iVar8,pppplVar11,
                   param_4,param_5,param_6,param_7,param_8);
    lVar15 = param_1 + (long)(int)uVar7 * 0x30;
    FUN_71032d6810(param_1 + 0x178,0,pppplVar11,param_4,param_5,param_6,param_7,param_8);
    FUN_7101ad3b90(*(long *)(param_1 + 0x198),(ulong *)(lVar15 + 0x1a0),(ulong)uVar7,param_4,param_5
                   ,param_6,param_7,param_8);
    *(undefined4 *)(param_1 + 0x578) = *(undefined4 *)(lVar15 + 0x1c0);
    FUN_7101ad7870(param_1,(ulong)uVar7,0,param_4,param_5,param_6,param_7,param_8);
    return;
  }
LAB_7101ad6fc4:
                    /* WARNING: Subroutine does not return */
  std::__vector_base_common<true>::__throw_out_of_range();
}

