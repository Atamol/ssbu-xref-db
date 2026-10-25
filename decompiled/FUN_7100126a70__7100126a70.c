// addr:      7100126a70
// offset:    0x126a70
// name:      FUN_7100126a70
// mangled:   
// signature: undefined __cdecl FUN_7100126a70(int * param_1, long param_2, long param_3)


/* WARNING: Type propagation algorithm not settling */

void FUN_7100126a70(int *param_1,long param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  bool bVar3;
  int *piVar4;
  long lVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  int local_210 [4];
  undefined1 local_200 [8];
  undefined1 *local_1f8;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 local_1e8;
  undefined1 local_1e4;
  undefined2 local_1e3;
  undefined1 local_1e1 [193];
  undefined1 local_120 [8];
  undefined1 *puStack_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined1 local_104;
  undefined2 local_103;
  undefined1 local_101 [193];
  undefined4 local_38 [2];
  
  piVar4 = local_210;
  bVar3 = FUN_71000b1f20(param_3);
  if (bVar3) {
    uVar1 = param_2 + 0x50;
    FUN_71000b1cb0(uVar1,param_3);
    bVar3 = FUN_71000b1f50(uVar1);
    if (bVar3) {
      local_120 = (undefined1  [8])0x0;
      puStack_118 = (undefined1 *)0x0;
      memcpy(local_120,&DAT_71044971c0,0x10);
      FUN_71000b1d50(param_2 + 0x70,local_120,puStack_118);
      uVar6 = *(undefined4 *)(param_3 + 0x24);
    }
    else {
      local_200._0_4_ = 0;
      FUN_71000b1da0((int *)local_120,uVar1,(undefined4 *)local_200);
      local_200._0_4_ = local_200._0_4_ | *(uint *)(param_3 + 0x20) ^ 0xffffffff;
      FUN_71000b1d10(param_2 + 0x70,local_200._0_4_);
      uVar6 = 0xffffffff;
    }
    *(undefined4 *)(param_2 + 0x90) = uVar6;
    *(undefined1 *)(param_2 + 0x98) = *(undefined1 *)(param_3 + 0x29);
    *(undefined1 *)(param_2 + 0x99) = *(undefined1 *)(param_3 + 0x28);
    puStack_118 = &local_104;
    local_120 = (undefined1  [8])&DAT_7104f4a338;
    local_110 = 0xc0;
    local_104 = 0;
    lVar5 = 0;
    puVar7 = (undefined8 *)local_120;
    do {
      *(undefined2 *)((long)puVar7 + 0x1d) = 0;
      lVar2 = lVar5 + 4;
      *(undefined1 *)((long)puVar7 + 0x1f) = 0;
      puVar7 = (undefined8 *)((long)local_120 + lVar2);
      local_101[lVar5 + 1] = 0;
      lVar5 = lVar2;
    } while (lVar2 != 0xc0);
    local_200 = (undefined1  [8])&DAT_7104f4a338;
    uStack_10c = 0;
    local_108 = 0;
    local_1f8 = &local_1e4;
    local_1f0 = 0xc0;
    local_1e4 = 0;
    lVar5 = 0;
    puVar7 = (undefined8 *)local_200;
    do {
      *(undefined2 *)((long)puVar7 + 0x1d) = 0;
      lVar2 = lVar5 + 4;
      *(undefined1 *)((long)puVar7 + 0x1f) = 0;
      puVar7 = (undefined8 *)((long)local_200 + lVar2);
      local_1e1[lVar5 + 1] = 0;
      lVar5 = lVar2;
    } while (lVar2 != 0xc0);
    uStack_1ec = 0;
    local_1e8 = 0;
    FUN_71000b1fa0(uVar1,(long *)local_120);
    FUN_71000b1fa0(param_2 + 0x70,(long *)local_200);
    local_210[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_210 | 4));
    local_38[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)local_210 | 4),(Result *)local_38);
  }
  else {
    local_120._0_4_ = 0x10c07;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_120 | 4));
    local_200 = (undefined1  [8])((ulong)(uint)local_200._4_4_ << 0x20);
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)local_120 | 4),(Result *)local_200);
    piVar4 = (int *)local_120;
  }
  FUN_71000bce50(param_1,piVar4);
  return;
}

