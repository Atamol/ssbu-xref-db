// addr:      7101740140
// offset:    0x1740140
// name:      FUN_7101740140
// mangled:   
// signature: undefined __cdecl FUN_7101740140(long param_1, undefined8 param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, byte * * * * param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7101740140(long param_1,undefined8 param_2,undefined **param_3,byte ****param_4,
                   long ****param_5,byte ****param_6,undefined8 param_7,undefined8 param_8)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  Any64BitId *pAVar4;
  int iVar5;
  char cVar6;
  char cVar7;
  Any64BitId AVar8;
  byte bVar9;
  short sVar10;
  undefined1 auVar11 [16];
  Any64BitId *pAVar12;
  long ***ppplVar13;
  int iVar14;
  bool bVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  long *plVar20;
  ulong uVar21;
  undefined1 *puVar22;
  long *plVar23;
  undefined8 uVar24;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined **ppuVar25;
  long ****pppplVar26;
  byte ****ppppbVar27;
  int iVar28;
  long lVar29;
  ulong uVar30;
  char *pcVar31;
  byte *pbVar32;
  undefined4 uVar33;
  undefined8 *puVar34;
  byte *pbVar35;
  byte *pbVar36;
  int iVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  ulong uVar41;
  ulong uVar42;
  long ***ppplVar43;
  long **pplVar44;
  long lVar45;
  long ***ppplVar46;
  ulong *puVar47;
  int iVar48;
  long *plVar49;
  float fVar50;
  float fVar51;
  double dVar52;
  double dVar53;
  undefined1 auVar54 [16];
  long ***local_9e0;
  long ***local_9d8;
  long local_9d0;
  undefined8 local_9b0;
  undefined8 local_9a8;
  long ***local_9a0;
  long ***local_968;
  long ***local_960;
  undefined8 local_958;
  uint local_950;
  uint local_94c;
  uint local_948;
  uint local_944;
  uint local_940;
  uint local_93c;
  uint local_938;
  uint local_934;
  uint local_930;
  uint local_92c;
  uint local_928;
  uint local_924;
  uint auStack_920 [3];
  float afStack_914 [517];
  undefined8 local_100;
  undefined4 local_f8;
  ulong *local_f0;
  long ***local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  Any64BitId local_c0;
  byte local_bf [63];
  long ***local_80 [2];
  
  iVar19 = *(int *)(*DAT_710593b580 + 0x7300);
  if ((iVar19 != -1) && (*(ulong *)(*DAT_710593b580 + 0x72c0) <= (ulong)(long)iVar19))
  goto LAB_71017436c8;
  if (((DAT_71053144d8 & 1) == 0) && (iVar19 = __cxa_guard_acquire(&DAT_71053144d8), iVar19 != 0)) {
    FUN_7101764000();
    param_3 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  if (((DAT_71053144d8 & 1) == 0) && (iVar19 = __cxa_guard_acquire(&DAT_71053144d8), iVar19 != 0)) {
    FUN_7101764000();
    param_3 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  if (((DAT_71053144d8 & 1) == 0) && (iVar19 = __cxa_guard_acquire(&DAT_71053144d8), iVar19 != 0)) {
    FUN_7101764000();
    param_3 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  uVar18 = DAT_71053050f0;
  lVar29 = *(long *)(DAT_710532f730 + 8);
  auVar54 = nn::util::GenerateUuid();
  ppplVar46 = (long ***)0x0;
  if ((int)DAT_71053050f0 < 0x7010300) {
    if (DAT_71053050f0 + 0xf8fefeff < 2) goto LAB_7101740240;
    uVar16 = 0x200;
LAB_7101740234:
    if (DAT_71053050f0 == (uVar16 | 0x7010000)) goto LAB_7101740240;
  }
  else {
    if ((DAT_71053050f0 != 0x7010300) && (DAT_71053050f0 != 0x7010800)) {
      uVar16 = 0x400;
      goto LAB_7101740234;
    }
LAB_7101740240:
    auVar54._8_8_ = DAT_710530e38c;
    auVar54._0_8_ = DAT_710530e384;
    auVar11._8_8_ = DAT_710530e38c;
    auVar11._0_8_ = DAT_710530e384;
    if ((uVar18 == 0x7010400) || (uVar18 == 0x7010101)) {
      ppplVar46 = (long ***)0x1;
      auVar54 = auVar11;
    }
    else {
      ppplVar46 = (long ***)0x0;
    }
  }
  local_9e0 = auVar54._8_8_;
  local_9d8 = auVar54._0_8_;
  plVar20 = *(long **)(*(long *)(DAT_710532f7d0 + 8) + 0x18);
  if ((plVar20 == (long *)0x0) || (uVar21 = (**(code **)(*plVar20 + 0x50))(), (uVar21 & 1) == 0)) {
    lVar45 = *(long *)(*(long *)(DAT_71052c4c58 + 8) + 0x88);
    if (*(long *)(lVar45 + 0x9ff8) == 0) goto LAB_7101740324;
    uVar16 = FUN_71016f6340(lVar45 + 0xa010,*(long *)(lVar45 + 0x9ff8));
    if ((~uVar16 & 0xff) == 0) goto LAB_7101740324;
    if ((*(uint *)(lVar45 + 0xa000) & 1 << (ulong)(uVar16 & 0x1f)) != 0) {
      if (*(long *)(lVar45 + 0x9ff0) == 0) {
        uVar17 = 0xff;
      }
      else {
        uVar17 = FUN_71016f6340(lVar45 + 0xa010,*(long *)(lVar45 + 0x9ff0));
      }
      if ((uVar17 & 0xff) == (uVar16 & 0xff)) goto LAB_7101740324;
    }
  }
  else {
LAB_7101740324:
    FUN_710375aa90(&local_100,"ev_match_data",(long ****)param_3,param_4,param_5,param_6,param_7,
                   param_8);
    local_960 = local_9d8;
    nn::prepo::PlayReport::Add((char *)(*local_100 + 0x4020),(Any64BitId *)"match_id_lo");
    local_960 = local_9e0;
    nn::prepo::PlayReport::Add((char *)(*local_100 + 0x4020),(Any64BitId *)"match_id_hi");
    puVar47 = local_100;
    if (((DAT_71052b92e0 & 1) == 0) && (iVar19 = __cxa_guard_acquire(&DAT_71052b92e0), iVar19 != 0))
    {
      __cxa_guard_release(&DAT_71052b92e0);
    }
    ppuVar25 = (undefined **)&DAT_71052b92f5;
    param_5 = (long ****)0x5;
    ppppbVar27 = (byte ****)0x0;
    sprintf(&DAT_71052b92f5,"Ver. %d.%d.%d",0xd,0,5);
    nn::prepo::PlayReport::Add((char *)(*puVar47 + 0x4020),"rom_version");
    local_960 = (long ***)0x0;
    FUN_71017436d0((int *)&local_c8,(ulong *)&local_960,ppuVar25,ppppbVar27,param_5,param_6,param_7,
                   param_8);
    nn::prepo::PlayReport::Add((char *)(*local_100 + 0x4020),0x71043bdd57);
    nn::prepo::PlayReport::Add((char *)(*local_100 + 0x4020),0x71043acdf1);
    local_960 = ppplVar46;
    nn::prepo::PlayReport::Add((char *)(*local_100 + 0x4020),(Any64BitId *)"has_battle_log");
    local_960 = (long ***)(ulong)(DAT_71052c51e8 == '\x01');
    nn::prepo::PlayReport::Add((char *)(*local_100 + 0x4020),(Any64BitId *)"is_battle_team");
    local_960 = (long ***)(ulong)DAT_71052c51ba;
    nn::prepo::PlayReport::Add((char *)(*local_100 + 0x4020),(Any64BitId *)"is_suddendeath");
    nn::prepo::PlayReport::Add((char *)(*local_100 + 0x4020),0x71043df748);
    nn::prepo::PlayReport::Add((char *)(*local_100 + 0x4020),0x71042f78f3);
    nn::prepo::PlayReport::Add((char *)(*local_100 + 0x4020),0x71043bdd62);
    nn::prepo::PlayReport::Add((char *)(*local_100 + 0x4020),0x710424ecad);
    nn::prepo::PlayReport::Add((char *)(*local_100 + 0x4020),0x710426f6dd);
    nn::prepo::PlayReport::Add((char *)(*local_100 + 0x4020),0x710436ba5b);
    local_960 = (long ***)(ulong)DAT_710530a97d;
    nn::prepo::PlayReport::Add((char *)(*local_100 + 0x4020),(Any64BitId *)"rule_spirits");
    nn::prepo::PlayReport::Add((char *)(*local_100 + 0x4020),0x7104307cb6);
    nn::prepo::PlayReport::Add((char *)(*local_100 + 0x4020),0x710443267f);
    local_960 = (long ***)(ulong)DAT_710530a983;
    nn::prepo::PlayReport::Add((char *)(*local_100 + 0x4020),(Any64BitId *)"rule_charge_final");
    pppplVar26 = (long ****)(long)DAT_71052c5204;
    nn::prepo::PlayReport::Add((char *)(*local_100 + 0x4020),0x71043f0066);
    puVar47 = local_100;
    uVar16 = FUN_71017ac030(0x710530a9a0,extraout_x1,pppplVar26,ppppbVar27,param_5,param_6,param_7,
                            param_8);
    if ((uVar16 & 1) == 0) {
      FUN_71017ac100(0x710530a9a0,extraout_x1_00,pppplVar26,ppppbVar27,param_5,param_6,param_7,
                     param_8);
    }
    nn::prepo::PlayReport::Add((char *)(*puVar47 + 0x4020),0x7104400a7f);
    puVar47 = local_100;
    param_4 = (byte ****)0x1;
    bVar15 = true;
    FUN_7103271490((long *)&local_960,1,(long ****)0x1,(byte ****)0x1,param_5,param_6,param_7,
                   param_8);
    ppplVar13 = local_958;
    ppplVar43 = local_960;
    if (local_960 != local_958) {
      do {
        lVar45 = *(long *)(DAT_710532f730 + 8);
        pplVar44 = *ppplVar43;
        uVar21 = FUN_71032b1e40(*(long *)(lVar45 + 0x178),(ulong)pplVar44);
        if (((int)uVar21 < 0) ||
           (uVar21 = FUN_71032b1e40(*(long *)(lVar45 + 0x178),(ulong)pplVar44),
           (1 << (ulong)((uint)uVar21 & 0x1f) &
           *(uint *)((long)&DAT_710530a9b0 + (uVar21 >> 5 & 0x7ffffff) * 4)) == 0)) {
          bVar15 = false;
          goto LAB_71017407e0;
        }
        ppplVar43 = ppplVar43 + 1;
      } while (ppplVar13 != ppplVar43);
      bVar15 = true;
    }
LAB_71017407e0:
    if (local_960 != (long ***)0x0) {
      local_958 = local_960;
      FUN_710392eb40((ulong)local_960);
    }
    if (!bVar15) {
      param_4 = (byte ****)0x1;
      FUN_7103271490((long *)&local_960,1,(long ****)0x1,(byte ****)0x1,param_5,param_6,param_7,
                     param_8);
      ppplVar13 = local_958;
      for (ppplVar43 = local_960; ppplVar43 != ppplVar13;
          ppplVar43 = (long ***)((long)ppplVar43 + 8)) {
        lVar45 = *(long *)(DAT_710532f730 + 8);
        pplVar44 = *ppplVar43;
        uVar21 = FUN_71032b1e40(*(long *)(lVar45 + 0x178),(ulong)pplVar44);
        if ((-1 < (int)uVar21) &&
           (uVar21 = FUN_71032b1e40(*(long *)(lVar45 + 0x178),(ulong)pplVar44),
           (1 << (ulong)((uint)uVar21 & 0x1f) &
           *(uint *)((long)&DAT_710530a9b0 + (uVar21 >> 5 & 0x7ffffff) * 4)) != 0)) break;
      }
      if (local_960 != (long ***)0x0) {
        local_958 = local_960;
        FUN_710392eb40((ulong)local_960);
      }
    }
    nn::prepo::PlayReport::Add((char *)(*puVar47 + 0x4020),0x7104400a90);
    nn::prepo::PlayReport::Add((char *)(*local_100 + 0x4020),0x710426f6ef);
    local_960 = (long ***)(ulong)DAT_710530a981;
    nn::prepo::PlayReport::Add((char *)(*local_100 + 0x4020),(Any64BitId *)"rule_team_attach");
    fVar50 = (float)NEON_ucvtf((uint)DAT_710530a982);
    dVar52 = 0.0;
    if ((ulong)ABS((double)(fVar50 / 10.0)) < 0x7ff0000000000001) {
      dVar52 = (double)(fVar50 / 10.0);
    }
    nn::prepo::PlayReport::Add((char *)(*local_100 + 0x4020),dVar52);
    local_960 = (long ***)(ulong)(DAT_710530a984 != '\0');
    nn::prepo::PlayReport::Add((char *)(*local_100 + 0x4020),(Any64BitId *)"rule_handi_boost");
    local_960 = (long ***)(ulong)DAT_710530a985;
    nn::prepo::PlayReport::Add((char *)(*local_100 + 0x4020),(Any64BitId *)"rule_stage_gimmick");
    nn::prepo::PlayReport::Add((char *)(*local_100 + 0x4020),0x71043398db);
    local_960 = (long ***)(ulong)DAT_710530a989;
    nn::prepo::PlayReport::Add((char *)(*local_100 + 0x4020),(Any64BitId *)"rule_can_pause");
    local_960 = (long ***)(ulong)DAT_710530a98a;
    nn::prepo::PlayReport::Add((char *)(*local_100 + 0x4020),(Any64BitId *)"rule_visible_score");
    local_960 = (long ***)(ulong)DAT_710530a98b;
    nn::prepo::PlayReport::Add((char *)(*local_100 + 0x4020),(Any64BitId *)"rule_visible_damage");
    puVar47 = local_100;
    if (DAT_710530a987 == '\0') {
      lVar45 = (long)(int)DAT_710530a968;
      if (2 < DAT_710530a968) goto LAB_71017436c8;
      uVar21 = FUN_71032b1e40(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x178),
                              (&DAT_710530a7c0)[lVar45 * 4]);
      uVar16 = 0xff;
      if (-1 < (int)(uint)uVar21) {
        uVar16 = (uint)uVar21 & 0xff;
      }
      local_960 = (long ***)(ulong)uVar16;
      nn::prepo::PlayReport::Add((char *)(*puVar47 + 0x4020),(Any64BitId *)"stage_1_type");
      iVar19 = (&DAT_710530a7c8)[lVar45 * 8];
      uVar21 = *local_100;
      pcVar31 = "stage_1_form";
    }
    else {
      uVar21 = FUN_71032b1e40(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x178),DAT_710530a7c0);
      uVar16 = 0xff;
      if (-1 < (int)(uint)uVar21) {
        uVar16 = (uint)uVar21 & 0xff;
      }
      local_960 = (long ***)(ulong)uVar16;
      nn::prepo::PlayReport::Add((char *)(*puVar47 + 0x4020),(Any64BitId *)"stage_1_type");
      local_960 = (long ***)(long)DAT_710530a7c8;
      nn::prepo::PlayReport::Add((char *)(*local_100 + 0x4020),(Any64BitId *)"stage_1_form");
      puVar47 = local_100;
      uVar21 = FUN_71032b1e40(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x178),DAT_710530a7e0);
      uVar16 = 0xff;
      if (-1 < (int)(uint)uVar21) {
        uVar16 = (uint)uVar21 & 0xff;
      }
      local_960 = (long ***)(ulong)uVar16;
      nn::prepo::PlayReport::Add((char *)(*puVar47 + 0x4020),(Any64BitId *)"stage_2_type");
      uVar21 = *local_100;
      pcVar31 = "stage_2_form";
      iVar19 = (int)DAT_710530a7e8;
    }
    local_960 = (long ***)(long)iVar19;
    nn::prepo::PlayReport::Add((char *)(uVar21 + 0x4020),(Any64BitId *)pcVar31);
    local_80[0] = (long ***)0x0;
    uVar21 = FUN_7101743910((ulong *)local_80);
    if ((uVar21 & 1) != 0) {
      local_960 = local_80[0];
      nn::prepo::PlayReport::Add((char *)(*local_100 + 0x4020),(Any64BitId *)"event_type");
    }
    if (uVar18 == 0x7010300) {
      local_960 = (long ***)
                  (ulong)*(uint *)(*(long *)(*(long *)(DAT_71052c4c58 + 8) + 0x98) + 0x540);
      nn::prepo::PlayReport::Add((char *)(*local_100 + 0x4020),(Any64BitId *)"tournament_id");
    }
    fVar50 = 0.0;
    iVar19 = 0;
    local_9a8 = (long *)0x0;
    local_9a0 = (long ***)0x0;
    uVar21 = 0;
    local_9b0 = &local_9a8;
    do {
      uVar30 = uVar21 + 1;
      local_958 = (long ***)((ulong)local_958 & 0xffffffffffffff00);
      local_960 = (long ***)0x0;
      local_c0 = (Any64BitId)0x0;
      local_c8 = (long ***)0x0;
      FUN_710062dc20((uint *)&local_960,"player_%d_");
      if ((&DAT_71052cc63a)[(long)(int)uVar21 * 0x3860] != '\x02') {
        lVar45 = (long)(int)uVar21;
        iVar48 = (&DAT_71053087a0)[lVar45 * 0x72];
        if ((&DAT_71052cc63a)[(long)(int)uVar21 * 0x3860] == '\x01') {
          if (iVar48 == 0) {
            iVar48 = 1;
          }
          else {
            iVar19 = iVar19 + 1;
            fVar51 = (float)NEON_ucvtf((uint)(byte)(&DAT_71053087b9)[lVar45 * 0x1c8]);
            fVar50 = fVar50 + fVar51;
          }
        }
        uVar21 = (&DAT_71053087a8)[lVar45 * 0x39];
        puVar22 = FUN_71032631a0(*(long *)(lVar29 + 0x168),0xfd5f7fa78);
        puVar47 = local_100;
        if (((((uVar21 & 0xff00000000000000) == 0xc100000000000000) &&
             ((uVar21 & 0xffffffffff) != 0)) &&
            (((ulong)puVar22 & 0xff00000000000000) == 0xc100000000000000)) &&
           (((ulong)puVar22 & 0xffffffffff) != 0)) {
          bVar15 = (((ulong)puVar22 ^ uVar21) & 0xffffffffff) == 0;
        }
        else {
          bVar15 = (((ulong)puVar22 & 0xffffffffff) != 0 &&
                   ((ulong)puVar22 & 0xff00000000000000) == 0xc100000000000000) ==
                   ((uVar21 & 0xff00000000000000) == 0xc100000000000000 &&
                   (uVar21 & 0xffffffffff) != 0);
        }
        uVar18 = 0x811c9dc5;
        uVar21 = 0;
        do {
          uVar41 = uVar21;
          if (*(Any64BitId *)((long)&local_958 + uVar21) == (Any64BitId)0x0) break;
          cVar6 = *(char *)((long)&local_958 + uVar21 + 1);
          (&local_c0)[uVar21] = *(Any64BitId *)((long)&local_958 + uVar21);
          if (cVar6 == '\0') {
            uVar41 = uVar21 + 1;
            break;
          }
          cVar7 = *(char *)((long)&local_958 + uVar21 + 2);
          local_bf[uVar21] = cVar6;
          if (cVar7 == '\0') {
            uVar41 = uVar21 + 2;
            break;
          }
          uVar41 = uVar21 + 3;
          local_bf[uVar21 + 1] = cVar7;
          uVar21 = uVar41;
        } while ((uint)uVar41 < 0x3f);
        (&local_c0)[uVar41 & 0xffffffff] = (Any64BitId)0x0;
        uVar17 = (uint)(byte)local_c0;
        uVar16 = (uint)uVar41;
        local_c8 = (long ***)CONCAT44(uVar16,(uint)local_c8);
        local_c8._0_4_ = uVar18;
        if (local_c0 != (Any64BitId)0x0) {
          local_c8._0_4_ = 0x811c9dc5;
          pbVar36 = local_bf;
          do {
            local_c8._0_4_ = (uint)local_c8 * 0x89 ^ uVar17;
            uVar17 = (uint)*pbVar36;
            pbVar36 = pbVar36 + 1;
          } while (uVar17 != 0);
        }
        local_c8._4_4_ = uVar16;
        if ((int)uVar16 < 0x3f) {
          uVar17 = uVar16 + 1;
          local_c8._4_4_ = uVar17;
          (&local_c0)[(int)uVar16] = (Any64BitId)0x66;
          if (uVar16 < 0x3e) {
            local_c8._4_4_ = uVar16 + 2;
            (&local_c0)[(int)uVar17] = (Any64BitId)0x69;
            if (uVar17 < 0x3e) {
              local_c8._4_4_ = uVar16 + 3;
              (&local_c0)[(int)(uVar16 + 2)] = (Any64BitId)0x67;
              if (uVar16 + 2 < 0x3e) {
                local_c8._4_4_ = uVar16 + 4;
                (&local_c0)[(int)(uVar16 + 3)] = (Any64BitId)0x68;
                if (uVar16 + 3 < 0x3e) {
                  local_c8._4_4_ = uVar16 + 5;
                  (&local_c0)[(int)(uVar16 + 4)] = (Any64BitId)0x74;
                  if (uVar16 + 4 < 0x3e) {
                    local_c8._4_4_ = uVar16 + 6;
                    (&local_c0)[(int)(uVar16 + 5)] = (Any64BitId)0x65;
                    if (uVar16 + 5 < 0x3e) {
                      local_c8._4_4_ = uVar16 + 7;
                      (&local_c0)[(int)(uVar16 + 6)] = (Any64BitId)0x72;
                    }
                  }
                }
              }
            }
          }
        }
        (&local_c0)[(int)local_c8._4_4_] = (Any64BitId)0x0;
        uVar16 = (uint)(byte)local_c0;
        if (local_c0 != (Any64BitId)0x0) {
          uVar18 = 0x811c9dc5;
          pbVar36 = local_bf;
          do {
            uVar18 = uVar18 * 0x89 ^ uVar16;
            uVar16 = (uint)*pbVar36;
            pbVar36 = pbVar36 + 1;
          } while (uVar16 != 0);
        }
        local_c8 = (long ***)CONCAT44(local_c8._4_4_,uVar18);
        if (bVar15) {
          uVar21 = *local_100;
          local_e8 = (long ***)0xfe;
        }
        else {
          uVar21 = FUN_7103264270(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x168),
                                  (undefined1 *)(&DAT_71053087b0)[lVar45 * 0x39]);
          uVar18 = 0xff;
          if (-1 < (int)(uint)uVar21) {
            uVar18 = (uint)uVar21 & 0xff;
          }
          local_e8 = (long ***)(ulong)uVar18;
          uVar21 = *puVar47;
        }
        nn::prepo::PlayReport::Add((char *)(uVar21 + 0x4020),&local_c0);
        uVar18 = 0x811c9dc5;
        uVar21 = 0;
        do {
          uVar41 = uVar21;
          if (*(Any64BitId *)((long)&local_958 + uVar21) == (Any64BitId)0x0) break;
          cVar6 = *(char *)((long)&local_958 + uVar21 + 1);
          (&local_c0)[uVar21] = *(Any64BitId *)((long)&local_958 + uVar21);
          if (cVar6 == '\0') {
            uVar41 = uVar21 + 1;
            break;
          }
          cVar7 = *(char *)((long)&local_958 + uVar21 + 2);
          local_bf[uVar21] = cVar6;
          if (cVar7 == '\0') {
            uVar41 = uVar21 + 2;
            break;
          }
          uVar41 = uVar21 + 3;
          local_bf[uVar21 + 1] = cVar7;
          uVar21 = uVar41;
        } while ((uint)uVar41 < 0x3f);
        (&local_c0)[uVar41 & 0xffffffff] = (Any64BitId)0x0;
        uVar16 = (uint)(byte)local_c0;
        iVar28 = (int)uVar41;
        local_c8 = (long ***)CONCAT44(iVar28,(uint)local_c8);
        pbVar36 = local_bf;
        local_c8._0_4_ = uVar18;
        if (local_c0 != (Any64BitId)0x0) {
          do {
            local_c8._0_4_ = (uint)local_c8 * 0x89 ^ uVar16;
            uVar16 = (uint)*pbVar36;
            pbVar36 = pbVar36 + 1;
          } while (uVar16 != 0);
        }
        local_c8._4_4_ = iVar28;
        if (iVar28 < 0x3f) {
          uVar16 = iVar28 - 1;
          pcVar31 = "attacker";
          do {
            AVar8 = (Any64BitId)*pcVar31;
            if (AVar8 == (Any64BitId)0x0) break;
            lVar38 = (long)(int)local_c8._4_4_;
            uVar16 = uVar16 + 1;
            pcVar31 = pcVar31 + 1;
            local_c8._4_4_ = local_c8._4_4_ + 1;
            (&local_c0)[lVar38] = AVar8;
          } while (uVar16 < 0x3e);
        }
        (&local_c0)[(int)local_c8._4_4_] = (Any64BitId)0x0;
        uVar16 = (uint)(byte)local_c0;
        pbVar36 = local_bf;
        if (local_c0 != (Any64BitId)0x0) {
          do {
            uVar18 = uVar18 * 0x89 ^ uVar16;
            uVar16 = (uint)*pbVar36;
            pbVar36 = pbVar36 + 1;
          } while (uVar16 != 0);
        }
        local_c8 = (long ***)CONCAT44(local_c8._4_4_,uVar18);
        nn::prepo::PlayReport::Add((char *)(*local_100 + 0x4020),(long)&local_c0);
        uVar18 = 0x811c9dc5;
        uVar21 = 0;
        do {
          uVar41 = uVar21;
          if (*(Any64BitId *)((long)&local_958 + uVar21) == (Any64BitId)0x0) break;
          cVar6 = *(char *)((long)&local_958 + uVar21 + 1);
          (&local_c0)[uVar21] = *(Any64BitId *)((long)&local_958 + uVar21);
          if (cVar6 == '\0') {
            uVar41 = uVar21 + 1;
            break;
          }
          cVar7 = *(char *)((long)&local_958 + uVar21 + 2);
          local_bf[uVar21] = cVar6;
          if (cVar7 == '\0') {
            uVar41 = uVar21 + 2;
            break;
          }
          uVar41 = uVar21 + 3;
          local_bf[uVar21 + 1] = cVar7;
          uVar21 = uVar41;
        } while ((uint)uVar41 < 0x3f);
        (&local_c0)[uVar41 & 0xffffffff] = (Any64BitId)0x0;
        uVar16 = (uint)(byte)local_c0;
        iVar28 = (int)uVar41;
        local_c8 = (long ***)CONCAT44(iVar28,(uint)local_c8);
        pbVar36 = local_bf;
        local_c8._0_4_ = uVar18;
        if (local_c0 != (Any64BitId)0x0) {
          do {
            local_c8._0_4_ = (uint)local_c8 * 0x89 ^ uVar16;
            uVar16 = (uint)*pbVar36;
            pbVar36 = pbVar36 + 1;
          } while (uVar16 != 0);
        }
        local_c8._4_4_ = iVar28;
        if (iVar28 < 0x3f) {
          uVar16 = iVar28 - 1;
          pcVar31 = "supporter1";
          do {
            AVar8 = (Any64BitId)*pcVar31;
            if (AVar8 == (Any64BitId)0x0) break;
            lVar38 = (long)(int)local_c8._4_4_;
            uVar16 = uVar16 + 1;
            pcVar31 = pcVar31 + 1;
            local_c8._4_4_ = local_c8._4_4_ + 1;
            (&local_c0)[lVar38] = AVar8;
          } while (uVar16 < 0x3e);
        }
        (&local_c0)[(int)local_c8._4_4_] = (Any64BitId)0x0;
        uVar16 = (uint)(byte)local_c0;
        pbVar36 = local_bf;
        if (local_c0 != (Any64BitId)0x0) {
          do {
            uVar18 = uVar18 * 0x89 ^ uVar16;
            uVar16 = (uint)*pbVar36;
            pbVar36 = pbVar36 + 1;
          } while (uVar16 != 0);
        }
        local_c8 = (long ***)CONCAT44(local_c8._4_4_,uVar18);
        nn::prepo::PlayReport::Add((char *)(*local_100 + 0x4020),(long)&local_c0);
        uVar18 = 0x811c9dc5;
        uVar21 = 0;
        do {
          uVar41 = uVar21;
          if (*(Any64BitId *)((long)&local_958 + uVar21) == (Any64BitId)0x0) break;
          cVar6 = *(char *)((long)&local_958 + uVar21 + 1);
          (&local_c0)[uVar21] = *(Any64BitId *)((long)&local_958 + uVar21);
          if (cVar6 == '\0') {
            uVar41 = uVar21 + 1;
            break;
          }
          cVar7 = *(char *)((long)&local_958 + uVar21 + 2);
          local_bf[uVar21] = cVar6;
          if (cVar7 == '\0') {
            uVar41 = uVar21 + 2;
            break;
          }
          uVar41 = uVar21 + 3;
          local_bf[uVar21 + 1] = cVar7;
          uVar21 = uVar41;
        } while ((uint)uVar41 < 0x3f);
        (&local_c0)[uVar41 & 0xffffffff] = (Any64BitId)0x0;
        uVar16 = (uint)(byte)local_c0;
        iVar28 = (int)uVar41;
        local_c8 = (long ***)CONCAT44(iVar28,(uint)local_c8);
        pbVar36 = local_bf;
        local_c8._0_4_ = uVar18;
        if (local_c0 != (Any64BitId)0x0) {
          do {
            local_c8._0_4_ = (uint)local_c8 * 0x89 ^ uVar16;
            uVar16 = (uint)*pbVar36;
            pbVar36 = pbVar36 + 1;
          } while (uVar16 != 0);
        }
        local_c8._4_4_ = iVar28;
        if (iVar28 < 0x3f) {
          uVar16 = iVar28 - 1;
          pcVar31 = "supporter2";
          do {
            AVar8 = (Any64BitId)*pcVar31;
            if (AVar8 == (Any64BitId)0x0) break;
            lVar38 = (long)(int)local_c8._4_4_;
            uVar16 = uVar16 + 1;
            pcVar31 = pcVar31 + 1;
            local_c8._4_4_ = local_c8._4_4_ + 1;
            (&local_c0)[lVar38] = AVar8;
          } while (uVar16 < 0x3e);
        }
        (&local_c0)[(int)local_c8._4_4_] = (Any64BitId)0x0;
        uVar16 = (uint)(byte)local_c0;
        pbVar36 = local_bf;
        if (local_c0 != (Any64BitId)0x0) {
          do {
            uVar18 = uVar18 * 0x89 ^ uVar16;
            uVar16 = (uint)*pbVar36;
            pbVar36 = pbVar36 + 1;
          } while (uVar16 != 0);
        }
        local_c8 = (long ***)CONCAT44(local_c8._4_4_,uVar18);
        nn::prepo::PlayReport::Add((char *)(*local_100 + 0x4020),(long)&local_c0);
        uVar18 = 0x811c9dc5;
        uVar21 = 0;
        do {
          uVar41 = uVar21;
          if (*(Any64BitId *)((long)&local_958 + uVar21) == (Any64BitId)0x0) break;
          cVar6 = *(char *)((long)&local_958 + uVar21 + 1);
          (&local_c0)[uVar21] = *(Any64BitId *)((long)&local_958 + uVar21);
          if (cVar6 == '\0') {
            uVar41 = uVar21 + 1;
            break;
          }
          cVar7 = *(char *)((long)&local_958 + uVar21 + 2);
          local_bf[uVar21] = cVar6;
          if (cVar7 == '\0') {
            uVar41 = uVar21 + 2;
            break;
          }
          uVar41 = uVar21 + 3;
          local_bf[uVar21 + 1] = cVar7;
          uVar21 = uVar41;
        } while ((uint)uVar41 < 0x3f);
        (&local_c0)[uVar41 & 0xffffffff] = (Any64BitId)0x0;
        uVar16 = (uint)(byte)local_c0;
        iVar28 = (int)uVar41;
        local_c8 = (long ***)CONCAT44(iVar28,(uint)local_c8);
        pbVar36 = local_bf;
        local_c8._0_4_ = uVar18;
        if (local_c0 != (Any64BitId)0x0) {
          do {
            local_c8._0_4_ = (uint)local_c8 * 0x89 ^ uVar16;
            uVar16 = (uint)*pbVar36;
            pbVar36 = pbVar36 + 1;
          } while (uVar16 != 0);
        }
        local_c8._4_4_ = iVar28;
        if (iVar28 < 0x3f) {
          uVar16 = iVar28 - 1;
          pcVar31 = "supporter3";
          do {
            AVar8 = (Any64BitId)*pcVar31;
            if (AVar8 == (Any64BitId)0x0) break;
            lVar38 = (long)(int)local_c8._4_4_;
            uVar16 = uVar16 + 1;
            pcVar31 = pcVar31 + 1;
            local_c8._4_4_ = local_c8._4_4_ + 1;
            (&local_c0)[lVar38] = AVar8;
          } while (uVar16 < 0x3e);
        }
        (&local_c0)[(int)local_c8._4_4_] = (Any64BitId)0x0;
        uVar16 = (uint)(byte)local_c0;
        pbVar36 = local_bf;
        if (local_c0 != (Any64BitId)0x0) {
          do {
            uVar18 = uVar18 * 0x89 ^ uVar16;
            uVar16 = (uint)*pbVar36;
            pbVar36 = pbVar36 + 1;
          } while (uVar16 != 0);
        }
        local_c8 = (long ***)CONCAT44(local_c8._4_4_,uVar18);
        nn::prepo::PlayReport::Add((char *)(*local_100 + 0x4020),(long)&local_c0);
        uVar18 = 0x811c9dc5;
        uVar21 = 0;
        do {
          uVar41 = uVar21;
          if (*(Any64BitId *)((long)&local_958 + uVar21) == (Any64BitId)0x0) break;
          cVar6 = *(char *)((long)&local_958 + uVar21 + 1);
          (&local_c0)[uVar21] = *(Any64BitId *)((long)&local_958 + uVar21);
          if (cVar6 == '\0') {
            uVar41 = uVar21 + 1;
            break;
          }
          cVar7 = *(char *)((long)&local_958 + uVar21 + 2);
          local_bf[uVar21] = cVar6;
          if (cVar7 == '\0') {
            uVar41 = uVar21 + 2;
            break;
          }
          uVar41 = uVar21 + 3;
          local_bf[uVar21 + 1] = cVar7;
          uVar21 = uVar41;
        } while ((uint)uVar41 < 0x3f);
        (&local_c0)[uVar41 & 0xffffffff] = (Any64BitId)0x0;
        uVar17 = (uint)(byte)local_c0;
        uVar16 = (uint)uVar41;
        local_c8 = (long ***)CONCAT44(uVar16,(uint)local_c8);
        pbVar36 = local_bf;
        local_c8._0_4_ = uVar18;
        if (local_c0 != (Any64BitId)0x0) {
          do {
            local_c8._0_4_ = (uint)local_c8 * 0x89 ^ uVar17;
            uVar17 = (uint)*pbVar36;
            pbVar36 = pbVar36 + 1;
          } while (uVar17 != 0);
        }
        local_c8._4_4_ = uVar16;
        if ((int)uVar16 < 0x3f) {
          uVar17 = uVar16 + 1;
          local_c8._4_4_ = uVar17;
          (&local_c0)[(int)uVar16] = (Any64BitId)0x6b;
          if (uVar16 < 0x3e) {
            local_c8._4_4_ = uVar16 + 2;
            (&local_c0)[(int)uVar17] = (Any64BitId)0x69;
            if (uVar17 < 0x3e) {
              local_c8._4_4_ = uVar16 + 3;
              (&local_c0)[(int)(uVar16 + 2)] = (Any64BitId)0x6e;
              if (uVar16 + 2 < 0x3e) {
                local_c8._4_4_ = uVar16 + 4;
                (&local_c0)[(int)(uVar16 + 3)] = (Any64BitId)0x64;
              }
            }
          }
        }
        (&local_c0)[(int)local_c8._4_4_] = (Any64BitId)0x0;
        uVar16 = (uint)(byte)local_c0;
        pbVar36 = local_bf;
        if (local_c0 != (Any64BitId)0x0) {
          do {
            uVar18 = uVar18 * 0x89 ^ uVar16;
            uVar16 = (uint)*pbVar36;
            pbVar36 = pbVar36 + 1;
          } while (uVar16 != 0);
        }
        local_c8 = (long ***)CONCAT44(local_c8._4_4_,uVar18);
        local_e8 = (long ***)(long)iVar48;
        nn::prepo::PlayReport::Add((char *)(*local_100 + 0x4020),&local_c0);
        uVar18 = *(uint *)(&DAT_71053095b0 + lVar45 * 0x48);
        if (uVar18 == 0xffffffff) {
          iVar48 = 0;
        }
        else {
          puVar34 = &DAT_7105339830;
          if (((uVar18 < 10 && *(char *)(DAT_71053398b0 + 8) != '\0') &&
              (puVar34 = (undefined8 *)(&DAT_7105339860)[(int)uVar18], puVar34 == (undefined8 *)0x0)
              ) || (uVar18 = *(int *)(puVar34[2] + 0x9c) - 1, 6 < uVar18)) {
            iVar48 = 0;
          }
          else {
            iVar48 = *(int *)(&DAT_7104753de0 + (long)(int)uVar18 * 4);
          }
        }
        uVar18 = 0x811c9dc5;
        uVar21 = 0;
        do {
          uVar41 = uVar21;
          if (*(Any64BitId *)((long)&local_958 + uVar21) == (Any64BitId)0x0) break;
          cVar6 = *(char *)((long)&local_958 + uVar21 + 1);
          (&local_c0)[uVar21] = *(Any64BitId *)((long)&local_958 + uVar21);
          if (cVar6 == '\0') {
            uVar41 = uVar21 + 1;
            break;
          }
          cVar7 = *(char *)((long)&local_958 + uVar21 + 2);
          local_bf[uVar21] = cVar6;
          if (cVar7 == '\0') {
            uVar41 = uVar21 + 2;
            break;
          }
          uVar41 = uVar21 + 3;
          local_bf[uVar21 + 1] = cVar7;
          uVar21 = uVar41;
        } while ((uint)uVar41 < 0x3f);
        (&local_c0)[uVar41 & 0xffffffff] = (Any64BitId)0x0;
        uVar17 = (uint)(byte)local_c0;
        uVar16 = (uint)uVar41;
        local_c8 = (long ***)CONCAT44(uVar16,(uint)local_c8);
        pbVar36 = local_bf;
        local_c8._0_4_ = uVar18;
        if (local_c0 != (Any64BitId)0x0) {
          do {
            local_c8._0_4_ = (uint)local_c8 * 0x89 ^ uVar17;
            uVar17 = (uint)*pbVar36;
            pbVar36 = pbVar36 + 1;
          } while (uVar17 != 0);
        }
        local_c8._4_4_ = uVar16;
        if ((int)uVar16 < 0x3f) {
          uVar17 = uVar16 + 1;
          local_c8._4_4_ = uVar17;
          (&local_c0)[(int)uVar16] = (Any64BitId)0x64;
          if (uVar16 < 0x3e) {
            local_c8._4_4_ = uVar16 + 2;
            (&local_c0)[(int)uVar17] = (Any64BitId)0x65;
            if (uVar17 < 0x3e) {
              local_c8._4_4_ = uVar16 + 3;
              (&local_c0)[(int)(uVar16 + 2)] = (Any64BitId)0x76;
              if (uVar16 + 2 < 0x3e) {
                local_c8._4_4_ = uVar16 + 4;
                (&local_c0)[(int)(uVar16 + 3)] = (Any64BitId)0x69;
                if (uVar16 + 3 < 0x3e) {
                  local_c8._4_4_ = uVar16 + 5;
                  (&local_c0)[(int)(uVar16 + 4)] = (Any64BitId)0x63;
                  if (uVar16 + 4 < 0x3e) {
                    local_c8._4_4_ = uVar16 + 6;
                    (&local_c0)[(int)(uVar16 + 5)] = (Any64BitId)0x65;
                  }
                }
              }
            }
          }
        }
        (&local_c0)[(int)local_c8._4_4_] = (Any64BitId)0x0;
        uVar16 = (uint)(byte)local_c0;
        pbVar36 = local_bf;
        if (local_c0 != (Any64BitId)0x0) {
          do {
            uVar18 = uVar18 * 0x89 ^ uVar16;
            uVar16 = (uint)*pbVar36;
            pbVar36 = pbVar36 + 1;
          } while (uVar16 != 0);
        }
        local_c8 = (long ***)CONCAT44(local_c8._4_4_,uVar18);
        pppplVar26 = (long ****)(long)iVar48;
        nn::prepo::PlayReport::Add((char *)(*local_100 + 0x4020),(long)&local_c0);
        bVar9 = (&DAT_7105308770)[lVar45 * 0x1c8];
        plVar49 = &local_9a8;
        plVar20 = &local_9a8;
        plVar23 = local_9a8;
        while (plVar23 != (long *)0x0) {
          while (plVar20 = plVar23, bVar9 < *(byte *)((long)plVar20 + 0x19)) {
            plVar23 = (long *)*plVar20;
            plVar49 = plVar20;
            if ((long *)*plVar20 == (long *)0x0) {
              lVar45 = *plVar20;
              goto joined_r0x007101741970;
            }
          }
          if (bVar9 <= *(byte *)((long)plVar20 + 0x19)) break;
          plVar49 = plVar20 + 1;
          plVar23 = (long *)*plVar49;
        }
        lVar45 = *plVar49;
joined_r0x007101741970:
        if (lVar45 == 0) {
          plVar23 = (long *)FUN_710392e290(0x10,0x20,pppplVar26,param_4,param_5,param_6,param_7,
                                           param_8);
          if (plVar23 == (long *)0x0) {
            local_f0 = (ulong *)((ulong)local_f0 & 0xffffffff00000000);
            local_e8 = (long ***)&SUB_00000020;
            pppplVar26 = &local_e8;
            (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_f0);
            plVar23 = (long *)FUN_710392e290(0x10,0x20,pppplVar26,param_4,param_5,param_6,param_7,
                                             param_8);
          }
          *(byte *)((long)plVar23 + 0x19) = bVar9;
          *plVar23 = 0;
          plVar23[1] = 0;
          plVar23[2] = (long)plVar20;
          *plVar49 = (long)plVar23;
          if ((long *)*local_9b0 != (long *)0x0) {
            plVar23 = (long *)*plVar49;
            local_9b0 = (long *)*local_9b0;
          }
          std::__tree_balance_after_insert<std::__tree_node_base<void*>*>(local_9a8,plVar23);
          local_9a0 = (long ***)((long)local_9a0 + 1);
        }
        uVar18 = 0x811c9dc5;
        uVar21 = 0;
        do {
          uVar41 = uVar21;
          if (*(Any64BitId *)((long)&local_958 + uVar21) == (Any64BitId)0x0) break;
          cVar6 = *(char *)((long)&local_958 + uVar21 + 1);
          (&local_c0)[uVar21] = *(Any64BitId *)((long)&local_958 + uVar21);
          if (cVar6 == '\0') {
            uVar41 = uVar21 + 1;
            break;
          }
          cVar7 = *(char *)((long)&local_958 + uVar21 + 2);
          local_bf[uVar21] = cVar6;
          if (cVar7 == '\0') {
            uVar41 = uVar21 + 2;
            break;
          }
          uVar41 = uVar21 + 3;
          local_bf[uVar21 + 1] = cVar7;
          uVar21 = uVar41;
        } while ((uint)uVar41 < 0x3f);
        (&local_c0)[uVar41 & 0xffffffff] = (Any64BitId)0x0;
        uVar17 = (uint)(byte)local_c0;
        uVar16 = (uint)uVar41;
        local_c8 = (long ***)CONCAT44(uVar16,(uint)local_c8);
        local_c8._0_4_ = uVar18;
        if (local_c0 != (Any64BitId)0x0) {
          local_c8._0_4_ = 0x811c9dc5;
          pbVar36 = local_bf;
          do {
            local_c8._0_4_ = (uint)local_c8 * 0x89 ^ uVar17;
            uVar17 = (uint)*pbVar36;
            pbVar36 = pbVar36 + 1;
          } while (uVar17 != 0);
        }
        local_c8._4_4_ = uVar16;
        if ((int)uVar16 < 0x3f) {
          uVar17 = uVar16 + 1;
          local_c8._4_4_ = uVar17;
          (&local_c0)[(int)uVar16] = (Any64BitId)0x72;
          if (uVar16 < 0x3e) {
            local_c8._4_4_ = uVar16 + 2;
            (&local_c0)[(int)uVar17] = (Any64BitId)0x61;
            if (uVar17 < 0x3e) {
              local_c8._4_4_ = uVar16 + 3;
              (&local_c0)[(int)(uVar16 + 2)] = (Any64BitId)0x6e;
              if (uVar16 + 2 < 0x3e) {
                local_c8._4_4_ = uVar16 + 4;
                (&local_c0)[(int)(uVar16 + 3)] = (Any64BitId)0x6b;
              }
            }
          }
        }
        (&local_c0)[(int)local_c8._4_4_] = (Any64BitId)0x0;
        uVar16 = (uint)(byte)local_c0;
        if (local_c0 != (Any64BitId)0x0) {
          uVar18 = 0x811c9dc5;
          pbVar36 = local_bf;
          do {
            uVar18 = uVar18 * 0x89 ^ uVar16;
            uVar16 = (uint)*pbVar36;
            pbVar36 = pbVar36 + 1;
          } while (uVar16 != 0);
        }
        local_c8 = (long ***)CONCAT44(local_c8._4_4_,uVar18);
        nn::prepo::PlayReport::Add((char *)(*local_100 + 0x4020),(long)&local_c0);
      }
      uVar21 = uVar30;
    } while (uVar30 < 8);
    local_960 = local_9a0;
    param_3 = (undefined **)&local_960;
    nn::prepo::PlayReport::Add((char *)(*local_100 + 0x4020),(Any64BitId *)"node_num");
    dVar52 = 0.0;
    if (0 < iVar19) {
      dVar52 = (double)(fVar50 / (float)iVar19);
    }
    dVar53 = 0.0;
    if ((ulong)ABS(dVar52) < 0x7ff0000000000001) {
      dVar53 = dVar52;
    }
    nn::prepo::PlayReport::Add((char *)(*local_100 + 0x4020),dVar53);
    nn::prepo::PlayReport::Save((Uid *)(*local_100 + 0x4020));
    FUN_7101743bb0(local_9a8);
    puVar47 = local_100;
    local_100 = (ulong *)0x0;
    if (puVar47 != (ulong *)0x0) {
      uVar21 = *puVar47;
      *puVar47 = 0;
      if (uVar21 != 0) {
        FUN_710392eb40(uVar21);
      }
      FUN_710392eb40((ulong)puVar47);
    }
  }
  if ((int)ppplVar46 == 0) {
    return;
  }
  if (((DAT_71053144d8 & 1) == 0) && (iVar19 = __cxa_guard_acquire(&DAT_71053144d8), iVar19 != 0)) {
    FUN_7101764000();
    param_3 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  local_d8 = 0;
  uStack_d0 = 0;
  local_e8 = (long ***)0x0;
  uStack_e0 = 0;
  uVar18 = FUN_710179eec0((undefined4 *)&local_e8);
  if (uVar18 != 1) {
    return;
  }
  uVar18 = (uint)local_e8;
  lVar45 = (long)(int)(uint)local_e8;
  FUN_710375aa90((long *)&local_f0,"ev_match_player",(long ****)param_3,param_4,param_5,param_6,
                 param_7,param_8);
  puVar47 = local_f0;
  if (7 < uVar18) {
LAB_71017436c8:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  local_960 = local_9d8;
  nn::prepo::PlayReport::Add((char *)(*local_f0 + 0x4020),(Any64BitId *)"match_id_lo");
  local_960 = local_9e0;
  nn::prepo::PlayReport::Add((char *)(*puVar47 + 0x4020),(Any64BitId *)"match_id_hi");
  local_960 = (long ***)(ulong)(uint)(&DAT_7105313f68)[lVar45 * 0x2c];
  nn::prepo::PlayReport::Add((char *)(*puVar47 + 0x4020),(Any64BitId *)"rating");
  uVar21 = FUN_7103264270(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x168),
                          (undefined1 *)(&DAT_71053087b0)[lVar45 * 0x39]);
  uVar18 = 0xff;
  if (-1 < (int)(uint)uVar21) {
    uVar18 = (uint)uVar21 & 0xff;
  }
  local_960 = (long ***)(ulong)uVar18;
  nn::prepo::PlayReport::Add((char *)(*puVar47 + 0x4020),(Any64BitId *)"fighter_id");
  uVar21 = (&DAT_71053087a8)[lVar45 * 0x39];
  puVar22 = FUN_71032631a0(*(long *)(lVar29 + 0x168),0xfd5f7fa78);
  if (((((uVar21 & 0xff00000000000000) == 0xc100000000000000) && ((uVar21 & 0xffffffffff) != 0)) &&
      (((ulong)puVar22 & 0xff00000000000000) == 0xc100000000000000)) &&
     (((ulong)puVar22 & 0xffffffffff) != 0)) {
    local_960 = (long ***)(ulong)((((ulong)puVar22 ^ uVar21) & 0xffffffffff) == 0);
  }
  else {
    local_960 = (long ***)
                (ulong)((((ulong)puVar22 & 0xffffffffff) != 0 &&
                        ((ulong)puVar22 & 0xff00000000000000) == 0xc100000000000000) !=
                        ((uVar21 & 0xff00000000000000) == 0xc100000000000000 &&
                        (uVar21 & 0xffffffffff) != 0) ^ 1);
  }
  nn::prepo::PlayReport::Add((char *)(*puVar47 + 0x4020),(Any64BitId *)"fighter_random");
  local_960 = (long ***)(ulong)(byte)(&DAT_71053087b8)[lVar45 * 0x1c8];
  nn::prepo::PlayReport::Add((char *)(*puVar47 + 0x4020),(Any64BitId *)"fighter_color");
  if (DAT_710530a9c0 == '\0') {
    uVar21 = *puVar47;
  }
  else {
    uVar21 = *puVar47;
  }
  nn::prepo::PlayReport::Add((char *)(uVar21 + 0x4020),0x710429129e);
  nn::prepo::PlayReport::Add((char *)(*puVar47 + 0x4020),0x71043cfd26);
  if (DAT_71052c3950 == (undefined8 *)0x0) {
    uVar21 = *puVar47;
  }
  else {
    FUN_71015922f0((long *)*DAT_71052c3950);
    uVar21 = *puVar47;
  }
  nn::prepo::PlayReport::Add((char *)(uVar21 + 0x4020),0x710438c06e);
  nn::prepo::PlayReport::Add((char *)(*puVar47 + 0x4020),0x71043bcf19);
  nn::prepo::PlayReport::Add((char *)(*puVar47 + 0x4020),0x71043bdd6e);
  lVar38 = param_1 + lVar45 * 0x1a7c;
  if (0 < *(int *)(lVar38 + 400)) {
    lVar40 = 0;
    do {
      lVar3 = lVar40 + 1;
      local_958 = (long ***)((ulong)local_958 & 0xffffffffffffff00);
      local_960 = (long ***)0x0;
      local_c0 = (Any64BitId)0x0;
      local_c8 = (long ***)0x0;
      FUN_710062dc20((uint *)&local_960,"beated_%02d_");
      uVar18 = 0x811c9dc5;
      uVar21 = 0;
      do {
        uVar30 = uVar21;
        if (*(Any64BitId *)((long)&local_958 + uVar21) == (Any64BitId)0x0) break;
        cVar6 = *(char *)((long)&local_958 + uVar21 + 1);
        (&local_c0)[uVar21] = *(Any64BitId *)((long)&local_958 + uVar21);
        if (cVar6 == '\0') {
          uVar30 = uVar21 + 1;
          break;
        }
        cVar7 = *(char *)((long)&local_958 + uVar21 + 2);
        local_bf[uVar21] = cVar6;
        if (cVar7 == '\0') {
          uVar30 = uVar21 + 2;
          break;
        }
        uVar30 = uVar21 + 3;
        local_bf[uVar21 + 1] = cVar7;
        uVar21 = uVar30;
      } while ((uint)uVar30 < 0x3f);
      (&local_c0)[uVar30 & 0xffffffff] = (Any64BitId)0x0;
      uVar16 = (uint)(byte)local_c0;
      iVar19 = (int)uVar30;
      local_c8 = (long ***)CONCAT44(iVar19,(uint)local_c8);
      pbVar36 = local_bf;
      local_c8._0_4_ = uVar18;
      if (local_c0 != (Any64BitId)0x0) {
        do {
          local_c8._0_4_ = (uint)local_c8 * 0x89 ^ uVar16;
          uVar16 = (uint)*pbVar36;
          pbVar36 = pbVar36 + 1;
        } while (uVar16 != 0);
      }
      local_c8._4_4_ = iVar19;
      if (iVar19 < 0x3f) {
        uVar16 = iVar19 - 1;
        pcVar31 = "my_fighter";
        do {
          AVar8 = (Any64BitId)*pcVar31;
          if (AVar8 == (Any64BitId)0x0) break;
          lVar39 = (long)(int)local_c8._4_4_;
          uVar16 = uVar16 + 1;
          pcVar31 = pcVar31 + 1;
          local_c8._4_4_ = local_c8._4_4_ + 1;
          (&local_c0)[lVar39] = AVar8;
        } while (uVar16 < 0x3e);
      }
      (&local_c0)[(int)local_c8._4_4_] = (Any64BitId)0x0;
      uVar16 = (uint)(byte)local_c0;
      pbVar36 = local_bf;
      if (local_c0 != (Any64BitId)0x0) {
        do {
          uVar18 = uVar18 * 0x89 ^ uVar16;
          uVar16 = (uint)*pbVar36;
          pbVar36 = pbVar36 + 1;
        } while (uVar16 != 0);
      }
      local_c8 = (long ***)CONCAT44(local_c8._4_4_,uVar18);
      FUN_710172a1e0(*(int *)(param_1 + lVar45 * 0x1a7c + lVar40 * 0x20 + 0x4c),1);
      nn::prepo::PlayReport::Add((char *)(*puVar47 + 0x4020),&local_c0);
      uVar18 = 0x811c9dc5;
      uVar21 = 0;
      do {
        uVar30 = uVar21;
        if (*(Any64BitId *)((long)&local_958 + uVar21) == (Any64BitId)0x0) break;
        cVar6 = *(char *)((long)&local_958 + uVar21 + 1);
        (&local_c0)[uVar21] = *(Any64BitId *)((long)&local_958 + uVar21);
        if (cVar6 == '\0') {
          uVar30 = uVar21 + 1;
          break;
        }
        cVar7 = *(char *)((long)&local_958 + uVar21 + 2);
        local_bf[uVar21] = cVar6;
        if (cVar7 == '\0') {
          uVar30 = uVar21 + 2;
          break;
        }
        uVar30 = uVar21 + 3;
        local_bf[uVar21 + 1] = cVar7;
        uVar21 = uVar30;
      } while ((uint)uVar30 < 0x3f);
      (&local_c0)[uVar30 & 0xffffffff] = (Any64BitId)0x0;
      uVar16 = (uint)(byte)local_c0;
      iVar19 = (int)uVar30;
      local_c8 = (long ***)CONCAT44(iVar19,(uint)local_c8);
      pbVar36 = local_bf;
      local_c8._0_4_ = uVar18;
      if (local_c0 != (Any64BitId)0x0) {
        do {
          local_c8._0_4_ = (uint)local_c8 * 0x89 ^ uVar16;
          uVar16 = (uint)*pbVar36;
          pbVar36 = pbVar36 + 1;
        } while (uVar16 != 0);
      }
      local_c8._4_4_ = iVar19;
      if (iVar19 < 0x3f) {
        uVar16 = iVar19 - 1;
        pcVar31 = "opponent_player";
        do {
          AVar8 = (Any64BitId)*pcVar31;
          if (AVar8 == (Any64BitId)0x0) break;
          lVar39 = (long)(int)local_c8._4_4_;
          uVar16 = uVar16 + 1;
          pcVar31 = pcVar31 + 1;
          local_c8._4_4_ = local_c8._4_4_ + 1;
          (&local_c0)[lVar39] = AVar8;
        } while (uVar16 < 0x3e);
      }
      (&local_c0)[(int)local_c8._4_4_] = (Any64BitId)0x0;
      uVar16 = (uint)(byte)local_c0;
      pbVar36 = local_bf;
      if (local_c0 != (Any64BitId)0x0) {
        do {
          uVar18 = uVar18 * 0x89 ^ uVar16;
          uVar16 = (uint)*pbVar36;
          pbVar36 = pbVar36 + 1;
        } while (uVar16 != 0);
      }
      local_c8 = (long ***)CONCAT44(local_c8._4_4_,uVar18);
      nn::prepo::PlayReport::Add((char *)(*puVar47 + 0x4020),(long)&local_c0);
      uVar18 = 0x811c9dc5;
      uVar21 = 0;
      do {
        uVar30 = uVar21;
        if (*(Any64BitId *)((long)&local_958 + uVar21) == (Any64BitId)0x0) break;
        cVar6 = *(char *)((long)&local_958 + uVar21 + 1);
        (&local_c0)[uVar21] = *(Any64BitId *)((long)&local_958 + uVar21);
        if (cVar6 == '\0') {
          uVar30 = uVar21 + 1;
          break;
        }
        cVar7 = *(char *)((long)&local_958 + uVar21 + 2);
        local_bf[uVar21] = cVar6;
        if (cVar7 == '\0') {
          uVar30 = uVar21 + 2;
          break;
        }
        uVar30 = uVar21 + 3;
        local_bf[uVar21 + 1] = cVar7;
        uVar21 = uVar30;
      } while ((uint)uVar30 < 0x3f);
      (&local_c0)[uVar30 & 0xffffffff] = (Any64BitId)0x0;
      uVar16 = (uint)(byte)local_c0;
      iVar19 = (int)uVar30;
      local_c8 = (long ***)CONCAT44(iVar19,(uint)local_c8);
      pbVar36 = local_bf;
      local_c8._0_4_ = uVar18;
      if (local_c0 != (Any64BitId)0x0) {
        do {
          local_c8._0_4_ = (uint)local_c8 * 0x89 ^ uVar16;
          uVar16 = (uint)*pbVar36;
          pbVar36 = pbVar36 + 1;
        } while (uVar16 != 0);
      }
      local_c8._4_4_ = iVar19;
      if (iVar19 < 0x3f) {
        uVar16 = iVar19 - 1;
        pcVar31 = "opponent_fighter";
        do {
          AVar8 = (Any64BitId)*pcVar31;
          if (AVar8 == (Any64BitId)0x0) break;
          lVar39 = (long)(int)local_c8._4_4_;
          uVar16 = uVar16 + 1;
          pcVar31 = pcVar31 + 1;
          local_c8._4_4_ = local_c8._4_4_ + 1;
          (&local_c0)[lVar39] = AVar8;
        } while (uVar16 < 0x3e);
      }
      (&local_c0)[(int)local_c8._4_4_] = (Any64BitId)0x0;
      uVar16 = (uint)(byte)local_c0;
      pbVar36 = local_bf;
      if (local_c0 != (Any64BitId)0x0) {
        do {
          uVar18 = uVar18 * 0x89 ^ uVar16;
          uVar16 = (uint)*pbVar36;
          pbVar36 = pbVar36 + 1;
        } while (uVar16 != 0);
      }
      local_c8 = (long ***)CONCAT44(local_c8._4_4_,uVar18);
      FUN_710172a1e0(*(int *)(param_1 + lVar45 * 0x1a7c + lVar40 * 0x20 + 0x54),1);
      nn::prepo::PlayReport::Add((char *)(*puVar47 + 0x4020),&local_c0);
      uVar18 = 0x811c9dc5;
      uVar21 = 0;
      do {
        uVar30 = uVar21;
        if (*(Any64BitId *)((long)&local_958 + uVar21) == (Any64BitId)0x0) break;
        cVar6 = *(char *)((long)&local_958 + uVar21 + 1);
        (&local_c0)[uVar21] = *(Any64BitId *)((long)&local_958 + uVar21);
        if (cVar6 == '\0') {
          uVar30 = uVar21 + 1;
          break;
        }
        cVar7 = *(char *)((long)&local_958 + uVar21 + 2);
        local_bf[uVar21] = cVar6;
        if (cVar7 == '\0') {
          uVar30 = uVar21 + 2;
          break;
        }
        uVar30 = uVar21 + 3;
        local_bf[uVar21 + 1] = cVar7;
        uVar21 = uVar30;
      } while ((uint)uVar30 < 0x3f);
      (&local_c0)[uVar30 & 0xffffffff] = (Any64BitId)0x0;
      uVar16 = (uint)(byte)local_c0;
      iVar19 = (int)uVar30;
      local_c8 = (long ***)CONCAT44(iVar19,(uint)local_c8);
      pbVar36 = local_bf;
      local_c8._0_4_ = uVar18;
      if (local_c0 != (Any64BitId)0x0) {
        do {
          local_c8._0_4_ = (uint)local_c8 * 0x89 ^ uVar16;
          uVar16 = (uint)*pbVar36;
          pbVar36 = pbVar36 + 1;
        } while (uVar16 != 0);
      }
      local_c8._4_4_ = iVar19;
      if (iVar19 < 0x3f) {
        uVar16 = iVar19 - 1;
        pcVar31 = "attack_type";
        do {
          AVar8 = (Any64BitId)*pcVar31;
          if (AVar8 == (Any64BitId)0x0) break;
          lVar39 = (long)(int)local_c8._4_4_;
          uVar16 = uVar16 + 1;
          pcVar31 = pcVar31 + 1;
          local_c8._4_4_ = local_c8._4_4_ + 1;
          (&local_c0)[lVar39] = AVar8;
        } while (uVar16 < 0x3e);
      }
      (&local_c0)[(int)local_c8._4_4_] = (Any64BitId)0x0;
      uVar16 = (uint)(byte)local_c0;
      pbVar36 = local_bf;
      if (local_c0 != (Any64BitId)0x0) {
        do {
          uVar18 = uVar18 * 0x89 ^ uVar16;
          uVar16 = (uint)*pbVar36;
          pbVar36 = pbVar36 + 1;
        } while (uVar16 != 0);
      }
      local_c8 = (long ***)CONCAT44(local_c8._4_4_,uVar18);
      uVar21 = 0x1c00bc6504;
      uVar18 = *(int *)(param_1 + lVar45 * 0x1a7c + lVar40 * 0x20 + 0x5c) - 1;
      if (uVar18 < 0x81) {
        uVar21 = *(ulong *)(&DAT_710453c800 + (long)(int)uVar18 * 8);
      }
      uVar30 = 0;
      while (((((&DAT_7104543278)[uVar30] ^ uVar21) & 0xffffffffff) != 0 &&
             ((((&DAT_7104543280)[uVar30] ^ uVar21) & 0xffffffffff) != 0))) {
        if (((((&DAT_7104543288)[uVar30] ^ uVar21) & 0xffffffffff) == 0) ||
           (uVar30 = uVar30 + 3, 0x41 < uVar30)) break;
      }
      nn::prepo::PlayReport::Add((char *)(*puVar47 + 0x4020),(long)&local_c0);
      uVar18 = 0x811c9dc5;
      uVar21 = 0;
      do {
        uVar30 = uVar21;
        if (*(Any64BitId *)((long)&local_958 + uVar21) == (Any64BitId)0x0) break;
        cVar6 = *(char *)((long)&local_958 + uVar21 + 1);
        (&local_c0)[uVar21] = *(Any64BitId *)((long)&local_958 + uVar21);
        if (cVar6 == '\0') {
          uVar30 = uVar21 + 1;
          break;
        }
        cVar7 = *(char *)((long)&local_958 + uVar21 + 2);
        local_bf[uVar21] = cVar6;
        if (cVar7 == '\0') {
          uVar30 = uVar21 + 2;
          break;
        }
        uVar30 = uVar21 + 3;
        local_bf[uVar21 + 1] = cVar7;
        uVar21 = uVar30;
      } while ((uint)uVar30 < 0x3f);
      (&local_c0)[uVar30 & 0xffffffff] = (Any64BitId)0x0;
      uVar16 = (uint)(byte)local_c0;
      iVar19 = (int)uVar30;
      local_c8 = (long ***)CONCAT44(iVar19,(uint)local_c8);
      pbVar36 = local_bf;
      local_c8._0_4_ = uVar18;
      if (local_c0 != (Any64BitId)0x0) {
        do {
          local_c8._0_4_ = (uint)local_c8 * 0x89 ^ uVar16;
          uVar16 = (uint)*pbVar36;
          pbVar36 = pbVar36 + 1;
        } while (uVar16 != 0);
      }
      local_c8._4_4_ = iVar19;
      if (iVar19 < 0x3f) {
        uVar16 = iVar19 - 1;
        pcVar31 = "self_damage";
        do {
          AVar8 = (Any64BitId)*pcVar31;
          if (AVar8 == (Any64BitId)0x0) break;
          lVar40 = (long)(int)local_c8._4_4_;
          uVar16 = uVar16 + 1;
          pcVar31 = pcVar31 + 1;
          local_c8._4_4_ = local_c8._4_4_ + 1;
          (&local_c0)[lVar40] = AVar8;
        } while (uVar16 < 0x3e);
      }
      (&local_c0)[(int)local_c8._4_4_] = (Any64BitId)0x0;
      uVar16 = (uint)(byte)local_c0;
      pbVar36 = local_bf;
      if (local_c0 != (Any64BitId)0x0) {
        do {
          uVar18 = uVar18 * 0x89 ^ uVar16;
          uVar16 = (uint)*pbVar36;
          pbVar36 = pbVar36 + 1;
        } while (uVar16 != 0);
      }
      local_c8 = (long ***)CONCAT44(local_c8._4_4_,uVar18);
      nn::prepo::PlayReport::Add((char *)(*puVar47 + 0x4020),(long)&local_c0);
      uVar18 = 0x811c9dc5;
      uVar21 = 0;
      do {
        uVar30 = uVar21;
        if (*(Any64BitId *)((long)&local_958 + uVar21) == (Any64BitId)0x0) break;
        cVar6 = *(char *)((long)&local_958 + uVar21 + 1);
        (&local_c0)[uVar21] = *(Any64BitId *)((long)&local_958 + uVar21);
        if (cVar6 == '\0') {
          uVar30 = uVar21 + 1;
          break;
        }
        cVar7 = *(char *)((long)&local_958 + uVar21 + 2);
        local_bf[uVar21] = cVar6;
        if (cVar7 == '\0') {
          uVar30 = uVar21 + 2;
          break;
        }
        uVar30 = uVar21 + 3;
        local_bf[uVar21 + 1] = cVar7;
        uVar21 = uVar30;
      } while ((uint)uVar30 < 0x3f);
      (&local_c0)[uVar30 & 0xffffffff] = (Any64BitId)0x0;
      uVar16 = (uint)(byte)local_c0;
      iVar19 = (int)uVar30;
      local_c8 = (long ***)CONCAT44(iVar19,(uint)local_c8);
      pbVar36 = local_bf;
      local_c8._0_4_ = uVar18;
      if (local_c0 != (Any64BitId)0x0) {
        do {
          local_c8._0_4_ = (uint)local_c8 * 0x89 ^ uVar16;
          uVar16 = (uint)*pbVar36;
          pbVar36 = pbVar36 + 1;
        } while (uVar16 != 0);
      }
      local_c8._4_4_ = iVar19;
      if (iVar19 < 0x3f) {
        uVar16 = iVar19 - 1;
        pcVar31 = "opposing_damage";
        do {
          AVar8 = (Any64BitId)*pcVar31;
          if (AVar8 == (Any64BitId)0x0) break;
          lVar40 = (long)(int)local_c8._4_4_;
          uVar16 = uVar16 + 1;
          pcVar31 = pcVar31 + 1;
          local_c8._4_4_ = local_c8._4_4_ + 1;
          (&local_c0)[lVar40] = AVar8;
        } while (uVar16 < 0x3e);
      }
      (&local_c0)[(int)local_c8._4_4_] = (Any64BitId)0x0;
      uVar16 = (uint)(byte)local_c0;
      pbVar36 = local_bf;
      if (local_c0 != (Any64BitId)0x0) {
        do {
          uVar18 = uVar18 * 0x89 ^ uVar16;
          uVar16 = (uint)*pbVar36;
          pbVar36 = pbVar36 + 1;
        } while (uVar16 != 0);
      }
      local_c8 = (long ***)CONCAT44(local_c8._4_4_,uVar18);
      nn::prepo::PlayReport::Add((char *)(*puVar47 + 0x4020),(long)&local_c0);
      lVar40 = lVar3;
    } while (lVar3 < *(int *)(lVar38 + 400));
  }
  nn::prepo::PlayReport::Save((Uid *)(*puVar47 + 0x4020));
  plVar20 = (long *)(**(code **)(*(long *)*DAT_71052c33e8 + 0x20))();
  local_100 = (ulong *)0xffffffff;
  uVar21 = (&DAT_71053087b0)[lVar45 * 0x39];
  local_f8 = 0;
  lVar29 = *(long *)(lVar29 + 0x168);
  puVar22 = FUN_71032631a0(lVar29,0x11b1ccb807);
  if ((((uVar21 & 0xff00000000000000) == 0xc100000000000000) && ((uVar21 & 0xffffffffff) != 0)) &&
     ((((ulong)puVar22 & 0xff00000000000000) == 0xc100000000000000 &&
      (((ulong)puVar22 & 0xffffffffff) != 0)))) {
    if ((((ulong)puVar22 ^ uVar21) & 0xffffffffff) == 0) goto LAB_7101742850;
LAB_7101742840:
    uVar18 = FUN_71032632a0(lVar29,uVar21);
    if ((uVar18 & 1) != 0) goto LAB_7101742850;
    iVar19 = 0;
    local_100 = (ulong *)0x100000000;
    local_f8 = 2;
  }
  else {
    if ((((ulong)puVar22 & 0xffffffffff) != 0 &&
        ((ulong)puVar22 & 0xff00000000000000) == 0xc100000000000000) !=
        ((uVar21 & 0xff00000000000000) == 0xc100000000000000 && (uVar21 & 0xffffffffff) != 0))
    goto LAB_7101742840;
LAB_7101742850:
    lVar29 = param_1 + lVar45 * 0x1a7c;
    iVar48 = *(int *)(lVar29 + 0x9f4);
    iVar19 = -(uint)(*(int *)(lVar29 + 0x194) != 0x24);
    if (iVar48 == 0x24) {
      uVar33 = 0;
      local_f8 = 0;
      iVar19 = 1;
    }
    else if (iVar48 == 0x25) {
      local_f8 = 0;
      uVar33 = 1;
    }
    else if (iVar48 == 0x26) {
      uVar33 = 0;
      local_f8 = 1;
    }
    else {
      uVar33 = 0;
      local_f8 = 0;
    }
    iVar48 = *(int *)(param_1 + lVar45 * 0x1a7c + 0x1254);
    if (iVar48 == 0x24) {
      iVar19 = 2;
    }
    else if (iVar48 == 0x25) {
      uVar33 = 2;
    }
    else if (iVar48 == 0x26) {
      local_f8 = 2;
    }
    local_100 = (ulong *)CONCAT44(uVar33,iVar19);
    if (iVar19 < 0) goto LAB_7101743564;
  }
  uVar21 = 0;
  pAVar4 = (Any64BitId *)((long)&local_9a8 + 1);
  do {
    pppplVar26 = (long ****)0x860;
    memcpy(&local_960,(void *)(param_1 + lVar45 * 0x1a7c + (long)iVar19 * 0x860 + 0x194),0x860);
    iVar19 = (int)local_960;
    if ((int)local_960 != -1) {
      pcVar31 = (char *)plVar20[1];
      if ((*pcVar31 == '\f') && (iVar48 = *(int *)(pcVar31 + 1) + -1, 0 < *(int *)(pcVar31 + 1))) {
        local_9d0 = *plVar20;
        iVar28 = 0;
        do {
          iVar37 = iVar48 + iVar28;
          if (iVar37 < 0) {
            iVar37 = iVar37 + 1;
          }
          iVar37 = iVar37 >> 1;
          puVar1 = (uint *)(*(long *)(local_9d0 + 0x28) + (long)*(int *)(pcVar31 + 5) +
                           (long)iVar37 * 8);
          uVar30 = *(ulong *)(*(long *)(local_9d0 + 0x20) + (ulong)*puVar1 * 8);
          if (uVar30 == 0x10836cd5fd) {
            uVar18 = puVar1[1];
            if (-1 < (int)uVar18) {
              pbVar36 = (byte *)(pcVar31 + (int)uVar18);
              goto LAB_7101742a14;
            }
            break;
          }
          iVar5 = iVar37 + -1;
          if (uVar30 < 0x10836cd5fe) {
            iVar28 = iVar37 + 1;
            iVar5 = iVar48;
          }
          iVar48 = iVar5;
        } while (iVar28 <= iVar48);
      }
      pbVar36 = &DAT_7104742dbb;
      local_9d0 = 0;
LAB_7101742a14:
      bVar9 = *pbVar36;
      if ((bVar9 - 0xb < 2) && (iVar48 = *(int *)(pbVar36 + 1), 0 < iVar48)) {
        uVar30 = 0;
        do {
          if (bVar9 == 0xb) {
            lVar29 = local_9d0;
            pbVar35 = pbVar36 + *(int *)(pbVar36 + (uVar30 & 0x3fffffff) * 4 + 5);
          }
          else {
            lVar29 = 0;
            pbVar35 = &DAT_7104742dbb;
          }
          if ((*pbVar35 == 0xc) && (iVar28 = *(int *)(pbVar35 + 1) + -1, 0 < *(int *)(pbVar35 + 1)))
          {
            iVar37 = 0;
            do {
              iVar5 = iVar28 + iVar37;
              if (iVar5 < 0) {
                iVar5 = iVar5 + 1;
              }
              iVar5 = iVar5 >> 1;
              puVar1 = (uint *)(*(long *)(lVar29 + 0x28) + (long)*(int *)(pbVar35 + 5) +
                               (long)iVar5 * 8);
              uVar41 = *(ulong *)(*(long *)(lVar29 + 0x20) + (ulong)*puVar1 * 8);
              if (uVar41 == 0xc541ef0b2) {
                uVar18 = puVar1[1];
                if (-1 < (int)uVar18) {
                  pbVar35 = pbVar35 + (int)uVar18;
                  goto LAB_7101742af8;
                }
                break;
              }
              iVar14 = iVar5 + -1;
              if (uVar41 < 0xc541ef0b3) {
                iVar37 = iVar5 + 1;
                iVar14 = iVar28;
              }
              iVar28 = iVar14;
            } while (iVar37 <= iVar28);
          }
          lVar29 = 0;
          pbVar35 = &DAT_7104742dbb;
LAB_7101742af8:
          if (*pbVar35 == 9) {
            uVar41 = *(ulong *)(*(long *)(lVar29 + 0x20) + (long)*(int *)(pbVar35 + 1) * 8);
          }
          else {
            uVar41 = 0;
          }
          uVar24 = FUN_710066cd40(uVar41);
          if ((int)uVar24 == iVar19) goto LAB_7101742b48;
          uVar30 = uVar30 + 1;
        } while ((long)uVar30 < (long)iVar48);
      }
      uVar30 = 0;
LAB_7101742b48:
      FUN_710375aa90((long *)&local_968,"ev_match_detail",pppplVar26,param_4,param_5,param_6,param_7
                     ,param_8);
      local_c8 = local_9d8;
      nn::prepo::PlayReport::Add((char *)(*local_968 + 0x804),(Any64BitId *)"match_id_lo");
      local_c8 = local_9e0;
      nn::prepo::PlayReport::Add((char *)(*local_968 + 0x804),(Any64BitId *)"match_id_hi");
      nn::prepo::PlayReport::Add((char *)(*local_968 + 0x804),0x71043bcf19);
      ppplVar46 = local_968;
      uVar18 = FUN_710172a1e0(iVar19,1);
      local_c8 = (long ***)((ulong)uVar18 & 0xff);
      nn::prepo::PlayReport::Add((char *)(*ppplVar46 + 0x804),(Any64BitId *)"fighter_id");
      local_c8 = (long ***)((ulong)local_960 / 0x3c00000000);
      nn::prepo::PlayReport::Add((char *)(*local_968 + 0x804),(Any64BitId *)"playing_time");
      local_c8 = (long ***)((ulong)local_958 & 0xffffffff);
      nn::prepo::PlayReport::Add((char *)(*local_968 + 0x804),(Any64BitId *)"kill_num");
      local_c8 = (long ***)((ulong)local_958 >> 0x20);
      nn::prepo::PlayReport::Add((char *)(*local_968 + 0x804),(Any64BitId *)"beated_num");
      local_c8 = (long ***)(ulong)local_950;
      nn::prepo::PlayReport::Add((char *)(*local_968 + 0x804),(Any64BitId *)"suicide_num");
      local_c8 = (long ***)(ulong)local_94c;
      nn::prepo::PlayReport::Add((char *)(*local_968 + 0x804),(Any64BitId *)"put_damage_total");
      ppplVar46 = local_968;
      local_c8 = (long ***)(ulong)local_948;
      nn::prepo::PlayReport::Add((char *)(*local_968 + 0x804),(Any64BitId *)"get_damage_total");
      local_c8 = (long ***)(ulong)local_944;
      nn::prepo::PlayReport::Add((char *)(*ppplVar46 + 0x804),(Any64BitId *)"max_put_damage");
      ppplVar46 = local_968;
      local_c8 = (long ***)(ulong)local_940;
      nn::prepo::PlayReport::Add((char *)(*local_968 + 0x804),(Any64BitId *)"max_damage");
      local_c8 = (long ***)(ulong)local_93c;
      nn::prepo::PlayReport::Add((char *)(*ppplVar46 + 0x804),(Any64BitId *)"sheild_break_num");
      ppplVar46 = local_968;
      local_c8 = (long ***)(ulong)local_938;
      nn::prepo::PlayReport::Add((char *)(*local_968 + 0x804),(Any64BitId *)"cliff_hang_num");
      local_c8 = (long ***)(ulong)local_934;
      nn::prepo::PlayReport::Add((char *)(*ppplVar46 + 0x804),(Any64BitId *)"cliff_climb_num");
      ppplVar46 = local_968;
      local_c8 = (long ***)(ulong)local_930;
      nn::prepo::PlayReport::Add((char *)(*local_968 + 0x804),(Any64BitId *)"cliff_attack_num");
      local_c8 = (long ***)(ulong)local_92c;
      nn::prepo::PlayReport::Add((char *)(*ppplVar46 + 0x804),(Any64BitId *)"cliff_escape_num");
      ppplVar46 = local_968;
      local_c8 = (long ***)(ulong)local_928;
      nn::prepo::PlayReport::Add((char *)(*local_968 + 0x804),(Any64BitId *)"cliff_jump_num");
      local_c8 = (long ***)(ulong)local_924;
      pppplVar26 = (long ****)&local_c8;
      nn::prepo::PlayReport::Add((char *)(*ppplVar46 + 0x804),(Any64BitId *)"cliff_leave_num");
      lVar29 = 0;
      iVar48 = 0x14;
LAB_7101742e24:
      do {
        pbVar35 = &DAT_7104742dbb;
        if ((*pbVar36 == 0xb) && ((int)uVar30 < *(int *)(pbVar36 + 1))) {
          pbVar32 = pbVar36 + *(int *)(pbVar36 + (ulong)(uint)((int)uVar30 << 2) + 5);
          lVar38 = local_9d0;
        }
        else {
          lVar38 = 0;
          pbVar32 = pbVar35;
        }
        uVar41 = (&DAT_7104543278)[lVar29];
        if ((*pbVar32 == 0xc) && (iVar28 = *(int *)(pbVar32 + 1) + -1, 0 < *(int *)(pbVar32 + 1))) {
          iVar37 = 0;
          do {
            iVar5 = iVar28 + iVar37;
            if (iVar5 < 0) {
              iVar5 = iVar5 + 1;
            }
            iVar5 = iVar5 >> 1;
            puVar1 = (uint *)(*(long *)(lVar38 + 0x28) + (long)*(int *)(pbVar32 + 5) +
                             (long)iVar5 * 8);
            uVar42 = *(ulong *)(*(long *)(lVar38 + 0x20) + (ulong)*puVar1 * 8);
            if (uVar42 == (uVar41 & 0xffffffffff)) {
              uVar18 = puVar1[1];
              if (-1 < (int)uVar18) {
                pbVar35 = pbVar32 + (int)uVar18;
              }
              break;
            }
            iVar14 = iVar5 + -1;
            if (uVar42 <= (uVar41 & 0xffffffffff)) {
              iVar37 = iVar5 + 1;
              iVar14 = iVar28;
            }
            iVar28 = iVar14;
          } while (iVar37 <= iVar28);
        }
        switch(*pbVar35) {
        case 1:
        case 3:
          bVar9 = pbVar35[1];
          uVar41 = FUN_71006dae20(uVar41);
          if (bVar9 == 0) break;
          goto LAB_7101742f40;
        case 2:
          bVar9 = pbVar35[1];
          uVar41 = FUN_71006dae20(uVar41);
          if (bVar9 != 0) goto LAB_7101742f40;
          break;
        case 4:
          sVar10 = *(short *)(pbVar35 + 1);
          uVar41 = FUN_71006dae20(uVar41);
          goto joined_r0x0071017434d8;
        case 5:
          sVar10 = *(short *)(pbVar35 + 1);
          uVar41 = FUN_71006dae20(uVar41);
joined_r0x0071017434d8:
          if (sVar10 != 0) {
LAB_7101742f40:
            if (0x60 < iVar48) {
              nn::prepo::PlayReport::Save((Uid *)(*local_968 + 0x804));
              FUN_710375aa90(&local_c8,"ev_match_detail",pppplVar26,param_4,param_5,param_6,param_7,
                             param_8);
              ppplVar43 = local_c8;
              ppplVar46 = local_968;
              local_c8 = (long ***)0x0;
              local_968 = ppplVar43;
              if (ppplVar46 != (long ***)0x0) {
                pplVar44 = *ppplVar46;
                *ppplVar46 = (long **)0x0;
                if (pplVar44 != (long **)0x0) {
                  FUN_710392eb40((ulong)pplVar44);
                }
                FUN_710392eb40((ulong)ppplVar46);
              }
              local_c8 = local_9d8;
              nn::prepo::PlayReport::Add((char *)(*local_968 + 0x804),(Any64BitId *)"match_id_lo");
              local_c8 = local_9e0;
              nn::prepo::PlayReport::Add((char *)(*local_968 + 0x804),(Any64BitId *)"match_id_hi");
              nn::prepo::PlayReport::Add((char *)(*local_968 + 0x804),0x71043bcf19);
              ppplVar46 = local_968;
              uVar18 = FUN_710172a1e0(iVar19,1);
              local_c8 = (long ***)((ulong)uVar18 & 0xff);
              nn::prepo::PlayReport::Add((char *)(*ppplVar46 + 0x804),(Any64BitId *)"fighter_id");
              iVar48 = 4;
            }
            lVar29 = lVar29 + 1;
            local_c0 = (Any64BitId)0x0;
            local_c8 = (long ***)0x0;
            local_9a8 = (long *)((ulong)local_9a8 & 0xffffffffffffff00);
            FUN_710062dc20((uint *)&local_c8,"attack_%02d_");
            uVar16 = auStack_920[(uVar41 & 0xffffffff) * 4];
            fVar50 = afStack_914[(uVar41 & 0xffffffff) * 4];
            uVar18 = *(uint *)((ulong)(auStack_920 + (uVar41 & 0xffffffff) * 4) | 4);
            uVar41 = 0;
            do {
              uVar42 = uVar41;
              if ((&local_c0)[uVar41] == (Any64BitId)0x0) break;
              ((Any64BitId *)&local_9a8)[uVar41] = (&local_c0)[uVar41];
              if (local_bf[uVar41] == '\0') {
                uVar42 = uVar41 + 1;
                break;
              }
              *(byte *)((long)&local_9a8 + uVar41 + 1) = local_bf[uVar41];
              if (local_bf[uVar41 + 1] == '\0') {
                uVar42 = uVar41 + 2;
                break;
              }
              uVar42 = uVar41 + 3;
              *(byte *)((long)&local_9a8 + uVar41 + 2) = local_bf[uVar41 + 1];
              uVar41 = uVar42;
            } while ((uint)uVar42 < 0x3f);
            *(undefined1 *)((long)&local_9a8 + (uVar42 & 0xffffffff)) = 0;
            local_9b0._4_4_ = (uint)uVar42;
            pAVar12 = pAVar4;
            AVar8 = local_9a8._0_1_;
            while (AVar8 != (Any64BitId)0x0) {
              AVar8 = *pAVar12;
              pAVar12 = pAVar12 + 1;
            }
            if ((int)local_9b0._4_4_ < 0x3f) {
              uVar17 = local_9b0._4_4_ - 1;
              pcVar31 = "attack_num";
              do {
                local_9b0._4_4_ = (uint)uVar42;
                cVar6 = *pcVar31;
                if (cVar6 == '\0') break;
                lVar38 = (long)(int)local_9b0._4_4_;
                uVar17 = uVar17 + 1;
                pcVar31 = pcVar31 + 1;
                local_9b0._4_4_ = local_9b0._4_4_ + 1;
                uVar42 = (ulong)local_9b0._4_4_;
                *(char *)((long)&local_9a8 + lVar38) = cVar6;
              } while (uVar17 < 0x3e);
            }
            *(undefined1 *)((long)&local_9a8 + (long)(int)local_9b0._4_4_) = 0;
            pAVar12 = pAVar4;
            AVar8 = local_9a8._0_1_;
            while (AVar8 != (Any64BitId)0x0) {
              AVar8 = *pAVar12;
              pAVar12 = pAVar12 + 1;
            }
            local_80[0] = (long ***)(ulong)uVar16;
            nn::prepo::PlayReport::Add((char *)(*local_968 + 0x804),(Any64BitId *)&local_9a8);
            uVar41 = 0;
            do {
              uVar42 = uVar41;
              if ((&local_c0)[uVar41] == (Any64BitId)0x0) break;
              ((Any64BitId *)&local_9a8)[uVar41] = (&local_c0)[uVar41];
              if (local_bf[uVar41] == '\0') {
                uVar42 = uVar41 + 1;
                break;
              }
              *(byte *)((long)&local_9a8 + uVar41 + 1) = local_bf[uVar41];
              if (local_bf[uVar41 + 1] == '\0') {
                uVar42 = uVar41 + 2;
                break;
              }
              uVar42 = uVar41 + 3;
              *(byte *)((long)&local_9a8 + uVar41 + 2) = local_bf[uVar41 + 1];
              uVar41 = uVar42;
            } while ((uint)uVar42 < 0x3f);
            *(undefined1 *)((long)&local_9a8 + (uVar42 & 0xffffffff)) = 0;
            uVar16 = (uint)uVar42;
            pAVar12 = pAVar4;
            AVar8 = local_9a8._0_1_;
            while (AVar8 != (Any64BitId)0x0) {
              AVar8 = *pAVar12;
              pAVar12 = pAVar12 + 1;
            }
            uVar17 = uVar16;
            if ((int)uVar16 < 0x3f) {
              uVar2 = uVar16 + 1;
              *(undefined1 *)((long)&local_9a8 + (long)(int)uVar16) = 0x68;
              uVar17 = uVar2;
              if (uVar16 < 0x3e) {
                uVar17 = uVar16 + 2;
                *(undefined1 *)((long)&local_9a8 + (long)(int)uVar2) = 0x69;
                if (uVar2 < 0x3e) {
                  lVar38 = (long)(int)uVar17;
                  uVar17 = uVar16 + 3;
                  *(undefined1 *)((long)&local_9a8 + lVar38) = 0x74;
                  if (uVar16 + 2 < 0x3e) {
                    lVar38 = (long)(int)uVar17;
                    uVar17 = uVar16 + 4;
                    *(undefined1 *)((long)&local_9a8 + lVar38) = 0x5f;
                    if (uVar16 + 3 < 0x3e) {
                      lVar38 = (long)(int)uVar17;
                      uVar17 = uVar16 + 5;
                      *(undefined1 *)((long)&local_9a8 + lVar38) = 0x6e;
                      if (uVar16 + 4 < 0x3e) {
                        lVar38 = (long)(int)uVar17;
                        uVar17 = uVar16 + 6;
                        *(undefined1 *)((long)&local_9a8 + lVar38) = 0x75;
                        if (uVar16 + 5 < 0x3e) {
                          lVar38 = (long)(int)uVar17;
                          uVar17 = uVar16 + 7;
                          *(undefined1 *)((long)&local_9a8 + lVar38) = 0x6d;
                        }
                      }
                    }
                  }
                }
              }
            }
            *(undefined1 *)((long)&local_9a8 + (long)(int)uVar17) = 0;
            pAVar12 = pAVar4;
            AVar8 = local_9a8._0_1_;
            while (AVar8 != (Any64BitId)0x0) {
              AVar8 = *pAVar12;
              pAVar12 = pAVar12 + 1;
            }
            local_80[0] = (long ***)(ulong)uVar18;
            nn::prepo::PlayReport::Add((char *)(*local_968 + 0x804),(Any64BitId *)&local_9a8);
            uVar41 = 0;
            do {
              uVar42 = uVar41;
              if ((&local_c0)[uVar41] == (Any64BitId)0x0) break;
              ((Any64BitId *)&local_9a8)[uVar41] = (&local_c0)[uVar41];
              if (local_bf[uVar41] == '\0') {
                uVar42 = uVar41 + 1;
                break;
              }
              *(byte *)((long)&local_9a8 + uVar41 + 1) = local_bf[uVar41];
              if (local_bf[uVar41 + 1] == '\0') {
                uVar42 = uVar41 + 2;
                break;
              }
              uVar42 = uVar41 + 3;
              *(byte *)((long)&local_9a8 + uVar41 + 2) = local_bf[uVar41 + 1];
              uVar41 = uVar42;
            } while ((uint)uVar42 < 0x3f);
            *(undefined1 *)((long)&local_9a8 + (uVar42 & 0xffffffff)) = 0;
            local_9b0._4_4_ = (uint)uVar42;
            pAVar12 = pAVar4;
            AVar8 = local_9a8._0_1_;
            while (AVar8 != (Any64BitId)0x0) {
              AVar8 = *pAVar12;
              pAVar12 = pAVar12 + 1;
            }
            if ((int)local_9b0._4_4_ < 0x3f) {
              uVar18 = local_9b0._4_4_ - 1;
              pcVar31 = "total_damage";
              do {
                local_9b0._4_4_ = (uint)uVar42;
                cVar6 = *pcVar31;
                if (cVar6 == '\0') break;
                lVar38 = (long)(int)local_9b0._4_4_;
                uVar18 = uVar18 + 1;
                pcVar31 = pcVar31 + 1;
                local_9b0._4_4_ = local_9b0._4_4_ + 1;
                uVar42 = (ulong)local_9b0._4_4_;
                *(char *)((long)&local_9a8 + lVar38) = cVar6;
              } while (uVar18 < 0x3e);
            }
            *(undefined1 *)((long)&local_9a8 + (long)(int)local_9b0._4_4_) = 0;
            pAVar12 = pAVar4;
            AVar8 = local_9a8._0_1_;
            while (AVar8 != (Any64BitId)0x0) {
              AVar8 = *pAVar12;
              pAVar12 = pAVar12 + 1;
            }
            pppplVar26 = (long ****)(long)fVar50;
            nn::prepo::PlayReport::Add((char *)(*local_968 + 0x804),(long)&local_9a8);
            iVar48 = iVar48 + 3;
            if (lVar29 == 0x42) goto LAB_71017434e0;
            goto LAB_7101742e24;
          }
          break;
        case 6:
        case 7:
          iVar28 = *(int *)(pbVar35 + 1);
          uVar41 = FUN_71006dae20(uVar41);
          if (iVar28 != 0) goto LAB_7101742f40;
        }
        lVar29 = lVar29 + 1;
      } while (lVar29 != 0x42);
LAB_71017434e0:
      nn::prepo::PlayReport::Save((Uid *)(*local_968 + 0x804));
      ppplVar46 = local_968;
      local_968 = (long ***)0x0;
      if (ppplVar46 != (long ***)0x0) {
        pplVar44 = *ppplVar46;
        *ppplVar46 = (long **)0x0;
        if (pplVar44 != (long **)0x0) {
          FUN_710392eb40((ulong)pplVar44);
        }
        FUN_710392eb40((ulong)ppplVar46);
      }
    }
    uVar21 = uVar21 + 1;
  } while ((uVar21 < 3) && (iVar19 = *(int *)((long)&local_100 + uVar21 * 4), -1 < iVar19));
  puVar47 = local_f0;
  if (local_f0 == (ulong *)0x0) {
    return;
  }
LAB_7101743564:
  local_f0 = (ulong *)0x0;
  uVar21 = *puVar47;
  *puVar47 = 0;
  if (uVar21 != 0) {
    FUN_710392eb40(uVar21);
  }
  FUN_710392eb40((ulong)puVar47);
  return;
}

