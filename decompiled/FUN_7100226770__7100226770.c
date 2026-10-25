// addr:      7100226770
// offset:    0x226770
// name:      FUN_7100226770
// mangled:   
// signature: ulong __cdecl FUN_7100226770(byte * param_1)


/* WARNING: Removing unreachable block (ram,0x007100227014) */
/* WARNING: Removing unreachable block (ram,0x007100226bf0) */

ulong FUN_7100226770(byte *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  char *pcVar13;
  undefined8 *puVar14;
  char cVar15;
  byte *pbVar16;
  void *pvVar17;
  ulong uVar18;
  void *__dest;
  ulong unaff_x21;
  undefined8 *puVar19;
  ushort local_154 [2];
  byte local_150;
  undefined1 local_14f;
  undefined8 *local_148;
  long lStack_140;
  ushort local_138;
  byte local_130;
  char local_12f;
  byte local_12e;
  undefined8 *local_128;
  char local_120;
  void *local_118;
  undefined8 *local_110;
  undefined2 local_104 [2];
  undefined2 local_100 [4];
  undefined8 *local_f8;
  long lStack_f0;
  undefined8 local_e8;
  undefined8 *local_e0;
  undefined8 uStack_d8;
  
  pbVar1 = param_1 + 0x11;
  __dest = (void *)((ulong)&local_e8 | 2);
  pbVar2 = param_1 + 0x40;
LAB_71002267bc:
  do {
    uVar7 = (uint)unaff_x21;
    if ((param_1[0x20] == 0) ||
       ((*(code **)(param_1 + 0x10f8) != (code *)0x0 &&
        (iVar5 = (**(code **)(param_1 + 0x10f8))(param_1,*(undefined8 *)(param_1 + 0x1110)),
        iVar5 == 0)))) goto LAB_7100227034;
    memset(&local_130,0,0x28);
    lVar8 = FUN_7100227bf0(*(byte **)(param_1 + 0x18),&local_130);
    pvVar17 = local_e8;
    if (lVar8 < 0) {
      if (lVar8 == -100) {
        if (*(int *)(param_1 + 0x70) == -0x191) {
          return 0;
        }
        if (*(int *)(param_1 + 0x70) == 0) {
          return 0;
        }
      }
      param_1[0x20] = 0;
      if ((param_1[0x21] != 0) && ((*pbVar1 >> 1 & 1) == 0)) {
        local_150 = 8;
        local_148 = &local_e8;
        lStack_140 = 0;
        uVar12 = FUN_71002262a0((long)param_1,&local_150);
        if ((int)uVar12 == 0) {
          *pbVar1 = *pbVar1 | 2;
        }
        else if ((int)uVar12 != -0x12e) {
          return uVar12 & 0xffffffff;
        }
      }
      return 0xfffffe70;
    }
    if (local_12f == '\0') {
      if (param_1[0x10] == 0) {
        if (local_120 == '\0') goto LAB_7100226880;
        goto LAB_7100226804;
      }
      if (local_120 == '\0') goto LAB_7100226804;
LAB_7100226880:
      pbVar16 = *(byte **)(param_1 + 0x58);
      if (pbVar16[2] == 0xff) {
        if ((local_12e < 0xb) && ((1 << (ulong)(local_12e & 0x1f) & 0x706U) != 0)) {
          *pbVar16 = local_130;
          pbVar16[1] = 0;
          pbVar16[2] = local_12e;
          pbVar16[0x10] = 0;
          pbVar16[0x11] = 0;
          pbVar16[0x12] = 0;
          pbVar16[0x13] = 0;
          pbVar16[0x14] = 0;
          pbVar16[0x15] = 0;
          pbVar16[0x16] = 0;
          pbVar16[0x17] = 0;
          goto LAB_7100226908;
        }
        goto LAB_7100226804;
      }
      if ((*(long *)(param_1 + 0x60) != 0) || (*(long *)(param_1 + 0x68) != 0)) {
LAB_71002269f4:
        lVar8 = *(long *)(param_1 + 0x58);
        cVar15 = *(char *)(lVar8 + 2);
        if (((cVar15 == '\b') || (cVar15 == '\x01')) &&
           (puVar19 = (undefined8 *)((ulong)(cVar15 == '\b') << 1), puVar14 = local_110,
           puVar19 < local_110)) {
LAB_7100226a30:
          bVar3 = (&DAT_710449e102)
                  [((byte)(&DAT_710449e102)[*(byte *)((long)local_118 + (long)puVar19)] | 0x100) +
                   *(int *)(lVar8 + 4)];
          *(uint *)(lVar8 + 4) = (uint)bVar3;
          if (bVar3 != 0xc) {
LAB_7100226af8:
            puVar19 = (undefined8 *)((long)puVar19 + 1);
            if (puVar14 <= puVar19) goto LAB_7100226ddc;
            lVar8 = *(long *)(param_1 + 0x58);
            goto LAB_7100226a30;
          }
          param_1[0x20] = 0;
          if ((param_1[0x21] == 0) || ((*pbVar1 >> 1 & 1) != 0)) {
LAB_7100226adc:
            uVar7 = 0;
          }
          else {
            uVar7 = FUN_71002276f0(0x3ef);
            local_100[0] = (undefined2)uVar7;
            memcpy(&local_e8,local_100,2);
            memcpy(__dest,(void *)0x0,0);
            local_150 = 8;
            local_148 = &local_e8;
            lStack_140 = 2;
            uVar9 = FUN_71002262a0((long)param_1,&local_150);
            uVar7 = (uint)uVar9;
            if (uVar7 == 0) {
              *pbVar1 = *pbVar1 | 2;
              goto LAB_7100226adc;
            }
            if (uVar7 == 0xfffffed2) goto LAB_7100226adc;
          }
          iVar5 = 4;
          uVar6 = (uint)unaff_x21;
          if (uVar7 != 0) {
            iVar5 = 1;
            uVar6 = uVar7;
          }
          unaff_x21 = (ulong)uVar6;
          puVar14 = local_110;
          if (iVar5 == 0) goto LAB_7100226af8;
          if (iVar5 != 4) goto LAB_7100226dcc;
LAB_7100226ddc:
          iVar5 = *(int *)(*(long *)(param_1 + 0x58) + 4);
        }
        else {
          iVar5 = *(int *)(lVar8 + 4);
        }
        if (iVar5 == 0xc) goto LAB_7100227034;
        uVar7 = (uint)unaff_x21;
        if (*(code **)(param_1 + 0x10e0) != (code *)0x0) {
          local_e8 = local_118;
          local_e0 = local_110;
          (**(code **)(param_1 + 0x10e0))(param_1,&local_e8,*(undefined8 *)(param_1 + 0x1110));
        }
        if (local_110 == (undefined8 *)0x0) {
          if (*(long *)(param_1 + 0x68) != *(long *)(param_1 + 0x60)) goto LAB_71002267bc;
        }
        else {
          if (((*param_1 & 1) == 0) || ((local_12e >> 3 & 1) != 0)) {
            plVar10 = (long *)FUN_7100228300(*(long *)(*(long *)(param_1 + 0x58) + 8));
            memcpy((void *)(*plVar10 + *(long *)(param_1 + 0x68)),local_118,(size_t)local_110);
          }
          lVar8 = *(long *)(param_1 + 0x68);
          *(long *)(param_1 + 0x68) = lVar8 + (long)local_110;
          if (lVar8 + (long)local_110 != *(long *)(param_1 + 0x60)) goto LAB_71002267bc;
        }
        pcVar13 = *(char **)(param_1 + 0x58);
        cVar15 = *pcVar13;
        if ((cVar15 != '\0') &&
           (((pcVar13[2] == '\b' || (pcVar13[2] == '\x01')) && (*(int *)(pcVar13 + 4) != 0)))) {
          param_1[0x20] = 0;
          if ((param_1[0x21] == 0) || ((*pbVar1 >> 1 & 1) != 0)) goto LAB_7100226dbc;
          uVar6 = 0x3ef;
          goto LAB_710022681c;
        }
        if (*(code **)(param_1 + 0x10e8) != (code *)0x0) {
          (**(code **)(param_1 + 0x10e8))(param_1,*(undefined8 *)(param_1 + 0x1110));
          pcVar13 = *(char **)(param_1 + 0x58);
          cVar15 = *pcVar13;
        }
        if (cVar15 == '\0') {
LAB_7100227008:
          param_1[0x60] = 0;
          param_1[0x61] = 0;
          param_1[0x62] = 0;
          param_1[99] = 0;
          param_1[100] = 0;
          param_1[0x65] = 0;
          param_1[0x66] = 0;
          param_1[0x67] = 0;
          param_1[0x68] = 0;
          param_1[0x69] = 0;
          param_1[0x6a] = 0;
          param_1[0x6b] = 0;
          param_1[0x6c] = 0;
          param_1[0x6d] = 0;
          param_1[0x6e] = 0;
          param_1[0x6f] = 0;
        }
        else {
          if ((*(long *)(param_1 + 0x10f0) != 0) || ((pcVar13[2] & 0xfeU) == 8)) {
            local_154[0] = 0;
            if (((*param_1 & 1) != 0) && ((local_12e >> 3 & 1) == 0)) {
              puVar19 = (undefined8 *)0x0;
              lVar8 = 0;
              cVar15 = pcVar13[2];
              if (cVar15 != '\t') goto LAB_7100226cc8;
LAB_7100226c58:
              local_e8 = (void *)CONCAT71(local_e8._1_7_,10);
              uStack_d8 = *(undefined8 *)(pcVar13 + 0x10);
              local_e0 = puVar19;
              uVar12 = FUN_71002262a0((long)param_1,(byte *)&local_e8);
              if (((int)uVar12 == 0) || ((int)uVar12 == -0x12e)) goto LAB_7100226fa8;
              param_1[0x20] = 0;
              uVar12 = uVar12 & 0xffffffff;
              goto LAB_7100226f7c;
            }
            if (*(size_t *)(pcVar13 + 0x10) == 0) {
              puVar19 = (undefined8 *)0x0;
LAB_7100226e08:
              pcVar13 = *(char **)(param_1 + 0x58);
              lVar8 = *(long *)(pcVar13 + 0x10);
joined_r0x007100226e10:
              if ((puVar19 == (undefined8 *)0x0) && (bVar4 = lVar8 != 0, lVar8 = 0, bVar4)) {
                iVar5 = 1;
                unaff_x21 = 0xfffffe0c;
                param_1[0x20] = 0;
                goto LAB_710022702c;
              }
              cVar15 = pcVar13[2];
            }
            else {
              plVar10 = *(long **)(pcVar13 + 8);
              puVar19 = (undefined8 *)FUN_7100228110(*(size_t *)(pcVar13 + 0x10));
              if (puVar19 == (undefined8 *)0x0) goto LAB_7100226e08;
              bVar4 = FUN_7100228310(plVar10);
              if (!bVar4) {
                lVar8 = 0;
                do {
                  puVar14 = (undefined8 *)FUN_71002282f0(plVar10);
                  memcpy((void *)((long)puVar19 + lVar8),(void *)*puVar14,puVar14[1]);
                  lVar8 = puVar14[1] + lVar8;
                  if (puVar14 != (undefined8 *)0x0) {
                    FUN_7100228130((void *)*puVar14);
                    FUN_7100228130(puVar14);
                  }
                  FUN_71002282c0(plVar10);
                  bVar4 = FUN_7100228310(plVar10);
                } while (!bVar4);
                pcVar13 = *(char **)(param_1 + 0x58);
                lVar8 = *(long *)(pcVar13 + 0x10);
                goto joined_r0x007100226e10;
              }
              pcVar13 = *(char **)(param_1 + 0x58);
              lVar8 = *(long *)(pcVar13 + 0x10);
              cVar15 = pcVar13[2];
            }
            if (cVar15 == '\t') goto LAB_7100226c58;
LAB_7100226cc8:
            if (cVar15 == '\b') {
              if (1 < *(ulong *)(pcVar13 + 0x10)) {
                memcpy(local_154,puVar19,2);
                uVar6 = FUN_71002276f0((uint)local_154[0]);
                local_154[0] = (ushort)uVar6;
                if (((uVar6 - 3000 & 0xffff) < 2000) ||
                   ((uVar6 & 0xffff) != 0x3ee &&
                    ((uVar6 & 0xffff | 1) != 0x3ed && (uVar6 - 1000 & 0xffff) < 0xc))) {
                  pvVar17 = (void *)((long)puVar19 + 2);
                  uVar18 = *(long *)(*(long *)(param_1 + 0x58) + 0x10) - 2;
                  goto LAB_7100226ed4;
                }
                FUN_7100228130(puVar19);
                param_1[0x20] = 0;
                if ((param_1[0x21] == 0) || ((*pbVar1 >> 1 & 1) != 0)) goto LAB_7100226dbc;
                uVar6 = FUN_71002276f0(0x3ea);
                local_104[0] = (undefined2)uVar6;
                memcpy(&local_e8,local_104,2);
                memcpy(__dest,(void *)0x0,0);
                local_100[0] = CONCAT11(local_100[0]._1_1_,8);
                local_f8 = &local_e8;
                lStack_f0 = 2;
                uVar9 = FUN_71002262a0((long)param_1,(byte *)local_100);
                uVar6 = (uint)uVar9;
                goto joined_r0x007100226860;
              }
              uVar6 = (uint)local_154[0];
              pvVar17 = (void *)0x0;
              uVar18 = 0;
LAB_7100226ed4:
              bVar3 = param_1[0x11];
              param_1[0x11] = bVar3 | 1;
              uVar7 = 0x3ed;
              if ((uVar6 & 0xffff) != 0) {
                uVar7 = uVar6;
              }
              *(short *)(param_1 + 0x12) = (short)uVar7;
              param_1[0x20] = 0;
              if (((bVar3 >> 1 & 1) == 0) && (param_1[0x21] != 0)) {
                uVar12 = 0xfffffed4;
                if (uVar18 < 0x7c) {
                  if ((uVar6 & 0xffff) == 0) {
                    lStack_f0 = 0;
                  }
                  else {
                    uVar7 = FUN_71002276f0(uVar6);
                    local_104[0] = (undefined2)uVar7;
                    memcpy(&local_e8,local_104,2);
                    memcpy(__dest,pvVar17,uVar18);
                    lStack_f0 = uVar18 + 2;
                  }
                  local_100[0] = CONCAT11(local_100[0]._1_1_,8);
                  local_f8 = &local_e8;
                  uVar18 = FUN_71002262a0((long)param_1,(byte *)local_100);
                  if ((int)uVar18 == 0) {
                    *pbVar1 = *pbVar1 | 2;
                  }
                  else {
                    uVar12 = uVar18 & 0xffffffff;
                    if ((int)uVar18 != -0x12e) goto LAB_7100226f7c;
                  }
                  goto LAB_7100226fa8;
                }
LAB_7100226f7c:
                unaff_x21 = uVar12;
                FUN_7100228130(puVar19);
                iVar5 = 1;
                goto LAB_710022702c;
              }
            }
LAB_7100226fa8:
            if (*(code **)(param_1 + 0x10f0) != (code *)0x0) {
              local_150 = *(byte *)(*(long *)(param_1 + 0x58) + 1);
              local_14f = *(undefined1 *)(*(long *)(param_1 + 0x58) + 2);
              local_138 = local_154[0];
              param_1[0x70] = 0;
              param_1[0x71] = 0;
              param_1[0x72] = 0;
              param_1[0x73] = 0;
              local_148 = puVar19;
              lStack_140 = lVar8;
              (**(code **)(param_1 + 0x10f0))(param_1,&local_150,*(undefined8 *)(param_1 + 0x1110));
            }
            FUN_7100228130(puVar19);
            pcVar13 = *(char **)(param_1 + 0x58);
          }
          FUN_7100227100((long)pcVar13);
          if (*(byte **)(param_1 + 0x58) != pbVar2) goto LAB_7100227008;
          *(byte **)(param_1 + 0x58) = param_1 + 0x28;
          param_1[0x60] = 0;
          param_1[0x61] = 0;
          param_1[0x62] = 0;
          param_1[99] = 0;
          param_1[100] = 0;
          param_1[0x65] = 0;
          param_1[0x66] = 0;
          param_1[0x67] = 0;
          param_1[0x68] = 0;
          param_1[0x69] = 0;
          param_1[0x6a] = 0;
          param_1[0x6b] = 0;
          param_1[0x6c] = 0;
          param_1[0x6d] = 0;
          param_1[0x6e] = 0;
          param_1[0x6f] = 0;
        }
        goto LAB_71002267bc;
      }
      if (2 < local_12e - 8) {
        if (local_12e == 0) {
          *pbVar16 = local_130;
          goto LAB_7100226908;
        }
        bVar3 = param_1[0x21];
        param_1[0x20] = 0;
        goto joined_r0x007100226e40;
      }
      param_1[0x50] = 0;
      param_1[0x51] = 0;
      param_1[0x52] = 0;
      param_1[0x53] = 0;
      param_1[0x54] = 0;
      param_1[0x55] = 0;
      param_1[0x56] = 0;
      param_1[0x57] = 0;
      *(byte **)(param_1 + 0x58) = pbVar2;
      param_1[0x41] = 0;
      param_1[0x42] = local_12e;
      param_1[0x40] = local_130;
      pbVar16 = pbVar2;
LAB_7100226908:
      if ((ulong)((long)local_128 + *(long *)(pbVar16 + 0x10)) <= *(ulong *)(param_1 + 8)) {
        *(undefined8 **)(param_1 + 0x60) = local_128;
        if (*(code **)(param_1 + 0x10d8) != (code *)0x0) {
          local_e8._3_5_ = SUB85(pvVar17,3);
          local_e8._0_3_ = CONCAT12(local_12e,(ushort)local_130);
          local_e0 = local_128;
          (**(code **)(param_1 + 0x10d8))(param_1,&local_e8,*(undefined8 *)(param_1 + 0x1110));
        }
        puVar19 = local_128;
        if ((((*param_1 & 1) == 0) || ((local_12e >> 3 & 1) != 0)) &&
           (local_128 != (undefined8 *)0x0)) {
          lVar8 = *(long *)(param_1 + 0x58);
          plVar10 = (long *)FUN_7100228110(0x10);
          if (plVar10 == (long *)0x0) {
            param_1[0x20] = 0;
            return 0xfffffe0c;
          }
          memset(plVar10,0,0x10);
          lVar11 = FUN_7100228110((size_t)puVar19);
          *plVar10 = lVar11;
          if (lVar11 == 0) {
            FUN_7100228130(plVar10);
            param_1[0x20] = 0;
            return 0xfffffe0c;
          }
          plVar10[1] = (long)puVar19;
          uVar12 = FUN_71002281e0(*(long **)(lVar8 + 8),plVar10);
          if ((int)uVar12 != 0) {
            param_1[0x20] = 0;
            return uVar12 & 0xffffffff;
          }
          *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + (long)puVar19;
        }
        goto LAB_71002269f4;
      }
      param_1[0x20] = 0;
      if ((param_1[0x21] != 0) && ((*pbVar1 >> 1 & 1) == 0)) {
        uVar6 = 0x3f1;
        goto LAB_710022681c;
      }
LAB_7100226dbc:
      uVar6 = 0;
    }
    else {
LAB_7100226804:
      bVar3 = param_1[0x21];
      param_1[0x20] = 0;
joined_r0x007100226e40:
      if ((bVar3 == 0) || (uVar6 = 0x3ea, (*pbVar1 >> 1 & 1) != 0)) goto LAB_7100226dbc;
LAB_710022681c:
      uVar6 = FUN_71002276f0(uVar6);
      local_100[0] = (undefined2)uVar6;
      memcpy(&local_e8,local_100,2);
      memcpy(__dest,(void *)0x0,0);
      local_150 = 8;
      local_148 = &local_e8;
      lStack_140 = 2;
      uVar9 = FUN_71002262a0((long)param_1,&local_150);
      uVar6 = (uint)uVar9;
joined_r0x007100226860:
      if (uVar6 == 0) {
        *pbVar1 = *pbVar1 | 2;
        goto LAB_7100226dbc;
      }
      if (uVar6 == 0xfffffed2) goto LAB_7100226dbc;
    }
    iVar5 = 3;
    if (uVar6 != 0) {
      iVar5 = 1;
      uVar7 = uVar6;
    }
    unaff_x21 = (ulong)uVar7;
LAB_7100226dcc:
    if (iVar5 != 0) {
LAB_710022702c:
      if (iVar5 == 3) {
LAB_7100227034:
        unaff_x21 = 0;
      }
      return unaff_x21;
    }
  } while( true );
}

