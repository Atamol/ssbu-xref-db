// addr:      7101baf4f0
// offset:    0x1baf4f0
// name:      FUN_7101baf4f0
// mangled:   
// signature: undefined __cdecl FUN_7101baf4f0(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101baf4f0(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  uint uVar2;
  char cVar3;
  void *__dest;
  ulong uVar4;
  long ****pppplVar5;
  int iVar6;
  undefined4 *puVar7;
  long ***ppplVar8;
  int iVar9;
  undefined4 uVar10;
  undefined8 *puVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  void *__src;
  long ****__n;
  int iVar15;
  ulong uVar16;
  undefined8 local_78;
  ulong local_70;
  undefined4 local_64;
  
  if (*(int *)(param_1 + 0xcc) == 0) {
    FUN_71037760f0(*(long *)**(undefined8 **)(param_1 + 0xd8),1);
                    /* WARNING: Could not recover jumptable at 0x007101baf67c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0xf0) + 0x60))(*(long **)(param_1 + 0xf0),1);
    return;
  }
  if (*(char *)(param_1 + 0xe9) != '\0') {
    uVar14 = *(ulong *)(DAT_71052c50f0 + 0x2b8);
    uVar13 = (uint)uVar14;
    if ((uVar14 & 0xffff7f7f) == 0 &&
        ((char)(uVar14 >> 0x28) == '\0' && (char)(uVar14 >> 0x20) == '\0')) {
      uVar14 = 0;
    }
    else if (*(uint *)(param_1 + 0x148) != uVar13) {
      lVar12 = *(long *)(param_1 + 0x130);
      lVar1 = *(long *)(param_1 + 0x138);
      FUN_7101bafcf0(param_1,uVar13,(long ****)0x1,param_4,param_5,param_6,param_7,param_8);
      FUN_7101bafcf0(param_1,uVar13,(long ****)0x2,param_4,param_5,param_6,param_7,param_8);
      FUN_7101bafcf0(param_1,uVar13,(long ****)&DAT_00000004,param_4,param_5,param_6,param_7,param_8
                    );
      FUN_7101bafcf0(param_1,uVar13,(long ****)&DAT_00000008,param_4,param_5,param_6,param_7,param_8
                    );
      FUN_7101bafcf0(param_1,uVar13,(long ****)&DAT_00000010,param_4,param_5,param_6,param_7,param_8
                    );
      FUN_7101bafcf0(param_1,uVar13,(long ****)&SUB_00000020,param_4,param_5,param_6,param_7,param_8
                    );
      FUN_7101bafcf0(param_1,uVar13,(long ****)&DAT_00000400,param_4,param_5,param_6,param_7,param_8
                    );
      FUN_7101bafcf0(param_1,uVar13,(long ****)&DAT_00001000,param_4,param_5,param_6,param_7,param_8
                    );
      FUN_7101bafcf0(param_1,uVar13,(long ****)0x2000,param_4,param_5,param_6,param_7,param_8);
      pppplVar5 = (long ****)0x4000;
      FUN_7101bafcf0(param_1,uVar13,(long ****)0x4000,param_4,param_5,param_6,param_7,param_8);
      puVar7 = *(undefined4 **)(param_1 + 0x138);
      iVar9 = (int)((ulong)((long)puVar7 - *(long *)(param_1 + 0x130)) >> 4);
      if (lVar1 - lVar12 >> 4 != (long)iVar9) {
        iVar6 = *(int *)(param_1 + 0x14c);
        if (iVar6 < iVar9) {
          if (iVar9 - iVar6 != 0) {
            *(undefined4 **)(param_1 + 0x138) = puVar7 + (long)(iVar9 - iVar6) * -4;
          }
        }
        else if ((iVar9 < iVar6) && (0 < iVar6 - iVar9)) {
          iVar15 = 1;
          do {
            if (puVar7 < *(undefined4 **)(param_1 + 0x140)) {
              *puVar7 = 0x12;
              *(undefined1 *)(puVar7 + 1) = 0xd;
              *(undefined1 *)((long)puVar7 + 7) = local_78._2_1_;
              *(undefined2 *)((long)puVar7 + 5) = (undefined2)local_78;
              *(undefined8 *)(puVar7 + 2) = 0;
              *(long *)(param_1 + 0x138) = *(long *)(param_1 + 0x138) + 0x10;
            }
            else {
              __src = *(void **)(param_1 + 0x130);
              __n = (long ****)((long)puVar7 - (long)__src);
              uVar16 = ((long)__n >> 4) + 1;
              if (uVar16 >> 0x3c != 0) {
                    /* WARNING: Subroutine does not return */
                std::__vector_base_common<true>::__throw_length_error();
              }
              lVar12 = (long)*(undefined4 **)(param_1 + 0x140) - (long)__src;
              if ((ulong)(lVar12 >> 4) < 0x7ffffffffffffff) {
                uVar4 = lVar12 >> 3;
                if (uVar16 <= uVar4) {
                  uVar16 = uVar4;
                }
                if (uVar16 != 0) {
                  if (uVar16 >> 0x3c == 0) goto LAB_7101baf748;
                  goto LAB_7101bafa00;
                }
LAB_7101baf7a8:
                __dest = (void *)0x0;
              }
              else {
                uVar16 = 0xfffffffffffffff;
LAB_7101baf748:
                ppplVar8 = (long ***)(uVar16 * 0x10);
                if (ppplVar8 == (long ***)0x0) {
                  ppplVar8 = (long ***)0x1;
                }
                __dest = (void *)FUN_710392e290(0x10,ppplVar8,pppplVar5,param_4,param_5,param_6,
                                                param_7,param_8);
                if (__dest == (void *)0x0) {
                  if (DAT_7105332f00 != (long *)0x0) {
                    local_64 = 0;
                    pppplVar5 = (long ****)&local_78;
                    local_78 = (undefined **)ppplVar8;
                    uVar4 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
                    if (((uVar4 & 1) != 0) &&
                       (__dest = (void *)FUN_710392e290(0x10,ppplVar8,pppplVar5,param_4,param_5,
                                                        param_6,param_7,param_8),
                       __dest != (void *)0x0)) goto LAB_7101baf7ac;
                  }
                  goto LAB_7101baf7a8;
                }
              }
