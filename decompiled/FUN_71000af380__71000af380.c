// addr:      71000af380
// offset:    0xaf380
// name:      FUN_71000af380
// mangled:   
// signature: undefined __cdecl FUN_71000af380(undefined8 * param_1, long * param_2)


void FUN_71000af380(undefined8 *param_1,long *param_2)

{
  undefined1 *puVar1;
  undefined2 uVar2;
  undefined1 uVar3;
  long lVar4;
  char cVar5;
  int iVar6;
  undefined2 uVar7;
  long lVar8;
  byte local_80 [6];
  undefined2 uStack_7a;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if (DAT_71052ab990 != 0) {
    FUN_7100093660();
    return;
  }
  DAT_71052ab988 = 0x20;
  DAT_71052ab990 = (**(code **)(*param_2 + 0x10))(param_2,0x1500,0x80);
  iVar6 = 0;
  lVar4 = DAT_71052ab990;
  do {
    lVar8 = 0;
    cVar5 = '\0';
    do {
      puVar1 = (undefined1 *)(lVar4 + lVar8);
      *(undefined8 *)(puVar1 + 0x28) = 0xffffffffffffffff;
      FUN_7100038120((undefined8 *)(puVar1 + 0x30));
      *puVar1 = 0;
      *(undefined8 *)(puVar1 + 8) = 0;
      puVar1[0x10] = cVar5;
      puVar1[0x11] = 0;
      uVar3 = (undefined1)iVar6;
      puVar1[0x12] = uVar3;
      *(undefined8 *)(puVar1 + 0x20) = 0;
      *(undefined8 *)(puVar1 + 0x1b) = 0;
      *(undefined8 *)(puVar1 + 0x13) = 0;
      local_70 = 0;
      uStack_68 = 0;
      _local_80 = 0;
      uStack_78 = 0;
      FUN_7100031140((undefined4 *)local_80);
      uVar7 = 0x2a;
      uVar2 = 0x2a;
      if (puVar1[0x12] != '\0') {
        uVar2 = 0x15;
      }
      _local_80 = CONCAT26(uVar2,local_80);
      if ((byte)puVar1[0x10] < 4) {
        _local_80 = CONCAT71(stack0xffffffffffffff81,
                             (char)(0x4020001 >> (ulong)(((byte)puVar1[0x10] & 3) << 3)));
      }
      if ((byte)puVar1[0x11] < 4) {
        local_80._0_2_ =
             CONCAT11((char)(0x4020001 >> (ulong)(((byte)puVar1[0x11] & 3) << 3)),local_80[0]);
      }
      local_80._0_3_ = CONCAT12(1,local_80._0_2_);
      FUN_7100038160(puVar1 + 0x30,param_1,local_80);
      *puVar1 = 1;
      *(undefined8 *)(puVar1 + 0xd0) = 0xffffffffffffffff;
      FUN_7100038120((undefined8 *)(puVar1 + 0xd8));
      puVar1[0xa8] = 0;
      *(undefined8 *)(puVar1 + 0xb0) = 0;
      puVar1[0xb8] = cVar5;
      puVar1[0xb9] = 1;
      puVar1[0xba] = uVar3;
      *(undefined8 *)(puVar1 + 200) = 0;
      *(undefined8 *)(puVar1 + 0xc3) = 0;
      *(undefined8 *)(puVar1 + 0xbb) = 0;
      local_70 = 0;
      uStack_68 = 0;
      _local_80 = 0;
      uStack_78 = 0;
      FUN_7100031140((undefined4 *)local_80);
      if (puVar1[0xba] != '\0') {
        uVar7 = 0x15;
      }
      _local_80 = CONCAT26(uVar7,local_80);
      if ((byte)puVar1[0xb8] < 4) {
        _local_80 = CONCAT71(stack0xffffffffffffff81,
                             (char)(0x4020001 >> (ulong)(((byte)puVar1[0xb8] & 3) << 3)));
      }
      if ((byte)puVar1[0xb9] < 4) {
        local_80._0_2_ =
             CONCAT11((char)(0x4020001 >> (ulong)(((byte)puVar1[0xb9] & 3) << 3)),local_80[0]);
      }
      local_80._0_3_ = CONCAT12(1,local_80._0_2_);
      FUN_7100038160(puVar1 + 0xd8,param_1,local_80);
      puVar1[0xa8] = 1;
      *(undefined8 *)(puVar1 + 0x178) = 0xffffffffffffffff;
      FUN_7100038120((undefined8 *)(puVar1 + 0x180));
      puVar1[0x161] = 2;
      puVar1[0x150] = 0;
      *(undefined8 *)(puVar1 + 0x158) = 0;
      puVar1[0x160] = cVar5;
      puVar1[0x162] = uVar3;
      *(undefined8 *)(puVar1 + 0x170) = 0;
      *(undefined8 *)(puVar1 + 0x16b) = 0;
      *(undefined8 *)(puVar1 + 0x163) = 0;
      local_70 = 0;
      uStack_68 = 0;
      _local_80 = 0;
      uStack_78 = 0;
      FUN_7100031140((undefined4 *)local_80);
      uVar7 = 0x2a;
      uVar2 = uVar7;
      if (puVar1[0x162] != '\0') {
        uVar2 = 0x15;
      }
      _local_80 = CONCAT26(uVar2,local_80);
      if ((byte)puVar1[0x160] < 4) {
        _local_80 = CONCAT71(stack0xffffffffffffff81,
                             (char)(0x4020001 >> (ulong)(((byte)puVar1[0x160] & 3) << 3)));
      }
      if ((byte)puVar1[0x161] < 4) {
        local_80._0_2_ =
             CONCAT11((char)(0x4020001 >> (ulong)(((byte)puVar1[0x161] & 3) << 3)),local_80[0]);
      }
      local_80._0_3_ = CONCAT12(1,local_80._0_2_);
      FUN_7100038160(puVar1 + 0x180,param_1,local_80);
      puVar1[0x150] = 1;
      *(undefined8 *)(puVar1 + 0x220) = 0xffffffffffffffff;
      FUN_7100038120((undefined8 *)(puVar1 + 0x228));
      puVar1[0x209] = 3;
      puVar1[0x1f8] = 0;
      *(undefined8 *)(puVar1 + 0x200) = 0;
      puVar1[0x208] = cVar5;
      puVar1[0x20a] = uVar3;
      *(undefined8 *)(puVar1 + 0x218) = 0;
      *(undefined8 *)(puVar1 + 0x213) = 0;
      *(undefined8 *)(puVar1 + 0x20b) = 0;
      local_70 = 0;
      uStack_68 = 0;
      _local_80 = 0;
      uStack_78 = 0;
      FUN_7100031140((undefined4 *)local_80);
      if (puVar1[0x20a] != '\0') {
        uVar7 = 0x15;
      }
      _local_80 = CONCAT26(uVar7,local_80);
      if ((byte)puVar1[0x208] < 4) {
        _local_80 = CONCAT71(stack0xffffffffffffff81,
                             (char)(0x4020001 >> (ulong)(((byte)puVar1[0x208] & 3) << 3)));
      }
      if ((byte)puVar1[0x209] < 4) {
        local_80._0_2_ =
             CONCAT11((char)(0x4020001 >> (ulong)(((byte)puVar1[0x209] & 3) << 3)),local_80[0]);
      }
      local_80._0_3_ = CONCAT12(1,local_80._0_2_);
      FUN_7100038160(puVar1 + 0x228,param_1,local_80);
      lVar8 = lVar8 + 0x2a0;
      cVar5 = cVar5 + '\x01';
      puVar1[0x1f8] = 1;
    } while ((int)lVar8 != 0xa80);
    iVar6 = iVar6 + 1;
    lVar4 = lVar4 + 0xa80;
  } while (iVar6 != 2);
  return;
}

