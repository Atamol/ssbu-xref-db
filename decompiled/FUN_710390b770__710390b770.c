// addr:      710390b770
// offset:    0x390b770
// name:      FUN_710390b770
// mangled:   
// signature: ulong __cdecl FUN_710390b770(uint * param_1, long * param_2, int param_3)


ulong FUN_710390b770(uint *param_1,long *param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  byte bVar3;
  undefined4 uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  byte bVar8;
  undefined4 uVar9;
  uint *puVar10;
  uint *puVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  uint uVar15;
  long lVar16;
  long *plVar17;
  uint uVar18;
  uint uVar19;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  uVar1 = *(short *)(*(long *)(param_1 + 0xe) + 0xc6) + 1;
  *(ushort *)(*(long *)(param_1 + 0xe) + 0xc6) = uVar1;
  if (200 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_710390b2a0(*(long **)(param_1 + 0xc));
  }
  uVar5 = param_1[4];
  if ((int)uVar5 < 0x7e) {
    if (uVar5 == 0x23) {
      iVar12 = 3;
    }
    else {
      if (uVar5 != 0x2d) {
        if (uVar5 != 0x7b) goto switchD_710390b7e4_caseD_108;
        FUN_710390e2b0(param_1,(int *)param_2);
        goto LAB_710390bc7c;
      }
      iVar12 = 0;
    }
switchD_710390b7e4_caseD_10f:
    uVar5 = param_1[1];
    param_1[2] = uVar5;
    if (param_1[8] == 0x121) {
      uVar6 = FUN_710390efb0(param_1,(float *)(param_1 + 6));
      param_1[4] = (uint)uVar6;
    }
    else {
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_1 + 8);
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
      param_1[8] = 0x121;
    }
    FUN_710390b770(param_1,param_2,0xc);
    plVar17 = *(long **)(param_1 + 0xc);
    local_70 = 0;
    local_68 = -1;
    local_78 = CONCAT44(local_78._4_4_,6);
    if (iVar12 != 2) {
      FUN_7103914980(plVar17,iVar12 + 0x19,(int *)param_2,(int *)&local_78,uVar5);
      goto LAB_710390bc7c;
    }
    FUN_7103913650(plVar17,(undefined4 *)param_2);
    switch((int)*param_2) {
    case 1:
    case 3:
      uVar9 = 2;
      break;
    case 2:
    case 4:
    case 5:
    case 6:
      uVar9 = 3;
      break;
    case 7:
switchD_710390b8d0_caseD_7:
      if (((*(uint *)(param_2 + 1) >> 8 & 1) == 0) &&
         ((int)(uint)*(byte *)((long)plVar17 + 0x3a) <= (int)*(uint *)(param_2 + 1))) {
        *(char *)((long)plVar17 + 0x3c) = *(char *)((long)plVar17 + 0x3c) + -1;
      }
      goto LAB_710390bb20;
    default:
      goto switchD_710390b8d0_caseD_8;
    case 0xb:
      puVar10 = (uint *)(*(long *)(*plVar17 + 0x38) + (long)(int)param_2[1] * 4);
      if ((int)param_2[1] < 1) {
LAB_710390c1fc:
        uVar6 = (ulong)*puVar10;
        puVar11 = puVar10;
      }
      else {
        puVar11 = puVar10 + -1;
        uVar6 = (ulong)*puVar11;
        if (4 < (uVar6 & 0x3f) - 0x1f) goto LAB_710390c1fc;
      }
      *puVar11 = (uint)uVar6 & 0xffffc000 | (uint)uVar6 & 0x3f | (uint)((uVar6 & 0x3fc0) == 0) << 6;
      goto switchD_710390b8d0_caseD_8;
    case 0xc:
      bVar3 = *(byte *)((long)plVar17 + 0x3c);
      bVar8 = bVar3 + 1;
      if (*(byte *)(*plVar17 + 0xc) <= bVar3) {
        if (0xfd < bVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_710390eb80(plVar17[2],"function or expression needs too many registers");
        }
        *(byte *)(*plVar17 + 0xc) = bVar8;
        bVar8 = *(char *)((long)plVar17 + 0x3c) + 1;
      }
      *(byte *)((long)plVar17 + 0x3c) = bVar8;
      FUN_7103913ee0(plVar17,(int *)param_2,bVar8 - 1);
      if ((int)*param_2 == 7) goto switchD_710390b8d0_caseD_7;
LAB_710390bb20:
      uVar4 = FUN_7103913040(plVar17,(int)param_2[1] << 0x17 | 0x1b);
      uVar9 = 0xc;
      *(undefined4 *)(param_2 + 1) = uVar4;
    }
    *(undefined4 *)param_2 = uVar9;
switchD_710390b8d0_caseD_8:
    iVar12 = (int)param_2[2];
    iVar13 = *(int *)((long)param_2 + 0x14);
    *(int *)(param_2 + 2) = iVar13;
    *(int *)((long)param_2 + 0x14) = iVar12;
    if (iVar12 != -1) {
      lVar14 = *plVar17;
      lVar16 = *(long *)(lVar14 + 0x38);
      do {
        puVar10 = (uint *)(lVar16 + (long)iVar12 * 4);
        if (iVar12 < 1) {
LAB_710390bb90:
          uVar5 = *puVar10;
          puVar11 = puVar10;
        }
        else {
          puVar11 = puVar10 + -1;
          uVar5 = *puVar11;
          if (4 < ((ulong)uVar5 & 0x3f) - 0x1f) goto LAB_710390bb90;
        }
        if ((uVar5 & 0x3f) == 0x23) {
          *puVar11 = uVar5 & 0x7fc000 | uVar5 >> 0x11 & 0x7fc0 | 0x22;
          lVar14 = *plVar17;
        }
        lVar16 = *(long *)(lVar14 + 0x38);
        iVar13 = (*(uint *)(lVar16 + (long)iVar12 * 4) >> 0xe) - 0x1ffff;
        iVar2 = iVar12 + iVar13;
        iVar12 = -1;
        if (iVar13 != -1) {
          iVar12 = iVar2 + 1;
        }
      } while (iVar12 != -1);
      iVar13 = (int)param_2[2];
    }
    if (iVar13 != -1) {
      lVar14 = *plVar17;
      lVar16 = *(long *)(lVar14 + 0x38);
      do {
        puVar10 = (uint *)(lVar16 + (long)iVar13 * 4);
        if (iVar13 < 1) {
LAB_710390bc2c:
          uVar5 = *puVar10;
          puVar11 = puVar10;
        }
        else {
          puVar11 = puVar10 + -1;
          uVar5 = *puVar11;
          if (4 < ((ulong)uVar5 & 0x3f) - 0x1f) goto LAB_710390bc2c;
        }
        if ((uVar5 & 0x3f) == 0x23) {
          *puVar11 = uVar5 & 0x7fc000 | uVar5 >> 0x11 & 0x7fc0 | 0x22;
          lVar14 = *plVar17;
        }
        lVar16 = *(long *)(lVar14 + 0x38);
        iVar12 = (*(uint *)(lVar16 + (long)iVar13 * 4) >> 0xe) - 0x1ffff;
        iVar2 = iVar13 + iVar12;
        iVar13 = -1;
        if (iVar12 != -1) {
          iVar13 = iVar2 + 1;
        }
      } while (iVar13 != -1);
    }
    goto LAB_710390bc7c;
  }
  iVar12 = 2;
  switch(uVar5) {
  case 0x107:
    param_2[2] = -1;
    uVar4 = 3;
    goto LAB_710390b9a8;
  case 0x108:
  case 0x10a:
  case 0x10b:
  case 0x10c:
  case 0x10d:
  case 0x110:
  case 0x111:
  case 0x112:
  case 0x113:
  case 0x115:
  case 0x116:
  case 0x117:
  case 0x118:
  case 0x11a:
  case 0x11b:
  case 0x11c:
  case 0x11d:
  case 0x11e:
  case 0x11f:
  case 0x120:
  case 0x121:
  case 0x124:
    goto switchD_710390b7e4_caseD_108;
  case 0x109:
    uVar5 = param_1[1];
    param_1[2] = uVar5;
    if (param_1[8] == 0x121) {
      uVar6 = FUN_710390efb0(param_1,(float *)(param_1 + 6));
      uVar5 = param_1[1];
      param_1[4] = (uint)uVar6;
    }
    else {
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_1 + 8);
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
      param_1[8] = 0x121;
    }
    FUN_710390ccd0(param_1,(int *)param_2,0,uVar5);
    goto LAB_710390bc7c;
  case 0x10e:
    param_2[2] = -1;
    uVar4 = 1;
    goto LAB_710390b9a8;
  case 0x10f:
    goto switchD_710390b7e4_caseD_10f;
  case 0x114:
    param_2[2] = -1;
    uVar4 = 2;
