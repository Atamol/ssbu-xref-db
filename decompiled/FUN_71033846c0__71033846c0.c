// addr:      71033846c0
// offset:    0x33846c0
// name:      FUN_71033846c0
// mangled:   
// signature: undefined __cdecl FUN_71033846c0(ulong param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71033846c0(ulong param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  int iVar2;
  bool bVar3;
  undefined4 uVar4;
  long *plVar5;
  long lVar6;
  undefined1 *puVar7;
  long *plVar8;
  uint uVar9;
  ulong uVar10;
  long *plVar11;
  code *pcVar12;
  uint uVar13;
  byte *pbVar14;
  uint uVar15;
  uint uVar16;
  undefined8 *puVar17;
  long *plVar18;
  undefined8 local_1520;
  byte local_1518 [256];
  undefined8 local_1418;
  byte local_1410 [256];
  undefined8 local_1310;
  undefined1 local_1308;
  undefined4 uStack_1307;
  undefined2 uStack_1303;
  undefined2 uStack_1301;
  undefined1 uStack_12ff;
  undefined1 local_12fe;
  undefined8 local_12fc;
  float local_12f4;
  undefined8 local_12f0;
  undefined1 local_12e8;
  undefined8 local_11e8;
  undefined1 local_11e0;
  long alStack_10e0 [4];
  long *local_10c0;
  undefined4 local_10b0;
  undefined1 local_10ac;
  undefined8 local_1098;
  byte local_1090 [64];
  undefined8 local_1050;
  byte local_1048 [2048];
  undefined8 local_848;
  byte local_840 [2048];
  
  puVar17 = *(undefined8 **)(*DAT_7105314510 + 0x78);
  if (((DAT_71052b92e0 & 1) == 0) &&
     (param_1 = __cxa_guard_acquire(&DAT_71052b92e0), (int)param_1 != 0)) {
    param_1 = __cxa_guard_release(&DAT_71052b92e0);
  }
  uVar16 = 0x811c9dc5;
  uVar15 = 0x811c9dc5;
  *(undefined1 *)(*(long *)*puVar17 + 0x5e05e) = 3;
  local_1308 = 0;
  local_1310 = 0;
  uStack_1307 = 0x1010000;
  uStack_1303 = 1;
  uStack_1301 = 0;
  uStack_12ff = 0;
  local_12fe = 0;
  local_12fc = 0x600000012;
  local_12f4 = 1.0;
  local_12e8 = 0;
  local_12f0 = 0;
  local_11e0 = 0;
  local_11e8 = 0;
  local_10c0 = (long *)0x0;
  local_1518[0] = 0;
  local_1520 = 0x811c9dc5;
  local_1410[0] = 0;
  local_1418 = 0x811c9dc5;
  if (DAT_7105329f50 == 0) {
LAB_71033847a4:
    puVar17 = (undefined8 *)(**(long **)(*DAT_7105314510 + 0x78) + 0x10);
    if (DAT_710593b534 != 0) {
      puVar17 = (undefined8 *)(**(long **)(*DAT_7105314510 + 0x78) + 8);
    }
  }
  else {
    bVar3 = FUN_710240e4e0();
    param_1 = (ulong)bVar3;
    if (!bVar3) goto LAB_71033847a4;
    puVar17 = (undefined8 *)(**(long **)(*DAT_7105314510 + 0x78) + 0x18);
  }
  local_12f4 = (float)NEON_ucvtf((uint)*(byte *)(*(long *)*puVar17 + 2));
  local_12f4 = local_12f4 / 100.0;
  local_12fc = 0x600000012;
  local_1310 = 2;
  local_10b0 = 0;
  local_10ac = 0;
  uStack_1307 = 0x101;
  uStack_1303 = 0x100;
  uStack_12ff = 1;
  if (DAT_710523d00c - 1 < 0xd) {
    puVar7 = (&PTR_DAT_71051820c0)[(int)(DAT_710523d00c - 1)];
  }
  else {
    puVar7 = &DAT_71044641c2;
  }
  FUN_71033845c0((uint *)&local_848,param_1,puVar7,param_3,param_4,param_5,param_6,param_7,param_8);
  for (uVar10 = 0; local_840[uVar10] != 0; uVar10 = uVar10 + 2) {
    local_1518[uVar10] = local_840[uVar10];
    if (0xfe < (int)uVar10 + 1U) {
      uVar10 = (ulong)((int)uVar10 + 1);
      break;
    }
    if (local_840[uVar10 + 1] == 0) {
      uVar10 = uVar10 + 1;
      break;
    }
    local_1518[uVar10 + 1] = local_840[uVar10 + 1];
  }
  *(undefined1 *)(((ulong)&local_1520 | 8) + (uVar10 & 0xffffffff)) = 0;
  uVar9 = (uint)local_1518[0];
  uVar13 = uVar16;
  if (local_1518[0] != 0) {
    pbVar14 = (byte *)((ulong)&local_1520 | 9);
    uVar13 = uVar15;
    do {
      uVar13 = uVar13 * 0x89 ^ uVar9;
      uVar9 = (uint)*pbVar14;
      pbVar14 = pbVar14 + 1;
    } while (uVar9 != 0);
  }
  local_1520 = CONCAT44((int)uVar10,uVar13);
  local_840[0] = 0;
  local_848 = 0;
  if (DAT_710523d00c < 0xe) {
    uVar4 = *(undefined4 *)(&DAT_7104742ec0 + (long)(int)DAT_710523d00c * 4);
  }
  else {
    uVar4 = 1;
  }
  local_1050 = nn::settings::LanguageCode::Make(uVar4);
  if ((local_1050 & 0xff) == 0) {
    uVar10 = 0;
  }
  else {
    uVar10 = 0;
    do {
      local_1090[uVar10] = (byte)local_1050;
      if (0x3e < (int)uVar10 + 1U) {
        uVar10 = (ulong)((int)uVar10 + 1);
        break;
      }
      bVar1 = *(byte *)(((ulong)&local_1050 | 1) + uVar10);
      local_1050 = (ulong)bVar1;
      uVar10 = uVar10 + 1;
    } while (bVar1 != 0);
  }
  local_1090[uVar10 & 0xffffffff] = 0;
  local_1098 = uVar10 << 0x20;
  uVar9 = (uint)local_1090[0];
  uVar13 = uVar16;
  if (uVar9 != 0) {
    pbVar14 = local_1090;
    uVar13 = uVar15;
    do {
      pbVar14 = pbVar14 + 1;
      uVar13 = uVar13 * 0x89 ^ uVar9;
      uVar9 = (uint)*pbVar14;
    } while (uVar9 != 0);
  }
  local_1098 = CONCAT44((int)uVar10,uVar13);
  uVar10 = 0;
  local_1050 = 0;
  while (local_1090[0] != 0) {
    local_1048[uVar10] = local_1090[0];
    if (0x7fe < (int)uVar10 + 1U) {
      uVar10 = (ulong)((int)uVar10 + 1);
      break;
    }
    if (local_1090[uVar10 + 1] == 0) {
      uVar10 = uVar10 + 1;
      break;
    }
    local_1048[uVar10 + 1] = local_1090[uVar10 + 1];
    lVar6 = uVar10 + 2;
    uVar10 = uVar10 + 2;
    local_1090[0] = local_1090[lVar6];
  }
  local_1048[uVar10 & 0xffffffff] = 0;
  local_1050 = uVar10 << 0x20;
  uVar9 = (uint)local_1048[0];
  uVar13 = uVar16;
  if (local_1048[0] != 0) {
    pbVar14 = local_1048;
    uVar13 = uVar15;
    do {
      pbVar14 = pbVar14 + 1;
      uVar13 = uVar13 * 0x89 ^ uVar9;
      uVar9 = (uint)*pbVar14;
    } while (uVar9 != 0);
  }
  local_1050 = CONCAT44((int)uVar10,uVar13);
  plVar5 = (long *)*DAT_710593b580;
  iVar2 = (int)plVar5[0xe60];
  if (iVar2 == -1) {
    plVar18 = plVar5 + 0x198;
    plVar11 = plVar18 + plVar5[0xe58] * 0x198;
    plVar8 = plVar5;
    if (plVar5[0xe58] != 0) goto LAB_7103384aa4;
LAB_7103384ad0:
    if ((plVar18 != plVar11) &&
       (((*(char *)((long)plVar18 + 0xc53) != '\0' ||
         (uVar10 = FUN_7103756000((long)plVar5,plVar8,param_3,param_4,param_5,param_6,param_7,
                                  param_8), (uVar10 & 1) != 0)) &&
        (lVar6 = nn::account::CachedNintendoAccountInfo::GetCountry
                           ((ulong *)((long)plVar18 + 0xc54)), lVar6 != 0)))) {
      FUN_7101762db0((uint *)&local_848,"from_game=1&na_lang=%s&na_country=%s");
      goto LAB_7103384b28;
    }
  }
  else {
    if ((ulong)plVar5[0xe58] <= (ulong)(long)iVar2) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    plVar11 = plVar5 + plVar5[0xe58] * 0x198 + 0x198;
    plVar8 = plVar5 + (long)iVar2 * 0x198 + 0x198;
LAB_7103384aa4:
    plVar18 = plVar5 + 0x198;
    do {
      if ((*plVar18 == *plVar8) && (plVar18[1] == plVar8[1])) goto LAB_7103384ad0;
      plVar18 = plVar18 + 0x198;
    } while (plVar11 != plVar18);
  }
  FUN_7101762db0((uint *)&local_848,"from_game=1&na_lang=%s");
