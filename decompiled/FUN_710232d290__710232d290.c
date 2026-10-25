// addr:      710232d290
// offset:    0x232d290
// name:      FUN_710232d290
// mangled:   
// signature: undefined __cdecl FUN_710232d290(long * param_1)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_710232d290(long *param_1)

{
  char *pcVar1;
  short *psVar2;
  int *piVar3;
  char cVar4;
  byte bVar5;
  short sVar6;
  undefined8 uVar7;
  long ***ppplVar8;
  int iVar9;
  int iVar10;
  long ****in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar11;
  undefined8 *puVar12;
  undefined4 uVar13;
  short *psVar14;
  undefined8 uVar15;
  ulong uVar16;
  ushort *puVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  char *pcVar21;
  byte *pbVar22;
  int iVar23;
  long lVar24;
  byte ***local_d0;
  int local_c8;
  uint local_c0;
  undefined4 uStack_bc;
  undefined8 uStack_b8;
  undefined4 local_b0;
  undefined2 local_ac;
  undefined8 local_78;
  byte local_70 [64];
  
  if (((DAT_71053144d8 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_71053144d8), iVar10 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  lVar24 = *param_1;
  if (*(int *)((long)param_1 + 0x194) != 0) {
    lVar11 = *(long *)(lVar24 + 0x28);
    if (*(long *)(lVar11 + 0x60) != 0) {
      return;
    }
    if (*(long *)(lVar11 + 0x30) != *(long *)(lVar11 + 0x38)) {
      return;
    }
    if (*(long *)(*(long *)(lVar24 + 0x20) + 0x10) != 0) {
      return;
    }
    switch(*(undefined4 *)(lVar24 + 0x40)) {
    case 1:
      goto switchD_710232d308_caseD_1;
    default:
      if (0x12 < *(uint *)((long)param_1 + 0x18c)) goto LAB_710232dfe0;
      lVar24 = (long)param_1 + (long)(int)*(uint *)((long)param_1 + 0x18c) * 4;
      uVar13 = 4;
      break;
    case 3:
      if (DAT_71053050f0 == 0x2030100) {
        if (0x12 < *(uint *)((long)param_1 + 0x18c)) goto LAB_710232dfe0;
        lVar24 = (long)param_1 + (long)(int)*(uint *)((long)param_1 + 0x18c) * 4;
        uVar13 = 10;
      }
      else if (DAT_71053050f0 == 0x3010000) {
        if (0x12 < *(uint *)((long)param_1 + 0x18c)) goto LAB_710232dfe0;
        lVar24 = (long)param_1 + (long)(int)*(uint *)((long)param_1 + 0x18c) * 4;
        uVar13 = 0xc;
      }
      else {
        if (0x12 < *(uint *)((long)param_1 + 0x18c)) goto LAB_710232dfe0;
        lVar24 = (long)param_1 + (long)(int)*(uint *)((long)param_1 + 0x18c) * 4;
        uVar13 = 9;
      }
      break;
    case 4:
      if (DAT_71053050f0 == 0x2030100) {
        if (0x11 < *(int *)((long)param_1 + 0x18c)) goto LAB_710232dc00;
        uVar20 = *(int *)((long)param_1 + 0x18c) + 1;
        *(uint *)((long)param_1 + 0x18c) = uVar20;
        if (0x12 < uVar20) goto LAB_710232dfe0;
        lVar24 = (long)param_1 + (long)(int)uVar20 * 4;
        uVar13 = 8;
      }
      else if (DAT_71053050f0 == 0x3010000) {
        if (0x12 < *(uint *)((long)param_1 + 0x18c)) goto LAB_710232dfe0;
        lVar24 = (long)param_1 + (long)(int)*(uint *)((long)param_1 + 0x18c) * 4;
        uVar13 = 0xb;
      }
      else {
        if (0x11 < *(int *)((long)param_1 + 0x18c)) goto LAB_710232dc00;
        uVar20 = *(int *)((long)param_1 + 0x18c) + 1;
        *(uint *)((long)param_1 + 0x18c) = uVar20;
        if (0x12 < uVar20) goto LAB_710232dfe0;
        lVar24 = (long)param_1 + (long)(int)uVar20 * 4;
        uVar13 = 7;
      }
      *(undefined4 *)(lVar24 + 0x140) = uVar13;
LAB_710232dc00:
      *(int *)(param_1 + 0x35) = (int)DAT_7105306478;
      uVar15 = _DAT_71053050fc;
      *(undefined4 *)((long)param_1 + 0x1b4) = DAT_7105305100._4_4_;
      *(undefined8 *)((long)param_1 + 0x1ac) = uVar15;
      if ((undefined8 *)((long)param_1 + 0x1ac) != (undefined8 *)&DAT_71053050fc) {
        for (uVar16 = 0; (&DAT_7105305110)[uVar16] != '\0'; uVar16 = uVar16 + 2) {
          *(undefined1 *)((long)param_1 + uVar16 + 0x1c0) = (&DAT_7105305110)[uVar16];
          if (0x3e < (int)uVar16 + 1U) {
            uVar16 = (ulong)((int)uVar16 + 1);
            break;
          }
          if ((&DAT_7105305111)[uVar16] == '\0') {
            uVar16 = uVar16 + 1;
            break;
          }
          *(undefined1 *)((long)param_1 + uVar16 + 0x1c1) = (&DAT_7105305111)[uVar16];
        }
        *(undefined1 *)((long)param_1 + (uVar16 & 0xffffffff) + 0x1c0) = 0;
        *(int *)((long)param_1 + 0x1bc) = (int)uVar16;
        uVar18 = (uint)*(byte *)(param_1 + 0x38);
        uVar19 = 0x811c9dc5;
        uVar20 = uVar19;
        if (*(byte *)(param_1 + 0x38) != 0) {
          pbVar22 = (byte *)((long)param_1 + 0x1c1);
          do {
            uVar20 = uVar20 * 0x89 ^ uVar18;
            uVar18 = (uint)*pbVar22;
            pbVar22 = pbVar22 + 1;
          } while (uVar18 != 0);
        }
        *(uint *)(param_1 + 0x37) = uVar20;
        for (uVar16 = 0; (&DAT_7105305158)[uVar16] != 0; uVar16 = uVar16 + 2) {
          *(undefined2 *)((long)param_1 + uVar16 * 2 + 0x208) = (&DAT_7105305158)[uVar16];
          if (0x1fe < (int)uVar16 + 1U) {
            uVar16 = (ulong)((int)uVar16 + 1);
            break;
          }
          if ((&DAT_710530515a)[uVar16] == 0) {
            uVar16 = uVar16 + 1;
            break;
          }
          *(undefined2 *)((long)param_1 + uVar16 * 2 + 0x20a) = (&DAT_710530515a)[uVar16];
        }
        *(undefined2 *)((long)param_1 + (uVar16 & 0xffffffff) * 2 + 0x208) = 0;
        *(int *)((long)param_1 + 0x204) = (int)uVar16;
        uVar20 = (uint)*(ushort *)(param_1 + 0x41);
        if (*(ushort *)(param_1 + 0x41) != 0) {
          puVar17 = (ushort *)((long)param_1 + 0x20a);
          do {
            uVar19 = uVar19 * 0x89 ^ uVar20;
            uVar20 = (uint)*puVar17;
            puVar17 = puVar17 + 1;
          } while (uVar20 != 0);
        }
        *(uint *)(param_1 + 0x40) = uVar19;
        lVar24 = DAT_7105305558;
        *(undefined4 *)(param_1 + 0xc2) = DAT_7105305560;
        param_1[0xc1] = lVar24;
        FUN_7101696040((uint *)((long)param_1 + 0x614),&DAT_710530556c);
      }
      uVar7 = DAT_71053055a4;
      uVar15 = DAT_710530559c;
      *(undefined8 *)((long)param_1 + 0x65c) = DAT_71053055ac;
      *(undefined8 *)((long)param_1 + 0x654) = uVar7;
      *(undefined8 *)((long)param_1 + 0x64c) = uVar15;
      *(undefined1 *)((long)param_1 + 0x664) = DAT_71053055b4;
      lVar24 = DAT_71053055b8;
      *(undefined4 *)(param_1 + 0xce) = DAT_71053055c0;
      param_1[0xcd] = lVar24;
      uVar15 = DAT_71053055c4;
      *(undefined8 *)((long)param_1 + 0x67c) = DAT_71053055cc;
      *(undefined8 *)((long)param_1 + 0x674) = uVar15;
      uVar7 = ram0x0071053055dc;
      uVar15 = _DAT_71053055d4;
      *(uint *)((long)param_1 + 0x694) = ram0x0071053055e4;
      *(undefined8 *)((long)param_1 + 0x684) = uVar15;
      *(undefined8 *)((long)param_1 + 0x68c) = uVar7;
      *(undefined4 *)(param_1 + 0xd3) = 1;
      return;
    case 5:
      if (*(uint *)((long)param_1 + 0x18c) < 0x13) {
        *(undefined4 *)((long)param_1 + (long)(int)*(uint *)((long)param_1 + 0x18c) * 4 + 0x140) = 6
        ;
        *(int *)(param_1 + 0x35) = (int)DAT_7105306478;
        uVar15 = _DAT_71053050fc;
        *(undefined4 *)((long)param_1 + 0x1b4) = DAT_7105305100._4_4_;
        *(undefined8 *)((long)param_1 + 0x1ac) = uVar15;
        lVar24 = DAT_7105305558;
        if ((undefined8 *)((long)param_1 + 0x1ac) == (undefined8 *)&DAT_71053050fc) {
          *(undefined4 *)(param_1 + 0xc2) = DAT_7105305560;
          param_1[0xc1] = lVar24;
        }
        else {
          for (uVar16 = 0; (&DAT_7105305110)[uVar16] != '\0'; uVar16 = uVar16 + 2) {
            *(undefined1 *)((long)param_1 + uVar16 + 0x1c0) = (&DAT_7105305110)[uVar16];
            if (0x3e < (int)uVar16 + 1U) {
              uVar16 = (ulong)((int)uVar16 + 1);
              break;
            }
            if ((&DAT_7105305111)[uVar16] == '\0') {
              uVar16 = uVar16 + 1;
              break;
            }
            *(undefined1 *)((long)param_1 + uVar16 + 0x1c1) = (&DAT_7105305111)[uVar16];
          }
          *(undefined1 *)((long)param_1 + (uVar16 & 0xffffffff) + 0x1c0) = 0;
          *(int *)((long)param_1 + 0x1bc) = (int)uVar16;
          uVar18 = (uint)*(byte *)(param_1 + 0x38);
          uVar19 = 0x811c9dc5;
          uVar20 = uVar19;
          if (*(byte *)(param_1 + 0x38) != 0) {
            pbVar22 = (byte *)((long)param_1 + 0x1c1);
            do {
              uVar20 = uVar20 * 0x89 ^ uVar18;
              uVar18 = (uint)*pbVar22;
              pbVar22 = pbVar22 + 1;
            } while (uVar18 != 0);
          }
          *(uint *)(param_1 + 0x37) = uVar20;
          for (uVar16 = 0; (&DAT_7105305158)[uVar16] != 0; uVar16 = uVar16 + 2) {
            *(undefined2 *)((long)param_1 + uVar16 * 2 + 0x208) = (&DAT_7105305158)[uVar16];
            if (0x1fe < (int)uVar16 + 1U) {
              uVar16 = (ulong)((int)uVar16 + 1);
              break;
            }
            if ((&DAT_710530515a)[uVar16] == 0) {
              uVar16 = uVar16 + 1;
              break;
            }
            *(undefined2 *)((long)param_1 + uVar16 * 2 + 0x20a) = (&DAT_710530515a)[uVar16];
          }
          *(undefined2 *)((long)param_1 + (uVar16 & 0xffffffff) * 2 + 0x208) = 0;
          *(int *)((long)param_1 + 0x204) = (int)uVar16;
          uVar20 = (uint)*(ushort *)(param_1 + 0x41);
          if (*(ushort *)(param_1 + 0x41) != 0) {
            puVar17 = (ushort *)((long)param_1 + 0x20a);
            do {
              uVar19 = uVar19 * 0x89 ^ uVar20;
              uVar20 = (uint)*puVar17;
              puVar17 = puVar17 + 1;
            } while (uVar20 != 0);
          }
          *(uint *)(param_1 + 0x40) = uVar19;
          lVar24 = DAT_7105305558;
          *(undefined4 *)(param_1 + 0xc2) = DAT_7105305560;
          param_1[0xc1] = lVar24;
          FUN_7101696040((uint *)((long)param_1 + 0x614),&DAT_710530556c);
        }
        uVar7 = DAT_71053055a4;
        uVar15 = DAT_710530559c;
        *(undefined8 *)((long)param_1 + 0x65c) = DAT_71053055ac;
        *(undefined8 *)((long)param_1 + 0x654) = uVar7;
        *(undefined8 *)((long)param_1 + 0x64c) = uVar15;
        *(undefined1 *)((long)param_1 + 0x664) = DAT_71053055b4;
        lVar24 = DAT_71053055b8;
        *(undefined4 *)(param_1 + 0xce) = DAT_71053055c0;
        param_1[0xcd] = lVar24;
        uVar15 = DAT_71053055c4;
        *(undefined8 *)((long)param_1 + 0x67c) = DAT_71053055cc;
        *(undefined8 *)((long)param_1 + 0x674) = uVar15;
        uVar7 = ram0x0071053055dc;
        uVar15 = _DAT_71053055d4;
        *(uint *)((long)param_1 + 0x694) = ram0x0071053055e4;
        *(undefined8 *)((long)param_1 + 0x68c) = uVar7;
        *(undefined8 *)((long)param_1 + 0x684) = uVar15;
        *(undefined4 *)(param_1 + 0xd3) = 0;
        return;
      }
LAB_710232dfe0:
                    /* WARNING: Subroutine does not return */
      abort();
    case 6:
      if (0x12 < *(uint *)((long)param_1 + 0x18c)) goto LAB_710232dfe0;
      lVar24 = (long)param_1 + (long)(int)*(uint *)((long)param_1 + 0x18c) * 4;
      uVar13 = 0xd;
      break;
    case 7:
      if (0x12 < *(uint *)((long)param_1 + 0x18c)) goto LAB_710232dfe0;
      lVar24 = (long)param_1 + (long)(int)*(uint *)((long)param_1 + 0x18c) * 4;
      uVar13 = 0xf;
    }
    *(undefined4 *)(lVar24 + 0x140) = uVar13;
switchD_710232d308_caseD_1:
    return;
  }
  if (((DAT_710593b2d0 & 1) == 0) && (iVar10 = __cxa_guard_acquire(&DAT_710593b2d0), iVar10 != 0)) {
    DAT_710593b288 = 0;
    DAT_710593b280 = 0;
    __cxa_guard_release(&DAT_710593b2d0);
  }
  lVar24 = *(long *)(*(long *)(lVar24 + 0x28) + 0x60);
  piVar3 = (int *)&DAT_710593b280;
  if (lVar24 != 0) {
    piVar3 = (int *)(lVar24 + 8);
  }
  if ((*piVar3 == -0x318c1af3) &&
     (iVar10 = strcmp((char *)(piVar3 + 2),"LocalTopScene"), iVar10 == 0)) {
    return;
  }
  ppplVar8 = local_78;
  iVar10 = (int)param_1[0x33];
  iVar23 = (int)param_1[0xd3];
  uVar20 = 0x811c9dc5;
  if (iVar10 - 6U < 3) {
LAB_710232d3c8:
    if ((int)param_1[0x35] == 0) {
LAB_710232d4ec:
      DAT_7105306488._4_4_ = DAT_7105305100._4_4_;
      _DAT_7105306484 = _DAT_71053050fc;
      for (uVar16 = 0; (&DAT_7105305110)[uVar16] != '\0'; uVar16 = uVar16 + 2) {
        (&DAT_7105306498)[uVar16] = (&DAT_7105305110)[uVar16];
        if (0x3e < (int)uVar16 + 1U) {
          uVar16 = (ulong)((int)uVar16 + 1);
          break;
        }
        if ((&DAT_7105305111)[uVar16] == '\0') {
          uVar16 = uVar16 + 1;
          break;
        }
        (&DAT_7105306499)[uVar16] = (&DAT_7105305111)[uVar16];
      }
      (&DAT_7105306498)[uVar16 & 0xffffffff] = 0;
      DAT_7105306494 = (undefined4)uVar16;
      uVar19 = (uint)DAT_7105306498;
      DAT_7105306490 = uVar20;
      if (DAT_7105306498 != 0) {
        pbVar22 = &DAT_7105306499;
        do {
          DAT_7105306490 = DAT_7105306490 * 0x89 ^ uVar19;
          uVar19 = (uint)*pbVar22;
          pbVar22 = pbVar22 + 1;
        } while (uVar19 != 0);
      }
      for (uVar16 = 0; (&DAT_7105305158)[uVar16] != 0; uVar16 = uVar16 + 2) {
        (&DAT_71053064e0)[uVar16] = (&DAT_7105305158)[uVar16];
        if (0x1fe < (int)uVar16 + 1U) {
          uVar16 = (ulong)((int)uVar16 + 1);
          break;
        }
        if ((&DAT_710530515a)[uVar16] == 0) {
          uVar16 = uVar16 + 1;
          break;
        }
        (&DAT_71053064e2)[uVar16] = (&DAT_710530515a)[uVar16];
      }
      (&DAT_71053064e0)[uVar16 & 0xffffffff] = 0;
      DAT_71053064dc = (undefined4)uVar16;
      uVar19 = (uint)DAT_71053064e0;
      DAT_71053064d8 = uVar20;
      if (DAT_71053064e0 != 0) {
        puVar17 = &DAT_71053064e2;
        do {
          DAT_71053064d8 = DAT_71053064d8 * 0x89 ^ uVar19;
          uVar19 = (uint)*puVar17;
          puVar17 = puVar17 + 1;
        } while (uVar19 != 0);
      }
      DAT_71053068e8 = DAT_7105305560;
      DAT_71053068e0 = DAT_7105305558;
      FUN_7101696040((uint *)&DAT_71053068ec,&DAT_710530556c);
      _DAT_7105306964 = (undefined2)ram0x0071053055dc;
      DAT_7105306966 = (undefined1)((ulong)ram0x0071053055dc >> 0x10);
      _DAT_7105306967 = (uint)((ulong)ram0x0071053055dc >> 0x18);
      DAT_710530696b = (undefined1)((ulong)ram0x0071053055dc >> 0x38);
      DAT_710530695c._0_2_ = (undefined2)_DAT_71053055d4;
      DAT_710530695c._2_6_ = (undefined6)((ulong)_DAT_71053055d4 >> 0x10);
      iVar23 = 2;
      iVar9 = (int)param_1[0x35];
      DAT_7105306934 = DAT_71053055ac;
      DAT_710530692c = DAT_71053055a4;
      DAT_7105306924 = DAT_710530559c;
      DAT_710530693c = DAT_71053055b4;
      DAT_7105306948 = DAT_71053055c0;
      DAT_7105306940 = DAT_71053055b8;
      DAT_7105306954 = DAT_71053055cc;
      DAT_710530694c = DAT_71053055c4;
      DAT_710530696c = ram0x0071053055e4;
      iVar10 = (int)DAT_7105306478;
      goto joined_r0x00710232d70c;
    }
    if (iVar23 != -1) {
LAB_710232d480:
      _DAT_7105306484 = *(undefined8 *)((long)param_1 + 0x1ac);
      DAT_7105306488._4_4_ = *(undefined4 *)((long)param_1 + 0x1b4);
      if ((undefined8 *)((long)param_1 + 0x1ac) == (undefined8 *)&DAT_7105306484) {
        DAT_71053068e0 = param_1[0xc1];
        DAT_71053068e8 = (undefined4)param_1[0xc2];
      }
      else {
        uVar16 = 0;
        pcVar21 = &DAT_7105306499;
        while( true ) {
          pcVar1 = (char *)((long)param_1 + uVar16 + 0x1c0);
          cVar4 = *pcVar1;
          if (cVar4 == '\0') break;
          pcVar21[-1] = cVar4;
          if (0x3e < (int)uVar16 + 1U) {
            uVar16 = (ulong)((int)uVar16 + 1);
            break;
          }
          cVar4 = pcVar1[1];
          if (cVar4 == '\0') {
            uVar16 = uVar16 + 1;
            break;
          }
          uVar16 = uVar16 + 2;
          *pcVar21 = cVar4;
          pcVar21 = pcVar21 + 2;
        }
        (&DAT_7105306498)[uVar16 & 0xffffffff] = 0;
        DAT_7105306494 = (undefined4)uVar16;
        uVar19 = (uint)DAT_7105306498;
        DAT_7105306490 = uVar20;
        if (DAT_7105306498 != 0) {
          pbVar22 = &DAT_7105306499;
          do {
            DAT_7105306490 = DAT_7105306490 * 0x89 ^ uVar19;
            uVar19 = (uint)*pbVar22;
            pbVar22 = pbVar22 + 1;
          } while (uVar19 != 0);
        }
        uVar16 = 0;
        psVar14 = &DAT_71053064e2;
        while( true ) {
          psVar2 = (short *)((long)param_1 + uVar16 * 2 + 0x208);
          sVar6 = *psVar2;
          if (sVar6 == 0) break;
          psVar14[-1] = sVar6;
          if (0x1fe < (int)uVar16 + 1U) {
            uVar16 = (ulong)((int)uVar16 + 1);
            break;
          }
          sVar6 = psVar2[1];
          if (sVar6 == 0) {
            uVar16 = uVar16 + 1;
            break;
          }
          uVar16 = uVar16 + 2;
          *psVar14 = sVar6;
          psVar14 = psVar14 + 2;
        }
        (&DAT_71053064e0)[uVar16 & 0xffffffff] = 0;
        DAT_71053064dc = (undefined4)uVar16;
        uVar19 = (uint)DAT_71053064e0;
        DAT_71053064d8 = uVar20;
        if (DAT_71053064e0 != 0) {
          puVar17 = &DAT_71053064e2;
          do {
            DAT_71053064d8 = DAT_71053064d8 * 0x89 ^ uVar19;
            uVar19 = (uint)*puVar17;
            puVar17 = puVar17 + 1;
          } while (uVar19 != 0);
        }
        DAT_71053068e0 = param_1[0xc1];
        DAT_71053068e8 = (undefined4)param_1[0xc2];
        FUN_7101696040((uint *)&DAT_71053068ec,(ushort *)((long)param_1 + 0x61c));
      }
      DAT_7105306924 = *(undefined8 *)((long)param_1 + 0x64c);
      DAT_710530692c = *(undefined8 *)((long)param_1 + 0x654);
      DAT_7105306934 = *(undefined8 *)((long)param_1 + 0x65c);
      DAT_710530693c = *(undefined1 *)((long)param_1 + 0x664);
      DAT_7105306940 = param_1[0xcd];
      DAT_7105306948 = (undefined4)param_1[0xce];
      DAT_710530694c = *(undefined8 *)((long)param_1 + 0x674);
      DAT_7105306954 = *(undefined8 *)((long)param_1 + 0x67c);
      uVar15 = *(undefined8 *)((long)param_1 + 0x68c);
      DAT_710530696c = *(uint *)((long)param_1 + 0x694);
      DAT_710530695c._0_2_ = (undefined2)*(undefined8 *)((long)param_1 + 0x684);
      DAT_710530695c._2_6_ = (undefined6)((ulong)*(undefined8 *)((long)param_1 + 0x684) >> 0x10);
      _DAT_7105306964 = (undefined2)uVar15;
      DAT_7105306966 = (undefined1)((ulong)uVar15 >> 0x10);
      _DAT_7105306967 = (uint)((ulong)uVar15 >> 0x18);
      DAT_710530696b = (undefined1)((ulong)uVar15 >> 0x38);
      iVar9 = (int)param_1[0x35];
      iVar10 = (int)DAT_7105306478;
      goto joined_r0x00710232d70c;
    }
  }
  else {
    if (iVar10 == 0xf) {
      if ((int)param_1[0x35] != 0) {
        iVar23 = 2;
        goto LAB_710232d480;
      }
      goto LAB_710232d4ec;
    }
    if (iVar10 == 0xb) goto LAB_710232d3c8;
  }
  if ((int)DAT_7105306478 != 0x2030200) {
    local_78._0_4_ = (uint)local_78 & 0xff;
    _DAT_7105306967 = (uint)local_78;
    local_78 = (long ***)((ulong)ppplVar8 & 0xffff0000000000ff);
    DAT_710530695c._0_2_ = 0x100;
    DAT_710530696b = 0;
    DAT_710530696c = DAT_710530696c & 0xffffff00;
    DAT_7105306966 = 0;
    DAT_710530695c._2_6_ = 0;
    _DAT_7105306964 = 0;
  }
  FUN_71017a3910((undefined8 *)&DAT_7105306484);
  ram0x0071053055e4 = DAT_710530696c;
  unique0x10000133 =
       CONCAT17(DAT_710530696b,CONCAT43(_DAT_7105306967,CONCAT12(DAT_7105306966,_DAT_7105306964)));
  _DAT_71053055d4 = CONCAT62(DAT_710530695c._2_6_,(undefined2)DAT_710530695c);
  FUN_710178c070((uint *)&DAT_71053050f0);
  iVar23 = -1;
  iVar9 = (int)param_1[0x35];
  iVar10 = (int)DAT_7105306478;
joined_r0x00710232d70c:
  DAT_7105306478._0_4_ = iVar9;
  if ((int)DAT_7105306478 != 0) {
    FUN_71017a3910((undefined8 *)((long)param_1 + 0x1ac));
    _DAT_71053055d4 = *(undefined8 *)((long)param_1 + 0x684);
    register0x00004048 = *(undefined8 *)((long)param_1 + 0x68c);
    unique0x00048f00 = *(uint *)((long)param_1 + 0x694);
    iVar10 = (int)DAT_7105306478;
  }
  DAT_7105306478._0_4_ = iVar10;
  *(undefined4 *)(param_1 + 0xd3) = 0xffffffff;
  DAT_71053050f0 = (int)DAT_7105306478;
  if ((((int)DAT_7105306478 == 0x4020100) || ((int)DAT_7105306478 == 0x4020300)) ||
     ((int)DAT_7105306478 == 0x4020200)) {
    FUN_7102330450();
  }
  lVar11 = *param_1;
  uStack_b8 = 0x706f546c61636f4c;
  local_b0 = 0x6e656353;
  uVar18 = 0x4c;
  lVar24 = 9;
  local_ac = 0x65;
  uVar19 = uVar20;
  do {
    uVar19 = uVar19 * 0x89 ^ uVar18;
    uVar18 = (uint)*(byte *)((long)&local_c0 + lVar24);
    lVar24 = lVar24 + 1;
  } while (uVar18 != 0);
  _local_c0 = CONCAT44(0xd,uVar19);
  local_d0 = (byte ***)&PTR_FUN_71050b7e40;
  lVar24 = *(long *)(lVar11 + 0x38);
  if (lVar24 == 0) {
    local_70[0] = 0;
    local_78 = (long ***)0x0;
  }
  else {
    uVar16 = 0;
    while( true ) {
      pbVar22 = (byte *)(lVar24 + 0x10 + uVar16);
      bVar5 = *pbVar22;
      if (bVar5 == 0) break;
      local_70[uVar16] = bVar5;
      if (0x3e < (int)uVar16 + 1U) {
        uVar16 = (ulong)((int)uVar16 + 1);
        break;
      }
      bVar5 = pbVar22[1];
      if (bVar5 == 0) {
        uVar16 = uVar16 + 1;
        break;
      }
      local_70[uVar16 + 1] = bVar5;
      uVar16 = uVar16 + 2;
    }
    local_70[uVar16 & 0xffffffff] = 0;
    uVar19 = (uint)local_70[0];
    local_78 = (long ***)(uVar16 << 0x20);
    if (local_70[0] != 0) {
      pbVar22 = local_70;
      do {
        pbVar22 = pbVar22 + 1;
        uVar20 = uVar20 * 0x89 ^ uVar19;
        uVar19 = (uint)*pbVar22;
      } while (uVar19 != 0);
    }
    local_78 = (long ***)CONCAT44((int)uVar16,uVar20);
  }
  local_c8 = iVar23;
  FUN_71037266d0(*(long *)(lVar11 + 0x20),(undefined8 *)&local_c0,(long ****)&local_78,&local_d0,
                 in_x4,in_x5,in_x6,in_x7);
  *(undefined4 *)(lVar11 + 0x30) = 1;
  if (DAT_710593b990 == 0) {
    return;
  }
  puVar12 = *(undefined8 **)(DAT_710593b990 + 8);
  puVar12[2] = 0xffffffffffffffff;
  puVar12[3] = 0xffffffffffffffff;
  *puVar12 = 0xffffffffffffffff;
  puVar12[1] = 0xffffffffffffffff;
  return;
}

