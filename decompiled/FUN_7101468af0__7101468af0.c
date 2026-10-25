// addr:      7101468af0
// offset:    0x1468af0
// name:      FUN_7101468af0
// mangled:   
// signature: undefined __cdecl FUN_7101468af0(void)


void FUN_7101468af0(void)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined2 *puVar5;
  ulong uVar6;
  int *piVar7;
  byte *pbVar8;
  uint uVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  long lVar14;
  undefined4 auStack_f8 [2];
  undefined **local_f0;
  long local_e8;
  int local_e0;
  undefined1 local_d8;
  uint local_b8 [2];
  byte local_b0 [64];
  
  FUN_71024076d0(auStack_f8,0x130f21e8ef);
  local_f0 = &PTR_FUN_7104f73d50;
  if (((local_e8 != 0) && (DAT_7106dd53a8 == '\x01')) && (local_e0 == DAT_7106dd53ac)) {
    piVar7 = (int *)(local_e8 + 0x38);
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar7,0x10);
      if (bVar4) {
        *piVar7 = *piVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
  }
  local_e8 = 0;
  local_d8 = 0;
  puVar5 = FUN_7101465a30();
  if (*(char *)((long)puVar5 + 5) == '\0') {
    uVar12 = (uint)*(char *)((long)puVar5 + (long)*(int *)(puVar5 + 0x24) * 0x3860 + 0x65);
    if (uVar12 != 0xffffffff) {
      local_b0[0] = 0;
      local_b8[0] = 0;
      local_b8[1] = 0;
      FUN_710062dc20(local_b8,"RBKIND_RESULT_CUTIN_%02d");
      if (local_b8[1] == 0) {
        uVar6 = 0;
      }
      else {
        uVar9 = 0xffffffff;
        pbVar8 = local_b0;
        do {
          pbVar10 = pbVar8 + 1;
          bVar2 = *pbVar8;
          uVar11 = bVar2 + 0x20;
          if (0x19 < bVar2 - 0x41) {
            uVar11 = (uint)bVar2;
          }
          uVar9 = (&DAT_7104754084)[(uVar11 ^ uVar9) & 0xff] ^ uVar9 >> 8;
          pbVar8 = pbVar10;
        } while (pbVar10 < local_b0 + local_b8[1]);
        uVar6 = (ulong)~uVar9;
      }
      FUN_710175dfc0(1.0,1.0,*(long *)(DAT_71052c5120 + 8),uVar12,
                     uVar6 | ((long)(int)local_b8[1] & 0xffU) << 0x20,0,0xffffffff,0,0,0);
    }
  }
  else {
    bVar2 = *(byte *)(puVar5 + 0x26);
    lVar14 = 0;
    do {
      iVar13 = (int)lVar14;
      if (((*(char *)(puVar5 + (long)iVar13 * 0x1c30 + 0x31) != '\x02') &&
          ((uint)bVar2 == (int)*(char *)(puVar5 + (long)iVar13 * 0x1c30 + 0x38))) &&
         (uVar12 = (uint)*(char *)((long)puVar5 + (long)iVar13 * 0x3860 + 0x65),
         uVar12 != 0xffffffff)) {
        local_b0[0] = 0;
        local_b8[0] = 0;
        local_b8[1] = 0;
        FUN_710062dc20(local_b8,"RBKIND_RESULT_CUTIN_%02d");
        if (local_b8[1] == 0) {
          uVar6 = 0;
        }
        else {
          uVar9 = 0xffffffff;
          pbVar8 = local_b0;
          do {
            pbVar10 = pbVar8 + 1;
            bVar1 = *pbVar8;
            uVar11 = bVar1 + 0x20;
            if (0x19 < bVar1 - 0x41) {
              uVar11 = (uint)bVar1;
            }
            uVar9 = (&DAT_7104754084)[(uVar11 ^ uVar9) & 0xff] ^ uVar9 >> 8;
            pbVar8 = pbVar10;
          } while (pbVar10 < local_b0 + local_b8[1]);
          uVar6 = (ulong)~uVar9;
        }
        FUN_710175dfc0(1.0,1.0,*(long *)(DAT_71052c5120 + 8),uVar12,
                       uVar6 | ((long)(int)local_b8[1] & 0xffU) << 0x20,0,0xffffffff,0,0,0);
      }
      lVar14 = lVar14 + 1;
    } while (lVar14 != 8);
  }
  return;
}

