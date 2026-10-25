// addr:      7100149c80
// offset:    0x149c80
// name:      FUN_7100149c80
// mangled:   
// signature: undefined __cdecl FUN_7100149c80(undefined8 param_1, uint * param_2)


void FUN_7100149c80(undefined8 param_1,uint *param_2)

{
  byte bVar1;
  ushort uVar2;
  long lVar3;
  byte bVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  void *pvVar14;
  undefined8 uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  long lVar18;
  int iVar19;
  int *piVar20;
  ErrorResultVariant *pEVar21;
  uint *puVar22;
  int aiStack_630 [4];
  int aiStack_620 [4];
  int aiStack_610 [4];
  int aiStack_600 [4];
  int aiStack_5f0 [4];
  int aiStack_5e0 [4];
  int aiStack_5d0 [4];
  int aiStack_5c0 [4];
  int aiStack_5b0 [4];
  int aiStack_5a0 [4];
  uint uStack_590;
  undefined4 uStack_58c;
  long lStack_580;
  int aiStack_510 [4];
  int aiStack_500 [4];
  undefined8 local_4f0;
  undefined4 local_4e8;
  int iStack_e8;
  int aiStack_c0 [4];
  int aiStack_b0 [4];
  int local_a0 [4];
  long lStack_90;
  byte bStack_88;
  long lStack_80;
  undefined4 auStack_70 [4];
  
  lVar3 = DAT_71052adb38;
  lVar10 = FUN_7100193a50(DAT_71052adfc0);
  local_a0[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_a0 | 4));
  local_4f0 = (ulong)local_4f0._4_4_ << 0x20;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)local_a0 | 4),(Result *)&local_4f0);
  plVar11 = (long *)FUN_7100161fa0(DAT_71052add68);
  puVar22 = param_2 + 1;
  lVar12 = (**(code **)(*plVar11 + 0x48))(plVar11,(byte)*puVar22);
  if (lVar12 == 0) {
    lVar13 = 0;
    uVar9 = *param_2;
    if (uVar9 < 0x1b) goto LAB_7100149d74;
    goto override_jmp_7100149d84_case_5;
  }
  FUN_710015fd60(&local_4f0);
  plVar11 = (long *)FUN_7100161fb0(DAT_71052add68);
  (**(code **)(*plVar11 + 0x28))(&uStack_590,plVar11,lVar12,&local_4f0);
  lVar13 = FUN_71001602c0((long)&local_4f0);
  FUN_710015ff20(&local_4f0);
  uVar9 = *param_2;
  if (0x1a < uVar9) goto override_jmp_7100149d84_case_5;
