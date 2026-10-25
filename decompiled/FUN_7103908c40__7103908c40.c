// addr:      7103908c40
// offset:    0x3908c40
// name:      FUN_7103908c40
// mangled:   
// signature: undefined __cdecl FUN_7103908c40(uint * param_1)


void FUN_7103908c40(uint *param_1)

{
  ushort uVar1;
  uint *puVar2;
  undefined4 uVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined1 uVar16;
  char cVar17;
  long lVar18;
  long lVar19;
  uint uVar20;
  uint uVar21;
  long *plVar22;
  int iVar23;
  uint *puVar24;
  float *pfVar25;
  int iVar26;
  long lVar27;
  long *plVar28;
  long lVar29;
  long lVar30;
  long *local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  byte local_a0;
  char local_9f;
  undefined1 local_9e;
  long local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  byte local_88;
  undefined1 local_87;
  undefined1 local_86;
  ulong local_80;
  uint local_78;
  undefined4 local_74;
  undefined8 local_70;
  
  uVar7 = param_1[1];
  uVar1 = *(short *)(*(long *)(param_1 + 0xe) + 0xc6) + 1;
  *(ushort *)(*(long *)(param_1 + 0xe) + 0xc6) = uVar1;
  if (200 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_710390b2a0(*(long **)(param_1 + 0xc));
  }
  switch(param_1[4]) {
  case 0x102:
  case 0x10a:
    plVar22 = *(long **)(param_1 + 0xc);
    uVar7 = *(uint *)(plVar22 + 5);
    *(undefined4 *)(plVar22 + 5) = 0xffffffff;
    uVar6 = FUN_7103913040(plVar22,0x7fff801e);
    uVar10 = uVar6;
    if ((uVar7 != 0xffffffff) && (uVar10 = uVar7, uVar6 != 0xffffffff)) {
      uVar10 = uVar6;
      do {
        uVar20 = uVar10;
        uVar9 = *(uint *)(*(long *)(*plVar22 + 0x38) + (long)(int)uVar20 * 4);
        iVar8 = (uVar9 >> 0xe) - 0x1ffff;
        uVar10 = 0xffffffff;
        if (iVar8 != -1) {
          uVar10 = uVar20 + iVar8 + 1;
        }
      } while (uVar10 != 0xffffffff);
      iVar8 = uVar7 + ~uVar20;
      iVar26 = -iVar8;
      if (-1 < iVar8) {
        iVar26 = iVar8;
      }
      if (0x1ffff < iVar26) {
                    /* WARNING: Subroutine does not return */
        FUN_710390eb80(plVar22[2],"control structure too long");
      }
      *(uint *)(*(long *)(*plVar22 + 0x38) + (long)(int)uVar20 * 4) =
           iVar8 * 0x4000 + 0x7fffc000U | uVar9 & 0x3fff;
      uVar10 = uVar6;
    }
    FUN_710390d2e0(param_1,uVar10);
    break;
  case 0x103:
    param_1[2] = param_1[1];
    if (param_1[8] == 0x121) {
      uVar13 = FUN_710390efb0(param_1,(float *)(param_1 + 6));
      param_1[4] = (uint)uVar13;
    }
    else {
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_1 + 8);
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
      param_1[8] = 0x121;
    }
    plVar22 = *(long **)(param_1 + 0xc);
    uVar13 = local_70 >> 0x10;
    local_78 = *(uint *)(*(long *)(plVar22[2] + 0x58) + 0x28);
    local_74 = *(undefined4 *)(*(long *)(plVar22[2] + 0x58) + 0x18);
    local_70._0_2_ = (ushort)*(byte *)((long)plVar22 + 0x3a);
    local_70 = CONCAT62((int6)uVar13,(ushort)local_70) & 0xffffffffff00ffff;
    local_80 = plVar22[3];
    plVar22[3] = (long)&local_80;
    do {
      uVar10 = param_1[4];
      uVar6 = uVar10 - 0x104;
      if (uVar6 < 0x1e && (1 << (ulong)(uVar6 & 0x1f) & 0x20020007U) != 0) break;
      FUN_7103908c40(param_1);
    } while (uVar10 != 0x112);
    FUN_710390ab60(plVar22);
    uVar10 = param_1[1];
    if (param_1[4] != 0x106) {
      if (uVar10 != uVar7) {
        uVar15 = *(undefined8 *)(param_1 + 0xe);
        FUN_710390eb20((long)param_1,0x106);
        iVar8 = 0x103;
        goto LAB_710390a6c0;
      }
      goto LAB_710390a654;
    }
    goto LAB_7103909794;
  case 0x104:
  case 0x105:
  case 0x106:
  case 0x107:
  case 0x10c:
  case 0x10e:
  case 0x10f:
  case 0x110:
  case 0x113:
  case 0x114:
  case 0x115:
  case 0x117:
  case 0x118:
  case 0x119:
  case 0x11a:
  case 0x11b:
  case 0x11c:
  case 0x11d:
  case 0x11e:
  case 0x11f:
switchD_7103908ca4_caseD_104:
    plVar22 = *(long **)(param_1 + 0xc);
    FUN_710390d5f0(param_1,(long *)&local_78);
    if ((param_1[4] == 0x3d) || (param_1[4] == 0x2c)) {
      local_80 = 0;
      FUN_710390db70(param_1,(long *)&local_80,1);
    }
    else {
      if (local_78 != 0xd) {
                    /* WARNING: Subroutine does not return */
        FUN_710390eb80((long)param_1,"syntax error");
      }
      *(uint *)(*(long *)(*plVar22 + 0x38) + (long)(int)local_70 * 4) =
           *(uint *)(*(long *)(*plVar22 + 0x38) + (long)(int)local_70 * 4) & 0xff803fff | 0x4000;
    }
    break;
  case 0x108:
    plVar22 = *(long **)(param_1 + 0xc);
    local_86 = 1;
    local_88 = *(byte *)((long)plVar22 + 0x3a);
    local_90 = *(undefined4 *)(*(long *)(plVar22[2] + 0x58) + 0x28);
    uStack_8c = *(undefined4 *)(*(long *)(plVar22[2] + 0x58) + 0x18);
    local_87 = 0;
    local_98 = plVar22[3];
    plVar22[3] = (long)&local_98;
    puVar24 = param_1 + 8;
    param_1[2] = param_1[1];
    if (*puVar24 == 0x121) {
      uVar13 = FUN_710390efb0(param_1,(float *)(param_1 + 6));
      uVar10 = (uint)uVar13;
      param_1[4] = uVar10;
    }
    else {
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)puVar24;
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
      uVar10 = param_1[4];
      param_1[8] = 0x121;
    }
    if (uVar10 != 0x124) goto LAB_710390a55c;
    pfVar25 = (float *)(param_1 + 6);
    lVar29 = *(long *)pfVar25;
    param_1[2] = param_1[1];
    if (param_1[8] == 0x121) {
      uVar13 = FUN_710390efb0(param_1,pfVar25);
      uVar10 = (uint)uVar13;
      param_1[4] = uVar10;
      if (uVar10 == 0x2c) goto LAB_7103909504;
LAB_7103909364:
      if (uVar10 == 0x10c) goto LAB_7103909504;
      if (uVar10 != 0x3d) {
                    /* WARNING: Subroutine does not return */
        FUN_710390eb80((long)param_1,"\'=\' or \'in\' expected");
      }
      plVar28 = *(long **)(param_1 + 0xc);
      bVar5 = *(byte *)((long)plVar28 + 0x3c);
      puVar12 = FUN_710390eed0((long)param_1,"(for index)",0xb);
      FUN_710390c280((long)param_1,(long)puVar12);
      puVar12 = FUN_710390eed0((long)param_1,"(for limit)",0xb);
      FUN_710390c280((long)param_1,(long)puVar12);
      puVar12 = FUN_710390eed0((long)param_1,"(for step)",10);
      FUN_710390c280((long)param_1,(long)puVar12);
      FUN_710390c280((long)param_1,lVar29);
      if (param_1[4] != 0x3d) {
                    /* WARNING: Subroutine does not return */
        FUN_710390a760((long)param_1,0x3d);
      }
      param_1[2] = param_1[1];
      if (param_1[8] == 0x121) {
        uVar13 = FUN_710390efb0(param_1,pfVar25);
        param_1[4] = (uint)uVar13;
      }
      else {
        *(undefined8 *)(param_1 + 4) = *(undefined8 *)puVar24;
        *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
        param_1[8] = 0x121;
      }
      FUN_710390b770(param_1,(long *)&local_80,0);
      FUN_7103913770(*(long **)(param_1 + 0xc),(int *)&local_80);
      if (param_1[4] != 0x2c) {
                    /* WARNING: Subroutine does not return */
        FUN_710390a760((long)param_1,0x2c);
      }
      param_1[2] = param_1[1];
      if (param_1[8] == 0x121) {
        uVar13 = FUN_710390efb0(param_1,pfVar25);
        param_1[4] = (uint)uVar13;
      }
      else {
        *(undefined8 *)(param_1 + 4) = *(undefined8 *)puVar24;
        *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
        param_1[8] = 0x121;
      }
      FUN_710390b770(param_1,(long *)&local_80,0);
      FUN_7103913770(*(long **)(param_1 + 0xc),(int *)&local_80);
      if (param_1[4] == 0x2c) {
        param_1[2] = param_1[1];
        if (param_1[8] == 0x121) {
          uVar13 = FUN_710390efb0(param_1,pfVar25);
          param_1[4] = (uint)uVar13;
        }
        else {
          *(undefined8 *)(param_1 + 4) = *(undefined8 *)puVar24;
          *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
          param_1[8] = 0x121;
        }
        FUN_710390b770(param_1,(long *)&local_80,0);
        FUN_7103913770(*(long **)(param_1 + 0xc),(int *)&local_80);
      }
      else {
        bVar4 = *(byte *)((long)plVar28 + 0x3c);
        local_80 = 1;
        local_b0 = (long *)0x1;
        local_78 = 2;
        local_a8 = 0x13;
        uVar13 = FUN_71039133b0(plVar28,(float *)&local_80,(float *)&local_b0);
        iVar8 = (int)uVar13;
        uVar10 = (uint)bVar4 << 6;
        if (iVar8 < 0x40000) {
          uVar10 = uVar10 | iVar8 << 0xe | 1;
        }
        else {
          FUN_7103913040(plVar28,uVar10 | 2);
          uVar10 = iVar8 << 6 | 0x2e;
        }
        FUN_7103913040(plVar28,uVar10);
        bVar4 = *(byte *)((long)plVar28 + 0x3c);
        cVar17 = bVar4 + 1;
        if (*(byte *)(*plVar28 + 0xc) <= bVar4) {
          if (0xfd < bVar4) {
                    /* WARNING: Subroutine does not return */
            FUN_710390eb80(plVar28[2],"function or expression needs too many registers");
          }
          *(char *)(*plVar28 + 0xc) = cVar17;
          cVar17 = *(char *)((long)plVar28 + 0x3c) + '\x01';
        }
        *(char *)((long)plVar28 + 0x3c) = cVar17;
      }
      FUN_710390c400(param_1,(uint)bVar5,uVar7,1,1);
    }
    else {
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)puVar24;
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
      uVar10 = param_1[4];
      param_1[8] = 0x121;
      if (uVar10 != 0x2c) goto LAB_7103909364;
