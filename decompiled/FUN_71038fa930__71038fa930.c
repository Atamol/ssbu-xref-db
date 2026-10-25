// addr:      71038fa930
// offset:    0x38fa930
// name:      FUN_71038fa930
// mangled:   
// signature: char * __cdecl FUN_71038fa930(long param_1, uint param_2, uint param_3, long * param_4)


char * FUN_71038fa930(long param_1,uint param_2,uint param_3,long *param_4)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  undefined *puVar6;
  int *piVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  int iVar11;
  uint uVar12;
  
  do {
    if (0 < *(int *)(param_1 + 0x24)) {
      lVar9 = 0;
      iVar2 = param_3 + 1;
      piVar7 = (int *)(*(long *)(param_1 + 0x50) + 0xc);
      do {
        if ((int)param_2 < piVar7[-1]) break;
        if (((int)param_2 < *piVar7) && (iVar2 = iVar2 + -1, iVar2 == 0)) {
          *param_4 = *(long *)(piVar7 + -3) + 0x18;
          return "local";
        }
        lVar9 = lVar9 + 1;
        piVar7 = piVar7 + 4;
      } while (lVar9 < *(int *)(param_1 + 0x24));
    }
    *param_4 = 0;
    if ((int)param_2 < 1) {
      return (char *)0x0;
    }
    lVar9 = *(long *)(param_1 + 0x38);
    uVar10 = 0;
    iVar2 = 0;
    uVar5 = 0xffffffff;
    do {
      uVar1 = *(uint *)(lVar9 + uVar10 * 4);
      uVar12 = uVar1 >> 6 & 0xff;
      uVar8 = (uint)uVar10;
      iVar11 = iVar2;
      switch(uVar1 & 0x3f) {
      case 4:
        if ((long)uVar10 < (long)iVar2) {
          uVar8 = 0xffffffff;
        }
        if ((int)uVar12 <= (int)param_3 && (int)param_3 <= (int)(uVar12 + (uVar1 >> 0x17))) {
          uVar5 = uVar8;
        }
        break;
      default:
        if ((long)uVar10 < (long)iVar2) {
          uVar8 = 0xffffffff;
        }
        if (uVar12 == param_3 && (0x35b83ffff8ffU >> ((ulong)uVar1 & 0x3f) & 1) != 0) {
          uVar5 = uVar8;
        }
        break;
      case 0x1e:
        iVar11 = uVar8 + (uVar1 >> 0xe) + -0x1fffe;
        if (((long)iVar11 <= (long)uVar10 || (int)param_2 < iVar11) || iVar11 <= iVar2) {
          iVar11 = iVar2;
        }
        break;
      case 0x29:
        uVar12 = uVar12 + 2;
      case 0x24:
      case 0x25:
        if ((long)uVar10 < (long)iVar2) {
          uVar8 = 0xffffffff;
        }
        if ((int)uVar12 <= (int)param_3) {
          uVar5 = uVar8;
        }
      }
      iVar2 = iVar11;
      uVar10 = uVar10 + 1;
    } while (param_2 != uVar10);
    if (uVar5 == 0xffffffff) {
      return (char *)0x0;
    }
    uVar12 = *(uint *)(lVar9 + (long)(int)uVar5 * 4);
    if ((uVar12 & 0x3f) != 0) {
      switch(uVar12 & 0x3f) {
      case 1:
      case 2:
        if ((uVar12 & 0x3f) == 1) {
          uVar12 = uVar12 >> 0xe;
        }
        else {
          uVar12 = *(uint *)(lVar9 + (long)(int)uVar5 * 4 + 4) >> 6;
        }
        if ((*(uint *)(*(long *)(param_1 + 0x30) + (ulong)uVar12 * 0x10 + 8) & 0xf) != 4) {
          return (char *)0x0;
        }
        *param_4 = *(long *)(*(long *)(param_1 + 0x30) + (ulong)uVar12 * 0x10) + 0x18;
        return "constant";
      default:
        return (char *)0x0;
      case 5:
        lVar9 = *(long *)(*(long *)(param_1 + 0x58) + ((ulong)(uVar12 >> 0x13) & 0x1ff0));
        puVar6 = &DAT_7104307a71;
        if (lVar9 != 0) {
          puVar6 = (undefined *)(lVar9 + 0x18);
        }
        *param_4 = (long)puVar6;
        return "upvalue";
      case 6:
      case 7:
        goto switchD_71038faae0_caseD_6;
      case 0xc:
        if ((uVar12 >> 0x16 & 1) == 0) {
          pcVar3 = FUN_71038fa930(param_1,uVar5,uVar12 >> 0xe & 0x1ff,param_4);
          if ((pcVar3 != (char *)0x0) && (*pcVar3 == 'c')) goto LAB_71038facdc;
LAB_71038facd0:
          puVar6 = &DAT_7104307a71;
        }
        else {
          if ((*(uint *)(*(long *)(param_1 + 0x30) + (ulong)(byte)(uVar12 >> 0xe) * 0x10 + 8) & 0xf)
              != 4) goto LAB_71038facd0;
          puVar6 = (undefined *)
                   (*(long *)(*(long *)(param_1 + 0x30) + ((ulong)(uVar12 >> 0xe) & 0xff) * 0x10) +
                   0x18);
        }
        *param_4 = (long)puVar6;
LAB_71038facdc:
        return "method";
      }
    }
    param_3 = uVar12 >> 0x17;
    param_2 = uVar5;
    if ((uVar12 >> 6 & 0xff) <= param_3) {
      return (char *)0x0;
    }
  } while( true );
