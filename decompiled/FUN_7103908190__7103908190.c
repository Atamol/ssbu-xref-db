// addr:      7103908190
// offset:    0x3908190
// name:      FUN_7103908190
// mangled:   
// signature: long __cdecl FUN_7103908190(long param_1, char * param_2, long * param_3)


long FUN_7103908190(long param_1,char *param_2,long *param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  byte bVar4;
  int iVar5;
  char *pcVar6;
  undefined8 *puVar7;
  size_t sVar8;
  byte *__s;
  uint *puVar9;
  ulong *puVar10;
  ulong uVar11;
  float *pfVar12;
  float fVar13;
  long *plVar14;
  double *pdVar15;
  int *piVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  undefined8 *puVar20;
  uint uVar21;
  byte local_88 [7];
  byte local_81 [33];
  
  pcVar6 = strchr(param_2,0x25);
  if (pcVar6 == (char *)0x0) {
    uVar21 = 0;
  }
  else {
    uVar21 = 0;
    do {
      puVar20 = *(undefined8 **)(param_1 + 0x10);
      puVar7 = FUN_7103917660(param_1,param_2,(long)pcVar6 - (long)param_2);
      *puVar20 = puVar7;
      *(uint *)(puVar20 + 1) = *(byte *)(puVar7 + 1) | 0x40;
      FUN_71038fb6f0(param_1);
      switch(pcVar6[1]) {
      case '%':
        puVar7 = *(undefined8 **)(param_1 + 0x10);
        sVar8 = 1;
        __s = &DAT_71044647bf;
        break;
      default:
                    /* WARNING: Subroutine does not return */
        FUN_71038fae60(param_1,"invalid option \'%%%c\' to \'lua_pushfstring\'");
      case 'I':
        pfVar12 = *(float **)(param_1 + 0x10);
        iVar5 = (int)param_3[3];
        if ((iVar5 < 0) && (*(int *)(param_3 + 3) = iVar5 + 8, iVar5 + 8 < 1)) {
          lVar17 = *(long *)(param_3[1] + (long)iVar5);
        }
        else {
          plVar14 = (long *)*param_3;
          *param_3 = (long)(plVar14 + 1);
          lVar17 = *plVar14;
        }
        goto LAB_7103908484;
      case 'U':
        iVar5 = (int)param_3[3];
        if ((iVar5 < 0) && (*(int *)(param_3 + 3) = iVar5 + 8, iVar5 + 8 < 1)) {
          puVar10 = (ulong *)(param_3[1] + (long)iVar5);
        }
        else {
          puVar10 = (ulong *)*param_3;
          *param_3 = (long)(puVar10 + 1);
        }
        uVar11 = *puVar10;
        if (uVar11 < 0x80) {
          local_81[0] = (byte)uVar11;
          iVar5 = 1;
        }
        else {
          lVar18 = 0;
          lVar17 = 0x700000000;
          uVar3 = 0x3f;
          do {
            uVar19 = uVar3;
            bVar4 = (byte)uVar11;
            uVar11 = uVar11 >> 6;
            uVar3 = uVar19 >> 1;
            lVar17 = lVar17 + -0x100000000;
            local_81[lVar18] = bVar4 & 0x3f | 0x80;
            lVar18 = lVar18 + -1;
          } while (uVar3 < uVar11);
          local_88[lVar17 >> 0x20] = (byte)uVar11 | ~(byte)uVar19 & 0xfe;
          iVar5 = 1 - (int)lVar18;
        }
        sVar8 = (size_t)iVar5;
        puVar7 = *(undefined8 **)(param_1 + 0x10);
        __s = local_81 + (1 - sVar8);
        break;
      case 'c':
        iVar5 = (int)param_3[3];
        if ((iVar5 < 0) && (*(int *)(param_3 + 3) = iVar5 + 8, iVar5 + 8 < 1)) {
          puVar9 = (uint *)(param_3[1] + (long)iVar5);
        }
        else {
          puVar9 = (uint *)*param_3;
          *param_3 = (long)(puVar9 + 2);
        }
        local_88[0] = (byte)*puVar9;
        if ((*(byte *)((long)&DAT_7104862970 + ((ulong)*puVar9 & 0xff) + 1) >> 2 & 1) != 0) {
          puVar7 = *(undefined8 **)(param_1 + 0x10);
          __s = local_88;
          sVar8 = 1;
          break;
        }
        FUN_7103908660(param_1,"<\\%d>");
        goto LAB_7103908540;
      case 'd':
        pfVar12 = *(float **)(param_1 + 0x10);
        iVar5 = (int)param_3[3];
        if ((iVar5 < 0) && (*(int *)(param_3 + 3) = iVar5 + 8, iVar5 + 8 < 1)) {
          piVar16 = (int *)(param_3[1] + (long)iVar5);
        }
        else {
          piVar16 = (int *)*param_3;
          *param_3 = (long)(piVar16 + 2);
        }
        lVar17 = (long)*piVar16;
LAB_7103908484:
        *(long *)pfVar12 = lVar17;
        fVar13 = 2.66247e-44;
LAB_710390848c:
        pfVar12[2] = fVar13;
        FUN_71038fb6f0(param_1);
        FUN_71039080b0(param_1,(float *)(*(long *)(param_1 + 0x10) + -0x10));
        goto LAB_7103908540;
      case 'f':
        pfVar12 = *(float **)(param_1 + 0x10);
        iVar5 = *(int *)((long)param_3 + 0x1c);
        if ((iVar5 < 0) && (*(int *)((long)param_3 + 0x1c) = iVar5 + 0x10, iVar5 + 0x10 < 1)) {
          pdVar15 = (double *)(param_3[2] + (long)iVar5);
        }
        else {
          pdVar15 = (double *)*param_3;
          *param_3 = (long)(pdVar15 + 1);
        }
        fVar13 = 4.2039e-45;
        *pfVar12 = (float)*pdVar15;
        goto LAB_710390848c;
      case 'p':
        iVar5 = (int)param_3[3];
        if ((iVar5 < 0) && (*(int *)(param_3 + 3) = iVar5 + 8, iVar5 + 8 < 1)) {
          puVar7 = (undefined8 *)(param_3[1] + (long)iVar5);
        }
        else {
          puVar7 = (undefined8 *)*param_3;
          *param_3 = (long)(puVar7 + 1);
        }
        iVar5 = snprintf((char *)local_88,0x28,"%p",(void *)*puVar7);
        puVar7 = *(undefined8 **)(param_1 + 0x10);
        sVar8 = (size_t)iVar5;
        __s = local_88;
        break;
      case 's':
        iVar5 = (int)param_3[3];
        if ((iVar5 < 0) && (*(int *)(param_3 + 3) = iVar5 + 8, iVar5 + 8 < 1)) {
          puVar7 = (undefined8 *)(param_3[1] + (long)iVar5);
        }
        else {
          puVar7 = (undefined8 *)*param_3;
          *param_3 = (long)(puVar7 + 1);
        }
        __s = (byte *)"(null)";
        if ((byte *)*puVar7 != (byte *)0x0) {
          __s = (byte *)*puVar7;
        }
        sVar8 = strlen((char *)__s);
        puVar7 = *(undefined8 **)(param_1 + 0x10);
      }
      puVar20 = FUN_7103917660(param_1,__s,sVar8);
      *puVar7 = puVar20;
      *(uint *)(puVar7 + 1) = *(byte *)(puVar20 + 1) | 0x40;
      FUN_71038fb6f0(param_1);
LAB_7103908540:
      param_2 = pcVar6 + 2;
      uVar21 = uVar21 + 2;
      pcVar6 = strchr(param_2,0x25);
    } while (pcVar6 != (char *)0x0);
  }
  puVar7 = *(undefined8 **)(param_1 + 0x10);
  if (*(long *)(param_1 + 0x30) - (long)puVar7 < 0x20) {
    if (1000000 < *(int *)(param_1 + 0xb8)) {
                    /* WARNING: Subroutine does not return */
      FUN_71038fb3c0(param_1,6);
    }
    uVar2 = *(int *)(param_1 + 0xb8) * 2;
    if (999999 < (int)uVar2) {
      uVar2 = 1000000;
    }
    uVar1 = (int)((ulong)((long)puVar7 - *(long *)(param_1 + 0x38)) >> 4) + 6;
    if ((int)uVar1 <= (int)uVar2) {
      uVar1 = uVar2;
    }
    if (1000000 < (int)uVar1) {
      FUN_71038fb530(param_1,0xf4308);
                    /* WARNING: Subroutine does not return */
      FUN_71038fae60(param_1,"stack overflow");
    }
    FUN_71038fb530(param_1,uVar1);
    puVar7 = *(undefined8 **)(param_1 + 0x10);
  }
  sVar8 = strlen(param_2);
  puVar20 = FUN_7103917660(param_1,param_2,sVar8);
  *puVar7 = puVar20;
  *(uint *)(puVar7 + 1) = *(byte *)(puVar20 + 1) | 0x40;
  FUN_71038fb6f0(param_1);
  if (uVar21 != 0) {
    FUN_7103923f70(param_1,uVar21 | 1);
  }
  return *(long *)(*(long *)(param_1 + 0x10) + -0x10) + 0x18;
}

