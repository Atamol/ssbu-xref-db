// addr:      7102f709c0
// offset:    0x2f709c0
// name:      FUN_7102f709c0
// mangled:   
// signature: undefined __cdecl FUN_7102f709c0(long * param_1, long param_2, long param_3, long * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7102f709c0(long *param_1,long param_2,long param_3,long *param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *********ppppppppplVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong *puVar13;
  undefined8 *puVar14;
  byte *pbVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  undefined4 uVar34;
  undefined4 uVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  byte bVar39;
  undefined1 uVar40;
  char cVar41;
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  bool bVar47;
  uint uVar48;
  undefined4 uVar49;
  int iVar50;
  long *plVar51;
  undefined1 *puVar52;
  char *pcVar53;
  undefined1 *puVar54;
  long *plVar55;
  ulong uVar56;
  long ***ppplVar57;
  long *plVar58;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 uVar59;
  undefined **ppuVar60;
  long ****pppplVar61;
  long *********ppppppppplVar62;
  byte ****ppppbVar63;
  uint *puVar64;
  code *pcVar65;
  long lVar66;
  long lVar67;
  long **pplVar68;
  uint *puVar69;
  ulong uVar70;
  ulong uVar71;
  long lVar72;
  long ****pppplVar73;
  uint uVar74;
  long **pplVar75;
  byte *pbVar76;
  undefined8 *puVar77;
  ulong *puVar78;
  long lVar79;
  float fVar80;
  undefined1 auVar81 [16];
  float fVar82;
  uint local_1a8 [2];
  long ***local_1a0;
  long **local_198;
  long **local_190;
  ushort local_a0;
  long **local_98;
  ulong *local_90;
  long **local_88;
  undefined4 local_7c [3];
  
  *param_1 = (long)&PTR_FUN_7105158708;
  param_1[1] = param_2;
  param_1[2] = param_3;
  lVar79 = *param_4;
  lVar66 = param_4[1];
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x18] = 0;
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x20] = 0;
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x28] = 0;
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  param_1[0x30] = 0;
  *(undefined4 *)((long)param_1 + 0x84) = 0;
  *(undefined8 *)((long)param_1 + 0x7c) = 0;
  *(undefined8 *)((long)param_1 + 0x74) = 0;
  *(undefined8 *)((long)param_1 + 0x6c) = 0;
  *(undefined8 *)((long)param_1 + 100) = 0;
  *(undefined8 *)((long)param_1 + 0x5c) = 0;
  *(undefined8 *)((long)param_1 + 0x54) = 0;
  *(undefined8 *)((long)param_1 + 0x4c) = 0;
  *(undefined8 *)((long)param_1 + 0x44) = 0;
  *(undefined8 *)((long)param_1 + 0x3c) = 0;
  *(undefined8 *)((long)param_1 + 0x34) = 0;
  *(undefined8 *)((long)param_1 + 0x2c) = 0;
  param_1[3] = lVar79;
  param_1[4] = lVar66;
  if (2 < *(uint *)(param_2 + 0xb8)) goto LAB_7102f72e2c;
  ppppbVar63 = (byte ****)*param_4;
  lVar79 = *(long *)(DAT_710532a9d0 + (ulong)*(uint *)(param_2 + 0xb8) * 8);
  pcVar53 = "%s.nuanmb";
  FUN_7101ea04d0((undefined1 *)&local_1a0,param_2,"%s.nuanmb",ppppbVar63,param_5,param_6,param_7,
                 param_8);
  puVar64 = *(uint **)(lVar79 + 0x3c0);
  puVar69 = *(uint **)(lVar79 + 0x3c8);
  if (puVar64 != puVar69) {
    uVar71 = (ulong)local_a0;
    if (uVar71 == 0) {
      uVar70 = 0;
    }
    else {
      uVar48 = 0xffffffff;
      pppplVar61 = &local_1a0;
      do {
        pppplVar73 = (long ****)((long)pppplVar61 + 1);
        bVar39 = *(byte *)pppplVar61;
        uVar74 = bVar39 + 0x20;
        if (0x19 < bVar39 - 0x41) {
          uVar74 = (uint)bVar39;
        }
        uVar48 = (&DAT_7104754084)[(uVar74 ^ uVar48) & 0xff] ^ uVar48 >> 8;
        pppplVar61 = pppplVar73;
      } while (pppplVar73 < (long ****)((long)&local_1a0 + uVar71));
      uVar70 = (ulong)~uVar48;
    }
    uVar70 = uVar70 | (uVar71 & 0xff) << 0x20;
    do {
      uVar48 = *puVar64;
      if ((uVar48 == 0xffffff) ||
         (*(uint *)(*(long *)(**(long **)(DAT_7105332f20 + 0x78) + 0x40) + 4) <= uVar48)) {
        if (uVar70 == 0) goto LAB_7102f71568;
      }
      else if (*(ulong *)(*(long *)(**(long **)(DAT_7105332f20 + 0x78) + 0x60) +
                          (ulong)uVar48 * 0x20 + 0x18) == uVar70) {
LAB_7102f71568:
        local_1a8[0] = *puVar64;
        if (local_1a8[0] != 0xffffff) {
          FUN_7103540a00(DAT_7105332f20,local_1a8[0]);
        }
        goto LAB_7102f70b6c;
      }
      puVar64 = puVar64 + 1;
    } while (puVar69 != puVar64);
  }
  local_1a8[0] = 0xffffff;
LAB_7102f70b6c:
  plVar51 = (long *)FUN_710392e290(0x10,0x10,(long ****)pcVar53,ppppbVar63,param_5,param_6,param_7,
                                   param_8);
  ppuVar60 = (undefined **)pcVar53;
  if (plVar51 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_98 = (long **)((ulong)local_98 & 0xffffffff00000000);
      local_1a0 = (long ***)&DAT_00000010;
      ppuVar60 = (undefined **)&local_1a0;
      uVar71 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_98);
      if (((uVar71 & 1) != 0) &&
         (plVar51 = (long *)FUN_710392e290(0x10,0x10,(long ****)ppuVar60,ppppbVar63,param_5,param_6,
                                           param_7,param_8), plVar51 != (long *)0x0))
      goto LAB_7102f70bc8;
    }
    plVar51 = (long *)0x0;
  }
LAB_7102f70bc8:
  FUN_710318b040(plVar51,(long ****)local_1a8,(long ****)ppuVar60,ppppbVar63,param_5,param_6,param_7
                 ,param_8);
  puVar77 = (undefined8 *)param_1[6];
  param_1[6] = (long)plVar51;
  if (puVar77 != (undefined8 *)0x0) {
    plVar51 = (long *)puVar77[1];
    *puVar77 = 0;
    puVar77[1] = 0;
    if (plVar51 != (long *)0x0) {
      plVar55 = plVar51 + 1;
      do {
        lVar79 = *plVar55;
        cVar41 = '\x01';
        bVar47 = (bool)ExclusiveMonitorPass(plVar55,0x10);
        if (bVar47) {
          *plVar55 = lVar79 + -1;
          cVar41 = ExclusiveMonitorsStatus();
        }
      } while (cVar41 != '\0');
      if (lVar79 == 0) {
        (**(code **)(*plVar51 + 0x10))(plVar51);
        std::__shared_weak_count::__release_weak();
      }
      plVar51 = (long *)puVar77[1];
      if (plVar51 != (long *)0x0) {
        plVar55 = plVar51 + 1;
        do {
          lVar79 = *plVar55;
          cVar41 = '\x01';
          bVar47 = (bool)ExclusiveMonitorPass(plVar55,0x10);
          if (bVar47) {
            *plVar55 = lVar79 + -1;
            cVar41 = ExclusiveMonitorsStatus();
          }
        } while (cVar41 != '\0');
        if (lVar79 == 0) {
          (**(code **)(*plVar51 + 0x10))(plVar51);
          std::__shared_weak_count::__release_weak();
        }
      }
    }
    FUN_710392eb40((ulong)puVar77);
  }
  if ((*(char *)(param_3 + 0x10) == '\0') || (6 < *(byte *)(param_3 + 0xa4) - 1)) {
    puVar52 = (undefined1 *)
              FUN_710392e290(0x10,0x60,(long ****)ppuVar60,ppppbVar63,param_5,param_6,param_7,
                             param_8);
    if (puVar52 == (undefined1 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_98 = (long **)((ulong)local_98 & 0xffffffff00000000);
        local_1a0 = (long ***)&DAT_00000060;
        ppuVar60 = (undefined **)&local_1a0;
        uVar71 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_98);
        if (((uVar71 & 1) != 0) &&
           (puVar52 = (undefined1 *)
                      FUN_710392e290(0x10,0x60,(long ****)ppuVar60,ppppbVar63,param_5,param_6,
                                     param_7,param_8), puVar52 != (undefined1 *)0x0))
        goto LAB_7102f714d4;
      }
      puVar52 = (undefined1 *)0x0;
    }
LAB_7102f714d4:
    *puVar52 = 0;
    *(undefined8 *)(puVar52 + 0x10) = 0;
    *(undefined4 *)(puVar52 + 0x18) = 0;
    *(undefined8 *)(puVar52 + 0x40) = 0;
    *(undefined8 *)(puVar52 + 0x50) = 0;
    uVar71 = param_1[7];
    param_1[7] = (long)puVar52;
    if (uVar71 != 0) {
      uVar70 = *(ulong *)(uVar71 + 0x50);
      *(undefined8 *)(uVar71 + 0x50) = 0;
      if (uVar70 != 0) {
        lVar79 = *(long *)(uVar70 + 0x40);
        if (lVar79 != 0) {
          plVar51 = (long *)(uVar70 + 0x10);
          do {
            plVar55 = (long *)*plVar51;
            lVar79 = lVar79 + -1;
            *plVar51 = 0;
            if (plVar55 != (long *)0x0) {
              (**(code **)(*plVar55 + 8))();
            }
            plVar51 = plVar51 + 1;
          } while (lVar79 != 0);
        }
        goto LAB_7102f71530;
      }
      goto LAB_7102f71548;
    }
  }
  else {
    lVar79 = param_4[1];
    uVar16 = *(undefined4 *)(lVar79 + 0xc);
    uVar17 = *(undefined4 *)(lVar79 + 0x10);
    uVar18 = *(undefined4 *)(lVar79 + 0x14);
    uVar19 = *(undefined4 *)(lVar79 + 0x1c);
    uVar20 = *(undefined4 *)(lVar79 + 0x20);
    uVar21 = *(undefined4 *)(lVar79 + 0x24);
    uVar22 = *(undefined4 *)(lVar79 + 0x28);
    uVar49 = *(undefined4 *)(lVar79 + 0x2c);
    uVar6 = *(undefined4 *)(lVar79 + 0x30);
    uVar23 = *(undefined4 *)(lVar79 + 0x34);
    uVar2 = *(undefined4 *)(lVar79 + 0x38);
    uVar7 = *(undefined4 *)(lVar79 + 0x3c);
    uVar24 = *(undefined4 *)(lVar79 + 0x50);
    uVar3 = *(undefined4 *)(lVar79 + 0x40);
    uVar8 = *(undefined4 *)(lVar79 + 0x44);
    uVar4 = *(undefined4 *)(lVar79 + 0x48);
    uVar9 = *(undefined4 *)(lVar79 + 0x4c);
    uVar25 = *(undefined4 *)(lVar79 + 0x54);
    uVar26 = *(undefined4 *)(lVar79 + 0x58);
    uVar27 = *(undefined4 *)(lVar79 + 0x5c);
    uVar28 = *(undefined4 *)(lVar79 + 0x60);
    uVar29 = *(undefined4 *)(lVar79 + 100);
    uVar30 = *(undefined4 *)(lVar79 + 0x68);
    uVar31 = *(undefined4 *)(lVar79 + 0x6c);
    uVar32 = *(undefined4 *)(lVar79 + 0x70);
    uVar33 = *(undefined4 *)(lVar79 + 0x74);
    uVar34 = *(undefined4 *)(lVar79 + 0x78);
    uVar35 = *(undefined4 *)(lVar79 + 0x7c);
    uVar36 = *(undefined4 *)(lVar79 + 0x80);
    uVar37 = *(undefined4 *)(lVar79 + 0x84);
    uVar38 = *(undefined4 *)(lVar79 + 0x88);
    uVar5 = *(undefined4 *)(lVar79 + 0x8c);
    uVar10 = *(undefined4 *)(lVar79 + 0x90);
    puVar52 = (undefined1 *)
              FUN_710392e290(0x10,0x48,(long ****)ppuVar60,ppppbVar63,param_5,param_6,param_7,
                             param_8);
    if (puVar52 == (undefined1 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_98 = (long **)((ulong)local_98 & 0xffffffff00000000);
        local_1a0 = (long ***)&DAT_00000048;
        ppuVar60 = (undefined **)&local_1a0;
        uVar71 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_98);
        if (((uVar71 & 1) != 0) &&
           (puVar52 = (undefined1 *)
                      FUN_710392e290(0x10,0x48,(long ****)ppuVar60,ppppbVar63,param_5,param_6,
                                     param_7,param_8), puVar52 != (undefined1 *)0x0))
        goto LAB_7102f70dac;
      }
      puVar52 = (undefined1 *)0x0;
    }
LAB_7102f70dac:
    *puVar52 = 0;
    *(undefined8 *)(puVar52 + 8) = 0;
    *(undefined8 *)(puVar52 + 0x40) = 0;
    pcVar53 = (char *)FUN_710392e290(0x10,0x1c0,(long ****)ppuVar60,ppppbVar63,param_5,param_6,
                                     param_7,param_8);
    if (pcVar53 == (char *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_98 = (long **)((ulong)local_98 & 0xffffffff00000000);
        local_1a0 = (long ***)&DAT_000001c0;
        ppuVar60 = (undefined **)&local_1a0;
        uVar71 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_98);
        if (((uVar71 & 1) != 0) &&
           (pcVar53 = (char *)FUN_710392e290(0x10,0x1c0,(long ****)ppuVar60,ppppbVar63,param_5,
                                             param_6,param_7,param_8), pcVar53 != (char *)0x0))
        goto LAB_7102f70e0c;
      }
      pcVar53 = (char *)0x0;
    }
