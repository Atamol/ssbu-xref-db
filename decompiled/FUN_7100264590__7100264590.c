// addr:      7100264590
// offset:    0x264590
// name:      FUN_7100264590
// mangled:   
// signature: undefined __cdecl FUN_7100264590(undefined8 * param_1, long * param_2, long * param_3, undefined8 param_4, long * param_5, undefined8 param_6, undefined8 param_7)


/* WARNING: Removing unreachable block (ram,0x007100264984) */
/* WARNING: Removing unreachable block (ram,0x007100264998) */

void FUN_7100264590(undefined8 *param_1,long *param_2,long *param_3,undefined8 param_4,long *param_5
                   ,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  bool bVar9;
  ulong uVar10;
  undefined8 uVar11;
  long *plVar12;
  uint *puVar13;
  undefined4 uVar14;
  undefined8 *puVar15;
  code *pcVar16;
  long lVar17;
  int iVar18;
  long *plVar19;
  undefined8 *local_c8;
  undefined8 *local_c0;
  undefined8 *local_b8;
  int local_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 auStack_98 [3];
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  bVar9 = FUN_71001ccd00(param_3);
  if (!bVar9) {
    uVar14 = 0x8001000d;
    goto LAB_7100264a0c;
  }
  uVar10 = (**(code **)(*param_2 + 0x48))(param_2,param_3);
  if ((uVar10 & 1) == 0) {
    local_80 = CONCAT44(local_80._4_4_,0x80010004);
    FUN_71001b4200((undefined4 *)auStack_98,(undefined4 *)&local_80);
    FUN_71001d0c90((long)param_3,auStack_98);
    local_80 = CONCAT71(local_80._1_7_,1);
    FUN_71001b4220((undefined4 *)param_1,(char *)&local_80);
    return;
  }
  uVar11 = (**(code **)(*param_2 + 0x388))(param_2);
  if (param_3[0x17] == 0) {
    plVar12 = FUN_71001af850(0x648);
  }
  else {
    uVar11 = *(undefined8 *)(param_3[0x17] + 0x10);
    plVar12 = FUN_71001af850(0x648);
  }
  if (plVar12 != (long *)0x0) {
    FUN_71001d38d0(plVar12,2);
    plVar12[0x15] = 0;
    plVar12[0x16] = 0;
    *(undefined1 *)(plVar12 + 0x17) = 1;
    *(undefined4 *)((long)plVar12 + 0xbc) = 0;
    *(undefined4 *)(plVar12 + 0x14) = 0;
    *plVar12 = (long)&PTR_FUN_7104f5f290;
    FUN_710022e6b0(plVar12 + 0x18,0);
    *(undefined1 *)(plVar12 + 0x32) = 0;
    plVar12[0x30] = 0;
    plVar12[0x31] = (long)&PTR_FUN_710509cc08;
    plVar12[0x34] = (long)(plVar12 + 0x32);
    plVar12[0x35] = 0x10;
    FUN_71001b47e0((long)(plVar12 + 0x31),"",-1);
    *(undefined4 *)(plVar12 + 0x36) = 0;
    plVar12[0x37] = 0;
    plVar12[0x38] = 0;
    plVar12[0x39] = 0;
    plVar12[0x3a] = 0;
    memset(plVar12 + 0x3b,0,0x200);
    memset(plVar12 + 0x7b,0,0x200);
    plVar12[0xbb] = 0;
    plVar12[0xbc] = 0;
    plVar12[0xbd] = 0;
    plVar12[0xbe] = 0;
    plVar12[0xbf] = 0;
    plVar12[0xc0] = 0;
    plVar12[0xc1] = 0;
    plVar12[0xc2] = 0;
    plVar12[0xc3] = 0;
    *(undefined1 *)(plVar12 + 0xc4) = 0;
    plVar12[0xc5] = 0;
    *(undefined1 *)(plVar12 + 0xc6) = 0;
    plVar12[199] = 0;
    *(undefined1 *)(plVar12 + 200) = 0;
  }
  lVar7 = param_3[3];
  lVar8 = param_2[0x18];
  cVar5 = *(char *)((long)param_2 + 0xc4);
  local_c8 = (undefined8 *)0x0;
  local_c0 = (undefined8 *)0x0;
  local_b8 = (undefined8 *)0x0;
  lVar17 = param_5[1] - *param_5;
  if (lVar17 != 0) {
    if ((ulong)(lVar17 >> 3) >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    local_c8 = FUN_71001b1820(lVar17);
    local_b8 = local_c8 + (lVar17 >> 3);
    puVar2 = (undefined8 *)*param_5;
    puVar3 = (undefined8 *)param_5[1];
    local_c0 = local_c8;
    if (puVar2 != puVar3) {
      uVar10 = (long)puVar3 + (-8 - (long)puVar2);
      puVar15 = puVar2;
      if (((uint)uVar10 >> 3 & 1) == 0) {
        puVar15 = puVar2 + 1;
        *local_c8 = *puVar2;
        local_c0 = local_c8 + 1;
      }
      if (7 < uVar10) {
        do {
          *local_c0 = *puVar15;
          local_c0[1] = puVar15[1];
          puVar15 = puVar15 + 2;
          local_c0 = local_c0 + 2;
        } while (puVar15 != puVar3);
      }
    }
  }
  (**(code **)(*plVar12 + 0x68))
            (&local_b0,plVar12,(int)lVar7,param_2 + 0x17,param_2 + 4,(int)lVar8,cVar5 != '\0',uVar11
             ,param_4,&local_c8,param_6,param_7);
  if (local_c8 != (undefined8 *)0x0) {
    local_c0 = local_c8;
    FUN_71001b1870((long)local_c8);
  }
  pcVar16 = FUN_710170d030;
  if (local_b0 < 0) {
    pcVar16 = (code *)0x0;
  }
  if (pcVar16 == (code *)0x0) {
    local_78 = local_a8;
    uStack_70 = local_a0;
    FUN_71001d0f00(param_3,3,&local_80,1);
    plVar19 = plVar12 + 1;
    iVar18 = (int)*plVar19;
    iVar6 = (int)*plVar19 + -1;
    if (iVar18 == (int)*plVar19) {
      cVar5 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(plVar19,0x10);
      if (bVar9) {
        *(int *)plVar19 = iVar6;
        cVar5 = ExclusiveMonitorsStatus();
      }
      while (cVar5 != '\0') {
LAB_7100264960:
        while( true ) {
          iVar1 = (int)*plVar19;
          iVar6 = iVar18 + -1;
          if (iVar1 == iVar18) break;
          ClearExclusiveLocal();
          iVar18 = iVar1;
        }
        cVar5 = '\x01';
        bVar9 = (bool)ExclusiveMonitorPass(plVar19,0x10);
        iVar18 = iVar1;
        if (bVar9) {
          *(int *)plVar19 = iVar6;
          cVar5 = ExclusiveMonitorsStatus();
        }
      }
      if ((iVar6 == 0) && (*(char *)((long)plVar12 + 0xc) == '\0')) {
        *(undefined1 *)((long)plVar12 + 0xc) = 1;
        (**(code **)(*plVar12 + 8))(plVar12);
      }
      param_1[2] = local_a0;
      *param_1 = CONCAT44(uStack_ac,local_b0);
      param_1[1] = local_a8;
      return;
    }
    ClearExclusiveLocal();
    goto LAB_7100264960;
  }
  plVar19 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_710026487c:
    if ((*plVar19 == 0) || (lVar17 = *(long *)(*plVar19 + 0x10), lVar17 == 0)) goto LAB_71002649f8;
    lVar17 = *(long *)(lVar17 + 0x10);
  }
  else {
    puVar13 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar4 = *puVar13;
    if (uVar4 == 0) goto LAB_710026487c;
    if ((ulong)uVar4 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar19 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar4 * 8) + 0x20);
      goto LAB_710026487c;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_71002649f8:
    lVar17 = 0;
  }
  FUN_71001ccdf0(lVar17,(long)plVar12,0);
  uVar14 = 0x10001;
LAB_7100264a0c:
  local_80 = CONCAT44(local_80._4_4_,uVar14);
  FUN_71001b4200((undefined4 *)param_1,(undefined4 *)&local_80);
  return;
}

