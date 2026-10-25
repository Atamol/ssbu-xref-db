// addr:      710170dfb0
// offset:    0x170dfb0
// name:      FUN_710170dfb0
// mangled:   
// signature: undefined __cdecl FUN_710170dfb0(long param_1, long param_2, char * param_3)


void FUN_710170dfb0(long param_1,long param_2,char *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined1 *local_158;
  undefined8 **local_150;
  undefined8 *local_148;
  undefined8 local_140;
  undefined8 **local_138;
  undefined8 uStack_130;
  undefined **local_128;
  undefined1 local_120;
  undefined1 local_11f;
  undefined2 local_11e;
  undefined1 local_11c;
  undefined8 local_118;
  undefined1 local_110;
  undefined1 local_10f;
  undefined1 local_10e;
  undefined **local_108;
  undefined1 local_100;
  undefined8 local_fc;
  undefined **local_f0;
  undefined1 local_e8;
  undefined8 local_e4;
  long local_d8;
  long local_d0;
  undefined8 uStack_c8;
  undefined **local_c0;
  undefined1 local_b8 [16];
  undefined1 *local_a8;
  undefined8 uStack_a0;
  long *local_98;
  long *local_90;
  long *local_88;
  undefined8 *local_80;
  undefined8 *local_78;
  undefined8 *puStack_70;
  
  lVar5 = 0;
  local_78 = (undefined8 *)0x0;
  puStack_70 = (undefined8 *)0x0;
  lVar3 = 0x2e0;
  local_88 = (long *)0x0;
  local_80 = (undefined8 *)0x0;
  local_98 = (long *)0x0;
  local_90 = (long *)0x0;
  do {
    local_108 = &PTR_FUN_710509ce78;
    local_128 = &PTR_FUN_710509ce58;
    local_120 = 0;
    local_100 = 0;
    local_fc = 0;
    local_e8 = 0;
    local_d8 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_f0 = &PTR_FUN_710509ce98;
    local_e4 = 0;
    FUN_710170f100(&local_d8,(undefined4 *)0x0,(undefined4 *)0x0);
    local_c0 = &PTR_FUN_710509cc08;
    uStack_a0 = 0x10;
    local_b8[0] = 0;
    local_128 = &PTR_FUN_710509ceb8;
    local_a8 = local_b8;
    FUN_710170f2f0((long)&local_128);
    lVar2 = param_2 + lVar5;
    if (*(char *)(lVar2 + 0x20) != '\0') {
      local_11f = *(undefined1 *)(lVar2 + 0x21);
      local_11e = *(undefined2 *)(lVar2 + 0x26);
      local_11c = *(undefined1 *)(lVar2 + 0x25);
      local_110 = *(undefined1 *)(lVar2 + 0x22);
      local_10f = *(undefined1 *)(lVar2 + 0x23);
      local_10e = *(undefined1 *)(lVar2 + 0x24);
      local_150 = (undefined8 **)&PTR_FUN_710509cc08;
      local_148 = (undefined8 *)((ulong)local_148 & 0xffffffffffffff00);
      uStack_130 = 0x10;
      local_138 = &local_148;
      FUN_71001b47e0((long)&local_150,(char *)(lVar2 + 0x48),-1);
      FUN_71001b2f70((long)&local_c0,(long)&local_150);
      local_150 = (undefined8 **)&PTR_FUN_710509cc08;
      FUN_71001b4910((long)&local_150);
      local_118 = *(undefined8 *)(lVar2 + 0x50);
      local_150 = (undefined8 **)&PTR_FUN_710509ce78;
      local_148 = (undefined8 *)
                  (CONCAT44(*(undefined4 *)(lVar2 + 0x58),(int)local_148) & 0xffffffffffffff00);
      local_140 = CONCAT44(local_140._4_4_,*(undefined4 *)(lVar2 + 0x5c));
      FUN_71002611f0((long)&local_108,(long)&local_150);
      puVar4 = local_78;
      if (local_78 == puStack_70) {
        FUN_710170f5a0((long *)&local_80,(long)&local_128);
      }
      else {
        FUN_710170f400(local_78,(long)&local_128);
        *puVar4 = &PTR_FUN_710509ceb8;
        local_78 = local_78 + 0x12;
      }
    }
    lVar2 = *(long *)(param_2 + lVar3);
    if (lVar2 != 0) {
      if (local_90 == local_88) {
        FUN_710170f730((long *)&local_98,(long *)(param_2 + lVar3));
      }
      else {
        *local_90 = lVar2;
        local_90 = local_90 + 1;
      }
    }
    local_128 = &PTR_FUN_710509ce58;
    local_c0 = &PTR_FUN_710509cc08;
    FUN_71001b4910((long)&local_c0);
    local_f0 = &PTR_FUN_710509ced8;
    if (local_d8 != 0) {
      local_d0 = local_d8;
      FUN_71001b1870(local_d8);
    }
    lVar5 = lVar5 + 0x58;
    lVar3 = lVar3 + 8;
  } while (lVar5 != 0x2c0);
  *(undefined1 *)(param_1 + 9) = 1;
  *(char *)(param_1 + 10) = (char)*(undefined4 *)(param_2 + 8);
  *(char *)(param_1 + 0xb) = (char)*(undefined4 *)(param_2 + 0xc);
  *(char *)(param_1 + 0xc) = (char)*(undefined4 *)(param_2 + 0x10);
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0x14);
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0x15);
  if ((undefined8 **)(param_1 + 0x10) != &local_80) {
    FUN_710170dab0((long *)(param_1 + 0x10),(long)local_80,(long)local_78);
  }
  if ((long **)(param_1 + 0x28) != &local_98) {
    FUN_710170d6f0((long **)(param_1 + 0x28),local_98,local_90);
  }
  *(undefined2 *)(param_1 + 0x40) = *(undefined2 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x18);
  local_148 = (undefined8 *)0x0;
  local_140 = 0;
  local_150 = &local_148;
  FUN_710170e860((long *)&local_150,"country",param_3);
  FUN_710170e9d0((long *)&local_150,"version",(uint *)(param_3 + 0x20));
  FUN_710170eb40((long *)&local_150,"stage",(uint *)(param_3 + 0x24));
  FUN_710170ecb0((long *)&local_150,"stage_type",(uint *)(param_3 + 0x28));
  FUN_710170ee20((long *)&local_150,"use_spirits",(byte *)(param_3 + 0x2c));
  FUN_710170ecb0((long *)&local_150,"melee_mode",(uint *)(param_3 + 0x30));
  FUN_710170ecb0((long *)&local_150,"melee_kind",(uint *)(param_3 + 0x34));
  FUN_710170ecb0((long *)&local_150,"melee_rule",(uint *)(param_3 + 0x38));
  FUN_710170ef90((long *)&local_150,"score",(undefined8 *)(param_3 + 0x40));
  FUN_710170ecb0((long *)&local_150,"movie_time",(uint *)(param_3 + 0x48));
  if (param_3[0x4c] != 0xff) {
    local_120 = 0;
    local_128 = (undefined **)0x0;
    FUN_710062dc20((uint *)&local_128,"fighter_%d");
    local_158 = &local_120;
    FUN_710170f880((long *)&local_150,&local_158,(byte *)(param_3 + 0x4c));
  }
  if (param_3[0x4d] != 0xff) {
    local_120 = 0;
    local_128 = (undefined **)0x0;
    FUN_710062dc20((uint *)&local_128,"fighter_%d");
    local_158 = &local_120;
    FUN_710170f880((long *)&local_150,&local_158,(byte *)(param_3 + 0x4d));
  }
  if (param_3[0x4e] != 0xff) {
    local_120 = 0;
    local_128 = (undefined **)0x0;
    FUN_710062dc20((uint *)&local_128,"fighter_%d");
    local_158 = &local_120;
    FUN_710170f880((long *)&local_150,&local_158,(byte *)(param_3 + 0x4e));
  }
  if (param_3[0x4f] != 0xff) {
    local_120 = 0;
    local_128 = (undefined **)0x0;
    FUN_710062dc20((uint *)&local_128,"fighter_%d");
    local_158 = &local_120;
    FUN_710170f880((long *)&local_150,&local_158,(byte *)(param_3 + 0x4f));
  }
  if (param_3[0x50] != 0xff) {
    local_120 = 0;
    local_128 = (undefined **)0x0;
    FUN_710062dc20((uint *)&local_128,"fighter_%d");
    local_158 = &local_120;
    FUN_710170f880((long *)&local_150,&local_158,(byte *)(param_3 + 0x50));
  }
  if (param_3[0x51] != 0xff) {
    local_120 = 0;
    local_128 = (undefined **)0x0;
    FUN_710062dc20((uint *)&local_128,"fighter_%d");
    local_158 = &local_120;
    FUN_710170f880((long *)&local_150,&local_158,(byte *)(param_3 + 0x51));
  }
  if (param_3[0x52] != 0xff) {
    local_120 = 0;
    local_128 = (undefined **)0x0;
    FUN_710062dc20((uint *)&local_128,"fighter_%d");
    local_158 = &local_120;
    FUN_710170f880((long *)&local_150,&local_158,(byte *)(param_3 + 0x52));
  }
  if (param_3[0x53] != 0xff) {
    local_120 = 0;
    local_128 = (undefined **)0x0;
    FUN_710062dc20((uint *)&local_128,"fighter_%d");
    local_158 = &local_120;
    FUN_710170f880((long *)&local_150,&local_158,(byte *)(param_3 + 0x53));
  }
  if ((undefined8 ***)(param_1 + 0x48) != &local_150) {
    FUN_710170dcd0((long *)(param_1 + 0x48),(long *)local_150,(long *)&local_148);
  }
  FUN_710170df50(&local_150,local_148);
  if (local_98 != (long *)0x0) {
    local_90 = local_98;
    FUN_71001b1870((long)local_98);
  }
  puVar1 = local_80;
  puVar4 = local_78;
  if (local_80 != (undefined8 *)0x0) {
    while (puVar4 != puVar1) {
      puVar4 = puVar4 + -0x12;
      (**(code **)*puVar4)(puVar4);
    }
    local_78 = puVar1;
    FUN_71001b1870((long)local_80);
  }
  return;
}