LAB_7102f70e0c:
    pcVar53[8] = '\0';
    pcVar53[9] = '\0';
    pcVar53[10] = '\0';
    pcVar53[0xb] = '\0';
    pcVar53[0xc] = '\0';
    pcVar53[0xd] = '\0';
    pcVar53[0xe] = '\0';
    pcVar53[0xf] = '\0';
    pcVar53[4] = '\0';
    pcVar53[0] = '\0';
    pcVar53[1] = '\0';
    pcVar53[2] = '\0';
    pcVar53[3] = '\0';
    pcVar53[0x110] = '\0';
    pcVar53[0x111] = '\0';
    pcVar53[0x112] = '\0';
    pcVar53[0x113] = '\0';
    pcVar53[0x114] = '\0';
    pcVar53[0x115] = '\0';
    pcVar53[0x116] = '\0';
    pcVar53[0x117] = '\0';
    pcVar53[0x1b8] = '\0';
    pcVar53[0x1b9] = '\0';
    pcVar53[0x1ba] = '\0';
    pcVar53[0x1bb] = '\0';
    pcVar53[0x1bc] = '\0';
    pcVar53[0x1bd] = '\0';
    pcVar53[0x1be] = '\0';
    pcVar53[0x1bf] = '\0';
    if (((DAT_71053144d8 & 1) == 0) && (iVar50 = __cxa_guard_acquire(&DAT_71053144d8), iVar50 != 0))
    {
      FUN_7101764000();
      ppuVar60 = &PTR_LOOP_7104f17000;
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    if (((DAT_71053144d8 & 1) == 0) && (iVar50 = __cxa_guard_acquire(&DAT_71053144d8), iVar50 != 0))
    {
      FUN_7101764000();
      ppuVar60 = &PTR_LOOP_7104f17000;
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
    }
    *pcVar53 = (DAT_71052c51b0 & 0xfe) == 2 && DAT_71052c51e9 == '\x03';
    pcVar53[1] = DAT_71052c51f8 != 0 && DAT_71052c51be != '\0';
    bVar47 = DAT_71052c51b2 == '\x02';
    pcVar53[2] = DAT_71052c51b2 == '\x01';
    pcVar53[3] = bVar47;
    pcVar53[4] = DAT_71052c51e8 == '\x01';
    uVar48 = 2;
    if (DAT_71052c599a == '\x02') {
      uVar48 = 1;
    }
    uVar74 = (uint)(DAT_71052c599a != '\x02');
    if (DAT_71052c573a != '\x02') {
      uVar74 = uVar48;
    }
    if (DAT_71052c5bfa != '\x02') {
      uVar74 = uVar74 + 1;
    }
    if (DAT_71052c5e5a != '\x02') {
      uVar74 = uVar74 + 1;
    }
    if (DAT_71052c60ba != '\x02') {
      uVar74 = uVar74 + 1;
    }
    if (DAT_71052c631a != '\x02') {
      uVar74 = uVar74 + 1;
    }
    if (DAT_71052c657a != '\x02') {
      uVar74 = uVar74 + 1;
    }
    if (DAT_71052c67da != '\x02') {
      uVar74 = uVar74 + 1;
    }
    iVar50 = _DAT_71052c51fc * uVar74;
    *(uint *)(pcVar53 + 8) = uVar74;
    *(int *)(pcVar53 + 0xc) = iVar50;
    uVar71 = *(ulong *)(puVar52 + 8);
    *(char **)(puVar52 + 8) = pcVar53;
    if (uVar71 != 0) {
      FUN_710392eb40(uVar71);
      pcVar53 = *(char **)(puVar52 + 8);
    }
    if (pcVar53[3] != '\0') {
      if ((pcVar53[4] == '\0') && (*pcVar53 == '\0')) {
        puVar77 = (undefined8 *)
                  FUN_710392e290(0x10,0x30,(long ****)ppuVar60,ppppbVar63,param_5,param_6,param_7,
                                 param_8);
        if (puVar77 == (undefined8 *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_98 = (long **)((ulong)local_98 & 0xffffffff00000000);
            local_1a0 = (long ***)&DAT_00000030;
            ppuVar60 = (undefined **)&local_1a0;
            uVar71 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_98);
            if (((uVar71 & 1) != 0) &&
               (puVar77 = (undefined8 *)
                          FUN_710392e290(0x10,0x30,(long ****)ppuVar60,ppppbVar63,param_5,param_6,
                                         param_7,param_8), puVar77 != (undefined8 *)0x0))
            goto LAB_7102f70fb8;
          }
          puVar77 = (undefined8 *)0x0;
        }
LAB_7102f70fb8:
        *puVar77 = &PTR_FUN_7105158398;
        *(undefined4 *)(puVar77 + 1) = uVar6;
        *(undefined4 *)((long)puVar77 + 0xc) = uVar23;
        *(undefined4 *)(puVar77 + 2) = uVar2;
        *(undefined4 *)((long)puVar77 + 0x14) = uVar7;
        *(undefined4 *)(puVar77 + 3) = uVar3;
        *(undefined4 *)((long)puVar77 + 0x1c) = uVar8;
        *(undefined4 *)(puVar77 + 4) = uVar4;
        *(undefined4 *)((long)puVar77 + 0x24) = uVar9;
        *(undefined4 *)(puVar77 + 5) = uVar24;
        *(undefined4 *)((long)puVar77 + 0x2c) = 0;
        if (5 < *(ulong *)(puVar52 + 0x40)) goto LAB_7102f72e2c;
        *(undefined8 **)(puVar52 + *(ulong *)(puVar52 + 0x40) * 8 + 0x10) = puVar77;
        pcVar53 = *(char **)(puVar52 + 8);
        *(long *)(puVar52 + 0x40) = *(long *)(puVar52 + 0x40) + 1;
        if (pcVar53[3] == '\0') goto LAB_7102f710e4;
      }
      if ((pcVar53[4] != '\0') && (*pcVar53 == '\0')) {
        puVar77 = (undefined8 *)
                  FUN_710392e290(0x10,0x30,(long ****)ppuVar60,ppppbVar63,param_5,param_6,param_7,
                                 param_8);
        if (puVar77 == (undefined8 *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_98 = (long **)((ulong)local_98 & 0xffffffff00000000);
            local_1a0 = (long ***)&DAT_00000030;
            ppuVar60 = (undefined **)&local_1a0;
            uVar71 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_98);
            if (((uVar71 & 1) != 0) &&
               (puVar77 = (undefined8 *)
                          FUN_710392e290(0x10,0x30,(long ****)ppuVar60,ppppbVar63,param_5,param_6,
                                         param_7,param_8), puVar77 != (undefined8 *)0x0))
            goto LAB_7102f71070;
          }
          puVar77 = (undefined8 *)0x0;
        }
LAB_7102f71070:
        *puVar77 = &PTR_FUN_71051583c0;
        *(undefined4 *)(puVar77 + 1) = uVar32;
        *(undefined4 *)((long)puVar77 + 0xc) = uVar33;
        *(undefined4 *)(puVar77 + 2) = uVar34;
        *(undefined4 *)((long)puVar77 + 0x14) = uVar35;
        *(undefined4 *)(puVar77 + 3) = uVar36;
        *(undefined4 *)((long)puVar77 + 0x1c) = uVar37;
        *(undefined4 *)(puVar77 + 4) = uVar38;
        *(undefined4 *)((long)puVar77 + 0x24) = uVar5;
        *(undefined4 *)(puVar77 + 5) = uVar10;
        *(undefined4 *)((long)puVar77 + 0x2c) = 0;
        if (5 < *(ulong *)(puVar52 + 0x40)) goto LAB_7102f72e2c;
        *(undefined8 **)(puVar52 + *(ulong *)(puVar52 + 0x40) * 8 + 0x10) = puVar77;
        pcVar53 = *(char **)(puVar52 + 8);
        *(long *)(puVar52 + 0x40) = *(long *)(puVar52 + 0x40) + 1;
      }
    }
LAB_7102f710e4:
    if (pcVar53[2] != '\0') {
      if ((pcVar53[4] == '\0') && (*pcVar53 == '\0')) {
        puVar77 = (undefined8 *)
                  FUN_710392e290(0x10,0x30,(long ****)ppuVar60,ppppbVar63,param_5,param_6,param_7,
                                 param_8);
        if (puVar77 == (undefined8 *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_98 = (long **)((ulong)local_98 & 0xffffffff00000000);
            local_1a0 = (long ***)&DAT_00000030;
            ppuVar60 = (undefined **)&local_1a0;
            uVar71 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_98);
            if (((uVar71 & 1) != 0) &&
               (puVar77 = (undefined8 *)
                          FUN_710392e290(0x10,0x30,(long ****)ppuVar60,ppppbVar63,param_5,param_6,
                                         param_7,param_8), puVar77 != (undefined8 *)0x0))
            goto LAB_7102f71150;
          }
          puVar77 = (undefined8 *)0x0;
        }
LAB_7102f71150:
        *puVar77 = &PTR_FUN_71051583e8;
        *(undefined4 *)(puVar77 + 1) = uVar18;
        *(undefined4 *)((long)puVar77 + 0xc) = uVar23;
        *(undefined4 *)(puVar77 + 2) = uVar19;
        *(undefined4 *)((long)puVar77 + 0x14) = uVar20;
        *(undefined4 *)(puVar77 + 3) = uVar21;
        *(undefined4 *)((long)puVar77 + 0x1c) = 0;
        *(undefined4 *)(puVar77 + 4) = uVar22;
        *(undefined4 *)((long)puVar77 + 0x24) = uVar49;
        puVar77[5] = 0;
        if (5 < *(ulong *)(puVar52 + 0x40)) goto LAB_7102f72e2c;
        *(undefined8 **)(puVar52 + *(ulong *)(puVar52 + 0x40) * 8 + 0x10) = puVar77;
        pcVar53 = *(char **)(puVar52 + 8);
        *(long *)(puVar52 + 0x40) = *(long *)(puVar52 + 0x40) + 1;
        if (pcVar53[2] == '\0') goto LAB_7102f7128c;
      }
      if ((pcVar53[4] != '\0') && (*pcVar53 == '\0')) {
        puVar77 = (undefined8 *)
                  FUN_710392e290(0x10,0x30,(long ****)ppuVar60,ppppbVar63,param_5,param_6,param_7,
                                 param_8);
        if (puVar77 == (undefined8 *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_98 = (long **)((ulong)local_98 & 0xffffffff00000000);
            local_1a0 = (long ***)&DAT_00000030;
            ppuVar60 = (undefined **)&local_1a0;
            uVar71 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_98);
            if (((uVar71 & 1) != 0) &&
               (puVar77 = (undefined8 *)
                          FUN_710392e290(0x10,0x30,(long ****)ppuVar60,ppppbVar63,param_5,param_6,
                                         param_7,param_8), puVar77 != (undefined8 *)0x0))
            goto LAB_7102f71224;
          }
          puVar77 = (undefined8 *)0x0;
        }
LAB_7102f71224:
        *puVar77 = &PTR_FUN_7105158410;
        *(undefined4 *)(puVar77 + 1) = uVar25;
        *(undefined4 *)((long)puVar77 + 0xc) = uVar26;
        *(undefined4 *)(puVar77 + 2) = uVar27;
        *(undefined4 *)((long)puVar77 + 0x14) = uVar28;
        *(undefined4 *)(puVar77 + 3) = uVar29;
        *(undefined4 *)((long)puVar77 + 0x1c) = 0;
        *(undefined4 *)(puVar77 + 4) = uVar30;
        *(undefined4 *)((long)puVar77 + 0x24) = uVar31;
        puVar77[5] = 0;
        if (5 < *(ulong *)(puVar52 + 0x40)) goto LAB_7102f72e2c;
        *(undefined8 **)(puVar52 + *(ulong *)(puVar52 + 0x40) * 8 + 0x10) = puVar77;
        pcVar53 = *(char **)(puVar52 + 8);
        *(long *)(puVar52 + 0x40) = *(long *)(puVar52 + 0x40) + 1;
      }
    }
LAB_7102f7128c:
    if (pcVar53[1] != '\0') {
      puVar77 = (undefined8 *)
                FUN_710392e290(0x10,0x10,(long ****)ppuVar60,ppppbVar63,param_5,param_6,param_7,
                               param_8);
      if (puVar77 == (undefined8 *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_98 = (long **)((ulong)local_98 & 0xffffffff00000000);
          local_1a0 = (long ***)&DAT_00000010;
          ppuVar60 = (undefined **)&local_1a0;
          uVar71 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_98);
          if (((uVar71 & 1) != 0) &&
             (puVar77 = (undefined8 *)
                        FUN_710392e290(0x10,0x10,(long ****)ppuVar60,ppppbVar63,param_5,param_6,
                                       param_7,param_8), puVar77 != (undefined8 *)0x0))
          goto LAB_7102f712e8;
        }
        puVar77 = (undefined8 *)0x0;
      }
LAB_7102f712e8:
      *puVar77 = &PTR_FUN_7105158438;
      *(undefined4 *)(puVar77 + 1) = uVar16;
      if (5 < *(ulong *)(puVar52 + 0x40)) goto LAB_7102f72e2c;
      *(undefined8 **)(puVar52 + *(ulong *)(puVar52 + 0x40) * 8 + 0x10) = puVar77;
      pcVar53 = *(char **)(puVar52 + 8);
      *(long *)(puVar52 + 0x40) = *(long *)(puVar52 + 0x40) + 1;
    }
    if ((*pcVar53 != '\0') && ((pcVar53[2] != '\0' || (pcVar53[3] != '\0')))) {
      puVar77 = (undefined8 *)
                FUN_710392e290(0x10,0x10,(long ****)ppuVar60,ppppbVar63,param_5,param_6,param_7,
                               param_8);
      if (puVar77 == (undefined8 *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_98 = (long **)((ulong)local_98 & 0xffffffff00000000);
          local_1a0 = (long ***)&DAT_00000010;
          ppuVar60 = (undefined **)&local_1a0;
          uVar71 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_98);
          if (((uVar71 & 1) != 0) &&
             (puVar77 = (undefined8 *)
                        FUN_710392e290(0x10,0x10,(long ****)ppuVar60,ppppbVar63,param_5,param_6,
                                       param_7,param_8), puVar77 != (undefined8 *)0x0))
          goto LAB_7102f71388;
        }
        puVar77 = (undefined8 *)0x0;
      }
