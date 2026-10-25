// addr:      7101762b40
// offset:    0x1762b40
// name:      FUN_7101762b40
// mangled:   
// signature: undefined __cdecl FUN_7101762b40(uint * param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101762b40(uint *param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  long *plVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  byte *pbVar10;
  uint uVar11;
  long *plVar12;
  byte local_878 [64];
  undefined8 local_838;
  byte local_830 [2048];
  
  uVar6 = DAT_710523d00c;
  lVar7 = (long)(int)DAT_710523d00c;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  if (uVar6 < 0xe) {
    uVar3 = *(undefined4 *)(&DAT_7104742ec0 + lVar7 * 4);
  }
  else {
    uVar3 = 1;
  }
  local_838 = nn::settings::LanguageCode::Make(uVar3);
  if ((local_838 & 0xff) == 0) {
    uVar8 = 0;
  }
  else {
    uVar8 = 0;
    do {
      local_878[uVar8] = (byte)local_838;
      if (0x3e < (int)uVar8 + 1U) {
        uVar8 = (ulong)((int)uVar8 + 1);
        break;
      }
      bVar1 = *(byte *)(((ulong)&local_838 | 1) + uVar8);
      local_838 = (ulong)bVar1;
      uVar8 = uVar8 + 1;
    } while (bVar1 != 0);
  }
  uVar6 = 0x811c9dc5;
  local_878[uVar8 & 0xffffffff] = 0;
  if (local_878[0] != 0) {
    pbVar10 = local_878;
    do {
      pbVar10 = pbVar10 + 1;
    } while (*pbVar10 != 0);
  }
  uVar8 = 0;
  local_838 = 0;
  while (local_878[0] != 0) {
    local_830[uVar8] = local_878[0];
    if (0x7fe < (int)uVar8 + 1U) {
      uVar8 = (ulong)((int)uVar8 + 1);
      break;
    }
    if (local_878[uVar8 + 1] == 0) {
      uVar8 = uVar8 + 1;
      break;
    }
    local_830[uVar8 + 1] = local_878[uVar8 + 1];
    lVar7 = uVar8 + 2;
    uVar8 = uVar8 + 2;
    local_878[0] = local_878[lVar7];
  }
  local_830[uVar8 & 0xffffffff] = 0;
  uVar11 = (uint)local_830[0];
  local_838 = uVar8 << 0x20;
  if (local_830[0] != 0) {
    pbVar10 = local_830;
    do {
      pbVar10 = pbVar10 + 1;
      uVar6 = uVar6 * 0x89 ^ uVar11;
      uVar11 = (uint)*pbVar10;
    } while (uVar11 != 0);
  }
  local_838 = CONCAT44((int)uVar8,uVar6);
  plVar4 = (long *)*DAT_710593b580;
  iVar2 = (int)plVar4[0xe60];
  if (iVar2 == -1) {
    plVar12 = plVar4 + 0x198;
    plVar9 = plVar12 + plVar4[0xe58] * 0x198;
    plVar5 = plVar4;
    if (plVar4[0xe58] == 0) {
LAB_7101762d40:
      if ((plVar12 != plVar9) &&
         (((*(char *)((long)plVar12 + 0xc53) != '\0' ||
           (uVar8 = FUN_7103756000((long)plVar4,plVar5,param_3,param_4,param_5,param_6,param_7,
                                   param_8), (uVar8 & 1) != 0)) &&
          (lVar7 = nn::account::CachedNintendoAccountInfo::GetCountry
                             ((ulong *)((long)plVar12 + 0xc54)), lVar7 != 0)))) {
        FUN_7101762db0(param_1,"from_game=1&na_lang=%s&na_country=%s");
        return;
      }
      goto LAB_7101762d84;
    }
  }
  else {
    if ((ulong)plVar4[0xe58] <= (ulong)(long)iVar2) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    plVar9 = plVar4 + plVar4[0xe58] * 0x198 + 0x198;
    plVar5 = plVar4 + (long)iVar2 * 0x198 + 0x198;
  }
  plVar12 = plVar4 + 0x198;
  do {
    if ((*plVar12 == *plVar5) && (plVar12[1] == plVar5[1])) goto LAB_7101762d40;
    plVar12 = plVar12 + 0x198;
  } while (plVar9 != plVar12);
LAB_7101762d84:
  FUN_7101762db0(param_1,"from_game=1&na_lang=%s");
  return;
}