LAB_7103909504:
      plVar28 = *(long **)(param_1 + 0xc);
      bVar5 = *(byte *)((long)plVar28 + 0x3c);
      puVar12 = FUN_710390eed0((long)param_1,"(for generator)",0xf);
      FUN_710390c280((long)param_1,(long)puVar12);
      puVar12 = FUN_710390eed0((long)param_1,"(for state)",0xb);
      FUN_710390c280((long)param_1,(long)puVar12);
      puVar12 = FUN_710390eed0((long)param_1,"(for control)",0xd);
      FUN_710390c280((long)param_1,(long)puVar12);
      FUN_710390c280((long)param_1,lVar29);
      uVar10 = param_1[4];
      if (uVar10 == 0x2c) {
        iVar8 = 1;
        do {
          param_1[2] = param_1[1];
          if (param_1[8] == 0x121) {
            uVar13 = FUN_710390efb0(param_1,pfVar25);
            uVar10 = (uint)uVar13;
            param_1[4] = uVar10;
          }
          else {
            *(undefined8 *)(param_1 + 4) = *(undefined8 *)puVar24;
            *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
            uVar10 = param_1[4];
            param_1[8] = 0x121;
          }
          if (uVar10 != 0x124) goto LAB_710390a55c;
          param_1[2] = param_1[1];
          lVar29 = *(long *)(param_1 + 6);
          if (param_1[8] == 0x121) {
            uVar13 = FUN_710390efb0(param_1,pfVar25);
            param_1[4] = (uint)uVar13;
          }
          else {
            *(undefined8 *)(param_1 + 4) = *(undefined8 *)puVar24;
            *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
            *puVar24 = 0x121;
          }
          FUN_710390c280((long)param_1,lVar29);
          uVar10 = param_1[4];
          iVar8 = iVar8 + 1;
        } while (uVar10 == 0x2c);
      }
      else {
        iVar8 = 1;
      }
      if (uVar10 != 0x10c) {
                    /* WARNING: Subroutine does not return */
        FUN_710390a760((long)param_1,0x10c);
      }
      uVar10 = param_1[1];
      param_1[2] = uVar10;
      if (param_1[8] == 0x121) {
        uVar13 = FUN_710390efb0(param_1,pfVar25);
        uVar10 = param_1[1];
        param_1[4] = (uint)uVar13;
      }
      else {
        *(undefined8 *)(param_1 + 4) = *(undefined8 *)puVar24;
        *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
        param_1[8] = 0x121;
      }
      FUN_710390b770(param_1,(long *)&local_80,0);
      if (param_1[4] == 0x2c) {
        iVar26 = 1;
        do {
          param_1[2] = param_1[1];
          if (param_1[8] == 0x121) {
            uVar13 = FUN_710390efb0(param_1,pfVar25);
            param_1[4] = (uint)uVar13;
          }
          else {
            *(undefined8 *)(param_1 + 4) = *(undefined8 *)puVar24;
            *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
            *puVar24 = 0x121;
          }
          FUN_7103913770(*(long **)(param_1 + 0xc),(int *)&local_80);
          FUN_710390b770(param_1,(long *)&local_80,0);
          iVar26 = iVar26 + 1;
        } while (param_1[4] == 0x2c);
      }
      else {
        iVar26 = 1;
      }
      FUN_710390c8b0(*(long **)(param_1 + 0xc),3,iVar26,(int *)&local_80);
      uVar6 = *(byte *)((long)plVar28 + 0x3c) + 3;
      if (*(byte *)(*plVar28 + 0xc) < uVar6) {
        if (0xfe < uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_710390eb80(plVar28[2],"function or expression needs too many registers");
        }
        *(char *)(*plVar28 + 0xc) = (char)uVar6;
      }
      FUN_710390c400(param_1,(uint)bVar5,uVar10,iVar8,0);
    }
    if (param_1[4] != 0x106) {
      if (param_1[1] == uVar7) {
LAB_710390a654:
                    /* WARNING: Subroutine does not return */
        FUN_710390a760((long)param_1,0x106);
      }
      uVar15 = *(undefined8 *)(param_1 + 0xe);
      FUN_710390eb20((long)param_1,0x106);
      iVar8 = 0x108;
LAB_710390a6c0:
      FUN_710390eb20((long)param_1,iVar8);
      uVar15 = FUN_7103908660(uVar15,"%s expected (to close %s at line %d)");
                    /* WARNING: Subroutine does not return */
      FUN_710390eb80((long)param_1,uVar15);
    }
    param_1[2] = param_1[1];
    if (param_1[8] == 0x121) {
      uVar13 = FUN_710390efb0(param_1,pfVar25);
      param_1[4] = (uint)uVar13;
    }
    else {
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)puVar24;
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
      param_1[8] = 0x121;
    }
    goto LAB_710390a400;
  case 0x109:
    puVar24 = param_1 + 8;
    param_1[2] = param_1[1];
    if (*puVar24 == 0x121) {
      uVar13 = FUN_710390efb0(param_1,(float *)(param_1 + 6));
      uVar10 = (uint)uVar13;
      param_1[4] = uVar10;
    }
    else {
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)puVar24;
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
      uVar10 = param_1[4];
      param_1[8] = 0x121;
    }
    if (uVar10 != 0x124) goto LAB_710390a55c;
    uVar13 = *(ulong *)(param_1 + 6);
    param_1[2] = param_1[1];
    if (param_1[8] == 0x121) {
      uVar11 = FUN_710390efb0(param_1,(float *)(param_1 + 6));
      param_1[4] = (uint)uVar11;
    }
    else {
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)puVar24;
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
      param_1[8] = 0x121;
    }
    plVar22 = *(long **)(param_1 + 0xc);
    iVar8 = FUN_710390ca30(plVar22,uVar13,(int *)&local_98,1);
    if (iVar8 == 0) {
      FUN_710390ca30(plVar22,*(long *)(param_1 + 0x1a),(int *)&local_98,1);
      local_78 = *(byte *)(uVar13 + 8) | 0x40;
      local_80 = uVar13;
      uVar13 = FUN_71039133b0(*(long **)(param_1 + 0xc),(float *)&local_80,(float *)&local_80);
      local_70 = 0xffffffffffffffff;
      local_80 = CONCAT44(local_80._4_4_,4);
      local_78 = (uint)uVar13;
      local_90._0_3_ = CONCAT12((char)local_90,(undefined2)local_90);
      uVar10 = FUN_71039141b0(plVar22,(int *)&local_80);
      uVar16 = 8;
      if ((uint)local_98 == 9) {
        uVar16 = 9;
      }
      local_90 = CONCAT13(uVar16,(undefined3)local_90);
      local_90 = CONCAT22(local_90._2_2_,(short)uVar10);
      local_98 = CONCAT44(local_98._4_4_,10);
    }
    while (uVar10 = param_1[4], uVar10 == 0x2e) {
      FUN_710390cb70(param_1,(int *)&local_98);
    }
    if (uVar10 == 0x3a) {
      FUN_710390cb70(param_1,(int *)&local_98);
    }
    FUN_710390ccd0(param_1,(int *)&local_80,(uint)(uVar10 == 0x3a),uVar7);
    FUN_7103914300(*(long **)(param_1 + 0xc),(int *)&local_98,(int *)&local_80);
    *(uint *)(*(long *)(**(long **)(param_1 + 0xc) + 0x48) +
              (long)(int)(*(long **)(param_1 + 0xc))[4] * 4 + -4) = uVar7;
    break;
  case 0x10b:
    plVar22 = *(long **)(param_1 + 0xc);
    local_98 = CONCAT44(local_98._4_4_,0xffffffff);
    do {
      FUN_710390b320(param_1,(uint *)&local_98);
      uVar10 = param_1[4];
    } while (uVar10 == 0x105);
    if (uVar10 == 0x104) {
      param_1[2] = param_1[1];
      if (param_1[8] == 0x121) {
        uVar13 = FUN_710390efb0(param_1,(float *)(param_1 + 6));
        param_1[4] = (uint)uVar13;
      }
      else {
        *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_1 + 8);
        *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
        param_1[8] = 0x121;
      }
      plVar28 = *(long **)(param_1 + 0xc);
      uVar13 = local_70 >> 0x10;
      local_78 = *(uint *)(*(long *)(plVar28[2] + 0x58) + 0x28);
      local_74 = *(undefined4 *)(*(long *)(plVar28[2] + 0x58) + 0x18);
      local_70._0_2_ = (ushort)*(byte *)((long)plVar28 + 0x3a);
      local_70 = CONCAT62((int6)uVar13,(ushort)local_70) & 0xffffffffff00ffff;
      local_80 = plVar28[3];
      plVar28[3] = (long)&local_80;
      do {
        uVar10 = param_1[4];
        uVar6 = uVar10 - 0x104;
        if (uVar6 < 0x1e && (1 << (ulong)(uVar6 & 0x1f) & 0x20020007U) != 0) break;
        FUN_7103908c40(param_1);
      } while (uVar10 != 0x112);
      FUN_710390ab60(plVar28);
      uVar10 = param_1[4];
    }
    if (uVar10 == 0x106) {
      param_1[2] = param_1[1];
      if (param_1[8] == 0x121) {
        uVar13 = FUN_710390efb0(param_1,(float *)(param_1 + 6));
        param_1[4] = (uint)uVar13;
      }
      else {
        *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_1 + 8);
        *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
        param_1[8] = 0x121;
      }
      *(int *)((long)plVar22 + 0x24) = (int)plVar22[4];
      if ((uint)local_98 != 0xffffffff) {
        if (*(uint *)(plVar22 + 5) == 0xffffffff) {
          *(uint *)(plVar22 + 5) = (uint)local_98;
        }
        else {
          uVar7 = *(uint *)(plVar22 + 5);
          do {
            uVar6 = uVar7;
            uVar10 = *(uint *)(*(long *)(*plVar22 + 0x38) + (long)(int)uVar6 * 4);
            iVar8 = (uVar10 >> 0xe) - 0x1ffff;
            uVar7 = 0xffffffff;
            if (iVar8 != -1) {
              uVar7 = uVar6 + iVar8 + 1;
            }
          } while (uVar7 != 0xffffffff);
          iVar8 = (uint)local_98 + ~uVar6;
          iVar26 = -iVar8;
          if (-1 < iVar8) {
            iVar26 = iVar8;
          }
          if (0x1ffff < iVar26) {
                    /* WARNING: Subroutine does not return */
            FUN_710390eb80(plVar22[2],"control structure too long");
          }
          *(uint *)(*(long *)(*plVar22 + 0x38) + (long)(int)uVar6 * 4) =
               iVar8 * 0x4000 + 0x7fffc000U | uVar10 & 0x3fff;
        }
      }
      break;
    }
    if (param_1[1] == uVar7) goto LAB_710390a654;
    uVar15 = *(undefined8 *)(param_1 + 0xe);
    FUN_710390eb20((long)param_1,0x106);
    iVar8 = 0x10b;
    goto LAB_710390a6c0;
  case 0x10d:
    puVar24 = param_1 + 8;
    param_1[2] = param_1[1];
    if (*puVar24 == 0x121) {
      uVar13 = FUN_710390efb0(param_1,(float *)(param_1 + 6));
      uVar7 = (uint)uVar13;
      param_1[4] = uVar7;
    }
    else {
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)puVar24;
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
      uVar7 = param_1[4];
      param_1[8] = 0x121;
    }
    if (uVar7 == 0x109) {
      param_1[2] = param_1[1];
      if (param_1[8] == 0x121) {
        uVar13 = FUN_710390efb0(param_1,(float *)(param_1 + 6));
        uVar7 = (uint)uVar13;
        param_1[4] = uVar7;
      }
      else {
        *(undefined8 *)(param_1 + 4) = *(undefined8 *)puVar24;
        *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
        uVar7 = param_1[4];
        param_1[8] = 0x121;
      }
      if (uVar7 == 0x124) {
        plVar22 = *(long **)(param_1 + 0xc);
        lVar29 = *(long *)(param_1 + 6);
        param_1[2] = param_1[1];
        if (param_1[8] == 0x121) {
          uVar13 = FUN_710390efb0(param_1,(float *)(param_1 + 6));
          param_1[4] = (uint)uVar13;
        }
        else {
          *(undefined8 *)(param_1 + 4) = *(undefined8 *)puVar24;
          *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
          param_1[8] = 0x121;
        }
        FUN_710390c280((long)param_1,lVar29);
        plVar28 = *(long **)(param_1 + 0xc);
        bVar5 = *(char *)((long)plVar28 + 0x3a) + 1;
        *(byte *)((long)plVar28 + 0x3a) = bVar5;
        *(int *)(*(long *)(*plVar28 + 0x50) +
                 (long)*(short *)(**(long **)(plVar28[2] + 0x58) +
                                 (long)(int)(*(int *)((long)plVar28 + 0x34) + (uint)bVar5 + -1) * 2)
                 * 0x10 + 8) = (int)plVar28[4];
        FUN_710390ccd0(param_1,(int *)&local_80,0,param_1[1]);
        *(int *)(*(long *)(*plVar22 + 0x50) +
                 (long)*(short *)(**(long **)(plVar22[2] + 0x58) +
                                 (long)(int)(*(int *)((long)plVar22 + 0x34) + local_78) * 2) * 0x10
                + 8) = (int)plVar22[4];
        break;
      }
    }
    else if (uVar7 == 0x124) {
      pfVar25 = (float *)(param_1 + 6);
      puVar2 = param_1 + 4;
      iVar26 = -1;
      iVar8 = 1;
      do {
        param_1[2] = param_1[1];
        lVar29 = *(long *)(param_1 + 6);
        if (param_1[8] == 0x121) {
          uVar13 = FUN_710390efb0(param_1,pfVar25);
          param_1[4] = (uint)uVar13;
        }
        else {
          *(undefined8 *)puVar2 = *(undefined8 *)puVar24;
          *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
          *puVar24 = 0x121;
        }
        FUN_710390c280((long)param_1,lVar29);
        if (param_1[4] != 0x2c) {
          if (param_1[4] == 0x3d) {
            param_1[2] = param_1[1];
            if (param_1[8] == 0x121) {
              uVar13 = FUN_710390efb0(param_1,pfVar25);
              param_1[4] = (uint)uVar13;
            }
            else {
              *(undefined8 *)puVar2 = *(undefined8 *)puVar24;
              *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
              *puVar24 = 0x121;
            }
            FUN_710390b770(param_1,(long *)&local_80,0);
            iVar23 = 1;
            uVar7 = param_1[4];
            while (uVar7 == 0x2c) {
              param_1[2] = param_1[1];
              if (param_1[8] == 0x121) {
                uVar13 = FUN_710390efb0(param_1,pfVar25);
                param_1[4] = (uint)uVar13;
              }
              else {
                *(undefined8 *)puVar2 = *(undefined8 *)puVar24;
                *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
                *puVar24 = 0x121;
              }
              FUN_7103913770(*(long **)(param_1 + 0xc),(int *)&local_80);
              FUN_710390b770(param_1,(long *)&local_80,0);
              iVar23 = iVar23 + 1;
              uVar7 = param_1[4];
            }
          }
          else {
            iVar23 = 0;
            local_80 = local_80 & 0xffffffff00000000;
          }
          FUN_710390c8b0(*(long **)(param_1 + 0xc),-iVar26,iVar23,(int *)&local_80);
          plVar22 = *(long **)(param_1 + 0xc);
          bVar5 = *(byte *)((long)plVar22 + 0x3a);
          *(byte *)((long)plVar22 + 0x3a) = bVar5 - (char)iVar26;
          *(int *)(*(long *)(*plVar22 + 0x50) +
                   (long)*(short *)(**(long **)(plVar22[2] + 0x58) +
                                   (long)(int)(*(int *)((long)plVar22 + 0x34) +
                                               ((uint)bVar5 + iVar8 & 0xff) + iVar26) * 2) * 0x10 +
                  8) = (int)plVar22[4];
          if (iVar26 != -1) {
            iVar26 = iVar26 + 1;
            do {
              iVar8 = iVar26 + *(int *)((long)plVar22 + 0x34) +
                               (uint)*(byte *)((long)plVar22 + 0x3a);
              iVar26 = iVar26 + 1;
              *(int *)(*(long *)(*plVar22 + 0x50) +
                       (long)*(short *)(**(long **)(plVar22[2] + 0x58) + (long)iVar8 * 2) * 0x10 + 8
                      ) = (int)plVar22[4];
            } while (iVar26 != 0);
          }
          goto LAB_710390a404;
        }
        param_1[2] = param_1[1];
        if (param_1[8] == 0x121) {
          uVar13 = FUN_710390efb0(param_1,pfVar25);
          uVar7 = (uint)uVar13;
          param_1[4] = uVar7;
        }
        else {
          *(undefined8 *)puVar2 = *(undefined8 *)puVar24;
          *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
          uVar7 = param_1[4];
          param_1[8] = 0x121;
        }
        iVar26 = iVar26 + -1;
        iVar8 = iVar8 + 1;
      } while (uVar7 == 0x124);
    }
    goto LAB_710390a55c;
  case 0x111:
    plVar22 = *(long **)(param_1 + 0xc);
    lVar29 = plVar22[4];
    *(int *)((long)plVar22 + 0x24) = (int)lVar29;
    local_86 = 1;
    local_a0 = *(byte *)((long)plVar22 + 0x3a);
    local_90 = *(undefined4 *)(*(long *)(plVar22[2] + 0x58) + 0x28);
    uStack_8c = *(undefined4 *)(*(long *)(plVar22[2] + 0x58) + 0x18);
    local_87 = 0;
    local_98 = plVar22[3];
    local_b0 = &local_98;
    plVar22[3] = (long)local_b0;
    local_9e = 0;
    local_a8 = *(undefined4 *)(*(long *)(plVar22[2] + 0x58) + 0x28);
    uStack_a4 = *(undefined4 *)(*(long *)(plVar22[2] + 0x58) + 0x18);
    local_9f = '\0';
    plVar22[3] = (long)&local_b0;
    puVar24 = param_1 + 8;
    param_1[2] = param_1[1];
    local_88 = local_a0;
    if (*puVar24 == 0x121) {
      uVar13 = FUN_710390efb0(param_1,(float *)(param_1 + 6));
      param_1[4] = (uint)uVar13;
    }
    else {
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)puVar24;
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
      param_1[8] = 0x121;
    }
    do {
      uVar10 = param_1[4];
      if (uVar10 - 0x104 < 0x1e && (1 << (ulong)(uVar10 - 0x104 & 0x1f) & 0x20020007U) != 0)
      goto LAB_710390946c;
      FUN_7103908c40(param_1);
    } while (uVar10 != 0x112);
    uVar10 = param_1[4];
