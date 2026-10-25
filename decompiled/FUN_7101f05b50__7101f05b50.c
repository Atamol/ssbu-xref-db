// addr:      7101f05b50
// offset:    0x1f05b50
// name:      FUN_7101f05b50
// mangled:   
// signature: undefined __cdecl FUN_7101f05b50(int * param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101f05b50(int *param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long ***ppplVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  void *__src;
  undefined8 *puVar11;
  long ****pppplVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long ***local_70;
  undefined4 local_64;
  
  puVar11 = *(undefined8 **)(param_1 + 0x8c);
  puVar10 = *(undefined8 **)(param_1 + 0x8e);
  if (puVar11 != puVar10) {
    do {
      lVar5 = *(long *)*puVar11;
      if (*(char *)(lVar5 + 0x275) != '\0') {
        *(undefined1 *)(lVar5 + 0x275) = 0;
        FUN_7103778760(*(long *)(lVar5 + 0x228),0x710434abb9);
      }
      puVar11 = puVar11 + 2;
    } while (puVar10 != puVar11);
    puVar10 = *(undefined8 **)(param_1 + 0x8e);
    puVar11 = *(undefined8 **)(param_1 + 0x8c);
  }
  if (puVar10 != puVar11) {
    uVar13 = 0;
    lVar5 = 0x54;
    do {
      if (4 < uVar13) goto LAB_7101f05f30;
      uVar1 = *(uint *)(*DAT_7105328e18 + uVar13 * 0x50 + 0x50);
      if (uVar1 != 0) {
        uVar15 = 0;
        do {
          if (*param_1 == 0) {
            puVar9 = *(undefined4 **)(param_1 + 0xa4);
            if (puVar9 < *(undefined4 **)(param_1 + 0xa6)) {
              *puVar9 = (int)uVar13;
              goto LAB_7101f05d00;
            }
            __src = *(void **)(param_1 + 0xa2);
            pppplVar12 = (long ****)((long)puVar9 - (long)__src);
            uVar14 = ((long)pppplVar12 >> 2) + 1;
            if (uVar14 >> 0x3e != 0) goto LAB_7101f05f34;
            lVar6 = (long)*(undefined4 **)(param_1 + 0xa6) - (long)__src;
            if ((ulong)(lVar6 >> 2) < 0x1fffffffffffffff) {
              uVar7 = lVar6 >> 1;
              if (uVar14 <= uVar7) {
                uVar14 = uVar7;
              }
              if (uVar14 != 0) {
                if (uVar14 >> 0x3e == 0) goto LAB_7101f05c10;
                goto LAB_7101f05f30;
              }
LAB_7101f05c70:
              pvVar4 = (void *)0x0;
            }
            else {
              uVar14 = 0x3fffffffffffffff;
LAB_7101f05c10:
              ppplVar8 = (long ***)(uVar14 * 4);
              if (ppplVar8 == (long ***)0x0) {
                ppplVar8 = (long ***)0x1;
              }
              pvVar4 = (void *)FUN_710392e290(0x10,ppplVar8,param_3,param_4,param_5,param_6,param_7,
                                              param_8);
              if (pvVar4 == (void *)0x0) {
                if (DAT_7105332f00 != (long *)0x0) {
                  local_64 = 0;
                  param_3 = &local_70;
                  local_70 = ppplVar8;
                  uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
                  if (((uVar7 & 1) != 0) &&
                     (pvVar4 = (void *)FUN_710392e290(0x10,ppplVar8,param_3,param_4,param_5,param_6,
                                                      param_7,param_8), pvVar4 != (void *)0x0))
                  goto LAB_7101f05c74;
                }
                goto LAB_7101f05c70;
              }
            }
LAB_7101f05c74:
            puVar9 = (undefined4 *)((long)pvVar4 + ((long)pppplVar12 >> 2) * 4);
            *puVar9 = (int)uVar13;
            if (0 < (long)pppplVar12) {
              memcpy(pvVar4,__src,(size_t)pppplVar12);
              param_3 = pppplVar12;
            }
            *(void **)(param_1 + 0xa2) = pvVar4;
            *(undefined4 **)(param_1 + 0xa4) = puVar9 + 1;
            *(void **)(param_1 + 0xa6) = (void *)((long)pvVar4 + uVar14 * 4);
            if (__src == (void *)0x0) goto LAB_7101f05e54;
LAB_7101f05e4c:
            FUN_710392eb40((ulong)__src);
          }
          else {
            if (4 < uVar15) goto LAB_7101f05f30;
            uVar2 = *(undefined4 *)(*DAT_7105328e18 + lVar5 + uVar15 * 4);
            puVar9 = *(undefined4 **)(param_1 + 0xa4);
            if (puVar9 < *(undefined4 **)(param_1 + 0xa6)) {
              *puVar9 = uVar2;
LAB_7101f05d00:
              *(long *)(param_1 + 0xa4) = *(long *)(param_1 + 0xa4) + 4;
            }
            else {
              __src = *(void **)(param_1 + 0xa2);
              pppplVar12 = (long ****)((long)puVar9 - (long)__src);
              uVar14 = ((long)pppplVar12 >> 2) + 1;
              if (uVar14 >> 0x3e != 0) {
LAB_7101f05f34:
                    /* WARNING: Subroutine does not return */
                std::__vector_base_common<true>::__throw_length_error();
              }
              lVar6 = (long)*(undefined4 **)(param_1 + 0xa6) - (long)__src;
              if ((ulong)(lVar6 >> 2) < 0x1fffffffffffffff) {
                uVar7 = lVar6 >> 1;
                if (uVar14 <= uVar7) {
                  uVar14 = uVar7;
                }
                if (uVar14 != 0) {
                  if (uVar14 >> 0x3e == 0) goto LAB_7101f05dac;
                  goto LAB_7101f05f30;
                }
LAB_7101f05e0c:
                pvVar4 = (void *)0x0;
              }
              else {
                uVar14 = 0x3fffffffffffffff;
LAB_7101f05dac:
                ppplVar8 = (long ***)(uVar14 * 4);
                if (ppplVar8 == (long ***)0x0) {
                  ppplVar8 = (long ***)0x1;
                }
                pvVar4 = (void *)FUN_710392e290(0x10,ppplVar8,param_3,param_4,param_5,param_6,
                                                param_7,param_8);
                if (pvVar4 == (void *)0x0) {
                  if (DAT_7105332f00 != (long *)0x0) {
                    local_64 = 0;
                    param_3 = &local_70;
                    local_70 = ppplVar8;
                    uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
                    if (((uVar7 & 1) != 0) &&
                       (pvVar4 = (void *)FUN_710392e290(0x10,ppplVar8,param_3,param_4,param_5,
                                                        param_6,param_7,param_8),
                       pvVar4 != (void *)0x0)) goto LAB_7101f05e10;
                  }
                  goto LAB_7101f05e0c;
                }
              }
LAB_7101f05e10:
              puVar9 = (undefined4 *)((long)pvVar4 + ((long)pppplVar12 >> 2) * 4);
              *puVar9 = uVar2;
              if (0 < (long)pppplVar12) {
                memcpy(pvVar4,__src,(size_t)pppplVar12);
                param_3 = pppplVar12;
              }
              *(void **)(param_1 + 0xa2) = pvVar4;
              *(undefined4 **)(param_1 + 0xa4) = puVar9 + 1;
              *(void **)(param_1 + 0xa6) = (void *)((long)pvVar4 + uVar14 * 4);
              if (__src != (void *)0x0) goto LAB_7101f05e4c;
            }
          }
LAB_7101f05e54:
          uVar15 = uVar15 + 1;
        } while (uVar15 < uVar1);
        puVar10 = *(undefined8 **)(param_1 + 0x8e);
        puVar11 = *(undefined8 **)(param_1 + 0x8c);
      }
      uVar13 = uVar13 + 1;
      lVar5 = lVar5 + 0x50;
    } while (uVar13 < (ulong)((long)puVar10 - (long)puVar11 >> 4));
  }
  if (((DAT_71053144d8 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_71053144d8), iVar3 != 0)) {
    FUN_7101764000();
    FUN_71000001c0();
    __cxa_guard_release(&DAT_71053144d8);
  }
  if (DAT_710530a976 == '\0') {
    param_1[0x9e] = (int)((ulong)(*(long *)(param_1 + 0x8e) - *(long *)(param_1 + 0x8c)) >> 4);
  }
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  if ((uint)param_1[0x7d] < 0x13) {
    param_1[(long)param_1[0x7d] + 0x6a] = 0x11;
    return;
  }
LAB_7101f05f30:
                    /* WARNING: Subroutine does not return */
  abort();
}

