// addr:      71038d7c40
// offset:    0x38d7c40
// name:      FUN_71038d7c40
// mangled:   
// signature: undefined __cdecl FUN_71038d7c40(long param_1, long param_2, uint param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71038d7c40(long param_1,long param_2,uint param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  int iVar2;
  undefined8 *puVar3;
  logic_error *this;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  long ****pppplVar13;
  void *pvVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined8 *local_70;
  long ****local_68;
  
  uVar4 = (ulong)param_3;
  lVar5 = *(long *)(param_2 + 8);
  if (lVar5 == param_1) {
    return;
  }
  uVar17 = *(ulong *)(param_1 + 0x78);
  plVar1 = (long *)(param_1 + 0x70);
  if (uVar4 < uVar17) goto LAB_71038d7ff0;
  uVar15 = (ulong)(param_3 + 1);
  lVar5 = uVar17 - uVar15;
  if (uVar17 < uVar15 || lVar5 == 0) {
    lVar5 = *(long *)(param_1 + 0x70);
    uVar9 = *(ulong *)(param_1 + 0x80);
    uVar18 = uVar15 - uVar17;
    puVar7 = (undefined8 *)(lVar5 + uVar17 * 0x20);
    if (uVar9 - uVar17 < uVar18) {
      if (0x7ffffffffffffff - uVar9 < uVar18) {
        this = (logic_error *)__cxa_allocate_exception(0x10);
        std::logic_error::logic_error(this,"get_next_capacity, allocator\'s max_size reached");
        *(undefined **)this = &DAT_7107b4d010;
                    /* WARNING: Subroutine does not return */
        __cxa_throw(this,&std::length_error::typeinfo,std::length_error::~length_error);
      }
      uVar19 = uVar18;
      if (uVar18 <= uVar9) {
        uVar19 = uVar9;
      }
      lVar5 = 0x7ffffffffffffff;
      if (uVar19 <= 0x7ffffffffffffff - uVar9) {
        lVar5 = uVar19 + uVar9;
      }
      pppplVar13 = (long ****)(lVar5 << 5);
      iVar2 = FUN_710392e1f0(&local_70,0x10,pppplVar13,param_4,param_5,param_6,param_7,param_8);
      if (((iVar2 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
         (local_68 = pppplVar13,
         uVar9 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_68), (uVar9 & 1) != 0))
      {
        FUN_710392e1f0(&local_70,0x10,pppplVar13,param_4,param_5,param_6,param_7,param_8);
      }
      nu::VirtualAllocHook((ulong)pppplVar13,0x10,local_70);
      puVar3 = (undefined8 *)*plVar1;
      puVar6 = local_70;
      if ((puVar3 == puVar7) || (puVar3 == (undefined8 *)0x0)) {
LAB_71038d7e04:
        uVar9 = uVar18 & 3;
        puVar10 = puVar6;
        uVar19 = uVar18;
        if (uVar9 != 0) {
          puVar10 = puVar6 + 1;
          uVar19 = (uVar15 - uVar9) - uVar17;
          lVar16 = -uVar9;
          do {
            puVar10[1] = 0;
            puVar10[2] = 0;
            lVar16 = lVar16 + 1;
            puVar10[-1] = &PTR_FUN_7105239610;
            *puVar10 = 0;
            puVar10 = puVar10 + 4;
          } while (lVar16 != 0);
          puVar10 = puVar6 + uVar9 * 4;
        }
        if (2 < uVar18 - 1) {
          puVar10 = puVar10 + 8;
          do {
            puVar10[-6] = 0;
            puVar10[-5] = 0;
            uVar19 = uVar19 - 4;
            puVar10[-8] = &PTR_FUN_7105239610;
            puVar10[-7] = 0;
            puVar10[-2] = 0;
            puVar10[-1] = 0;
            puVar10[-4] = &PTR_FUN_7105239610;
            puVar10[-3] = 0;
            puVar10[2] = 0;
            puVar10[3] = 0;
            *puVar10 = &PTR_FUN_7105239610;
            puVar10[1] = 0;
            puVar10[6] = 0;
            puVar10[7] = 0;
            puVar10[4] = &PTR_FUN_7105239610;
            puVar10[5] = 0;
            puVar10 = puVar10 + 0x10;
          } while (uVar19 != 0);
        }
      }
      else {
        puVar6 = puVar3;
        puVar10 = local_70;
        do {
          *puVar10 = &PTR_FUN_71052395f0;
          puVar10[1] = puVar6[1];
          puVar10[2] = puVar6[2];
          uVar8 = puVar6[3];
          puVar6 = puVar6 + 4;
          *puVar10 = &PTR_FUN_7105239610;
          puVar10[3] = uVar8;
          puVar10 = puVar10 + 4;
        } while (puVar7 != puVar6);
        puVar6 = (undefined8 *)
                 ((long)local_70 +
                 ((long)puVar7 + (-0x20 - (long)puVar3) & 0xffffffffffffffe0U) + 0x20);
        if (uVar18 != 0) goto LAB_71038d7e04;
      }
      puVar6 = puVar6 + uVar18 * 4;
      if (puVar3 != (undefined8 *)0x0) {
        lVar16 = *(long *)(param_1 + 0x78);
        puVar10 = puVar3 + lVar16 * 4;
        if (puVar10 != puVar7) {
          lVar11 = -0x20 - (long)puVar7;
          puVar12 = puVar6;
          do {
            *puVar12 = &PTR_FUN_71052395f0;
            puVar12[1] = puVar7[1];
            puVar12[2] = puVar7[2];
            uVar8 = puVar7[3];
            puVar7 = puVar7 + 4;
            *puVar12 = &PTR_FUN_7105239610;
            puVar12[3] = uVar8;
            puVar12 = puVar12 + 4;
          } while (puVar10 != puVar7);
          lVar16 = *(long *)(param_1 + 0x78);
          puVar6 = (undefined8 *)
                   ((long)puVar6 + ((long)puVar10 + lVar11 & 0xffffffffffffffe0U) + 0x20);
        }
        for (; lVar16 != 0; lVar16 = lVar16 + -1) {
          (**(code **)*puVar3)(puVar3);
          puVar3 = puVar3 + 4;
        }
        pvVar14 = (void *)*plVar1;
        if (pvVar14 != (void *)(param_1 + 0x88)) {
          nu::VirtualFreeHook(pvVar14);
          FUN_710392eb40((ulong)pvVar14);
        }
      }
      *(undefined8 **)(param_1 + 0x70) = local_70;
      *(long *)(param_1 + 0x78) = (long)puVar6 - (long)local_70 >> 5;
      *(long *)(param_1 + 0x80) = lVar5;
    }
    else if (uVar18 != 0) {
      uVar9 = uVar18 & 3;
      uVar19 = uVar18;
      if (uVar9 != 0) {
        puVar7 = puVar7 + 1;
        lVar16 = -uVar9;
        do {
          puVar7[1] = 0;
          puVar7[2] = 0;
          lVar16 = lVar16 + 1;
          puVar7[-1] = &PTR_FUN_7105239610;
          *puVar7 = 0;
          puVar7 = puVar7 + 4;
        } while (lVar16 != 0);
        puVar7 = (undefined8 *)(lVar5 + (uVar17 + uVar9) * 0x20);
        uVar19 = (uVar15 - uVar9) - uVar17;
      }
      if (2 < uVar18 - 1) {
        puVar7 = puVar7 + 8;
        do {
          puVar7[-6] = 0;
          puVar7[-5] = 0;
          uVar19 = uVar19 - 4;
          puVar7[-8] = &PTR_FUN_7105239610;
          puVar7[-7] = 0;
          puVar7[-2] = 0;
          puVar7[-1] = 0;
          puVar7[-4] = &PTR_FUN_7105239610;
          puVar7[-3] = 0;
          puVar7[2] = 0;
          puVar7[3] = 0;
          *puVar7 = &PTR_FUN_7105239610;
          puVar7[1] = 0;
          puVar7[6] = 0;
          puVar7[7] = 0;
          puVar7[4] = &PTR_FUN_7105239610;
          puVar7[5] = 0;
          puVar7 = puVar7 + 0x10;
        } while (uVar19 != 0);
      }
      *(ulong *)(param_1 + 0x78) = *(long *)(param_1 + 0x78) + uVar18;
    }
  }
  else {
    if (lVar5 != 0) {
      lVar16 = uVar15 - uVar17;
      puVar7 = (undefined8 *)(*plVar1 + uVar15 * 0x20);
      do {
        (**(code **)*puVar7)(puVar7);
        lVar16 = lVar16 + 1;
        puVar7 = puVar7 + 4;
      } while (lVar16 != 0);
      uVar15 = *(long *)(param_1 + 0x78) - lVar5;
    }
    *(ulong *)(param_1 + 0x78) = uVar15;
  }
  lVar5 = *(long *)(param_2 + 8);
LAB_71038d7ff0:
  if (((*(long **)(param_1 + 0x38) == (long *)0x0) ||
      (**(long **)(param_1 + 0x38) != *(long *)(param_1 + 0x40))) ||
     ((*(long **)(lVar5 + 0x38) == (long *)0x0 ||
      ((**(long **)(lVar5 + 0x38) != *(long *)(lVar5 + 0x40) ||
       (*(long *)(param_1 + 0x30) != *(long *)(lVar5 + 0x30))))))) {
    lVar16 = *(long *)(param_1 + 0x30);
    if (*(long **)(lVar16 + 0x20) == (long *)0x0) {
      return;
    }
    if (**(long **)(lVar16 + 0x20) != *(long *)(lVar16 + 0x28)) {
      return;
    }
    lVar11 = *(long *)(lVar5 + 0x30);
    if (*(long **)(lVar11 + 0x20) == (long *)0x0) {
      return;
    }
    if (**(long **)(lVar11 + 0x20) != *(long *)(lVar11 + 0x28)) {
      return;
    }
    if (*(long *)(lVar16 + 0x18) != *(long *)(lVar11 + 0x18)) {
      return;
    }
  }
  lVar16 = *plVar1;
  if ((*(long **)(param_2 + 0x10) == (long *)0x0) ||
     (**(long **)(param_2 + 0x10) != *(long *)(param_2 + 0x18))) {
    lVar5 = lVar16 + uVar4 * 0x20;
    uVar8 = 0;
    *(undefined8 *)(lVar5 + 8) = 0;
    *(undefined8 *)(lVar5 + 0x10) = 0;
  }
  else {
    lVar11 = lVar16 + uVar4 * 0x20;
    *(long *)(lVar11 + 8) = lVar5;
    puVar7 = *(undefined8 **)(lVar5 + 8);
    *(undefined8 **)(lVar11 + 0x10) = puVar7;
    uVar8 = *puVar7;
  }
  *(undefined8 *)(lVar16 + uVar4 * 0x20 + 0x18) = uVar8;
  return;
}

