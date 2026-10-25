// addr:      7101a12850
// offset:    0x1a12850
// name:      FUN_7101a12850
// mangled:   
// signature: long * __cdecl FUN_7101a12850(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


long * FUN_7101a12850(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                     long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  long *plVar4;
  int iVar5;
  ulong uVar6;
  byte ****ppppbVar7;
  long ****pppplVar8;
  int *piVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  undefined4 uVar13;
  long *plVar14;
  long *plVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  undefined4 local_80 [2];
  undefined **local_78;
  long local_70;
  int local_68;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  plVar4 = *(long **)(DAT_710532f7c8 + 8);
  if (*(int *)(param_1 + 0x13c) == 0) {
    FUN_71032e5a30((long)plVar4,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    if (*(int *)(param_1 + 0x16c) == 0x12) {
      FUN_7103775dc0((long *)**(undefined8 **)(param_1 + 0x1a0),9,(long ****)0x50000a,param_4,
                     param_5,param_6,param_7,param_8);
      plVar4 = (long *)**(undefined8 **)(param_1 + 0x198);
      pppplVar8 = (long ****)0x50000c;
      iVar5 = 9;
    }
    else {
      FUN_7103775dc0((long *)**(undefined8 **)(param_1 + 0x1a0),0,(long ****)&DAT_00001000,param_4,
                     param_5,param_6,param_7,param_8);
      plVar4 = (long *)**(undefined8 **)(param_1 + 0x198);
      pppplVar8 = (long ****)0x1002;
      iVar5 = 0;
    }
    FUN_7103775dc0(plVar4,iVar5,pppplVar8,param_4,param_5,param_6,param_7,param_8);
    lVar10 = *(long *)**(undefined8 **)(param_1 + 0x1a8);
    if ((lVar10 != 0) && (*(long *)(lVar10 + 0x458) != 0)) {
      FUN_7103775dc0((long *)**(undefined8 **)(param_1 + 0x1a8),0,(long ****)0x1001,param_4,param_5,
                     param_6,param_7,param_8);
    }
    FUN_7103778300(0x3f800000,*(long *)(**(long **)(param_1 + 0x198) + 0x10),0x7104421055);
    lVar10 = *(long *)**(long **)(param_1 + 0x1a8);
    if ((lVar10 != 0) && (*(long *)(lVar10 + 0x458) != 0)) {
      FUN_7103778300(0x3f800000,((long *)**(long **)(param_1 + 0x1a8))[2],0x7104421055);
    }
    FUN_710377b010(0,param_1 + 0xdf8);
    plVar4 = (long *)FUN_71019f1550(*(long **)(param_1 + 0xdd0),(ulong)*(byte *)(param_1 + 0xf85));
    if ((*(int *)(param_1 + 0x16c) == 5) &&
       (((*(char *)(param_1 + 0xcbc) != '\0' || (*(int *)(param_1 + 0xcb8) != 0)) &&
        (*(char *)(param_1 + 0xf8a) != '\0')))) {
      FUN_7103778300(0x3f800000,*(long *)(**(long **)(param_1 + 0x1a0) + 0x10),0x71043ef055);
      FUN_7103778300(0x3f800000,*(long *)(**(long **)(param_1 + 0x198) + 0x10),0x71043ef055);
      plVar4 = (long *)FUN_71032d0460(*(long *)(param_1 + 0xdf0));
    }
    if (((*(char *)(param_1 + 0xcbc) != '\0') || (*(int *)(param_1 + 0xcb8) != 0)) &&
       (*(char *)(param_1 + 0xf8a) != '\0')) {
      lVar12 = *(long *)(param_1 + 0x240);
      for (lVar10 = *(long *)(param_1 + 0x238); lVar10 != lVar12; lVar10 = lVar10 + 0x10) {
        lVar17 = *(long *)(lVar10 + 8);
        lVar18 = *(long *)(lVar17 + 0x20);
        *(undefined1 *)(lVar17 + 0x36) = 0;
        plVar4 = *(long **)(lVar18 + 0x100);
        plVar4 = (long *)(**(code **)(*plVar4 + 0x60))(plVar4,0);
        *(undefined1 *)(lVar18 + 0x162) = 0;
        bVar2 = false;
        if ((*(char *)(lVar17 + 0x35) != '\0') && (bVar2 = false, *(char *)(lVar17 + 0x36) != '\0'))
        {
          bVar2 = *(char *)(lVar17 + 0x37) == '\0';
        }
        lVar17 = *(long *)(lVar17 + 0x20);
        lVar18 = *(long *)(*(long *)(lVar17 + 0x100) + 0x38);
        if (lVar18 != 0) {
          *(byte *)(lVar18 + 0x58) = *(byte *)(lVar18 + 0x58) & 0xfe | bVar2;
        }
        *(bool *)(lVar17 + 0x163) = bVar2;
      }
    }
    if (*(long *)(param_1 + 600) == *(long *)(param_1 + 0x250)) {
LAB_7101a12f48:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    if ((*(char *)(param_1 + 0xf8d) != '\0') &&
       (lVar10 = *(long *)(*(long *)(param_1 + 0x250) + 8), *(char *)(lVar10 + 0x6bd) != '\0')) {
      plVar4 = *(long **)(param_1 + 0xdd0);
      plVar11 = plVar4 + 4;
      plVar15 = (long *)*plVar11;
      if (plVar15 != (long *)0x0) {
        uVar6 = *(ulong *)(lVar10 + 0x200) & 0xff0000ffffffffff;
        plVar14 = plVar11;
        do {
          bVar2 = (plVar15[4] & 0xff0000ffffffffffU) < uVar6;
          if (!bVar2) {
            plVar14 = plVar15;
          }
          plVar15 = (long *)plVar15[bVar2];
        } while (plVar15 != (long *)0x0);
        if ((plVar14 != plVar11) && ((plVar14[4] & 0xff0000ffffffffffU) <= uVar6)) {
          iVar5 = (int)plVar14[5];
          uVar6 = (ulong)iVar5;
          if (iVar5 != -1) {
            uVar16 = (plVar4[1] - *plVar4 >> 4) * 0x2e8ba2e8ba2e8ba3;
            if (iVar5 < (int)uVar16) {
              if (uVar16 < uVar6 || uVar16 - uVar6 == 0) goto LAB_7101a12f48;
              uVar6 = (ulong)(*(char *)(*plVar4 + uVar6 * 0xb0 + 0xa0) != '\0');
            }
            else {
              uVar6 = 0;
            }
            uVar3 = FUN_7101a1c9f0(param_1,1,uVar6,param_4,param_5,param_6,param_7,param_8);
            plVar4 = (long *)(ulong)uVar3;
          }
        }
      }
    }
    goto LAB_7101a12e88;
  }
  if (((*(char *)((long)plVar4 + 0x6a) == '\0') || (*(char *)((long)plVar4 + 0x6b) != '\0')) ||
     (*(char *)(*(long *)(param_1 + 0xdd0) + 0x256) != '\0')) goto LAB_7101a12e88;
  iVar5 = *(int *)(param_1 + 0x16c);
  if ((iVar5 == 5) && ((*(char *)(param_1 + 0xcbc) != '\0' || (*(int *)(param_1 + 0xcb8) != 0)))) {
LAB_7101a12dcc:
    if (((*(char *)(param_1 + 0xcbc) == '\0') && (*(int *)(param_1 + 0xcb8) == 0)) ||
       (*(char *)(param_1 + 0xf8a) == '\0')) {
      if (0x12 < *(uint *)(param_1 + 0x134)) goto LAB_7101a12f54;
      lVar10 = param_1 + (long)(int)*(uint *)(param_1 + 0x134) * 4;
      uVar13 = 10;
    }
    else {
      if (0x12 < *(uint *)(param_1 + 0x134)) {
LAB_7101a12f54:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar10 = param_1 + (long)(int)*(uint *)(param_1 + 0x134) * 4;
      uVar13 = 8;
    }
  }
  else {
    if ((*(int *)(param_1 + 0xf40) != -1) || (*(int *)(param_1 + 0xf44) != -1)) {
      FUN_710373b540(param_1 + 0xf18,0);
      *(undefined4 *)(param_1 + 0xf18) = 0;
      FUN_71039602c0(param_1 + 0xf20);
      *(undefined ***)(param_1 + 0xf20) = &PTR_FUN_7104f73d50;
      if (((*(long *)(param_1 + 0xf28) != 0) && (DAT_7106dd53a8 == '\x01')) &&
         (*(int *)(param_1 + 0xf30) == DAT_7106dd53ac)) {
        piVar9 = (int *)(*(long *)(param_1 + 0xf28) + 0x38);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar2) {
            *piVar9 = *piVar9 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      *(undefined8 *)(param_1 + 0xf30) = 0;
      *(undefined8 *)(param_1 + 0xf38) = 0;
      *(undefined8 *)(param_1 + 0xf20) = 0;
      *(undefined8 *)(param_1 + 0xf28) = 0;
      iVar5 = *(int *)(param_1 + 0x16c);
      *(undefined ***)(param_1 + 0xf20) = &PTR_FUN_7104f73d30;
      *(undefined8 *)(param_1 + 0xf28) = 0;
      *(undefined4 *)(param_1 + 0xf30) = 0;
      *(undefined4 *)(param_1 + 0xf34) = 0x876500;
      *(undefined1 *)(param_1 + 0xf38) = 0;
      *(undefined8 *)(param_1 + 0xf40) = 0xffffffffffffffff;
      *(undefined8 *)(param_1 + 0xf48) = 0;
      *(undefined4 *)(param_1 + 0xf54) = 0;
    }
    ppppbVar7 = (byte ****)(ulong)*(byte *)(param_1 + 0x169);
    pppplVar8 = (long ****)(ulong)*(byte *)(param_1 + 0x16a);
    uVar6 = (ulong)*(byte *)(param_1 + 0x158);
    plVar4 = (long *)FUN_7101a11b40(local_80,iVar5,*(byte *)(param_1 + 0x158),ppppbVar7,pppplVar8,
                                    param_6,param_7,param_8);
    *(undefined4 *)(param_1 + 0xf18) = local_80[0];
    if (local_70 == 0) {
      if (((*(long *)(param_1 + 0xf28) != 0) && (DAT_7106dd53a8 == '\x01')) &&
         (*(int *)(param_1 + 0xf30) == DAT_7106dd53ac)) {
        piVar9 = (int *)(*(long *)(param_1 + 0xf28) + 0x38);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar2) {
            *piVar9 = *piVar9 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
      *(undefined8 *)(param_1 + 0xf28) = 0;
LAB_7101a12d58:
      *(undefined1 *)(param_1 + 0xf38) = 0;
      *(undefined8 *)(param_1 + 0xf40) = local_58;
      *(undefined8 *)(param_1 + 0xf48) = uStack_50;
      *(undefined8 *)(param_1 + 0xf50) = local_48;
      if (local_70 != 0) goto LAB_7101a12d80;
    }
    else {
      if (*(int *)(param_1 + 0xf34) == 0x876500) {
        if (*(int *)(param_1 + 0xf30) == DAT_7106dd53ac) {
          if ((*(long *)(param_1 + 0xf28) != 0) && (DAT_7106dd53a8 == '\x01')) {
            piVar9 = (int *)(*(long *)(param_1 + 0xf28) + 0x38);
            do {
              cVar1 = '\x01';
              bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
              if (bVar2) {
                *piVar9 = *piVar9 + -1;
                cVar1 = ExclusiveMonitorsStatus();
              }
            } while (cVar1 != '\0');
          }
          *(undefined8 *)(param_1 + 0xf28) = 0;
          *(undefined1 *)(param_1 + 0xf38) = 0;
        }
        else {
          *(int *)(param_1 + 0xf30) = DAT_7106dd53ac;
        }
        *(long *)(param_1 + 0xf28) = local_70;
        piVar9 = (int *)(local_70 + 0x38);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar2) {
            *piVar9 = *piVar9 + 1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
        goto LAB_7101a12d58;
      }
      *(undefined8 *)(param_1 + 0xf40) = local_58;
      *(undefined8 *)(param_1 + 0xf48) = uStack_50;
      *(undefined8 *)(param_1 + 0xf50) = local_48;
LAB_7101a12d80:
      if ((DAT_7106dd53a8 == '\x01') && (local_68 == DAT_7106dd53ac)) {
        piVar9 = (int *)(local_70 + 0x38);
        do {
          cVar1 = '\x01';
          bVar2 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar2) {
            *piVar9 = *piVar9 + -1;
            cVar1 = ExclusiveMonitorsStatus();
          }
        } while (cVar1 != '\0');
      }
    }
    lVar10 = DAT_710532f820;
    local_78 = &PTR_FUN_7104f73d50;
    if (*(int *)(param_1 + 0x16c) == 0x12) {
      if (*(char *)(param_1 + 0xf90) != '\0') {
        bVar2 = FUN_7103291150(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x1c8),0x58ffff1f1e0aa05a);
        plVar4 = (long *)(ulong)bVar2;
        if (bVar2) {
          FUN_71032edf70(*(uint **)(lVar10 + 0x10),0x58ffff1f1e0aa05a);
          plVar4 = (long *)FUN_71032f1bb0(*(long *)(lVar10 + 8),*(uint **)(lVar10 + 0x10),uVar6,
                                          ppppbVar7,pppplVar8,param_6,param_7,param_8);
        }
        else {
          *(undefined4 *)(*(long *)(lVar10 + 8) + 0x118) = 0;
        }
      }
    }
    else if (*(int *)(param_1 + 0x16c) == 5) goto LAB_7101a12dcc;
    if (0x12 < *(uint *)(param_1 + 0x134)) goto LAB_7101a12f54;
    lVar10 = param_1 + (long)(int)*(uint *)(param_1 + 0x134) * 4;
    uVar13 = 4;
  }
  *(undefined4 *)(lVar10 + 0xe8) = uVar13;
LAB_7101a12e88:
  iVar5 = *(int *)(param_1 + 0xf70);
  if ((iVar5 != -1) && (*(int *)(param_1 + 0x13c) == 6)) {
    if ((ulong)(*(long *)(param_1 + 0x240) - *(long *)(param_1 + 0x238) >> 4) <= (ulong)(long)iVar5)
    {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    lVar12 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x238) + (long)iVar5 * 0x10 + 8) +
                                0x10) + 8);
    lVar10 = 0x48c;
    if (*(int *)(lVar12 + 0x484) != 2) {
      lVar10 = 0x488;
    }
    uVar3 = *(uint *)(lVar12 + lVar10);
    if (uVar3 != 0xffffffff) {
      plVar4 = (long *)FUN_710175dfc0(1.0,1.0,*(long *)(DAT_71052c5120 + 8),uVar3,0x19966c38f0,0,1,0
                                      ,0,0);
    }
    *(undefined4 *)(param_1 + 0xf70) = 0xffffffff;
  }
  return plVar4;
}

