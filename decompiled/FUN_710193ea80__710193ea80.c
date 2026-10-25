// addr:      710193ea80
// offset:    0x193ea80
// name:      FUN_710193ea80
// mangled:   
// signature: undefined __cdecl FUN_710193ea80(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_710193ea80(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  undefined **ppuVar5;
  uint uVar6;
  undefined ***pppuVar7;
  long ****pppplVar8;
  byte ****ppppbVar9;
  undefined4 uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  long ***local_a0;
  undefined **local_98;
  undefined **local_90 [8];
  undefined4 local_44;
  
  pppplVar8 = &local_a0;
  lVar15 = *(long *)(*(long *)(param_1 + 0x1c0) + 0x80);
  if (*(int *)(param_1 + 0x1ac) != 0) {
    if (*(int *)(lVar15 + 0x1e0) != 0x15) {
      return;
    }
    cVar2 = *(char *)(lVar15 + 0x380);
    if (cVar2 == '\x05') {
      if (*(uint *)(param_1 + 0x1a4) < 0x13) {
        lVar15 = param_1 + (long)(int)*(uint *)(param_1 + 0x1a4) * 4;
        uVar10 = 0xb;
LAB_710193edbc:
        *(undefined4 *)(lVar15 + 0x158) = uVar10;
        return;
      }
    }
    else if (cVar2 == '\x04') {
      plVar14 = *(long **)(param_1 + 0x1e8);
      bVar3 = *(byte *)(param_1 + 0x1e0);
      if ((*(char *)(*(long *)(plVar14[1] + 8) + 0x388) == '\0') ||
         (0xd < (ulong)*(byte *)(plVar14 + 2))) {
        uVar6 = 0;
      }
      else {
        uVar6 = 0;
        if ((bVar3 < 4) &&
           (lVar16 = *(long *)(*(long *)(plVar14[1] + 8) + (ulong)*(byte *)(plVar14 + 2) * 8 + 8),
           uVar6 = 0, lVar16 != 0)) {
          uVar6 = FUN_7102512ab0((ulong)*(ushort *)(lVar16 + (ulong)bVar3 * 0x1c8 + 8));
        }
      }
      lVar16 = *(long *)**(undefined8 **)(*DAT_7105314510 + 0xd8);
      uVar1 = *(uint *)(lVar16 + 0x24);
      if (uVar1 < uVar6) {
        puVar13 = *(undefined8 **)(lVar15 + 0x208);
        plVar14 = (long *)*puVar13;
        (**(code **)(*plVar14 + 0x60))(plVar14,0);
        plVar14 = (long *)*puVar13;
        (**(code **)(*plVar14 + 0x70))(plVar14,0);
        FUN_71003a4ca0((uint *)&local_98,"cam_school%d_dialog_sp_not_enough",
                       (ulong)(*(byte *)(*(long *)(lVar15 + 0x3b0) + 8) + 1),param_3,param_4,param_5
                       ,param_6,param_7,param_8);
        lVar16 = *(long *)(**(long **)(lVar15 + 0x3b0) + 8);
        if ((*(char *)(lVar16 + 0x388) == '\0') ||
           (uVar12 = (ulong)*(byte *)(*(long **)(lVar15 + 0x3b0) + 1), 0xd < uVar12)) {
          ppppbVar9 = (byte ****)0x0;
        }
        else {
          ppppbVar9 = (byte ****)0x0;
          if ((*(byte *)(lVar15 + 0x382) < 4) &&
             (lVar16 = *(long *)(lVar16 + uVar12 * 8 + 8), lVar16 != 0)) {
            uVar6 = FUN_7102512ab0((ulong)*(ushort *)
                                           (lVar16 + (ulong)*(byte *)(lVar15 + 0x382) * 0x1c8 + 8));
            ppppbVar9 = (byte ****)(ulong)uVar6;
          }
        }
        pppplVar8 = (long ****)0x1;
        FUN_7101e94890((long *)(lVar15 + 0x2e8),(byte *)local_90,1,ppppbVar9,param_5,param_6,param_7
                       ,param_8);
        FUN_7101e94ba0((long *)(lVar15 + 0x2e8),1,pppplVar8,ppppbVar9,param_5,param_6,param_7,
                       param_8);
        *(undefined4 *)(lVar15 + 0x1d8) = 0;
        *(undefined8 *)(lVar15 + 0x10) = 0;
        *(undefined8 *)(lVar15 + 0x18) = 0;
        *(undefined8 *)(lVar15 + 0x1c8) = 0;
        *(undefined8 *)(lVar15 + 0x1d0) = 0;
        *(undefined8 *)(lVar15 + 0x1b8) = 0;
        *(undefined8 *)(lVar15 + 0x1c0) = 0;
        *(undefined8 *)(lVar15 + 0x1a8) = 0;
        *(undefined8 *)(lVar15 + 0x1b0) = 0;
        *(undefined8 *)(lVar15 + 0x198) = 0;
        *(undefined8 *)(lVar15 + 0x1a0) = 0;
        *(undefined8 *)(lVar15 + 0x1e4) = 0xffffffff00000000;
        *(undefined8 *)(lVar15 + 400) = 0x1300000015;
        *(undefined1 *)(lVar15 + 0x1ec) = 0;
        *(undefined8 *)(lVar15 + 0x1dc) = 0xffffffff00000001;
        if (*(uint *)(param_1 + 0x1a4) < 0x13) {
          *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x1a4) * 4 + 0x158) = 5;
          if (0x11 < *(int *)(param_1 + 0x1a4)) {
            return;
          }
          uVar6 = *(int *)(param_1 + 0x1a4) + 1;
          *(uint *)(param_1 + 0x1a4) = uVar6;
          if (uVar6 < 0x13) {
            lVar15 = param_1 + (long)(int)uVar6 * 4;
            uVar10 = 0x12;
            goto LAB_710193edbc;
          }
        }
      }
      else {
        lVar15 = *(long *)(*plVar14 + 8);
        if (*(char *)(lVar15 + 0x388) != '\0') {
          bVar4 = *(byte *)(plVar14 + 2);
          if ((((ulong)bVar4 < 0xe) && (bVar3 < 4)) &&
             (lVar11 = *(long *)(lVar15 + (ulong)bVar4 * 8 + 8), lVar11 != 0)) {
            bVar4 = bVar3 + bVar4 * '\x04';
            if (0x37 < bVar4) goto LAB_710193ef28;
            uVar6 = FUN_7102512ab0((ulong)*(ushort *)(lVar11 + (ulong)bVar3 * 0x1c8 + 8));
            if (uVar6 <= uVar1) {
              if (uVar1 <= uVar6) {
                uVar1 = uVar6;
              }
              *(uint *)(lVar16 + 0x24) = uVar1 - uVar6;
              plVar14 = *(long **)(lVar15 + (ulong)bVar4 * 8 + 0xe0);
              if (plVar14 != (long *)0x0) {
                *(undefined1 *)(*plVar14 + 0x20) = 3;
                lVar16 = *plVar14;
                memcpy((void *)(lVar16 + 0x28),(void *)(lVar15 + 0x2b8),0xd0);
                memcpy((void *)(lVar16 + 0xf8),(void *)(lVar15 + 0x2b8),0xd0);
              }
            }
          }
        }
        if (*(uint *)(param_1 + 0x1a4) < 0x13) {
          *(undefined4 *)(param_1 + (long)(int)*(uint *)(param_1 + 0x1a4) * 4 + 0x158) = 0xb;
          if (0x11 < *(int *)(param_1 + 0x1a4)) {
            return;
          }
          uVar6 = *(int *)(param_1 + 0x1a4) + 1;
          *(uint *)(param_1 + 0x1a4) = uVar6;
          if (uVar6 < 0x13) {
            lVar15 = param_1 + (long)(int)uVar6 * 4;
            uVar10 = 10;
            goto LAB_710193edbc;
          }
        }
      }
    }
    else {
      if (cVar2 != '\x01') {
        return;
      }
      if (*(uint *)(param_1 + 0x1a4) < 0x13) {
        lVar15 = param_1 + (long)(int)*(uint *)(param_1 + 0x1a4) * 4;
        uVar10 = 5;
        goto LAB_710193edbc;
      }
    }
