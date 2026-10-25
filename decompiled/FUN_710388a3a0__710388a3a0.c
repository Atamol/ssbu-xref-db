// addr:      710388a3a0
// offset:    0x388a3a0
// name:      FUN_710388a3a0
// mangled:   
// signature: ulong __cdecl FUN_710388a3a0(undefined8 * param_1, long * param_2, uint * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


ulong FUN_710388a3a0(undefined8 *param_1,long *param_2,uint *param_3,byte ****param_4,
                    long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  logic_error *this;
  byte ****ppppbVar4;
  byte ***pppbVar5;
  ulong uVar6;
  byte **ppbVar7;
  byte *pbVar8;
  long lVar9;
  uint *puVar10;
  long *plVar11;
  long ****pppplVar12;
  long lVar13;
  uint *puVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  uint *local_70;
  long ****local_68;
  
  uVar6 = param_2[2];
  if (-uVar6 == -0x666666666666666) {
    this = (logic_error *)__cxa_allocate_exception(0x10);
    std::logic_error::logic_error(this,"get_next_capacity, allocator\'s max_size reached");
    *(undefined **)this = &DAT_7107b4d010;
                    /* WARNING: Subroutine does not return */
    __cxa_throw(this,&std::length_error::typeinfo,std::length_error::~length_error);
  }
  uVar2 = uVar6;
  if (uVar6 == 0) {
    uVar2 = 1;
  }
  lVar1 = 0x666666666666666;
  if (uVar2 <= -uVar6 + 0x666666666666666) {
    lVar1 = uVar2 + uVar6;
  }
  lVar13 = *param_2;
  pppplVar12 = (long ****)(lVar1 * 0x28);
  ppppbVar4 = param_4;
  iVar3 = FUN_710392e1f0(&local_70,0x10,pppplVar12,param_4,param_5,param_6,param_7,param_8);
  if (((iVar3 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
     (local_68 = pppplVar12, uVar6 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_68)
     , (uVar6 & 1) != 0)) {
    FUN_710392e1f0(&local_70,0x10,pppplVar12,ppppbVar4,param_5,param_6,param_7,param_8);
  }
  uVar6 = nu::VirtualAllocHook((ulong)pppplVar12,0x10,local_70);
  puVar14 = (uint *)*param_2;
  puVar10 = local_70;
  if ((puVar14 != param_3) && (puVar16 = puVar14, puVar17 = local_70, puVar14 != (uint *)0x0)) {
    do {
      local_68 = (long ****)(puVar17 + 2);
      uVar6 = FUN_710359d470(*puVar16 ^ (int)*puVar16 >> 0x1f,&local_68,(long)(puVar16 + 2));
      puVar15 = puVar16 + 10;
      puVar10 = puVar17 + 10;
      *puVar17 = *puVar16 ^ (int)*puVar16 >> 0x1f;
      puVar16 = puVar15;
      puVar17 = puVar10;
    } while (puVar15 != param_3);
  }
  pppbVar5 = (byte ***)0x0;
  if (param_4[2] != (byte ***)0x0) {
    if ((byte ***)*param_4[2] == param_4[3]) {
      pppbVar5 = param_4[1];
      if (pppbVar5 != (byte ***)0x0) {
        ppbVar7 = pppbVar5[1];
        pbVar8 = *ppbVar7;
        goto LAB_710388a500;
      }
    }
    else {
      pppbVar5 = (byte ***)0x0;
    }
  }
  ppbVar7 = (byte **)0x0;
  pbVar8 = (byte *)0x0;
LAB_710388a500:
  puVar16 = puVar10 + 10;
  *(undefined ***)(puVar10 + 2) = &PTR_FUN_7105231ad0;
  *(byte ****)(puVar10 + 4) = pppbVar5;
  *puVar10 = 0;
  *(byte ***)(puVar10 + 6) = ppbVar7;
  *(byte **)(puVar10 + 8) = pbVar8;
  if (puVar14 != (uint *)0x0) {
    lVar9 = param_2[1];
    puVar10 = param_3;
    if (puVar14 + lVar9 * 10 != param_3) {
      do {
        local_68 = (long ****)(puVar16 + 2);
        uVar6 = FUN_710359d470(*puVar10 ^ (int)*puVar10 >> 0x1f,&local_68,(long)(puVar10 + 2));
        puVar17 = puVar10 + 10;
        puVar15 = puVar16 + 10;
        *puVar16 = *puVar10 ^ (int)*puVar10 >> 0x1f;
        puVar10 = puVar17;
        puVar16 = puVar15;
      } while (puVar17 != puVar14 + lVar9 * 10);
      lVar9 = param_2[1];
    }
    for (; lVar9 != 0; lVar9 = lVar9 + -1) {
      uVar6 = FUN_7103599990(*puVar14 ^ (int)*puVar14 >> 0x1f,(undefined8 *)(puVar14 + 2));
      puVar14 = puVar14 + 10;
    }
    plVar11 = (long *)*param_2;
    if (plVar11 != param_2 + 3) {
      nu::VirtualFreeHook(plVar11);
      uVar6 = FUN_710392eb40((ulong)plVar11);
    }
  }
  param_2[2] = lVar1;
  *param_2 = (long)local_70;
  param_2[1] = ((long)puVar16 - (long)local_70 >> 3) * -0x3333333333333333;
  *param_1 = local_70 + ((long)param_3 - lVar13 >> 3) * 2;
  return uVar6;
}

