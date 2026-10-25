// addr:      7103959290
// offset:    0x3959290
// name:      FUN_7103959290
// mangled:   
// signature: undefined __cdecl FUN_7103959290(int * param_1)


void FUN_7103959290(int *param_1)

{
  int iVar1;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined8 extraout_x1_09;
  long ****pppplVar2;
  char *pcVar3;
  long ****pppplVar4;
  undefined8 uVar5;
  byte ****ppppbVar6;
  undefined8 uVar7;
  uint *puVar8;
  char *in_x5;
  undefined8 in_x6;
  uint *in_x7;
  byte ***local_260;
  long ***local_258;
  undefined1 auStack_250 [16];
  ulong local_240;
  uint local_214;
  long ***local_210;
  undefined1 local_204 [4];
  byte ***local_200;
  long ***local_1f8;
  undefined1 auStack_1f0 [16];
  ulong local_1e0;
  byte ***local_1b8;
  long ***local_1b0;
  undefined1 auStack_1a8 [16];
  ulong local_198;
  byte ***local_170;
  long ***local_168;
  undefined1 auStack_160 [16];
  ulong local_150;
  uint local_124;
  long ***local_120;
  undefined1 auStack_114 [4];
  long ***local_110;
  uint local_104;
  long ***local_100;
  long ***local_f8;
  long ***local_f0;
  long ***local_e8;
  long ***local_e0;
  long ***local_d8;
  long ***local_d0;
  long ***local_c8;
  long ***local_c0;
  long ***local_b8;
  long ***local_b0;
  long ***local_a8;
  long ***local_a0;
  long ***local_98;
  long ***local_90;
  long ***local_88;
  long ***local_80;
  long ***local_78;
  long ***local_70;
  long ***local_68;
  long ***local_60;
  byte ***pppbStack_58;
  uint auStack_50 [2];
  uint auStack_48 [4];
  undefined8 uStack_38;
  uint uStack_30;
  uint uStack_2c;
  uint auStack_28 [2];
  
  local_60 = (long ***)0x1;
  local_68 = (long ***)&DAT_00000004;
  local_70 = (long ***)&DAT_00000008;
  local_78 = (long ***)&DAT_00000008;
  local_80 = (long ***)&DAT_00000008;
  local_88 = (long ***)&DAT_00000008;
  pppplVar2 = &local_88;
  uVar5 = 0;
  uVar7 = 0;
  iVar1 = FUN_710392ec40((byte *)"version",auStack_28,pppplVar2,(byte ****)0x0,(long ****)0x0,in_x5,
                         in_x6,in_x7);
  if (iVar1 != 0) {
    FUN_7103957550((byte *)"<jemalloc>: Failure in xmallctl(\"%s\", ...)\n","version",pppplVar2,
                   uVar5,uVar7,in_x5,in_x6,in_x7);
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar5 = 7;
  puVar8 = auStack_28;
  FUN_710395ac50(param_1,"version","Version",7,puVar8);
  FUN_710395aca0(param_1,"config","Build-time option settings",uVar5,puVar8,in_x5,in_x6,in_x7);
  local_90 = (long ***)0x1;
  pppplVar2 = &local_90;
  uVar5 = 0;
  uVar7 = 0;
  iVar1 = FUN_710392ec40((byte *)"config.cache_oblivious",&uStack_2c,pppplVar2,(byte ****)0x0,
                         (long ****)0x0,in_x5,in_x6,in_x7);
  if (iVar1 != 0) {
    FUN_7103957550((byte *)"<jemalloc>: Failure in xmallctl(\"%s\", ...)\n","config.cache_oblivious"
                   ,pppplVar2,uVar5,uVar7,in_x5,in_x6,in_x7);
                    /* WARNING: Subroutine does not return */
    abort();
  }
  FUN_710395ac50(param_1,"cache_oblivious","config.cache_oblivious",0,&uStack_2c);
  local_98 = (long ***)0x1;
  pppplVar2 = &local_98;
  uVar5 = 0;
  uVar7 = 0;
  iVar1 = FUN_710392ec40((byte *)"config.debug",&uStack_2c,pppplVar2,(byte ****)0x0,(long ****)0x0,
                         in_x5,in_x6,in_x7);
  if (iVar1 != 0) {
    FUN_7103957550((byte *)"<jemalloc>: Failure in xmallctl(\"%s\", ...)\n","config.debug",pppplVar2
                   ,uVar5,uVar7,in_x5,in_x6,in_x7);
                    /* WARNING: Subroutine does not return */
    abort();
  }
  FUN_710395ac50(param_1,"debug","config.debug",0,&uStack_2c);
  local_a0 = (long ***)0x1;
  pppplVar2 = &local_a0;
  uVar5 = 0;
  uVar7 = 0;
  iVar1 = FUN_710392ec40((byte *)"config.fill",&uStack_2c,pppplVar2,(byte ****)0x0,(long ****)0x0,
                         in_x5,in_x6,in_x7);
  if (iVar1 != 0) {
    FUN_7103957550((byte *)"<jemalloc>: Failure in xmallctl(\"%s\", ...)\n","config.fill",pppplVar2,
                   uVar5,uVar7,in_x5,in_x6,in_x7);
                    /* WARNING: Subroutine does not return */
    abort();
  }
  FUN_710395ac50(param_1,&DAT_710444257d,"config.fill",0,&uStack_2c);
  local_a8 = (long ***)0x1;
  pppplVar2 = &local_a8;
  uVar5 = 0;
  uVar7 = 0;
  iVar1 = FUN_710392ec40((byte *)"config.lazy_lock",&uStack_2c,pppplVar2,(byte ****)0x0,
                         (long ****)0x0,in_x5,in_x6,in_x7);
  if (iVar1 != 0) {
    FUN_7103957550((byte *)"<jemalloc>: Failure in xmallctl(\"%s\", ...)\n","config.lazy_lock",
                   pppplVar2,uVar5,uVar7,in_x5,in_x6,in_x7);
                    /* WARNING: Subroutine does not return */
    abort();
  }
  FUN_710395ac50(param_1,"lazy_lock","config.lazy_lock",0,&uStack_2c);
  FUN_710395ac50(param_1,"malloc_conf","config.malloc_conf",7,(uint *)&PTR_DAT_7105297188);
  local_b0 = (long ***)0x1;
  pppplVar2 = &local_b0;
  uVar5 = 0;
  uVar7 = 0;
  iVar1 = FUN_710392ec40((byte *)"config.prof",&uStack_2c,pppplVar2,(byte ****)0x0,(long ****)0x0,
                         in_x5,in_x6,in_x7);
  if (iVar1 != 0) {
    FUN_7103957550((byte *)"<jemalloc>: Failure in xmallctl(\"%s\", ...)\n","config.prof",pppplVar2,
                   uVar5,uVar7,in_x5,in_x6,in_x7);
                    /* WARNING: Subroutine does not return */
    abort();
  }
  FUN_710395ac50(param_1,&DAT_710439be5d,"config.prof",0,&uStack_2c);
  local_b8 = (long ***)0x1;
  pppplVar2 = &local_b8;
  uVar5 = 0;
  uVar7 = 0;
  iVar1 = FUN_710392ec40((byte *)"config.prof_libgcc",&uStack_2c,pppplVar2,(byte ****)0x0,
                         (long ****)0x0,in_x5,in_x6,in_x7);
  if (iVar1 != 0) {
    FUN_7103957550((byte *)"<jemalloc>: Failure in xmallctl(\"%s\", ...)\n","config.prof_libgcc",
                   pppplVar2,uVar5,uVar7,in_x5,in_x6,in_x7);
                    /* WARNING: Subroutine does not return */
    abort();
  }
  FUN_710395ac50(param_1,"prof_libgcc","config.prof_libgcc",0,&uStack_2c);
  local_c0 = (long ***)0x1;
  pppplVar2 = &local_c0;
  uVar5 = 0;
  uVar7 = 0;
  iVar1 = FUN_710392ec40((byte *)"config.prof_libunwind",&uStack_2c,pppplVar2,(byte ****)0x0,
                         (long ****)0x0,in_x5,in_x6,in_x7);
  if (iVar1 != 0) {
    FUN_7103957550((byte *)"<jemalloc>: Failure in xmallctl(\"%s\", ...)\n","config.prof_libunwind",
                   pppplVar2,uVar5,uVar7,in_x5,in_x6,in_x7);
                    /* WARNING: Subroutine does not return */
    abort();
  }
  FUN_710395ac50(param_1,"prof_libunwind","config.prof_libunwind",0,&uStack_2c);
  local_c8 = (long ***)0x1;
  pppplVar2 = &local_c8;
  uVar5 = 0;
  uVar7 = 0;
  iVar1 = FUN_710392ec40((byte *)"config.stats",&uStack_2c,pppplVar2,(byte ****)0x0,(long ****)0x0,
                         in_x5,in_x6,in_x7);
  if (iVar1 != 0) {
    FUN_7103957550((byte *)"<jemalloc>: Failure in xmallctl(\"%s\", ...)\n","config.stats",pppplVar2
                   ,uVar5,uVar7,in_x5,in_x6,in_x7);
                    /* WARNING: Subroutine does not return */
    abort();
  }
  FUN_710395ac50(param_1,"stats","config.stats",0,&uStack_2c);
  local_d0 = (long ***)0x1;
  pppplVar2 = &local_d0;
  uVar5 = 0;
  uVar7 = 0;
  iVar1 = FUN_710392ec40((byte *)"config.utrace",&uStack_2c,pppplVar2,(byte ****)0x0,(long ****)0x0,
                         in_x5,in_x6,in_x7);
  if (iVar1 != 0) {
    FUN_7103957550((byte *)"<jemalloc>: Failure in xmallctl(\"%s\", ...)\n","config.utrace",
                   pppplVar2,uVar5,uVar7,in_x5,in_x6,in_x7);
                    /* WARNING: Subroutine does not return */
    abort();
  }
  FUN_710395ac50(param_1,"utrace","config.utrace",0,&uStack_2c);
  local_d8 = (long ***)0x1;
  pppplVar2 = &local_d8;
  uVar5 = 0;
  uVar7 = 0;
  iVar1 = FUN_710392ec40((byte *)"config.xmalloc",&uStack_2c,pppplVar2,(byte ****)0x0,(long ****)0x0
                         ,in_x5,in_x6,in_x7);
  if (iVar1 != 0) {
    FUN_7103957550((byte *)"<jemalloc>: Failure in xmallctl(\"%s\", ...)\n","config.xmalloc",
                   pppplVar2,uVar5,uVar7,in_x5,in_x6,in_x7);
                    /* WARNING: Subroutine does not return */
    abort();
  }
  pcVar3 = "config.xmalloc";
  uVar5 = 0;
  puVar8 = &uStack_2c;
  FUN_710395ac50(param_1,"xmalloc","config.xmalloc",0,puVar8);
  FUN_710395ab20(param_1,extraout_x1,pcVar3,uVar5,puVar8,in_x5,in_x6,in_x7);
  FUN_710395aca0(param_1,&DAT_710436b03a,"Run-time option settings",uVar5,puVar8,in_x5,in_x6,in_x7);
  iVar1 = FUN_710392ec40((byte *)"opt.abort",&uStack_2c,&local_60,(byte ****)0x0,(long ****)0x0,
                         in_x5,in_x6,in_x7);
  if (iVar1 == 0) {
    FUN_710395ac50(param_1,"abort","opt.abort",0,&uStack_2c);
  }
  iVar1 = FUN_710392ec40((byte *)"opt.abort_conf",&uStack_2c,&local_60,(byte ****)0x0,(long ****)0x0
                         ,in_x5,in_x6,in_x7);
  if (iVar1 == 0) {
    FUN_710395ac50(param_1,"abort_conf","opt.abort_conf",0,&uStack_2c);
  }
  iVar1 = FUN_710392ec40((byte *)"opt.retain",&uStack_2c,&local_60,(byte ****)0x0,(long ****)0x0,
                         in_x5,in_x6,in_x7);
  if (iVar1 == 0) {
    FUN_710395ac50(param_1,"retain","opt.retain",0,&uStack_2c);
  }
  iVar1 = FUN_710392ec40((byte *)"opt.dss",auStack_28,&local_80,(byte ****)0x0,(long ****)0x0,in_x5,
                         in_x6,in_x7);
  if (iVar1 == 0) {
    FUN_710395ac50(param_1,&DAT_710441144a,"opt.dss",7,auStack_28);
  }
  iVar1 = FUN_710392ec40((byte *)"opt.narenas",(long)&uStack_38 + 4,&local_68,(byte ****)0x0,
                         (long ****)0x0,in_x5,in_x6,in_x7);
  if (iVar1 == 0) {
    FUN_710395ac50(param_1,"narenas","opt.narenas",2,(uint *)((long)&uStack_38 + 4));
  }
  iVar1 = FUN_710392ec40((byte *)"opt.percpu_arena",auStack_28,&local_80,(byte ****)0x0,
                         (long ****)0x0,in_x5,in_x6,in_x7);
  if (iVar1 == 0) {
    FUN_710395ac50(param_1,"percpu_arena","opt.percpu_arena",7,auStack_28);
  }
  iVar1 = FUN_710392ec40((byte *)"opt.metadata_thp",auStack_28,&local_80,(byte ****)0x0,
                         (long ****)0x0,in_x5,in_x6,in_x7);
  if (iVar1 == 0) {
    FUN_710395ac50(param_1,"metadata_thp","opt.metadata_thp",7,auStack_28);
  }
  iVar1 = FUN_710392ec40((byte *)"opt.background_thread",&uStack_2c,&local_60,(byte ****)0x0,
                         (long ****)0x0,in_x5,in_x6,in_x7);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_710392ec40((byte *)"background_thread",&uStack_30,&local_60,(byte ****)0x0,
                             (long ****)0x0,in_x5,in_x6,in_x7), iVar1 == 0)) {
    in_x5 = "background_thread";
    in_x6 = 0;
    in_x7 = &uStack_30;
    FUN_710395ad30(param_1,"background_thread","opt.background_thread",0,&uStack_2c,0x7104348fb3,0,
                   in_x7);
  }
  iVar1 = FUN_710392ec40((byte *)"opt.dirty_decay_ms",auStack_48,&local_78,(byte ****)0x0,
                         (long ****)0x0,in_x5,in_x6,in_x7);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_710392ec40((byte *)"arenas.dirty_decay_ms",auStack_50,&local_78,(byte ****)0x0,
                             (long ****)0x0,in_x5,in_x6,in_x7), iVar1 == 0)) {
    in_x5 = "arenas.dirty_decay_ms";
    in_x6 = 6;
    in_x7 = auStack_50;
    FUN_710395ad30(param_1,"dirty_decay_ms","opt.dirty_decay_ms",6,auStack_48,0x7104328c85,6,in_x7);
  }
  iVar1 = FUN_710392ec40((byte *)"opt.muzzy_decay_ms",auStack_48,&local_78,(byte ****)0x0,
                         (long ****)0x0,in_x5,in_x6,in_x7);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_710392ec40((byte *)"arenas.muzzy_decay_ms",auStack_50,&local_78,(byte ****)0x0,
                             (long ****)0x0,in_x5,in_x6,in_x7), iVar1 == 0)) {
    in_x5 = "arenas.muzzy_decay_ms";
    in_x6 = 6;
    in_x7 = auStack_50;
    FUN_710395ad30(param_1,"muzzy_decay_ms","opt.muzzy_decay_ms",6,auStack_48,0x71042d4fda,6,in_x7);
  }
  iVar1 = FUN_710392ec40((byte *)"opt.lg_extent_max_active_fit",(long)&uStack_38 + 4,&local_68,
                         (byte ****)0x0,(long ****)0x0,in_x5,in_x6,in_x7);
  if (iVar1 == 0) {
    FUN_710395ac50(param_1,"lg_extent_max_active_fit","opt.lg_extent_max_active_fit",2,
                   (uint *)((long)&uStack_38 + 4));
  }
  iVar1 = FUN_710392ec40((byte *)"opt.junk",auStack_28,&local_80,(byte ****)0x0,(long ****)0x0,in_x5
                         ,in_x6,in_x7);
  if (iVar1 == 0) {
    FUN_710395ac50(param_1,&DAT_710427f705,"opt.junk",7,auStack_28);
  }
  iVar1 = FUN_710392ec40((byte *)"opt.zero",&uStack_2c,&local_60,(byte ****)0x0,(long ****)0x0,in_x5
                         ,in_x6,in_x7);
  if (iVar1 == 0) {
    FUN_710395ac50(param_1,&DAT_710427f70a,"opt.zero",0,&uStack_2c);
  }
  iVar1 = FUN_710392ec40((byte *)"opt.utrace",&uStack_2c,&local_60,(byte ****)0x0,(long ****)0x0,
                         in_x5,in_x6,in_x7);
  if (iVar1 == 0) {
    FUN_710395ac50(param_1,"utrace","opt.utrace",0,&uStack_2c);
  }
  iVar1 = FUN_710392ec40((byte *)"opt.xmalloc",&uStack_2c,&local_60,(byte ****)0x0,(long ****)0x0,
                         in_x5,in_x6,in_x7);
  if (iVar1 == 0) {
    FUN_710395ac50(param_1,"xmalloc","opt.xmalloc",0,&uStack_2c);
  }
  iVar1 = FUN_710392ec40((byte *)"opt.tcache",&uStack_2c,&local_60,(byte ****)0x0,(long ****)0x0,
                         in_x5,in_x6,in_x7);
  if (iVar1 == 0) {
    FUN_710395ac50(param_1,"tcache","opt.tcache",0,&uStack_2c);
  }
  iVar1 = FUN_710392ec40((byte *)"opt.lg_tcache_max",auStack_48,&local_78,(byte ****)0x0,
                         (long ****)0x0,in_x5,in_x6,in_x7);
  if (iVar1 == 0) {
    FUN_710395ac50(param_1,"lg_tcache_max","opt.lg_tcache_max",6,auStack_48);
  }
  iVar1 = FUN_710392ec40((byte *)"opt.thp",auStack_28,&local_80,(byte ****)0x0,(long ****)0x0,in_x5,
                         in_x6,in_x7);
  if (iVar1 == 0) {
    FUN_710395ac50(param_1,&DAT_710444259c,"opt.thp",7,auStack_28);
  }
  iVar1 = FUN_710392ec40((byte *)"opt.prof",&uStack_2c,&local_60,(byte ****)0x0,(long ****)0x0,in_x5
                         ,in_x6,in_x7);
  if (iVar1 == 0) {
    FUN_710395ac50(param_1,&DAT_710439be5d,"opt.prof",0,&uStack_2c);
  }
  iVar1 = FUN_710392ec40((byte *)"opt.prof_prefix",auStack_28,&local_80,(byte ****)0x0,
                         (long ****)0x0,in_x5,in_x6,in_x7);
  if (iVar1 == 0) {
    FUN_710395ac50(param_1,"prof_prefix","opt.prof_prefix",7,auStack_28);
  }
  iVar1 = FUN_710392ec40((byte *)"opt.prof_active",&uStack_2c,&local_60,(byte ****)0x0,
                         (long ****)0x0,in_x5,in_x6,in_x7);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_710392ec40((byte *)"prof.active",&uStack_30,&local_60,(byte ****)0x0,
                             (long ****)0x0,in_x5,in_x6,in_x7), iVar1 == 0)) {
    in_x5 = "prof.active";
    in_x6 = 0;
    in_x7 = &uStack_30;
    FUN_710395ad30(param_1,"prof_active","opt.prof_active",0,&uStack_2c,0x71042906f7,0,in_x7);
  }
  iVar1 = FUN_710392ec40((byte *)"opt.prof_thread_active_init",&uStack_2c,&local_60,(byte ****)0x0,
                         (long ****)0x0,in_x5,in_x6,in_x7);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_710392ec40((byte *)"prof.thread_active_init",&uStack_30,&local_60,(byte ****)0x0,
                             (long ****)0x0,in_x5,in_x6,in_x7), iVar1 == 0)) {
    in_x5 = "prof.thread_active_init";
    in_x6 = 0;
    in_x7 = &uStack_30;
    FUN_710395ad30(param_1,"prof_thread_active_init","opt.prof_thread_active_init",0,&uStack_2c,
                   0x710435a117,0,in_x7);
  }
  iVar1 = FUN_710392ec40((byte *)"opt.lg_prof_sample",auStack_48,&local_78,(byte ****)0x0,
                         (long ****)0x0,in_x5,in_x6,in_x7);
  if ((iVar1 == 0) &&
     (iVar1 = FUN_710392ec40((byte *)"prof.lg_sample",auStack_50,&local_78,(byte ****)0x0,
                             (long ****)0x0,in_x5,in_x6,in_x7), iVar1 == 0)) {
    in_x5 = "prof.lg_sample";
    in_x6 = 6;
    in_x7 = auStack_50;
    FUN_710395ad30(param_1,"lg_prof_sample","opt.lg_prof_sample",6,auStack_48,0x7104348fd8,6,in_x7);
  }
  iVar1 = FUN_710392ec40((byte *)"opt.prof_accum",&uStack_2c,&local_60,(byte ****)0x0,(long ****)0x0
                         ,in_x5,in_x6,in_x7);
  if (iVar1 == 0) {
    FUN_710395ac50(param_1,"prof_accum","opt.prof_accum",0,&uStack_2c);
  }
  iVar1 = FUN_710392ec40((byte *)"opt.lg_prof_interval",auStack_48,&local_78,(byte ****)0x0,
                         (long ****)0x0,in_x5,in_x6,in_x7);
  if (iVar1 == 0) {
    FUN_710395ac50(param_1,"lg_prof_interval","opt.lg_prof_interval",6,auStack_48);
  }
  iVar1 = FUN_710392ec40((byte *)"opt.prof_gdump",&uStack_2c,&local_60,(byte ****)0x0,(long ****)0x0
                         ,in_x5,in_x6,in_x7);
  if (iVar1 == 0) {
    FUN_710395ac50(param_1,"prof_gdump","opt.prof_gdump",0,&uStack_2c);
  }
  iVar1 = FUN_710392ec40((byte *)"opt.prof_final",&uStack_2c,&local_60,(byte ****)0x0,(long ****)0x0
                         ,in_x5,in_x6,in_x7);
  if (iVar1 == 0) {
    FUN_710395ac50(param_1,"prof_final","opt.prof_final",0,&uStack_2c);
  }
  iVar1 = FUN_710392ec40((byte *)"opt.prof_leak",&uStack_2c,&local_60,(byte ****)0x0,(long ****)0x0,
                         in_x5,in_x6,in_x7);
  if (iVar1 == 0) {
    FUN_710395ac50(param_1,"prof_leak","opt.prof_leak",0,&uStack_2c);
  }
  iVar1 = FUN_710392ec40((byte *)"opt.stats_print",&uStack_2c,&local_60,(byte ****)0x0,
                         (long ****)0x0,in_x5,in_x6,in_x7);
  if (iVar1 == 0) {
    FUN_710395ac50(param_1,"stats_print","opt.stats_print",0,&uStack_2c);
  }
  pcVar3 = (char *)&local_80;
  uVar7 = 0;
  puVar8 = (uint *)0x0;
  iVar1 = FUN_710392ec40((byte *)"opt.stats_print_opts",auStack_28,(long ****)pcVar3,(byte ****)0x0,
                         (long ****)0x0,in_x5,in_x6,in_x7);
  uVar5 = extraout_x1_00;
  if (iVar1 == 0) {
    pcVar3 = "opt.stats_print_opts";
    uVar7 = 7;
    puVar8 = auStack_28;
    FUN_710395ac50(param_1,"stats_print_opts","opt.stats_print_opts",7,puVar8);
    uVar5 = extraout_x1_01;
  }
  FUN_710395ab20(param_1,uVar5,pcVar3,uVar7,puVar8,in_x5,in_x6,in_x7);
  FUN_7103959240(param_1,"arenas",pcVar3,uVar7,puVar8,in_x5,in_x6,in_x7);
  local_e0 = (long ***)&DAT_00000004;
  pppplVar2 = &local_e0;
  uVar5 = 0;
  uVar7 = 0;
  iVar1 = FUN_710392ec40((byte *)"arenas.narenas",(long)&uStack_38 + 4,pppplVar2,(byte ****)0x0,
                         (long ****)0x0,in_x5,in_x6,in_x7);
  if (iVar1 != 0) {
    FUN_7103957550((byte *)"<jemalloc>: Failure in xmallctl(\"%s\", ...)\n","arenas.narenas",
                   pppplVar2,uVar5,uVar7,in_x5,in_x6,in_x7);
                    /* WARNING: Subroutine does not return */
    abort();
  }
  FUN_710395ac50(param_1,"narenas","Arenas",2,(uint *)((long)&uStack_38 + 4));
  local_e8 = (long ***)&DAT_00000008;
  pppplVar2 = &local_e8;
  uVar5 = 0;
  uVar7 = 0;
  iVar1 = FUN_710392ec40((byte *)"arenas.dirty_decay_ms",auStack_48,pppplVar2,(byte ****)0x0,
                         (long ****)0x0,in_x5,in_x6,in_x7);
  if (iVar1 != 0) {
    FUN_7103957550((byte *)"<jemalloc>: Failure in xmallctl(\"%s\", ...)\n","arenas.dirty_decay_ms",
                   pppplVar2,uVar5,uVar7,in_x5,in_x6,in_x7);
                    /* WARNING: Subroutine does not return */
    abort();
  }
  FUN_710395ae40(param_1,"dirty_decay_ms",6,auStack_48);
  local_f0 = (long ***)&DAT_00000008;
  pppplVar2 = &local_f0;
  uVar5 = 0;
  uVar7 = 0;
  iVar1 = FUN_710392ec40((byte *)"arenas.muzzy_decay_ms",auStack_48,pppplVar2,(byte ****)0x0,
                         (long ****)0x0,in_x5,in_x6,in_x7);
  if (iVar1 != 0) {
    FUN_7103957550((byte *)"<jemalloc>: Failure in xmallctl(\"%s\", ...)\n","arenas.muzzy_decay_ms",
                   pppplVar2,uVar5,uVar7,in_x5,in_x6,in_x7);
                    /* WARNING: Subroutine does not return */
    abort();
  }
  FUN_710395ae40(param_1,"muzzy_decay_ms",6,auStack_48);
  local_f8 = (long ***)&DAT_00000008;
  pppplVar2 = &local_f8;
  uVar5 = 0;
  uVar7 = 0;
  iVar1 = FUN_710392ec40((byte *)"arenas.quantum",&pppbStack_58,pppplVar2,(byte ****)0x0,
                         (long ****)0x0,in_x5,in_x6,in_x7);
  if (iVar1 != 0) {
    FUN_7103957550((byte *)"<jemalloc>: Failure in xmallctl(\"%s\", ...)\n","arenas.quantum",
                   pppplVar2,uVar5,uVar7,in_x5,in_x6,in_x7);
                    /* WARNING: Subroutine does not return */
    abort();
  }
  FUN_710395ac50(param_1,"quantum","Quantum size",5,(uint *)&pppbStack_58);
  local_100 = (long ***)&DAT_00000008;
  pppplVar2 = &local_100;
  uVar5 = 0;
  uVar7 = 0;
  iVar1 = FUN_710392ec40((byte *)"arenas.page",&pppbStack_58,pppplVar2,(byte ****)0x0,(long ****)0x0
                         ,in_x5,in_x6,in_x7);
  if (iVar1 != 0) {
    FUN_7103957550((byte *)"<jemalloc>: Failure in xmallctl(\"%s\", ...)\n","arenas.page",pppplVar2,
                   uVar5,uVar7,in_x5,in_x6,in_x7);
                    /* WARNING: Subroutine does not return */
    abort();
  }
  FUN_710395ac50(param_1,&DAT_710441144e,"Page size",5,(uint *)&pppbStack_58);
  iVar1 = FUN_710392ec40((byte *)"arenas.tcache_max",&pppbStack_58,&local_70,(byte ****)0x0,
                         (long ****)0x0,in_x5,in_x6,in_x7);
  if (iVar1 == 0) {
    FUN_710395ac50(param_1,"tcache_max","Maximum thread-cached size class",5,(uint *)&pppbStack_58);
  }
  local_110 = (long ***)&DAT_00000004;
  pppplVar2 = &local_110;
  uVar5 = 0;
  uVar7 = 0;
  iVar1 = FUN_710392ec40((byte *)"arenas.nbins",&local_104,pppplVar2,(byte ****)0x0,(long ****)0x0,
                         in_x5,in_x6,in_x7);
  if (iVar1 != 0) {
    FUN_7103957550((byte *)"<jemalloc>: Failure in xmallctl(\"%s\", ...)\n","arenas.nbins",pppplVar2
                   ,uVar5,uVar7,in_x5,in_x6,in_x7);
                    /* WARNING: Subroutine does not return */
    abort();
  }
  FUN_710395ac50(param_1,"nbins","Number of bin size classes",2,&local_104);
  local_120 = (long ***)&DAT_00000004;
  pppplVar2 = &local_120;
  uVar5 = 0;
  uVar7 = 0;
  iVar1 = FUN_710392ec40((byte *)"arenas.nhbins",auStack_114,pppplVar2,(byte ****)0x0,(long ****)0x0
                         ,in_x5,in_x6,in_x7);
  if (iVar1 != 0) {
    FUN_7103957550((byte *)"<jemalloc>: Failure in xmallctl(\"%s\", ...)\n","arenas.nhbins",
                   pppplVar2,uVar5,uVar7,in_x5,in_x6,in_x7);
                    /* WARNING: Subroutine does not return */
    abort();
  }
  pcVar3 = "Number of thread-cache bin size classes";
  ppppbVar6 = (byte ****)0x2;
  pppplVar2 = (long ****)auStack_114;
  FUN_710395ac50(param_1,"nhbins","Number of thread-cache bin size classes",2,(uint *)pppplVar2);
  if (*param_1 == 0) {
    FUN_710395aea0(param_1,&DAT_7104317bd5,pcVar3,ppppbVar6,pppplVar2,in_x5,in_x6,in_x7);
    uVar5 = extraout_x1_02;
    for (local_124 = 0; local_124 < local_104; local_124 = local_124 + 1) {
      FUN_710395af00(param_1,uVar5,pcVar3,ppppbVar6,pppplVar2,in_x5,in_x6,in_x7);
      local_168 = (long ***)&DAT_00000007;
      local_170 = (byte ***)&DAT_00000008;
      pppplVar4 = &local_168;
      iVar1 = FUN_710392ecf0((byte *)"arenas.bin.0.size",(long)auStack_160,pppplVar4,ppppbVar6,
                             pppplVar2,in_x5,in_x6,in_x7);
      if (iVar1 != 0) {
        FUN_7103957550((byte *)"<jemalloc>: Failure in xmallctlnametomib(\"%s\", ...)\n",
                       "arenas.bin.0.size",pppplVar4,ppppbVar6,pppplVar2,in_x5,in_x6,in_x7);
                    /* WARNING: Subroutine does not return */
        abort();
      }
      local_150 = (ulong)local_124;
      iVar1 = FUN_710392ed90((long)auStack_160,(ulong)local_168,(long ****)&pppbStack_58,&local_170,
                             pppplVar2,in_x5,in_x6,in_x7);
      if (iVar1 != 0) {
        FUN_71039545b0("<jemalloc>: Failure in xmallctlbymib()\n");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      ppppbVar6 = &pppbStack_58;
      FUN_710395ae40(param_1,&DAT_7104348ff8,5,(uint *)ppppbVar6);
      local_1b0 = (long ***)&DAT_00000007;
      local_1b8 = (byte ***)&DAT_00000004;
      pppplVar4 = &local_1b0;
      iVar1 = FUN_710392ecf0((byte *)"arenas.bin.0.nregs",(long)auStack_1a8,pppplVar4,ppppbVar6,
                             pppplVar2,in_x5,in_x6,in_x7);
      if (iVar1 != 0) {
        FUN_7103957550((byte *)"<jemalloc>: Failure in xmallctlnametomib(\"%s\", ...)\n",
                       "arenas.bin.0.nregs",pppplVar4,ppppbVar6,pppplVar2,in_x5,in_x6,in_x7);
                    /* WARNING: Subroutine does not return */
        abort();
      }
      local_198 = (ulong)local_124;
      iVar1 = FUN_710392ed90((long)auStack_1a8,(ulong)local_1b0,(long ****)&uStack_38,&local_1b8,
                             pppplVar2,in_x5,in_x6,in_x7);
      if (iVar1 != 0) {
        FUN_71039545b0("<jemalloc>: Failure in xmallctlbymib()\n");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      ppppbVar6 = (byte ****)&uStack_38;
      FUN_710395ae40(param_1,"nregs",3,(uint *)ppppbVar6);
      local_1f8 = (long ***)&DAT_00000007;
      local_200 = (byte ***)&DAT_00000008;
      pppplVar4 = &local_1f8;
      iVar1 = FUN_710392ecf0((byte *)"arenas.bin.0.slab_size",(long)auStack_1f0,pppplVar4,ppppbVar6,
                             pppplVar2,in_x5,in_x6,in_x7);
      if (iVar1 != 0) {
        FUN_7103957550((byte *)"<jemalloc>: Failure in xmallctlnametomib(\"%s\", ...)\n",
                       "arenas.bin.0.slab_size",pppplVar4,ppppbVar6,pppplVar2,in_x5,in_x6,in_x7);
                    /* WARNING: Subroutine does not return */
        abort();
      }
      local_1e0 = (ulong)local_124;
      iVar1 = FUN_710392ed90((long)auStack_1f0,(ulong)local_1f8,(long ****)&pppbStack_58,&local_200,
                             pppplVar2,in_x5,in_x6,in_x7);
      if (iVar1 != 0) {
        FUN_71039545b0("<jemalloc>: Failure in xmallctlbymib()\n");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      pcVar3 = (char *)0x5;
      ppppbVar6 = &pppbStack_58;
      FUN_710395ae40(param_1,"slab_size",5,(uint *)ppppbVar6);
      FUN_710395af50(param_1,extraout_x1_03,pcVar3,ppppbVar6,pppplVar2,in_x5,in_x6,in_x7);
      uVar5 = extraout_x1_04;
    }
    FUN_710395afc0(param_1,uVar5,pcVar3,ppppbVar6,pppplVar2,in_x5,in_x6,in_x7);
  }
  local_210 = (long ***)&DAT_00000004;
  pppplVar2 = &local_210;
  uVar5 = 0;
  uVar7 = 0;
  iVar1 = FUN_710392ec40((byte *)"arenas.nlextents",local_204,pppplVar2,(byte ****)0x0,
                         (long ****)0x0,in_x5,in_x6,in_x7);
  if (iVar1 != 0) {
    FUN_7103957550((byte *)"<jemalloc>: Failure in xmallctl(\"%s\", ...)\n","arenas.nlextents",
                   pppplVar2,uVar5,uVar7,in_x5,in_x6,in_x7);
                    /* WARNING: Subroutine does not return */
    abort();
  }
  pcVar3 = "Number of large size classes";
  ppppbVar6 = (byte ****)0x2;
  pppplVar2 = (long ****)local_204;
  FUN_710395ac50(param_1,"nlextents","Number of large size classes",2,(uint *)pppplVar2);
  uVar5 = extraout_x1_05;
  if (*param_1 == 0) {
    FUN_710395aea0(param_1,"lextent",pcVar3,ppppbVar6,pppplVar2,in_x5,in_x6,in_x7);
    uVar5 = extraout_x1_06;
    for (local_214 = 0; local_214 < (uint)local_204; local_214 = local_214 + 1) {
      FUN_710395af00(param_1,uVar5,pcVar3,ppppbVar6,pppplVar2,in_x5,in_x6,in_x7);
      local_258 = (long ***)&DAT_00000007;
      local_260 = (byte ***)&DAT_00000008;
      pppplVar4 = &local_258;
      iVar1 = FUN_710392ecf0((byte *)"arenas.lextent.0.size",(long)auStack_250,pppplVar4,ppppbVar6,
                             pppplVar2,in_x5,in_x6,in_x7);
      if (iVar1 != 0) {
        FUN_7103957550((byte *)"<jemalloc>: Failure in xmallctlnametomib(\"%s\", ...)\n",
                       "arenas.lextent.0.size",pppplVar4,ppppbVar6,pppplVar2,in_x5,in_x6,in_x7);
                    /* WARNING: Subroutine does not return */
        abort();
      }
      local_240 = (ulong)local_214;
      iVar1 = FUN_710392ed90((long)auStack_250,(ulong)local_258,(long ****)&pppbStack_58,&local_260,
                             pppplVar2,in_x5,in_x6,in_x7);
      if (iVar1 != 0) {
        FUN_71039545b0("<jemalloc>: Failure in xmallctlbymib()\n");
                    /* WARNING: Subroutine does not return */
        abort();
      }
      pcVar3 = (char *)0x5;
      ppppbVar6 = &pppbStack_58;
      FUN_710395ae40(param_1,&DAT_7104348ff8,5,(uint *)ppppbVar6);
      FUN_710395af50(param_1,extraout_x1_07,pcVar3,ppppbVar6,pppplVar2,in_x5,in_x6,in_x7);
      uVar5 = extraout_x1_08;
    }
    FUN_710395afc0(param_1,uVar5,pcVar3,ppppbVar6,pppplVar2,in_x5,in_x6,in_x7);
    uVar5 = extraout_x1_09;
  }
  FUN_710395a990(param_1,uVar5,pcVar3,ppppbVar6,pppplVar2,in_x5,in_x6,in_x7);
  return;
}

