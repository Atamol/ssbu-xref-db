// addr:      71038b0a00
// offset:    0x38b0a00
// name:      FUN_71038b0a00
// mangled:   
// signature: undefined __cdecl FUN_71038b0a00(long param_1, int * param_2, uint * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71038b0a00(long param_1,int *param_2,uint *param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint *puVar1;
  undefined8 *puVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  logic_error *this;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined **ppuVar13;
  undefined4 uVar14;
  long ****pppplVar15;
  undefined8 *puVar16;
  long *plVar17;
  long *plVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 local_98;
  undefined8 local_90;
  long ***local_88 [4];
  undefined8 *local_68;
  long ****local_58;
  
  plVar18 = *(long **)(param_1 + 0x18);
  if (plVar18[1] != 0) {
    lVar12 = *plVar18;
    lVar9 = 0;
    do {
      if ((*(int *)(lVar12 + lVar9) == *param_2) &&
         (lVar3 = lVar12 + lVar9, *(int *)(lVar3 + 4) == param_2[1])) {
        uVar5 = *(uint *)(lVar3 + 8);
        uVar6 = *param_3;
        uVar4 = uVar5 ^ (int)uVar5 >> 0x1f;
        if (uVar4 == (uVar6 ^ (int)uVar6 >> 0x1f)) {
          if (uVar5 != uVar6) {
            switch(uVar4) {
            case 0:
              FUN_7103599010(0,(undefined8 *)(lVar3 + 0x10));
              *(undefined ***)(lVar3 + 0x10) = &PTR_FUN_7105230060;
              *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(param_3 + 4);
              *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(param_3 + 6);
              uVar11 = *(undefined8 *)(param_3 + 8);
              *(undefined ***)(lVar3 + 0x10) = &PTR_FUN_710522ff60;
              *(undefined4 *)(lVar3 + 8) = 0;
              *(undefined8 *)(lVar3 + 0x28) = uVar11;
              return;
            case 1:
              uVar14 = 1;
              FUN_7103599010(1,(undefined8 *)(lVar3 + 0x10));
              *(undefined ***)(lVar3 + 0x10) = &PTR_FUN_71052316d0;
              *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(param_3 + 4);
              *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(param_3 + 6);
              uVar11 = *(undefined8 *)(param_3 + 8);
              ppuVar13 = &PTR_FUN_71052302c0;
              break;
            case 2:
              FUN_710383bd60(&local_98,(long *)(param_3 + 2),param_3,param_4,param_5,param_6,param_7
                             ,param_8);
              FUN_7103599010(*(uint *)(lVar3 + 8) ^ (int)*(uint *)(lVar3 + 8) >> 0x1f,
                             (undefined8 *)(lVar3 + 0x10));
              *(undefined8 *)(lVar3 + 0x10) = local_98;
              *(undefined8 *)(lVar3 + 0x18) = local_90;
              *(long ****)(lVar3 + 0x20) = local_88[0];
              *(undefined4 *)(lVar3 + 8) = 2;
              return;
            case 3:
              uVar14 = 3;
              FUN_7103599010(3,(undefined8 *)(lVar3 + 0x10));
              *(undefined ***)(lVar3 + 0x10) = &PTR_FUN_7105231990;
              *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(param_3 + 4);
              *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(param_3 + 6);
              uVar11 = *(undefined8 *)(param_3 + 8);
              ppuVar13 = &PTR_FUN_71052319b0;
              break;
            case 4:
              uVar14 = 4;
              FUN_7103599010(4,(undefined8 *)(lVar3 + 0x10));
              *(undefined ***)(lVar3 + 0x10) = &PTR_FUN_71052316f0;
              *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(param_3 + 4);
              *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(param_3 + 6);
              uVar11 = *(undefined8 *)(param_3 + 8);
              ppuVar13 = &PTR_FUN_7105231650;
              break;
            case 5:
              uVar14 = 5;
              FUN_7103599010(5,(undefined8 *)(lVar3 + 0x10));
              *(undefined ***)(lVar3 + 0x10) = &PTR_FUN_7105231710;
              *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(param_3 + 4);
              *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(param_3 + 6);
              uVar11 = *(undefined8 *)(param_3 + 8);
              ppuVar13 = (undefined **)&DAT_7105231730;
              break;
            case 6:
              uVar14 = 6;
              FUN_7103599010(6,(undefined8 *)(lVar3 + 0x10));
              *(undefined ***)(lVar3 + 0x10) = &PTR_FUN_7105231770;
              *(undefined8 *)(lVar3 + 0x18) = *(undefined8 *)(param_3 + 4);
              *(undefined8 *)(lVar3 + 0x20) = *(undefined8 *)(param_3 + 6);
              uVar11 = *(undefined8 *)(param_3 + 8);
              ppuVar13 = &PTR_FUN_7104f62038;
              break;
            default:
              goto switchD_71038b0b68_caseD_7;
            }
            *(undefined8 *)(lVar3 + 0x28) = uVar11;
            *(undefined ***)(lVar3 + 0x10) = ppuVar13;
            *(undefined4 *)(lVar3 + 8) = uVar14;
            return;
          }
          switch(uVar4) {
          case 0:
          case 1:
          case 3:
          case 5:
          case 6:
            if ((*(long **)(param_3 + 6) == (long *)0x0) ||
               (**(long **)(param_3 + 6) != *(long *)(param_3 + 8))) {
              *(undefined8 *)(lVar3 + 0x18) = 0;
            }
            else {
              lVar9 = *(long *)(param_3 + 4);
              *(long *)(lVar3 + 0x18) = lVar9;
              if (lVar9 != 0) {
                puVar19 = *(undefined8 **)(lVar9 + 8);
                goto LAB_71038b0cdc;
              }
            }
            *(undefined8 *)(lVar3 + 0x20) = 0;
            *(undefined8 *)(lVar3 + 0x28) = 0;
            return;
          case 2:
            if ((long)param_3 + (-8 - lVar12) == lVar9) {
              return;
            }
            FUN_71038ac100((undefined8 *)(lVar3 + 0x10),*(long *)(param_3 + 2),
                           *(long *)(param_3 + 4),param_4,param_5,param_6,param_7,param_8);
            return;
          case 4:
            if (((*(long **)(param_3 + 6) == (long *)0x0) ||
                (**(long **)(param_3 + 6) != *(long *)(param_3 + 8))) ||
               (lVar9 = *(long *)(param_3 + 4), lVar9 == 0)) {
              *(undefined8 *)(lVar3 + 0x18) = 0;
              *(undefined8 *)(lVar3 + 0x20) = 0;
              *(undefined8 *)(lVar3 + 0x28) = 0;
              return;
            }
            *(long *)(lVar3 + 0x18) = lVar9;
            puVar19 = *(undefined8 **)(lVar9 + 0x60);
LAB_71038b0cdc:
            *(undefined8 **)(lVar3 + 0x20) = puVar19;
            *(undefined8 *)(lVar3 + 0x28) = *puVar19;
            return;
          }
switchD_71038b0b68_caseD_7:
                    /* WARNING: Subroutine does not return */
          FUN_710356c0d0();
        }
      }
      lVar9 = lVar9 + 0x30;
    } while (plVar18[1] * 0x30 - lVar9 != 0);
  }
  local_98 = *(undefined8 *)param_2;
  local_58 = local_88;
  FUN_710383bbe0(*param_3 ^ (int)*param_3 >> 0x1f,&local_58,(long *)(param_3 + 2),param_4,param_5,
                 param_6,param_7,param_8);
  uVar4 = *param_3 ^ (int)*param_3 >> 0x1f;
  local_90 = CONCAT44(local_90._4_4_,uVar4);
  lVar9 = *plVar18;
  uVar8 = plVar18[1];
  uVar10 = plVar18[2];
  puVar19 = (undefined8 *)(lVar9 + uVar8 * 0x30);
  if (uVar8 < uVar10) {
    *puVar19 = local_98;
    lVar9 = lVar9 + uVar8 * 0x30;
    local_58 = (long ****)(lVar9 + 0x10);
    FUN_7103599380(uVar4 ^ (int)uVar4 >> 0x1f,&local_58,local_88);
    *(uint *)(lVar9 + 8) = (uint)local_90 ^ (int)(uint)local_90 >> 0x1f;
    plVar18[1] = plVar18[1] + 1;
  }
  else {
    if (-uVar10 == -0x555555555555555) {
      this = (logic_error *)__cxa_allocate_exception(0x10);
      std::logic_error::logic_error(this,"get_next_capacity, allocator\'s max_size reached");
      *(undefined **)this = &DAT_7107b4d010;
                    /* WARNING: Subroutine does not return */
      __cxa_throw(this,&std::length_error::typeinfo,std::length_error::~length_error);
    }
    uVar8 = uVar10;
    if (uVar10 == 0) {
      uVar8 = 1;
    }
    lVar9 = 0x555555555555555;
    if (uVar8 <= -uVar10 + 0x555555555555555) {
      lVar9 = uVar8 + uVar10;
    }
    pppplVar15 = (long ****)(lVar9 * 0x30);
    iVar7 = FUN_710392e1f0(&local_68,0x10,pppplVar15,param_4,param_5,param_6,param_7,param_8);
    if (((iVar7 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
       (local_58 = pppplVar15,
       uVar8 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_58), (uVar8 & 1) != 0)) {
      FUN_710392e1f0(&local_68,0x10,pppplVar15,param_4,param_5,param_6,param_7,param_8);
    }
    nu::VirtualAllocHook((ulong)pppplVar15,0x10,local_68);
    puVar16 = (undefined8 *)*plVar18;
    puVar20 = local_68;
    if ((puVar16 != puVar19) && (puVar21 = puVar16, puVar16 != (undefined8 *)0x0)) {
      do {
        *puVar20 = *puVar21;
        local_58 = (long ****)(puVar20 + 2);
        FUN_7103599380(*(uint *)(puVar21 + 1) ^ (int)*(uint *)(puVar21 + 1) >> 0x1f,&local_58,
                       puVar21 + 2);
        puVar2 = puVar21 + 6;
        *(uint *)(puVar20 + 1) = *(uint *)(puVar21 + 1) ^ (int)*(uint *)(puVar21 + 1) >> 0x1f;
        puVar20 = puVar20 + 6;
        puVar21 = puVar2;
      } while (puVar2 != puVar19);
    }
    *puVar20 = local_98;
    local_58 = (long ****)(puVar20 + 2);
    FUN_7103599380((uint)local_90 ^ (int)(uint)local_90 >> 0x1f,&local_58,local_88);
    *(uint *)(puVar20 + 1) = (uint)local_90 ^ (int)(uint)local_90 >> 0x1f;
    puVar20 = puVar20 + 6;
    if (puVar16 != (undefined8 *)0x0) {
      lVar12 = plVar18[1];
      if (puVar19 != puVar16 + lVar12 * 6) {
        do {
          *puVar20 = *puVar19;
          local_58 = (long ****)(puVar20 + 2);
          FUN_7103599380(*(uint *)(puVar19 + 1) ^ (int)*(uint *)(puVar19 + 1) >> 0x1f,&local_58,
                         puVar19 + 2);
          puVar1 = (uint *)(puVar19 + 1);
          puVar19 = puVar19 + 6;
          *(uint *)(puVar20 + 1) = *puVar1 ^ (int)*puVar1 >> 0x1f;
          puVar20 = puVar20 + 6;
        } while (puVar19 != puVar16 + lVar12 * 6);
        lVar12 = plVar18[1];
      }
      if (lVar12 != 0) {
        puVar16 = puVar16 + 2;
        do {
          FUN_7103599010(*(uint *)(puVar16 + -1) ^ (int)*(uint *)(puVar16 + -1) >> 0x1f,puVar16);
          lVar12 = lVar12 + -1;
          puVar16 = puVar16 + 6;
        } while (lVar12 != 0);
      }
      plVar17 = (long *)*plVar18;
      if (plVar17 != plVar18 + 3) {
        nu::VirtualFreeHook(plVar17);
        FUN_710392eb40((ulong)plVar17);
      }
    }
    plVar18[2] = lVar9;
    *plVar18 = (long)local_68;
    plVar18[1] = ((long)puVar20 - (long)local_68 >> 4) * -0x5555555555555555;
  }
  FUN_7103599010((uint)local_90 ^ (int)(uint)local_90 >> 0x1f,local_88);
  return;
}

