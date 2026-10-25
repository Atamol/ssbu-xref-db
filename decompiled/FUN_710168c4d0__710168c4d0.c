// addr:      710168c4d0
// offset:    0x168c4d0
// name:      FUN_710168c4d0
// mangled:   
// signature: undefined __cdecl FUN_710168c4d0(long param_1, undefined8 param_2, undefined * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_710168c4d0(long param_1,undefined8 param_2,undefined **param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  ulong *puVar4;
  int iVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  byte ****ppppbVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  uint uVar14;
  ulong local_68;
  ulong local_60;
  ulong *local_48;
  
  iVar6 = (int)param_3;
  if (iVar6 != 1) {
    if (iVar6 == 2) {
      ppppbVar10 = param_4;
      if ((*(int *)(param_1 + 0x269c0) == 0xc) && (*(byte *)(param_4 + 1) < 3)) {
        lVar13 = *DAT_710593b580;
        lVar11 = *(long *)(*(long *)(*(long *)(param_1 + 8) + 8) + 0x98);
        iVar3 = *(int *)(lVar13 + 0x7300);
        uVar2 = *(uint *)(lVar11 + 0xdcc);
        if (iVar3 == -1) {
          plVar7 = (long *)(lVar13 + 0x28);
        }
        else {
          if (*(ulong *)(lVar13 + 0x72c0) <= (ulong)(long)iVar3) goto LAB_710168caf0;
          plVar7 = (long *)(lVar13 + (long)iVar3 * 0xcc0 + 0xce8);
        }
        lVar11 = lVar11 + 0x540;
        param_3 = (undefined **)
                  FUN_710172bb90(lVar11,plVar7,param_3,param_4,param_5,param_6,param_7,param_8);
        FUN_710172b370(&local_68,lVar11,(long ****)param_3,ppppbVar10,param_5,param_6,param_7,
                       param_8);
        if (local_68 == local_60) {
          uVar14 = 0;
        }
        else {
          uVar14 = 0;
          uVar9 = local_68;
          do {
            pcVar1 = (char *)(uVar9 + 4);
            uVar9 = uVar9 + 0x330;
            if (*pcVar1 == '\0') {
              uVar14 = uVar14 + 1;
            }
          } while (local_60 != uVar9);
        }
        if (local_68 != 0) {
          local_60 = local_68;
          FUN_710392eb40(local_68);
        }
        if (uVar2 < (uVar14 & 0xffff) - 1) {
          plVar7 = *(long **)(param_1 + 0x30);
          *(undefined8 *)(param_1 + 0x30) = 0;
          if ((long *)(param_1 + 0x10) == plVar7) {
            pcVar12 = *(code **)(*plVar7 + 0x20);
          }
          else {
            if (plVar7 == (long *)0x0) goto LAB_710168ca88;
            pcVar12 = *(code **)(*plVar7 + 0x28);
          }
          (*pcVar12)();
LAB_710168ca88:
          *(undefined4 *)(param_1 + 0x70) = 0;
          return;
        }
      }
      FUN_710167fac0(*(ulong **)(*(long *)(*(long *)(param_1 + 8) + 8) + 0x78),(int *)param_4,
                     (long ****)param_3,ppppbVar10,param_5,param_6,param_7,param_8);
      param_4 = ppppbVar10;
    }
    plVar7 = *(long **)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = 0;
    if ((long *)(param_1 + 0x10) == plVar7) {
      pcVar12 = *(code **)(*plVar7 + 0x20);
    }
    else {
      if (plVar7 == (long *)0x0) goto LAB_710168c640;
      pcVar12 = *(code **)(*plVar7 + 0x28);
    }
    (*pcVar12)();
  }
