// addr:      7103375860
// offset:    0x3375860
// name:      FUN_7103375860
// mangled:   
// signature: undefined8 * __cdecl FUN_7103375860(undefined8 * param_1, uint * param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


undefined8 *
FUN_7103375860(undefined8 *param_1,uint *param_2,long ****param_3,byte ****param_4,long ****param_5,
              undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  int *piVar1;
  long **pplVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  int iVar5;
  uint uVar6;
  void *__dest;
  void *pvVar7;
  long ***ppplVar8;
  undefined8 uVar9;
  ulong extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  long *plVar10;
  long *plVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  uint uVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  long ***ppplVar19;
  void *__src;
  long ****__n;
  long lVar20;
  undefined1 auVar21 [16];
  long ***local_98;
  undefined *local_90;
  undefined *local_88;
  undefined *puStack_80;
  undefined *local_78;
  undefined *puStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_54;
  
  auVar21._8_8_ = param_2;
  auVar21._0_8_ = param_1;
  plVar16 = (long *)*param_1;
  if (plVar16 == (long *)0x0) {
    return param_1;
  }
  __src = (void *)plVar16[3];
  if ((ulong)(plVar16[5] - (long)__src >> 5) < 0x20) {
    __n = (long ****)(plVar16[4] - (long)__src);
    lVar20 = (long)__n >> 5;
    __dest = (void *)FUN_710392e290(0x10,0x400,param_3,param_4,param_5,param_6,param_7,param_8);
    auVar21._8_8_ = extraout_x1;
    auVar21._0_8_ = __dest;
    if (__dest == (void *)0x0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = extraout_x1;
      auVar21 = auVar4 << 0x40;
      if (DAT_7105332f00 != (long *)0x0) {
        local_54 = 0;
        local_98 = (long ***)&DAT_00000400;
        param_3 = &local_98;
        auVar21 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_54);
        if ((auVar21._0_8_ & 1) != 0) {
          __dest = (void *)FUN_710392e290(0x10,0x400,param_3,param_4,param_5,param_6,param_7,param_8
                                         );
          auVar21._8_8_ = extraout_x1_00;
          auVar21._0_8_ = __dest;
          if (__dest != (void *)0x0) goto LAB_710337590c;
        }
      }
      __dest = (void *)0x0;
    }
LAB_710337590c:
    if (0 < (long)__n) {
      pvVar7 = memcpy(__dest,__src,(size_t)__n);
      auVar21._8_8_ = extraout_x1_01;
      auVar21._0_8_ = pvVar7;
      param_3 = __n;
    }
    plVar16[3] = (long)__dest;
    plVar16[4] = (long)((long)__dest + lVar20 * 0x20);
    plVar16[5] = (long)__dest + 0x400;
    if (__src != (void *)0x0) {
      auVar21 = FUN_710392eb40((ulong)__src);
    }
  }
  ppplVar8 = FUN_710372cc40(auVar21._0_8_,auVar21._8_8_,param_3,param_4,param_5,param_6,param_7,
                            param_8);
  *plVar16 = (long)ppplVar8;
  FUN_71038f4b20((long)ppplVar8,"key_context");
  lVar20 = *plVar16;
  puVar14 = *(undefined8 **)(lVar20 + 0x10);
  *puVar14 = param_1;
  *(undefined4 *)(puVar14 + 1) = 2;
  *(long *)(lVar20 + 0x10) = *(long *)(lVar20 + 0x10) + 0x10;
  FUN_71038f55d0(*plVar16,-0xf4628);
  local_88 = PTR_s_require_71051857f0;
  puStack_80 = PTR_FUN_71051857f8;
  local_98 = (long ***)PTR_s_invoke_71051857e0;
  local_90 = PTR_FUN_71051857e8;
  local_68 = DAT_7105185810;
  uStack_60 = DAT_7105185818;
  local_78 = PTR_s_require2_7105185800;
  puStack_70 = PTR_FUN_7105185808;
  lVar18 = *plVar16;
  FUN_71038f7260(lVar18,"MetatableUiScriptPlayer");
  puVar14 = *(undefined8 **)(lVar18 + 0x10);
  *puVar14 = puVar14[-2];
  puVar14[1] = puVar14[-1];
  lVar20 = *(long *)(lVar18 + 0x10);
  *(long *)(lVar18 + 0x10) = lVar20 + 0x10;
  FUN_71038f5390(lVar18,(long *)(lVar20 + -0x10),"__index");
  FUN_71038f9510(lVar18,(long *)&local_98,0,param_4,param_5,param_6,param_7,param_8);
  *(long *)(lVar18 + 0x10) = *(long *)(lVar18 + 0x10) + -0x10;
  lVar20 = *plVar16;
  if (0 < *(long *)(*(long *)(lVar20 + 0x18) + 0x18)) {
    FUN_71038fec40(lVar20);
  }
  uVar9 = FUN_710391e050(lVar20);
  puVar14 = *(undefined8 **)(lVar20 + 0x10);
  *puVar14 = uVar9;
  *(undefined4 *)(puVar14 + 1) = 0x45;
  *(long *)(lVar20 + 0x10) = *(long *)(lVar20 + 0x10) + 0x10;
  FUN_71038f4d40(lVar20,(long *)(*(long *)(lVar20 + 0x18) + 0x40),"MetatableUiScriptPlayer");
  FUN_71038f5c00(lVar20,-2);
  if (lVar20 != 0) {
    lVar18 = *(long *)(*(long *)(lVar20 + 0x18) + 0x40);
    if (*(uint *)(lVar18 + 0xc) < 2) {
      plVar11 = (long *)(*(long *)(lVar18 + 0x18) +
                        ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)(lVar18 + 0xb) & 0x3f)) & 2)
                        * 0x20);
      do {
        if (((int)plVar11[3] == 0x13) && (plVar10 = plVar11, plVar11[2] == 2)) break;
        piVar1 = (int *)((long)plVar11 + 0x1c);
        plVar11 = plVar11 + (long)*piVar1 * 4;
        plVar10 = &DAT_7104862960;
      } while (*piVar1 != 0);
    }
    else {
      plVar10 = (long *)(*(long *)(lVar18 + 0x10) + 0x10);
    }
    FUN_71038f5390(lVar20,plVar10,"UiScriptPlayer");
  }
  FUN_7103375650(plVar16,"SCENE_EXIT_CODE_NONE",&DAT_71042b2a84);
  FUN_7103375650(plVar16,"SCENE_EXIT_CODE_NORMAL",&DAT_71042b2a84);
  FUN_7103375650(plVar16,"SCENE_EXIT_CODE_CANCEL",&DAT_71042b2a84);
  FUN_7103375650(plVar16,"BUTTON_ID_NONE",&DAT_71042b2a84);
  uVar6 = *param_2;
  uVar12 = (ulong)uVar6;
  if (uVar6 == 0xffffff) {
    ppplVar19 = (long ***)*plVar16;
    ppplVar8 = (long ***)0x0;
  }
  else {
    if ((uVar6 < *(uint *)(DAT_7105332f20 + 0x18)) &&
       (*(char *)(*(long *)(DAT_7105332f20 + 8) + uVar12 * 8 + 4) != '\0')) {
      uVar15 = *(uint *)(*(long *)(DAT_7105332f20 + 8) + uVar12 * 8);
      if ((uVar15 == 0xffffff) ||
         ((*(uint *)(DAT_7105332f20 + 0x1c) <= uVar15 ||
          (puVar14 = (undefined8 *)(*(long *)(DAT_7105332f20 + 0x10) + (ulong)uVar15 * 0x18),
          *(char *)((long)puVar14 + 0xc) == '\0' || puVar14 == (undefined8 *)0x0))))
      goto LAB_7103375bcc;
      ppplVar8 = (long ***)*puVar14;
    }
    else {
LAB_7103375bcc:
      ppplVar8 = (long ***)0x0;
    }
    lVar20 = **(long **)(DAT_7105332f20 + 0x78);
    ppplVar19 = (long ***)*plVar16;
    if (uVar6 < *(uint *)(*(long *)(lVar20 + 0x40) + 4)) {
      uVar6 = (uint)((ulong)*(undefined8 *)(*(long *)(lVar20 + 0x60) + uVar12 * 0x20) >> 0x20);
      uVar15 = uVar6 >> 8;
      if ((uVar15 != 0xffffff) &&
         (uVar3 = *(uint *)(*(long *)(lVar20 + 0x40) + 8), uVar6 = uVar6 >> 8,
         uVar15 <= uVar3 && uVar3 != uVar6)) {
        lVar18 = FUN_7103541e10(lVar20,*(long *)(lVar20 + 0x90) +
                                       ((ulong)*(uint *)(*(long *)(lVar20 + 0x68) + (ulong)uVar6 * 8
                                                        + 4) & 0xffffff) * 0x10,
                                *(int *)(*(long *)(DAT_7105332f20 + 0x10) +
                                         (ulong)*(uint *)(*(long *)(DAT_7105332f20 + 8) + uVar12 * 8
                                                         ) * 0x18 + 0x10));
        uVar12 = (ulong)*(uint *)(*(long *)(lVar20 + 0xa0) + (ulong)*(uint *)(lVar18 + 4) * 0x10 + 8
                                 );
        goto LAB_7103375c68;
      }
    }
  }
  uVar12 = 0;
