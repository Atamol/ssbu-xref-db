// addr:      7101e7b370
// offset:    0x1e7b370
// name:      FUN_7101e7b370
// mangled:   
// signature: undefined __cdecl FUN_7101e7b370(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_7101e7b370(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 *puVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  byte bVar5;
  byte *pbVar6;
  long ****pppplVar7;
  char *pcVar8;
  long lVar9;
  ulong uVar10;
  long ***ppplVar11;
  long *plVar12;
  byte *pbVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  void *__src;
  byte *pbVar17;
  byte *pbVar18;
  long ***ppplVar19;
  void *__dest;
  long ***local_88;
  long ***local_80;
  long ***local_78;
  undefined4 local_64;
  
  lVar15 = *(long *)(param_1 + 0x168);
  lVar16 = *(long *)(param_1 + 0x420);
  lVar9 = *(long *)(lVar15 + 0x58);
  if (*(long *)(lVar15 + 0x60) != lVar9) {
    uVar14 = 0;
    do {
      pbVar13 = *(byte **)(lVar16 + 0x40);
      pbVar2 = *(byte **)(lVar16 + 0x48);
      if (pbVar13 != pbVar2) {
        bVar4 = *pbVar13;
        while ((uint)bVar4 != (uint)uVar14) {
          pbVar13 = pbVar13 + 1;
          if (pbVar2 == pbVar13) goto LAB_7101e7b430;
          bVar4 = *pbVar13;
        }
      }
      if (pbVar13 == pbVar2) {
LAB_7101e7b430:
        FUN_7103778300(0x3f800000,*(long *)(lVar9 + uVar14 * 0x10 + 8),0x71043ade8a);
        if ((ulong)(*(long *)(lVar15 + 0x60) - *(long *)(lVar15 + 0x58) >> 4) <= uVar14) {
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_out_of_range();
        }
        FUN_7103778300(0x3f800000,*(long *)(*(long *)(lVar15 + 0x58) + uVar14 * 0x10 + 8),
                       0x71043f0f7f);
        puVar1 = *(undefined1 **)(lVar15 + 0x90);
        if (puVar1 == *(undefined1 **)(lVar15 + 0x98)) {
          __src = *(void **)(lVar15 + 0x88);
          pppplVar7 = (long ****)(puVar1 + -(long)__src);
          ppplVar19 = (long ***)((long)pppplVar7 + 1);
          if ((long)ppplVar19 < 0) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_length_error();
          }
          uVar10 = (long)*(undefined1 **)(lVar15 + 0x98) - (long)__src;
          if (uVar10 < 0x3fffffffffffffff) {
            ppplVar11 = (long ***)(uVar10 * 2);
            if (ppplVar19 <= ppplVar11) {
              ppplVar19 = ppplVar11;
            }
            if (ppplVar19 != (long ***)0x0) goto LAB_7101e7b4c8;
LAB_7101e7b51c:
            __dest = (void *)0x0;
          }
          else {
            ppplVar19 = (long ***)0x7fffffffffffffff;
LAB_7101e7b4c8:
            __dest = (void *)FUN_710392e290(0x10,ppplVar19,param_3,param_4,param_5,param_6,param_7,
                                            param_8);
            if (__dest == (void *)0x0) {
              if (DAT_7105332f00 != (long *)0x0) {
                local_78 = (long ***)((ulong)local_78 & 0xffffffff00000000);
                param_3 = &local_88;
                local_88 = ppplVar19;
                uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_78);
                if (((uVar10 & 1) != 0) &&
                   (__dest = (void *)FUN_710392e290(0x10,ppplVar19,param_3,param_4,param_5,param_6,
                                                    param_7,param_8), __dest != (void *)0x0))
                goto LAB_7101e7b520;
              }
              goto LAB_7101e7b51c;
            }
          }
LAB_7101e7b520:
          puVar1 = (undefined1 *)((long)__dest + (long)pppplVar7);
          *puVar1 = (char)uVar14;
          if (0 < (long)pppplVar7) {
            memcpy(__dest,__src,(size_t)pppplVar7);
            param_3 = pppplVar7;
          }
          *(void **)(lVar15 + 0x88) = __dest;
          *(undefined1 **)(lVar15 + 0x90) = puVar1 + 1;
          *(undefined1 **)(lVar15 + 0x98) = (undefined1 *)((long)__dest + (long)ppplVar19);
          if (__src != (void *)0x0) {
            FUN_710392eb40((ulong)__src);
          }
        }
        else {
          *puVar1 = (char)uVar14;
          *(long *)(lVar15 + 0x90) = *(long *)(lVar15 + 0x90) + 1;
        }
      }
      else {
        FUN_7103778300(0x3f800000,*(long *)(lVar9 + uVar14 * 0x10 + 8),0x7104319507);
      }
      uVar14 = (ulong)((uint)uVar14 + 1) & 0xff;
      lVar9 = *(long *)(lVar15 + 0x58);
    } while (uVar14 < (ulong)(*(long *)(lVar15 + 0x60) - lVar9 >> 4));
    lVar15 = *(long *)(param_1 + 0x168);
  }
  pbVar13 = *(byte **)(lVar15 + 0x40);
  pbVar2 = *(byte **)(lVar15 + 0x48);
  if (pbVar13 != pbVar2) {
    do {
      pbVar18 = *(byte **)(lVar16 + 0x58);
      pbVar3 = *(byte **)(lVar16 + 0x60);
      bVar4 = *pbVar13;
      param_3 = (long ****)(ulong)bVar4;
      bVar5 = pbVar13[1];
      param_4 = (byte ****)(ulong)bVar5;
      if (pbVar18 != pbVar3) {
        if ((bVar4 != *pbVar18 || bVar5 != pbVar18[1]) && (bVar5 != *pbVar18 || bVar4 != pbVar18[1])
           ) {
          pbVar6 = pbVar18 + 2;
          while (pbVar17 = pbVar6, pbVar18 = pbVar3, pbVar3 != pbVar17) {
            pbVar18 = pbVar17;
            if (((bVar4 == *pbVar17) && (bVar5 == pbVar17[1])) ||
               ((pbVar6 = pbVar17 + 2, bVar5 == *pbVar17 && (bVar4 == pbVar17[1])))) break;
          }
        }
      }
      FUN_7101e85c50((long *)&local_88,*(long *)(param_1 + 0x168),bVar4,bVar5);
      if (local_88 != (long ***)0x0) {
        pcVar8 = "color_forget_on";
        if (*(byte **)(lVar16 + 0x60) != pbVar18) {
          pcVar8 = "linked_reset";
        }
        FUN_7103778300(0x3f800000,(long)local_88[1],(long)pcVar8);
      }
      pbVar13 = pbVar13 + 2;
    } while (pbVar13 != pbVar2);
  }
  FUN_71037780e0(&local_88,param_1 + 0x158,(long ****)"anim_in_all",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  pppplVar7 = (long ****)FUN_710392e290(0x10,0x10,param_3,param_4,param_5,param_6,param_7,param_8);
  if (pppplVar7 == (long ****)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_78 = (long ***)&DAT_00000010;
      pppplVar7 = &local_78;
      uVar14 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar14 & 1) != 0) &&
         (pppplVar7 = (long ****)
                      FUN_710392e290(0x10,0x10,pppplVar7,param_4,param_5,param_6,param_7,param_8),
         pppplVar7 != (long ****)0x0)) goto LAB_7101e7b6d0;
    }
    pppplVar7 = (long ****)0x0;
  }
LAB_7101e7b6d0:
  ppplVar19 = local_80;
  *pppplVar7 = (long ***)&PTR_FUN_710523d9e8;
  pppplVar7[1] = (long ***)0x0;
  if (&local_88 != pppplVar7) {
    local_80 = (long ***)0x0;
    pppplVar7[1] = ppplVar19;
  }
  plVar12 = *(long **)(param_1 + 0x408);
  *(long *****)(param_1 + 0x408) = pppplVar7;
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 8))(plVar12);
  }
  ppplVar19 = local_80;
  local_88 = (long ***)&PTR_FUN_710523d9e8;
  local_80 = (long ***)0x0;
  if (ppplVar19 != (long ***)0x0) {
    FUN_710392eb40((ulong)ppplVar19);
  }
  FUN_710377aee0(0x3f800000,*(long *)(param_1 + 0x408));
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  *(undefined8 *)(param_1 + 0x108) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(undefined8 *)(param_1 + 0x144) = 0xffffffff00000000;
  *(undefined8 *)(param_1 + 0xf0) = 0xa0000000b;
  *(undefined1 *)(param_1 + 0x14c) = 0;
  *(undefined8 *)(param_1 + 0x13c) = 0xffffffff00000001;
  return;
}

