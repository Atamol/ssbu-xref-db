// addr:      7102ee9c80
// offset:    0x2ee9c80
// name:      FUN_7102ee9c80
// mangled:   
// signature: undefined __cdecl FUN_7102ee9c80(long * param_1, undefined8 param_2, long * * * * * * * * * param_3, undefined1[16] * param_4, undefined1[16] * param_5, undefined1[16] * param_6, long * * * * * * param_7, long * * * param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7102ee9c80(long *param_1,undefined8 param_2,long *********param_3,
                   undefined1 (*param_4) [16],undefined1 (*param_5) [16],undefined1 (*param_6) [16],
                   long ******param_7,long ***param_8)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  long *plVar6;
  long *plVar7;
  void *__dest;
  ulong uVar8;
  char *pcVar9;
  long ****pppplVar10;
  undefined **ppuVar11;
  long *plVar12;
  long lVar13;
  long ***ppplVar14;
  ulong uVar15;
  int *piVar16;
  long *plVar17;
  long lVar18;
  void *__src;
  long ****__n;
  ulong *puVar19;
  ulong *puVar20;
  undefined1 auVar21 [16];
  long ***local_80;
  undefined8 uStack_78;
  undefined4 local_64;
  
  FUN_71025d9250(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  lVar18 = *(long *)(*lib::Singleton<app::StageManager>::instance_ + 0x1d0);
  plVar17 = (long *)(lVar18 + 0x58);
  plVar7 = plVar17;
  if ((long *)*plVar17 != (long *)0x0) {
    plVar6 = (long *)*plVar17;
    plVar7 = (long *)(lVar18 + 0x58);
    do {
      while (plVar12 = plVar6, (long *)plVar12[4] <= param_1) {
        if (param_1 <= (long *)plVar12[4]) goto LAB_7102ee9d08;
        plVar7 = plVar12 + 1;
        plVar6 = (long *)*plVar7;
        if ((long *)*plVar7 == (long *)0x0) goto LAB_7102ee9d08;
      }
      plVar6 = (long *)*plVar12;
      plVar7 = plVar12;
    } while ((long *)*plVar12 != (long *)0x0);
  }
LAB_7102ee9d08:
  *(undefined4 *)(*(long *)(*plVar7 + 0x28) + 0x660) = 3;
  if ((*(long **)(lVar18 + 0x20) == param_1) && (*(int *)(lVar18 + 0x38) < 3)) {
    plVar7 = plVar17;
    if ((long *)*plVar17 != (long *)0x0) {
      plVar6 = (long *)*plVar17;
      plVar7 = (long *)(lVar18 + 0x58);
      do {
        while (plVar12 = plVar6, (long *)plVar12[4] <= param_1) {
          if (param_1 <= (long *)plVar12[4]) goto LAB_7102ee9d7c;
          plVar7 = plVar12 + 1;
          plVar6 = (long *)*plVar7;
          if ((long *)*plVar7 == (long *)0x0) goto LAB_7102ee9d7c;
        }
        plVar6 = (long *)*plVar12;
        plVar7 = plVar12;
      } while ((long *)*plVar12 != (long *)0x0);
    }
LAB_7102ee9d7c:
    plVar6 = *(long **)(*(long *)(*plVar7 + 0x28) + 0x690);
    if (plVar6 == (long *)0x0) goto LAB_7102eea544;
    (**(code **)(*plVar6 + 0x30))(plVar6,*(long *)(*plVar7 + 0x28) + 0x660);
  }
  plVar7 = plVar17;
  if ((long *)*plVar17 != (long *)0x0) {
    plVar6 = (long *)*plVar17;
    plVar7 = (long *)(lVar18 + 0x58);
    do {
      while (plVar12 = plVar6, (long *)plVar12[4] <= param_1) {
        if (param_1 <= (long *)plVar12[4]) goto LAB_7102ee9de8;
        plVar7 = plVar12 + 1;
        plVar6 = (long *)*plVar7;
        if ((long *)*plVar7 == (long *)0x0) goto LAB_7102ee9de8;
      }
      plVar6 = (long *)*plVar12;
      plVar7 = plVar12;
    } while ((long *)*plVar12 != (long *)0x0);
  }
LAB_7102ee9de8:
  *(undefined4 *)(*(long *)(*plVar7 + 0x28) + 0x6a0) = 0;
  if ((*(long **)(lVar18 + 0x20) == param_1) && (*(int *)(lVar18 + 0x38) < 3)) {
    plVar7 = plVar17;
    if ((long *)*plVar17 != (long *)0x0) {
      plVar6 = (long *)*plVar17;
      plVar7 = (long *)(lVar18 + 0x58);
      do {
        while (plVar12 = plVar6, (long *)plVar12[4] <= param_1) {
          if (param_1 <= (long *)plVar12[4]) goto LAB_7102ee9e58;
          plVar7 = plVar12 + 1;
          plVar6 = (long *)*plVar7;
          if ((long *)*plVar7 == (long *)0x0) goto LAB_7102ee9e58;
        }
        plVar6 = (long *)*plVar12;
        plVar7 = plVar12;
      } while ((long *)*plVar12 != (long *)0x0);
    }
LAB_7102ee9e58:
    plVar6 = *(long **)(*(long *)(*plVar7 + 0x28) + 0x6d0);
    if (plVar6 == (long *)0x0) goto LAB_7102eea544;
    (**(code **)(*plVar6 + 0x30))(plVar6,*(long *)(*plVar7 + 0x28) + 0x6a0);
  }
  plVar7 = plVar17;
  if ((long *)*plVar17 != (long *)0x0) {
    plVar6 = (long *)*plVar17;
    plVar7 = (long *)(lVar18 + 0x58);
    do {
      while (plVar12 = plVar6, (long *)plVar12[4] <= param_1) {
        if (param_1 <= (long *)plVar12[4]) goto LAB_7102ee9ec4;
        plVar7 = plVar12 + 1;
        plVar6 = (long *)*plVar7;
        if ((long *)*plVar7 == (long *)0x0) goto LAB_7102ee9ec4;
      }
      plVar6 = (long *)*plVar12;
      plVar7 = plVar12;
    } while ((long *)*plVar12 != (long *)0x0);
  }
LAB_7102ee9ec4:
  lVar13 = *(long *)(*plVar7 + 0x28);
  *(undefined8 *)(lVar13 + 0x6e8) = 0;
  *(undefined8 *)(lVar13 + 0x6e0) = 0;
  if ((*(long **)(lVar18 + 0x20) == param_1) && (*(int *)(lVar18 + 0x38) < 3)) {
    if ((long *)*plVar17 != (long *)0x0) {
      plVar7 = (long *)*plVar17;
      plVar17 = (long *)(lVar18 + 0x58);
      do {
        while (plVar6 = plVar7, (long *)plVar6[4] <= param_1) {
          if (param_1 <= (long *)plVar6[4]) goto LAB_7102ee9f30;
          plVar17 = plVar6 + 1;
          plVar7 = (long *)*plVar17;
          if ((long *)*plVar17 == (long *)0x0) goto LAB_7102ee9f30;
        }
        plVar7 = (long *)*plVar6;
        plVar17 = plVar6;
      } while ((long *)*plVar6 != (long *)0x0);
    }
LAB_7102ee9f30:
    plVar7 = *(long **)(*(long *)(*plVar17 + 0x28) + 0x710);
    if (plVar7 == (long *)0x0) {
LAB_7102eea544:
                    /* WARNING: Subroutine does not return */
      abort();
    }
    (**(code **)(*plVar7 + 0x30))(plVar7,*(long *)(*plVar17 + 0x28) + 0x6e0);
  }
  plVar7 = (long *)**(long **)(param_1[0x60] + 0x18);
  do {
    if (plVar7 == (long *)(*(long **)(param_1[0x60] + 0x18))[1]) goto LAB_7102ee9f9c;
    lVar18 = *plVar7;
    plVar7 = plVar7 + 1;
  } while ((*(ulong *)(lVar18 + 0xa0) & 0xffffffffff) != 0x7b569df99);
  lVar18 = *(long *)(lVar18 + 0x130);
  if (lVar18 != 0) {
    param_1[0x121] = lVar18;
  }
LAB_7102ee9f9c:
  pcVar9 = "IPP0002";
  FUN_71025f55b0(*(undefined8 **)param_1[0x121],(undefined8 *)((undefined8 *)param_1[0x121])[1],
                 "IPP0002");
  *(undefined4 *)(param_1 + 0x117) = 0;
  if ((*(byte *)(param_1 + 0x1b) >> 4 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x117) = 1;
    if (((DAT_71053144d8 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_71053144d8), iVar5 != 0)) {
      FUN_7101764000();
      ppuVar11 = &PTR_LOOP_7104f17000;
      FUN_71000001c0();
      __cxa_guard_release(&DAT_71053144d8);
      pcVar9 = (char *)ppuVar11;
    }
    if (DAT_71052c51ba != '\0') {
      *(undefined4 *)(param_1 + 0x117) = 2;
      pcVar9 = "IPP0002";
      FUN_71025f5420(*(undefined8 **)param_1[0x121],(undefined8 *)((undefined8 *)param_1[0x121])[1],
                     "IPP0002");
      if ((((((*(long **)(*(long *)(*lib::Singleton<app::StageManager>::instance_ + 0x1f0) + 0x20)
               == param_1) &&
             (*(char *)(*(long *)(*lib::Singleton<app::StageManager>::instance_ + 0x1f0) + 0xa8) !=
              '\0')) && (DAT_71052c3420 != 0)) &&
           ((lVar18 = **(long **)(DAT_71052c3420 + 8), *(long *)(lVar18 + 0xbf8) != 0 &&
            (uVar15 = (**(code **)(*(long *)(lVar18 + 0xbf0) + 0x10))(), (uVar15 & 1) != 0)))) &&
          ((DAT_710532f8b0 == 0 ||
           ((*(int *)(*(long *)(DAT_710532f8b0 + 8) + 0x138) == 0 ||
            (*(char *)(*(long *)(DAT_710532f8b0 + 8) + 0x2b8) != '\v')))))) &&
         (lVar18 = *(long *)(**(long **)(lVar18 + 0xbf8) + 0x738), *(char *)(lVar18 + 8) != '\0')) {
        *(undefined4 *)(*(long *)(lVar18 + 0x38) + 0xf8) = 3;
      }
    }
  }
  *(undefined1 *)((long)param_1 + 0x8c5) = 0;
  FUN_7102633910(param_1[99],(long *********)"render_param",pcVar9,param_4,(long ****)param_5,
                 param_6,param_7,param_8);
  FUN_7102633b90(param_1[99],(long *********)"stage_light_on",1,param_4,(long ****)param_5,param_6,
                 param_7,param_8);
  pppplVar10 = (long ****)0x1;
  FUN_7102633a10(param_1[99],(long *********)"chara_light_on",1,param_4,(long ****)param_5,param_6,
                 param_7,param_8);
  FUN_7102633800(param_1[99],(long *********)"reflection_cubemap_light_on",pppplVar10,param_4,
                 (long ****)param_5,param_6,param_7,param_8);
  FUN_71025f7350(*(long *)(param_1[99] + 0x10),(byte *)"light_00");
  *(undefined2 *)((long)param_1 + 0x8c6) = 0x100;
  *(undefined4 *)(param_1 + 0x119) = 0;
  plVar7 = *(long **)(*(long *)(*(long *)(param_1[100] + 0x48) + 800) + 0x40);
  piVar2 = (int *)*plVar7;
  piVar3 = (int *)plVar7[1];
  if ((long)piVar3 - (long)piVar2 == 0) {
LAB_7102eea110:
    uVar15 = 0xffffffff;
  }
  else {
    piVar16 = piVar2;
    for (piVar1 = piVar2;
        (piVar1 != piVar3 &&
        ((*piVar1 != 0 ||
         (piVar16 = piVar1, (*(ulong *)(piVar1 + 2) & 0xffffffffff) != 0x1730eb7eb1))));
        piVar1 = piVar1 + 0x1c) {
      piVar16 = piVar3;
    }
    uVar15 = ((long)piVar16 - (long)piVar2 >> 4) * 0x6db6db6db6db6db7;
    if ((ulong)(((long)piVar3 - (long)piVar2 >> 4) * 0x6db6db6db6db6db7) <= uVar15)
    goto LAB_7102eea110;
  }
  *(int *)((long)param_1 + 0x8cc) = (int)uVar15;
  plVar7 = *(long **)(*(long *)(*(long *)(param_1[100] + 0x48) + 800) + 0x40);
  piVar2 = (int *)*plVar7;
  piVar3 = (int *)plVar7[1];
  if ((long)piVar3 - (long)piVar2 == 0) {
LAB_7102eea194:
    uVar15 = 0xffffffff;
  }
  else {
    piVar16 = piVar2;
    for (piVar1 = piVar2;
        (piVar1 != piVar3 &&
        ((*piVar1 != 0 ||
         (piVar16 = piVar1, (*(ulong *)(piVar1 + 2) & 0xffffffffff) != 0x16f6bf1067))));
        piVar1 = piVar1 + 0x1c) {
      piVar16 = piVar3;
    }
    uVar15 = ((long)piVar16 - (long)piVar2 >> 4) * 0x6db6db6db6db6db7;
    if ((ulong)(((long)piVar3 - (long)piVar2 >> 4) * 0x6db6db6db6db6db7) <= uVar15)
    goto LAB_7102eea194;
  }
  *(int *)(param_1 + 0x11a) = (int)uVar15;
  plVar7 = (long *)FUN_710392e290(0x10,0x80,pppplVar10,(byte ****)param_4,(long ****)param_5,param_6
                                  ,param_7,param_8);
  if (plVar7 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_80 = (long ***)&DAT_00000080;
      pppplVar10 = &local_80;
      uVar15 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar15 & 1) != 0) &&
         (plVar7 = (long *)FUN_710392e290(0x10,0x80,pppplVar10,(byte ****)param_4,(long ****)param_5
                                          ,param_6,param_7,param_8), plVar7 != (long *)0x0))
      goto LAB_7102eea1f8;
    }
    plVar7 = (long *)0x0;
  }
