// addr:      7103876230
// offset:    0x3876230
// name:      FUN_7103876230
// mangled:   
// signature: undefined __cdecl FUN_7103876230(long * param_1, ulong param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7103876230(long *param_1,ulong param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  logic_error *this;
  long ****pppplVar5;
  long ***ppplVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  void *pvVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long ***local_50;
  undefined4 local_44;
  
  pppplVar5 = &local_50;
  puVar16 = (undefined8 *)*param_1;
  if (param_2 <= (ulong)((param_1[2] - (long)puVar16 >> 3) * -0x3333333333333333)) {
    return;
  }
  if (0x666666666666666 < param_2) {
    this = (logic_error *)__cxa_allocate_exception(0x10);
    std::logic_error::logic_error
              (this,"allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    *(undefined **)this = &DAT_7107b4d010;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this,&std::length_error::typeinfo,std::length_error::~length_error);
  }
  puVar17 = (undefined8 *)param_1[1];
  lVar8 = (long)puVar17 - (long)puVar16 >> 3;
  ppplVar6 = (long ***)(param_2 * 0x28);
  if (ppplVar6 == (long ***)0x0) {
    ppplVar6 = (long ***)0x1;
  }
  lVar3 = FUN_710392e290(0x10,ppplVar6,param_3,param_4,param_5,param_6,param_7,param_8);
  if (lVar3 == 0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_44 = 0;
      local_50 = ppplVar6;
      uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_44);
      if (((uVar4 & 1) != 0) &&
         (lVar3 = FUN_710392e290(0x10,ppplVar6,pppplVar5,param_4,param_5,param_6,param_7,param_8),
         lVar3 != 0)) goto LAB_71038762f8;
    }
    lVar3 = 0;
  }
LAB_71038762f8:
  lVar9 = lVar3 + lVar8 * 8;
  lVar7 = lVar3 + param_2 * 0x28;
  if (puVar17 == puVar16) {
    *param_1 = lVar9;
    param_1[1] = lVar9;
    param_1[2] = lVar7;
  }
  else {
    lVar10 = 0;
    do {
      uVar11 = *(undefined8 *)((long)puVar17 + lVar10 + -0x28);
      lVar1 = lVar3 + lVar8 * 8 + lVar10;
      *(undefined8 *)((long)puVar17 + lVar10 + -0x28) = 0;
      *(undefined8 *)(lVar1 + -0x28) = uVar11;
      *(undefined8 *)(lVar1 + -0x20) = *(undefined8 *)((long)puVar17 + lVar10 + -0x20);
      lVar13 = *(long *)((long)puVar17 + lVar10 + -0x18);
      *(undefined8 *)((long)puVar17 + lVar10 + -0x20) = 0;
      *(long *)(lVar1 + -0x18) = lVar13;
      lVar12 = *(long *)((long)puVar17 + lVar10 + -0x10);
      *(long *)(lVar1 + -0x10) = lVar12;
      *(undefined4 *)(lVar1 + -8) = *(undefined4 *)((long)puVar17 + lVar10 + -8);
      if (lVar12 != 0) {
        uVar14 = *(ulong *)(lVar1 + -0x20);
        uVar4 = *(ulong *)(lVar13 + 8);
        if ((uVar14 - 1 & uVar14) == 0) {
          uVar4 = uVar14 - 1 & uVar4;
        }
        else if (uVar14 <= uVar4) {
          uVar2 = 0;
          if (uVar14 != 0) {
            uVar2 = uVar4 / uVar14;
          }
          uVar4 = uVar4 - uVar2 * uVar14;
        }
        *(long *)(*(long *)(lVar1 + -0x28) + uVar4 * 8) = lVar1 + -0x18;
        *(undefined8 *)((long)puVar17 + lVar10 + -0x18) = 0;
        *(undefined8 *)((long)puVar17 + lVar10 + -0x10) = 0;
      }
      lVar10 = lVar10 + -0x28;
    } while ((long)puVar16 - (long)puVar17 != lVar10);
    puVar16 = (undefined8 *)*param_1;
    puVar17 = (undefined8 *)param_1[1];
    *param_1 = lVar3 + lVar8 * 8 + lVar10;
    param_1[1] = lVar9;
    param_1[2] = lVar7;
    while (puVar17 != puVar16) {
      FUN_7103878110((undefined8 *)puVar17[-3]);
      puVar17 = puVar17 + -5;
      pvVar15 = (void *)*puVar17;
      *puVar17 = 0;
      if (pvVar15 != (void *)0x0) {
        nu::VirtualFreeHook(pvVar15);
        FUN_710392eb40((ulong)pvVar15);
      }
    }
  }
  if (puVar16 == (undefined8 *)0x0) {
    return;
  }
  FUN_710392eb40((ulong)puVar16);
  return;
}

