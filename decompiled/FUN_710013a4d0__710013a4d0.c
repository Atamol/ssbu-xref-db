// addr:      710013a4d0
// offset:    0x13a4d0
// name:      FUN_710013a4d0
// mangled:   
// signature: undefined FUN_710013a4d0(void)


/* WARNING: Removing unreachable block (ram,0x00710013a53c) */

void FUN_710013a4d0(long param_1,long *param_2,long param_3,int param_4)

{
  bool bVar1;
  char *pcVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  undefined1 *puVar7;
  int iVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  
  FUN_710013bde0(0x71052ad2c0);
  puVar7 = DAT_71052ad308;
  if (DAT_71052ad308 != &DAT_710431834d) {
    uVar11 = 0;
    do {
      if (uVar11 >> 0x13 != 0) {
        uVar6 = 0;
        break;
      }
      if ((&DAT_710431834e)[uVar11] == '\0') {
        uVar6 = uVar11 + 1;
        break;
      }
      uVar6 = uVar11 + 2;
      pcVar2 = &DAT_710431834f + uVar11;
      uVar11 = uVar6;
    } while (*pcVar2 != '\0');
    iVar8 = (int)uVar6;
    if (DAT_71052ad310 <= (int)uVar6) {
      iVar8 = DAT_71052ad310 + -1;
    }
    memcpy(DAT_71052ad308,&DAT_710431834d,(long)iVar8);
    puVar7[iVar8] = 0;
  }
  uVar4 = param_4 + 7U >> 3;
  if (uVar4 != 0) {
    uVar11 = 0;
    do {
      uVar10 = param_4 + (int)uVar11 * -8;
      if (7 < uVar10) {
        uVar10 = 8;
      }
      if (0 < (int)uVar10) {
        do {
          while( true ) {
            bVar3 = *(byte *)(param_3 + uVar11);
            uVar5 = uVar10 - 1;
            (**(code **)(DAT_71052ad300 + 0x18))(&DAT_71052ad300);
            lVar9 = 0;
            if ((1 << (ulong)(uVar5 & 0x1f) & (uint)bVar3) != 0) break;
            do {
              if (DAT_71052ad308[lVar9] == '\0') goto LAB_710013a6b0;
              if (DAT_71052ad308[lVar9 + 1] == '\0') {
                iVar8 = (int)lVar9 + 1;
                if (DAT_71052ad310 + -1 <= iVar8) goto LAB_710013a710;
                goto LAB_710013a734;
              }
              if (DAT_71052ad308[lVar9 + 2] == '\0') {
                iVar8 = (int)lVar9 + 2;
                if (iVar8 < DAT_71052ad310 + -1) goto LAB_710013a734;
                goto LAB_710013a710;
              }
              uVar6 = lVar9 + 2;
              lVar9 = lVar9 + 3;
            } while (uVar6 >> 0x13 == 0);
            lVar9 = 0;
LAB_710013a6b0:
            iVar8 = (int)lVar9;
            if (iVar8 < DAT_71052ad310 + -1) {
LAB_710013a734:
              puVar7 = DAT_71052ad308 + iVar8;
              *puVar7 = 0x30;
              goto LAB_710013a740;
            }
LAB_710013a710:
            bVar1 = (int)uVar10 < 2;
            uVar10 = uVar5;
            if (bVar1) goto LAB_710013a750;
          }
          do {
            if (DAT_71052ad308[lVar9] == '\0') goto LAB_710013a660;
            if (DAT_71052ad308[lVar9 + 1] == '\0') {
              iVar8 = (int)lVar9 + 1;
              if (DAT_71052ad310 + -1 <= iVar8) goto LAB_710013a710;
              goto LAB_710013a6f0;
            }
            if (DAT_71052ad308[lVar9 + 2] == '\0') {
              iVar8 = (int)lVar9 + 2;
              if (iVar8 < DAT_71052ad310 + -1) goto LAB_710013a6f0;
              goto LAB_710013a710;
            }
            uVar6 = lVar9 + 2;
            lVar9 = lVar9 + 3;
          } while (uVar6 >> 0x13 == 0);
          lVar9 = 0;
LAB_710013a660:
          iVar8 = (int)lVar9;
          if (DAT_71052ad310 + -1 <= iVar8) goto LAB_710013a710;
LAB_710013a6f0:
          puVar7 = DAT_71052ad308 + iVar8;
          *puVar7 = 0x31;
LAB_710013a740:
          puVar7[1] = 0;
          bVar1 = 1 < (int)uVar10;
          uVar10 = uVar5;
        } while (bVar1);
      }
LAB_710013a750:
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar4);
  }
  (**(code **)(DAT_71052ad300 + 0x18))();
  (**(code **)(*param_2 + 8))(param_2,DAT_71052ad308,param_4 + 2);
  (**(code **)(*(long *)(param_1 + 8) + 0x18))((long *)(param_1 + 8));
  (**(code **)(*param_2 + 8))(param_2,*(undefined8 *)(param_1 + 0x10),1);
  FUN_710013bdf0(0x71052ad2c0);
  return;
}