switchD_71038faae0_caseD_6:
  if ((uVar12 & 0x3f) == 7) {
    if (0 < *(int *)(param_1 + 0x24)) {
      lVar9 = 0;
      iVar2 = (uVar12 >> 0x17) + 1;
      piVar7 = (int *)(*(long *)(param_1 + 0x50) + 0xc);
      do {
        if ((int)uVar5 < piVar7[-1]) break;
        if (((int)uVar5 < *piVar7) && (iVar2 = iVar2 + -1, iVar2 == 0)) {
          pcVar3 = (char *)(*(long *)(piVar7 + -3) + 0x18);
          goto joined_r0x0071038facf0;
        }
        lVar9 = lVar9 + 1;
        piVar7 = piVar7 + 4;
      } while (lVar9 < *(int *)(param_1 + 0x24));
    }
    pcVar3 = (char *)0x0;
  }
  else {
    lVar9 = *(long *)(*(long *)(param_1 + 0x58) + (ulong)(uVar12 >> 0x17) * 0x10);
    pcVar3 = "?";
    if (lVar9 != 0) {
      pcVar3 = (char *)(lVar9 + 0x18);
    }
  }
joined_r0x0071038facf0:
  if ((uVar12 >> 0x16 & 1) == 0) {
    pcVar4 = FUN_71038fa930(param_1,uVar5,uVar12 >> 0xe & 0x1ff,param_4);
    if ((pcVar4 != (char *)0x0) && (*pcVar4 == 'c')) goto LAB_71038fac70;
LAB_71038fac64:
    puVar6 = &DAT_7104307a71;
  }
  else {
    uVar10 = (ulong)(uVar12 >> 0xe & 0xff);
    if ((*(uint *)(*(long *)(param_1 + 0x30) + uVar10 * 0x10 + 8) & 0xf) != 4) goto LAB_71038fac64;
    puVar6 = (undefined *)(*(long *)(*(long *)(param_1 + 0x30) + uVar10 * 0x10) + 0x18);
  }
  *param_4 = (long)puVar6;
LAB_71038fac70:
  pcVar4 = "field";
  if (pcVar3 != (char *)0x0) {
    iVar2 = strcmp(pcVar3,"_ENV");
    pcVar4 = "global";
    if (iVar2 != 0) {
      pcVar4 = "field";
    }
  }
  return pcVar4;
}

