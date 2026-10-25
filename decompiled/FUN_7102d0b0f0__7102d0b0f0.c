// addr:      7102d0b0f0
// offset:    0x2d0b0f0
// name:      FUN_7102d0b0f0
// mangled:   
// signature: undefined __cdecl FUN_7102d0b0f0(long param_1, int param_2, uint param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7102d0b0f0(long param_1,int param_2,uint param_3,undefined8 param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  int *piVar2;
  long ***ppplVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  long **pplVar14;
  int *piVar15;
  long lVar16;
  ulong *puVar17;
  int iVar18;
  ulong uVar19;
  float fVar20;
  long **local_78;
  long *local_70;
  long local_68;
  long ***local_60;
  undefined8 uStack_58;
  
  if (*(char *)(param_1 + 0x18) == '\0') {
    return;
  }
  if (7 < param_3) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar16 = *(long *)(*lib::Singleton<app::FighterManager>::instance_ + (long)(int)param_3 * 8 + 0x20
                    );
  if (lVar16 == 0) {
    return;
  }
  if (*(char *)(lVar16 + 0x5920) != '\x06') {
    return;
  }
  uVar12 = (ulong)*(byte *)(lVar16 + 0x5918);
  if (uVar12 < *(ulong *)(lVar16 + 0x4150)) {
    lVar11 = lVar16 + uVar12 * 8;
    plVar8 = *(long **)(lVar11 + 0x4160);
    if ((plVar8 == (long *)0x0) || (uVar12 = (**(code **)(*plVar8 + 0x518))(), (uVar12 & 1) == 0))
    goto LAB_7102d0b198;
    lVar11 = *(long *)(lVar11 + 0x4160);
  }
  else {
LAB_7102d0b198:
    lVar11 = 0;
  }
  FUN_71003a9ab0(&local_78,lVar11);
  if (*(byte *)((long)local_70 + 0x3a) < 4) {
    return;
  }
  iVar6 = (**(code **)(**(long **)(local_70[4] + 0x40) + 0x168))();
  if (iVar6 == 5) {
    return;
  }
  switch(param_2) {
  case 1:
    if (*(char *)(lVar16 + 0x5920) == '\x06') {
      if ((*(byte *)(lVar16 + 0x591f) >> 1 & 1) == 0) {
        lVar16 = *(long *)(lVar16 + (ulong)*(byte *)(lVar16 + 0x5918) * 8 + 0x4160);
      }
      else {
        FUN_7100663910(*(long *)(lVar16 + 0x4160),1,-1,1,(byte ****)0x0,param_6,param_7,param_8);
        lVar16 = *(long *)(lVar16 + 0x4168);
      }
      FUN_7100663910(lVar16,1,-1,1,(byte ****)0x0,param_6,param_7,param_8);
    }
    break;
  case 2:
    lVar16 = *lib::Singleton<app::FighterManager>::instance_;
    iVar6 = (int)*(short *)(param_1 + 0x7a0);
    iVar18 = (int)*(short *)(param_1 + 0x7a2);
    lVar11 = *(long *)(lVar16 + 0x20);
    if ((((lVar11 != 0) && (*(uint *)(lVar11 + 0xe0) != param_3)) &&
        (*(char *)(lVar11 + 0x5920) == '\x06')) &&
       (FUN_7100649540(*(long *)(lVar11 + (ulong)*(byte *)(lVar11 + 0x5918) * 8 + 0x4160),1,iVar6,
                       iVar18,0), (*(byte *)(lVar11 + 0x591f) >> 1 & 1) != 0)) {
      FUN_7100649540(*(long *)(lVar11 + 0x4168),1,iVar6,iVar18,0);
    }
    lVar11 = *(long *)(lVar16 + 0x28);
    if (((lVar11 != 0) && (*(uint *)(lVar11 + 0xe0) != param_3)) &&
       ((*(char *)(lVar11 + 0x5920) == '\x06' &&
        (FUN_7100649540(*(long *)(lVar11 + (ulong)*(byte *)(lVar11 + 0x5918) * 8 + 0x4160),1,iVar6,
                        iVar18,0), (*(byte *)(lVar11 + 0x591f) >> 1 & 1) != 0)))) {
      FUN_7100649540(*(long *)(lVar11 + 0x4168),1,iVar6,iVar18,0);
    }
    lVar11 = *(long *)(lVar16 + 0x30);
    if (((lVar11 != 0) && (*(uint *)(lVar11 + 0xe0) != param_3)) &&
       ((*(char *)(lVar11 + 0x5920) == '\x06' &&
        (FUN_7100649540(*(long *)(lVar11 + (ulong)*(byte *)(lVar11 + 0x5918) * 8 + 0x4160),1,iVar6,
                        iVar18,0), (*(byte *)(lVar11 + 0x591f) >> 1 & 1) != 0)))) {
      FUN_7100649540(*(long *)(lVar11 + 0x4168),1,iVar6,iVar18,0);
    }
    lVar11 = *(long *)(lVar16 + 0x38);
    if ((((lVar11 != 0) && (*(uint *)(lVar11 + 0xe0) != param_3)) &&
        (*(char *)(lVar11 + 0x5920) == '\x06')) &&
       (FUN_7100649540(*(long *)(lVar11 + (ulong)*(byte *)(lVar11 + 0x5918) * 8 + 0x4160),1,iVar6,
                       iVar18,0), (*(byte *)(lVar11 + 0x591f) >> 1 & 1) != 0)) {
      FUN_7100649540(*(long *)(lVar11 + 0x4168),1,iVar6,iVar18,0);
    }
    lVar11 = *(long *)(lVar16 + 0x40);
    if (((lVar11 != 0) && (*(uint *)(lVar11 + 0xe0) != param_3)) &&
       ((*(char *)(lVar11 + 0x5920) == '\x06' &&
        (FUN_7100649540(*(long *)(lVar11 + (ulong)*(byte *)(lVar11 + 0x5918) * 8 + 0x4160),1,iVar6,
                        iVar18,0), (*(byte *)(lVar11 + 0x591f) >> 1 & 1) != 0)))) {
      FUN_7100649540(*(long *)(lVar11 + 0x4168),1,iVar6,iVar18,0);
    }
    lVar11 = *(long *)(lVar16 + 0x48);
    if (((lVar11 != 0) && (*(uint *)(lVar11 + 0xe0) != param_3)) &&
       ((*(char *)(lVar11 + 0x5920) == '\x06' &&
        (FUN_7100649540(*(long *)(lVar11 + (ulong)*(byte *)(lVar11 + 0x5918) * 8 + 0x4160),1,iVar6,
                        iVar18,0), (*(byte *)(lVar11 + 0x591f) >> 1 & 1) != 0)))) {
      FUN_7100649540(*(long *)(lVar11 + 0x4168),1,iVar6,iVar18,0);
    }
    lVar11 = *(long *)(lVar16 + 0x50);
    if ((((lVar11 != 0) && (*(uint *)(lVar11 + 0xe0) != param_3)) &&
        (*(char *)(lVar11 + 0x5920) == '\x06')) &&
       (FUN_7100649540(*(long *)(lVar11 + (ulong)*(byte *)(lVar11 + 0x5918) * 8 + 0x4160),1,iVar6,
                       iVar18,0), (*(byte *)(lVar11 + 0x591f) >> 1 & 1) != 0)) {
      FUN_7100649540(*(long *)(lVar11 + 0x4168),1,iVar6,iVar18,0);
    }
    lVar16 = *(long *)(lVar16 + 0x58);
    if (((lVar16 != 0) && (*(uint *)(lVar16 + 0xe0) != param_3)) &&
       ((*(char *)(lVar16 + 0x5920) == '\x06' &&
        (FUN_7100649540(*(long *)(lVar16 + (ulong)*(byte *)(lVar16 + 0x5918) * 8 + 0x4160),1,iVar6,
                        iVar18,0), (*(byte *)(lVar16 + 0x591f) >> 1 & 1) != 0)))) {
      FUN_7100649540(*(long *)(lVar16 + 0x4168),1,iVar6,iVar18,0);
    }
    break;
  case 3:
    if (*(char *)(lVar16 + 0x5920) == '\x06') {
      *(undefined8 *)(lVar16 + 0x5928) = 4;
      *(undefined1 *)(lVar16 + 0x5930) = 1;
      if (*(int *)*DAT_71052c33d8 != 2) {
        FUN_7100658600(lVar16);
      }
    }
    break;
  case 4:
    FUN_7100653e30(*(float *)(param_1 + 0x7a4),*(float *)(param_1 + 0x7a8),0.0,0.0,0.0,1.0,lVar16,
                   (int)*(float *)(param_1 + 0x7ac),0);
    lVar16 = *(long *)(*lib::Singleton<app::FighterManager>::instance_ + (long)(int)param_3 * 8 +
                      0x20);
    local_60 = _ConstantZero;
    uStack_58 = _DAT_7107521008;
    if ((lVar16 != 0) && (*(char *)(lVar16 + 0x5920) == '\x06')) {
      if ((ulong)*(byte *)(lVar16 + 0x5918) < *(ulong *)(lVar16 + 0x4150)) {
        lVar16 = lVar16 + (ulong)*(byte *)(lVar16 + 0x5918) * 8;
        plVar8 = *(long **)(lVar16 + 0x4160);
        if ((plVar8 == (long *)0x0) ||
           (uVar12 = (**(code **)(*plVar8 + 0x518))(), (uVar12 & 1) == 0)) goto LAB_7102d0b720;
        lVar16 = *(long *)(lVar16 + 0x4160);
      }
      else {
LAB_7102d0b720:
        lVar16 = 0;
      }
      FUN_71003a9ab0(&local_78,lVar16);
      puVar10 = (undefined8 *)(**(code **)(**(long **)(local_70[4] + 0x38) + 0x60))();
      local_60 = (long ***)*puVar10;
      uStack_58 = puVar10[1];
    }
    plVar8 = (long *)(*(long *)(param_1 + 800) + 0x48);
    puVar17 = *(ulong **)(*plVar8 + 800);
    plVar13 = (long *)puVar17[8];
    piVar4 = (int *)*plVar13;
    piVar5 = (int *)plVar13[1];
    if ((long)piVar5 - (long)piVar4 == 0) {
LAB_7102d0b814:
      uVar12 = 0xffffffff;
    }
    else {
      piVar15 = piVar4;
      for (piVar2 = piVar4;
          (piVar2 != piVar5 &&
          ((*piVar2 != 0 ||
           (piVar15 = piVar2, (*(ulong *)(piVar2 + 2) & 0xffffffffff) != 0x10623936d0))));
          piVar2 = piVar2 + 0x1c) {
        piVar15 = piVar5;
      }
      uVar12 = ((long)piVar15 - (long)piVar4 >> 4) * 0x6db6db6db6db6db7;
      if ((ulong)(((long)piVar5 - (long)piVar4 >> 4) * 0x6db6db6db6db6db7) <= uVar12)
      goto LAB_7102d0b814;
    }
    uVar7 = FUN_71025f0510(plVar8,(byte *)"STG_PACLAND_STAR",(byte *)"eff_star");
    FUN_71025f0150(&local_78,puVar17,(uint)uVar12,(byte ****)(ulong)uVar7,&local_60,1,1,param_8);
    ppplVar3 = (long ***)(param_1 + 0xbd8);
    if ((ppplVar3 != &local_78) && (lVar16 = *(long *)(param_1 + 0xbe8), lVar16 != local_68)) {
      if (local_68 == 0) {
        if (lVar16 != 0) {
          lVar11 = *(long *)(param_1 + 0xbd8);
          plVar8 = *(long **)(param_1 + 0xbe0);
          *plVar8 = lVar11;
          *(long **)(lVar11 + 8) = plVar8;
          *(long *)(lVar16 + 0x10) = *(long *)(lVar16 + 0x10) + -1;
          *(undefined8 *)(param_1 + 0xbe0) = 0;
          *(undefined8 *)(param_1 + 0xbe8) = 0;
          *ppplVar3 = (long **)0x0;
        }
      }
      else {
        if (lVar16 != 0) {
          pplVar14 = *ppplVar3;
          plVar8 = *(long **)(param_1 + 0xbe0);
          *plVar8 = (long)pplVar14;
          pplVar14[1] = plVar8;
          *(long *)(lVar16 + 0x10) = *(long *)(lVar16 + 0x10) + -1;
          *(undefined8 *)(param_1 + 0xbe0) = 0;
          *(undefined8 *)(param_1 + 0xbe8) = 0;
          *ppplVar3 = (long **)0x0;
        }
        puVar10 = *(undefined8 **)(local_68 + 0x20);
        *(long *)(param_1 + 0xbd8) = local_68 + 0x18;
        *(undefined8 **)(param_1 + 0xbe0) = puVar10;
        *(long ****)(local_68 + 0x20) = ppplVar3;
        *puVar10 = ppplVar3;
        *(long *)(local_68 + 0x10) = *(long *)(local_68 + 0x10) + 1;
        *(long *)(param_1 + 0xbe8) = local_68;
      }
    }
    if (local_68 != 0) {
      *local_70 = (long)local_78;
      local_78[1] = local_70;
      *(long *)(local_68 + 0x10) = *(long *)(local_68 + 0x10) + -1;
    }
    *(uint *)(param_1 + 0xbd0) = param_3;
    break;
  case 5:
  case 6:
    uVar12 = *(ulong *)(lVar16 + 0x4150);
    if (uVar12 != 0) {
      fVar20 = *(float *)(*(long *)(param_1 + 0x7b0) + (long)(param_2 + -5) * 4);
      uVar9 = 0;
      uVar19 = 1;
      do {
        lVar11 = lVar16 + uVar9 * 8;
        plVar8 = *(long **)(lVar11 + 0x4160);
        if ((plVar8 != (long *)0x0) && (uVar9 = (**(code **)(*plVar8 + 0x518))(), (uVar9 & 1) != 0))
        {
          FUN_71006645d0((ulong)(uint)-fVar20,*(long *)(lVar11 + 0x4160),1,0,0x7fb997a80);
        }
        bVar1 = uVar19 < uVar12;
        uVar9 = uVar19;
        uVar19 = (ulong)((int)uVar19 + 1);
      } while (bVar1);
    }
  }
  return;
}

