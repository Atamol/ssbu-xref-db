// addr:      71018cbc90
// offset:    0x18cbc90
// name:      FUN_71018cbc90
// mangled:   
// signature: undefined __cdecl FUN_71018cbc90(long param_1, undefined8 param_2, char * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71018cbc90(long param_1,undefined8 param_2,char *param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  undefined4 uVar13;
  long lVar14;
  ulong local_58;
  
  lVar12 = *(long *)(*(long *)(param_1 + 0xf0) + 0x80);
  plVar11 = *(long **)(lVar12 + 0x40);
  if (plVar11 == (long *)0x0) {
LAB_71018cbcd0:
    if (*(char *)(lVar12 + 0x48) == '\0') {
      return;
    }
    *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(lVar12 + 0x4c);
    if (*(char *)(*(long *)(*(long *)(param_1 + 0xf0) + 0x80) + 0x48) == '\0') {
      return;
    }
    if (0x11 < *(int *)(param_1 + 0xd4)) {
      return;
    }
    uVar2 = *(int *)(param_1 + 0xd4) + 1;
    *(uint *)(param_1 + 0xd4) = uVar2;
    if (0x12 < uVar2) goto LAB_71018cbfa4;
    uVar13 = 2;
    goto LAB_71018cbe98;
  }
  if (*plVar11 != 0) {
    if (*(long *)(*plVar11 + 8) != 0) goto LAB_71018cbcd0;
    local_58 = 0;
    FUN_71037aea50(&local_58,"i",(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
    plVar11 = (long *)*plVar11;
    lVar5 = *plVar11;
    lVar9 = 0;
    if (lVar5 != 0) {
      lVar9 = *(long *)(*(long *)(lVar5 + 0x18) + 0x40);
      if (*(uint *)(lVar9 + 0xc) < 2) {
        plVar7 = (long *)(*(long *)(lVar9 + 0x18) +
                         ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)(lVar9 + 0xb) & 0x3f)) & 2)
                         * 0x20);
        do {
          if (((int)plVar7[3] == 0x13) && (plVar8 = plVar7, plVar7[2] == 2)) break;
          piVar1 = (int *)((long)plVar7 + 0x1c);
          plVar7 = plVar7 + (long)*piVar1 * 4;
          plVar8 = &DAT_7104862960;
        } while (*piVar1 != 0);
      }
      else {
        plVar8 = (long *)(*(long *)(lVar9 + 0x10) + 0x10);
      }
      param_3 = "current_language";
      FUN_71038f4d40(lVar5,plVar8,"current_language");
      lVar9 = *plVar11;
    }
    FUN_710372d940(lVar9,(long *)&local_58,param_3,param_4,param_5,param_6,param_7,param_8);
    uVar10 = local_58;
    if (local_58 != 0) {
      lVar5 = *(long *)(local_58 + 0x10);
      iVar4 = **(int **)(local_58 + 8);
      lVar9 = 0;
      do {
        cVar3 = *(char *)(lVar5 + lVar9);
        if (cVar3 == 's') {
          lVar14 = *(long *)(uVar10 + 8);
          uVar6 = *(ulong *)(lVar14 + lVar9 * 8);
          if (uVar6 != 0) {
            FUN_710392eb40(uVar6);
          }
          *(undefined8 *)(lVar14 + lVar9 * 8) = 0;
        }
        else if (cVar3 == '\0') goto LAB_71018cbe00;
        lVar9 = lVar9 + 1;
      } while( true );
    }
  }
LAB_71018cbe7c:
  uVar13 = 2;
  goto LAB_71018cbe80;
LAB_71018cbf74:
  FUN_710392eb40(uVar10);
  local_58 = 0;
LAB_71018cbf88:
  uVar10 = *(long *)(lVar12 + 0x60) - *(long *)(lVar12 + 0x58) >> 2;
  goto joined_r0x0071018cbec0;
LAB_71018cbe00:
  FUN_710392eb40(uVar10);
  local_58 = 0;
  if ((iVar4 < 1) ||
     (uVar10 = *(long *)(lVar12 + 0x60) - *(long *)(lVar12 + 0x58) >> 2,
     uVar10 <= (ulong)(long)iVar4)) goto LAB_71018cbe7c;
  plVar11 = *(long **)(lVar12 + 0x40);
  if (*plVar11 != 0) {
    local_58 = 0;
    FUN_71037aea50(&local_58,"i",(long ****)param_3,param_4,param_5,param_6,param_7,param_8);
    plVar11 = (long *)*plVar11;
    lVar5 = *plVar11;
    lVar9 = 0;
    if (lVar5 != 0) {
      lVar9 = *(long *)(*(long *)(lVar5 + 0x18) + 0x40);
      if (*(uint *)(lVar9 + 0xc) < 2) {
        plVar7 = (long *)(*(long *)(lVar9 + 0x18) +
                         ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)(lVar9 + 0xb) & 0x3f)) & 2)
                         * 0x20);
        do {
          if (((int)plVar7[3] == 0x13) && (plVar8 = plVar7, plVar7[2] == 2)) break;
          piVar1 = (int *)((long)plVar7 + 0x1c);
          plVar7 = plVar7 + (long)*piVar1 * 4;
          plVar8 = &DAT_7104862960;
        } while (*piVar1 != 0);
      }
      else {
        plVar8 = (long *)(*(long *)(lVar9 + 0x10) + 0x10);
      }
      param_3 = "exit_code";
      FUN_71038f4d40(lVar5,plVar8,"exit_code");
      lVar9 = *plVar11;
    }
    FUN_710372d940(lVar9,(long *)&local_58,param_3,param_4,param_5,param_6,param_7,param_8);
    uVar10 = local_58;
    if (local_58 != 0) {
      lVar5 = *(long *)(local_58 + 0x10);
      uVar13 = **(undefined4 **)(local_58 + 8);
      lVar9 = 0;
      do {
        cVar3 = *(char *)(lVar5 + lVar9);
        if (cVar3 == 's') {
          lVar14 = *(long *)(uVar10 + 8);
          uVar6 = *(ulong *)(lVar14 + lVar9 * 8);
          if (uVar6 != 0) {
            FUN_710392eb40(uVar6);
          }
          *(undefined8 *)(lVar14 + lVar9 * 8) = 0;
        }
        else if (cVar3 == '\0') goto LAB_71018cbf74;
        lVar9 = lVar9 + 1;
      } while( true );
    }
    uVar13 = 0;
    goto LAB_71018cbf88;
  }
  uVar13 = 0;
joined_r0x0071018cbec0:
  if (uVar10 <= (ulong)(long)iVar4) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
LAB_71018cbe80:
  uVar2 = *(uint *)(param_1 + 0xd4);
  *(undefined4 *)(param_1 + 0x108) = uVar13;
  if (0x12 < uVar2) {
LAB_71018cbfa4:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  uVar13 = 4;
LAB_71018cbe98:
  *(undefined4 *)(param_1 + (long)(int)uVar2 * 4 + 0x88) = uVar13;
  return;
}

