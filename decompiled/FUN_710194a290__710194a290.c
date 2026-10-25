// addr:      710194a290
// offset:    0x194a290
// name:      FUN_710194a290
// mangled:   
// signature: undefined __cdecl FUN_710194a290(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_710194a290(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  long ***ppplVar4;
  bool bVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  long ****pppplVar9;
  ulong uVar10;
  long *plVar11;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 uVar12;
  long ****pppplVar13;
  char *pcVar14;
  long *plVar15;
  ulong uVar16;
  ulong uVar17;
  long *plVar18;
  undefined8 *puVar19;
  byte *pbVar20;
  long lVar21;
  ulong *puVar22;
  ulong uVar23;
  long ***local_260;
  long ***local_258;
  long ***local_250;
  undefined1 auStack_230 [448];
  undefined4 local_64;
  
  pppplVar13 = &local_260;
  lVar21 = *(long *)(*(long *)(param_1 + 0x170) + 0x80);
  if (*(int *)(param_1 + 0x15c) == 0) {
    *(undefined1 *)(lVar21 + 0x2d8) = 0;
    pcVar14 = (char *)(*(long *)(lVar21 + 0x1c0) + 8);
    bVar5 = *pcVar14 != '\x01';
    FUN_710377a120((long)(pcVar14 + (ulong)bVar5 * 0x48 + 0x18),"cam_shop_buy_get_btn",param_3,
                   param_4,param_5,param_6,param_7,param_8);
    FUN_710377a120((long)(pcVar14 + (ulong)bVar5 * 0x48 + 0x28),"cam_shop_buy_get_btn",param_3,
                   param_4,param_5,param_6,param_7,param_8);
    FUN_710377a120((long)(pcVar14 + (ulong)bVar5 * 0x48 + 0x38),"cam_shop_buy_get_btn",param_3,
                   param_4,param_5,param_6,param_7,param_8);
    pcVar14 = (char *)(*(long *)(lVar21 + 0x1c0) + 8);
    cVar3 = *pcVar14;
    FUN_7103778300(0x3f800000,*(long *)(pcVar14 + (ulong)(cVar3 != '\x01') * 0x48 + 0x10),
                   0x710433a880);
    FUN_7103778300(0x3f800000,*(long *)(pcVar14 + (ulong)(cVar3 != '\x01') * 0x48 + 0x10),
                   0x710425fba5);
    FUN_7101e96fc0(lVar21 + 0x1b8,'\x01',param_3,param_4,param_5,param_6,param_7,param_8);
    pcVar14 = (char *)(*(long *)(lVar21 + 0x1c0) + 8);
    bVar5 = *pcVar14 != '\0';
    FUN_710377a120((long)(pcVar14 + (ulong)bVar5 * 0x48 + 0x18),"cam_shop_buy_cancel_btn",param_3,
                   param_4,param_5,param_6,param_7,param_8);
    FUN_710377a120((long)(pcVar14 + (ulong)bVar5 * 0x48 + 0x28),"cam_shop_buy_cancel_btn",param_3,
                   param_4,param_5,param_6,param_7,param_8);
    FUN_710377a120((long)(pcVar14 + (ulong)bVar5 * 0x48 + 0x38),"cam_shop_buy_cancel_btn",param_3,
                   param_4,param_5,param_6,param_7,param_8);
    pcVar14 = (char *)(*(long *)(lVar21 + 0x1c0) + 8);
    cVar3 = *pcVar14;
    FUN_7103778300(0x3f800000,*(long *)(pcVar14 + (ulong)(cVar3 != '\0') * 0x48 + 0x10),0x710433a880
                  );
    FUN_7103778300(0x3f800000,*(long *)(pcVar14 + (ulong)(cVar3 != '\0') * 0x48 + 0x10),0x710425fba5
                  );
    FUN_7101e96fc0(lVar21 + 0x1b8,'\0',param_3,param_4,param_5,param_6,param_7,param_8);
    FUN_7103778300(0x3f800000,*(long *)(*(long *)(lVar21 + 0x1e8) + 8),0x71042b4a73);
    *(undefined1 *)(lVar21 + 499) = 1;
    FUN_71037780e0(&local_258,lVar21 + 0x1a8,(long ****)"menu_in",param_3,param_4,param_5,param_6,
                   param_7,param_8);
    pppplVar9 = (long ****)FUN_710392e290(0x10,0x10,param_3,param_4,param_5,param_6,param_7,param_8)
    ;
    if (pppplVar9 == (long ****)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_64 = 0;
        local_260 = (long ***)&DAT_00000010;
        uVar23 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
        if (((uVar23 & 1) != 0) &&
           (pppplVar9 = (long ****)
                        FUN_710392e290(0x10,0x10,pppplVar13,param_4,param_5,param_6,param_7,param_8)
           , pppplVar9 != (long ****)0x0)) goto LAB_710194a4bc;
      }
      pppplVar9 = (long ****)0x0;
    }
