// addr:      71013bebe0
// offset:    0x13bebe0
// name:      FUN_71013bebe0
// mangled:   
// signature: undefined __cdecl FUN_71013bebe0(long * param_1, undefined8 param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71013bebe0(long *param_1,undefined8 param_2,undefined **param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  long *plVar5;
  int iVar6;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  int *piVar10;
  undefined4 uVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  long lVar15;
  undefined4 auStack_100 [4];
  long local_f0;
  int local_e8;
  undefined4 auStack_c0 [4];
  long local_b0;
  int local_a8;
  undefined4 auStack_80 [4];
  long local_70;
  int local_68;
  undefined **local_40;
  long *local_38;
  
  if (((DAT_71052b92e0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_71052b92e0), iVar6 != 0)) {
    __cxa_guard_release(&DAT_71052b92e0);
  }
  if ((char)DAT_71052b92f0 != '\0') {
    if (((DAT_71053144d8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_71053144d8), iVar6 != 0)) {
      FUN_7101764000();
      param_3 = &PTR_LOOP_7104f17000;
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    if (DAT_71052c518a != '\0') {
      if (((DAT_71052b92e0 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_71052b92e0), iVar6 != 0))
      {
        __cxa_guard_release(&DAT_71052b92e0);
      }
      if ((int)DAT_71052b92e8 != 0) {
        DAT_71052b92f0._3_1_ = 1;
      }
      lVar9 = param_1[0x37];
      param_1[5] = 0;
      param_1[6] = 0;
      *(undefined8 *)((long)param_1 + 0x1ac) = 0;
      *(undefined8 *)((long)param_1 + 0x1a4) = 0;
      *(undefined8 *)((long)param_1 + 0x19c) = 0;
      *(undefined8 *)((long)param_1 + 0x194) = 0;
      *(undefined8 *)((long)param_1 + 0x18c) = 0;
      *(undefined8 *)((long)param_1 + 0x184) = 0;
      *(undefined8 *)((long)param_1 + 0x17c) = 0;
      *(undefined8 *)((long)param_1 + 0x16c) = 0;
      *(undefined8 *)((long)param_1 + 0x174) = 0;
      *(undefined4 *)(param_1 + 0x37) = 0xffffffff;
      *(undefined4 *)((long)param_1 + 0x1b4) = 0;
      *(undefined8 *)((long)param_1 + 0x1bc) = 0xffffffff00000000;
      *(undefined1 *)((long)param_1 + 0x1c4) = 0;
      *(int *)(param_1 + 0x2d) = (int)lVar9;
      return;
    }
  }
  if (param_1[0x3d] == 0) {
    if (*(uint *)((long)param_1 + 0x1b4) < 0x13) {
      *(undefined4 *)((long)param_1 + (long)(int)*(uint *)((long)param_1 + 0x1b4) * 4 + 0x168) = 0;
      return;
    }
    goto LAB_71013bf28c;
  }
  if ((*(int *)((long)param_1 + 0x1bc) == 0) &&
     (FUN_71037760f0(*(long *)**(undefined8 **)(*(long *)(param_1[0x3d] + 0x80) + 8),1),
     lVar9 = DAT_710532f7f0, DAT_710532f7f0 != 0)) {
    lVar15 = *(long *)(*(long *)(*(long *)(DAT_710532f7f0 + 8) + 8) + 0x80);
    if (*(char *)(lVar15 + 0x1f5) == '\0') {
      lVar7 = *(long *)(lVar15 + 0x100);
      lVar12 = *(long *)(lVar15 + 0x108);
      uVar1 = 0;
      if (lVar12 - lVar7 != 0) {
        uVar1 = (lVar12 - lVar7 >> 3) * 0x155 - 1;
      }
      uVar14 = *(long *)(lVar15 + 0x120) + *(long *)(lVar15 + 0x118);
      if (uVar1 == uVar14) {
        FUN_7101afbf30((ulong *)(lVar15 + 0xf8),extraout_x1,(long ****)param_3,param_4,param_5,
                       param_6,param_7,param_8);
        uVar14 = *(long *)(lVar15 + 0x118) + *(long *)(lVar15 + 0x120);
        lVar7 = *(long *)(lVar15 + 0x100);
        lVar12 = *(long *)(lVar15 + 0x108);
      }
      if (lVar12 == lVar7) {
        puVar8 = (undefined8 *)0x0;
      }
      else {
        puVar8 = (undefined8 *)(*(long *)(lVar7 + (uVar14 / 0x155) * 8) + (uVar14 % 0x155) * 0xc);
      }
      *puVar8 = 0x100000007;
      *(undefined4 *)(puVar8 + 1) = 0;
      *(long *)(lVar15 + 0x120) = *(long *)(lVar15 + 0x120) + 1;
      lVar15 = *(long *)(*(long *)(*(long *)(lVar9 + 8) + 8) + 0x80);
    }
    FUN_7103776910(&local_40,**(long **)(lVar15 + 0x130) + 8,(long ****)"set_txt_key",param_3,
                   param_4,param_5,param_6,param_7,param_8);
    plVar5 = local_38;
    lVar9 = *local_38;
    if (lVar9 != 0) {
      *(byte *)(lVar9 + 0x58) = *(byte *)(lVar9 + 0x58) | 1;
    }
    local_40 = &PTR_FUN_710523d9a8;
    local_38 = (long *)0x0;
    if (plVar5 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar5);
    }
    *(undefined1 *)(lVar15 + 0x200) = 1;
  }
  FUN_71013c14e0((long)param_1,0);
  FUN_71013c1330((long)param_1,extraout_x1_00,(ulong)param_3,param_4,param_5,param_6,param_7,param_8
                );
  lVar9 = *(long *)(param_1[0x3d] + 0x80);
  uVar2 = *(uint *)(*(long *)(lVar9 + 0x20) + 0x25c);
  if (uVar2 == 0xffffffff) {
    if ((*(char *)(*(long *)(lVar9 + 0x20) + 0x280) == '\0') &&
       (*(char *)((long)param_1 + 0xb) == '\0')) {
      FUN_71014368c0((int)param_1[0x3a],*(int *)((long)param_1 + 0x1cc));
      return;
    }
    *(undefined1 *)((long)param_1 + 0xb) = 0;
switchD_71013bee78_caseD_0:
    *(undefined4 *)(param_1 + 3) = 0;
    goto LAB_71013beea0;
  }
  if (4 < uVar2) goto LAB_71013bf28c;
  switch(*(undefined4 *)(lVar9 + (long)(int)uVar2 * 0x48 + 0x78)) {
  case 0:
    goto switchD_71013bee78_caseD_0;
  case 1:
    if (*(char *)((long)param_1 + 0xc) == '\0') {
      lVar9 = *DAT_71052b8f00;
      uVar2 = *(uint *)(lVar9 + 4);
      if (uVar2 < 0xe) {
        uVar13 = 1;
        if ((1 << (ulong)(uVar2 & 0x1f) & 0x3204U) == 0) {
          if (((1 << (ulong)(uVar2 & 0x1f) & 0x12U) == 0) || (*(long *)(lVar9 + 0x30) == 0))
          goto LAB_71013bf15c;
          uVar13 = (uint)*(byte *)(*(long *)(lVar9 + 0x30) + 0x124);
        }
      }
      else {
LAB_71013bf15c:
        uVar13 = 0;
      }
      if (((uVar13 & (*(uint *)(lVar9 + 0xc9c) >> 0x1f ^ 1)) == 0) ||
         (*(char *)((long)param_1 + 0xd) == '\0')) {
        FUN_71024076d0(auStack_80,0xed63546f2);
        if (local_70 == 0) {
          return;
        }
        if (DAT_7106dd53a8 != '\x01') {
          return;
        }
        if (local_68 != DAT_7106dd53ac) {
          return;
        }
        piVar10 = (int *)(local_70 + 0x38);
        do {
          cVar3 = '\x01';
          bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
          if (bVar4) {
            *piVar10 = *piVar10 + -1;
            cVar3 = ExclusiveMonitorsStatus();
          }
        } while (cVar3 != '\0');
        return;
      }
      if (0x11 < *(int *)((long)param_1 + 0x1b4)) {
        return;
      }
      uVar2 = *(int *)((long)param_1 + 0x1b4) + 1;
      *(uint *)((long)param_1 + 0x1b4) = uVar2;
      if (0x12 < uVar2) goto LAB_71013bf28c;
      lVar9 = (long)param_1 + (long)(int)uVar2 * 4;
      uVar11 = 9;
    }
    else {
      FUN_71037760f0(*(long *)**(undefined8 **)(lVar9 + 8),0);
      FUN_710377aee0(0x3f800000,*(long *)(param_1[0x3d] + 0x80) + 0x58);
      if (0x12 < *(uint *)((long)param_1 + 0x1b4)) goto LAB_71013bf28c;
      *(undefined4 *)((long)param_1 + (long)(int)*(uint *)((long)param_1 + 0x1b4) * 4 + 0x168) = 3;
      if (0x11 < *(int *)((long)param_1 + 0x1b4)) {
        return;
      }
      uVar2 = *(int *)((long)param_1 + 0x1b4) + 1;
      *(uint *)((long)param_1 + 0x1b4) = uVar2;
      if (0x12 < uVar2) goto LAB_71013bf28c;
      lVar9 = (long)param_1 + (long)(int)uVar2 * 4;
      uVar11 = 0xb;
    }
    break;
  case 2:
    if (*(char *)((long)param_1 + 0x14) == '\0') {
      FUN_71024076d0(auStack_c0,0xed63546f2);
      if (local_b0 == 0) {
        return;
      }
      if (DAT_7106dd53a8 != '\x01') {
        return;
      }
      if (local_a8 != DAT_7106dd53ac) {
        return;
      }
      piVar10 = (int *)(local_b0 + 0x38);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar4) {
          *piVar10 = *piVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      return;
    }
    FUN_71037760f0(*(long *)**(undefined8 **)(lVar9 + 8),0);
    if (0x12 < *(uint *)((long)param_1 + 0x1b4)) goto LAB_71013bf28c;
    lVar9 = (long)param_1 + (long)(int)*(uint *)((long)param_1 + 0x1b4) * 4;
    uVar11 = 4;
    break;
  case 3:
    if (*(char *)((long)param_1 + 0x15) == '\0') {
      FUN_71024076d0(auStack_100,0xed63546f2);
      if (local_f0 == 0) {
        return;
      }
      if (DAT_7106dd53a8 != '\x01') {
        return;
      }
      if (local_e8 != DAT_7106dd53ac) {
        return;
      }
      piVar10 = (int *)(local_f0 + 0x38);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar10,0x10);
        if (bVar4) {
          *piVar10 = *piVar10 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      return;
    }
    FUN_71037760f0(*(long *)**(undefined8 **)(lVar9 + 8),0);
    if (0x12 < *(uint *)((long)param_1 + 0x1b4)) goto LAB_71013bf28c;
    lVar9 = (long)param_1 + (long)(int)*(uint *)((long)param_1 + 0x1b4) * 4;
    uVar11 = 5;
    break;
  case 4:
    *(undefined4 *)(param_1 + 3) = 1;
    if ((*(uint *)(**(long **)(*param_1 + 8) + 0xd4c) | 2) == 3) goto LAB_71013beea0;
    if (0x11 < *(int *)((long)param_1 + 0x1b4)) {
      return;
    }
    uVar2 = *(int *)((long)param_1 + 0x1b4) + 1;
    *(uint *)((long)param_1 + 0x1b4) = uVar2;
    if (0x12 < uVar2) goto LAB_71013bf28c;
    lVar9 = (long)param_1 + (long)(int)uVar2 * 4;
    uVar11 = 8;
    break;
  case 5:
    *(undefined4 *)(param_1 + 3) = 2;
    goto LAB_71013beea0;
  case 6:
    *(undefined4 *)(param_1 + 3) = 3;
    goto LAB_71013beea0;
  case 7:
    *(undefined4 *)(param_1 + 3) = 4;
    goto LAB_71013beea0;
  case 8:
  case 9:
    *(undefined4 *)(param_1 + 3) = 5;
LAB_71013beea0:
    if (0x12 < *(uint *)((long)param_1 + 0x1b4)) {
LAB_71013bf28c:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar9 = (long)param_1 + (long)(int)*(uint *)((long)param_1 + 0x1b4) * 4;
    uVar11 = 10;
    break;
  default:
    goto switchD_71013bee78_default;
  }
  *(undefined4 *)(lVar9 + 0x168) = uVar11;
switchD_71013bee78_default:
  return;
}