LAB_710390946c:
    if (uVar10 != 0x115) {
      if (param_1[1] == uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_710390a760((long)param_1,0x115);
      }
      uVar15 = *(undefined8 *)(param_1 + 0xe);
      FUN_710390eb20((long)param_1,0x115);
      iVar8 = 0x111;
      goto LAB_710390a6c0;
    }
    param_1[2] = param_1[1];
    if (param_1[8] == 0x121) {
      uVar13 = FUN_710390efb0(param_1,(float *)(param_1 + 6));
      param_1[4] = (uint)uVar13;
    }
    else {
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)puVar24;
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
      param_1[8] = 0x121;
    }
    FUN_710390b770(param_1,(long *)&local_80,0);
    if ((float)local_80 == 1.4013e-45) {
      local_80 = CONCAT44(local_80._4_4_,3);
    }
    FUN_7103914420(*(long **)(param_1 + 0xc),(int *)&local_80);
    if ((local_9f != '\0') && (local_70._4_4_ != 0xffffffff)) {
      uVar7 = local_70._4_4_;
      do {
        uVar13 = -(ulong)(uVar7 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar7 << 2;
        uVar10 = *(uint *)(*(long *)(*plVar22 + 0x38) + uVar13);
        iVar8 = (uVar10 >> 0xe) - 0x1ffff;
        iVar26 = uVar7 + iVar8;
        uVar7 = 0xffffffff;
        if (iVar8 != -1) {
          uVar7 = iVar26 + 1;
        }
        *(uint *)(*(long *)(*plVar22 + 0x38) + uVar13) =
             uVar10 & 0xffffc03f | (uint)local_a0 * 0x40 + 0x40 & 0x3fc0;
      } while (uVar7 != 0xffffffff);
    }
    FUN_710390ab60(plVar22);
    FUN_7103913220(plVar22,local_70._4_4_,(int)lVar29);
LAB_710390a400:
    FUN_710390ab60(plVar22);
    break;
  case 0x112:
    puVar24 = param_1 + 8;
    param_1[2] = param_1[1];
    if (*puVar24 == 0x121) {
      uVar13 = FUN_710390efb0(param_1,(float *)(param_1 + 6));
      uVar7 = (uint)uVar13;
      param_1[4] = uVar7;
    }
    else {
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)puVar24;
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
      param_1[8] = 0x121;
      uVar7 = param_1[4];
    }
    plVar22 = *(long **)(param_1 + 0xc);
    uVar10 = 0;
    if ((uVar7 - 0x104 < 0x1e) && ((1 << (ulong)(uVar7 - 0x104 & 0x1f) & 0x20020007U) != 0)) {
      iVar8 = 0;
    }
    else {
      iVar8 = 0;
      if (uVar7 != 0x3b) {
        FUN_710390b770(param_1,(long *)&local_80,0);
        if (param_1[4] == 0x2c) {
          iVar8 = 1;
          do {
            param_1[2] = param_1[1];
            if (param_1[8] == 0x121) {
              uVar13 = FUN_710390efb0(param_1,(float *)(param_1 + 6));
              param_1[4] = (uint)uVar13;
            }
            else {
              *(undefined8 *)(param_1 + 4) = *(undefined8 *)puVar24;
              *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
              *puVar24 = 0x121;
            }
            FUN_7103913770(*(long **)(param_1 + 0xc),(int *)&local_80);
            FUN_710390b770(param_1,(long *)&local_80,0);
            iVar8 = iVar8 + 1;
          } while (param_1[4] == 0x2c);
        }
        else {
          iVar8 = 1;
        }
        if ((int)(float)local_80 - 0xdU < 2) {
          if ((float)local_80 == 1.96182e-44) {
            *(uint *)(*(long *)(*plVar22 + 0x38) + (long)(int)local_78 * 4) =
                 *(uint *)(*(long *)(*plVar22 + 0x38) + (long)(int)local_78 * 4) & 0x7fffff;
            uVar7 = *(uint *)(*(long *)(*plVar22 + 0x38) + (long)(int)local_78 * 4);
            *(uint *)(*(long *)(*plVar22 + 0x38) + (long)(int)local_78 * 4) =
                 uVar7 & 0xffffc000 | uVar7 & 0x3f | (uint)*(byte *)((long)plVar22 + 0x3c) << 6;
            bVar5 = *(byte *)((long)plVar22 + 0x3c);
            cVar17 = bVar5 + 1;
            if (*(byte *)(*plVar22 + 0xc) <= bVar5) {
              if (0xfd < bVar5) {
                    /* WARNING: Subroutine does not return */
                FUN_710390eb80(plVar22[2],"function or expression needs too many registers");
              }
              *(char *)(*plVar22 + 0xc) = cVar17;
              cVar17 = *(char *)((long)plVar22 + 0x3c) + '\x01';
            }
            *(char *)((long)plVar22 + 0x3c) = cVar17;
          }
          else if ((float)local_80 == 1.82169e-44) {
            *(uint *)(*(long *)(*plVar22 + 0x38) + (long)(int)local_78 * 4) =
                 *(uint *)(*(long *)(*plVar22 + 0x38) + (long)(int)local_78 * 4) & 0xff803fff;
          }
          if ((iVar8 == 1) && ((float)local_80 == 1.82169e-44)) {
            *(uint *)(*(long *)(*plVar22 + 0x38) + (long)(int)local_78 * 4) =
                 *(uint *)(*(long *)(*plVar22 + 0x38) + (long)(int)local_78 * 4) & 0xffffffc0 | 0x25
            ;
          }
          uVar10 = (uint)*(byte *)((long)plVar22 + 0x3a);
          iVar8 = -1;
        }
        else if (iVar8 == 1) {
          uVar10 = FUN_71039140b0(plVar22,(int *)&local_80);
        }
        else {
          FUN_7103913770(plVar22,(int *)&local_80);
          uVar10 = (uint)*(byte *)((long)plVar22 + 0x3a);
        }
      }
    }
    FUN_7103913040(plVar22,iVar8 * 0x800000 + 0x800000U | uVar10 << 6 | 0x26);
    if (param_1[4] != 0x3b) break;
    uVar10 = param_1[1];