LAB_7102f71388:
      *puVar77 = &PTR_FUN_7105158460;
      *(undefined4 *)(puVar77 + 1) = uVar17;
      if (5 < *(ulong *)(puVar52 + 0x40)) {
LAB_7102f72e2c:
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(undefined8 **)(puVar52 + *(ulong *)(puVar52 + 0x40) * 8 + 0x10) = puVar77;
      *(long *)(puVar52 + 0x40) = *(long *)(puVar52 + 0x40) + 1;
    }
    lVar79 = param_4[1];
    puVar54 = (undefined1 *)
              FUN_710392e290(0x10,0x60,(long ****)ppuVar60,ppppbVar63,param_5,param_6,param_7,
                             param_8);
    if (puVar54 == (undefined1 *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_98 = (long **)((ulong)local_98 & 0xffffffff00000000);
        local_1a0 = (long ***)&DAT_00000060;
        ppuVar60 = (undefined **)&local_1a0;
        uVar71 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_98);
        if (((uVar71 & 1) != 0) &&
           (puVar54 = (undefined1 *)
                      FUN_710392e290(0x10,0x60,(long ****)ppuVar60,ppppbVar63,param_5,param_6,
                                     param_7,param_8), puVar54 != (undefined1 *)0x0))
        goto LAB_7102f71410;
      }
      puVar54 = (undefined1 *)0x0;
    }
LAB_7102f71410:
    fVar80 = *(float *)(lVar79 + 8);
    *puVar54 = 0;
    fVar80 = fVar80 * 60.0;
    *(undefined1 **)(puVar54 + 0x50) = puVar52;
    *(float *)(puVar54 + 0x18) = fVar80;
    *(float *)(puVar54 + 0x10) = fVar80;
    *(float *)(puVar54 + 0x14) = fVar80;
    *(undefined8 *)(puVar54 + 0x40) = 0;
    uVar71 = param_1[7];
    param_1[7] = (long)puVar54;
    if (uVar71 != 0) {
      uVar70 = *(ulong *)(uVar71 + 0x50);
      *(undefined8 *)(uVar71 + 0x50) = 0;
      if (uVar70 != 0) {
        lVar79 = *(long *)(uVar70 + 0x40);
        if (lVar79 != 0) {
          plVar51 = (long *)(uVar70 + 0x10);
          do {
            plVar55 = (long *)*plVar51;
            lVar79 = lVar79 + -1;
            *plVar51 = 0;
            if (plVar55 != (long *)0x0) {
              (**(code **)(*plVar55 + 8))();
            }
            plVar51 = plVar51 + 1;
          } while (lVar79 != 0);
        }
LAB_7102f71530:
        uVar56 = *(ulong *)(uVar70 + 8);
        *(undefined8 *)(uVar70 + 8) = 0;
        if (uVar56 != 0) {
          FUN_710392eb40(uVar56);
        }
        FUN_710392eb40(uVar70);
      }
LAB_7102f71548:
      plVar51 = *(long **)(uVar71 + 0x40);
      if ((long *)(uVar71 + 0x20) == plVar51) {
        pcVar65 = *(code **)(*plVar51 + 0x20);
LAB_7102f71590:
        (*pcVar65)();
      }
      else if (plVar51 != (long *)0x0) {
        pcVar65 = *(code **)(*plVar51 + 0x28);
        goto LAB_7102f71590;
      }
      FUN_710392eb40(uVar71);
    }
  }
  lVar79 = *(long *)param_1[6];
  fVar82 = 0.0;
  fVar80 = 0.0;
  if (((((lVar79 != 0) && (fVar80 = fVar82, *(char *)(lVar79 + 0xb8) != '\0')) &&
       (lVar79 = (**(code **)(**(long **)(lVar79 + 0x88) + 0x20))(*(long **)(lVar79 + 0x88),0),
       lVar79 != 0)) &&
      ((*(long **)(lVar79 + 0x10) != (long *)0x0 &&
       (**(long **)(lVar79 + 0x10) == *(long *)(lVar79 + 0x18))))) &&
     ((lVar79 = *(long *)(lVar79 + 8), lVar79 != 0 && (*(long *)(lVar79 + 8) != 0)))) {
    uVar48 = FUN_71038e1be0(lVar79);
    fVar80 = (float)uVar48;
  }
  pcVar53 = (char *)FUN_710392e290(0x10,0xd8,(long ****)ppuVar60,ppppbVar63,param_5,param_6,param_7,
                                   param_8);
  if (pcVar53 == (char *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_98 = (long **)((ulong)local_98 & 0xffffffff00000000);
      local_1a0 = (long ***)&DAT_000000d8;
      ppuVar60 = (undefined **)&local_1a0;
      uVar71 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_98);
      if (((uVar71 & 1) != 0) &&
         (pcVar53 = (char *)FUN_710392e290(0x10,0xd8,(long ****)ppuVar60,ppppbVar63,param_5,param_6,
                                           param_7,param_8), pcVar53 != (char *)0x0))
      goto LAB_7102f71658;
    }
    pcVar53 = (char *)0x0;
  }