LAB_710390b9a8:
    *(undefined4 *)param_2 = uVar4;
    *(undefined4 *)(param_2 + 1) = 0;
    break;
  case 0x119:
    plVar17 = *(long **)(param_1 + 0xc);
    lVar14 = *plVar17;
    if (*(char *)(lVar14 + 0xb) == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_710390eb80((long)param_1,"cannot use \'...\' outside a vararg function");
    }
    *(undefined1 *)(lVar14 + 0xb) = 1;
    uVar4 = FUN_7103913040(plVar17,0x80002d);
    param_2[2] = -1;
    uVar9 = 0xe;
    goto LAB_710390ba04;
  case 0x122:
    param_2[2] = -1;
    *(undefined4 *)param_2 = 5;
    *(undefined4 *)(param_2 + 1) = 0;
    *(uint *)(param_2 + 1) = param_1[6];
    break;
  case 0x123:
    param_2[2] = -1;
    *(undefined4 *)param_2 = 6;
    *(undefined4 *)(param_2 + 1) = 0;
    param_2[1] = *(long *)(param_1 + 6);
    break;
  case 0x125:
    local_78 = *(long *)(param_1 + 6);
    local_70 = CONCAT44(local_70._4_4_,(uint)*(byte *)(local_78 + 8)) | 0x40;
    uVar6 = FUN_71039133b0(*(long **)(param_1 + 0xc),(float *)&local_78,(float *)&local_78);
    uVar4 = (undefined4)uVar6;
    param_2[2] = -1;
    uVar9 = 4;