LAB_7100149d74:
                    /* WARNING: Switch is manually overridden */
  switch(uVar9) {
  case 0:
    aiStack_b0[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_b0 | 4));
    local_4f0 = local_4f0 & 0xffffffff00000000;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_b0 | 4),(Result *)&local_4f0);
    aiStack_c0[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_c0 | 4));
    local_4f0 = local_4f0 & 0xffffffff00000000;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_c0 | 4),(Result *)&local_4f0);
    FUN_71001ae7e0((int *)&local_4f0,lVar10,(undefined8 *)&uStack_590,(byte)*puVar22);
    FUN_71000bcf30(aiStack_b0,(int *)&local_4f0);
    FUN_71001ae940((int *)&local_4f0,lVar10,&lStack_90,lVar13);
    FUN_71000bcf30(aiStack_c0,(int *)&local_4f0);
    if (((aiStack_c0[0] == 0) && ((byte)*puVar22 != bStack_88)) &&
       ((bVar5 = FUN_7100150680(*(long *)(lVar3 + 0xb8),lStack_90), !bVar5 &&
        (bVar5 = FUN_7100150970(*(long *)(lVar3 + 0xb8),lStack_90), !bVar5)))) {
      FUN_71001ae6b0((int *)&local_4f0,lVar10,lStack_90);
      FUN_7100150300((int *)&local_4f0,*(long *)(lVar3 + 0xb8),lStack_90);
    }
    if (((aiStack_b0[0] == 0) && (lVar13 != 0)) && (lStack_580 != lVar13)) {
      plVar11 = (long *)FUN_71001ae620(lVar10,(byte)*puVar22);
      *(byte *)(plVar11 + 1) = (byte)*puVar22;
      *plVar11 = lVar13;
      plVar11[2] = lVar13;
      puVar17 = (undefined8 *)
                FUN_71001503d0(*(long *)(lVar3 + 0xb8),CONCAT44(uStack_58c,uStack_590));
      FUN_710011bce0((long)&local_4f0);
      lVar18 = FUN_7100190ca0(DAT_71052adfc0);
      FUN_7100189240(aiStack_500,lVar18,lVar12,&local_4f0);
      FUN_71000bcf30(local_a0,aiStack_500);
      if (puVar17 == (undefined8 *)0x0) {
        aiStack_500[0] = 0x8c56;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)aiStack_500 | 4));
        auStack_70[0] = 0;
        nn::err::ErrorResultVariant::operator=
                  ((ErrorResultVariant *)((ulong)aiStack_500 | 4),(Result *)auStack_70);
        FUN_71000bce50(aiStack_510,aiStack_500);
        FUN_7100147360(lVar3,2,5,aiStack_510);
      }
      else {
        *puVar17 = 0;
        iVar8 = iStack_e8;
        if (local_a0[0] != 0) {
          iVar8 = 0;
        }
        *(undefined1 *)(puVar17 + 1) = 1;
        bVar4 = FUN_7100147180(DAT_71052adb38);
        *(byte *)((long)puVar17 + 9) = ~bVar4 & 1;
        puVar17[2] = lVar13;
        *(int *)(puVar17 + 3) = iVar8;
        *(undefined1 *)((long)puVar17 + 0x1c) = 0;
        *(byte *)((long)puVar17 + 0x1d) = (byte)*puVar22;
        *(undefined2 *)((long)puVar17 + 0x1e) = 0;
      }
    }
    uVar9 = *puVar22;
    bVar4 = FUN_7100193560(DAT_71052adfc0);
    if ((byte)uVar9 == bVar4) {
      FUN_710015fd60((undefined8 *)&uStack_590);
      lVar13 = FUN_7100161fa0(DAT_71052add68);
      uVar15 = *(undefined8 *)(lVar13 + 0x98);
      plVar11 = (long *)FUN_7100161fb0(DAT_71052add68);
      (**(code **)(*plVar11 + 0x28))(&local_4f0,plVar11,uVar15,&uStack_590);
      lVar13 = FUN_71001602c0((long)&uStack_590);
      if (lVar13 != 0) {
        FUN_71001ae940((int *)&local_4f0,lVar10,&lStack_90,lVar13);
        FUN_71000bcf30(local_a0,(int *)&local_4f0);
        if (local_a0[0] == 0) {
          if (bStack_88 != (byte)*puVar22) {
            plVar11 = FUN_71001ae5a0(lVar10,lStack_90);
            *(byte *)(plVar11 + 1) = (byte)*puVar22;
          }
          if (*(int *)(lVar3 + 0xd4) == 3) {
            FUN_71001505c0(*(long *)(lVar3 + 0xb8),lStack_90,1);
          }
        }
        else {
          FUN_710011bce0((long)&local_4f0);
          pvVar14 = (void *)FUN_7100190ca0(DAT_71052adfc0);
          FUN_7100188bb0(aiStack_b0,pvVar14,&local_4f0);
          FUN_71000bcf30(local_a0,aiStack_b0);
          if (local_a0[0] != 0) {
            iStack_e8 = 0;
          }
          FUN_7100147030(lVar3,lVar13,(byte)*puVar22,lVar13,iStack_e8);
        }
      }
      FUN_710015ff20((undefined8 *)&uStack_590);
LAB_710014abac:
      lVar10 = *(long *)(param_2 + 2);
    }
    else {
      if ((lVar12 == 0) || (lVar13 == 0)) goto LAB_710014abac;
      FUN_71001ae940((int *)&local_4f0,lVar10,&lStack_90,lVar13);
      FUN_71000bcf30(local_a0,(int *)&local_4f0);
      if (local_a0[0] == 0) {
        if (*(int *)(lVar3 + 0xd4) != 3) {
          if (bStack_88 == (byte)*puVar22) goto LAB_710014abac;
          if (bStack_88 != 0xfd) {
            bVar5 = FUN_7100150680(*(long *)(lVar3 + 0xb8),lStack_90);
            if (bVar5) {
              FUN_71001940d0(param_1,(uint)bStack_88);
            }
            uVar9 = FUN_71001476b0(lVar3);
            if ((uVar9 & 1) == 0) {
              FUN_7100145700(lVar3,lStack_90,bStack_88,lStack_80);
            }
            else {
              uVar15 = FUN_7100147e00(lVar3,(uint)bStack_88);
              FUN_710014b7c0((int *)&local_4f0,uVar15,lStack_90);
            }
          }
          goto LAB_710014a758;
        }
        FUN_710011bce0((long)&local_4f0);
        lVar18 = FUN_7100190ca0(DAT_71052adfc0);
        FUN_7100189240((int *)&uStack_590,lVar18,lVar12,&local_4f0);
        FUN_71000bcf30(local_a0,(int *)&uStack_590);
        uVar15 = FUN_7100150d50(*(long *)(lVar3 + 0xb8),lStack_90,aiStack_b0);
        if (aiStack_b0[0] != iStack_e8) {
          FUN_710014b7c0((int *)&uStack_590,uVar15,lStack_90);
          goto LAB_710014a758;
        }
        if (bStack_88 != (byte)*puVar22) {
          plVar11 = FUN_71001ae5a0(lVar10,lStack_90);
          *(byte *)(plVar11 + 1) = (byte)*puVar22;
        }
        FUN_71001505c0(*(long *)(lVar3 + 0xb8),lStack_90,1);
        lVar10 = *(long *)(param_2 + 2);
      }
      else {
LAB_710014a758:
        FUN_710011bce0((long)&local_4f0);
        lVar10 = FUN_7100190ca0(DAT_71052adfc0);
        FUN_7100189240((int *)&uStack_590,lVar10,lVar12,&local_4f0);
        FUN_71000bcf30(local_a0,(int *)&uStack_590);
        if (local_a0[0] != 0) {
          iStack_e8 = 0;
        }
        bVar5 = FUN_7100147030(lVar3,lVar13,(byte)*puVar22,lVar13,iStack_e8);
        if (((bVar5) || (*(int *)(lVar3 + 0xd4) != 3)) ||
           ((lVar10 = *(long *)(lVar3 + 0x70), lVar10 == 0 || (*(int *)(lVar10 + 0x90) == 0))))
        goto LAB_710014abac;
        uStack_590 = 0x6c59;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)&uStack_590 | 4));
        aiStack_b0[0] = 0;
        nn::err::ErrorResultVariant::operator=
                  ((ErrorResultVariant *)((ulong)&uStack_590 | 4),(Result *)aiStack_b0);
        *(undefined1 *)(lVar10 + 0xfb) = 1;
        FUN_71000bcf30((int *)(lVar10 + 0x100),(int *)&uStack_590);
        lVar10 = *(long *)(param_2 + 2);
      }
    }
    if ((lVar10 != 0) &&
       (uVar9 = *puVar22, bVar4 = FUN_7100193560(DAT_71052adfc0), (byte)uVar9 != bVar4)) {
      FUN_7100149320((int *)&local_4f0,DAT_71052adb38,lVar12);
    }
    break;
  case 1:
    if (*(int *)(lVar3 + 0xd4) == 3) {
      FUN_71001ae7e0((int *)&local_4f0,lVar10,&lStack_90,(byte)*puVar22);
      FUN_71000bcf30(local_a0,(int *)&local_4f0);
      if (local_a0[0] != 0) goto LAB_7100149f84;
      FUN_71001505c0(*(long *)(lVar3 + 0xb8),lStack_90,0);
      FUN_7100150d50(*(long *)(lVar3 + 0xb8),lStack_90,aiStack_c0);
      lVar10 = FUN_71001ae620(lVar10,(byte)*puVar22);
      *(undefined1 *)(lVar10 + 8) = 0xfd;
      if (aiStack_c0[0] == *(int *)(lVar3 + (ulong)*(byte *)(lVar3 + 0x162) * 4 + 0x180)) {
        if (*(char *)(lVar3 + 0x15c) != '\0') {
          if ((*(long *)(lVar3 + 0x70) != 0) &&
             (uVar9 = FUN_71000b4990(*(long *)(lVar3 + 0x70)), (uVar9 & 1) != 0)) {
            FUN_7100140e00(*(long *)(lVar3 + 0x70),lStack_90);
          }
          break;
        }
      }
      else {
        FUN_710014b7c0((int *)&local_4f0,lVar10,lStack_90);
      }
      if (lStack_90 == *(long *)(lVar3 + 0xf8)) {
        uVar16 = FUN_7100146ed0(lVar3);
        if ((uVar16 & 1) == 0) {
          uStack_590 = 0x8c56;
          pEVar21 = (ErrorResultVariant *)((ulong)&uStack_590 | 4);
          nn::err::ErrorResultVariant::ErrorResultVariant(pEVar21);
          local_4f0 = local_4f0 & 0xffffffff00000000;
          nn::err::ErrorResultVariant::operator=(pEVar21,(Result *)&local_4f0);
          FUN_71000bce50((int *)&local_4f0,(int *)&uStack_590);
          iVar8 = FUN_7100192f00(DAT_71052adfc0);
          if (iVar8 == 3) {
            uStack_590 = 0x8c78;
            nn::err::ErrorResultVariant::ErrorResultVariant(pEVar21);
            aiStack_b0[0] = 0;
            nn::err::ErrorResultVariant::operator=(pEVar21,(Result *)aiStack_b0);
            FUN_71000bcf30((int *)&local_4f0,(int *)&uStack_590);
            iVar8 = 3;
          }
          else {
            iVar8 = 5;
          }
          FUN_71000bce50(aiStack_5a0,(int *)&local_4f0);
          piVar20 = aiStack_5a0;
LAB_710014b468:
          FUN_7100147360(lVar3,2,iVar8,piVar20);
          goto LAB_710014b474;
        }
        if ((((*(int *)(lVar3 + 0xd8) != 1) ||
             (lVar10 = FUN_71001939e0(DAT_71052adfc0), *(char *)(lVar10 + 100) != '\0')) ||
            (*(long *)(lVar3 + 0x70) == 0)) || (*(int *)(*(long *)(lVar3 + 0x70) + 0x90) != 9))
        goto LAB_710014b474;
        uVar16 = FUN_7100150d50(*(long *)(lVar3 + 0xb8),*(long *)(lVar3 + 0x100),&uStack_590);
        if ((uVar16 & 1) == 0) {
          uStack_590 = 0;
        }
        if ((*(uint *)(lVar3 + (ulong)*(byte *)(lVar3 + 0x162) * 4 + 0x180) == uStack_590) ||
           (lVar12 = *(long *)(lVar3 + 0xf8),
           lVar10 = (**(code **)(**(long **)(lVar3 + (ulong)*(byte *)(lVar3 + 0x162) * 8 + 0x168) +
                                0xf0))(), lVar12 == lVar10)) goto LAB_710014b474;
        lVar10 = (**(code **)(**(long **)(lVar3 + (ulong)*(byte *)(lVar3 + 0x162) * 8 + 0x168) +
                             0xf0))();
        if (*(long *)(lVar3 + 0xf0) == lVar10) {
          plVar11 = *(long **)(lVar3 + (ulong)*(byte *)(lVar3 + 0x162) * 8 + 0x168);
          (**(code **)(*plVar11 + 0xd8))
                    (&local_4f0,plVar11,
                     *(undefined4 *)(lVar3 + (ulong)*(byte *)(lVar3 + 0x162) * 4 + 0x180));
          FUN_71000bcf30(local_a0,(int *)&local_4f0);
        }
        (**(code **)(**(long **)(lVar3 + 0x70) + 0x98))(*(long **)(lVar3 + 0x70),lVar10);
        if (lStack_90 != *(long *)(lVar3 + 0xf0)) break;
      }
      else {
        if (lStack_90 == *(long *)(lVar3 + 0x100)) {
          uVar16 = FUN_7100146ed0(lVar3);
          if ((uVar16 & 1) == 0) {
            if (aiStack_c0[0] == *(int *)(lVar3 + (ulong)*(byte *)(lVar3 + 0x162) * 4 + 0x180)) {
              uStack_590 = 0x8c56;
              pEVar21 = (ErrorResultVariant *)((ulong)&uStack_590 | 4);
              nn::err::ErrorResultVariant::ErrorResultVariant(pEVar21);
              local_4f0 = local_4f0 & 0xffffffff00000000;
              nn::err::ErrorResultVariant::operator=(pEVar21,(Result *)&local_4f0);
              FUN_71000bce50((int *)&local_4f0,(int *)&uStack_590);
              iVar8 = FUN_7100192f00(DAT_71052adfc0);
              if (iVar8 == 3) {
                uStack_590 = 0x8c78;
                nn::err::ErrorResultVariant::ErrorResultVariant(pEVar21);
                aiStack_b0[0] = 0;
                nn::err::ErrorResultVariant::operator=(pEVar21,(Result *)aiStack_b0);
                FUN_71000bcf30((int *)&local_4f0,(int *)&uStack_590);
                iVar8 = 3;
              }
              else {
                iVar8 = 5;
              }
              FUN_71000bce50(aiStack_5b0,(int *)&local_4f0);
              piVar20 = aiStack_5b0;
              goto LAB_710014b468;
            }
          }
          else if (*(int *)(lVar3 + 0xd8) == 1) {
            FUN_71001939e0(DAT_71052adfc0);
            if (lStack_90 == *(long *)(lVar3 + 0xf0)) goto LAB_710014b484;
            break;
          }
        }
LAB_710014b474:
        if (lStack_90 != *(long *)(lVar3 + 0xf0)) break;
      }
LAB_710014b484:
      local_4f0 = CONCAT44(local_4f0._4_4_,0x8c56);
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)&local_4f0 | 4))
      ;
      uStack_590 = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)&local_4f0 | 4),(Result *)&uStack_590);
      FUN_71000bce50(aiStack_5c0,(int *)&local_4f0);
      piVar20 = aiStack_5c0;
    }
    else {
LAB_7100149f84:
      lStack_90 = 0;
      bStack_88 = 0xfd;
      plVar11 = (long *)FUN_7100161fa0(DAT_71052add68);
      lVar12 = (**(code **)(*plVar11 + 0x48))(plVar11,(byte)*puVar22);
      if (lVar12 != 0) {
        FUN_710015fd60(&local_4f0);
        plVar11 = (long *)FUN_7100161fb0(DAT_71052add68);
        (**(code **)(*plVar11 + 0x28))(&uStack_590,plVar11,lVar12,&local_4f0);
        lVar12 = FUN_71001602c0((long)&local_4f0);
        if (lVar12 != 0) {
          FUN_71001ae940((int *)&uStack_590,lVar10,&lStack_90,lVar12);
          FUN_71000bcf30(local_a0,(int *)&uStack_590);
        }
        FUN_710015ff20(&local_4f0);
      }
      if (bStack_88 != (byte)*puVar22) {
        FUN_71001ae7e0((int *)&local_4f0,lVar10,&lStack_90,(byte)*puVar22);
        FUN_71000bcf30(local_a0,(int *)&local_4f0);
        if (bStack_88 != (byte)*puVar22) break;
      }
      uVar9 = FUN_71001476b0(lVar3);
      if ((uVar9 & 1) == 0) {
        if ((*(char *)(lVar3 + 0x15d) != '\0') && (*(char *)(lVar3 + 0x15c) == '\0')) {
          *(undefined1 *)(lVar3 + 0x15d) = 0;
          FUN_7100145700(lVar3,lStack_90,bStack_88,lStack_80);
          *(undefined1 *)(lVar3 + 0x15d) = 1;
          if (lStack_90 != *(long *)(lVar3 + 0xf8)) goto LAB_710014ad1c;
          goto LAB_710014ad28;
        }
        FUN_7100145700(lVar3,lStack_90,bStack_88,lStack_80);
        if (lStack_90 == *(long *)(lVar3 + 0xf8)) goto LAB_710014ad28;
LAB_710014ad1c:
        if (lStack_90 == *(long *)(lVar3 + 0x100)) goto LAB_710014ad28;
LAB_710014ae18:
        if (lStack_90 != *(long *)(lVar3 + 0xf0)) break;
      }
      else {
        uVar15 = FUN_7100147e00(lVar3,(uint)(byte)*puVar22);
        FUN_710014b7c0((int *)&local_4f0,uVar15,lStack_90);
        if (lStack_90 != *(long *)(lVar3 + 0xf8)) goto LAB_710014ad1c;
LAB_710014ad28:
        uVar16 = FUN_7100146ed0(lVar3);
        if ((uVar16 & 1) == 0) {
          uStack_590 = 0x8c56;
          pEVar21 = (ErrorResultVariant *)((ulong)&uStack_590 | 4);
          nn::err::ErrorResultVariant::ErrorResultVariant(pEVar21);
          local_4f0 = local_4f0 & 0xffffffff00000000;
          nn::err::ErrorResultVariant::operator=(pEVar21,(Result *)&local_4f0);
          FUN_71000bce50((int *)&local_4f0,(int *)&uStack_590);
          iVar8 = FUN_7100192f00(DAT_71052adfc0);
          if (iVar8 == 3) {
            uStack_590 = 0x8c78;
            nn::err::ErrorResultVariant::ErrorResultVariant(pEVar21);
            aiStack_b0[0] = 0;
            nn::err::ErrorResultVariant::operator=(pEVar21,(Result *)aiStack_b0);
            FUN_71000bcf30((int *)&local_4f0,(int *)&uStack_590);
            iVar8 = 3;
          }
          else {
            iVar8 = 5;
          }
          FUN_71000bce50(aiStack_5d0,(int *)&local_4f0);
          FUN_7100147360(lVar3,2,iVar8,aiStack_5d0);
          goto LAB_710014ae18;
        }
        if ((*(int *)(lVar3 + 0xd8) != 1) ||
           (lVar10 = FUN_71001939e0(DAT_71052adfc0), *(char *)(lVar10 + 100) != '\0'))
        goto LAB_710014ae18;
        uVar16 = FUN_7100150d50(*(long *)(lVar3 + 0xb8),*(long *)(lVar3 + 0x100),
                                (undefined4 *)&local_4f0);
        if ((uVar16 & 1) == 0) {
          iVar8 = 0;
          local_4f0 = local_4f0 & 0xffffffff00000000;
          if (lStack_90 != *(long *)(lVar3 + 0x100)) goto LAB_710014b268;
          goto LAB_710014ae18;
        }
        iVar8 = (int)local_4f0;
        if (lStack_90 == *(long *)(lVar3 + 0x100)) goto LAB_710014ae18;
LAB_710014b268:
        if ((iVar8 == 0) || (iVar8 == *(int *)(lVar3 + (ulong)*(byte *)(lVar3 + 0x162) * 4 + 0x180))
           ) goto LAB_710014ae18;
        lVar12 = *(long *)(lVar3 + 0xf8);
        lVar10 = FUN_71001939c0(DAT_71052adfc0);
        if (((*(char *)(lVar10 + 0x84) != '\0') &&
            ((lVar10 = FUN_71001939c0(DAT_71052adfc0), *(char *)(lVar10 + 0x84) == '\0' ||
             (lVar10 = FUN_71001939c0(DAT_71052adfc0), *(char *)(lVar10 + 0xc0) == '\0')))) ||
           (lVar10 = (**(code **)(**(long **)(lVar3 + (ulong)*(byte *)(lVar3 + 0x162) * 8 + 0x168) +
                                 0xf0))(), lVar12 == lVar10)) goto LAB_710014ae18;
        *(long *)(lVar3 + 0xf8) = lVar10;
        FUN_71001475e0(lVar3,2,lVar10);
        if (lStack_90 != *(long *)(lVar3 + 0xf0)) break;
      }
      local_4f0 = CONCAT44(local_4f0._4_4_,0x8c56);
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)&local_4f0 | 4))
      ;
      uStack_590 = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)&local_4f0 | 4),(Result *)&uStack_590);
      FUN_71000bce50(aiStack_5e0,(int *)&local_4f0);
      piVar20 = aiStack_5e0;
    }
    iVar19 = 5;
    iVar8 = 2;
    goto LAB_710014ae6c;
  case 2:
    uVar9 = FUN_71001476b0(lVar3);
    if ((((uVar9 & 1) == 0) && (uVar9 = FUN_71000b4990(*(long *)(lVar3 + 0x38)), (uVar9 & 1) == 0))
       && (5 < *(int *)(lVar3 + 0xd8) - 2U)) {
      iVar8 = *(int *)(lVar3 + 0xd4);
      if (iVar8 == 2) {
        FUN_71001ae940((int *)&local_4f0,lVar10,&lStack_90,lVar13);
        FUN_71000bcf30(local_a0,(int *)&local_4f0);
        if (local_a0[0] != 0) goto LAB_710014b1e0;
        *(long *)(lVar3 + 0xf8) = lStack_90;
        if (*(long *)(lVar3 + 0xf0) == lStack_90) {
          uVar16 = (**(code **)(**(long **)(lVar3 + (ulong)*(byte *)(lVar3 + 0x162) * 8 + 0x168) +
                               0xe0))();
          bVar4 = 0;
          if ((uVar16 & 1) == 0) goto LAB_710014b1e0;
        }
        else {
          bVar4 = 0;
        }
LAB_710014b6d8:
        FUN_71001475e0(lVar3,2,*(undefined8 *)(lVar3 + 0xf8));
        bVar1 = 0;
      }
      else {
        if (iVar8 == 4) {
          FUN_71001ae940((int *)&local_4f0,lVar10,&lStack_90,lVar13);
          FUN_71000bcf30(local_a0,(int *)&local_4f0);
          if (local_a0[0] != 0) goto LAB_710014b1e0;
          *(long *)(lVar3 + 0x100) = lStack_90;
          FUN_7100150d50(*(long *)(lVar3 + 0xb8),lStack_90,aiStack_b0);
          *(int *)(lVar3 + 0x1e0) = aiStack_b0[0];
          lVar10 = *(long *)(lVar3 + 0x100);
          if (lVar10 == *(long *)(lVar3 + 0xf0)) {
            lVar12 = (**(code **)(**(long **)(lVar3 + (ulong)(*(char *)(lVar3 + 0x162) == '\0') * 8
                                             + 0x168) + 0xf0))();
            if (lVar10 == lVar12) {
              lVar12 = *(long *)(lVar3 + 0x100);
              lVar10 = (**(code **)(**(long **)(lVar3 + (ulong)*(byte *)(lVar3 + 0x162) * 8 + 0x168)
                                   + 0xf0))();
              bVar5 = lVar12 == lVar10;
            }
            else {
              bVar5 = false;
            }
          }
          else {
            bVar5 = true;
          }
          if (*(int *)(lVar3 + 0x1e0) ==
              *(int *)(lVar3 + (ulong)*(byte *)(lVar3 + 0x162) * 4 + 0x180)) {
            lVar10 = *(long *)(lVar3 + 0xf8);
            if (lVar10 == lStack_90) goto LAB_710014b5a8;
            if (lVar10 == *(long *)(lVar3 + 0xf0)) {
              local_4f0 = CONCAT44(local_4f0._4_4_,0x8c76);
              nn::err::ErrorResultVariant::ErrorResultVariant
                        ((ErrorResultVariant *)((ulong)&local_4f0 | 4));
              uStack_590 = 0;
              nn::err::ErrorResultVariant::operator=
                        ((ErrorResultVariant *)((ulong)&local_4f0 | 4),(Result *)&uStack_590);
              FUN_71000bce50(aiStack_5f0,(int *)&local_4f0);
              FUN_7100147360(lVar3,2,9,aiStack_5f0);
              bVar6 = false;
            }
            else {
              FUN_7100161fc0((int *)&local_4f0,DAT_71052add68,(undefined1 *)&uStack_590,lVar10);
              FUN_71000bcf30(local_a0,(int *)&local_4f0);
              if (local_a0[0] == 0) {
                bVar6 = FUN_7100190a90(DAT_71052adfc0,(byte)uStack_590._0_1_);
                if (bVar6) {
                  FUN_71001940d0(param_1,uStack_590 & 0xff);
                }
              }
              *(long *)(lVar3 + 0xf8) = lStack_90;
              if (lStack_90 != *(long *)(lVar3 + 0xf0)) goto LAB_710014b6c8;
              plVar11 = *(long **)(lVar3 + 0x168 + (ulong)*(byte *)(lVar3 + 0x162) * 8);
              (**(code **)(*plVar11 + 0xd8))
                        (&local_4f0,plVar11,
                         *(undefined4 *)(lVar3 + (ulong)*(byte *)(lVar3 + 0x162) * 4 + 0x180));
              lVar12 = *(long *)(lVar3 + 0xf8);
              lVar10 = (**(code **)(**(long **)(lVar3 + 0x168 + (ulong)*(byte *)(lVar3 + 0x162) * 8)
                                   + 0xf0))();
              bVar6 = lVar12 == lVar10;
            }
          }
          else {
            lVar10 = FUN_7100193a50(DAT_71052adfc0);
            FUN_71001ae890((int *)&local_4f0,lVar10,&lStack_90,*(long *)(lVar3 + 0xf8));
            FUN_71000bcf30(local_a0,(int *)&local_4f0);
            if ((local_a0[0] == 0) ||
               (lVar12 = *(long *)(lVar3 + 0xf8),
               lVar10 = (**(code **)(**(long **)(lVar3 + (ulong)*(byte *)(lVar3 + 0x162) * 8 + 0x168
                                                ) + 0xf0))(), lVar12 == lVar10)) {
LAB_710014b5a8:
              bVar6 = false;
            }
            else {
              lVar10 = (**(code **)(**(long **)(lVar3 + (ulong)*(byte *)(lVar3 + 0x162) * 8 + 0x168)
                                   + 0xf0))();
              *(long *)(lVar3 + 0xf8) = lVar10;
              if (lVar10 == *(long *)(lVar3 + 0xf0)) {
                plVar11 = *(long **)(lVar3 + (ulong)*(byte *)(lVar3 + 0x162) * 8 + 0x168);
                (**(code **)(*plVar11 + 0xd8))
                          (&local_4f0,plVar11,
                           *(undefined4 *)(lVar3 + (ulong)*(byte *)(lVar3 + 0x162) * 4 + 0x180));
                bVar6 = true;
              }
              else {
LAB_710014b6c8:
                bVar6 = true;
              }
            }
          }
          if (!bVar5) {
            bVar4 = 0;
            if (bVar6) goto LAB_710014b6d8;
            goto LAB_710014b1e0;
          }
          FUN_71001475e0(lVar3,4,*(undefined8 *)(lVar3 + 0x100));
          bVar4 = 1;
          if (bVar6) goto LAB_710014b6d8;
        }
        else {
          if (iVar8 == 3) {
            FUN_71001ae7e0((int *)&local_4f0,lVar10,&lStack_90,(byte)*puVar22);
            FUN_71000bcf30(local_a0,(int *)&local_4f0);
            if (((local_a0[0] == 0) && (plVar11 = *(long **)(lVar3 + 0x70), plVar11 != (long *)0x0))
               && (((int)plVar11[0x12] != 0 &&
                   (((**(code **)(*plVar11 + 0x98))(plVar11,lStack_90),
                    *(long *)(lVar3 + 0xf0) == lStack_90 &&
                    (uVar16 = (**(code **)(**(long **)(lVar3 + (ulong)*(byte *)(lVar3 + 0x162) * 8 +
                                                      0x168) + 0xe0))(), (uVar16 & 1) == 0)))))) {
              plVar11 = *(long **)(lVar3 + (ulong)*(byte *)(lVar3 + 0x162) * 8 + 0x168);
              (**(code **)(*plVar11 + 0xd8))
                        (&local_4f0,plVar11,
                         *(undefined4 *)(lVar3 + (ulong)*(byte *)(lVar3 + 0x162) * 4 + 0x180));
            }
            break;
          }
LAB_710014b1e0:
          bVar4 = 0;
        }
        bVar1 = 1;
      }
      if ((((DAT_71052adfc0 != 0) && (lVar10 = FUN_71001939c0(DAT_71052adfc0), lVar10 != 0)) &&
          (lVar10 = FUN_71001939c0(DAT_71052adfc0), *(char *)(lVar10 + 0x84) != '\0')) &&
         (((bool)(*(int *)(lVar3 + 0xd4) == 2 & (bVar1 ^ 1)) ||
          ((*(int *)(lVar3 + 0xd4) == 4 && (!(bool)(bVar4 ^ 1))))))) {
        *(undefined1 *)(lVar3 + 0x15d) = 0;
        FUN_7100150b70(*(long **)(lVar3 + 0xb8));
        FUN_71001509c0(*(long *)(lVar3 + 0xb8));
      }
    }
    break;
  case 3:
    if (*(int *)(lVar3 + 0xd4) == 3) {
      lVar10 = *(long *)(lVar3 + 0x70);
      if (lVar10 != 0) {
        local_4f0 = CONCAT44(local_4f0._4_4_,0x6c59);
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)&local_4f0 | 4));
        uStack_590 = 0;
        nn::err::ErrorResultVariant::operator=
                  ((ErrorResultVariant *)((ulong)&local_4f0 | 4),(Result *)&uStack_590);
        *(undefined1 *)(lVar10 + 0xfb) = 1;
        FUN_71000bcf30((int *)(lVar10 + 0x100),(int *)&local_4f0);
        *(undefined1 *)(lVar3 + 0x15d) = 0;
        break;
      }
    }
    else {
      uVar9 = FUN_71000b4990(*(long *)(lVar3 + 0x38));
      if ((uVar9 & 1) == 0) {
        local_4f0 = CONCAT44(local_4f0._4_4_,0x8c76);
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)&local_4f0 | 4));
        uStack_590 = 0;
        nn::err::ErrorResultVariant::operator=
                  ((ErrorResultVariant *)((ulong)&local_4f0 | 4),(Result *)&uStack_590);
        FUN_71000bce50(aiStack_600,(int *)&local_4f0);
        FUN_7100147360(lVar3,2,7,aiStack_600);
        *(undefined8 *)(lVar3 + 0xf8) = 0;
        *(undefined8 *)(lVar3 + 0x100) = 0;
        FUN_71001475e0(lVar3,3,0);
      }
    }
    *(undefined1 *)(lVar3 + 0x15d) = 0;
    break;
  case 4:
    *(undefined1 *)(lVar3 + 0x15d) = 1;
    break;
  case 0x12:
    uVar16 = FUN_7100147a50(lVar3);
    if ((uVar16 & 1) == 0) {
      if (*(int *)(lVar3 + 0xd4) == 3) break;
      iVar8 = FUN_7100192f00(DAT_71052adfc0);
      if (iVar8 == 2) {
        local_4f0 = (ulong)local_4f0._4_4_ << 0x20;
        nn::err::ErrorResultVariant::ErrorResultVariant
                  ((ErrorResultVariant *)((ulong)&local_4f0 | 4));
        uStack_590 = 0;
        nn::err::ErrorResultVariant::operator=
                  ((ErrorResultVariant *)((ulong)&local_4f0 | 4),(Result *)&uStack_590);
        FUN_71000bce50(aiStack_620,(int *)&local_4f0);
        piVar20 = aiStack_620;
        goto LAB_710014a20c;
      }
      local_4f0 = CONCAT44(local_4f0._4_4_,0x8c56);
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)&local_4f0 | 4))
      ;
      uStack_590 = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)&local_4f0 | 4),(Result *)&uStack_590);
      FUN_71000bce50(aiStack_630,(int *)&local_4f0);
      iVar8 = 2;
      piVar20 = aiStack_630;
      iVar19 = 0;
    }
    else {
      local_4f0 = local_4f0 & 0xffffffff00000000;
      nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)&local_4f0 | 4))
      ;
      uStack_590 = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)&local_4f0 | 4),(Result *)&uStack_590);
      FUN_71000bce50(aiStack_610,(int *)&local_4f0);
      piVar20 = aiStack_610;
