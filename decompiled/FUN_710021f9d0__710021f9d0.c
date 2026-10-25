// addr:      710021f9d0
// offset:    0x21f9d0
// name:      FUN_710021f9d0
// mangled:   
// signature: undefined FUN_710021f9d0(void)


long FUN_710021f9d0(long param_1,char *param_2,long param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  byte *pbVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  int iVar7;
  char *pcVar8;
  size_t sVar9;
  size_t sVar10;
  uint __c;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  byte *pbVar14;
  
  plVar1 = (long *)(param_1 + 0x1b8);
  (**(code **)(*(long *)(param_1 + 0x1b8) + 0x10))(plVar1);
  if (*(char *)(param_1 + 0x201) == '\0') {
    iVar7 = strncmp(param_2,"HTTP/",5);
    if ((iVar7 == 0) && (pcVar8 = strchr(param_2,0x20), pcVar8 != (char *)0x0)) {
      iVar7 = atoi(pcVar8 + 1);
      *(int *)(param_1 + 0x188) = iVar7;
    }
    pcVar8 = strstr(param_2,":");
    if (pcVar8 != (char *)0x0) {
      uVar13 = (long)pcVar8 - (long)param_2;
      if (uVar13 == 0) {
        uVar13 = 1;
      }
      if (uVar13 <= (ulong)(*(long *)(param_1 + 0x298) - *(long *)(param_1 + 0x290))) {
        lVar2 = param_1 + 0x260;
        FUN_71001b3cf0(lVar2,param_2,uVar13);
        uVar13 = (*(ulong *)(param_1 + 0x290) - uVar13) + *(long *)(param_1 + 0x288);
        uVar12 = *(ulong *)(param_1 + 0x298);
        uVar11 = 0;
        if (uVar12 != 0) {
          uVar11 = uVar13 / uVar12;
        }
        uVar13 = uVar13 - uVar11 * uVar12;
        if ((ulong)(*(long *)(param_1 + 0x270) - *(long *)(param_1 + 0x268)) <= uVar13) {
LAB_710021fcdc:
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
        pbVar3 = (byte *)(*(long *)(param_1 + 0x268) + uVar13);
        if (pbVar3 != (byte *)0x0 && uVar12 != *(ulong *)(param_1 + 0x290)) {
          FUN_71001b3cf0(lVar2,&DAT_710449df98,1);
          uVar12 = *(ulong *)(param_1 + 0x298);
          uVar11 = (*(long *)(param_1 + 0x290) + *(long *)(param_1 + 0x288)) - 1;
          uVar13 = 0;
          if (uVar12 != 0) {
            uVar13 = uVar11 / uVar12;
          }
          uVar11 = uVar11 - uVar13 * uVar12;
          if ((ulong)(*(long *)(param_1 + 0x270) - *(long *)(param_1 + 0x268)) <= uVar11)
          goto LAB_710021fcdc;
          if (*(long *)(param_1 + 0x268) + uVar11 != 0) {
            __c = (uint)*pbVar3;
            pbVar14 = pbVar3;
            if (*pbVar3 != 0) {
              do {
                iVar7 = tolower(__c);
                *pbVar14 = (byte)iVar7;
                __c = (uint)pbVar14[1];
                pbVar14 = pbVar14 + 1;
              } while (__c != 0);
            }
            sVar9 = strcspn(pcVar8,": ");
            pcVar8 = pcVar8 + sVar9 + 2;
            sVar9 = strlen(pcVar8);
            sVar10 = strlen("\r\n");
            if ((sVar9 != 0) && (sVar10 != 0)) {
              uVar13 = 0;
              do {
                uVar11 = 0;
                do {
                  if (pcVar8[uVar13] == (&DAT_710426ee5d)[uVar11]) {
                    if (uVar13 == 0) {
                      uVar13 = 1;
                    }
                    if ((ulong)(*(long *)(param_1 + 0x298) - *(long *)(param_1 + 0x290)) < uVar13)
                    goto LAB_710021fa18;
                    FUN_71001b3cf0(lVar2,pcVar8,uVar13);
                    uVar13 = (*(ulong *)(param_1 + 0x290) - uVar13) + *(long *)(param_1 + 0x288);
                    uVar12 = *(ulong *)(param_1 + 0x298);
                    uVar11 = 0;
                    if (uVar12 != 0) {
                      uVar11 = uVar13 / uVar12;
                    }
                    uVar13 = uVar13 - uVar11 * uVar12;
                    if ((ulong)(*(long *)(param_1 + 0x270) - *(long *)(param_1 + 0x268)) <= uVar13)
                    goto LAB_710021fcdc;
                    lVar4 = *(long *)(param_1 + 0x268) + uVar13;
                    if (lVar4 == 0 || uVar12 == *(ulong *)(param_1 + 0x290)) goto LAB_710021fa18;
                    FUN_71001b3cf0(lVar2,&DAT_710449df98,1);
                    uVar12 = *(ulong *)(param_1 + 0x298);
                    uVar11 = (*(long *)(param_1 + 0x290) + *(long *)(param_1 + 0x288)) - 1;
                    uVar13 = 0;
                    if (uVar12 != 0) {
                      uVar13 = uVar11 / uVar12;
                    }
                    uVar11 = uVar11 - uVar13 * uVar12;
                    if ((ulong)(*(long *)(param_1 + 0x270) - *(long *)(param_1 + 0x268)) <= uVar11)
                    goto LAB_710021fcdc;
                    if (*(long *)(param_1 + 0x268) + uVar11 != 0) {
                      uVar13 = *(ulong *)(param_1 + 0x2d0);
                      uVar11 = *(ulong *)(param_1 + 0x2d8);
                      if (uVar13 != uVar11) {
                        plVar5 = (long *)(*(long *)(param_1 + 0x2a8) +
                                         *(long *)(param_1 + 0x2c0) * 0x10);
                        uVar12 = *(long *)(param_1 + 0x2c0) + 1;
                        *plVar5 = (long)pbVar3;
                        plVar5[1] = lVar4;
                        uVar6 = 0;
                        if (uVar11 != 0) {
                          uVar6 = uVar12 / uVar11;
                        }
                        *(ulong *)(param_1 + 0x2d0) = uVar13 + 1;
                        *(ulong *)(param_1 + 0x2c0) = uVar12 - uVar6 * uVar11;
                      }
                    }
                    goto LAB_710021fa18;
                  }
                  uVar11 = uVar11 + 1;
                } while (uVar11 < sVar10);
                uVar13 = uVar13 + 1;
              } while (uVar13 < sVar9);
            }
          }
        }
      }
    }
  }
LAB_710021fa18:
  (**(code **)(*plVar1 + 0x20))(plVar1);
  return param_4 * param_3;
}

