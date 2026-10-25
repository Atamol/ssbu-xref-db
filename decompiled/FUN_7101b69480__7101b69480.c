// addr:      7101b69480
// offset:    0x1b69480
// name:      FUN_7101b69480
// mangled:   
// signature: undefined FUN_7101b69480(void)


/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_7101b69480(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte ****ppppbVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  bool bVar7;
  long ***ppplVar8;
  char *pcVar9;
  undefined8 *puVar10;
  int iVar11;
  ulong uVar12;
  long *plVar13;
  undefined8 *puVar14;
  long *********ppppppppplVar15;
  undefined8 uVar16;
  undefined **ppuVar17;
  long ***ppplVar18;
  long *plVar19;
  uint uVar20;
  uint uVar21;
  long lVar22;
  ulong uVar23;
  long *plVar24;
  uint uVar25;
  ulong uVar26;
  byte *pbVar27;
  char cVar28;
  uint uVar29;
  long ****pppplVar30;
  long *plVar31;
  long lVar32;
  int iVar33;
  long ****pppplVar34;
  long ***ppplVar35;
  long *plVar36;
  uint uVar37;
  undefined8 uVar38;
  undefined **local_210;
  ulong local_208;
  undefined **local_200;
  ulong local_1f8;
  undefined **local_1f0;
  ulong local_1e8;
  undefined **local_1e0;
  ulong local_1d8;
  undefined **local_1d0;
  ulong local_1c8;
  long ***local_1c0;
  long ***local_1b8;
  long ***local_1b0;
  long ***local_1a8;
  long ***local_1a0;
  long ***ppplStack_198;
  undefined **local_190;
  ulong local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined4 local_170;
  char *local_168;
  undefined4 local_160;
  char *local_158;
  undefined4 local_150;
  char *local_148;
  undefined4 local_140;
  char *local_138;
  undefined4 local_130;
  char *local_128;
  undefined4 local_120;
  char *local_118;
  undefined4 local_110;
  char *local_108;
  undefined4 local_100;
  char *local_f8;
  undefined4 local_f0;
  char *local_e8;
  undefined4 local_e0;
  char *local_d8;
  undefined4 local_d0;
  char *local_c8;
  undefined4 local_c0;
  char *local_b8;
  undefined4 local_b0;
  char *local_a8;
  long ***local_a0;
  undefined8 *local_98;
  long ***local_90 [2];
  undefined4 local_74;
  
  iVar33 = (int)param_2;
  uVar37 = 0x811c9dc5;
  ppuVar17 = (undefined **)param_3;
  FUN_7101b73260(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  local_1a0 = (long ***)0x0;
  ppplStack_198 = (long ***)0x0;
  local_1b0 = (long ***)0x0;
  local_1a8 = (long ***)0x0;
  local_1c0 = (long ***)0x0;
  local_1b8 = (long ***)0x0;
  switch((ulong)param_3 & 0xffffffff) {
  case 0:
    if (iVar33 < 5) {
      uVar29 = 1;
      FUN_71003a4ca0((uint *)&local_180,"p%d",1,ppuVar17,param_4,param_5,param_6,param_7,param_8);
      do {
        if (local_1a0 < ppplStack_198) {
          *(uint *)local_1a0 = 0;
          uVar26 = 0;
          do {
            uVar23 = uVar26;
            if (*(char *)((long)&local_178 + uVar26) == '\0') break;
            *(char *)((long)local_1a0 + uVar26 + 8) = *(char *)((long)&local_178 + uVar26);
            cVar28 = *(char *)((long)&local_178 + uVar26 + 1);
            if (cVar28 == '\0') {
              uVar23 = uVar26 + 1;
              break;
            }
            *(char *)((long)local_1a0 + uVar26 + 9) = cVar28;
            cVar28 = *(char *)((long)&local_178 + uVar26 + 2);
            if (cVar28 == '\0') {
              uVar23 = uVar26 + 2;
              break;
            }
            uVar23 = uVar26 + 3;
            *(char *)((long)local_1a0 + uVar26 + 10) = cVar28;
            uVar26 = uVar23;
          } while ((uint)uVar23 < 0x3f);
          *(undefined1 *)((long)local_1a0 + (uVar23 & 0xffffffff) + 8) = 0;
          *(uint *)((long)local_1a0 + 4) = (uint)uVar23;
          uVar20 = (uint)*(byte *)(local_1a0 + 1);
          uVar25 = uVar37;
          if (*(byte *)(local_1a0 + 1) != 0) {
            pbVar27 = (byte *)((long)local_1a0 + 9);
            do {
              uVar25 = uVar25 * 0x89 ^ uVar20;
              uVar20 = (uint)*pbVar27;
              pbVar27 = pbVar27 + 1;
            } while (uVar20 != 0);
          }
          *(uint *)local_1a0 = uVar25;
          local_1a0 = local_1a0 + 9;
        }
        else {
          FUN_71019c1c50((ulong *)&local_1a8,(long)&local_180,(long ****)ppuVar17,param_4,param_5,
                         param_6,param_7,param_8);
        }
        FUN_71003a4ca0((uint *)&local_180,"p%d_2",(ulong)uVar29,ppuVar17,param_4,param_5,param_6,
                       param_7,param_8);
        if (local_1b8 < local_1b0) {
          *(uint *)local_1b8 = 0;
          uVar26 = 0;
          do {
            uVar23 = uVar26;
            if (*(char *)((long)&local_178 + uVar26) == '\0') break;
            *(char *)((long)local_1b8 + uVar26 + 8) = *(char *)((long)&local_178 + uVar26);
            cVar28 = *(char *)((long)&local_178 + uVar26 + 1);
            if (cVar28 == '\0') {
              uVar23 = uVar26 + 1;
              break;
            }
            *(char *)((long)local_1b8 + uVar26 + 9) = cVar28;
            cVar28 = *(char *)((long)&local_178 + uVar26 + 2);
            if (cVar28 == '\0') {
              uVar23 = uVar26 + 2;
              break;
            }
            uVar23 = uVar26 + 3;
            *(char *)((long)local_1b8 + uVar26 + 10) = cVar28;
            uVar26 = uVar23;
          } while ((uint)uVar23 < 0x3f);
          *(undefined1 *)((long)local_1b8 + (uVar23 & 0xffffffff) + 8) = 0;
          *(uint *)((long)local_1b8 + 4) = (uint)uVar23;
          uVar20 = (uint)*(byte *)(local_1b8 + 1);
          uVar25 = uVar37;
          if (*(byte *)(local_1b8 + 1) != 0) {
            pbVar27 = (byte *)((long)local_1b8 + 9);
            do {
              uVar25 = uVar25 * 0x89 ^ uVar20;
              uVar20 = (uint)*pbVar27;
              pbVar27 = pbVar27 + 1;
            } while (uVar20 != 0);
          }
          *(uint *)local_1b8 = uVar25;
          local_1b8 = local_1b8 + 9;
        }
        else {
          FUN_71019c1c50((ulong *)&local_1c0,(long)&local_180,(long ****)ppuVar17,param_4,param_5,
                         param_6,param_7,param_8);
        }
        if (uVar29 == 4) goto LAB_7101b69e50;
        uVar29 = uVar29 + 1;
        FUN_71003a4ca0((uint *)&local_180,"p%d",(ulong)uVar29,ppuVar17,param_4,param_5,param_6,
                       param_7,param_8);
      } while( true );
    }
    uVar29 = 1;
    FUN_71003a4ca0((uint *)&local_180,"p%d_2",1,ppuVar17,param_4,param_5,param_6,param_7,param_8);
    do {
      if (local_1a0 < ppplStack_198) {
        *(uint *)local_1a0 = 0;
        uVar26 = 0;
        do {
          uVar23 = uVar26;
          if (*(char *)((long)&local_178 + uVar26) == '\0') break;
          *(char *)((long)local_1a0 + uVar26 + 8) = *(char *)((long)&local_178 + uVar26);
          cVar28 = *(char *)((long)&local_178 + uVar26 + 1);
          if (cVar28 == '\0') {
            uVar23 = uVar26 + 1;
            break;
          }
          *(char *)((long)local_1a0 + uVar26 + 9) = cVar28;
          cVar28 = *(char *)((long)&local_178 + uVar26 + 2);
          if (cVar28 == '\0') {
            uVar23 = uVar26 + 2;
            break;
          }
          uVar23 = uVar26 + 3;
          *(char *)((long)local_1a0 + uVar26 + 10) = cVar28;
          uVar26 = uVar23;
        } while ((uint)uVar23 < 0x3f);
        *(undefined1 *)((long)local_1a0 + (uVar23 & 0xffffffff) + 8) = 0;
        *(uint *)((long)local_1a0 + 4) = (uint)uVar23;
        uVar20 = (uint)*(byte *)(local_1a0 + 1);
        uVar25 = uVar37;
        if (*(byte *)(local_1a0 + 1) != 0) {
          pbVar27 = (byte *)((long)local_1a0 + 9);
          do {
            uVar25 = uVar25 * 0x89 ^ uVar20;
            uVar20 = (uint)*pbVar27;
            pbVar27 = pbVar27 + 1;
          } while (uVar20 != 0);
        }
        *(uint *)local_1a0 = uVar25;
        local_1a0 = local_1a0 + 9;
      }
      else {
        FUN_71019c1c50((ulong *)&local_1a8,(long)&local_180,(long ****)ppuVar17,param_4,param_5,
                       param_6,param_7,param_8);
      }
      FUN_71003a4ca0((uint *)&local_180,"p%d",(ulong)uVar29,ppuVar17,param_4,param_5,param_6,param_7
                     ,param_8);
      if (local_1b8 < local_1b0) {
        *(uint *)local_1b8 = 0;
        uVar26 = 0;
        do {
          uVar23 = uVar26;
          if (*(char *)((long)&local_178 + uVar26) == '\0') break;
          *(char *)((long)local_1b8 + uVar26 + 8) = *(char *)((long)&local_178 + uVar26);
          cVar28 = *(char *)((long)&local_178 + uVar26 + 1);
          if (cVar28 == '\0') {
            uVar23 = uVar26 + 1;
            break;
          }
          *(char *)((long)local_1b8 + uVar26 + 9) = cVar28;
          cVar28 = *(char *)((long)&local_178 + uVar26 + 2);
          if (cVar28 == '\0') {
            uVar23 = uVar26 + 2;
            break;
          }
          uVar23 = uVar26 + 3;
          *(char *)((long)local_1b8 + uVar26 + 10) = cVar28;
          uVar26 = uVar23;
        } while ((uint)uVar23 < 0x3f);
        *(undefined1 *)((long)local_1b8 + (uVar23 & 0xffffffff) + 8) = 0;
        *(uint *)((long)local_1b8 + 4) = (uint)uVar23;
        uVar20 = (uint)*(byte *)(local_1b8 + 1);
        uVar25 = uVar37;
        if (*(byte *)(local_1b8 + 1) != 0) {
          pbVar27 = (byte *)((long)local_1b8 + 9);
          do {
            uVar25 = uVar25 * 0x89 ^ uVar20;
            uVar20 = (uint)*pbVar27;
            pbVar27 = pbVar27 + 1;
          } while (uVar20 != 0);
        }
        *(uint *)local_1b8 = uVar25;
        local_1b8 = local_1b8 + 9;
      }
      else {
        FUN_71019c1c50((ulong *)&local_1c0,(long)&local_180,(long ****)ppuVar17,param_4,param_5,
                       param_6,param_7,param_8);
      }
      if (uVar29 == 4) goto LAB_7101b69e50;
      uVar29 = uVar29 + 1;
      FUN_71003a4ca0((uint *)&local_180,"p%d_2",(ulong)uVar29,ppuVar17,param_4,param_5,param_6,
                     param_7,param_8);
    } while( true );
  case 1:
    iVar11 = iVar33 + 5;
    local_180 = (undefined **)0x200000000;
    if (7 < iVar11) {
      iVar11 = 8;
    }
    uVar25 = 0x70;
    lVar22 = 9;
    local_178._0_3_ = 0x3270;
    uVar29 = uVar37;
    do {
      uVar29 = uVar29 * 0x89 ^ uVar25;
      uVar25 = (uint)*(byte *)((long)&local_180 + lVar22);
      lVar22 = lVar22 + 1;
    } while (uVar25 != 0);
    local_180 = (undefined **)CONCAT44(2,uVar29);
    FUN_71019c1c50((ulong *)&local_1c0,(long)&local_180,(long ****)ppuVar17,param_4,param_5,param_6,
                   param_7,param_8);
    uVar25 = 0x70;
    local_180 = (undefined **)0x200000000;
    lVar22 = 9;
    local_178._0_3_ = 0x3370;
    uVar29 = uVar37;
    do {
      uVar29 = uVar29 * 0x89 ^ uVar25;
      uVar25 = (uint)*(byte *)((long)&local_180 + lVar22);
      lVar22 = lVar22 + 1;
    } while (uVar25 != 0);
    local_180 = (undefined **)CONCAT44(2,uVar29);
    if (local_1b8 < local_1b0) {
      uVar26 = 0;
      cVar28 = 'p';
      *(uint *)local_1b8 = 0;
      do {
        *(char *)((long)local_1b8 + uVar26 + 8) = cVar28;
        if (0x3e < (int)uVar26 + 1U) {
          uVar26 = (ulong)((int)uVar26 + 1);
          break;
        }
        cVar28 = *(char *)((long)&local_178 + uVar26 + 1);
        if (cVar28 == '\0') {
          uVar26 = uVar26 + 1;
          break;
        }
        *(char *)((long)local_1b8 + uVar26 + 9) = cVar28;
        cVar28 = *(char *)((long)&local_178 + uVar26 + 2);
        uVar26 = uVar26 + 2;
      } while (cVar28 != '\0');
      *(undefined1 *)((long)local_1b8 + (uVar26 & 0xffffffff) + 8) = 0;
      *(uint *)((long)local_1b8 + 4) = (uint)uVar26;
      uVar25 = (uint)*(byte *)(local_1b8 + 1);
      uVar29 = uVar37;
      if (*(byte *)(local_1b8 + 1) != 0) {
        pbVar27 = (byte *)((long)local_1b8 + 9);
        do {
          uVar29 = uVar29 * 0x89 ^ uVar25;
          uVar25 = (uint)*pbVar27;
          pbVar27 = pbVar27 + 1;
        } while (uVar25 != 0);
      }
      *(uint *)local_1b8 = uVar29;
      local_1b8 = local_1b8 + 9;
    }
    else {
      FUN_71019c1c50((ulong *)&local_1c0,(long)&local_180,(long ****)ppuVar17,param_4,param_5,
                     param_6,param_7,param_8);
    }
    uVar25 = 0x70;
    lVar22 = 9;
    local_180 = (undefined **)0x200000000;
    local_178._0_3_ = 0x3470;
    uVar29 = uVar37;
    do {
      uVar29 = uVar29 * 0x89 ^ uVar25;
      uVar25 = (uint)*(byte *)((long)&local_180 + lVar22);
      lVar22 = lVar22 + 1;
    } while (uVar25 != 0);
    local_180 = (undefined **)CONCAT44(2,uVar29);
    if (local_1b8 < local_1b0) {
      uVar26 = 0;
      cVar28 = 'p';
      *(uint *)local_1b8 = 0;
      do {
        *(char *)((long)local_1b8 + uVar26 + 8) = cVar28;
        if (0x3e < (int)uVar26 + 1U) {
          uVar26 = (ulong)((int)uVar26 + 1);
          break;
        }
        cVar28 = *(char *)((long)&local_178 + uVar26 + 1);
        if (cVar28 == '\0') {
          uVar26 = uVar26 + 1;
          break;
        }
        *(char *)((long)local_1b8 + uVar26 + 9) = cVar28;
        cVar28 = *(char *)((long)&local_178 + uVar26 + 2);
        uVar26 = uVar26 + 2;
      } while (cVar28 != '\0');
      *(undefined1 *)((long)local_1b8 + (uVar26 & 0xffffffff) + 8) = 0;
      *(uint *)((long)local_1b8 + 4) = (uint)uVar26;
      uVar25 = (uint)*(byte *)(local_1b8 + 1);
      uVar29 = uVar37;
      if (*(byte *)(local_1b8 + 1) != 0) {
        pbVar27 = (byte *)((long)local_1b8 + 9);
        do {
          uVar29 = uVar29 * 0x89 ^ uVar25;
          uVar25 = (uint)*pbVar27;
          pbVar27 = pbVar27 + 1;
        } while (uVar25 != 0);
      }
      *(uint *)local_1b8 = uVar29;
      local_1b8 = local_1b8 + 9;
    }
    else {
      FUN_71019c1c50((ulong *)&local_1c0,(long)&local_180,(long ****)ppuVar17,param_4,param_5,
                     param_6,param_7,param_8);
    }
    uVar20 = 0x70;
    lVar22 = 9;
    uVar25 = uVar37;
    uVar29 = uVar37;
    if (iVar33 == 1) {
      local_180 = (undefined **)0x200000000;
      local_178 = (char *)CONCAT53(local_178._3_5_,0x3170);
      uVar21 = uVar37;
      do {
        uVar21 = uVar21 * 0x89 ^ uVar20;
        uVar20 = (uint)*(byte *)((long)&local_180 + lVar22);
        lVar22 = lVar22 + 1;
      } while (uVar20 != 0);
      local_180 = (undefined **)CONCAT44(2,uVar21);
      if (local_1a0 < ppplStack_198) {
        uVar26 = 0;
        cVar28 = 'p';
        *(uint *)local_1a0 = 0;
        do {
          *(char *)((long)local_1a0 + uVar26 + 8) = cVar28;
          if (0x3e < (int)uVar26 + 1U) {
            uVar26 = (ulong)((int)uVar26 + 1);
            break;
          }
          cVar28 = *(char *)((long)&local_178 + uVar26 + 1);
          if (cVar28 == '\0') {
            uVar26 = uVar26 + 1;
            break;
          }
          *(char *)((long)local_1a0 + uVar26 + 9) = cVar28;
          cVar28 = *(char *)((long)&local_178 + uVar26 + 2);
          uVar26 = uVar26 + 2;
        } while (cVar28 != '\0');
        *(undefined1 *)((long)local_1a0 + (uVar26 & 0xffffffff) + 8) = 0;
        *(uint *)((long)local_1a0 + 4) = (uint)uVar26;
        uVar21 = (uint)*(byte *)(local_1a0 + 1);
        uVar20 = uVar37;
        if (*(byte *)(local_1a0 + 1) != 0) {
          pbVar27 = (byte *)((long)local_1a0 + 9);
          do {
            uVar20 = uVar20 * 0x89 ^ uVar21;
            uVar21 = (uint)*pbVar27;
            pbVar27 = pbVar27 + 1;
          } while (uVar21 != 0);
        }
        *(uint *)local_1a0 = uVar20;
        local_1a0 = local_1a0 + 9;
      }
      else {
        FUN_71019c1c50((ulong *)&local_1a8,(long)&local_180,(long ****)ppuVar17,param_4,param_5,
                       param_6,param_7,param_8);
      }
      uVar21 = 0x70;
      lVar22 = 9;
      local_180 = (undefined **)0x400000000;
      local_178._0_5_ = 0x325f3170;
      uVar20 = uVar37;
      do {
        uVar20 = uVar20 * 0x89 ^ uVar21;
        uVar21 = (uint)*(byte *)((long)&local_180 + lVar22);
        lVar22 = lVar22 + 1;
      } while (uVar21 != 0);
      local_180 = (undefined **)CONCAT44(4,uVar20);
      if (local_1b8 < local_1b0) {
        uVar26 = 0;
        cVar28 = 'p';
        *(uint *)local_1b8 = 0;
        do {
          *(char *)((long)local_1b8 + uVar26 + 8) = cVar28;
          if (0x3e < (int)uVar26 + 1U) {
            uVar26 = (ulong)((int)uVar26 + 1);
            break;
          }
          cVar28 = *(char *)((long)&local_178 + uVar26 + 1);
          if (cVar28 == '\0') {
            uVar26 = uVar26 + 1;
            break;
          }
          *(char *)((long)local_1b8 + uVar26 + 9) = cVar28;
          cVar28 = *(char *)((long)&local_178 + uVar26 + 2);
          uVar26 = uVar26 + 2;
        } while (cVar28 != '\0');
        *(undefined1 *)((long)local_1b8 + (uVar26 & 0xffffffff) + 8) = 0;
        *(uint *)((long)local_1b8 + 4) = (uint)uVar26;
        uVar21 = (uint)*(byte *)(local_1b8 + 1);
        uVar20 = uVar37;
        if (*(byte *)(local_1b8 + 1) != 0) {
          pbVar27 = (byte *)((long)local_1b8 + 9);
          do {
            uVar20 = uVar20 * 0x89 ^ uVar21;
            uVar21 = (uint)*pbVar27;
            pbVar27 = pbVar27 + 1;
          } while (uVar21 != 0);
        }
        *(uint *)local_1b8 = uVar20;
        local_1b8 = local_1b8 + 9;
      }
      else {
        FUN_71019c1c50((ulong *)&local_1c0,(long)&local_180,(long ****)ppuVar17,param_4,param_5,
                       param_6,param_7,param_8);
      }
      uVar21 = 0x70;
      lVar22 = 9;
      local_180 = (undefined **)0x400000000;
      local_178._0_5_ = 0x325f3270;
      uVar20 = uVar37;
      do {
        uVar20 = uVar20 * 0x89 ^ uVar21;
        uVar21 = (uint)*(byte *)((long)&local_180 + lVar22);
        lVar22 = lVar22 + 1;
      } while (uVar21 != 0);
      local_180 = (undefined **)CONCAT44(4,uVar20);
      if (local_1b8 < local_1b0) {
        uVar26 = 0;
        cVar28 = 'p';
        *(uint *)local_1b8 = 0;
        do {
          *(char *)((long)local_1b8 + uVar26 + 8) = cVar28;
          if (0x3e < (int)uVar26 + 1U) {
            uVar26 = (ulong)((int)uVar26 + 1);
            break;
          }
          cVar28 = *(char *)((long)&local_178 + uVar26 + 1);
          if (cVar28 == '\0') {
            uVar26 = uVar26 + 1;
            break;
          }
          *(char *)((long)local_1b8 + uVar26 + 9) = cVar28;
          cVar28 = *(char *)((long)&local_178 + uVar26 + 2);
          uVar26 = uVar26 + 2;
        } while (cVar28 != '\0');
        *(undefined1 *)((long)local_1b8 + (uVar26 & 0xffffffff) + 8) = 0;
        *(uint *)((long)local_1b8 + 4) = (uint)uVar26;
        uVar21 = (uint)*(byte *)(local_1b8 + 1);
        uVar20 = uVar37;
        if (*(byte *)(local_1b8 + 1) != 0) {
          pbVar27 = (byte *)((long)local_1b8 + 9);
          do {
            uVar20 = uVar20 * 0x89 ^ uVar21;
            uVar21 = (uint)*pbVar27;
            pbVar27 = pbVar27 + 1;
          } while (uVar21 != 0);
        }
        *(uint *)local_1b8 = uVar20;
        local_1b8 = local_1b8 + 9;
      }
      else {
        FUN_71019c1c50((ulong *)&local_1c0,(long)&local_180,(long ****)ppuVar17,param_4,param_5,
                       param_6,param_7,param_8);
      }
      uVar21 = 0x70;
      lVar22 = 9;
      local_180 = (undefined **)0x400000000;
      local_178._0_5_ = 0x325f3470;
      uVar20 = uVar37;
      do {
        uVar20 = uVar20 * 0x89 ^ uVar21;
        uVar21 = (uint)*(byte *)((long)&local_180 + lVar22);
        lVar22 = lVar22 + 1;
      } while (uVar21 != 0);
      local_180 = (undefined **)CONCAT44(4,uVar20);
      if (local_1b8 < local_1b0) {
        uVar26 = 0;
        cVar28 = 'p';
        *(uint *)local_1b8 = 0;
        do {
          *(char *)((long)local_1b8 + uVar26 + 8) = cVar28;
          if (0x3e < (int)uVar26 + 1U) {
            uVar26 = (ulong)((int)uVar26 + 1);
            break;
          }
          cVar28 = *(char *)((long)&local_178 + uVar26 + 1);
          if (cVar28 == '\0') {
            uVar26 = uVar26 + 1;
            break;
          }
          *(char *)((long)local_1b8 + uVar26 + 9) = cVar28;
          cVar28 = *(char *)((long)&local_178 + uVar26 + 2);
          uVar26 = uVar26 + 2;
        } while (cVar28 != '\0');
        *(undefined1 *)((long)local_1b8 + (uVar26 & 0xffffffff) + 8) = 0;
        *(uint *)((long)local_1b8 + 4) = (uint)uVar26;
        uVar21 = (uint)*(byte *)(local_1b8 + 1);
        uVar20 = uVar37;
        if (*(byte *)(local_1b8 + 1) != 0) {
          pbVar27 = (byte *)((long)local_1b8 + 9);
          do {
            uVar20 = uVar20 * 0x89 ^ uVar21;
            uVar21 = (uint)*pbVar27;
            pbVar27 = pbVar27 + 1;
          } while (uVar21 != 0);
        }
        *(uint *)local_1b8 = uVar20;
        local_1b8 = local_1b8 + 9;
      }
      else {
        FUN_71019c1c50((ulong *)&local_1c0,(long)&local_180,(long ****)ppuVar17,param_4,param_5,
                       param_6,param_7,param_8);
      }
      uVar20 = 0x70;
      lVar22 = 9;
      local_180 = (undefined **)0x400000000;
      local_178 = (char *)CONCAT35(local_178._5_3_,0x325f3370);
      do {
        uVar29 = uVar29 * 0x89 ^ uVar20;
        uVar20 = (uint)*(byte *)((long)&local_180 + lVar22);
        lVar22 = lVar22 + 1;
      } while (uVar20 != 0);
      if (ppplStack_198 <= local_1a0) goto LAB_7101b72d90;
      uVar26 = 0;
      cVar28 = 'p';
      *(uint *)local_1a0 = 0;
      do {
        *(char *)((long)local_1a0 + uVar26 + 8) = cVar28;
        if (0x3e < (int)uVar26 + 1U) {
          uVar26 = (ulong)((int)uVar26 + 1);
          break;
        }
        cVar28 = *(char *)((long)&local_178 + uVar26 + 1);
        if (cVar28 == '\0') {
          uVar26 = uVar26 + 1;
          break;
        }
        *(char *)((long)local_1a0 + uVar26 + 9) = cVar28;
        cVar28 = *(char *)((long)&local_178 + uVar26 + 2);
        uVar26 = uVar26 + 2;
      } while (cVar28 != '\0');
      *(undefined1 *)((long)local_1a0 + (uVar26 & 0xffffffff) + 8) = 0;
      *(uint *)((long)local_1a0 + 4) = (uint)uVar26;
      uVar29 = (uint)*(byte *)(local_1a0 + 1);
      if (*(byte *)(local_1a0 + 1) != 0) {
        pbVar27 = (byte *)((long)local_1a0 + 9);
        do {
          uVar25 = uVar25 * 0x89 ^ uVar29;
          uVar29 = (uint)*pbVar27;
          pbVar27 = pbVar27 + 1;
        } while (uVar29 != 0);
      }
LAB_7101b72de0:
      *(uint *)local_1a0 = uVar25;
      local_1a0 = local_1a0 + 9;
    }
    else {
      local_180 = (undefined **)0x200000000;
      local_178 = (char *)CONCAT53(local_178._3_5_,0x3170);
      do {
        uVar25 = uVar25 * 0x89 ^ uVar20;
        uVar20 = (uint)*(byte *)((long)&local_180 + lVar22);
        lVar22 = lVar22 + 1;
      } while (uVar20 != 0);
      local_180 = (undefined **)CONCAT44(2,uVar25);
      if (local_1b8 < local_1b0) {
        uVar26 = 0;
        cVar28 = 'p';
        *(uint *)local_1b8 = 0;
        do {
          *(char *)((long)local_1b8 + uVar26 + 8) = cVar28;
          if (0x3e < (int)uVar26 + 1U) {
            uVar26 = (ulong)((int)uVar26 + 1);
            break;
          }
          cVar28 = *(char *)((long)&local_178 + uVar26 + 1);
          if (cVar28 == '\0') {
            uVar26 = uVar26 + 1;
            break;
          }
          *(char *)((long)local_1b8 + uVar26 + 9) = cVar28;
          cVar28 = *(char *)((long)&local_178 + uVar26 + 2);
          uVar26 = uVar26 + 2;
        } while (cVar28 != '\0');
        *(undefined1 *)((long)local_1b8 + (uVar26 & 0xffffffff) + 8) = 0;
        *(uint *)((long)local_1b8 + 4) = (uint)uVar26;
        uVar20 = (uint)*(byte *)(local_1b8 + 1);
        uVar25 = uVar37;
        if (*(byte *)(local_1b8 + 1) != 0) {
          pbVar27 = (byte *)((long)local_1b8 + 9);
          do {
            uVar25 = uVar25 * 0x89 ^ uVar20;
            uVar20 = (uint)*pbVar27;
            pbVar27 = pbVar27 + 1;
          } while (uVar20 != 0);
        }
        *(uint *)local_1b8 = uVar25;
        local_1b8 = local_1b8 + 9;
      }
      else {
        FUN_71019c1c50((ulong *)&local_1c0,(long)&local_180,(long ****)ppuVar17,param_4,param_5,
                       param_6,param_7,param_8);
      }
      uVar20 = 0x70;
      lVar22 = 9;
      uVar25 = uVar37;
      if (iVar33 == 2) {
        local_180 = (undefined **)0x400000000;
        local_178._0_5_ = 0x325f3170;
        uVar21 = uVar37;
        do {
          uVar21 = uVar21 * 0x89 ^ uVar20;
          uVar20 = (uint)*(byte *)((long)&local_180 + lVar22);
          lVar22 = lVar22 + 1;
        } while (uVar20 != 0);
        local_180 = (undefined **)CONCAT44(4,uVar21);
        if (local_1a0 < ppplStack_198) {
          uVar26 = 0;
          cVar28 = 'p';
          *(uint *)local_1a0 = 0;
          do {
            *(char *)((long)local_1a0 + uVar26 + 8) = cVar28;
            if (0x3e < (int)uVar26 + 1U) {
              uVar26 = (ulong)((int)uVar26 + 1);
              break;
            }
            cVar28 = *(char *)((long)&local_178 + uVar26 + 1);
            if (cVar28 == '\0') {
              uVar26 = uVar26 + 1;
              break;
            }
            *(char *)((long)local_1a0 + uVar26 + 9) = cVar28;
            cVar28 = *(char *)((long)&local_178 + uVar26 + 2);
            uVar26 = uVar26 + 2;
          } while (cVar28 != '\0');
          *(undefined1 *)((long)local_1a0 + (uVar26 & 0xffffffff) + 8) = 0;
          *(uint *)((long)local_1a0 + 4) = (uint)uVar26;
          uVar21 = (uint)*(byte *)(local_1a0 + 1);
          uVar20 = uVar37;
          if (*(byte *)(local_1a0 + 1) != 0) {
            pbVar27 = (byte *)((long)local_1a0 + 9);
            do {
              uVar20 = uVar20 * 0x89 ^ uVar21;
              uVar21 = (uint)*pbVar27;
              pbVar27 = pbVar27 + 1;
            } while (uVar21 != 0);
          }
          *(uint *)local_1a0 = uVar20;
          local_1a0 = local_1a0 + 9;
        }
        else {
          FUN_71019c1c50((ulong *)&local_1a8,(long)&local_180,(long ****)ppuVar17,param_4,param_5,
                         param_6,param_7,param_8);
        }
        uVar21 = 0x70;
        lVar22 = 9;
        local_180 = (undefined **)0x400000000;
        local_178._0_5_ = 0x325f3270;
        uVar20 = uVar37;
        do {
          uVar20 = uVar20 * 0x89 ^ uVar21;
          uVar21 = (uint)*(byte *)((long)&local_180 + lVar22);
          lVar22 = lVar22 + 1;
        } while (uVar21 != 0);
        local_180 = (undefined **)CONCAT44(4,uVar20);
        if (local_1a0 < ppplStack_198) {
          uVar26 = 0;
          cVar28 = 'p';
          *(uint *)local_1a0 = 0;
          do {
            *(char *)((long)local_1a0 + uVar26 + 8) = cVar28;
            if (0x3e < (int)uVar26 + 1U) {
              uVar26 = (ulong)((int)uVar26 + 1);
              break;
            }
            cVar28 = *(char *)((long)&local_178 + uVar26 + 1);
            if (cVar28 == '\0') {
              uVar26 = uVar26 + 1;
              break;
            }
            *(char *)((long)local_1a0 + uVar26 + 9) = cVar28;
            cVar28 = *(char *)((long)&local_178 + uVar26 + 2);
            uVar26 = uVar26 + 2;
          } while (cVar28 != '\0');
          *(undefined1 *)((long)local_1a0 + (uVar26 & 0xffffffff) + 8) = 0;
          *(uint *)((long)local_1a0 + 4) = (uint)uVar26;
          uVar21 = (uint)*(byte *)(local_1a0 + 1);
          uVar20 = uVar37;
          if (*(byte *)(local_1a0 + 1) != 0) {
            pbVar27 = (byte *)((long)local_1a0 + 9);
            do {
              uVar20 = uVar20 * 0x89 ^ uVar21;
              uVar21 = (uint)*pbVar27;
              pbVar27 = pbVar27 + 1;
            } while (uVar21 != 0);
          }
          *(uint *)local_1a0 = uVar20;
          local_1a0 = local_1a0 + 9;
        }
        else {
          FUN_71019c1c50((ulong *)&local_1a8,(long)&local_180,(long ****)ppuVar17,param_4,param_5,
                         param_6,param_7,param_8);
        }
        uVar20 = 0x70;
        lVar22 = 9;
        local_180 = (undefined **)0x400000000;
        local_178._0_5_ = 0x325f3370;
        do {
          uVar25 = uVar25 * 0x89 ^ uVar20;
          uVar20 = (uint)*(byte *)((long)&local_180 + lVar22);
          lVar22 = lVar22 + 1;
        } while (uVar20 != 0);
        if (local_1b8 < local_1b0) {
          uVar26 = 0;
          cVar28 = 'p';
          *(uint *)local_1b8 = 0;
          do {
            *(char *)((long)local_1b8 + uVar26 + 8) = cVar28;
            if (0x3e < (int)uVar26 + 1U) {
              uVar26 = (ulong)((int)uVar26 + 1);
              break;
            }
            cVar28 = *(char *)((long)&local_178 + uVar26 + 1);
            if (cVar28 == '\0') {
              uVar26 = uVar26 + 1;
              break;
            }
            *(char *)((long)local_1b8 + uVar26 + 9) = cVar28;
            cVar28 = *(char *)((long)&local_178 + uVar26 + 2);
            uVar26 = uVar26 + 2;
          } while (cVar28 != '\0');
          *(undefined1 *)((long)local_1b8 + (uVar26 & 0xffffffff) + 8) = 0;
          *(uint *)((long)local_1b8 + 4) = (uint)uVar26;
          uVar20 = (uint)*(byte *)(local_1b8 + 1);
          uVar25 = uVar37;
          if (*(byte *)(local_1b8 + 1) != 0) {
            pbVar27 = (byte *)((long)local_1b8 + 9);
            do {
              uVar25 = uVar25 * 0x89 ^ uVar20;
              uVar20 = (uint)*pbVar27;
              pbVar27 = pbVar27 + 1;
            } while (uVar20 != 0);
          }
          *(uint *)local_1b8 = uVar25;
          local_1b8 = local_1b8 + 9;
        }
        else {
          pppplVar30 = &local_1c0;
LAB_7101b72c40:
          local_178._0_5_ = 0x325f3370;
          local_180 = (undefined **)CONCAT44(4,uVar25);
          FUN_71019c1c50((ulong *)pppplVar30,(long)&local_180,(long ****)ppuVar17,param_4,param_5,
                         param_6,param_7,param_8);
        }
      }
      else {
        local_180 = (undefined **)0x400000000;
        local_178._0_5_ = 0x325f3170;
        uVar21 = uVar37;
        do {
          uVar21 = uVar21 * 0x89 ^ uVar20;
          uVar20 = (uint)*(byte *)((long)&local_180 + lVar22);
          lVar22 = lVar22 + 1;
        } while (uVar20 != 0);
        local_180 = (undefined **)CONCAT44(4,uVar21);
        if (local_1a0 < ppplStack_198) {
          uVar26 = 0;
          cVar28 = 'p';
          *(uint *)local_1a0 = 0;
          do {
            *(char *)((long)local_1a0 + uVar26 + 8) = cVar28;
            if (0x3e < (int)uVar26 + 1U) {
              uVar26 = (ulong)((int)uVar26 + 1);
              break;
            }
            cVar28 = *(char *)((long)&local_178 + uVar26 + 1);
            if (cVar28 == '\0') {
              uVar26 = uVar26 + 1;
              break;
            }
            *(char *)((long)local_1a0 + uVar26 + 9) = cVar28;
            cVar28 = *(char *)((long)&local_178 + uVar26 + 2);
            uVar26 = uVar26 + 2;
          } while (cVar28 != '\0');
          *(undefined1 *)((long)local_1a0 + (uVar26 & 0xffffffff) + 8) = 0;
          *(uint *)((long)local_1a0 + 4) = (uint)uVar26;
          uVar21 = (uint)*(byte *)(local_1a0 + 1);
          uVar20 = uVar37;
          if (*(byte *)(local_1a0 + 1) != 0) {
            pbVar27 = (byte *)((long)local_1a0 + 9);
            do {
              uVar20 = uVar20 * 0x89 ^ uVar21;
              uVar21 = (uint)*pbVar27;
              pbVar27 = pbVar27 + 1;
            } while (uVar21 != 0);
          }
          *(uint *)local_1a0 = uVar20;
          local_1a0 = local_1a0 + 9;
        }
        else {
          FUN_71019c1c50((ulong *)&local_1a8,(long)&local_180,(long ****)ppuVar17,param_4,param_5,
                         param_6,param_7,param_8);
        }
        uVar21 = 0x70;
        lVar22 = 9;
        local_180 = (undefined **)0x400000000;
        local_178._0_5_ = 0x325f3270;
        uVar20 = uVar37;
        do {
          uVar20 = uVar20 * 0x89 ^ uVar21;
          uVar21 = (uint)*(byte *)((long)&local_180 + lVar22);
          lVar22 = lVar22 + 1;
        } while (uVar21 != 0);
        local_180 = (undefined **)CONCAT44(4,uVar20);
        if (local_1a0 < ppplStack_198) {
          uVar26 = 0;
          cVar28 = 'p';
          *(uint *)local_1a0 = 0;
          do {
            *(char *)((long)local_1a0 + uVar26 + 8) = cVar28;
            if (0x3e < (int)uVar26 + 1U) {
              uVar26 = (ulong)((int)uVar26 + 1);
              break;
            }
            cVar28 = *(char *)((long)&local_178 + uVar26 + 1);
            if (cVar28 == '\0') {
              uVar26 = uVar26 + 1;
              break;
            }
            *(char *)((long)local_1a0 + uVar26 + 9) = cVar28;
            cVar28 = *(char *)((long)&local_178 + uVar26 + 2);
            uVar26 = uVar26 + 2;
          } while (cVar28 != '\0');
          *(undefined1 *)((long)local_1a0 + (uVar26 & 0xffffffff) + 8) = 0;
          *(uint *)((long)local_1a0 + 4) = (uint)uVar26;
          uVar21 = (uint)*(byte *)(local_1a0 + 1);
          uVar20 = uVar37;
          if (*(byte *)(local_1a0 + 1) != 0) {
            pbVar27 = (byte *)((long)local_1a0 + 9);
            do {
              uVar20 = uVar20 * 0x89 ^ uVar21;
              uVar21 = (uint)*pbVar27;
              pbVar27 = pbVar27 + 1;
            } while (uVar21 != 0);
          }
          *(uint *)local_1a0 = uVar20;
          local_1a0 = local_1a0 + 9;
        }
        else {
          FUN_71019c1c50((ulong *)&local_1a8,(long)&local_180,(long ****)ppuVar17,param_4,param_5,
                         param_6,param_7,param_8);
        }
        uVar20 = 0x70;
        lVar22 = 9;
        local_180 = (undefined **)0x400000000;
        local_178._0_5_ = 0x325f3370;
        do {
          uVar25 = uVar25 * 0x89 ^ uVar20;
          uVar20 = (uint)*(byte *)((long)&local_180 + lVar22);
          lVar22 = lVar22 + 1;
        } while (uVar20 != 0);
        if (ppplStack_198 <= local_1a0) {
          pppplVar30 = &local_1a8;
          goto LAB_7101b72c40;
        }
        uVar26 = 0;
        cVar28 = 'p';
        *(uint *)local_1a0 = 0;
        do {
          *(char *)((long)local_1a0 + uVar26 + 8) = cVar28;
          if (0x3e < (int)uVar26 + 1U) {
            uVar26 = (ulong)((int)uVar26 + 1);
            break;
          }
          cVar28 = *(char *)((long)&local_178 + uVar26 + 1);
          if (cVar28 == '\0') {
            uVar26 = uVar26 + 1;
            break;
          }
          *(char *)((long)local_1a0 + uVar26 + 9) = cVar28;
          cVar28 = *(char *)((long)&local_178 + uVar26 + 2);
          uVar26 = uVar26 + 2;
        } while (cVar28 != '\0');
        *(undefined1 *)((long)local_1a0 + (uVar26 & 0xffffffff) + 8) = 0;
        *(uint *)((long)local_1a0 + 4) = (uint)uVar26;
        uVar20 = (uint)*(byte *)(local_1a0 + 1);
        uVar25 = uVar37;
        if (*(byte *)(local_1a0 + 1) != 0) {
          pbVar27 = (byte *)((long)local_1a0 + 9);
          do {
            uVar25 = uVar25 * 0x89 ^ uVar20;
            uVar20 = (uint)*pbVar27;
            pbVar27 = pbVar27 + 1;
          } while (uVar20 != 0);
        }
        *(uint *)local_1a0 = uVar25;
        local_1a0 = local_1a0 + 9;
      }
      uVar25 = 0x70;
      lVar22 = 9;
      local_180 = (undefined **)0x400000000;
      local_178 = (char *)CONCAT35(local_178._5_3_,0x325f3470);
      do {
        uVar29 = uVar29 * 0x89 ^ uVar25;
        uVar25 = (uint)*(byte *)((long)&local_180 + lVar22);
        lVar22 = lVar22 + 1;
      } while (uVar25 != 0);
      if (local_1a0 < ppplStack_198) {
        uVar26 = 0;
        cVar28 = 'p';
        *(uint *)local_1a0 = 0;
        do {
          *(char *)((long)local_1a0 + uVar26 + 8) = cVar28;
          if (0x3e < (int)uVar26 + 1U) {
            uVar26 = (ulong)((int)uVar26 + 1);
            break;
          }
          cVar28 = *(char *)((long)&local_178 + uVar26 + 1);
          if (cVar28 == '\0') {
            uVar26 = uVar26 + 1;
            break;
          }
          *(char *)((long)local_1a0 + uVar26 + 9) = cVar28;
          cVar28 = *(char *)((long)&local_178 + uVar26 + 2);
          uVar26 = uVar26 + 2;
        } while (cVar28 != '\0');
        *(undefined1 *)((long)local_1a0 + (uVar26 & 0xffffffff) + 8) = 0;
        *(uint *)((long)local_1a0 + 4) = (uint)uVar26;
        uVar29 = (uint)*(byte *)(local_1a0 + 1);
        uVar25 = 0x811c9dc5;
        if (*(byte *)(local_1a0 + 1) != 0) {
          pbVar27 = (byte *)((long)local_1a0 + 9);
          uVar25 = uVar37;
          do {
            uVar25 = uVar25 * 0x89 ^ uVar29;
            uVar29 = (uint)*pbVar27;
            pbVar27 = pbVar27 + 1;
          } while (uVar29 != 0);
        }
        goto LAB_7101b72de0;
      }
LAB_7101b72d90:
      local_180 = (undefined **)CONCAT44(4,uVar29);
      FUN_71019c1c50((ulong *)&local_1a8,(long)&local_180,(long ****)ppuVar17,param_4,param_5,
                     param_6,param_7,param_8);
    }
    uVar25 = 0x70;
    lVar22 = 9;
    local_180 = (undefined **)0x200000000;
    local_178._0_3_ = 0x3570;
    uVar29 = uVar37;
    do {
      uVar29 = uVar29 * 0x89 ^ uVar25;
      uVar25 = (uint)*(byte *)((long)&local_180 + lVar22);
      lVar22 = lVar22 + 1;
    } while (uVar25 != 0);
    local_180 = (undefined **)CONCAT44(2,uVar29);
    if (local_1a0 < ppplStack_198) {
      uVar26 = 0;
      cVar28 = 'p';
      *(uint *)local_1a0 = 0;
      do {
        *(char *)((long)local_1a0 + uVar26 + 8) = cVar28;
        if (0x3e < (int)uVar26 + 1U) {
          uVar26 = (ulong)((int)uVar26 + 1);
          break;
        }
        cVar28 = *(char *)((long)&local_178 + uVar26 + 1);
        if (cVar28 == '\0') {
          uVar26 = uVar26 + 1;
          break;
        }
        *(char *)((long)local_1a0 + uVar26 + 9) = cVar28;
        cVar28 = *(char *)((long)&local_178 + uVar26 + 2);
        uVar26 = uVar26 + 2;
      } while (cVar28 != '\0');
      *(undefined1 *)((long)local_1a0 + (uVar26 & 0xffffffff) + 8) = 0;
      *(uint *)((long)local_1a0 + 4) = (uint)uVar26;
      uVar25 = (uint)*(byte *)(local_1a0 + 1);
      uVar29 = uVar37;
      if (*(byte *)(local_1a0 + 1) != 0) {
        pbVar27 = (byte *)((long)local_1a0 + 9);
        do {
          uVar29 = uVar29 * 0x89 ^ uVar25;
          uVar25 = (uint)*pbVar27;
          pbVar27 = pbVar27 + 1;
        } while (uVar25 != 0);
      }
      *(uint *)local_1a0 = uVar29;
      local_1a0 = local_1a0 + 9;
    }
    else {
      FUN_71019c1c50((ulong *)&local_1a8,(long)&local_180,(long ****)ppuVar17,param_4,param_5,
                     param_6,param_7,param_8);
    }
    uVar25 = 0x70;
    lVar22 = 9;
    local_180 = (undefined **)0x200000000;
    local_178._0_3_ = 0x3670;
    uVar29 = uVar37;
    do {
      uVar29 = uVar29 * 0x89 ^ uVar25;
      uVar25 = (uint)*(byte *)((long)&local_180 + lVar22);
      lVar22 = lVar22 + 1;
    } while (uVar25 != 0);
    local_180 = (undefined **)CONCAT44(2,uVar29);
    if (local_1a0 < ppplStack_198) {
      uVar26 = 0;
      cVar28 = 'p';
      *(uint *)local_1a0 = 0;
      do {
        *(char *)((long)local_1a0 + uVar26 + 8) = cVar28;
        if (0x3e < (int)uVar26 + 1U) {
          uVar26 = (ulong)((int)uVar26 + 1);
          break;
        }
        cVar28 = *(char *)((long)&local_178 + uVar26 + 1);
        if (cVar28 == '\0') {
          uVar26 = uVar26 + 1;
          break;
        }
        *(char *)((long)local_1a0 + uVar26 + 9) = cVar28;
        cVar28 = *(char *)((long)&local_178 + uVar26 + 2);
        uVar26 = uVar26 + 2;
      } while (cVar28 != '\0');
      *(undefined1 *)((long)local_1a0 + (uVar26 & 0xffffffff) + 8) = 0;
      *(uint *)((long)local_1a0 + 4) = (uint)uVar26;
      uVar25 = (uint)*(byte *)(local_1a0 + 1);
      uVar29 = uVar37;
      if (*(byte *)(local_1a0 + 1) != 0) {
        pbVar27 = (byte *)((long)local_1a0 + 9);
        do {
          uVar29 = uVar29 * 0x89 ^ uVar25;
          uVar25 = (uint)*pbVar27;
          pbVar27 = pbVar27 + 1;
        } while (uVar25 != 0);
      }
      *(uint *)local_1a0 = uVar29;
      local_1a0 = local_1a0 + 9;
    }
    else {
      FUN_71019c1c50((ulong *)&local_1a8,(long)&local_180,(long ****)ppuVar17,param_4,param_5,
                     param_6,param_7,param_8);
    }
    uVar25 = 0x70;
    lVar22 = 9;
    local_180 = (undefined **)0x200000000;
    local_178._0_3_ = 0x3770;
    uVar29 = uVar37;
    do {
      uVar29 = uVar29 * 0x89 ^ uVar25;
      uVar25 = (uint)*(byte *)((long)&local_180 + lVar22);
      lVar22 = lVar22 + 1;
    } while (uVar25 != 0);
    local_180 = (undefined **)CONCAT44(2,uVar29);
    if (local_1a0 < ppplStack_198) {
      uVar26 = 0;
      cVar28 = 'p';
      *(uint *)local_1a0 = 0;
      do {
        *(char *)((long)local_1a0 + uVar26 + 8) = cVar28;
        if (0x3e < (int)uVar26 + 1U) {
          uVar26 = (ulong)((int)uVar26 + 1);
          break;
        }
        cVar28 = *(char *)((long)&local_178 + uVar26 + 1);
        if (cVar28 == '\0') {
          uVar26 = uVar26 + 1;
          break;
        }
        *(char *)((long)local_1a0 + uVar26 + 9) = cVar28;
        cVar28 = *(char *)((long)&local_178 + uVar26 + 2);
        uVar26 = uVar26 + 2;
      } while (cVar28 != '\0');
      *(undefined1 *)((long)local_1a0 + (uVar26 & 0xffffffff) + 8) = 0;
      *(uint *)((long)local_1a0 + 4) = (uint)uVar26;
      uVar25 = (uint)*(byte *)(local_1a0 + 1);
      uVar29 = uVar37;
      if (*(byte *)(local_1a0 + 1) != 0) {
        pbVar27 = (byte *)((long)local_1a0 + 9);
        do {
          uVar29 = uVar29 * 0x89 ^ uVar25;
          uVar25 = (uint)*pbVar27;
          pbVar27 = pbVar27 + 1;
        } while (uVar25 != 0);
      }
      *(uint *)local_1a0 = uVar29;
      local_1a0 = local_1a0 + 9;
    }
    else {
      FUN_71019c1c50((ulong *)&local_1a8,(long)&local_180,(long ****)ppuVar17,param_4,param_5,
                     param_6,param_7,param_8);
    }
    uVar25 = 0x70;
    lVar22 = 9;
    local_180 = (undefined **)0x200000000;
    local_178 = (char *)CONCAT53(local_178._3_5_,0x3870);
    uVar29 = uVar37;
    do {
      uVar29 = uVar29 * 0x89 ^ uVar25;
      uVar25 = (uint)*(byte *)((long)&local_180 + lVar22);
      lVar22 = lVar22 + 1;
    } while (uVar25 != 0);
    local_180 = (undefined **)CONCAT44(2,uVar29);
    iVar33 = iVar11;
    if (local_1a0 < ppplStack_198) {
      uVar26 = 0;
      cVar28 = 'p';
      *(uint *)local_1a0 = 0;
      do {
        *(char *)((long)local_1a0 + uVar26 + 8) = cVar28;
        if (0x3e < (int)uVar26 + 1U) {
          uVar26 = (ulong)((int)uVar26 + 1);
          break;
        }
        cVar28 = *(char *)((long)&local_178 + uVar26 + 1);
        if (cVar28 == '\0') {
          uVar26 = uVar26 + 1;
          break;
        }
        *(char *)((long)local_1a0 + uVar26 + 9) = cVar28;
        cVar28 = *(char *)((long)&local_178 + uVar26 + 2);
        uVar26 = uVar26 + 2;
      } while (cVar28 != '\0');
      *(undefined1 *)((long)local_1a0 + (uVar26 & 0xffffffff) + 8) = 0;
      *(uint *)((long)local_1a0 + 4) = (uint)uVar26;
      uVar25 = (uint)*(byte *)(local_1a0 + 1);
      uVar29 = uVar37;
      if (*(byte *)(local_1a0 + 1) != 0) {
        pbVar27 = (byte *)((long)local_1a0 + 9);
        do {
          uVar29 = uVar29 * 0x89 ^ uVar25;
          uVar25 = (uint)*pbVar27;
          pbVar27 = pbVar27 + 1;
        } while (uVar25 != 0);
      }
      *(uint *)local_1a0 = uVar29;
      local_1a0 = local_1a0 + 9;
    }
    else {
      FUN_71019c1c50((ulong *)&local_1a8,(long)&local_180,(long ****)ppuVar17,param_4,param_5,
                     param_6,param_7,param_8);
    }
    break;
  case 2:
    FUN_7101b781b0(iVar33,&local_1a8,&local_1c0,(byte ****)0x0,(long ****)&DAT_710434a05e,param_6,
                   param_7,param_8);
    FUN_7101b781b0(iVar33,&local_1a8,&local_1c0,(byte ****)0x1,(long ****)&DAT_7104318bcd,param_6,
                   param_7,param_8);
    FUN_7101b781b0(iVar33,&local_1a8,&local_1c0,(byte ****)0x2,(long ****)&DAT_7104454730,param_6,
                   param_7,param_8);
    param_5 = (long ****)&DAT_71042f7f94;
    ppuVar17 = (undefined **)&local_1c0;
    param_4 = (byte ****)0x3;
    FUN_7101b781b0(iVar33,&local_1a8,(long ****)ppuVar17,(byte ****)0x3,(long ****)&DAT_71042f7f94,
                   param_6,param_7,param_8);
    uVar25 = 0x70;
    lVar22 = 9;
    local_180 = (undefined **)0x200000000;
    local_178._0_3_ = 0x3170;
    uVar29 = uVar37;
    do {
      uVar29 = uVar29 * 0x89 ^ uVar25;
      uVar25 = (uint)*(byte *)((long)&local_180 + lVar22);
      lVar22 = lVar22 + 1;
    } while (uVar25 != 0);
    local_180 = (undefined **)CONCAT44(2,uVar29);
    if (local_1b8 < local_1b0) {
      uVar26 = 0;
      cVar28 = 'p';
      *(uint *)local_1b8 = 0;
      do {
        *(char *)((long)local_1b8 + uVar26 + 8) = cVar28;
        if (0x3e < (int)uVar26 + 1U) {
          uVar26 = (ulong)((int)uVar26 + 1);
          break;
        }
        cVar28 = *(char *)((long)&local_178 + uVar26 + 1);
        if (cVar28 == '\0') {
          uVar26 = uVar26 + 1;
          break;
        }
        *(char *)((long)local_1b8 + uVar26 + 9) = cVar28;
        cVar28 = *(char *)((long)&local_178 + uVar26 + 2);
        uVar26 = uVar26 + 2;
      } while (cVar28 != '\0');
      *(undefined1 *)((long)local_1b8 + (uVar26 & 0xffffffff) + 8) = 0;
      *(uint *)((long)local_1b8 + 4) = (uint)uVar26;
      uVar25 = (uint)*(byte *)(local_1b8 + 1);
      uVar29 = uVar37;
      if (*(byte *)(local_1b8 + 1) != 0) {
        pbVar27 = (byte *)((long)local_1b8 + 9);
        do {
          uVar29 = uVar29 * 0x89 ^ uVar25;
          uVar25 = (uint)*pbVar27;
          pbVar27 = pbVar27 + 1;
        } while (uVar25 != 0);
      }
      *(uint *)local_1b8 = uVar29;
      local_1b8 = local_1b8 + 9;
    }
    else {
      FUN_71019c1c50((ulong *)&local_1c0,(long)&local_180,(long ****)ppuVar17,param_4,param_5,
                     param_6,param_7,param_8);
    }
    uVar25 = 0x70;
    lVar22 = 9;
    local_180 = (undefined **)0x200000000;
    local_178._0_3_ = 0x3270;
    uVar29 = uVar37;
    do {
      uVar29 = uVar29 * 0x89 ^ uVar25;
      uVar25 = (uint)*(byte *)((long)&local_180 + lVar22);
      lVar22 = lVar22 + 1;
    } while (uVar25 != 0);
    local_180 = (undefined **)CONCAT44(2,uVar29);
    if (local_1b8 < local_1b0) {
      uVar26 = 0;
      cVar28 = 'p';
      *(uint *)local_1b8 = 0;
      do {
        *(char *)((long)local_1b8 + uVar26 + 8) = cVar28;
        if (0x3e < (int)uVar26 + 1U) {
          uVar26 = (ulong)((int)uVar26 + 1);
          break;
        }
        cVar28 = *(char *)((long)&local_178 + uVar26 + 1);
        if (cVar28 == '\0') {
          uVar26 = uVar26 + 1;
          break;
        }
        *(char *)((long)local_1b8 + uVar26 + 9) = cVar28;
        cVar28 = *(char *)((long)&local_178 + uVar26 + 2);
        uVar26 = uVar26 + 2;
      } while (cVar28 != '\0');
      *(undefined1 *)((long)local_1b8 + (uVar26 & 0xffffffff) + 8) = 0;
      *(uint *)((long)local_1b8 + 4) = (uint)uVar26;
      uVar25 = (uint)*(byte *)(local_1b8 + 1);
      uVar29 = uVar37;
      if (*(byte *)(local_1b8 + 1) != 0) {
        pbVar27 = (byte *)((long)local_1b8 + 9);
        do {
          uVar29 = uVar29 * 0x89 ^ uVar25;
          uVar25 = (uint)*pbVar27;
          pbVar27 = pbVar27 + 1;
        } while (uVar25 != 0);
      }
      *(uint *)local_1b8 = uVar29;
      local_1b8 = local_1b8 + 9;
    }
    else {
      FUN_71019c1c50((ulong *)&local_1c0,(long)&local_180,(long ****)ppuVar17,param_4,param_5,
                     param_6,param_7,param_8);
    }
    uVar25 = 0x70;
    lVar22 = 9;
    local_180 = (undefined **)0x200000000;
    local_178._0_3_ = 0x3370;
    uVar29 = uVar37;
    do {
      uVar29 = uVar29 * 0x89 ^ uVar25;
      uVar25 = (uint)*(byte *)((long)&local_180 + lVar22);
      lVar22 = lVar22 + 1;
    } while (uVar25 != 0);
    local_180 = (undefined **)CONCAT44(2,uVar29);
    if (local_1b8 < local_1b0) {
      uVar26 = 0;
      cVar28 = 'p';
      *(uint *)local_1b8 = 0;
      do {
        *(char *)((long)local_1b8 + uVar26 + 8) = cVar28;
        if (0x3e < (int)uVar26 + 1U) {
          uVar26 = (ulong)((int)uVar26 + 1);
          break;
        }
        cVar28 = *(char *)((long)&local_178 + uVar26 + 1);
        if (cVar28 == '\0') {
          uVar26 = uVar26 + 1;
          break;
        }
        *(char *)((long)local_1b8 + uVar26 + 9) = cVar28;
        cVar28 = *(char *)((long)&local_178 + uVar26 + 2);
        uVar26 = uVar26 + 2;
      } while (cVar28 != '\0');
      *(undefined1 *)((long)local_1b8 + (uVar26 & 0xffffffff) + 8) = 0;
      *(uint *)((long)local_1b8 + 4) = (uint)uVar26;
      uVar25 = (uint)*(byte *)(local_1b8 + 1);
      uVar29 = uVar37;
      if (*(byte *)(local_1b8 + 1) != 0) {
        pbVar27 = (byte *)((long)local_1b8 + 9);
        do {
          uVar29 = uVar29 * 0x89 ^ uVar25;
          uVar25 = (uint)*pbVar27;
          pbVar27 = pbVar27 + 1;
        } while (uVar25 != 0);
      }
      *(uint *)local_1b8 = uVar29;
      local_1b8 = local_1b8 + 9;
    }
    else {
      FUN_71019c1c50((ulong *)&local_1c0,(long)&local_180,(long ****)ppuVar17,param_4,param_5,
                     param_6,param_7,param_8);
    }
    uVar25 = 0x70;
    lVar22 = 9;
    local_180 = (undefined **)0x200000000;
    local_178._0_3_ = 0x3470;
    uVar29 = uVar37;
    do {
      uVar29 = uVar29 * 0x89 ^ uVar25;
      uVar25 = (uint)*(byte *)((long)&local_180 + lVar22);
      lVar22 = lVar22 + 1;
    } while (uVar25 != 0);
    local_180 = (undefined **)CONCAT44(2,uVar29);
    if (local_1b8 < local_1b0) {
      uVar26 = 0;
      cVar28 = 'p';
      *(uint *)local_1b8 = 0;
      do {
        *(char *)((long)local_1b8 + uVar26 + 8) = cVar28;
        if (0x3e < (int)uVar26 + 1U) {
          uVar26 = (ulong)((int)uVar26 + 1);
          break;
        }
        cVar28 = *(char *)((long)&local_178 + uVar26 + 1);
        if (cVar28 == '\0') {
          uVar26 = uVar26 + 1;
          break;
        }
        *(char *)((long)local_1b8 + uVar26 + 9) = cVar28;
        cVar28 = *(char *)((long)&local_178 + uVar26 + 2);
        uVar26 = uVar26 + 2;
      } while (cVar28 != '\0');
      *(undefined1 *)((long)local_1b8 + (uVar26 & 0xffffffff) + 8) = 0;
      *(uint *)((long)local_1b8 + 4) = (uint)uVar26;
      uVar25 = (uint)*(byte *)(local_1b8 + 1);
      uVar29 = uVar37;
      if (*(byte *)(local_1b8 + 1) != 0) {
        pbVar27 = (byte *)((long)local_1b8 + 9);
        do {
          uVar29 = uVar29 * 0x89 ^ uVar25;
          uVar25 = (uint)*pbVar27;
          pbVar27 = pbVar27 + 1;
        } while (uVar25 != 0);
      }
      *(uint *)local_1b8 = uVar29;
      local_1b8 = local_1b8 + 9;
    }
    else {
      FUN_71019c1c50((ulong *)&local_1c0,(long)&local_180,(long ****)ppuVar17,param_4,param_5,
                     param_6,param_7,param_8);
    }
    uVar25 = 0x70;
    lVar22 = 9;
    local_180 = (undefined **)0x200000000;
    local_178._0_3_ = 0x3570;
    uVar29 = uVar37;
    do {
      uVar29 = uVar29 * 0x89 ^ uVar25;
      uVar25 = (uint)*(byte *)((long)&local_180 + lVar22);
      lVar22 = lVar22 + 1;
    } while (uVar25 != 0);
    local_180 = (undefined **)CONCAT44(2,uVar29);
    if (local_1b8 < local_1b0) {
      uVar26 = 0;
      cVar28 = 'p';
      *(uint *)local_1b8 = 0;
      do {
        *(char *)((long)local_1b8 + uVar26 + 8) = cVar28;
        if (0x3e < (int)uVar26 + 1U) {
          uVar26 = (ulong)((int)uVar26 + 1);
          break;
        }
        cVar28 = *(char *)((long)&local_178 + uVar26 + 1);
        if (cVar28 == '\0') {
          uVar26 = uVar26 + 1;
          break;
        }
        *(char *)((long)local_1b8 + uVar26 + 9) = cVar28;
        cVar28 = *(char *)((long)&local_178 + uVar26 + 2);
        uVar26 = uVar26 + 2;
      } while (cVar28 != '\0');
      *(undefined1 *)((long)local_1b8 + (uVar26 & 0xffffffff) + 8) = 0;
      *(uint *)((long)local_1b8 + 4) = (uint)uVar26;
      uVar25 = (uint)*(byte *)(local_1b8 + 1);
      uVar29 = uVar37;
      if (*(byte *)(local_1b8 + 1) != 0) {
        pbVar27 = (byte *)((long)local_1b8 + 9);
        do {
          uVar29 = uVar29 * 0x89 ^ uVar25;
          uVar25 = (uint)*pbVar27;
          pbVar27 = pbVar27 + 1;
        } while (uVar25 != 0);
      }
      *(uint *)local_1b8 = uVar29;
      local_1b8 = local_1b8 + 9;
    }
    else {
      FUN_71019c1c50((ulong *)&local_1c0,(long)&local_180,(long ****)ppuVar17,param_4,param_5,
                     param_6,param_7,param_8);
    }
    uVar25 = 0x70;
    lVar22 = 9;
    local_180 = (undefined **)0x200000000;
    local_178._0_3_ = 0x3670;
    uVar29 = uVar37;
    do {
      uVar29 = uVar29 * 0x89 ^ uVar25;
      uVar25 = (uint)*(byte *)((long)&local_180 + lVar22);
      lVar22 = lVar22 + 1;
    } while (uVar25 != 0);
    local_180 = (undefined **)CONCAT44(2,uVar29);
    if (local_1b8 < local_1b0) {
      uVar26 = 0;
      cVar28 = 'p';
      *(uint *)local_1b8 = 0;
      do {
        *(char *)((long)local_1b8 + uVar26 + 8) = cVar28;
        if (0x3e < (int)uVar26 + 1U) {
          uVar26 = (ulong)((int)uVar26 + 1);
          break;
        }
        cVar28 = *(char *)((long)&local_178 + uVar26 + 1);
        if (cVar28 == '\0') {
          uVar26 = uVar26 + 1;
          break;
        }
        *(char *)((long)local_1b8 + uVar26 + 9) = cVar28;
        cVar28 = *(char *)((long)&local_178 + uVar26 + 2);
        uVar26 = uVar26 + 2;
      } while (cVar28 != '\0');
      *(undefined1 *)((long)local_1b8 + (uVar26 & 0xffffffff) + 8) = 0;
      *(uint *)((long)local_1b8 + 4) = (uint)uVar26;
      uVar25 = (uint)*(byte *)(local_1b8 + 1);
      uVar29 = uVar37;
      if (*(byte *)(local_1b8 + 1) != 0) {
        pbVar27 = (byte *)((long)local_1b8 + 9);
        do {
          uVar29 = uVar29 * 0x89 ^ uVar25;
          uVar25 = (uint)*pbVar27;
          pbVar27 = pbVar27 + 1;
        } while (uVar25 != 0);
      }
      *(uint *)local_1b8 = uVar29;
      local_1b8 = local_1b8 + 9;
    }
    else {
      FUN_71019c1c50((ulong *)&local_1c0,(long)&local_180,(long ****)ppuVar17,param_4,param_5,
                     param_6,param_7,param_8);
    }
    uVar25 = 0x70;
    lVar22 = 9;
    local_180 = (undefined **)0x200000000;
    local_178._0_3_ = 0x3770;
    uVar29 = uVar37;
    do {
      uVar29 = uVar29 * 0x89 ^ uVar25;
      uVar25 = (uint)*(byte *)((long)&local_180 + lVar22);
      lVar22 = lVar22 + 1;
    } while (uVar25 != 0);
    local_180 = (undefined **)CONCAT44(2,uVar29);
    if (local_1b8 < local_1b0) {
      uVar26 = 0;
      cVar28 = 'p';
      *(uint *)local_1b8 = 0;
      do {
        *(char *)((long)local_1b8 + uVar26 + 8) = cVar28;
        if (0x3e < (int)uVar26 + 1U) {
          uVar26 = (ulong)((int)uVar26 + 1);
          break;
        }
        cVar28 = *(char *)((long)&local_178 + uVar26 + 1);
        if (cVar28 == '\0') {
          uVar26 = uVar26 + 1;
          break;
        }
        *(char *)((long)local_1b8 + uVar26 + 9) = cVar28;
        cVar28 = *(char *)((long)&local_178 + uVar26 + 2);
        uVar26 = uVar26 + 2;
      } while (cVar28 != '\0');
      *(undefined1 *)((long)local_1b8 + (uVar26 & 0xffffffff) + 8) = 0;
      *(uint *)((long)local_1b8 + 4) = (uint)uVar26;
      uVar25 = (uint)*(byte *)(local_1b8 + 1);
      uVar29 = uVar37;
      if (*(byte *)(local_1b8 + 1) != 0) {
        pbVar27 = (byte *)((long)local_1b8 + 9);
        do {
          uVar29 = uVar29 * 0x89 ^ uVar25;
          uVar25 = (uint)*pbVar27;
          pbVar27 = pbVar27 + 1;
        } while (uVar25 != 0);
      }
      *(uint *)local_1b8 = uVar29;
      local_1b8 = local_1b8 + 9;
    }
    else {
      FUN_71019c1c50((ulong *)&local_1c0,(long)&local_180,(long ****)ppuVar17,param_4,param_5,
                     param_6,param_7,param_8);
    }
    uVar25 = 0x70;
    lVar22 = 9;
    local_180 = (undefined **)0x200000000;
    local_178 = (char *)CONCAT53(local_178._3_5_,0x3870);
    uVar29 = uVar37;
    do {
      uVar29 = uVar29 * 0x89 ^ uVar25;
      uVar25 = (uint)*(byte *)((long)&local_180 + lVar22);
      lVar22 = lVar22 + 1;
    } while (uVar25 != 0);
    local_180 = (undefined **)CONCAT44(2,uVar29);
    if (local_1b0 <= local_1b8) {
      pppplVar30 = &local_1c0;
      goto LAB_7101b6afe4;
    }
    uVar26 = 0;
    cVar28 = 'p';
    *(uint *)local_1b8 = 0;
    do {
      *(char *)((long)local_1b8 + uVar26 + 8) = cVar28;
      if (0x3e < (int)uVar26 + 1U) {
        uVar26 = (ulong)((int)uVar26 + 1);
        break;
      }
      cVar28 = *(char *)((long)&local_178 + uVar26 + 1);
      if (cVar28 == '\0') {
        uVar26 = uVar26 + 1;
        break;
      }
      *(char *)((long)local_1b8 + uVar26 + 9) = cVar28;
      cVar28 = *(char *)((long)&local_178 + uVar26 + 2);
      uVar26 = uVar26 + 2;
    } while (cVar28 != '\0');
    *(undefined1 *)((long)local_1b8 + (uVar26 & 0xffffffff) + 8) = 0;
    *(uint *)((long)local_1b8 + 4) = (uint)uVar26;
    uVar25 = (uint)*(byte *)(local_1b8 + 1);
    uVar29 = uVar37;
    if (*(byte *)(local_1b8 + 1) != 0) {
      pbVar27 = (byte *)((long)local_1b8 + 9);
      do {
        uVar29 = uVar29 * 0x89 ^ uVar25;
        uVar25 = (uint)*pbVar27;
        pbVar27 = pbVar27 + 1;
      } while (uVar25 != 0);
    }
    *(uint *)local_1b8 = uVar29;
    local_1b8 = local_1b8 + 9;
    break;
  case 3:
    iVar11 = 0;
    do {
      if (iVar11 < iVar33 + -1) {
        FUN_71003a4ca0((uint *)&local_180,"p%d",(ulong)(iVar11 + 1),ppuVar17,param_4,param_5,param_6
                       ,param_7,param_8);
        if (local_1a0 < ppplStack_198) {
          *(uint *)local_1a0 = 0;
          uVar26 = 0;
          do {
            uVar23 = uVar26;
            if (*(char *)((long)&local_178 + uVar26) == '\0') break;
            *(char *)((long)local_1a0 + uVar26 + 8) = *(char *)((long)&local_178 + uVar26);
            cVar28 = *(char *)((long)&local_178 + uVar26 + 1);
            if (cVar28 == '\0') {
              uVar23 = uVar26 + 1;
              break;
            }
            *(char *)((long)local_1a0 + uVar26 + 9) = cVar28;
            cVar28 = *(char *)((long)&local_178 + uVar26 + 2);
            if (cVar28 == '\0') {
              uVar23 = uVar26 + 2;
              break;
            }
            uVar23 = uVar26 + 3;
            *(char *)((long)local_1a0 + uVar26 + 10) = cVar28;
            uVar26 = uVar23;
          } while ((uint)uVar23 < 0x3f);
          *(undefined1 *)((long)local_1a0 + (uVar23 & 0xffffffff) + 8) = 0;
          *(uint *)((long)local_1a0 + 4) = (uint)uVar23;
          uVar25 = (uint)*(byte *)(local_1a0 + 1);
          uVar29 = uVar37;
          if (*(byte *)(local_1a0 + 1) != 0) {
            pbVar27 = (byte *)((long)local_1a0 + 9);
            do {
              uVar29 = uVar29 * 0x89 ^ uVar25;
              uVar25 = (uint)*pbVar27;
              pbVar27 = pbVar27 + 1;
            } while (uVar25 != 0);
          }
          *(uint *)local_1a0 = uVar29;
          local_1a0 = local_1a0 + 9;
        }
        else {
          pppplVar30 = &local_1a8;
LAB_7101b699e8:
          FUN_71019c1c50((ulong *)pppplVar30,(long)&local_180,(long ****)ppuVar17,param_4,param_5,
                         param_6,param_7,param_8);
        }
      }
      else {
        FUN_71003a4ca0((uint *)&local_180,"p%d",(ulong)(iVar11 + 1),ppuVar17,param_4,param_5,param_6
                       ,param_7,param_8);
        if (local_1b0 <= local_1b8) {
          pppplVar30 = &local_1c0;
          goto LAB_7101b699e8;
        }
        *(uint *)local_1b8 = 0;
        uVar26 = 0;
        do {
          uVar23 = uVar26;
          if (*(char *)((long)&local_178 + uVar26) == '\0') break;
          *(char *)((long)local_1b8 + uVar26 + 8) = *(char *)((long)&local_178 + uVar26);
          cVar28 = *(char *)((long)&local_178 + uVar26 + 1);
          if (cVar28 == '\0') {
            uVar23 = uVar26 + 1;
            break;
          }
          *(char *)((long)local_1b8 + uVar26 + 9) = cVar28;
          cVar28 = *(char *)((long)&local_178 + uVar26 + 2);
          if (cVar28 == '\0') {
            uVar23 = uVar26 + 2;
            break;
          }
          uVar23 = uVar26 + 3;
          *(char *)((long)local_1b8 + uVar26 + 10) = cVar28;
          uVar26 = uVar23;
        } while ((uint)uVar23 < 0x3f);
        *(undefined1 *)((long)local_1b8 + (uVar23 & 0xffffffff) + 8) = 0;
        *(uint *)((long)local_1b8 + 4) = (uint)uVar23;
        uVar25 = (uint)*(byte *)(local_1b8 + 1);
        uVar29 = uVar37;
        if (*(byte *)(local_1b8 + 1) != 0) {
          pbVar27 = (byte *)((long)local_1b8 + 9);
          do {
            uVar29 = uVar29 * 0x89 ^ uVar25;
            uVar25 = (uint)*pbVar27;
            pbVar27 = pbVar27 + 1;
          } while (uVar25 != 0);
        }
        *(uint *)local_1b8 = uVar29;
        local_1b8 = local_1b8 + 9;
      }
      if (iVar11 == iVar33 + -1) {
        local_180 = (undefined **)0x700000000;
        lVar22 = 9;
        uVar25 = 0x73;
        local_178 = &DAT_676162646e6173;
        uVar29 = uVar37;
        do {
          uVar29 = uVar29 * 0x89 ^ uVar25;
          uVar25 = (uint)*(byte *)((long)&local_180 + lVar22);
          lVar22 = lVar22 + 1;
        } while (uVar25 != 0);
        local_180 = (undefined **)CONCAT44(7,uVar29);
        if (local_1a0 < ppplStack_198) {
          uVar26 = 0;
          cVar28 = 's';
          *(uint *)local_1a0 = 0;
          do {
            *(char *)((long)local_1a0 + uVar26 + 8) = cVar28;
            cVar28 = *(char *)((long)&local_178 + uVar26 + 1);
            if (cVar28 == '\0') {
              uVar26 = uVar26 + 1;
              break;
            }
            *(char *)((long)local_1a0 + uVar26 + 9) = cVar28;
            cVar28 = *(char *)((long)&local_178 + uVar26 + 2);
            if (cVar28 == '\0') {
              uVar26 = uVar26 + 2;
              break;
            }
            *(char *)((long)local_1a0 + uVar26 + 10) = cVar28;
            if (0x3e < (int)uVar26 + 3U) {
              uVar26 = (ulong)((int)uVar26 + 3);
              break;
            }
            cVar28 = *(char *)((long)&local_178 + uVar26 + 3);
            uVar26 = uVar26 + 3;
          } while (cVar28 != '\0');
          *(undefined1 *)((long)local_1a0 + (uVar26 & 0xffffffff) + 8) = 0;
          *(uint *)((long)local_1a0 + 4) = (uint)uVar26;
          uVar25 = (uint)*(byte *)(local_1a0 + 1);
          uVar29 = uVar37;
          if (*(byte *)(local_1a0 + 1) != 0) {
            pbVar27 = (byte *)((long)local_1a0 + 9);
            do {
              uVar29 = uVar29 * 0x89 ^ uVar25;
              uVar25 = (uint)*pbVar27;
              pbVar27 = pbVar27 + 1;
            } while (uVar25 != 0);
          }
          *(uint *)local_1a0 = uVar29;
          local_1a0 = local_1a0 + 9;
        }
        else {
          FUN_71019c1c50((ulong *)&local_1a8,(long)&local_180,(long ****)ppuVar17,param_4,param_5,
                         param_6,param_7,param_8);
        }
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 != 8);
    uVar25 = 0x70;
    lVar22 = 9;
    local_180 = (undefined **)0x400000000;
    local_178._0_5_ = 0x325f3170;
    uVar29 = uVar37;
    do {
      uVar29 = uVar29 * 0x89 ^ uVar25;
      uVar25 = (uint)*(byte *)((long)&local_180 + lVar22);
      lVar22 = lVar22 + 1;
    } while (uVar25 != 0);
    local_180 = (undefined **)CONCAT44(4,uVar29);
    if (local_1b8 < local_1b0) {
      uVar26 = 0;
      cVar28 = 'p';
      *(uint *)local_1b8 = 0;
      do {
        *(char *)((long)local_1b8 + uVar26 + 8) = cVar28;
        if (0x3e < (int)uVar26 + 1U) {
          uVar26 = (ulong)((int)uVar26 + 1);
          break;
        }
        cVar28 = *(char *)((long)&local_178 + uVar26 + 1);
        if (cVar28 == '\0') {
          uVar26 = uVar26 + 1;
          break;
        }
        *(char *)((long)local_1b8 + uVar26 + 9) = cVar28;
        cVar28 = *(char *)((long)&local_178 + uVar26 + 2);
        uVar26 = uVar26 + 2;
      } while (cVar28 != '\0');
      *(undefined1 *)((long)local_1b8 + (uVar26 & 0xffffffff) + 8) = 0;
      *(uint *)((long)local_1b8 + 4) = (uint)uVar26;
      uVar25 = (uint)*(byte *)(local_1b8 + 1);
      uVar29 = uVar37;
      if (*(byte *)(local_1b8 + 1) != 0) {
        pbVar27 = (byte *)((long)local_1b8 + 9);
        do {
          uVar29 = uVar29 * 0x89 ^ uVar25;
          uVar25 = (uint)*pbVar27;
          pbVar27 = pbVar27 + 1;
        } while (uVar25 != 0);
      }
      *(uint *)local_1b8 = uVar29;
      local_1b8 = local_1b8 + 9;
    }
    else {
      FUN_71019c1c50((ulong *)&local_1c0,(long)&local_180,(long ****)ppuVar17,param_4,param_5,
                     param_6,param_7,param_8);
    }
    uVar25 = 0x70;
    lVar22 = 9;
    local_180 = (undefined **)0x400000000;
    local_178._0_5_ = 0x325f3270;
    uVar29 = uVar37;
    do {
      uVar29 = uVar29 * 0x89 ^ uVar25;
      uVar25 = (uint)*(byte *)((long)&local_180 + lVar22);
      lVar22 = lVar22 + 1;
    } while (uVar25 != 0);
    local_180 = (undefined **)CONCAT44(4,uVar29);
    if (local_1b8 < local_1b0) {
      uVar26 = 0;
      cVar28 = 'p';
      *(uint *)local_1b8 = 0;
      do {
        *(char *)((long)local_1b8 + uVar26 + 8) = cVar28;
        if (0x3e < (int)uVar26 + 1U) {
          uVar26 = (ulong)((int)uVar26 + 1);
          break;
        }
        cVar28 = *(char *)((long)&local_178 + uVar26 + 1);
        if (cVar28 == '\0') {
          uVar26 = uVar26 + 1;
          break;
        }
        *(char *)((long)local_1b8 + uVar26 + 9) = cVar28;
        cVar28 = *(char *)((long)&local_178 + uVar26 + 2);
        uVar26 = uVar26 + 2;
      } while (cVar28 != '\0');
      *(undefined1 *)((long)local_1b8 + (uVar26 & 0xffffffff) + 8) = 0;
      *(uint *)((long)local_1b8 + 4) = (uint)uVar26;
      uVar25 = (uint)*(byte *)(local_1b8 + 1);
      uVar29 = uVar37;
      if (*(byte *)(local_1b8 + 1) != 0) {
        pbVar27 = (byte *)((long)local_1b8 + 9);
        do {
          uVar29 = uVar29 * 0x89 ^ uVar25;
          uVar25 = (uint)*pbVar27;
          pbVar27 = pbVar27 + 1;
        } while (uVar25 != 0);
      }
      *(uint *)local_1b8 = uVar29;
      local_1b8 = local_1b8 + 9;
    }
    else {
      FUN_71019c1c50((ulong *)&local_1c0,(long)&local_180,(long ****)ppuVar17,param_4,param_5,
                     param_6,param_7,param_8);
    }
    uVar25 = 0x70;
    lVar22 = 9;
    local_180 = (undefined **)0x400000000;
    local_178._0_5_ = 0x325f3370;
    uVar29 = uVar37;
    do {
      uVar29 = uVar29 * 0x89 ^ uVar25;
      uVar25 = (uint)*(byte *)((long)&local_180 + lVar22);
      lVar22 = lVar22 + 1;
    } while (uVar25 != 0);
    local_180 = (undefined **)CONCAT44(4,uVar29);
    if (local_1b8 < local_1b0) {
      uVar26 = 0;
      cVar28 = 'p';
      *(uint *)local_1b8 = 0;
      do {
        *(char *)((long)local_1b8 + uVar26 + 8) = cVar28;
        if (0x3e < (int)uVar26 + 1U) {
          uVar26 = (ulong)((int)uVar26 + 1);
          break;
        }
        cVar28 = *(char *)((long)&local_178 + uVar26 + 1);
        if (cVar28 == '\0') {
          uVar26 = uVar26 + 1;
          break;
        }
        *(char *)((long)local_1b8 + uVar26 + 9) = cVar28;
        cVar28 = *(char *)((long)&local_178 + uVar26 + 2);
        uVar26 = uVar26 + 2;
      } while (cVar28 != '\0');
      *(undefined1 *)((long)local_1b8 + (uVar26 & 0xffffffff) + 8) = 0;
      *(uint *)((long)local_1b8 + 4) = (uint)uVar26;
      uVar25 = (uint)*(byte *)(local_1b8 + 1);
      uVar29 = uVar37;
      if (*(byte *)(local_1b8 + 1) != 0) {
        pbVar27 = (byte *)((long)local_1b8 + 9);
        do {
          uVar29 = uVar29 * 0x89 ^ uVar25;
          uVar25 = (uint)*pbVar27;
          pbVar27 = pbVar27 + 1;
        } while (uVar25 != 0);
      }
      *(uint *)local_1b8 = uVar29;
      local_1b8 = local_1b8 + 9;
    }
    else {
      FUN_71019c1c50((ulong *)&local_1c0,(long)&local_180,(long ****)ppuVar17,param_4,param_5,
                     param_6,param_7,param_8);
    }
    uVar25 = 0x70;
    lVar22 = 9;
    local_180 = (undefined **)0x400000000;
    local_178 = (char *)CONCAT35(local_178._5_3_,0x325f3470);
    uVar29 = uVar37;
    do {
      uVar29 = uVar29 * 0x89 ^ uVar25;
      uVar25 = (uint)*(byte *)((long)&local_180 + lVar22);
      lVar22 = lVar22 + 1;
    } while (uVar25 != 0);
    local_180 = (undefined **)CONCAT44(4,uVar29);
    if (local_1b8 < local_1b0) {
      uVar26 = 0;
      cVar28 = 'p';
      *(uint *)local_1b8 = 0;
      do {
        *(char *)((long)local_1b8 + uVar26 + 8) = cVar28;
        if (0x3e < (int)uVar26 + 1U) {
          uVar26 = (ulong)((int)uVar26 + 1);
          break;
        }
        cVar28 = *(char *)((long)&local_178 + uVar26 + 1);
        if (cVar28 == '\0') {
          uVar26 = uVar26 + 1;
          break;
        }
        *(char *)((long)local_1b8 + uVar26 + 9) = cVar28;
        cVar28 = *(char *)((long)&local_178 + uVar26 + 2);
        uVar26 = uVar26 + 2;
      } while (cVar28 != '\0');
      *(undefined1 *)((long)local_1b8 + (uVar26 & 0xffffffff) + 8) = 0;
      *(uint *)((long)local_1b8 + 4) = (uint)uVar26;
      uVar25 = (uint)*(byte *)(local_1b8 + 1);
      uVar29 = uVar37;
      if (*(byte *)(local_1b8 + 1) != 0) {
        pbVar27 = (byte *)((long)local_1b8 + 9);
        do {
          uVar29 = uVar29 * 0x89 ^ uVar25;
          uVar25 = (uint)*pbVar27;
          pbVar27 = pbVar27 + 1;
        } while (uVar25 != 0);
      }
      *(uint *)local_1b8 = uVar29;
      local_1b8 = local_1b8 + 9;
    }
    else {
      FUN_71019c1c50((ulong *)&local_1c0,(long)&local_180,(long ****)ppuVar17,param_4,param_5,
                     param_6,param_7,param_8);
    }
    break;
  default:
    iVar33 = 0;
    goto LAB_7101b6abdc;
  }
joined_r0x007101b7320c:
  ppplVar18 = local_1c0;
  ppplVar35 = local_1b8;
  if ((int)param_3 != 3) {
LAB_7101b6abdc:
    uVar25 = 0x73;
    lVar22 = 9;
    local_180 = (undefined **)0x700000000;
    local_178 = &DAT_676162646e6173;
    uVar29 = uVar37;
    do {
      uVar29 = uVar29 * 0x89 ^ uVar25;
      uVar25 = (uint)*(byte *)((long)&local_180 + lVar22);
      lVar22 = lVar22 + 1;
    } while (uVar25 != 0);
    local_180 = (undefined **)CONCAT44(7,uVar29);
    if (local_1b8 < local_1b0) {
      uVar26 = 0;
      cVar28 = 's';
      *(uint *)local_1b8 = 0;
      do {
        *(char *)((long)local_1b8 + uVar26 + 8) = cVar28;
        if (0x3e < (int)uVar26 + 1U) {
          uVar26 = (ulong)((int)uVar26 + 1);
          break;
        }
        cVar28 = *(char *)((long)&local_178 + uVar26 + 1);
        if (cVar28 == '\0') {
          uVar26 = uVar26 + 1;
          break;
        }
        *(char *)((long)local_1b8 + uVar26 + 9) = cVar28;
        cVar28 = *(char *)((long)&local_178 + uVar26 + 2);
        uVar26 = uVar26 + 2;
      } while (cVar28 != '\0');
      *(undefined1 *)((long)local_1b8 + (uVar26 & 0xffffffff) + 8) = 0;
      uVar29 = (uint)*(byte *)(local_1b8 + 1);
      *(uint *)((long)local_1b8 + 4) = (uint)uVar26;
      if (*(byte *)(local_1b8 + 1) != 0) {
        pbVar27 = (byte *)((long)local_1b8 + 9);
        do {
          uVar37 = uVar37 * 0x89 ^ uVar29;
          uVar29 = (uint)*pbVar27;
          pbVar27 = pbVar27 + 1;
        } while (uVar29 != 0);
      }
      *(uint *)local_1b8 = uVar37;
      local_1b8 = local_1b8 + 9;
      ppplVar18 = local_1c0;
      ppplVar35 = local_1b8;
    }
    else {
      FUN_71019c1c50((ulong *)&local_1c0,(long)&local_180,(long ****)ppuVar17,param_4,param_5,
                     param_6,param_7,param_8);
      ppplVar18 = local_1c0;
      ppplVar35 = local_1b8;
    }
  }
  for (; ppplVar8 = local_1b8, ppplVar18 != local_1b8; ppplVar18 = ppplVar18 + 9) {
    local_1b8 = ppplVar35;
    FUN_7103776910(&local_180,**(long **)(param_1 + 0x10) + 8,(long ****)(ppplVar18 + 1),ppuVar17,
                   param_4,param_5,param_6,param_7,param_8);
    plVar13 = (long *)local_178;
    if (*(long *)local_178 != 0) {
      *(undefined1 *)(*(long *)local_178 + 0x59) = 0;
    }
    local_180 = &PTR_FUN_710523d9a8;
    local_178 = (char *)0x0;
    if (plVar13 != (long *)0x0) {
      FUN_710392eb40((ulong)plVar13);
    }
    ppplVar35 = local_1b8;
    local_1b8 = ppplVar8;
  }
  local_1b8 = ppplVar35;
  if (((DAT_71053144d8 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_71053144d8), iVar11 != 0)) {
    FUN_7101764000();
    ppuVar17 = &PTR_LOOP_7104f17000;
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  ppplVar18 = local_1a8;
  if ((DAT_71052c51b0 - 0x23 < 2) && (ppplVar35 = local_1a0, local_1a0 != local_1a8)) {
    do {
      ppplVar18 = ppplVar35 + -9;
      FUN_7103776910(&local_180,**(long **)(param_1 + 0x10) + 8,(long ****)(ppplVar35 + -8),ppuVar17
                     ,param_4,param_5,param_6,param_7,param_8);
      plVar13 = (long *)local_178;
      lVar22 = *(long *)local_178;
      if ((lVar22 == 0) || (lVar32 = *(long *)(lVar22 + 0x18), lVar32 == 0)) {
        local_180 = &PTR_FUN_710523d9a8;
        local_178 = (char *)0x0;
        if (plVar13 != (long *)0x0) goto LAB_7101b6b144;
      }
      else {
        FUN_7100058290(lVar32,lVar22);
        FUN_7100058250(lVar32,*plVar13);
LAB_7101b6b144:
        local_178 = (char *)0x0;
        local_180 = &PTR_FUN_710523d9a8;
        FUN_710392eb40((ulong)plVar13);
      }
      ppplVar35 = ppplVar18;
    } while (ppplVar18 != local_1a8);
  }
  uVar38 = 0;
  *(int *)(param_1 + 0x6e88) = (int)((ulong)((long)local_1a0 - (long)ppplVar18) >> 3) * 0x38e38e39;
  uVar26 = 0;
  do {
    uVar23 = ((long)local_1a0 - (long)local_1a8 >> 3) * -0x71c71c71c71c71c7;
    if (uVar26 <= uVar23 && uVar23 - uVar26 != 0) {
      ppppbVar1 = (byte ****)(local_1a8 + uVar26 * 9 + 1);
      FUN_7103776910(&local_180,**(long **)(param_1 + 0x10) + 8,(long ****)ppppbVar1,ppuVar17,
                     param_4,param_5,param_6,param_7,param_8);
      plVar13 = (long *)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x200) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar23 = *(ulong *)(lVar22 + 0x208);
        *(long **)(lVar22 + 0x208) = plVar13;
        if (uVar23 != 0) {
          FUN_710392eb40(uVar23);
        }
      }
      plVar13 = (long *)local_178;
      local_180 = &PTR_FUN_710523d9a8;
      local_178 = (char *)0x0;
      if (plVar13 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar13);
      }
      lVar22 = **(long **)(param_1 + uVar26 * 0xd90 + 0x208);
      if (lVar22 != 0) {
        *(char *)(lVar22 + 0x59) = -((long)uVar26 < (long)iVar33);
      }
      FUN_7103776640(&local_1d0,**(long **)(param_1 + 0x10) + 8,ppppbVar1,ppuVar17,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_71037780e0(&local_180,(long)&local_1d0,(long ****)"face_bg",ppuVar17,param_4,param_5,
                     param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x3f0) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x3f8);
        *(ulong *)(lVar22 + 0x3f8) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9e8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_71037780e0(&local_180,(long)&local_1d0,(long ****)"set_dmg_p",ppuVar17,param_4,param_5,
                     param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x400) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x408);
        *(ulong *)(lVar22 + 0x408) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9e8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_71037780e0(&local_180,(long)&local_1d0,(long ****)&DAT_7104329d5b,ppuVar17,param_4,param_5
                     ,param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x410) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x418);
        *(ulong *)(lVar22 + 0x418) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9e8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_71037780e0(&local_180,(long)&local_1d0,(long ****)"dig_0_restore_1",ppuVar17,param_4,
                     param_5,param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x420) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x428);
        *(ulong *)(lVar22 + 0x428) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9e8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_71037780e0(&local_180,(long)&local_1d0,(long ****)"dig_0_restore_2",ppuVar17,param_4,
                     param_5,param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x430) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x438);
        *(ulong *)(lVar22 + 0x438) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9e8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_71037780e0(&local_180,(long)&local_1d0,(long ****)"dig_0_restore_3",ppuVar17,param_4,
                     param_5,param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x440) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x448);
        *(ulong *)(lVar22 + 0x448) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9e8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_71037780e0(&local_180,(long)&local_1d0,(long ****)"dig_1_restore_1",ppuVar17,param_4,
                     param_5,param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x450) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x458);
        *(ulong *)(lVar22 + 0x458) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9e8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_71037780e0(&local_180,(long)&local_1d0,(long ****)"dig_1_restore_2",ppuVar17,param_4,
                     param_5,param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x460) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x468);
        *(ulong *)(lVar22 + 0x468) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9e8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_71037780e0(&local_180,(long)&local_1d0,(long ****)"dig_1_restore_3",ppuVar17,param_4,
                     param_5,param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x470) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x478);
        *(ulong *)(lVar22 + 0x478) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9e8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_71037780e0(&local_180,(long)&local_1d0,(long ****)"dig_2_restore_1",ppuVar17,param_4,
                     param_5,param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x480) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x488);
        *(ulong *)(lVar22 + 0x488) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9e8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_71037780e0(&local_180,(long)&local_1d0,(long ****)"dig_2_restore_2",ppuVar17,param_4,
                     param_5,param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x490) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x498);
        *(ulong *)(lVar22 + 0x498) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9e8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_71037780e0(&local_180,(long)&local_1d0,(long ****)"dig_2_restore_3",ppuVar17,param_4,
                     param_5,param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x4a0) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x4a8);
        *(ulong *)(lVar22 + 0x4a8) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9e8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_71037780e0(&local_180,(long)&local_1d0,(long ****)"dig_3_restore_1",ppuVar17,param_4,
                     param_5,param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x4b0) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x4b8);
        *(ulong *)(lVar22 + 0x4b8) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9e8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_71037780e0(&local_180,(long)&local_1d0,(long ****)"dig_3_restore_2",ppuVar17,param_4,
                     param_5,param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x4c0) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x4c8);
        *(ulong *)(lVar22 + 0x4c8) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9e8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_71037780e0(&local_180,(long)&local_1d0,(long ****)"dig_3_restore_3",ppuVar17,param_4,
                     param_5,param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x4d0) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x4d8);
        *(ulong *)(lVar22 + 0x4d8) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9e8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_71037780e0(&local_180,(long)&local_1d0,(long ****)"dig_dec_01_restore_1",ppuVar17,param_4,
                     param_5,param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x4e0) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x4e8);
        *(ulong *)(lVar22 + 0x4e8) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9e8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_71037780e0(&local_180,(long)&local_1d0,(long ****)"dig_dec_01_restore_2",ppuVar17,param_4,
                     param_5,param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x4f0) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x4f8);
        *(ulong *)(lVar22 + 0x4f8) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9e8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_71037780e0(&local_180,(long)&local_1d0,(long ****)"dig_dec_01_restore_3",ppuVar17,param_4,
                     param_5,param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x500) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x508);
        *(ulong *)(lVar22 + 0x508) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9e8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_71037780e0(&local_180,(long)&local_1d0,(long ****)"num_1",ppuVar17,param_4,param_5,param_6
                     ,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x510) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x518);
        *(ulong *)(lVar22 + 0x518) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9e8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_71037780e0(&local_180,(long)&local_1d0,(long ****)"num_2",ppuVar17,param_4,param_5,param_6
                     ,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x520) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x528);
        *(ulong *)(lVar22 + 0x528) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9e8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_71037780e0(&local_180,(long)&local_1d0,(long ****)"num_3",ppuVar17,param_4,param_5,param_6
                     ,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x530) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x538);
        *(ulong *)(lVar22 + 0x538) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9e8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_71037780e0(&local_180,(long)&local_1d0,(long ****)"num_dec_01",ppuVar17,param_4,param_5,
                     param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x540) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x548);
        *(ulong *)(lVar22 + 0x548) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9e8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_71037780e0(&local_180,(long)&local_1d0,(long ****)"stock",ppuVar17,param_4,param_5,param_6
                     ,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x550) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x558);
        *(ulong *)(lVar22 + 0x558) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9e8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_71037780e0(&local_180,(long)&local_1d0,(long ****)&DAT_7104318be7,ppuVar17,param_4,param_5
                     ,param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x560) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x568);
        *(ulong *)(lVar22 + 0x568) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9e8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_71037780e0(&local_180,(long)&local_1d0,(long ****)&DAT_71043f0699,ppuVar17,param_4,param_5
                     ,param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      puVar2 = (undefined8 *)(param_1 + uVar26 * 0xd90 + 0x570);
      if (puVar2 != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x578);
        *(ulong *)(lVar22 + 0x578) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9e8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_71037780e0(&local_180,(long)&local_1d0,(long ****)&DAT_71042e7589,ppuVar17,param_4,param_5
                     ,param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      puVar14 = (undefined8 *)(param_1 + uVar26 * 0xd90 + 0x580);
      if (puVar14 != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x588);
        *(ulong *)(lVar22 + 0x588) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9e8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_71037780e0(&local_180,(long)&local_1d0,(long ****)"spirits_type",ppuVar17,param_4,param_5,
                     param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x590) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x598);
        *(ulong *)(lVar22 + 0x598) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9e8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_71037780e0(&local_180,(long)&local_1d0,(long ****)"face_bg_anim",ppuVar17,param_4,param_5,
                     param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      puVar3 = (undefined8 *)(param_1 + uVar26 * 0xd90 + 0x5a0);
      if (puVar3 != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x5a8);
        *(ulong *)(lVar22 + 0x5a8) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9e8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_71037780e0(&local_180,(long)&local_1d0,(long ****)"charge_bar",ppuVar17,param_4,param_5,
                     param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x5b0) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x5b8);
        *(ulong *)(lVar22 + 0x5b8) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9e8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_71037780e0(&local_180,(long)&local_1d0,(long ****)"charge",ppuVar17,param_4,param_5,
                     param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x5c0) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x5c8);
        *(ulong *)(lVar22 + 0x5c8) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9e8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_71037780e0(&local_180,(long)&local_1d0,(long ****)"charge_max_off",ppuVar17,param_4,
                     param_5,param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x5d0) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x5d8);
        *(ulong *)(lVar22 + 0x5d8) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9e8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_71037780e0(&local_180,(long)&local_1d0,(long ****)"charge_max_00",ppuVar17,param_4,param_5
                     ,param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x5e0) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x5e8);
        *(ulong *)(lVar22 + 0x5e8) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9e8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_71037780e0(&local_180,(long)&local_1d0,(long ****)"charge_down",ppuVar17,param_4,param_5,
                     param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x5f0) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x5f8);
        *(ulong *)(lVar22 + 0x5f8) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9e8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_71037780e0(&local_180,(long)&local_1d0,(long ****)"charge_lose",ppuVar17,param_4,param_5,
                     param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x600) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x608);
        *(ulong *)(lVar22 + 0x608) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9e8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_71037780e0(&local_180,(long)&local_1d0,(long ****)"limit",ppuVar17,param_4,param_5,param_6
                     ,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x610) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x618);
        *(ulong *)(lVar22 + 0x618) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9e8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_71037780e0(&local_180,(long)&local_1d0,(long ****)"villager",ppuVar17,param_4,param_5,
                     param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x620) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x628);
        *(ulong *)(lVar22 + 0x628) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9e8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_71037780e0(&local_180,(long)&local_1d0,(long ****)&DAT_71042a2d06,ppuVar17,param_4,param_5
                     ,param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x630) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x638);
        *(ulong *)(lVar22 + 0x638) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9e8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_71037780e0(&local_180,(long)&local_1d0,(long ****)"magic",ppuVar17,param_4,param_5,param_6
                     ,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x640) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x648);
        *(ulong *)(lVar22 + 0x648) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9e8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_71037780e0(&local_180,(long)&local_1d0,(long ****)&DAT_7104425e7a,ppuVar17,param_4,param_5
                     ,param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x650) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x658);
        *(ulong *)(lVar22 + 0x658) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9e8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_71037780e0(&local_180,(long)&local_1d0,(long ****)"monad",ppuVar17,param_4,param_5,param_6
                     ,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x660) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x668);
        *(ulong *)(lVar22 + 0x668) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9e8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_71037780e0(&local_180,(long)&local_1d0,(long ****)&DAT_7104453189,ppuVar17,param_4,param_5
                     ,param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x670) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x678);
        *(ulong *)(lVar22 + 0x678) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9e8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_71037780e0(&local_180,(long)&local_1d0,(long ****)"brave",ppuVar17,param_4,param_5,param_6
                     ,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x680) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x688);
        *(ulong *)(lVar22 + 0x688) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9e8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_71037780e0(&local_180,(long)&local_1d0,(long ****)"dolly",ppuVar17,param_4,param_5,param_6
                     ,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x690) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x698);
        *(ulong *)(lVar22 + 0x698) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9e8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_71037780e0(&local_180,(long)&local_1d0,(long ****)"dolly_anim",ppuVar17,param_4,param_5,
                     param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x6a0) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x6a8);
        *(ulong *)(lVar22 + 0x6a8) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9e8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_71037780e0(&local_180,(long)&local_1d0,(long ****)"pickel",ppuVar17,param_4,param_5,
                     param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x6b0) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x6b8);
        *(ulong *)(lVar22 + 0x6b8) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9e8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_71037780e0(&local_180,(long)&local_1d0,(long ****)"demon",ppuVar17,param_4,param_5,param_6
                     ,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x6c0) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x6c8);
        *(ulong *)(lVar22 + 0x6c8) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9e8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_71037780e0(&local_180,(long)&local_1d0,(long ****)"trail",ppuVar17,param_4,param_5,param_6
                     ,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x6d0) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x6d8);
        *(ulong *)(lVar22 + 0x6d8) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9e8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_71037780e0(&local_180,(long)&local_1d0,(long ****)"pointplus_00",ppuVar17,param_4,param_5,
                     param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x6e0) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x6e8);
        *(ulong *)(lVar22 + 0x6e8) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9e8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_71037780e0(&local_180,(long)&local_1d0,(long ****)"pointplus_01",ppuVar17,param_4,param_5,
                     param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x6f0) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x6f8);
        *(ulong *)(lVar22 + 0x6f8) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9e8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_71037780e0(&local_180,(long)&local_1d0,(long ****)"pointminus_00",ppuVar17,param_4,param_5
                     ,param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x700) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x708);
        *(ulong *)(lVar22 + 0x708) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9e8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_71037780e0(&local_180,(long)&local_1d0,(long ****)"pointminus_01",ppuVar17,param_4,param_5
                     ,param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x710) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x718);
        *(ulong *)(lVar22 + 0x718) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9e8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_71037780e0(&local_180,(long)&local_1d0,(long ****)"pointplus_num_00",ppuVar17,param_4,
                     param_5,param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x720) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x728);
        *(ulong *)(lVar22 + 0x728) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9e8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_71037780e0(&local_180,(long)&local_1d0,(long ****)"pointplus_num_01",ppuVar17,param_4,
                     param_5,param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x730) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x738);
        *(ulong *)(lVar22 + 0x738) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9e8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_71037780e0(&local_180,(long)&local_1d0,(long ****)"pointminus_num_00",ppuVar17,param_4,
                     param_5,param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x740) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x748);
        *(ulong *)(lVar22 + 0x748) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9e8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_71037780e0(&local_180,(long)&local_1d0,(long ****)"pointminus_num_01",ppuVar17,param_4,
                     param_5,param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x750) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x758);
        *(ulong *)(lVar22 + 0x758) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9e8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_71037780e0(&local_180,(long)&local_1d0,(long ****)"reach",ppuVar17,param_4,param_5,param_6
                     ,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x760) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x768);
        *(ulong *)(lVar22 + 0x768) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9e8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_71037780e0(&local_180,(long)&local_1d0,(long ****)"coin_num_1",ppuVar17,param_4,param_5,
                     param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x770) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x778);
        *(ulong *)(lVar22 + 0x778) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9e8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_71037780e0(&local_180,(long)&local_1d0,(long ****)"coin_num_2",ppuVar17,param_4,param_5,
                     param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x780) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x788);
        *(ulong *)(lVar22 + 0x788) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9e8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_71037780e0(&local_180,(long)&local_1d0,(long ****)"coin_num_3",ppuVar17,param_4,param_5,
                     param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x790) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x798);
        *(ulong *)(lVar22 + 0x798) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9e8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_71037780e0(&local_180,(long)&local_1d0,(long ****)"pokemon",ppuVar17,param_4,param_5,
                     param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x7a0) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x7a8);
        *(ulong *)(lVar22 + 0x7a8) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9e8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_71037780e0(&local_180,(long)&local_1d0,(long ****)"mii_on",ppuVar17,param_4,param_5,
                     param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x7b0) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x7b8);
        *(ulong *)(lVar22 + 0x7b8) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9e8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_71037780e0(&local_180,(long)&local_1d0,(long ****)"mii_off",ppuVar17,param_4,param_5,
                     param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x7c0) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x7c8);
        *(ulong *)(lVar22 + 0x7c8) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9e8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_71037780e0(&local_180,(long)&local_1d0,(long ****)&DAT_71043ffc53,ppuVar17,param_4,param_5
                     ,param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 2000) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x7d8);
        *(ulong *)(lVar22 + 0x7d8) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9e8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_71037780e0(&local_180,(long)&local_1d0,(long ****)"star_reach",ppuVar17,param_4,param_5,
                     param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x7e0) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x7e8);
        *(ulong *)(lVar22 + 0x7e8) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9e8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_71037780e0(&local_180,(long)&local_1d0,(long ****)"jack_mask_off",ppuVar17,param_4,param_5
                     ,param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x7f0) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x7f8);
        *(ulong *)(lVar22 + 0x7f8) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9e8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_71037780e0(&local_180,(long)&local_1d0,(long ****)"jack_mask_on",ppuVar17,param_4,param_5,
                     param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x800) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x808);
        *(ulong *)(lVar22 + 0x808) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9e8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_710377b010(0x3f800000,(long)puVar14);
      FUN_7103776910(&local_180,(long)&local_1d0,(long ****)"set_txt_00",ppuVar17,param_4,param_5,
                     param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x2f8) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x300);
        *(ulong *)(lVar22 + 0x300) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9a8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_7103776910(&local_180,(long)&local_1d0,(long ****)"set_txt_lv_00",ppuVar17,param_4,param_5
                     ,param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x308) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x310);
        *(ulong *)(lVar22 + 0x310) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9a8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_7103776910(&local_180,(long)&local_1d0,(long ****)"set_txt_score_00",ppuVar17,param_4,
                     param_5,param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x318) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 800);
        *(ulong *)(lVar22 + 800) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9a8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_7103776910(&local_180,(long)&local_1d0,(long ****)"set_rep_00",ppuVar17,param_4,param_5,
                     param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x328) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x330);
        *(ulong *)(lVar22 + 0x330) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9a8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_7103776910(&local_180,(long)&local_1d0,(long ****)"set_rep_03",ppuVar17,param_4,param_5,
                     param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x338) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x340);
        *(ulong *)(lVar22 + 0x340) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9a8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_7103776910(&local_180,(long)&local_1d0,(long ****)"set_rep_stock_00",ppuVar17,param_4,
                     param_5,param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x348) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x350);
        *(ulong *)(lVar22 + 0x350) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9a8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_7103776910(&local_180,(long)&local_1d0,(long ****)"set_rep_stock_01",ppuVar17,param_4,
                     param_5,param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x358) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x360);
        *(ulong *)(lVar22 + 0x360) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9a8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_7103776910(&local_180,(long)&local_1d0,(long ****)"set_rep_stock_02",ppuVar17,param_4,
                     param_5,param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x368) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x370);
        *(ulong *)(lVar22 + 0x370) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9a8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_7103776910(&local_180,(long)&local_1d0,(long ****)"set_rep_stock_03",ppuVar17,param_4,
                     param_5,param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x378) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x380);
        *(ulong *)(lVar22 + 0x380) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9a8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_7103776910(&local_180,(long)&local_1d0,(long ****)"set_rep_stock_04",ppuVar17,param_4,
                     param_5,param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x388) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x390);
        *(ulong *)(lVar22 + 0x390) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9a8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_7103776910(&local_180,(long)&local_1d0,(long ****)"set_txt_stock_00",ppuVar17,param_4,
                     param_5,param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x398) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x3a0);
        *(ulong *)(lVar22 + 0x3a0) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9a8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_7103776910(&local_180,(long)&local_1d0,(long ****)"set_rep_01",ppuVar17,param_4,param_5,
                     param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x3a8) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x3b0);
        *(ulong *)(lVar22 + 0x3b0) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9a8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_7103776910(&local_180,(long)&local_1d0,(long ****)"set_info_alpha",ppuVar17,param_4,
                     param_5,param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x3b8) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x3c0);
        *(ulong *)(lVar22 + 0x3c0) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9a8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_7103776910(&local_180,(long)&local_1d0,(long ****)"set_info_alpha_front",ppuVar17,param_4,
                     param_5,param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x3c8) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x3d0);
        *(ulong *)(lVar22 + 0x3d0) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9a8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      if (((DAT_71053144d8 & 1) == 0) &&
         (iVar11 = __cxa_guard_acquire(&DAT_71053144d8), iVar11 != 0)) {
        FUN_7101764000();
        ppuVar17 = &PTR_LOOP_7104f17000;
        FUN_71000001c0();
        __cxa_guard_release(&DAT_71053144d8);
      }
      if (DAT_71052c51b0 - 0x23 < 2) {
        FUN_7103776910(&local_180,(long)&local_1d0,(long ****)"set_info_alpha_front",ppuVar17,
                       param_4,param_5,param_6,param_7,param_8);
        plVar13 = (long *)local_178;
        lVar22 = *(long *)local_178;
        if (lVar22 != 0) {
          *(undefined8 *)(lVar22 + 0x48) = 0x3fe000003fe00000;
          *(byte *)(lVar22 + 0x58) = *(byte *)(lVar22 + 0x58) | 0x10;
        }
        local_180 = &PTR_FUN_710523d9a8;
        local_178 = (char *)0x0;
        if (plVar13 != (long *)0x0) {
          FUN_710392eb40((ulong)plVar13);
        }
      }
      FUN_7103776910(&local_180,(long)&local_1d0,(long ****)"set_rep_02",ppuVar17,param_4,param_5,
                     param_6,param_7,param_8);
      plVar13 = (long *)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x3d8) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar23 = *(ulong *)(lVar22 + 0x3e0);
        *(long **)(lVar22 + 0x3e0) = plVar13;
        if (uVar23 != 0) {
          FUN_710392eb40(uVar23);
        }
      }
      plVar13 = (long *)local_178;
      local_180 = &PTR_FUN_710523d9a8;
      local_178 = (char *)0x0;
      if (plVar13 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar13);
      }
      FUN_7103776910(&local_180,(long)&local_1d0,(long ****)"set_dmg_num_1",ppuVar17,param_4,param_5
                     ,param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x218) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x220);
        *(ulong *)(lVar22 + 0x220) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9a8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_7103776910(&local_180,(long)&local_1d0,(long ****)"set_dmg_num_2",ppuVar17,param_4,param_5
                     ,param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x228) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x230);
        *(ulong *)(lVar22 + 0x230) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9a8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_7103776910(&local_180,(long)&local_1d0,(long ****)"set_dmg_num_3",ppuVar17,param_4,param_5
                     ,param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x238) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x240);
        *(ulong *)(lVar22 + 0x240) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9a8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_7103776910(&local_180,(long)&local_1d0,(long ****)"set_dmg_num_p",ppuVar17,param_4,param_5
                     ,param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x248) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x250);
        *(ulong *)(lVar22 + 0x250) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9a8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_7103776910(&local_180,(long)&local_1d0,(long ****)"set_dmg_num_dec",ppuVar17,param_4,
                     param_5,param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 600) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x260);
        *(ulong *)(lVar22 + 0x260) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9a8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_7103776910(&local_180,(long)&local_1d0,(long ****)"set_dmg_p",ppuVar17,param_4,param_5,
                     param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x268) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x270);
        *(ulong *)(lVar22 + 0x270) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9a8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_7103776910(&local_180,(long)&local_1d0,(long ****)"set_dmg_hp",ppuVar17,param_4,param_5,
                     param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x278) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x280);
        *(ulong *)(lVar22 + 0x280) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9a8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      ppppppppplVar15 = (long *********)0x0;
      plVar13 = FUN_7103240d30(*(long **)(*(long *)(param_1 + 8) + 0x78),0x71043087c6,(long ****)0x0
                               ,param_4,param_5,param_6,param_7,param_8);
      lVar22 = param_1 + uVar26 * 0xd90;
      FUN_7103778b80(*(long *)(lVar22 + 0x250),(long)plVar13,ppppppppplVar15,param_4,param_5,param_6
                     ,param_7,param_8);
      ppppppppplVar15 = (long *********)0x0;
      plVar13 = FUN_7103240d30(*(long **)(*(long *)(param_1 + 8) + 0x78),0x7104433480,(long ****)0x0
                               ,param_4,param_5,param_6,param_7,param_8);
      FUN_7103778b80(*(long *)(lVar22 + 0x270),(long)plVar13,ppppppppplVar15,param_4,param_5,param_6
                     ,param_7,param_8);
      ppppppppplVar15 = (long *********)0x0;
      plVar13 = FUN_7103240d30(*(long **)(*(long *)(param_1 + 8) + 0x78),0x71042e6e4e,(long ****)0x0
                               ,param_4,param_5,param_6,param_7,param_8);
      FUN_7103778b80(*(long *)(lVar22 + 0x280),(long)plVar13,ppppppppplVar15,param_4,param_5,param_6
                     ,param_7,param_8);
      FUN_7103776910(&local_180,(long)&local_1d0,(long ****)"set_dmg_num_1",ppppppppplVar15,param_4,
                     param_5,param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(lVar22 + 0x290) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x298);
        *(ulong *)(lVar22 + 0x298) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9a8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_7103776910(&local_180,(long)&local_1d0,(long ****)"set_dmg_num_2",ppppppppplVar15,param_4,
                     param_5,param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x2a0) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x2a8);
        *(ulong *)(lVar22 + 0x2a8) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9a8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_7103776910(&local_180,(long)&local_1d0,(long ****)"set_dmg_num_3",ppppppppplVar15,param_4,
                     param_5,param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x2b0) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x2b8);
        *(ulong *)(lVar22 + 0x2b8) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9a8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_7103776910(&local_180,(long)&local_1d0,(long ****)"set_dmg_num_p",ppppppppplVar15,param_4,
                     param_5,param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x2c0) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x2c8);
        *(ulong *)(lVar22 + 0x2c8) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9a8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_7103776910(&local_180,(long)&local_1d0,(long ****)"set_dmg_num_dec",ppppppppplVar15,
                     param_4,param_5,param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x2d0) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x2d8);
        *(ulong *)(lVar22 + 0x2d8) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9a8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_7103776910(&local_180,(long)&local_1d0,(long ****)"dig_0_anim",ppppppppplVar15,param_4,
                     param_5,param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x2e0) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x2e8);
        *(ulong *)(lVar22 + 0x2e8) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9a8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_7103776910(&local_180,(long)&local_1d0,(long ****)"set_fxui_smoke",ppppppppplVar15,param_4
                     ,param_5,param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x818) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x820);
        *(ulong *)(lVar22 + 0x820) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9a8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      plVar13 = FUN_710377aae0((long *)**(undefined8 **)(param_1 + uVar26 * 0xd90 + 0x820));
      if (plVar13 != (long *)0x0) {
        *(undefined4 *)(plVar13 + 0x24) = 0x2000000;
      }
      FUN_7103776910(&local_180,(long)&local_1d0,(long ****)"set_fxui_fire",ppppppppplVar15,param_4,
                     param_5,param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x828) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x830);
        *(ulong *)(lVar22 + 0x830) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9a8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      plVar13 = FUN_710377aae0((long *)**(undefined8 **)(param_1 + uVar26 * 0xd90 + 0x830));
      if (plVar13 != (long *)0x0) {
        *(undefined4 *)(plVar13 + 0x24) = 0x2000000;
      }
      FUN_7103776910(&local_180,(long)&local_1d0,(long ****)"set_fxui_heal",ppppppppplVar15,param_4,
                     param_5,param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x838) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x840);
        *(ulong *)(lVar22 + 0x840) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9a8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      plVar13 = FUN_710377aae0((long *)**(undefined8 **)(param_1 + uVar26 * 0xd90 + 0x840));
      if (plVar13 != (long *)0x0) {
        *(undefined4 *)(plVar13 + 0x24) = 0x2000000;
      }
      FUN_7103776910(&local_180,(long)&local_1d0,(long ****)"set_fxui_final",ppppppppplVar15,param_4
                     ,param_5,param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x848) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x850);
        *(ulong *)(lVar22 + 0x850) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9a8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      plVar13 = FUN_710377aae0((long *)**(undefined8 **)(param_1 + uVar26 * 0xd90 + 0x850));
      if (plVar13 != (long *)0x0) {
        *(undefined4 *)(plVar13 + 0x24) = 0x2000000;
      }
      FUN_7103776910(&local_180,(long)&local_1d0,(long ****)"set_fxui_flash",ppppppppplVar15,param_4
                     ,param_5,param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x858) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x860);
        *(ulong *)(lVar22 + 0x860) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9a8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      plVar13 = FUN_710377aae0((long *)**(undefined8 **)(param_1 + uVar26 * 0xd90 + 0x860));
      if (plVar13 != (long *)0x0) {
        *(undefined4 *)(plVar13 + 0x24) = 0x2000000;
      }
      FUN_7103776910(&local_180,(long)&local_1d0,(long ****)"set_fxui_dead1",ppppppppplVar15,param_4
                     ,param_5,param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x868) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x870);
        *(ulong *)(lVar22 + 0x870) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9a8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      plVar13 = FUN_710377aae0((long *)**(undefined8 **)(param_1 + uVar26 * 0xd90 + 0x870));
      if (plVar13 != (long *)0x0) {
        *(undefined4 *)(plVar13 + 0x24) = 0x2000000;
      }
      FUN_7103776910(&local_180,(long)&local_1d0,(long ****)"set_fxui_dead2",ppppppppplVar15,param_4
                     ,param_5,param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x878) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x880);
        *(ulong *)(lVar22 + 0x880) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9a8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      plVar13 = FUN_710377aae0((long *)**(undefined8 **)(param_1 + uVar26 * 0xd90 + 0x880));
      if (plVar13 != (long *)0x0) {
        *(undefined4 *)(plVar13 + 0x24) = 0x2000000;
      }
      FUN_7103776910(&local_180,(long)&local_1d0,(long ****)"set_fxui_dead3",ppppppppplVar15,param_4
                     ,param_5,param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x888) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x890);
        *(ulong *)(lVar22 + 0x890) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9a8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      plVar13 = FUN_710377aae0((long *)**(undefined8 **)(param_1 + uVar26 * 0xd90 + 0x890));
      if (plVar13 != (long *)0x0) {
        *(undefined4 *)(plVar13 + 0x24) = 0x2000000;
      }
      FUN_7103776910(&local_180,(long)&local_1d0,(long ****)"set_fxui_jack1",ppppppppplVar15,param_4
                     ,param_5,param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x898) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x8a0);
        *(ulong *)(lVar22 + 0x8a0) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9a8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      plVar13 = FUN_710377aae0((long *)**(undefined8 **)(param_1 + uVar26 * 0xd90 + 0x8a0));
      if (plVar13 != (long *)0x0) {
        *(undefined4 *)(plVar13 + 0x24) = 0x2000000;
      }
      FUN_7103776910(&local_180,(long)&local_1d0,(long ****)"set_fxui_jack2",ppppppppplVar15,param_4
                     ,param_5,param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x8a8) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x8b0);
        *(ulong *)(lVar22 + 0x8b0) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9a8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      plVar13 = FUN_710377aae0((long *)**(undefined8 **)(param_1 + uVar26 * 0xd90 + 0x8b0));
      if (plVar13 != (long *)0x0) {
        *(undefined4 *)(plVar13 + 0x24) = 0x2000000;
      }
      FUN_7103776910(&local_180,(long)&local_1d0,(long ****)"set_fxui_jack3",ppppppppplVar15,param_4
                     ,param_5,param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x8b8) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x8c0);
        *(ulong *)(lVar22 + 0x8c0) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9a8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      plVar13 = FUN_710377aae0((long *)**(undefined8 **)(param_1 + uVar26 * 0xd90 + 0x8c0));
      if (plVar13 != (long *)0x0) {
        *(undefined4 *)(plVar13 + 0x24) = 0x2000000;
      }
      FUN_7103776910(&local_180,(long)&local_1d0,(long ****)"set_fxui_jack1_7p",ppppppppplVar15,
                     param_4,param_5,param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x8c8) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x8d0);
        *(ulong *)(lVar22 + 0x8d0) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9a8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      plVar13 = FUN_710377aae0((long *)**(undefined8 **)(param_1 + uVar26 * 0xd90 + 0x8d0));
      if (plVar13 != (long *)0x0) {
        *(undefined4 *)(plVar13 + 0x24) = 0x2000000;
      }
      FUN_7103776910(&local_180,(long)&local_1d0,(long ****)"set_fxui_jack3_7p",ppppppppplVar15,
                     param_4,param_5,param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x8d8) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x8e0);
        *(ulong *)(lVar22 + 0x8e0) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9a8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      plVar13 = FUN_710377aae0((long *)**(undefined8 **)(param_1 + uVar26 * 0xd90 + 0x8e0));
      if (plVar13 != (long *)0x0) {
        *(undefined4 *)(plVar13 + 0x24) = 0x2000000;
      }
      FUN_7103776640(&local_a0,(long)&local_1d0,(byte ****)"sp_00",ppppppppplVar15,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_7103776910(&local_180,(long)&local_a0,(long ****)"set_fxui_sp_get",ppppppppplVar15,param_4
                     ,param_5,param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x8e8) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x8f0);
        *(ulong *)(lVar22 + 0x8f0) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9a8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      puVar14 = local_98;
      local_a0 = (long ***)&PTR_FUN_710523d988;
      local_98 = (undefined8 *)0x0;
      if (puVar14 != (undefined8 *)0x0) {
        uVar23 = *(ulong *)((long)puVar14 + 0x18);
        *(undefined ***)((long)puVar14 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)((long)puVar14 + 0x18) = 0;
        if (uVar23 != 0) {
          FUN_710392eb40(uVar23);
        }
        FUN_710392eb40((ulong)puVar14);
      }
      plVar13 = FUN_710377aae0((long *)**(undefined8 **)(param_1 + uVar26 * 0xd90 + 0x8f0));
      if (plVar13 != (long *)0x0) {
        *(undefined4 *)(plVar13 + 0x24) = 0x2000000;
      }
      FUN_7103776640(&local_a0,(long)&local_1d0,(byte ****)"sp_01",ppppppppplVar15,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_7103776910(&local_180,(long)&local_a0,(long ****)"set_fxui_sp_get",ppppppppplVar15,param_4
                     ,param_5,param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x8f8) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x900);
        *(ulong *)(lVar22 + 0x900) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9a8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      puVar14 = local_98;
      local_a0 = (long ***)&PTR_FUN_710523d988;
      local_98 = (undefined8 *)0x0;
      if (puVar14 != (undefined8 *)0x0) {
        uVar23 = *(ulong *)((long)puVar14 + 0x18);
        *(undefined ***)((long)puVar14 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)((long)puVar14 + 0x18) = 0;
        if (uVar23 != 0) {
          FUN_710392eb40(uVar23);
        }
        FUN_710392eb40((ulong)puVar14);
      }
      plVar13 = FUN_710377aae0((long *)**(undefined8 **)(param_1 + uVar26 * 0xd90 + 0x900));
      if (plVar13 != (long *)0x0) {
        *(undefined4 *)(plVar13 + 0x24) = 0x2000000;
      }
      FUN_7103776640(&local_a0,(long)&local_1d0,(byte ****)"sp_02",ppppppppplVar15,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_7103776910(&local_180,(long)&local_a0,(long ****)"set_fxui_sp_get",ppppppppplVar15,param_4
                     ,param_5,param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x908) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x910);
        *(ulong *)(lVar22 + 0x910) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9a8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      puVar14 = local_98;
      local_a0 = (long ***)&PTR_FUN_710523d988;
      local_98 = (undefined8 *)0x0;
      if (puVar14 != (undefined8 *)0x0) {
        uVar23 = *(ulong *)((long)puVar14 + 0x18);
        *(undefined ***)((long)puVar14 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)((long)puVar14 + 0x18) = 0;
        if (uVar23 != 0) {
          FUN_710392eb40(uVar23);
        }
        FUN_710392eb40((ulong)puVar14);
      }
      plVar13 = FUN_710377aae0((long *)**(undefined8 **)(param_1 + uVar26 * 0xd90 + 0x910));
      if (plVar13 != (long *)0x0) {
        *(undefined4 *)(plVar13 + 0x24) = 0x2000000;
      }
      FUN_7103776640(&local_a0,(long)&local_1d0,(byte ****)"sp_03",ppppppppplVar15,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_7103776910(&local_180,(long)&local_a0,(long ****)"set_fxui_sp_get",ppppppppplVar15,param_4
                     ,param_5,param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x918) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x920);
        *(ulong *)(lVar22 + 0x920) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9a8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      puVar14 = local_98;
      local_a0 = (long ***)&PTR_FUN_710523d988;
      local_98 = (undefined8 *)0x0;
      if (puVar14 != (undefined8 *)0x0) {
        uVar23 = *(ulong *)((long)puVar14 + 0x18);
        *(undefined ***)((long)puVar14 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)((long)puVar14 + 0x18) = 0;
        if (uVar23 != 0) {
          FUN_710392eb40(uVar23);
        }
        FUN_710392eb40((ulong)puVar14);
      }
      plVar13 = FUN_710377aae0((long *)**(undefined8 **)(param_1 + uVar26 * 0xd90 + 0x920));
      if (plVar13 != (long *)0x0) {
        *(undefined4 *)(plVar13 + 0x24) = 0x2000000;
      }
      FUN_7103776640(&local_a0,(long)&local_1d0,(byte ****)"sp_00",ppppppppplVar15,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_7103776910(&local_180,(long)&local_a0,(long ****)"set_fxui_sp_use",ppppppppplVar15,param_4
                     ,param_5,param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x928) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x930);
        *(ulong *)(lVar22 + 0x930) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9a8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      puVar14 = local_98;
      local_a0 = (long ***)&PTR_FUN_710523d988;
      local_98 = (undefined8 *)0x0;
      if (puVar14 != (undefined8 *)0x0) {
        uVar23 = *(ulong *)((long)puVar14 + 0x18);
        *(undefined ***)((long)puVar14 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)((long)puVar14 + 0x18) = 0;
        if (uVar23 != 0) {
          FUN_710392eb40(uVar23);
        }
        FUN_710392eb40((ulong)puVar14);
      }
      plVar13 = FUN_710377aae0((long *)**(undefined8 **)(param_1 + uVar26 * 0xd90 + 0x930));
      if (plVar13 != (long *)0x0) {
        *(undefined4 *)(plVar13 + 0x24) = 0x2000000;
      }
      FUN_7103776640(&local_a0,(long)&local_1d0,(byte ****)"sp_01",ppppppppplVar15,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_7103776910(&local_180,(long)&local_a0,(long ****)"set_fxui_sp_use",ppppppppplVar15,param_4
                     ,param_5,param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x938) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x940);
        *(ulong *)(lVar22 + 0x940) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9a8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      puVar14 = local_98;
      local_a0 = (long ***)&PTR_FUN_710523d988;
      local_98 = (undefined8 *)0x0;
      if (puVar14 != (undefined8 *)0x0) {
        uVar23 = *(ulong *)((long)puVar14 + 0x18);
        *(undefined ***)((long)puVar14 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)((long)puVar14 + 0x18) = 0;
        if (uVar23 != 0) {
          FUN_710392eb40(uVar23);
        }
        FUN_710392eb40((ulong)puVar14);
      }
      plVar13 = FUN_710377aae0((long *)**(undefined8 **)(param_1 + uVar26 * 0xd90 + 0x940));
      if (plVar13 != (long *)0x0) {
        *(undefined4 *)(plVar13 + 0x24) = 0x2000000;
      }
      FUN_7103776640(&local_a0,(long)&local_1d0,(byte ****)"sp_02",ppppppppplVar15,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_7103776910(&local_180,(long)&local_a0,(long ****)"set_fxui_sp_use",ppppppppplVar15,param_4
                     ,param_5,param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x948) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x950);
        *(ulong *)(lVar22 + 0x950) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9a8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      puVar14 = local_98;
      local_a0 = (long ***)&PTR_FUN_710523d988;
      local_98 = (undefined8 *)0x0;
      if (puVar14 != (undefined8 *)0x0) {
        uVar23 = *(ulong *)((long)puVar14 + 0x18);
        *(undefined ***)((long)puVar14 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)((long)puVar14 + 0x18) = 0;
        if (uVar23 != 0) {
          FUN_710392eb40(uVar23);
        }
        FUN_710392eb40((ulong)puVar14);
      }
      plVar13 = FUN_710377aae0((long *)**(undefined8 **)(param_1 + uVar26 * 0xd90 + 0x950));
      if (plVar13 != (long *)0x0) {
        *(undefined4 *)(plVar13 + 0x24) = 0x2000000;
      }
      FUN_7103776640(&local_a0,(long)&local_1d0,(byte ****)"sp_03",ppppppppplVar15,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_7103776910(&local_180,(long)&local_a0,(long ****)"set_fxui_sp_use",ppppppppplVar15,param_4
                     ,param_5,param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x958) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x960);
        *(ulong *)(lVar22 + 0x960) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9a8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      puVar14 = local_98;
      local_a0 = (long ***)&PTR_FUN_710523d988;
      local_98 = (undefined8 *)0x0;
      if (puVar14 != (undefined8 *)0x0) {
        uVar23 = *(ulong *)((long)puVar14 + 0x18);
        *(undefined ***)((long)puVar14 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)((long)puVar14 + 0x18) = 0;
        if (uVar23 != 0) {
          FUN_710392eb40(uVar23);
        }
        FUN_710392eb40((ulong)puVar14);
      }
      plVar13 = FUN_710377aae0((long *)**(undefined8 **)(param_1 + uVar26 * 0xd90 + 0x960));
      if (plVar13 != (long *)0x0) {
        *(undefined4 *)(plVar13 + 0x24) = 0x2000000;
      }
      FUN_7103776640(&local_180,(long)&local_1d0,(byte ****)&DAT_71042a2d06,ppppppppplVar15,param_4,
                     param_5,param_6,param_7,param_8);
      FUN_71037780e0(&local_a0,(long)&local_180,(long ****)"ko_guage",ppppppppplVar15,param_4,
                     param_5,param_6,param_7,param_8);
      puVar14 = local_98;
      if ((long ****)(param_1 + uVar26 * 0xd90 + 0xaa0) != &local_a0) {
        lVar22 = param_1 + uVar26 * 0xd90;
        **(undefined8 **)(lVar22 + 0xaa8) = *local_98;
        *(undefined8 *)(*(long *)(lVar22 + 0xaa8) + 8) = local_98[1];
        *(undefined1 *)(*(long *)(lVar22 + 0xaa8) + 0x10) = *(undefined1 *)(local_98 + 2);
      }
      local_a0 = (long ***)&PTR_FUN_710523d9e8;
      local_98 = (undefined8 *)0x0;
      if (puVar14 != (undefined8 *)0x0) {
        FUN_710392eb40((ulong)puVar14);
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d988;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        uVar12 = *(ulong *)(uVar23 + 0x18);
        *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar23 + 0x18) = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        FUN_710392eb40(uVar23);
      }
      FUN_7103776640(&local_180,(long)&local_1d0,(byte ****)&DAT_71042a2d06,ppppppppplVar15,param_4,
                     param_5,param_6,param_7,param_8);
      FUN_71037780e0(&local_a0,(long)&local_180,(long ****)"ko_guage_max",ppppppppplVar15,param_4,
                     param_5,param_6,param_7,param_8);
      puVar14 = local_98;
      if ((long ****)(param_1 + uVar26 * 0xd90 + 0xab0) != &local_a0) {
        lVar22 = param_1 + uVar26 * 0xd90;
        **(undefined8 **)(lVar22 + 0xab8) = *local_98;
        *(undefined8 *)(*(long *)(lVar22 + 0xab8) + 8) = local_98[1];
        *(undefined1 *)(*(long *)(lVar22 + 0xab8) + 0x10) = *(undefined1 *)(local_98 + 2);
      }
      local_a0 = (long ***)&PTR_FUN_710523d9e8;
      bVar7 = local_98 != (undefined8 *)0x0;
      local_98 = (undefined8 *)0;
      if (bVar7) {
        local_98 = (undefined8 *)0x0;
        local_a0 = (long ***)&PTR_FUN_710523d9e8;
        FUN_710392eb40((ulong)puVar14);
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d988;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        uVar12 = *(ulong *)(uVar23 + 0x18);
        *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar23 + 0x18) = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        FUN_710392eb40(uVar23);
      }
      FUN_7103776640(&local_a0,(long)&local_1d0,(byte ****)&DAT_71042a2d06,ppppppppplVar15,param_4,
                     param_5,param_6,param_7,param_8);
      FUN_7103776910(&local_180,(long)&local_a0,(long ****)"set_ko_max_00",ppppppppplVar15,param_4,
                     param_5,param_6,param_7,param_8);
      ppppppppplVar15 = (long *********)0x0;
      plVar13 = FUN_7103240d30(*(long **)(*(long *)(param_1 + 8) + 0x78),0x71043dfdfc,(long ****)0x0
                               ,param_4,param_5,param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      FUN_7103778b80((long)local_178,(long)plVar13,ppppppppplVar15,param_4,param_5,param_6,param_7,
                     param_8);
      local_180 = &PTR_FUN_710523d9a8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_7103776910(&local_180,(long)&local_a0,(long ****)"set_ko_max_01",ppppppppplVar15,param_4,
                     param_5,param_6,param_7,param_8);
      ppppppppplVar15 = (long *********)0x0;
      plVar13 = FUN_7103240d30(*(long **)(*(long *)(param_1 + 8) + 0x78),0x710436c055,(long ****)0x0
                               ,param_4,param_5,param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      FUN_7103778b80((long)local_178,(long)plVar13,ppppppppplVar15,param_4,param_5,param_6,param_7,
                     param_8);
      local_180 = &PTR_FUN_710523d9a8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      puVar14 = local_98;
      local_a0 = (long ***)&PTR_FUN_710523d988;
      local_98 = (undefined8 *)0x0;
      if (puVar14 != (undefined8 *)0x0) {
        uVar23 = *(ulong *)((long)puVar14 + 0x18);
        *(undefined ***)((long)puVar14 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)((long)puVar14 + 0x18) = 0;
        if (uVar23 != 0) {
          FUN_710392eb40(uVar23);
        }
        FUN_710392eb40((ulong)puVar14);
      }
      FUN_7103776640(&local_180,(long)&local_1d0,(byte ****)"set_parts_villager",ppppppppplVar15,
                     param_4,param_5,param_6,param_7,param_8);
      FUN_71037780e0(&local_a0,(long)&local_180,(long ****)"in_all",ppppppppplVar15,param_4,param_5,
                     param_6,param_7,param_8);
      puVar14 = local_98;
      if ((long ****)(param_1 + uVar26 * 0xd90 + 0xac8) != &local_a0) {
        lVar22 = param_1 + uVar26 * 0xd90;
        **(undefined8 **)(lVar22 + 0xad0) = *local_98;
        *(undefined8 *)(*(long *)(lVar22 + 0xad0) + 8) = local_98[1];
        *(undefined1 *)(*(long *)(lVar22 + 0xad0) + 0x10) = *(undefined1 *)(local_98 + 2);
      }
      local_a0 = (long ***)&PTR_FUN_710523d9e8;
      bVar7 = local_98 != (undefined8 *)0x0;
      local_98 = (undefined8 *)0x0;
      if (bVar7) {
        local_98 = (undefined8 *)0x0;
        local_a0 = (long ***)&PTR_FUN_710523d9e8;
        FUN_710392eb40((ulong)puVar14);
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d988;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        uVar12 = *(ulong *)(uVar23 + 0x18);
        *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar23 + 0x18) = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        FUN_710392eb40(uVar23);
      }
      FUN_7103776640(&local_180,(long)&local_1d0,(byte ****)"set_parts_villager",ppppppppplVar15,
                     param_4,param_5,param_6,param_7,param_8);
      FUN_71037780e0(&local_a0,(long)&local_180,(long ****)"item_on",ppppppppplVar15,param_4,param_5
                     ,param_6,param_7,param_8);
      puVar14 = local_98;
      if ((long ****)(param_1 + uVar26 * 0xd90 + 0xad8) != &local_a0) {
        lVar22 = param_1 + uVar26 * 0xd90;
        **(undefined8 **)(lVar22 + 0xae0) = *local_98;
        *(undefined8 *)(*(long *)(lVar22 + 0xae0) + 8) = local_98[1];
        *(undefined1 *)(*(long *)(lVar22 + 0xae0) + 0x10) = *(undefined1 *)(local_98 + 2);
      }
      local_a0 = (long ***)&PTR_FUN_710523d9e8;
      bVar7 = local_98 != (undefined8 *)0x0;
      local_98 = (undefined8 *)0x0;
      if (bVar7) {
        local_98 = (undefined8 *)0x0;
        local_a0 = (long ***)&PTR_FUN_710523d9e8;
        FUN_710392eb40((ulong)puVar14);
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d988;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        uVar12 = *(ulong *)(uVar23 + 0x18);
        *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar23 + 0x18) = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        FUN_710392eb40(uVar23);
      }
      FUN_7103776640(&local_180,(long)&local_1d0,(byte ****)"set_parts_villager",ppppppppplVar15,
                     param_4,param_5,param_6,param_7,param_8);
      FUN_71037780e0(&local_a0,(long)&local_180,(long ****)"item_drop",ppppppppplVar15,param_4,
                     param_5,param_6,param_7,param_8);
      puVar14 = local_98;
      if ((long ****)(param_1 + uVar26 * 0xd90 + 0xae8) != &local_a0) {
        lVar22 = param_1 + uVar26 * 0xd90;
        **(undefined8 **)(lVar22 + 0xaf0) = *local_98;
        *(undefined8 *)(*(long *)(lVar22 + 0xaf0) + 8) = local_98[1];
        *(undefined1 *)(*(long *)(lVar22 + 0xaf0) + 0x10) = *(undefined1 *)(local_98 + 2);
      }
      local_a0 = (long ***)&PTR_FUN_710523d9e8;
      bVar7 = local_98 != (undefined8 *)0x0;
      local_98 = (undefined8 *)0x0;
      if (bVar7) {
        local_98 = (undefined8 *)0x0;
        local_a0 = (long ***)&PTR_FUN_710523d9e8;
        FUN_710392eb40((ulong)puVar14);
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d988;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        uVar12 = *(ulong *)(uVar23 + 0x18);
        *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar23 + 0x18) = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        FUN_710392eb40(uVar23);
      }
      FUN_7103776640(&local_180,(long)&local_1d0,(byte ****)"set_parts_villager",ppppppppplVar15,
                     param_4,param_5,param_6,param_7,param_8);
      FUN_71037780e0(&local_a0,(long)&local_180,(long ****)"out_all",ppppppppplVar15,param_4,param_5
                     ,param_6,param_7,param_8);
      puVar14 = local_98;
      if ((long ****)(param_1 + uVar26 * 0xd90 + 0xaf8) != &local_a0) {
        lVar22 = param_1 + uVar26 * 0xd90;
        **(undefined8 **)(lVar22 + 0xb00) = *local_98;
        *(undefined8 *)(*(long *)(lVar22 + 0xb00) + 8) = local_98[1];
        *(undefined1 *)(*(long *)(lVar22 + 0xb00) + 0x10) = *(undefined1 *)(local_98 + 2);
      }
      local_a0 = (long ***)&PTR_FUN_710523d9e8;
      bVar7 = local_98 != (undefined8 *)0x0;
      local_98 = (undefined8 *)0x0;
      if (bVar7) {
        local_98 = (undefined8 *)0x0;
        local_a0 = (long ***)&PTR_FUN_710523d9e8;
        FUN_710392eb40((ulong)puVar14);
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d988;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        uVar12 = *(ulong *)(uVar23 + 0x18);
        *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar23 + 0x18) = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        FUN_710392eb40(uVar23);
      }
      FUN_7103776640(&local_180,(long)&local_1d0,(byte ****)"set_parts_villager",ppppppppplVar15,
                     param_4,param_5,param_6,param_7,param_8);
      FUN_7103776910(&local_a0,(long)&local_180,(long ****)"set_rep_icon",ppppppppplVar15,param_4,
                     param_5,param_6,param_7,param_8);
      puVar14 = local_98;
      if ((long ****)(param_1 + uVar26 * 0xd90 + 0xa88) != &local_a0) {
        lVar22 = param_1 + uVar26 * 0xd90;
        **(undefined8 **)(lVar22 + 0xa90) = *local_98;
        *(undefined8 *)(*(long *)(lVar22 + 0xa90) + 8) = local_98[1];
        *(undefined8 *)(*(long *)(lVar22 + 0xa90) + 0x10) = local_98[2];
        *(undefined8 *)(*(long *)(lVar22 + 0xa90) + 0x18) = local_98[3];
      }
      local_a0 = (long ***)&PTR_FUN_710523d9a8;
      bVar7 = local_98 != (undefined8 *)0x0;
      local_98 = (undefined8 *)0x0;
      if (bVar7) {
        local_98 = (undefined8 *)0x0;
        local_a0 = (long ***)&PTR_FUN_710523d9a8;
        FUN_710392eb40((ulong)puVar14);
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d988;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        uVar12 = *(ulong *)(uVar23 + 0x18);
        *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar23 + 0x18) = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        FUN_710392eb40(uVar23);
      }
      FUN_7103776640(&local_180,(long)&local_1d0,(byte ****)"limit",ppppppppplVar15,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_71037780e0(&local_a0,(long)&local_180,(long ****)"limit_guage",ppppppppplVar15,param_4,
                     param_5,param_6,param_7,param_8);
      puVar14 = local_98;
      if ((long ****)(param_1 + uVar26 * 0xd90 + 0xb10) != &local_a0) {
        lVar22 = param_1 + uVar26 * 0xd90;
        **(undefined8 **)(lVar22 + 0xb18) = *local_98;
        *(undefined8 *)(*(long *)(lVar22 + 0xb18) + 8) = local_98[1];
        *(undefined1 *)(*(long *)(lVar22 + 0xb18) + 0x10) = *(undefined1 *)(local_98 + 2);
      }
      local_a0 = (long ***)&PTR_FUN_710523d9e8;
      bVar7 = local_98 != (undefined8 *)0x0;
      local_98 = (undefined8 *)0x0;
      if (bVar7) {
        local_98 = (undefined8 *)0x0;
        local_a0 = (long ***)&PTR_FUN_710523d9e8;
        FUN_710392eb40((ulong)puVar14);
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d988;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        uVar12 = *(ulong *)(uVar23 + 0x18);
        *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar23 + 0x18) = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        FUN_710392eb40(uVar23);
      }
      FUN_7103776640(&local_180,(long)&local_1d0,(byte ****)"limit",ppppppppplVar15,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_71037780e0(&local_a0,(long)&local_180,(long ****)"limit_guage_max",ppppppppplVar15,param_4
                     ,param_5,param_6,param_7,param_8);
      puVar14 = local_98;
      if ((long ****)(param_1 + uVar26 * 0xd90 + 0xb20) != &local_a0) {
        lVar22 = param_1 + uVar26 * 0xd90;
        **(undefined8 **)(lVar22 + 0xb28) = *local_98;
        *(undefined8 *)(*(long *)(lVar22 + 0xb28) + 8) = local_98[1];
        *(undefined1 *)(*(long *)(lVar22 + 0xb28) + 0x10) = *(undefined1 *)(local_98 + 2);
      }
      local_a0 = (long ***)&PTR_FUN_710523d9e8;
      bVar7 = local_98 != (undefined8 *)0x0;
      local_98 = (undefined8 *)0;
      if (bVar7) {
        local_98 = (undefined8 *)0x0;
        local_a0 = (long ***)&PTR_FUN_710523d9e8;
        FUN_710392eb40((ulong)puVar14);
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d988;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        uVar12 = *(ulong *)(uVar23 + 0x18);
        *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar23 + 0x18) = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        FUN_710392eb40(uVar23);
      }
      FUN_7103776640(&local_180,(long)&local_1d0,(byte ****)"limit",ppppppppplVar15,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_7103776910(&local_a0,(long)&local_180,(long ****)"set_bg",ppppppppplVar15,param_4,param_5,
                     param_6,param_7,param_8);
      ppppppppplVar15 = (long *********)0x0;
      plVar13 = FUN_7103240d30(*(long **)(*(long *)(param_1 + 8) + 0x78),0x7104432da8,(long ****)0x0
                               ,param_4,param_5,param_6,param_7,param_8);
      puVar14 = local_98;
      FUN_7103778b80((long)local_98,(long)plVar13,ppppppppplVar15,param_4,param_5,param_6,param_7,
                     param_8);
      local_a0 = (long ***)&PTR_FUN_710523d9a8;
      local_98 = (undefined8 *)0x0;
      if (puVar14 != (undefined8 *)0x0) {
        FUN_710392eb40((ulong)puVar14);
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d988;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        uVar12 = *(ulong *)(uVar23 + 0x18);
        *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar23 + 0x18) = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        FUN_710392eb40(uVar23);
      }
      FUN_7103776640(&local_180,(long)&local_1d0,(byte ****)"magic",ppppppppplVar15,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_71037780e0(&local_a0,(long)&local_180,(long ****)"magic_charge",ppppppppplVar15,param_4,
                     param_5,param_6,param_7,param_8);
      puVar14 = local_98;
      if ((long ****)(param_1 + uVar26 * 0xd90 + 0xb38) != &local_a0) {
        lVar22 = param_1 + uVar26 * 0xd90;
        **(undefined8 **)(lVar22 + 0xb40) = *local_98;
        *(undefined8 *)(*(long *)(lVar22 + 0xb40) + 8) = local_98[1];
        *(undefined1 *)(*(long *)(lVar22 + 0xb40) + 0x10) = *(undefined1 *)(local_98 + 2);
      }
      local_a0 = (long ***)&PTR_FUN_710523d9e8;
      bVar7 = local_98 != (undefined8 *)0x0;
      local_98 = (undefined8 *)0x0;
      if (bVar7) {
        local_98 = (undefined8 *)0x0;
        local_a0 = (long ***)&PTR_FUN_710523d9e8;
        FUN_710392eb40((ulong)puVar14);
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d988;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        uVar12 = *(ulong *)(uVar23 + 0x18);
        *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar23 + 0x18) = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        FUN_710392eb40(uVar23);
      }
      FUN_7103776640(&local_180,(long)&local_1d0,(byte ****)"magic",ppppppppplVar15,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_71037780e0(&local_a0,(long)&local_180,(long ****)"magic_sword",ppppppppplVar15,param_4,
                     param_5,param_6,param_7,param_8);
      puVar14 = local_98;
      if ((long ****)(param_1 + uVar26 * 0xd90 + 0xb48) != &local_a0) {
        lVar22 = param_1 + uVar26 * 0xd90;
        **(undefined8 **)(lVar22 + 0xb50) = *local_98;
        *(undefined8 *)(*(long *)(lVar22 + 0xb50) + 8) = local_98[1];
        *(undefined1 *)(*(long *)(lVar22 + 0xb50) + 0x10) = *(undefined1 *)(local_98 + 2);
      }
      local_a0 = (long ***)&PTR_FUN_710523d9e8;
      bVar7 = local_98 != (undefined8 *)0x0;
      local_98 = (undefined8 *)0x0;
      if (bVar7) {
        local_98 = (undefined8 *)0x0;
        local_a0 = (long ***)&PTR_FUN_710523d9e8;
        FUN_710392eb40((ulong)puVar14);
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d988;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        uVar12 = *(ulong *)(uVar23 + 0x18);
        *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar23 + 0x18) = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        FUN_710392eb40(uVar23);
      }
      FUN_7103776640(&local_180,(long)&local_1d0,(byte ****)"magic",ppppppppplVar15,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_71037780e0(&local_a0,(long)&local_180,(long ****)"magic_thunder",ppppppppplVar15,param_4,
                     param_5,param_6,param_7,param_8);
      puVar14 = local_98;
      if ((long ****)(param_1 + uVar26 * 0xd90 + 0xb58) != &local_a0) {
        lVar22 = param_1 + uVar26 * 0xd90;
        **(undefined8 **)(lVar22 + 0xb60) = *local_98;
        *(undefined8 *)(*(long *)(lVar22 + 0xb60) + 8) = local_98[1];
        *(undefined1 *)(*(long *)(lVar22 + 0xb60) + 0x10) = *(undefined1 *)(local_98 + 2);
      }
      local_a0 = (long ***)&PTR_FUN_710523d9e8;
      bVar7 = local_98 != (undefined8 *)0x0;
      local_98 = (undefined8 *)0x0;
      if (bVar7) {
        local_98 = (undefined8 *)0x0;
        local_a0 = (long ***)&PTR_FUN_710523d9e8;
        FUN_710392eb40((ulong)puVar14);
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d988;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        uVar12 = *(ulong *)(uVar23 + 0x18);
        *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar23 + 0x18) = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        FUN_710392eb40(uVar23);
      }
      FUN_7103776640(&local_180,(long)&local_1d0,(byte ****)"magic",ppppppppplVar15,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_71037780e0(&local_a0,(long)&local_180,(long ****)"magic_fire",ppppppppplVar15,param_4,
                     param_5,param_6,param_7,param_8);
      puVar14 = local_98;
      if ((long ****)(param_1 + uVar26 * 0xd90 + 0xb68) != &local_a0) {
        lVar22 = param_1 + uVar26 * 0xd90;
        **(undefined8 **)(lVar22 + 0xb70) = *local_98;
        *(undefined8 *)(*(long *)(lVar22 + 0xb70) + 8) = local_98[1];
        *(undefined1 *)(*(long *)(lVar22 + 0xb70) + 0x10) = *(undefined1 *)(local_98 + 2);
      }
      local_a0 = (long ***)&PTR_FUN_710523d9e8;
      bVar7 = local_98 != (undefined8 *)0x0;
      local_98 = (undefined8 *)0x0;
      if (bVar7) {
        local_98 = (undefined8 *)0x0;
        local_a0 = (long ***)&PTR_FUN_710523d9e8;
        FUN_710392eb40((ulong)puVar14);
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d988;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        uVar12 = *(ulong *)(uVar23 + 0x18);
        *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar23 + 0x18) = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        FUN_710392eb40(uVar23);
      }
      FUN_7103776640(&local_180,(long)&local_1d0,(byte ****)"magic",ppppppppplVar15,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_71037780e0(&local_a0,(long)&local_180,(long ****)"magic_wind",ppppppppplVar15,param_4,
                     param_5,param_6,param_7,param_8);
      puVar14 = local_98;
      if ((long ****)(param_1 + uVar26 * 0xd90 + 0xb78) != &local_a0) {
        lVar22 = param_1 + uVar26 * 0xd90;
        **(undefined8 **)(lVar22 + 0xb80) = *local_98;
        *(undefined8 *)(*(long *)(lVar22 + 0xb80) + 8) = local_98[1];
        *(undefined1 *)(*(long *)(lVar22 + 0xb80) + 0x10) = *(undefined1 *)(local_98 + 2);
      }
      local_a0 = (long ***)&PTR_FUN_710523d9e8;
      bVar7 = local_98 != (undefined8 *)0x0;
      local_98 = (undefined8 *)0x0;
      if (bVar7) {
        local_98 = (undefined8 *)0x0;
        local_a0 = (long ***)&PTR_FUN_710523d9e8;
        FUN_710392eb40((ulong)puVar14);
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d988;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        uVar12 = *(ulong *)(uVar23 + 0x18);
        *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar23 + 0x18) = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        FUN_710392eb40(uVar23);
      }
      FUN_7103776640(&local_180,(long)&local_1d0,(byte ****)"magic",ppppppppplVar15,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_71037780e0(&local_a0,(long)&local_180,(long ****)"magic_rizaia",ppppppppplVar15,param_4,
                     param_5,param_6,param_7,param_8);
      puVar14 = local_98;
      if ((long ****)(param_1 + uVar26 * 0xd90 + 0xb88) != &local_a0) {
        lVar22 = param_1 + uVar26 * 0xd90;
        **(undefined8 **)(lVar22 + 0xb90) = *local_98;
        *(undefined8 *)(*(long *)(lVar22 + 0xb90) + 8) = local_98[1];
        *(undefined1 *)(*(long *)(lVar22 + 0xb90) + 0x10) = *(undefined1 *)(local_98 + 2);
      }
      local_a0 = (long ***)&PTR_FUN_710523d9e8;
      bVar7 = local_98 != (undefined8 *)0x0;
      local_98 = (undefined8 *)0x0;
      if (bVar7) {
        local_98 = (undefined8 *)0x0;
        local_a0 = (long ***)&PTR_FUN_710523d9e8;
        FUN_710392eb40((ulong)puVar14);
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d988;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        uVar12 = *(ulong *)(uVar23 + 0x18);
        *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar23 + 0x18) = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        FUN_710392eb40(uVar23);
      }
      FUN_7103776640(&local_180,(long)&local_1d0,(byte ****)"magic",ppppppppplVar15,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_71037780e0(&local_a0,(long)&local_180,(long ****)"magic_icon",ppppppppplVar15,param_4,
                     param_5,param_6,param_7,param_8);
      puVar14 = local_98;
      if ((long ****)(param_1 + uVar26 * 0xd90 + 0xb98) != &local_a0) {
        lVar22 = param_1 + uVar26 * 0xd90;
        **(undefined8 **)(lVar22 + 0xba0) = *local_98;
        *(undefined8 *)(*(long *)(lVar22 + 0xba0) + 8) = local_98[1];
        *(undefined1 *)(*(long *)(lVar22 + 0xba0) + 0x10) = *(undefined1 *)(local_98 + 2);
      }
      local_a0 = (long ***)&PTR_FUN_710523d9e8;
      bVar7 = local_98 != (undefined8 *)0x0;
      local_98 = (undefined8 *)0x0;
      if (bVar7) {
        local_98 = (undefined8 *)0x0;
        local_a0 = (long ***)&PTR_FUN_710523d9e8;
        FUN_710392eb40((ulong)puVar14);
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d988;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        uVar12 = *(ulong *)(uVar23 + 0x18);
        *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar23 + 0x18) = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        FUN_710392eb40(uVar23);
      }
      FUN_7103776640(&local_180,(long)&local_1d0,(byte ****)"magic",ppppppppplVar15,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_71037780e0(&local_a0,(long)&local_180,(long ****)"magic_max_flash",ppppppppplVar15,param_4
                     ,param_5,param_6,param_7,param_8);
      puVar14 = local_98;
      if ((long ****)(param_1 + uVar26 * 0xd90 + 0xba8) != &local_a0) {
        lVar22 = param_1 + uVar26 * 0xd90;
        **(undefined8 **)(lVar22 + 0xbb0) = *local_98;
        *(undefined8 *)(*(long *)(lVar22 + 0xbb0) + 8) = local_98[1];
        *(undefined1 *)(*(long *)(lVar22 + 0xbb0) + 0x10) = *(undefined1 *)(local_98 + 2);
      }
      local_a0 = (long ***)&PTR_FUN_710523d9e8;
      local_98 = (undefined8 *)0x0;
      if (puVar14 != (undefined8 *)0x0) {
        FUN_710392eb40((ulong)puVar14);
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d988;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        uVar12 = *(ulong *)(uVar23 + 0x18);
        *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar23 + 0x18) = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        FUN_710392eb40(uVar23);
      }
      FUN_7103776640(&local_180,(long)&local_1d0,(byte ****)&DAT_7104425e7a,ppppppppplVar15,param_4,
                     param_5,param_6,param_7,param_8);
      FUN_71037780e0(&local_a0,(long)&local_180,(long ****)"ink_guage",ppppppppplVar15,param_4,
                     param_5,param_6,param_7,param_8);
      puVar14 = local_98;
      if ((long ****)(param_1 + uVar26 * 0xd90 + 0xbc0) != &local_a0) {
        lVar22 = param_1 + uVar26 * 0xd90;
        **(undefined8 **)(lVar22 + 0xbc8) = *local_98;
        *(undefined8 *)(*(long *)(lVar22 + 0xbc8) + 8) = local_98[1];
        *(undefined1 *)(*(long *)(lVar22 + 0xbc8) + 0x10) = *(undefined1 *)(local_98 + 2);
      }
      local_a0 = (long ***)&PTR_FUN_710523d9e8;
      bVar7 = local_98 != (undefined8 *)0x0;
      local_98 = (undefined8 *)0x0;
      if (bVar7) {
        local_98 = (undefined8 *)0x0;
        local_a0 = (long ***)&PTR_FUN_710523d9e8;
        FUN_710392eb40((ulong)puVar14);
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d988;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        uVar12 = *(ulong *)(uVar23 + 0x18);
        *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar23 + 0x18) = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        FUN_710392eb40(uVar23);
      }
      FUN_7103776640(&local_180,(long)&local_1d0,(byte ****)&DAT_7104425e7a,ppppppppplVar15,param_4,
                     param_5,param_6,param_7,param_8);
      FUN_71037780e0(&local_a0,(long)&local_180,(long ****)"ink_guage_max",ppppppppplVar15,param_4,
                     param_5,param_6,param_7,param_8);
      puVar14 = local_98;
      if ((long ****)(param_1 + uVar26 * 0xd90 + 0xbd0) != &local_a0) {
        lVar22 = param_1 + uVar26 * 0xd90;
        **(undefined8 **)(lVar22 + 0xbd8) = *local_98;
        *(undefined8 *)(*(long *)(lVar22 + 0xbd8) + 8) = local_98[1];
        *(undefined1 *)(*(long *)(lVar22 + 0xbd8) + 0x10) = *(undefined1 *)(local_98 + 2);
      }
      local_a0 = (long ***)&PTR_FUN_710523d9e8;
      bVar7 = local_98 != (undefined8 *)0x0;
      local_98 = (undefined8 *)0x0;
      if (bVar7) {
        local_98 = (undefined8 *)0x0;
        local_a0 = (long ***)&PTR_FUN_710523d9e8;
        FUN_710392eb40((ulong)puVar14);
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d988;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        uVar12 = *(ulong *)(uVar23 + 0x18);
        *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar23 + 0x18) = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        FUN_710392eb40(uVar23);
      }
      FUN_7103776640(&local_180,(long)&local_1d0,(byte ****)&DAT_7104425e7a,ppppppppplVar15,param_4,
                     param_5,param_6,param_7,param_8);
      FUN_71037780e0(&local_a0,(long)&local_180,(long ****)"ink_guage_up",ppppppppplVar15,param_4,
                     param_5,param_6,param_7,param_8);
      puVar14 = local_98;
      if ((long ****)(param_1 + uVar26 * 0xd90 + 0xbe0) != &local_a0) {
        lVar22 = param_1 + uVar26 * 0xd90;
        **(undefined8 **)(lVar22 + 0xbe8) = *local_98;
        *(undefined8 *)(*(long *)(lVar22 + 0xbe8) + 8) = local_98[1];
        *(undefined1 *)(*(long *)(lVar22 + 0xbe8) + 0x10) = *(undefined1 *)(local_98 + 2);
      }
      local_a0 = (long ***)&PTR_FUN_710523d9e8;
      bVar7 = local_98 != (undefined8 *)0x0;
      local_98 = (undefined8 *)0x0;
      if (bVar7) {
        local_98 = (undefined8 *)0x0;
        local_a0 = (long ***)&PTR_FUN_710523d9e8;
        FUN_710392eb40((ulong)puVar14);
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d988;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        uVar12 = *(ulong *)(uVar23 + 0x18);
        *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar23 + 0x18) = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        FUN_710392eb40(uVar23);
      }
      FUN_7103776640(&local_180,(long)&local_1d0,(byte ****)&DAT_7104425e7a,ppppppppplVar15,param_4,
                     param_5,param_6,param_7,param_8);
      FUN_71037780e0(&local_a0,(long)&local_180,(long ****)"ink_guage_down",ppppppppplVar15,param_4,
                     param_5,param_6,param_7,param_8);
      puVar14 = local_98;
      if ((long ****)(param_1 + uVar26 * 0xd90 + 0xbf0) != &local_a0) {
        lVar22 = param_1 + uVar26 * 0xd90;
        **(undefined8 **)(lVar22 + 0xbf8) = *local_98;
        *(undefined8 *)(*(long *)(lVar22 + 0xbf8) + 8) = local_98[1];
        *(undefined1 *)(*(long *)(lVar22 + 0xbf8) + 0x10) = *(undefined1 *)(local_98 + 2);
      }
      local_a0 = (long ***)&PTR_FUN_710523d9e8;
      bVar7 = local_98 != (undefined8 *)0x0;
      local_98 = (undefined8 *)0x0;
      if (bVar7) {
        local_98 = (undefined8 *)0x0;
        local_a0 = (long ***)&PTR_FUN_710523d9e8;
        FUN_710392eb40((ulong)puVar14);
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d988;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        uVar12 = *(ulong *)(uVar23 + 0x18);
        *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar23 + 0x18) = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        FUN_710392eb40(uVar23);
      }
      FUN_7103776640(&local_180,(long)&local_1d0,(byte ****)&DAT_7104425e7a,ppppppppplVar15,param_4,
                     param_5,param_6,param_7,param_8);
      FUN_71037780e0(&local_a0,(long)&local_180,(long ****)"ink_sub_charge_max",ppppppppplVar15,
                     param_4,param_5,param_6,param_7,param_8);
      puVar14 = local_98;
      if ((long ****)(param_1 + uVar26 * 0xd90 + 0xc00) != &local_a0) {
        lVar22 = param_1 + uVar26 * 0xd90;
        **(undefined8 **)(lVar22 + 0xc08) = *local_98;
        *(undefined8 *)(*(long *)(lVar22 + 0xc08) + 8) = local_98[1];
        *(undefined1 *)(*(long *)(lVar22 + 0xc08) + 0x10) = *(undefined1 *)(local_98 + 2);
      }
      local_a0 = (long ***)&PTR_FUN_710523d9e8;
      bVar7 = local_98 != (undefined8 *)0x0;
      local_98 = (undefined8 *)0x0;
      if (bVar7) {
        local_98 = (undefined8 *)0x0;
        local_a0 = (long ***)&PTR_FUN_710523d9e8;
        FUN_710392eb40((ulong)puVar14);
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d988;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        uVar12 = *(ulong *)(uVar23 + 0x18);
        *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar23 + 0x18) = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        FUN_710392eb40(uVar23);
      }
      FUN_7103776640(&local_180,(long)&local_1d0,(byte ****)&DAT_7104425e7a,ppppppppplVar15,param_4,
                     param_5,param_6,param_7,param_8);
      FUN_71037780e0(&local_a0,(long)&local_180,(long ****)"ink_sub_csr",ppppppppplVar15,param_4,
                     param_5,param_6,param_7,param_8);
      puVar14 = local_98;
      if ((long ****)(param_1 + uVar26 * 0xd90 + 0xc10) != &local_a0) {
        lVar22 = param_1 + uVar26 * 0xd90;
        **(undefined8 **)(lVar22 + 0xc18) = *local_98;
        *(undefined8 *)(*(long *)(lVar22 + 0xc18) + 8) = local_98[1];
        *(undefined1 *)(*(long *)(lVar22 + 0xc18) + 0x10) = *(undefined1 *)(local_98 + 2);
      }
      local_a0 = (long ***)&PTR_FUN_710523d9e8;
      bVar7 = local_98 != (undefined8 *)0x0;
      local_98 = (undefined8 *)0x0;
      if (bVar7) {
        local_98 = (undefined8 *)0x0;
        local_a0 = (long ***)&PTR_FUN_710523d9e8;
        FUN_710392eb40((ulong)puVar14);
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d988;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        uVar12 = *(ulong *)(uVar23 + 0x18);
        *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar23 + 0x18) = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        FUN_710392eb40(uVar23);
      }
      FUN_7103776640(&local_180,(long)&local_1d0,(byte ****)&DAT_7104425e7a,ppppppppplVar15,param_4,
                     param_5,param_6,param_7,param_8);
      FUN_71037780e0(&local_a0,(long)&local_180,(long ****)"ink_all",ppppppppplVar15,param_4,param_5
                     ,param_6,param_7,param_8);
      puVar14 = local_98;
      if ((long ****)(param_1 + uVar26 * 0xd90 + 0xc20) != &local_a0) {
        lVar22 = param_1 + uVar26 * 0xd90;
        **(undefined8 **)(lVar22 + 0xc28) = *local_98;
        *(undefined8 *)(*(long *)(lVar22 + 0xc28) + 8) = local_98[1];
        *(undefined1 *)(*(long *)(lVar22 + 0xc28) + 0x10) = *(undefined1 *)(local_98 + 2);
      }
      local_a0 = (long ***)&PTR_FUN_710523d9e8;
      bVar7 = local_98 != (undefined8 *)0x0;
      local_98 = (undefined8 *)0x0;
      if (bVar7) {
        local_98 = (undefined8 *)0x0;
        local_a0 = (long ***)&PTR_FUN_710523d9e8;
        FUN_710392eb40((ulong)puVar14);
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d988;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        uVar12 = *(ulong *)(uVar23 + 0x18);
        *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar23 + 0x18) = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        FUN_710392eb40(uVar23);
      }
      FUN_7103776640(&local_180,(long)&local_1d0,(byte ****)&DAT_7104425e7a,ppppppppplVar15,param_4,
                     param_5,param_6,param_7,param_8);
      FUN_71037780e0(&local_a0,(long)&local_180,(long ****)"ink_empty",ppppppppplVar15,param_4,
                     param_5,param_6,param_7,param_8);
      puVar14 = local_98;
      if ((long ****)(param_1 + uVar26 * 0xd90 + 0xc30) != &local_a0) {
        lVar22 = param_1 + uVar26 * 0xd90;
        **(undefined8 **)(lVar22 + 0xc38) = *local_98;
        *(undefined8 *)(*(long *)(lVar22 + 0xc38) + 8) = local_98[1];
        *(undefined1 *)(*(long *)(lVar22 + 0xc38) + 0x10) = *(undefined1 *)(local_98 + 2);
      }
      local_a0 = (long ***)&PTR_FUN_710523d9e8;
      bVar7 = local_98 != (undefined8 *)0x0;
      local_98 = (undefined8 *)0x0;
      if (bVar7) {
        local_98 = (undefined8 *)0x0;
        local_a0 = (long ***)&PTR_FUN_710523d9e8;
        FUN_710392eb40((ulong)puVar14);
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d988;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        uVar12 = *(ulong *)(uVar23 + 0x18);
        *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar23 + 0x18) = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        FUN_710392eb40(uVar23);
      }
      FUN_7103776640(&local_180,(long)&local_1d0,(byte ****)&DAT_7104425e7a,ppppppppplVar15,param_4,
                     param_5,param_6,param_7,param_8);
      FUN_71037780e0(&local_a0,(long)&local_180,(long ****)"ink_bg",ppppppppplVar15,param_4,param_5,
                     param_6,param_7,param_8);
      puVar14 = local_98;
      if ((long ****)(param_1 + uVar26 * 0xd90 + 0xc40) != &local_a0) {
        lVar22 = param_1 + uVar26 * 0xd90;
        **(undefined8 **)(lVar22 + 0xc48) = *local_98;
        *(undefined8 *)(*(long *)(lVar22 + 0xc48) + 8) = local_98[1];
        *(undefined1 *)(*(long *)(lVar22 + 0xc48) + 0x10) = *(undefined1 *)(local_98 + 2);
      }
      local_a0 = (long ***)&PTR_FUN_710523d9e8;
      bVar7 = local_98 != (undefined8 *)0x0;
      local_98 = (undefined8 *)0x0;
      if (bVar7) {
        local_98 = (undefined8 *)0x0;
        local_a0 = (long ***)&PTR_FUN_710523d9e8;
        FUN_710392eb40((ulong)puVar14);
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d988;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        uVar12 = *(ulong *)(uVar23 + 0x18);
        *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar23 + 0x18) = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        FUN_710392eb40(uVar23);
      }
      FUN_7103776640(&local_180,(long)&local_1d0,(byte ****)&DAT_7104425e7a,ppppppppplVar15,param_4,
                     param_5,param_6,param_7,param_8);
      FUN_71037780e0(&local_a0,(long)&local_180,(long ****)"ink_csr",ppppppppplVar15,param_4,param_5
                     ,param_6,param_7,param_8);
      puVar14 = local_98;
      if ((long ****)(param_1 + uVar26 * 0xd90 + 0xc50) != &local_a0) {
        lVar22 = param_1 + uVar26 * 0xd90;
        **(undefined8 **)(lVar22 + 0xc58) = *local_98;
        *(undefined8 *)(*(long *)(lVar22 + 0xc58) + 8) = local_98[1];
        *(undefined1 *)(*(long *)(lVar22 + 0xc58) + 0x10) = *(undefined1 *)(local_98 + 2);
      }
      local_a0 = (long ***)&PTR_FUN_710523d9e8;
      local_98 = (undefined8 *)0x0;
      if (puVar14 != (undefined8 *)0x0) {
        FUN_710392eb40((ulong)puVar14);
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d988;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        uVar12 = *(ulong *)(uVar23 + 0x18);
        *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar23 + 0x18) = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        FUN_710392eb40(uVar23);
      }
      FUN_7103776640(&local_180,(long)&local_1d0,(byte ****)"monad",ppppppppplVar15,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_71037780e0(&local_a0,(long)&local_180,(long ****)"gauge_all_off",ppppppppplVar15,param_4,
                     param_5,param_6,param_7,param_8);
      puVar14 = local_98;
      if ((long ****)(param_1 + uVar26 * 0xd90 + 0xc68) != &local_a0) {
        lVar22 = param_1 + uVar26 * 0xd90;
        **(undefined8 **)(lVar22 + 0xc70) = *local_98;
        *(undefined8 *)(*(long *)(lVar22 + 0xc70) + 8) = local_98[1];
        *(undefined1 *)(*(long *)(lVar22 + 0xc70) + 0x10) = *(undefined1 *)(local_98 + 2);
      }
      local_a0 = (long ***)&PTR_FUN_710523d9e8;
      bVar7 = local_98 != (undefined8 *)0x0;
      local_98 = (undefined8 *)0x0;
      if (bVar7) {
        local_98 = (undefined8 *)0x0;
        local_a0 = (long ***)&PTR_FUN_710523d9e8;
        FUN_710392eb40((ulong)puVar14);
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d988;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        uVar12 = *(ulong *)(uVar23 + 0x18);
        *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar23 + 0x18) = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        FUN_710392eb40(uVar23);
      }
      FUN_7103776640(&local_180,(long)&local_1d0,(byte ****)"monad",ppppppppplVar15,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_71037780e0(&local_a0,(long)&local_180,(long ****)"gauge_all_on",ppppppppplVar15,param_4,
                     param_5,param_6,param_7,param_8);
      puVar14 = local_98;
      if ((long ****)(param_1 + uVar26 * 0xd90 + 0xc78) != &local_a0) {
        lVar22 = param_1 + uVar26 * 0xd90;
        **(undefined8 **)(lVar22 + 0xc80) = *local_98;
        *(undefined8 *)(*(long *)(lVar22 + 0xc80) + 8) = local_98[1];
        *(undefined1 *)(*(long *)(lVar22 + 0xc80) + 0x10) = *(undefined1 *)(local_98 + 2);
      }
      local_a0 = (long ***)&PTR_FUN_710523d9e8;
      bVar7 = local_98 != (undefined8 *)0x0;
      local_98 = (undefined8 *)0x0;
      if (bVar7) {
        local_98 = (undefined8 *)0x0;
        local_a0 = (long ***)&PTR_FUN_710523d9e8;
        FUN_710392eb40((ulong)puVar14);
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d988;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        uVar12 = *(ulong *)(uVar23 + 0x18);
        *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar23 + 0x18) = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        FUN_710392eb40(uVar23);
      }
      FUN_7103776640(&local_180,(long)&local_1d0,(byte ****)"monad",ppppppppplVar15,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_71037780e0(&local_a0,(long)&local_180,(long ****)"gauge_all_in",ppppppppplVar15,param_4,
                     param_5,param_6,param_7,param_8);
      puVar14 = local_98;
      if ((long ****)(param_1 + uVar26 * 0xd90 + 0xc88) != &local_a0) {
        lVar22 = param_1 + uVar26 * 0xd90;
        **(undefined8 **)(lVar22 + 0xc90) = *local_98;
        *(undefined8 *)(*(long *)(lVar22 + 0xc90) + 8) = local_98[1];
        *(undefined1 *)(*(long *)(lVar22 + 0xc90) + 0x10) = *(undefined1 *)(local_98 + 2);
      }
      local_a0 = (long ***)&PTR_FUN_710523d9e8;
      bVar7 = local_98 != (undefined8 *)0x0;
      local_98 = (undefined8 *)0x0;
      if (bVar7) {
        local_98 = (undefined8 *)0x0;
        local_a0 = (long ***)&PTR_FUN_710523d9e8;
        FUN_710392eb40((ulong)puVar14);
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d988;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        uVar12 = *(ulong *)(uVar23 + 0x18);
        *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar23 + 0x18) = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        FUN_710392eb40(uVar23);
      }
      FUN_7103776640(&local_180,(long)&local_1d0,(byte ****)"monad",ppppppppplVar15,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_71037780e0(&local_a0,(long)&local_180,(long ****)"gauge_all_out",ppppppppplVar15,param_4,
                     param_5,param_6,param_7,param_8);
      puVar14 = local_98;
      if ((long ****)(param_1 + uVar26 * 0xd90 + 0xc98) != &local_a0) {
        lVar22 = param_1 + uVar26 * 0xd90;
        **(undefined8 **)(lVar22 + 0xca0) = *local_98;
        *(undefined8 *)(*(long *)(lVar22 + 0xca0) + 8) = local_98[1];
        *(undefined1 *)(*(long *)(lVar22 + 0xca0) + 0x10) = *(undefined1 *)(local_98 + 2);
      }
      local_a0 = (long ***)&PTR_FUN_710523d9e8;
      bVar7 = local_98 != (undefined8 *)0x0;
      local_98 = (undefined8 *)0x0;
      if (bVar7) {
        local_98 = (undefined8 *)0x0;
        local_a0 = (long ***)&PTR_FUN_710523d9e8;
        FUN_710392eb40((ulong)puVar14);
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d988;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        uVar12 = *(ulong *)(uVar23 + 0x18);
        *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar23 + 0x18) = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        FUN_710392eb40(uVar23);
      }
      FUN_7103776640(&local_180,(long)&local_1d0,(byte ****)"monad",ppppppppplVar15,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_71037780e0(&local_a0,(long)&local_180,(long ****)"mode_all_in",ppppppppplVar15,param_4,
                     param_5,param_6,param_7,param_8);
      puVar14 = local_98;
      if ((long ****)(param_1 + uVar26 * 0xd90 + 0xca8) != &local_a0) {
        lVar22 = param_1 + uVar26 * 0xd90;
        **(undefined8 **)(lVar22 + 0xcb0) = *local_98;
        *(undefined8 *)(*(long *)(lVar22 + 0xcb0) + 8) = local_98[1];
        *(undefined1 *)(*(long *)(lVar22 + 0xcb0) + 0x10) = *(undefined1 *)(local_98 + 2);
      }
      local_a0 = (long ***)&PTR_FUN_710523d9e8;
      bVar7 = local_98 != (undefined8 *)0x0;
      local_98 = (undefined8 *)0x0;
      if (bVar7) {
        local_98 = (undefined8 *)0x0;
        local_a0 = (long ***)&PTR_FUN_710523d9e8;
        FUN_710392eb40((ulong)puVar14);
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d988;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        uVar12 = *(ulong *)(uVar23 + 0x18);
        *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar23 + 0x18) = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        FUN_710392eb40(uVar23);
      }
      FUN_7103776640(&local_180,(long)&local_1d0,(byte ****)"monad",ppppppppplVar15,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_71037780e0(&local_a0,(long)&local_180,(long ****)"mode_all_out",ppppppppplVar15,param_4,
                     param_5,param_6,param_7,param_8);
      puVar14 = local_98;
      if ((long ****)(param_1 + uVar26 * 0xd90 + 0xcb8) != &local_a0) {
        lVar22 = param_1 + uVar26 * 0xd90;
        **(undefined8 **)(lVar22 + 0xcc0) = *local_98;
        *(undefined8 *)(*(long *)(lVar22 + 0xcc0) + 8) = local_98[1];
        *(undefined1 *)(*(long *)(lVar22 + 0xcc0) + 0x10) = *(undefined1 *)(local_98 + 2);
      }
      local_a0 = (long ***)&PTR_FUN_710523d9e8;
      bVar7 = local_98 != (undefined8 *)0x0;
      local_98 = (undefined8 *)0x0;
      if (bVar7) {
        local_98 = (undefined8 *)0x0;
        local_a0 = (long ***)&PTR_FUN_710523d9e8;
        FUN_710392eb40((ulong)puVar14);
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d988;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        uVar12 = *(ulong *)(uVar23 + 0x18);
        *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar23 + 0x18) = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        FUN_710392eb40(uVar23);
      }
      FUN_7103776640(&local_180,(long)&local_1d0,(byte ****)"monad",ppppppppplVar15,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_71037780e0(&local_a0,(long)&local_180,(long ****)"guage_empty",ppppppppplVar15,param_4,
                     param_5,param_6,param_7,param_8);
      puVar14 = local_98;
      if ((long ****)(param_1 + uVar26 * 0xd90 + 0xcc8) != &local_a0) {
        lVar22 = param_1 + uVar26 * 0xd90;
        **(undefined8 **)(lVar22 + 0xcd0) = *local_98;
        *(undefined8 *)(*(long *)(lVar22 + 0xcd0) + 8) = local_98[1];
        *(undefined1 *)(*(long *)(lVar22 + 0xcd0) + 0x10) = *(undefined1 *)(local_98 + 2);
      }
      local_a0 = (long ***)&PTR_FUN_710523d9e8;
      bVar7 = local_98 != (undefined8 *)0x0;
      local_98 = (undefined8 *)0x0;
      if (bVar7) {
        local_98 = (undefined8 *)0x0;
        local_a0 = (long ***)&PTR_FUN_710523d9e8;
        FUN_710392eb40((ulong)puVar14);
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d988;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        uVar12 = *(ulong *)(uVar23 + 0x18);
        *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar23 + 0x18) = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        FUN_710392eb40(uVar23);
      }
      FUN_7103776640(&local_180,(long)&local_1d0,(byte ****)"monad",ppppppppplVar15,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_71037780e0(&local_a0,(long)&local_180,(long ****)"guage_00",ppppppppplVar15,param_4,
                     param_5,param_6,param_7,param_8);
      puVar14 = local_98;
      if ((long ****)(param_1 + uVar26 * 0xd90 + 0xcd8) != &local_a0) {
        lVar22 = param_1 + uVar26 * 0xd90;
        **(undefined8 **)(lVar22 + 0xce0) = *local_98;
        *(undefined8 *)(*(long *)(lVar22 + 0xce0) + 8) = local_98[1];
        *(undefined1 *)(*(long *)(lVar22 + 0xce0) + 0x10) = *(undefined1 *)(local_98 + 2);
      }
      local_a0 = (long ***)&PTR_FUN_710523d9e8;
      bVar7 = local_98 != (undefined8 *)0x0;
      local_98 = (undefined8 *)0x0;
      if (bVar7) {
        local_98 = (undefined8 *)0x0;
        local_a0 = (long ***)&PTR_FUN_710523d9e8;
        FUN_710392eb40((ulong)puVar14);
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d988;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        uVar12 = *(ulong *)(uVar23 + 0x18);
        *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar23 + 0x18) = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        FUN_710392eb40(uVar23);
      }
      FUN_7103776640(&local_180,(long)&local_1d0,(byte ****)"monad",ppppppppplVar15,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_71037780e0(&local_a0,(long)&local_180,(long ****)"guage_01",ppppppppplVar15,param_4,
                     param_5,param_6,param_7,param_8);
      puVar14 = local_98;
      if ((long ****)(param_1 + uVar26 * 0xd90 + 0xce8) != &local_a0) {
        lVar22 = param_1 + uVar26 * 0xd90;
        **(undefined8 **)(lVar22 + 0xcf0) = *local_98;
        *(undefined8 *)(*(long *)(lVar22 + 0xcf0) + 8) = local_98[1];
        *(undefined1 *)(*(long *)(lVar22 + 0xcf0) + 0x10) = *(undefined1 *)(local_98 + 2);
      }
      local_a0 = (long ***)&PTR_FUN_710523d9e8;
      bVar7 = local_98 != (undefined8 *)0x0;
      local_98 = (undefined8 *)0x0;
      if (bVar7) {
        local_98 = (undefined8 *)0x0;
        local_a0 = (long ***)&PTR_FUN_710523d9e8;
        FUN_710392eb40((ulong)puVar14);
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d988;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        uVar12 = *(ulong *)(uVar23 + 0x18);
        *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar23 + 0x18) = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        FUN_710392eb40(uVar23);
      }
      FUN_7103776640(&local_180,(long)&local_1d0,(byte ****)"monad",ppppppppplVar15,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_71037780e0(&local_a0,(long)&local_180,(long ****)"guage_02",ppppppppplVar15,param_4,
                     param_5,param_6,param_7,param_8);
      puVar14 = local_98;
      if ((long ****)(param_1 + uVar26 * 0xd90 + 0xcf8) != &local_a0) {
        lVar22 = param_1 + uVar26 * 0xd90;
        **(undefined8 **)(lVar22 + 0xd00) = *local_98;
        *(undefined8 *)(*(long *)(lVar22 + 0xd00) + 8) = local_98[1];
        *(undefined1 *)(*(long *)(lVar22 + 0xd00) + 0x10) = *(undefined1 *)(local_98 + 2);
      }
      local_a0 = (long ***)&PTR_FUN_710523d9e8;
      bVar7 = local_98 != (undefined8 *)0x0;
      local_98 = (undefined8 *)0x0;
      if (bVar7) {
        local_98 = (undefined8 *)0x0;
        local_a0 = (long ***)&PTR_FUN_710523d9e8;
        FUN_710392eb40((ulong)puVar14);
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d988;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        uVar12 = *(ulong *)(uVar23 + 0x18);
        *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar23 + 0x18) = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        FUN_710392eb40(uVar23);
      }
      FUN_7103776640(&local_180,(long)&local_1d0,(byte ****)"monad",ppppppppplVar15,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_71037780e0(&local_a0,(long)&local_180,(long ****)"guage_03",ppppppppplVar15,param_4,
                     param_5,param_6,param_7,param_8);
      puVar14 = local_98;
      if ((long ****)(param_1 + uVar26 * 0xd90 + 0xd08) != &local_a0) {
        lVar22 = param_1 + uVar26 * 0xd90;
        **(undefined8 **)(lVar22 + 0xd10) = *local_98;
        *(undefined8 *)(*(long *)(lVar22 + 0xd10) + 8) = local_98[1];
        *(undefined1 *)(*(long *)(lVar22 + 0xd10) + 0x10) = *(undefined1 *)(local_98 + 2);
      }
      local_a0 = (long ***)&PTR_FUN_710523d9e8;
      bVar7 = local_98 != (undefined8 *)0x0;
      local_98 = (undefined8 *)0x0;
      if (bVar7) {
        local_98 = (undefined8 *)0x0;
        local_a0 = (long ***)&PTR_FUN_710523d9e8;
        FUN_710392eb40((ulong)puVar14);
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d988;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        uVar12 = *(ulong *)(uVar23 + 0x18);
        *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar23 + 0x18) = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        FUN_710392eb40(uVar23);
      }
      FUN_7103776640(&local_180,(long)&local_1d0,(byte ****)"monad",ppppppppplVar15,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_71037780e0(&local_a0,(long)&local_180,(long ****)"guage_04",ppppppppplVar15,param_4,
                     param_5,param_6,param_7,param_8);
      puVar14 = local_98;
      if ((long ****)(param_1 + uVar26 * 0xd90 + 0xd18) != &local_a0) {
        lVar22 = param_1 + uVar26 * 0xd90;
        **(undefined8 **)(lVar22 + 0xd20) = *local_98;
        *(undefined8 *)(*(long *)(lVar22 + 0xd20) + 8) = local_98[1];
        *(undefined1 *)(*(long *)(lVar22 + 0xd20) + 0x10) = *(undefined1 *)(local_98 + 2);
      }
      local_a0 = (long ***)&PTR_FUN_710523d9e8;
      bVar7 = local_98 != (undefined8 *)0x0;
      local_98 = (undefined8 *)0x0;
      if (bVar7) {
        local_98 = (undefined8 *)0x0;
        local_a0 = (long ***)&PTR_FUN_710523d9e8;
        FUN_710392eb40((ulong)puVar14);
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d988;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        uVar12 = *(ulong *)(uVar23 + 0x18);
        *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar23 + 0x18) = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        FUN_710392eb40(uVar23);
      }
      FUN_7103776640(&local_180,(long)&local_1d0,(byte ****)"monad",ppppppppplVar15,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_71037780e0(&local_a0,(long)&local_180,(long ****)"mode_empty_00",ppppppppplVar15,param_4,
                     param_5,param_6,param_7,param_8);
      puVar14 = local_98;
      if ((long ****)(param_1 + uVar26 * 0xd90 + 0xd28) != &local_a0) {
        lVar22 = param_1 + uVar26 * 0xd90;
        **(undefined8 **)(lVar22 + 0xd30) = *local_98;
        *(undefined8 *)(*(long *)(lVar22 + 0xd30) + 8) = local_98[1];
        *(undefined1 *)(*(long *)(lVar22 + 0xd30) + 0x10) = *(undefined1 *)(local_98 + 2);
      }
      local_a0 = (long ***)&PTR_FUN_710523d9e8;
      bVar7 = local_98 != (undefined8 *)0x0;
      local_98 = (undefined8 *)0x0;
      if (bVar7) {
        local_98 = (undefined8 *)0x0;
        local_a0 = (long ***)&PTR_FUN_710523d9e8;
        FUN_710392eb40((ulong)puVar14);
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d988;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        uVar12 = *(ulong *)(uVar23 + 0x18);
        *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar23 + 0x18) = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        FUN_710392eb40(uVar23);
      }
      FUN_7103776640(&local_180,(long)&local_1d0,(byte ****)"monad",ppppppppplVar15,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_71037780e0(&local_a0,(long)&local_180,(long ****)"mode_empty_01",ppppppppplVar15,param_4,
                     param_5,param_6,param_7,param_8);
      puVar14 = local_98;
      if ((long ****)(param_1 + uVar26 * 0xd90 + 0xd38) != &local_a0) {
        lVar22 = param_1 + uVar26 * 0xd90;
        **(undefined8 **)(lVar22 + 0xd40) = *local_98;
        *(undefined8 *)(*(long *)(lVar22 + 0xd40) + 8) = local_98[1];
        *(undefined1 *)(*(long *)(lVar22 + 0xd40) + 0x10) = *(undefined1 *)(local_98 + 2);
      }
      local_a0 = (long ***)&PTR_FUN_710523d9e8;
      bVar7 = local_98 != (undefined8 *)0x0;
      local_98 = (undefined8 *)0x0;
      if (bVar7) {
        local_98 = (undefined8 *)0x0;
        local_a0 = (long ***)&PTR_FUN_710523d9e8;
        FUN_710392eb40((ulong)puVar14);
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d988;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        uVar12 = *(ulong *)(uVar23 + 0x18);
        *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar23 + 0x18) = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        FUN_710392eb40(uVar23);
      }
      FUN_7103776640(&local_180,(long)&local_1d0,(byte ****)"monad",ppppppppplVar15,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_71037780e0(&local_a0,(long)&local_180,(long ****)"mode_empty_02",ppppppppplVar15,param_4,
                     param_5,param_6,param_7,param_8);
      puVar14 = local_98;
      if ((long ****)(param_1 + uVar26 * 0xd90 + 0xd48) != &local_a0) {
        lVar22 = param_1 + uVar26 * 0xd90;
        **(undefined8 **)(lVar22 + 0xd50) = *local_98;
        *(undefined8 *)(*(long *)(lVar22 + 0xd50) + 8) = local_98[1];
        *(undefined1 *)(*(long *)(lVar22 + 0xd50) + 0x10) = *(undefined1 *)(local_98 + 2);
      }
      local_a0 = (long ***)&PTR_FUN_710523d9e8;
      bVar7 = local_98 != (undefined8 *)0x0;
      local_98 = (undefined8 *)0x0;
      if (bVar7) {
        local_98 = (undefined8 *)0x0;
        local_a0 = (long ***)&PTR_FUN_710523d9e8;
        FUN_710392eb40((ulong)puVar14);
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d988;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        uVar12 = *(ulong *)(uVar23 + 0x18);
        *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar23 + 0x18) = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        FUN_710392eb40(uVar23);
      }
      FUN_7103776640(&local_180,(long)&local_1d0,(byte ****)"monad",ppppppppplVar15,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_71037780e0(&local_a0,(long)&local_180,(long ****)"mode_empty_03",ppppppppplVar15,param_4,
                     param_5,param_6,param_7,param_8);
      puVar14 = local_98;
      if ((long ****)(param_1 + uVar26 * 0xd90 + 0xd58) != &local_a0) {
        lVar22 = param_1 + uVar26 * 0xd90;
        **(undefined8 **)(lVar22 + 0xd60) = *local_98;
        *(undefined8 *)(*(long *)(lVar22 + 0xd60) + 8) = local_98[1];
        *(undefined1 *)(*(long *)(lVar22 + 0xd60) + 0x10) = *(undefined1 *)(local_98 + 2);
      }
      local_a0 = (long ***)&PTR_FUN_710523d9e8;
      bVar7 = local_98 != (undefined8 *)0x0;
      local_98 = (undefined8 *)0x0;
      if (bVar7) {
        local_98 = (undefined8 *)0x0;
        local_a0 = (long ***)&PTR_FUN_710523d9e8;
        FUN_710392eb40((ulong)puVar14);
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d988;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        uVar12 = *(ulong *)(uVar23 + 0x18);
        *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar23 + 0x18) = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        FUN_710392eb40(uVar23);
      }
      FUN_7103776640(&local_180,(long)&local_1d0,(byte ****)"monad",ppppppppplVar15,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_71037780e0(&local_a0,(long)&local_180,(long ****)"mode_empty_04",ppppppppplVar15,param_4,
                     param_5,param_6,param_7,param_8);
      puVar14 = local_98;
      if ((long ****)(param_1 + uVar26 * 0xd90 + 0xd68) != &local_a0) {
        lVar22 = param_1 + uVar26 * 0xd90;
        **(undefined8 **)(lVar22 + 0xd70) = *local_98;
        *(undefined8 *)(*(long *)(lVar22 + 0xd70) + 8) = local_98[1];
        *(undefined1 *)(*(long *)(lVar22 + 0xd70) + 0x10) = *(undefined1 *)(local_98 + 2);
      }
      local_a0 = (long ***)&PTR_FUN_710523d9e8;
      bVar7 = local_98 != (undefined8 *)0x0;
      local_98 = (undefined8 *)0x0;
      if (bVar7) {
        local_98 = (undefined8 *)0x0;
        local_a0 = (long ***)&PTR_FUN_710523d9e8;
        FUN_710392eb40((ulong)puVar14);
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d988;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        uVar12 = *(ulong *)(uVar23 + 0x18);
        *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar23 + 0x18) = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        FUN_710392eb40(uVar23);
      }
      FUN_7103776640(&local_180,(long)&local_1d0,(byte ****)"monad",ppppppppplVar15,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_71037780e0(&local_a0,(long)&local_180,(long ****)"mode_select_00",ppppppppplVar15,param_4,
                     param_5,param_6,param_7,param_8);
      puVar14 = local_98;
      if ((long ****)(param_1 + uVar26 * 0xd90 + 0xd78) != &local_a0) {
        lVar22 = param_1 + uVar26 * 0xd90;
        **(undefined8 **)(lVar22 + 0xd80) = *local_98;
        *(undefined8 *)(*(long *)(lVar22 + 0xd80) + 8) = local_98[1];
        *(undefined1 *)(*(long *)(lVar22 + 0xd80) + 0x10) = *(undefined1 *)(local_98 + 2);
      }
      local_a0 = (long ***)&PTR_FUN_710523d9e8;
      bVar7 = local_98 != (undefined8 *)0x0;
      local_98 = (undefined8 *)0x0;
      if (bVar7) {
        local_98 = (undefined8 *)0x0;
        local_a0 = (long ***)&PTR_FUN_710523d9e8;
        FUN_710392eb40((ulong)puVar14);
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d988;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        uVar12 = *(ulong *)(uVar23 + 0x18);
        *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar23 + 0x18) = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        FUN_710392eb40(uVar23);
      }
      FUN_7103776640(&local_180,(long)&local_1d0,(byte ****)"monad",ppppppppplVar15,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_71037780e0(&local_a0,(long)&local_180,(long ****)"mode_select_01",ppppppppplVar15,param_4,
                     param_5,param_6,param_7,param_8);
      puVar14 = local_98;
      if ((long ****)(param_1 + uVar26 * 0xd90 + 0xd88) != &local_a0) {
        lVar22 = param_1 + uVar26 * 0xd90;
        **(undefined8 **)(lVar22 + 0xd90) = *local_98;
        *(undefined8 *)(*(long *)(lVar22 + 0xd90) + 8) = local_98[1];
        *(undefined1 *)(*(long *)(lVar22 + 0xd90) + 0x10) = *(undefined1 *)(local_98 + 2);
      }
      local_a0 = (long ***)&PTR_FUN_710523d9e8;
      bVar7 = local_98 != (undefined8 *)0x0;
      local_98 = (undefined8 *)0x0;
      if (bVar7) {
        local_98 = (undefined8 *)0x0;
        local_a0 = (long ***)&PTR_FUN_710523d9e8;
        FUN_710392eb40((ulong)puVar14);
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d988;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        uVar12 = *(ulong *)(uVar23 + 0x18);
        *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar23 + 0x18) = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        FUN_710392eb40(uVar23);
      }
      FUN_7103776640(&local_180,(long)&local_1d0,(byte ****)"monad",ppppppppplVar15,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_71037780e0(&local_a0,(long)&local_180,(long ****)"mode_select_02",ppppppppplVar15,param_4,
                     param_5,param_6,param_7,param_8);
      puVar14 = local_98;
      if ((long ****)(param_1 + uVar26 * 0xd90 + 0xd98) != &local_a0) {
        lVar22 = param_1 + uVar26 * 0xd90;
        **(undefined8 **)(lVar22 + 0xda0) = *local_98;
        *(undefined8 *)(*(long *)(lVar22 + 0xda0) + 8) = local_98[1];
        *(undefined1 *)(*(long *)(lVar22 + 0xda0) + 0x10) = *(undefined1 *)(local_98 + 2);
      }
      local_a0 = (long ***)&PTR_FUN_710523d9e8;
      bVar7 = local_98 != (undefined8 *)0x0;
      local_98 = (undefined8 *)0x0;
      if (bVar7) {
        local_98 = (undefined8 *)0x0;
        local_a0 = (long ***)&PTR_FUN_710523d9e8;
        FUN_710392eb40((ulong)puVar14);
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d988;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        uVar12 = *(ulong *)(uVar23 + 0x18);
        *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar23 + 0x18) = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        FUN_710392eb40(uVar23);
      }
      FUN_7103776640(&local_180,(long)&local_1d0,(byte ****)"monad",ppppppppplVar15,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_71037780e0(&local_a0,(long)&local_180,(long ****)"mode_select_03",ppppppppplVar15,param_4,
                     param_5,param_6,param_7,param_8);
      puVar14 = local_98;
      if ((long ****)(param_1 + uVar26 * 0xd90 + 0xda8) != &local_a0) {
        lVar22 = param_1 + uVar26 * 0xd90;
        **(undefined8 **)(lVar22 + 0xdb0) = *local_98;
        *(undefined8 *)(*(long *)(lVar22 + 0xdb0) + 8) = local_98[1];
        *(undefined1 *)(*(long *)(lVar22 + 0xdb0) + 0x10) = *(undefined1 *)(local_98 + 2);
      }
      local_a0 = (long ***)&PTR_FUN_710523d9e8;
      bVar7 = local_98 != (undefined8 *)0x0;
      local_98 = (undefined8 *)0x0;
      if (bVar7) {
        local_98 = (undefined8 *)0x0;
        local_a0 = (long ***)&PTR_FUN_710523d9e8;
        FUN_710392eb40((ulong)puVar14);
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d988;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        uVar12 = *(ulong *)(uVar23 + 0x18);
        *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar23 + 0x18) = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        FUN_710392eb40(uVar23);
      }
      FUN_7103776640(&local_180,(long)&local_1d0,(byte ****)"monad",ppppppppplVar15,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_71037780e0(&local_a0,(long)&local_180,(long ****)"mode_select_04",ppppppppplVar15,param_4,
                     param_5,param_6,param_7,param_8);
      puVar14 = local_98;
      if ((long ****)(param_1 + uVar26 * 0xd90 + 0xdb8) != &local_a0) {
        lVar22 = param_1 + uVar26 * 0xd90;
        **(undefined8 **)(lVar22 + 0xdc0) = *local_98;
        *(undefined8 *)(*(long *)(lVar22 + 0xdc0) + 8) = local_98[1];
        *(undefined1 *)(*(long *)(lVar22 + 0xdc0) + 0x10) = *(undefined1 *)(local_98 + 2);
      }
      local_a0 = (long ***)&PTR_FUN_710523d9e8;
      bVar7 = local_98 != (undefined8 *)0x0;
      local_98 = (undefined8 *)0x0;
      if (bVar7) {
        local_98 = (undefined8 *)0x0;
        local_a0 = (long ***)&PTR_FUN_710523d9e8;
        FUN_710392eb40((ulong)puVar14);
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d988;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        uVar12 = *(ulong *)(uVar23 + 0x18);
        *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar23 + 0x18) = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        FUN_710392eb40(uVar23);
      }
      FUN_7103776640(&local_180,(long)&local_1d0,(byte ****)"monad",ppppppppplVar15,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_71037780e0(&local_a0,(long)&local_180,(long ****)"mode_decide_00",ppppppppplVar15,param_4,
                     param_5,param_6,param_7,param_8);
      puVar14 = local_98;
      if ((long ****)(param_1 + uVar26 * 0xd90 + 0xdc8) != &local_a0) {
        lVar22 = param_1 + uVar26 * 0xd90;
        **(undefined8 **)(lVar22 + 0xdd0) = *local_98;
        *(undefined8 *)(*(long *)(lVar22 + 0xdd0) + 8) = local_98[1];
        *(undefined1 *)(*(long *)(lVar22 + 0xdd0) + 0x10) = *(undefined1 *)(local_98 + 2);
      }
      local_a0 = (long ***)&PTR_FUN_710523d9e8;
      bVar7 = local_98 != (undefined8 *)0x0;
      local_98 = (undefined8 *)0x0;
      if (bVar7) {
        local_98 = (undefined8 *)0x0;
        local_a0 = (long ***)&PTR_FUN_710523d9e8;
        FUN_710392eb40((ulong)puVar14);
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d988;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        uVar12 = *(ulong *)(uVar23 + 0x18);
        *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar23 + 0x18) = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        FUN_710392eb40(uVar23);
      }
      FUN_7103776640(&local_180,(long)&local_1d0,(byte ****)"monad",ppppppppplVar15,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_71037780e0(&local_a0,(long)&local_180,(long ****)"mode_decide_01",ppppppppplVar15,param_4,
                     param_5,param_6,param_7,param_8);
      puVar14 = local_98;
      if ((long ****)(param_1 + uVar26 * 0xd90 + 0xdd8) != &local_a0) {
        lVar22 = param_1 + uVar26 * 0xd90;
        **(undefined8 **)(lVar22 + 0xde0) = *local_98;
        *(undefined8 *)(*(long *)(lVar22 + 0xde0) + 8) = local_98[1];
        *(undefined1 *)(*(long *)(lVar22 + 0xde0) + 0x10) = *(undefined1 *)(local_98 + 2);
      }
      local_a0 = (long ***)&PTR_FUN_710523d9e8;
      bVar7 = local_98 != (undefined8 *)0x0;
      local_98 = (undefined8 *)0x0;
      if (bVar7) {
        local_98 = (undefined8 *)0x0;
        local_a0 = (long ***)&PTR_FUN_710523d9e8;
        FUN_710392eb40((ulong)puVar14);
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d988;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        uVar12 = *(ulong *)(uVar23 + 0x18);
        *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar23 + 0x18) = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        FUN_710392eb40(uVar23);
      }
      FUN_7103776640(&local_180,(long)&local_1d0,(byte ****)"monad",ppppppppplVar15,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_71037780e0(&local_a0,(long)&local_180,(long ****)"mode_decide_02",ppppppppplVar15,param_4,
                     param_5,param_6,param_7,param_8);
      puVar14 = local_98;
      if ((long ****)(param_1 + uVar26 * 0xd90 + 0xde8) != &local_a0) {
        lVar22 = param_1 + uVar26 * 0xd90;
        **(undefined8 **)(lVar22 + 0xdf0) = *local_98;
        *(undefined8 *)(*(long *)(lVar22 + 0xdf0) + 8) = local_98[1];
        *(undefined1 *)(*(long *)(lVar22 + 0xdf0) + 0x10) = *(undefined1 *)(local_98 + 2);
      }
      local_a0 = (long ***)&PTR_FUN_710523d9e8;
      bVar7 = local_98 != (undefined8 *)0x0;
      local_98 = (undefined8 *)0x0;
      if (bVar7) {
        local_98 = (undefined8 *)0x0;
        local_a0 = (long ***)&PTR_FUN_710523d9e8;
        FUN_710392eb40((ulong)puVar14);
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d988;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        uVar12 = *(ulong *)(uVar23 + 0x18);
        *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar23 + 0x18) = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        FUN_710392eb40(uVar23);
      }
      FUN_7103776640(&local_180,(long)&local_1d0,(byte ****)"monad",ppppppppplVar15,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_71037780e0(&local_a0,(long)&local_180,(long ****)"mode_decide_03",ppppppppplVar15,param_4,
                     param_5,param_6,param_7,param_8);
      puVar14 = local_98;
      if ((long ****)(param_1 + uVar26 * 0xd90 + 0xdf8) != &local_a0) {
        lVar22 = param_1 + uVar26 * 0xd90;
        **(undefined8 **)(lVar22 + 0xe00) = *local_98;
        *(undefined8 *)(*(long *)(lVar22 + 0xe00) + 8) = local_98[1];
        *(undefined1 *)(*(long *)(lVar22 + 0xe00) + 0x10) = *(undefined1 *)(local_98 + 2);
      }
      local_a0 = (long ***)&PTR_FUN_710523d9e8;
      bVar7 = local_98 != (undefined8 *)0x0;
      local_98 = (undefined8 *)0x0;
      if (bVar7) {
        local_98 = (undefined8 *)0x0;
        local_a0 = (long ***)&PTR_FUN_710523d9e8;
        FUN_710392eb40((ulong)puVar14);
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d988;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        uVar12 = *(ulong *)(uVar23 + 0x18);
        *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar23 + 0x18) = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        FUN_710392eb40(uVar23);
      }
      FUN_7103776640(&local_180,(long)&local_1d0,(byte ****)"monad",ppppppppplVar15,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_71037780e0(&local_a0,(long)&local_180,(long ****)"mode_decide_04",ppppppppplVar15,param_4,
                     param_5,param_6,param_7,param_8);
      puVar14 = local_98;
      if ((long ****)(param_1 + uVar26 * 0xd90 + 0xe08) != &local_a0) {
        lVar22 = param_1 + uVar26 * 0xd90;
        **(undefined8 **)(lVar22 + 0xe10) = *local_98;
        *(undefined8 *)(*(long *)(lVar22 + 0xe10) + 8) = local_98[1];
        *(undefined1 *)(*(long *)(lVar22 + 0xe10) + 0x10) = *(undefined1 *)(local_98 + 2);
      }
      local_a0 = (long ***)&PTR_FUN_710523d9e8;
      bVar7 = local_98 != (undefined8 *)0x0;
      local_98 = (undefined8 *)0x0;
      if (bVar7) {
        local_98 = (undefined8 *)0x0;
        local_a0 = (long ***)&PTR_FUN_710523d9e8;
        FUN_710392eb40((ulong)puVar14);
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d988;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        uVar12 = *(ulong *)(uVar23 + 0x18);
        *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar23 + 0x18) = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        FUN_710392eb40(uVar23);
      }
      FUN_7103776640(&local_180,(long)&local_1d0,(byte ****)"monad",ppppppppplVar15,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_71037780e0(&local_a0,(long)&local_180,(long ****)"mode_old",ppppppppplVar15,param_4,
                     param_5,param_6,param_7,param_8);
      puVar14 = local_98;
      if ((long ****)(param_1 + uVar26 * 0xd90 + 0xe18) != &local_a0) {
        lVar22 = param_1 + uVar26 * 0xd90;
        **(undefined8 **)(lVar22 + 0xe20) = *local_98;
        *(undefined8 *)(*(long *)(lVar22 + 0xe20) + 8) = local_98[1];
        *(undefined1 *)(*(long *)(lVar22 + 0xe20) + 0x10) = *(undefined1 *)(local_98 + 2);
      }
      local_a0 = (long ***)&PTR_FUN_710523d9e8;
      bVar7 = local_98 != (undefined8 *)0x0;
      local_98 = (undefined8 *)0x0;
      if (bVar7) {
        local_98 = (undefined8 *)0x0;
        local_a0 = (long ***)&PTR_FUN_710523d9e8;
        FUN_710392eb40((ulong)puVar14);
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d988;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        uVar12 = *(ulong *)(uVar23 + 0x18);
        *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar23 + 0x18) = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        FUN_710392eb40(uVar23);
      }
      FUN_7103776640(&local_180,(long)&local_1d0,(byte ****)"monad",ppppppppplVar15,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_71037780e0(&local_a0,(long)&local_180,(long ****)"mode_change",ppppppppplVar15,param_4,
                     param_5,param_6,param_7,param_8);
      puVar14 = local_98;
      if ((long ****)(param_1 + uVar26 * 0xd90 + 0xe28) != &local_a0) {
        lVar22 = param_1 + uVar26 * 0xd90;
        **(undefined8 **)(lVar22 + 0xe30) = *local_98;
        *(undefined8 *)(*(long *)(lVar22 + 0xe30) + 8) = local_98[1];
        *(undefined1 *)(*(long *)(lVar22 + 0xe30) + 0x10) = *(undefined1 *)(local_98 + 2);
      }
      local_a0 = (long ***)&PTR_FUN_710523d9e8;
      bVar7 = local_98 != (undefined8 *)0x0;
      local_98 = (undefined8 *)0x0;
      if (bVar7) {
        local_98 = (undefined8 *)0x0;
        local_a0 = (long ***)&PTR_FUN_710523d9e8;
        FUN_710392eb40((ulong)puVar14);
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d988;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        uVar12 = *(ulong *)(uVar23 + 0x18);
        *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar23 + 0x18) = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        FUN_710392eb40(uVar23);
      }
      FUN_7103776640(&local_180,(long)&local_1d0,(byte ****)"monad",ppppppppplVar15,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_71037780e0(&local_a0,(long)&local_180,(long ****)"mode_flashing_00",ppppppppplVar15,
                     param_4,param_5,param_6,param_7,param_8);
      puVar14 = local_98;
      if ((long ****)(param_1 + uVar26 * 0xd90 + 0xe38) != &local_a0) {
        lVar22 = param_1 + uVar26 * 0xd90;
        **(undefined8 **)(lVar22 + 0xe40) = *local_98;
        *(undefined8 *)(*(long *)(lVar22 + 0xe40) + 8) = local_98[1];
        *(undefined1 *)(*(long *)(lVar22 + 0xe40) + 0x10) = *(undefined1 *)(local_98 + 2);
      }
      local_a0 = (long ***)&PTR_FUN_710523d9e8;
      bVar7 = local_98 != (undefined8 *)0x0;
      local_98 = (undefined8 *)0x0;
      if (bVar7) {
        local_98 = (undefined8 *)0x0;
        local_a0 = (long ***)&PTR_FUN_710523d9e8;
        FUN_710392eb40((ulong)puVar14);
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d988;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        uVar12 = *(ulong *)(uVar23 + 0x18);
        *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar23 + 0x18) = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        FUN_710392eb40(uVar23);
      }
      FUN_7103776640(&local_180,(long)&local_1d0,(byte ****)"monad",ppppppppplVar15,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_71037780e0(&local_a0,(long)&local_180,(long ****)"mode_flashing_01",ppppppppplVar15,
                     param_4,param_5,param_6,param_7,param_8);
      puVar14 = local_98;
      if ((long ****)(param_1 + uVar26 * 0xd90 + 0xe48) != &local_a0) {
        lVar22 = param_1 + uVar26 * 0xd90;
        **(undefined8 **)(lVar22 + 0xe50) = *local_98;
        *(undefined8 *)(*(long *)(lVar22 + 0xe50) + 8) = local_98[1];
        *(undefined1 *)(*(long *)(lVar22 + 0xe50) + 0x10) = *(undefined1 *)(local_98 + 2);
      }
      local_a0 = (long ***)&PTR_FUN_710523d9e8;
      bVar7 = local_98 != (undefined8 *)0x0;
      local_98 = (undefined8 *)0x0;
      if (bVar7) {
        local_98 = (undefined8 *)0x0;
        local_a0 = (long ***)&PTR_FUN_710523d9e8;
        FUN_710392eb40((ulong)puVar14);
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d988;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        uVar12 = *(ulong *)(uVar23 + 0x18);
        *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar23 + 0x18) = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        FUN_710392eb40(uVar23);
      }
      FUN_7103776640(&local_180,(long)&local_1d0,(byte ****)"monad",ppppppppplVar15,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_71037780e0(&local_a0,(long)&local_180,(long ****)"mode_flashing_02",ppppppppplVar15,
                     param_4,param_5,param_6,param_7,param_8);
      puVar14 = local_98;
      if ((long ****)(param_1 + uVar26 * 0xd90 + 0xe58) != &local_a0) {
        lVar22 = param_1 + uVar26 * 0xd90;
        **(undefined8 **)(lVar22 + 0xe60) = *local_98;
        *(undefined8 *)(*(long *)(lVar22 + 0xe60) + 8) = local_98[1];
        *(undefined1 *)(*(long *)(lVar22 + 0xe60) + 0x10) = *(undefined1 *)(local_98 + 2);
      }
      local_a0 = (long ***)&PTR_FUN_710523d9e8;
      bVar7 = local_98 != (undefined8 *)0x0;
      local_98 = (undefined8 *)0x0;
      if (bVar7) {
        local_98 = (undefined8 *)0x0;
        local_a0 = (long ***)&PTR_FUN_710523d9e8;
        FUN_710392eb40((ulong)puVar14);
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d988;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        uVar12 = *(ulong *)(uVar23 + 0x18);
        *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar23 + 0x18) = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        FUN_710392eb40(uVar23);
      }
      FUN_7103776640(&local_180,(long)&local_1d0,(byte ****)"monad",ppppppppplVar15,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_71037780e0(&local_a0,(long)&local_180,(long ****)"mode_flashing_03",ppppppppplVar15,
                     param_4,param_5,param_6,param_7,param_8);
      puVar14 = local_98;
      if ((long ****)(param_1 + uVar26 * 0xd90 + 0xe68) != &local_a0) {
        lVar22 = param_1 + uVar26 * 0xd90;
        **(undefined8 **)(lVar22 + 0xe70) = *local_98;
        *(undefined8 *)(*(long *)(lVar22 + 0xe70) + 8) = local_98[1];
        *(undefined1 *)(*(long *)(lVar22 + 0xe70) + 0x10) = *(undefined1 *)(local_98 + 2);
      }
      local_a0 = (long ***)&PTR_FUN_710523d9e8;
      bVar7 = local_98 != (undefined8 *)0x0;
      local_98 = (undefined8 *)0x0;
      if (bVar7) {
        local_98 = (undefined8 *)0x0;
        local_a0 = (long ***)&PTR_FUN_710523d9e8;
        FUN_710392eb40((ulong)puVar14);
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d988;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        uVar12 = *(ulong *)(uVar23 + 0x18);
        *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar23 + 0x18) = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        FUN_710392eb40(uVar23);
      }
      FUN_7103776640(&local_180,(long)&local_1d0,(byte ****)"monad",ppppppppplVar15,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_71037780e0(&local_a0,(long)&local_180,(long ****)"mode_flashing_04",ppppppppplVar15,
                     param_4,param_5,param_6,param_7,param_8);
      puVar14 = local_98;
      if ((long ****)(param_1 + uVar26 * 0xd90 + 0xe78) != &local_a0) {
        lVar22 = param_1 + uVar26 * 0xd90;
        **(undefined8 **)(lVar22 + 0xe80) = *local_98;
        *(undefined8 *)(*(long *)(lVar22 + 0xe80) + 8) = local_98[1];
        *(undefined1 *)(*(long *)(lVar22 + 0xe80) + 0x10) = *(undefined1 *)(local_98 + 2);
      }
      local_a0 = (long ***)&PTR_FUN_710523d9e8;
      bVar7 = local_98 != (undefined8 *)0x0;
      local_98 = (undefined8 *)0x0;
      if (bVar7) {
        local_98 = (undefined8 *)0x0;
        local_a0 = (long ***)&PTR_FUN_710523d9e8;
        FUN_710392eb40((ulong)puVar14);
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d988;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        uVar12 = *(ulong *)(uVar23 + 0x18);
        *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar23 + 0x18) = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        FUN_710392eb40(uVar23);
      }
      FUN_7103776640(&local_180,(long)&local_1d0,(byte ****)"monad",ppppppppplVar15,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_7103776910(&local_a0,(long)&local_180,(long ****)"set_pic_mode_old",ppppppppplVar15,
                     param_4,param_5,param_6,param_7,param_8);
      puVar14 = local_98;
      if ((long ****)(param_1 + uVar26 * 0xd90 + 0xf48) != &local_a0) {
        lVar22 = param_1 + uVar26 * 0xd90;
        **(undefined8 **)(lVar22 + 0xf50) = *local_98;
        *(undefined8 *)(*(long *)(lVar22 + 0xf50) + 8) = local_98[1];
        *(undefined8 *)(*(long *)(lVar22 + 0xf50) + 0x10) = local_98[2];
        *(undefined8 *)(*(long *)(lVar22 + 0xf50) + 0x18) = local_98[3];
      }
      local_a0 = (long ***)&PTR_FUN_710523d9a8;
      bVar7 = local_98 != (undefined8 *)0x0;
      local_98 = (undefined8 *)0x0;
      if (bVar7) {
        local_98 = (undefined8 *)0x0;
        local_a0 = (long ***)&PTR_FUN_710523d9a8;
        FUN_710392eb40((ulong)puVar14);
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d988;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        uVar12 = *(ulong *)(uVar23 + 0x18);
        *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar23 + 0x18) = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        FUN_710392eb40(uVar23);
      }
      FUN_7103776640(&local_180,(long)&local_1d0,(byte ****)"monad",ppppppppplVar15,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_7103776910(&local_a0,(long)&local_180,(long ****)"set_pic_mode_now",ppppppppplVar15,
                     param_4,param_5,param_6,param_7,param_8);
      puVar14 = local_98;
      if ((long ****)(param_1 + uVar26 * 0xd90 + 0xf58) != &local_a0) {
        lVar22 = param_1 + uVar26 * 0xd90;
        **(undefined8 **)(lVar22 + 0xf60) = *local_98;
        *(undefined8 *)(*(long *)(lVar22 + 0xf60) + 8) = local_98[1];
        *(undefined8 *)(*(long *)(lVar22 + 0xf60) + 0x10) = local_98[2];
        *(undefined8 *)(*(long *)(lVar22 + 0xf60) + 0x18) = local_98[3];
      }
      local_a0 = (long ***)&PTR_FUN_710523d9a8;
      bVar7 = local_98 != (undefined8 *)0x0;
      local_98 = (undefined8 *)0x0;
      if (bVar7) {
        local_98 = (undefined8 *)0x0;
        local_a0 = (long ***)&PTR_FUN_710523d9a8;
        FUN_710392eb40((ulong)puVar14);
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d988;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        uVar12 = *(ulong *)(uVar23 + 0x18);
        *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar23 + 0x18) = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        FUN_710392eb40(uVar23);
      }
      FUN_7103776640(&local_180,(long)&local_1d0,(byte ****)"monad",ppppppppplVar15,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_7103776910(&local_a0,(long)&local_180,(long ****)"set_pic_mode_eff",ppppppppplVar15,
                     param_4,param_5,param_6,param_7,param_8);
      puVar14 = local_98;
      if ((long ****)(param_1 + uVar26 * 0xd90 + 0xf68) != &local_a0) {
        lVar22 = param_1 + uVar26 * 0xd90;
        **(undefined8 **)(lVar22 + 0xf70) = *local_98;
        *(undefined8 *)(*(long *)(lVar22 + 0xf70) + 8) = local_98[1];
        *(undefined8 *)(*(long *)(lVar22 + 0xf70) + 0x10) = local_98[2];
        *(undefined8 *)(*(long *)(lVar22 + 0xf70) + 0x18) = local_98[3];
      }
      local_a0 = (long ***)&PTR_FUN_710523d9a8;
      bVar7 = local_98 != (undefined8 *)0x0;
      local_98 = (undefined8 *)0x0;
      if (bVar7) {
        local_98 = (undefined8 *)0x0;
        local_a0 = (long ***)&PTR_FUN_710523d9a8;
        FUN_710392eb40((ulong)puVar14);
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d988;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        uVar12 = *(ulong *)(uVar23 + 0x18);
        *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar23 + 0x18) = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        FUN_710392eb40(uVar23);
      }
      FUN_7103776640(&local_180,(long)&local_1d0,(byte ****)&DAT_7104453189,ppppppppplVar15,param_4,
                     param_5,param_6,param_7,param_8);
      FUN_71037780e0(&local_a0,(long)&local_180,(long ****)"jack_guage",ppppppppplVar15,param_4,
                     param_5,param_6,param_7,param_8);
      puVar14 = local_98;
      if ((long ****)(param_1 + uVar26 * 0xd90 + 0xe90) != &local_a0) {
        lVar22 = param_1 + uVar26 * 0xd90;
        **(undefined8 **)(lVar22 + 0xe98) = *local_98;
        *(undefined8 *)(*(long *)(lVar22 + 0xe98) + 8) = local_98[1];
        *(undefined1 *)(*(long *)(lVar22 + 0xe98) + 0x10) = *(undefined1 *)(local_98 + 2);
      }
      local_a0 = (long ***)&PTR_FUN_710523d9e8;
      bVar7 = local_98 != (undefined8 *)0x0;
      local_98 = (undefined8 *)0x0;
      if (bVar7) {
        local_98 = (undefined8 *)0x0;
        local_a0 = (long ***)&PTR_FUN_710523d9e8;
        FUN_710392eb40((ulong)puVar14);
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d988;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        uVar12 = *(ulong *)(uVar23 + 0x18);
        *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar23 + 0x18) = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        FUN_710392eb40(uVar23);
      }
      FUN_7103776640(&local_180,(long)&local_1d0,(byte ****)&DAT_7104453189,ppppppppplVar15,param_4,
                     param_5,param_6,param_7,param_8);
      FUN_71037780e0(&local_a0,(long)&local_180,(long ****)"jack_guage_damage",ppppppppplVar15,
                     param_4,param_5,param_6,param_7,param_8);
      puVar14 = local_98;
      if ((long ****)(param_1 + uVar26 * 0xd90 + 0xea0) != &local_a0) {
        lVar22 = param_1 + uVar26 * 0xd90;
        **(undefined8 **)(lVar22 + 0xea8) = *local_98;
        *(undefined8 *)(*(long *)(lVar22 + 0xea8) + 8) = local_98[1];
        *(undefined1 *)(*(long *)(lVar22 + 0xea8) + 0x10) = *(undefined1 *)(local_98 + 2);
      }
      local_a0 = (long ***)&PTR_FUN_710523d9e8;
      bVar7 = local_98 != (undefined8 *)0x0;
      local_98 = (undefined8 *)0x0;
      if (bVar7) {
        local_98 = (undefined8 *)0x0;
        local_a0 = (long ***)&PTR_FUN_710523d9e8;
        FUN_710392eb40((ulong)puVar14);
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d988;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        uVar12 = *(ulong *)(uVar23 + 0x18);
        *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar23 + 0x18) = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        FUN_710392eb40(uVar23);
      }
      FUN_7103776640(&local_180,(long)&local_1d0,(byte ****)&DAT_7104453189,ppppppppplVar15,param_4,
                     param_5,param_6,param_7,param_8);
      FUN_71037780e0(&local_a0,(long)&local_180,(long ****)"jack_burst",ppppppppplVar15,param_4,
                     param_5,param_6,param_7,param_8);
      puVar14 = local_98;
      if ((long ****)(param_1 + uVar26 * 0xd90 + 0xeb0) != &local_a0) {
        lVar22 = param_1 + uVar26 * 0xd90;
        **(undefined8 **)(lVar22 + 0xeb8) = *local_98;
        *(undefined8 *)(*(long *)(lVar22 + 0xeb8) + 8) = local_98[1];
        *(undefined1 *)(*(long *)(lVar22 + 0xeb8) + 0x10) = *(undefined1 *)(local_98 + 2);
      }
      local_a0 = (long ***)&PTR_FUN_710523d9e8;
      bVar7 = local_98 != (undefined8 *)0x0;
      local_98 = (undefined8 *)0x0;
      if (bVar7) {
        local_98 = (undefined8 *)0x0;
        local_a0 = (long ***)&PTR_FUN_710523d9e8;
        FUN_710392eb40((ulong)puVar14);
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d988;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        uVar12 = *(ulong *)(uVar23 + 0x18);
        *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar23 + 0x18) = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        FUN_710392eb40(uVar23);
      }
      FUN_7103776640(&local_180,(long)&local_1d0,(byte ****)&DAT_7104453189,ppppppppplVar15,param_4,
                     param_5,param_6,param_7,param_8);
      FUN_71037780e0(&local_a0,(long)&local_180,(long ****)"jack_burst_off",ppppppppplVar15,param_4,
                     param_5,param_6,param_7,param_8);
      puVar14 = local_98;
      if ((long ****)(param_1 + uVar26 * 0xd90 + 0xec0) != &local_a0) {
        lVar22 = param_1 + uVar26 * 0xd90;
        **(undefined8 **)(lVar22 + 0xec8) = *local_98;
        *(undefined8 *)(*(long *)(lVar22 + 0xec8) + 8) = local_98[1];
        *(undefined1 *)(*(long *)(lVar22 + 0xec8) + 0x10) = *(undefined1 *)(local_98 + 2);
      }
      local_a0 = (long ***)&PTR_FUN_710523d9e8;
      bVar7 = local_98 != (undefined8 *)0x0;
      local_98 = (undefined8 *)0x0;
      if (bVar7) {
        local_98 = (undefined8 *)0x0;
        local_a0 = (long ***)&PTR_FUN_710523d9e8;
        FUN_710392eb40((ulong)puVar14);
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d988;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        uVar12 = *(ulong *)(uVar23 + 0x18);
        *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar23 + 0x18) = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        FUN_710392eb40(uVar23);
      }
      FUN_7103776640(&local_180,(long)&local_1d0,(byte ****)&DAT_7104453189,ppppppppplVar15,param_4,
                     param_5,param_6,param_7,param_8);
      FUN_71037780e0(&local_a0,(long)&local_180,(long ****)"jack_bg",ppppppppplVar15,param_4,param_5
                     ,param_6,param_7,param_8);
      puVar14 = local_98;
      if ((long ****)(param_1 + uVar26 * 0xd90 + 0xed0) != &local_a0) {
        lVar22 = param_1 + uVar26 * 0xd90;
        **(undefined8 **)(lVar22 + 0xed8) = *local_98;
        *(undefined8 *)(*(long *)(lVar22 + 0xed8) + 8) = local_98[1];
        *(undefined1 *)(*(long *)(lVar22 + 0xed8) + 0x10) = *(undefined1 *)(local_98 + 2);
      }
      local_a0 = (long ***)&PTR_FUN_710523d9e8;
      bVar7 = local_98 != (undefined8 *)0x0;
      local_98 = (undefined8 *)0x0;
      if (bVar7) {
        local_98 = (undefined8 *)0x0;
        local_a0 = (long ***)&PTR_FUN_710523d9e8;
        FUN_710392eb40((ulong)puVar14);
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d988;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        uVar12 = *(ulong *)(uVar23 + 0x18);
        *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar23 + 0x18) = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        FUN_710392eb40(uVar23);
      }
      FUN_7103776640(&local_180,(long)&local_1d0,(byte ****)&DAT_7104453189,ppppppppplVar15,param_4,
                     param_5,param_6,param_7,param_8);
      FUN_71037780e0(&local_a0,(long)&local_180,(long ****)"jack_guage_color",ppppppppplVar15,
                     param_4,param_5,param_6,param_7,param_8);
      puVar14 = local_98;
      if ((long ****)(param_1 + uVar26 * 0xd90 + 0xee0) != &local_a0) {
        lVar22 = param_1 + uVar26 * 0xd90;
        **(undefined8 **)(lVar22 + 0xee8) = *local_98;
        *(undefined8 *)(*(long *)(lVar22 + 0xee8) + 8) = local_98[1];
        *(undefined1 *)(*(long *)(lVar22 + 0xee8) + 0x10) = *(undefined1 *)(local_98 + 2);
      }
      local_a0 = (long ***)&PTR_FUN_710523d9e8;
      local_98 = (undefined8 *)0x0;
      if (puVar14 != (undefined8 *)0x0) {
        FUN_710392eb40((ulong)puVar14);
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d988;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        uVar12 = *(ulong *)(uVar23 + 0x18);
        *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar23 + 0x18) = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        FUN_710392eb40(uVar23);
      }
      FUN_7103776640(&local_a0,(long)&local_1d0,(byte ****)"brave",ppppppppplVar15,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_7103776390(&local_1e0,&local_a0,(long ****)ppppppppplVar15,param_4,param_5,param_6,param_7
                     ,param_8);
      pppplVar30 = *(long *****)(*(long *)(param_1 + 8) + 0x78);
      lVar22 = *(long *)(param_1 + uVar26 * 0xd90 + 0xf78);
      FUN_7103776390(&local_180,&local_1e0,(long ****)ppppppppplVar15,param_4,param_5,param_6,
                     param_7,param_8);
      FUN_7101b80180(lVar22,&local_180,pppplVar30,param_4,param_5,param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d988;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        uVar12 = *(ulong *)(uVar23 + 0x18);
        *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar23 + 0x18) = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        FUN_710392eb40(uVar23);
      }
      uVar23 = local_1d8;
      local_1e0 = &PTR_FUN_710523d988;
      local_1d8 = 0;
      if (uVar23 != 0) {
        uVar12 = *(ulong *)(uVar23 + 0x18);
        *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar23 + 0x18) = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        FUN_710392eb40(uVar23);
      }
      puVar14 = local_98;
      local_a0 = (long ***)&PTR_FUN_710523d988;
      local_98 = (undefined8 *)0x0;
      if (puVar14 != (undefined8 *)0x0) {
        uVar23 = *(ulong *)((long)puVar14 + 0x18);
        *(undefined ***)((long)puVar14 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)((long)puVar14 + 0x18) = 0;
        if (uVar23 != 0) {
          FUN_710392eb40(uVar23);
        }
        FUN_710392eb40((ulong)puVar14);
      }
      FUN_7103776640(&local_a0,(long)&local_1d0,(byte ****)"pickel",pppplVar30,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_7103776390(&local_1f0,&local_a0,pppplVar30,param_4,param_5,param_6,param_7,param_8);
      lVar22 = *(long *)(param_1 + uVar26 * 0xd90 + 0xf80);
      FUN_7103776390(&local_180,&local_1f0,pppplVar30,param_4,param_5,param_6,param_7,param_8);
      FUN_7101b86760(lVar22,&local_180,pppplVar30,param_4,param_5,param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d988;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        uVar12 = *(ulong *)(uVar23 + 0x18);
        *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar23 + 0x18) = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        FUN_710392eb40(uVar23);
      }
      uVar23 = local_1e8;
      local_1f0 = &PTR_FUN_710523d988;
      local_1e8 = 0;
      if (uVar23 != 0) {
        uVar12 = *(ulong *)(uVar23 + 0x18);
        *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar23 + 0x18) = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        FUN_710392eb40(uVar23);
      }
      puVar14 = local_98;
      local_a0 = (long ***)&PTR_FUN_710523d988;
      local_98 = (undefined8 *)0x0;
      if (puVar14 != (undefined8 *)0x0) {
        uVar23 = *(ulong *)((long)puVar14 + 0x18);
        *(undefined ***)((long)puVar14 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)((long)puVar14 + 0x18) = 0;
        if (uVar23 != 0) {
          FUN_710392eb40(uVar23);
        }
        FUN_710392eb40((ulong)puVar14);
      }
      FUN_7103776640(&local_180,(long)&local_1d0,(byte ****)"demon",pppplVar30,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_71037780e0(&local_a0,(long)&local_180,(long ****)"demon_in",pppplVar30,param_4,param_5,
                     param_6,param_7,param_8);
      puVar14 = local_98;
      if ((long ****)(param_1 + uVar26 * 0xd90 + 0xef8) != &local_a0) {
        lVar22 = param_1 + uVar26 * 0xd90;
        **(undefined8 **)(lVar22 + 0xf00) = *local_98;
        *(undefined8 *)(*(long *)(lVar22 + 0xf00) + 8) = local_98[1];
        *(undefined1 *)(*(long *)(lVar22 + 0xf00) + 0x10) = *(undefined1 *)(local_98 + 2);
      }
      local_a0 = (long ***)&PTR_FUN_710523d9e8;
      bVar7 = local_98 != (undefined8 *)0x0;
      local_98 = (undefined8 *)0x0;
      if (bVar7) {
        local_98 = (undefined8 *)0x0;
        local_a0 = (long ***)&PTR_FUN_710523d9e8;
        FUN_710392eb40((ulong)puVar14);
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d988;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        uVar12 = *(ulong *)(uVar23 + 0x18);
        *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar23 + 0x18) = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        FUN_710392eb40(uVar23);
      }
      FUN_7103776640(&local_180,(long)&local_1d0,(byte ****)"demon",pppplVar30,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_71037780e0(&local_a0,(long)&local_180,(long ****)"demon_loop",pppplVar30,param_4,param_5,
                     param_6,param_7,param_8);
      puVar14 = local_98;
      if ((long ****)(param_1 + uVar26 * 0xd90 + 0xf08) != &local_a0) {
        lVar22 = param_1 + uVar26 * 0xd90;
        **(undefined8 **)(lVar22 + 0xf10) = *local_98;
        *(undefined8 *)(*(long *)(lVar22 + 0xf10) + 8) = local_98[1];
        *(undefined1 *)(*(long *)(lVar22 + 0xf10) + 0x10) = *(undefined1 *)(local_98 + 2);
      }
      local_a0 = (long ***)&PTR_FUN_710523d9e8;
      bVar7 = local_98 != (undefined8 *)0x0;
      local_98 = (undefined8 *)0x0;
      if (bVar7) {
        local_98 = (undefined8 *)0x0;
        local_a0 = (long ***)&PTR_FUN_710523d9e8;
        FUN_710392eb40((ulong)puVar14);
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d988;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        uVar12 = *(ulong *)(uVar23 + 0x18);
        *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar23 + 0x18) = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        FUN_710392eb40(uVar23);
      }
      FUN_7103776640(&local_180,(long)&local_1d0,(byte ****)"demon",pppplVar30,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_71037780e0(&local_a0,(long)&local_180,(long ****)"demon_out",pppplVar30,param_4,param_5,
                     param_6,param_7,param_8);
      puVar14 = local_98;
      if ((long ****)(param_1 + uVar26 * 0xd90 + 0xf18) != &local_a0) {
        lVar22 = param_1 + uVar26 * 0xd90;
        **(undefined8 **)(lVar22 + 0xf20) = *local_98;
        *(undefined8 *)(*(long *)(lVar22 + 0xf20) + 8) = local_98[1];
        *(undefined1 *)(*(long *)(lVar22 + 0xf20) + 0x10) = *(undefined1 *)(local_98 + 2);
      }
      local_a0 = (long ***)&PTR_FUN_710523d9e8;
      bVar7 = local_98 != (undefined8 *)0x0;
      local_98 = (undefined8 *)0x0;
      if (bVar7) {
        local_98 = (undefined8 *)0x0;
        local_a0 = (long ***)&PTR_FUN_710523d9e8;
        FUN_710392eb40((ulong)puVar14);
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d988;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        uVar12 = *(ulong *)(uVar23 + 0x18);
        *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar23 + 0x18) = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        FUN_710392eb40(uVar23);
      }
      FUN_7103776640(&local_180,(long)&local_1d0,(byte ****)"demon",pppplVar30,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_7103776910(&local_a0,(long)&local_180,(long ****)"set_txt_00",pppplVar30,param_4,param_5,
                     param_6,param_7,param_8);
      puVar14 = local_98;
      if ((long ****)(param_1 + uVar26 * 0xd90 + 0xf30) != &local_a0) {
        lVar22 = param_1 + uVar26 * 0xd90;
        **(undefined8 **)(lVar22 + 0xf38) = *local_98;
        *(undefined8 *)(*(long *)(lVar22 + 0xf38) + 8) = local_98[1];
        *(undefined8 *)(*(long *)(lVar22 + 0xf38) + 0x10) = local_98[2];
        *(undefined8 *)(*(long *)(lVar22 + 0xf38) + 0x18) = local_98[3];
      }
      local_a0 = (long ***)&PTR_FUN_710523d9a8;
      bVar7 = local_98 != (undefined8 *)0x0;
      local_98 = (undefined8 *)0;
      if (bVar7) {
        local_98 = (undefined8 *)0x0;
        local_a0 = (long ***)&PTR_FUN_710523d9a8;
        FUN_710392eb40((ulong)puVar14);
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d988;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        uVar12 = *(ulong *)(uVar23 + 0x18);
        *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar23 + 0x18) = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        FUN_710392eb40(uVar23);
      }
      FUN_7103776640(&local_200,(long)&local_1d0,(byte ****)"trail",pppplVar30,param_4,param_5,
                     param_6,param_7,param_8);
      FUN_7103776390(&local_210,&local_200,pppplVar30,param_4,param_5,param_6,param_7,param_8);
      lVar22 = *(long *)(param_1 + uVar26 * 0xd90 + 0xf88);
      FUN_7103776390(&local_190,&local_210,pppplVar30,param_4,param_5,param_6,param_7,param_8);
      local_178 = "set_txt_1_1";
      local_168 = "set_txt_1_2";
      local_158 = "set_txt_2";
      local_148 = "set_txt_3_1";
      local_a0 = (long ***)&local_180;
      local_180 = (undefined **)((ulong)local_180 & 0xffffffff00000000);
      pppplVar30 = &local_a0;
      local_170 = 1;
      local_160 = 2;
      local_150 = 3;
      local_98 = (undefined8 *)0x4;
      FUN_7101b8b370(lVar22,(long)&local_190,pppplVar30,param_4,param_5,param_6,param_7,param_8);
      local_178 = "close";
      local_168 = "down";
      local_158 = "1_type_f";
      local_148 = "1_type_s";
      local_138 = "1_type_b";
      local_130 = 5;
      local_128 = "2_type_f";
      local_120 = 6;
      local_118 = "2_type_s";
      local_110 = 7;
      local_108 = "2_type_b";
      local_100 = 8;
      local_f8 = "3_type_f";
      local_f0 = 9;
      local_e8 = "3_type_s";
      local_e0 = 10;
      local_d8 = "3_type_b";
      local_d0 = 0xb;
      local_c8 = "key_anim";
      local_c0 = 0xc;
      local_b8 = "all_out";
      local_b0 = 0xd;
      local_180 = (undefined **)((ulong)local_180 & 0xffffffff00000000);
      local_170 = 1;
      local_160 = 2;
      local_150 = 3;
      local_140 = 4;
      local_a8 = "all_in";
      local_a0 = (long ***)&PTR_FUN_710523d9e8;
      puVar14 = (undefined8 *)
                FUN_710392e290(0x10,0x18,pppplVar30,param_4,param_5,param_6,param_7,param_8);
      if (puVar14 == (undefined8 *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_74 = 0;
          local_90[0] = (long ***)&SUB_00000018;
          pppplVar30 = local_90;
          uVar23 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_74);
          if (((uVar23 & 1) != 0) &&
             (puVar14 = (undefined8 *)
                        FUN_710392e290(0x10,0x18,pppplVar30,param_4,param_5,param_6,param_7,param_8)
             , puVar14 != (undefined8 *)0x0)) goto LAB_7101b71518;
        }
        puVar14 = (undefined8 *)0x0;
      }
