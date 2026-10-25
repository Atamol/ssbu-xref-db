// addr:      710046bc70
// offset:    0x46bc70
// name:      FUN_710046bc70
// mangled:   
// signature: undefined __cdecl FUN_710046bc70(uint * param_1, uint param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_710046bc70(uint *param_1,uint param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ushort *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  long ****pppplVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long lVar13;
  uint uVar14;
  byte local_100 [18];
  undefined6 uStack_ee;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long ***local_b8;
  undefined8 local_b0;
  char *local_a8;
  undefined1 *local_a0;
  undefined1 *puStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 *puStack_78;
  undefined1 *local_70;
  undefined1 *puStack_68;
  undefined4 local_54;
  
  if (*(char *)((long)param_1 + 0x49) == '\0') {
    return;
  }
  if (*param_1 == 3) {
    return;
  }
  if ((*(uint *)(*(long *)(param_1 + 0x10) + 0xc) & 0x7f) == 0) {
    return;
  }
  local_a0 = &DAT_3f8000003f800000;
  puStack_98 = &DAT_3f8000003f800000;
  uVar14 = (uint)param_3;
  if (((DAT_7105333fc8 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_7105333fc8), iVar7 != 0)) {
    DAT_7105333f80 = 0x3f80000000000000;
    DAT_7105333f88 = 0x3f80000000000000;
    __cxa_guard_release(&DAT_7105333fc8);
  }
  local_90 = DAT_7105333f80;
  uStack_88 = DAT_7105333f88;
  if (((DAT_7105333fd0 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_7105333fd0), iVar7 != 0)) {
    DAT_7105333f90 = 0;
    DAT_7105333f98 = &DAT_3f8000003f800000;
    __cxa_guard_release(&DAT_7105333fd0);
  }
  lVar13 = DAT_7105335b00;
  local_80 = DAT_7105333f90;
  puStack_78 = DAT_7105333f98;
  local_70 = &DAT_3f8000003f800000;
  puStack_68 = &DAT_3f8000003f800000;
  uVar2 = *param_1;
  if ((int)*param_1 <= (int)param_2) {
    uVar2 = param_2;
  }
  if (uVar2 == 0) {
    return;
  }
  (&uStack_94)[(ulong)uVar2 * 4] = 0x3f800000;
  if (*(char *)(*(long *)(param_1 + 0x10) + 0x84) == '\0') {
    return;
  }
  uVar3 = *(uint *)(DAT_7105335b00 + 0x538);
  bVar5 = *(byte *)(DAT_7105335b00 + 0x534);
  puVar1 = (ushort *)(DAT_7105335b00 + 0x500);
  if (3 < uVar3 - 1) {
    uVar3 = 0;
  }
  FUN_71035908f0(puVar1);
  lVar10 = DAT_7105335b00;
  uVar4 = *(uint *)(puVar1 + (ulong)*(uint *)(lVar13 + 0x528) * 0x34 + 0x62);
  uVar6 = 1 << (ulong)(uVar14 & 0x1f);
  uVar14 = *(uint *)(DAT_7105335b00 + 0x538);
  *(char *)(DAT_7105335b00 + 0x534) = (char)uVar6;
  if ((uVar14 & 0xfffffffe) == 2) {
    if (uVar14 == 2) {
      lVar13 = lVar10 + (ulong)(uVar6 & 0xff) * 0x20;
      uVar14 = 0x5f60;
    }
    else if (uVar14 == 3) {
      lVar13 = lVar10 + (ulong)(uVar6 & 0xff) * 0x20;
      uVar14 = 0x7f60;
    }
    else {
      lVar13 = lVar10 + (ulong)uVar14 * 0x20;
      uVar14 = 0x5ec0;
    }
    *(ulong *)(lVar10 + 0x540) = lVar13 + (ulong)(uVar14 | 0x60000);
  }
  *(undefined4 *)(lVar10 + 0x538) = 3;
  *(ulong *)(lVar10 + 0x540) = lVar10 + (ulong)(uVar6 & 0xff) * 0x20 + 0x67f60;
  local_100[0] = 0x20;
  uStack_ee = 0;
  local_100[9] = 0x4c;
  local_100[10] = 0x45;
  local_100[0xb] = 0x5f;
  local_100[0xc] = 0x50;
  local_100[0xd] = 0x41;
  local_100[0xe] = 0x52;
  local_100[0xf] = 0x54;
  local_100[0x10] = 0x53;
  local_100[1] = 0x49;
  local_100[2] = 0x4e;
  local_100[3] = 0x56;
  local_100[4] = 0x49;
  local_100[5] = 0x4e;
  local_100[6] = 0x43;
  local_100[7] = 0x49;
  local_100[8] = 0x42;
  local_100[0x11] = 0;
  local_a8 = (char *)FUN_710392e290(0x10,0x20,param_3,param_4,param_5,param_6,param_7,param_8);
  if (local_a8 == (char *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_54 = 0;
      local_b8 = (long ***)&SUB_00000020;
      pppplVar9 = &local_b8;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
      if (((uVar8 & 1) != 0) &&
         (local_a8 = (char *)FUN_710392e290(0x10,0x20,pppplVar9,param_4,param_5,param_6,param_7,
                                            param_8), local_a8 != (char *)0x0)) goto LAB_710046be80;
    }
    local_a8 = (char *)0x0;
  }