LAB_710194a4bc:
    ppplVar4 = local_250;
    *pppplVar9 = (long ***)&PTR_FUN_710523d9e8;
    pppplVar9[1] = (long ***)0x0;
    if (&local_258 != pppplVar9) {
      local_250 = (long ***)0x0;
      pppplVar9[1] = ppplVar4;
    }
    plVar15 = *(long **)(lVar21 + 0x2d0);
    *(long *****)(lVar21 + 0x2d0) = pppplVar9;
    if (plVar15 != (long *)0x0) {
      (**(code **)(*plVar15 + 8))(plVar15);
    }
    ppplVar4 = local_250;
    local_258 = (long ***)&PTR_FUN_710523d9e8;
    local_250 = (long ***)0x0;
    if (ppplVar4 != (long ***)0x0) {
      FUN_710392eb40((ulong)ppplVar4);
    }
    FUN_710377aee0(0x3f800000,*(long *)(lVar21 + 0x2d0));
    if (*(uint *)(lVar21 + 0x18c) < 0x13) {
      *(undefined4 *)(lVar21 + (long)(int)*(uint *)(lVar21 + 0x18c) * 4 + 0x140) = 8;
      if (0x11 < *(int *)(lVar21 + 0x18c)) {
        return;
      }
      uVar8 = *(int *)(lVar21 + 0x18c) + 1;
      *(uint *)(lVar21 + 0x18c) = uVar8;
      if (uVar8 < 0x13) {
        *(undefined4 *)(lVar21 + (long)(int)uVar8 * 4 + 0x140) = 0xf;
        return;
      }
    }
    goto LAB_710194ab14;
  }
  if (*(int *)(lVar21 + 400) != 0x10) {
    return;
  }
  if (*(char *)(lVar21 + 0x2d8) == '\x01') {
    if (0x12 < *(uint *)(param_1 + 0x154)) goto LAB_710194ab14;
    lVar21 = param_1 + (long)(int)*(uint *)(param_1 + 0x154) * 4;
    uVar6 = 4;
    goto LAB_710194aaec;
  }
  if (*(char *)(lVar21 + 0x2d8) != '\x02') {
    return;
  }
  uVar23 = (ulong)*(byte *)(param_1 + 0x188);
  if (uVar23 < 4) {
    uVar8 = *(uint *)(**(long **)(*(long *)(param_1 + 400) + 0x10) + uVar23 * 0x30 + 0x30);
  }
  else {
    uVar8 = 0;
  }
  if (*(uint *)(*(long *)**(undefined8 **)(*DAT_7105314510 + 0xd8) + 0x24) < uVar8) {
    FUN_7101e73240(lVar21,'\0',param_3,(char *)param_4,param_5,param_6,param_7,param_8);
  }
  else {
    plVar15 = *(long **)(param_1 + 400);
    if ((ulong)*(byte *)(plVar15 + 1) < 5) {
      plVar15 = *(long **)(*(long *)(*plVar15 + 8) + (ulong)*(byte *)(plVar15 + 1) * 8 + 0x90);
      if (plVar15 != (long *)0x0 && *(byte *)(param_1 + 0x188) < 4) {
        puVar22 = (ulong *)*plVar15;
        uVar16 = puVar22[uVar23 * 6 + 4];
        uVar10 = FUN_710327d930(*(long *)(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x318) + 8),
                                0x1ae148d108);
        plVar18 = DAT_710532a860;
        uVar17 = uVar10 & 0xffffffffff;
        bVar5 = (uVar10 & 0xff00000000000000) != 0x2d00000000000000;
        if ((uVar16 & 0xffffffffff) == 0) {
          if ((bVar5) || (uVar17 == 0)) goto LAB_710194a64c;
LAB_710194a640:
          FUN_710338ed30(puVar22 + uVar23 * 6 + 2,extraout_x1,(ulong)param_3,param_4,param_5,param_6
                         ,param_7,param_8);
        }
        else {
          if ((bVar5) || ((uVar17 == 0 || (uVar17 != (uVar16 & 0xffffffffff)))))
          goto LAB_710194a640;
LAB_710194a64c:
          if (DAT_710532a860 == (long *)0x0) goto LAB_710194aa4c;
          iVar2 = *(int *)(*DAT_7105329fa0 + 0x8e8);
          lVar21 = *(long *)(*DAT_710532a860 + 0x5f390);
          if (iVar2 == 0) {
            iVar2 = 1;
          }
          uVar7 = *(uint *)(lVar21 + 0xa8);
          uVar8 = *(uint *)(lVar21 + 0xa0) + iVar2;
          if (uVar7 <= *(uint *)(lVar21 + 0xa0) && uVar7 < uVar8) {
            uVar8 = uVar7;
          }
          *(uint *)(lVar21 + 0xa0) = uVar8;
          pbVar20 = *(byte **)(lVar21 + 0xb0);
          if (pbVar20 == (byte *)0x0) {
LAB_710194a6e4:
            uVar8 = *(uint *)(*plVar18 + 0x1c);
            puVar19 = *(undefined8 **)(*DAT_7105314510 + 0x158);
            uVar6 = FUN_7102512f80(*puVar22,extraout_x1,param_3,param_4,param_5,param_6,param_7,
                                   param_8);
            if (2 < uVar8) goto LAB_710194ab14;
            lVar21 = *(long *)*puVar19 + (ulong)uVar8 * 0x3d700 + (ulong)(byte)uVar6 * 4;
            *(int *)(lVar21 + 0x3d6b8) = *(int *)(lVar21 + 0x3d6b8) + 1;
          }
          else {
            if (2 < (ulong)*pbVar20) goto LAB_710194ab14;
            if (uVar8 <= uVar7) {
              uVar7 = uVar8;
            }
            *(uint *)(*(long *)**(undefined8 **)(pbVar20 + 8) + (ulong)*pbVar20 * 0x3d700 + 0x3d6b0)
                 = uVar7;
            plVar18 = DAT_710532a860;
            if (DAT_710532a860 != (long *)0x0) goto LAB_710194a6e4;
          }
          plVar18 = (long *)(*DAT_7105314508 + 0x5b4dd8);
          plVar1 = (long *)(*DAT_7105314508 + 0x5b4de8);
          if (*plVar1 == 0) {
            plVar11 = (long *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,param_7,
                                             param_8);
            if (plVar11 == (long *)0x0) {
              if (DAT_7105332f00 != (long *)0x0) {
                local_260 = (long ***)((ulong)local_260 & 0xffffffff00000000);
                local_258 = (long ***)&SUB_00000018;
                param_3 = &local_258;
                uVar10 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_260);
                if (((uVar10 & 1) != 0) &&
                   (plVar11 = (long *)FUN_710392e290(0x10,0x18,param_3,param_4,param_5,param_6,
                                                     param_7,param_8), plVar11 != (long *)0x0))
                goto LAB_710194a7c8;
              }
              plVar11 = (long *)0x0;
            }
LAB_710194a7c8:
            *(undefined1 *)(plVar11 + 2) = 0;
            plVar11[1] = (long)plVar18;
            lVar21 = *plVar18;
            *plVar11 = lVar21;
            *(long **)(lVar21 + 8) = plVar11;
            *plVar18 = (long)plVar11;
            *plVar1 = *plVar1 + 1;
          }
          else {
            *(byte *)(*plVar18 + 0x10) = *(byte *)(*plVar18 + 0x10) & 1;
          }
          lVar21 = *(long *)(DAT_710532f7d8 + 8);
          std::mutex::lock();
          *(uint *)(lVar21 + 0xe8) = *(uint *)(lVar21 + 0xe8) | 2;
          *(undefined2 *)(lVar21 + 0xf1) = 0x101;
          *(undefined1 *)(lVar21 + 0xf5) = 0;
          *(undefined1 *)(*(long *)(*(long *)(lVar21 + 0xa0) + 0x80) + 0x1cc) =
               *(undefined1 *)(lVar21 + 0xf4);
          *(undefined4 *)(lVar21 + 0xec) = 0xffffffff;
          *(undefined8 *)(lVar21 + 0xf8) = 0x8ffff0000000000;
          *(undefined4 *)(lVar21 + 0x100) = 7;
          std::mutex::unlock();
        }
        uVar7 = *(uint *)(*plVar15 + uVar23 * 0x30 + 0x30);
        uVar8 = *(uint *)(*(long *)**(undefined8 **)(*DAT_7105314510 + 0xd8) + 0x24);
        if (uVar8 <= uVar7) {
          uVar8 = uVar7;
        }
        *(uint *)(*(long *)**(undefined8 **)(*DAT_7105314510 + 0xd8) + 0x24) = uVar8 - uVar7;
        puVar22 = (ulong *)*plVar15;
        uVar16 = puVar22[uVar23 * 6 + 4];
        uVar10 = FUN_710327d930(*(long *)(*(long *)(*(long *)(DAT_710532f730 + 8) + 0x318) + 8),
                                0x1ae148d108);
        uVar17 = uVar10 & 0xffffffffff;
        bVar5 = (uVar10 & 0xff00000000000000) != 0x2d00000000000000;
        uVar12 = extraout_x1_00;
        if ((uVar16 & 0xffffffffff) == 0) {
          if ((bVar5) || (uVar17 == 0)) goto LAB_710194a8e0;
        }
        else if ((!bVar5) && ((uVar17 != 0 && (uVar17 == (uVar16 & 0xffffffffff))))) {
LAB_710194a8e0:
          if (DAT_710532a860 != (long *)0x0) {
            uVar8 = *(uint *)(*DAT_710532a860 + 0x1c);
            uVar7 = FUN_7102512f80(*puVar22,extraout_x1_00,param_3,param_4,param_5,param_6,param_7,
                                   param_8);
            if (2 < uVar8) goto LAB_710194ab14;
            lVar21 = *(long *)**(undefined8 **)(*DAT_7105314510 + 0x158) + (ulong)uVar8 * 0x3d700;
            *(uint *)(lVar21 + 0x3d6b4) = *(uint *)(lVar21 + 0x3d6b4) | 1 << (ulong)(uVar7 & 0x1f);
            uVar12 = extraout_x1_01;
          }
          uVar8 = FUN_7102512f80(*puVar22,uVar12,param_3,param_4,param_5,param_6,param_7,param_8);
          uVar12 = extraout_x1_02;
          if ((uVar8 & 0xff) + 0x13 < 0x20) {
            puVar19 = *(undefined8 **)(*DAT_7105314510 + 0x158);
            uVar7 = 1 << (ulong)(uVar8 & 0x1f);
            if (((((*(uint *)(*(long *)*puVar19 + 0x3d6f8) & 1 << (ulong)(uVar8 + 0x13 & 0x1f)) != 0
                  ) && ((*(uint *)(*(long *)*puVar19 + 0x3d6b4) & uVar7) == 0)) ||
                (((*(uint *)(*(long *)*puVar19 + 0x7adf8) & 1 << (ulong)(uVar8 + 0x13 & 0x1f)) != 0
                 && ((*(uint *)(*(long *)*puVar19 + 0x7adb4) & uVar7) == 0)))) ||
               (((*(uint *)(*(long *)*puVar19 + 0xb84f8) & 1 << (ulong)(uVar8 + 0x13 & 0x1f)) != 0
                && ((*(uint *)(*(long *)*puVar19 + 0xb84b4) & uVar7) == 0)))) goto LAB_710194aa4c;
          }
        }
        *(undefined1 *)(puVar22 + uVar23 * 6 + 7) = 1;
        uVar8 = FUN_7102512f80(*puVar22,uVar12,param_3,param_4,param_5,param_6,param_7,param_8);
        FUN_71033872b0(&local_258,uVar8 & 0xff,param_3,param_4,param_5,param_6,param_7,param_8);
        auStack_230[uVar23 * 0x30] = 1;
        FUN_710338aca0(uVar8 & 0xff,&local_258);
      }