LAB_7101baf7ac:
              puVar7 = (undefined4 *)((long)__dest + ((long)__n >> 4) * 0x10);
              *puVar7 = 0x12;
              *(undefined1 *)(puVar7 + 1) = 0xd;
              *(undefined8 *)(puVar7 + 2) = 0;
              *(undefined1 *)((long)puVar7 + 7) = local_78._2_1_;
              *(undefined2 *)((long)puVar7 + 5) = (undefined2)local_78;
              if (0 < (long)__n) {
                memcpy(__dest,__src,(size_t)__n);
                pppplVar5 = __n;
              }
              *(void **)(param_1 + 0x130) = __dest;
              *(undefined4 **)(param_1 + 0x138) = puVar7 + 4;
              *(void **)(param_1 + 0x140) = (void *)((long)__dest + uVar16 * 0x10);
              if (__src != (void *)0x0) {
                FUN_710392eb40((ulong)__src);
              }
            }
            if (iVar6 - iVar9 <= iVar15) break;
            puVar7 = *(undefined4 **)(param_1 + 0x138);
            iVar15 = iVar15 + 1;
          } while( true );
        }
        FUN_7103776640(&local_78,**(long **)(param_1 + 0xd8) + 8,(byte ****)"set_parts_scr_item_00",
                       pppplVar5,param_4,param_5,param_6,param_7,param_8);
        FUN_7101bb0300(param_1,(long)&local_78,pppplVar5,param_4,param_5,param_6,param_7,param_8);
        uVar16 = local_70;
        local_78 = &PTR_FUN_710523d988;
        local_70 = 0;
        if (uVar16 != 0) {
          uVar4 = *(ulong *)(uVar16 + 0x18);
          *(undefined ***)(uVar16 + 0x10) = &PTR_FUN_710523d9a8;
          *(undefined8 *)(uVar16 + 0x18) = 0;
          if (uVar4 != 0) {
            FUN_710392eb40(uVar4);
          }
          FUN_710392eb40(uVar16);
        }
      }
    }
    *(int *)(param_1 + 0x148) = (int)uVar14;
  }
  if (*(char *)(param_1 + 0xe8) == '\0') {
    return;
  }
  if ((*(long *)(param_1 + 0xf0) != 0) && (*(int *)(*(long *)(param_1 + 0xf0) + 0x25c) == 2)) {
    uVar13 = *(uint *)(param_1 + 0xc4);
    if (0x12 < uVar13) goto LAB_7101bafa00;
    uVar10 = 4;
    goto LAB_7101baf9dc;
  }
  uVar13 = *(uint *)(param_1 + 0xf8);
  if (uVar13 < 10) {
    if (*(char *)(DAT_71053398b0 + 8) == '\0') {
      puVar11 = &DAT_7105339830;
    }
    else {
      puVar11 = (undefined8 *)(&DAT_7105339860)[(int)uVar13];
    }
    lVar12 = puVar11[2];
    uVar2 = *(uint *)(lVar12 + 0x9c);
    if (uVar2 < 8) {
      if ((1 << (ulong)(uVar2 & 0x1f) & 0xbaU) == 0) {
        if (((uVar2 != 2) || (*(char *)(lVar12 + 0xb8) == '\0')) ||
           (*(char *)(lVar12 + 0xbd) == '\0')) goto LAB_7101baf9a0;
        cVar3 = *(char *)(lVar12 + 0xbc);
      }
      else {
        cVar3 = *(char *)(lVar12 + 0xb8);
      }
      if ((cVar3 != '\0') && (*(char *)(lVar12 + 0xbb) != '\0')) {
        if (*(char *)(DAT_71053398b0 + 8) == '\0') {
          puVar11 = &DAT_7105339830;
        }
        else {
          puVar11 = (undefined8 *)(&DAT_7105339860)[(int)uVar13];
        }
        iVar9 = *(int *)(puVar11[2] + 0x9c);
        if (iVar9 - 1U < 6) {
          if ((0x33U >> (ulong)(iVar9 - 1U & 0x1f) & 1) == 0) {
            if (1 < iVar9 - 3U) goto LAB_7101baf980;
            iVar6 = 1;
          }
          else {
            iVar6 = 0;
          }
        }
        else {
LAB_7101baf980:
          iVar6 = 2;
          if (iVar9 != 7) {
            iVar6 = -1;
          }
        }
        if (iVar6 == *(int *)(param_1 + 0x128)) {
          return;
        }
      }
    }
  }
LAB_7101baf9a0:
  if (*(uint *)(param_1 + 0xc4) < 0x13) {
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0xc4) * 4 + 0x78) = 4;
    if (0x11 < *(int *)(param_1 + 0xc4)) {
      return;
    }
    uVar13 = *(int *)(param_1 + 0xc4) + 1;
    *(uint *)(param_1 + 0xc4) = uVar13;
    if (uVar13 < 0x13) {
      uVar10 = 3;
LAB_7101baf9dc:
      *(undefined4 *)(param_1 + (long)(int)uVar13 * 4 + 0x78) = uVar10;
      return;
    }
  }
LAB_7101bafa00:
                    /* WARNING: Subroutine does not return */
  abort();
}

