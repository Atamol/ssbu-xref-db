// addr:      710023dbc0
// offset:    0x23dbc0
// name:      FUN_710023dbc0
// mangled:   
// signature: undefined __cdecl FUN_710023dbc0(long param_1)


/* WARNING: Removing unreachable block (ram,0x00710023e14c) */
/* WARNING: Removing unreachable block (ram,0x00710023e138) */

void FUN_710023dbc0(long param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined2 uVar4;
  char cVar5;
  bool bVar6;
  ushort uVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  long *plVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long *plVar17;
  undefined4 auStack_250 [6];
  ulong local_238;
  undefined **local_230;
  undefined1 local_228 [16];
  undefined1 *local_218;
  undefined8 local_210;
  undefined4 local_204;
  undefined4 auStack_200 [6];
  undefined8 auStack_1e8 [14];
  undefined8 uStack_178;
  char *local_170;
  
  puVar13 = auStack_250;
  plVar11 = &DAT_71052af1a0;
  if (DAT_71052af1d8 == '\0') {
LAB_710023dc34:
    lVar14 = 0;
    if (*plVar11 != 0) {
      lVar14 = *(long *)(*plVar11 + 0x10);
    }
    lVar14 = FUN_71001b52a0(lVar14 + 0x88);
    if (lVar14 != 0) goto LAB_710023dc4c;
LAB_710023dce0:
    plVar11 = &DAT_71052af1a0;
    if (DAT_71052af1d8 == '\0') {
LAB_710023dd28:
      lVar14 = 0;
      if (*plVar11 != 0) {
        lVar14 = *(long *)(*plVar11 + 0x10);
      }
    }
    else {
      puVar10 = (uint *)FUN_7101717960(DAT_71052af1d0);
      uVar9 = *puVar10;
      if (uVar9 == 0) goto LAB_710023dd28;
      if ((ulong)uVar9 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
        plVar11 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar9 * 8) + 0x88);
        goto LAB_710023dd28;
      }
      FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
      lVar14 = 0;
    }
    FUN_71001b2f70(lVar14 + 0x88,param_1 + 0xd8);
    uVar4 = *(undefined2 *)(param_1 + 0x100);
    plVar11 = &DAT_71052af1a0;
    if (DAT_71052af1d8 != '\0') {
      puVar10 = (uint *)FUN_7101717960(DAT_71052af1d0);
      uVar9 = *puVar10;
      if (uVar9 != 0) {
        if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar9) goto LAB_710023e1cc;
        plVar11 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar9 * 8) + 0x88);
      }
    }
    *(undefined2 *)(*(long *)(*plVar11 + 0x10) + 0xb0) = uVar4;
    lVar14 = param_1 + 0x108;
    if (DAT_71052af1d8 == '\0') {
LAB_710023de3c:
      lVar16 = 0;
      lVar15 = DAT_71052af1a0;
      if (DAT_71052af1a0 != 0) {
LAB_710023de44:
        lVar16 = *(long *)(lVar15 + 0x10);
      }
    }
    else {
      puVar10 = (uint *)FUN_7101717960(DAT_71052af1d0);
      uVar9 = *puVar10;
      if (uVar9 == 0) goto LAB_710023de3c;
      if ((ulong)uVar9 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
        lVar15 = *(long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar9 * 8) + 0x88);
        if (lVar15 == 0) {
          lVar16 = 0;
          goto LAB_710023de68;
        }
        goto LAB_710023de44;
      }
      FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
      lVar16 = 0;
    }
LAB_710023de68:
    lVar16 = lVar16 + 0xb8;
LAB_710023de70:
    FUN_71001b2f70(lVar16,lVar14);
  }
  else {
    puVar10 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar9 = *puVar10;
    if (uVar9 == 0) goto LAB_710023dc34;
    if ((ulong)uVar9 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar11 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar9 * 8) + 0x88);
      goto LAB_710023dc34;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
    lVar14 = FUN_71001b52a0(0x88);
    if (lVar14 == 0) goto LAB_710023dce0;