LAB_7102f71658:
  pcVar53[0] = '\0';
  pcVar53[1] = '\0';
  pcVar53[0xc0] = '\0';
  pcVar53[0xc1] = '\0';
  pcVar53[0xc2] = '\0';
  pcVar53[0xc3] = '\0';
  pcVar53[0xc4] = '\0';
  pcVar53[0xc5] = '\0';
  pcVar53[0xc6] = '\0';
  pcVar53[199] = '\0';
  pcVar53[200] = '\0';
  pcVar53[0xc9] = '\0';
  pcVar53[0xca] = '\0';
  pcVar53[0xcb] = '\0';
  pcVar53[0xcc] = '\0';
  pcVar53[0xcd] = '\0';
  pcVar53[0xce] = '\0';
  pcVar53[0xcf] = '\0';
  pcVar53[8] = '\0';
  pcVar53[9] = '\0';
  pcVar53[10] = '\0';
  pcVar53[0xb] = '\0';
  pcVar53[0xc] = '\0';
  pcVar53[0xd] = '\0';
  pcVar53[0xe] = '\0';
  pcVar53[0xf] = '\0';
  *(float *)(pcVar53 + 0xd0) = fVar80;
  pcVar53[0xb0] = '\0';
  pcVar53[0xb1] = '\0';
  pcVar53[0xb2] = '\0';
  pcVar53[0xb3] = '\0';
  pcVar53[0xb4] = '\0';
  pcVar53[0xb5] = '\0';
  pcVar53[0xb6] = '\0';
  pcVar53[0xb7] = '\0';
  pcVar53[0xb8] = '\0';
  pcVar53[0xb9] = '\0';
  pcVar53[0xba] = '\0';
  pcVar53[0xbb] = '\0';
  pcVar53[0xbc] = '\0';
  pcVar53[0xbd] = '\0';
  pcVar53[0xbe] = '\0';
  pcVar53[0xbf] = '\0';
  pcVar53[0xa0] = '\0';
  pcVar53[0xa1] = '\0';
  pcVar53[0xa2] = '\0';
  pcVar53[0xa3] = '\0';
  pcVar53[0xa4] = '\0';
  pcVar53[0xa5] = '\0';
  pcVar53[0xa6] = '\0';
  pcVar53[0xa7] = '\0';
  pcVar53[0xa8] = '\0';
  pcVar53[0xa9] = '\0';
  pcVar53[0xaa] = '\0';
  pcVar53[0xab] = '\0';
  pcVar53[0xac] = '\0';
  pcVar53[0xad] = '\0';
  pcVar53[0xae] = '\0';
  pcVar53[0xaf] = '\0';
  pcVar53[0x90] = '\0';
  pcVar53[0x91] = '\0';
  pcVar53[0x92] = '\0';
  pcVar53[0x93] = '\0';
  pcVar53[0x94] = '\0';
  pcVar53[0x95] = '\0';
  pcVar53[0x96] = '\0';
  pcVar53[0x97] = '\0';
  pcVar53[0x98] = '\0';
  pcVar53[0x99] = '\0';
  pcVar53[0x9a] = '\0';
  pcVar53[0x9b] = '\0';
  pcVar53[0x9c] = '\0';
  pcVar53[0x9d] = '\0';
  pcVar53[0x9e] = '\0';
  pcVar53[0x9f] = '\0';
  pcVar53[0x80] = '\0';
  pcVar53[0x81] = '\0';
  pcVar53[0x82] = '\0';
  pcVar53[0x83] = '\0';
  pcVar53[0x84] = '\0';
  pcVar53[0x85] = '\0';
  pcVar53[0x86] = '\0';
  pcVar53[0x87] = '\0';
  pcVar53[0x88] = '\0';
  pcVar53[0x89] = '\0';
  pcVar53[0x8a] = '\0';
  pcVar53[0x8b] = '\0';
  pcVar53[0x8c] = '\0';
  pcVar53[0x8d] = '\0';
  pcVar53[0x8e] = '\0';
  pcVar53[0x8f] = '\0';
  pcVar53[0x70] = '\0';
  pcVar53[0x71] = '\0';
  pcVar53[0x72] = '\0';
  pcVar53[0x73] = '\0';
  pcVar53[0x74] = '\0';
  pcVar53[0x75] = '\0';
  pcVar53[0x76] = '\0';
  pcVar53[0x77] = '\0';
  pcVar53[0x78] = '\0';
  pcVar53[0x79] = '\0';
  pcVar53[0x7a] = '\0';
  pcVar53[0x7b] = '\0';
  pcVar53[0x7c] = '\0';
  pcVar53[0x7d] = '\0';
  pcVar53[0x7e] = '\0';
  pcVar53[0x7f] = '\0';
  pcVar53[0x60] = '\0';
  pcVar53[0x61] = '\0';
  pcVar53[0x62] = '\0';
  pcVar53[99] = '\0';
  pcVar53[100] = '\0';
  pcVar53[0x65] = '\0';
  pcVar53[0x66] = '\0';
  pcVar53[0x67] = '\0';
  pcVar53[0x68] = '\0';
  pcVar53[0x69] = '\0';
  pcVar53[0x6a] = '\0';
  pcVar53[0x6b] = '\0';
  pcVar53[0x6c] = '\0';
  pcVar53[0x6d] = '\0';
  pcVar53[0x6e] = '\0';
  pcVar53[0x6f] = '\0';
  pcVar53[0x50] = '\0';
  pcVar53[0x51] = '\0';
  pcVar53[0x52] = '\0';
  pcVar53[0x53] = '\0';
  pcVar53[0x54] = '\0';
  pcVar53[0x55] = '\0';
  pcVar53[0x56] = '\0';
  pcVar53[0x57] = '\0';
  pcVar53[0x58] = '\0';
  pcVar53[0x59] = '\0';
  pcVar53[0x5a] = '\0';
  pcVar53[0x5b] = '\0';
  pcVar53[0x5c] = '\0';
  pcVar53[0x5d] = '\0';
  pcVar53[0x5e] = '\0';
  pcVar53[0x5f] = '\0';
  pcVar53[0x40] = '\0';
  pcVar53[0x41] = '\0';
  pcVar53[0x42] = '\0';
  pcVar53[0x43] = '\0';
  pcVar53[0x44] = '\0';
  pcVar53[0x45] = '\0';
  pcVar53[0x46] = '\0';
  pcVar53[0x47] = '\0';
  pcVar53[0x48] = '\0';
  pcVar53[0x49] = '\0';
  pcVar53[0x4a] = '\0';
  pcVar53[0x4b] = '\0';
  pcVar53[0x4c] = '\0';
  pcVar53[0x4d] = '\0';
  pcVar53[0x4e] = '\0';
  pcVar53[0x4f] = '\0';
  pcVar53[0x30] = '\0';
  pcVar53[0x31] = '\0';
  pcVar53[0x32] = '\0';
  pcVar53[0x33] = '\0';
  pcVar53[0x34] = '\0';
  pcVar53[0x35] = '\0';
  pcVar53[0x36] = '\0';
  pcVar53[0x37] = '\0';
  pcVar53[0x38] = '\0';
  pcVar53[0x39] = '\0';
  pcVar53[0x3a] = '\0';
  pcVar53[0x3b] = '\0';
  pcVar53[0x3c] = '\0';
  pcVar53[0x3d] = '\0';
  pcVar53[0x3e] = '\0';
  pcVar53[0x3f] = '\0';
  pcVar53[0x20] = '\0';
  pcVar53[0x21] = '\0';
  pcVar53[0x22] = '\0';
  pcVar53[0x23] = '\0';
  pcVar53[0x24] = '\0';
  pcVar53[0x25] = '\0';
  pcVar53[0x26] = '\0';
  pcVar53[0x27] = '\0';
  pcVar53[0x28] = '\0';
  pcVar53[0x29] = '\0';
  pcVar53[0x2a] = '\0';
  pcVar53[0x2b] = '\0';
  pcVar53[0x2c] = '\0';
  pcVar53[0x2d] = '\0';
  pcVar53[0x2e] = '\0';
  pcVar53[0x2f] = '\0';
  pcVar53[0x10] = '\0';
  pcVar53[0x11] = '\0';
  pcVar53[0x12] = '\0';
  pcVar53[0x13] = '\0';
  pcVar53[0x14] = '\0';
  pcVar53[0x15] = '\0';
  pcVar53[0x16] = '\0';
  pcVar53[0x17] = '\0';
  pcVar53[0x18] = '\0';
  pcVar53[0x19] = '\0';
  pcVar53[0x1a] = '\0';
  pcVar53[0x1b] = '\0';
  pcVar53[0x1c] = '\0';
  pcVar53[0x1d] = '\0';
  pcVar53[0x1e] = '\0';
  pcVar53[0x1f] = '\0';
  lVar79 = param_1[4];
  puVar78 = *(ulong **)(lVar79 + 0xd8);
  puVar13 = *(ulong **)(lVar79 + 0xe0);
  if (puVar78 != puVar13) {
    do {
      uVar70 = *puVar78;
      uVar71 = FUN_7102f6e8d0(param_1[2],uVar70);
      if (((uVar71 & 1) != 0) && (plVar51 = (long *)(uVar70 & 0xffffffffff), plVar51 != (long *)0x0)
         ) {
        for (plVar55 = *(long **)(*(long *)(param_1[1] + 0x310) + 0xd0);
            plVar55 != *(long **)(*(long *)(param_1[1] + 0x310) + 0xd8); plVar55 = plVar55 + 2) {
          if ((*(uint *)(plVar55 + 1) < 2) &&
             (pplVar75 = (long **)*plVar55, plVar51 == pplVar75[0xd])) {
            if (pplVar75 != (long **)0x0) {
              fVar80 = *(float *)(puVar78 + 1);
              fVar82 = *(float *)((long)puVar78 + 0xc);
              local_1a0 = (long ***)
                          FUN_710392e290(0x10,0x10,(long ****)ppuVar60,ppppbVar63,param_5,param_6,
                                         param_7,param_8);
              if (local_1a0 == (long ***)0x0) {
                if (DAT_7105332f00 != (long *)0x0) {
                  local_98 = (long **)((ulong)local_98 & 0xffffffff00000000);
                  local_1a0 = (long ***)&DAT_00000010;
                  ppuVar60 = (undefined **)&local_1a0;
                  uVar71 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_98);
                  if (((uVar71 & 1) != 0) &&
                     (local_1a0 = (long ***)
                                  FUN_710392e290(0x10,0x10,(long ****)ppuVar60,ppppbVar63,param_5,
                                                 param_6,param_7,param_8),
                     local_1a0 != (long ***)0x0)) goto LAB_7102f7170c;
                }
                local_1a0 = (long ***)0x0;
              }
LAB_7102f7170c:
              *local_1a0 = (long **)&PTR_FUN_71051587b0;
              local_1a0[1] = pplVar75;
              FUN_7102f750a0(fVar80,fVar82,pcVar53,&local_1a0,(long ****)ppuVar60,ppppbVar63,param_5
                             ,param_6,param_7,param_8);
              ppplVar57 = local_1a0;
              local_1a0 = (long ***)0x0;
              if (ppplVar57 != (long ***)0x0) {
                (*(code *)(*ppplVar57)[1])();
              }
            }
            break;
          }
        }
      }
      puVar78 = puVar78 + 2;
    } while (puVar78 != puVar13);
    lVar79 = param_1[4];
  }
  puVar13 = *(ulong **)(lVar79 + 0xf8);
  for (puVar78 = *(ulong **)(lVar79 + 0xf0); puVar78 != puVar13; puVar78 = puVar78 + 3) {
    uVar70 = *puVar78;
    uVar71 = FUN_7102f6e8d0(param_1[2],uVar70);
    if (((uVar71 & 1) != 0) && (plVar51 = (long *)(uVar70 & 0xffffffffff), plVar51 != (long *)0x0))
    {
      for (plVar55 = *(long **)(*(long *)(param_1[1] + 0x310) + 0xd0);
          plVar55 != *(long **)(*(long *)(param_1[1] + 0x310) + 0xd8); plVar55 = plVar55 + 2) {
        if ((*(uint *)(plVar55 + 1) < 2) && (pplVar75 = (long **)*plVar55, plVar51 == pplVar75[0xd])
           ) {
          if (pplVar75 != (long **)0x0) {
            fVar80 = *(float *)(puVar78 + 2);
            local_1a0 = (long ***)
                        FUN_710392e290(0x10,0x20,(long ****)ppuVar60,ppppbVar63,param_5,param_6,
                                       param_7,param_8);
            if (local_1a0 == (long ***)0x0) {
              if (DAT_7105332f00 != (long *)0x0) {
                local_98 = (long **)((ulong)local_98 & 0xffffffff00000000);
                local_1a0 = (long ***)&SUB_00000020;
                ppuVar60 = (undefined **)&local_1a0;
                uVar71 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_98);
                if (((uVar71 & 1) != 0) &&
                   (local_1a0 = (long ***)
                                FUN_710392e290(0x10,0x20,(long ****)ppuVar60,ppppbVar63,param_5,
                                               param_6,param_7,param_8), local_1a0 != (long ***)0x0)
                   ) goto LAB_7102f71824;
              }
              local_1a0 = (long ***)0x0;
            }
LAB_7102f71824:
            pplVar68 = (long **)puVar78[1];
            uVar40 = *(undefined1 *)((long)puVar78 + 0x14);
            *local_1a0 = (long **)&PTR_FUN_71051587e8;
            local_1a0[1] = pplVar75;
            *(undefined1 *)(local_1a0 + 3) = uVar40;
            local_1a0[2] = pplVar68;
            FUN_7102f750a0(fVar80,-1.0,pcVar53,&local_1a0,(long ****)ppuVar60,ppppbVar63,param_5,
                           param_6,param_7,param_8);
            ppplVar57 = local_1a0;
            local_1a0 = (long ***)0x0;
            if (ppplVar57 != (long ***)0x0) {
              (*(code *)(*ppplVar57)[1])();
            }
          }
          break;
        }
      }
    }
  }
  lVar66 = param_1[0xe];
  lVar79 = param_1[0xf];
  while (lVar67 = lVar79, lVar67 != lVar66) {
    lVar72 = *(long *)(lVar67 + -8);
    lVar79 = lVar67 + -0x18;
    if (lVar72 != 0) {
      lVar11 = *(long *)(lVar67 + -0x18);
      plVar51 = *(long **)(lVar67 + -0x10);
      *plVar51 = lVar11;
      *(long **)(lVar11 + 8) = plVar51;
      *(long *)(lVar72 + 0x10) = *(long *)(lVar72 + 0x10) + -1;
      *(undefined8 *)(lVar67 + -0x10) = 0;
      *(undefined8 *)(lVar67 + -8) = 0;
      *(undefined8 *)(lVar67 + -0x18) = 0;
    }
  }
  param_1[0xf] = lVar66;
  puVar77 = *(undefined8 **)(param_1[4] + 0x108);
  puVar14 = *(undefined8 **)(param_1[4] + 0x110);
  if (puVar77 != puVar14) {
    do {
      ppuVar60 = (undefined **)*puVar77;
      FUN_7102626be0(&local_98,*(ulong **)(param_1[1] + 800),(long ****)ppuVar60,ppppbVar63,param_5,
                     param_6,param_7,param_8);
      if (local_88 != (long **)0x0) {
        fVar80 = *(float *)(puVar77 + 3);
        local_88[0xf] = (long *)(ulong)(uint)fVar80;
        local_88[0xe] = (long *)CONCAT44(fVar80,fVar80);
        if (*(char *)((long)local_88 + 0x35) == '\0') {
          local_88[9] = (long *)((ulong)local_88[9] | 4);
        }
        else {
          uVar48 = *(uint *)((long)local_88 + 0x3c);
          if (0 < (int)uVar48) {
            lVar79 = *lib::Singleton<lib::EffectManager>::instance_ +
                     (ulong)(uVar48 >> 0x18) * 0x300;
            if (lVar79 != 0 && *(uint *)(lVar79 + 4) == uVar48) {
              lVar79 = *lib::Singleton<lib::EffectManager>::instance_ +
                       (ulong)(uVar48 >> 0x18) * 0x300;
              *(undefined1 *)(lVar79 + 0x2da) = 1;
              uVar48 = *(uint *)(lVar79 + 0x26c) | 0x2000;
              if (!NAN(fVar80)) {
                uVar48 = *(uint *)(lVar79 + 0x26c) & 0xffffdfff;
              }
              *(uint *)(lVar79 + 0x26c) = uVar48;
              *(ulong *)(lVar79 + 0x108) = (ulong)(uint)fVar80;
              *(ulong *)(lVar79 + 0x100) = CONCAT44(fVar80,fVar80);
            }
          }
        }
        if ((puVar77[1] & 0xffffffffff) != 0) {
          for (puVar12 = *(undefined8 **)(*(long *)(param_1[1] + 0x310) + 0xd0);
              puVar12 != *(undefined8 **)(*(long *)(param_1[1] + 0x310) + 0xd8);
              puVar12 = puVar12 + 2) {
            if ((*(uint *)(puVar12 + 1) < 2) &&
               (plVar51 = (long *)*puVar12, (puVar77[1] & 0xffffffffff) == plVar51[0xd])) {
              if (plVar51 != (long *)0x0) {
                if (((puVar77[2] & 0xffffffffff) == 0) || (plVar51[0x1b] == 0)) {
                  uVar49 = 0xffffffff;
                  plVar55 = _ConstantZero;
                }
                else {
                  plVar55 = *(long **)(*(long *)(plVar51[0x1b] + 8) + 8);
                  uVar49 = (**(code **)(*plVar55 + 0x20))(plVar55,puVar77[2] & 0xffffffffff);
                  plVar55 = _ConstantZero;
                }
                _ConstantZero = plVar55;
                if (local_88 != (long **)0x0) {
                  auVar42._8_8_ = _DAT_7107521008;
                  auVar42._0_8_ = plVar55;
                  auVar81._8_8_ = _DAT_7107521008;
                  auVar81._0_8_ = plVar55;
                  local_88[0x18] = plVar51;
                  *(undefined4 *)(local_88 + 0x19) = uVar49;
                  *(undefined1 *)(local_88 + 0x1e) = 1;
                  auVar81 = NEON_ext(auVar81,auVar42,8,1);
                  local_88[0x1b] = (long *)(ulong)auVar81._0_4_;
                  local_88[0x1a] = plVar55;
                  local_88[0x1d] = (long *)(ulong)auVar81._0_4_;
                  local_88[0x1c] = plVar55;
                }
              }
              break;
            }
          }
        }
        fVar80 = *(float *)((long)puVar77 + 0x1c);
        fVar82 = *(float *)(puVar77 + 4);
        ppplVar57 = (long ***)
                    FUN_710392e290(0x10,0x20,(long ****)ppuVar60,ppppbVar63,param_5,param_6,param_7,
                                   param_8);
        if (ppplVar57 == (long ***)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_7c[0] = 0;
            local_1a0 = (long ***)&SUB_00000020;
            ppuVar60 = (undefined **)&local_1a0;
            uVar71 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_7c);
            if (((uVar71 & 1) != 0) &&
               (ppplVar57 = (long ***)
                            FUN_710392e290(0x10,0x20,(long ****)ppuVar60,ppppbVar63,param_5,param_6,
                                           param_7,param_8), ppplVar57 != (long ***)0x0))
            goto LAB_7102f71b2c;
          }
          ppplVar57 = (long ***)0x0;
        }
LAB_7102f71b2c:
        local_198 = (long **)0x0;
        local_190 = (long **)0x0;
        local_1a0 = (long ***)0x0;
        if (local_88 != (long **)0x0) {
          local_198 = (long **)local_88[4];
          local_1a0 = (long ***)(local_88 + 3);
          local_88[4] = (long *)&local_1a0;
          *local_198 = (long *)&local_1a0;
          local_88[2] = (long *)((long)local_88[2] + 1);
          local_190 = local_88;
        }
        *ppplVar57 = (long **)&PTR_FUN_7105158820;
        pppplVar61 = (long ****)(ppplVar57 + 1);
        *pppplVar61 = (long ***)0x0;
        ppplVar57[2] = (long **)0x0;
        ppplVar57[3] = (long **)0x0;
        pplVar75 = local_88;
        if (&local_1a0 == pppplVar61) {
LAB_7102f71ba4:
          if (pplVar75 != (long **)0x0) {
            *local_198 = (long *)local_1a0;
            local_1a0[1] = local_198;
            pplVar75[2] = (long *)((long)pplVar75[2] + -1);
            local_198 = (long **)0x0;
            local_190 = (long **)0x0;
          }
        }
        else if (local_88 != (long **)0x0) {
          pplVar75 = (long **)local_88[4];
          ppplVar57[1] = local_88 + 3;
          ppplVar57[2] = pplVar75;
          local_88[4] = (long *)pppplVar61;
          *pplVar75 = (long *)pppplVar61;
          local_88[2] = (long *)((long)local_88[2] + 1);
          ppplVar57[3] = local_88;
          pplVar75 = local_190;
          goto LAB_7102f71ba4;
        }
        local_1a0 = ppplVar57;
        FUN_7102f750a0(fVar80,fVar82,pcVar53,&local_1a0,(long ****)ppuVar60,ppppbVar63,param_5,
                       param_6,param_7,param_8);
        ppplVar57 = local_1a0;
        local_1a0 = (long ***)0x0;
        if (ppplVar57 != (long ***)0x0) {
          (*(code *)(*ppplVar57)[1])();
        }
        ppplVar57 = (long ***)param_1[0xf];
        if (ppplVar57 == (long ***)param_1[0x10]) {
          FUN_71028a52f0(param_1 + 0xe,(long *)&local_98,(long ****)ppuVar60,ppppbVar63,param_5,
                         param_6,param_7,param_8);
        }
        else {
          ppplVar57[1] = (long **)0x0;
          ppplVar57[2] = (long **)0x0;
          *ppplVar57 = (long **)0x0;
          if ((ppplVar57 != &local_98) && (local_88 != (long **)0x0)) {
            pplVar75 = (long **)local_88[4];
            *ppplVar57 = local_88 + 3;
            ppplVar57[1] = pplVar75;
            local_88[4] = (long *)ppplVar57;
            *pplVar75 = (long *)ppplVar57;
            local_88[2] = (long *)((long)local_88[2] + 1);
            ppplVar57[2] = local_88;
          }
          param_1[0xf] = param_1[0xf] + 0x18;
        }
        if (local_88 != (long **)0x0) {
          *local_90 = (ulong)local_98;
          local_98[1] = (long *)local_90;
          local_88[2] = (long *)((long)local_88[2] + -1);
          local_90 = (ulong *)0x0;
          local_88 = (long **)0x0;
          local_98 = (long **)0x0;
        }
      }
      puVar77 = puVar77 + 5;
    } while (puVar77 != puVar14);
  }
  pplVar75 = *(long ***)(param_1[1] + 0x338);
  local_1a0 = (long ***)
              FUN_710392e290(0x10,0x18,(long ****)ppuVar60,ppppbVar63,param_5,param_6,param_7,
                             param_8);
  if (local_1a0 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_98 = (long **)((ulong)local_98 & 0xffffffff00000000);
      local_1a0 = (long ***)&SUB_00000018;
      ppuVar60 = (undefined **)&local_1a0;
      uVar71 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_98);
      if (((uVar71 & 1) != 0) &&
         (local_1a0 = (long ***)
                      FUN_710392e290(0x10,0x18,(long ****)ppuVar60,ppppbVar63,param_5,param_6,
                                     param_7,param_8), local_1a0 != (long ***)0x0))
      goto LAB_7102f71cdc;
    }
    local_1a0 = (long ***)0x0;
  }
