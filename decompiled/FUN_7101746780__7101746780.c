// addr:      7101746780
// offset:    0x1746780
// name:      FUN_7101746780
// mangled:   
// signature: undefined __cdecl FUN_7101746780(undefined8 param_1, undefined8 param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101746780(undefined8 param_1,undefined8 param_2,undefined **param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong *puVar1;
  undefined *puVar2;
  ulong *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  undefined **ppuVar10;
  byte ****ppppbVar11;
  long ****pppplVar12;
  undefined *puVar13;
  ulong *puVar14;
  ulong *puVar15;
  long lVar16;
  double dVar17;
  byte local_80 [4];
  uint local_7c;
  undefined1 *local_78;
  undefined *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  ulong *local_50;
  undefined *local_48;
  
  if (((DAT_71053144d8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_71053144d8), iVar6 != 0)) {
    FUN_7101764000();
    param_3 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  if (((DAT_71053144d8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_71053144d8), iVar6 != 0)) {
    FUN_7101764000();
    param_3 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  if (((DAT_71053144d8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_71053144d8), iVar6 != 0)) {
    FUN_7101764000();
    param_3 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  if (((DAT_71053144d8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_71053144d8), iVar6 != 0)) {
    FUN_7101764000();
    param_3 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  puVar2 = DAT_710530e38c;
  puVar13 = DAT_710530e384;
  iVar6 = DAT_71053050f0;
  FUN_710375aa90((long *)&local_50,"hac_p_aaaba_match_end",(long ****)param_3,param_4,param_5,
                 param_6,param_7,param_8);
  puVar3 = local_50;
  if (((DAT_71052b92e0 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_71052b92e0), iVar7 != 0)) {
    __cxa_guard_release(&DAT_71052b92e0);
  }
  pppplVar12 = (long ****)0x5;
  ppppbVar11 = (byte ****)0x0;
  sprintf(&DAT_71052b92f5,"Ver. %d.%d.%d",0xd,0,5);
  nn::prepo::PlayReport::Add((char *)(*puVar3 + 0x4020),"app_version");
  puVar3 = local_50;
  local_70 = puVar13;
  nn::prepo::PlayReport::Add((char *)(*local_50 + 0x4020),(Any64BitId *)"match_id_lo");
  local_70 = puVar2;
  ppuVar10 = &local_70;
  nn::prepo::PlayReport::Add((char *)(*local_50 + 0x4020),(Any64BitId *)"match_id_hi");
  local_70 = (undefined *)0x0;
  FUN_71017436d0((int *)&local_48,(ulong *)&local_70,ppuVar10,ppppbVar11,pppplVar12,param_6,param_7,
                 param_8);
  nn::prepo::PlayReport::Add((char *)(*local_50 + 0x4020),0x71043bdd57);
  nn::prepo::PlayReport::Add((char *)(*local_50 + 0x4020),0x71043acdf1);
  local_48 = (undefined *)0x0;
  uVar8 = FUN_7101743910((ulong *)&local_48);
  if ((uVar8 & 1) != 0) {
    local_70 = local_48;
    nn::prepo::PlayReport::Add((char *)(*local_50 + 0x4020),(Any64BitId *)"event_type");
  }
  if (iVar6 == 0x7010300) {
    local_70 = (undefined *)
               (ulong)*(uint *)(*(long *)(*(long *)(DAT_71052c4c58 + 8) + 0x98) + 0x540);
    nn::prepo::PlayReport::Add((char *)(*local_50 + 0x4020),(Any64BitId *)"tournament_id");
  }
  local_70 = (undefined *)(ulong)DAT_71053144c8;
  nn::prepo::PlayReport::Add((char *)(*local_50 + 0x4020),(Any64BitId *)"gathering_id");
  plVar9 = *(long **)(*(long *)(DAT_710532f7d0 + 8) + 0x18);
  if ((plVar9 == (long *)0x0) || (uVar8 = (**(code **)(*plVar9 + 0x50))(), (uVar8 & 1) == 0)) {
    lVar16 = *(long *)(*(long *)(DAT_71052c4c58 + 8) + 0x88);
    if (*(long *)(lVar16 + 0x9ff8) == 0) goto LAB_71017469f0;
    uVar4 = FUN_71016f6340(lVar16 + 0xa010,*(long *)(lVar16 + 0x9ff8));
    puVar13 = (undefined *)0x1;
    if ((~uVar4 & 0xff) != 0) {
      if ((*(uint *)(lVar16 + 0xa000) & 1 << (ulong)(uVar4 & 0x1f)) == 0) {
        puVar13 = (undefined *)0x0;
      }
      else {
        if (*(long *)(lVar16 + 0x9ff0) == 0) {
          uVar5 = 0xff;
        }
        else {
          uVar5 = FUN_71016f6340(lVar16 + 0xa010,*(long *)(lVar16 + 0x9ff0));
        }
        puVar13 = (undefined *)(ulong)((uVar5 & 0xff) == (uVar4 & 0xff));
      }
    }
  }
  else {
LAB_71017469f0:
    puVar13 = (undefined *)0x1;
  }
  local_70 = puVar13;
  nn::prepo::PlayReport::Add((char *)(*local_50 + 0x4020),(Any64BitId *)"is_host");
  local_60 = 0;
  uStack_58 = 0;
  local_70 = (undefined *)0x0;
  uStack_68 = 0;
  FUN_710179eec0((undefined4 *)&local_70);
  uVar4 = (uint)local_70;
  lVar16 = (long)(int)(uint)local_70;
  if ((uint)local_70 < 8) {
    local_48 = (undefined *)(ulong)(uint)(&DAT_7105313f68)[lVar16 * 0x2c];
    nn::prepo::PlayReport::Add((char *)(*local_50 + 0x4020),(Any64BitId *)"rating");
    local_48 = (undefined *)(ulong)(uint)(&DAT_7105313f70)[lVar16 * 0x2c];
  }
  else {
    local_48 = (undefined *)0x0;
    nn::prepo::PlayReport::Add((char *)(*local_50 + 0x4020),(Any64BitId *)"rating");
    local_48 = (undefined *)0x0;
  }
  nn::prepo::PlayReport::Add((char *)(*local_50 + 0x4020),(Any64BitId *)&DAT_71044120cc);
  if (uVar4 < 8) {
    local_78 = (undefined1 *)(&DAT_7105313f10)[lVar16 * 0x16];
  }
  else {
    local_78 = &DAT_c1ffff0000000000;
  }
  local_7c = 0;
  local_80[0] = 0;
  FUN_71017994c0(&local_7c,local_80,0x15,&local_78);
  local_48 = (undefined *)(ulong)local_80[0];
  nn::prepo::PlayReport::Add((char *)(*local_50 + 0x4020),(Any64BitId *)"is_provisional");
  dVar17 = 0.0;
  if ((ulong)ABS((double)DAT_7105314498) < 0x7ff0000000000001) {
    dVar17 = (double)DAT_7105314498;
  }
  nn::prepo::PlayReport::Add((char *)(*local_50 + 0x4020),dVar17);
  dVar17 = 0.0;
  if ((ulong)ABS((double)(float)DAT_71053144a8) < 0x7ff0000000000001) {
    dVar17 = (double)(float)DAT_71053144a8;
  }
  nn::prepo::PlayReport::Add((char *)(*local_50 + 0x4020),dVar17);
  dVar17 = 0.0;
  if ((ulong)ABS((double)DAT_71053144a8._4_4_) < 0x7ff0000000000001) {
    dVar17 = (double)DAT_71053144a8._4_4_;
  }
  nn::prepo::PlayReport::Add((char *)(*local_50 + 0x4020),dVar17);
  dVar17 = 0.0;
  if ((ulong)ABS((double)(float)DAT_71053144b0) < 0x7ff0000000000001) {
    dVar17 = (double)(float)DAT_71053144b0;
  }
  nn::prepo::PlayReport::Add((char *)(*local_50 + 0x4020),dVar17);
  local_70 = (undefined *)(ulong)DAT_71053144b0._4_4_;
  nn::prepo::PlayReport::Add((char *)(*local_50 + 0x4020),(Any64BitId *)"experience");
  nn::prepo::PlayReport::Add((char *)(*local_50 + 0x4020),0x71042912e2);
  puVar14 = DAT_710533a0b8;
  puVar15 = (ulong *)(*DAT_710533a0b8 & 0xffffffffff);
  if ((((((ulong *)(*DAT_710533a0b8 & 0xffffffffff) != (ulong *)0x602cb94d8) &&
        (puVar14 = DAT_710533a0b8 + 3, puVar15 = puVar14, (*puVar14 & 0xffffffffff) != 0x602cb94d8))
       && (puVar14 = DAT_710533a0b8 + 6, puVar15 = puVar14, (*puVar14 & 0xffffffffff) != 0x602cb94d8
          )) && ((puVar14 = DAT_710533a0b8 + 9, puVar15 = puVar14,
                 (*puVar14 & 0xffffffffff) != 0x602cb94d8 &&
                 (puVar14 = DAT_710533a0b8 + 0xc, puVar15 = puVar14,
                 (*puVar14 & 0xffffffffff) != 0x602cb94d8)))) &&
     ((puVar14 = DAT_710533a0b8 + 0xf, puVar15 = puVar14, (*puVar14 & 0xffffffffff) != 0x602cb94d8
      && (puVar14 = DAT_710533a0b8 + 0x12, puVar15 = puVar14,
         (*puVar14 & 0xffffffffff) != 0x602cb94d8)))) {
    puVar14 = DAT_710533a0b8 + 0x15;
    puVar15 = (ulong *)(*puVar14 & 0xffffffffff);
    if (puVar15 != (ulong *)0x602cb94d8) goto LAB_7101746d48;
  }
  puVar1 = puVar14 + 1;
  puVar14 = (ulong *)0x0;
  if (*puVar1 != 0) {
    lVar16 = *(long *)(*puVar1 + 0x10);
    puVar15 = (ulong *)(ulong)*(uint *)(lVar16 + 0xec);
    puVar14 = (ulong *)(ulong)*(uint *)(lVar16 + 0xf4);
  }
LAB_7101746d48:
  uVar4 = 0;
  if ((uint)puVar15 < 0xd) {
    uVar4 = (uint)puVar15;
  }
  local_70 = (undefined *)(ulong)uVar4;
  uVar4 = 0;
  if ((uint)puVar14 < 0xd) {
    uVar4 = (uint)puVar14;
  }
  nn::prepo::PlayReport::Add((char *)(*local_50 + 0x4020),(Any64BitId *)"rtt_raw");
  local_70 = (undefined *)(ulong)uVar4;
  nn::prepo::PlayReport::Add((char *)(*local_50 + 0x4020),(Any64BitId *)"rtt_correct");
  dVar17 = 0.0;
  if ((ulong)ABS((double)(float)DAT_71053144b8) < 0x7ff0000000000001) {
    dVar17 = (double)(float)DAT_71053144b8;
  }
  nn::prepo::PlayReport::Add((char *)(*local_50 + 0x4020),dVar17);
  dVar17 = 0.0;
  if ((ulong)ABS((double)DAT_71053144b8._4_4_) < 0x7ff0000000000001) {
    dVar17 = (double)DAT_71053144b8._4_4_;
  }
  nn::prepo::PlayReport::Add((char *)(*local_50 + 0x4020),dVar17);
  dVar17 = 0.0;
  if ((ulong)ABS((double)DAT_71053144c0) < 0x7ff0000000000001) {
    dVar17 = (double)DAT_71053144c0;
  }
  nn::prepo::PlayReport::Add((char *)(*local_50 + 0x4020),dVar17);
  local_70 = (undefined *)(ulong)DAT_71053144c4;
  nn::prepo::PlayReport::Add((char *)(*local_50 + 0x4020),(Any64BitId *)"loss_ratio_dirty");
  iVar6 = *(int *)(*DAT_710593b580 + 0x7300);
  if ((iVar6 != -1) && (*(ulong *)(*DAT_710593b580 + 0x72c0) <= (ulong)(long)iVar6)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  nn::prepo::PlayReport::Save((Uid *)(*local_50 + 0x4020));
  local_50 = (ulong *)0x0;
  uVar8 = *puVar3;
  *puVar3 = 0;
  if (uVar8 != 0) {
    FUN_710392eb40(uVar8);
  }
  FUN_710392eb40((ulong)puVar3);
  return;
}