LAB_7103909794:
    param_1[2] = uVar10;
    if (param_1[8] == 0x121) {
LAB_71039097a4:
      uVar13 = FUN_710390efb0(param_1,(float *)(param_1 + 6));
      param_1[4] = (uint)uVar13;
    }
    else {
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_1 + 8);
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
LAB_71039097c0:
      param_1[8] = 0x121;
    }
    break;
  case 0x116:
    plVar22 = *(long **)(param_1 + 0xc);
    puVar24 = param_1 + 8;
    param_1[2] = param_1[1];
    if (*puVar24 == 0x121) {
      uVar13 = FUN_710390efb0(param_1,(float *)(param_1 + 6));
      param_1[4] = (uint)uVar13;
    }
    else {
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)puVar24;
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
      param_1[8] = 0x121;
    }
    lVar29 = plVar22[4];
    *(int *)((long)plVar22 + 0x24) = (int)lVar29;
    FUN_710390b770(param_1,(long *)&local_80,0);
    if ((float)local_80 == 1.4013e-45) {
      local_80 = CONCAT44(local_80._4_4_,3);
    }
    FUN_7103914420(*(long **)(param_1 + 0xc),(int *)&local_80);
    local_86 = 1;
    local_88 = *(byte *)((long)plVar22 + 0x3a);
    local_90 = *(undefined4 *)(*(long *)(plVar22[2] + 0x58) + 0x28);
    uStack_8c = *(undefined4 *)(*(long *)(plVar22[2] + 0x58) + 0x18);
    local_87 = 0;
    local_98 = plVar22[3];
    iVar8 = local_70._4_4_;
    plVar22[3] = (long)&local_98;
    if (param_1[4] != 0x103) {
                    /* WARNING: Subroutine does not return */
      FUN_710390a760((long)param_1,0x103);
    }
    param_1[2] = param_1[1];
    if (param_1[8] == 0x121) {
      uVar13 = FUN_710390efb0(param_1,(float *)(param_1 + 6));
      param_1[4] = (uint)uVar13;
    }
    else {
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)puVar24;
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
      param_1[8] = 0x121;
    }
    plVar28 = *(long **)(param_1 + 0xc);
    uVar13 = local_70 >> 0x10;
    local_78 = *(uint *)(*(long *)(plVar28[2] + 0x58) + 0x28);
    local_74 = *(undefined4 *)(*(long *)(plVar28[2] + 0x58) + 0x18);
    local_70._0_2_ = (ushort)*(byte *)((long)plVar28 + 0x3a);
    local_70 = CONCAT62((int6)uVar13,(ushort)local_70) & 0xffffffffff00ffff;
    local_80 = plVar28[3];
    plVar28[3] = (long)&local_80;
    do {
      uVar10 = param_1[4];
      uVar6 = uVar10 - 0x104;
      if (uVar6 < 0x1e && (1 << (ulong)(uVar6 & 0x1f) & 0x20020007U) != 0) break;
      FUN_7103908c40(param_1);
    } while (uVar10 != 0x112);
    FUN_710390ab60(plVar28);
    uVar10 = *(uint *)(plVar22 + 5);
    *(undefined4 *)(plVar22 + 5) = 0xffffffff;
    uVar9 = FUN_7103913040(plVar22,0x7fff801e);
    uVar6 = uVar9;
    if ((uVar10 != 0xffffffff) && (uVar6 = uVar10, uVar9 != 0xffffffff)) {
      uVar6 = uVar9;
      do {
        uVar21 = uVar6;
        uVar20 = *(uint *)(*(long *)(*plVar22 + 0x38) + (long)(int)uVar21 * 4);
        iVar26 = (uVar20 >> 0xe) - 0x1ffff;
        uVar6 = 0xffffffff;
        if (iVar26 != -1) {
          uVar6 = uVar21 + iVar26 + 1;
        }
      } while (uVar6 != 0xffffffff);
      iVar26 = uVar10 + ~uVar21;
      iVar23 = -iVar26;
      if (-1 < iVar26) {
        iVar23 = iVar26;
      }
      if (0x1ffff < iVar23) goto LAB_710390a670;
      *(uint *)(*(long *)(*plVar22 + 0x38) + (long)(int)uVar21 * 4) =
           iVar26 * 0x4000 + 0x7fffc000U | uVar20 & 0x3fff;
      uVar6 = uVar9;
    }
    FUN_7103913220(plVar22,uVar6,(int)lVar29);
    if (param_1[4] != 0x106) {
      if (param_1[1] == uVar7) goto LAB_710390a654;
      uVar15 = *(undefined8 *)(param_1 + 0xe);
      FUN_710390eb20((long)param_1,0x106);
      iVar8 = 0x116;
      goto LAB_710390a6c0;
    }
    param_1[2] = param_1[1];
    if (param_1[8] == 0x121) {
      uVar13 = FUN_710390efb0(param_1,(float *)(param_1 + 6));
      param_1[4] = (uint)uVar13;
    }
    else {
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)puVar24;
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
      param_1[8] = 0x121;
    }
    FUN_710390ab60(plVar22);
    *(int *)((long)plVar22 + 0x24) = (int)plVar22[4];
    if (iVar8 != -1) {
      if (*(uint *)(plVar22 + 5) == 0xffffffff) {
        *(int *)(plVar22 + 5) = iVar8;
      }
      else {
        uVar7 = *(uint *)(plVar22 + 5);
        do {
          uVar6 = uVar7;
          uVar10 = *(uint *)(*(long *)(*plVar22 + 0x38) + (long)(int)uVar6 * 4);
          iVar26 = (uVar10 >> 0xe) - 0x1ffff;
          uVar7 = 0xffffffff;
          if (iVar26 != -1) {
            uVar7 = uVar6 + iVar26 + 1;
          }
        } while (uVar7 != 0xffffffff);
        iVar8 = iVar8 + ~uVar6;
        iVar26 = -iVar8;
        if (-1 < iVar8) {
          iVar26 = iVar8;
        }
        if (0x1ffff < iVar26) {
LAB_710390a670:
                    /* WARNING: Subroutine does not return */
          FUN_710390eb80(plVar22[2],"control structure too long");
        }
        *(uint *)(*(long *)(*plVar22 + 0x38) + (long)(int)uVar6 * 4) =
             iVar8 * 0x4000 + 0x7fffc000U | uVar10 & 0x3fff;
      }
    }
    break;
  case 0x120:
    puVar24 = param_1 + 8;
    param_1[2] = param_1[1];
    if (*puVar24 == 0x121) {
      uVar13 = FUN_710390efb0(param_1,(float *)(param_1 + 6));
      uVar10 = (uint)uVar13;
      param_1[4] = uVar10;
    }
    else {
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)puVar24;
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
      uVar10 = param_1[4];
      param_1[8] = 0x121;
    }
    if (uVar10 == 0x124) {
      pfVar25 = (float *)(param_1 + 6);
      lVar29 = *(long *)pfVar25;
      param_1[2] = param_1[1];
      if (param_1[8] == 0x121) {
        uVar13 = FUN_710390efb0(param_1,pfVar25);
        param_1[4] = (uint)uVar13;
      }
      else {
        *(undefined8 *)(param_1 + 4) = *(undefined8 *)puVar24;
        *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
        param_1[8] = 0x121;
      }
      lVar27 = *(long *)(param_1 + 0xc);
      lVar30 = *(long *)(param_1 + 0x16);
      plVar22 = (long *)(lVar30 + 0x20);
      iVar8 = *(int *)(*(long *)(lVar27 + 0x18) + 8);
      lVar18 = (long)iVar8;
      if (iVar8 < *(int *)(lVar30 + 0x28)) {
        lVar14 = *plVar22 + lVar18 * 0x18 + 0xc;
        do {
          if (*(long *)(lVar14 + -0xc) == lVar29) {
            uVar15 = FUN_7103908660(*(undefined8 *)(*(long *)(lVar27 + 0x10) + 0x38),
                                    "label \'%s\' already defined on line %d");
                    /* WARNING: Subroutine does not return */
            FUN_710390b290(*(long *)(lVar27 + 0x10),uVar15);
          }
          lVar18 = lVar18 + 1;
          lVar14 = lVar14 + 0x18;
        } while (lVar18 < *(int *)(lVar30 + 0x28));
      }
      if (param_1[4] != 0x120) {
                    /* WARNING: Subroutine does not return */
        FUN_710390a760((long)param_1,0x120);
      }
      param_1[2] = param_1[1];
      if (param_1[8] == 0x121) {
        uVar13 = FUN_710390efb0(param_1,pfVar25);
        param_1[4] = (uint)uVar13;
      }
      else {
        *(undefined8 *)(param_1 + 4) = *(undefined8 *)puVar24;
        *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
        param_1[8] = 0x121;
      }
      uVar3 = *(undefined4 *)(lVar27 + 0x20);
      iVar8 = *(int *)(lVar30 + 0x28);
      lVar18 = (long)iVar8;
      if (iVar8 < *(int *)(lVar30 + 0x2c)) {
        lVar14 = *plVar22;
      }
      else {
        lVar14 = FUN_71039059a0(*(long *)(param_1 + 0xe),*plVar22,(int *)(lVar30 + 0x2c),0x18,0x7fff
                               );
        *plVar22 = lVar14;
      }
      lVar19 = lVar18 * 0x18;
      *(long *)(lVar14 + lVar19) = lVar29;
      *(uint *)(*(long *)(lVar30 + 0x20) + lVar19 + 0xc) = uVar7;
      *(undefined1 *)(*(long *)(lVar30 + 0x20) + lVar19 + 0x10) =
           *(undefined1 *)(*(long *)(param_1 + 0xc) + 0x3a);
      *(undefined4 *)(*(long *)(lVar30 + 0x20) + lVar19 + 8) = uVar3;
      *(int *)(lVar30 + 0x28) = iVar8 + 1;
      do {
        uVar7 = param_1[4];
        if ((int)uVar7 < 0x120) {
          if (uVar7 != 0x3b) goto LAB_7103909af4;
        }
        else if (uVar7 != 0x120) {
          if (uVar7 != 0x121) goto LAB_7103909b18;
          goto LAB_7103909b00;
        }
        FUN_7103908c40(param_1);
      } while( true );
    }