LAB_710014a20c:
      iVar19 = 2;
      iVar8 = 0;
    }
LAB_710014ae6c:
    FUN_7100147360(lVar3,iVar8,iVar19,piVar20);
    break;
  case 0x15:
    bVar4 = FUN_7100193110(DAT_71052adfc0);
    lVar10 = (**(code **)(**(long **)(lVar3 + (ulong)*(byte *)(lVar3 + 0x162) * 8 + 0x168) + 0xf0))
                       ();
    if (lVar13 == lVar10 && bVar4 != (byte)*puVar22) {
      plVar11 = (long *)FUN_7100161fa0(DAT_71052add68);
      lVar10 = (**(code **)(*plVar11 + 0x48))(plVar11,bVar4);
      if (lVar10 != 0) {
        if (*(int *)(lVar10 + 0x48) == 5) {
          *(undefined1 *)(lVar10 + 0x90) = 1;
        }
        else {
          *(undefined4 *)(lVar10 + 0x48) = 6;
        }
      }
    }
    break;
  case 0x17:
    uVar9 = param_2[2];
    uVar2 = (ushort)(uVar9 >> 8) & 0xff;
    if ((*(long *)(lVar3 + 0x70) == 0) ||
       (uVar7 = FUN_71000b4990(*(long *)(lVar3 + 0x70)), (uVar7 & 1) == 0)) {
      FUN_71001492c0(lVar3,uVar2);
      lVar10 = FUN_7100193a50(DAT_71052adfc0);
      bVar4 = *(byte *)(DAT_71052adb38 + 0x162);
LAB_710014a6f0:
      FUN_71001aea30(lVar10,(uint)*(ushort *)(DAT_71052adb38 + (ulong)bVar4 * 2 + 0x15e));
      bVar4 = *(byte *)((long)param_2 + 10);
    }
    else {
      if (*(short *)(lVar3 + (ulong)*(byte *)(lVar3 + 0x162) * 2 + 0x15e) == 0) {
        FUN_71001492c0(lVar3,uVar2);
      }
      FUN_71001492f0(lVar3,(ushort)uVar9 & 0xff);
      iVar8 = *(int *)(*(long *)(lVar3 + 0x70) + 0x90);
      lVar10 = FUN_7100193a50(DAT_71052adfc0);
      bVar4 = *(byte *)(DAT_71052adb38 + 0x162);
      if (2 < iVar8 - 6U) goto LAB_710014a6f0;
      FUN_71001aea30(lVar10,(uint)*(ushort *)(DAT_71052adb38 + (ulong)(bVar4 == 0) * 2 + 0x15e));
      bVar4 = *(byte *)((long)param_2 + 10);
    }
    if ((bVar4 != 0) && ((ushort)bVar4 != *(ushort *)(DAT_71052add68 + 0x70))) {
      FUN_7100147a60(lVar3);
    }
    break;
  case 0x18:
    if (*(int *)(lVar3 + 0xd4) == 2) {
      lVar10 = *(long *)(lVar3 + 0x1a0);
      if (lVar10 == lVar3 + 0x198) {
        uVar9 = 0;
      }
      else {
        uVar9 = 0;
        do {
          plVar11 = (long *)FUN_7100161fa0(DAT_71052add68);
          lVar12 = (**(code **)(*plVar11 + 0x38))(plVar11,*(undefined8 *)(lVar10 + 0x10));
          if (lVar12 != 0) {
            lVar13 = FUN_7100190ca0(DAT_71052adfc0);
            FUN_7100189820((int *)&local_4f0,lVar13,lVar12,(undefined1 *)&uStack_590);
            uVar7 = uStack_590 & 0xff;
            if ((int)local_4f0 != 0) {
              uVar7 = 0;
            }
            uVar9 = uVar7 + uVar9;
          }
          lVar10 = *(long *)(lVar10 + 8);
        } while (lVar10 != lVar3 + 0x198);
      }
      if ((uint)*(ushort *)(lVar3 + (ulong)*(byte *)(lVar3 + 0x162) * 2 + 0x15e) <
          (uint)(ushort)param_2[2] + (uVar9 & 0xffff)) {
        FUN_71001939b0(DAT_71052adfc0,1);
      }
    }
    break;
  case 0x19:
    iVar8 = FUN_7100146ba0(lVar3);
    if (iVar8 == 1) {
LAB_710014a39c:
      iVar8 = *(int *)(lVar3 + (ulong)*(byte *)(lVar3 + 0x162) * 4 + 0x180);
    }
    else {
      iVar8 = FUN_7100146ba0(lVar3);
      if (iVar8 != 3) {
        iVar8 = FUN_7100146ba0(lVar3);
        if (iVar8 != 2) break;
        iVar8 = FUN_7100148f60(lVar3);
        if (((iVar8 != 6) && (iVar8 = FUN_7100148f60(lVar3), iVar8 != 7)) &&
           (iVar8 = FUN_7100148f60(lVar3), iVar8 != 8)) goto LAB_710014a39c;
      }
      iVar8 = *(int *)(lVar3 + (ulong)(*(char *)(lVar3 + 0x162) == '\0') * 4 + 0x180);
    }
    if ((iVar8 != 0) &&
       (uVar16 = (**(code **)(**(long **)(lVar3 + 8) + 0x60))
                           (*(long **)(lVar3 + 8),iVar8,*(undefined8 *)(param_2 + 2)),
       (uVar16 & 1) == 0)) {
      FUN_7100193780(DAT_71052adfc0,1);
    }
    break;
  case 0x1a:
    iVar8 = FUN_7100146ba0(lVar3);
    if ((((iVar8 == 1) && (uVar16 = FUN_7100146b50(lVar3), (uVar16 & 1) != 0)) ||
        ((iVar8 = FUN_7100146ba0(lVar3), iVar8 == 3 &&
         (uVar16 = FUN_7100146e20(lVar3), (uVar16 & 1) != 0)))) &&
       (bVar5 = FUN_7100193760(DAT_71052adfc0,(byte)*puVar22), !bVar5)) {
      uVar7 = param_2[2];
      uVar9 = FUN_7100193570(DAT_71052adfc0);
      uVar9 = uVar9 & (uVar7 ^ 0xffffffff);
      bVar4 = 0xfd;
      if ((uVar9 & 1) != 0) {
        bVar4 = 0;
      }
      if ((uVar9 & 2) != 0) {
        bVar4 = 1;
      }
      if ((uVar9 & 4) != 0) {
        bVar4 = 2;
      }
      if ((uVar9 & 8) != 0) {
        bVar4 = 3;
      }
      if ((uVar9 & 0x10) != 0) {
        bVar4 = 4;
      }
      if ((uVar9 & 0x20) != 0) {
        bVar4 = 5;
      }
      if ((uVar9 & 0x40) != 0) {
        bVar4 = 6;
      }
      if ((uVar9 & 0x80) != 0) {
        bVar4 = 7;
      }
      if ((uVar9 & 0x100) != 0) {
        bVar4 = 8;
      }
      if ((uVar9 & 0x200) != 0) {
        bVar4 = 9;
      }
      if ((uVar9 & 0x400) != 0) {
        bVar4 = 10;
      }
      if ((uVar9 & 0x800) != 0) {
        bVar4 = 0xb;
      }
      if ((uVar9 & 0x1000) != 0) {
        bVar4 = 0xc;
      }
      if ((uVar9 & 0x2000) != 0) {
        bVar4 = 0xd;
      }
      if ((uVar9 & 0x4000) != 0) {
        bVar4 = 0xe;
      }
      if ((uVar9 & 0x8000) != 0) {
        bVar4 = 0xf;
      }
      if ((uVar9 & 0x10000) != 0) {
        bVar4 = 0x10;
      }
      if ((uVar9 & 0x20000) != 0) {
        bVar4 = 0x11;
      }
      if ((uVar9 & 0x40000) != 0) {
        bVar4 = 0x12;
      }
      if ((uVar9 & 0x80000) != 0) {
        bVar4 = 0x13;
      }
      if ((uVar9 & 0x100000) != 0) {
        bVar4 = 0x14;
      }
      if ((uVar9 & 0x200000) != 0) {
        bVar4 = 0x15;
      }
      if ((uVar9 & 0x400000) != 0) {
        bVar4 = 0x16;
      }
      if ((uVar9 & 0x800000) != 0) {
        bVar4 = 0x17;
      }
      if ((uVar9 & 0x1000000) != 0) {
        bVar4 = 0x18;
      }
      if ((uVar9 & 0x2000000) != 0) {
        bVar4 = 0x19;
      }
      if ((uVar9 & 0x4000000) != 0) {
        bVar4 = 0x1a;
      }
      if ((uVar9 & 0x8000000) != 0) {
        bVar4 = 0x1b;
      }
      if ((uVar9 & 0x10000000) != 0) {
        bVar4 = 0x1c;
      }
      if ((uVar9 & 0x20000000) != 0) {
        bVar4 = 0x1d;
      }
      if ((uVar9 & 0x40000000) != 0) {
        bVar4 = 0x1e;
      }
      if ((bVar4 != 0xfd) &&
         ((uVar9 & 1) + ((uVar9 & 2) >> 1) + ((uVar9 & 4) >> 2) + ((uVar9 & 8) >> 3) +
          ((uVar9 & 0x10) >> 4) + ((uVar9 & 0x20) >> 5) + ((uVar9 & 0x40) >> 6) +
          ((uVar9 & 0x80) >> 7) + ((uVar9 & 0x100) >> 8) + ((uVar9 & 0x200) >> 9) +
          ((uVar9 & 0x400) >> 10) + ((uVar9 & 0x800) >> 0xb) + ((uVar9 & 0x1000) >> 0xc) +
          ((uVar9 & 0x2000) >> 0xd) + ((uVar9 & 0x4000) >> 0xe) + ((uVar9 & 0x8000) >> 0xf) +
          ((uVar9 & 0x10000) >> 0x10) + ((uVar9 & 0x20000) >> 0x11) + ((uVar9 & 0x40000) >> 0x12) +
          ((uVar9 & 0x80000) >> 0x13) + ((uVar9 & 0x100000) >> 0x14) + ((uVar9 & 0x200000) >> 0x15)
          + ((uVar9 & 0x400000) >> 0x16) + ((uVar9 & 0x800000) >> 0x17) +
          ((uVar9 & 0x1000000) >> 0x18) + ((uVar9 & 0x2000000) >> 0x19) +
          ((uVar9 & 0x4000000) >> 0x1a) + ((uVar9 & 0x8000000) >> 0x1b) +
          ((uVar9 & 0x10000000) >> 0x1c) + ((uVar9 & 0x20000000) >> 0x1d) +
          ((uVar9 & 0x40000000) >> 0x1e) == 1)) {
        lVar12 = FUN_71001939d0(DAT_71052adfc0);
        FUN_710018e0f0((int *)&local_4f0,lVar12,bVar4,3);
      }
      FUN_71001ae7e0((int *)&local_4f0,lVar10,&lStack_90,(byte)*puVar22);
      FUN_71000bcf30(local_a0,(int *)&local_4f0);
      if (local_a0[0] == 0) {
        FUN_71001475e0(lVar3,0x18,lStack_90);
      }
    }
  }
