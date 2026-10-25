// addr:      71025bb610
// offset:    0x25bb610
// name:      FUN_71025bb610
// mangled:   
// signature: undefined __cdecl FUN_71025bb610(uint * param_1, undefined1 param_2, ulong param_3)


void FUN_71025bb610(uint *param_1,undefined1 param_2,ulong param_3)

{
  long lVar1;
  char cVar2;
  byte *pbVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  char cVar13;
  ulong uVar14;
  uint uVar15;
  uint local_100 [2];
  undefined8 local_f8;
  undefined4 local_f0;
  undefined2 uStack_ec;
  undefined2 uStack_ea;
  undefined2 uStack_e8;
  undefined2 uStack_e6;
  undefined2 uStack_e4;
  undefined2 uStack_e2;
  undefined2 uStack_e0;
  undefined1 uStack_de;
  undefined1 uStack_dd;
  undefined1 uStack_dc;
  undefined1 uStack_db;
  undefined1 uStack_da;
  undefined1 uStack_d9;
  undefined1 uStack_d8;
  undefined1 uStack_d7;
  undefined1 local_d6;
  undefined1 uStack_d5;
  undefined1 uStack_d4;
  undefined1 uStack_d3;
  undefined1 uStack_d2;
  undefined1 uStack_d1;
  undefined1 uStack_d0;
  undefined1 uStack_cf;
  undefined1 uStack_ce;
  undefined1 uStack_cd;
  undefined1 uStack_cc;
  undefined1 uStack_cb;
  undefined1 uStack_ca;
  undefined1 uStack_c9;
  undefined1 local_c8;
  undefined8 local_b8;
  char local_b0 [64];
  uint local_70;
  
  switch(param_2) {
  case 1:
    uVar4 = 8;
    local_f8 = local_f8 & 0xffffffffffffff00;
    local_100[0] = 0;
    local_100[1] = 0;
    local_b0[0] = '\0';
    local_b8 = 0;
    uVar9 = 0x811c9dc5;
    local_70 = 8;
    lVar11 = *(long *)(*DAT_7105329fa0 + 0x300);
    lVar10 = *(long *)(*DAT_7105329fa0 + 0x2f8);
    uVar12 = lVar11 - lVar10;
    uVar15 = (uint)(uVar12 >> 4);
    if (uVar15 != 0) {
      if (lVar11 != lVar10) {
        lVar11 = 0;
        cVar13 = '\0';
        pbVar8 = (byte *)((long)&local_f8 + 1);
        uVar4 = 8;
        do {
          if (((*(ulong *)(lVar10 + lVar11 * 0x10) ^ param_3) & 0xffffffffff) == 0) {
            lVar1 = lVar10 + lVar11 * 0x10;
            local_100[0] = uVar9;
            if (*(char *)(lVar1 + 9) == '\0') {
              if (*(char *)(lVar1 + 8) != '\0') {
                cVar2 = *(char *)(lVar1 + 10);
                if (*(int *)(lVar1 + 0xc) < 1) {
                  if (cVar2 == '\x02') {
                    uVar4 = 0x6e;
                    uStack_e8 = 0x725f;
                    uStack_d8 = 0x6b;
                    uStack_d7 = 0x5f;
                    local_d6 = 100;
                    uStack_d5 = 0x6f;
                    uStack_d4 = 0x77;
                    uStack_d3 = 0x6e;
                    uStack_d2 = 0x5f;
                    uStack_d1 = 0x70;
                    uStack_d0 = 0x6c;
                    uStack_cf = 0x61;
                    uStack_ce = 0x79;
                    uStack_cd = 0x65;
                    uStack_cc = 0x72;
                    uStack_cb = 0;
                    local_f8 = 0x726970735f6d616e;
                    local_f0 = 0x5f737469;
                    uStack_ec = 0x6968;
                    uStack_ea = 0x746e;
                    uStack_e6 = 0x6c75;
                    uStack_e4 = 0x5f65;
                    uStack_e2 = 0x6f70;
                    uStack_e0 = 0x6577;
                    uStack_de = 0x72;
                    uStack_dd = 0x75;
                    uStack_dc = 0x70;
                    uStack_db = 0x5f;
                    uStack_da = 0x61;
                    uStack_d9 = 0x74;
                    local_100[1] = 0x2d;
                    pbVar3 = pbVar8;
                    do {
                      local_100[0] = local_100[0] * 0x89 ^ uVar4;
                      uVar4 = (uint)*pbVar3;
                      pbVar3 = pbVar3 + 1;
                    } while (uVar4 != 0);
                    goto LAB_71025bbf6c;
                  }
                  if (cVar2 == '\0') {
                    uVar4 = 0x6e;
                    uStack_e8 = 0x725f;
                    uStack_d8 = 0x76;
                    uStack_d7 = 0x65;
                    local_d6 = 0x5f;
                    uStack_d5 = 100;
                    uStack_d4 = 0x6f;
                    uStack_d3 = 0x77;
                    uStack_d2 = 0x6e;
                    uStack_d1 = 0x5f;
                    uStack_d0 = 0x70;
                    uStack_cf = 0x6c;
                    uStack_ce = 0x61;
                    uStack_cd = 0x79;
                    uStack_cc = 0x65;
                    uStack_cb = 0x72;
                    local_f8 = 0x726970735f6d616e;
                    local_f0 = 0x5f737469;
                    uStack_ec = 0x6968;
                    uStack_ea = 0x746e;
                    uStack_e6 = 0x6c75;
                    uStack_e4 = 0x5f65;
                    uStack_e2 = 0x6f70;
                    uStack_e0 = 0x6577;
                    uStack_de = 0x72;
                    uStack_dd = 0x75;
                    uStack_dc = 0x70;
                    uStack_db = 0x5f;
                    uStack_da = 0x6d;
                    uStack_d9 = 0x6f;
                    uStack_ca = 0;
                    local_100[1] = 0x2e;
                    pbVar3 = pbVar8;
                    do {
                      local_100[0] = local_100[0] * 0x89 ^ uVar4;
                      uVar4 = (uint)*pbVar3;
                      pbVar3 = pbVar3 + 1;
                    } while (uVar4 != 0);
                  }
                  else if (cVar2 == '\x01') {
                    uVar4 = 0x6e;
                    uStack_e8 = 0x725f;
                    uStack_d8 = 0x6d;
                    uStack_d7 = 0x70;
                    local_d6 = 0x5f;
                    uStack_d5 = 100;
                    uStack_d4 = 0x6f;
                    uStack_d3 = 0x77;
                    uStack_d2 = 0x6e;
                    uStack_d1 = 0x5f;
                    uStack_d0 = 0x70;
                    uStack_cf = 0x6c;
                    uStack_ce = 0x61;
                    uStack_cd = 0x79;
                    uStack_cc = 0x65;
                    uStack_cb = 0x72;
                    local_f8 = 0x726970735f6d616e;
                    local_f0 = 0x5f737469;
                    uStack_ec = 0x6968;
                    uStack_ea = 0x746e;
                    uStack_e6 = 0x6c75;
                    uStack_e4 = 0x5f65;
                    uStack_e2 = 0x6f70;
                    uStack_e0 = 0x6577;
                    uStack_de = 0x72;
                    uStack_dd = 0x75;
                    uStack_dc = 0x70;
                    uStack_db = 0x5f;
                    uStack_da = 0x6a;
                    uStack_d9 = 0x75;
                    uStack_ca = 0;
                    local_100[1] = 0x2e;
                    pbVar3 = pbVar8;
                    do {
                      local_100[0] = local_100[0] * 0x89 ^ uVar4;
                      uVar4 = (uint)*pbVar3;
                      pbVar3 = pbVar3 + 1;
                    } while (uVar4 != 0);
                  }
                  else {
                    if (cVar2 != '\x05') goto LAB_71025bc13c;
                    uVar4 = 0x6e;
                    uStack_e8 = 0x725f;
                    uStack_d8 = 0x66;
                    uStack_d7 = 0x5f;
                    local_d6 = 100;
                    uStack_d5 = 0x6f;
                    uStack_d4 = 0x77;
                    uStack_d3 = 0x6e;
                    uStack_d2 = 0x5f;
                    uStack_d1 = 0x70;
                    uStack_d0 = 0x6c;
                    uStack_cf = 0x61;
                    uStack_ce = 0x79;
                    uStack_cd = 0x65;
                    uStack_cc = 0x72;
                    uStack_cb = 0;
                    local_f8 = 0x726970735f6d616e;
                    local_f0 = 0x5f737469;
                    uStack_ec = 0x6968;
                    uStack_ea = 0x746e;
                    uStack_e6 = 0x6c75;
                    uStack_e4 = 0x5f65;
                    uStack_e2 = 0x6f70;
                    uStack_e0 = 0x6577;
                    uStack_de = 0x72;
                    uStack_dd = 0x75;
                    uStack_dc = 0x70;
                    uStack_db = 0x5f;
                    uStack_da = 100;
                    uStack_d9 = 0x65;
                    local_100[1] = 0x2d;
                    pbVar3 = pbVar8;
                    do {
                      local_100[0] = local_100[0] * 0x89 ^ uVar4;
                      uVar4 = (uint)*pbVar3;
                      pbVar3 = pbVar3 + 1;
                    } while (uVar4 != 0);
                  }
                  uVar4 = 2;
                  goto LAB_71025bbf74;
                }
                if (cVar2 == '\x02') {
                  uVar4 = 0x6e;
                  uStack_e8 = 0x725f;
                  uStack_d8 = 0x6b;
                  uStack_d7 = 0x5f;
                  local_d6 = 0x75;
                  uStack_d5 = 0x70;
                  uStack_d4 = 0x5f;
                  uStack_d3 = 0x70;
                  uStack_d2 = 0x6c;
                  uStack_d1 = 0x61;
                  uStack_d0 = 0x79;
                  uStack_cf = 0x65;
                  uStack_ce = 0x72;
                  uStack_cd = 0;
                  local_f8 = 0x726970735f6d616e;
                  local_f0 = 0x5f737469;
                  uStack_ec = 0x6968;
                  uStack_ea = 0x746e;
                  uStack_e6 = 0x6c75;
                  uStack_e4 = 0x5f65;
                  uStack_e2 = 0x6f70;
                  uStack_e0 = 0x6577;
                  uStack_de = 0x72;
                  uStack_dd = 0x75;
                  uStack_dc = 0x70;
                  uStack_db = 0x5f;
                  uStack_da = 0x61;
                  uStack_d9 = 0x74;
                  local_100[1] = 0x2b;
                  pbVar3 = pbVar8;
                  do {
                    local_100[0] = local_100[0] * 0x89 ^ uVar4;
                    uVar4 = (uint)*pbVar3;
                    pbVar3 = pbVar3 + 1;
                  } while (uVar4 != 0);
                }
                else if (cVar2 == '\0') {
                  uVar4 = 0x6e;
                  uStack_e8 = 0x725f;
                  uStack_d8 = 0x76;
                  uStack_d7 = 0x65;
                  local_d6 = 0x5f;
                  uStack_d5 = 0x75;
                  uStack_d4 = 0x70;
                  uStack_d3 = 0x5f;
                  uStack_d2 = 0x70;
                  uStack_d1 = 0x6c;
                  uStack_d0 = 0x61;
                  uStack_cf = 0x79;
                  uStack_ce = 0x65;
                  uStack_cd = 0x72;
                  local_f8 = 0x726970735f6d616e;
                  local_f0 = 0x5f737469;
                  uStack_ec = 0x6968;
                  uStack_ea = 0x746e;
                  uStack_e6 = 0x6c75;
                  uStack_e4 = 0x5f65;
                  uStack_e2 = 0x6f70;
                  uStack_e0 = 0x6577;
                  uStack_de = 0x72;
                  uStack_dd = 0x75;
                  uStack_dc = 0x70;
                  uStack_db = 0x5f;
                  uStack_da = 0x6d;
                  uStack_d9 = 0x6f;
                  uStack_cc = 0;
                  local_100[1] = 0x2c;
                  pbVar3 = pbVar8;
                  do {
                    local_100[0] = local_100[0] * 0x89 ^ uVar4;
                    uVar4 = (uint)*pbVar3;
                    pbVar3 = pbVar3 + 1;
                  } while (uVar4 != 0);
                }
                else if (cVar2 == '\x01') {
                  uVar4 = 0x6e;
                  uStack_e8 = 0x725f;
                  uStack_d8 = 0x6d;
                  uStack_d7 = 0x70;
                  local_d6 = 0x5f;
                  uStack_d5 = 0x75;
                  uStack_d4 = 0x70;
                  uStack_d3 = 0x5f;
                  uStack_d2 = 0x70;
                  uStack_d1 = 0x6c;
                  uStack_d0 = 0x61;
                  uStack_cf = 0x79;
                  uStack_ce = 0x65;
                  uStack_cd = 0x72;
                  local_f8 = 0x726970735f6d616e;
                  local_f0 = 0x5f737469;
                  uStack_ec = 0x6968;
                  uStack_ea = 0x746e;
                  uStack_e6 = 0x6c75;
                  uStack_e4 = 0x5f65;
                  uStack_e2 = 0x6f70;
                  uStack_e0 = 0x6577;
                  uStack_de = 0x72;
                  uStack_dd = 0x75;
                  uStack_dc = 0x70;
                  uStack_db = 0x5f;
                  uStack_da = 0x6a;
                  uStack_d9 = 0x75;
                  uStack_cc = 0;
                  local_100[1] = 0x2c;
                  pbVar3 = pbVar8;
                  do {
                    local_100[0] = local_100[0] * 0x89 ^ uVar4;
                    uVar4 = (uint)*pbVar3;
                    pbVar3 = pbVar3 + 1;
                  } while (uVar4 != 0);
                }
                else {
                  if (cVar2 != '\x05') goto LAB_71025bc13c;
                  uVar4 = 0x6e;
                  uStack_e8 = 0x725f;
                  uStack_d8 = 0x66;
                  uStack_d7 = 0x5f;
                  local_d6 = 0x75;
                  uStack_d5 = 0x70;
                  uStack_d4 = 0x5f;
                  uStack_d3 = 0x70;
                  uStack_d2 = 0x6c;
                  uStack_d1 = 0x61;
                  uStack_d0 = 0x79;
                  uStack_cf = 0x65;
                  uStack_ce = 0x72;
                  uStack_cd = 0;
                  local_f8 = 0x726970735f6d616e;
                  local_f0 = 0x5f737469;
                  uStack_ec = 0x6968;
                  uStack_ea = 0x746e;
                  uStack_e6 = 0x6c75;
                  uStack_e4 = 0x5f65;
                  uStack_e2 = 0x6f70;
                  uStack_e0 = 0x6577;
                  uStack_de = 0x72;
                  uStack_dd = 0x75;
                  uStack_dc = 0x70;
                  uStack_db = 0x5f;
                  uStack_da = 100;
                  uStack_d9 = 0x65;
                  local_100[1] = 0x2b;
                  pbVar3 = pbVar8;
                  do {
                    local_100[0] = local_100[0] * 0x89 ^ uVar4;
                    uVar4 = (uint)*pbVar3;
                    pbVar3 = pbVar3 + 1;
                  } while (uVar4 != 0);
                }
                goto LAB_71025bc12c;
              }
            }
            else {
              cVar2 = *(char *)(lVar1 + 10);
              if (*(char *)(lVar1 + 8) == '\0') {
                if (0 < *(int *)(lVar1 + 0xc)) {
                  if (cVar2 == '\x02') {
                    uVar4 = 0x6e;
                    uStack_e8 = 0x725f;
                    uStack_d8 = 0x6b;
                    uStack_d7 = 0x5f;
                    local_d6 = 0x75;
                    uStack_d5 = 0x70;
                    uStack_d4 = 0x5f;
                    uStack_d3 = 0x65;
                    uStack_d2 = 0x6e;
                    uStack_d1 = 0x65;
                    uStack_d0 = 0x6d;
                    uStack_cf = 0x79;
                    uStack_e6 = 0x6c75;
                    uStack_e4 = 0x5f65;
                    uStack_e2 = 0x6f70;
                    uStack_e0 = 0x6577;
                    local_f8 = 0x726970735f6d616e;
                    local_f0 = 0x5f737469;
                    uStack_ec = 0x6968;
                    uStack_ea = 0x746e;
                    uStack_de = 0x72;
                    uStack_dd = 0x75;
                    uStack_dc = 0x70;
                    uStack_db = 0x5f;
                    uStack_da = 0x61;
                    uStack_d9 = 0x74;
                    uStack_ce = 0;
                    local_100[1] = 0x2a;
                    pbVar3 = pbVar8;
                    do {
                      local_100[0] = local_100[0] * 0x89 ^ uVar4;
                      uVar4 = (uint)*pbVar3;
                      pbVar3 = pbVar3 + 1;
                    } while (uVar4 != 0);
                  }
                  else if (cVar2 == '\0') {
                    uVar4 = 0x6e;
                    uStack_e8 = 0x725f;
                    uStack_d8 = 0x76;
                    uStack_d7 = 0x65;
                    local_d6 = 0x5f;
                    uStack_d5 = 0x75;
                    uStack_d4 = 0x70;
                    uStack_d3 = 0x5f;
                    uStack_d2 = 0x65;
                    uStack_d1 = 0x6e;
                    uStack_d0 = 0x65;
                    uStack_cf = 0x6d;
                    uStack_ce = 0x79;
                    uStack_cd = 0;
                    local_f8 = 0x726970735f6d616e;
                    local_f0 = 0x5f737469;
                    uStack_ec = 0x6968;
                    uStack_ea = 0x746e;
                    uStack_e6 = 0x6c75;
                    uStack_e4 = 0x5f65;
                    uStack_e2 = 0x6f70;
                    uStack_e0 = 0x6577;
                    uStack_de = 0x72;
                    uStack_dd = 0x75;
                    uStack_dc = 0x70;
                    uStack_db = 0x5f;
                    uStack_da = 0x6d;
                    uStack_d9 = 0x6f;
                    local_100[1] = 0x2b;
                    pbVar3 = pbVar8;
                    do {
                      local_100[0] = local_100[0] * 0x89 ^ uVar4;
                      uVar4 = (uint)*pbVar3;
                      pbVar3 = pbVar3 + 1;
                    } while (uVar4 != 0);
                  }
                  else if (cVar2 == '\x01') {
                    uVar4 = 0x6e;
                    uStack_e8 = 0x725f;
                    uStack_d8 = 0x6d;
                    uStack_d7 = 0x70;
                    local_d6 = 0x5f;
                    uStack_d5 = 0x75;
                    uStack_d4 = 0x70;
                    uStack_d3 = 0x5f;
                    uStack_d2 = 0x65;
                    uStack_d1 = 0x6e;
                    uStack_d0 = 0x65;
                    uStack_cf = 0x6d;
                    uStack_ce = 0x79;
                    uStack_cd = 0;
                    local_f8 = 0x726970735f6d616e;
                    local_f0 = 0x5f737469;
                    uStack_ec = 0x6968;
                    uStack_ea = 0x746e;
                    uStack_e6 = 0x6c75;
                    uStack_e4 = 0x5f65;
                    uStack_e2 = 0x6f70;
                    uStack_e0 = 0x6577;
                    uStack_de = 0x72;
                    uStack_dd = 0x75;
                    uStack_dc = 0x70;
                    uStack_db = 0x5f;
                    uStack_da = 0x6a;
                    uStack_d9 = 0x75;
                    local_100[1] = 0x2b;
                    pbVar3 = pbVar8;
                    do {
                      local_100[0] = local_100[0] * 0x89 ^ uVar4;
                      uVar4 = (uint)*pbVar3;
                      pbVar3 = pbVar3 + 1;
                    } while (uVar4 != 0);
                  }
                  else {
                    if (cVar2 != '\x05') goto LAB_71025bc13c;
                    uVar4 = 0x6e;
                    uStack_e8 = 0x725f;
                    uStack_d8 = 0x66;
                    uStack_d7 = 0x5f;
                    local_d6 = 0x75;
                    uStack_d5 = 0x70;
                    uStack_d4 = 0x5f;
                    uStack_d3 = 0x65;
                    uStack_d2 = 0x6e;
                    uStack_d1 = 0x65;
                    uStack_d0 = 0x6d;
                    uStack_cf = 0x79;
                    uStack_e6 = 0x6c75;
                    uStack_e4 = 0x5f65;
                    uStack_e2 = 0x6f70;
                    uStack_e0 = 0x6577;
                    local_f8 = 0x726970735f6d616e;
                    local_f0 = 0x5f737469;
                    uStack_ec = 0x6968;
                    uStack_ea = 0x746e;
                    uStack_de = 0x72;
                    uStack_dd = 0x75;
                    uStack_dc = 0x70;
                    uStack_db = 0x5f;
                    uStack_da = 100;
                    uStack_d9 = 0x65;
                    uStack_ce = 0;
                    local_100[1] = 0x2a;
                    pbVar3 = pbVar8;
                    do {
                      local_100[0] = local_100[0] * 0x89 ^ uVar4;
                      uVar4 = (uint)*pbVar3;
                      pbVar3 = pbVar3 + 1;
                    } while (uVar4 != 0);
                  }
                  uVar4 = 3;
                  goto LAB_71025bbf74;
                }
                if (cVar2 == '\x02') {
                  uVar4 = 0x6e;
                  uStack_e8 = 0x725f;
                  uStack_d8 = 0x6b;
                  uStack_d7 = 0x5f;
                  local_d6 = 100;
                  uStack_d5 = 0x6f;
                  uStack_d4 = 0x77;
                  uStack_d3 = 0x6e;
                  uStack_d2 = 0x5f;
                  uStack_d1 = 0x65;
                  uStack_d0 = 0x6e;
                  uStack_cf = 0x65;
                  uStack_ce = 0x6d;
                  uStack_cd = 0x79;
                  local_f8 = 0x726970735f6d616e;
                  local_f0 = 0x5f737469;
                  uStack_ec = 0x6968;
                  uStack_ea = 0x746e;
                  uStack_e6 = 0x6c75;
                  uStack_e4 = 0x5f65;
                  uStack_e2 = 0x6f70;
                  uStack_e0 = 0x6577;
                  uStack_de = 0x72;
                  uStack_dd = 0x75;
                  uStack_dc = 0x70;
                  uStack_db = 0x5f;
                  uStack_da = 0x61;
                  uStack_d9 = 0x74;
                  uStack_cc = 0;
                  local_100[1] = 0x2c;
                  pbVar3 = pbVar8;
                  do {
                    local_100[0] = local_100[0] * 0x89 ^ uVar4;
                    uVar4 = (uint)*pbVar3;
                    pbVar3 = pbVar3 + 1;
                  } while (uVar4 != 0);
                }
                else if (cVar2 == '\0') {
                  uVar4 = 0x6e;
                  uStack_e8 = 0x725f;
                  uStack_d8 = 0x76;
                  uStack_d7 = 0x65;
                  local_d6 = 0x5f;
                  uStack_d5 = 100;
                  uStack_d4 = 0x6f;
                  uStack_d3 = 0x77;
                  uStack_d2 = 0x6e;
                  uStack_d1 = 0x5f;
                  uStack_d0 = 0x65;
                  uStack_cf = 0x6e;
                  uStack_ce = 0x65;
                  uStack_cd = 0x6d;
                  uStack_cc = 0x79;
                  uStack_cb = 0;
                  local_f8 = 0x726970735f6d616e;
                  local_f0 = 0x5f737469;
                  uStack_ec = 0x6968;
                  uStack_ea = 0x746e;
                  uStack_e6 = 0x6c75;
                  uStack_e4 = 0x5f65;
                  uStack_e2 = 0x6f70;
                  uStack_e0 = 0x6577;
                  uStack_de = 0x72;
                  uStack_dd = 0x75;
                  uStack_dc = 0x70;
                  uStack_db = 0x5f;
                  uStack_da = 0x6d;
                  uStack_d9 = 0x6f;
                  local_100[1] = 0x2d;
                  pbVar3 = pbVar8;
                  do {
                    local_100[0] = local_100[0] * 0x89 ^ uVar4;
                    uVar4 = (uint)*pbVar3;
                    pbVar3 = pbVar3 + 1;
                  } while (uVar4 != 0);
                }
                else if (cVar2 == '\x01') {
                  uVar4 = 0x6e;
                  uStack_e8 = 0x725f;
                  uStack_d8 = 0x6d;
                  uStack_d7 = 0x70;
                  local_d6 = 0x5f;
                  uStack_d5 = 100;
                  uStack_d4 = 0x6f;
                  uStack_d3 = 0x77;
                  uStack_d2 = 0x6e;
                  uStack_d1 = 0x5f;
                  uStack_d0 = 0x65;
                  uStack_cf = 0x6e;
                  uStack_ce = 0x65;
                  uStack_cd = 0x6d;
                  uStack_cc = 0x79;
                  uStack_cb = 0;
                  local_f8 = 0x726970735f6d616e;
                  local_f0 = 0x5f737469;
                  uStack_ec = 0x6968;
                  uStack_ea = 0x746e;
                  uStack_e6 = 0x6c75;
                  uStack_e4 = 0x5f65;
                  uStack_e2 = 0x6f70;
                  uStack_e0 = 0x6577;
                  uStack_de = 0x72;
                  uStack_dd = 0x75;
                  uStack_dc = 0x70;
                  uStack_db = 0x5f;
                  uStack_da = 0x6a;
                  uStack_d9 = 0x75;
                  local_100[1] = 0x2d;
                  pbVar3 = pbVar8;
                  do {
                    local_100[0] = local_100[0] * 0x89 ^ uVar4;
                    uVar4 = (uint)*pbVar3;
                    pbVar3 = pbVar3 + 1;
                  } while (uVar4 != 0);
                }
                else {
                  if (cVar2 != '\x05') goto LAB_71025bc13c;
                  uVar4 = 0x6e;
                  uStack_e8 = 0x725f;
                  uStack_d8 = 0x66;
                  uStack_d7 = 0x5f;
                  local_d6 = 100;
                  uStack_d5 = 0x6f;
                  uStack_d4 = 0x77;
                  uStack_d3 = 0x6e;
                  uStack_d2 = 0x5f;
                  uStack_d1 = 0x65;
                  uStack_d0 = 0x6e;
                  uStack_cf = 0x65;
                  uStack_ce = 0x6d;
                  uStack_cd = 0x79;
                  local_f8 = 0x726970735f6d616e;
                  local_f0 = 0x5f737469;
                  uStack_ec = 0x6968;
                  uStack_ea = 0x746e;
                  uStack_e6 = 0x6c75;
                  uStack_e4 = 0x5f65;
                  uStack_e2 = 0x6f70;
                  uStack_e0 = 0x6577;
                  uStack_de = 0x72;
                  uStack_dd = 0x75;
                  uStack_dc = 0x70;
                  uStack_db = 0x5f;
                  uStack_da = 100;
                  uStack_d9 = 0x65;
                  uStack_cc = 0;
                  local_100[1] = 0x2c;
                  pbVar3 = pbVar8;
                  do {
                    local_100[0] = local_100[0] * 0x89 ^ uVar4;
                    uVar4 = (uint)*pbVar3;
                    pbVar3 = pbVar3 + 1;
                  } while (uVar4 != 0);
                }
              }
              else {
                if (*(int *)(lVar1 + 0xc) < 1) {
                  if (cVar2 == '\x02') {
                    uVar4 = 0x6e;
                    uStack_e8 = 0x725f;
                    uStack_d8 = 0x6b;
                    uStack_d7 = 0x5f;
                    local_d6 = 100;
                    uStack_d5 = 0x6f;
                    uStack_d4 = 0x77;
                    uStack_d3 = 0x6e;
                    uStack_d2 = 0x5f;
                    uStack_d1 = 0x61;
                    uStack_d0 = 0x6c;
                    uStack_cf = 0x6c;
                    uStack_e6 = 0x6c75;
                    uStack_e4 = 0x5f65;
                    uStack_e2 = 0x6f70;
                    uStack_e0 = 0x6577;
                    local_f8 = 0x726970735f6d616e;
                    local_f0 = 0x5f737469;
                    uStack_ec = 0x6968;
                    uStack_ea = 0x746e;
                    uStack_de = 0x72;
                    uStack_dd = 0x75;
                    uStack_dc = 0x70;
                    uStack_db = 0x5f;
                    uStack_da = 0x61;
                    uStack_d9 = 0x74;
                    uStack_ce = 0;
                    local_100[1] = 0x2a;
                    pbVar3 = pbVar8;
                    do {
                      local_100[0] = local_100[0] * 0x89 ^ uVar4;
                      uVar4 = (uint)*pbVar3;
                      pbVar3 = pbVar3 + 1;
                    } while (uVar4 != 0);
                  }
                  else if (cVar2 == '\0') {
                    uVar4 = 0x6e;
                    uStack_e8 = 0x725f;
                    uStack_d8 = 0x76;
                    uStack_d7 = 0x65;
                    local_d6 = 0x5f;
                    uStack_d5 = 100;
                    uStack_d4 = 0x6f;
                    uStack_d3 = 0x77;
                    uStack_d2 = 0x6e;
                    uStack_d1 = 0x5f;
                    uStack_d0 = 0x61;
                    uStack_cf = 0x6c;
                    uStack_ce = 0x6c;
                    uStack_cd = 0;
                    local_f8 = 0x726970735f6d616e;
                    local_f0 = 0x5f737469;
                    uStack_ec = 0x6968;
                    uStack_ea = 0x746e;
                    uStack_e6 = 0x6c75;
                    uStack_e4 = 0x5f65;
                    uStack_e2 = 0x6f70;
                    uStack_e0 = 0x6577;
                    uStack_de = 0x72;
                    uStack_dd = 0x75;
                    uStack_dc = 0x70;
                    uStack_db = 0x5f;
                    uStack_da = 0x6d;
                    uStack_d9 = 0x6f;
                    local_100[1] = 0x2b;
                    pbVar3 = pbVar8;
                    do {
                      local_100[0] = local_100[0] * 0x89 ^ uVar4;
                      uVar4 = (uint)*pbVar3;
                      pbVar3 = pbVar3 + 1;
                    } while (uVar4 != 0);
                  }
                  else if (cVar2 == '\x01') {
                    uVar4 = 0x6e;
                    uStack_e8 = 0x725f;
                    uStack_d8 = 0x6d;
                    uStack_d7 = 0x70;
                    local_d6 = 0x5f;
                    uStack_d5 = 100;
                    uStack_d4 = 0x6f;
                    uStack_d3 = 0x77;
                    uStack_d2 = 0x6e;
                    uStack_d1 = 0x5f;
                    uStack_d0 = 0x61;
                    uStack_cf = 0x6c;
                    uStack_ce = 0x6c;
                    uStack_cd = 0;
                    local_f8 = 0x726970735f6d616e;
                    local_f0 = 0x5f737469;
                    uStack_ec = 0x6968;
                    uStack_ea = 0x746e;
                    uStack_e6 = 0x6c75;
                    uStack_e4 = 0x5f65;
                    uStack_e2 = 0x6f70;
                    uStack_e0 = 0x6577;
                    uStack_de = 0x72;
                    uStack_dd = 0x75;
                    uStack_dc = 0x70;
                    uStack_db = 0x5f;
                    uStack_da = 0x6a;
                    uStack_d9 = 0x75;
                    local_100[1] = 0x2b;
                    pbVar3 = pbVar8;
                    do {
                      local_100[0] = local_100[0] * 0x89 ^ uVar4;
                      uVar4 = (uint)*pbVar3;
                      pbVar3 = pbVar3 + 1;
                    } while (uVar4 != 0);
                  }
                  else {
                    if (cVar2 != '\x05') goto LAB_71025bc13c;
                    uVar4 = 0x6e;
                    uStack_e8 = 0x725f;
                    uStack_d8 = 0x66;
                    uStack_d7 = 0x5f;
                    local_d6 = 100;
                    uStack_d5 = 0x6f;
                    uStack_d4 = 0x77;
                    uStack_d3 = 0x6e;
                    uStack_d2 = 0x5f;
                    uStack_d1 = 0x61;
                    uStack_d0 = 0x6c;
                    uStack_cf = 0x6c;
                    uStack_e6 = 0x6c75;
                    uStack_e4 = 0x5f65;
                    uStack_e2 = 0x6f70;
                    uStack_e0 = 0x6577;
                    local_f8 = 0x726970735f6d616e;
                    local_f0 = 0x5f737469;
                    uStack_ec = 0x6968;
                    uStack_ea = 0x746e;
                    uStack_de = 0x72;
                    uStack_dd = 0x75;
                    uStack_dc = 0x70;
                    uStack_db = 0x5f;
                    uStack_da = 100;
                    uStack_d9 = 0x65;
                    uStack_ce = 0;
                    local_100[1] = 0x2a;
                    pbVar3 = pbVar8;
                    do {
                      local_100[0] = local_100[0] * 0x89 ^ uVar4;
                      uVar4 = (uint)*pbVar3;
                      pbVar3 = pbVar3 + 1;
                    } while (uVar4 != 0);
                  }
LAB_71025bbf6c:
                  uVar4 = 4;
LAB_71025bbf74:
                  uStack_db = 0x5f;
                  uStack_dc = 0x70;
                  uStack_dd = 0x75;
                  uStack_de = 0x72;
                  uStack_e0 = 0x6577;
                  uStack_e2 = 0x6f70;
                  uStack_e4 = 0x5f65;
                  uStack_e6 = 0x6c75;
                  uStack_ea = 0x746e;
                  uStack_ec = 0x6968;
                  local_f0 = 0x5f737469;
                  uStack_e8 = 0x725f;
                  local_f8 = 0x726970735f6d616e;
                  local_70 = uVar4;
                  cVar13 = 'n';
                  goto LAB_71025bc13c;
                }
                if (cVar2 == '\x02') {
                  uVar4 = 0x6e;
                  local_f8 = 0x726970735f6d616e;
                  local_f0 = 0x5f737469;
                  uStack_ec = 0x6968;
                  uStack_ea = 0x746e;
                  uStack_e8 = 0x725f;
                  uStack_e6 = 0x6c75;
                  uStack_e4 = 0x5f65;
                  uStack_e2 = 0x6f70;
                  uStack_e0 = 0x6577;
                  uStack_de = 0x72;
                  uStack_dd = 0x75;
                  uStack_dc = 0x70;
                  uStack_db = 0x5f;
                  uStack_da = 0x61;
                  uStack_d9 = 0x74;
                  uStack_d8 = 0x6b;
                  uStack_d7 = 0x5f;
                  local_d6 = 0x75;
                  uStack_d5 = 0x70;
                  uStack_d4 = 0x5f;
                  uStack_d3 = 0x61;
                  uStack_d2 = 0x6c;
                  uStack_d1 = 0x6c;
                  uStack_d0 = 0;
                  local_100[1] = 0x28;
                  pbVar3 = pbVar8;
                  do {
                    local_100[0] = local_100[0] * 0x89 ^ uVar4;
                    uVar4 = (uint)*pbVar3;
                    pbVar3 = pbVar3 + 1;
                  } while (uVar4 != 0);
                }
                else if (cVar2 == '\0') {
                  uVar4 = 0x6e;
                  uStack_e8 = 0x725f;
                  uStack_d8 = 0x76;
                  uStack_d7 = 0x65;
                  local_d6 = 0x5f;
                  uStack_d5 = 0x75;
                  uStack_d4 = 0x70;
                  uStack_d3 = 0x5f;
                  uStack_d2 = 0x61;
                  uStack_d1 = 0x6c;
                  uStack_d0 = 0x6c;
                  uStack_cf = 0;
                  local_f8 = 0x726970735f6d616e;
                  local_f0 = 0x5f737469;
                  uStack_ec = 0x6968;
                  uStack_ea = 0x746e;
                  uStack_e6 = 0x6c75;
                  uStack_e4 = 0x5f65;
                  uStack_e2 = 0x6f70;
                  uStack_e0 = 0x6577;
                  uStack_de = 0x72;
                  uStack_dd = 0x75;
                  uStack_dc = 0x70;
                  uStack_db = 0x5f;
                  uStack_da = 0x6d;
                  uStack_d9 = 0x6f;
                  local_100[1] = 0x29;
                  pbVar3 = pbVar8;
                  do {
                    local_100[0] = local_100[0] * 0x89 ^ uVar4;
                    uVar4 = (uint)*pbVar3;
                    pbVar3 = pbVar3 + 1;
                  } while (uVar4 != 0);
                }
                else if (cVar2 == '\x01') {
                  uVar4 = 0x6e;
                  uStack_e8 = 0x725f;
                  uStack_d8 = 0x6d;
                  uStack_d7 = 0x70;
                  local_d6 = 0x5f;
                  uStack_d5 = 0x75;
                  uStack_d4 = 0x70;
                  uStack_d3 = 0x5f;
                  uStack_d2 = 0x61;
                  uStack_d1 = 0x6c;
                  uStack_d0 = 0x6c;
                  uStack_cf = 0;
                  local_f8 = 0x726970735f6d616e;
                  local_f0 = 0x5f737469;
                  uStack_ec = 0x6968;
                  uStack_ea = 0x746e;
                  uStack_e6 = 0x6c75;
                  uStack_e4 = 0x5f65;
                  uStack_e2 = 0x6f70;
                  uStack_e0 = 0x6577;
                  uStack_de = 0x72;
                  uStack_dd = 0x75;
                  uStack_dc = 0x70;
                  uStack_db = 0x5f;
                  uStack_da = 0x6a;
                  uStack_d9 = 0x75;
                  local_100[1] = 0x29;
                  pbVar3 = pbVar8;
                  do {
                    local_100[0] = local_100[0] * 0x89 ^ uVar4;
                    uVar4 = (uint)*pbVar3;
                    pbVar3 = pbVar3 + 1;
                  } while (uVar4 != 0);
                }
                else {
                  if (cVar2 != '\x05') goto LAB_71025bc13c;
                  uVar4 = 0x6e;
                  uStack_e8 = 0x725f;
                  uStack_d8 = 0x66;
                  uStack_d7 = 0x5f;
                  local_d6 = 0x75;
                  uStack_d5 = 0x70;
                  uStack_d4 = 0x5f;
                  uStack_d3 = 0x61;
                  uStack_d2 = 0x6c;
                  uStack_d1 = 0x6c;
                  local_f8 = 0x726970735f6d616e;
                  local_f0 = 0x5f737469;
                  uStack_ec = 0x6968;
                  uStack_ea = 0x746e;
                  uStack_e6 = 0x6c75;
                  uStack_e4 = 0x5f65;
                  uStack_e2 = 0x6f70;
                  uStack_e0 = 0x6577;
                  uStack_de = 0x72;
                  uStack_dd = 0x75;
                  uStack_dc = 0x70;
                  uStack_db = 0x5f;
                  uStack_da = 100;
                  uStack_d9 = 0x65;
                  uStack_d0 = 0;
                  local_100[1] = 0x28;
                  pbVar3 = pbVar8;
                  do {
                    local_100[0] = local_100[0] * 0x89 ^ uVar4;
                    uVar4 = (uint)*pbVar3;
                    pbVar3 = pbVar3 + 1;
                  } while (uVar4 != 0);
                }
              }
LAB_71025bc12c:
              uStack_db = 0x5f;
              uStack_dc = 0x70;
              uStack_dd = 0x75;
              uStack_de = 0x72;
              uStack_e0 = 0x6577;
              uStack_e2 = 0x6f70;
              uStack_e4 = 0x5f65;
              uStack_e6 = 0x6c75;
              uStack_e8 = 0x725f;
              uStack_ea = 0x746e;
              uStack_ec = 0x6968;
              local_f0 = 0x5f737469;
              local_f8 = 0x726970735f6d616e;
              uVar4 = 5;
              local_70 = 5;
              cVar13 = 'n';
            }
          }
LAB_71025bc13c:
          uVar6 = (int)lVar11 + 1;
          if (uVar15 <= uVar6) goto LAB_71025c06b0;
          lVar11 = lVar11 + 1;
        } while ((ulong)uVar6 < (ulong)((long)uVar12 >> 4));
      }
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_out_of_range();
    }
    cVar13 = '\0';
LAB_71025c06b0:
    if (local_100 != param_1) {
      uVar12 = 0;
      while (cVar13 != '\0') {
        *(char *)((long)param_1 + uVar12 + 8) = cVar13;
        if (0x3e < (int)uVar12 + 1U) {
          uVar12 = (ulong)((int)uVar12 + 1);
          break;
        }
        cVar13 = *(char *)((long)&local_f8 + uVar12 + 1);
        if (cVar13 == '\0') {
          uVar12 = uVar12 + 1;
          break;
        }
        *(char *)((long)param_1 + uVar12 + 9) = cVar13;
        lVar10 = uVar12 + 2;
        uVar12 = uVar12 + 2;
        cVar13 = *(char *)((long)&local_f8 + lVar10);
      }
      *(undefined1 *)((long)param_1 + (uVar12 & 0xffffffff) + 8) = 0;
      param_1[1] = (uint)uVar12;
      uVar15 = (uint)(byte)param_1[2];
      if ((byte)param_1[2] != 0) {
        pbVar8 = (byte *)((long)param_1 + 9);
        do {
          uVar9 = uVar9 * 0x89 ^ uVar15;
          uVar15 = (uint)*pbVar8;
          pbVar8 = pbVar8 + 1;
        } while (uVar15 != 0);
      }
      *param_1 = uVar9;
      *(undefined1 *)(param_1 + 0x14) = 0;
      param_1[0x12] = 0x811c9dc5;
      param_1[0x13] = 0;
    }
    goto LAB_71025c1708;
  case 2:
    uVar4 = 8;
    local_f8 = (ulong)local_f8._1_7_ << 8;
    local_100[0] = 0;
    local_100[1] = 0;
    local_b0[0] = '\0';
    local_b8 = 0;
    uVar9 = 0x811c9dc5;
    local_70 = 8;
    lVar10 = *(long *)(*DAT_7105329fa0 + 0x310);
    cVar13 = '\0';
    uVar12 = *(long *)(*DAT_7105329fa0 + 0x318) - lVar10 >> 4;
    uVar15 = (uint)uVar12;
    if (uVar15 != 0) {
      uVar6 = 0;
      pbVar8 = (byte *)((long)&local_f8 + 1);
      uVar4 = 8;
      do {
        uVar14 = (ulong)uVar6;
        if (uVar12 <= uVar14) {
LAB_71025c1ba8:
          local_b0[0] = '\0';
          local_b8 = 0;
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
        if (((*(ulong *)(lVar10 + uVar14 * 0x10) ^ param_3) & 0xffffffffff) == 0) {
          lVar11 = lVar10 + uVar14 * 0x10;
          local_100[0] = uVar9;
          if (*(char *)(lVar11 + 9) == '\0') {
            if (*(char *)(lVar11 + 8) != '\0') {
              local_f8 = 0x726970735f6d616e;
              local_f0 = 0x5f737469;
              uStack_ec = 0x6968;
              uStack_ea = 0x746e;
              uStack_e8 = 0x725f;
              uStack_e6 = 0x6c75;
              uStack_e4 = 0x5f65;
              uStack_e2 = 0x6373;
              uStack_e0 = 0x6c61;
              uStack_de = 0x65;
              uStack_dd = 0x5f;
              if (*(char *)(lVar11 + 10) == '\0') {
                uStack_dc = 0x73;
                uStack_db = 0x6d;
                uStack_da = 0x61;
                uStack_d9 = 0x6c;
                uStack_d8 = 0x6c;
                uStack_d7 = 0x5f;
                local_d6 = 0x70;
                uStack_d5 = 0x6c;
                uStack_d4 = 0x61;
                uStack_d3 = 0x79;
                uStack_d2 = 0x65;
                uStack_d1 = 0x72;
                uVar4 = 0x6e;
                uStack_d0 = 0;
                local_100[1] = 0x28;
                pbVar3 = pbVar8;
                do {
                  local_100[0] = local_100[0] * 0x89 ^ uVar4;
                  uVar4 = (uint)*pbVar3;
                  pbVar3 = pbVar3 + 1;
                } while (uVar4 != 0);
                goto LAB_71025be71c;
              }
              uVar4 = 0x6e;
              uStack_dc = 0x62;
              uStack_db = 0x69;
              uStack_da = 0x67;
              uStack_d9 = 0x5f;
              uStack_d8 = 0x70;
              uStack_d7 = 0x6c;
              local_d6 = 0x61;
              uStack_d5 = 0x79;
              uStack_d4 = 0x65;
              uStack_d3 = 0x72;
              uStack_d2 = 0;
              local_100[1] = 0x26;
              pbVar3 = pbVar8;
              do {
                local_100[0] = local_100[0] * 0x89 ^ uVar4;
                uVar4 = (uint)*pbVar3;
                pbVar3 = pbVar3 + 1;
              } while (uVar4 != 0);
              goto LAB_71025be76c;
            }
          }
          else {
            local_f8 = 0x726970735f6d616e;
            local_f0 = 0x5f737469;
            uStack_ec = 0x6968;
            uStack_ea = 0x746e;
            uStack_e8 = 0x725f;
            uStack_e6 = 0x6c75;
            uStack_e4 = 0x5f65;
            uStack_e2 = 0x6373;
            uStack_e0 = 0x6c61;
            uStack_de = 0x65;
            uStack_dd = 0x5f;
            if (*(char *)(lVar11 + 8) == '\0') {
              if (*(char *)(lVar11 + 10) == '\0') {
                uStack_dc = 0x73;
                uStack_db = 0x6d;
                uStack_da = 0x61;
                uStack_d9 = 0x6c;
                uStack_d8 = 0x6c;
                uStack_d7 = 0x5f;
                local_d6 = 0x65;
                uStack_d5 = 0x6e;
                uStack_d4 = 0x65;
                uStack_d3 = 0x6d;
                uStack_d2 = 0x79;
                uStack_d1 = 0;
                uVar4 = 0x6e;
                local_100[1] = 0x27;
                pbVar3 = pbVar8;
                do {
                  local_100[0] = local_100[0] * 0x89 ^ uVar4;
                  uVar4 = (uint)*pbVar3;
                  pbVar3 = pbVar3 + 1;
                } while (uVar4 != 0);
                goto LAB_71025be76c;
              }
              uVar4 = 0x6e;
              uStack_dc = 0x62;
              uStack_db = 0x69;
              uStack_da = 0x67;
              uStack_d9 = 0x5f;
              uStack_d8 = 0x65;
              uStack_d7 = 0x6e;
              local_d6 = 0x65;
              uStack_d5 = 0x6d;
              uStack_d4 = 0x79;
              uStack_d3 = 0;
              local_100[1] = 0x25;
              pbVar3 = pbVar8;
              do {
                local_100[0] = local_100[0] * 0x89 ^ uVar4;
                uVar4 = (uint)*pbVar3;
                pbVar3 = pbVar3 + 1;
              } while (uVar4 != 0);
LAB_71025be71c:
              uVar4 = 2;
            }
            else {
              if (*(char *)(lVar11 + 10) == '\0') {
                uVar4 = 0x6e;
                uStack_dc = 0x73;
                uStack_db = 0x6d;
                uStack_da = 0x61;
                uStack_d9 = 0x6c;
                uStack_d8 = 0x6c;
                uStack_d7 = 0x5f;
                local_d6 = 0x61;
                uStack_d5 = 0x6c;
                uStack_d4 = 0x6c;
                uStack_d3 = 0;
                local_100[1] = 0x25;
                pbVar3 = pbVar8;
                do {
                  local_100[0] = local_100[0] * 0x89 ^ uVar4;
                  uVar4 = (uint)*pbVar3;
                  pbVar3 = pbVar3 + 1;
                } while (uVar4 != 0);
              }
              else {
                uVar4 = 0x6e;
                uStack_dc = 0x62;
                uStack_db = 0x69;
                uStack_da = 0x67;
                uStack_d9 = 0x5f;
                uStack_d8 = 0x61;
                uStack_d7 = 0x6c;
                local_d6 = 0x6c;
                uStack_d5 = 0;
                local_100[1] = 0x23;
                pbVar3 = pbVar8;
                do {
                  local_100[0] = local_100[0] * 0x89 ^ uVar4;
                  uVar4 = (uint)*pbVar3;
                  pbVar3 = pbVar3 + 1;
                } while (uVar4 != 0);
              }
LAB_71025be76c:
              uVar4 = 4;
            }
            uStack_dd = 0x5f;
            uStack_de = 0x65;
            uStack_e0 = 0x6c61;
            uStack_e2 = 0x6373;
            uStack_e4 = 0x5f65;
            uStack_e6 = 0x6c75;
            uStack_e8 = 0x725f;
            uStack_ea = 0x746e;
            uStack_ec = 0x6968;
            local_f0 = 0x5f737469;
            local_f8 = 0x726970735f6d616e;
            cVar13 = 'n';
            local_70 = uVar4;
          }
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar15);
    }
    if (local_100 != param_1) {
      uVar12 = 0;
      while (cVar13 != '\0') {
        *(char *)((long)param_1 + uVar12 + 8) = cVar13;
        if (0x3e < (int)uVar12 + 1U) {
          uVar12 = (ulong)((int)uVar12 + 1);
          break;
        }
        cVar13 = *(char *)((long)&local_f8 + uVar12 + 1);
        if (cVar13 == '\0') {
          uVar12 = uVar12 + 1;
          break;
        }
        *(char *)((long)param_1 + uVar12 + 9) = cVar13;
        lVar10 = uVar12 + 2;
        uVar12 = uVar12 + 2;
        cVar13 = *(char *)((long)&local_f8 + lVar10);
      }
      *(undefined1 *)((long)param_1 + (uVar12 & 0xffffffff) + 8) = 0;
      param_1[1] = (uint)uVar12;
      uVar15 = (uint)(byte)param_1[2];
      if ((byte)param_1[2] != 0) {
        pbVar8 = (byte *)((long)param_1 + 9);
        do {
          uVar9 = uVar9 * 0x89 ^ uVar15;
          uVar15 = (uint)*pbVar8;
          pbVar8 = pbVar8 + 1;
        } while (uVar15 != 0);
      }
      *param_1 = uVar9;
      *(undefined1 *)(param_1 + 0x14) = 0;
      param_1[0x12] = 0x811c9dc5;
      param_1[0x13] = 0;
    }
    param_1[0x24] = uVar4;
    return;
  case 3:
    uVar4 = 8;
    local_f8 = (ulong)local_f8._1_7_ << 8;
    local_100[0] = 0;
    local_100[1] = 0;
    local_b0[0] = '\0';
    local_b8 = 0;
    uVar9 = 0x811c9dc5;
    local_70 = 8;
    lVar10 = *(long *)(*DAT_7105329fa0 + 0x328);
    cVar13 = '\0';
    uVar12 = *(long *)(*DAT_7105329fa0 + 0x330) - lVar10 >> 4;
    uVar15 = (uint)uVar12;
    if (uVar15 != 0) {
      uVar6 = 0;
      pbVar8 = (byte *)((long)&local_f8 + 1);
      uVar4 = 8;
      do {
        uVar14 = (ulong)uVar6;
        if (uVar12 <= uVar14) goto LAB_71025c1ba8;
        if (((*(ulong *)(lVar10 + uVar14 * 0x10) ^ param_3) & 0xffffffffff) == 0) {
          lVar11 = lVar10 + uVar14 * 0x10;
          cVar2 = *(char *)(lVar11 + 8);
          local_100[0] = uVar9;
          if (*(int *)(lVar11 + 0xc) < 0x28) {
            if (*(char *)(lVar11 + 9) == '\0') {
              if (cVar2 == '\0') goto LAB_71025bd598;
              uVar4 = 0x6e;
              uStack_de = 0x67;
              uStack_dd = 0x65;
              uStack_dc = 0x5f;
              uStack_db = 0x70;
              uStack_da = 0x6c;
              uStack_d9 = 0x61;
              uStack_d8 = 0x79;
              uStack_d7 = 0x65;
              local_d6 = 0x72;
              uStack_d5 = 0;
              local_f8 = 0x726970735f6d616e;
              local_f0 = 0x5f737469;
              uStack_ec = 0x6968;
              uStack_ea = 0x746e;
              uStack_e8 = 0x725f;
              uStack_e6 = 0x6c75;
              uStack_e4 = 0x5f65;
              uStack_e2 = 0x6164;
              uStack_e0 = 0x616d;
              local_100[1] = 0x23;
              pbVar3 = pbVar8;
              do {
                local_100[0] = local_100[0] * 0x89 ^ uVar4;
                uVar4 = (uint)*pbVar3;
                pbVar3 = pbVar3 + 1;
              } while (uVar4 != 0);
            }
            else {
              local_f8 = 0x726970735f6d616e;
              local_f0 = 0x5f737469;
              uStack_ec = 0x6968;
              uStack_ea = 0x746e;
              uStack_e8 = 0x725f;
              uStack_e6 = 0x6c75;
              uStack_e4 = 0x5f65;
              uStack_e2 = 0x6164;
              uStack_e0 = 0x616d;
              uStack_de = 0x67;
              uStack_dd = 0x65;
              uStack_dc = 0x5f;
              if (cVar2 == '\0') {
                uVar4 = 0x6e;
                uStack_db = 0x65;
                uStack_da = 0x6e;
                uStack_d9 = 0x65;
                uStack_d8 = 0x6d;
                uStack_d7 = 0x79;
                local_d6 = 0;
                pbVar3 = pbVar8;
                do {
                  local_100[0] = local_100[0] * 0x89 ^ uVar4;
                  uVar4 = (uint)*pbVar3;
                  pbVar3 = pbVar3 + 1;
                } while (uVar4 != 0);
                local_100[1] = 0x22;
                uVar4 = 4;
                goto LAB_71025bd590;
              }
              uVar4 = 0x6e;
              uStack_db = 0x61;
              uStack_da = 0x6c;
              uStack_d9 = 0x6c;
              uStack_d8 = 0;
              local_100[1] = 0x20;
              pbVar3 = pbVar8;
              do {
                local_100[0] = local_100[0] * 0x89 ^ uVar4;
                uVar4 = (uint)*pbVar3;
                pbVar3 = pbVar3 + 1;
              } while (uVar4 != 0);
            }
LAB_71025bd588:
            uVar4 = 3;
          }
          else {
            if (*(char *)(lVar11 + 9) == '\0') {
              if (cVar2 == '\0') goto LAB_71025bd598;
              uVar4 = 0x6e;
              local_f8 = 0x726970735f6d616e;
              local_f0 = 0x5f737469;
              uStack_ec = 0x6968;
              uStack_ea = 0x746e;
              uStack_e8 = 0x725f;
              uStack_e6 = 0x6c75;
              uStack_e4 = 0x5f65;
              uStack_e2 = 0x6164;
              uStack_e0 = 0x616d;
              uStack_de = 0x67;
              uStack_dd = 0x65;
              uStack_dc = 0x5f;
              uStack_db = 0x6c;
              uStack_da = 0x5f;
              uStack_d9 = 0x70;
              uStack_d8 = 0x6c;
              uStack_d7 = 0x61;
              local_d6 = 0x79;
              uStack_d5 = 0x65;
              uStack_d4 = 0x72;
              uStack_d3 = 0;
              local_100[1] = 0x25;
              pbVar3 = pbVar8;
              do {
                local_100[0] = local_100[0] * 0x89 ^ uVar4;
                uVar4 = (uint)*pbVar3;
                pbVar3 = pbVar3 + 1;
              } while (uVar4 != 0);
            }
            else {
              local_f8 = 0x726970735f6d616e;
              local_f0 = 0x5f737469;
              uStack_ec = 0x6968;
              uStack_ea = 0x746e;
              uStack_e8 = 0x725f;
              uStack_e6 = 0x6c75;
              uStack_e4 = 0x5f65;
              uStack_e2 = 0x6164;
              uStack_e0 = 0x616d;
              uStack_de = 0x67;
              uStack_dd = 0x65;
              uStack_dc = 0x5f;
              uStack_db = 0x6c;
              uStack_da = 0x5f;
              if (cVar2 == '\0') {
                uVar4 = 0x6e;
                uStack_d9 = 0x65;
                uStack_d8 = 0x6e;
                uStack_d7 = 0x65;
                local_d6 = 0x6d;
                uStack_d5 = 0x79;
                uStack_d4 = 0;
                local_100[1] = 0x24;
                pbVar3 = pbVar8;
                do {
                  local_100[0] = local_100[0] * 0x89 ^ uVar4;
                  uVar4 = (uint)*pbVar3;
                  pbVar3 = pbVar3 + 1;
                } while (uVar4 != 0);
                goto LAB_71025bd588;
              }
              uVar4 = 0x6e;
              uStack_d9 = 0x61;
              uStack_d8 = 0x6c;
              uStack_d7 = 0x6c;
              local_d6 = 0;
              local_100[1] = 0x22;
              pbVar3 = pbVar8;
              do {
                local_100[0] = local_100[0] * 0x89 ^ uVar4;
                uVar4 = (uint)*pbVar3;
                pbVar3 = pbVar3 + 1;
              } while (uVar4 != 0);
            }
            uStack_d8 = 0x6c;
            uStack_da = 0x5f;
            uStack_db = 0x6c;
            uVar4 = 2;
          }
LAB_71025bd590:
          uStack_dc = 0x5f;
          uStack_dd = 0x65;
          uStack_de = 0x67;
          uStack_e0 = 0x616d;
          uStack_e2 = 0x6164;
          uStack_e4 = 0x5f65;
          uStack_e6 = 0x6c75;
          uStack_ea = 0x746e;
          uStack_ec = 0x6968;
          local_f0 = 0x5f737469;
          uStack_e8 = 0x725f;
          local_f8 = 0x726970735f6d616e;
          cVar13 = 'n';
          local_70 = uVar4;
        }
LAB_71025bd598:
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar15);
    }
    if (local_100 != param_1) {
      uVar12 = 0;
      while (cVar13 != '\0') {
        *(char *)((long)param_1 + uVar12 + 8) = cVar13;
        if (0x3e < (int)uVar12 + 1U) {
          uVar12 = (ulong)((int)uVar12 + 1);
          break;
        }
        cVar13 = *(char *)((long)&local_f8 + uVar12 + 1);
        if (cVar13 == '\0') {
          uVar12 = uVar12 + 1;
          break;
        }
        *(char *)((long)param_1 + uVar12 + 9) = cVar13;
        lVar10 = uVar12 + 2;
        uVar12 = uVar12 + 2;
        cVar13 = *(char *)((long)&local_f8 + lVar10);
      }
      *(undefined1 *)((long)param_1 + (uVar12 & 0xffffffff) + 8) = 0;
      param_1[1] = (uint)uVar12;
      uVar15 = (uint)(byte)param_1[2];
      if ((byte)param_1[2] != 0) {
        pbVar8 = (byte *)((long)param_1 + 9);
        do {
          uVar9 = uVar9 * 0x89 ^ uVar15;
          uVar15 = (uint)*pbVar8;
          pbVar8 = pbVar8 + 1;
        } while (uVar15 != 0);
      }
      *param_1 = uVar9;
      *(undefined1 *)(param_1 + 0x14) = 0;
      param_1[0x12] = 0x811c9dc5;
      param_1[0x13] = 0;
    }
    param_1[0x24] = uVar4;
    return;
  case 4:
    uVar15 = 8;
    local_f8 = (ulong)local_f8._1_7_ << 8;
    local_100[0] = 0;
    local_100[1] = 0;
    local_b0[0] = '\0';
    local_b8 = 0;
    uVar4 = 0x811c9dc5;
    local_70 = 8;
    lVar10 = *(long *)(*DAT_7105329fa0 + 0x340);
    cVar13 = '\0';
    uVar12 = *(long *)(*DAT_7105329fa0 + 0x348) - lVar10 >> 4;
    uVar9 = (uint)uVar12;
    if (uVar9 != 0) {
      uVar6 = 0;
      pbVar8 = (byte *)((long)&local_f8 + 1);
      uVar15 = 8;
      do {
        uVar14 = (ulong)uVar6;
        if (uVar12 <= uVar14) {
LAB_71025c1ba0:
          local_b0[0] = '\0';
          local_b8 = 0;
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
        if (((*(ulong *)(lVar10 + uVar14 * 0x10) ^ param_3) & 0xffffffffff) == 0) {
          lVar11 = lVar10 + uVar14 * 0x10;
          cVar2 = *(char *)(lVar11 + 8);
          local_100[0] = uVar4;
          if (*(char *)(lVar11 + 9) == '\0') {
            if (cVar2 != '\0') {
              uVar15 = 0x6e;
              local_f8 = 0x726970735f6d616e;
              local_f0 = 0x5f737469;
              uStack_ec = 0x6968;
              uStack_ea = 0x746e;
              uStack_e8 = 0x725f;
              uStack_e6 = 0x6c75;
              uStack_e4 = 0x5f65;
              uStack_e2 = 0x6164;
              uStack_e0 = 0x616d;
              uStack_de = 0x67;
              uStack_dd = 0x65;
              uStack_dc = 0x5f;
              uStack_db = 0x33;
              uStack_da = 0x30;
              uStack_d9 = 0x30;
              uStack_d8 = 0x5f;
              uStack_d7 = 0x70;
              local_d6 = 0x6c;
              uStack_d5 = 0x61;
              uStack_d4 = 0x79;
              uStack_d3 = 0x65;
              uStack_d2 = 0x72;
              uStack_d1 = 0;
              local_100[1] = 0x27;
              pbVar3 = pbVar8;
              do {
                local_100[0] = local_100[0] * 0x89 ^ uVar15;
                uVar15 = (uint)*pbVar3;
                pbVar3 = pbVar3 + 1;
              } while (uVar15 != 0);
              goto LAB_71025befdc;
            }
          }
          else {
            local_f8 = 0x726970735f6d616e;
            local_f0 = 0x5f737469;
            uStack_ec = 0x6968;
            uStack_ea = 0x746e;
            uStack_e8 = 0x725f;
            uStack_e6 = 0x6c75;
            uStack_e4 = 0x5f65;
            if (cVar2 == '\0') {
              uVar15 = 0x6e;
              uStack_e2 = 0x6164;
              uStack_e0 = 0x616d;
              uStack_de = 0x67;
              uStack_dd = 0x65;
              uStack_dc = 0x5f;
              uStack_db = 0x33;
              uStack_da = 0x30;
              uStack_d9 = 0x30;
              uStack_d8 = 0x5f;
              uStack_d7 = 0x65;
              local_d6 = 0x6e;
              uStack_d5 = 0x65;
              uStack_d4 = 0x6d;
              uStack_d3 = 0x79;
              uStack_d2 = 0;
              pbVar3 = pbVar8;
              do {
                local_100[0] = local_100[0] * 0x89 ^ uVar15;
                uVar15 = (uint)*pbVar3;
                pbVar3 = pbVar3 + 1;
              } while (uVar15 != 0);
              local_100[1] = 0x26;
              uVar15 = 3;
            }
            else {
              uVar15 = 0x6e;
              uStack_e2 = 0x7573;
              uStack_e0 = 0x6464;
              uStack_de = 0x65;
              uStack_dd = 0x6e;
              uStack_dc = 100;
              uStack_db = 0x65;
              uStack_da = 0x61;
              uStack_d9 = 0x74;
              uStack_d8 = 0x68;
              uStack_d7 = 0;
              local_100[1] = 0x21;
              pbVar3 = pbVar8;
              do {
                local_100[0] = local_100[0] * 0x89 ^ uVar15;
                uVar15 = (uint)*pbVar3;
                pbVar3 = pbVar3 + 1;
              } while (uVar15 != 0);
LAB_71025befdc:
              uVar15 = 2;
            }
            uStack_e4 = 0x5f65;
            uStack_e6 = 0x6c75;
            uStack_e8 = 0x725f;
            uStack_ea = 0x746e;
            uStack_ec = 0x6968;
            local_f0 = 0x5f737469;
            local_f8 = 0x726970735f6d616e;
            cVar13 = 'n';
            local_70 = uVar15;
          }
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar9);
    }
    if (local_100 != param_1) {
      uVar12 = 0;
      while (cVar13 != '\0') {
        *(char *)((long)param_1 + uVar12 + 8) = cVar13;
        if (0x3e < (int)uVar12 + 1U) {
          uVar12 = (ulong)((int)uVar12 + 1);
          break;
        }
        cVar13 = *(char *)((long)&local_f8 + uVar12 + 1);
        if (cVar13 == '\0') {
          uVar12 = uVar12 + 1;
          break;
        }
        *(char *)((long)param_1 + uVar12 + 9) = cVar13;
        lVar10 = uVar12 + 2;
        uVar12 = uVar12 + 2;
        cVar13 = *(char *)((long)&local_f8 + lVar10);
      }
      *(undefined1 *)((long)param_1 + (uVar12 & 0xffffffff) + 8) = 0;
      param_1[1] = (uint)uVar12;
      uVar6 = (uint)(byte)param_1[2];
      uVar9 = 0x811c9dc5;
      if ((byte)param_1[2] != 0) {
        pbVar8 = (byte *)((long)param_1 + 9);
        uVar9 = uVar4;
        do {
          uVar9 = uVar9 * 0x89 ^ uVar6;
          uVar6 = (uint)*pbVar8;
          pbVar8 = pbVar8 + 1;
        } while (uVar6 != 0);
      }
LAB_71025c184c:
      *param_1 = uVar9;
      *(undefined1 *)(param_1 + 0x14) = 0;
      param_1[0x12] = 0x811c9dc5;
LAB_71025c1858:
      param_1[0x13] = 0;
    }
    break;
  case 5:
    local_70 = 8;
    local_f8 = (ulong)local_f8._1_7_ << 8;
    local_100[0] = 0;
    local_100[1] = 0;
    local_b0[0] = '\0';
    local_b8 = 0;
    lVar10 = *(long *)(*DAT_7105329fa0 + 0x448);
    uVar12 = *(long *)(*DAT_7105329fa0 + 0x450) - lVar10 >> 4;
    uVar9 = (uint)uVar12;
    if (uVar9 != 0) {
      uVar15 = 0;
      do {
        uVar14 = (ulong)uVar15;
        if (uVar12 <= uVar14) goto LAB_71025c1ba0;
        if (((*(ulong *)(lVar10 + uVar14 * 0x10) ^ param_3) & 0xffffffffff) == 0) {
          lVar11 = lVar10 + uVar14 * 0x10;
          cVar13 = *(char *)(lVar11 + 9);
          if (*(char *)(lVar11 + 8) == '\0') {
            pcVar5 = "nam_spirits_hint_rule_invincible_enemy";
            if (cVar13 == '\0') goto LAB_71025bf108;
          }
          else {
            pcVar5 = "nam_spirits_hint_rule_invincible_player";
            if (cVar13 != '\0') {
              pcVar5 = "nam_spirits_hint_rule_invincible_all";
            }
          }
          uVar12 = 0;
          goto LAB_71025c1a1c;
        }
LAB_71025bf108:
        uVar15 = uVar15 + 1;
      } while (uVar15 < uVar9);
    }
    uVar12 = 0;
LAB_71025bf118:
    uVar4 = 0x811c9dc5;
    uVar9 = 0x811c9dc5;
    *(undefined1 *)((long)&local_f8 + (uVar12 & 0xffffffff)) = 0;
    if ((char)local_f8 != '\0') {
      pcVar5 = (char *)((long)&local_f8 + 1);
      do {
        cVar13 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar13 != '\0');
    }
    uVar15 = 2;
    local_70 = 2;
    if (local_100 == param_1) goto LAB_71025c16b8;
    uVar12 = 0;
    while ((char)local_f8 != '\0') {
      *(char *)((long)param_1 + uVar12 + 8) = (char)local_f8;
      if (0x3e < (int)uVar12 + 1U) {
        uVar12 = (ulong)((int)uVar12 + 1);
        break;
      }
      cVar13 = *(char *)((long)&local_f8 + uVar12 + 1);
      if (cVar13 == '\0') {
        uVar12 = uVar12 + 1;
        break;
      }
      *(char *)((long)param_1 + uVar12 + 9) = cVar13;
      lVar10 = uVar12 + 2;
      uVar12 = uVar12 + 2;
      local_f8._0_1_ = *(char *)((long)&local_f8 + lVar10);
    }
    *(undefined1 *)((long)param_1 + (uVar12 & 0xffffffff) + 8) = 0;
    uVar7 = (uint)(byte)param_1[2];
    param_1[1] = (uint)uVar12;
    uVar6 = uVar4;
    if ((byte)param_1[2] != 0) {
      pbVar8 = (byte *)((long)param_1 + 9);
      do {
        uVar6 = uVar6 * 0x89 ^ uVar7;
        uVar7 = (uint)*pbVar8;
        pbVar8 = pbVar8 + 1;
      } while (uVar7 != 0);
    }
    *param_1 = uVar6;
    for (uVar12 = 0; local_b0[uVar12] != '\0'; uVar12 = uVar12 + 2) {
      *(char *)((long)param_1 + uVar12 + 0x50) = local_b0[uVar12];
      if (0x3e < (int)uVar12 + 1U) {
        uVar12 = (ulong)((int)uVar12 + 1);
        break;
      }
      if (local_b0[uVar12 + 1] == '\0') {
        uVar12 = uVar12 + 1;
        break;
      }
      *(char *)((long)param_1 + uVar12 + 0x51) = local_b0[uVar12 + 1];
    }
    *(undefined1 *)((long)param_1 + (uVar12 & 0xffffffff) + 0x50) = 0;
    uVar6 = (uint)(byte)param_1[0x14];
    param_1[0x13] = (uint)uVar12;
    if ((byte)param_1[0x14] != 0) {
      pbVar8 = (byte *)((long)param_1 + 0x51);
      uVar9 = uVar4;
      do {
        uVar9 = uVar9 * 0x89 ^ uVar6;
        uVar6 = (uint)*pbVar8;
        pbVar8 = pbVar8 + 1;
      } while (uVar6 != 0);
    }
    goto LAB_71025c16b4;
  case 6:
    uVar4 = 8;
    local_f8 = (ulong)local_f8._1_7_ << 8;
    local_100[0] = 0;
    local_100[1] = 0;
    local_b0[0] = '\0';
    local_b8 = 0;
    uVar9 = 0x811c9dc5;
    local_70 = 8;
    lVar10 = *(long *)(*DAT_7105329fa0 + 0x358);
    cVar13 = '\0';
    uVar12 = *(long *)(*DAT_7105329fa0 + 0x360) - lVar10 >> 4;
    uVar15 = (uint)uVar12;
    if (uVar15 != 0) {
      uVar6 = 0;
      pbVar8 = (byte *)((long)&local_f8 + 1);
      uVar4 = 8;
      do {
        uVar14 = (ulong)uVar6;
        if (uVar12 <= uVar14) goto LAB_71025c1ba8;
        if (((*(ulong *)(lVar10 + uVar14 * 0x10) ^ param_3) & 0xffffffffff) == 0) {
          lVar11 = lVar10 + uVar14 * 0x10;
          cVar2 = *(char *)(lVar11 + 8);
          local_100[0] = uVar9;
          if (*(int *)(lVar11 + 0xc) < 0x28) {
            if (*(char *)(lVar11 + 9) == '\0') {
              if (cVar2 == '\0') goto LAB_71025bd8bc;
              uVar4 = 0x6e;
              uStack_e8 = 0x725f;
              uStack_de = 0x5f;
              uStack_dd = 0x70;
              uStack_dc = 0x6c;
              uStack_db = 0x61;
              uStack_da = 0x79;
              uStack_d9 = 0x65;
              uStack_d8 = 0x72;
              uStack_d7 = 0;
              local_f8 = 0x726970735f6d616e;
              local_f0 = 0x5f737469;
              uStack_ec = 0x6968;
              uStack_ea = 0x746e;
              uStack_e6 = 0x6c75;
              uStack_e4 = 0x5f65;
              uStack_e2 = 0x6568;
              uStack_e0 = 0x6c61;
              local_100[1] = 0x21;
              pbVar3 = pbVar8;
              do {
                local_100[0] = local_100[0] * 0x89 ^ uVar4;
                uVar4 = (uint)*pbVar3;
                pbVar3 = pbVar3 + 1;
              } while (uVar4 != 0);
            }
            else {
              local_f8 = 0x726970735f6d616e;
              local_f0 = 0x5f737469;
              uStack_ec = 0x6968;
              uStack_ea = 0x746e;
              uStack_e8 = 0x725f;
              uStack_e6 = 0x6c75;
              uStack_e4 = 0x5f65;
              uStack_e2 = 0x6568;
              uStack_e0 = 0x6c61;
              uStack_de = 0x5f;
              if (cVar2 == '\0') {
                uVar4 = 0x6e;
                uStack_dd = 0x65;
                uStack_dc = 0x6e;
                uStack_db = 0x65;
                uStack_da = 0x6d;
                uStack_d9 = 0x79;
                uStack_d8 = 0;
                pbVar3 = pbVar8;
                do {
                  local_100[0] = local_100[0] * 0x89 ^ uVar4;
                  uVar4 = (uint)*pbVar3;
                  pbVar3 = pbVar3 + 1;
                } while (uVar4 != 0);
LAB_71025bd870:
                uStack_d8 = 0;
                local_100[1] = 0x20;
                uVar4 = 4;
                goto LAB_71025bd8b4;
              }
              uVar4 = 0x6e;
              uStack_dd = 0x61;
              uStack_dc = 0x6c;
              uStack_db = 0x6c;
              uStack_da = 0;
              local_100[1] = 0x1e;
              pbVar3 = pbVar8;
              do {
                local_100[0] = local_100[0] * 0x89 ^ uVar4;
                uVar4 = (uint)*pbVar3;
                pbVar3 = pbVar3 + 1;
              } while (uVar4 != 0);
            }
            uStack_dc = 0x6c;
            uStack_de = 0x5f;
            uStack_e0 = 0x6c61;
            uStack_e2 = 0x6568;
            uStack_e4 = 0x5f65;
            uStack_e6 = 0x6c75;
            uStack_e8 = 0x725f;
            uStack_ea = 0x746e;
            uStack_ec = 0x6968;
            local_f0 = 0x5f737469;
            local_f8 = 0x726970735f6d616e;
            uVar4 = 5;
            local_70 = 5;
            cVar13 = 'n';
          }
          else {
            if (*(char *)(lVar11 + 9) == '\0') {
              if (cVar2 == '\0') goto LAB_71025bd8bc;
              uVar4 = 0x6e;
              local_f8 = 0x726970735f6d616e;
              local_f0 = 0x5f737469;
              uStack_ec = 0x6968;
              uStack_ea = 0x746e;
              uStack_e8 = 0x725f;
              uStack_e6 = 0x6c75;
              uStack_e4 = 0x5f65;
              uStack_e2 = 0x6568;
              uStack_e0 = 0x6c61;
              uStack_de = 0x5f;
              uStack_dd = 0x6c;
              uStack_dc = 0x5f;
              uStack_db = 0x70;
              uStack_da = 0x6c;
              uStack_d9 = 0x61;
              uStack_d8 = 0x79;
              uStack_d7 = 0x65;
              local_d6 = 0x72;
              uStack_d5 = 0;
              pbVar3 = pbVar8;
              do {
                local_100[0] = local_100[0] * 0x89 ^ uVar4;
                uVar4 = (uint)*pbVar3;
                pbVar3 = pbVar3 + 1;
              } while (uVar4 != 0);
              uVar4 = 2;
              local_100[1] = 0x23;
            }
            else {
              local_f8 = 0x726970735f6d616e;
              local_f0 = 0x5f737469;
              uStack_ec = 0x6968;
              uStack_ea = 0x746e;
              uStack_e8 = 0x725f;
              uStack_e6 = 0x6c75;
              uStack_e4 = 0x5f65;
              uStack_e2 = 0x6568;
              uStack_e0 = 0x6c61;
              uStack_de = 0x5f;
              uStack_dd = 0x6c;
              uStack_dc = 0x5f;
              if (cVar2 != '\0') {
                uVar4 = 0x6e;
                uStack_db = 0x61;
                uStack_da = 0x6c;
                uStack_d9 = 0x6c;
                uStack_d8 = 0;
                pbVar3 = pbVar8;
                do {
                  local_100[0] = local_100[0] * 0x89 ^ uVar4;
                  uVar4 = (uint)*pbVar3;
                  pbVar3 = pbVar3 + 1;
                } while (uVar4 != 0);
                goto LAB_71025bd870;
              }
              uVar4 = 0x6e;
              uStack_db = 0x65;
              uStack_da = 0x6e;
              uStack_d9 = 0x65;
              uStack_d8 = 0x6d;
              uStack_d7 = 0x79;
              local_d6 = 0;
              pbVar3 = pbVar8;
              do {
                local_100[0] = local_100[0] * 0x89 ^ uVar4;
                uVar4 = (uint)*pbVar3;
                pbVar3 = pbVar3 + 1;
              } while (uVar4 != 0);
              local_100[1] = 0x22;
              uVar4 = 3;
            }
LAB_71025bd8b4:
            uStack_de = 0x5f;
            uStack_e0 = 0x6c61;
            uStack_e2 = 0x6568;
            uStack_e4 = 0x5f65;
            uStack_e6 = 0x6c75;
            uStack_ea = 0x746e;
            uStack_ec = 0x6968;
            local_f0 = 0x5f737469;
            uStack_e8 = 0x725f;
            local_f8 = 0x726970735f6d616e;
            local_70 = uVar4;
            cVar13 = 'n';
          }
        }
LAB_71025bd8bc:
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar15);
    }
    if (local_100 != param_1) {
      uVar12 = 0;
      while (cVar13 != '\0') {
        *(char *)((long)param_1 + uVar12 + 8) = cVar13;
        if (0x3e < (int)uVar12 + 1U) {
          uVar12 = (ulong)((int)uVar12 + 1);
          break;
        }
        cVar13 = *(char *)((long)&local_f8 + uVar12 + 1);
        if (cVar13 == '\0') {
          uVar12 = uVar12 + 1;
          break;
        }
        *(char *)((long)param_1 + uVar12 + 9) = cVar13;
        lVar10 = uVar12 + 2;
        uVar12 = uVar12 + 2;
        cVar13 = *(char *)((long)&local_f8 + lVar10);
      }
      *(undefined1 *)((long)param_1 + (uVar12 & 0xffffffff) + 8) = 0;
      param_1[1] = (uint)uVar12;
      uVar15 = (uint)(byte)param_1[2];
      if ((byte)param_1[2] != 0) {
        pbVar8 = (byte *)((long)param_1 + 9);
        do {
          uVar9 = uVar9 * 0x89 ^ uVar15;
          uVar15 = (uint)*pbVar8;
          pbVar8 = pbVar8 + 1;
        } while (uVar15 != 0);
      }
      *param_1 = uVar9;
      *(undefined1 *)(param_1 + 0x14) = 0;
      param_1[0x12] = 0x811c9dc5;
      param_1[0x13] = 0;
    }
    param_1[0x24] = uVar4;
    return;
  case 7:
    local_70 = 8;
    local_f8 = (ulong)local_f8._1_7_ << 8;
    local_100[0] = 0;
    local_100[1] = 0;
    local_b0[0] = '\0';
    local_b8 = 0;
    lVar10 = *(long *)(*DAT_7105329fa0 + 0x5e0);
    uVar12 = (*(long *)(*DAT_7105329fa0 + 0x5e8) - lVar10 >> 3) * -0x5555555555555555;
    if ((uint)uVar12 == 0) {
LAB_71025c05fc:
      uVar15 = 0;
    }
    else {
      uVar15 = 0;
      uVar9 = 0;
      do {
        uVar14 = (ulong)uVar9;
        if (uVar12 < uVar14 || uVar12 - uVar14 == 0) goto LAB_71025c1ba0;
        if (((*(ulong *)(lVar10 + uVar14 * 0x18) ^ param_3) & 0xffffffffff) == 0) {
          uVar15 = *(uint *)(lVar10 + uVar14 * 0x18 + 0x14);
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < (uint)uVar12);
      if (uVar15 < 2) goto LAB_71025c05fc;
      local_f8 = 0x726970735f6d616e;
      local_f0 = 0x5f737469;
      uStack_ec = 0x6968;
      uStack_ea = 0x746e;
      uStack_e6 = 0x6c75;
      uStack_e4 = 0x5f65;
      uStack_e2 = 0x7469;
      uStack_e0 = 0x6d65;
      uStack_e8 = 0x725f;
      uStack_de = 0x5f;
      uStack_dd = 0x61;
      uStack_dc = 0x70;
      uStack_db = 0x70;
      uStack_da = 0x65;
      uStack_d9 = 0x61;
      uVar15 = 0x21;
      uStack_d8 = 0x72;
    }
    uVar4 = 0x811c9dc5;
    uVar9 = 0x811c9dc5;
    *(undefined1 *)((long)&local_f8 + (ulong)uVar15) = 0;
    if ((char)local_f8 != '\0') {
      pcVar5 = (char *)((long)&local_f8 + 1);
      do {
        cVar13 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar13 != '\0');
    }
    uVar15 = 5;
    local_70 = 5;
    if (local_100 == param_1) goto LAB_71025c16b8;
    uVar12 = 0;
    while ((char)local_f8 != '\0') {
      *(char *)((long)param_1 + uVar12 + 8) = (char)local_f8;
      if (0x3e < (int)uVar12 + 1U) {
        uVar12 = (ulong)((int)uVar12 + 1);
        break;
      }
      cVar13 = *(char *)((long)&local_f8 + uVar12 + 1);
      if (cVar13 == '\0') {
        uVar12 = uVar12 + 1;
        break;
      }
      *(char *)((long)param_1 + uVar12 + 9) = cVar13;
      lVar10 = uVar12 + 2;
      uVar12 = uVar12 + 2;
      local_f8._0_1_ = *(char *)((long)&local_f8 + lVar10);
    }
    *(undefined1 *)((long)param_1 + (uVar12 & 0xffffffff) + 8) = 0;
    uVar7 = (uint)(byte)param_1[2];
    param_1[1] = (uint)uVar12;
    uVar6 = uVar4;
    if ((byte)param_1[2] != 0) {
      pbVar8 = (byte *)((long)param_1 + 9);
      do {
        uVar6 = uVar6 * 0x89 ^ uVar7;
        uVar7 = (uint)*pbVar8;
        pbVar8 = pbVar8 + 1;
      } while (uVar7 != 0);
    }
    *param_1 = uVar6;
    for (uVar12 = 0; local_b0[uVar12] != '\0'; uVar12 = uVar12 + 2) {
      *(char *)((long)param_1 + uVar12 + 0x50) = local_b0[uVar12];
      if (0x3e < (int)uVar12 + 1U) {
        uVar12 = (ulong)((int)uVar12 + 1);
        break;
      }
      if (local_b0[uVar12 + 1] == '\0') {
        uVar12 = uVar12 + 1;
        break;
      }
      *(char *)((long)param_1 + uVar12 + 0x51) = local_b0[uVar12 + 1];
    }
    *(undefined1 *)((long)param_1 + (uVar12 & 0xffffffff) + 0x50) = 0;
    uVar6 = (uint)(byte)param_1[0x14];
    param_1[0x13] = (uint)uVar12;
    if ((byte)param_1[0x14] != 0) {
      pbVar8 = (byte *)((long)param_1 + 0x51);
      uVar9 = uVar4;
      do {
        uVar9 = uVar9 * 0x89 ^ uVar6;
        uVar6 = (uint)*pbVar8;
        pbVar8 = pbVar8 + 1;
      } while (uVar6 != 0);
    }
    goto LAB_71025c16b4;
  case 8:
    local_70 = 8;
    local_f8 = 0x726970735f6d616e;
    local_f0 = 0x5f737469;
    uStack_ec = 0x6968;
    uStack_ea = 0x746e;
    uStack_e8 = 0x725f;
    uStack_e6 = 0x6c75;
    uStack_e4 = 0x5f65;
    uStack_e2 = 0x6f62;
    uStack_e0 = 0x626d;
    lVar10 = 9;
    local_b0[0] = '\0';
    local_b8 = 0;
    uStack_de = 0;
    do {
      pcVar5 = (char *)((long)local_100 + lVar10);
      lVar10 = lVar10 + 1;
    } while (*pcVar5 != '\0');
    uVar15 = 2;
    local_70 = 2;
    if (local_100 != param_1) {
      uVar12 = 0;
      cVar13 = 'n';
      do {
        *(char *)((long)param_1 + uVar12 + 8) = cVar13;
        if (0x3e < (int)uVar12 + 1U) {
          uVar12 = (ulong)((int)uVar12 + 1);
          break;
        }
        cVar13 = *(char *)((long)&local_f8 + uVar12 + 1);
        if (cVar13 == '\0') {
          uVar12 = uVar12 + 1;
          break;
        }
        *(char *)((long)param_1 + uVar12 + 9) = cVar13;
        cVar13 = *(char *)((long)&local_f8 + uVar12 + 2);
        uVar12 = uVar12 + 2;
      } while (cVar13 != '\0');
      *(undefined1 *)((long)param_1 + (uVar12 & 0xffffffff) + 8) = 0;
      param_1[1] = (uint)uVar12;
      uVar4 = (uint)(byte)param_1[2];
      uVar9 = 0x811c9dc5;
      if ((byte)param_1[2] != 0) {
        pbVar8 = (byte *)((long)param_1 + 9);
        uVar9 = 0x811c9dc5;
        do {
          uVar9 = uVar9 * 0x89 ^ uVar4;
          uVar4 = (uint)*pbVar8;
          pbVar8 = pbVar8 + 1;
        } while (uVar4 != 0);
      }
LAB_71025c15e8:
      *param_1 = uVar9;
      *(undefined1 *)(param_1 + 0x14) = 0;
      param_1[0x12] = 0x811c9dc5;
      goto LAB_71025c1858;
    }
    break;
  case 9:
    local_70 = 8;
    local_f8 = (ulong)local_f8._1_7_ << 8;
    local_100[0] = 0;
    local_100[1] = 0;
    local_b0[0] = '\0';
    local_b8 = 0;
    lVar10 = *(long *)(*DAT_7105329fa0 + 0x490);
    uVar12 = *(long *)(*DAT_7105329fa0 + 0x498) - lVar10 >> 4;
    uVar9 = (uint)uVar12;
    if (uVar9 != 0) {
      uVar15 = 0;
      do {
        uVar14 = (ulong)uVar15;
        if (uVar12 <= uVar14) goto LAB_71025c1ba0;
        if (((*(ulong *)(lVar10 + uVar14 * 0x10) ^ param_3) & 0xffffffffff) == 0) {
          lVar11 = lVar10 + uVar14 * 0x10;
          cVar13 = *(char *)(lVar11 + 9);
          if (*(char *)(lVar11 + 8) == '\0') {
            pcVar5 = "nam_spirits_hint_rule_charge_max_enemy";
            if (cVar13 == '\0') goto LAB_71025bf240;
          }
          else {
            pcVar5 = "nam_spirits_hint_rule_charge_max_player";
            if (cVar13 != '\0') {
              pcVar5 = "nam_spirits_hint_rule_charge_max_all";
            }
          }
          uVar12 = 0;
          goto LAB_71025c1a78;
        }
LAB_71025bf240:
        uVar15 = uVar15 + 1;
      } while (uVar15 < uVar9);
    }
    uVar12 = 0;
LAB_71025bf250:
    uVar4 = 0x811c9dc5;
    uVar9 = 0x811c9dc5;
    *(undefined1 *)((long)&local_f8 + (uVar12 & 0xffffffff)) = 0;
    if ((char)local_f8 != '\0') {
      pcVar5 = (char *)((long)&local_f8 + 1);
      do {
        cVar13 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar13 != '\0');
    }
    uVar15 = 2;
    local_70 = 2;
    if (local_100 == param_1) goto LAB_71025c16b8;
    uVar12 = 0;
    while ((char)local_f8 != '\0') {
      *(char *)((long)param_1 + uVar12 + 8) = (char)local_f8;
      if (0x3e < (int)uVar12 + 1U) {
        uVar12 = (ulong)((int)uVar12 + 1);
        break;
      }
      cVar13 = *(char *)((long)&local_f8 + uVar12 + 1);
      if (cVar13 == '\0') {
        uVar12 = uVar12 + 1;
        break;
      }
      *(char *)((long)param_1 + uVar12 + 9) = cVar13;
      lVar10 = uVar12 + 2;
      uVar12 = uVar12 + 2;
      local_f8._0_1_ = *(char *)((long)&local_f8 + lVar10);
    }
    *(undefined1 *)((long)param_1 + (uVar12 & 0xffffffff) + 8) = 0;
    uVar7 = (uint)(byte)param_1[2];
    param_1[1] = (uint)uVar12;
    uVar6 = uVar4;
    if ((byte)param_1[2] != 0) {
      pbVar8 = (byte *)((long)param_1 + 9);
      do {
        uVar6 = uVar6 * 0x89 ^ uVar7;
        uVar7 = (uint)*pbVar8;
        pbVar8 = pbVar8 + 1;
      } while (uVar7 != 0);
    }
    *param_1 = uVar6;
    for (uVar12 = 0; local_b0[uVar12] != '\0'; uVar12 = uVar12 + 2) {
      *(char *)((long)param_1 + uVar12 + 0x50) = local_b0[uVar12];
      if (0x3e < (int)uVar12 + 1U) {
        uVar12 = (ulong)((int)uVar12 + 1);
        break;
      }
      if (local_b0[uVar12 + 1] == '\0') {
        uVar12 = uVar12 + 1;
        break;
      }
      *(char *)((long)param_1 + uVar12 + 0x51) = local_b0[uVar12 + 1];
    }
    *(undefined1 *)((long)param_1 + (uVar12 & 0xffffffff) + 0x50) = 0;
    uVar6 = (uint)(byte)param_1[0x14];
    param_1[0x13] = (uint)uVar12;
    if ((byte)param_1[0x14] != 0) {
      pbVar8 = (byte *)((long)param_1 + 0x51);
      uVar9 = uVar4;
      do {
        uVar9 = uVar9 * 0x89 ^ uVar6;
        uVar6 = (uint)*pbVar8;
        pbVar8 = pbVar8 + 1;
      } while (uVar6 != 0);
    }
    goto LAB_71025c16b4;
  case 10:
    local_70 = 8;
    local_f8 = (ulong)local_f8._1_7_ << 8;
    local_100[0] = 0;
    local_100[1] = 0;
    local_b0[0] = '\0';
    local_b8 = 0;
    lVar10 = *(long *)(*DAT_7105329fa0 + 0x3a0);
    uVar12 = *(long *)(*DAT_7105329fa0 + 0x3a8) - lVar10 >> 4;
    uVar9 = (uint)uVar12;
    if (uVar9 != 0) {
      uVar15 = 0;
      do {
        uVar14 = (ulong)uVar15;
        if (uVar12 <= uVar14) goto LAB_71025c1ba0;
        if (((*(ulong *)(lVar10 + uVar14 * 0x10) ^ param_3) & 0xffffffffff) == 0) {
          lVar11 = lVar10 + uVar14 * 0x10;
          cVar13 = *(char *)(lVar11 + 9);
          if (*(char *)(lVar11 + 8) == '\0') {
            pcVar5 = "nam_spirits_hint_rule_metal_enemy";
            if (cVar13 == '\0') goto LAB_71025bf378;
          }
          else {
            pcVar5 = "nam_spirits_hint_rule_metal_player";
            if (cVar13 != '\0') {
              pcVar5 = "nam_spirits_hint_rule_metal_all";
            }
          }
          uVar12 = 0;
          goto LAB_71025c1ad4;
        }
LAB_71025bf378:
        uVar15 = uVar15 + 1;
      } while (uVar15 < uVar9);
    }
    uVar12 = 0;
LAB_71025bf388:
    uVar4 = 0x811c9dc5;
    uVar9 = 0x811c9dc5;
    *(undefined1 *)((long)&local_f8 + (uVar12 & 0xffffffff)) = 0;
    if ((char)local_f8 != '\0') {
      pcVar5 = (char *)((long)&local_f8 + 1);
      do {
        cVar13 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar13 != '\0');
    }
    uVar15 = 2;
    local_70 = 2;
    if (local_100 == param_1) goto LAB_71025c16b8;
    uVar12 = 0;
    while ((char)local_f8 != '\0') {
      *(char *)((long)param_1 + uVar12 + 8) = (char)local_f8;
      if (0x3e < (int)uVar12 + 1U) {
        uVar12 = (ulong)((int)uVar12 + 1);
        break;
      }
      cVar13 = *(char *)((long)&local_f8 + uVar12 + 1);
      if (cVar13 == '\0') {
        uVar12 = uVar12 + 1;
        break;
      }
      *(char *)((long)param_1 + uVar12 + 9) = cVar13;
      lVar10 = uVar12 + 2;
      uVar12 = uVar12 + 2;
      local_f8._0_1_ = *(char *)((long)&local_f8 + lVar10);
    }
    *(undefined1 *)((long)param_1 + (uVar12 & 0xffffffff) + 8) = 0;
    uVar7 = (uint)(byte)param_1[2];
    param_1[1] = (uint)uVar12;
    uVar6 = uVar4;
    if ((byte)param_1[2] != 0) {
      pbVar8 = (byte *)((long)param_1 + 9);
      do {
        uVar6 = uVar6 * 0x89 ^ uVar7;
        uVar7 = (uint)*pbVar8;
        pbVar8 = pbVar8 + 1;
      } while (uVar7 != 0);
    }
    *param_1 = uVar6;
    for (uVar12 = 0; local_b0[uVar12] != '\0'; uVar12 = uVar12 + 2) {
      *(char *)((long)param_1 + uVar12 + 0x50) = local_b0[uVar12];
      if (0x3e < (int)uVar12 + 1U) {
        uVar12 = (ulong)((int)uVar12 + 1);
        break;
      }
      if (local_b0[uVar12 + 1] == '\0') {
        uVar12 = uVar12 + 1;
        break;
      }
      *(char *)((long)param_1 + uVar12 + 0x51) = local_b0[uVar12 + 1];
    }
    *(undefined1 *)((long)param_1 + (uVar12 & 0xffffffff) + 0x50) = 0;
    uVar6 = (uint)(byte)param_1[0x14];
    param_1[0x13] = (uint)uVar12;
    if ((byte)param_1[0x14] != 0) {
      pbVar8 = (byte *)((long)param_1 + 0x51);
      uVar9 = uVar4;
      do {
        uVar9 = uVar9 * 0x89 ^ uVar6;
        uVar6 = (uint)*pbVar8;
        pbVar8 = pbVar8 + 1;
      } while (uVar6 != 0);
    }
    goto LAB_71025c16b4;
  case 0xb:
    local_70 = 8;
    local_f8 = 0x726970735f6d616e;
    local_f0 = 0x5f737469;
    uStack_ec = 0x6968;
    uStack_ea = 0x746e;
    uStack_e8 = 0x725f;
    uStack_e6 = 0x6c75;
    uStack_e4 = 0x5f65;
    uStack_e2 = 0x6164;
    uStack_e0 = 0x6b72;
    lVar10 = 9;
    local_b0[0] = '\0';
    local_b8 = 0;
    uStack_de = 0;
    do {
      pcVar5 = (char *)((long)local_100 + lVar10);
      lVar10 = lVar10 + 1;
    } while (*pcVar5 != '\0');
    uVar15 = 2;
    local_70 = 2;
    if (local_100 != param_1) {
      uVar12 = 0;
      cVar13 = 'n';
      do {
        *(char *)((long)param_1 + uVar12 + 8) = cVar13;
        if (0x3e < (int)uVar12 + 1U) {
          uVar12 = (ulong)((int)uVar12 + 1);
          break;
        }
        cVar13 = *(char *)((long)&local_f8 + uVar12 + 1);
        if (cVar13 == '\0') {
          uVar12 = uVar12 + 1;
          break;
        }
        *(char *)((long)param_1 + uVar12 + 9) = cVar13;
        cVar13 = *(char *)((long)&local_f8 + uVar12 + 2);
        uVar12 = uVar12 + 2;
      } while (cVar13 != '\0');
      *(undefined1 *)((long)param_1 + (uVar12 & 0xffffffff) + 8) = 0;
      param_1[1] = (uint)uVar12;
      uVar4 = (uint)(byte)param_1[2];
      uVar9 = 0x811c9dc5;
      if ((byte)param_1[2] != 0) {
        pbVar8 = (byte *)((long)param_1 + 9);
        uVar9 = 0x811c9dc5;
        do {
          uVar9 = uVar9 * 0x89 ^ uVar4;
          uVar4 = (uint)*pbVar8;
          pbVar8 = pbVar8 + 1;
        } while (uVar4 != 0);
      }
      goto LAB_71025c15e8;
    }
    break;
  case 0xc:
    local_70 = 8;
    local_f8 = 0x726970735f6d616e;
    local_f0 = 0x5f737469;
    uStack_ec = 0x6968;
    local_b0[0] = '\0';
    uStack_ea = 0x746e;
    uStack_e8 = 0x725f;
    uStack_e6 = 0x6c75;
    uStack_e4 = 0x5f65;
    uStack_e2 = 26999;
    uStack_e0 = 0x646e;
    uStack_de = 0x5f;
    uStack_dd = 0x73;
    uStack_dc = 0x75;
    uStack_db = 100;
    uStack_da = 100;
    uStack_d9 = 0x65;
    uStack_d8 = 0x6e;
    uStack_d7 = 0x6c;
    local_d6 = 0x79;
    uStack_d5 = 0;
    lVar10 = 9;
    local_b8 = 0;
    do {
      pcVar5 = (char *)((long)local_100 + lVar10);
      lVar10 = lVar10 + 1;
    } while (*pcVar5 != '\0');
    uVar15 = 2;
    local_70 = 2;
    if (local_100 != param_1) {
      uVar12 = 0;
      cVar13 = 'n';
      do {
        *(char *)((long)param_1 + uVar12 + 8) = cVar13;
        if (0x3e < (int)uVar12 + 1U) {
          uVar12 = (ulong)((int)uVar12 + 1);
          break;
        }
        cVar13 = *(char *)((long)&local_f8 + uVar12 + 1);
        if (cVar13 == '\0') {
          uVar12 = uVar12 + 1;
          break;
        }
        *(char *)((long)param_1 + uVar12 + 9) = cVar13;
        cVar13 = *(char *)((long)&local_f8 + uVar12 + 2);
        uVar12 = uVar12 + 2;
      } while (cVar13 != '\0');
      *(undefined1 *)((long)param_1 + (uVar12 & 0xffffffff) + 8) = 0;
      param_1[1] = (uint)uVar12;
      uVar4 = (uint)(byte)param_1[2];
      uVar9 = 0x811c9dc5;
      if ((byte)param_1[2] != 0) {
        pbVar8 = (byte *)((long)param_1 + 9);
        uVar9 = 0x811c9dc5;
        do {
          uVar9 = uVar9 * 0x89 ^ uVar4;
          uVar4 = (uint)*pbVar8;
          pbVar8 = pbVar8 + 1;
        } while (uVar4 != 0);
      }
      goto LAB_71025c15e8;
    }
    break;
  default:
    goto switchD_71025bb650_caseD_d;
  case 0xe:
    uVar4 = 8;
    local_f8 = (ulong)local_f8._1_7_ << 8;
    local_100[0] = 0;
    local_100[1] = 0;
    local_b0[0] = '\0';
    local_b8 = 0;
    uVar9 = 0x811c9dc5;
    local_70 = 8;
    lVar10 = *(long *)(*DAT_7105329fa0 + 0x5c8);
    cVar13 = '\0';
    uVar12 = *(long *)(*DAT_7105329fa0 + 0x5d0) - lVar10 >> 4;
    uVar15 = (uint)uVar12;
    if (uVar15 != 0) {
      uVar6 = 0;
      pbVar8 = (byte *)((long)&local_f8 + 1);
      uVar4 = 8;
      do {
        uVar14 = (ulong)uVar6;
        if (uVar12 <= uVar14) goto LAB_71025c1ba8;
        if (((*(ulong *)(lVar10 + uVar14 * 0x10) ^ param_3) & 0xffffffffff) == 0) {
          local_100[0] = uVar9;
          switch(*(undefined1 *)(lVar10 + uVar14 * 0x10 + 8)) {
          case 0:
            uStack_de = 0x5f;
            uStack_dd = 0x6e;
            uStack_dc = 0x6f;
            uStack_db = 0x72;
            uStack_da = 0x6d;
            uStack_d9 = 0x61;
            uStack_d8 = 0x6c;
            uStack_d7 = 0x5f;
            local_d6 = 0x75;
            uStack_d5 = 0x70;
            uVar4 = 0x6e;
            uStack_e8 = 0x725f;
            local_f8 = 0x726970735f6d616e;
            local_f0 = 0x5f737469;
            uStack_ec = 0x6968;
            uStack_ea = 0x746e;
            uStack_e6 = 0x6c75;
            uStack_e4 = 0x5f65;
            uStack_e2 = 0x7461;
            uStack_e0 = 0x7274;
            uStack_d4 = 0;
            local_100[1] = 0x24;
            pbVar3 = pbVar8;
            do {
              local_100[0] = local_100[0] * 0x89 ^ uVar4;
              uVar4 = (uint)*pbVar3;
              pbVar3 = pbVar3 + 1;
            } while (uVar4 != 0);
            break;
          case 1:
            uVar4 = 0x6e;
            local_f8 = 0x726970735f6d616e;
            local_f0 = 0x5f737469;
            uStack_ec = 0x6968;
            uStack_ea = 0x746e;
            uStack_e8 = 0x725f;
            uStack_e6 = 0x6c75;
            uStack_e4 = 0x5f65;
            uStack_e2 = 0x7461;
            uStack_e0 = 0x7274;
            uStack_de = 0x5f;
            uStack_dd = 0x61;
            uStack_dc = 0x74;
            uStack_db = 0x74;
            uStack_da = 0x61;
            uStack_d9 = 99;
            uStack_d8 = 0x6b;
            uStack_d7 = 0x5f;
            local_d6 = 0x75;
            uStack_d5 = 0x70;
            uStack_d4 = 0;
            local_100[1] = 0x24;
            pbVar3 = pbVar8;
            do {
              local_100[0] = local_100[0] * 0x89 ^ uVar4;
              uVar4 = (uint)*pbVar3;
              pbVar3 = pbVar3 + 1;
            } while (uVar4 != 0);
            break;
          case 2:
            uVar4 = 0x6e;
            local_f8 = 0x726970735f6d616e;
            local_f0 = 0x5f737469;
            uStack_ec = 0x6968;
            uStack_ea = 0x746e;
            uStack_e8 = 0x725f;
            uStack_e6 = 0x6c75;
            uStack_e4 = 0x5f65;
            uStack_e2 = 0x7461;
            uStack_e0 = 0x7274;
            uStack_de = 0x5f;
            uStack_dd = 0x74;
            uStack_dc = 0x68;
            uStack_db = 0x72;
            uStack_da = 0x6f;
            uStack_d9 = 0x77;
            uStack_d8 = 0x5f;
            uStack_d7 = 0x75;
            local_d6 = 0x70;
            uStack_d5 = 0;
            local_100[1] = 0x23;
            pbVar3 = pbVar8;
            do {
              local_100[0] = local_100[0] * 0x89 ^ uVar4;
              uVar4 = (uint)*pbVar3;
              pbVar3 = pbVar3 + 1;
            } while (uVar4 != 0);
            break;
          case 3:
            uVar4 = 0x6e;
            local_f8 = 0x726970735f6d616e;
            local_f0 = 0x5f737469;
            uStack_ec = 0x6968;
            uStack_ea = 0x746e;
            uStack_e8 = 0x725f;
            uStack_e6 = 0x6c75;
            uStack_e4 = 0x5f65;
            uStack_e2 = 0x7461;
            uStack_e0 = 0x7274;
            uStack_de = 0x5f;
            uStack_dd = 100;
            uStack_dc = 0x65;
            uStack_db = 0x66;
            uStack_da = 0x65;
            uStack_d9 = 0x6e;
            uStack_d8 = 0x73;
            uStack_d7 = 0x65;
            local_d6 = 0x5f;
            uStack_d5 = 0x75;
            uStack_d4 = 0x70;
            uStack_d3 = 0;
            local_100[1] = 0x25;
            pbVar3 = pbVar8;
            do {
              local_100[0] = local_100[0] * 0x89 ^ uVar4;
              uVar4 = (uint)*pbVar3;
              pbVar3 = pbVar3 + 1;
            } while (uVar4 != 0);
            break;
          default:
            goto switchD_71025bdb5c_default;
          }
          uStack_de = 0x5f;
          uStack_e0 = 0x7274;
          uStack_e2 = 0x7461;
          uStack_e4 = 0x5f65;
          uStack_e6 = 0x6c75;
          uStack_e8 = 0x725f;
          uStack_ea = 0x746e;
          uStack_ec = 0x6968;
          local_f0 = 0x5f737469;
          local_f8 = 0x726970735f6d616e;
          uVar4 = 4;
          cVar13 = 'n';
          local_70 = 4;
        }
switchD_71025bdb5c_default:
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar15);
    }
    if (local_100 != param_1) {
      uVar12 = 0;
      while (cVar13 != '\0') {
        *(char *)((long)param_1 + uVar12 + 8) = cVar13;
        if (0x3e < (int)uVar12 + 1U) {
          uVar12 = (ulong)((int)uVar12 + 1);
          break;
        }
        cVar13 = *(char *)((long)&local_f8 + uVar12 + 1);
        if (cVar13 == '\0') {
          uVar12 = uVar12 + 1;
          break;
        }
        *(char *)((long)param_1 + uVar12 + 9) = cVar13;
        lVar10 = uVar12 + 2;
        uVar12 = uVar12 + 2;
        cVar13 = *(char *)((long)&local_f8 + lVar10);
      }
      *(undefined1 *)((long)param_1 + (uVar12 & 0xffffffff) + 8) = 0;
      param_1[1] = (uint)uVar12;
      uVar15 = (uint)(byte)param_1[2];
      if ((byte)param_1[2] != 0) {
        pbVar8 = (byte *)((long)param_1 + 9);
        do {
          uVar9 = uVar9 * 0x89 ^ uVar15;
          uVar15 = (uint)*pbVar8;
          pbVar8 = pbVar8 + 1;
        } while (uVar15 != 0);
      }
      *param_1 = uVar9;
      *(undefined1 *)(param_1 + 0x14) = 0;
      param_1[0x12] = 0x811c9dc5;
      param_1[0x13] = 0;
    }
LAB_71025c1708:
    param_1[0x24] = uVar4;
    return;
  case 0xf:
    local_70 = 8;
    local_f8 = 0x726970735f6d616e;
    local_f0 = 0x5f737469;
    uStack_ec = 0x6968;
    uStack_ea = 0x746e;
    uStack_e8 = 0x725f;
    uStack_e6 = 0x6c75;
    uStack_e4 = 0x5f65;
    local_b0[0] = '\0';
    uStack_e2 = 0x6165;
    uStack_e0 = 0x7472;
    uStack_de = 0x68;
    uStack_dd = 0x71;
    uStack_dc = 0x75;
    uStack_db = 0x61;
    uStack_da = 0x6b;
    uStack_d9 = 0x65;
    lVar10 = 9;
    local_b8 = 0;
    uStack_d8 = 0;
    do {
      pcVar5 = (char *)((long)local_100 + lVar10);
      lVar10 = lVar10 + 1;
    } while (*pcVar5 != '\0');
    uVar15 = 3;
    local_70 = 3;
    if (local_100 != param_1) {
      uVar12 = 0;
      cVar13 = 'n';
      do {
        *(char *)((long)param_1 + uVar12 + 8) = cVar13;
        if (0x3e < (int)uVar12 + 1U) {
          uVar12 = (ulong)((int)uVar12 + 1);
          break;
        }
        cVar13 = *(char *)((long)&local_f8 + uVar12 + 1);
        if (cVar13 == '\0') {
          uVar12 = uVar12 + 1;
          break;
        }
        *(char *)((long)param_1 + uVar12 + 9) = cVar13;
        cVar13 = *(char *)((long)&local_f8 + uVar12 + 2);
        uVar12 = uVar12 + 2;
      } while (cVar13 != '\0');
      *(undefined1 *)((long)param_1 + (uVar12 & 0xffffffff) + 8) = 0;
      param_1[1] = (uint)uVar12;
      uVar4 = (uint)(byte)param_1[2];
      uVar9 = 0x811c9dc5;
      if ((byte)param_1[2] != 0) {
        pbVar8 = (byte *)((long)param_1 + 9);
        uVar9 = 0x811c9dc5;
        do {
          uVar9 = uVar9 * 0x89 ^ uVar4;
          uVar4 = (uint)*pbVar8;
          pbVar8 = pbVar8 + 1;
        } while (uVar4 != 0);
      }
      goto LAB_71025c15e8;
    }
    break;
  case 0x10:
    uVar15 = 8;
    local_f8 = (ulong)local_f8._1_7_ << 8;
    local_100[0] = 0;
    local_100[1] = 0;
    local_b0[0] = '\0';
    local_b8 = 0;
    uVar4 = 0x811c9dc5;
    local_70 = 8;
    lVar10 = *(long *)(*DAT_7105329fa0 + 0x460);
    cVar13 = '\0';
    uVar12 = *(long *)(*DAT_7105329fa0 + 0x468) - lVar10 >> 4;
    uVar9 = (uint)uVar12;
    if (uVar9 != 0) {
      uVar6 = 0;
      pbVar8 = (byte *)((long)&local_f8 + 1);
      uVar15 = 8;
      do {
        uVar14 = (ulong)uVar6;
        if (uVar12 <= uVar14) goto LAB_71025c1ba0;
        if (((*(ulong *)(lVar10 + uVar14 * 0x10) ^ param_3) & 0xffffffffff) == 0) {
          lVar11 = lVar10 + uVar14 * 0x10;
          cVar2 = *(char *)(lVar11 + 8);
          local_100[0] = uVar4;
          if (*(char *)(lVar11 + 9) == '\0') {
            if (cVar2 == '\0') goto LAB_71025beba4;
            uVar15 = 0x6e;
            local_f8 = 0x726970735f6d616e;
            local_f0 = 0x5f737469;
            uStack_ec = 0x6968;
            uStack_ea = 0x746e;
            uStack_e8 = 0x725f;
            uStack_e6 = 0x6c75;
            uStack_e4 = 0x5f65;
            uStack_e2 = 0x6c66;
            uStack_e0 = 0x776f;
            uStack_de = 0x65;
            uStack_dd = 0x72;
            uStack_dc = 0x5f;
            uStack_db = 0x70;
            uStack_da = 0x6c;
            uStack_d9 = 0x61;
            uStack_d8 = 0x79;
            uStack_d7 = 0x65;
            local_d6 = 0x72;
            uStack_d5 = 0;
            pbVar3 = pbVar8;
            do {
              local_100[0] = local_100[0] * 0x89 ^ uVar15;
              uVar15 = (uint)*pbVar3;
              pbVar3 = pbVar3 + 1;
            } while (uVar15 != 0);
            uVar15 = 3;
            local_100[1] = 0x23;
          }
          else {
            local_f8 = 0x726970735f6d616e;
            local_f0 = 0x5f737469;
            uStack_ec = 0x6968;
            uStack_ea = 0x746e;
            uStack_e8 = 0x725f;
            uStack_e6 = 0x6c75;
            uStack_e4 = 0x5f65;
            uStack_e2 = 0x6c66;
            uStack_e0 = 0x776f;
            uStack_de = 0x65;
            uStack_dd = 0x72;
            uStack_dc = 0x5f;
            if (cVar2 == '\0') {
              uVar15 = 0x6e;
              uStack_db = 0x65;
              uStack_da = 0x6e;
              uStack_d9 = 0x65;
              uStack_d8 = 0x6d;
              uStack_d7 = 0x79;
              local_d6 = 0;
              local_100[1] = 0x22;
              pbVar3 = pbVar8;
              do {
                local_100[0] = local_100[0] * 0x89 ^ uVar15;
                uVar15 = (uint)*pbVar3;
                pbVar3 = pbVar3 + 1;
              } while (uVar15 != 0);
            }
            else {
              uVar15 = 0x6e;
              uStack_db = 0x61;
              uStack_da = 0x6c;
              uStack_d9 = 0x6c;
              uStack_d8 = 0;
              local_100[1] = 0x20;
              pbVar3 = pbVar8;
              do {
                local_100[0] = local_100[0] * 0x89 ^ uVar15;
                uVar15 = (uint)*pbVar3;
                pbVar3 = pbVar3 + 1;
              } while (uVar15 != 0);
            }
            uVar15 = 4;
          }
          uStack_dc = 0x5f;
          uStack_dd = 0x72;
          uStack_de = 0x65;
          uStack_e0 = 0x776f;
          uStack_e2 = 0x6c66;
          uStack_e4 = 0x5f65;
          uStack_e6 = 0x6c75;
          uStack_e8 = 0x725f;
          uStack_ea = 0x746e;
          uStack_ec = 0x6968;
          local_f0 = 0x5f737469;
          local_f8 = 0x726970735f6d616e;
          cVar13 = 'n';
          local_70 = uVar15;
        }
LAB_71025beba4:
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar9);
    }
    if (local_100 != param_1) {
      uVar12 = 0;
      while (cVar13 != '\0') {
        *(char *)((long)param_1 + uVar12 + 8) = cVar13;
        if (0x3e < (int)uVar12 + 1U) {
          uVar12 = (ulong)((int)uVar12 + 1);
          break;
        }
        cVar13 = *(char *)((long)&local_f8 + uVar12 + 1);
        if (cVar13 == '\0') {
          uVar12 = uVar12 + 1;
          break;
        }
        *(char *)((long)param_1 + uVar12 + 9) = cVar13;
        lVar10 = uVar12 + 2;
        uVar12 = uVar12 + 2;
        cVar13 = *(char *)((long)&local_f8 + lVar10);
      }
      *(undefined1 *)((long)param_1 + (uVar12 & 0xffffffff) + 8) = 0;
      param_1[1] = (uint)uVar12;
      uVar6 = (uint)(byte)param_1[2];
      uVar9 = 0x811c9dc5;
      if ((byte)param_1[2] != 0) {
        pbVar8 = (byte *)((long)param_1 + 9);
        uVar9 = uVar4;
        do {
          uVar9 = uVar9 * 0x89 ^ uVar6;
          uVar6 = (uint)*pbVar8;
          pbVar8 = pbVar8 + 1;
        } while (uVar6 != 0);
      }
      goto LAB_71025c184c;
    }
    break;
  case 0x11:
    local_70 = 8;
    local_f8 = (ulong)local_f8._1_7_ << 8;
    local_100[0] = 0;
    local_100[1] = 0;
    local_b0[0] = '\0';
    local_b8 = 0;
    lVar10 = *(long *)(*DAT_7105329fa0 + 0x478);
    uVar12 = *(long *)(*DAT_7105329fa0 + 0x480) - lVar10 >> 4;
    uVar9 = (uint)uVar12;
    if (uVar9 != 0) {
      uVar15 = 0;
      do {
        uVar14 = (ulong)uVar15;
        if (uVar12 <= uVar14) goto LAB_71025c1ba0;
        if (((*(ulong *)(lVar10 + uVar14 * 0x10) ^ param_3) & 0xffffffffff) == 0) {
          lVar11 = lVar10 + uVar14 * 0x10;
          cVar13 = *(char *)(lVar11 + 9);
          if (*(char *)(lVar11 + 8) == '\0') {
            pcVar5 = "nam_spirits_hint_rule_curry_enemy";
            if (cVar13 == '\0') goto LAB_71025bf4b0;
          }
          else {
            pcVar5 = "nam_spirits_hint_rule_curry_player";
            if (cVar13 != '\0') {
              pcVar5 = "nam_spirits_hint_rule_curry_all";
            }
          }
          uVar12 = 0;
          goto LAB_71025c19c0;
        }
LAB_71025bf4b0:
        uVar15 = uVar15 + 1;
      } while (uVar15 < uVar9);
    }
    uVar12 = 0;
LAB_71025bf4c0:
    uVar4 = 0x811c9dc5;
    uVar9 = 0x811c9dc5;
    *(undefined1 *)((long)&local_f8 + (uVar12 & 0xffffffff)) = 0;
    if ((char)local_f8 != '\0') {
      pcVar5 = (char *)((long)&local_f8 + 1);
      do {
        cVar13 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar13 != '\0');
    }
    uVar15 = 3;
    local_70 = 3;
    if (local_100 == param_1) goto LAB_71025c16b8;
    uVar12 = 0;
    while ((char)local_f8 != '\0') {
      *(char *)((long)param_1 + uVar12 + 8) = (char)local_f8;
      if (0x3e < (int)uVar12 + 1U) {
        uVar12 = (ulong)((int)uVar12 + 1);
        break;
      }
      cVar13 = *(char *)((long)&local_f8 + uVar12 + 1);
      if (cVar13 == '\0') {
        uVar12 = uVar12 + 1;
        break;
      }
      *(char *)((long)param_1 + uVar12 + 9) = cVar13;
      lVar10 = uVar12 + 2;
      uVar12 = uVar12 + 2;
      local_f8._0_1_ = *(char *)((long)&local_f8 + lVar10);
    }
    *(undefined1 *)((long)param_1 + (uVar12 & 0xffffffff) + 8) = 0;
    uVar7 = (uint)(byte)param_1[2];
    param_1[1] = (uint)uVar12;
    uVar6 = uVar4;
    if ((byte)param_1[2] != 0) {
      pbVar8 = (byte *)((long)param_1 + 9);
      do {
        uVar6 = uVar6 * 0x89 ^ uVar7;
        uVar7 = (uint)*pbVar8;
        pbVar8 = pbVar8 + 1;
      } while (uVar7 != 0);
    }
    *param_1 = uVar6;
    for (uVar12 = 0; local_b0[uVar12] != '\0'; uVar12 = uVar12 + 2) {
      *(char *)((long)param_1 + uVar12 + 0x50) = local_b0[uVar12];
      if (0x3e < (int)uVar12 + 1U) {
        uVar12 = (ulong)((int)uVar12 + 1);
        break;
      }
      if (local_b0[uVar12 + 1] == '\0') {
        uVar12 = uVar12 + 1;
        break;
      }
      *(char *)((long)param_1 + uVar12 + 0x51) = local_b0[uVar12 + 1];
    }
    *(undefined1 *)((long)param_1 + (uVar12 & 0xffffffff) + 0x50) = 0;
    uVar6 = (uint)(byte)param_1[0x14];
    param_1[0x13] = (uint)uVar12;
    if ((byte)param_1[0x14] != 0) {
      pbVar8 = (byte *)((long)param_1 + 0x51);
      uVar9 = uVar4;
      do {
        uVar9 = uVar9 * 0x89 ^ uVar6;
        uVar6 = (uint)*pbVar8;
        pbVar8 = pbVar8 + 1;
      } while (uVar6 != 0);
    }
    goto LAB_71025c16b4;
  case 0x12:
    uVar15 = 8;
    local_f8 = (ulong)local_f8._1_7_ << 8;
    local_100[0] = 0;
    local_100[1] = 0;
    local_b0[0] = '\0';
    local_b8 = 0;
    uVar4 = 0x811c9dc5;
    local_70 = 8;
    lVar10 = *(long *)(*DAT_7105329fa0 + 0x4c0);
    cVar13 = '\0';
    uVar12 = *(long *)(*DAT_7105329fa0 + 0x4c8) - lVar10 >> 4;
    uVar9 = (uint)uVar12;
    if (uVar9 != 0) {
      uVar6 = 0;
      pbVar8 = (byte *)((long)&local_f8 + 1);
      uVar15 = 8;
      do {
        uVar14 = (ulong)uVar6;
        if (uVar12 <= uVar14) goto LAB_71025c1ba0;
        if (((*(ulong *)(lVar10 + uVar14 * 0x10) ^ param_3) & 0xffffffffff) == 0) {
          lVar11 = lVar10 + uVar14 * 0x10;
          cVar2 = *(char *)(lVar11 + 8);
          local_100[0] = uVar4;
          if (*(char *)(lVar11 + 9) == '\0') {
            if (cVar2 != '\0') {
              uVar15 = 0x6e;
              local_f8 = 0x726970735f6d616e;
              local_f0 = 0x5f737469;
              uStack_ec = 0x6968;
              uStack_ea = 0x746e;
              uStack_e8 = 0x725f;
              uStack_e6 = 0x6c75;
              uStack_e4 = 0x5f65;
              uStack_e2 = 0x7274;
              uStack_e0 = 0x6e61;
              uStack_de = 0x73;
              uStack_dd = 0x70;
              uStack_dc = 0x61;
              uStack_db = 0x72;
              uStack_da = 0x65;
              uStack_d9 = 0x6e;
              uStack_d8 = 99;
              uStack_d7 = 0x65;
              local_d6 = 0x5f;
              uStack_d5 = 0x70;
              uStack_d4 = 0x6c;
              uStack_d3 = 0x61;
              uStack_d2 = 0x79;
              uStack_d1 = 0x65;
              uStack_d0 = 0x72;
              uStack_cf = 0;
              local_100[1] = 0x29;
              pbVar3 = pbVar8;
              do {
                local_100[0] = local_100[0] * 0x89 ^ uVar15;
                uVar15 = (uint)*pbVar3;
                pbVar3 = pbVar3 + 1;
              } while (uVar15 != 0);
              goto LAB_71025bfba0;
            }
          }
          else {
            local_f8 = 0x726970735f6d616e;
            local_f0 = 0x5f737469;
            uStack_ec = 0x6968;
            uStack_ea = 0x746e;
            uStack_e8 = 0x725f;
            uStack_e6 = 0x6c75;
            uStack_e4 = 0x5f65;
            uStack_e2 = 0x7274;
            uStack_e0 = 0x6e61;
            uStack_de = 0x73;
            uStack_dd = 0x70;
            uStack_dc = 0x61;
            uStack_db = 0x72;
            uStack_da = 0x65;
            uStack_d9 = 0x6e;
            uStack_d8 = 99;
            uStack_d7 = 0x65;
            if (cVar2 == '\0') {
              uVar15 = 0x6e;
              local_d6 = 0x5f;
              uStack_d5 = 0x65;
              uStack_d4 = 0x6e;
              uStack_d3 = 0x65;
              uStack_d2 = 0x6d;
              uStack_d1 = 0x79;
              uStack_d0 = 0;
              local_100[1] = 0x28;
              pbVar3 = pbVar8;
              do {
                local_100[0] = local_100[0] * 0x89 ^ uVar15;
                uVar15 = (uint)*pbVar3;
                pbVar3 = pbVar3 + 1;
              } while (uVar15 != 0);
LAB_71025bfba0:
              local_d6 = 0x5f;
              uVar15 = 3;
            }
            else {
              uVar15 = 0x6e;
              local_d6 = 0;
              pbVar3 = pbVar8;
              do {
                local_100[0] = local_100[0] * 0x89 ^ uVar15;
                uVar15 = (uint)*pbVar3;
                pbVar3 = pbVar3 + 1;
              } while (uVar15 != 0);
              local_100[1] = 0x22;
              uVar15 = 4;
            }
            uStack_d7 = 0x65;
            uStack_d8 = 99;
            uStack_d9 = 0x6e;
            uStack_da = 0x65;
            uStack_db = 0x72;
            uStack_dc = 0x61;
            uStack_dd = 0x70;
            uStack_de = 0x73;
            uStack_e0 = 0x6e61;
            uStack_e2 = 0x7274;
            uStack_e4 = 0x5f65;
            uStack_e6 = 0x6c75;
            uStack_ea = 0x746e;
            uStack_ec = 0x6968;
            local_f0 = 0x5f737469;
            uStack_e8 = 0x725f;
            local_f8 = 0x726970735f6d616e;
            cVar13 = 'n';
            local_70 = uVar15;
          }
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar9);
    }
    if (local_100 != param_1) {
      uVar12 = 0;
      while (cVar13 != '\0') {
        *(char *)((long)param_1 + uVar12 + 8) = cVar13;
        if (0x3e < (int)uVar12 + 1U) {
          uVar12 = (ulong)((int)uVar12 + 1);
          break;
        }
        cVar13 = *(char *)((long)&local_f8 + uVar12 + 1);
        if (cVar13 == '\0') {
          uVar12 = uVar12 + 1;
          break;
        }
        *(char *)((long)param_1 + uVar12 + 9) = cVar13;
        lVar10 = uVar12 + 2;
        uVar12 = uVar12 + 2;
        cVar13 = *(char *)((long)&local_f8 + lVar10);
      }
      *(undefined1 *)((long)param_1 + (uVar12 & 0xffffffff) + 8) = 0;
      param_1[1] = (uint)uVar12;
      uVar6 = (uint)(byte)param_1[2];
      uVar9 = 0x811c9dc5;
      if ((byte)param_1[2] != 0) {
        pbVar8 = (byte *)((long)param_1 + 9);
        uVar9 = uVar4;
        do {
          uVar9 = uVar9 * 0x89 ^ uVar6;
          uVar6 = (uint)*pbVar8;
          pbVar8 = pbVar8 + 1;
        } while (uVar6 != 0);
      }
      goto LAB_71025c184c;
    }
    break;
  case 0x13:
    uVar15 = 8;
    local_f8 = (ulong)local_f8._1_7_ << 8;
    local_100[0] = 0;
    local_100[1] = 0;
    local_b0[0] = '\0';
    local_b8 = 0;
    uVar4 = 0x811c9dc5;
    local_70 = 8;
    lVar10 = *(long *)(*DAT_7105329fa0 + 0x3b8);
    cVar13 = '\0';
    uVar12 = *(long *)(*DAT_7105329fa0 + 0x3c0) - lVar10 >> 4;
    uVar9 = (uint)uVar12;
    if (uVar9 != 0) {
      uVar6 = 0;
      pbVar8 = (byte *)((long)&local_f8 + 1);
      uVar15 = 8;
      do {
        uVar14 = (ulong)uVar6;
        if (uVar12 <= uVar14) goto LAB_71025c1ba0;
        if (((*(ulong *)(lVar10 + uVar14 * 0x10) ^ param_3) & 0xffffffffff) == 0) {
          lVar11 = lVar10 + uVar14 * 0x10;
          cVar2 = *(char *)(lVar11 + 8);
          local_100[0] = uVar4;
          if (*(char *)(lVar11 + 9) == '\0') {
            if (cVar2 != '\0') {
              uVar15 = 0x6e;
              local_f8 = 0x726970735f6d616e;
              local_f0 = 0x5f737469;
              uStack_ec = 0x6968;
              uStack_ea = 0x746e;
              uStack_e8 = 0x725f;
              uStack_e6 = 0x6c75;
              uStack_e4 = 0x5f65;
              uStack_e2 = 0x6873;
              uStack_e0 = 0x6569;
              uStack_de = 0x6c;
              uStack_dd = 100;
              uStack_dc = 0x77;
              uStack_db = 0x65;
              uStack_da = 0x61;
              uStack_d9 = 0x6b;
              uStack_d8 = 0x65;
              uStack_d7 = 0x6e;
              local_d6 = 0x5f;
              uStack_d5 = 0x70;
              uStack_d4 = 0x6c;
              uStack_d3 = 0x61;
              uStack_d2 = 0x79;
              uStack_d1 = 0x65;
              uStack_d0 = 0x72;
              uStack_cf = 0;
              local_100[1] = 0x29;
              pbVar3 = pbVar8;
              do {
                local_100[0] = local_100[0] * 0x89 ^ uVar15;
                uVar15 = (uint)*pbVar3;
                pbVar3 = pbVar3 + 1;
              } while (uVar15 != 0);
              goto LAB_71025bf70c;
            }
          }
          else {
            local_f8 = 0x726970735f6d616e;
            local_f0 = 0x5f737469;
            uStack_ec = 0x6968;
            uStack_ea = 0x746e;
            uStack_e8 = 0x725f;
            uStack_e6 = 0x6c75;
            uStack_e4 = 0x5f65;
            uStack_e2 = 0x6873;
            uStack_e0 = 0x6569;
            uStack_de = 0x6c;
            uStack_dd = 100;
            uStack_dc = 0x77;
            uStack_db = 0x65;
            uStack_da = 0x61;
            uStack_d9 = 0x6b;
            uStack_d8 = 0x65;
            uStack_d7 = 0x6e;
            local_d6 = 0x5f;
            if (cVar2 == '\0') {
              uVar15 = 0x6e;
              uStack_d5 = 0x65;
              uStack_d4 = 0x6e;
              uStack_d3 = 0x65;
              uStack_d2 = 0x6d;
              uStack_d1 = 0x79;
              uStack_d0 = 0;
              pbVar3 = pbVar8;
              do {
                local_100[0] = local_100[0] * 0x89 ^ uVar15;
                uVar15 = (uint)*pbVar3;
                pbVar3 = pbVar3 + 1;
              } while (uVar15 != 0);
              local_100[1] = 0x28;
              uVar15 = 4;
            }
            else {
              uVar15 = 0x6e;
              uStack_d5 = 0x61;
              uStack_d4 = 0x6c;
              uStack_d3 = 0x6c;
              uStack_d2 = 0;
              local_100[1] = 0x26;
              pbVar3 = pbVar8;
              do {
                local_100[0] = local_100[0] * 0x89 ^ uVar15;
                uVar15 = (uint)*pbVar3;
                pbVar3 = pbVar3 + 1;
              } while (uVar15 != 0);
LAB_71025bf70c:
              uStack_d4 = 0x6c;
              uVar15 = 3;
            }
            local_d6 = 0x5f;
            uStack_d7 = 0x6e;
            uStack_d8 = 0x65;
            uStack_d9 = 0x6b;
            uStack_da = 0x61;
            uStack_db = 0x65;
            uStack_dc = 0x77;
            uStack_dd = 100;
            uStack_de = 0x6c;
            uStack_e0 = 0x6569;
            uStack_e2 = 0x6873;
            uStack_e4 = 0x5f65;
            uStack_e6 = 0x6c75;
            uStack_ea = 0x746e;
            uStack_ec = 0x6968;
            local_f0 = 0x5f737469;
            uStack_e8 = 0x725f;
            local_f8 = 0x726970735f6d616e;
            cVar13 = 'n';
            local_70 = uVar15;
          }
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar9);
    }
    if (local_100 != param_1) {
      uVar12 = 0;
      while (cVar13 != '\0') {
        *(char *)((long)param_1 + uVar12 + 8) = cVar13;
        if (0x3e < (int)uVar12 + 1U) {
          uVar12 = (ulong)((int)uVar12 + 1);
          break;
        }
        cVar13 = *(char *)((long)&local_f8 + uVar12 + 1);
        if (cVar13 == '\0') {
          uVar12 = uVar12 + 1;
          break;
        }
        *(char *)((long)param_1 + uVar12 + 9) = cVar13;
        lVar10 = uVar12 + 2;
        uVar12 = uVar12 + 2;
        cVar13 = *(char *)((long)&local_f8 + lVar10);
      }
      *(undefined1 *)((long)param_1 + (uVar12 & 0xffffffff) + 8) = 0;
      param_1[1] = (uint)uVar12;
      uVar6 = (uint)(byte)param_1[2];
      uVar9 = 0x811c9dc5;
      if ((byte)param_1[2] != 0) {
        pbVar8 = (byte *)((long)param_1 + 9);
        uVar9 = uVar4;
        do {
          uVar9 = uVar9 * 0x89 ^ uVar6;
          uVar6 = (uint)*pbVar8;
          pbVar8 = pbVar8 + 1;
        } while (uVar6 != 0);
      }
      goto LAB_71025c184c;
    }
    break;
  case 0x14:
    uVar15 = 8;
    local_f8 = (ulong)local_f8._1_7_ << 8;
    local_100[0] = 0;
    local_100[1] = 0;
    local_b0[0] = '\0';
    local_b8 = 0;
    uVar9 = 0x811c9dc5;
    local_70 = 8;
    lVar10 = *(long *)(*DAT_7105329fa0 + 0x3d0);
    cVar13 = '\0';
    uVar12 = *(long *)(*DAT_7105329fa0 + 0x3d8) - lVar10 >> 4;
    uVar4 = (uint)uVar12;
    if (uVar4 != 0) {
      uVar6 = 0;
      pbVar8 = (byte *)((long)&local_f8 + 1);
      uVar15 = 8;
      do {
        uVar14 = (ulong)uVar6;
        if (uVar12 <= uVar14) goto LAB_71025c1ba8;
        if (((*(ulong *)(lVar10 + uVar14 * 0x10) ^ param_3) & 0xffffffffff) == 0) {
          lVar11 = lVar10 + uVar14 * 0x10;
          local_100[0] = uVar9;
          if (*(char *)(lVar11 + 9) == '\0') {
            if (*(char *)(lVar11 + 8) != '\0') {
              local_f8 = 0x726970735f6d616e;
              local_f0 = 0x5f737469;
              uStack_ec = 0x6968;
              uStack_ea = 0x746e;
              uStack_e8 = 0x725f;
              uStack_e6 = 0x6c75;
              uStack_e4 = 0x5f65;
              uStack_e2 = 0x7267;
              uStack_e0 = 0x7661;
              uStack_de = 0x69;
              uStack_dd = 0x74;
              uStack_dc = 0x79;
              uStack_db = 0x5f;
              if (*(char *)(lVar11 + 10) == '\0') {
                uStack_da = 100;
                uStack_d9 = 0x6f;
                uStack_d8 = 0x77;
                uStack_d7 = 0x6e;
                local_d6 = 0x5f;
                uStack_d5 = 0x70;
                uStack_d4 = 0x6c;
                uStack_d3 = 0x61;
                uStack_d2 = 0x79;
                uStack_d1 = 0x65;
                uStack_d0 = 0x72;
                uStack_cf = 0;
                uVar15 = 0x6e;
                local_100[1] = 0x29;
                pbVar3 = pbVar8;
                do {
                  local_100[0] = local_100[0] * 0x89 ^ uVar15;
                  uVar15 = (uint)*pbVar3;
                  pbVar3 = pbVar3 + 1;
                } while (uVar15 != 0);
              }
              else {
                uVar15 = 0x6e;
                uStack_da = 0x75;
                uStack_d9 = 0x70;
                uStack_d8 = 0x5f;
                uStack_d7 = 0x70;
                local_d6 = 0x6c;
                uStack_d5 = 0x61;
                uStack_d4 = 0x79;
                uStack_d3 = 0x65;
                uStack_d2 = 0x72;
                uStack_d1 = 0;
                local_100[1] = 0x27;
                pbVar3 = pbVar8;
                do {
                  local_100[0] = local_100[0] * 0x89 ^ uVar15;
                  uVar15 = (uint)*pbVar3;
                  pbVar3 = pbVar3 + 1;
                } while (uVar15 != 0);
              }
              goto LAB_71025bc71c;
            }
          }
          else {
            local_f8 = 0x726970735f6d616e;
            local_f0 = 0x5f737469;
            uStack_ec = 0x6968;
            uStack_ea = 0x746e;
            uStack_e8 = 0x725f;
            uStack_e6 = 0x6c75;
            uStack_e4 = 0x5f65;
            uStack_e2 = 0x7267;
            uStack_e0 = 0x7661;
            uStack_de = 0x69;
            uStack_dd = 0x74;
            uStack_dc = 0x79;
            uStack_db = 0x5f;
            if (*(char *)(lVar11 + 8) == '\0') {
              if (*(char *)(lVar11 + 10) == '\0') {
                uStack_da = 100;
                uStack_d9 = 0x6f;
                uStack_d8 = 0x77;
                uStack_d7 = 0x6e;
                local_d6 = 0x5f;
                uStack_d5 = 0x65;
                uStack_d4 = 0x6e;
                uStack_d3 = 0x65;
                uVar15 = 0x6e;
                uStack_d2 = 0x6d;
                uStack_d1 = 0x79;
                uStack_d0 = 0;
                local_100[1] = 0x28;
                pbVar3 = pbVar8;
                do {
                  local_100[0] = local_100[0] * 0x89 ^ uVar15;
                  uVar15 = (uint)*pbVar3;
                  pbVar3 = pbVar3 + 1;
                } while (uVar15 != 0);
              }
              else {
                uVar15 = 0x6e;
                uStack_da = 0x75;
                uStack_d9 = 0x70;
                uStack_d8 = 0x5f;
                uStack_d7 = 0x65;
                local_d6 = 0x6e;
                uStack_d5 = 0x65;
                uStack_d4 = 0x6d;
                uStack_d3 = 0x79;
                uStack_d2 = 0;
                local_100[1] = 0x26;
                pbVar3 = pbVar8;
                do {
                  local_100[0] = local_100[0] * 0x89 ^ uVar15;
                  uVar15 = (uint)*pbVar3;
                  pbVar3 = pbVar3 + 1;
                } while (uVar15 != 0);
              }
              uStack_d5 = 0x65;
              uVar15 = 4;
            }
            else {
              if (*(char *)(lVar11 + 10) == '\0') {
                uVar15 = 0x6e;
                uStack_da = 100;
                uStack_d9 = 0x6f;
                uStack_d8 = 0x77;
                uStack_d7 = 0x6e;
                local_d6 = 0;
                local_100[1] = 0x22;
                pbVar3 = pbVar8;
                do {
                  local_100[0] = local_100[0] * 0x89 ^ uVar15;
                  uVar15 = (uint)*pbVar3;
                  pbVar3 = pbVar3 + 1;
                } while (uVar15 != 0);
              }
              else {
                uVar15 = 0x6e;
                uStack_da = 0x75;
                uStack_d9 = 0x70;
                uStack_d8 = 0;
                local_100[1] = 0x20;
                pbVar3 = pbVar8;
                do {
                  local_100[0] = local_100[0] * 0x89 ^ uVar15;
                  uVar15 = (uint)*pbVar3;
                  pbVar3 = pbVar3 + 1;
                } while (uVar15 != 0);
              }
LAB_71025bc71c:
              uVar15 = 3;
            }
            uStack_db = 0x5f;
            uStack_dc = 0x79;
            uStack_dd = 0x74;
            uStack_de = 0x69;
            uStack_e0 = 0x7661;
            uStack_e2 = 0x7267;
            uStack_e4 = 0x5f65;
            uStack_e6 = 0x6c75;
            uStack_ea = 0x746e;
            uStack_ec = 0x6968;
            local_f0 = 0x5f737469;
            uStack_e8 = 0x725f;
            local_f8 = 0x726970735f6d616e;
            cVar13 = 'n';
            local_70 = uVar15;
          }
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar4);
    }
    if (local_100 != param_1) {
      uVar12 = 0;
      while (cVar13 != '\0') {
        *(char *)((long)param_1 + uVar12 + 8) = cVar13;
        if (0x3e < (int)uVar12 + 1U) {
          uVar12 = (ulong)((int)uVar12 + 1);
          break;
        }
        cVar13 = *(char *)((long)&local_f8 + uVar12 + 1);
        if (cVar13 == '\0') {
          uVar12 = uVar12 + 1;
          break;
        }
        *(char *)((long)param_1 + uVar12 + 9) = cVar13;
        lVar10 = uVar12 + 2;
        uVar12 = uVar12 + 2;
        cVar13 = *(char *)((long)&local_f8 + lVar10);
      }
      *(undefined1 *)((long)param_1 + (uVar12 & 0xffffffff) + 8) = 0;
      param_1[1] = (uint)uVar12;
      uVar4 = (uint)(byte)param_1[2];
      if ((byte)param_1[2] != 0) {
        pbVar8 = (byte *)((long)param_1 + 9);
        do {
          uVar9 = uVar9 * 0x89 ^ uVar4;
          uVar4 = (uint)*pbVar8;
          pbVar8 = pbVar8 + 1;
        } while (uVar4 != 0);
      }
      *param_1 = uVar9;
      *(undefined1 *)(param_1 + 0x14) = 0;
      param_1[0x12] = 0x811c9dc5;
      param_1[0x13] = 0;
    }
    param_1[0x24] = uVar15;
    return;
  case 0x15:
    uVar15 = 8;
    local_f8 = (ulong)local_f8._1_7_ << 8;
    local_100[0] = 0;
    local_100[1] = 0;
    local_b0[0] = '\0';
    local_b8 = 0;
    uVar4 = 0x811c9dc5;
    local_70 = 8;
    lVar10 = *(long *)(*DAT_7105329fa0 + 0x4a8);
    cVar13 = '\0';
    uVar12 = *(long *)(*DAT_7105329fa0 + 0x4b0) - lVar10 >> 4;
    uVar9 = (uint)uVar12;
    if (uVar9 != 0) {
      uVar6 = 0;
      pbVar8 = (byte *)((long)&local_f8 + 1);
      uVar15 = 8;
      do {
        uVar14 = (ulong)uVar6;
        if (uVar12 <= uVar14) goto LAB_71025c1ba0;
        if (((*(ulong *)(lVar10 + uVar14 * 0x10) ^ param_3) & 0xffffffffff) == 0) {
          lVar11 = lVar10 + uVar14 * 0x10;
          cVar2 = *(char *)(lVar11 + 8);
          local_100[0] = uVar4;
          if (*(char *)(lVar11 + 9) == '\0') {
            if (cVar2 == '\0') goto LAB_71025bdeb0;
            uVar15 = 0x6e;
            local_f8 = 0x726970735f6d616e;
            local_f0 = 0x5f737469;
            uStack_ec = 0x6968;
            uStack_ea = 0x746e;
            uStack_e8 = 0x725f;
            uStack_e6 = 0x6c75;
            uStack_e4 = 0x5f65;
            uStack_e2 = 0x7073;
            uStack_e0 = 0x6565;
            uStack_de = 100;
            uStack_dd = 0x5f;
            uStack_dc = 0x77;
            uStack_db = 0x69;
            uStack_da = 0x6c;
            uStack_d9 = 100;
            uStack_d8 = 0x5f;
            uStack_d7 = 0x70;
            local_d6 = 0x6c;
            uStack_d5 = 0x61;
            uStack_d4 = 0x79;
            uStack_d3 = 0x65;
            uStack_d2 = 0x72;
            uStack_d1 = 0;
            local_100[1] = 0x27;
            pbVar3 = pbVar8;
            do {
              local_100[0] = local_100[0] * 0x89 ^ uVar15;
              uVar15 = (uint)*pbVar3;
              pbVar3 = pbVar3 + 1;
            } while (uVar15 != 0);
          }
          else {
            local_f8 = 0x726970735f6d616e;
            local_f0 = 0x5f737469;
            uStack_ec = 0x6968;
            uStack_ea = 0x746e;
            uStack_e8 = 0x725f;
            uStack_e6 = 0x6c75;
            uStack_e4 = 0x5f65;
            uStack_e2 = 0x7073;
            uStack_e0 = 0x6565;
            uStack_de = 100;
            uStack_dd = 0x5f;
            uStack_dc = 0x77;
            uStack_db = 0x69;
            uStack_da = 0x6c;
            uStack_d9 = 100;
            if (cVar2 == '\0') {
              uVar15 = 0x6e;
              uStack_d8 = 0x5f;
              uStack_d7 = 0x65;
              local_d6 = 0x6e;
              uStack_d5 = 0x65;
              uStack_d4 = 0x6d;
              uStack_d3 = 0x79;
              uStack_d2 = 0;
              local_100[1] = 0x26;
              pbVar3 = pbVar8;
              do {
                local_100[0] = local_100[0] * 0x89 ^ uVar15;
                uVar15 = (uint)*pbVar3;
                pbVar3 = pbVar3 + 1;
              } while (uVar15 != 0);
            }
            else {
              uVar15 = 0x6e;
              uStack_d8 = 0;
              local_100[1] = 0x20;
              pbVar3 = pbVar8;
              do {
                local_100[0] = local_100[0] * 0x89 ^ uVar15;
                uVar15 = (uint)*pbVar3;
                pbVar3 = pbVar3 + 1;
              } while (uVar15 != 0);
            }
          }
          uStack_d9 = 100;
          uStack_da = 0x6c;
          uStack_db = 0x69;
          uStack_dc = 0x77;
          uStack_dd = 0x5f;
          uStack_de = 100;
          uStack_e0 = 0x6565;
          uStack_e2 = 0x7073;
          uStack_e4 = 0x5f65;
          uStack_e6 = 0x6c75;
          uStack_e8 = 0x725f;
          uStack_ea = 0x746e;
          uStack_ec = 0x6968;
          local_f0 = 0x5f737469;
          local_f8 = 0x726970735f6d616e;
          uVar15 = 3;
          cVar13 = 'n';
          local_70 = 3;
        }
LAB_71025bdeb0:
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar9);
    }
    if (local_100 != param_1) {
      uVar12 = 0;
      while (cVar13 != '\0') {
        *(char *)((long)param_1 + uVar12 + 8) = cVar13;
        if (0x3e < (int)uVar12 + 1U) {
          uVar12 = (ulong)((int)uVar12 + 1);
          break;
        }
        cVar13 = *(char *)((long)&local_f8 + uVar12 + 1);
        if (cVar13 == '\0') {
          uVar12 = uVar12 + 1;
          break;
        }
        *(char *)((long)param_1 + uVar12 + 9) = cVar13;
        lVar10 = uVar12 + 2;
        uVar12 = uVar12 + 2;
        cVar13 = *(char *)((long)&local_f8 + lVar10);
      }
      *(undefined1 *)((long)param_1 + (uVar12 & 0xffffffff) + 8) = 0;
      param_1[1] = (uint)uVar12;
      uVar6 = (uint)(byte)param_1[2];
      uVar9 = 0x811c9dc5;
      if ((byte)param_1[2] != 0) {
        pbVar8 = (byte *)((long)param_1 + 9);
        uVar9 = uVar4;
        do {
          uVar9 = uVar9 * 0x89 ^ uVar6;
          uVar6 = (uint)*pbVar8;
          pbVar8 = pbVar8 + 1;
        } while (uVar6 != 0);
      }
      goto LAB_71025c184c;
    }
    break;
  case 0x16:
    local_70 = 8;
    local_f8 = (ulong)local_f8._1_7_ << 8;
    local_100[0] = 0;
    local_100[1] = 0;
    local_b0[0] = '\0';
    local_b8 = 0;
    lVar10 = *(long *)(*DAT_7105329fa0 + 1000);
    uVar12 = *(long *)(*DAT_7105329fa0 + 0x3f0) - lVar10 >> 4;
    uVar9 = (uint)uVar12;
    if (uVar9 != 0) {
      uVar15 = 0;
      do {
        uVar14 = (ulong)uVar15;
        if (uVar12 <= uVar14) goto LAB_71025c1ba0;
        if (((*(ulong *)(lVar10 + uVar14 * 0x10) ^ param_3) & 0xffffffffff) == 0) {
          lVar11 = lVar10 + uVar14 * 0x10;
          cVar13 = *(char *)(lVar11 + 9);
          if (*(char *)(lVar11 + 8) == '\0') {
            pcVar5 = "nam_spirits_hint_rule_magic_up_enemy";
            if (cVar13 == '\0') goto LAB_71025bfd9c;
          }
          else {
            pcVar5 = "nam_spirits_hint_rule_magic_up_player";
            if (cVar13 != '\0') {
              pcVar5 = "nam_spirits_hint_rule_magic_up_all";
            }
          }
          uVar12 = 0;
          goto LAB_71025c1b30;
        }
LAB_71025bfd9c:
        uVar15 = uVar15 + 1;
      } while (uVar15 < uVar9);
    }
    uVar12 = 0;
LAB_71025bfdac:
    uVar4 = 0x811c9dc5;
    uVar9 = 0x811c9dc5;
    *(undefined1 *)((long)&local_f8 + (uVar12 & 0xffffffff)) = 0;
    if ((char)local_f8 != '\0') {
      pcVar5 = (char *)((long)&local_f8 + 1);
      do {
        cVar13 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar13 != '\0');
    }
    uVar15 = 4;
    local_70 = 4;
    if (local_100 == param_1) goto LAB_71025c16b8;
    uVar12 = 0;
    while ((char)local_f8 != '\0') {
      *(char *)((long)param_1 + uVar12 + 8) = (char)local_f8;
      if (0x3e < (int)uVar12 + 1U) {
        uVar12 = (ulong)((int)uVar12 + 1);
        break;
      }
      cVar13 = *(char *)((long)&local_f8 + uVar12 + 1);
      if (cVar13 == '\0') {
        uVar12 = uVar12 + 1;
        break;
      }
      *(char *)((long)param_1 + uVar12 + 9) = cVar13;
      lVar10 = uVar12 + 2;
      uVar12 = uVar12 + 2;
      local_f8._0_1_ = *(char *)((long)&local_f8 + lVar10);
    }
    *(undefined1 *)((long)param_1 + (uVar12 & 0xffffffff) + 8) = 0;
    uVar7 = (uint)(byte)param_1[2];
    param_1[1] = (uint)uVar12;
    uVar6 = uVar4;
    if ((byte)param_1[2] != 0) {
      pbVar8 = (byte *)((long)param_1 + 9);
      do {
        uVar6 = uVar6 * 0x89 ^ uVar7;
        uVar7 = (uint)*pbVar8;
        pbVar8 = pbVar8 + 1;
      } while (uVar7 != 0);
    }
    *param_1 = uVar6;
    for (uVar12 = 0; local_b0[uVar12] != '\0'; uVar12 = uVar12 + 2) {
      *(char *)((long)param_1 + uVar12 + 0x50) = local_b0[uVar12];
      if (0x3e < (int)uVar12 + 1U) {
        uVar12 = (ulong)((int)uVar12 + 1);
        break;
      }
      if (local_b0[uVar12 + 1] == '\0') {
        uVar12 = uVar12 + 1;
        break;
      }
      *(char *)((long)param_1 + uVar12 + 0x51) = local_b0[uVar12 + 1];
    }
    *(undefined1 *)((long)param_1 + (uVar12 & 0xffffffff) + 0x50) = 0;
    uVar6 = (uint)(byte)param_1[0x14];
    param_1[0x13] = (uint)uVar12;
    if ((byte)param_1[0x14] != 0) {
      pbVar8 = (byte *)((long)param_1 + 0x51);
      uVar9 = uVar4;
      do {
        uVar9 = uVar9 * 0x89 ^ uVar6;
        uVar6 = (uint)*pbVar8;
        pbVar8 = pbVar8 + 1;
      } while (uVar6 != 0);
    }
    goto LAB_71025c16b4;
  case 0x17:
    local_70 = 8;
    local_f8 = (ulong)local_f8._1_7_ << 8;
    local_100[0] = 0;
    local_100[1] = 0;
    local_b0[0] = '\0';
    local_b8 = 0;
    lVar10 = *(long *)(*DAT_7105329fa0 + 0x400);
    uVar12 = *(long *)(*DAT_7105329fa0 + 0x408) - lVar10 >> 4;
    uVar9 = (uint)uVar12;
    if (uVar9 != 0) {
      uVar15 = 0;
      do {
        uVar14 = (ulong)uVar15;
        if (uVar12 <= uVar14) goto LAB_71025c1ba0;
        if (((*(ulong *)(lVar10 + uVar14 * 0x10) ^ param_3) & 0xffffffffff) == 0) {
          lVar11 = lVar10 + uVar14 * 0x10;
          cVar13 = *(char *)(lVar11 + 9);
          if (*(char *)(lVar11 + 8) == '\0') {
            pcVar5 = "nam_spirits_hint_rule_energy_charge_enemy";
            if (cVar13 == '\0') goto LAB_71025bc968;
          }
          else {
            pcVar5 = "nam_spirits_hint_rule_energy_charge_player";
            if (cVar13 != '\0') {
              pcVar5 = "nam_spirits_hint_rule_energy_charge_all";
            }
          }
          uVar12 = 0;
          goto LAB_71025c1908;
        }
LAB_71025bc968:
        uVar15 = uVar15 + 1;
      } while (uVar15 < uVar9);
    }
    uVar12 = 0;
LAB_71025bc978:
    uVar4 = 0x811c9dc5;
    uVar9 = 0x811c9dc5;
    *(undefined1 *)((long)&local_f8 + (uVar12 & 0xffffffff)) = 0;
    if ((char)local_f8 != '\0') {
      pcVar5 = (char *)((long)&local_f8 + 1);
      do {
        cVar13 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar13 != '\0');
    }
    uVar15 = 4;
    local_70 = 4;
    if (local_100 == param_1) goto LAB_71025c16b8;
    uVar12 = 0;
    while ((char)local_f8 != '\0') {
      *(char *)((long)param_1 + uVar12 + 8) = (char)local_f8;
      if (0x3e < (int)uVar12 + 1U) {
        uVar12 = (ulong)((int)uVar12 + 1);
        break;
      }
      cVar13 = *(char *)((long)&local_f8 + uVar12 + 1);
      if (cVar13 == '\0') {
        uVar12 = uVar12 + 1;
        break;
      }
      *(char *)((long)param_1 + uVar12 + 9) = cVar13;
      lVar10 = uVar12 + 2;
      uVar12 = uVar12 + 2;
      local_f8._0_1_ = *(char *)((long)&local_f8 + lVar10);
    }
    *(undefined1 *)((long)param_1 + (uVar12 & 0xffffffff) + 8) = 0;
    uVar7 = (uint)(byte)param_1[2];
    param_1[1] = (uint)uVar12;
    uVar6 = uVar4;
    if ((byte)param_1[2] != 0) {
      pbVar8 = (byte *)((long)param_1 + 9);
      do {
        uVar6 = uVar6 * 0x89 ^ uVar7;
        uVar7 = (uint)*pbVar8;
        pbVar8 = pbVar8 + 1;
      } while (uVar7 != 0);
    }
    *param_1 = uVar6;
    for (uVar12 = 0; local_b0[uVar12] != '\0'; uVar12 = uVar12 + 2) {
      *(char *)((long)param_1 + uVar12 + 0x50) = local_b0[uVar12];
      if (0x3e < (int)uVar12 + 1U) {
        uVar12 = (ulong)((int)uVar12 + 1);
        break;
      }
      if (local_b0[uVar12 + 1] == '\0') {
        uVar12 = uVar12 + 1;
        break;
      }
      *(char *)((long)param_1 + uVar12 + 0x51) = local_b0[uVar12 + 1];
    }
    *(undefined1 *)((long)param_1 + (uVar12 & 0xffffffff) + 0x50) = 0;
    uVar6 = (uint)(byte)param_1[0x14];
    param_1[0x13] = (uint)uVar12;
    if ((byte)param_1[0x14] != 0) {
      pbVar8 = (byte *)((long)param_1 + 0x51);
      uVar9 = uVar4;
      do {
        uVar9 = uVar9 * 0x89 ^ uVar6;
        uVar6 = (uint)*pbVar8;
        pbVar8 = pbVar8 + 1;
      } while (uVar6 != 0);
    }
    goto LAB_71025c16b4;
  case 0x18:
    local_70 = 8;
    local_f8 = (ulong)local_f8._1_7_ << 8;
    local_100[0] = 0;
    local_100[1] = 0;
    local_b0[0] = '\0';
    local_b8 = 0;
    lVar10 = *(long *)(*DAT_7105329fa0 + 0x418);
    uVar12 = *(long *)(*DAT_7105329fa0 + 0x420) - lVar10 >> 4;
    uVar9 = (uint)uVar12;
    if (uVar9 != 0) {
      uVar15 = 0;
      do {
        uVar14 = (ulong)uVar15;
        if (uVar12 <= uVar14) goto LAB_71025c1ba0;
        if (((*(ulong *)(lVar10 + uVar14 * 0x10) ^ param_3) & 0xffffffffff) == 0) {
          lVar11 = lVar10 + uVar14 * 0x10;
          cVar13 = *(char *)(lVar11 + 9);
          if (*(char *)(lVar11 + 8) == '\0') {
            pcVar5 = "nam_spirits_hint_rule_weapon_offense_up_enemy";
            if (cVar13 == '\0') goto LAB_71025bdf90;
          }
          else {
            pcVar5 = "nam_spirits_hint_rule_weapon_offense_up_player";
            if (cVar13 != '\0') {
              pcVar5 = "nam_spirits_hint_rule_weapon_offense_up_all";
            }
          }
          uVar12 = 0;
          goto LAB_71025c1964;
        }
LAB_71025bdf90:
        uVar15 = uVar15 + 1;
      } while (uVar15 < uVar9);
    }
    uVar12 = 0;
LAB_71025bdfa0:
    uVar9 = 0x811c9dc5;
    *(undefined1 *)((long)&local_f8 + (uVar12 & 0xffffffff)) = 0;
    if ((char)local_f8 != '\0') {
      pcVar5 = (char *)((long)&local_f8 + 1);
      do {
        cVar13 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar13 != '\0');
    }
    uVar15 = 4;
    local_70 = 4;
    if (local_100 == param_1) goto LAB_71025c16b8;
    uVar12 = 0;
    while ((char)local_f8 != '\0') {
      *(char *)((long)param_1 + uVar12 + 8) = (char)local_f8;
      if (0x3e < (int)uVar12 + 1U) {
        uVar12 = (ulong)((int)uVar12 + 1);
        break;
      }
      cVar13 = *(char *)((long)&local_f8 + uVar12 + 1);
      if (cVar13 == '\0') {
        uVar12 = uVar12 + 1;
        break;
      }
      *(char *)((long)param_1 + uVar12 + 9) = cVar13;
      lVar10 = uVar12 + 2;
      uVar12 = uVar12 + 2;
      local_f8._0_1_ = *(char *)((long)&local_f8 + lVar10);
    }
    *(undefined1 *)((long)param_1 + (uVar12 & 0xffffffff) + 8) = 0;
    uVar6 = (uint)(byte)param_1[2];
    param_1[1] = (uint)uVar12;
    uVar4 = uVar9;
    if ((byte)param_1[2] != 0) {
      pbVar8 = (byte *)((long)param_1 + 9);
      do {
        uVar4 = uVar4 * 0x89 ^ uVar6;
        uVar6 = (uint)*pbVar8;
        pbVar8 = pbVar8 + 1;
      } while (uVar6 != 0);
    }
    *param_1 = uVar4;
    for (uVar12 = 0; local_b0[uVar12] != '\0'; uVar12 = uVar12 + 2) {
      *(char *)((long)param_1 + uVar12 + 0x50) = local_b0[uVar12];
      if (0x3e < (int)uVar12 + 1U) {
        uVar12 = (ulong)((int)uVar12 + 1);
        break;
      }
      if (local_b0[uVar12 + 1] == '\0') {
        uVar12 = uVar12 + 1;
        break;
      }
      *(char *)((long)param_1 + uVar12 + 0x51) = local_b0[uVar12 + 1];
    }
    *(undefined1 *)((long)param_1 + (uVar12 & 0xffffffff) + 0x50) = 0;
    uVar4 = (uint)(byte)param_1[0x14];
    param_1[0x13] = (uint)uVar12;
    if ((byte)param_1[0x14] != 0) {
      pbVar8 = (byte *)((long)param_1 + 0x51);
      do {
        uVar9 = uVar9 * 0x89 ^ uVar4;
        uVar4 = (uint)*pbVar8;
        pbVar8 = pbVar8 + 1;
      } while (uVar4 != 0);
    }
    goto LAB_71025c16b4;
  case 0x19:
    uVar15 = 8;
    local_f8 = (ulong)local_f8._1_7_ << 8;
    local_100[0] = 0;
    local_100[1] = 0;
    local_b0[0] = '\0';
    local_b8 = 0;
    uVar4 = 0x811c9dc5;
    local_70 = 8;
    lVar10 = *(long *)(*DAT_7105329fa0 + 0x4d8);
    cVar13 = '\0';
    uVar12 = *(long *)(*DAT_7105329fa0 + 0x4e0) - lVar10 >> 4;
    uVar9 = (uint)uVar12;
    if (uVar9 != 0) {
      uVar6 = 0;
      pbVar8 = (byte *)((long)&local_f8 + 1);
      uVar15 = 8;
      do {
        uVar14 = (ulong)uVar6;
        if (uVar12 <= uVar14) goto LAB_71025c1ba0;
        if (((*(ulong *)(lVar10 + uVar14 * 0x10) ^ param_3) & 0xffffffffff) == 0) {
          lVar11 = lVar10 + uVar14 * 0x10;
          cVar2 = *(char *)(lVar11 + 8);
          local_100[0] = uVar4;
          if (*(char *)(lVar11 + 9) == '\0') {
            if (cVar2 != '\0') {
              uVar15 = 0x6e;
              local_f8 = 0x726970735f6d616e;
              local_f0 = 0x5f737469;
              uStack_ec = 0x6968;
              uStack_ea = 0x746e;
              uStack_e8 = 0x725f;
              uStack_e6 = 0x6c75;
              uStack_e4 = 0x5f65;
              uStack_e2 = 0x7264;
              uStack_e0 = 0x776f;
              uStack_de = 0x6e;
              uStack_dd = 0x5f;
              uStack_dc = 0x75;
              uStack_db = 0x70;
              uStack_da = 0x5f;
              uStack_d9 = 0x70;
              uStack_d8 = 0x6c;
              uStack_d7 = 0x61;
              local_d6 = 0x79;
              uStack_d5 = 0x65;
              uStack_d4 = 0x72;
              uStack_d3 = 0;
              local_100[1] = 0x25;
              pbVar3 = pbVar8;
              do {
                local_100[0] = local_100[0] * 0x89 ^ uVar15;
                uVar15 = (uint)*pbVar3;
                pbVar3 = pbVar3 + 1;
              } while (uVar15 != 0);
              goto LAB_71025bcdc0;
            }
          }
          else {
            local_f8 = 0x726970735f6d616e;
            local_f0 = 0x5f737469;
            uStack_ec = 0x6968;
            uStack_ea = 0x746e;
            uStack_e8 = 0x725f;
            uStack_e6 = 0x6c75;
            uStack_e4 = 0x5f65;
            uStack_e2 = 0x7264;
            uStack_e0 = 0x776f;
            uStack_de = 0x6e;
            uStack_dd = 0x5f;
            uStack_dc = 0x75;
            uStack_db = 0x70;
            if (cVar2 == '\0') {
              uVar15 = 0x6e;
              uStack_da = 0x5f;
              uStack_d9 = 0x65;
              uStack_d8 = 0x6e;
              uStack_d7 = 0x65;
              local_d6 = 0x6d;
              uStack_d5 = 0x79;
              uStack_d4 = 0;
              pbVar3 = pbVar8;
              do {
                local_100[0] = local_100[0] * 0x89 ^ uVar15;
                uVar15 = (uint)*pbVar3;
                pbVar3 = pbVar3 + 1;
              } while (uVar15 != 0);
              local_100[1] = 0x24;
              uVar15 = 3;
            }
            else {
              uVar15 = 0x6e;
              uStack_da = 0;
              local_100[1] = 0x1e;
              pbVar3 = pbVar8;
              do {
                local_100[0] = local_100[0] * 0x89 ^ uVar15;
                uVar15 = (uint)*pbVar3;
                pbVar3 = pbVar3 + 1;
              } while (uVar15 != 0);
LAB_71025bcdc0:
              uVar15 = 2;
            }
            uStack_db = 0x70;
            uStack_dc = 0x75;
            uStack_dd = 0x5f;
            uStack_de = 0x6e;
            uStack_e0 = 0x776f;
            uStack_e2 = 0x7264;
            uStack_e4 = 0x5f65;
            uStack_e6 = 0x6c75;
            uStack_ea = 0x746e;
            uStack_ec = 0x6968;
            local_f0 = 0x5f737469;
            uStack_e8 = 0x725f;
            local_f8 = 0x726970735f6d616e;
            cVar13 = 'n';
            local_70 = uVar15;
          }
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar9);
    }
    if (local_100 != param_1) {
      uVar12 = 0;
      while (cVar13 != '\0') {
        *(char *)((long)param_1 + uVar12 + 8) = cVar13;
        if (0x3e < (int)uVar12 + 1U) {
          uVar12 = (ulong)((int)uVar12 + 1);
          break;
        }
        cVar13 = *(char *)((long)&local_f8 + uVar12 + 1);
        if (cVar13 == '\0') {
          uVar12 = uVar12 + 1;
          break;
        }
        *(char *)((long)param_1 + uVar12 + 9) = cVar13;
        lVar10 = uVar12 + 2;
        uVar12 = uVar12 + 2;
        cVar13 = *(char *)((long)&local_f8 + lVar10);
      }
      *(undefined1 *)((long)param_1 + (uVar12 & 0xffffffff) + 8) = 0;
      param_1[1] = (uint)uVar12;
      uVar6 = (uint)(byte)param_1[2];
      uVar9 = 0x811c9dc5;
      if ((byte)param_1[2] != 0) {
        pbVar8 = (byte *)((long)param_1 + 9);
        uVar9 = uVar4;
        do {
          uVar9 = uVar9 * 0x89 ^ uVar6;
          uVar6 = (uint)*pbVar8;
          pbVar8 = pbVar8 + 1;
        } while (uVar6 != 0);
      }
      goto LAB_71025c184c;
    }
    break;
  case 0x1a:
    local_70 = 8;
    local_f8 = 0x726970735f6d616e;
    local_f0 = 0x5f737469;
    uStack_ec = 0x6968;
    local_b0[0] = '\0';
    uStack_ea = 0x746e;
    uStack_e8 = 0x725f;
    uStack_e6 = 0x6c75;
    uStack_e4 = 0x5f65;
    local_b8 = 0;
    uStack_e2 = 0x6461;
    uStack_e0 = 0x6176;
    uStack_de = 0x6e;
    uStack_dd = 0x74;
    uStack_dc = 0x61;
    uStack_db = 0x67;
    uStack_da = 0x65;
    uStack_d9 = 0x5f;
    uStack_d8 = 0x72;
    uStack_d7 = 0x65;
    local_d6 = 0x76;
    uStack_d5 = 0x65;
    uStack_d4 = 0x72;
    uStack_d3 = 0x73;
    uStack_d2 = 0x65;
    uStack_d1 = 0;
    lVar10 = 9;
    do {
      pcVar5 = (char *)((long)local_100 + lVar10);
      lVar10 = lVar10 + 1;
    } while (*pcVar5 != '\0');
    uVar15 = 2;
    local_70 = 2;
    if (local_100 != param_1) {
      uVar12 = 0;
      cVar13 = 'n';
      do {
        *(char *)((long)param_1 + uVar12 + 8) = cVar13;
        if (0x3e < (int)uVar12 + 1U) {
          uVar12 = (ulong)((int)uVar12 + 1);
          break;
        }
        cVar13 = *(char *)((long)&local_f8 + uVar12 + 1);
        if (cVar13 == '\0') {
          uVar12 = uVar12 + 1;
          break;
        }
        *(char *)((long)param_1 + uVar12 + 9) = cVar13;
        cVar13 = *(char *)((long)&local_f8 + uVar12 + 2);
        uVar12 = uVar12 + 2;
      } while (cVar13 != '\0');
      *(undefined1 *)((long)param_1 + (uVar12 & 0xffffffff) + 8) = 0;
      param_1[1] = (uint)uVar12;
      uVar4 = (uint)(byte)param_1[2];
      uVar9 = 0x811c9dc5;
      if ((byte)param_1[2] != 0) {
        pbVar8 = (byte *)((long)param_1 + 9);
        uVar9 = 0x811c9dc5;
        do {
          uVar9 = uVar9 * 0x89 ^ uVar4;
          uVar4 = (uint)*pbVar8;
          pbVar8 = pbVar8 + 1;
        } while (uVar4 != 0);
      }
      goto LAB_71025c15e8;
    }
    break;
  case 0x1b:
    local_70 = 8;
    local_f8 = 0x726970735f6d616e;
    local_f0 = 0x5f737469;
    uStack_ec = 0x6968;
    uStack_ea = 0x746e;
    uStack_e8 = 0x725f;
    uStack_e6 = 0x6c75;
    uStack_e4 = 0x5f65;
    uStack_e2 = 0x6461;
    uStack_d4 = 0x6c;
    uStack_d3 = 0x65;
    uStack_e0 = 0x6176;
    uStack_de = 0x6e;
    uStack_dd = 0x74;
    uStack_dc = 0x61;
    uStack_db = 0x67;
    uStack_da = 0x65;
    uStack_d9 = 0x5f;
    uStack_d8 = 100;
    uStack_d7 = 0x6f;
    local_d6 = 0x75;
    uStack_d5 = 0x62;
    lVar10 = 9;
    local_b0[0] = '\0';
    local_b8 = 0;
    uStack_d2 = 0;
    do {
      pcVar5 = (char *)((long)local_100 + lVar10);
      lVar10 = lVar10 + 1;
    } while (*pcVar5 != '\0');
    uVar15 = 2;
    local_70 = 2;
    if (local_100 != param_1) {
      uVar12 = 0;
      cVar13 = 'n';
      do {
        *(char *)((long)param_1 + uVar12 + 8) = cVar13;
        if (0x3e < (int)uVar12 + 1U) {
          uVar12 = (ulong)((int)uVar12 + 1);
          break;
        }
        cVar13 = *(char *)((long)&local_f8 + uVar12 + 1);
        if (cVar13 == '\0') {
          uVar12 = uVar12 + 1;
          break;
        }
        *(char *)((long)param_1 + uVar12 + 9) = cVar13;
        cVar13 = *(char *)((long)&local_f8 + uVar12 + 2);
        uVar12 = uVar12 + 2;
      } while (cVar13 != '\0');
      *(undefined1 *)((long)param_1 + (uVar12 & 0xffffffff) + 8) = 0;
      param_1[1] = (uint)uVar12;
      uVar4 = (uint)(byte)param_1[2];
      uVar9 = 0x811c9dc5;
      if ((byte)param_1[2] != 0) {
        pbVar8 = (byte *)((long)param_1 + 9);
        uVar9 = 0x811c9dc5;
        do {
          uVar9 = uVar9 * 0x89 ^ uVar4;
          uVar4 = (uint)*pbVar8;
          pbVar8 = pbVar8 + 1;
        } while (uVar4 != 0);
      }
      goto LAB_71025c15e8;
    }
    break;
  case 0x1c:
    local_70 = 8;
    local_f8 = 0x726970735f6d616e;
    local_f0 = 0x5f737469;
    uStack_ec = 0x6968;
    local_b0[0] = '\0';
    uStack_ea = 0x746e;
    uStack_e8 = 0x725f;
    uStack_e6 = 0x6c75;
    uStack_e4 = 0x5f65;
    uStack_e2 = 0x6373;
    uStack_e0 = 0x6572;
    uStack_de = 0x65;
    uStack_dd = 0x6e;
    uStack_dc = 0x5f;
    uStack_db = 0x66;
    uStack_da = 0x6c;
    uStack_d9 = 0x69;
    lVar10 = 9;
    uStack_d8 = 0x70;
    uStack_d7 = 0;
    local_b8 = 0;
    do {
      pcVar5 = (char *)((long)local_100 + lVar10);
      lVar10 = lVar10 + 1;
    } while (*pcVar5 != '\0');
    uVar15 = 2;
    local_70 = 2;
    if (local_100 != param_1) {
      uVar12 = 0;
      cVar13 = 'n';
      do {
        *(char *)((long)param_1 + uVar12 + 8) = cVar13;
        if (0x3e < (int)uVar12 + 1U) {
          uVar12 = (ulong)((int)uVar12 + 1);
          break;
        }
        cVar13 = *(char *)((long)&local_f8 + uVar12 + 1);
        if (cVar13 == '\0') {
          uVar12 = uVar12 + 1;
          break;
        }
        *(char *)((long)param_1 + uVar12 + 9) = cVar13;
        cVar13 = *(char *)((long)&local_f8 + uVar12 + 2);
        uVar12 = uVar12 + 2;
      } while (cVar13 != '\0');
      *(undefined1 *)((long)param_1 + (uVar12 & 0xffffffff) + 8) = 0;
      param_1[1] = (uint)uVar12;
      uVar4 = (uint)(byte)param_1[2];
      uVar9 = 0x811c9dc5;
      if ((byte)param_1[2] != 0) {
        pbVar8 = (byte *)((long)param_1 + 9);
        uVar9 = 0x811c9dc5;
        do {
          uVar9 = uVar9 * 0x89 ^ uVar4;
          uVar4 = (uint)*pbVar8;
          pbVar8 = pbVar8 + 1;
        } while (uVar4 != 0);
      }
      goto LAB_71025c15e8;
    }
    break;
  case 0x1d:
    local_70 = 8;
    local_f8 = 0x726970735f6d616e;
    local_f0 = 0x5f737469;
    uStack_ec = 0x6968;
    uStack_ea = 0x746e;
    uStack_e8 = 0x725f;
    uStack_e6 = 0x6c75;
    uStack_e4 = 0x5f65;
    uStack_e2 = 0x6f68;
    uStack_e0 = 0x6972;
    uStack_de = 0x7a;
    uStack_dd = 0x6f;
    uStack_dc = 0x6e;
    uStack_db = 0x74;
    uStack_da = 0x61;
    uStack_d9 = 0x6c;
    uStack_d8 = 0x5f;
    uStack_d7 = 99;
    local_d6 = 0x6f;
    uStack_d5 = 0x6e;
    uStack_d4 = 0x74;
    uStack_d3 = 0x72;
    uStack_d2 = 0x6f;
    uStack_d1 = 0x6c;
    uVar9 = 0x811c9dc5;
    local_b0[0] = '\0';
    local_b8 = 0;
    uStack_d0 = 0x6c;
    uStack_cf = 0x65;
    uStack_ce = 0x72;
    uStack_cd = 0x5f;
    uStack_cc = 0x66;
    uStack_cb = 0x6c;
    uStack_ca = 0x69;
    uStack_c9 = 0x70;
    lVar10 = 9;
    local_c8 = 0;
    do {
      pcVar5 = (char *)((long)local_100 + lVar10);
      lVar10 = lVar10 + 1;
    } while (*pcVar5 != '\0');
    uVar15 = 2;
    local_70 = 2;
    if (local_100 != param_1) {
      for (uVar12 = 0; *(char *)((long)&local_f8 + uVar12) != '\0'; uVar12 = uVar12 + 2) {
        *(char *)((long)param_1 + uVar12 + 8) = *(char *)((long)&local_f8 + uVar12);
        if (0x3e < (int)uVar12 + 1U) {
          uVar12 = (ulong)((int)uVar12 + 1);
          break;
        }
        cVar13 = *(char *)((long)&local_f8 + uVar12 + 1);
        if (cVar13 == '\0') {
          uVar12 = uVar12 + 1;
          break;
        }
        *(char *)((long)param_1 + uVar12 + 9) = cVar13;
      }
      *(undefined1 *)((long)param_1 + (uVar12 & 0xffffffff) + 8) = 0;
      param_1[1] = (uint)uVar12;
      uVar6 = (uint)(byte)param_1[2];
      uVar4 = uVar9;
      if ((byte)param_1[2] != 0) {
        pbVar8 = (byte *)((long)param_1 + 9);
        do {
          uVar4 = uVar4 * 0x89 ^ uVar6;
          uVar6 = (uint)*pbVar8;
          pbVar8 = pbVar8 + 1;
        } while (uVar6 != 0);
      }
      *param_1 = uVar4;
      for (uVar12 = 0; local_b0[uVar12] != '\0'; uVar12 = uVar12 + 2) {
        *(char *)((long)param_1 + uVar12 + 0x50) = local_b0[uVar12];
        if (0x3e < (int)uVar12 + 1U) {
          uVar12 = (ulong)((int)uVar12 + 1);
          break;
        }
        if (local_b0[uVar12 + 1] == '\0') {
          uVar12 = uVar12 + 1;
          break;
        }
        *(char *)((long)param_1 + uVar12 + 0x51) = local_b0[uVar12 + 1];
      }
      *(undefined1 *)((long)param_1 + (uVar12 & 0xffffffff) + 0x50) = 0;
      uVar4 = (uint)(byte)param_1[0x14];
      param_1[0x13] = (uint)uVar12;
      if ((byte)param_1[0x14] != 0) {
        pbVar8 = (byte *)((long)param_1 + 0x51);
        do {
          uVar9 = uVar9 * 0x89 ^ uVar4;
          uVar4 = (uint)*pbVar8;
          pbVar8 = pbVar8 + 1;
        } while (uVar4 != 0);
      }
      param_1[0x12] = uVar9;
    }
    break;
  case 0x20:
    uVar15 = 8;
    local_f8 = (ulong)local_f8._1_7_ << 8;
    local_100[0] = 0;
    local_100[1] = 0;
    local_b0[0] = '\0';
    local_b8 = 0;
    uVar9 = 0x811c9dc5;
    local_70 = 8;
    lVar10 = *(long *)(*DAT_7105329fa0 + 0x4f0);
    cVar13 = '\0';
    uVar12 = *(long *)(*DAT_7105329fa0 + 0x4f8) - lVar10 >> 4;
    uVar4 = (uint)uVar12;
    if (uVar4 != 0) {
      uVar6 = 0;
      pbVar8 = (byte *)((long)&local_f8 + 1);
      uVar15 = 8;
      do {
        uVar14 = (ulong)uVar6;
        if (uVar12 <= uVar14) goto LAB_71025c1ba8;
        if (((*(ulong *)(lVar10 + uVar14 * 0x10) ^ param_3) & 0xffffffffff) == 0) {
          lVar11 = lVar10 + uVar14 * 0x10;
          local_100[0] = uVar9;
          if (*(char *)(lVar11 + 9) == '\0') {
            if (*(char *)(lVar11 + 8) == '\0') goto LAB_71025bd158;
            local_f8 = 0x726970735f6d616e;
            local_f0 = 0x5f737469;
            uStack_ec = 0x6968;
            uStack_ea = 0x746e;
            uStack_e8 = 0x725f;
            uStack_e6 = 0x6c75;
            uStack_e4 = 0x5f65;
            uStack_e2 = 0x7262;
            uStack_e0 = 0x776f;
            uStack_de = 0x61;
            uStack_dd = 0x77;
            uStack_dc = 0x61;
            uStack_db = 0x79;
            uStack_da = 0x75;
            uStack_d9 = 0x70;
            uStack_d8 = 0x5f;
            if (*(char *)(lVar11 + 10) != '\0') {
              uVar15 = 0x6e;
              uStack_d7 = 0x75;
              local_d6 = 0x70;
              uStack_d5 = 0x5f;
              uStack_d4 = 0x70;
              uStack_d3 = 0x6c;
              uStack_d2 = 0x61;
              uStack_d1 = 0x79;
              uStack_d0 = 0x65;
              uStack_cf = 0x72;
              uStack_ce = 0;
              local_100[1] = 0x2a;
              pbVar3 = pbVar8;
              do {
                local_100[0] = local_100[0] * 0x89 ^ uVar15;
                uVar15 = (uint)*pbVar3;
                pbVar3 = pbVar3 + 1;
              } while (uVar15 != 0);
              goto LAB_71025bd03c;
            }
            uStack_d7 = 100;
            local_d6 = 0x6f;
            uStack_d5 = 0x77;
            uStack_d4 = 0x6e;
            uStack_d3 = 0x5f;
            uStack_d2 = 0x70;
            uStack_d1 = 0x6c;
            uStack_d0 = 0x61;
            uStack_cf = 0x79;
            uStack_ce = 0x65;
            uStack_cd = 0x72;
            uStack_cc = 0;
            uVar15 = 0x6e;
            pbVar3 = pbVar8;
            do {
              local_100[0] = local_100[0] * 0x89 ^ uVar15;
              uVar15 = (uint)*pbVar3;
              pbVar3 = pbVar3 + 1;
            } while (uVar15 != 0);
            uVar15 = 4;
            local_100[1] = 0x2c;
          }
          else {
            local_f8 = 0x726970735f6d616e;
            local_f0 = 0x5f737469;
            uStack_ec = 0x6968;
            uStack_ea = 0x746e;
            uStack_e8 = 0x725f;
            uStack_e6 = 0x6c75;
            uStack_e4 = 0x5f65;
            uStack_e2 = 0x7262;
            uStack_e0 = 0x776f;
            uStack_de = 0x61;
            uStack_dd = 0x77;
            uStack_dc = 0x61;
            uStack_db = 0x79;
            uStack_da = 0x75;
            uStack_d9 = 0x70;
            uStack_d8 = 0x5f;
            if (*(char *)(lVar11 + 8) == '\0') {
              if (*(char *)(lVar11 + 10) == '\0') {
                uStack_d7 = 100;
                local_d6 = 0x6f;
                uStack_d5 = 0x77;
                uStack_d4 = 0x6e;
                uStack_d3 = 0x5f;
                uStack_d2 = 0x65;
                uStack_d1 = 0x6e;
                uStack_d0 = 0x65;
                uStack_cf = 0x6d;
                uStack_ce = 0x79;
                uVar15 = 0x6e;
                uStack_cd = 0;
                local_100[1] = 0x2b;
                pbVar3 = pbVar8;
                do {
                  local_100[0] = local_100[0] * 0x89 ^ uVar15;
                  uVar15 = (uint)*pbVar3;
                  pbVar3 = pbVar3 + 1;
                } while (uVar15 != 0);
              }
              else {
                uVar15 = 0x6e;
                uStack_d7 = 0x75;
                local_d6 = 0x70;
                uStack_d5 = 0x5f;
                uStack_d4 = 0x65;
                uStack_d3 = 0x6e;
                uStack_d2 = 0x65;
                uStack_d1 = 0x6d;
                uStack_d0 = 0x79;
                uStack_cf = 0;
                local_100[1] = 0x29;
                pbVar3 = pbVar8;
                do {
                  local_100[0] = local_100[0] * 0x89 ^ uVar15;
                  uVar15 = (uint)*pbVar3;
                  pbVar3 = pbVar3 + 1;
                } while (uVar15 != 0);
              }
            }
            else {
              if (*(char *)(lVar11 + 10) != '\0') {
                uVar15 = 0x6e;
                uStack_d7 = 0x75;
                local_d6 = 0x70;
                uStack_d5 = 0x5f;
                uStack_d4 = 0x61;
                uStack_d3 = 0x6c;
                uStack_d2 = 0x6c;
                uStack_d1 = 0;
                local_100[1] = 0x27;
                pbVar3 = pbVar8;
                do {
                  local_100[0] = local_100[0] * 0x89 ^ uVar15;
                  uVar15 = (uint)*pbVar3;
                  pbVar3 = pbVar3 + 1;
                } while (uVar15 != 0);
LAB_71025bd03c:
                uStack_d3 = 0x6c;
                uStack_d5 = 0x5f;
                local_d6 = 0x70;
                uStack_d7 = 0x75;
                uVar15 = 2;
                goto LAB_71025bd150;
              }
              uVar15 = 0x6e;
              uStack_d7 = 100;
              local_d6 = 0x6f;
              uStack_d5 = 0x77;
              uStack_d4 = 0x6e;
              uStack_d3 = 0x5f;
              uStack_d2 = 0x61;
              uStack_d1 = 0x6c;
              uStack_d0 = 0x6c;
              uStack_cf = 0;
              local_100[1] = 0x29;
              pbVar3 = pbVar8;
              do {
                local_100[0] = local_100[0] * 0x89 ^ uVar15;
                uVar15 = (uint)*pbVar3;
                pbVar3 = pbVar3 + 1;
              } while (uVar15 != 0);
            }
            uVar15 = 3;
          }
LAB_71025bd150:
          uStack_d9 = 0x70;
          uStack_da = 0x75;
          uStack_db = 0x79;
          uStack_dc = 0x61;
          uStack_dd = 0x77;
          uStack_de = 0x61;
          uStack_e0 = 0x776f;
          uStack_e2 = 0x7262;
          uStack_e4 = 0x5f65;
          uStack_e6 = 0x6c75;
          uStack_ea = 0x746e;
          uStack_ec = 0x6968;
          local_f0 = 0x5f737469;
          uStack_d8 = 0x5f;
          uStack_e8 = 0x725f;
          local_f8 = 0x726970735f6d616e;
          cVar13 = 'n';
          local_70 = uVar15;
        }
LAB_71025bd158:
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar4);
    }
    if (local_100 != param_1) {
      uVar12 = 0;
      while (cVar13 != '\0') {
        *(char *)((long)param_1 + uVar12 + 8) = cVar13;
        if (0x3e < (int)uVar12 + 1U) {
          uVar12 = (ulong)((int)uVar12 + 1);
          break;
        }
        cVar13 = *(char *)((long)&local_f8 + uVar12 + 1);
        if (cVar13 == '\0') {
          uVar12 = uVar12 + 1;
          break;
        }
        *(char *)((long)param_1 + uVar12 + 9) = cVar13;
        lVar10 = uVar12 + 2;
        uVar12 = uVar12 + 2;
        cVar13 = *(char *)((long)&local_f8 + lVar10);
      }
      *(undefined1 *)((long)param_1 + (uVar12 & 0xffffffff) + 8) = 0;
      param_1[1] = (uint)uVar12;
      uVar4 = (uint)(byte)param_1[2];
      if ((byte)param_1[2] != 0) {
        pbVar8 = (byte *)((long)param_1 + 9);
        do {
          uVar9 = uVar9 * 0x89 ^ uVar4;
          uVar4 = (uint)*pbVar8;
          pbVar8 = pbVar8 + 1;
        } while (uVar4 != 0);
      }
      *param_1 = uVar9;
      *(undefined1 *)(param_1 + 0x14) = 0;
      param_1[0x12] = 0x811c9dc5;
      param_1[0x13] = 0;
    }
    param_1[0x24] = uVar15;
    return;
  case 0x21:
    uVar15 = 8;
    local_f8 = (ulong)local_f8._1_7_ << 8;
    local_100[0] = 0;
    local_100[1] = 0;
    local_b0[0] = '\0';
    local_b8 = 0;
    uVar4 = 0x811c9dc5;
    local_70 = 8;
    lVar10 = *(long *)(*DAT_7105329fa0 + 0x508);
    cVar13 = '\0';
    uVar12 = *(long *)(*DAT_7105329fa0 + 0x510) - lVar10 >> 4;
    uVar9 = (uint)uVar12;
    if (uVar9 != 0) {
      uVar6 = 0;
      pbVar8 = (byte *)((long)&local_f8 + 1);
      uVar15 = 8;
      do {
        uVar14 = (ulong)uVar6;
        if (uVar12 <= uVar14) goto LAB_71025c1ba0;
        if (((*(ulong *)(lVar10 + uVar14 * 0x10) ^ param_3) & 0xffffffffff) == 0) {
          lVar11 = lVar10 + uVar14 * 0x10;
          cVar2 = *(char *)(lVar11 + 8);
          local_100[0] = uVar4;
          if (*(char *)(lVar11 + 9) == '\0') {
            if (cVar2 != '\0') {
              uVar15 = 0x6e;
              local_f8 = 0x726970735f6d616e;
              local_f0 = 0x5f737469;
              uStack_ec = 0x6968;
              uStack_ea = 0x746e;
              uStack_e8 = 0x725f;
              uStack_e6 = 0x6c75;
              uStack_e4 = 0x5f65;
              uStack_e2 = 0x6162;
              uStack_e0 = 0x6c6c;
              uStack_de = 0x6f;
              uStack_dd = 0x6f;
              uStack_dc = 0x6e;
              uStack_db = 0x5f;
              uStack_da = 0x70;
              uStack_d9 = 0x6c;
              uStack_d8 = 0x61;
              uStack_d7 = 0x79;
              local_d6 = 0x65;
              uStack_d5 = 0x72;
              uStack_d4 = 0;
              local_100[1] = 0x24;
              pbVar3 = pbVar8;
              do {
                local_100[0] = local_100[0] * 0x89 ^ uVar15;
                uVar15 = (uint)*pbVar3;
                pbVar3 = pbVar3 + 1;
              } while (uVar15 != 0);
              goto LAB_71025be1c8;
            }
          }
          else {
            local_f8 = 0x726970735f6d616e;
            local_f0 = 0x5f737469;
            uStack_ec = 0x6968;
            uStack_ea = 0x746e;
            uStack_e8 = 0x725f;
            uStack_e6 = 0x6c75;
            uStack_e4 = 0x5f65;
            uStack_e2 = 0x6162;
            uStack_e0 = 0x6c6c;
            uStack_de = 0x6f;
            uStack_dd = 0x6f;
            uStack_dc = 0x6e;
            if (cVar2 == '\0') {
              uVar15 = 0x6e;
              uStack_db = 0x5f;
              uStack_da = 0x65;
              uStack_d9 = 0x6e;
              uStack_d8 = 0x65;
              uStack_d7 = 0x6d;
              local_d6 = 0x79;
              uStack_d5 = 0;
              pbVar3 = pbVar8;
              do {
                local_100[0] = local_100[0] * 0x89 ^ uVar15;
                uVar15 = (uint)*pbVar3;
                pbVar3 = pbVar3 + 1;
              } while (uVar15 != 0);
              local_100[1] = 0x23;
              uVar15 = 4;
            }
            else {
              uVar15 = 0x6e;
              uStack_db = 0;
              local_100[1] = 0x1d;
              pbVar3 = pbVar8;
              do {
                local_100[0] = local_100[0] * 0x89 ^ uVar15;
                uVar15 = (uint)*pbVar3;
                pbVar3 = pbVar3 + 1;
              } while (uVar15 != 0);
LAB_71025be1c8:
              uVar15 = 2;
            }
            uStack_dc = 0x6e;
            uStack_dd = 0x6f;
            uStack_de = 0x6f;
            uStack_e0 = 0x6c6c;
            uStack_e2 = 0x6162;
            uStack_e4 = 0x5f65;
            uStack_e6 = 0x6c75;
            uStack_ea = 0x746e;
            uStack_ec = 0x6968;
            local_f0 = 0x5f737469;
            uStack_e8 = 0x725f;
            local_f8 = 0x726970735f6d616e;
            local_70 = uVar15;
            cVar13 = 'n';
          }
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar9);
    }
    if (local_100 != param_1) {
      uVar12 = 0;
      while (cVar13 != '\0') {
        *(char *)((long)param_1 + uVar12 + 8) = cVar13;
        if (0x3e < (int)uVar12 + 1U) {
          uVar12 = (ulong)((int)uVar12 + 1);
          break;
        }
        cVar13 = *(char *)((long)&local_f8 + uVar12 + 1);
        if (cVar13 == '\0') {
          uVar12 = uVar12 + 1;
          break;
        }
        *(char *)((long)param_1 + uVar12 + 9) = cVar13;
        lVar10 = uVar12 + 2;
        uVar12 = uVar12 + 2;
        cVar13 = *(char *)((long)&local_f8 + lVar10);
      }
      *(undefined1 *)((long)param_1 + (uVar12 & 0xffffffff) + 8) = 0;
      param_1[1] = (uint)uVar12;
      uVar6 = (uint)(byte)param_1[2];
      uVar9 = 0x811c9dc5;
      if ((byte)param_1[2] != 0) {
        pbVar8 = (byte *)((long)param_1 + 9);
        uVar9 = uVar4;
        do {
          uVar9 = uVar9 * 0x89 ^ uVar6;
          uVar6 = (uint)*pbVar8;
          pbVar8 = pbVar8 + 1;
        } while (uVar6 != 0);
      }
      goto LAB_71025c184c;
    }
    break;
  case 0x22:
    local_70 = 8;
    local_f8 = 0x726970735f6d616e;
    local_f0 = 0x5f737469;
    uStack_ec = 0x6968;
    local_b0[0] = '\0';
    uStack_ea = 0x746e;
    uStack_e8 = 0x725f;
    uStack_e6 = 0x6c75;
    uStack_e4 = 0x5f65;
    uStack_e2 = 0x6c73;
    uStack_e0 = 0x7069;
    uStack_de = 0x70;
    uStack_dd = 0x65;
    lVar10 = 9;
    uStack_dc = 0x72;
    uStack_db = 0x79;
    local_b8 = 0;
    uStack_da = 0;
    do {
      pcVar5 = (char *)((long)local_100 + lVar10);
      lVar10 = lVar10 + 1;
    } while (*pcVar5 != '\0');
    uVar15 = 4;
    local_70 = 4;
    if (local_100 != param_1) {
      uVar12 = 0;
      cVar13 = 'n';
      do {
        *(char *)((long)param_1 + uVar12 + 8) = cVar13;
        if (0x3e < (int)uVar12 + 1U) {
          uVar12 = (ulong)((int)uVar12 + 1);
          break;
        }
        cVar13 = *(char *)((long)&local_f8 + uVar12 + 1);
        if (cVar13 == '\0') {
          uVar12 = uVar12 + 1;
          break;
        }
        *(char *)((long)param_1 + uVar12 + 9) = cVar13;
        cVar13 = *(char *)((long)&local_f8 + uVar12 + 2);
        uVar12 = uVar12 + 2;
      } while (cVar13 != '\0');
      *(undefined1 *)((long)param_1 + (uVar12 & 0xffffffff) + 8) = 0;
      param_1[1] = (uint)uVar12;
      uVar4 = (uint)(byte)param_1[2];
      uVar9 = 0x811c9dc5;
      if ((byte)param_1[2] != 0) {
        pbVar8 = (byte *)((long)param_1 + 9);
        uVar9 = 0x811c9dc5;
        do {
          uVar9 = uVar9 * 0x89 ^ uVar4;
          uVar4 = (uint)*pbVar8;
          pbVar8 = pbVar8 + 1;
        } while (uVar4 != 0);
      }
      goto LAB_71025c15e8;
    }
    break;
  case 0x23:
    local_70 = 8;
    local_f8 = 0x726970735f6d616e;
    local_f0 = 0x5f737469;
    uStack_ec = 0x6968;
    local_b0[0] = '\0';
    uStack_ea = 0x746e;
    uStack_e8 = 0x725f;
    uStack_e6 = 0x6c75;
    uStack_e4 = 0x5f65;
    uStack_e2 = 0x6d73;
    uStack_e0 = 0x7361;
    uStack_de = 0x68;
    uStack_dd = 0x5f;
    uStack_dc = 0x61;
    uStack_db = 0x74;
    uStack_da = 0x74;
    uStack_d9 = 0x61;
    uStack_d8 = 99;
    uStack_d7 = 0x6b;
    local_d6 = 0x5f;
    uStack_d5 = 0x75;
    lVar10 = 9;
    uStack_d4 = 0x70;
    uStack_d3 = 0;
    local_b8 = 0;
    do {
      pcVar5 = (char *)((long)local_100 + lVar10);
      lVar10 = lVar10 + 1;
    } while (*pcVar5 != '\0');
    uVar15 = 3;
    local_70 = 3;
    if (local_100 != param_1) {
      uVar12 = 0;
      cVar13 = 'n';
      do {
        *(char *)((long)param_1 + uVar12 + 8) = cVar13;
        if (0x3e < (int)uVar12 + 1U) {
          uVar12 = (ulong)((int)uVar12 + 1);
          break;
        }
        cVar13 = *(char *)((long)&local_f8 + uVar12 + 1);
        if (cVar13 == '\0') {
          uVar12 = uVar12 + 1;
          break;
        }
        *(char *)((long)param_1 + uVar12 + 9) = cVar13;
        cVar13 = *(char *)((long)&local_f8 + uVar12 + 2);
        uVar12 = uVar12 + 2;
      } while (cVar13 != '\0');
      *(undefined1 *)((long)param_1 + (uVar12 & 0xffffffff) + 8) = 0;
      param_1[1] = (uint)uVar12;
      uVar4 = (uint)(byte)param_1[2];
      uVar9 = 0x811c9dc5;
      if ((byte)param_1[2] != 0) {
        pbVar8 = (byte *)((long)param_1 + 9);
        uVar9 = 0x811c9dc5;
        do {
          uVar9 = uVar9 * 0x89 ^ uVar4;
          uVar4 = (uint)*pbVar8;
          pbVar8 = pbVar8 + 1;
        } while (uVar4 != 0);
      }
      goto LAB_71025c15e8;
    }
    break;
  case 0x24:
    uVar15 = 8;
    local_f8 = (ulong)local_f8._1_7_ << 8;
    local_100[0] = 0;
    local_100[1] = 0;
    local_b0[0] = '\0';
    local_b8 = 0;
    uVar4 = 0x811c9dc5;
    local_70 = 8;
    lVar10 = *(long *)(*DAT_7105329fa0 + 0x388);
    cVar13 = '\0';
    uVar12 = *(long *)(*DAT_7105329fa0 + 0x390) - lVar10 >> 4;
    uVar9 = (uint)uVar12;
    if (uVar9 != 0) {
      uVar6 = 0;
      pbVar8 = (byte *)((long)&local_f8 + 1);
      uVar15 = 8;
      do {
        uVar14 = (ulong)uVar6;
        if (uVar12 <= uVar14) goto LAB_71025c1ba0;
        if (((*(ulong *)(lVar10 + uVar14 * 0x10) ^ param_3) & 0xffffffffff) == 0) {
          lVar11 = lVar10 + uVar14 * 0x10;
          cVar2 = *(char *)(lVar11 + 8);
          local_100[0] = uVar4;
          if (*(char *)(lVar11 + 9) == '\0') {
            if (cVar2 != '\0') {
              uVar15 = 0x6e;
              local_f8 = 0x726970735f6d616e;
              local_f0 = 0x5f737469;
              uStack_ec = 0x6968;
              uStack_ea = 0x746e;
              uStack_e8 = 0x725f;
              uStack_e6 = 0x6c75;
              uStack_e4 = 0x5f65;
              uStack_e2 = 0x6f6e;
              uStack_e0 = 0x685f;
              uStack_de = 0x6f;
              uStack_dd = 0x6c;
              uStack_dc = 100;
              uStack_db = 0x5f;
              uStack_da = 0x70;
              uStack_d9 = 0x6c;
              uStack_d8 = 0x61;
              uStack_d7 = 0x79;
              local_d6 = 0x65;
              uStack_d5 = 0x72;
              uStack_d4 = 0;
              local_100[1] = 0x24;
              pbVar3 = pbVar8;
              do {
                local_100[0] = local_100[0] * 0x89 ^ uVar15;
                uVar15 = (uint)*pbVar3;
                pbVar3 = pbVar3 + 1;
              } while (uVar15 != 0);
              goto LAB_71025c0438;
            }
          }
          else {
            local_f8 = 0x726970735f6d616e;
            local_f0 = 0x5f737469;
            uStack_ec = 0x6968;
            uStack_ea = 0x746e;
            uStack_e8 = 0x725f;
            uStack_e6 = 0x6c75;
            uStack_e4 = 0x5f65;
            uStack_e2 = 0x6f6e;
            uStack_e0 = 0x685f;
            uStack_de = 0x6f;
            uStack_dd = 0x6c;
            uStack_dc = 100;
            if (cVar2 == '\0') {
              uVar15 = 0x6e;
              uStack_db = 0x5f;
              uStack_da = 0x65;
              uStack_d9 = 0x6e;
              uStack_d8 = 0x65;
              uStack_d7 = 0x6d;
              local_d6 = 0x79;
              uStack_d5 = 0;
              pbVar3 = pbVar8;
              do {
                local_100[0] = local_100[0] * 0x89 ^ uVar15;
                uVar15 = (uint)*pbVar3;
                pbVar3 = pbVar3 + 1;
              } while (uVar15 != 0);
              local_100[1] = 0x23;
              uVar15 = 3;
            }
            else {
              uVar15 = 0x6e;
              uStack_db = 0;
              local_100[1] = 0x1d;
              pbVar3 = pbVar8;
              do {
                local_100[0] = local_100[0] * 0x89 ^ uVar15;
                uVar15 = (uint)*pbVar3;
                pbVar3 = pbVar3 + 1;
              } while (uVar15 != 0);
LAB_71025c0438:
              uVar15 = 2;
            }
            uStack_dc = 100;
            uStack_dd = 0x6c;
            uStack_de = 0x6f;
            uStack_e0 = 0x685f;
            uStack_e2 = 0x6f6e;
            uStack_e4 = 0x5f65;
            uStack_e6 = 0x6c75;
            uStack_ea = 0x746e;
            uStack_ec = 0x6968;
            local_f0 = 0x5f737469;
            uStack_e8 = 0x725f;
            local_f8 = 0x726970735f6d616e;
            cVar13 = 'n';
            local_70 = uVar15;
          }
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar9);
    }
    if (local_100 != param_1) {
      uVar12 = 0;
      while (cVar13 != '\0') {
        *(char *)((long)param_1 + uVar12 + 8) = cVar13;
        if (0x3e < (int)uVar12 + 1U) {
          uVar12 = (ulong)((int)uVar12 + 1);
          break;
        }
        cVar13 = *(char *)((long)&local_f8 + uVar12 + 1);
        if (cVar13 == '\0') {
          uVar12 = uVar12 + 1;
          break;
        }
        *(char *)((long)param_1 + uVar12 + 9) = cVar13;
        lVar10 = uVar12 + 2;
        uVar12 = uVar12 + 2;
        cVar13 = *(char *)((long)&local_f8 + lVar10);
      }
      *(undefined1 *)((long)param_1 + (uVar12 & 0xffffffff) + 8) = 0;
      param_1[1] = (uint)uVar12;
      uVar6 = (uint)(byte)param_1[2];
      uVar9 = 0x811c9dc5;
      if ((byte)param_1[2] != 0) {
        pbVar8 = (byte *)((long)param_1 + 9);
        uVar9 = uVar4;
        do {
          uVar9 = uVar9 * 0x89 ^ uVar6;
          uVar6 = (uint)*pbVar8;
          pbVar8 = pbVar8 + 1;
        } while (uVar6 != 0);
      }
      goto LAB_71025c184c;
    }
    break;
  case 0x25:
    local_70 = 8;
    local_f8 = 0x726970735f6d616e;
    local_f0 = 0x5f737469;
    uStack_ec = 0x6968;
    uStack_ea = 0x746e;
    uStack_e8 = 0x725f;
    uStack_e6 = 0x6c75;
    uStack_e4 = 0x5f65;
    uStack_d8 = 0x67;
    uStack_d7 = 0x65;
    uStack_e2 = 0x6e75;
    uStack_e0 = 0x7469;
    uStack_de = 0x79;
    uStack_dd = 0x5f;
    uStack_dc = 100;
    uStack_db = 0x61;
    uStack_da = 0x6d;
    uStack_d9 = 0x61;
    lVar10 = 9;
    local_b0[0] = '\0';
    local_b8 = 0;
    local_d6 = 0;
    do {
      pcVar5 = (char *)((long)local_100 + lVar10);
      lVar10 = lVar10 + 1;
    } while (*pcVar5 != '\0');
    uVar15 = 3;
    local_70 = 3;
    if (local_100 != param_1) {
      uVar12 = 0;
      cVar13 = 'n';
      do {
        *(char *)((long)param_1 + uVar12 + 8) = cVar13;
        if (0x3e < (int)uVar12 + 1U) {
          uVar12 = (ulong)((int)uVar12 + 1);
          break;
        }
        cVar13 = *(char *)((long)&local_f8 + uVar12 + 1);
        if (cVar13 == '\0') {
          uVar12 = uVar12 + 1;
          break;
        }
        *(char *)((long)param_1 + uVar12 + 9) = cVar13;
        cVar13 = *(char *)((long)&local_f8 + uVar12 + 2);
        uVar12 = uVar12 + 2;
      } while (cVar13 != '\0');
      *(undefined1 *)((long)param_1 + (uVar12 & 0xffffffff) + 8) = 0;
      param_1[1] = (uint)uVar12;
      uVar4 = (uint)(byte)param_1[2];
      uVar9 = 0x811c9dc5;
      if ((byte)param_1[2] != 0) {
        pbVar8 = (byte *)((long)param_1 + 9);
        uVar9 = 0x811c9dc5;
        do {
          uVar9 = uVar9 * 0x89 ^ uVar4;
          uVar4 = (uint)*pbVar8;
          pbVar8 = pbVar8 + 1;
        } while (uVar4 != 0);
      }
      goto LAB_71025c15e8;
    }
    break;
  case 0x26:
    local_70 = 8;
    local_f8 = 0x726970735f6d616e;
    local_f0 = 0x5f737469;
    uStack_ec = 0x6968;
    local_b0[0] = '\0';
    uStack_ea = 0x746e;
    uStack_e8 = 0x725f;
    uStack_e6 = 0x6c75;
    uStack_e4 = 0x5f65;
    uStack_e2 = 0x6568;
    uStack_e0 = 0x6c61;
    uStack_de = 0x5f;
    uStack_dd = 0x73;
    uStack_dc = 0x65;
    uStack_db = 0x61;
    uStack_da = 0x6c;
    uStack_d9 = 0;
    lVar10 = 9;
    local_b8 = 0;
    do {
      pcVar5 = (char *)((long)local_100 + lVar10);
      lVar10 = lVar10 + 1;
    } while (*pcVar5 != '\0');
    uVar15 = 2;
    local_70 = 2;
    if (local_100 != param_1) {
      uVar12 = 0;
      cVar13 = 'n';
      do {
        *(char *)((long)param_1 + uVar12 + 8) = cVar13;
        if (0x3e < (int)uVar12 + 1U) {
          uVar12 = (ulong)((int)uVar12 + 1);
          break;
        }
        cVar13 = *(char *)((long)&local_f8 + uVar12 + 1);
        if (cVar13 == '\0') {
          uVar12 = uVar12 + 1;
          break;
        }
        *(char *)((long)param_1 + uVar12 + 9) = cVar13;
        cVar13 = *(char *)((long)&local_f8 + uVar12 + 2);
        uVar12 = uVar12 + 2;
      } while (cVar13 != '\0');
      *(undefined1 *)((long)param_1 + (uVar12 & 0xffffffff) + 8) = 0;
      param_1[1] = (uint)uVar12;
      uVar4 = (uint)(byte)param_1[2];
      uVar9 = 0x811c9dc5;
      if ((byte)param_1[2] != 0) {
        pbVar8 = (byte *)((long)param_1 + 9);
        uVar9 = 0x811c9dc5;
        do {
          uVar9 = uVar9 * 0x89 ^ uVar4;
          uVar4 = (uint)*pbVar8;
          pbVar8 = pbVar8 + 1;
        } while (uVar4 != 0);
      }
      goto LAB_71025c15e8;
    }
    break;
  case 0x27:
    local_70 = 8;
    local_f8 = 0x726970735f6d616e;
    local_f0 = 0x5f737469;
    uStack_ec = 0x6968;
    local_b0[0] = '\0';
    uStack_ea = 0x746e;
    uStack_e8 = 0x725f;
    uStack_e6 = 0x6c75;
    uStack_e4 = 0x5f65;
    uStack_e2 = 0x6c65;
    uStack_e0 = 0x6365;
    uStack_de = 0x74;
    uStack_dd = 0x72;
    uStack_dc = 0x69;
    uStack_db = 99;
    uStack_da = 0x5f;
    uStack_d9 = 0x75;
    lVar10 = 9;
    uStack_d8 = 0x70;
    uStack_d7 = 0;
    local_b8 = 0;
    do {
      pcVar5 = (char *)((long)local_100 + lVar10);
      lVar10 = lVar10 + 1;
    } while (*pcVar5 != '\0');
    uVar15 = 4;
    local_70 = 4;
    if (local_100 != param_1) {
      uVar12 = 0;
      cVar13 = 'n';
      do {
        *(char *)((long)param_1 + uVar12 + 8) = cVar13;
        if (0x3e < (int)uVar12 + 1U) {
          uVar12 = (ulong)((int)uVar12 + 1);
          break;
        }
        cVar13 = *(char *)((long)&local_f8 + uVar12 + 1);
        if (cVar13 == '\0') {
          uVar12 = uVar12 + 1;
          break;
        }
        *(char *)((long)param_1 + uVar12 + 9) = cVar13;
        cVar13 = *(char *)((long)&local_f8 + uVar12 + 2);
        uVar12 = uVar12 + 2;
      } while (cVar13 != '\0');
      *(undefined1 *)((long)param_1 + (uVar12 & 0xffffffff) + 8) = 0;
      param_1[1] = (uint)uVar12;
      uVar4 = (uint)(byte)param_1[2];
      uVar9 = 0x811c9dc5;
      if ((byte)param_1[2] != 0) {
        pbVar8 = (byte *)((long)param_1 + 9);
        uVar9 = 0x811c9dc5;
        do {
          uVar9 = uVar9 * 0x89 ^ uVar4;
          uVar4 = (uint)*pbVar8;
          pbVar8 = pbVar8 + 1;
        } while (uVar4 != 0);
      }
      goto LAB_71025c15e8;
    }
    break;
  case 0x28:
    local_70 = 8;
    local_f8 = (ulong)local_f8._1_7_ << 8;
    local_100[0] = 0;
    local_100[1] = 0;
    local_b0[0] = '\0';
    local_b8 = 0;
    lVar10 = *(long *)(*DAT_7105329fa0 + 0x5b0);
    uVar12 = *(long *)(*DAT_7105329fa0 + 0x5b8) - lVar10 >> 4;
    uVar9 = (uint)uVar12;
    if (uVar9 != 0) {
      uVar15 = 0;
      do {
        uVar14 = (ulong)uVar15;
        if (uVar12 <= uVar14) goto LAB_71025c1ba0;
        if (((*(ulong *)(lVar10 + uVar14 * 0x10) ^ param_3) & 0xffffffffff) == 0) {
          lVar11 = lVar10 + uVar14 * 0x10;
          cVar13 = *(char *)(lVar11 + 9);
          if (*(char *)(lVar11 + 8) == '\0') {
            pcVar5 = "nam_spirits_hint_rule_reflect_damage_up_enemy";
            if (cVar13 == '\0') goto LAB_71025bc1d8;
          }
          else {
            pcVar5 = "nam_spirits_hint_rule_reflect_damage_up_player";
            if (cVar13 != '\0') {
              pcVar5 = "nam_spirits_hint_rule_reflect_damage_up_all";
            }
          }
          uVar12 = 0;
          goto LAB_71025c18ac;
        }
LAB_71025bc1d8:
        uVar15 = uVar15 + 1;
      } while (uVar15 < uVar9);
    }
    uVar12 = 0;
LAB_71025bc1e8:
    uVar9 = 0x811c9dc5;
    *(undefined1 *)((long)&local_f8 + (uVar12 & 0xffffffff)) = 0;
    if ((char)local_f8 != '\0') {
      pcVar5 = (char *)((long)&local_f8 + 1);
      do {
        cVar13 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar13 != '\0');
    }
    uVar15 = 4;
    local_70 = 4;
    if (local_100 == param_1) goto LAB_71025c16b8;
    uVar12 = 0;
    while ((char)local_f8 != '\0') {
      *(char *)((long)param_1 + uVar12 + 8) = (char)local_f8;
      if (0x3e < (int)uVar12 + 1U) {
        uVar12 = (ulong)((int)uVar12 + 1);
        break;
      }
      cVar13 = *(char *)((long)&local_f8 + uVar12 + 1);
      if (cVar13 == '\0') {
        uVar12 = uVar12 + 1;
        break;
      }
      *(char *)((long)param_1 + uVar12 + 9) = cVar13;
      lVar10 = uVar12 + 2;
      uVar12 = uVar12 + 2;
      local_f8._0_1_ = *(char *)((long)&local_f8 + lVar10);
    }
    *(undefined1 *)((long)param_1 + (uVar12 & 0xffffffff) + 8) = 0;
    uVar6 = (uint)(byte)param_1[2];
    param_1[1] = (uint)uVar12;
    uVar4 = uVar9;
    if ((byte)param_1[2] != 0) {
      pbVar8 = (byte *)((long)param_1 + 9);
      do {
        uVar4 = uVar4 * 0x89 ^ uVar6;
        uVar6 = (uint)*pbVar8;
        pbVar8 = pbVar8 + 1;
      } while (uVar6 != 0);
    }
    *param_1 = uVar4;
    for (uVar12 = 0; local_b0[uVar12] != '\0'; uVar12 = uVar12 + 2) {
      *(char *)((long)param_1 + uVar12 + 0x50) = local_b0[uVar12];
      if (0x3e < (int)uVar12 + 1U) {
        uVar12 = (ulong)((int)uVar12 + 1);
        break;
      }
      if (local_b0[uVar12 + 1] == '\0') {
        uVar12 = uVar12 + 1;
        break;
      }
      *(char *)((long)param_1 + uVar12 + 0x51) = local_b0[uVar12 + 1];
    }
    *(undefined1 *)((long)param_1 + (uVar12 & 0xffffffff) + 0x50) = 0;
    uVar4 = (uint)(byte)param_1[0x14];
    param_1[0x13] = (uint)uVar12;
    if ((byte)param_1[0x14] != 0) {
      pbVar8 = (byte *)((long)param_1 + 0x51);
      do {
        uVar9 = uVar9 * 0x89 ^ uVar4;
        uVar4 = (uint)*pbVar8;
        pbVar8 = pbVar8 + 1;
      } while (uVar4 != 0);
    }
LAB_71025c16b4:
    param_1[0x12] = uVar9;
LAB_71025c16b8:
    param_1[0x24] = uVar15;
    return;
  case 0x29:
    local_70 = 8;
    local_f8 = 0x726970735f6d616e;
    local_f0 = 0x5f737469;
    uStack_ec = 0x6968;
    local_b0[0] = '\0';
    uStack_ea = 0x746e;
    uStack_e8 = 0x725f;
    uStack_e6 = 0x6c75;
    uStack_e4 = 0x5f65;
    uStack_e2 = 0x756a;
    uStack_e0 = 0x706d;
    uStack_de = 0x5f;
    uStack_dd = 0x73;
    uStack_dc = 0x65;
    uStack_db = 0x61;
    uStack_da = 0x6c;
    uStack_d9 = 0;
    lVar10 = 9;
    local_b8 = 0;
    do {
      pcVar5 = (char *)((long)local_100 + lVar10);
      lVar10 = lVar10 + 1;
    } while (*pcVar5 != '\0');
    uVar15 = 2;
    local_70 = 2;
    if (local_100 != param_1) {
      uVar12 = 0;
      cVar13 = 'n';
      do {
        *(char *)((long)param_1 + uVar12 + 8) = cVar13;
        if (0x3e < (int)uVar12 + 1U) {
          uVar12 = (ulong)((int)uVar12 + 1);
          break;
        }
        cVar13 = *(char *)((long)&local_f8 + uVar12 + 1);
        if (cVar13 == '\0') {
          uVar12 = uVar12 + 1;
          break;
        }
        *(char *)((long)param_1 + uVar12 + 9) = cVar13;
        cVar13 = *(char *)((long)&local_f8 + uVar12 + 2);
        uVar12 = uVar12 + 2;
      } while (cVar13 != '\0');
      *(undefined1 *)((long)param_1 + (uVar12 & 0xffffffff) + 8) = 0;
      param_1[1] = (uint)uVar12;
      uVar4 = (uint)(byte)param_1[2];
      uVar9 = 0x811c9dc5;
      if ((byte)param_1[2] != 0) {
        pbVar8 = (byte *)((long)param_1 + 9);
        uVar9 = 0x811c9dc5;
        do {
          uVar9 = uVar9 * 0x89 ^ uVar4;
          uVar4 = (uint)*pbVar8;
          pbVar8 = pbVar8 + 1;
        } while (uVar4 != 0);
      }
      goto LAB_71025c15e8;
    }
    break;
  case 0x2a:
    local_70 = 8;
    local_f8 = 0x726970735f6d616e;
    local_f0 = 0x5f737469;
    uStack_ec = 0x6968;
    local_b0[0] = '\0';
    uStack_ea = 0x746e;
    uStack_e8 = 0x725f;
    uStack_e6 = 0x6c75;
    uStack_e4 = 0x5f65;
    uStack_e2 = 0x6f6e;
    uStack_e0 = 0x6d72;
    uStack_de = 0x61;
    uStack_dd = 0x6c;
    uStack_dc = 0x5f;
    uStack_db = 0x73;
    uStack_da = 0x65;
    uStack_d9 = 0x61;
    lVar10 = 9;
    uStack_d8 = 0x6c;
    uStack_d7 = 0;
    local_b8 = 0;
    do {
      pcVar5 = (char *)((long)local_100 + lVar10);
      lVar10 = lVar10 + 1;
    } while (*pcVar5 != '\0');
    uVar15 = 2;
    local_70 = 2;
    if (local_100 != param_1) {
      uVar12 = 0;
      cVar13 = 'n';
      do {
        *(char *)((long)param_1 + uVar12 + 8) = cVar13;
        if (0x3e < (int)uVar12 + 1U) {
          uVar12 = (ulong)((int)uVar12 + 1);
          break;
        }
        cVar13 = *(char *)((long)&local_f8 + uVar12 + 1);
        if (cVar13 == '\0') {
          uVar12 = uVar12 + 1;
          break;
        }
        *(char *)((long)param_1 + uVar12 + 9) = cVar13;
        cVar13 = *(char *)((long)&local_f8 + uVar12 + 2);
        uVar12 = uVar12 + 2;
      } while (cVar13 != '\0');
      *(undefined1 *)((long)param_1 + (uVar12 & 0xffffffff) + 8) = 0;
      param_1[1] = (uint)uVar12;
      uVar4 = (uint)(byte)param_1[2];
      uVar9 = 0x811c9dc5;
      if ((byte)param_1[2] != 0) {
        pbVar8 = (byte *)((long)param_1 + 9);
        uVar9 = 0x811c9dc5;
        do {
          uVar9 = uVar9 * 0x89 ^ uVar4;
          uVar4 = (uint)*pbVar8;
          pbVar8 = pbVar8 + 1;
        } while (uVar4 != 0);
      }
      goto LAB_71025c15e8;
    }
    break;
  case 0x2b:
    local_70 = 8;
    local_f8 = 0x726970735f6d616e;
    local_f0 = 0x5f737469;
    uStack_ec = 0x6968;
    uStack_ea = 0x746e;
    uStack_e8 = 0x725f;
    uStack_e6 = 0x6c75;
    uStack_e4 = 0x5f65;
    uStack_d8 = 0x61;
    uStack_d7 = 0x6c;
    uStack_e2 = 0x7073;
    uStack_e0 = 27999;
    uStack_de = 0x6f;
    uStack_dd = 0x76;
    uStack_dc = 0x65;
    uStack_db = 0x5f;
    uStack_da = 0x73;
    uStack_d9 = 0x65;
    lVar10 = 9;
    local_b0[0] = '\0';
    local_b8 = 0;
    local_d6 = 0;
    do {
      pcVar5 = (char *)((long)local_100 + lVar10);
      lVar10 = lVar10 + 1;
    } while (*pcVar5 != '\0');
    uVar15 = 2;
    local_70 = 2;
    if (local_100 != param_1) {
      uVar12 = 0;
      cVar13 = 'n';
      do {
        *(char *)((long)param_1 + uVar12 + 8) = cVar13;
        if (0x3e < (int)uVar12 + 1U) {
          uVar12 = (ulong)((int)uVar12 + 1);
          break;
        }
        cVar13 = *(char *)((long)&local_f8 + uVar12 + 1);
        if (cVar13 == '\0') {
          uVar12 = uVar12 + 1;
          break;
        }
        *(char *)((long)param_1 + uVar12 + 9) = cVar13;
        cVar13 = *(char *)((long)&local_f8 + uVar12 + 2);
        uVar12 = uVar12 + 2;
      } while (cVar13 != '\0');
      *(undefined1 *)((long)param_1 + (uVar12 & 0xffffffff) + 8) = 0;
      param_1[1] = (uint)uVar12;
      uVar4 = (uint)(byte)param_1[2];
      uVar9 = 0x811c9dc5;
      if ((byte)param_1[2] != 0) {
        pbVar8 = (byte *)((long)param_1 + 9);
        uVar9 = 0x811c9dc5;
        do {
          uVar9 = uVar9 * 0x89 ^ uVar4;
          uVar4 = (uint)*pbVar8;
          pbVar8 = pbVar8 + 1;
        } while (uVar4 != 0);
      }
      goto LAB_71025c15e8;
    }
    break;
  case 0x2c:
    local_70 = 8;
    local_f8 = 0x726970735f6d616e;
    local_f0 = 0x5f737469;
    uStack_ec = 0x6968;
    local_b0[0] = '\0';
    uStack_ea = 0x746e;
    uStack_e8 = 0x725f;
    uStack_e6 = 0x6c75;
    uStack_e4 = 0x5f65;
    uStack_e2 = 0x6873;
    uStack_e0 = 0x6569;
    uStack_de = 0x6c;
    uStack_dd = 100;
    uStack_dc = 0x5f;
    uStack_db = 0x73;
    uStack_da = 0x65;
    uStack_d9 = 0x61;
    lVar10 = 9;
    uStack_d8 = 0x6c;
    uStack_d7 = 0;
    local_b8 = 0;
    do {
      pcVar5 = (char *)((long)local_100 + lVar10);
      lVar10 = lVar10 + 1;
    } while (*pcVar5 != '\0');
    uVar15 = 2;
    local_70 = 2;
    if (local_100 != param_1) {
      uVar12 = 0;
      cVar13 = 'n';
      do {
        *(char *)((long)param_1 + uVar12 + 8) = cVar13;
        if (0x3e < (int)uVar12 + 1U) {
          uVar12 = (ulong)((int)uVar12 + 1);
          break;
        }
        cVar13 = *(char *)((long)&local_f8 + uVar12 + 1);
        if (cVar13 == '\0') {
          uVar12 = uVar12 + 1;
          break;
        }
        *(char *)((long)param_1 + uVar12 + 9) = cVar13;
        cVar13 = *(char *)((long)&local_f8 + uVar12 + 2);
        uVar12 = uVar12 + 2;
      } while (cVar13 != '\0');
      *(undefined1 *)((long)param_1 + (uVar12 & 0xffffffff) + 8) = 0;
      param_1[1] = (uint)uVar12;
      uVar4 = (uint)(byte)param_1[2];
      uVar9 = 0x811c9dc5;
      if ((byte)param_1[2] != 0) {
        pbVar8 = (byte *)((long)param_1 + 9);
        uVar9 = 0x811c9dc5;
        do {
          uVar9 = uVar9 * 0x89 ^ uVar4;
          uVar4 = (uint)*pbVar8;
          pbVar8 = pbVar8 + 1;
        } while (uVar4 != 0);
      }
      goto LAB_71025c15e8;
    }
    break;
  case 0x2d:
    local_70 = 8;
    local_f8 = 0x726970735f6d616e;
    local_f0 = 0x5f737469;
    uStack_ec = 0x6968;
    uVar9 = 0x811c9dc5;
    uStack_ea = 0x746e;
    uStack_e8 = 0x725f;
    uStack_e6 = 0x6c75;
    uStack_e4 = 0x5f65;
    uStack_e2 = 0x7361;
    uStack_e0 = 0x6973;
    uStack_de = 0x73;
    uStack_dd = 0x74;
    lVar10 = 9;
    local_b0[0] = '\0';
    local_b8 = 0;
    uStack_dc = 0;
    do {
      pcVar5 = (char *)((long)local_100 + lVar10);
      lVar10 = lVar10 + 1;
    } while (*pcVar5 != '\0');
    uVar15 = 3;
    local_70 = 3;
    if (local_100 != param_1) {
      uVar12 = 0;
      cVar13 = 'n';
      do {
        *(char *)((long)param_1 + uVar12 + 8) = cVar13;
        if (0x3e < (int)uVar12 + 1U) {
          uVar12 = (ulong)((int)uVar12 + 1);
          break;
        }
        cVar13 = *(char *)((long)&local_f8 + uVar12 + 1);
        if (cVar13 == '\0') {
          uVar12 = uVar12 + 1;
          break;
        }
        *(char *)((long)param_1 + uVar12 + 9) = cVar13;
        cVar13 = *(char *)((long)&local_f8 + uVar12 + 2);
        uVar12 = uVar12 + 2;
      } while (cVar13 != '\0');
      *(undefined1 *)((long)param_1 + (uVar12 & 0xffffffff) + 8) = 0;
      param_1[1] = (uint)uVar12;
      uVar4 = (uint)(byte)param_1[2];
      if ((byte)param_1[2] != 0) {
        pbVar8 = (byte *)((long)param_1 + 9);
        do {
          uVar9 = uVar9 * 0x89 ^ uVar4;
          uVar4 = (uint)*pbVar8;
          pbVar8 = pbVar8 + 1;
        } while (uVar4 != 0);
      }
      goto LAB_71025c15e8;
    }
    break;
  case 0x2f:
    uVar15 = 8;
    local_f8 = (ulong)local_f8._1_7_ << 8;
    local_100[0] = 0;
    local_100[1] = 0;
    local_b0[0] = '\0';
    local_b8 = 0;
    uVar9 = 0x811c9dc5;
    local_70 = 8;
    lVar10 = *(long *)(*DAT_7105329fa0 + 0x658);
    cVar13 = '\0';
    uVar12 = *(long *)(*DAT_7105329fa0 + 0x660) - lVar10 >> 4;
    uVar4 = (uint)uVar12;
    if (uVar4 != 0) {
      uVar6 = 0;
      pbVar8 = (byte *)((long)&local_f8 + 1);
      uVar15 = 8;
      do {
        uVar14 = (ulong)uVar6;
        if (uVar12 <= uVar14) goto LAB_71025c1ba0;
        if (((*(ulong *)(lVar10 + uVar14 * 0x10) ^ param_3) & 0xffffffffff) == 0) {
          lVar11 = lVar10 + uVar14 * 0x10;
          cVar2 = *(char *)(lVar11 + 8);
          local_100[0] = uVar9;
          if (*(char *)(lVar11 + 9) == '\0') {
            if (cVar2 != '\0') {
              uVar15 = 0x6e;
              local_f8 = 0x726970735f6d616e;
              local_f0 = 0x5f737469;
              uStack_ec = 0x6968;
              uStack_ea = 0x746e;
              uStack_e8 = 0x725f;
              uStack_e6 = 0x6c75;
              uStack_e4 = 0x5f65;
              uStack_e2 = 0x6c73;
              uStack_e0 = 0x6565;
              uStack_de = 0x70;
              uStack_dd = 0x5f;
              uStack_dc = 0x70;
              uStack_db = 0x6c;
              uStack_da = 0x61;
              uStack_d9 = 0x79;
              uStack_d8 = 0x65;
              uStack_d7 = 0x72;
              local_d6 = 0;
              local_100[1] = 0x22;
              pbVar3 = pbVar8;
              do {
                local_100[0] = local_100[0] * 0x89 ^ uVar15;
                uVar15 = (uint)*pbVar3;
                pbVar3 = pbVar3 + 1;
              } while (uVar15 != 0);
              goto LAB_71025bffcc;
            }
          }
          else {
            local_f8 = 0x726970735f6d616e;
            local_f0 = 0x5f737469;
            uStack_ec = 0x6968;
            uStack_ea = 0x746e;
            uStack_e8 = 0x725f;
            uStack_e6 = 0x6c75;
            uStack_e4 = 0x5f65;
            uStack_e2 = 0x6c73;
            uStack_e0 = 0x6565;
            uStack_de = 0x70;
            uStack_dd = 0x5f;
            if (cVar2 == '\0') {
              uVar15 = 0x6e;
              uStack_dc = 0x65;
              uStack_db = 0x6e;
              uStack_da = 0x65;
              uStack_d9 = 0x6d;
              uStack_d8 = 0x79;
              uStack_d7 = 0;
              pbVar3 = pbVar8;
              do {
                local_100[0] = local_100[0] * 0x89 ^ uVar15;
                uVar15 = (uint)*pbVar3;
                pbVar3 = pbVar3 + 1;
              } while (uVar15 != 0);
              local_100[1] = 0x21;
              uVar15 = 4;
            }
            else {
              uVar15 = 0x6e;
              uStack_dc = 0x61;
              uStack_db = 0x6c;
              uStack_da = 0x6c;
              uStack_d9 = 0;
              local_100[1] = 0x1f;
              pbVar3 = pbVar8;
              do {
                local_100[0] = local_100[0] * 0x89 ^ uVar15;
                uVar15 = (uint)*pbVar3;
                pbVar3 = pbVar3 + 1;
              } while (uVar15 != 0);
LAB_71025bffcc:
              uStack_db = 0x6c;
              uVar15 = 3;
            }
            uStack_dd = 0x5f;
            uStack_de = 0x70;
            uStack_e0 = 0x6565;
            uStack_e2 = 0x6c73;
            uStack_e4 = 0x5f65;
            uStack_e6 = 0x6c75;
            uStack_ea = 0x746e;
            uStack_ec = 0x6968;
            local_f0 = 0x5f737469;
            uStack_e8 = 0x725f;
            local_f8 = 0x726970735f6d616e;
            cVar13 = 'n';
            local_70 = uVar15;
          }
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar4);
    }
    if (local_100 != param_1) {
      uVar12 = 0;
      while (cVar13 != '\0') {
        *(char *)((long)param_1 + uVar12 + 8) = cVar13;
        if (0x3e < (int)uVar12 + 1U) {
          uVar12 = (ulong)((int)uVar12 + 1);
          break;
        }
        cVar13 = *(char *)((long)&local_f8 + uVar12 + 1);
        if (cVar13 == '\0') {
          uVar12 = uVar12 + 1;
          break;
        }
        *(char *)((long)param_1 + uVar12 + 9) = cVar13;
        lVar10 = uVar12 + 2;
        uVar12 = uVar12 + 2;
        cVar13 = *(char *)((long)&local_f8 + lVar10);
      }
      *(undefined1 *)((long)param_1 + (uVar12 & 0xffffffff) + 8) = 0;
      param_1[1] = (uint)uVar12;
      uVar4 = (uint)(byte)param_1[2];
      if ((byte)param_1[2] != 0) {
        pbVar8 = (byte *)((long)param_1 + 9);
        do {
          uVar9 = uVar9 * 0x89 ^ uVar4;
          uVar4 = (uint)*pbVar8;
          pbVar8 = pbVar8 + 1;
        } while (uVar4 != 0);
      }
      goto LAB_71025c184c;
    }
  }
  param_1[0x24] = uVar15;
switchD_71025bb650_caseD_d:
  return;
LAB_71025c18ac:
  cVar13 = pcVar5[uVar12];
  if (cVar13 == '\0') goto LAB_71025bc1e8;
  *(char *)((long)&local_f8 + uVar12) = cVar13;
  if (0x3e < (int)uVar12 + 1U) {
    uVar12 = (ulong)((int)uVar12 + 1);
    goto LAB_71025bc1e8;
  }
  cVar13 = (pcVar5 + uVar12)[1];
  if (cVar13 == '\0') {
    uVar12 = uVar12 + 1;
    goto LAB_71025bc1e8;
  }
  *(char *)((long)&local_f8 + uVar12 + 1) = cVar13;
  uVar12 = uVar12 + 2;
  goto LAB_71025c18ac;
LAB_71025c1964:
  cVar13 = pcVar5[uVar12];
  if (cVar13 == '\0') goto LAB_71025bdfa0;
  *(char *)((long)&local_f8 + uVar12) = cVar13;
  if (0x3e < (int)uVar12 + 1U) {
    uVar12 = (ulong)((int)uVar12 + 1);
    goto LAB_71025bdfa0;
  }
  cVar13 = (pcVar5 + uVar12)[1];
  if (cVar13 == '\0') {
    uVar12 = uVar12 + 1;
    goto LAB_71025bdfa0;
  }
  *(char *)((long)&local_f8 + uVar12 + 1) = cVar13;
  uVar12 = uVar12 + 2;
  goto LAB_71025c1964;
LAB_71025c1908:
  cVar13 = pcVar5[uVar12];
  if (cVar13 == '\0') goto LAB_71025bc978;
  *(char *)((long)&local_f8 + uVar12) = cVar13;
  if (0x3e < (int)uVar12 + 1U) {
    uVar12 = (ulong)((int)uVar12 + 1);
    goto LAB_71025bc978;
  }
  cVar13 = (pcVar5 + uVar12)[1];
  if (cVar13 == '\0') {
    uVar12 = uVar12 + 1;
    goto LAB_71025bc978;
  }
  *(char *)((long)&local_f8 + uVar12 + 1) = cVar13;
  uVar12 = uVar12 + 2;
  goto LAB_71025c1908;
LAB_71025c1b30:
  cVar13 = pcVar5[uVar12];
  if (cVar13 == '\0') goto LAB_71025bfdac;
  *(char *)((long)&local_f8 + uVar12) = cVar13;
  if (0x3e < (int)uVar12 + 1U) {
    uVar12 = (ulong)((int)uVar12 + 1);
    goto LAB_71025bfdac;
  }
  cVar13 = (pcVar5 + uVar12)[1];
  if (cVar13 == '\0') {
    uVar12 = uVar12 + 1;
    goto LAB_71025bfdac;
  }
  *(char *)((long)&local_f8 + uVar12 + 1) = cVar13;
  uVar12 = uVar12 + 2;
  goto LAB_71025c1b30;
LAB_71025c19c0:
  cVar13 = pcVar5[uVar12];
  if (cVar13 == '\0') goto LAB_71025bf4c0;
  *(char *)((long)&local_f8 + uVar12) = cVar13;
  if (0x3e < (int)uVar12 + 1U) {
    uVar12 = (ulong)((int)uVar12 + 1);
    goto LAB_71025bf4c0;
  }
  cVar13 = (pcVar5 + uVar12)[1];
  if (cVar13 == '\0') {
    uVar12 = uVar12 + 1;
    goto LAB_71025bf4c0;
  }
  *(char *)((long)&local_f8 + uVar12 + 1) = cVar13;
  uVar12 = uVar12 + 2;
  goto LAB_71025c19c0;
LAB_71025c1ad4:
  cVar13 = pcVar5[uVar12];
  if (cVar13 == '\0') goto LAB_71025bf388;
  *(char *)((long)&local_f8 + uVar12) = cVar13;
  if (0x3e < (int)uVar12 + 1U) {
    uVar12 = (ulong)((int)uVar12 + 1);
    goto LAB_71025bf388;
  }
  cVar13 = (pcVar5 + uVar12)[1];
  if (cVar13 == '\0') {
    uVar12 = uVar12 + 1;
    goto LAB_71025bf388;
  }
  *(char *)((long)&local_f8 + uVar12 + 1) = cVar13;
  uVar12 = uVar12 + 2;
  goto LAB_71025c1ad4;
LAB_71025c1a78:
  cVar13 = pcVar5[uVar12];
  if (cVar13 == '\0') goto LAB_71025bf250;
  *(char *)((long)&local_f8 + uVar12) = cVar13;
  if (0x3e < (int)uVar12 + 1U) {
    uVar12 = (ulong)((int)uVar12 + 1);
    goto LAB_71025bf250;
  }
  cVar13 = (pcVar5 + uVar12)[1];
  if (cVar13 == '\0') {
    uVar12 = uVar12 + 1;
    goto LAB_71025bf250;
  }
  *(char *)((long)&local_f8 + uVar12 + 1) = cVar13;
  uVar12 = uVar12 + 2;
  goto LAB_71025c1a78;
LAB_71025c1a1c:
  cVar13 = pcVar5[uVar12];
  if (cVar13 == '\0') goto LAB_71025bf118;
  *(char *)((long)&local_f8 + uVar12) = cVar13;
  if (0x3e < (int)uVar12 + 1U) {
    uVar12 = (ulong)((int)uVar12 + 1);
    goto LAB_71025bf118;
  }
  cVar13 = (pcVar5 + uVar12)[1];
  if (cVar13 == '\0') {
    uVar12 = uVar12 + 1;
    goto LAB_71025bf118;
  }
  *(char *)((long)&local_f8 + uVar12 + 1) = cVar13;
  uVar12 = uVar12 + 2;
  goto LAB_71025c1a1c;
}

