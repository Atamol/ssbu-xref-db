// addr:      71024cb8c0
// offset:    0x24cb8c0
// name:      FUN_71024cb8c0
// mangled:   
// signature: undefined __cdecl FUN_71024cb8c0(uint param_1, uint param_2, byte * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71024cb8c0(uint param_1,uint param_2,byte ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  long *plVar13;
  undefined8 *puVar14;
  long lVar15;
  byte ****ppppbVar16;
  long lVar17;
  byte ***pppbVar18;
  int *piVar19;
  byte ****ppppbVar20;
  byte ****ppppbVar21;
  int iVar22;
  long lVar23;
  uint uVar24;
  byte ****ppppbVar25;
  byte ****ppppbVar26;
  byte ****ppppbVar27;
  long ****local_d0;
  byte ****local_c8;
  byte ****local_c0;
  byte ****local_b8;
  byte ****local_b0;
  byte ****local_a8;
  byte ****local_98;
  byte ****local_90;
  int local_7c [3];
  ulong *local_70 [2];
  
  if (param_1 < 3) {
    puVar14 = *(undefined8 **)(*DAT_7105314510 + 0x158);
    lVar23 = *DAT_710532a868;
    lVar15 = *(long *)*puVar14;
    lVar17 = lVar15 + (ulong)param_1 * 0x3d700;
    bVar2 = *(byte *)(lVar17 + 0x3cc35);
    bVar3 = *(byte *)(lVar17 + 0x3d68c);
    uVar9 = 0;
    cVar4 = *(char *)(lVar17 + 0x3cc37);
    iVar22 = 0;
    iVar5 = *(int *)(lVar17 + 0x3ce44);
    iVar10 = 0;
    uVar12 = 0;
    do {
      uVar11 = uVar12 >> 4;
      uVar12 = uVar12 + 1;
      if ((*(uint *)(lVar15 + (ulong)param_1 * 0x3d700 + (ulong)uVar11 * 4 + 0x3d690) &
          1 << (ulong)(uVar9 & 0x1e)) != 0) {
        iVar22 = iVar10 + 1;
        iVar10 = iVar10 + 1;
      }
      uVar9 = uVar9 + 2;
    } while (uVar12 != 0x80);
    lVar15 = 0;
    ppppbVar25 = (byte ****)0x0;
    ppppbVar26 = (byte ****)0x0;
    ppppbVar27 = (byte ****)0x0;
    ppppbVar20 = (byte ****)0x0;
    uVar12 = 0;
    ppppbVar21 = (byte ****)0x0;
    local_7c[1] = 0;
    local_7c[2] = 0;
    local_c0 = (byte ****)0x0;
    local_b8 = (byte ****)0x0;
    local_7c[0] = 0;
    local_b0 = (byte ****)0x0;
    local_a8 = (byte ****)0x0;
    local_d0 = (long ****)0x0;
    local_c8 = (byte ****)0x0;
    lVar17 = lVar23;
    do {
      FUN_71024cc070((long *)&local_98,(long *)(lVar17 + lVar15 * 0x138 + 0x5c8),(long ****)param_3,
                     param_4,param_5,param_6,param_7,param_8);
      if (local_98 != local_90) {
        param_8 = 0x3cc38;
        plVar13 = (long *)*puVar14;
        uVar9 = 0xd;
        if (lVar15 != 1) {
          uVar9 = 0xffff;
        }
        uVar11 = 0;
        uVar1 = 0xb;
        if (lVar15 != 0) {
          uVar1 = uVar9;
        }
        param_6 = 0x3d700;
        param_7 = 0x84;
        ppppbVar16 = local_98;
        do {
          uVar9 = uVar11 - 0x400;
          uVar24 = uVar1;
          if (uVar11 < 0x400) {
            uVar24 = (uint)lVar15;
            uVar9 = uVar11;
          }
          if (param_1 < 3) {
            if (0x13 < uVar24) goto LAB_71024cc064;
            if ((uVar9 < 0x400) &&
               ((*(uint *)(*plVar13 + (ulong)param_1 * 0x3d700 + (ulong)uVar24 * 0x84 +
                           (ulong)(uVar9 >> 5) * 4 + 0x3cc38) & 1 << (ulong)(uVar9 & 0x1f)) != 0)) {
              iVar10 = *(int *)(ppppbVar16 + 10);
              if (iVar10 - 1U < 10) {
                switch(iVar10) {
                case 1:
                case 2:
                  if (2 < *(int *)(ppppbVar16 + 0xe) - 3U) goto switchD_71024cbb04_caseD_4;
                  break;
                case 3:
                  if (1 < *(int *)(ppppbVar16 + 0xe) - 8U) goto switchD_71024cbb04_caseD_4;
                  break;
                case 4:
                case 10:
switchD_71024cbb04_caseD_4:
                  if ((uVar12 & 0x7fffffff) < 0x12) {
                    uVar9 = 1 << (ulong)(uVar12 & 0x1f);
                    if ((uVar9 & 0x7ff9) == 0) {
                      if ((uVar9 & 0x38002) == 0) {
                        piVar19 = local_7c;
                      }
                      else {
                        piVar19 = local_7c + 1;
                      }
                    }
                    else {
                      piVar19 = local_7c + 2;
                    }
                    *piVar19 = *piVar19 + 1;
                  }
                  uVar9 = (uint)local_d0;
                  if (iVar10 == 2) {
                    uVar9 = uVar9 + 1;
                  }
                  local_d0 = (long ****)(ulong)uVar9;
                }
              }
              pppbVar18 = *ppppbVar16;
              uVar9 = (uint)ppppbVar26;
              if (((*(ulong *)(lVar23 + 0x150) ^ (ulong)pppbVar18) & 0xffffffffff) == 0) {
                uVar9 = 1;
              }
              ppppbVar26 = (byte ****)(ulong)uVar9;
              uVar9 = (uint)ppppbVar27;
              if (((*(ulong *)(lVar23 + 0x158) ^ (ulong)pppbVar18) & 0xffffffffff) == 0) {
                uVar9 = 1;
              }
              ppppbVar27 = (byte ****)(ulong)uVar9;
              uVar9 = (uint)ppppbVar25;
              if (((*(ulong *)(lVar23 + 0x160) ^ (ulong)pppbVar18) & 0xffffffffff) == 0) {
                uVar9 = 1;
              }
              ppppbVar25 = (byte ****)(ulong)uVar9;
              uVar9 = (uint)ppppbVar21;
              if (((*(ulong *)(lVar23 + 0x168) ^ (ulong)pppbVar18) & 0xffffffffff) == 0) {
                uVar9 = 1;
              }
              ppppbVar21 = (byte ****)(ulong)uVar9;
              uVar9 = (uint)local_b0;
              if (((*(ulong *)(lVar23 + 0x170) ^ (ulong)pppbVar18) & 0xffffffffff) == 0) {
                uVar9 = 1;
              }
              local_b0 = (byte ****)(ulong)uVar9;
              uVar9 = (uint)local_c0;
              if (((*(ulong *)(lVar23 + 0x178) ^ (ulong)pppbVar18) & 0xffffffffff) == 0) {
                uVar9 = 1;
              }
              local_c0 = (byte ****)(ulong)uVar9;
              uVar9 = (uint)local_b8;
              if (((*(ulong *)(lVar23 + 0x180) ^ (ulong)pppbVar18) & 0xffffffffff) == 0) {
                uVar9 = 1;
              }
              local_b8 = (byte ****)(ulong)uVar9;
              uVar9 = (uint)local_c8;
              if (((*(ulong *)(lVar23 + 0x188) ^ (ulong)pppbVar18) & 0xffffffffff) == 0) {
                uVar9 = 1;
              }
              local_c8 = (byte ****)(ulong)uVar9;
              uVar9 = (uint)ppppbVar20;
              if (((*(ulong *)(lVar23 + 400) ^ (ulong)pppbVar18) & 0xffffffffff) == 0) {
                uVar9 = 1;
              }
              ppppbVar20 = (byte ****)(ulong)uVar9;
              uVar9 = (uint)local_a8;
              if (((*(ulong *)(lVar23 + 0x198) ^ (ulong)pppbVar18) & 0xffffffffff) == 0) {
                uVar9 = 1;
              }
              local_a8 = (byte ****)(ulong)uVar9;
            }
          }
          ppppbVar16 = ppppbVar16 + 0x25;
          uVar11 = uVar11 + 1;
        } while (local_90 != ppppbVar16);
      }
      param_3 = local_c0;
      param_4 = local_c8;
      param_5 = local_d0;
      if (local_98 != (byte ****)0x0) {
        local_90 = local_98;
        FUN_710392eb40((ulong)local_98);
      }
      lVar15 = lVar15 + 1;
      if (lVar15 == 0x12) goto code_r0x0071024cbc38;
      uVar12 = uVar12 + 1;
      lVar17 = *DAT_710532a868;
    } while( true );
  }