LAB_710046be80:
  local_b8 = (long ***)&DAT_00000021;
  local_b0 = 0x19;
  builtin_strncpy(local_a8,"Combiner_INVINCIBLE_PARTS",0x1a);
  FUN_710359e710(local_100,(byte *)&local_b8);
  if ((((ulong)local_b8 & 1) != 0) && (local_a8 != (char *)0x0)) {
    FUN_710392eb40((ulong)local_a8);
  }
  if (((local_100[0] & 1) != 0) &&
     (uVar8 = CONCAT62(uStack_ee,CONCAT11(local_100[0x11],local_100[0x10])), uVar8 != 0)) {
    FUN_710392eb40(uVar8);
  }
  (**(code **)(**(long **)(param_1 + 0x10) + 0x18))
            (0x3f800000,0,*(long **)(param_1 + 0x10),&local_a0 + (ulong)uVar2 * 2,0);
  FUN_710359e5e0(uVar3,bVar5);
  local_100[0] = 0;
  local_100[1] = 0;
  local_100[2] = 0;
  local_100[3] = 0;
  local_100[4] = 0;
  local_100[5] = 0;
  local_100[6] = 0;
  local_100[7] = 0;
  local_100[8] = 0;
  local_100[9] = 0;
  local_100[10] = 0;
  local_100[0xb] = 0;
  local_100[0xc] = 0;
  local_100[0xd] = 0;
  local_100[0xe] = 0;
  local_100[0xf] = 0;
  local_100[0x10] = 0;
  local_100[0x11] = 0;
  uStack_ee = 0;
  local_b8 = (long ***)0x0;
  local_b0 = 0;
  local_a8 = (char *)0x0;
  FUN_710359e710(local_100,(byte *)&local_b8);
  if ((((ulong)local_b8 & 1) != 0) && (local_a8 != (char *)0x0)) {
    FUN_710392eb40((ulong)local_a8);
  }
  if (((local_100[0] & 1) != 0) &&
     (uVar8 = CONCAT62(uStack_ee,CONCAT11(local_100[0x11],local_100[0x10])), uVar8 != 0)) {
    FUN_710392eb40(uVar8);
  }
  lVar13 = DAT_7105335b00;
  if ((int)uVar4 < 0) goto LAB_710046c010;
  if ((ulong)(*(long *)(DAT_7105335b00 + 0x4dcdd8) - *(long *)(DAT_7105335b00 + 0x4dcdd0) >> 5) <=
      ((ulong)uVar4 & 7)) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  lVar10 = *(long *)(DAT_7105335b00 + 0x4dcdd0) + ((ulong)uVar4 & 7) * 0x20;
  if ((*(long **)(lVar10 + 0x10) == (long *)0x0) ||
     (**(long **)(lVar10 + 0x10) != *(long *)(lVar10 + 0x18))) {
    *(undefined8 *)(DAT_7105335b00 + 0x4dcdb8) = 0;
LAB_710046bfe4:
    uVar12 = 0;
    *(undefined8 *)(lVar13 + 0x4dcdc0) = 0;
  }
  else {
    lVar10 = *(long *)(lVar10 + 8);
    *(long *)(DAT_7105335b00 + 0x4dcdb8) = lVar10;
    if (lVar10 == 0) goto LAB_710046bfe4;
    puVar11 = *(undefined8 **)(lVar10 + 8);
    *(undefined8 **)(lVar13 + 0x4dcdc0) = puVar11;
    uVar12 = *puVar11;
  }
  *(undefined8 *)(lVar13 + 0x4dcdc8) = uVar12;
  if (*(uint *)(lVar13 + 0x52c) != uVar4) {
    *(uint *)(lVar13 + 0x52c) = uVar4;
  }
LAB_710046c010:
  local_100[8] = 0;
  local_100[9] = 0;
  local_100[10] = 0;
  local_100[0xb] = 0;
  local_100[0xc] = 0;
  local_100[0xd] = 0;
  local_100[0xe] = 0;
  local_100[0xf] = 0;
  local_100[0] = 0;
  local_100[1] = 0;
  local_100[2] = 0x80;
  local_100[3] = 0x3f;
  local_100[4] = 0;
  local_100[5] = 0;
  local_100[6] = 0;
  local_100[7] = 0;
  uStack_e8 = 0;
  local_100[0x10] = 0;
  local_100[0x11] = 0;
  uStack_ee = 0x3f8000000000;
  uStack_d8 = 0x3f800000;
  local_e0 = 0;
  uStack_c8 = 0x3f80000000000000;
  uStack_d0 = 0;
  FUN_7103594510(lVar13,(long *)local_100);
  return;
}