LAB_7103375c68:
  iVar5 = FUN_710372d730(ppplVar19,ppplVar8,uVar12,(byte ****)"UiScriptPlayer",1,param_6,param_7,
                         param_8);
  puVar14 = (undefined8 *)*plVar16;
  if (iVar5 == 0) {
    ppplVar8 = (long ***)FUN_710372d140(puVar14);
    plVar16[1] = (long)ppplVar8;
    pplVar2 = ppplVar8[2];
    local_90 = (undefined *)CONCAT44(local_90._4_4_,2);
    local_98 = ppplVar8;
    puVar14 = FUN_710391dde0((long)ppplVar8[3][8],(float *)&local_98);
    plVar11 = (long *)puVar14[1];
    *pplVar2 = (long *)*puVar14;
    pplVar2[1] = plVar11;
    ppplVar8[2] = ppplVar8[2] + 2;
    lVar17 = plVar16[1];
    plVar16 = *(long **)(lVar17 + 0x10);
    *plVar16 = lVar17;
    *(undefined4 *)(plVar16 + 1) = 0x48;
    lVar20 = *(long *)(lVar17 + 0x10);
    *(long *)(lVar17 + 0x10) = lVar20 + 0x10;
    lVar18 = *(long *)(*(long *)(lVar17 + 0x18) + 200);
    *(long *)(lVar17 + 0x10) = lVar20;
    if (lVar18 == lVar17) {
      lVar20 = *(long *)(*(long *)(lVar17 + 0x18) + 0x40);
      if (*(uint *)(lVar20 + 0xc) < 2) {
        plVar16 = (long *)(*(long *)(lVar20 + 0x18) +
                          ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)(lVar20 + 0xb) & 0x3f)) &
                          2) * 0x20);
        do {
          if (((int)plVar16[3] == 0x13) && (plVar11 = plVar16, plVar16[2] == 2)) break;
          piVar1 = (int *)((long)plVar16 + 0x1c);
          plVar16 = plVar16 + (long)*piVar1 * 4;
          plVar11 = &DAT_7104862960;
        } while (*piVar1 != 0);
      }
      else {
        plVar11 = (long *)(*(long *)(lVar20 + 0x10) + 0x10);
      }
      uVar6 = FUN_71038f4d40(lVar17,plVar11,"main");
    }
    else {
      FUN_71038f4b20(lVar17,"main");
      uVar6 = FUN_71038f4fc0(lVar17,-2);
    }
    puVar14 = (undefined8 *)(ulong)uVar6;
    puVar13 = (undefined8 *)(*(long *)(lVar17 + 0x10) + -0x10);
    if ((puVar13 == &DAT_7104862960) || ((*(uint *)(*(long *)(lVar17 + 0x10) + -8) & 0xf) != 6)) {
      *(undefined8 **)(lVar17 + 0x10) = puVar13;
    }
  }
  else {
    lVar20 = *(long *)puVar14[4];
    uVar12 = puVar14[2];
    while (uVar12 < lVar20 + 0x10U) {
      puVar14[2] = uVar12 + 0x10;
      *(undefined4 *)(uVar12 + 8) = 0;
      uVar12 = puVar14[2];
    }
    puVar14[2] = lVar20 + 0x10U;
  }
  return puVar14;
}