LAB_7102f71cdc:
  *local_1a0 = (long **)&PTR_FUN_7105158858;
  local_1a0[1] = pplVar75;
  local_1a0[2] = (long **)0x900000000;
  FUN_7102f750a0(0.0,-1.0,pcVar53,&local_1a0,(long ****)ppuVar60,ppppbVar63,param_5,param_6,param_7,
                 param_8);
  ppplVar57 = local_1a0;
  local_1a0 = (long ***)0x0;
  uVar59 = extraout_x1;
  if (ppplVar57 != (long ***)0x0) {
    (*(code *)(*ppplVar57)[1])();
    uVar59 = extraout_x1_00;
  }
  FUN_7102f753a0(pcVar53,uVar59,(long ****)ppuVar60,ppppbVar63,param_5,param_6,param_7,param_8);
  uVar71 = param_1[8];
  param_1[8] = (long)pcVar53;
  if (uVar71 != 0) {
    FUN_7102f74e50(uVar71);
    FUN_710392eb40(uVar71);
  }
  pcVar53 = (char *)FUN_710392e290(0x10,0xd8,(long ****)ppuVar60,ppppbVar63,param_5,param_6,param_7,
                                   param_8);
  if (pcVar53 == (char *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_98 = (long **)((ulong)local_98 & 0xffffffff00000000);
      local_1a0 = (long ***)&DAT_000000d8;
      ppuVar60 = (undefined **)&local_1a0;
      uVar71 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_98);
      if (((uVar71 & 1) != 0) &&
         (pcVar53 = (char *)FUN_710392e290(0x10,0xd8,(long ****)ppuVar60,ppppbVar63,param_5,param_6,
                                           param_7,param_8), pcVar53 != (char *)0x0))
      goto LAB_7102f71da0;
    }
    pcVar53 = (char *)0x0;
  }
LAB_7102f71da0:
  pcVar53[0] = '\0';
  pcVar53[1] = '\0';
  pcVar53[0xd0] = '\0';
  pcVar53[0xd1] = '\0';
  pcVar53[0xd2] = '\0';
  pcVar53[0xd3] = '\0';
  pcVar53[8] = '\0';
  pcVar53[9] = '\0';
  pcVar53[10] = '\0';
  pcVar53[0xb] = '\0';
  pcVar53[0xc] = '\0';
  pcVar53[0xd] = '\0';
  pcVar53[0xe] = '\0';
  pcVar53[0xf] = '\0';
  pcVar53[0xc0] = '\0';
  pcVar53[0xc1] = '\0';
  pcVar53[0xc2] = '\0';
  pcVar53[0xc3] = '\0';
  pcVar53[0xc4] = '\0';
  pcVar53[0xc5] = '\0';
  pcVar53[0xc6] = '\0';
  pcVar53[199] = '\0';
  pcVar53[200] = '\0';
  pcVar53[0xc9] = '\0';
  pcVar53[0xca] = '\0';
  pcVar53[0xcb] = '\0';
  pcVar53[0xcc] = '\0';
  pcVar53[0xcd] = '\0';
  pcVar53[0xce] = '\0';
  pcVar53[0xcf] = '\0';
  pcVar53[0xb0] = '\0';
  pcVar53[0xb1] = '\0';
  pcVar53[0xb2] = '\0';
  pcVar53[0xb3] = '\0';
  pcVar53[0xb4] = '\0';
  pcVar53[0xb5] = '\0';
  pcVar53[0xb6] = '\0';
  pcVar53[0xb7] = '\0';
  pcVar53[0xb8] = '\0';
  pcVar53[0xb9] = '\0';
  pcVar53[0xba] = '\0';
  pcVar53[0xbb] = '\0';
  pcVar53[0xbc] = '\0';
  pcVar53[0xbd] = '\0';
  pcVar53[0xbe] = '\0';
  pcVar53[0xbf] = '\0';
  pcVar53[0xa0] = '\0';
  pcVar53[0xa1] = '\0';
  pcVar53[0xa2] = '\0';
  pcVar53[0xa3] = '\0';
  pcVar53[0xa4] = '\0';
  pcVar53[0xa5] = '\0';
  pcVar53[0xa6] = '\0';
  pcVar53[0xa7] = '\0';
  pcVar53[0xa8] = '\0';
  pcVar53[0xa9] = '\0';
  pcVar53[0xaa] = '\0';
  pcVar53[0xab] = '\0';
  pcVar53[0xac] = '\0';
  pcVar53[0xad] = '\0';
  pcVar53[0xae] = '\0';
  pcVar53[0xaf] = '\0';
  pcVar53[0x90] = '\0';
  pcVar53[0x91] = '\0';
  pcVar53[0x92] = '\0';
  pcVar53[0x93] = '\0';
  pcVar53[0x94] = '\0';
  pcVar53[0x95] = '\0';
  pcVar53[0x96] = '\0';
  pcVar53[0x97] = '\0';
  pcVar53[0x98] = '\0';
  pcVar53[0x99] = '\0';
  pcVar53[0x9a] = '\0';
  pcVar53[0x9b] = '\0';
  pcVar53[0x9c] = '\0';
  pcVar53[0x9d] = '\0';
  pcVar53[0x9e] = '\0';
  pcVar53[0x9f] = '\0';
  pcVar53[0x80] = '\0';
  pcVar53[0x81] = '\0';
  pcVar53[0x82] = '\0';
  pcVar53[0x83] = '\0';
  pcVar53[0x84] = '\0';
  pcVar53[0x85] = '\0';
  pcVar53[0x86] = '\0';
  pcVar53[0x87] = '\0';
  pcVar53[0x88] = '\0';
  pcVar53[0x89] = '\0';
  pcVar53[0x8a] = '\0';
  pcVar53[0x8b] = '\0';
  pcVar53[0x8c] = '\0';
  pcVar53[0x8d] = '\0';
  pcVar53[0x8e] = '\0';
  pcVar53[0x8f] = '\0';
  pcVar53[0x70] = '\0';
  pcVar53[0x71] = '\0';
  pcVar53[0x72] = '\0';
  pcVar53[0x73] = '\0';
  pcVar53[0x74] = '\0';
  pcVar53[0x75] = '\0';
  pcVar53[0x76] = '\0';
  pcVar53[0x77] = '\0';
  pcVar53[0x78] = '\0';
  pcVar53[0x79] = '\0';
  pcVar53[0x7a] = '\0';
  pcVar53[0x7b] = '\0';
  pcVar53[0x7c] = '\0';
  pcVar53[0x7d] = '\0';
  pcVar53[0x7e] = '\0';
  pcVar53[0x7f] = '\0';
  pcVar53[0x60] = '\0';
  pcVar53[0x61] = '\0';
  pcVar53[0x62] = '\0';
  pcVar53[99] = '\0';
  pcVar53[100] = '\0';
  pcVar53[0x65] = '\0';
  pcVar53[0x66] = '\0';
  pcVar53[0x67] = '\0';
  pcVar53[0x68] = '\0';
  pcVar53[0x69] = '\0';
  pcVar53[0x6a] = '\0';
  pcVar53[0x6b] = '\0';
  pcVar53[0x6c] = '\0';
  pcVar53[0x6d] = '\0';
  pcVar53[0x6e] = '\0';
  pcVar53[0x6f] = '\0';
  pcVar53[0x50] = '\0';
  pcVar53[0x51] = '\0';
  pcVar53[0x52] = '\0';
  pcVar53[0x53] = '\0';
  pcVar53[0x54] = '\0';
  pcVar53[0x55] = '\0';
  pcVar53[0x56] = '\0';
  pcVar53[0x57] = '\0';
  pcVar53[0x58] = '\0';
  pcVar53[0x59] = '\0';
  pcVar53[0x5a] = '\0';
  pcVar53[0x5b] = '\0';
  pcVar53[0x5c] = '\0';
  pcVar53[0x5d] = '\0';
  pcVar53[0x5e] = '\0';
  pcVar53[0x5f] = '\0';
  pcVar53[0x40] = '\0';
  pcVar53[0x41] = '\0';
  pcVar53[0x42] = '\0';
  pcVar53[0x43] = '\0';
  pcVar53[0x44] = '\0';
  pcVar53[0x45] = '\0';
  pcVar53[0x46] = '\0';
  pcVar53[0x47] = '\0';
  pcVar53[0x48] = '\0';
  pcVar53[0x49] = '\0';
  pcVar53[0x4a] = '\0';
  pcVar53[0x4b] = '\0';
  pcVar53[0x4c] = '\0';
  pcVar53[0x4d] = '\0';
  pcVar53[0x4e] = '\0';
  pcVar53[0x4f] = '\0';
  pcVar53[0x30] = '\0';
  pcVar53[0x31] = '\0';
  pcVar53[0x32] = '\0';
  pcVar53[0x33] = '\0';
  pcVar53[0x34] = '\0';
  pcVar53[0x35] = '\0';
  pcVar53[0x36] = '\0';
  pcVar53[0x37] = '\0';
  pcVar53[0x38] = '\0';
  pcVar53[0x39] = '\0';
  pcVar53[0x3a] = '\0';
  pcVar53[0x3b] = '\0';
  pcVar53[0x3c] = '\0';
  pcVar53[0x3d] = '\0';
  pcVar53[0x3e] = '\0';
  pcVar53[0x3f] = '\0';
  pcVar53[0x20] = '\0';
  pcVar53[0x21] = '\0';
  pcVar53[0x22] = '\0';
  pcVar53[0x23] = '\0';
  pcVar53[0x24] = '\0';
  pcVar53[0x25] = '\0';
  pcVar53[0x26] = '\0';
  pcVar53[0x27] = '\0';
  pcVar53[0x28] = '\0';
  pcVar53[0x29] = '\0';
  pcVar53[0x2a] = '\0';
  pcVar53[0x2b] = '\0';
  pcVar53[0x2c] = '\0';
  pcVar53[0x2d] = '\0';
  pcVar53[0x2e] = '\0';
  pcVar53[0x2f] = '\0';
  pcVar53[0x10] = '\0';
  pcVar53[0x11] = '\0';
  pcVar53[0x12] = '\0';
  pcVar53[0x13] = '\0';
  pcVar53[0x14] = '\0';
  pcVar53[0x15] = '\0';
  pcVar53[0x16] = '\0';
  pcVar53[0x17] = '\0';
  pcVar53[0x18] = '\0';
  pcVar53[0x19] = '\0';
  pcVar53[0x1a] = '\0';
  pcVar53[0x1b] = '\0';
  pcVar53[0x1c] = '\0';
  pcVar53[0x1d] = '\0';
  pcVar53[0x1e] = '\0';
  pcVar53[0x1f] = '\0';
  lVar67 = param_1[4];
  lVar79 = *(long *)(lVar67 + 0x120);
  lVar66 = *(long *)(lVar67 + 0x128);
  if (lVar79 != lVar66) {
    do {
      uVar70 = *(ulong *)(lVar79 + 8);
      uVar71 = FUN_7102f6e8d0(param_1[2],uVar70);
      if (((uVar71 & 1) != 0) && (plVar51 = (long *)(uVar70 & 0xffffffffff), plVar51 != (long *)0x0)
         ) {
        for (plVar55 = *(long **)(*(long *)(param_1[1] + 0x310) + 0xd0);
            plVar55 != *(long **)(*(long *)(param_1[1] + 0x310) + 0xd8); plVar55 = plVar55 + 2) {
          if ((*(uint *)(plVar55 + 1) < 2) &&
             (pplVar75 = (long **)*plVar55, plVar51 == pplVar75[0xd])) {
            if (pplVar75 != (long **)0x0) {
              fVar80 = *(float *)(lVar79 + 0x10);
              fVar82 = *(float *)(lVar79 + 0x14);
              local_1a0 = (long ***)
                          FUN_710392e290(0x10,0x10,(long ****)ppuVar60,ppppbVar63,param_5,param_6,
                                         param_7,param_8);
              if (local_1a0 == (long ***)0x0) {
                if (DAT_7105332f00 != (long *)0x0) {
                  local_98 = (long **)((ulong)local_98 & 0xffffffff00000000);
                  local_1a0 = (long ***)&DAT_00000010;
                  ppuVar60 = (undefined **)&local_1a0;
                  uVar71 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_98);
                  if (((uVar71 & 1) != 0) &&
                     (local_1a0 = (long ***)
                                  FUN_710392e290(0x10,0x10,(long ****)ppuVar60,ppppbVar63,param_5,
                                                 param_6,param_7,param_8),
                     local_1a0 != (long ***)0x0)) goto LAB_7102f71e54;
                }
                local_1a0 = (long ***)0x0;
              }
LAB_7102f71e54:
              *local_1a0 = (long **)&PTR_FUN_71051587b0;
              local_1a0[1] = pplVar75;
              FUN_7102f750a0(fVar80,fVar82,pcVar53,&local_1a0,(long ****)ppuVar60,ppppbVar63,param_5
                             ,param_6,param_7,param_8);
              ppplVar57 = local_1a0;
              local_1a0 = (long ***)0x0;
              if (ppplVar57 != (long ***)0x0) {
                (*(code *)(*ppplVar57)[1])();
              }
            }
            break;
          }
        }
      }
      lVar79 = lVar79 + 0x18;
    } while (lVar79 != lVar66);
    lVar67 = param_1[4];
  }
  lVar79 = *(long *)(lVar67 + 0x138);
  lVar66 = *(long *)(lVar67 + 0x140);
  if (lVar79 != lVar66) {
    do {
      uVar70 = *(ulong *)(lVar79 + 8);
      uVar71 = FUN_7102f6e8d0(param_1[2],uVar70);
      if (((uVar71 & 1) != 0) && (plVar51 = (long *)(uVar70 & 0xffffffffff), plVar51 != (long *)0x0)
         ) {
        for (plVar55 = *(long **)(*(long *)(param_1[1] + 0x310) + 0xd0);
            plVar55 != *(long **)(*(long *)(param_1[1] + 0x310) + 0xd8); plVar55 = plVar55 + 2) {
          if ((*(uint *)(plVar55 + 1) < 2) &&
             (pplVar75 = (long **)*plVar55, plVar51 == pplVar75[0xd])) {
            if (pplVar75 != (long **)0x0) {
              fVar80 = *(float *)(lVar79 + 0x18);
              local_1a0 = (long ***)
                          FUN_710392e290(0x10,0x20,(long ****)ppuVar60,ppppbVar63,param_5,param_6,
                                         param_7,param_8);
              if (local_1a0 == (long ***)0x0) {
                if (DAT_7105332f00 != (long *)0x0) {
                  local_98 = (long **)((ulong)local_98 & 0xffffffff00000000);
                  local_1a0 = (long ***)&SUB_00000020;
                  ppuVar60 = (undefined **)&local_1a0;
                  uVar71 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_98);
                  if (((uVar71 & 1) != 0) &&
                     (local_1a0 = (long ***)
                                  FUN_710392e290(0x10,0x20,(long ****)ppuVar60,ppppbVar63,param_5,
                                                 param_6,param_7,param_8),
                     local_1a0 != (long ***)0x0)) goto LAB_7102f71f6c;
                }
                local_1a0 = (long ***)0x0;
              }
LAB_7102f71f6c:
              pplVar68 = *(long ***)(lVar79 + 0x10);
              uVar40 = *(undefined1 *)(lVar79 + 0x1c);
              *local_1a0 = (long **)&PTR_FUN_71051587e8;
              local_1a0[1] = pplVar75;
              *(undefined1 *)(local_1a0 + 3) = uVar40;
              local_1a0[2] = pplVar68;
              FUN_7102f750a0(fVar80,-1.0,pcVar53,&local_1a0,(long ****)ppuVar60,ppppbVar63,param_5,
                             param_6,param_7,param_8);
              ppplVar57 = local_1a0;
              local_1a0 = (long ***)0x0;
              if (ppplVar57 != (long ***)0x0) {
                (*(code *)(*ppplVar57)[1])();
              }
            }
            break;
          }
        }
      }
      lVar79 = lVar79 + 0x20;
    } while (lVar79 != lVar66);
    lVar67 = param_1[4];
  }
  pbVar76 = *(byte **)(lVar67 + 0x150);
  pbVar15 = *(byte **)(lVar67 + 0x158);
  if (pbVar76 != pbVar15) {
    do {
      uVar48 = 0xfe;
      if (*pbVar76 != 0) {
        uVar48 = 1 << (ulong)(*pbVar76 & 0x1f);
      }
      if ((uVar48 & *(byte *)(param_1[2] + 0xb1)) != 0) {
        ppuVar60 = *(undefined ***)(pbVar76 + 8);
        FUN_7102626be0(&local_98,*(ulong **)(param_1[1] + 800),(long ****)ppuVar60,ppppbVar63,
                       param_5,param_6,param_7,param_8);
        if (local_88 != (long **)0x0) {
          fVar80 = *(float *)(pbVar76 + 0x20);
          local_88[0xf] = (long *)(ulong)(uint)fVar80;
          local_88[0xe] = (long *)CONCAT44(fVar80,fVar80);
          if (*(char *)((long)local_88 + 0x35) == '\0') {
            local_88[9] = (long *)((ulong)local_88[9] | 4);
          }
          else {
            uVar48 = *(uint *)((long)local_88 + 0x3c);
            if (0 < (int)uVar48) {
              lVar79 = *lib::Singleton<lib::EffectManager>::instance_ +
                       (ulong)(uVar48 >> 0x18) * 0x300;
              if ((lVar79 != 0) && (*(uint *)(lVar79 + 4) == uVar48)) {
                lVar79 = *lib::Singleton<lib::EffectManager>::instance_ +
                         (ulong)(uVar48 >> 0x18) * 0x300;
                uVar48 = *(uint *)(lVar79 + 0x26c) | 0x2000;
                if (!NAN(fVar80)) {
                  uVar48 = *(uint *)(lVar79 + 0x26c) & 0xffffdfff;
                }
                *(undefined1 *)(lVar79 + 0x2da) = 1;
                *(uint *)(lVar79 + 0x26c) = uVar48;
                *(ulong *)(lVar79 + 0x108) = (ulong)(uint)fVar80;
                *(ulong *)(lVar79 + 0x100) = CONCAT44(fVar80,fVar80);
              }
            }
          }
          if ((*(ulong *)(pbVar76 + 0x10) & 0xffffffffff) != 0) {
            for (puVar77 = *(undefined8 **)(*(long *)(param_1[1] + 0x310) + 0xd0);
                puVar77 != *(undefined8 **)(*(long *)(param_1[1] + 0x310) + 0xd8);
                puVar77 = puVar77 + 2) {
              if ((*(uint *)(puVar77 + 1) < 2) &&
                 (plVar51 = (long *)*puVar77,
                 (*(ulong *)(pbVar76 + 0x10) & 0xffffffffff) == plVar51[0xd])) {
                if (plVar51 != (long *)0x0) {
                  if (((*(ulong *)(pbVar76 + 0x18) & 0xffffffffff) == 0) || (plVar51[0x1b] == 0)) {
                    uVar49 = 0xffffffff;
                    plVar55 = _ConstantZero;
                  }
                  else {
                    plVar55 = *(long **)(*(long *)(plVar51[0x1b] + 8) + 8);
                    uVar49 = (**(code **)(*plVar55 + 0x20))
                                       (plVar55,*(ulong *)(pbVar76 + 0x18) & 0xffffffffff);
                    plVar55 = _ConstantZero;
                  }
                  _ConstantZero = plVar55;
                  if (local_88 != (long **)0x0) {
                    auVar44._8_8_ = _DAT_7107521008;
                    auVar44._0_8_ = plVar55;
                    auVar43._8_8_ = _DAT_7107521008;
                    auVar43._0_8_ = plVar55;
                    local_88[0x18] = plVar51;
                    *(undefined4 *)(local_88 + 0x19) = uVar49;
                    *(undefined1 *)(local_88 + 0x1e) = 1;
                    auVar81 = NEON_ext(auVar43,auVar44,8,1);
                    local_88[0x1b] = (long *)(ulong)auVar81._0_4_;
                    local_88[0x1a] = plVar55;
                    local_88[0x1d] = (long *)(ulong)auVar81._0_4_;
                    local_88[0x1c] = plVar55;
                  }
                }
                break;
              }
            }
          }
          fVar80 = *(float *)(pbVar76 + 0x24);
          fVar82 = *(float *)(pbVar76 + 0x28);
          ppplVar57 = (long ***)
                      FUN_710392e290(0x10,0x20,(long ****)ppuVar60,ppppbVar63,param_5,param_6,
                                     param_7,param_8);
          if (ppplVar57 == (long ***)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_7c[0] = 0;
              local_1a0 = (long ***)&SUB_00000020;
              ppuVar60 = (undefined **)&local_1a0;
              uVar71 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_7c);
              if (((uVar71 & 1) != 0) &&
                 (ppplVar57 = (long ***)
                              FUN_710392e290(0x10,0x20,(long ****)ppuVar60,ppppbVar63,param_5,
                                             param_6,param_7,param_8), ppplVar57 != (long ***)0x0))
              goto LAB_7102f72228;
            }
            ppplVar57 = (long ***)0x0;
          }
LAB_7102f72228:
          local_198 = (long **)0x0;
          local_190 = (long **)0x0;
          local_1a0 = (long ***)0x0;
          if (local_88 != (long **)0x0) {
            local_198 = (long **)local_88[4];
            local_1a0 = (long ***)(local_88 + 3);
            local_88[4] = (long *)&local_1a0;
            *local_198 = (long *)&local_1a0;
            local_88[2] = (long *)((long)local_88[2] + 1);
            local_190 = local_88;
          }
          *ppplVar57 = (long **)&PTR_FUN_7105158820;
          pppplVar61 = (long ****)(ppplVar57 + 1);
          *pppplVar61 = (long ***)0x0;
          ppplVar57[2] = (long **)0x0;
          ppplVar57[3] = (long **)0x0;
          pplVar75 = local_88;
          if (&local_1a0 == pppplVar61) {
LAB_7102f722a0:
            if (pplVar75 != (long **)0x0) {
              *local_198 = (long *)local_1a0;
              local_1a0[1] = local_198;
              pplVar75[2] = (long *)((long)pplVar75[2] + -1);
              local_198 = (long **)0x0;
              local_190 = (long **)0x0;
            }
          }
          else if (local_88 != (long **)0x0) {
            pplVar75 = (long **)local_88[4];
            ppplVar57[1] = local_88 + 3;
            ppplVar57[2] = pplVar75;
            local_88[4] = (long *)pppplVar61;
            *pplVar75 = (long *)pppplVar61;
            local_88[2] = (long *)((long)local_88[2] + 1);
            ppplVar57[3] = local_88;
            pplVar75 = local_190;
            goto LAB_7102f722a0;
          }
          local_1a0 = ppplVar57;
          FUN_7102f750a0(fVar80,fVar82,pcVar53,&local_1a0,(long ****)ppuVar60,ppppbVar63,param_5,
                         param_6,param_7,param_8);
          ppplVar57 = local_1a0;
          local_1a0 = (long ***)0x0;
          if (ppplVar57 != (long ***)0x0) {
            (*(code *)(*ppplVar57)[1])();
          }
          if (local_88 != (long **)0x0) {
            *local_90 = (ulong)local_98;
            local_98[1] = (long *)local_90;
            local_88[2] = (long *)((long)local_88[2] + -1);
            local_90 = (ulong *)0x0;
            local_88 = (long **)0x0;
            local_98 = (long **)0x0;
          }
        }
      }
      pbVar76 = pbVar76 + 0x30;
    } while (pbVar76 != pbVar15);
  }
  pplVar75 = *(long ***)(param_1[1] + 0x338);
  local_1a0 = (long ***)
              FUN_710392e290(0x10,0x18,(long ****)ppuVar60,ppppbVar63,param_5,param_6,param_7,
                             param_8);
  if (local_1a0 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_98 = (long **)((ulong)local_98 & 0xffffffff00000000);
      local_1a0 = (long ***)&SUB_00000018;
      ppuVar60 = (undefined **)&local_1a0;
      uVar71 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_98);
      if (((uVar71 & 1) != 0) &&
         (local_1a0 = (long ***)
                      FUN_710392e290(0x10,0x18,(long ****)ppuVar60,ppppbVar63,param_5,param_6,
                                     param_7,param_8), local_1a0 != (long ***)0x0))
      goto LAB_7102f72384;
    }
    local_1a0 = (long ***)0x0;
  }