LAB_7102eea1f8:
  *plVar7 = (long)param_1;
  lVar13 = lRam00000071078a8008;
  lVar18 = _ConstantOne;
  plVar7[0xb] = 0;
  *(undefined2 *)(plVar7 + 0xf) = 0;
  plVar7[7] = lVar13;
  plVar7[6] = lVar18;
  plVar7[5] = lVar13;
  plVar7[4] = lVar18;
  plVar7[0xc] = 0;
  plVar7[9] = lVar13;
  plVar7[8] = lVar18;
  auVar21 = NEON_fmov(0x3f800000,4);
  plVar7[0xd] = 0;
  plVar7[0xe] = 0;
  plVar7[10] = 0;
  lVar18 = param_1[0x106];
  uVar4 = *(undefined4 *)((long)param_1 + 0x834);
  *(int *)(plVar7 + 3) = (int)param_1[0x107];
  *(int *)((long)plVar7 + 0x1c) = auVar21._12_4_;
  *(int *)(plVar7 + 2) = (int)lVar18;
  *(undefined4 *)((long)plVar7 + 0x14) = uVar4;
  *(undefined4 *)(plVar7 + 10) = *(undefined4 *)((long)param_1 + 0x83c);
  *(int *)((long)plVar7 + 0x54) = (int)param_1[0x108];
  puVar19 = (ulong *)param_1[0x109];
  puVar20 = (ulong *)param_1[0x10a];
