// addr:      7101e50b10
// offset:    0x1e50b10
// name:      FUN_7101e50b10
// mangled:   
// signature: undefined __cdecl FUN_7101e50b10(long param_1, undefined8 param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Removing unreachable block (ram,0x007101e518d8) */
/* WARNING: Removing unreachable block (ram,0x007101e51490) */
/* WARNING: Removing unreachable block (ram,0x007101e516b8) */
/* WARNING: Removing unreachable block (ram,0x007101e51af8) */

void FUN_7101e50b10(long param_1,undefined8 param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  char cVar2;
  byte bVar3;
  undefined1 uVar4;
  ushort uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long ****pppplVar10;
  long ****pppplVar11;
  long ****pppplVar12;
  long lVar13;
  ushort *puVar14;
  short *psVar15;
  undefined2 *puVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long *plVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined1 auVar24 [16];
  long ***local_60;
  ulong local_58;
  undefined4 local_44;
  
  pppplVar12 = &local_60;
  pppplVar10 = &local_60;
  pppplVar11 = &local_60;
  cVar2 = *(char *)(param_1 + 0x22c);
  if (cVar2 == '\x02') {
    lVar13 = *DAT_7105329f98;
    FUN_7102518f30(*(long *)(lVar13 + 0x40));
    bVar3 = *(byte *)(param_1 + 0x22d);
    plVar6 = (long *)FUN_710392e290(0x10,0x10,param_3,param_4,param_5,param_6,param_7,param_8);
    if (plVar6 == (long *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_44 = 0;
        local_60 = (long ***)&DAT_00000010;
        uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_44);
        param_3 = pppplVar10;
        if (((uVar7 & 1) != 0) &&
           (plVar6 = (long *)FUN_710392e290(0x10,0x10,pppplVar10,param_4,param_5,param_6,param_7,
                                            param_8), param_3 = pppplVar10, plVar6 != (long *)0x0))
        goto LAB_7101e50ce0;
      }
      plVar6 = (long *)0x0;
    }
LAB_7101e50ce0:
    *plVar6 = lVar13 + 0x38;
    *(byte *)(plVar6 + 1) = bVar3;
    if (((*(char *)(*(long *)(lVar13 + 0x40) + 0x388) == '\0' || 2 < bVar3) ||
        (lVar13 = *(long *)(*(long *)(lVar13 + 0x40) + (ulong)bVar3 * 8 + 0x78), lVar13 == 0)) ||
       (1 < *(byte *)(lVar13 + 0x80) - 1)) {
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x80),0x710438d258);
      if (plVar6 == (long *)0x0) {
        return;
      }
    }
    else {
      FUN_7103778300(0x3f800000,*(long *)(param_1 + 0x80),0x710434aaac);
      if ((ulong)*(byte *)(plVar6 + 1) < 3) {
        lVar13 = *(long *)(*(long *)(*plVar6 + 8) + (ulong)*(byte *)(plVar6 + 1) * 8 + 0x78);
        if (lVar13 == 0) {
          auVar24 = ZEXT816(0);
        }
        else {
          auVar24 = ZEXT816(0);
          if (*(char *)(*(long *)(*plVar6 + 8) + 0x388) != '\0') {
            auVar24 = FUN_7102512c50(lVar13);
          }
        }
      }
      else {
        auVar24 = ZEXT816(0);
      }
      FUN_7103776910(&local_60,param_1 + 0x78,(long ****)"set_txt_rest",param_3,param_4,param_5,
                     param_6,param_7,param_8);
      uVar9 = 2;
      uVar8 = auVar24._0_8_ & 0xffffffff;
      pppplVar12 = (long ****)(auVar24._8_8_ & 0xffffffff);
      FUN_710377a280((long)&local_60,(byte *)"cam_searchfield_time",2);
      uVar7 = local_58;
      local_60 = (long ***)&PTR_FUN_710523d9a8;
      local_58 = 0;
      if (uVar7 != 0) {
        FUN_710392eb40(uVar7);
      }
      fVar22 = 0.0;
      uVar7 = 0;
      fVar21 = 0.0;
      if (((ulong)*(byte *)(plVar6 + 1) < 3) &&
         (fVar21 = fVar22, *(char *)(*(long *)(*plVar6 + 8) + 0x388) != '\0')) {
        lVar13 = *(long *)(*plVar6 + 8) + (ulong)*(byte *)(plVar6 + 1) * 8;
        if (*(long *)(lVar13 + 0x78) == 0) {
          uVar7 = 0;
          lVar13 = *(long *)(lVar13 + 0x78);
        }
        else {
          cVar2 = *(char *)(*(long *)(lVar13 + 0x78) + 0x80);
          uVar7 = (ulong)(cVar2 == '\x02' || cVar2 == '\x04');
          lVar13 = *(long *)(lVar13 + 0x78);
        }
        if (((lVar13 != 0) && (*(char *)(lVar13 + 0x80) != '\0')) && (0 < *(long *)(lVar13 + 8))) {
          fVar23 = (float)*(long *)(lVar13 + 0x10) / (float)*(long *)(lVar13 + 8);
          fVar22 = fVar23;
          if (1.0 < fVar23) {
            fVar22 = 1.0;
          }
          fVar21 = 0.0;
          if (0.0 <= fVar23) {
            fVar21 = fVar22;
          }
        }
      }
      FUN_7101e51da0(fVar21,param_1 + 0x78,uVar7,uVar9,uVar8,pppplVar12,param_6,param_7,param_8);
    }
    goto LAB_7101e51b5c;
  }
  if (cVar2 == '\x01') {
    lVar13 = *DAT_7105329f98;
    FUN_7102518f30(*(long *)(lVar13 + 0x40));
    uVar4 = *(undefined1 *)(param_1 + 0x22d);
    plVar6 = (long *)FUN_710392e290(0x10,0x10,param_3,param_4,param_5,param_6,param_7,param_8);
    if (plVar6 == (long *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_44 = 0;
        local_60 = (long ***)&DAT_00000010;
        uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_44);
        if (((uVar7 & 1) != 0) &&
           (plVar6 = (long *)FUN_710392e290(0x10,0x10,pppplVar11,param_4,param_5,param_6,param_7,
                                            param_8), plVar6 != (long *)0x0)) goto LAB_7101e50dc4;
      }
      plVar6 = (long *)0x0;
    }