LAB_7102f72384:
  *local_1a0 = (long **)&PTR_FUN_7105158858;
  local_1a0[1] = pplVar75;
  local_1a0[2] = (long **)0x900000001;
  FUN_7102f750a0(0.0,-1.0,pcVar53,&local_1a0,(long ****)ppuVar60,ppppbVar63,param_5,param_6,param_7,
                 param_8);
  ppplVar57 = local_1a0;
  local_1a0 = (long ***)0x0;
  uVar59 = extraout_x1_01;
  if (ppplVar57 != (long ***)0x0) {
    (*(code *)(*ppplVar57)[1])();
    uVar59 = extraout_x1_02;
  }
  FUN_7102f753a0(pcVar53,uVar59,(long ****)ppuVar60,ppppbVar63,param_5,param_6,param_7,param_8);
  uVar71 = param_1[9];
  param_1[9] = (long)pcVar53;
  if (uVar71 != 0) {
    FUN_7102f74e50(uVar71);
    FUN_710392eb40(uVar71);
  }
  pcVar53 = (char *)FUN_710392e290(0x10,0xd8,(long ****)ppuVar60,ppppbVar63,param_5,param_6,param_7,
                                   param_8);
  if (pcVar53 == (char *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_98 = (long **)((ulong)local_98 & 0xffffffff00000000);
      local_1a0 = (long ***)&DAT_000000d8;
      ppuVar60 = (undefined **)&local_1a0;
      uVar71 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_98);
      if (((uVar71 & 1) != 0) &&
         (pcVar53 = (char *)FUN_710392e290(0x10,0xd8,(long ****)ppuVar60,ppppbVar63,param_5,param_6,
                                           param_7,param_8), pcVar53 != (char *)0x0))
      goto LAB_7102f7244c;
    }
    pcVar53 = (char *)0x0;
  }
