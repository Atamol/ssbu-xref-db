// addr:      71001e6be0
// offset:    0x1e6be0
// name:      FUN_71001e6be0
// mangled:   
// signature: undefined __cdecl FUN_71001e6be0(long param_1, long param_2, void * param_3, size_t param_4)


/* WARNING: Removing unreachable block (ram,0x0071001e6de4) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_71001e6be0(long param_1,long param_2,void *param_3,size_t param_4)

{
  bool bVar1;
  undefined8 *puVar2;
  long lVar3;
  uint *puVar4;
  ulong uVar5;
  long lVar6;
  ulonglong uVar7;
  long *plVar8;
  long *plVar9;
  char cVar10;
  uint uVar11;
  uint uVar12;
  long local_1c8;
  undefined **local_1c0;
  undefined **local_1b8;
  undefined1 local_1b0 [16];
  undefined1 *local_1a0;
  undefined8 local_198;
  undefined2 local_190;
  undefined **local_188;
  undefined1 local_180 [16];
  undefined1 *local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined1 local_150;
  long local_148;
  long local_140;
  undefined **local_138;
  long *local_130;
  undefined8 **local_120;
  undefined8 *local_118;
  undefined8 uStack_110;
  undefined8 **local_108;
  undefined8 *local_100;
  undefined8 uStack_f8;
  undefined8 **local_f0;
  undefined8 *local_e8;
  undefined8 uStack_e0;
  long local_d8;
  ushort local_d0;
  undefined1 local_ce;
  long local_c8;
  undefined8 uStack_c0;
  char local_b8;
  long local_b0;
  long local_a8;
  undefined **local_a0;
  undefined4 local_98;
  undefined1 local_94;
  
  puVar2 = FUN_71001b1400();
  lVar3 = FUN_71001b17c0((long)puVar2);
  FUN_71001b3130(lVar3,2);
  puVar2 = FUN_71001b1400();
  lVar3 = FUN_71001b17c0((long)puVar2);
  FUN_71001b3140(lVar3,2);
  plVar8 = &DAT_71052af138;
  if (DAT_71052af1d8 == '\0') {
LAB_71001e6c84:
    if ((*plVar8 == 0) || (lVar3 = *(long *)(*plVar8 + 0x10), lVar3 == 0)) goto LAB_71001e6cb4;
    lVar3 = *(long *)(lVar3 + 0x10);
  }
  else {
    puVar4 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar12 = *puVar4;
    if (uVar12 == 0) goto LAB_71001e6c84;
    if ((ulong)uVar12 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      plVar8 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar12 * 8) + 0x20);
      goto LAB_71001e6c84;
    }
    FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
LAB_71001e6cb4:
    lVar3 = 0;
  }
  plVar8 = (long *)(lVar3 + 0x78);
  (**(code **)(*plVar8 + 0x10))(plVar8);
  local_98 = 1;
  local_a0 = &PTR_FUN_7104f56018;
  local_94 = 0;
  uVar5 = FUN_71001cf750();
  FUN_71001cf760((long)&local_a0,uVar5,0);
  FUN_71001cb870((long)&local_a0,param_3,param_4,0xffffffffffffffff);
  FUN_71001d01c0(&uStack_c0,(long)&local_a0);
  local_c8 = 0;
  if (*(long *)(local_b0 + 0x18) == local_a8) {
    cVar10 = '\0';
    lVar3 = local_a8;
LAB_71001e6d9c:
    local_a8 = lVar3;
    uVar12 = 0;
    local_b8 = '\x01';
  }
  else {
    cVar10 = *(char *)(*(long *)(local_b0 + 0x10) + *(long *)(local_b0 + 0x28) + local_a8);
    lVar3 = local_a8 + 1;
    if ((ulong)(*(long *)(local_b0 + 0x18) - lVar3) < 4) goto LAB_71001e6d9c;
    uVar12 = *(uint *)(*(long *)(local_b0 + 0x10) + *(long *)(local_b0 + 0x28) + lVar3);
    local_a8 = local_a8 + 5;
  }
  FUN_71001d05a0((long)&uStack_c0,&local_c8);
  if (cVar10 == '\x01') {
    if ((ulong)(*(long *)(local_b0 + 0x18) - local_a8) < 2) {
      local_b8 = '\x01';
      goto LAB_71001e7400;
    }
    uVar11 = (uint)*(ushort *)(*(long *)(local_b0 + 0x10) + *(long *)(local_b0 + 0x28) + local_a8);
    local_a8 = local_a8 + 2;
  }
  else {
    uVar11 = 0;
  }
  if (local_b8 != '\0') goto LAB_71001e7400;
  local_d8 = 0;
  local_118 = (undefined8 *)0x0;
  uStack_110 = 0;
  local_138 = &PTR_FUN_7104f57900;
  local_100 = (undefined8 *)0x0;
  uStack_f8 = 0;
  local_120 = &local_118;
  local_108 = &local_100;
  local_f0 = &local_e8;
  local_e8 = (undefined8 *)0x0;
  uStack_e0 = 0;
  local_ce = 0;
  local_d0 = 1;
  local_130 = FUN_71001af850(0x90);
  if (local_130 != (long *)0x0) {
    FUN_71001beb40(local_130);
  }
  FUN_71001f1f40((long)&local_138,param_2);
  FUN_71001f2a80((undefined4 *)&local_1c0,(long)&local_138,"RVCID",(ulong)uVar12);
  lVar3 = FUN_71001e8190(param_1 + 0x50,(long)&local_138);
  if ((lVar3 == 0) && (lVar3 = FUN_71001e8190(param_1 + 0x70,(long)&local_138), lVar3 == 0)) {
    for (lVar3 = *(long *)(param_1 + 0x60); param_1 + 0x58 != lVar3; lVar3 = *(long *)(lVar3 + 8)) {
      uVar7 = FUN_71001f2ba0(lVar3 + 0x18,"RVCID",0);
      if (uVar12 == (uint)uVar7) {
        uVar7 = FUN_71001f2ba0((long)&local_138,"type",0);
        if (((uint)uVar7 >> 1 & 1) == 0) {
          FUN_71001e7a40(param_1,(long)&local_138);
        }
        bVar1 = false;
        lVar3 = 0;
        goto joined_r0x0071001e6ef0;
      }
    }
    bVar1 = false;
    lVar3 = 0;
    if (cVar10 == '\x01') goto LAB_71001e6f98;
LAB_71001e6ef4:
    if (cVar10 == '\0') {
      if (bVar1) {
        local_140 = 0;
        FUN_71001e8390(lVar3,(long)&local_138,&local_140);
      }
      local_148 = local_c8;
      FUN_71001e8450(param_1,1,(long)&local_138,&local_148,0);
    }
  }
  else {
    puVar2 = FUN_71001b1400();
    lVar6 = FUN_71001b17c0((long)puVar2);
    FUN_71001b3130(lVar6,2);
    puVar2 = FUN_71001b1400();
    lVar6 = FUN_71001b17c0((long)puVar2);
    FUN_71001b3140(lVar6,2);
    bVar1 = true;
joined_r0x0071001e6ef0:
    if (cVar10 != '\x01') goto LAB_71001e6ef4;
LAB_71001e6f98:
    if (bVar1) {
      plVar9 = &DAT_71052af128;
      if (DAT_71052af1d8 == '\0') {
LAB_71001e6fe0:
        if (((*plVar9 != 0) && (lVar6 = *(long *)(*plVar9 + 0x10), lVar6 != 0)) &&
           (*(long *)(lVar6 + 0xe8) != 0)) {
          plVar9 = &DAT_71052af128;
          if (DAT_71052af1d8 == '\0') {
LAB_71001e703c:
            if ((*plVar9 == 0) || (lVar6 = *(long *)(*plVar9 + 0x10), lVar6 == 0))
            goto LAB_71001e70c8;
            lVar6 = *(long *)(lVar6 + 0xe8);
          }
          else {
            puVar4 = (uint *)FUN_7101717960(DAT_71052af1d0);
            uVar12 = *puVar4;
            if (uVar12 == 0) goto LAB_71001e703c;
            if ((ulong)uVar12 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
              plVar9 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar12 * 8) + 0x10);
              goto LAB_71001e703c;
            }
            FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,
                           0);
LAB_71001e70c8:
            lVar6 = 0;
          }
          local_1a0 = local_1b0;
          local_1b0[0] = 0;
          local_198 = 0x10;
          local_1c0 = &PTR_FUN_7104f57550;
          local_1b8 = &PTR_FUN_710509cc08;
          FUN_71001b47e0((long)&local_1b8,*(char **)(lVar6 + 0x168),-1);
          local_190 = *(undefined2 *)(lVar6 + 0x178);
          local_170 = local_180;
          local_180[0] = 0;
          local_168 = 0x10;
          local_188 = &PTR_FUN_710509cc08;
          FUN_71001b47e0((long)&local_188,*(char **)(lVar6 + 0x198),-1);
          local_160 = *(undefined8 *)(lVar6 + 0x1a8);
          uStack_158 = *(undefined8 *)(lVar6 + 0x1b0);
          local_150 = *(undefined1 *)(lVar6 + 0x1b8);
          if ((int)((ulong)local_160 >> 0x20) == 2) {
            uVar7 = FUN_71001f2ba0(lVar3 + 8,"type",0);
            if (((uint)uVar7 >> 1 & 1) == 0) {
              local_1c0 = &PTR_FUN_7104f57550;
              local_188 = &PTR_FUN_710509cc08;
              FUN_71001b4910((long)&local_188);
            }
            else {
              uVar7 = FUN_71001f2ba0(lVar3 + 8,"probeinit",0);
              local_1c0 = &PTR_FUN_7104f57550;
              local_188 = &PTR_FUN_710509cc08;
              FUN_71001b4910((long)&local_188);
              local_1b8 = &PTR_FUN_710509cc08;
              FUN_71001b4910((long)&local_1b8);
              if (uVar7 != 0) goto LAB_71001e738c;
              plVar9 = &DAT_71052af128;
              if (DAT_71052af1d8 == '\0') {
LAB_71001e7298:
                if ((*plVar9 == 0) || (lVar6 = *(long *)(*plVar9 + 0x10), lVar6 == 0))
                goto LAB_71001e72c8;
                lVar6 = *(long *)(lVar6 + 0xe8);
              }
              else {
                puVar4 = (uint *)FUN_7101717960(DAT_71052af1d0);
                uVar12 = *puVar4;
                if (uVar12 == 0) goto LAB_71001e7298;
                if ((ulong)uVar12 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
                  plVar9 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar12 * 8) + 0x10);
                  goto LAB_71001e7298;
                }
                FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,
                               0xe0000003,0);
LAB_71001e72c8:
                lVar6 = 0;
              }
              local_1b0[0] = 0;
              local_1a0 = local_1b0;
              local_198 = 0x10;
              local_1c0 = &PTR_FUN_7104f57550;
              local_1b8 = &PTR_FUN_710509cc08;
              FUN_71001b47e0((long)&local_1b8,*(char **)(lVar6 + 0x168),-1);
              local_190 = *(undefined2 *)(lVar6 + 0x178);
              local_170 = local_180;
              local_180[0] = 0;
              local_168 = 0x10;
              local_188 = &PTR_FUN_710509cc08;
              FUN_71001b47e0((long)&local_188,*(char **)(lVar6 + 0x198),-1);
              local_160 = *(undefined8 *)(lVar6 + 0x1a8);
              uStack_158 = *(undefined8 *)(lVar6 + 0x1b0);
              local_150 = *(undefined1 *)(lVar6 + 0x1b8);
              uVar12 = (uint)local_160;
              local_1c0 = &PTR_FUN_7104f57550;
              local_188 = &PTR_FUN_710509cc08;
              FUN_71001b4910((long)&local_188);
              local_1b8 = &PTR_FUN_710509cc08;
              FUN_71001b4910((long)&local_1b8);
              if ((uVar12 & 0xffff) == uVar11) goto LAB_71001e738c;
              plVar9 = &DAT_71052af128;
              if (DAT_71052af1d8 == '\0') {
LAB_71001e7484:
                if ((*plVar9 == 0) || (lVar6 = *(long *)(*plVar9 + 0x10), lVar6 == 0))
                goto LAB_71001e74b4;
                lVar6 = *(long *)(lVar6 + 0xe8);
              }
              else {
                puVar4 = (uint *)FUN_7101717960(DAT_71052af1d0);
                uVar12 = *puVar4;
                if (uVar12 == 0) goto LAB_71001e7484;
                if ((ulong)uVar12 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
                  plVar9 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar12 * 8) + 0x10);
                  goto LAB_71001e7484;
                }
                FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,
                               0xe0000003,0);
LAB_71001e74b4:
                lVar6 = 0;
              }
              local_1c0 = &PTR_FUN_7104f57550;
              local_1a0 = local_1b0;
              local_1b0[0] = 0;
              local_198 = 0x10;
              local_1b8 = &PTR_FUN_710509cc08;
              FUN_71001b47e0((long)&local_1b8,*(char **)(lVar6 + 0x168),-1);
              local_190 = *(undefined2 *)(lVar6 + 0x178);
              local_170 = local_180;
              local_168 = 0x10;
              local_180[0] = 0;
              local_188 = &PTR_FUN_710509cc08;
              FUN_71001b47e0((long)&local_188,*(char **)(lVar6 + 0x198),-1);
              local_150 = *(undefined1 *)(lVar6 + 0x1b8);
              uStack_158 = *(undefined8 *)(lVar6 + 0x1b0);
              local_160 = CONCAT62((int6)((ulong)*(undefined8 *)(lVar6 + 0x1a8) >> 0x10),
                                   (short)uVar11);
              lVar6 = DAT_71052af128;
              if (DAT_71052af1d8 == '\0') {
joined_r0x0071001e75d8:
                if ((lVar6 == 0) || (*(long *)(lVar6 + 0x10) == 0)) goto LAB_71001e760c;
                lVar6 = *(long *)(*(long *)(lVar6 + 0x10) + 0xe8);
              }
              else {
                puVar4 = (uint *)FUN_7101717960(DAT_71052af1d0);
                uVar12 = *puVar4;
                lVar6 = DAT_71052af128;
                if (uVar12 == 0) goto joined_r0x0071001e75d8;
                if ((ulong)uVar12 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
                  lVar6 = *(long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar12 * 8) + 0x10);
                  goto joined_r0x0071001e75d8;
                }
                FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,
                               0xe0000003,0);
LAB_71001e760c:
                lVar6 = 0;
              }
              FUN_71001b2f70(lVar6 + 0x150,(long)&local_1b8);
              *(undefined2 *)(lVar6 + 0x178) = local_190;
              FUN_71001b2f70(lVar6 + 0x180,(long)&local_188);
              *(undefined1 *)(lVar6 + 0x1b8) = local_150;
              local_1c0 = &PTR_FUN_7104f57550;
              local_188 = &PTR_FUN_710509cc08;
              *(undefined8 *)(lVar6 + 0x1a8) = local_160;
              *(undefined8 *)(lVar6 + 0x1b0) = uStack_158;
              FUN_71001b4910((long)&local_188);
            }
            local_1b8 = &PTR_FUN_710509cc08;
            FUN_71001b4910((long)&local_1b8);
          }
          else {
            local_1c0 = &PTR_FUN_7104f57550;
            local_188 = &PTR_FUN_710509cc08;
            FUN_71001b4910((long)&local_188);
            local_1b8 = &PTR_FUN_710509cc08;
            FUN_71001b4910((long)&local_1b8);
          }
        }
      }
      else {
        puVar4 = (uint *)FUN_7101717960(DAT_71052af1d0);
        uVar12 = *puVar4;
        if (uVar12 == 0) goto LAB_71001e6fe0;
        if ((ulong)uVar12 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
          plVar9 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar12 * 8) + 0x10);
          goto LAB_71001e6fe0;
        }
        FUN_71001b1300("..\\..\\..\\..\\.\\OnlineCore/src/Core/InstanceTable.h",0x47,0xe0000003,0);
      }
LAB_71001e738c:
      local_1c8 = local_c8;
      FUN_71001e8390(lVar3,(long)&local_138,&local_1c8);
    }
  }
  local_138 = &PTR_FUN_7104f57900;
  if (local_d8 != 0) {
    local_138 = &PTR_FUN_7104f57900;
    FUN_71001b1870(local_d8 + -4);
    local_d8 = 0;
    local_d0 = local_d0 & 0xff;
  }
  if (local_130 != (long *)0x0) {
    (**(code **)(*local_130 + 8))();
  }
  FUN_7101711670(&local_f0,local_e8);
  FUN_7101711670(&local_108,local_100);
  FUN_7100219ca0(&local_120,local_118);
LAB_71001e7400:
  FUN_71001d0250(&uStack_c0);
  FUN_71001cfad0(&local_a0);
  (**(code **)(*plVar8 + 0x20))(plVar8);
  return;
}

