// addr:      71026b4fc0
// offset:    0x26b4fc0
// name:      FUN_71026b4fc0
// mangled:   
// signature: undefined __cdecl FUN_71026b4fc0(long param_1, uint param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_71026b4fc0(long param_1,uint param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined1 uVar3;
  long *plVar4;
  ulong uVar5;
  void *__dest;
  long ****pppplVar6;
  long ****pppplVar7;
  long ****pppplVar8;
  long ****pppplVar9;
  long ****pppplVar10;
  long ****pppplVar11;
  long lVar12;
  undefined **ppuVar13;
  ulong uVar14;
  long ***ppplVar15;
  uint *puVar16;
  long lVar17;
  void *__src;
  size_t __n;
  long lVar18;
  long ***ppplStack_60;
  undefined4 uStack_54;
  
  pppplVar9 = &ppplStack_60;
  pppplVar6 = &ppplStack_60;
  pppplVar7 = &ppplStack_60;
  pppplVar8 = &ppplStack_60;
  pppplVar10 = &ppplStack_60;
  pppplVar11 = &ppplStack_60;
  lVar17 = (long)*(char *)(param_1 + 0x30) * 5 + (long)*(char *)(param_1 + 0x31);
  if (-1 < (int)lVar17) {
    lVar12 = *(long *)(param_1 + 0x10);
    lVar18 = *(long *)(lVar12 + 0xb8);
    if ((int)lVar17 < (int)((ulong)(*(long *)(lVar12 + 0xc0) - lVar18) >> 5) && param_2 < 8) {
                    /* WARNING: Switch is manually overridden */
      switch(param_2) {
      case 0:
        puVar16 = (uint *)(lVar18 + lVar17 * 0x20);
        break;
      case 1:
        puVar16 = (uint *)(lVar18 + lVar17 * 0x20 + 4);
        break;
      case 2:
        puVar16 = (uint *)(lVar18 + lVar17 * 0x20 + 8);
        break;
      case 3:
        puVar16 = (uint *)(lVar18 + lVar17 * 0x20 + 0xc);
        break;
      case 4:
        puVar16 = (uint *)(lVar18 + lVar17 * 0x20 + 0x10);
        break;
      case 5:
        puVar16 = (uint *)(lVar18 + lVar17 * 0x20 + 0x14);
        break;
      case 6:
        puVar16 = (uint *)(lVar18 + lVar17 * 0x20 + 0x18);
        break;
      case 7:
        puVar16 = (uint *)(lVar18 + lVar17 * 0x20 + 0x1c);
      }
      uVar2 = *puVar16;
      if (((uVar2 != 0xffffffff) && (uVar2 != 0x27)) &&
         (uVar5 = *(ulong *)(*(long *)(lVar12 + 0x88) + (long)(int)uVar2 * 0x20 + 8) & 0xffffffffff,
         uVar5 != 0)) {
        lVar17 = *(long *)(*(long *)(param_1 + 8) + 0x310);
        plVar4 = *(long **)(lVar17 + 0xd0);
joined_r0x0071026b50c0:
        if (plVar4 != *(long **)(lVar17 + 0xd8)) {
          if ((1 < *(uint *)(plVar4 + 1)) || (lVar18 = *plVar4, uVar5 != *(ulong *)(lVar18 + 0x68)))
          goto LAB_71026b50e0;
          if (lVar18 != 0) {
            switch(uVar2) {
            case 1:
              plVar4 = (long *)FUN_710392e290(0x10,0x180,param_3,param_4,param_5,param_6,param_7,
                                              param_8);
              if (plVar4 == (long *)0x0) {
                if (DAT_7105332f00 != (long *)0x0) {
                  uStack_54 = 0;
                  ppplStack_60 = (long ***)&DAT_00000180;
                  uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&uStack_54);
                  if (((uVar5 & 1) != 0) &&
                     (plVar4 = (long *)FUN_710392e290(0x10,0x180,pppplVar11,param_4,param_5,param_6,
                                                      param_7,param_8), plVar4 != (long *)0x0))
                  goto LAB_71026b5788;
                }
                plVar4 = (long *)0x0;
              }
LAB_71026b5788:
              lVar17 = *(long *)(param_1 + 8);
              lVar12 = *(long *)(param_1 + 0x10);
              uVar3 = *(undefined1 *)(param_1 + 0x30);
              *(undefined1 *)(plVar4 + 0xf) = 0;
              plVar4[0xb] = 0;
              plVar4[0xc] = 0;
              plVar4[2] = lVar18;
              plVar4[9] = 0;
              plVar4[10] = 0;
              *plVar4 = (long)&PTR_FUN_71050cdba0;
              plVar4[1] = lVar17;
              plVar4[0x10] = lVar12;
              plVar4[0x11] = 0xffffffff;
              plVar4[0x12] = -1;
              *(undefined1 *)(plVar4 + 0x13) = 2;
              plVar4[0xd] = 0;
              plVar4[0xe] = 0;
              plVar4[7] = 0;
              plVar4[8] = 0;
              plVar4[5] = 0;
              plVar4[6] = 0;
              plVar4[3] = 0;
              plVar4[4] = 0;
              lVar18 = _DAT_7107521008;
              lVar17 = _ConstantZero;
              *(undefined4 *)((long)plVar4 + 0xcc) = 0xffffffff;
              plVar4[0x1d] = 0x27;
              *(undefined2 *)(plVar4 + 0x18) = 0xc00;
              *(undefined2 *)((long)plVar4 + 0xf4) = 1;
              *(undefined8 *)((long)plVar4 + 0xc4) = 0;
              *(undefined8 *)((long)plVar4 + 0xdc) = 0;
              *(undefined4 *)((long)plVar4 + 0xe4) = 0;
              *(undefined1 *)(plVar4 + 0x1b) = 0;
              plVar4[0x1a] = 0;
              *(undefined4 *)(plVar4 + 0x1e) = 0;
              *(undefined2 *)(plVar4 + 0x2e) = 0;
              *(undefined4 *)((long)plVar4 + 0x174) = 0;
              *(undefined1 *)(plVar4 + 0x2f) = 0;
              *(undefined1 *)((long)plVar4 + 0x179) = uVar3;
              *plVar4 = (long)&PTR_FUN_71050cdd50;
              *(undefined4 *)((long)plVar4 + 0x17c) = 0;
              plVar4[0x21] = 0;
              plVar4[0x20] = 0x3f800000;
              plVar4[0x23] = 0;
              plVar4[0x22] = 0x3f80000000000000;
              plVar4[0x15] = lVar18;
              plVar4[0x14] = lVar17;
              plVar4[0x17] = lVar18;
              plVar4[0x16] = lVar17;
              goto LAB_71026b55d4;
            default:
              plVar4 = (long *)FUN_710392e290(0x10,0x180,param_3,param_4,param_5,param_6,param_7,
                                              param_8);
              if (plVar4 == (long *)0x0) {
                if (DAT_7105332f00 != (long *)0x0) {
                  uStack_54 = 0;
                  ppplStack_60 = (long ***)&DAT_00000180;
                  uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&uStack_54);
                  if (((uVar5 & 1) != 0) &&
                     (plVar4 = (long *)FUN_710392e290(0x10,0x180,pppplVar7,param_4,param_5,param_6,
                                                      param_7,param_8), plVar4 != (long *)0x0))
                  goto LAB_71026b53e0;
                }
                plVar4 = (long *)0x0;
              }
LAB_71026b53e0:
              lVar17 = *(long *)(param_1 + 8);
              lVar12 = *(long *)(param_1 + 0x10);
              uVar3 = *(undefined1 *)(param_1 + 0x30);
              *(undefined1 *)(plVar4 + 0xf) = 0;
              plVar4[0xb] = 0;
              plVar4[0xc] = 0;
              plVar4[2] = lVar18;
              plVar4[9] = 0;
              plVar4[10] = 0;
              *plVar4 = (long)&PTR_FUN_71050cdba0;
              plVar4[1] = lVar17;
              plVar4[0x10] = lVar12;
              plVar4[0x11] = 0xffffffff;
              plVar4[0x12] = -1;
              *(undefined1 *)(plVar4 + 0x13) = 2;
              plVar4[0xd] = 0;
              plVar4[0xe] = 0;
              plVar4[7] = 0;
              plVar4[8] = 0;
              plVar4[5] = 0;
              plVar4[6] = 0;
              plVar4[3] = 0;
              plVar4[4] = 0;
              lVar18 = _DAT_7107521008;
              lVar17 = _ConstantZero;
              *(undefined2 *)(plVar4 + 0x18) = 0xc00;
              *(undefined4 *)((long)plVar4 + 0xcc) = 0xffffffff;
              plVar4[0x1d] = 0x27;
              *(undefined8 *)((long)plVar4 + 0xc4) = 0;
              *(undefined8 *)((long)plVar4 + 0xdc) = 0;
              *(undefined4 *)((long)plVar4 + 0xe4) = 0;
              *(undefined1 *)(plVar4 + 0x1b) = 0;
              plVar4[0x1a] = 0;
              *(undefined4 *)(plVar4 + 0x1e) = 0;
              *(undefined2 *)(plVar4 + 0x2e) = 0;
              *(undefined4 *)((long)plVar4 + 0x174) = 0;
              *(undefined1 *)(plVar4 + 0x2f) = 0;
              *(undefined1 *)((long)plVar4 + 0x179) = uVar3;
              plVar4[0x15] = lVar18;
              plVar4[0x14] = lVar17;
              plVar4[0x17] = lVar18;
              plVar4[0x16] = lVar17;
              plVar4[0x21] = 0;
              plVar4[0x20] = 0x3f800000;
              plVar4[0x23] = 0;
              plVar4[0x22] = 0x3f80000000000000;
              *(undefined2 *)((long)plVar4 + 0xf4) = 1;
              goto LAB_71026b55d4;
            case 6:
            case 7:
              plVar4 = (long *)FUN_710392e290(0x10,0x180,param_3,param_4,param_5,param_6,param_7,
                                              param_8);
              if (plVar4 == (long *)0x0) {
                if (DAT_7105332f00 != (long *)0x0) {
                  uStack_54 = 0;
                  ppplStack_60 = (long ***)&DAT_00000180;
                  uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&uStack_54);
                  if (((uVar5 & 1) != 0) &&
                     (plVar4 = (long *)FUN_710392e290(0x10,0x180,pppplVar9,param_4,param_5,param_6,
                                                      param_7,param_8), plVar4 != (long *)0x0))
                  goto LAB_71026b5188;
                }
                plVar4 = (long *)0x0;
              }
LAB_71026b5188:
              lVar17 = *(long *)(param_1 + 8);
              lVar12 = *(long *)(param_1 + 0x10);
              uVar3 = *(undefined1 *)(param_1 + 0x30);
              *(undefined1 *)(plVar4 + 0xf) = 0;
              plVar4[0xb] = 0;
              plVar4[0xc] = 0;
              plVar4[2] = lVar18;
              plVar4[9] = 0;
              plVar4[10] = 0;
              *plVar4 = (long)&PTR_FUN_71050cdba0;
              plVar4[1] = lVar17;
              plVar4[0x10] = lVar12;
              plVar4[0x11] = 0xffffffff;
              plVar4[0x12] = -1;
              *(undefined1 *)(plVar4 + 0x13) = 2;
              plVar4[0xd] = 0;
              plVar4[0xe] = 0;
              plVar4[7] = 0;
              plVar4[8] = 0;
              plVar4[5] = 0;
              plVar4[6] = 0;
              plVar4[3] = 0;
              plVar4[4] = 0;
              lVar18 = _DAT_7107521008;
              lVar17 = _ConstantZero;
              *(undefined2 *)(plVar4 + 0x18) = 0xc00;
              *(undefined4 *)((long)plVar4 + 0xcc) = 0xffffffff;
              plVar4[0x1d] = 0x27;
              *(undefined8 *)((long)plVar4 + 0xc4) = 0;
              *(undefined8 *)((long)plVar4 + 0xdc) = 0;
              *(undefined4 *)((long)plVar4 + 0xe4) = 0;
              *(undefined1 *)(plVar4 + 0x1b) = 0;
              plVar4[0x1a] = 0;
              *(undefined4 *)(plVar4 + 0x1e) = 0;
              *(undefined2 *)(plVar4 + 0x2e) = 0;
              *(undefined4 *)((long)plVar4 + 0x174) = 0;
              *(undefined1 *)(plVar4 + 0x2f) = 0;
              *(undefined1 *)((long)plVar4 + 0x179) = uVar3;
              plVar4[0x15] = lVar18;
              plVar4[0x14] = lVar17;
              plVar4[0x17] = lVar18;
              plVar4[0x16] = lVar17;
              plVar4[0x21] = 0;
              plVar4[0x20] = 0x3f800000;
              plVar4[0x23] = 0;
              plVar4[0x22] = 0x3f80000000000000;
              *(undefined2 *)((long)plVar4 + 0xf4) = 1;
              ppuVar13 = &PTR_FUN_71050cdcc0;
              break;
            case 0xb:
              plVar4 = (long *)FUN_710392e290(0x10,0x180,param_3,param_4,param_5,param_6,param_7,
                                              param_8);
              if (plVar4 == (long *)0x0) {
                if (DAT_7105332f00 != (long *)0x0) {
                  uStack_54 = 0;
                  ppplStack_60 = (long ***)&DAT_00000180;
                  uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&uStack_54);
                  if (((uVar5 & 1) != 0) &&
                     (plVar4 = (long *)FUN_710392e290(0x10,0x180,pppplVar8,param_4,param_5,param_6,
                                                      param_7,param_8), plVar4 != (long *)0x0))
                  goto LAB_71026b5504;
                }
                plVar4 = (long *)0x0;
              }
LAB_71026b5504:
              lVar17 = *(long *)(param_1 + 8);
              lVar12 = *(long *)(param_1 + 0x10);
              uVar3 = *(undefined1 *)(param_1 + 0x30);
              *(undefined1 *)(plVar4 + 0xf) = 0;
              plVar4[0xb] = 0;
              plVar4[0xc] = 0;
              plVar4[2] = lVar18;
              plVar4[9] = 0;
              plVar4[10] = 0;
              *plVar4 = (long)&PTR_FUN_71050cdba0;
              plVar4[1] = lVar17;
              plVar4[0x10] = lVar12;
              plVar4[0x11] = 0xffffffff;
              plVar4[0x12] = -1;
              *(undefined1 *)(plVar4 + 0x13) = 2;
              plVar4[0xd] = 0;
              plVar4[0xe] = 0;
              plVar4[7] = 0;
              plVar4[8] = 0;
              plVar4[5] = 0;
              plVar4[6] = 0;
              plVar4[3] = 0;
              plVar4[4] = 0;
              lVar18 = _DAT_7107521008;
              lVar17 = _ConstantZero;
              *(undefined2 *)(plVar4 + 0x18) = 0xc00;
              *(undefined4 *)((long)plVar4 + 0xcc) = 0xffffffff;
              plVar4[0x1d] = 0x27;
              *(undefined8 *)((long)plVar4 + 0xc4) = 0;
              *(undefined8 *)((long)plVar4 + 0xdc) = 0;
              *(undefined4 *)((long)plVar4 + 0xe4) = 0;
              *(undefined1 *)(plVar4 + 0x1b) = 0;
              plVar4[0x1a] = 0;
              *(undefined4 *)(plVar4 + 0x1e) = 0;
              *(undefined2 *)(plVar4 + 0x2e) = 0;
              *(undefined4 *)((long)plVar4 + 0x174) = 0;
              *(undefined1 *)(plVar4 + 0x2f) = 0;
              *(undefined1 *)((long)plVar4 + 0x179) = uVar3;
              plVar4[0x15] = lVar18;
              plVar4[0x14] = lVar17;
              plVar4[0x17] = lVar18;
              plVar4[0x16] = lVar17;
              plVar4[0x21] = 0;
              plVar4[0x20] = 0x3f800000;
              plVar4[0x23] = 0;
              plVar4[0x22] = 0x3f80000000000000;
              *(undefined2 *)((long)plVar4 + 0xf4) = 1;
              ppuVar13 = &PTR_FUN_71050cdde0;
              break;
            case 0x16:
            case 0x17:
              plVar4 = (long *)FUN_710392e290(0x10,0x180,param_3,param_4,param_5,param_6,param_7,
                                              param_8);
              if (plVar4 == (long *)0x0) {
                if (DAT_7105332f00 != (long *)0x0) {
                  uStack_54 = 0;
                  ppplStack_60 = (long ***)&DAT_00000180;
                  uVar5 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&uStack_54);
                  if (((uVar5 & 1) != 0) &&
                     (plVar4 = (long *)FUN_710392e290(0x10,0x180,pppplVar6,param_4,param_5,param_6,
                                                      param_7,param_8), plVar4 != (long *)0x0))
                  goto LAB_71026b52b4;
                }
                plVar4 = (long *)0x0;
              }
LAB_71026b52b4:
              lVar17 = *(long *)(param_1 + 8);
              lVar12 = *(long *)(param_1 + 0x10);
              uVar3 = *(undefined1 *)(param_1 + 0x30);
              *(undefined1 *)(plVar4 + 0xf) = 0;
              plVar4[0xb] = 0;
              plVar4[0xc] = 0;
              plVar4[2] = lVar18;
              plVar4[9] = 0;
              plVar4[10] = 0;
              *plVar4 = (long)&PTR_FUN_71050cdba0;
              plVar4[1] = lVar17;
              plVar4[0x10] = lVar12;
              plVar4[0x11] = 0xffffffff;
              plVar4[0x12] = -1;
              *(undefined1 *)(plVar4 + 0x13) = 2;
              plVar4[0xd] = 0;
              plVar4[0xe] = 0;
              plVar4[7] = 0;
              plVar4[8] = 0;
              plVar4[5] = 0;
              plVar4[6] = 0;
              plVar4[3] = 0;
              plVar4[4] = 0;
              lVar18 = _DAT_7107521008;
              lVar17 = _ConstantZero;
              *(undefined2 *)(plVar4 + 0x18) = 0xc00;
              *(undefined4 *)((long)plVar4 + 0xcc) = 0xffffffff;
              plVar4[0x1d] = 0x27;
              *(undefined8 *)((long)plVar4 + 0xc4) = 0;
              *(undefined8 *)((long)plVar4 + 0xdc) = 0;
              *(undefined4 *)((long)plVar4 + 0xe4) = 0;
              *(undefined1 *)(plVar4 + 0x1b) = 0;
              plVar4[0x1a] = 0;
              *(undefined4 *)(plVar4 + 0x1e) = 0;
              *(undefined2 *)(plVar4 + 0x2e) = 0;
              *(undefined4 *)((long)plVar4 + 0x174) = 0;
              *(undefined1 *)(plVar4 + 0x2f) = 0;
              *(undefined1 *)((long)plVar4 + 0x179) = uVar3;
              plVar4[0x15] = lVar18;
              plVar4[0x14] = lVar17;
              plVar4[0x17] = lVar18;
              plVar4[0x16] = lVar17;
              plVar4[0x21] = 0;
              plVar4[0x20] = 0x3f800000;
              plVar4[0x23] = 0;
              plVar4[0x22] = 0x3f80000000000000;
              *(undefined2 *)((long)plVar4 + 0xf4) = 1;
              ppuVar13 = &PTR_FUN_71050cdc30;
            }
            *plVar4 = (long)ppuVar13;