LAB_71024cc064:
                    /* WARNING: Subroutine does not return */
  abort();
code_r0x0071024cbc38:
  lVar15 = *DAT_71052c50e0;
  if (((param_2 & 1) == 0) && (*(long *)(lVar15 + 0x20) != 0)) {
    lVar17 = nn::os::GetSystemTick();
    uVar7 = nn::os::ConvertToTimeSpan(lVar17 - DAT_71074470e8);
    uVar8 = ((long)uVar7 >> 0x20) * 0xe353f7cf + ((uVar7 & 0xffffffff) * 0xe353f7cf >> 0x20);
    if ((((long)(((long)uVar7 >> 0x20) * 0x20c49ba5 + ((long)uVar8 >> 0x20) +
                ((uVar7 & 0xffffffff) * 0x20c49ba5 + (uVar8 & 0xffffffff) >> 0x20)) >> 7) -
        ((long)uVar7 >> 0x3f)) * 1000 - *(long *)(lVar15 + 0x20) < 601000000000) {
      return;
    }
  }
  lVar17 = nn::os::GetSystemTick();
  uVar7 = nn::os::ConvertToTimeSpan(lVar17 - DAT_71074470e8);
  uVar8 = ((long)uVar7 >> 0x20) * 0xe353f7cf + ((uVar7 & 0xffffffff) * 0xe353f7cf >> 0x20);
  *(long *)(lVar15 + 0x20) =
       (((long)(((long)uVar7 >> 0x20) * 0x20c49ba5 + ((long)uVar8 >> 0x20) +
               ((uVar7 & 0xffffffff) * 0x20c49ba5 + (uVar8 & 0xffffffff) >> 0x20)) >> 7) -
       ((long)uVar7 >> 0x3f)) * 1000;
  FUN_710375aa90((long *)local_70,"adventure",(long ****)param_3,param_4,param_5,param_6,param_7,
                 param_8);
  puVar6 = local_70[0];
  local_98 = (byte ****)(long)(int)param_1;
  nn::prepo::PlayReport::Add((char *)(*local_70[0] + 0x4020),(Any64BitId *)"adv_slot");
  local_98 = (byte ****)(ulong)bVar2;
  nn::prepo::PlayReport::Add((char *)(*puVar6 + 0x4020),(Any64BitId *)"adv_loop_count");
  local_98 = (byte ****)(ulong)bVar3;
  nn::prepo::PlayReport::Add((char *)(*puVar6 + 0x4020),(Any64BitId *)"adv_difficulty");
  local_98 = (byte ****)(long)iVar22;
  nn::prepo::PlayReport::Add((char *)(*puVar6 + 0x4020),(Any64BitId *)"adv_skill_count");
  local_98 = (byte ****)(long)local_7c[2];
  nn::prepo::PlayReport::Add((char *)(*puVar6 + 0x4020),(Any64BitId *)"spots_count_cleared_light");
  local_98 = (byte ****)(long)local_7c[1];
  nn::prepo::PlayReport::Add((char *)(*puVar6 + 0x4020),(Any64BitId *)"spots_count_cleared_dark");
  local_98 = (byte ****)(long)local_7c[0];
  nn::prepo::PlayReport::Add((char *)(*puVar6 + 0x4020),(Any64BitId *)"spots_count_cleared_final");
  local_98 = (byte ****)(long)iVar5;
  nn::prepo::PlayReport::Add((char *)(*puVar6 + 0x4020),(Any64BitId *)"first_branch");
  local_98 = (byte ****)(long)(int)local_d0;
  nn::prepo::PlayReport::Add((char *)(*puVar6 + 0x4020),(Any64BitId *)"spots_count_fighter");
  local_98 = ppppbVar21;
  nn::prepo::PlayReport::Add((char *)(*puVar6 + 0x4020),(Any64BitId *)"boss_defeat_masterhand");
  local_98 = ppppbVar20;
  nn::prepo::PlayReport::Add((char *)(*puVar6 + 0x4020),(Any64BitId *)"boss_defeat_crazyhand");
  puVar6 = local_70[0];
  local_98 = ppppbVar27;
  nn::prepo::PlayReport::Add((char *)(*local_70[0] + 0x4020),(Any64BitId *)"boss_defeat_galleom");
  local_98 = ppppbVar26;
  nn::prepo::PlayReport::Add((char *)(*local_70[0] + 0x4020),(Any64BitId *)"boss_defeat_koopag");
  local_98 = ppppbVar25;
  nn::prepo::PlayReport::Add((char *)(*local_70[0] + 0x4020),(Any64BitId *)"boss_defeat_lioleus");
  local_98 = local_c8;
  nn::prepo::PlayReport::Add((char *)(*local_70[0] + 0x4020),(Any64BitId *)"boss_defeat_ganon");
  local_98 = local_c0;
  nn::prepo::PlayReport::Add((char *)(*local_70[0] + 0x4020),(Any64BitId *)"boss_defeat_marx");
  local_98 = local_b8;
  nn::prepo::PlayReport::Add((char *)(*local_70[0] + 0x4020),(Any64BitId *)"boss_defeat_dracula");
  local_98 = local_b0;
  nn::prepo::PlayReport::Add((char *)(*local_70[0] + 0x4020),(Any64BitId *)"boss_defeat_kiila");
  local_98 = local_a8;
  nn::prepo::PlayReport::Add((char *)(*local_70[0] + 0x4020),(Any64BitId *)"boss_defeat_darz");
  local_98 = (byte ****)(ulong)(cVar4 != '\0');
  nn::prepo::PlayReport::Add((char *)(*local_70[0] + 0x4020),(Any64BitId *)"boss_defeat_kiila_darz")
  ;
  iVar10 = *(int *)(*DAT_710593b580 + 0x7300);
  if ((iVar10 == -1) || ((ulong)(long)iVar10 < *(ulong *)(*DAT_710593b580 + 0x72c0))) {
    nn::prepo::PlayReport::Save((Uid *)(*local_70[0] + 0x4020));
    local_70[0] = (ulong *)0x0;
    if (puVar6 != (ulong *)0x0) {
      uVar8 = *puVar6;
      *puVar6 = 0;
      if (uVar8 != 0) {
        FUN_710392eb40(uVar8);
      }
      FUN_710392eb40((ulong)puVar6);
    }
    return;
  }
  goto LAB_71024cc064;
}