LAB_710168c640:
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (*(int *)(param_1 + 0x269c0) == 0xd) {
    if (iVar6 != 1) {
      if (((DAT_71053144d8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_71053144d8), iVar6 != 0))
      {
        FUN_7101764000();
        param_3 = &PTR_LOOP_7104f17000;
        FUN_71000001c0();
        __cxa_guard_release(&DAT_71053144d8);
      }
      FUN_7101747490((ulong)DAT_7105307790,2,(long ****)param_3,param_4,param_5,param_6,param_7,
                     param_8);
      return;
    }
  }
  else {
    lVar11 = nn::os::GetSystemTick();
    uVar8 = nn::os::ConvertToTimeSpan(lVar11 - DAT_71074470e8);
    uVar9 = ((long)uVar8 >> 0x20) * 0xe353f7cf + ((uVar8 & 0xffffffff) * 0xe353f7cf >> 0x20);
    lVar13 = (((long)(((long)uVar8 >> 0x20) * 0x20c49ba5 + ((long)uVar9 >> 0x20) +
                     ((uVar8 & 0xffffffff) * 0x20c49ba5 + (uVar9 & 0xffffffff) >> 0x20)) >> 7) -
             ((long)uVar8 >> 0x3f)) * 1000 - *(long *)(param_1 + 0x26a48);
    iVar3 = *(int *)(param_1 + 0x26a50);
    FUN_710375aa90((long *)&local_48,"hac_p_aaaba_session_end",(long ****)param_3,param_4,param_5,
                   param_6,param_7,param_8);
    puVar4 = local_48;
    lVar11 = DAT_710533a0a0;
    if (((DAT_71052b92e0 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_71052b92e0), iVar5 != 0)) {
      __cxa_guard_release(&DAT_71052b92e0);
    }
    sprintf(&DAT_71052b92f5,"Ver. %d.%d.%d",0xd,0,5);
    nn::prepo::PlayReport::Add((char *)(*puVar4 + 0x4020),"app_version");
    if (((*(long **)(lVar11 + 0x30) != (long *)0x0) &&
        (lVar11 = **(long **)(lVar11 + 0x30), lVar11 != 0)) &&
       (lVar11 = *(long *)(lVar11 + 0x40), lVar11 != 0)) {
      local_68 = (ulong)*(uint *)(lVar11 + 0x218);
      nn::prepo::PlayReport::Add((char *)(*local_48 + 0x4020),(Any64BitId *)"gathering_id");
    }
    puVar4 = local_48;
    local_68 = (ulong)DAT_710509e3c0;
    nn::prepo::PlayReport::Add((char *)(*local_48 + 0x4020),(Any64BitId *)"gamemode");
    local_68 = (ulong)DAT_710509e3c8;
    nn::prepo::PlayReport::Add((char *)(*local_48 + 0x4020),(Any64BitId *)"min_players");
    local_68 = (ulong)DAT_710509e3ca;
    nn::prepo::PlayReport::Add((char *)(*local_48 + 0x4020),(Any64BitId *)"max_players");
    local_68 = (ulong)DAT_710509e3e4;
    nn::prepo::PlayReport::Add((char *)(*local_48 + 0x4020),(Any64BitId *)"rating");
    local_68 = CONCAT62(CONCAT51(local_68._3_5_,DAT_710509e3f2),DAT_710509e3f0);
    nn::prepo::PlayReport::Add((char *)(*local_48 + 0x4020),"country");
    if (DAT_710509e3f3 != '\0') {
      nn::prepo::PlayReport::Add((char *)(*local_48 + 0x4020),"scorebased_key");
      local_68 = DAT_710509e400;
      nn::prepo::PlayReport::Add((char *)(*local_48 + 0x4020),(Any64BitId *)"scorebased_value");
      local_68 = (ulong)DAT_710509e40c;
      nn::prepo::PlayReport::Add((char *)(*local_48 + 0x4020),(Any64BitId *)"cluster_id");
      local_68 = (ulong)DAT_710509e41c;
      nn::prepo::PlayReport::Add((char *)(*local_48 + 0x4020),(Any64BitId *)"rate_rank");
      local_68 = (ulong)DAT_710509e42c;
      nn::prepo::PlayReport::Add((char *)(*local_48 + 0x4020),(Any64BitId *)"is_vip");
      plVar7 = *(long **)(*(long *)(DAT_710532f7d0 + 8) + 0x18);
      if (plVar7 == (long *)0x0) {
        local_68 = 0;
      }
      else {
        local_68 = (**(code **)(*plVar7 + 0x48))();
        local_68 = local_68 & 1;
      }
      nn::prepo::PlayReport::Add((char *)(*local_48 + 0x4020),(Any64BitId *)"is_parallel");
      local_68 = (ulong)(iVar3 == 0);
      nn::prepo::PlayReport::Add((char *)(*local_48 + 0x4020),(Any64BitId *)"matching_retry");
    }
    local_68 = (ulong)(iVar6 == 1);
    nn::prepo::PlayReport::Add((char *)(*local_48 + 0x4020),(Any64BitId *)"match_result");
    local_68 = (ulong)(((int)(lVar13 / 1000000000) + (int)(lVar13 >> 0x3f)) -
                      (SUB164(SEXT816(lVar13) * SEXT816(0x112e0be826d694b3),0xc) >> 0x1f));
    nn::prepo::PlayReport::Add((char *)(*local_48 + 0x4020),(Any64BitId *)"wait_interval");
    iVar6 = *(int *)(*DAT_710593b580 + 0x7300);
    if ((iVar6 != -1) && (*(ulong *)(*DAT_710593b580 + 0x72c0) <= (ulong)(long)iVar6)) {
LAB_710168caf0:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    nn::prepo::PlayReport::Save((Uid *)(*local_48 + 0x4020));
    local_48 = (ulong *)0x0;
    uVar9 = *puVar4;
    *puVar4 = 0;
    if (uVar9 != 0) {
      FUN_710392eb40(uVar9);
    }
    FUN_710392eb40((ulong)puVar4);
  }
  return;
}

