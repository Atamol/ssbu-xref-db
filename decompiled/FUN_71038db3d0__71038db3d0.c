// addr:      71038db3d0
// offset:    0x38db3d0
// name:      FUN_71038db3d0
// mangled:   
// signature: undefined __cdecl FUN_71038db3d0(long * param_1, long * param_2, undefined8 * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71038db3d0(long *param_1,long *param_2,undefined8 *param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  undefined8 *puVar4;
  logic_error *this;
  byte ****ppppbVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  long *plVar13;
  long ****pppplVar14;
  long lVar15;
  undefined8 *local_68;
  long ****local_58;
  
  uVar6 = param_2[2];
  if (-uVar6 != -0x7ffffffffffffff) {
    uVar2 = uVar6;
    if (uVar6 == 0) {
      uVar2 = 1;
    }
    lVar15 = *param_2;
    lVar1 = 0x7ffffffffffffff;
    if (uVar2 <= -uVar6 + 0x7ffffffffffffff) {
      lVar1 = uVar2 + uVar6;
    }
    pppplVar14 = (long ****)(lVar1 << 5);
    ppppbVar5 = param_4;
    iVar3 = FUN_710392e1f0(&local_68,0x10,pppplVar14,param_4,param_5,param_6,param_7,param_8);
    if (((iVar3 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
       (local_58 = pppplVar14,
       uVar6 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_58), (uVar6 & 1) != 0)) {
      FUN_710392e1f0(&local_68,0x10,pppplVar14,ppppbVar5,param_5,param_6,param_7,param_8);
    }
    nu::VirtualAllocHook((ulong)pppplVar14,0x10,local_68);
    puVar4 = (undefined8 *)*param_2;
    puVar7 = local_68;
    if ((puVar4 != param_3) && (puVar4 != (undefined8 *)0x0)) {
      puVar7 = puVar4;
      puVar8 = local_68;
      do {
        *puVar8 = &PTR_FUN_71052395f0;
        puVar8[1] = puVar7[1];
        puVar8[2] = puVar7[2];
        uVar10 = puVar7[3];
        puVar7 = puVar7 + 4;
        *puVar8 = &PTR_FUN_7105239610;
        puVar8[3] = uVar10;
        puVar8 = puVar8 + 4;
      } while (param_3 != puVar7);
      puVar7 = (undefined8 *)
               ((long)local_68 +
               ((long)param_3 + (-0x20 - (long)puVar4) & 0xffffffffffffffe0U) + 0x20);
    }
    *puVar7 = &PTR_FUN_71052395f0;
    puVar7[1] = param_4[1];
    puVar7[2] = param_4[2];
    puVar8 = puVar7 + 4;
    puVar7[3] = param_4[3];
    *puVar7 = &PTR_FUN_7105239610;
    if (puVar4 != (undefined8 *)0x0) {
      lVar12 = param_2[1];
      puVar7 = puVar4 + lVar12 * 4;
      if (puVar7 != param_3) {
        puVar9 = param_3;
        puVar11 = puVar8;
        do {
          *puVar11 = &PTR_FUN_71052395f0;
          puVar11[1] = puVar9[1];
          puVar11[2] = puVar9[2];
          uVar10 = puVar9[3];
          puVar9 = puVar9 + 4;
          *puVar11 = &PTR_FUN_7105239610;
          puVar11[3] = uVar10;
          puVar11 = puVar11 + 4;
        } while (puVar7 != puVar9);
        lVar12 = param_2[1];
        puVar8 = (undefined8 *)
                 ((long)puVar8 +
                 ((long)puVar7 + (-0x20 - (long)param_3) & 0xffffffffffffffe0U) + 0x20);
      }
      for (; lVar12 != 0; lVar12 = lVar12 + -1) {
        (**(code **)*puVar4)(puVar4);
        puVar4 = puVar4 + 4;
      }
      plVar13 = (long *)*param_2;
      if (plVar13 != param_2 + 3) {
        nu::VirtualFreeHook(plVar13);
        FUN_710392eb40((ulong)plVar13);
      }
    }
    param_2[2] = lVar1;
    *param_2 = (long)local_68;
    param_2[1] = (long)puVar8 - (long)local_68 >> 5;
    *param_1 = (long)(local_68 + ((long)param_3 - lVar15 >> 5) * 4);
    return;
  }
  this = (logic_error *)__cxa_allocate_exception(0x10);
  std::logic_error::logic_error(this,"get_next_capacity, allocator\'s max_size reached");
  *(undefined **)this = &DAT_7107b4d010;
                    /* WARNING: Subroutine does not return */
  __cxa_throw(this,&std::length_error::typeinfo,std::length_error::~length_error);
}