LAB_710194aa4c:
      uVar23 = (ulong)*(byte *)(param_1 + 0x188);
      plVar15 = *(long **)(param_1 + 400);
    }
    if ((uint)uVar23 < 4) {
      lVar21 = *(long *)(param_1 + 0x170);
      if (*(char *)(*(long *)plVar15[2] + uVar23 * 0x30 + 0x18) == '\x04') {
        FUN_7101e730e0(*(long *)(lVar21 + 0x80),0,param_3,param_4,param_5,param_6,param_7,param_8);
        if (0x12 < *(uint *)(param_1 + 0x154)) goto LAB_710194ab14;
        lVar21 = param_1 + (long)(int)*(uint *)(param_1 + 0x154) * 4;
        uVar6 = 8;
        goto LAB_710194aaec;
      }
    }
    else {
      lVar21 = *(long *)(param_1 + 0x170);
    }
    FUN_7101e730e0(*(long *)(lVar21 + 0x80),1,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  if (*(uint *)(param_1 + 0x154) < 0x13) {
    *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x154) * 4 + 0x108) = 4;
    if (0x11 < *(int *)(param_1 + 0x154)) {
      return;
    }
    uVar8 = *(int *)(param_1 + 0x154) + 1;
    *(uint *)(param_1 + 0x154) = uVar8;
    if (uVar8 < 0x13) {
      lVar21 = param_1 + (long)(int)uVar8 * 4;
      uVar6 = 0xd;
LAB_710194aaec:
      *(undefined4 *)(lVar21 + 0x108) = uVar6;
      return;
    }
  }
LAB_710194ab14:
                    /* WARNING: Subroutine does not return */
  abort();
}