LAB_7101e50dc4:
    lVar18 = param_1 + 0x78;
    *plVar6 = lVar13 + 0x38;
    uVar9 = 0;
    *(undefined1 *)(plVar6 + 1) = uVar4;
    FUN_7103776640(&local_60,lVar18,(byte ****)"set_parts_spirit_%02d",0,param_4,param_5,param_6,
                   param_7,param_8);
    uVar7 = local_58;
    if ((((ulong)*(byte *)(plVar6 + 1) < 0xe) && (*(char *)(*(long *)(*plVar6 + 8) + 0x388) != '\0')
        ) && (lVar13 = *(long *)(*(long *)(*plVar6 + 8) + (ulong)*(byte *)(plVar6 + 1) * 8 + 8),
             lVar13 != 0)) {
      uVar5 = *(ushort *)(lVar13 + 8);
      if ((ulong)uVar5 == 0xffff) goto LAB_7101e514b0;
      if (uVar5 >> 4 < 0x177) {
        puVar16 = (undefined2 *)(*(long *)(*DAT_7105329f98 + 0x30) + (ulong)uVar5 * 0x50 + 72000);
      }
      else {
        puVar16 = &DAT_710532a878;
        if (((ushort)(uVar5 + 0xe890) < 100) &&
           (lVar13 = *(long *)(*DAT_7105329f98 + 0x30) + (ulong)(ushort)(uVar5 + 0xe890) * 0x50,
           *(short *)(lVar13 + 0x88cc8) != -1)) {
          puVar16 = (undefined2 *)(lVar13 + 0x88cc0);
        }
      }
      if (((puVar16[4] == -1) || (*(char *)(*(long *)(*plVar6 + 8) + 0x388) == '\0')) ||
         ((0xd < (ulong)*(byte *)(plVar6 + 1) ||
          ((lVar13 = *(long *)(*(long *)(*plVar6 + 8) + (ulong)*(byte *)(plVar6 + 1) * 8 + 8),
           lVar13 == 0 || (*(short *)(lVar13 + 8) == -1)))))) goto LAB_7101e514b0;
      FUN_7103778300(0x3f800000,local_58,0x710434aaac);
      fVar21 = 0.0;
      uVar8 = 0;
      if (((ulong)*(byte *)(plVar6 + 1) < 0xe) &&
         (*(char *)(*(long *)(*plVar6 + 8) + 0x388) != '\0')) {
        lVar13 = *(long *)(*plVar6 + 8) + (ulong)*(byte *)(plVar6 + 1) * 8;
        lVar17 = *(long *)(lVar13 + 8);
        fVar21 = 0.0;
        if (lVar17 == 0) {
LAB_7101e51d7c:
          lVar13 = *(long *)(lVar13 + 8);
        }
        else {
          uVar8 = *(ulong *)(lVar17 + 0x20);
          uVar19 = *(ulong *)(lVar17 + 0x10);
          fVar21 = 1.0;
          if ((uVar8 == uVar19) ||
             (uVar1 = ((long)uVar19 >> 0x20) * 0xe353f7cf +
                      ((uVar19 & 0xffffffff) * 0xe353f7cf >> 0x20),
             lVar17 = ((long)(((long)uVar19 >> 0x20) * 0x20c49ba5 + ((long)uVar1 >> 0x20) +
                             ((uVar19 & 0xffffffff) * 0x20c49ba5 + (uVar1 & 0xffffffff) >> 0x20)) >>
                      7) - ((long)uVar19 >> 0x3f), fVar21 = 0.0, lVar17 < 1)) goto LAB_7101e51d7c;
          uVar19 = ((long)uVar8 >> 0x20) * 0xe353f7cf + ((uVar8 & 0xffffffff) * 0xe353f7cf >> 0x20);
          fVar22 = (float)(((long)(((long)uVar8 >> 0x20) * 0x20c49ba5 + ((long)uVar19 >> 0x20) +
                                  ((uVar8 & 0xffffffff) * 0x20c49ba5 + (uVar19 & 0xffffffff) >> 0x20
                                  )) >> 7) - ((long)uVar8 >> 0x3f)) / (float)lVar17;
          fVar21 = 0.0;
          if (0.0 <= fVar22) {
            fVar21 = fVar22;
          }
          lVar13 = *(long *)(lVar13 + 8);
        }
        if (lVar13 == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = (ulong)(*(char *)(lVar13 + 0x28) == '\x03');
        }
      }
      FUN_7101e51da0(fVar21,(long)&local_60,uVar8,uVar9,param_4,param_5,param_6,param_7,param_8);
    }
    else {
LAB_7101e514b0:
      FUN_7103778300(0x3f800000,local_58,0x710438d258);
    }
    local_60 = (long ***)&PTR_FUN_710523d988;
    local_58 = 0;
    if (uVar7 != 0) {
      uVar8 = *(ulong *)(uVar7 + 0x18);
      *(undefined ***)(uVar7 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar7 + 0x18) = 0;
      if (uVar8 != 0) {
        FUN_710392eb40(uVar8);
      }
      FUN_710392eb40(uVar7);
    }
    uVar9 = 1;
    FUN_7103776640(&local_60,lVar18,(byte ****)"set_parts_spirit_%02d",1,param_4,param_5,param_6,
                   param_7,param_8);
    uVar7 = local_58;
    if ((((ulong)*(byte *)(plVar6 + 1) < 0xe) && (*(char *)(*(long *)(*plVar6 + 8) + 0x388) != '\0')
        ) && (lVar13 = *(long *)(*(long *)(*plVar6 + 8) + (ulong)*(byte *)(plVar6 + 1) * 8 + 8),
             lVar13 != 0)) {
      uVar5 = *(ushort *)(lVar13 + 0x1d0);
      if ((ulong)uVar5 == 0xffff) goto LAB_7101e516d8;
      if (uVar5 >> 4 < 0x177) {
        puVar16 = (undefined2 *)(*(long *)(*DAT_7105329f98 + 0x30) + (ulong)uVar5 * 0x50 + 72000);
      }
      else {
        puVar16 = &DAT_710532a878;
        if (((ushort)(uVar5 + 0xe890) < 100) &&
           (lVar13 = *(long *)(*DAT_7105329f98 + 0x30) + (ulong)(ushort)(uVar5 + 0xe890) * 0x50,
           *(short *)(lVar13 + 0x88cc8) != -1)) {
          puVar16 = (undefined2 *)(lVar13 + 0x88cc0);
        }
      }
      if (puVar16[4] == -1) goto LAB_7101e516d8;
      FUN_7103778300(0x3f800000,local_58,0x710434aaac);
      fVar21 = 0.0;
      uVar8 = 0;
      if (((ulong)*(byte *)(plVar6 + 1) < 0xe) &&
         (*(char *)(*(long *)(*plVar6 + 8) + 0x388) != '\0')) {
        lVar13 = *(long *)(*plVar6 + 8) + (ulong)*(byte *)(plVar6 + 1) * 8;
        lVar17 = *(long *)(lVar13 + 8);
        fVar21 = 0.0;
        if (lVar17 == 0) {
LAB_7101e51bf8:
          lVar13 = *(long *)(lVar13 + 8);
        }
        else {
          uVar8 = *(ulong *)(lVar17 + 0x1e8);
          uVar19 = *(ulong *)(lVar17 + 0x1d8);
          fVar21 = 1.0;
          if ((uVar8 == uVar19) ||
             (uVar1 = ((long)uVar19 >> 0x20) * 0xe353f7cf +
                      ((uVar19 & 0xffffffff) * 0xe353f7cf >> 0x20),
             lVar17 = ((long)(((long)uVar19 >> 0x20) * 0x20c49ba5 + ((long)uVar1 >> 0x20) +
                             ((uVar19 & 0xffffffff) * 0x20c49ba5 + (uVar1 & 0xffffffff) >> 0x20)) >>
                      7) - ((long)uVar19 >> 0x3f), fVar21 = 0.0, lVar17 < 1)) goto LAB_7101e51bf8;
          uVar19 = ((long)uVar8 >> 0x20) * 0xe353f7cf + ((uVar8 & 0xffffffff) * 0xe353f7cf >> 0x20);
          fVar22 = (float)(((long)(((long)uVar8 >> 0x20) * 0x20c49ba5 + ((long)uVar19 >> 0x20) +
                                  ((uVar8 & 0xffffffff) * 0x20c49ba5 + (uVar19 & 0xffffffff) >> 0x20
                                  )) >> 7) - ((long)uVar8 >> 0x3f)) / (float)lVar17;
          fVar21 = 0.0;
          if (0.0 <= fVar22) {
            fVar21 = fVar22;
          }
          lVar13 = *(long *)(lVar13 + 8);
        }
        if (lVar13 == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = (ulong)(*(char *)(lVar13 + 0x1f0) == '\x03');
        }
      }
      FUN_7101e51da0(fVar21,(long)&local_60,uVar8,uVar9,param_4,param_5,param_6,param_7,param_8);
    }
    else {
LAB_7101e516d8:
      FUN_7103778300(0x3f800000,local_58,0x710438d258);
    }
    local_58 = 0;
    local_60 = (long ***)&PTR_FUN_710523d988;
    if (uVar7 != 0) {
      local_58 = 0;
      local_60 = (long ***)&PTR_FUN_710523d988;
      uVar8 = *(ulong *)(uVar7 + 0x18);
      *(undefined ***)(uVar7 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar7 + 0x18) = 0;
      if (uVar8 != 0) {
        FUN_710392eb40(uVar8);
      }
      FUN_710392eb40(uVar7);
    }
    uVar9 = 2;
    FUN_7103776640(&local_60,lVar18,(byte ****)"set_parts_spirit_%02d",2,param_4,param_5,param_6,
                   param_7,param_8);
    uVar7 = local_58;
    if ((((ulong)*(byte *)(plVar6 + 1) < 0xe) && (*(char *)(*(long *)(*plVar6 + 8) + 0x388) != '\0')
        ) && (lVar13 = *(long *)(*(long *)(*plVar6 + 8) + (ulong)*(byte *)(plVar6 + 1) * 8 + 8),
             lVar13 != 0)) {
      uVar5 = *(ushort *)(lVar13 + 0x398);
      if ((ulong)uVar5 == 0xffff) goto LAB_7101e518f8;
      if (uVar5 >> 4 < 0x177) {
        puVar16 = (undefined2 *)(*(long *)(*DAT_7105329f98 + 0x30) + (ulong)uVar5 * 0x50 + 72000);
      }
      else {
        puVar16 = &DAT_710532a878;
        if (((ushort)(uVar5 + 0xe890) < 100) &&
           (lVar13 = *(long *)(*DAT_7105329f98 + 0x30) + (ulong)(ushort)(uVar5 + 0xe890) * 0x50,
           *(short *)(lVar13 + 0x88cc8) != -1)) {
          puVar16 = (undefined2 *)(lVar13 + 0x88cc0);
        }
      }
      if (puVar16[4] == -1) goto LAB_7101e518f8;
      FUN_7103778300(0x3f800000,local_58,0x710434aaac);
      fVar21 = 0.0;
      uVar8 = 0;
      if (((ulong)*(byte *)(plVar6 + 1) < 0xe) &&
         (*(char *)(*(long *)(*plVar6 + 8) + 0x388) != '\0')) {
        lVar13 = *(long *)(*plVar6 + 8) + (ulong)*(byte *)(plVar6 + 1) * 8;
        lVar17 = *(long *)(lVar13 + 8);
        fVar21 = 0.0;
        if (lVar17 == 0) {
LAB_7101e51c28:
          lVar13 = *(long *)(lVar13 + 8);
        }
        else {
          uVar8 = *(ulong *)(lVar17 + 0x3b0);
          uVar19 = *(ulong *)(lVar17 + 0x3a0);
          fVar21 = 1.0;
          if ((uVar8 == uVar19) ||
             (uVar1 = ((long)uVar19 >> 0x20) * 0xe353f7cf +
                      ((uVar19 & 0xffffffff) * 0xe353f7cf >> 0x20),
             lVar17 = ((long)(((long)uVar19 >> 0x20) * 0x20c49ba5 + ((long)uVar1 >> 0x20) +
                             ((uVar19 & 0xffffffff) * 0x20c49ba5 + (uVar1 & 0xffffffff) >> 0x20)) >>
                      7) - ((long)uVar19 >> 0x3f), fVar21 = 0.0, lVar17 < 1)) goto LAB_7101e51c28;
          uVar19 = ((long)uVar8 >> 0x20) * 0xe353f7cf + ((uVar8 & 0xffffffff) * 0xe353f7cf >> 0x20);
          fVar22 = (float)(((long)(((long)uVar8 >> 0x20) * 0x20c49ba5 + ((long)uVar19 >> 0x20) +
                                  ((uVar8 & 0xffffffff) * 0x20c49ba5 + (uVar19 & 0xffffffff) >> 0x20
                                  )) >> 7) - ((long)uVar8 >> 0x3f)) / (float)lVar17;
          fVar21 = 0.0;
          if (0.0 <= fVar22) {
            fVar21 = fVar22;
          }
          lVar13 = *(long *)(lVar13 + 8);
        }
        if (lVar13 == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = (ulong)(*(char *)(lVar13 + 0x3b8) == '\x03');
        }
      }
      FUN_7101e51da0(fVar21,(long)&local_60,uVar8,uVar9,param_4,param_5,param_6,param_7,param_8);
    }
    else {
LAB_7101e518f8:
      FUN_7103778300(0x3f800000,local_58,0x710438d258);
    }
    local_58 = 0;
    local_60 = (long ***)&PTR_FUN_710523d988;
    if (uVar7 != 0) {
      local_58 = 0;
      local_60 = (long ***)&PTR_FUN_710523d988;
      uVar8 = *(ulong *)(uVar7 + 0x18);
      *(undefined ***)(uVar7 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar7 + 0x18) = 0;
      if (uVar8 != 0) {
        FUN_710392eb40(uVar8);
      }
      FUN_710392eb40(uVar7);
    }
    uVar9 = 3;
    FUN_7103776640(&local_60,lVar18,(byte ****)"set_parts_spirit_%02d",3,param_4,param_5,param_6,
                   param_7,param_8);
    uVar7 = local_58;
    if ((((ulong)*(byte *)(plVar6 + 1) < 0xe) && (*(char *)(*(long *)(*plVar6 + 8) + 0x388) != '\0')
        ) && (lVar13 = *(long *)(*(long *)(*plVar6 + 8) + (ulong)*(byte *)(plVar6 + 1) * 8 + 8),
             lVar13 != 0)) {
      uVar5 = *(ushort *)(lVar13 + 0x560);
      if ((ulong)uVar5 == 0xffff) goto LAB_7101e51b18;
      if (uVar5 >> 4 < 0x177) {
        puVar16 = (undefined2 *)(*(long *)(*DAT_7105329f98 + 0x30) + (ulong)uVar5 * 0x50 + 72000);
      }
      else {
        puVar16 = &DAT_710532a878;
        if (((ushort)(uVar5 + 0xe890) < 100) &&
           (lVar13 = *(long *)(*DAT_7105329f98 + 0x30) + (ulong)(ushort)(uVar5 + 0xe890) * 0x50,
           *(short *)(lVar13 + 0x88cc8) != -1)) {
          puVar16 = (undefined2 *)(lVar13 + 0x88cc0);
        }
      }
      if (puVar16[4] == -1) goto LAB_7101e51b18;
      FUN_7103778300(0x3f800000,local_58,0x710434aaac);
      fVar21 = 0.0;
      uVar8 = 0;
      if (((ulong)*(byte *)(plVar6 + 1) < 0xe) &&
         (*(char *)(*(long *)(*plVar6 + 8) + 0x388) != '\0')) {
        lVar13 = *(long *)(*plVar6 + 8) + (ulong)*(byte *)(plVar6 + 1) * 8;
        lVar18 = *(long *)(lVar13 + 8);
        fVar21 = 0.0;
        if (lVar18 == 0) {
LAB_7101e51c58:
          lVar13 = *(long *)(lVar13 + 8);
        }
        else {
          uVar8 = *(ulong *)(lVar18 + 0x578);
          uVar19 = *(ulong *)(lVar18 + 0x568);
          fVar21 = 1.0;
          if ((uVar8 == uVar19) ||
             (uVar1 = ((long)uVar19 >> 0x20) * 0xe353f7cf +
                      ((uVar19 & 0xffffffff) * 0xe353f7cf >> 0x20),
             lVar18 = ((long)(((long)uVar19 >> 0x20) * 0x20c49ba5 + ((long)uVar1 >> 0x20) +
                             ((uVar19 & 0xffffffff) * 0x20c49ba5 + (uVar1 & 0xffffffff) >> 0x20)) >>
                      7) - ((long)uVar19 >> 0x3f), fVar21 = 0.0, lVar18 < 1)) goto LAB_7101e51c58;
          uVar19 = ((long)uVar8 >> 0x20) * 0xe353f7cf + ((uVar8 & 0xffffffff) * 0xe353f7cf >> 0x20);
          fVar22 = (float)(((long)(((long)uVar8 >> 0x20) * 0x20c49ba5 + ((long)uVar19 >> 0x20) +
                                  ((uVar8 & 0xffffffff) * 0x20c49ba5 + (uVar19 & 0xffffffff) >> 0x20
                                  )) >> 7) - ((long)uVar8 >> 0x3f)) / (float)lVar18;
          fVar21 = 0.0;
          if (0.0 <= fVar22) {
            fVar21 = fVar22;
          }
          lVar13 = *(long *)(lVar13 + 8);
        }
        if (lVar13 == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = (ulong)(*(char *)(lVar13 + 0x580) == '\x03');
        }
      }
      FUN_7101e51da0(fVar21,(long)&local_60,uVar8,uVar9,param_4,param_5,param_6,param_7,param_8);
    }
    else {
LAB_7101e51b18:
      FUN_7103778300(0x3f800000,local_58,0x710438d258);
    }
  }
  else {
    if (cVar2 != '\0') {
      return;
    }
    lVar13 = *DAT_7105329f98;
    FUN_7102518f30(*(long *)(lVar13 + 0x40));
    plVar6 = (long *)FUN_710392e290(0x10,8,param_3,param_4,param_5,param_6,param_7,param_8);
    if (plVar6 == (long *)0x0) {
      if (DAT_7105332f00 != (long *)0x0) {
        local_44 = 0;
        local_60 = (long ***)&DAT_00000008;
        uVar7 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_44);
        if (((uVar7 & 1) != 0) &&
           (plVar6 = (long *)FUN_710392e290(0x10,8,pppplVar12,param_4,param_5,param_6,param_7,
                                            param_8), plVar6 != (long *)0x0)) goto LAB_7101e50bbc;
      }
      plVar6 = (long *)0x0;
    }