LAB_71026b55d4:
            plVar4[0x25] = 0x3f800000;
            plVar4[0x24] = 0;
            plVar4[0x27] = 0x3f80000000000000;
            plVar4[0x26] = 0;
            plVar4[0x29] = lVar18;
            plVar4[0x28] = lVar17;
            plVar4[0x2b] = 0x3f80000000000000;
            plVar4[0x2a] = 0;
            plVar4[0x2d] = lVar18;
            plVar4[0x2c] = lVar17;
            if (*(char *)(param_1 + 0x33) != '\0') {
              *(undefined1 *)(plVar4 + 0x13) = 1;
            }
            pppplVar9 = (long ****)(ulong)uVar2;
            (**(code **)(*plVar4 + 0x10))(plVar4,param_2);
            puVar1 = *(undefined8 **)(param_1 + 0x20);
            if (puVar1 == *(undefined8 **)(param_1 + 0x28)) {
              __src = *(void **)(param_1 + 0x18);
              __n = (long)puVar1 - (long)__src;
              uVar5 = ((long)__n >> 3) + 1;
              if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                std::__vector_base_common<true>::__throw_length_error();
              }
              lVar17 = (long)*(undefined8 **)(param_1 + 0x28) - (long)__src;
              if ((ulong)(lVar17 >> 3) < 0xfffffffffffffff) {
                uVar14 = lVar17 >> 2;
                if (uVar5 <= uVar14) {
                  uVar5 = uVar14;
                }
                if (uVar5 != 0) {
                  if (uVar5 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                    abort();
                  }
                  goto LAB_71026b5678;
                }
LAB_71026b56d8:
                __dest = (void *)0x0;
              }
              else {
                uVar5 = 0x1fffffffffffffff;
LAB_71026b5678:
                ppplVar15 = (long ***)(uVar5 * 8);
                if (ppplVar15 == (long ***)0x0) {
                  ppplVar15 = (long ***)0x1;
                }
                __dest = (void *)FUN_710392e290(0x10,ppplVar15,pppplVar9,param_4,param_5,param_6,
                                                param_7,param_8);
                if (__dest == (void *)0x0) {
                  if (DAT_7105332f00 != (long *)0x0) {
                    uStack_54 = 0;
                    ppplStack_60 = ppplVar15;
                    uVar14 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&uStack_54);
                    if (((uVar14 & 1) != 0) &&
                       (__dest = (void *)FUN_710392e290(0x10,ppplVar15,pppplVar10,param_4,param_5,
                                                        param_6,param_7,param_8),
                       __dest != (void *)0x0)) goto LAB_71026b56dc;
                  }
                  goto LAB_71026b56d8;
                }
              }
LAB_71026b56dc:
              puVar1 = (undefined8 *)((long)__dest + ((long)__n >> 3) * 8);
              *puVar1 = plVar4;
              if (0 < (long)__n) {
                memcpy(__dest,__src,__n);
              }
              *(void **)(param_1 + 0x18) = __dest;
              *(undefined8 **)(param_1 + 0x20) = puVar1 + 1;
              *(void **)(param_1 + 0x28) = (void *)((long)__dest + uVar5 * 8);
              if (__src != (void *)0x0) {
                FUN_710392eb40((ulong)__src);
                return;
              }
            }
            else {
              *puVar1 = plVar4;
              *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + 8;
            }
          }
        }
      }
    }
  }
  return;
LAB_71026b50e0:
  plVar4 = plVar4 + 2;
  goto joined_r0x0071026b50c0;
}