override_jmp_7100149d84_case_5:
  local_4f0 = 0x800000000000;
  local_4e8 = 0;
  FUN_71001aea50();
  local_4f0 = 0x800000000000;
  local_4e8 = 0;
  FUN_7100151070();
  if ((DAT_7104f4faa9 != '\0') && (*param_2 == 2)) {
    FUN_7100147f30(lVar3,1);
  }
  if ((*(long *)(lVar3 + 0x30) == 0) ||
     (uVar9 = FUN_71000b4990(*(long *)(lVar3 + 0x30)), (uVar9 & 1) == 0)) {
LAB_710014aefc:
    lVar10 = *(long *)(lVar3 + 0x20);
  }
  else {
    uVar9 = *param_2;
    if (uVar9 == 0x16) {
      *(undefined1 *)(*(long *)(lVar3 + 0x30) + 0x11e) = 1;
      lVar10 = *(long *)(lVar3 + 0x20);
    }
    else {
      if (uVar9 != 0x14) {
        if (uVar9 == 0x13) {
          *(undefined1 *)(*(long *)(lVar3 + 0x30) + 0x11a) = 1;
        }
        goto LAB_710014aefc;
      }
      *(undefined1 *)(*(long *)(lVar3 + 0x30) + 0x11b) = 1;
      lVar10 = *(long *)(lVar3 + 0x20);
    }
  }
  if ((lVar10 != 0) && (uVar9 = FUN_71000b4990(lVar10), (uVar9 & 1) != 0)) {
    uVar9 = *param_2;
    if (uVar9 == 0x16) {
      *(undefined1 *)(*(long *)(lVar3 + 0x20) + 0x81) = 1;
    }
    else {
      if (uVar9 == 0x14) {
        *(undefined1 *)(*(long *)(lVar3 + 0x20) + 0x7e) = 1;
        lVar10 = *(long *)(lVar3 + 0x70);
        goto joined_r0x00710014afec;
      }
      if (uVar9 == 0x13) {
        *(undefined1 *)(*(long *)(lVar3 + 0x20) + 0x7d) = 1;
        lVar10 = *(long *)(lVar3 + 0x70);
        goto joined_r0x00710014afec;
      }
    }
  }
  lVar10 = *(long *)(lVar3 + 0x70);
joined_r0x00710014afec:
  if ((lVar10 != 0) && (uVar9 = FUN_71000b4990(lVar10), (uVar9 & 1) != 0)) {
    if (*param_2 == 0x14) {
      *(undefined1 *)(*(long *)(lVar3 + 0x70) + 0x111) = 1;
    }
    else if (*param_2 == 0x13) {
      *(undefined1 *)(*(long *)(lVar3 + 0x70) + 0x110) = 1;
    }
  }
  return;
}

