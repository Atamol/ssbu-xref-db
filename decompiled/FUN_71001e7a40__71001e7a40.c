// addr:      71001e7a40
// offset:    0x1e7a40
// name:      FUN_71001e7a40
// mangled:   
// signature: undefined __cdecl FUN_71001e7a40(long param_1, long param_2)


void FUN_71001e7a40(long param_1,long param_2)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  uint *puVar6;
  ulonglong uVar7;
  long *plVar8;
  undefined **local_230 [3];
  char *local_218;
  undefined **local_208 [3];
  char *local_1f0;
  undefined **local_178;
  undefined **ppuStack_170;
  long *local_168;
  char *local_160;
  undefined1 auStack_158 [8];
  undefined8 *local_150;
  undefined1 auStack_140 [8];
  undefined8 *local_138;
  undefined1 auStack_128 [8];
  undefined8 *local_120;
  long local_110;
  undefined1 local_107;
  long local_100;
  long local_f8;
  long lStack_f0;
  long local_e8;
  undefined4 local_e0;
  undefined **local_d8;
  long *local_d0;
  undefined8 **local_c0;
  undefined8 *local_b8;
  undefined8 uStack_b0;
  undefined8 **local_a8;
  undefined8 *local_a0;
  undefined8 uStack_98;
  undefined8 **local_90;
  undefined8 *local_88;
  undefined8 uStack_80;
  long local_78;
  ushort local_70;
  undefined1 local_6e;
  
  lVar3 = FUN_71001e8190(param_1 + 0x50,param_2);
  if (lVar3 != 0) {
    puVar4 = FUN_71001b1400();
    lVar5 = FUN_71001b17c0((long)puVar4);
    FUN_71001b3130(lVar5,2);
    puVar4 = FUN_71001b1400();
    lVar5 = FUN_71001b17c0((long)puVar4);
    FUN_71001b3140(lVar5,2);
    lVar5 = (long)DAT_7104f575e0;
    FUN_71001b12a0((ulong *)&local_178);
    *(long *)(lVar3 + 0x78) = (long)local_178 + lVar5;
    return;
  }
  local_78 = 0;
  local_b8 = (undefined8 *)0x0;
  uStack_b0 = 0;
  local_d8 = &PTR_FUN_7104f57900;
  local_a0 = (undefined8 *)0x0;
  uStack_98 = 0;
  local_c0 = &local_b8;
  local_a8 = &local_a0;
  local_90 = &local_88;
  local_88 = (undefined8 *)0x0;
  uStack_80 = 0;
  local_6e = 0;
  local_70 = 1;
  local_d0 = FUN_71001af850(0x90);
  if (local_d0 != (long *)0x0) {
    FUN_71001beb40(local_d0);
  }
  FUN_71001f1f40((long)&local_d8,param_2);
  puVar4 = FUN_71001b1400();
  lVar3 = FUN_71001b17c0((long)puVar4);
  FUN_71001b3130(lVar3,2);
  puVar4 = FUN_71001b1400();
  lVar3 = FUN_71001b17c0((long)puVar4);
  FUN_71001b3140(lVar3,2);
  plVar8 = &DAT_71052af128;
  if (DAT_71052af1d8 != '\0') {
    puVar6 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar1 = *puVar6;
    if (uVar1 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) goto LAB_71001e8140;
      plVar8 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x10);
    }
  }
  lVar3 = (**(code **)(**(long **)(*(long *)(*plVar8 + 0x10) + 0xe8) + 0x80))();
  if ((*(char *)(lVar3 + 0x10) == '\0') ||
     (uVar7 = FUN_71001f2ba0((long)&local_d8,"R",0), uVar7 == 0)) {
LAB_71001e7f74:
    FUN_71001f5fe0(&local_178,(long)&local_d8,DAT_7104f575e0,90000,0xc);
    plVar8 = FUN_71001b1820(0xb0);
    *plVar8 = 0;
    plVar8[2] = (long)&PTR_FUN_7104f57a78;
    plVar8[3] = (long)&PTR_FUN_7104f57900;
    plVar8[7] = 0;
    plVar8[6] = (long)(plVar8 + 7);
    plVar8[10] = 0;
    plVar8[8] = 0;
    plVar8[9] = (long)(plVar8 + 10);
    plVar8[0xd] = 0;
    plVar8[0xb] = 0;
    plVar8[0xc] = (long)(plVar8 + 0xd);
    plVar8[0xe] = 0;
    plVar8[0xf] = 0;
    *(undefined2 *)(plVar8 + 0x10) = 1;
    *(undefined1 *)((long)plVar8 + 0x82) = 0;
    puVar4 = FUN_71001af850(0x90);
    if (puVar4 != (undefined8 *)0x0) {
      FUN_71001beb40(puVar4);
    }
    plVar8[4] = (long)puVar4;
    FUN_71001f1f40((long)(plVar8 + 3),(long)&ppuStack_170);
    plVar8[0x11] = local_100;
    *(undefined4 *)(plVar8 + 0x15) = local_e0;
    plVar8[0x13] = lStack_f0;
    plVar8[0x14] = local_e8;
    plVar8[0x12] = local_f8;
    plVar8[1] = param_1 + 0x58;
    lVar3 = *(long *)(param_1 + 0x58);
    *plVar8 = lVar3;
    *(long **)(lVar3 + 8) = plVar8;
    *(long **)(param_1 + 0x58) = plVar8;
    *(long *)(param_1 + 0x68) = *(long *)(param_1 + 0x68) + 1;
    goto joined_r0x0071001e8074;
  }
  FUN_71001e9d00(&local_178,(long)&local_d8);
  bVar2 = FUN_71001b4e00(local_160,"");
  if ((bVar2) || (uVar7 = FUN_71001f2ba0((long)&local_d8,"Rp",0), (uVar7 & 0xffff) == 0)) {
LAB_71001e7c64:
    local_178 = &PTR_FUN_710509cc08;
    FUN_71001b4910((long)&local_178);
  }
  else {
    FUN_71001e9e10(local_208,(long)&local_d8);
    bVar2 = FUN_71001b4e00(local_1f0,"");
    if (bVar2) {
      local_208[0] = &PTR_FUN_710509cc08;
      FUN_71001b4910((long)local_208);
      goto LAB_71001e7c64;
    }
    uVar7 = FUN_71001f2ba0((long)&local_d8,"Rsp",0);
    local_208[0] = &PTR_FUN_710509cc08;
    FUN_71001b4910((long)local_208);
    local_178 = &PTR_FUN_710509cc08;
    FUN_71001b4910((long)&local_178);
    if ((uVar7 & 0xffff) != 0) {
      FUN_71001e9d00(&local_178,(long)&local_d8);
      if ((char)local_70 == '\0') {
        FUN_71001f2180((long)&local_d8);
      }
      local_70 = local_70 & 0xff;
      FUN_71001becd0((long)local_d0,local_160);
      local_178 = &PTR_FUN_710509cc08;
      FUN_71001b4910((long)&local_178);
      uVar7 = FUN_71001f2ba0((long)&local_d8,"Rp",0);
      if ((char)local_70 == '\0') {
        FUN_71001f2180((long)&local_d8);
      }
      FUN_71001bee30((long)local_d0,(ushort)uVar7);
      local_70 = local_70 & 0xff;
      FUN_71001beb40(&local_178);
      FUN_71001e9d00(local_208,(long)&local_d8);
      FUN_71001becd0((long)&local_178,local_1f0);
      local_208[0] = &PTR_FUN_710509cc08;
      FUN_71001b4910((long)local_208);
      uVar7 = FUN_71001f2ba0((long)&local_d8,"Rp",0);
      FUN_71001bee30((long)&local_178,(ushort)uVar7);
      FUN_71001beb40(local_208);
      FUN_71001e9e10(local_230,(long)&local_d8);
      FUN_71001becd0((long)local_208,local_218);
      local_230[0] = &PTR_FUN_710509cc08;
      FUN_71001b4910((long)local_230);
      uVar7 = FUN_71001f2ba0((long)&local_d8,"Rsp",0);
      FUN_71001bee30((long)local_208,(ushort)uVar7);
      plVar8 = &DAT_71052af128;
      if (DAT_71052af1d8 != '\0') {
        puVar6 = (uint *)FUN_7101717960(DAT_71052af1d0);
        uVar1 = *puVar6;
        if (uVar1 != 0) {
          if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar1) {
LAB_71001e8140:
            FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,
                           0);
            return;
          }
          plVar8 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar1 * 8) + 0x10);
        }
      }
      lVar3 = (**(code **)(**(long **)(*(long *)(*plVar8 + 0x10) + 0xe8) + 0x80))();
      FUN_71001f7bc0(*(long *)(lVar3 + 8) + 0x18,(long)&local_178,(long)local_208,1);
      FUN_71001e9fd0(param_1,(long)local_208);
      FUN_71001bef00();
      FUN_71001bef00();
      goto LAB_71001e7f74;
    }
  }
  puVar4 = FUN_71001b1400();
  lVar3 = FUN_71001b17c0((long)puVar4);
  FUN_71001b3130(lVar3,2);
  puVar4 = FUN_71001b1400();
  lVar3 = FUN_71001b17c0((long)puVar4);
  FUN_71001b3140(lVar3,2);
  FUN_71001f5fe0(&local_178,(long)&local_d8,DAT_7104f575e0,90000,0xc);
  plVar8 = FUN_71001b1820(0xb0);
  *plVar8 = 0;
  plVar8[2] = (long)&PTR_FUN_7104f57a78;
  plVar8[3] = (long)&PTR_FUN_7104f57900;
  plVar8[7] = 0;
  plVar8[6] = (long)(plVar8 + 7);
  plVar8[10] = 0;
  plVar8[8] = 0;
  plVar8[9] = (long)(plVar8 + 10);
  plVar8[0xd] = 0;
  plVar8[0xb] = 0;
  plVar8[0xc] = (long)(plVar8 + 0xd);
  plVar8[0xe] = 0;
  plVar8[0xf] = 0;
  *(undefined2 *)(plVar8 + 0x10) = 1;
  *(undefined1 *)((long)plVar8 + 0x82) = 0;
  puVar4 = FUN_71001af850(0x90);
  if (puVar4 != (undefined8 *)0x0) {
    FUN_71001beb40(puVar4);
  }
  plVar8[4] = (long)puVar4;
  FUN_71001f1f40((long)(plVar8 + 3),(long)&ppuStack_170);
  plVar8[0x11] = local_100;
  *(undefined4 *)(plVar8 + 0x15) = local_e0;
  plVar8[0x13] = lStack_f0;
  plVar8[0x14] = local_e8;
  plVar8[0x12] = local_f8;
  plVar8[1] = param_1 + 0x78;
  lVar3 = *(long *)(param_1 + 0x78);
  *plVar8 = lVar3;
  *(long **)(lVar3 + 8) = plVar8;
  *(long **)(param_1 + 0x78) = plVar8;
  *(long *)(param_1 + 0x88) = *(long *)(param_1 + 0x88) + 1;
joined_r0x0071001e8074:
  ppuStack_170 = &PTR_FUN_7104f57900;
  local_178 = &PTR_FUN_7104f57a78;
  if (local_110 != 0) {
    ppuStack_170 = &PTR_FUN_7104f57900;
    local_178 = &PTR_FUN_7104f57a78;
    FUN_71001b1870(local_110 + -4);
    local_110 = 0;
    local_107 = 0;
  }
  if (local_168 != (long *)0x0) {
    (**(code **)(*local_168 + 8))();
  }
  FUN_7101711670(auStack_128,local_120);
  FUN_7101711670(auStack_140,local_138);
  FUN_7100219ca0(auStack_158,local_150);
  local_d8 = &PTR_FUN_7104f57900;
  if (local_78 != 0) {
    FUN_71001b1870(local_78 + -4);
    local_78 = 0;
    local_70 = local_70 & 0xff;
  }
  if (local_d0 != (long *)0x0) {
    (**(code **)(*local_d0 + 8))();
  }
  FUN_7101711670(&local_90,local_88);
  FUN_7101711670(&local_a8,local_a0);
  FUN_7100219ca0(&local_c0,local_b8);
  return;
}

