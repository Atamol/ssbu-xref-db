// addr:      71002a7000
// offset:    0x2a7000
// name:      FUN_71002a7000
// mangled:   
// signature: undefined __cdecl FUN_71002a7000(long param_1)


void FUN_71002a7000(long param_1)

{
  bool bVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  char *pcVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  uint *puVar18;
  long lVar19;
  size_t sVar20;
  undefined8 *puVar21;
  ulong uVar22;
  code *pcVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  undefined1 *puVar26;
  long *plVar27;
  ulong uVar28;
  long *plVar29;
  int local_358 [6];
  char *local_340;
  undefined **local_338;
  undefined1 local_330 [4];
  undefined1 local_32c;
  undefined1 local_32b;
  undefined1 local_32a;
  undefined1 local_329;
  undefined1 local_328;
  undefined1 local_327;
  undefined1 local_326;
  undefined1 local_325;
  undefined1 local_324;
  undefined1 local_323;
  undefined1 local_322;
  undefined1 local_321;
  undefined1 *local_320;
  undefined8 local_318;
  undefined **local_218;
  undefined1 local_210 [16];
  undefined1 *local_200;
  undefined8 uStack_1f8;
  undefined **local_1f0;
  char local_1e8 [16];
  char *local_1d8;
  undefined8 uStack_1d0;
  undefined8 **local_1c8;
  undefined8 *local_1c0;
  undefined8 uStack_1b8;
  char *local_1b0;
  undefined **local_1a8;
  undefined1 local_1a0 [16];
  undefined1 *local_190;
  undefined8 local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  undefined1 *local_170;
  undefined **local_168;
  undefined1 local_160 [4];
  undefined1 local_15c;
  undefined1 local_15b;
  undefined1 local_15a;
  undefined1 local_159;
  undefined1 local_158;
  undefined1 local_157;
  undefined1 local_156;
  undefined1 local_155;
  undefined1 local_154;
  undefined1 local_153;
  undefined1 local_152;
  undefined1 local_151;
  undefined1 *local_150;
  undefined8 local_148;
  
  plVar27 = &DAT_71052af138;
  if (DAT_71052af1d8 != '\0') {
    puVar18 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar2 = *puVar18;
    if (uVar2 != 0) {
      if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar2) goto LAB_71002a76dc;
      plVar27 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x20);
    }
  }
  lVar19 = FUN_71001cd7d0(*(long *)(*(long *)(*plVar27 + 0x10) + 0x18),*(uint *)(param_1 + 0xa0));
  if (lVar19 == 0) {
    local_168 = (undefined **)CONCAT44(local_168._4_4_,0x80010004);
    FUN_71001b4200((undefined4 *)&local_340,(undefined4 *)&local_168);
    FUN_71002a7700(param_1,(int *)&local_340);
    return;
  }
  plVar27 = (long *)(param_1 + 0xc0);
  *(undefined4 *)(param_1 + 0x150) = 0;
  FUN_71001d1590(plVar27);
  local_180 = (undefined1 *)0x0;
  local_178 = (undefined1 *)0x0;
  local_170 = (undefined1 *)0x0;
  local_190 = local_1a0;
  local_188 = 0x10;
  local_1a8 = &PTR_FUN_710509cc08;
  local_1a0[0] = 0;
  FUN_71002a7830(param_1 + 0x188,(long)&local_1a8);
  local_1b0 = (char *)0x0;
  FUN_71001b2b10((long)&local_1a8,&local_1b0);
  pcVar9 = local_1b0;
  sVar20 = strlen(local_1b0);
  FUN_71017143b0(&local_180,pcVar9,pcVar9 + sVar20);
  FUN_71001b2bf0((long)local_1b0);
  puVar11 = local_178;
  puVar26 = local_180;
  if (local_178 < local_170) {
    *local_178 = 0;
    local_178 = local_178 + 1;
  }
  else {
    lVar19 = (long)local_178 - (long)local_180;
    uVar28 = lVar19 + 1;
    if ((long)uVar28 < 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    if ((ulong)((long)local_170 - (long)local_180) < 0x3fffffffffffffff) {
      uVar22 = ((long)local_170 - (long)local_180) * 2;
      if (uVar28 <= uVar22) {
        uVar28 = uVar22;
      }
      if (uVar28 != 0) goto LAB_71002a71a0;
      puVar21 = (undefined8 *)0x0;
    }
    else {
      uVar28 = 0x7fffffffffffffff;
LAB_71002a71a0:
      puVar21 = FUN_71001b1820(uVar28);
    }
    puVar10 = local_180;
    puVar25 = (undefined1 *)((long)puVar21 + lVar19);
    local_170 = (undefined1 *)((long)puVar21 + uVar28);
    puVar24 = puVar25 + 1;
    *puVar25 = 0;
    if (local_178 != local_180) {
      lVar19 = lVar19 - (long)local_178;
      puVar26 = (undefined1 *)((long)puVar21 + (long)(puVar11 + (-1 - (long)puVar26)));
      do {
        local_178 = local_178 + -1;
        *puVar26 = *local_178;
        puVar26 = puVar26 + -1;
      } while (local_180 != local_178);
      puVar25 = (undefined1 *)((long)puVar21 + (long)(local_180 + lVar19));
    }
    bVar1 = local_180 != (undefined1 *)0x0;
    local_180 = puVar25;
    local_178 = puVar24;
    if (bVar1) {
      FUN_71001b1870((long)puVar10);
    }
  }
  local_1c8 = &local_1c0;
  local_1c0 = (undefined8 *)0x0;
  uStack_1b8 = 0;
  lVar19 = FUN_71001b52a0(param_1 + 0x158);
  if (lVar19 != 0) {
    local_1d8 = local_1e8;
    local_1e8[0] = '\0';
    uStack_1d0 = 0x10;
    local_1f0 = &PTR_FUN_710509cc08;
    FUN_71001b47e0((long)&local_1f0,"Bearer ",-1);
    FUN_71001b5080(&local_168,(long)&local_1f0,param_1 + 0x158);
    local_318 = local_148;
    uVar17 = local_152;
    uVar16 = local_154;
    uVar15 = local_156;
    uVar14 = local_158;
    uVar13 = local_15a;
    uVar12 = local_15c;
    uVar8 = local_321;
    uVar7 = local_323;
    uVar6 = local_325;
    uVar5 = local_327;
    uVar4 = local_329;
    uVar3 = local_32b;
    local_330[0] = local_160[0];
    local_340 = "Authorization";
    local_160[0] = 0;
    local_15c = local_32c;
    local_32c = uVar12;
    local_32b = local_15b;
    local_15b = uVar3;
    local_15a = local_32a;
    local_32a = uVar13;
    local_329 = local_159;
    local_159 = uVar4;
    local_158 = local_328;
    local_328 = uVar14;
    local_327 = local_157;
    local_157 = uVar5;
    local_156 = local_326;
    local_326 = uVar15;
    local_325 = local_155;
    local_155 = uVar6;
    local_154 = local_324;
    local_324 = uVar16;
    local_323 = local_153;
    local_153 = uVar7;
    local_152 = local_322;
    local_322 = uVar17;
    local_321 = local_151;
    local_151 = uVar8;
    local_148 = 0x10;
    local_320 = local_150;
    if (local_150 == local_160) {
      local_320 = local_330;
    }
    local_338 = &PTR_FUN_710509cc08;
    local_150 = local_160;
    FUN_71002ada50((long *)&local_1c8,&local_340);
    local_338 = &PTR_FUN_710509cc08;
    FUN_71001b4910((long)&local_338);
    local_168 = &PTR_FUN_710509cc08;
    FUN_71001b4910((long)&local_168);
    local_1f0 = &PTR_FUN_710509cc08;
    FUN_71001b4910((long)&local_1f0);
  }
  local_1d8 = local_1e8;
  local_1e8[0] = '\0';
  uStack_1d0 = 0x10;
  local_1f0 = &PTR_FUN_710509cc08;
  FUN_71002a3f50((long)&local_1f0);
  local_340 = "User-Agent";
  local_320 = local_330;
  local_330[0] = 0;
  local_318 = 0x10;
  local_338 = &PTR_FUN_710509cc08;
  FUN_71001b47e0((long)&local_338,local_1d8,-1);
  FUN_71002ada50((long *)&local_1c8,&local_340);
  local_338 = &PTR_FUN_710509cc08;
  FUN_71001b4910((long)&local_338);
  local_340 = "Content-Type";
  local_338 = (undefined **)0x7104307a76;
  FUN_71002adbe0((long *)&local_1c8,&local_340);
  local_200 = local_210;
  uStack_1f8 = 0x10;
  local_210[0] = 0;
  local_218 = &PTR_FUN_710509cc08;
  snprintf((char *)&local_340,0x100,"api-%%.znc.srv.nintendo.net");
  nn::nsd::ResolveEx((Fqdn *)&local_168,(Fqdn *)&local_340);
  FUN_71001b3cb0((long)&local_218,(char *)&local_168);
  FUN_71001b6080(&local_340);
  lVar19 = FUN_71001b0ab0((long)&local_340,"https://");
  lVar19 = FUN_71001b5d60(lVar19,(long)&local_218);
  lVar19 = FUN_71001b0ab0(lVar19,"/v1/NX/");
  FUN_71001b0ab0(lVar19,PTR_DAT_7104f60e90);
  local_150 = local_160;
  local_160[0] = 0;
  local_148 = 0x10;
  local_168 = &PTR_FUN_710509cc08;
  FUN_71001b47e0((long)&local_168,(char *)local_338,-1);
  FUN_71002219c0(local_358,param_1 + 0x180,plVar27,(long)&local_168,2,
                 *(undefined4 *)(param_1 + 0xa4),(long *)&local_180,0,(long *)&local_1c8,0x2800,
                 param_1 + 0xa8,param_1 + 0x150);
  pcVar23 = FUN_710170d030;
  if (local_358[0] < 0) {
    pcVar23 = (code *)0x0;
  }
  local_168 = &PTR_FUN_710509cc08;
  FUN_71001b4910((long)&local_168);
  if (pcVar23 == (code *)0x0) {
    local_358[0] = -0x7ffefff3;
    FUN_71001b4200((undefined4 *)&local_168,local_358);
    FUN_71002a7700(param_1,(int *)&local_168);
  }
  else {
    plVar29 = &DAT_71052af138;
    if (DAT_71052af1d8 != '\0') {
      puVar18 = (uint *)FUN_7101717960(DAT_71052af1d0);
      uVar2 = *puVar18;
      if (uVar2 != 0) {
        if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar2) {
LAB_71002a76dc:
          FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0)
          ;
          return;
        }
        plVar29 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x20);
      }
    }
    FUN_71001d3780(*(long *)(*(long *)(*plVar29 + 0x10) + 0x18),*(uint *)(param_1 + 0xa0),
                   *(undefined4 *)(param_1 + 0xd8));
    FUN_71001d6410(param_1,2);
    puVar21 = FUN_71001af850(0x20);
    if (puVar21 != (undefined8 *)0x0) {
      puVar21[2] = 0;
      puVar21[3] = &DAT_71044114cc;
      *puVar21 = &PTR_FUN_7104f56e28;
      puVar21[1] = FUN_71002a7ee0;
    }
    FUN_71001d4200(param_1,(long)plVar27,puVar21);
  }
  FUN_71001b60c0(&local_340);
  local_218 = &PTR_FUN_710509cc08;
  FUN_71001b4910((long)&local_218);
  local_1f0 = &PTR_FUN_710509cc08;
  FUN_71001b4910((long)&local_1f0);
  FUN_7101711670(&local_1c8,local_1c0);
  local_1a8 = &PTR_FUN_710509cc08;
  FUN_71001b4910((long)&local_1a8);
  if (local_180 != (undefined1 *)0x0) {
    local_178 = local_180;
    FUN_71001b1870((long)local_180);
  }
  return;
}

