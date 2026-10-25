// addr:      71001f24a0
// offset:    0x1f24a0
// name:      FUN_71001f24a0
// mangled:   
// signature: undefined __cdecl FUN_71001f24a0(long param_1)


void FUN_71001f24a0(long param_1)

{
  long *plVar1;
  char *pcVar2;
  bool bVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  size_t sVar8;
  undefined8 *puVar9;
  char *pcVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  long *plVar18;
  long *plVar19;
  undefined **local_520 [3];
  char *local_508;
  undefined8 auStack_4f8 [18];
  char acStack_468 [1032];
  
  uVar7 = *(int *)(param_1 + 0x10) - 1;
  if (uVar7 < 3) {
    iVar5 = snprintf(acStack_468,0x400,(&PTR_s_prudp___7104f599f0)[(int)uVar7]);
    lVar17 = (long)iVar5;
    iVar5 = FUN_71001bef20(*(long *)(param_1 + 8));
  }
  else {
    lVar17 = 0;
    iVar5 = FUN_71001bef20(*(long *)(param_1 + 8));
  }
  if (iVar5 == 0) {
    sVar4 = FUN_71001beb30(*(long *)(param_1 + 8));
  }
  else {
    iVar6 = snprintf(acStack_468 + lVar17,0x400,"%s%s","address","=");
    lVar17 = lVar17 + iVar6;
    FUN_71001bef30(*(long *)(param_1 + 8),acStack_468 + lVar17,0x400 - lVar17);
    sVar8 = strlen(acStack_468 + lVar17);
    lVar17 = sVar8 + lVar17;
    sVar4 = FUN_71001beb30(*(long *)(param_1 + 8));
  }
  bVar3 = iVar5 != 0;
  if (sVar4 != 0) {
    if (bVar3) {
      iVar5 = snprintf(acStack_468 + lVar17,0x400,";");
      lVar17 = lVar17 + iVar5;
    }
    uVar7 = FUN_71001beb30(*(long *)(param_1 + 8));
    iVar5 = snprintf(acStack_468 + lVar17,0x400,"%s%s%u","port","=",uVar7 & 0xffff);
    lVar17 = lVar17 + iVar5;
    bVar3 = true;
  }
  uVar7 = *(uint *)(*(long *)(param_1 + 8) + 0x88);
  if (uVar7 != 0) {
    if (bVar3) {
      iVar5 = snprintf(acStack_468 + lVar17,0x400,";");
      uVar7 = *(uint *)(*(long *)(param_1 + 8) + 0x88);
      lVar17 = lVar17 + iVar5;
    }
    FUN_71001bee60(auStack_4f8,uVar7,0);
    FUN_71001befa0(local_520,(long)auStack_4f8);
    iVar5 = snprintf(acStack_468 + lVar17,0x400,"%s%s%s","Pa","=",local_508);
    lVar17 = lVar17 + iVar5;
    local_520[0] = &PTR_FUN_710509cc08;
    FUN_71001b4910((long)local_520);
    FUN_71001bef00();
    bVar3 = true;
  }
  plVar19 = *(long **)(param_1 + 0x30);
  plVar1 = (long *)(param_1 + 0x20);
  plVar18 = (long *)(param_1 + 0x38);
  if ((*(long **)(param_1 + 0x18) != plVar1) || (plVar19 != plVar18)) {
    pcVar2 = "%s%s%lu";
    plVar16 = *(long **)(param_1 + 0x18);
    do {
      if (bVar3) {
        iVar5 = snprintf(acStack_468 + lVar17,0x400,";");
        lVar17 = lVar17 + iVar5;
      }
      pcVar10 = pcVar2;
      if (plVar19 == plVar18) {
        lVar11 = plVar16[7];
        lVar12 = plVar16[9];
        plVar13 = (long *)plVar16[1];
        if ((long *)plVar16[1] == (long *)0x0) {
          plVar13 = plVar16 + 2;
          plVar15 = (long *)*plVar13;
          if ((long *)*plVar15 != plVar16) {
            do {
              lVar14 = *plVar13;
              plVar13 = (long *)(lVar14 + 0x10);
              plVar15 = (long *)*plVar13;
            } while (*plVar15 != lVar14);
          }
        }
        else {
          do {
            plVar15 = plVar13;
            plVar13 = (long *)*plVar15;
          } while ((long *)*plVar15 != (long *)0x0);
        }
      }
      else {
        if (plVar16 == plVar1) {
          lVar11 = plVar19[7];
          lVar12 = plVar19[0xc];
          plVar13 = (long *)plVar19[1];
          if ((long *)plVar19[1] == (long *)0x0) {
            plVar13 = plVar19 + 2;
            bVar3 = *(long **)*plVar13 != plVar19;
            plVar19 = (long *)*plVar13;
            if (bVar3) {
              do {
                lVar14 = *plVar13;
                plVar13 = (long *)(lVar14 + 0x10);
                plVar19 = (long *)*plVar13;
              } while (*plVar19 != lVar14);
            }
          }
          else {
            do {
              plVar19 = plVar13;
              plVar13 = (long *)*plVar19;
            } while ((long *)*plVar19 != (long *)0x0);
          }
        }
        else {
          uVar7 = FUN_71001b4e80((long)(plVar19 + 4),(long)(plVar16 + 4));
          if ((uVar7 & 1) == 0) {
            lVar11 = plVar16[7];
            lVar12 = plVar16[9];
            plVar13 = (long *)plVar16[1];
            if ((long *)plVar16[1] == (long *)0x0) {
              plVar13 = plVar16 + 2;
              plVar15 = (long *)*plVar13;
              if ((long *)*plVar15 != plVar16) {
                do {
                  lVar14 = *plVar13;
                  plVar13 = (long *)(lVar14 + 0x10);
                  plVar15 = (long *)*plVar13;
                } while (*plVar15 != lVar14);
              }
            }
            else {
              do {
                plVar15 = plVar13;
                plVar13 = (long *)*plVar15;
              } while ((long *)*plVar15 != (long *)0x0);
            }
            goto LAB_71001f284c;
          }
          lVar11 = plVar19[7];
          lVar12 = plVar19[0xc];
          plVar13 = (long *)plVar19[1];
          if ((long *)plVar19[1] == (long *)0x0) {
            plVar13 = plVar19 + 2;
            bVar3 = *(long **)*plVar13 != plVar19;
            plVar19 = (long *)*plVar13;
            if (bVar3) {
              do {
                lVar14 = *plVar13;
                plVar13 = (long *)(lVar14 + 0x10);
                plVar19 = (long *)*plVar13;
              } while (*plVar19 != lVar14);
            }
          }
          else {
            do {
              plVar19 = plVar13;
              plVar13 = (long *)*plVar19;
            } while ((long *)*plVar19 != (long *)0x0);
          }
        }
        plVar15 = plVar16;
        if (lVar12 != 0) {
          pcVar10 = "%s%s%s";
        }
      }
LAB_71001f284c:
      iVar5 = snprintf(acStack_468 + lVar17,0x400,pcVar10,lVar11,&DAT_710436b8c6,lVar12);
      lVar17 = lVar17 + iVar5;
      bVar3 = true;
      plVar16 = plVar15;
    } while ((plVar15 != plVar1) || (plVar19 != plVar18));
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    iVar5 = snprintf(acStack_468 + lVar17,0x400,"#");
    plVar1 = (long *)(param_1 + 0x50);
    if (*(long **)(param_1 + 0x48) != plVar1) {
      lVar17 = lVar17 + iVar5;
      bVar3 = false;
      plVar18 = *(long **)(param_1 + 0x48);
      do {
        while( true ) {
          if (bVar3) {
            iVar5 = snprintf(acStack_468 + lVar17,0x400,";");
            lVar17 = lVar17 + iVar5;
          }
          iVar5 = snprintf(acStack_468 + lVar17,0x400,"%s%s%s",(char *)plVar18[7],"=",
                           (char *)plVar18[0xc]);
          lVar17 = lVar17 + iVar5;
          plVar19 = (long *)plVar18[1];
          if ((long *)plVar18[1] == (long *)0x0) break;
          do {
            plVar18 = plVar19;
            plVar19 = (long *)*plVar18;
          } while ((long *)*plVar18 != (long *)0x0);
LAB_71001f2938:
          bVar3 = true;
          if (plVar18 == plVar1) goto LAB_71001f2958;
        }
        plVar19 = plVar18 + 2;
        plVar16 = (long *)*plVar19;
        if ((long *)*plVar16 != plVar18) {
          do {
            lVar11 = *plVar19;
            plVar19 = (long *)(lVar11 + 0x10);
            plVar18 = (long *)*plVar19;
          } while (*plVar18 != lVar11);
          goto LAB_71001f2938;
        }
        bVar3 = true;
        plVar18 = plVar16;
      } while (plVar16 != plVar1);
    }
  }
LAB_71001f2958:
  if (*(long *)(param_1 + 0x60) != 0) {
    FUN_71001b1870(*(long *)(param_1 + 0x60) + -4);
    *(undefined8 *)(param_1 + 0x60) = 0;
    *(undefined1 *)(param_1 + 0x69) = 0;
  }
  sVar8 = strlen(acStack_468);
  puVar9 = FUN_71001b1820(sVar8 + 5);
  *(int *)puVar9 = (int)(sVar8 + 1);
  *(char **)(param_1 + 0x60) = (char *)((long)puVar9 + 4);
  strncpy((char *)((long)puVar9 + 4),acStack_468,sVar8 + 1);
  *(undefined1 *)(*(long *)(param_1 + 0x60) + sVar8) = 0;
  *(undefined1 *)(param_1 + 0x6a) = 1;
  *(undefined2 *)(param_1 + 0x68) = 0x101;
  return;
}