LAB_7101e50bbc:
    lVar18 = param_1 + 0x78;
    *plVar6 = lVar13 + 0x38;
    uVar9 = 0;
    FUN_7103776640(&local_60,lVar18,(byte ****)"set_parts_spirit_%02d",0,param_4,param_5,param_6,
                   param_7,param_8);
    uVar7 = local_58;
    if ((*(char *)(*(undefined8 **)(*plVar6 + 8) + 0x71) == '\0') ||
       (puVar14 = (ushort *)**(undefined8 **)(*plVar6 + 8), puVar14 == (ushort *)0x0)) {
LAB_7101e50f30:
      FUN_7103778300(0x3f800000,local_58,0x710438d258);
    }
    else {
      uVar5 = *puVar14;
      if ((ulong)uVar5 == 0xffff) goto LAB_7101e50f30;
      if (uVar5 >> 4 < 0x177) {
        puVar16 = (undefined2 *)(*(long *)(*DAT_7105329f98 + 0x30) + (ulong)uVar5 * 0x50 + 72000);
      }
      else {
        puVar16 = &DAT_710532a878;
        if (((ushort)(uVar5 + 0xe890) < 100) &&
           (lVar13 = *(long *)(*DAT_7105329f98 + 0x30) + (ulong)(ushort)(uVar5 + 0xe890) * 0x50,
           *(short *)(lVar13 + 0x88cc8) != -1)) {
          puVar16 = (undefined2 *)(lVar13 + 0x88cc0);
        }
      }
      if ((((puVar16[4] == -1) || (*(char *)(*(undefined8 **)(*plVar6 + 8) + 0x71) == '\0')) ||
          (psVar15 = (short *)**(undefined8 **)(*plVar6 + 8), psVar15 == (short *)0x0)) ||
         (*psVar15 == -1)) goto LAB_7101e50f30;
      FUN_7103778300(0x3f800000,local_58,0x710434aaac);
      plVar20 = *(long **)(*plVar6 + 8);
      fVar21 = FUN_710251abf0(plVar20,0);
      if (((char)plVar20[0x71] == '\0') || (*plVar20 == 0)) {
        uVar8 = 0;
      }
      else {
        uVar8 = (ulong)(*(char *)(*plVar20 + 0x20) == '\x03');
      }
      FUN_7101e51da0(fVar21,(long)&local_60,uVar8,uVar9,param_4,param_5,param_6,param_7,param_8);
    }
    local_60 = (long ***)&PTR_FUN_710523d988;
    local_58 = 0;
    if (uVar7 != 0) {
      uVar8 = *(ulong *)(uVar7 + 0x18);
      *(undefined ***)(uVar7 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar7 + 0x18) = 0;
      if (uVar8 != 0) {
        FUN_710392eb40(uVar8);
      }
      FUN_710392eb40(uVar7);
    }
    uVar9 = 1;
    FUN_7103776640(&local_60,lVar18,(byte ****)"set_parts_spirit_%02d",1,param_4,param_5,param_6,
                   param_7,param_8);
    uVar7 = local_58;
    if (((char)(*(long **)(*plVar6 + 8))[0x71] == '\0') ||
       (lVar13 = **(long **)(*plVar6 + 8), lVar13 == 0)) {
LAB_7101e51088:
      FUN_7103778300(0x3f800000,local_58,0x710438d258);
    }
    else {
      uVar5 = *(ushort *)(lVar13 + 0x1d8);
      if ((ulong)uVar5 == 0xffff) goto LAB_7101e51088;
      if (uVar5 >> 4 < 0x177) {
        puVar16 = (undefined2 *)(*(long *)(*DAT_7105329f98 + 0x30) + (ulong)uVar5 * 0x50 + 72000);
      }
      else {
        puVar16 = &DAT_710532a878;
        if (((ushort)(uVar5 + 0xe890) < 100) &&
           (lVar13 = *(long *)(*DAT_7105329f98 + 0x30) + (ulong)(ushort)(uVar5 + 0xe890) * 0x50,
           *(short *)(lVar13 + 0x88cc8) != -1)) {
          puVar16 = (undefined2 *)(lVar13 + 0x88cc0);
        }
      }
      if (puVar16[4] == -1) goto LAB_7101e51088;
      FUN_7103778300(0x3f800000,local_58,0x710434aaac);
      plVar20 = *(long **)(*plVar6 + 8);
      fVar21 = FUN_710251abf0(plVar20,1);
      if (((char)plVar20[0x71] == '\0') || (*plVar20 == 0)) {
        uVar8 = 0;
      }
      else {
        uVar8 = (ulong)(*(char *)(*plVar20 + 0x1f8) == '\x03');
      }
      FUN_7101e51da0(fVar21,(long)&local_60,uVar8,uVar9,param_4,param_5,param_6,param_7,param_8);
    }
    local_58 = 0;
    local_60 = (long ***)&PTR_FUN_710523d988;
    if (uVar7 != 0) {
      local_58 = 0;
      local_60 = (long ***)&PTR_FUN_710523d988;
      uVar8 = *(ulong *)(uVar7 + 0x18);
      *(undefined ***)(uVar7 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar7 + 0x18) = 0;
      if (uVar8 != 0) {
        FUN_710392eb40(uVar8);
      }
      FUN_710392eb40(uVar7);
    }
    uVar9 = 2;
    FUN_7103776640(&local_60,lVar18,(byte ****)"set_parts_spirit_%02d",2,param_4,param_5,param_6,
                   param_7,param_8);
    uVar7 = local_58;
    if (((char)(*(long **)(*plVar6 + 8))[0x71] == '\0') ||
       (lVar13 = **(long **)(*plVar6 + 8), lVar13 == 0)) {
LAB_7101e511d8:
      FUN_7103778300(0x3f800000,local_58,0x710438d258);
    }
    else {
      uVar5 = *(ushort *)(lVar13 + 0x3b0);
      if ((ulong)uVar5 == 0xffff) goto LAB_7101e511d8;
      if (uVar5 >> 4 < 0x177) {
        puVar16 = (undefined2 *)(*(long *)(*DAT_7105329f98 + 0x30) + (ulong)uVar5 * 0x50 + 72000);
      }
      else {
        puVar16 = &DAT_710532a878;
        if (((ushort)(uVar5 + 0xe890) < 100) &&
           (lVar13 = *(long *)(*DAT_7105329f98 + 0x30) + (ulong)(ushort)(uVar5 + 0xe890) * 0x50,
           *(short *)(lVar13 + 0x88cc8) != -1)) {
          puVar16 = (undefined2 *)(lVar13 + 0x88cc0);
        }
      }
      if (puVar16[4] == -1) goto LAB_7101e511d8;
      FUN_7103778300(0x3f800000,local_58,0x710434aaac);
      plVar20 = *(long **)(*plVar6 + 8);
      fVar21 = FUN_710251abf0(plVar20,2);
      if (((char)plVar20[0x71] == '\0') || (*plVar20 == 0)) {
        uVar8 = 0;
      }
      else {
        uVar8 = (ulong)(*(char *)(*plVar20 + 0x3d0) == '\x03');
      }
      FUN_7101e51da0(fVar21,(long)&local_60,uVar8,uVar9,param_4,param_5,param_6,param_7,param_8);
    }
    local_58 = 0;
    local_60 = (long ***)&PTR_FUN_710523d988;
    if (uVar7 != 0) {
      local_58 = 0;
      local_60 = (long ***)&PTR_FUN_710523d988;
      uVar8 = *(ulong *)(uVar7 + 0x18);
      *(undefined ***)(uVar7 + 0x10) = &PTR_FUN_710523d9a8;
      *(undefined8 *)(uVar7 + 0x18) = 0;
      if (uVar8 != 0) {
        FUN_710392eb40(uVar8);
      }
      FUN_710392eb40(uVar7);
    }
    uVar9 = 3;
    FUN_7103776640(&local_60,lVar18,(byte ****)"set_parts_spirit_%02d",3,param_4,param_5,param_6,
                   param_7,param_8);
    uVar7 = local_58;
    if (((char)(*(long **)(*plVar6 + 8))[0x71] != '\0') &&
       (lVar13 = **(long **)(*plVar6 + 8), lVar13 != 0)) {
      uVar5 = *(ushort *)(lVar13 + 0x588);
      if ((ulong)uVar5 != 0xffff) {
        if (uVar5 >> 4 < 0x177) {
          puVar16 = (undefined2 *)(*(long *)(*DAT_7105329f98 + 0x30) + (ulong)uVar5 * 0x50 + 72000);
        }
        else {
          puVar16 = &DAT_710532a878;
          if (((ushort)(uVar5 + 0xe890) < 100) &&
             (lVar13 = *(long *)(*DAT_7105329f98 + 0x30) + (ulong)(ushort)(uVar5 + 0xe890) * 0x50,
             *(short *)(lVar13 + 0x88cc8) != -1)) {
            puVar16 = (undefined2 *)(lVar13 + 0x88cc0);
          }
        }
        if (puVar16[4] != -1) {
          FUN_7103778300(0x3f800000,local_58,0x710434aaac);
          plVar20 = *(long **)(*plVar6 + 8);
          fVar21 = FUN_710251abf0(plVar20,3);
          if (((char)plVar20[0x71] == '\0') || (*plVar20 == 0)) {
            uVar8 = 0;
          }
          else {
            uVar8 = (ulong)(*(char *)(*plVar20 + 0x5a8) == '\x03');
          }
          FUN_7101e51da0(fVar21,(long)&local_60,uVar8,uVar9,param_4,param_5,param_6,param_7,param_8)
          ;
          goto joined_r0x007101e51b38;
        }
      }
    }
    FUN_7103778300(0x3f800000,local_58,0x710438d258);
  }
joined_r0x007101e51b38:
  local_58 = 0;
  local_60 = (long ***)&PTR_FUN_710523d988;
  if (uVar7 != 0) {
    local_58 = 0;
    local_60 = (long ***)&PTR_FUN_710523d988;
    uVar8 = *(ulong *)(uVar7 + 0x18);
    *(undefined ***)(uVar7 + 0x10) = &PTR_FUN_710523d9a8;
    *(undefined8 *)(uVar7 + 0x18) = 0;
    if (uVar8 != 0) {
      FUN_710392eb40(uVar8);
    }
    FUN_710392eb40(uVar7);
  }
LAB_7101e51b5c:
  FUN_710392eb40((ulong)plVar6);
  return;
}