LAB_7102f7244c:
  pcVar53[0] = '\0';
  pcVar53[1] = '\0';
  pcVar53[0xd0] = '\0';
  pcVar53[0xd1] = '\0';
  pcVar53[0xd2] = '\0';
  pcVar53[0xd3] = '\0';
  pcVar53[8] = '\0';
  pcVar53[9] = '\0';
  pcVar53[10] = '\0';
  pcVar53[0xb] = '\0';
  pcVar53[0xc] = '\0';
  pcVar53[0xd] = '\0';
  pcVar53[0xe] = '\0';
  pcVar53[0xf] = '\0';
  pcVar53[0xc0] = '\0';
  pcVar53[0xc1] = '\0';
  pcVar53[0xc2] = '\0';
  pcVar53[0xc3] = '\0';
  pcVar53[0xc4] = '\0';
  pcVar53[0xc5] = '\0';
  pcVar53[0xc6] = '\0';
  pcVar53[199] = '\0';
  pcVar53[200] = '\0';
  pcVar53[0xc9] = '\0';
  pcVar53[0xca] = '\0';
  pcVar53[0xcb] = '\0';
  pcVar53[0xcc] = '\0';
  pcVar53[0xcd] = '\0';
  pcVar53[0xce] = '\0';
  pcVar53[0xcf] = '\0';
  pcVar53[0xb0] = '\0';
  pcVar53[0xb1] = '\0';
  pcVar53[0xb2] = '\0';
  pcVar53[0xb3] = '\0';
  pcVar53[0xb4] = '\0';
  pcVar53[0xb5] = '\0';
  pcVar53[0xb6] = '\0';
  pcVar53[0xb7] = '\0';
  pcVar53[0xb8] = '\0';
  pcVar53[0xb9] = '\0';
  pcVar53[0xba] = '\0';
  pcVar53[0xbb] = '\0';
  pcVar53[0xbc] = '\0';
  pcVar53[0xbd] = '\0';
  pcVar53[0xbe] = '\0';
  pcVar53[0xbf] = '\0';
  pcVar53[0xa0] = '\0';
  pcVar53[0xa1] = '\0';
  pcVar53[0xa2] = '\0';
  pcVar53[0xa3] = '\0';
  pcVar53[0xa4] = '\0';
  pcVar53[0xa5] = '\0';
  pcVar53[0xa6] = '\0';
  pcVar53[0xa7] = '\0';
  pcVar53[0xa8] = '\0';
  pcVar53[0xa9] = '\0';
  pcVar53[0xaa] = '\0';
  pcVar53[0xab] = '\0';
  pcVar53[0xac] = '\0';
  pcVar53[0xad] = '\0';
  pcVar53[0xae] = '\0';
  pcVar53[0xaf] = '\0';
  pcVar53[0x90] = '\0';
  pcVar53[0x91] = '\0';
  pcVar53[0x92] = '\0';
  pcVar53[0x93] = '\0';
  pcVar53[0x94] = '\0';
  pcVar53[0x95] = '\0';
  pcVar53[0x96] = '\0';
  pcVar53[0x97] = '\0';
  pcVar53[0x98] = '\0';
  pcVar53[0x99] = '\0';
  pcVar53[0x9a] = '\0';
  pcVar53[0x9b] = '\0';
  pcVar53[0x9c] = '\0';
  pcVar53[0x9d] = '\0';
  pcVar53[0x9e] = '\0';
  pcVar53[0x9f] = '\0';
  pcVar53[0x80] = '\0';
  pcVar53[0x81] = '\0';
  pcVar53[0x82] = '\0';
  pcVar53[0x83] = '\0';
  pcVar53[0x84] = '\0';
  pcVar53[0x85] = '\0';
  pcVar53[0x86] = '\0';
  pcVar53[0x87] = '\0';
  pcVar53[0x88] = '\0';
  pcVar53[0x89] = '\0';
  pcVar53[0x8a] = '\0';
  pcVar53[0x8b] = '\0';
  pcVar53[0x8c] = '\0';
  pcVar53[0x8d] = '\0';
  pcVar53[0x8e] = '\0';
  pcVar53[0x8f] = '\0';
  pcVar53[0x70] = '\0';
  pcVar53[0x71] = '\0';
  pcVar53[0x72] = '\0';
  pcVar53[0x73] = '\0';
  pcVar53[0x74] = '\0';
  pcVar53[0x75] = '\0';
  pcVar53[0x76] = '\0';
  pcVar53[0x77] = '\0';
  pcVar53[0x78] = '\0';
  pcVar53[0x79] = '\0';
  pcVar53[0x7a] = '\0';
  pcVar53[0x7b] = '\0';
  pcVar53[0x7c] = '\0';
  pcVar53[0x7d] = '\0';
  pcVar53[0x7e] = '\0';
  pcVar53[0x7f] = '\0';
  pcVar53[0x60] = '\0';
  pcVar53[0x61] = '\0';
  pcVar53[0x62] = '\0';
  pcVar53[99] = '\0';
  pcVar53[100] = '\0';
  pcVar53[0x65] = '\0';
  pcVar53[0x66] = '\0';
  pcVar53[0x67] = '\0';
  pcVar53[0x68] = '\0';
  pcVar53[0x69] = '\0';
  pcVar53[0x6a] = '\0';
  pcVar53[0x6b] = '\0';
  pcVar53[0x6c] = '\0';
  pcVar53[0x6d] = '\0';
  pcVar53[0x6e] = '\0';
  pcVar53[0x6f] = '\0';
  pcVar53[0x50] = '\0';
  pcVar53[0x51] = '\0';
  pcVar53[0x52] = '\0';
  pcVar53[0x53] = '\0';
  pcVar53[0x54] = '\0';
  pcVar53[0x55] = '\0';
  pcVar53[0x56] = '\0';
  pcVar53[0x57] = '\0';
  pcVar53[0x58] = '\0';
  pcVar53[0x59] = '\0';
  pcVar53[0x5a] = '\0';
  pcVar53[0x5b] = '\0';
  pcVar53[0x5c] = '\0';
  pcVar53[0x5d] = '\0';
  pcVar53[0x5e] = '\0';
  pcVar53[0x5f] = '\0';
  pcVar53[0x40] = '\0';
  pcVar53[0x41] = '\0';
  pcVar53[0x42] = '\0';
  pcVar53[0x43] = '\0';
  pcVar53[0x44] = '\0';
  pcVar53[0x45] = '\0';
  pcVar53[0x46] = '\0';
  pcVar53[0x47] = '\0';
  pcVar53[0x48] = '\0';
  pcVar53[0x49] = '\0';
  pcVar53[0x4a] = '\0';
  pcVar53[0x4b] = '\0';
  pcVar53[0x4c] = '\0';
  pcVar53[0x4d] = '\0';
  pcVar53[0x4e] = '\0';
  pcVar53[0x4f] = '\0';
  pcVar53[0x30] = '\0';
  pcVar53[0x31] = '\0';
  pcVar53[0x32] = '\0';
  pcVar53[0x33] = '\0';
  pcVar53[0x34] = '\0';
  pcVar53[0x35] = '\0';
  pcVar53[0x36] = '\0';
  pcVar53[0x37] = '\0';
  pcVar53[0x38] = '\0';
  pcVar53[0x39] = '\0';
  pcVar53[0x3a] = '\0';
  pcVar53[0x3b] = '\0';
  pcVar53[0x3c] = '\0';
  pcVar53[0x3d] = '\0';
  pcVar53[0x3e] = '\0';
  pcVar53[0x3f] = '\0';
  pcVar53[0x20] = '\0';
  pcVar53[0x21] = '\0';
  pcVar53[0x22] = '\0';
  pcVar53[0x23] = '\0';
  pcVar53[0x24] = '\0';
  pcVar53[0x25] = '\0';
  pcVar53[0x26] = '\0';
  pcVar53[0x27] = '\0';
  pcVar53[0x28] = '\0';
  pcVar53[0x29] = '\0';
  pcVar53[0x2a] = '\0';
  pcVar53[0x2b] = '\0';
  pcVar53[0x2c] = '\0';
  pcVar53[0x2d] = '\0';
  pcVar53[0x2e] = '\0';
  pcVar53[0x2f] = '\0';
  pcVar53[0x10] = '\0';
  pcVar53[0x11] = '\0';
  pcVar53[0x12] = '\0';
  pcVar53[0x13] = '\0';
  pcVar53[0x14] = '\0';
  pcVar53[0x15] = '\0';
  pcVar53[0x16] = '\0';
  pcVar53[0x17] = '\0';
  pcVar53[0x18] = '\0';
  pcVar53[0x19] = '\0';
  pcVar53[0x1a] = '\0';
  pcVar53[0x1b] = '\0';
  pcVar53[0x1c] = '\0';
  pcVar53[0x1d] = '\0';
  pcVar53[0x1e] = '\0';
  pcVar53[0x1f] = '\0';
  lVar67 = param_1[4];
  lVar79 = *(long *)(lVar67 + 0x168);
  lVar66 = *(long *)(lVar67 + 0x170);
  if (lVar79 != lVar66) {
    do {
      uVar70 = *(ulong *)(lVar79 + 8);
      uVar71 = FUN_7102f6e8d0(param_1[2],uVar70);
      if (((uVar71 & 1) != 0) && (plVar51 = (long *)(uVar70 & 0xffffffffff), plVar51 != (long *)0x0)
         ) {
        for (plVar55 = *(long **)(*(long *)(param_1[1] + 0x310) + 0xd0);
            plVar55 != *(long **)(*(long *)(param_1[1] + 0x310) + 0xd8); plVar55 = plVar55 + 2) {
          if ((*(uint *)(plVar55 + 1) < 2) &&
             (pplVar75 = (long **)*plVar55, plVar51 == pplVar75[0xd])) {
            if (pplVar75 != (long **)0x0) {
              fVar80 = *(float *)(lVar79 + 0x10);
              fVar82 = *(float *)(lVar79 + 0x14);
              local_1a0 = (long ***)
                          FUN_710392e290(0x10,0x10,(long ****)ppuVar60,ppppbVar63,param_5,param_6,
                                         param_7,param_8);
              if (local_1a0 == (long ***)0x0) {
                if (DAT_7105332f00 != (long *)0x0) {
                  local_98 = (long **)((ulong)local_98 & 0xffffffff00000000);
                  local_1a0 = (long ***)&DAT_00000010;
                  ppuVar60 = (undefined **)&local_1a0;
                  uVar71 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_98);
                  if (((uVar71 & 1) != 0) &&
                     (local_1a0 = (long ***)
                                  FUN_710392e290(0x10,0x10,(long ****)ppuVar60,ppppbVar63,param_5,
                                                 param_6,param_7,param_8),
                     local_1a0 != (long ***)0x0)) goto LAB_7102f72500;
                }
                local_1a0 = (long ***)0x0;
              }
LAB_7102f72500:
              *local_1a0 = (long **)&PTR_FUN_71051587b0;
              local_1a0[1] = pplVar75;
              FUN_7102f750a0(fVar80,fVar82,pcVar53,&local_1a0,(long ****)ppuVar60,ppppbVar63,param_5
                             ,param_6,param_7,param_8);
              ppplVar57 = local_1a0;
              local_1a0 = (long ***)0x0;
              if (ppplVar57 != (long ***)0x0) {
                (*(code *)(*ppplVar57)[1])();
              }
            }
            break;
          }
        }
      }
      lVar79 = lVar79 + 0x18;
    } while (lVar79 != lVar66);
    lVar67 = param_1[4];
  }
  lVar79 = *(long *)(lVar67 + 0x180);
  lVar66 = *(long *)(lVar67 + 0x188);
  if (lVar79 != lVar66) {
    do {
      uVar70 = *(ulong *)(lVar79 + 8);
      uVar71 = FUN_7102f6e8d0(param_1[2],uVar70);
      if (((uVar71 & 1) != 0) && (plVar51 = (long *)(uVar70 & 0xffffffffff), plVar51 != (long *)0x0)
         ) {
        for (plVar55 = *(long **)(*(long *)(param_1[1] + 0x310) + 0xd0);
            plVar55 != *(long **)(*(long *)(param_1[1] + 0x310) + 0xd8); plVar55 = plVar55 + 2) {
          if ((*(uint *)(plVar55 + 1) < 2) &&
             (pplVar75 = (long **)*plVar55, plVar51 == pplVar75[0xd])) {
            if (pplVar75 != (long **)0x0) {
              fVar80 = *(float *)(lVar79 + 0x18);
              local_1a0 = (long ***)
                          FUN_710392e290(0x10,0x20,(long ****)ppuVar60,ppppbVar63,param_5,param_6,
                                         param_7,param_8);
              if (local_1a0 == (long ***)0x0) {
                if (DAT_7105332f00 != (long *)0x0) {
                  local_98 = (long **)((ulong)local_98 & 0xffffffff00000000);
                  local_1a0 = (long ***)&SUB_00000020;
                  ppuVar60 = (undefined **)&local_1a0;
                  uVar71 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_98);
                  if (((uVar71 & 1) != 0) &&
                     (local_1a0 = (long ***)
                                  FUN_710392e290(0x10,0x20,(long ****)ppuVar60,ppppbVar63,param_5,
                                                 param_6,param_7,param_8),
                     local_1a0 != (long ***)0x0)) goto LAB_7102f72618;
                }
                local_1a0 = (long ***)0x0;
              }
LAB_7102f72618:
              pplVar68 = *(long ***)(lVar79 + 0x10);
              uVar40 = *(undefined1 *)(lVar79 + 0x1c);
              *local_1a0 = (long **)&PTR_FUN_71051587e8;
              local_1a0[1] = pplVar75;
              *(undefined1 *)(local_1a0 + 3) = uVar40;
              local_1a0[2] = pplVar68;
              FUN_7102f750a0(fVar80,-1.0,pcVar53,&local_1a0,(long ****)ppuVar60,ppppbVar63,param_5,
                             param_6,param_7,param_8);
              ppplVar57 = local_1a0;
              local_1a0 = (long ***)0x0;
              if (ppplVar57 != (long ***)0x0) {
                (*(code *)(*ppplVar57)[1])();
              }
            }
            break;
          }
        }
      }
      lVar79 = lVar79 + 0x20;
    } while (lVar79 != lVar66);
    lVar67 = param_1[4];
  }
  pbVar76 = *(byte **)(lVar67 + 0x198);
  pbVar15 = *(byte **)(lVar67 + 0x1a0);
  lVar79 = param_1[2];
  if (pbVar76 != pbVar15) {
    do {
      uVar48 = 0xfe;
      if (*pbVar76 != 0) {
        uVar48 = 1 << (ulong)(*pbVar76 & 0x1f);
      }
      if ((uVar48 & *(byte *)(lVar79 + 0xb1)) != 0) {
        ppuVar60 = *(undefined ***)(pbVar76 + 8);
        FUN_7102626be0(&local_98,*(ulong **)(param_1[1] + 800),(long ****)ppuVar60,ppppbVar63,
                       param_5,param_6,param_7,param_8);
        if (local_88 != (long **)0x0) {
          fVar80 = *(float *)(pbVar76 + 0x20);
          local_88[0xf] = (long *)(ulong)(uint)fVar80;
          local_88[0xe] = (long *)CONCAT44(fVar80,fVar80);
          if (*(char *)((long)local_88 + 0x35) == '\0') {
            local_88[9] = (long *)((ulong)local_88[9] | 4);
          }
          else {
            uVar48 = *(uint *)((long)local_88 + 0x3c);
            if (0 < (int)uVar48) {
              lVar79 = *lib::Singleton<lib::EffectManager>::instance_ +
                       (ulong)(uVar48 >> 0x18) * 0x300;
              if ((lVar79 != 0) && (*(uint *)(lVar79 + 4) == uVar48)) {
                lVar79 = *lib::Singleton<lib::EffectManager>::instance_ +
                         (ulong)(uVar48 >> 0x18) * 0x300;
                uVar48 = *(uint *)(lVar79 + 0x26c) | 0x2000;
                if (!NAN(fVar80)) {
                  uVar48 = *(uint *)(lVar79 + 0x26c) & 0xffffdfff;
                }
                *(undefined1 *)(lVar79 + 0x2da) = 1;
                *(uint *)(lVar79 + 0x26c) = uVar48;
                *(ulong *)(lVar79 + 0x108) = (ulong)(uint)fVar80;
                *(ulong *)(lVar79 + 0x100) = CONCAT44(fVar80,fVar80);
              }
            }
          }
          if ((*(ulong *)(pbVar76 + 0x10) & 0xffffffffff) != 0) {
            for (puVar77 = *(undefined8 **)(*(long *)(param_1[1] + 0x310) + 0xd0);
                puVar77 != *(undefined8 **)(*(long *)(param_1[1] + 0x310) + 0xd8);
                puVar77 = puVar77 + 2) {
              if ((*(uint *)(puVar77 + 1) < 2) &&
                 (plVar51 = (long *)*puVar77,
                 (*(ulong *)(pbVar76 + 0x10) & 0xffffffffff) == plVar51[0xd])) {
                if (plVar51 != (long *)0x0) {
                  if (((*(ulong *)(pbVar76 + 0x18) & 0xffffffffff) == 0) || (plVar51[0x1b] == 0)) {
                    uVar49 = 0xffffffff;
                    plVar55 = _ConstantZero;
                  }
                  else {
                    plVar55 = *(long **)(*(long *)(plVar51[0x1b] + 8) + 8);
                    uVar49 = (**(code **)(*plVar55 + 0x20))
                                       (plVar55,*(ulong *)(pbVar76 + 0x18) & 0xffffffffff);
                    plVar55 = _ConstantZero;
                  }
                  _ConstantZero = plVar55;
                  if (local_88 != (long **)0x0) {
                    auVar46._8_8_ = _DAT_7107521008;
                    auVar46._0_8_ = plVar55;
                    auVar45._8_8_ = _DAT_7107521008;
                    auVar45._0_8_ = plVar55;
                    local_88[0x18] = plVar51;
                    *(undefined4 *)(local_88 + 0x19) = uVar49;
                    *(undefined1 *)(local_88 + 0x1e) = 1;
                    auVar81 = NEON_ext(auVar45,auVar46,8,1);
                    local_88[0x1b] = (long *)(ulong)auVar81._0_4_;
                    local_88[0x1a] = plVar55;
                    local_88[0x1d] = (long *)(ulong)auVar81._0_4_;
                    local_88[0x1c] = plVar55;
                  }
                }
                break;
              }
            }
          }
          fVar80 = *(float *)(pbVar76 + 0x24);
          fVar82 = *(float *)(pbVar76 + 0x28);
          ppplVar57 = (long ***)
                      FUN_710392e290(0x10,0x20,(long ****)ppuVar60,ppppbVar63,param_5,param_6,
                                     param_7,param_8);
          if (ppplVar57 == (long ***)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_7c[0] = 0;
              local_1a0 = (long ***)&SUB_00000020;
              ppuVar60 = (undefined **)&local_1a0;
              uVar71 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_7c);
              if (((uVar71 & 1) != 0) &&
                 (ppplVar57 = (long ***)
                              FUN_710392e290(0x10,0x20,(long ****)ppuVar60,ppppbVar63,param_5,
                                             param_6,param_7,param_8), ppplVar57 != (long ***)0x0))
              goto LAB_7102f728d4;
            }
            ppplVar57 = (long ***)0x0;
          }
LAB_7102f728d4:
          local_198 = (long **)0x0;
          local_190 = (long **)0x0;
          local_1a0 = (long ***)0x0;
          if (local_88 != (long **)0x0) {
            local_198 = (long **)local_88[4];
            local_1a0 = (long ***)(local_88 + 3);
            local_88[4] = (long *)&local_1a0;
            *local_198 = (long *)&local_1a0;
            local_88[2] = (long *)((long)local_88[2] + 1);
            local_190 = local_88;
          }
          *ppplVar57 = (long **)&PTR_FUN_7105158820;
          pppplVar61 = (long ****)(ppplVar57 + 1);
          *pppplVar61 = (long ***)0x0;
          ppplVar57[2] = (long **)0x0;
          ppplVar57[3] = (long **)0x0;
          pplVar75 = local_88;
          if (&local_1a0 == pppplVar61) {
LAB_7102f7294c:
            if (pplVar75 != (long **)0x0) {
              *local_198 = (long *)local_1a0;
              local_1a0[1] = local_198;
              pplVar75[2] = (long *)((long)pplVar75[2] + -1);
              local_198 = (long **)0x0;
              local_190 = (long **)0x0;
            }
          }
          else if (local_88 != (long **)0x0) {
            pplVar75 = (long **)local_88[4];
            ppplVar57[1] = local_88 + 3;
            ppplVar57[2] = pplVar75;
            local_88[4] = (long *)pppplVar61;
            *pplVar75 = (long *)pppplVar61;
            local_88[2] = (long *)((long)local_88[2] + 1);
            ppplVar57[3] = local_88;
            pplVar75 = local_190;
            goto LAB_7102f7294c;
          }
          local_1a0 = ppplVar57;
          FUN_7102f750a0(fVar80,fVar82,pcVar53,&local_1a0,(long ****)ppuVar60,ppppbVar63,param_5,
                         param_6,param_7,param_8);
          ppplVar57 = local_1a0;
          local_1a0 = (long ***)0x0;
          if (ppplVar57 != (long ***)0x0) {
            (*(code *)(*ppplVar57)[1])();
          }
          if (local_88 != (long **)0x0) {
            *local_90 = (ulong)local_98;
            local_98[1] = (long *)local_90;
            local_88[2] = (long *)((long)local_88[2] + -1);
            local_90 = (ulong *)0x0;
            local_88 = (long **)0x0;
            local_98 = (long **)0x0;
          }
        }
        lVar79 = param_1[2];
      }
      pbVar76 = pbVar76 + 0x30;
    } while (pbVar76 != pbVar15);
  }
  if (*(char *)(lVar79 + 0x10) == '\0') {
LAB_7102f72a20:
    uVar48 = 1;
  }
  else {
    bVar39 = *(byte *)(lVar79 + 0xa4);
    if (6 < bVar39 - 1) goto LAB_7102f72a20;
    uVar48 = (uint)bVar39 + (bVar39 / 10) * -10;
    if (6 < uVar48) {
      uVar48 = 7;
    }
    if ((int)uVar48 < 2) {
      uVar48 = 1;
    }
  }
  uVar48 = uVar48 - 1 & 0xff;
  iVar50 = uVar48 + 2;
  fVar80 = *(float *)(param_1[4] + 0x94);
  pplVar75 = *(long ***)(param_1[1] + 0x338);
  if (6 < uVar48) {
    iVar50 = 9;
  }
  local_1a0 = (long ***)
              FUN_710392e290(0x10,0x18,(long ****)ppuVar60,ppppbVar63,param_5,param_6,param_7,
                             param_8);
  if (local_1a0 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_98 = (long **)((ulong)local_98 & 0xffffffff00000000);
      local_1a0 = (long ***)&SUB_00000018;
      ppuVar60 = (undefined **)&local_1a0;
      uVar71 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_98);
      if (((uVar71 & 1) != 0) &&
         (local_1a0 = (long ***)
                      FUN_710392e290(0x10,0x18,(long ****)ppuVar60,ppppbVar63,param_5,param_6,
                                     param_7,param_8), local_1a0 != (long ***)0x0))
      goto LAB_7102f72aa0;
    }
    local_1a0 = (long ***)0x0;
  }
