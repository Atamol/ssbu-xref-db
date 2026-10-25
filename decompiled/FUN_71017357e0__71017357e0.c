// addr:      71017357e0
// offset:    0x17357e0
// name:      FUN_71017357e0
// mangled:   
// signature: undefined4 __cdecl FUN_71017357e0(long param_1, long param_2)


undefined4 FUN_71017357e0(long param_1,long param_2)

{
  bool bVar1;
  uint uVar2;
  undefined ***pppuVar3;
  uint *puVar4;
  ulong uVar5;
  code *pcVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long local_a0;
  long local_98;
  long lStack_90;
  long local_88;
  long lStack_80;
  long local_78;
  undefined **local_70;
  code *local_68;
  long local_60;
  undefined8 local_58;
  undefined ***local_50;
  undefined8 *local_48;
  undefined8 local_40;
  long local_38;
  
  plVar9 = *(long **)(param_2 + 0x10);
  if (*plVar9 == 0) {
    return 2;
  }
  lVar10 = *(long *)(param_1 + 0x20);
  nn::album::GetAlbumMovieStreamSize(&local_38,*(undefined8 *)(lVar10 + 8));
  local_68 = (code *)((ulong)local_68 & 0xffffffffffffff00);
  local_50 = (undefined ***)0x0;
  local_48 = (undefined8 *)0x0;
  local_40 = 0;
  local_70 = &PTR_FUN_710509d7b8;
  local_60 = plVar9[0xbd];
  local_58._0_5_ = CONCAT14(2,(int)local_38);
  plVar9[0x80e5] = plVar9[0x80e5] + (ulong)*(uint *)(lVar10 + 0x58);
  if ((int)plVar9[0xd5] == 1) {
    if ((char)plVar9[0xd0] != '\0') {
      if ((plVar9[0xd4] == 0) || ((ulong)plVar9[0xce] < (ulong)plVar9[0xd4])) goto LAB_7101735888;
      goto LAB_71017358ac;
    }
  }
  else {
LAB_7101735888:
    if (plVar9[0xcd] == plVar9[0xce]) {
LAB_71017358ac:
      plVar9[0xcd] = local_38;
      *(undefined1 *)(plVar9 + 0xd0) = 0;
      plVar9[0xcf] = 0;
      plVar9[0xce] = 0;
      plVar9[0xd3] = 0;
      plVar9[0xd2] = 0;
      plVar9[0xd4] = 0;
      plVar9[0xd1] = 0;
      *(undefined4 *)(plVar9 + 0xd5) = 2;
    }
  }
  plVar9[0xd6] = *(long *)(lVar10 + 8);
  plVar9[0x80d7] = 0;
  *(undefined1 *)(plVar9 + 0x80d8) = 0;
  nn::album::GetAlbumMovieStreamSize(plVar9 + 0xcd);
  plVar9[0x1c] = (long)(plVar9 + 0xcc);
  lVar11 = *plVar9;
  lVar10 = DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
joined_r0x007101735968:
    if ((lVar10 != 0) && (*(long *)(lVar10 + 0x10) != 0)) {
      lVar10 = *(long *)(*(long *)(lVar10 + 0x10) + 0x10);
      goto LAB_710173598c;
    }
  }
  else {
    puVar4 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar2 = *puVar4;
    lVar10 = DAT_71052af138;
    if (uVar2 == 0) goto joined_r0x007101735968;
    if ((ulong)uVar2 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      lVar10 = *(long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x20);
      goto joined_r0x007101735968;
    }
    FUN_71001b1300("C:/c2/nintendo/NintendoSDK-NXAddon/NintendoSDK/../NintendoSDK-NEX/include\\OnlineCore/src/Core/InstanceTable.h"
                   ,0x47,0xe0000003,0);
  }
  lVar10 = 0;
LAB_710173598c:
  plVar7 = (long *)(lVar10 + 0x78);
  (**(code **)(*plVar7 + 0x10))(plVar7);
  *(undefined8 *)(lVar11 + 200) = 0xea6000000000;
  (**(code **)(*plVar7 + 0x20))(plVar7);
  FUN_71001d1590(plVar9 + 1);
  uVar5 = (**(code **)(*(long *)*plVar9 + 0x488))
                    ((long *)*plVar9,plVar9 + 1,&local_70,plVar9[0x80d9]);
  bVar1 = (uVar5 & 1) == 0;
  if (bVar1) {
    local_a0 = plVar9[0xc];
    local_98 = plVar9[0xd];
    lStack_90 = plVar9[0xe];
    FUN_710170cea0(&local_88,(uint *)&local_a0,1);
    plVar9[0x1a] = lStack_80;
    plVar9[0x1b] = local_78;
    plVar9[0x19] = local_88;
  }
  pppuVar3 = local_50;
  local_70 = &PTR_FUN_710509d7d8;
  puVar8 = local_48;
  if (local_50 != (undefined ***)0x0) {
    while ((undefined ***)puVar8 != pppuVar3) {
      puVar8 = puVar8 + -5;
      (**(code **)*puVar8)(puVar8);
    }
    local_48 = pppuVar3;
    FUN_71001b1870((long)local_50);
  }
  if (!bVar1) {
    local_70 = &PTR_FUN_710509e1f0;
    local_68 = FUN_7101735af0;
    local_60 = 0;
    local_58 = param_1;
    local_50 = &local_70;
    FUN_71017303e0((long *)&local_70,(long *)(param_1 + 0x90));
    if (&local_70 == local_50) {
      pcVar6 = (code *)(*local_50)[4];
    }
    else {
      if (local_50 == (undefined ***)0x0) {
        return 0;
      }
      pcVar6 = (code *)(*local_50)[5];
    }
    (*pcVar6)();
    return 0;
  }
  return 2;
}