LAB_710390a55c:
                    /* WARNING: Subroutine does not return */
    FUN_710390a760((long)param_1,0x124);
  default:
    if (param_1[4] != 0x3b) goto switchD_7103908ca4_caseD_104;
    param_1[2] = param_1[1];
    if (param_1[8] != 0x121) {
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_1 + 8);
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
      goto LAB_71039097c0;
    }
    goto LAB_71039097a4;
  }
LAB_710390a404:
  *(undefined1 *)(*(long *)(param_1 + 0xc) + 0x3c) =
       *(undefined1 *)(*(long *)(param_1 + 0xc) + 0x3a);
  *(short *)(*(long *)(param_1 + 0xe) + 0xc6) = *(short *)(*(long *)(param_1 + 0xe) + 0xc6) + -1;
  return;
LAB_7103909af4:
  if (uVar7 - 0x104 < 3) {
LAB_7103909b00:
    *(undefined1 *)(*plVar22 + lVar18 * 0x18 + 0x10) =
         *(undefined1 *)(*(long *)(lVar27 + 0x18) + 0x10);
  }
LAB_7103909b18:
  lVar29 = *(long *)(param_1 + 0x16);
  iVar8 = *(int *)(*(long *)(*(long *)(param_1 + 0xc) + 0x18) + 0xc);
  iVar26 = *(int *)(lVar29 + 0x18);
  if (iVar8 < iVar26) {
    plVar22 = (long *)(*plVar22 + lVar18 * 0x18);
    do {
      if (*(long *)(*(long *)(lVar29 + 0x10) + (long)iVar8 * 0x18) == *plVar22) {
        FUN_710390b110((long)param_1,iVar8,(long)plVar22);
        iVar26 = *(int *)(lVar29 + 0x18);
      }
      else {
        iVar8 = iVar8 + 1;
      }
    } while (iVar8 < iVar26);
  }
  goto LAB_710390a404;
}