LAB_7101b71518:
      *puVar14 = 0;
      puVar14[1] = 0;
      *(undefined1 *)(puVar14 + 2) = 1;
      if ((long ****)(lVar22 + 0x50) != &local_a0) {
        **(undefined8 **)(lVar22 + 0x58) = *puVar14;
        *(undefined8 *)(*(long *)(lVar22 + 0x58) + 8) = puVar14[1];
        *(undefined1 *)(*(long *)(lVar22 + 0x58) + 0x10) = *(undefined1 *)(puVar14 + 2);
      }
      if ((long ****)(lVar22 + 0x60) != &local_a0) {
        **(undefined8 **)(lVar22 + 0x68) = *puVar14;
        *(undefined8 *)(*(long *)(lVar22 + 0x68) + 8) = puVar14[1];
        *(undefined1 *)(*(long *)(lVar22 + 0x68) + 0x10) = *(undefined1 *)(puVar14 + 2);
      }
      if ((long ****)(lVar22 + 0x70) != &local_a0) {
        **(undefined8 **)(lVar22 + 0x78) = *puVar14;
        *(undefined8 *)(*(long *)(lVar22 + 0x78) + 8) = puVar14[1];
        *(undefined1 *)(*(long *)(lVar22 + 0x78) + 0x10) = *(undefined1 *)(puVar14 + 2);
      }
      if ((long ****)(lVar22 + 0x80) != &local_a0) {
        **(undefined8 **)(lVar22 + 0x88) = *puVar14;
        *(undefined8 *)(*(long *)(lVar22 + 0x88) + 8) = puVar14[1];
        *(undefined1 *)(*(long *)(lVar22 + 0x88) + 0x10) = *(undefined1 *)(puVar14 + 2);
      }
      if ((long ****)(lVar22 + 0x90) != &local_a0) {
        **(undefined8 **)(lVar22 + 0x98) = *puVar14;
        *(undefined8 *)(*(long *)(lVar22 + 0x98) + 8) = puVar14[1];
        *(undefined1 *)(*(long *)(lVar22 + 0x98) + 0x10) = *(undefined1 *)(puVar14 + 2);
      }
      if ((long ****)(lVar22 + 0xa0) != &local_a0) {
        **(undefined8 **)(lVar22 + 0xa8) = *puVar14;
        *(undefined8 *)(*(long *)(lVar22 + 0xa8) + 8) = puVar14[1];
        *(undefined1 *)(*(long *)(lVar22 + 0xa8) + 0x10) = *(undefined1 *)(puVar14 + 2);
      }
      if ((long ****)(lVar22 + 0xb0) != &local_a0) {
        **(undefined8 **)(lVar22 + 0xb8) = *puVar14;
        *(undefined8 *)(*(long *)(lVar22 + 0xb8) + 8) = puVar14[1];
        *(undefined1 *)(*(long *)(lVar22 + 0xb8) + 0x10) = *(undefined1 *)(puVar14 + 2);
      }
      if ((long ****)(lVar22 + 0xc0) != &local_a0) {
        **(undefined8 **)(lVar22 + 200) = *puVar14;
        *(undefined8 *)(*(long *)(lVar22 + 200) + 8) = puVar14[1];
        *(undefined1 *)(*(long *)(lVar22 + 200) + 0x10) = *(undefined1 *)(puVar14 + 2);
      }
      if ((long ****)(lVar22 + 0xd0) != &local_a0) {
        **(undefined8 **)(lVar22 + 0xd8) = *puVar14;
        *(undefined8 *)(*(long *)(lVar22 + 0xd8) + 8) = puVar14[1];
        *(undefined1 *)(*(long *)(lVar22 + 0xd8) + 0x10) = *(undefined1 *)(puVar14 + 2);
      }
      if ((long ****)(lVar22 + 0xe0) != &local_a0) {
        **(undefined8 **)(lVar22 + 0xe8) = *puVar14;
        *(undefined8 *)(*(long *)(lVar22 + 0xe8) + 8) = puVar14[1];
        *(undefined1 *)(*(long *)(lVar22 + 0xe8) + 0x10) = *(undefined1 *)(puVar14 + 2);
      }
      if ((long ****)(lVar22 + 0xf0) != &local_a0) {
        **(undefined8 **)(lVar22 + 0xf8) = *puVar14;
        *(undefined8 *)(*(long *)(lVar22 + 0xf8) + 8) = puVar14[1];
        *(undefined1 *)(*(long *)(lVar22 + 0xf8) + 0x10) = *(undefined1 *)(puVar14 + 2);
      }
      if ((long ****)(lVar22 + 0x100) != &local_a0) {
        **(undefined8 **)(lVar22 + 0x108) = *puVar14;
        *(undefined8 *)(*(long *)(lVar22 + 0x108) + 8) = puVar14[1];
        *(undefined1 *)(*(long *)(lVar22 + 0x108) + 0x10) = *(undefined1 *)(puVar14 + 2);
      }
      if ((long ****)(lVar22 + 0x110) != &local_a0) {
        **(undefined8 **)(lVar22 + 0x118) = *puVar14;
        *(undefined8 *)(*(long *)(lVar22 + 0x118) + 8) = puVar14[1];
        *(undefined1 *)(*(long *)(lVar22 + 0x118) + 0x10) = *(undefined1 *)(puVar14 + 2);
      }
      if ((long ****)(lVar22 + 0x120) != &local_a0) {
        **(undefined8 **)(lVar22 + 0x128) = *puVar14;
        *(undefined8 *)(*(long *)(lVar22 + 0x128) + 8) = puVar14[1];
        *(undefined1 *)(*(long *)(lVar22 + 0x128) + 0x10) = *(undefined1 *)(puVar14 + 2);
      }
      local_a0 = (long ***)&PTR_FUN_710523d9e8;
      local_98 = (undefined8 *)0x0;
      if (puVar14 != (undefined8 *)0x0) {
        FUN_710392eb40((ulong)puVar14);
      }
      pppplVar34 = (long ****)&local_180;
      do {
        if (0xd < *(uint *)pppplVar34) {
LAB_7101b73254:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        FUN_71037780e0(&local_a0,(long)&local_190,(long ****)pppplVar34[1],pppplVar30,param_4,
                       param_5,param_6,param_7,param_8);
        puVar14 = local_98;
        if (0xd < *(uint *)pppplVar34) goto LAB_7101b73254;
        lVar32 = lVar22 + (long)(int)*(uint *)pppplVar34 * 0x10;
        if ((long ****)(lVar32 + 0x50) != &local_a0) {
          local_98 = (undefined8 *)0x0;
          uVar23 = *(ulong *)(lVar32 + 0x58);
          *(undefined8 **)(lVar32 + 0x58) = puVar14;
          if (uVar23 != 0) {
            FUN_710392eb40(uVar23);
          }
        }
        puVar14 = local_98;
        local_a0 = (long ***)&PTR_FUN_710523d9e8;
        local_98 = (undefined8 *)0x0;
        if (puVar14 != (undefined8 *)0x0) {
          FUN_710392eb40((ulong)puVar14);
        }
        pppplVar34 = pppplVar34 + 2;
      } while (pppplVar34 != &local_a0);
      FUN_710377b140(lVar22 + 0x50);
      uVar23 = local_188;
      local_190 = &PTR_FUN_710523d988;
      local_188 = 0;
      if (uVar23 != 0) {
        uVar12 = *(ulong *)(uVar23 + 0x18);
        *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar23 + 0x18) = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        FUN_710392eb40(uVar23);
      }
      uVar23 = local_208;
      local_210 = &PTR_FUN_710523d988;
      local_208 = 0;
      if (uVar23 != 0) {
        uVar12 = *(ulong *)(uVar23 + 0x18);
        *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar23 + 0x18) = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        FUN_710392eb40(uVar23);
      }
      uVar23 = local_1f8;
      local_200 = &PTR_FUN_710523d988;
      local_1f8 = 0;
      if (uVar23 != 0) {
        uVar12 = *(ulong *)(uVar23 + 0x18);
        *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar23 + 0x18) = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        FUN_710392eb40(uVar23);
      }
      uVar16 = 0;
      FUN_7103776640(&local_a0,(long)&local_1d0,(byte ****)"sp_%02d",0,param_4,param_5,param_6,
                     param_7,param_8);
      FUN_71037780e0(&local_180,(long)&local_a0,(long ****)&DAT_71043f0699,uVar16,param_4,param_5,
                     param_6,param_7,param_8);
      pcVar9 = local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x970) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar23 = *(ulong *)(lVar22 + 0x978);
        *(char **)(lVar22 + 0x978) = pcVar9;
        if (uVar23 != 0) {
          FUN_710392eb40(uVar23);
        }
      }
      pcVar9 = local_178;
      local_180 = &PTR_FUN_710523d9e8;
      local_178 = (char *)0x0;
      if (pcVar9 != (char *)0x0) {
        FUN_710392eb40((ulong)pcVar9);
      }
      FUN_71037780e0(&local_180,(long)&local_a0,(long ****)"sp_anim_in",uVar16,param_4,param_5,
                     param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x980) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x988);
        *(ulong *)(lVar22 + 0x988) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9e8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_71037780e0(&local_180,(long)&local_a0,(long ****)"sp_anim_out",uVar16,param_4,param_5,
                     param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      puVar14 = (undefined8 *)(param_1 + uVar26 * 0xd90 + 0x990);
      if (puVar14 != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x998);
        *(ulong *)(lVar22 + 0x998) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9e8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_71037780e0(&local_180,(long)&local_a0,(long ****)"sp_anim_loop",uVar16,param_4,param_5,
                     param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x9a0) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x9a8);
        *(ulong *)(lVar22 + 0x9a8) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9e8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      puVar4 = local_98;
      local_a0 = (long ***)&PTR_FUN_710523d988;
      local_98 = (undefined8 *)0x0;
      if (puVar4 != (undefined8 *)0x0) {
        uVar23 = *(ulong *)((long)puVar4 + 0x18);
        *(undefined ***)((long)puVar4 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)((long)puVar4 + 0x18) = 0;
        if (uVar23 != 0) {
          FUN_710392eb40(uVar23);
        }
        FUN_710392eb40((ulong)puVar4);
      }
      uVar16 = 1;
      FUN_7103776640(&local_a0,(long)&local_1d0,(byte ****)"sp_%02d",1,param_4,param_5,param_6,
                     param_7,param_8);
      FUN_71037780e0(&local_180,(long)&local_a0,(long ****)&DAT_71043f0699,uVar16,param_4,param_5,
                     param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x9b8) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x9c0);
        *(ulong *)(lVar22 + 0x9c0) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9e8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_71037780e0(&local_180,(long)&local_a0,(long ****)"sp_anim_in",uVar16,param_4,param_5,
                     param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x9c8) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x9d0);
        *(ulong *)(lVar22 + 0x9d0) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9e8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_71037780e0(&local_180,(long)&local_a0,(long ****)"sp_anim_out",uVar16,param_4,param_5,
                     param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      puVar4 = (undefined8 *)(param_1 + uVar26 * 0xd90 + 0x9d8);
      if (puVar4 != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x9e0);
        *(ulong *)(lVar22 + 0x9e0) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9e8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_71037780e0(&local_180,(long)&local_a0,(long ****)"sp_anim_loop",uVar16,param_4,param_5,
                     param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0x9e8) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0x9f0);
        *(ulong *)(lVar22 + 0x9f0) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9e8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      puVar5 = local_98;
      local_a0 = (long ***)&PTR_FUN_710523d988;
      local_98 = (undefined8 *)0x0;
      if (puVar5 != (undefined8 *)0x0) {
        uVar23 = *(ulong *)((long)puVar5 + 0x18);
        *(undefined ***)((long)puVar5 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)((long)puVar5 + 0x18) = 0;
        if (uVar23 != 0) {
          FUN_710392eb40(uVar23);
        }
        FUN_710392eb40((ulong)puVar5);
      }
      uVar16 = 2;
      FUN_7103776640(&local_a0,(long)&local_1d0,(byte ****)"sp_%02d",2,param_4,param_5,param_6,
                     param_7,param_8);
      FUN_71037780e0(&local_180,(long)&local_a0,(long ****)&DAT_71043f0699,uVar16,param_4,param_5,
                     param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0xa00) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0xa08);
        *(ulong *)(lVar22 + 0xa08) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9e8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_71037780e0(&local_180,(long)&local_a0,(long ****)"sp_anim_in",uVar16,param_4,param_5,
                     param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0xa10) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0xa18);
        *(ulong *)(lVar22 + 0xa18) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9e8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_71037780e0(&local_180,(long)&local_a0,(long ****)"sp_anim_out",uVar16,param_4,param_5,
                     param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      puVar5 = (undefined8 *)(param_1 + uVar26 * 0xd90 + 0xa20);
      if (puVar5 != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0xa28);
        *(ulong *)(lVar22 + 0xa28) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9e8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_71037780e0(&local_180,(long)&local_a0,(long ****)"sp_anim_loop",uVar16,param_4,param_5,
                     param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0xa30) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0xa38);
        *(ulong *)(lVar22 + 0xa38) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9e8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      puVar6 = local_98;
      local_a0 = (long ***)&PTR_FUN_710523d988;
      local_98 = (undefined8 *)0x0;
      if (puVar6 != (undefined8 *)0x0) {
        uVar23 = *(ulong *)((long)puVar6 + 0x18);
        *(undefined ***)((long)puVar6 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)((long)puVar6 + 0x18) = 0;
        if (uVar23 != 0) {
          FUN_710392eb40(uVar23);
        }
        FUN_710392eb40((ulong)puVar6);
      }
      ppuVar17 = (undefined **)0x3;
      FUN_7103776640(&local_a0,(long)&local_1d0,(byte ****)"sp_%02d",3,param_4,param_5,param_6,
                     param_7,param_8);
      FUN_71037780e0(&local_180,(long)&local_a0,(long ****)&DAT_71043f0699,ppuVar17,param_4,param_5,
                     param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0xa48) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0xa50);
        *(ulong *)(lVar22 + 0xa50) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9e8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_71037780e0(&local_180,(long)&local_a0,(long ****)"sp_anim_in",ppuVar17,param_4,param_5,
                     param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0xa58) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0xa60);
        *(ulong *)(lVar22 + 0xa60) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9e8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_71037780e0(&local_180,(long)&local_a0,(long ****)"sp_anim_out",ppuVar17,param_4,param_5,
                     param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      puVar6 = (undefined8 *)(param_1 + uVar26 * 0xd90 + 0xa68);
      if (puVar6 != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0xa70);
        *(ulong *)(lVar22 + 0xa70) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9e8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      FUN_71037780e0(&local_180,(long)&local_a0,(long ****)"sp_anim_loop",ppuVar17,param_4,param_5,
                     param_6,param_7,param_8);
      uVar23 = (ulong)local_178;
      if ((undefined8 *)(param_1 + uVar26 * 0xd90 + 0xa78) != &local_180) {
        lVar22 = param_1 + uVar26 * 0xd90;
        local_178 = (char *)0x0;
        uVar12 = *(ulong *)(lVar22 + 0xa80);
        *(ulong *)(lVar22 + 0xa80) = uVar23;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
      }
      uVar23 = (ulong)local_178;
      local_180 = &PTR_FUN_710523d9e8;
      local_178 = (char *)0x0;
      if (uVar23 != 0) {
        FUN_710392eb40(uVar23);
      }
      puVar10 = local_98;
      local_a0 = (long ***)&PTR_FUN_710523d988;
      local_98 = (undefined8 *)0x0;
      if (puVar10 != (undefined8 *)0x0) {
        uVar23 = *(ulong *)((long)puVar10 + 0x18);
        *(undefined ***)((long)puVar10 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)((long)puVar10 + 0x18) = 0;
        if (uVar23 != 0) {
          FUN_710392eb40(uVar23);
        }
        FUN_710392eb40((ulong)puVar10);
      }
      FUN_710377b010(0x40800000,(long)puVar2);
      plVar13 = *(long **)(*(long *)(param_1 + uVar26 * 0xd90 + 0x998) + 8);
      uVar16 = uVar38;
      if (plVar13 != (long *)0x0) {
        uVar16 = (**(code **)(*plVar13 + 0x1a8))();
      }
      FUN_710377b010(uVar16,(long)puVar14);
      plVar13 = *(long **)(*(long *)(param_1 + uVar26 * 0xd90 + 0x9e0) + 8);
      uVar16 = uVar38;
      if (plVar13 != (long *)0x0) {
        uVar16 = (**(code **)(*plVar13 + 0x1a8))();
      }
      FUN_710377b010(uVar16,(long)puVar4);
      plVar13 = *(long **)(*(long *)(param_1 + uVar26 * 0xd90 + 0xa28) + 8);
      uVar16 = uVar38;
      if (plVar13 != (long *)0x0) {
        uVar16 = (**(code **)(*plVar13 + 0x1a8))();
      }
      FUN_710377b010(uVar16,(long)puVar5);
      plVar13 = *(long **)(*(long *)(param_1 + uVar26 * 0xd90 + 0xa70) + 8);
      uVar16 = uVar38;
      if (plVar13 != (long *)0x0) {
        uVar16 = (**(code **)(*plVar13 + 0x1a8))();
      }
      FUN_710377b010(uVar16,(long)puVar6);
      if ((long)uVar26 < (long)iVar33) {
        FUN_710377aee0(0x3f800000,(long)puVar3);
      }
      else {
        lVar22 = param_1 + uVar26 * 0xd90;
        plVar13 = *(long **)(lVar22 + 0x5a8);
        plVar31 = (long *)plVar13[1];
        if (plVar31 != (long *)0x0) {
          if ((char)plVar13[2] != '\0') {
            plVar36 = *(long **)(*plVar13 + 0x80);
            plVar13 = (long *)(*plVar13 + 0x88);
            if (plVar36 != plVar13) {
              do {
                while( true ) {
                  uVar23 = (**(code **)(*(long *)plVar36[0xd] + 0x148))();
                  if (((uVar23 & 1) != 0) &&
                     (uVar23 = (**(code **)(*plVar31 + 0x120))(plVar31,plVar36[0xd]),
                     (uVar23 & 1) != 0)) {
                    (**(code **)(*(long *)plVar36[0xd] + 0x178))();
                    (**(code **)(*(long *)plVar36[0xd] + 0x140))((long *)plVar36[0xd],0);
                  }
                  plVar19 = (long *)plVar36[1];
                  if ((long *)plVar36[1] == (long *)0x0) break;
                  do {
                    plVar36 = plVar19;
                    plVar19 = (long *)*plVar36;
                  } while ((long *)*plVar36 != (long *)0x0);
LAB_7101b7214c:
                  if (plVar36 == plVar13) goto LAB_7101b72164;
                }
                plVar19 = plVar36 + 2;
                plVar24 = (long *)*plVar19;
                if ((long *)*plVar24 != plVar36) {
                  do {
                    lVar32 = *plVar19;
                    plVar19 = (long *)(lVar32 + 0x10);
                    plVar36 = (long *)*plVar19;
                  } while (*plVar36 != lVar32);
                  goto LAB_7101b7214c;
                }
                plVar36 = plVar24;
              } while (plVar24 != plVar13);
LAB_7101b72164:
              plVar31 = *(long **)(*(long *)(lVar22 + 0x5a8) + 8);
            }
          }
          (**(code **)(*plVar31 + 0x178))(plVar31);
        }
      }
      uVar23 = local_1c8;
      local_1d0 = &PTR_FUN_710523d988;
      local_1c8 = 0;
      if (uVar23 != 0) {
        uVar12 = *(ulong *)(uVar23 + 0x18);
        *(undefined ***)(uVar23 + 0x10) = &PTR_FUN_710523d9a8;
        *(undefined8 *)(uVar23 + 0x18) = 0;
        if (uVar12 != 0) {
          FUN_710392eb40(uVar12);
        }
        FUN_710392eb40(uVar23);
      }
    }
    uVar26 = uVar26 + 1;
    if (uVar26 == 8) {
      if (local_1c0 != (long ***)0x0) {
        local_1b8 = local_1c0;
        FUN_710392eb40((ulong)local_1c0);
      }
      if (local_1a8 != (long ***)0x0) {
        local_1a0 = local_1a8;
        FUN_710392eb40((ulong)local_1a8);
      }
      return;
    }
  } while( true );