LAB_710023dc4c:
    if (DAT_71052b5940 != '\0') {
      plVar11 = &DAT_71052af1a0;
      if (DAT_71052af1d8 == '\0') {
LAB_710023dca0:
        lVar14 = 0;
        if (*plVar11 != 0) {
          lVar14 = *(long *)(*plVar11 + 0x10);
        }
      }
      else {
        puVar10 = (uint *)FUN_7101717960(DAT_71052af1d0);
        uVar9 = *puVar10;
        if (uVar9 == 0) goto LAB_710023dca0;
        if ((ulong)uVar9 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
          plVar11 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar9 * 8) + 0x88);
          goto LAB_710023dca0;
        }
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
        lVar14 = 0;
      }
      lVar16 = param_1 + 0xd8;
      lVar14 = lVar14 + 0x88;
      goto LAB_710023de70;
    }
  }
  uVar7 = FUN_7100230720(0,DAT_7104f57910);
  FUN_71001b6080(&uStack_178);
  lVar14 = FUN_71001b0ab0((long)&uStack_178,"prudp:/address=");
  lVar14 = FUN_71001b5d60(lVar14,param_1 + 0xd8);
  lVar14 = FUN_71001b0ab0(lVar14,";port=");
  lVar14 = FUN_71001b6470(lVar14,(ulong)((uint)*(ushort *)(param_1 + 0x100) + (uint)uVar7));
  lVar14 = FUN_71001b0ab0(lVar14,";stream=");
  lVar14 = FUN_71001b6470(lVar14,10);
  lVar14 = FUN_71001b0ab0(lVar14,";sid=");
  lVar14 = FUN_71001b6470(lVar14,1);
  lVar14 = FUN_71001b0ab0(lVar14,";type=");
  FUN_71001b6470(lVar14,2);
  bVar6 = FUN_71001b4e00(*(char **)(param_1 + 0x120),"");
  if (!bVar6) {
    lVar14 = FUN_71001b0ab0((long)&uStack_178,";Uri=");
    FUN_71001b5d60(lVar14,param_1 + 0x108);
  }
  FUN_71001f1dc0(auStack_1e8,local_170);
  plVar11 = FUN_710023e270(param_1,1);
  if (plVar11 == (long *)0x0) {
    local_204 = 0x8001000d;
    FUN_71001b4200(auStack_200,&local_204);
    puVar13 = auStack_200;
  }
  else {
    uVar4 = *(undefined2 *)((long)plVar11 + 0x4c);
    plVar17 = &DAT_71052af1a0;
    if (DAT_71052af1d8 != '\0') {
      puVar10 = (uint *)FUN_7101717960(DAT_71052af1d0);
      uVar9 = *puVar10;
      if (uVar9 != 0) {
        if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar9) {
LAB_710023e1cc:
          FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0)
          ;
          return;
        }
        plVar17 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar9 * 8) + 0x88);
      }
    }
    *(undefined2 *)(*(long *)(*plVar17 + 0x10) + 0x80) = uVar4;
    *(long **)(*(long *)(*(long *)(param_1 + 0x2f0) + 0xc0) + 0x70) = plVar11;
    (**(code **)(*plVar11 + 0x28))(plVar11);
    lVar14 = *(long *)(*(long *)(param_1 + 0x2f0) + 0xc0);
    local_218 = local_228;
    local_228[0] = 0;
    local_210 = 0x10;
    local_230 = &PTR_FUN_710509cc08;
    FUN_71001b47e0((long)&local_230,*(char **)(param_1 + 0xd0),-1);
    FUN_71001b2f70(lVar14 + 0x48,(long)&local_230);
    local_230 = &PTR_FUN_710509cc08;
    FUN_71001b4910((long)&local_230);
    FUN_71001b2f70(*(long *)(*(long *)(param_1 + 0x2f0) + 0xc0) + 0x20,param_1 + 0xa8);
    plVar11 = (long *)(param_1 + 0x138);
    *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x2f0) + 0xc0) + 0x90) = 0;
    FUN_71001d1590(plVar11);
    lVar14 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 0x2f0) + 0xc0) + 0x70) + 0x30);
    local_238 = *(ulong *)(param_1 + 0x4a8);
    iVar8 = FUN_71001b7590(&local_238);
    uVar9 = FUN_710023e630(lVar14,plVar11,(long)auStack_1e8,param_1 + 0x498,iVar8,
                           (long *)(param_1 + 0x490));
    if ((uVar9 & 1) != 0) {
      piVar2 = (int *)(*(long *)(param_1 + 0x490) + 8);
      iVar8 = *piVar2;
      if (iVar8 != *piVar2) {
        ClearExclusiveLocal();
        goto LAB_710023e114;
      }
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar6) {
        *piVar2 = *piVar2 + 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
      while (cVar5 != '\0') {
LAB_710023e114:
        while (iVar3 = *piVar2, iVar3 != iVar8) {
          ClearExclusiveLocal();
          iVar8 = iVar3;
        }
        iVar1 = iVar8 + 1;
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        iVar8 = iVar3;
        if (bVar6) {
          *piVar2 = iVar1;
          cVar5 = ExclusiveMonitorsStatus();
        }
      }
      FUN_71001d6410(param_1,2);
      puVar12 = FUN_71001af850(0x20);
      if (puVar12 != (undefined8 *)0x0) {
        puVar12[2] = 0;
        puVar12[3] = &DAT_71044114cc;
        *puVar12 = &PTR_FUN_7104f56e28;
        puVar12[1] = FUN_710023e750;
      }
      FUN_71001d4200(param_1,(long)plVar11,puVar12);
      goto LAB_710023e1a0;
    }
    local_204 = 0x8001000d;
    FUN_71001b4200(auStack_250,&local_204);
  }
  FUN_710023d9c0(param_1,puVar13);
LAB_710023e1a0:
  FUN_71001f2080(auStack_1e8);
  FUN_71001b60c0(&uStack_178);
  return;
}

