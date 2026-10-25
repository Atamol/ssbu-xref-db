// addr:      710198a180
// offset:    0x198a180
// name:      FUN_710198a180
// mangled:   
// signature: undefined __cdecl FUN_710198a180(long param_1, undefined8 param_2, undefined * * param_3, undefined8 param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_710198a180(long param_1,undefined8 param_2,undefined **param_3,undefined8 param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  long *plVar14;
  undefined1 *puVar15;
  long lVar16;
  undefined **local_f8;
  ulong local_f0 [8];
  undefined **local_b0;
  ulong local_a8 [9];
  
  if (((DAT_71053144d8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_71053144d8), iVar4 != 0)) {
    FUN_7101764000();
    param_3 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  piVar5 = FUN_71032df050(*(long *)(DAT_710532f7b0 + 8),DAT_7105307d50);
  lVar13 = *(long *)(DAT_710532f730 + 8);
  FUN_7103776910(&local_f8,param_1 + 0x30,(long ****)"set_txt_val",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  uVar6 = FUN_7103289860(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x238),(short)piVar5[0x27]);
  FUN_71032888e0((uint *)&local_b0,*(long *)(lVar13 + 0x238),uVar6,param_4,param_5,param_6,param_7,
                 param_8);
  FUN_710377a120((long)&local_f8,(char *)local_a8,uVar6,param_4,param_5,param_6,param_7,param_8);
  uVar7 = local_f0[0];
  local_f8 = &PTR_FUN_710523d9a8;
  local_f0[0] = 0;
  if (uVar7 != 0) {
    FUN_710392eb40(uVar7);
  }
  FUN_7103776910(&local_f8,param_1 + 0x40,(long ****)"set_txt_val",uVar6,param_4,param_5,param_6,
                 param_7,param_8);
  uVar7 = FUN_7103285e70(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x248),
                         *(short *)((long)piVar5 + 0x9e));
  FUN_7103284890((uint *)&local_b0,*(long *)(lVar13 + 0x248),uVar7,param_4,param_5,param_6,param_7,
                 param_8);
  FUN_710377a120((long)&local_f8,(char *)local_a8,uVar7,param_4,param_5,param_6,param_7,param_8);
  uVar7 = local_f0[0];
  local_f8 = &PTR_FUN_710523d9a8;
  local_f0[0] = 0;
  if (uVar7 != 0) {
    FUN_710392eb40(uVar7);
  }
  FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x58),0x7104307e8f);
  FUN_7103778430(param_1 + 0x50,"color_%02d",(ulong)*(byte *)((long)piVar5 + 0x12),param_4,param_5,
                 param_6,param_7,param_8);
  uVar3 = 0;
  if (*(byte *)((long)piVar5 + 0x13) < 3) {
    uVar3 = (uint)*(byte *)((long)piVar5 + 0x13);
  }
  uVar10 = 0;
  if (*(byte *)(piVar5 + 5) < 3) {
    uVar10 = (uint)*(byte *)(piVar5 + 5);
  }
  uVar11 = 0;
  if (*(byte *)((long)piVar5 + 0x15) < 3) {
    uVar11 = (uint)*(byte *)((long)piVar5 + 0x15);
  }
  uVar12 = 0;
  if (*(byte *)((long)piVar5 + 0x16) < 3) {
    uVar12 = (uint)*(byte *)((long)piVar5 + 0x16);
  }
  lVar1 = param_1 + 0x60;
  FUN_7103776910(&local_f8,lVar1,(long ****)"set_txt_num_%02d",0,param_4,param_5,param_6,param_7,
                 param_8);
  uVar7 = local_f0[0];
  plVar14 = *(long **)(local_f0[0] + 0x10);
  if (plVar14 != (long *)0x0) {
    param_5 = (long ****)0x0;
    param_6 = 0;
    local_a8[5] = 0;
    local_a8[6] = 0;
    local_a8[3] = 0;
    local_a8[4] = 0;
    local_a8[1] = 0;
    local_a8[2] = 0;
    local_b0 = (undefined **)0x0;
    local_a8[0] = 0;
    uVar2 = FUN_71037ad940((long)&local_b0,0x20,0,uVar3 + 1,0,0);
    FUN_71037a2270(plVar14,(ushort *)&local_b0,uVar2,0);
  }
  local_f8 = &PTR_FUN_710523d9a8;
  local_f0[0] = 0;
  if (uVar7 != 0) {
    FUN_710392eb40(uVar7);
  }
  puVar15 = *(undefined1 **)(piVar5 + 2);
  lVar16 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x168);
  uVar2 = FUN_71032632a0(lVar16,(ulong)puVar15);
  if ((uVar2 & 1) != 0) {
    puVar15 = FUN_71032631a0(lVar16,0x11b1ccb807);
  }
  FUN_7103262310((uint *)&local_b0,lVar16,(ulong)puVar15);
  puVar9 = local_a8;
  FUN_71003a4ca0((uint *)&local_f8,"nam_special_%s_%02d_%s","normal",(ulong)uVar3,puVar9,param_5,
                 param_6,param_7,param_8);
  uVar8 = 0;
  FUN_7103776910(&local_b0,lVar1,(long ****)"set_txt_name_%02d",0,puVar9,param_5,param_6,param_7,
                 param_8);
  FUN_710377a120((long)&local_b0,(char *)local_f0,uVar8,puVar9,param_5,param_6,param_7,param_8);
  uVar7 = local_a8[0];
  local_b0 = &PTR_FUN_710523d9a8;
  local_a8[0] = 0;
  if (uVar7 != 0) {
    FUN_710392eb40(uVar7);
  }
  FUN_7103776910(&local_f8,lVar1,(long ****)"set_txt_num_%02d",1,puVar9,param_5,param_6,param_7,
                 param_8);
  uVar7 = local_f0[0];
  plVar14 = *(long **)(local_f0[0] + 0x10);
  if (plVar14 != (long *)0x0) {
    param_5 = (long ****)0x0;
    param_6 = 0;
    local_a8[5] = 0;
    local_a8[6] = 0;
    local_a8[3] = 0;
    local_a8[4] = 0;
    local_a8[1] = 0;
    local_a8[2] = 0;
    local_b0 = (undefined **)0x0;
    local_a8[0] = 0;
    uVar3 = FUN_71037ad940((long)&local_b0,0x20,0,uVar10 + 1,0,0);
    FUN_71037a2270(plVar14,(ushort *)&local_b0,uVar3,0);
  }
  local_f8 = &PTR_FUN_710523d9a8;
  local_f0[0] = 0;
  if (uVar7 != 0) {
    FUN_710392eb40(uVar7);
  }
  puVar15 = *(undefined1 **)(piVar5 + 2);
  lVar16 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x168);
  uVar3 = FUN_71032632a0(lVar16,(ulong)puVar15);
  if ((uVar3 & 1) != 0) {
    puVar15 = FUN_71032631a0(lVar16,0x11b1ccb807);
  }
  FUN_7103262310((uint *)&local_b0,lVar16,(ulong)puVar15);
  puVar9 = local_a8;
  FUN_71003a4ca0((uint *)&local_f8,"nam_special_%s_%02d_%s",&DAT_71043ef195,(ulong)uVar10,puVar9,
                 param_5,param_6,param_7,param_8);
  uVar8 = 1;
  FUN_7103776910(&local_b0,lVar1,(long ****)"set_txt_name_%02d",1,puVar9,param_5,param_6,param_7,
                 param_8);
  FUN_710377a120((long)&local_b0,(char *)local_f0,uVar8,puVar9,param_5,param_6,param_7,param_8);
  uVar7 = local_a8[0];
  local_b0 = &PTR_FUN_710523d9a8;
  local_a8[0] = 0;
  if (uVar7 != 0) {
    FUN_710392eb40(uVar7);
  }
  FUN_7103776910(&local_f8,lVar1,(long ****)"set_txt_num_%02d",2,puVar9,param_5,param_6,param_7,
                 param_8);
  uVar7 = local_f0[0];
  plVar14 = *(long **)(local_f0[0] + 0x10);
  if (plVar14 != (long *)0x0) {
    param_5 = (long ****)0x0;
    param_6 = 0;
    local_a8[5] = 0;
    local_a8[6] = 0;
    local_a8[3] = 0;
    local_a8[4] = 0;
    local_a8[1] = 0;
    local_a8[2] = 0;
    local_b0 = (undefined **)0x0;
    local_a8[0] = 0;
    uVar3 = FUN_71037ad940((long)&local_b0,0x20,0,uVar11 + 1,0,0);
    FUN_71037a2270(plVar14,(ushort *)&local_b0,uVar3,0);
  }
  local_f8 = &PTR_FUN_710523d9a8;
  local_f0[0] = 0;
  if (uVar7 != 0) {
    FUN_710392eb40(uVar7);
  }
  puVar15 = *(undefined1 **)(piVar5 + 2);
  lVar16 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x168);
  uVar3 = FUN_71032632a0(lVar16,(ulong)puVar15);
  if ((uVar3 & 1) != 0) {
    puVar15 = FUN_71032631a0(lVar16,0x11b1ccb807);
  }
  FUN_7103262310((uint *)&local_b0,lVar16,(ulong)puVar15);
  puVar9 = local_a8;
  FUN_71003a4ca0((uint *)&local_f8,"nam_special_%s_%02d_%s","upper",(ulong)uVar11,puVar9,param_5,
                 param_6,param_7,param_8);
  uVar8 = 2;
  FUN_7103776910(&local_b0,lVar1,(long ****)"set_txt_name_%02d",2,puVar9,param_5,param_6,param_7,
                 param_8);
  FUN_710377a120((long)&local_b0,(char *)local_f0,uVar8,puVar9,param_5,param_6,param_7,param_8);
  uVar7 = local_a8[0];
  local_b0 = &PTR_FUN_710523d9a8;
  local_a8[0] = 0;
  if (uVar7 != 0) {
    FUN_710392eb40(uVar7);
  }
  FUN_7103776910(&local_f8,lVar1,(long ****)"set_txt_num_%02d",3,puVar9,param_5,param_6,param_7,
                 param_8);
  uVar7 = local_f0[0];
  plVar14 = *(long **)(local_f0[0] + 0x10);
  if (plVar14 != (long *)0x0) {
    param_5 = (long ****)0x0;
    param_6 = 0;
    local_a8[5] = 0;
    local_a8[6] = 0;
    local_a8[3] = 0;
    local_a8[4] = 0;
    local_a8[1] = 0;
    local_a8[2] = 0;
    local_b0 = (undefined **)0x0;
    local_a8[0] = 0;
    uVar3 = FUN_71037ad940((long)&local_b0,0x20,0,uVar12 + 1,0,0);
    FUN_71037a2270(plVar14,(ushort *)&local_b0,uVar3,0);
  }
  local_f8 = &PTR_FUN_710523d9a8;
  local_f0[0] = 0;
  if (uVar7 != 0) {
    FUN_710392eb40(uVar7);
  }
  puVar15 = *(undefined1 **)(piVar5 + 2);
  lVar16 = *(long *)(*(long *)(DAT_710532f730 + 8) + 0x168);
  uVar3 = FUN_71032632a0(lVar16,(ulong)puVar15);
  if ((uVar3 & 1) != 0) {
    puVar15 = FUN_71032631a0(lVar16,0x11b1ccb807);
  }
  FUN_7103262310((uint *)&local_b0,lVar16,(ulong)puVar15);
  puVar9 = local_a8;
  FUN_71003a4ca0((uint *)&local_f8,"nam_special_%s_%02d_%s","lower",(ulong)uVar12,puVar9,param_5,
                 param_6,param_7,param_8);
  uVar8 = 3;
  FUN_7103776910(&local_b0,lVar1,(long ****)"set_txt_name_%02d",3,puVar9,param_5,param_6,param_7,
                 param_8);
  FUN_710377a120((long)&local_b0,(char *)local_f0,uVar8,puVar9,param_5,param_6,param_7,param_8);
  uVar7 = local_a8[0];
  local_b0 = &PTR_FUN_710523d9a8;
  local_a8[0] = 0;
  if (uVar7 != 0) {
    FUN_710392eb40(uVar7);
  }
  FUN_7103776910(&local_b0,param_1 + 0x70,(long ****)"set_txt_val",uVar8,puVar9,param_5,param_6,
                 param_7,param_8);
  if (*(byte *)(piVar5 + 0x28) == 0x25) {
    FUN_710377a120((long)&local_b0,"mnu_mmiif_setup_voice_type_none",uVar8,puVar9,param_5,param_6,
                   param_7,param_8);
  }
  else {
    FUN_710328cb60(*(long *)(lVar13 + 600),(uint)*(byte *)(piVar5 + 0x28));
    FUN_710377a280((long)&local_b0,(byte *)"mnu_mmiif_setup_voice_type_n",1);
  }
  uVar7 = local_a8[0];
  local_b0 = &PTR_FUN_710523d9a8;
  local_a8[0] = 0;
  if (uVar7 != 0) {
    FUN_710392eb40(uVar7);
  }
  return;
}