LAB_7102f72aa0:
  *local_1a0 = (long **)&PTR_FUN_7105158858;
  local_1a0[1] = pplVar75;
  *(int *)(local_1a0 + 2) = iVar50;
  *(undefined4 *)((long)local_1a0 + 0x14) = 9;
  FUN_7102f750a0(fVar80,-1.0,pcVar53,&local_1a0,(long ****)ppuVar60,ppppbVar63,param_5,param_6,
                 param_7,param_8);
  ppplVar57 = local_1a0;
  local_1a0 = (long ***)0x0;
  uVar59 = extraout_x1_03;
  if (ppplVar57 != (long ***)0x0) {
    (*(code *)(*ppplVar57)[1])();
    uVar59 = extraout_x1_04;
  }
  FUN_7102f753a0(pcVar53,uVar59,(long ****)ppuVar60,ppppbVar63,param_5,param_6,param_7,param_8);
  uVar71 = param_1[10];
  param_1[10] = (long)pcVar53;
  if (uVar71 != 0) {
    FUN_7102f74e50(uVar71);
    FUN_710392eb40(uVar71);
  }
  FUN_7102f6e9d0(param_1[2],param_1[1],0);
  pppplVar61 = (long ****)0x0;
  FUN_7102f6eb30(param_1[2],param_1[1],0);
  puVar13 = *(ulong **)(param_1[4] + 200);
  uVar59 = extraout_x1_05;
  for (puVar78 = *(ulong **)(param_1[4] + 0xc0); puVar78 != puVar13; puVar78 = puVar78 + 5) {
    if ((*(char *)((long)puVar78 + 9) != '\0') && ((*puVar78 & 0xffffffffff) != 0)) {
      for (plVar51 = *(long **)(*(long *)(param_1[1] + 0x310) + 0xd0);
          plVar51 != *(long **)(*(long *)(param_1[1] + 0x310) + 0xd8); plVar51 = plVar51 + 2) {
        if ((*(uint *)(plVar51 + 1) < 2) &&
           (lVar79 = *plVar51, (*puVar78 & 0xffffffffff) == *(ulong *)(lVar79 + 0x68))) {
          if (lVar79 != 0) {
            *(undefined1 *)(lVar79 + 0x110) = 0;
            FUN_71025e9d50((long *)(lVar79 + 0x108),uVar59,pppplVar61,ppppbVar63,param_5,param_6,
                           param_7,param_8);
            uVar59 = extraout_x1_06;
          }
          break;
        }
      }
    }
  }
  FUN_71025f7350(*(long *)(*(long *)(param_1[1] + 0x318) + 0x10),(byte *)"light00_set");
  *(undefined1 *)(*(long *)(*(long *)(param_1[1] + 0x318) + 0x10) + 0x4c) = 1;
  iVar50 = *(int *)(param_1[1] + 8);
  ppppppppplVar62 = (long *********)"E_chara";
  if (iVar50 != 0x16a) {
    ppppppppplVar62 = (long *********)"chara";
  }
  ppppppppplVar1 = (long *********)"B_chara";
  if (iVar50 != 0x16b) {
    ppppppppplVar1 = ppppppppplVar62;
  }
  FUN_7102633a10(*(long *)(param_1[1] + 0x318),ppppppppplVar1,1,ppppbVar63,param_5,param_6,param_7,
                 param_8);
  ppppppppplVar62 = (long *********)0x1;
  FUN_7102633b90(*(long *)(param_1[1] + 0x318),(long *********)"stage",1,ppppbVar63,param_5,param_6,
                 param_7,param_8);
  plVar51 = (long *)param_1[0xb];
  plVar55 = (long *)param_1[0xc];
  while (plVar55 != plVar51) {
    plVar55 = plVar55 + -1;
    plVar58 = (long *)*plVar55;
    *plVar55 = 0;
    if (plVar58 != (long *)0x0) {
      (**(code **)(*plVar58 + 8))();
    }
  }
  plVar55 = (long *)param_1[0x18];
  param_1[0xc] = (long)plVar51;
  param_1[0x12] = 0;
  *(undefined4 *)(param_1 + 0x13) = 0;
  param_1[0x18] = 0;
  if (param_1 + 0x14 == plVar55) {
    pcVar65 = *(code **)(*plVar55 + 0x20);
LAB_7102f72c80:
    (*pcVar65)();
  }
  else if (plVar55 != (long *)0x0) {
    pcVar65 = *(code **)(*plVar55 + 0x28);
    goto LAB_7102f72c80;
  }
  plVar51 = (long *)param_1[0x20];
  param_1[0x1a] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x20] = 0;
  if (param_1 + 0x1c == plVar51) {
    pcVar65 = *(code **)(*plVar51 + 0x20);
LAB_7102f72cb8:
    (*pcVar65)();
  }
  else if (plVar51 != (long *)0x0) {
    pcVar65 = *(code **)(*plVar51 + 0x28);
    goto LAB_7102f72cb8;
  }
  plVar51 = (long *)param_1[0x28];
  param_1[0x22] = 0;
  *(undefined4 *)(param_1 + 0x23) = 0;
  param_1[0x28] = 0;
  if (param_1 + 0x24 == plVar51) {
    pcVar65 = *(code **)(*plVar51 + 0x20);
LAB_7102f72cf0:
    (*pcVar65)();
  }
  else if (plVar51 != (long *)0x0) {
    pcVar65 = *(code **)(*plVar51 + 0x28);
    goto LAB_7102f72cf0;
  }
  plVar51 = (long *)param_1[0x30];
  param_1[0x2a] = 0;
  *(undefined4 *)(param_1 + 0x2b) = 0;
  param_1[0x30] = 0;
  if (param_1 + 0x2c == plVar51) {
    pcVar65 = *(code **)(*plVar51 + 0x20);
  }
  else {
    if (plVar51 == (long *)0x0) goto LAB_7102f72d2c;
    pcVar65 = *(code **)(*plVar51 + 0x28);
  }
  (*pcVar65)();
LAB_7102f72d2c:
  (**(code **)(*param_1 + 0x38))(param_1);
  if (local_1a8[0] != 0xffffff) {
    FUN_7103540b10(DAT_7105332f20,local_1a8[0],ppppppppplVar62,ppppbVar63,param_5,param_6,param_7,
                   param_8);
  }
  return;
}