joined_r0x007102eea274:
  do {
    if (puVar19 == puVar20) {
      uVar15 = param_1[0x124];
      param_1[0x124] = (long)plVar7;
      if (uVar15 == 0) {
        return;
      }
      uVar8 = *(ulong *)(uVar15 + 0x58);
      if (uVar8 != 0) {
        *(ulong *)(uVar15 + 0x60) = uVar8;
        FUN_710392eb40(uVar8);
      }
      FUN_710392eb40(uVar15);
      return;
    }
    if ((*puVar19 & 0xffffffffff) != 0) {
      for (plVar17 = *(long **)(*(long *)(*plVar7 + 0x310) + 0xd0);
          plVar17 != *(long **)(*(long *)(*plVar7 + 0x310) + 0xd8); plVar17 = plVar17 + 2) {
        if ((*(uint *)(plVar17 + 1) < 2) &&
           (lVar18 = *plVar17, (*puVar19 & 0xffffffffff) == *(ulong *)(lVar18 + 0x68))) {
          if ((lVar18 != 0) && (*(char *)(lVar18 + 0xe0) != '\0')) {
            pppplVar10 = &local_80;
            local_80 = auVar21._0_8_;
            uStack_78 = auVar21._8_8_;
            (**(code **)(**(long **)(lVar18 + 0x90) + 0x260))(*(long **)(lVar18 + 0x90),8);
          }
          goto LAB_7102eea2c4;
        }
      }
      lVar18 = 0;
LAB_7102eea2c4:
      plVar17 = (long *)plVar7[0xc];
      if (plVar17 != (long *)plVar7[0xd]) {
        *plVar17 = lVar18;
        plVar7[0xc] = plVar7[0xc] + 8;
        puVar19 = puVar19 + 1;
        goto joined_r0x007102eea274;
      }
      __src = (void *)plVar7[0xb];
      __n = (long ****)((long)plVar17 - (long)__src);
      uVar15 = ((long)__n >> 3) + 1;
      if (uVar15 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
      lVar13 = plVar7[0xd] - (long)__src;
      if ((ulong)(lVar13 >> 3) < 0xfffffffffffffff) {
        uVar8 = lVar13 >> 2;
        if (uVar15 <= uVar8) {
          uVar15 = uVar8;
        }
        if (uVar15 != 0) {
          if (uVar15 >> 0x3d == 0) goto LAB_7102eea370;
          goto LAB_7102eea544;
        }
LAB_7102eea3d0:
        __dest = (void *)0x0;
      }
      else {
        uVar15 = 0x1fffffffffffffff;
LAB_7102eea370:
        ppplVar14 = (long ***)(uVar15 * 8);
        if (ppplVar14 == (long ***)0x0) {
          ppplVar14 = (long ***)0x1;
        }
        __dest = (void *)FUN_710392e290(0x10,ppplVar14,pppplVar10,(byte ****)param_4,
                                        (long ****)param_5,param_6,param_7,param_8);
        if (__dest == (void *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_64 = 0;
            pppplVar10 = &local_80;
            local_80 = ppplVar14;
            uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
            if (((uVar8 & 1) != 0) &&
               (__dest = (void *)FUN_710392e290(0x10,ppplVar14,pppplVar10,(byte ****)param_4,
                                                (long ****)param_5,param_6,param_7,param_8),
               __dest != (void *)0x0)) goto LAB_7102eea3d4;
          }
          goto LAB_7102eea3d0;
        }
      }
LAB_7102eea3d4:
      plVar17 = (long *)((long)__dest + ((long)__n >> 3) * 8);
      *plVar17 = lVar18;
      if (0 < (long)__n) {
        memcpy(__dest,__src,(size_t)__n);
        pppplVar10 = __n;
      }
      plVar7[0xb] = (long)__dest;
      plVar7[0xc] = (long)(plVar17 + 1);
      plVar7[0xd] = (long)((long)__dest + uVar15 * 8);
      if (__src != (void *)0x0) {
        FUN_710392eb40((ulong)__src);
      }
    }
    puVar19 = puVar19 + 1;
  } while( true );
}