LAB_7101b69e50:
  FUN_71003a4ca0((uint *)&local_180,"p%d",5,ppuVar17,param_4,param_5,param_6,param_7,param_8);
  if (local_1a0 < ppplStack_198) {
    *(uint *)local_1a0 = 0;
    for (uVar26 = 0; *(char *)((long)&local_178 + uVar26) != '\0'; uVar26 = uVar26 + 2) {
      *(char *)((long)local_1a0 + uVar26 + 8) = *(char *)((long)&local_178 + uVar26);
      if (0x3e < (int)uVar26 + 1U) {
        uVar26 = (ulong)((int)uVar26 + 1);
        break;
      }
      cVar28 = *(char *)((long)&local_178 + uVar26 + 1);
      if (cVar28 == '\0') {
        uVar26 = uVar26 + 1;
        break;
      }
      *(char *)((long)local_1a0 + uVar26 + 9) = cVar28;
    }
    *(undefined1 *)((long)local_1a0 + (uVar26 & 0xffffffff) + 8) = 0;
    *(uint *)((long)local_1a0 + 4) = (uint)uVar26;
    uVar25 = (uint)*(byte *)(local_1a0 + 1);
    uVar29 = uVar37;
    if (*(byte *)(local_1a0 + 1) != 0) {
      pbVar27 = (byte *)((long)local_1a0 + 9);
      do {
        uVar29 = uVar29 * 0x89 ^ uVar25;
        uVar25 = (uint)*pbVar27;
        pbVar27 = pbVar27 + 1;
      } while (uVar25 != 0);
    }
    *(uint *)local_1a0 = uVar29;
    local_1a0 = local_1a0 + 9;
  }
  else {
    FUN_71019c1c50((ulong *)&local_1a8,(long)&local_180,(long ****)ppuVar17,param_4,param_5,param_6,
                   param_7,param_8);
  }
  FUN_71003a4ca0((uint *)&local_180,"p%d",6,ppuVar17,param_4,param_5,param_6,param_7,param_8);
  if (local_1a0 < ppplStack_198) {
    *(uint *)local_1a0 = 0;
    for (uVar26 = 0; *(char *)((long)&local_178 + uVar26) != '\0'; uVar26 = uVar26 + 2) {
      *(char *)((long)local_1a0 + uVar26 + 8) = *(char *)((long)&local_178 + uVar26);
      if (0x3e < (int)uVar26 + 1U) {
        uVar26 = (ulong)((int)uVar26 + 1);
        break;
      }
      cVar28 = *(char *)((long)&local_178 + uVar26 + 1);
      if (cVar28 == '\0') {
        uVar26 = uVar26 + 1;
        break;
      }
      *(char *)((long)local_1a0 + uVar26 + 9) = cVar28;
    }
    *(undefined1 *)((long)local_1a0 + (uVar26 & 0xffffffff) + 8) = 0;
    *(uint *)((long)local_1a0 + 4) = (uint)uVar26;
    uVar25 = (uint)*(byte *)(local_1a0 + 1);
    uVar29 = uVar37;
    if (*(byte *)(local_1a0 + 1) != 0) {
      pbVar27 = (byte *)((long)local_1a0 + 9);
      do {
        uVar29 = uVar29 * 0x89 ^ uVar25;
        uVar25 = (uint)*pbVar27;
        pbVar27 = pbVar27 + 1;
      } while (uVar25 != 0);
    }
    *(uint *)local_1a0 = uVar29;
    local_1a0 = local_1a0 + 9;
  }
  else {
    FUN_71019c1c50((ulong *)&local_1a8,(long)&local_180,(long ****)ppuVar17,param_4,param_5,param_6,
                   param_7,param_8);
  }
  FUN_71003a4ca0((uint *)&local_180,"p%d",7,ppuVar17,param_4,param_5,param_6,param_7,param_8);
  if (local_1a0 < ppplStack_198) {
    *(uint *)local_1a0 = 0;
    for (uVar26 = 0; *(char *)((long)&local_178 + uVar26) != '\0'; uVar26 = uVar26 + 2) {
      *(char *)((long)local_1a0 + uVar26 + 8) = *(char *)((long)&local_178 + uVar26);
      if (0x3e < (int)uVar26 + 1U) {
        uVar26 = (ulong)((int)uVar26 + 1);
        break;
      }
      cVar28 = *(char *)((long)&local_178 + uVar26 + 1);
      if (cVar28 == '\0') {
        uVar26 = uVar26 + 1;
        break;
      }
      *(char *)((long)local_1a0 + uVar26 + 9) = cVar28;
    }
    *(undefined1 *)((long)local_1a0 + (uVar26 & 0xffffffff) + 8) = 0;
    *(uint *)((long)local_1a0 + 4) = (uint)uVar26;
    uVar25 = (uint)*(byte *)(local_1a0 + 1);
    uVar29 = uVar37;
    if (*(byte *)(local_1a0 + 1) != 0) {
      pbVar27 = (byte *)((long)local_1a0 + 9);
      do {
        uVar29 = uVar29 * 0x89 ^ uVar25;
        uVar25 = (uint)*pbVar27;
        pbVar27 = pbVar27 + 1;
      } while (uVar25 != 0);
    }
    *(uint *)local_1a0 = uVar29;
    local_1a0 = local_1a0 + 9;
  }
  else {
    FUN_71019c1c50((ulong *)&local_1a8,(long)&local_180,(long ****)ppuVar17,param_4,param_5,param_6,
                   param_7,param_8);
  }
  FUN_71003a4ca0((uint *)&local_180,"p%d",8,ppuVar17,param_4,param_5,param_6,param_7,param_8);
  if (local_1a0 < ppplStack_198) {
    *(uint *)local_1a0 = 0;
    for (uVar26 = 0; *(char *)((long)&local_178 + uVar26) != '\0'; uVar26 = uVar26 + 2) {
      *(char *)((long)local_1a0 + uVar26 + 8) = *(char *)((long)&local_178 + uVar26);
      if (0x3e < (int)uVar26 + 1U) {
        uVar26 = (ulong)((int)uVar26 + 1);
        break;
      }
      cVar28 = *(char *)((long)&local_178 + uVar26 + 1);
      if (cVar28 == '\0') {
        uVar26 = uVar26 + 1;
        break;
      }
      *(char *)((long)local_1a0 + uVar26 + 9) = cVar28;
    }
    *(undefined1 *)((long)local_1a0 + (uVar26 & 0xffffffff) + 8) = 0;
    *(uint *)((long)local_1a0 + 4) = (uint)uVar26;
    uVar25 = (uint)*(byte *)(local_1a0 + 1);
    uVar29 = uVar37;
    if (*(byte *)(local_1a0 + 1) != 0) {
      pbVar27 = (byte *)((long)local_1a0 + 9);
      do {
        uVar29 = uVar29 * 0x89 ^ uVar25;
        uVar25 = (uint)*pbVar27;
        pbVar27 = pbVar27 + 1;
      } while (uVar25 != 0);
    }
    *(uint *)local_1a0 = uVar29;
    local_1a0 = local_1a0 + 9;
  }
  else {
    pppplVar30 = &local_1a8;
LAB_7101b6afe4:
    FUN_71019c1c50((ulong *)pppplVar30,(long)&local_180,(long ****)ppuVar17,param_4,param_5,param_6,
                   param_7,param_8);
  }
  goto joined_r0x007101b7320c;
}