LAB_7103384b28:
  uVar10 = 0;
  do {
    if (local_840[uVar10] == 0) {
LAB_7103384b78:
      local_1410[uVar10 & 0xffffffff] = 0;
      uVar13 = (uint)local_1410[0];
      if (local_1410[0] != 0) {
        pbVar14 = local_1410;
        uVar16 = uVar15;
        do {
          pbVar14 = pbVar14 + 1;
          uVar16 = uVar16 * 0x89 ^ uVar13;
          uVar13 = (uint)*pbVar14;
        } while (uVar13 != 0);
      }
      local_1418 = CONCAT44((int)uVar10,uVar16);
      local_10b0 = 0;
      local_10ac = 0;
      FUN_710339e240((long)&local_1520);
      if (alStack_10e0 == local_10c0) {
        pcVar12 = *(code **)(*local_10c0 + 0x20);
      }
      else {
        if (local_10c0 == (long *)0x0) {
          return;
        }
        pcVar12 = *(code **)(*local_10c0 + 0x28);
      }
      (*pcVar12)();
      return;
    }
    local_1410[uVar10] = local_840[uVar10];
    if (0xfe < (int)uVar10 + 1U) {
      uVar10 = (ulong)((int)uVar10 + 1);
      goto LAB_7103384b78;
    }
    if (local_840[uVar10 + 1] == 0) {
      uVar10 = uVar10 + 1;
      goto LAB_7103384b78;
    }
    local_1410[uVar10 + 1] = local_840[uVar10 + 1];
    uVar10 = uVar10 + 2;
  } while( true );
}