LAB_710193ef28:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  puVar13 = *(undefined8 **)(lVar15 + 0x208);
  plVar14 = (long *)*puVar13;
  (**(code **)(*plVar14 + 0x60))(plVar14,0);
  plVar14 = (long *)*puVar13;
  (**(code **)(*plVar14 + 0x70))(plVar14,0);
  *(undefined1 *)(*(long *)(lVar15 + 0x378) + 0x80) = 1;
  FUN_71037780e0(&local_98,lVar15 + 0x1f8,(long ****)"menu_in",param_3,param_4,param_5,param_6,
                 param_7,param_8);
  pppuVar7 = (undefined ***)
             FUN_710392e290(0x10,0x10,param_3,param_4,param_5,param_6,param_7,param_8);
  if (pppuVar7 == (undefined ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_44 = 0;
      local_a0 = (long ***)&DAT_00000010;
      uVar12 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_44);
      if (((uVar12 & 1) != 0) &&
         (pppuVar7 = (undefined ***)
                     FUN_710392e290(0x10,0x10,pppplVar8,param_4,param_5,param_6,param_7,param_8),
         pppuVar7 != (undefined ***)0x0)) goto LAB_710193eb94;
    }
    pppuVar7 = (undefined ***)0x0;
  }
LAB_710193eb94:
  ppuVar5 = local_90[0];
  *pppuVar7 = &PTR_FUN_710523d9e8;
  pppuVar7[1] = (undefined **)0x0;
  if (&local_98 != pppuVar7) {
    local_90[0] = (undefined **)0x0;
    pppuVar7[1] = ppuVar5;
  }
  plVar14 = *(long **)(lVar15 + 0x368);
  *(undefined ****)(lVar15 + 0x368) = pppuVar7;
  if (plVar14 != (long *)0x0) {
    (**(code **)(*plVar14 + 8))(plVar14);
  }
  ppuVar5 = local_90[0];
  local_98 = &PTR_FUN_710523d9e8;
  local_90[0] = (undefined **)0x0;
  if (ppuVar5 != (undefined **)0x0) {
    FUN_710392eb40((ulong)ppuVar5);
  }
  FUN_710377aee0(0x3f800000,*(long *)(lVar15 + 0x368));
  FUN_7103778300(0x3f800000,*(long *)(*(long *)(lVar15 + 0x308) + 8),0x71042b4a73);
  *(undefined1 *)(lVar15 + 0x313) = 1;
  *(undefined8 *)(lVar15 + 0x10) = 0;
  *(undefined8 *)(lVar15 + 0x18) = 0;
  *(undefined8 *)(lVar15 + 0x1c0) = 0;
  *(undefined8 *)(lVar15 + 0x1c8) = 0;
  *(undefined1 *)(lVar15 + 0x1ec) = 0;
  *(undefined8 *)(lVar15 + 400) = 0x140000000c;
  *(undefined8 *)(lVar15 + 0x198) = 0;
  *(undefined8 *)(lVar15 + 0x1d0) = 0;
  *(undefined8 *)(lVar15 + 0x1d8) = 0x100000000;
  *(undefined8 *)(lVar15 + 0x1e0) = 0xffffffff;
  *(undefined4 *)(lVar15 + 0x1e8) = 0xffffffff;
  *(undefined8 *)(lVar15 + 0x1b0) = 0;
  *(undefined8 *)(lVar15 + 0x1b8) = 0;
  *(undefined8 *)(lVar15 + 0x1a0) = 0;
  *(undefined8 *)(lVar15 + 0x1a8) = 0;
  return;
}

