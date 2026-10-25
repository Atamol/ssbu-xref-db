// addr:      7101e5c8a0
// offset:    0x1e5c8a0
// name:      FUN_7101e5c8a0
// mangled:   
// signature: undefined __cdecl FUN_7101e5c8a0(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101e5c8a0(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  long *plVar2;
  ulong uVar3;
  byte bVar4;
  char cVar5;
  undefined1 uVar6;
  int iVar7;
  char *pcVar8;
  int *piVar9;
  undefined4 uVar10;
  ushort *puVar11;
  uint uVar12;
  ulong uVar13;
  ushort uVar14;
  int iVar15;
  long lVar16;
  int iVar17;
  ushort *puVar18;
  long *plVar19;
  undefined8 *puVar20;
  undefined4 local_d8 [2];
  undefined **local_d0;
  long local_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  uint auStack_98 [2];
  char acStack_90 [64];
  
  if (*(int *)(param_1 + 0x1e4) == 0) {
    FUN_71003a4ca0(auStack_98,"cam_school%d_dialog_break_confirm",
                   (ulong)(*(byte *)(*(long *)(param_1 + 0x3b0) + 8) + 1),param_3,param_4,param_5,
                   param_6,param_7,param_8);
    FUN_710377a120(*(long *)(param_1 + 0x2e8) + 0x10,acStack_90,param_3,param_4,param_5,param_6,
                   param_7,param_8);
    lVar16 = *(long *)(*(long *)(*(long *)(param_1 + 0x2e8) + 0x18) + 0x10);
    iVar7 = 0;
    if (lVar16 != 0) {
      puVar11 = *(ushort **)(lVar16 + 0xd8);
      if ((puVar11 == (ushort *)0x0) || (uVar14 = *puVar11, uVar14 == 0)) {
        iVar7 = 0;
      }
      else {
        uVar12 = 0;
        iVar7 = 0;
        puVar18 = puVar11;
        do {
          if ((uVar14 | 1) == 0xf) {
            if (uVar14 == 0xe) {
              iVar15 = 0;
              iVar17 = (puVar18[3] >> 1) + 4;
            }
            else {
              iVar15 = 0;
              iVar17 = 3;
              if (uVar14 != 0xf) {
                iVar17 = 0;
              }
            }
          }
          else {
            iVar15 = 1;
            iVar17 = 1;
          }
          uVar12 = iVar17 + uVar12;
          puVar18 = puVar11 + uVar12;
          iVar7 = iVar15 + iVar7;
          uVar14 = *puVar18;
        } while (uVar14 != 0);
      }
    }
    *(int *)(param_1 + 0x2f8) = iVar7;
    FUN_7101e94ba0((long *)(param_1 + 0x2e8),0,param_3,param_4,param_5,param_6,param_7,param_8);
    puVar20 = *(undefined8 **)(param_1 + 0x2e0);
    plVar2 = (long *)*puVar20;
    (**(code **)(*plVar2 + 0x60))(plVar2,1);
    plVar2 = (long *)*puVar20;
    (**(code **)(*plVar2 + 0x70))(plVar2,1);
    pcVar8 = (char *)(*(long *)(param_1 + 0x2e0) + 8);
    bVar1 = *pcVar8 != '\0';
    FUN_710377a120((long)(pcVar8 + (ulong)bVar1 * 0x48 + 0x18),"cam_school_continue",param_3,param_4
                   ,param_5,param_6,param_7,param_8);
    FUN_710377a120((long)(pcVar8 + (ulong)bVar1 * 0x48 + 0x28),"cam_school_continue",param_3,param_4
                   ,param_5,param_6,param_7,param_8);
    FUN_710377a120((long)(pcVar8 + (ulong)bVar1 * 0x48 + 0x38),"cam_school_continue",param_3,param_4
                   ,param_5,param_6,param_7,param_8);
    pcVar8 = (char *)(*(long *)(param_1 + 0x2e0) + 8);
    cVar5 = *pcVar8;
    FUN_7103778300(0x3f800000,*(long *)(pcVar8 + (ulong)(cVar5 != '\0') * 0x48 + 0x10),0x710433a880)
    ;
    FUN_7103778300(0x3f800000,*(long *)(pcVar8 + (ulong)(cVar5 != '\0') * 0x48 + 0x10),0x710425fba5)
    ;
    FUN_7101e96fc0(param_1 + 0x2d8,'\0',param_3,param_4,param_5,param_6,param_7,param_8);
    pcVar8 = (char *)(*(long *)(param_1 + 0x2e0) + 8);
    bVar1 = *pcVar8 != '\x01';
    FUN_710377a120((long)(pcVar8 + (ulong)bVar1 * 0x48 + 0x18),"cam_school_break",param_3,param_4,
                   param_5,param_6,param_7,param_8);
    FUN_710377a120((long)(pcVar8 + (ulong)bVar1 * 0x48 + 0x28),"cam_school_break",param_3,param_4,
                   param_5,param_6,param_7,param_8);
    FUN_710377a120((long)(pcVar8 + (ulong)bVar1 * 0x48 + 0x38),"cam_school_break",param_3,param_4,
                   param_5,param_6,param_7,param_8);
    pcVar8 = (char *)(*(long *)(param_1 + 0x2e0) + 8);
    cVar5 = *pcVar8;
    FUN_7103778300(0x3f800000,*(long *)(pcVar8 + (ulong)(cVar5 != '\x01') * 0x48 + 0x10),
                   0x710433a880);
    FUN_7103778300(0x3f800000,*(long *)(pcVar8 + (ulong)(cVar5 != '\x01') * 0x48 + 0x10),
                   0x710425fba5);
    FUN_7101e96fc0(param_1 + 0x2d8,'\x01',param_3,param_4,param_5,param_6,param_7,param_8);
    FUN_7103771a80(*(long **)(param_1 + 0x2e0),
                   (uint)((char)(*(long **)(param_1 + 0x2e0))[1] != '\0'),1);
    lVar16 = *(long *)**(undefined8 **)(param_1 + 0x1f0);
    bVar4 = 1;
    goto LAB_7101e5cd84;
  }
  plVar19 = *(long **)(param_1 + 0x2e0);
  plVar2 = (long *)*plVar19;
  uVar12 = *(uint *)((long)plVar2 + 0x25c);
  if (uVar12 == 0xffffffff) {
    bVar1 = false;
    cVar5 = '\0';
  }
  else {
    if (1 < uVar12) goto LAB_7101e5cda8;
    bVar1 = true;
    cVar5 = (char)plVar19[(long)(int)uVar12 * 9 + 1];
  }
  uVar13 = (ulong)*(byte *)(*(long **)(param_1 + 0x3b0) + 1);
  if ((((uVar13 < 0xe) &&
       (lVar16 = *(long *)(**(long **)(param_1 + 0x3b0) + 8), *(char *)(lVar16 + 0x388) != '\0')) &&
      (*(byte *)(param_1 + 0x382) < 4)) &&
     ((lVar16 = *(long *)(lVar16 + uVar13 * 8 + 8), lVar16 != 0 &&
      (*(char *)(lVar16 + (ulong)*(byte *)(param_1 + 0x382) * 0x1c8 + 0x28) == '\x03')))) {
    lVar16 = *(long *)(DAT_710532f8d0 + 8);
    if ((ulong)(*(long *)(lVar16 + 0x48) - *(long *)(lVar16 + 0x40) >> 3) < 4) {
      uVar13 = 0;
      if (*(char *)(lVar16 + 0x191) == '\0') goto LAB_7101e5cc4c;
LAB_7101e5ccbc:
      local_c0 = 0x87650000000000;
      local_b0 = 0xffffffffffffffff;
      uStack_a8 = 0;
      local_d8[0] = 0;
      local_a0 = 0;
    }
    else {
      uVar13 = *(ulong *)(*(long *)(lVar16 + 0x40) + 0x18);
      if (*(char *)(lVar16 + 0x191) != '\0') goto LAB_7101e5ccbc;
LAB_7101e5cc4c:
      uVar3 = FUN_7103313f20(lVar16,uVar13,(long ****)&DAT_00000004,param_4,param_5,param_6,param_7,
                             param_8);
      if ((uVar3 & 1) == 0) goto LAB_7101e5ccbc;
      FUN_71024076d0(local_d8,uVar13);
      if (((local_c8 != 0) && (DAT_7106dd53a8 == '\x01')) && ((int)local_c0 == DAT_7106dd53ac)) {
        piVar9 = (int *)(local_c8 + 0x38);
        do {
          cVar5 = '\x01';
          bVar1 = (bool)ExclusiveMonitorPass(piVar9,0x10);
          if (bVar1) {
            *piVar9 = *piVar9 + -1;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
      }
    }
    local_d0 = &PTR_FUN_7104f73d50;
    local_c8 = 0;
    local_b8 = 0;
LAB_7101e5ccf0:
    uVar6 = 1;
LAB_7101e5ccf4:
    *(undefined1 *)(param_1 + 0x380) = uVar6;
    uVar12 = *(uint *)(param_1 + 0x1dc);
    if (0x12 < uVar12) {
LAB_7101e5cda8:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    uVar10 = 0xf;
LAB_7101e5cd0c:
    *(undefined4 *)(param_1 + (long)(int)uVar12 * 4 + 400) = uVar10;
  }
  else {
    if ((char)plVar2[0x50] != '\0') {
      (**(code **)(*plVar2 + 0x60))(plVar2,0);
      (**(code **)(*(long *)*plVar19 + 0x70))((long *)*plVar19,0);
      FUN_71037760f0(*(long *)**(undefined8 **)(param_1 + 0x1f0),0);
      uVar12 = *(uint *)(param_1 + 0x1dc);
      if (0x12 < uVar12) goto LAB_7101e5cda8;
      uVar10 = 0xc;
      goto LAB_7101e5cd0c;
    }
    if (bVar1) {
      if (cVar5 != '\x01') {
        if (cVar5 != '\0') goto LAB_7101e5cd10;
        goto LAB_7101e5ccf0;
      }
      uVar6 = 5;
      goto LAB_7101e5ccf4;
    }
  }
LAB_7101e5cd10:
  if (*(char *)(param_1 + 0x380) == '\0') {
    return;
  }
  if (((ulong)*(byte *)(param_1 + 0x382) < 4) &&
     (lVar16 = *(long *)(*(long *)(param_1 + 0x208) + (ulong)*(byte *)(param_1 + 0x382) * 8 + 0x48),
     lVar16 != 0)) {
    FUN_7103778300(0x3f800000,*(long *)(lVar16 + 8),0x710432a8bc);
  }
  puVar20 = *(undefined8 **)(param_1 + 0x2e0);
  plVar2 = (long *)*puVar20;
  (**(code **)(*plVar2 + 0x60))(plVar2,0);
  plVar2 = (long *)*puVar20;
  (**(code **)(*plVar2 + 0x70))(plVar2,0);
  lVar16 = *(long *)**(undefined8 **)(param_1 + 0x1f0);
  bVar4 = 0;
LAB_7101e5cd84:
  FUN_71037760f0(lVar16,bVar4);
  return;
}