LAB_710390ba04:
    *(undefined4 *)param_2 = uVar9;
    *(undefined4 *)(param_2 + 1) = uVar4;
    break;
  default:
    if (uVar5 == 0x7e) {
      iVar12 = 1;
      goto switchD_710390b7e4_caseD_10f;
    }
    goto switchD_710390b7e4_caseD_108;
  }
  param_1[2] = param_1[1];
  if (param_1[8] == 0x121) {
    uVar6 = FUN_710390efb0(param_1,(float *)(param_1 + 6));
    uVar5 = (uint)uVar6;
    param_1[4] = uVar5;
  }
  else {
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
    param_1[8] = 0x121;
LAB_710390bc7c:
    uVar5 = param_1[4];
  }
  uVar6 = 0x15;
  uVar19 = 0;
  switch(uVar5) {
  case 0x25:
    uVar19 = 3;
    break;
  case 0x26:
    uVar19 = 7;
    break;
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2c:
  case 0x2e:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3d:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5b:
  case 0x5c:
  case 0x5d:
  case 0x5f:
  case 0x60:
  case 0x61:
  case 0x62:
  case 99:
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x6f:
  case 0x70:
  case 0x71:
  case 0x72:
  case 0x73:
  case 0x74:
  case 0x75:
  case 0x76:
  case 0x77:
  case 0x78:
  case 0x79:
  case 0x7a:
  case 0x7b:
  case 0x7d:
    goto switchD_710390bca4_caseD_27;
  case 0x2a:
    uVar19 = 2;
    break;
  case 0x2b:
    break;
  case 0x2d:
    uVar19 = 1;
    break;
  case 0x2f:
    uVar19 = 5;
    break;
  case 0x3c:
    uVar19 = 0xe;
    break;
  case 0x3e:
    uVar19 = 0x11;
    break;
  case 0x5e:
    uVar19 = 4;
    break;
  case 0x7c:
    uVar19 = 8;
    break;
  case 0x7e:
    uVar19 = 9;
    break;
  default:
    switch(uVar5) {
    case 0x101:
      uVar19 = 0x13;
      break;
    default:
      goto switchD_710390bca4_caseD_27;
    case 0x110:
      uVar19 = 0x14;
      break;
    case 0x117:
      uVar19 = 6;
      break;
    case 0x118:
      uVar19 = 0xc;
      break;
    case 0x11a:
      uVar19 = 0xd;
      break;
    case 0x11b:
      uVar19 = 0x12;
      break;
    case 0x11c:
      uVar19 = 0xf;
      break;
    case 0x11d:
      uVar19 = 0x10;
      break;
    case 0x11e:
      uVar19 = 10;
      break;
    case 0x11f:
      uVar19 = 0xb;
    }
  }
  uVar6 = (ulong)uVar19;
  do {
    if ((int)(uint)(byte)(&DAT_7104862a71)[uVar6 * 2] <= param_3) break;
    uVar5 = param_1[1];
    param_1[2] = uVar5;
    if (param_1[8] == 0x121) {
      uVar7 = FUN_710390efb0(param_1,(float *)(param_1 + 6));
      param_1[4] = (uint)uVar7;
    }
    else {
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_1 + 8);
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_1 + 10);
      param_1[8] = 0x121;
    }
    plVar17 = *(long **)(param_1 + 0xc);
    uVar19 = (uint)uVar6;
    if (uVar19 < 0xc) {
      if (((int)param_2[2] != *(int *)((long)param_2 + 0x14)) || (1 < (int)*param_2 - 5U)) {
LAB_710390be4c:
        FUN_71039141b0(plVar17,(int *)param_2);
      }
      uVar7 = FUN_710390b770(param_1,&local_78,(uint)(byte)(&DAT_7104862a72)[uVar6 * 2]);
      uVar18 = (uint)uVar7;
      if (uVar19 < 0x15) {
        plVar17 = *(long **)(param_1 + 0xc);
        switch(uVar6) {
        default:
          uVar19 = uVar19 + 0xd;
          goto LAB_710390bea0;
        case 0xc:
          goto switchD_710390be90_caseD_c;
        case 0xd:
        case 0xe:
        case 0xf:
          uVar19 = uVar19 + 0x12;
          iVar12 = 1;
          break;
        case 0x10:
        case 0x11:
        case 0x12:
          uVar19 = uVar19 + 0xf;
          iVar12 = 0;
          break;
        case 0x13:
          goto switchD_710390be90_caseD_13;
        case 0x14:
switchD_710390be90_caseD_14:
          FUN_7103913650(plVar17,(undefined4 *)&local_78);
          iVar12 = (int)param_2[2];
          if (iVar12 != -1) {
            if ((uint)local_68 != 0xffffffff) {
              lVar14 = *(long *)(*plVar17 + 0x38);
              uVar5 = (uint)local_68;
              do {
                uVar15 = uVar5;
                uVar19 = *(uint *)(lVar14 + (long)(int)uVar15 * 4);
                iVar13 = (uVar19 >> 0xe) - 0x1ffff;
                uVar5 = 0xffffffff;
                if (iVar13 != -1) {
                  uVar5 = uVar15 + iVar13 + 1;
                }
              } while (uVar5 != 0xffffffff);
              goto LAB_710390bfa4;
            }
            local_68 = CONCAT44(local_68._4_4_,iVar12);
          }
          goto LAB_710390c1a4;
        }
        FUN_7103915230(plVar17,uVar19,iVar12,(int *)param_2,(int *)&local_78);
      }
    }
    else if (uVar19 == 0xc) {
      FUN_7103913650(plVar17,(undefined4 *)param_2);
      if ((((int)*param_2 == 7) && ((*(uint *)(param_2 + 1) >> 8 & 1) == 0)) &&
         ((int)(uint)*(byte *)((long)plVar17 + 0x3a) <= (int)*(uint *)(param_2 + 1))) {
        *(char *)((long)plVar17 + 0x3c) = *(char *)((long)plVar17 + 0x3c) + -1;
      }
      bVar3 = *(byte *)((long)plVar17 + 0x3c);
      bVar8 = bVar3 + 1;
      if (*(byte *)(*plVar17 + 0xc) <= bVar3) {
        if (0xfd < bVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_710390eb80(plVar17[2],"function or expression needs too many registers");
        }
        *(byte *)(*plVar17 + 0xc) = bVar8;
        bVar8 = *(char *)((long)plVar17 + 0x3c) + 1;
      }
      *(byte *)((long)plVar17 + 0x3c) = bVar8;
      FUN_7103913810(plVar17,(int *)param_2,bVar8 - 1);
      uVar6 = FUN_710390b770(param_1,&local_78,(uint)(byte)(&DAT_7104862a72)[uVar6 * 2]);
      plVar17 = *(long **)(param_1 + 0xc);
      uVar18 = (uint)uVar6;
switchD_710390be90_caseD_c:
      if ((uint)local_68 == local_68._4_4_) {
        FUN_7103913650(plVar17,(undefined4 *)&local_78);
      }
      else {
        FUN_71039140b0(plVar17,(int *)&local_78);
      }
      if ((float)local_78 == 1.68156e-44) {
        puVar10 = (uint *)(*(long *)(*plVar17 + 0x38) + (long)(int)(uint)local_70 * 4);
        uVar19 = *puVar10;
        if ((uVar19 & 0x3f) == 0x1d) {
          if ((((int)*param_2 == 7) && ((*(uint *)(param_2 + 1) >> 8 & 1) == 0)) &&
             ((int)(uint)*(byte *)((long)plVar17 + 0x3a) <= (int)*(uint *)(param_2 + 1))) {
            *(char *)((long)plVar17 + 0x3c) = *(char *)((long)plVar17 + 0x3c) + -1;
            puVar10 = (uint *)(*(long *)(*plVar17 + 0x38) + (long)(int)(uint)local_70 * 4);
            uVar19 = *puVar10;
          }
          *puVar10 = uVar19 & 0x7fffff | (int)param_2[1] << 0x17;
          *(undefined4 *)param_2 = 0xc;
          *(uint *)(param_2 + 1) = (uint)local_70;
          goto LAB_710390c1bc;
        }
      }
      FUN_7103913650(plVar17,(undefined4 *)&local_78);
      if ((((float)local_78 == 9.80909e-45) && (((uint)local_70 >> 8 & 1) == 0)) &&
         ((int)(uint)*(byte *)((long)plVar17 + 0x3a) <= (int)(uint)local_70)) {
        *(char *)((long)plVar17 + 0x3c) = *(char *)((long)plVar17 + 0x3c) + -1;
      }
      bVar3 = *(byte *)((long)plVar17 + 0x3c);
      bVar8 = bVar3 + 1;
      if (*(byte *)(*plVar17 + 0xc) <= bVar3) {
        if (0xfd < bVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_710390eb80(plVar17[2],"function or expression needs too many registers");
        }
        *(byte *)(*plVar17 + 0xc) = bVar8;
        bVar8 = *(char *)((long)plVar17 + 0x3c) + 1;
      }
      *(byte *)((long)plVar17 + 0x3c) = bVar8;
      FUN_7103913810(plVar17,(int *)&local_78,bVar8 - 1);
      uVar19 = 0x1d;
LAB_710390bea0:
      FUN_7103914980(plVar17,uVar19,(int *)param_2,(int *)&local_78,uVar5);
    }
    else {
      if (uVar19 == 0x14) {
        FUN_7103914810(plVar17,(int *)param_2);
        uVar6 = FUN_710390b770(param_1,&local_78,(uint)(byte)(&DAT_7104862a72)[uVar6 * 2]);
        plVar17 = *(long **)(param_1 + 0xc);
        uVar18 = (uint)uVar6;
        goto switchD_710390be90_caseD_14;
      }
      if (uVar19 != 0x13) goto LAB_710390be4c;
      FUN_7103914420(plVar17,(int *)param_2);
      uVar6 = FUN_710390b770(param_1,&local_78,(uint)(byte)(&DAT_7104862a72)[uVar6 * 2]);
      plVar17 = *(long **)(param_1 + 0xc);
      uVar18 = (uint)uVar6;
switchD_710390be90_caseD_13:
      FUN_7103913650(plVar17,(undefined4 *)&local_78);
      iVar12 = *(int *)((long)param_2 + 0x14);
      if (iVar12 != -1) {
        if (local_68._4_4_ == 0xffffffff) {
          local_68 = CONCAT44(iVar12,(uint)local_68);
        }
        else {
          lVar14 = *(long *)(*plVar17 + 0x38);
          uVar5 = local_68._4_4_;
          do {
            uVar15 = uVar5;
            uVar19 = *(uint *)(lVar14 + (long)(int)uVar15 * 4);
            iVar13 = (uVar19 >> 0xe) - 0x1ffff;
            uVar5 = 0xffffffff;
            if (iVar13 != -1) {
              uVar5 = uVar15 + iVar13 + 1;
            }
          } while (uVar5 != 0xffffffff);
LAB_710390bfa4:
          iVar12 = iVar12 + ~uVar15;
          iVar13 = -iVar12;
          if (-1 < iVar12) {
            iVar13 = iVar12;
          }
          if (0x1ffff < iVar13) {
                    /* WARNING: Subroutine does not return */
            FUN_710390eb80(plVar17[2],"control structure too long");
          }
          *(uint *)(lVar14 + (long)(int)uVar15 * 4) =
               iVar12 * 0x4000 + 0x7fffc000U | uVar19 & 0x3fff;
        }
      }
LAB_710390c1a4:
      param_2[1] = local_70;
      param_2[2] = local_68;
      *param_2 = local_78;
    }
LAB_710390c1bc:
    uVar6 = (ulong)uVar18;
  } while (uVar18 != 0x15);
switchD_710390bca4_caseD_27:
  *(short *)(*(long *)(param_1 + 0xe) + 0xc6) = *(short *)(*(long *)(param_1 + 0xe) + 0xc6) + -1;
  return uVar6;
switchD_710390b7e4_caseD_108:
  FUN_710390d5f0(param_1,param_2);
  goto LAB_710390bc7c;
}

