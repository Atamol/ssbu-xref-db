// addr:      710273cbe0
// offset:    0x273cbe0
// name:      FUN_710273cbe0
// mangled:   
// signature: long * * * * __cdecl FUN_710273cbe0(long * * * * param_1)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long **** FUN_710273cbe0(long ****param_1)

{
  long **pplVar1;
  long **pplVar2;
  bool bVar3;
  int iVar4;
  long ****pppplVar5;
  ulong in_x5;
  long ***in_x6;
  long ***in_x7;
  uint uVar6;
  long ***ppplVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long **pplVar11;
  long lVar12;
  ulong uVar13;
  long *plVar14;
  long *plVar15;
  long *plVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long *local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined8 local_a4;
  undefined8 local_9c;
  long *local_90 [6];
  
  uVar13 = uStack_d8;
  if (DAT_7105329fb0 == (long *)0x0) {
    return param_1;
  }
  local_90[4] = (long *)0x0;
  local_90[5] = (long *)0x0;
  local_90[2] = (long *)0x0;
  local_90[3] = (long *)0x0;
  local_90[0] = (long *)0x0;
  local_90[1] = (long *)0x0;
  local_e0 = param_1[1][0x60][1];
  uStack_d8 = uStack_d8 & 0xffffffff00000000;
  uVar10 = uStack_d8;
  plVar16 = _ConstantZero;
  uVar18 = uRam0000007107459008;
  if ((local_e0 == (long *)0x0) || ((int)((ulong)(local_e0[0x36] - local_e0[0x35]) >> 3) == 0)) {
    local_d0 = (long *)((ulong)local_d0._4_4_ << 0x20);
    pppplVar5 = param_1;
  }
  else {
    local_d0 = (long *)((ulong)local_d0._4_4_ << 0x20);
    uVar9 = local_e0[0x36] - local_e0[0x35];
    uVar6 = 0;
    do {
      uStack_d8 = uVar10;
      if ((ulong)((long)uVar9 >> 3) <= (ulong)uVar6) goto LAB_710273d218;
      lVar12 = *(long *)(*(long *)(local_e0[0x35] + (ulong)uVar6 * 8) + 0x10);
      uStack_d8._4_4_ = SUB84(uVar13,4);
      pppplVar5 = (long ****)(local_e0 + 0x35);
      if ((*(int *)(lVar12 + 0xf8) != 0) && (*(long *)(lVar12 + 0x100) != 0)) {
        uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar6);
        if (local_e0 != (long *)0x0) goto LAB_710273ce4c;
        goto LAB_710273ccb0;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < (uint)(uVar9 >> 3));
    uStack_d8 = (ulong)uStack_d8._4_4_ << 0x20;
  }
LAB_710273ccb0:
  uVar13 = uStack_d8;
  local_e0 = param_1[1][0x60][1];
  uStack_d8 = uStack_d8 & 0xffffffff00000000;
  uVar10 = uStack_d8;
  plVar14 = _ConstantZero;
  uVar17 = uRam0000007107459008;
  local_90[0] = plVar16;
  local_90[1] = (long *)uVar18;
  if ((local_e0 == (long *)0x0) || ((int)((ulong)(local_e0[0x36] - local_e0[0x35]) >> 3) == 0)) {
    local_d0 = (long *)((ulong)local_d0._4_4_ << 0x20);
  }
  else {
    local_d0 = (long *)((ulong)local_d0._4_4_ << 0x20);
    uVar9 = local_e0[0x36] - local_e0[0x35];
    uVar6 = 0;
    pppplVar5 = (long ****)(local_e0 + 0x35);
    do {
      uStack_d8 = uVar10;
      if ((ulong)((long)uVar9 >> 3) <= (ulong)uVar6) goto LAB_710273d218;
      lVar12 = *(long *)(*(long *)(local_e0[0x35] + (ulong)uVar6 * 8) + 0x10);
      uStack_d8._4_4_ = SUB84(uVar13,4);
      if ((*(int *)(lVar12 + 0xf8) != 0) && (*(long *)(lVar12 + 0x100) != 0)) {
        uStack_d8 = CONCAT44(uStack_d8._4_4_,uVar6);
        if (local_e0 != (long *)0x0) goto LAB_710273cee0;
        goto LAB_710273cd4c;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < (uint)(uVar9 >> 3));
    uStack_d8 = (ulong)uStack_d8._4_4_ << 0x20;
  }
LAB_710273cd4c:
  local_e0 = param_1[1][0x60][1];
  uVar13 = uStack_d8 >> 0x20;
  uStack_d8 = uStack_d8 & 0xffffffff00000000;
  plVar15 = _ConstantZero;
  uVar18 = uRam0000007107459008;
  local_90[2] = plVar14;
  local_90[3] = (long *)uVar17;
  if ((local_e0 != (long *)0x0) && ((int)((ulong)(local_e0[0x36] - local_e0[0x35]) >> 3) != 0)) {
    local_d0 = (long *)((ulong)local_d0 & 0xffffffff00000000);
    uVar10 = local_e0[0x36] - local_e0[0x35];
    uVar6 = 0;
    pppplVar5 = (long ****)(local_e0 + 0x35);
    do {
      if ((ulong)((long)uVar10 >> 3) <= (ulong)uVar6) {
LAB_710273d218:
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_out_of_range();
      }
      lVar12 = *(long *)(*(long *)(local_e0[0x35] + (ulong)uVar6 * 8) + 0x10);
      if ((*(int *)(lVar12 + 0xf8) != 0) && (*(long *)(lVar12 + 0x100) != 0)) {
        uStack_d8 = CONCAT44((int)uVar13,uVar6);
        if (local_e0 != (long *)0x0) goto LAB_710273cf74;
        break;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < (uint)(uVar10 >> 3));
  }
LAB_710273cde4:
  ppplVar7 = *param_1;
  uVar6 = (uint)ppplVar7;
  if (((ulong)ppplVar7 & 1) == 0) {
    if ((uVar6 >> 1 & 1) == 0) {
      if ((uVar6 >> 2 & 1) == 0) {
        if ((uVar6 >> 3 & 1) == 0) {
          if ((uVar6 >> 4 & 1) == 0) {
            if ((uVar6 >> 5 & 1) == 0) {
              lVar8 = 0;
              goto LAB_710273d110;
            }
            uVar13 = 5;
          }
          else {
            uVar13 = 4;
          }
        }
        else {
          uVar13 = 3;
        }
      }
      else {
        uVar13 = 2;
      }
    }
    else {
      uVar13 = 1;
    }
  }
  else {
    uVar13 = 0;
  }
  lVar12 = 1;
  do {
    lVar8 = lVar12;
    uVar10 = uVar13;
    if ((uVar13 < 6) &&
       ((uVar10 = uVar13 + 1, 5 < uVar10 ||
        ((((1L << (uVar10 & 0x3f) & (ulong)ppplVar7) == 0 &&
          (uVar10 = uVar13 + 2, (1L << (uVar10 & 0x3f) & (ulong)ppplVar7) == 0)) &&
         ((5 < uVar10 ||
          ((uVar10 = uVar13 + 3, (1L << (uVar10 & 0x3f) & (ulong)ppplVar7) == 0 &&
           ((5 < uVar10 ||
            ((uVar10 = uVar13 + 4, (1L << (uVar10 & 0x3f) & (ulong)ppplVar7) == 0 &&
             ((5 < uVar10 ||
              (uVar10 = uVar13 + 5, (1L << (uVar13 + 5 & 0x3f) & (ulong)ppplVar7) == 0))))))))))))))
       )) break;
    uVar13 = uVar10;
    lVar12 = lVar8 + 1;
  } while (uVar13 != 6);
LAB_710273d110:
  pplVar1 = param_1[2][1];
  pplVar2 = param_1[2][2];
  if (pplVar1 == pplVar2) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0;
    do {
      pplVar11 = (long **)((long)pplVar1 + 4);
      bVar3 = 7U - lVar8 == (ulong)*(uint *)pplVar1;
      uVar6 = uVar6 | bVar3;
      pplVar1 = pplVar11;
    } while (!bVar3 && pplVar2 != pplVar11);
  }
  uVar6 = *(int *)(*DAT_7105329fb0 + 0x2b0) + uVar6;
  if (2 < uVar6) {
    uVar6 = 3;
  }
  if (uVar6 != 0) {
    uVar13 = 1;
    local_90[4] = plVar15;
    local_90[5] = (long *)uVar18;
    while( true ) {
      local_a4 = 0;
      local_9c = 0x3f80000000000000;
      uStack_b4 = *(undefined4 *)(*lib::Singleton<app::ItemParamAccessor>::instance_ + 0x5630);
      uStack_d8 = 0;
      uStack_c8 = 0;
      local_c0 = 0xb;
      uStack_bc = 0x50000000;
      local_b0 = 0x50000000;
      local_ac = 0xffffffff00000014;
      local_b8 = 1;
      local_e0 = plVar16;
      local_d0 = plVar16;
      pppplVar5 = FUN_71015db0b0(lib::Singleton<app::ItemManager>::instance_,&local_e0,0,
                                 (byte ****)0x1,(long ****)0x0,in_x5,in_x6,in_x7);
      if (uVar6 <= uVar13) break;
      plVar16 = local_90[uVar13 * 2];
      uVar13 = uVar13 + 1;
    }
  }
  return pppplVar5;
LAB_710273ce4c:
  if ((ulong)(local_e0[0x36] - local_e0[0x35] >> 3) <= (ulong)uVar6) goto LAB_710273d21c;
  lVar12 = *(long *)(*(long *)(local_e0[0x35] + (ulong)uVar6 * 8) + 0x10);
  uVar13 = (ulong)local_d0 & 0xffffffff;
  if ((uint)local_d0 < *(uint *)(lVar12 + 0xf8)) {
    lVar8 = *(long *)(lVar12 + 0x100) + uVar13 * 0x140;
  }
  else {
    lVar8 = 0;
  }
  iVar4 = strcmp((char *)(lVar8 + 0x48),"_tag____0000_2ndStageHeartLocation1");
  if ((iVar4 == 0) && (*(int *)(*(long *)(lVar12 + 0x100) + uVar13 * 0x140 + 0x108) == 1)) {
    pppplVar5 = (long ****)0x0;
    plVar16 = *(long **)(*(long *)(lVar12 + 0x100) + uVar13 * 0x140 + 0x10c);
    uVar18 = 0;
    goto LAB_710273ccb0;
  }
  pppplVar5 = (long ****)FUN_710262cb10((long *)&local_e0);
  plVar16 = _ConstantZero;
  uVar18 = uRam0000007107459008;
  if (local_e0 == (long *)0x0) goto LAB_710273ccb0;
  uVar6 = (uint)uStack_d8;
  goto LAB_710273ce4c;
LAB_710273cee0:
  if ((ulong)(local_e0[0x36] - local_e0[0x35] >> 3) <= (ulong)uVar6) goto LAB_710273d21c;
  lVar12 = *(long *)(*(long *)(local_e0[0x35] + (ulong)uVar6 * 8) + 0x10);
  uVar13 = (ulong)local_d0 & 0xffffffff;
  if ((uint)local_d0 < *(uint *)(lVar12 + 0xf8)) {
    lVar8 = *(long *)(lVar12 + 0x100) + uVar13 * 0x140;
  }
  else {
    lVar8 = 0;
  }
  iVar4 = strcmp((char *)(lVar8 + 0x48),"_tag____0000_2ndStageHeartLocation2");
  if ((iVar4 == 0) && (*(int *)(*(long *)(lVar12 + 0x100) + uVar13 * 0x140 + 0x108) == 1)) {
    pppplVar5 = (long ****)0x0;
    plVar14 = *(long **)(*(long *)(lVar12 + 0x100) + uVar13 * 0x140 + 0x10c);
    uVar17 = 0;
    goto LAB_710273cd4c;
  }
  pppplVar5 = (long ****)FUN_710262cb10((long *)&local_e0);
  plVar14 = _ConstantZero;
  uVar17 = uRam0000007107459008;
  if (local_e0 == (long *)0x0) goto LAB_710273cd4c;
  uVar6 = (uint)uStack_d8;
  goto LAB_710273cee0;
LAB_710273cf74:
  if ((ulong)(local_e0[0x36] - local_e0[0x35] >> 3) <= (ulong)uVar6) {
LAB_710273d21c:
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  lVar12 = *(long *)(*(long *)(local_e0[0x35] + (ulong)uVar6 * 8) + 0x10);
  uVar13 = (ulong)local_d0 & 0xffffffff;
  if ((uint)local_d0 < *(uint *)(lVar12 + 0xf8)) {
    lVar8 = *(long *)(lVar12 + 0x100) + uVar13 * 0x140;
  }
  else {
    lVar8 = 0;
  }
  iVar4 = strcmp((char *)(lVar8 + 0x48),"_tag____0000_2ndStageHeartLocation3");
  if ((iVar4 == 0) && (*(int *)(*(long *)(lVar12 + 0x100) + uVar13 * 0x140 + 0x108) == 1)) {
    pppplVar5 = (long ****)0x0;
    plVar15 = *(long **)(*(long *)(lVar12 + 0x100) + uVar13 * 0x140 + 0x10c);
    uVar18 = 0;
    goto LAB_710273cde4;
  }
  pppplVar5 = (long ****)FUN_710262cb10((long *)&local_e0);
  plVar15 = _ConstantZero;
  uVar18 = uRam0000007107459008;
  if (local_e0 == (long *)0x0) goto LAB_710273cde4;
  uVar6 = (uint)uStack_d8;
  goto LAB_710273cf74;
}

