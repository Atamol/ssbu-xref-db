// addr:      7102bd3290
// offset:    0x2bd3290
// name:      FUN_7102bd3290
// mangled:   
// signature: undefined __cdecl FUN_7102bd3290(float param_1, long * param_2, undefined8 param_3, long * * * * param_4, byte * * * * param_5, long * * * * param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9)


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7102bd3290(float param_1,long *param_2,undefined8 param_3,long ****param_4,byte ****param_5
                   ,long ****param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  float *pfVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined4 uVar10;
  undefined1 auVar11 [16];
  bool bVar12;
  bool bVar13;
  bool bVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  long *plVar18;
  long *plVar19;
  long *plVar20;
  undefined1 (*pauVar21) [16];
  undefined8 extraout_x1;
  long extraout_x1_00;
  long extraout_x1_01;
  long extraout_x1_02;
  undefined4 uVar22;
  uint *puVar23;
  long lVar24;
  int *piVar25;
  undefined8 *puVar26;
  char cVar27;
  undefined8 uVar28;
  long lVar29;
  long *plVar30;
  long ***ppplVar31;
  long *plVar32;
  undefined8 uVar33;
  long **pplVar34;
  undefined8 *puVar35;
  undefined8 *puVar36;
  long ****pppplVar37;
  float fVar38;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar50;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar51 [16];
  float fVar54;
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  float fVar63;
  float fVar65;
  float fVar66;
  undefined1 auVar64 [16];
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  ulong uVar72;
  float fVar73;
  undefined8 uVar74;
  float fVar75;
  float fVar76;
  undefined8 uVar77;
  float fVar78;
  float fVar79;
  undefined8 local_130;
  undefined8 uStack_128;
  float local_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float local_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  undefined8 local_100;
  undefined8 uStack_f8;
  long ***local_f0;
  long **pplStack_e8;
  long local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  
  switch((int)param_2[10]) {
  case 0:
    if ((char)param_2[0xb] == '\0') {
      lVar24 = param_2[2];
    }
    else {
      plVar18 = param_2 + 2;
      lVar24 = *plVar18;
      *(undefined1 *)(param_2 + 0xb) = 0;
      ppplVar31 = _ConstantZero;
      auVar11._8_8_ = _DAT_7107521008;
      auVar11._0_8_ = _ConstantZero;
      auVar44 = NEON_ext(auVar11,auVar11,8,1);
      param_2[9] = (ulong)auVar44._0_4_;
      param_2[8] = (long)ppplVar31;
      if (lVar24 != 0) {
        *(undefined1 *)(lVar24 + 0x110) = 1;
        FUN_71025e9d50((long *)(lVar24 + 0x108),param_3,param_4,param_5,param_6,param_7,param_8,
                       param_9);
        if (*plVar18 != 0) {
          FUN_71025ee450(0x43160000,*(long **)(*plVar18 + 0xd8),1);
          lVar24 = *plVar18;
          if (lVar24 != 0) {
            if ((*(char *)(lVar24 + 0xe0) != '\0') &&
               (lVar24 = *(long *)(lVar24 + 200), lVar24 != 0)) {
              puVar26 = *(undefined8 **)(lVar24 + 0x20);
              *(undefined4 *)(lVar24 + 0x3c) = 0;
              if (*(undefined8 **)(lVar24 + 0x18) == puVar26) {
                *(undefined4 *)(lVar24 + 0x40) = 0;
              }
              else {
                uVar72 = 0;
                puVar36 = *(undefined8 **)(lVar24 + 0x18);
                do {
                  puVar35 = puVar36 + 1;
                  auVar5._8_8_ = 0;
                  auVar5._0_8_ = uVar72;
                  (**(code **)(*(long *)*puVar36 + 0x18))(auVar5 << 0x40,(long *)*puVar36,0);
                  puVar36 = puVar35;
                } while (puVar26 != puVar35);
                puVar26 = *(undefined8 **)(lVar24 + 0x20);
                *(undefined4 *)(lVar24 + 0x40) = 0;
                if (*(undefined8 **)(lVar24 + 0x18) != puVar26) {
                  uVar72 = 0;
                  puVar36 = *(undefined8 **)(lVar24 + 0x18);
                  do {
                    puVar35 = puVar36 + 1;
                    auVar6._8_8_ = 0;
                    auVar6._0_8_ = uVar72;
                    (**(code **)(*(long *)*puVar36 + 0x18))(auVar6 << 0x40,(long *)*puVar36,1);
                    puVar36 = puVar35;
                  } while (puVar26 != puVar35);
                  puVar36 = *(undefined8 **)(lVar24 + 0x20);
                  for (puVar26 = *(undefined8 **)(lVar24 + 0x18); puVar26 != puVar36;
                      puVar26 = puVar26 + 1) {
                    (**(code **)(*(long *)*puVar26 + 0x38))();
                  }
                }
              }
            }
            lVar24 = *plVar18;
            if (lVar24 != 0) {
              if ((*(char *)(lVar24 + 0xe0) != '\0') && (*(long *)(lVar24 + 200) != 0)) {
                *(undefined2 *)(*(long *)(lVar24 + 200) + 0x30) = 0x101;
                lVar24 = *plVar18;
                if (lVar24 == 0) goto LAB_7102bd5f2c;
              }
              if (*(long *)(lVar24 + 0xd8) != 0) {
                *(undefined1 *)(*(long *)(lVar24 + 0xd8) + 0x21) = 0;
              }
            }
          }
        }
      }
LAB_7102bd5f2c:
      *(undefined4 *)((long)param_2 + 0x5c) = 0;
      lVar24 = *plVar18;
    }
    if (lVar24 != 0) {
      if (*(long *)(lVar24 + 0xd8) != 0) {
        *(float *)(*(long *)(lVar24 + 0xd8) + 0x24) = param_1;
        lVar24 = param_2[2];
        if (lVar24 == 0) break;
      }
      plVar18 = *(long **)(lVar24 + 0xd8);
      if ((plVar18 != (long *)0x0) && (299.0 <= *(float *)(plVar18 + 2))) {
        FUN_71025ee450(0x43960000,plVar18,1);
        lVar24 = param_2[2];
        if ((lVar24 != 0) && (lVar24 = *(long *)(lVar24 + 0xd8), lVar24 != 0)) {
          *(undefined1 *)(lVar24 + 0x21) = 1;
        }
        *(undefined4 *)(param_2 + 10) = 2;
        *(undefined1 *)((long)param_2 + 0x5a) = 1;
        *(undefined1 *)(param_2 + 0xb) = 1;
        puVar26 = *(undefined8 **)param_2[0x19];
        puVar36 = (undefined8 *)((undefined8 *)param_2[0x19])[1];
        puVar35 = puVar26;
        if (puVar26 != puVar36) {
          do {
            plVar18 = (long *)*puVar26;
            if ((char)plVar18[4] == '\0') {
              plVar19 = (long *)plVar18[1];
              lVar24 = plVar18[2];
              lVar29 = *plVar18;
              *(undefined1 *)(plVar18 + 4) = 1;
              *plVar19 = lVar29;
              *(long **)(lVar29 + 8) = plVar19;
              *(long *)(lVar24 + 0x30) = *(long *)(lVar24 + 0x30) + -1;
              *plVar18 = 0;
              plVar18[1] = 0;
              puVar35 = *(undefined8 **)(lVar24 + 0x28);
              *plVar18 = lVar24 + 0x20;
              plVar18[1] = (long)puVar35;
              *(long **)(lVar24 + 0x28) = plVar18;
              *puVar35 = plVar18;
              *(long *)(lVar24 + 0x18) = *(long *)(lVar24 + 0x18) + 1;
              iVar17 = 0;
              if (plVar18[3] != 0) {
                iVar17 = *(int *)(plVar18[3] + 0x110);
              }
              *(int *)(lVar24 + 0x48) = *(int *)(lVar24 + 0x48) + iVar17;
            }
            puVar26 = puVar26 + 1;
          } while (puVar36 != puVar26);
          puVar26 = *(undefined8 **)param_2[0x19];
          puVar35 = (undefined8 *)((undefined8 *)param_2[0x19])[1];
        }
        FUN_71025f55b0(puVar26,puVar35,"IPP0203");
        FUN_71025f55b0(*(undefined8 **)param_2[0x19],(undefined8 *)((undefined8 *)param_2[0x19])[1],
                       "IPP0204");
        local_130 = _ConstantZero;
        uStack_128 = _DAT_7107521008;
        FUN_71025effe0((long ***)&local_f0,
                       *(ulong **)(*(long *)(*(long *)(*param_2 + 800) + 0x48) + 800),0x14e331ff72,
                       0xc5f1b3cdc,(long ****)&local_130,1,param_8,param_9);
        pppplVar37 = (long ****)(param_2 + 0x1b);
        if ((pppplVar37 != &local_f0) && (lVar24 = param_2[0x1d], lVar24 != local_e0)) {
          if (local_e0 == 0) {
            if (lVar24 != 0) {
              lVar29 = param_2[0x1b];
              plVar18 = (long *)param_2[0x1c];
              *plVar18 = lVar29;
              *(long **)(lVar29 + 8) = plVar18;
              *(long *)(lVar24 + 0x10) = *(long *)(lVar24 + 0x10) + -1;
              param_2[0x1c] = 0;
              param_2[0x1d] = 0;
              *pppplVar37 = (long ***)0x0;
            }
          }
          else {
            if (lVar24 != 0) {
              ppplVar31 = *pppplVar37;
              pplVar34 = (long **)param_2[0x1c];
              *pplVar34 = (long *)ppplVar31;
              ppplVar31[1] = pplVar34;
              *(long *)(lVar24 + 0x10) = *(long *)(lVar24 + 0x10) + -1;
              param_2[0x1c] = 0;
              param_2[0x1d] = 0;
              *pppplVar37 = (long ***)0x0;
            }
            puVar26 = *(undefined8 **)(local_e0 + 0x20);
            param_2[0x1b] = local_e0 + 0x18;
            param_2[0x1c] = (long)puVar26;
            *(long *****)(local_e0 + 0x20) = pppplVar37;
            *puVar26 = pppplVar37;
            *(long *)(local_e0 + 0x10) = *(long *)(local_e0 + 0x10) + 1;
            param_2[0x1d] = local_e0;
          }
        }
        if (local_e0 != 0) {
          *pplStack_e8 = (long *)local_f0;
          local_f0[1] = pplStack_e8;
          *(long *)(local_e0 + 0x10) = *(long *)(local_e0 + 0x10) + -1;
          pplStack_e8 = (long **)0x0;
          local_e0 = 0;
          local_f0 = (long ***)0x0;
        }
        pppplVar37 = (long ****)(param_2 + 0x1e);
        local_130 = _ConstantZero;
        uStack_128 = _DAT_7107521008;
        FUN_71025effe0((long ***)&local_f0,
                       *(ulong **)(*(long *)(*(long *)(*param_2 + 800) + 0x48) + 800),0x14e331ff72,
                       0xcc6126d66,(long ****)&local_130,1,param_8,param_9);
        if ((pppplVar37 != &local_f0) && (lVar24 = param_2[0x20], lVar24 != local_e0)) {
          if (local_e0 == 0) {
            if (lVar24 != 0) {
              lVar29 = param_2[0x1e];
              plVar18 = (long *)param_2[0x1f];
              *plVar18 = lVar29;
              *(long **)(lVar29 + 8) = plVar18;
              *(long *)(lVar24 + 0x10) = *(long *)(lVar24 + 0x10) + -1;
              param_2[0x1f] = 0;
              param_2[0x20] = 0;
              *pppplVar37 = (long ***)0x0;
            }
          }
          else {
            if (lVar24 != 0) {
              ppplVar31 = *pppplVar37;
              pplVar34 = (long **)param_2[0x1f];
              *pplVar34 = (long *)ppplVar31;
              ppplVar31[1] = pplVar34;
              *(long *)(lVar24 + 0x10) = *(long *)(lVar24 + 0x10) + -1;
              param_2[0x1f] = 0;
              param_2[0x20] = 0;
              *pppplVar37 = (long ***)0x0;
            }
            puVar26 = *(undefined8 **)(local_e0 + 0x20);
            param_2[0x1e] = local_e0 + 0x18;
            param_2[0x1f] = (long)puVar26;
            *(long *****)(local_e0 + 0x20) = pppplVar37;
            *puVar26 = pppplVar37;
            *(long *)(local_e0 + 0x10) = *(long *)(local_e0 + 0x10) + 1;
            param_2[0x20] = local_e0;
          }
        }
        if (local_e0 != 0) {
          *pplStack_e8 = (long *)local_f0;
          local_f0[1] = pplStack_e8;
          *(long *)(local_e0 + 0x10) = *(long *)(local_e0 + 0x10) + -1;
          pplStack_e8 = (long **)0x0;
          local_e0 = 0;
          local_f0 = (long ***)0x0;
        }
        local_130 = _ConstantZero;
        uStack_128 = _DAT_7107521008;
        FUN_71025effe0((long ***)&local_f0,
                       *(ulong **)(*(long *)(*(long *)(*param_2 + 800) + 0x48) + 800),0x14e331ff72,
                       0xc8b5a0303,(long ****)&local_130,1,param_8,param_9);
        pppplVar37 = (long ****)(param_2 + 0x21);
        if ((pppplVar37 != &local_f0) && (lVar24 = param_2[0x23], lVar24 != local_e0)) {
          if (local_e0 == 0) {
            if (lVar24 != 0) {
              lVar29 = param_2[0x21];
              plVar18 = (long *)param_2[0x22];
              *plVar18 = lVar29;
              *(long **)(lVar29 + 8) = plVar18;
              *(long *)(lVar24 + 0x10) = *(long *)(lVar24 + 0x10) + -1;
              param_2[0x22] = 0;
              param_2[0x23] = 0;
              *pppplVar37 = (long ***)0x0;
            }
          }
          else {
            if (lVar24 != 0) {
              ppplVar31 = *pppplVar37;
              pplVar34 = (long **)param_2[0x22];
              *pplVar34 = (long *)ppplVar31;
              ppplVar31[1] = pplVar34;
              *(long *)(lVar24 + 0x10) = *(long *)(lVar24 + 0x10) + -1;
              param_2[0x22] = 0;
              param_2[0x23] = 0;
              *pppplVar37 = (long ***)0x0;
            }
            puVar26 = *(undefined8 **)(local_e0 + 0x20);
            param_2[0x21] = local_e0 + 0x18;
            param_2[0x22] = (long)puVar26;
            *(long *****)(local_e0 + 0x20) = pppplVar37;
            *puVar26 = pppplVar37;
            *(long *)(local_e0 + 0x10) = *(long *)(local_e0 + 0x10) + 1;
            param_2[0x23] = local_e0;
          }
        }
        if (local_e0 != 0) {
          *pplStack_e8 = (long *)local_f0;
          local_f0[1] = pplStack_e8;
          *(long *)(local_e0 + 0x10) = *(long *)(local_e0 + 0x10) + -1;
          pplStack_e8 = (long **)0x0;
          local_e0 = 0;
          local_f0 = (long ***)0x0;
        }
        local_130 = _ConstantZero;
        uStack_128 = _DAT_7107521008;
        FUN_71025effe0((long ***)&local_f0,
                       *(ulong **)(*(long *)(*(long *)(*param_2 + 800) + 0x48) + 800),0x14e331ff72,
                       0xc125352b9,(long ****)&local_130,1,param_8,param_9);
        pppplVar37 = (long ****)(param_2 + 0x24);
        if ((pppplVar37 != &local_f0) && (lVar24 = param_2[0x26], lVar24 != local_e0)) {
          if (local_e0 == 0) {
            if (lVar24 != 0) {
              lVar29 = param_2[0x24];
              plVar18 = (long *)param_2[0x25];
              *plVar18 = lVar29;
              *(long **)(lVar29 + 8) = plVar18;
              *(long *)(lVar24 + 0x10) = *(long *)(lVar24 + 0x10) + -1;
              param_2[0x25] = 0;
              param_2[0x26] = 0;
              *pppplVar37 = (long ***)0x0;
            }
          }
          else {
            if (lVar24 != 0) {
              ppplVar31 = *pppplVar37;
              pplVar34 = (long **)param_2[0x25];
              *pplVar34 = (long *)ppplVar31;
              ppplVar31[1] = pplVar34;
              *(long *)(lVar24 + 0x10) = *(long *)(lVar24 + 0x10) + -1;
              param_2[0x25] = 0;
              param_2[0x26] = 0;
              *pppplVar37 = (long ***)0x0;
            }
            puVar26 = *(undefined8 **)(local_e0 + 0x20);
            param_2[0x24] = local_e0 + 0x18;
            param_2[0x25] = (long)puVar26;
            *(long *****)(local_e0 + 0x20) = pppplVar37;
            *puVar26 = pppplVar37;
            *(long *)(local_e0 + 0x10) = *(long *)(local_e0 + 0x10) + 1;
            param_2[0x26] = local_e0;
          }
        }
        if (local_e0 != 0) {
          *pplStack_e8 = (long *)local_f0;
          local_f0[1] = pplStack_e8;
          *(long *)(local_e0 + 0x10) = *(long *)(local_e0 + 0x10) + -1;
          pplStack_e8 = (long **)0x0;
          local_e0 = 0;
          local_f0 = (long ***)0x0;
        }
        lVar24 = *(long *)(*(long *)(*(long *)param_2[0xe] + 8) + 8);
        if (*(ulong *)(lVar24 + 0x78) < 4) {
          puVar26 = (undefined8 *)0x0;
        }
        else {
          puVar26 = *(undefined8 **)(lVar24 + 0x80);
          lVar29 = -3;
          do {
            puVar26 = (undefined8 *)*puVar26;
            lVar29 = lVar29 + 1;
          } while (lVar29 != 0);
        }
        uVar15 = *(uint *)((long)puVar26 + 0xfc);
        *(undefined1 *)((long)puVar26 + 0x100) = 1;
        if (uVar15 != 0) {
          plVar18 = *(long **)((long)puVar26 + 0xf0);
          lVar29 = *plVar18 + (ulong)uVar15 * 0x18;
          *(undefined1 *)(lVar29 + 0x10) = 1;
          (**(code **)(*(long *)plVar18[3] + 0x18))
                    ((long *)plVar18[3],(ulong)uVar15,
                     (*(uint *)(plVar18 + 2) & 1 << (ulong)(*(uint *)(lVar29 + 0x14) & 0x1f)) != 0);
        }
        if (*(ulong *)(lVar24 + 0x78) < 5) {
          lVar29 = 0;
        }
        else {
          lVar29 = *(long *)**(undefined8 **)**(undefined8 **)(lVar24 + 0x80);
        }
        uVar15 = *(uint *)(lVar29 + 0xfc);
        *(undefined1 *)(lVar29 + 0x100) = 1;
        if (uVar15 != 0) {
          plVar18 = *(long **)(lVar29 + 0xf0);
          lVar29 = *plVar18 + (ulong)uVar15 * 0x18;
          *(undefined1 *)(lVar29 + 0x10) = 1;
          (**(code **)(*(long *)plVar18[3] + 0x18))
                    ((long *)plVar18[3],(ulong)uVar15,
                     (*(uint *)(plVar18 + 2) & 1 << (ulong)(*(uint *)(lVar29 + 0x14) & 0x1f)) != 0);
        }
        if (*(ulong *)(lVar24 + 0x78) < 6) {
          lVar24 = 0;
        }
        else {
          lVar24 = **(long **)**(undefined8 **)**(undefined8 **)(lVar24 + 0x80);
        }
        uVar15 = *(uint *)(lVar24 + 0xfc);
        *(undefined1 *)(lVar24 + 0x100) = 1;
        if (uVar15 != 0) {
          plVar18 = *(long **)(lVar24 + 0xf0);
          lVar24 = *plVar18 + (ulong)uVar15 * 0x18;
          *(undefined1 *)(lVar24 + 0x10) = 1;
          (**(code **)(*(long *)plVar18[3] + 0x18))
                    ((long *)plVar18[3],(ulong)uVar15,
                     (*(uint *)(plVar18 + 2) & 1 << (ulong)(*(uint *)(lVar24 + 0x14) & 0x1f)) != 0);
        }
      }
    }
    break;
  case 1:
    if (*(int *)((long)param_2 + 0x54) == 1) {
      if ((char)param_2[0xb] == '\0') {
LAB_7102bd3dfc:
        lVar24 = param_2[2];
        if (lVar24 != 0) goto LAB_7102bd5e14;
      }
    }
    else {
      if ((char)param_2[0xb] == '\0') goto LAB_7102bd3dfc;
      plVar18 = param_2 + 2;
      lVar24 = *plVar18;
      *(undefined1 *)(param_2 + 0xb) = 0;
      if (lVar24 != 0) {
        if ((*(char *)(lVar24 + 0xe0) != '\0') && (*(long *)(lVar24 + 200) != 0)) {
          *(undefined2 *)(*(long *)(lVar24 + 200) + 0x30) = 0;
          lVar24 = *plVar18;
          if (lVar24 == 0) goto LAB_7102bd5de0;
        }
        if ((*(char *)(lVar24 + 0xe0) != '\0') && (lVar24 = *(long *)(lVar24 + 200), lVar24 != 0)) {
          puVar26 = *(undefined8 **)(lVar24 + 0x20);
          *(undefined4 *)(lVar24 + 0x3c) = 0;
          if (*(undefined8 **)(lVar24 + 0x18) == puVar26) {
            *(undefined4 *)(lVar24 + 0x40) = 0;
          }
          else {
            uVar72 = 0;
            puVar36 = *(undefined8 **)(lVar24 + 0x18);
            do {
              puVar35 = puVar36 + 1;
              auVar46._8_8_ = 0;
              auVar46._0_8_ = uVar72;
              (**(code **)(*(long *)*puVar36 + 0x18))(auVar46 << 0x40,(long *)*puVar36,0);
              puVar36 = puVar35;
            } while (puVar26 != puVar35);
            puVar26 = *(undefined8 **)(lVar24 + 0x20);
            *(undefined4 *)(lVar24 + 0x40) = 0;
            if (*(undefined8 **)(lVar24 + 0x18) != puVar26) {
              uVar72 = 0;
              puVar36 = *(undefined8 **)(lVar24 + 0x18);
              do {
                puVar35 = puVar36 + 1;
                auVar53._8_8_ = 0;
                auVar53._0_8_ = uVar72;
                (**(code **)(*(long *)*puVar36 + 0x18))(auVar53 << 0x40,(long *)*puVar36,1);
                puVar36 = puVar35;
              } while (puVar26 != puVar35);
              puVar36 = *(undefined8 **)(lVar24 + 0x20);
              for (puVar26 = *(undefined8 **)(lVar24 + 0x18); puVar26 != puVar36;
                  puVar26 = puVar26 + 1) {
                (**(code **)(*(long *)*puVar26 + 0x38))();
              }
            }
          }
        }
      }
LAB_7102bd5de0:
      plVar19 = *(long **)(**(long **)(*param_2 + 0x338) + 8);
      if (plVar19 != (long *)0x0) {
        (**(code **)(*plVar19 + 0x58))(plVar19,0x1b,(int)param_2[0x18]);
      }
      *(undefined4 *)((long)param_2 + 0x5c) = 0;
      lVar24 = *plVar18;
      if (lVar24 == 0) break;
LAB_7102bd5e14:
      if (((*(char *)(lVar24 + 0xe0) != '\0') && (lVar24 = *(long *)(lVar24 + 200), lVar24 != 0)) &&
         (129.0 <= *(float *)(lVar24 + 0x3c))) {
        puVar26 = *(undefined8 **)(lVar24 + 0x20);
        *(undefined4 *)(lVar24 + 0x3c) = 0;
        if (*(undefined8 **)(lVar24 + 0x18) == puVar26) {
          *(undefined4 *)(lVar24 + 0x40) = 0;
        }
        else {
          uVar72 = 0;
          puVar36 = *(undefined8 **)(lVar24 + 0x18);
          do {
            puVar35 = puVar36 + 1;
            auVar49._8_8_ = 0;
            auVar49._0_8_ = uVar72;
            (**(code **)(*(long *)*puVar36 + 0x18))(auVar49 << 0x40,(long *)*puVar36,0);
            puVar36 = puVar35;
          } while (puVar26 != puVar35);
          puVar26 = *(undefined8 **)(lVar24 + 0x20);
          *(undefined4 *)(lVar24 + 0x40) = 0;
          if (*(undefined8 **)(lVar24 + 0x18) != puVar26) {
            uVar72 = 0;
            puVar36 = *(undefined8 **)(lVar24 + 0x18);
            do {
              puVar35 = puVar36 + 1;
              auVar9._8_8_ = 0;
              auVar9._0_8_ = uVar72;
              (**(code **)(*(long *)*puVar36 + 0x18))(auVar9 << 0x40,(long *)*puVar36,1);
              puVar36 = puVar35;
            } while (puVar26 != puVar35);
            puVar36 = *(undefined8 **)(lVar24 + 0x20);
            for (puVar26 = *(undefined8 **)(lVar24 + 0x18); puVar26 != puVar36;
                puVar26 = puVar26 + 1) {
              (**(code **)(*(long *)*puVar26 + 0x38))();
            }
          }
        }
        lVar24 = param_2[2];
        if (((lVar24 != 0) && (*(char *)(lVar24 + 0xe0) != '\0')) && (*(long *)(lVar24 + 200) != 0))
        {
          *(undefined2 *)(*(long *)(lVar24 + 200) + 0x30) = 0x101;
        }
        uVar22 = 4;
        goto LAB_7102bd3f70;
      }
    }
    break;
  case 2:
    if (*(float *)((long)param_2 + 0x5c) != 0.0) {
      fVar38 = *(float *)((long)param_2 + 0x5c) * param_1 + *(float *)(param_2 + 9);
      fVar56 = ABS(fVar38);
      param_2[9] = (ulong)(uint)fVar38;
      *(int *)(param_2 + 8) = (int)param_2[8];
      *(undefined4 *)((long)param_2 + 0x44) = *(undefined4 *)((long)param_2 + 0x44);
      fVar38 = *(float *)(param_2[1] + 0x1b8) * 0.5;
      bVar12 = true;
      if ((fVar38 <= fVar56) && (bVar12 = false, !NAN(360.0 - fVar38) && !NAN(fVar56))) {
        bVar12 = 360.0 - fVar38 < fVar56;
      }
      if (bVar12) {
        if ((char)param_2[0x1a] == '\0') {
          FUN_71025f5420(*(undefined8 **)param_2[0x19],
                         (undefined8 *)((undefined8 *)param_2[0x19])[1],"IPP0201");
          FUN_71025f5420(*(undefined8 **)param_2[0x19],
                         (undefined8 *)((undefined8 *)param_2[0x19])[1],"IPP0202");
          *(undefined1 *)(param_2 + 0x1a) = 1;
        }
      }
      else if ((char)param_2[0x1a] != '\0') {
        *(undefined1 *)(param_2 + 0x1a) = 0;
        FUN_71025f55b0(*(undefined8 **)param_2[0x19],(undefined8 *)((undefined8 *)param_2[0x19])[1],
                       "IPP0201");
        FUN_71025f55b0(*(undefined8 **)param_2[0x19],(undefined8 *)((undefined8 *)param_2[0x19])[1],
                       "IPP0202");
      }
      bVar12 = false;
      if ((180.0 - fVar38 < fVar56) && (bVar12 = false, !NAN(fVar56) && !NAN(fVar38 + 180.0))) {
        bVar12 = fVar56 < fVar38 + 180.0;
      }
      if (bVar12) {
        if (*(char *)((long)param_2 + 0xd1) == '\0') {
          FUN_71025f5420(*(undefined8 **)param_2[0x19],
                         (undefined8 *)((undefined8 *)param_2[0x19])[1],"IPP0203");
          FUN_71025f5420(*(undefined8 **)param_2[0x19],
                         (undefined8 *)((undefined8 *)param_2[0x19])[1],"IPP0204");
          *(undefined1 *)((long)param_2 + 0xd1) = 1;
        }
      }
      else if (*(char *)((long)param_2 + 0xd1) != '\0') {
        FUN_71025f55b0(*(undefined8 **)param_2[0x19],(undefined8 *)((undefined8 *)param_2[0x19])[1],
                       "IPP0203");
        FUN_71025f55b0(*(undefined8 **)param_2[0x19],(undefined8 *)((undefined8 *)param_2[0x19])[1],
                       "IPP0204");
        *(undefined1 *)((long)param_2 + 0xd1) = 0;
      }
      auVar44 = *(undefined1 (*) [16])(param_2 + 8);
      if (360.0 <= ABS(auVar44._8_4_)) {
        uVar22 = 4;
        goto LAB_7102bd3f64;
      }
    }
    break;
  case 3:
    if ((char)param_2[0xb] != '\0') {
      *(undefined1 *)(param_2 + 0xb) = 0;
      puVar23 = *(uint **)(*param_2 + 0x340);
      fVar38 = *(float *)(param_2[1] + 0x118);
      fVar56 = *(float *)(param_2[1] + 0x11c);
      uVar15 = *puVar23;
      *puVar23 = puVar23[1];
      uVar16 = puVar23[3];
      uVar15 = uVar15 ^ uVar15 << 0xb;
      uVar15 = uVar15 ^ uVar15 >> 8 ^ uVar16 ^ uVar16 >> 0x13;
      puVar23[1] = puVar23[2];
      puVar23[2] = uVar16;
      puVar23[3] = uVar15;
      *(float *)(param_2 + 0xc) = fVar38 + (fVar56 - fVar38) * (float)uVar15 * 2.3283064e-10;
      plVar18 = *(long **)(**(long **)(*param_2 + 0x338) + 8);
      if (plVar18 != (long *)0x0) {
        (**(code **)(*plVar18 + 0x58))(plVar18,0x1d,(int)param_2[0x18]);
      }
    }
    fVar38 = *(float *)(param_2 + 0xc) - param_1;
    *(float *)(param_2 + 0xc) = fVar38;
    if (fVar38 <= 0.0) {
      *(undefined4 *)(param_2 + 10) = 1;
      goto LAB_7102bd3f78;
    }
    break;
  case 4:
    if ((char)param_2[0xb] != '\0') {
      *(undefined1 *)(param_2 + 0xb) = 0;
      puVar23 = *(uint **)(*param_2 + 0x340);
      fVar38 = *(float *)(param_2[1] + 0xf8);
      fVar56 = *(float *)(param_2[1] + 0xfc);
      uVar15 = *puVar23 ^ *puVar23 << 0xb;
      *puVar23 = puVar23[1];
      uVar16 = puVar23[3];
      uVar15 = uVar15 ^ uVar15 >> 8 ^ uVar16 ^ uVar16 >> 0x13;
      puVar23[1] = puVar23[2];
      puVar23[2] = uVar16;
      puVar23[3] = uVar15;
      *(float *)((long)param_2 + 0x5c) =
           360.0 / ((fVar38 + (fVar56 - fVar38) * (float)uVar15 * 2.3283064e-10) * 60.0);
      puVar23 = *(uint **)(*param_2 + 0x340);
      uVar15 = *puVar23;
      *puVar23 = puVar23[1];
      uVar16 = puVar23[3];
      uVar15 = uVar15 ^ uVar15 << 0xb;
      uVar15 = uVar15 ^ uVar15 >> 8 ^ uVar16 ^ uVar16 >> 0x13;
      puVar23[1] = puVar23[2];
      puVar23[2] = uVar16;
      puVar23[3] = uVar15;
      if ((float)uVar15 * 100.0 * 2.3283064e-10 < *(float *)(param_2[1] + 0x120)) {
        *(float *)((long)param_2 + 0x5c) = -*(float *)((long)param_2 + 0x5c);
      }
      plVar18 = *(long **)(**(long **)(*param_2 + 0x338) + 8);
      if (plVar18 != (long *)0x0) {
        (**(code **)(*plVar18 + 0x58))(plVar18,0x1c,(int)param_2[0x18]);
      }
      uVar22 = 2;
      goto LAB_7102bd3f70;
    }
    break;
  case 5:
    if ((char)param_2[0xb] == '\0') {
      lVar24 = param_2[2];
    }
    else {
      plVar18 = param_2 + 2;
      *(undefined1 *)(param_2 + 0xb) = 0;
      if (*plVar18 != 0) {
        FUN_71025ee450(0x43968000,*(long **)(*plVar18 + 0xd8),1);
        lVar24 = *plVar18;
        if (lVar24 != 0) {
          if (*(long *)(lVar24 + 0xd8) != 0) {
            *(undefined1 *)(*(long *)(lVar24 + 0xd8) + 0x21) = 0;
            lVar24 = *plVar18;
            if (lVar24 == 0) goto LAB_7102bd3684;
          }
          if (*(long *)(lVar24 + 0xd8) != 0) {
            *(float *)(*(long *)(lVar24 + 0xd8) + 0x24) = param_1;
          }
        }
      }
LAB_7102bd3684:
      puVar36 = (undefined8 *)((undefined8 *)param_2[0x19])[1];
      for (puVar26 = *(undefined8 **)param_2[0x19]; puVar26 != puVar36; puVar26 = puVar26 + 1) {
                    /* WARNING: Read-only address (ram,0x0071044656b0) is written */
                    /* WARNING: Read-only address (ram,0x007104468ca0) is written */
                    /* WARNING: Read-only address (ram,0x0071044697a0) is written */
                    /* WARNING: Read-only address (ram,0x00710446a350) is written */
                    /* WARNING: Read-only address (ram,0x00710446a360) is written */
        plVar19 = (long *)*puVar26;
        if ((char)plVar19[4] != '\0') {
          plVar20 = (long *)plVar19[1];
          lVar24 = plVar19[2];
          lVar29 = *plVar19;
          *(undefined1 *)(plVar19 + 4) = 0;
          *plVar20 = lVar29;
          *(long **)(lVar29 + 8) = plVar20;
          *(long *)(lVar24 + 0x18) = *(long *)(lVar24 + 0x18) + -1;
          *plVar19 = 0;
          plVar19[1] = 0;
          puVar35 = *(undefined8 **)(lVar24 + 0x40);
          *plVar19 = lVar24 + 0x38;
          plVar19[1] = (long)puVar35;
          *(long **)(lVar24 + 0x40) = plVar19;
          *puVar35 = plVar19;
          *(long *)(lVar24 + 0x30) = *(long *)(lVar24 + 0x30) + 1;
          iVar17 = 0;
          if (plVar19[3] != 0) {
            iVar17 = *(int *)(plVar19[3] + 0x110);
          }
          *(int *)(lVar24 + 0x48) = *(int *)(lVar24 + 0x48) - iVar17;
        }
      }
                    /* WARNING: Read-only address (ram,0x0071044656b0) is written */
                    /* WARNING: Read-only address (ram,0x007104468ca0) is written */
                    /* WARNING: Read-only address (ram,0x0071044697a0) is written */
                    /* WARNING: Read-only address (ram,0x00710446a350) is written */
                    /* WARNING: Read-only address (ram,0x00710446a360) is written */
      FUN_71025f4d80(*(long **)param_2[0xe],(long *)((undefined8 *)param_2[0xe])[1],1);
      param_4 = (long ****)0x1;
      FUN_71025f4d80(*(long **)param_2[0xf],(long *)((undefined8 *)param_2[0xf])[1],1);
      plVar19 = param_2 + 0x10;
      do {
        lVar24 = *plVar19;
        if (lVar24 != 0) {
          plVar20 = (long *)(lVar24 + 8);
          lVar29 = *plVar20;
          plVar30 = (long *)(lVar29 + 0x98);
          plVar32 = (long *)*plVar30;
          if (plVar30 != plVar32) {
            do {
              *(undefined1 *)((long)plVar32 + 0x44) = 0;
              plVar32 = (long *)*plVar32;
            } while (plVar30 != plVar32);
            lVar24 = *plVar19;
            plVar20 = (long *)(lVar24 + 8);
            lVar29 = *plVar20;
          }
          *(undefined1 *)(lVar24 + 0x128) = 0;
          *(undefined1 *)(lVar24 + 0x130) = *(undefined1 *)(lVar24 + 299);
          *(undefined4 *)(lVar24 + 299) = 0;
          uVar33 = *(undefined8 *)(lVar24 + 0x88);
          uVar28 = *(undefined8 *)(lVar24 + 0x90);
          *(undefined1 *)(lVar24 + 0x12f) = 0;
          *(undefined8 *)(lVar24 + 0x88) = *(undefined8 *)(lVar24 + 0x100);
          *(undefined8 *)(lVar24 + 0x90) = *(undefined8 *)(lVar24 + 0x100);
          *(undefined8 *)(lVar24 + 0x100) = uVar33;
          *(undefined8 *)(lVar24 + 0x108) = uVar28;
          uVar33 = *(undefined8 *)(lVar24 + 0x110);
          *(undefined8 *)(lVar24 + 0xc0) = *(undefined8 *)(lVar24 + 0xb8);
          *(undefined8 *)(lVar24 + 0xd8) = *(undefined8 *)(lVar24 + 0xd0);
          *(undefined8 *)(lVar24 + 0x110) = *(undefined8 *)(lVar24 + 0x98);
          *(undefined8 *)(lVar24 + 0x98) = uVar33;
          *(undefined8 *)(lVar24 + 0xa8) = *(undefined8 *)(lVar24 + 0xa0);
          *(undefined8 *)(lVar24 + 0xf0) = *(undefined8 *)(lVar24 + 0xe8);
          if (lVar29 != 0) {
            *(undefined8 *)(lVar29 + 0xd8) = 0;
            lVar24 = *plVar20;
            if (*(char *)(lVar24 + 0xe0) != '\0') {
              plVar20 = *(long **)(lVar24 + 0x80);
              *(undefined2 *)(lVar24 + 0xe0) = 0;
              *(undefined2 *)(lVar24 + 0xe7) = 0;
              for (; (long *)(lVar24 + 0x80) != plVar20; plVar20 = (long *)*plVar20) {
                    /* WARNING: Read-only address (ram,0x0071044656b0) is written */
                    /* WARNING: Read-only address (ram,0x007104468ca0) is written */
                    /* WARNING: Read-only address (ram,0x0071044697a0) is written */
                    /* WARNING: Read-only address (ram,0x00710446a350) is written */
                    /* WARNING: Read-only address (ram,0x00710446a360) is written */
                *(undefined1 *)(plVar20 + 0x20) = 0;
                if (*(uint *)((long)plVar20 + 0xfc) != 0) {
                  plVar30 = (long *)plVar20[0x1e];
                  *(undefined1 *)(*plVar30 + (ulong)*(uint *)((long)plVar20 + 0xfc) * 0x18 + 0x10) =
                       0;
                  param_4 = (long ****)0x0;
                  (**(code **)(*(long *)plVar30[3] + 0x18))();
                }
                *(undefined4 *)(plVar20 + 0x10) = 0;
                plVar20[0xe] = 0;
                plVar20[0xf] = 0;
                plVar20[0xc] = 0;
                plVar20[0xd] = 0;
              }
                    /* WARNING: Read-only address (ram,0x0071044656b0) is written */
                    /* WARNING: Read-only address (ram,0x007104468ca0) is written */
                    /* WARNING: Read-only address (ram,0x0071044697a0) is written */
                    /* WARNING: Read-only address (ram,0x00710446a350) is written */
                    /* WARNING: Read-only address (ram,0x00710446a360) is written */
              for (plVar20 = *(long **)(lVar24 + 0x68); (long *)(lVar24 + 0x68) != plVar20;
                  plVar20 = (long *)*plVar20) {
                    /* WARNING: Read-only address (ram,0x0071044656b0) is written */
                    /* WARNING: Read-only address (ram,0x007104468ca0) is written */
                    /* WARNING: Read-only address (ram,0x0071044697a0) is written */
                    /* WARNING: Read-only address (ram,0x00710446a350) is written */
                    /* WARNING: Read-only address (ram,0x00710446a360) is written */
                *(undefined1 *)(plVar20 + 10) = 0;
              }
                    /* WARNING: Read-only address (ram,0x0071044656b0) is written */
                    /* WARNING: Read-only address (ram,0x007104468ca0) is written */
                    /* WARNING: Read-only address (ram,0x0071044697a0) is written */
                    /* WARNING: Read-only address (ram,0x00710446a350) is written */
                    /* WARNING: Read-only address (ram,0x00710446a360) is written */
              FUN_7100525010(DAT_71052b9298,lVar24);
            }
          }
        }
        plVar19 = plVar19 + 1;
      } while (plVar19 != param_2 + 0x18);
      plVar19 = *(long **)(**(long **)(*param_2 + 0x338) + 8);
      if (plVar19 != (long *)0x0) {
        param_4 = (long ****)(ulong)*(uint *)(param_2 + 0x18);
        (**(code **)(*plVar19 + 0x58))(plVar19,0x1d);
      }
      auVar44 = NEON_ext(ZEXT816(0),*(undefined1 (*) [16])(param_2 + 8),8,1);
      lVar24 = param_2[0x1d];
      auVar44 = NEON_ext(auVar44,auVar44,8,1);
      param_2[9] = auVar44._8_8_;
      param_2[8] = auVar44._0_8_;
      if ((lVar24 != 0) && (*(char *)(lVar24 + 0x35) != '\0')) {
        uVar15 = *(uint *)(lVar24 + 0x3c);
        lVar24 = *lib::Singleton<lib::EffectManager>::instance_;
        std::mutex::lock();
        if ((0 < (int)uVar15) &&
           ((lVar24 = lVar24 + (ulong)(uVar15 >> 0x18) * 0x300, lVar24 != 0 &&
            (*(uint *)(lVar24 + 4) == uVar15)))) {
          param_4 = (long ****)0x0;
          param_5 = (byte ****)0x0;
          FUN_71035707d0(lVar24,0,(long ****)0x0,0,param_6,param_7,param_8,param_9);
        }
        std::mutex::unlock();
      }
      lVar24 = param_2[0x20];
      if ((lVar24 != 0) && (*(char *)(lVar24 + 0x35) != '\0')) {
        uVar15 = *(uint *)(lVar24 + 0x3c);
        lVar24 = *lib::Singleton<lib::EffectManager>::instance_;
        std::mutex::lock();
        if ((0 < (int)uVar15) &&
           ((lVar24 = lVar24 + (ulong)(uVar15 >> 0x18) * 0x300, lVar24 != 0 &&
            (*(uint *)(lVar24 + 4) == uVar15)))) {
          param_4 = (long ****)0x0;
          param_5 = (byte ****)0x0;
          FUN_71035707d0(lVar24,0,(long ****)0x0,0,param_6,param_7,param_8,param_9);
        }
        std::mutex::unlock();
      }
      lVar24 = param_2[0x23];
      if ((lVar24 != 0) && (*(char *)(lVar24 + 0x35) != '\0')) {
        uVar15 = *(uint *)(lVar24 + 0x3c);
        lVar24 = *lib::Singleton<lib::EffectManager>::instance_;
        std::mutex::lock();
        if ((0 < (int)uVar15) &&
           ((lVar24 = lVar24 + (ulong)(uVar15 >> 0x18) * 0x300, lVar24 != 0 &&
            (*(uint *)(lVar24 + 4) == uVar15)))) {
          param_4 = (long ****)0x0;
          param_5 = (byte ****)0x0;
          FUN_71035707d0(lVar24,0,(long ****)0x0,0,param_6,param_7,param_8,param_9);
        }
        std::mutex::unlock();
      }
      lVar24 = param_2[0x26];
      if ((lVar24 != 0) && (*(char *)(lVar24 + 0x35) != '\0')) {
        uVar15 = *(uint *)(lVar24 + 0x3c);
        lVar24 = *lib::Singleton<lib::EffectManager>::instance_;
        std::mutex::lock();
        if ((0 < (int)uVar15) &&
           ((lVar24 = lVar24 + (ulong)(uVar15 >> 0x18) * 0x300, lVar24 != 0 &&
            (*(uint *)(lVar24 + 4) == uVar15)))) {
          param_4 = (long ****)0x0;
          param_5 = (byte ****)0x0;
          FUN_71035707d0(lVar24,0,(long ****)0x0,0,param_6,param_7,param_8,param_9);
        }
        std::mutex::unlock();
      }
      if (*(char *)((long)param_2 + 0x149) != '\0') {
        uVar15 = *(uint *)((long)param_2 + 0x14c);
        if ((uVar15 < 0x38) &&
           (piVar25 = *(int **)(*DAT_71052b6fd8 + 0xc0),
           *(char *)((long)piVar25 + (long)(int)uVar15 + 0x464) != '\0')) {
          *(undefined1 *)((long)piVar25 + (long)(int)uVar15 + 0x464) = 0;
          *piVar25 = *piVar25 + -1;
        }
        *(undefined4 *)((long)param_2 + 0x14c) = 0xffffffff;
        *(undefined1 *)((long)param_2 + 0x149) = 0;
      }
      *(undefined1 *)((long)param_2 + 0x14a) = 0;
      lVar24 = *plVar18;
    }
    if (lVar24 != 0) {
      plVar18 = param_2 + 2;
      if (*(long *)(lVar24 + 0xd8) != 0) {
        *(float *)(*(long *)(lVar24 + 0xd8) + 0x24) = param_1;
        lVar24 = *plVar18;
        if (lVar24 == 0) break;
      }
      plVar19 = *(long **)(lVar24 + 0xd8);
      if ((plVar19 != (long *)0x0) && (449.0 <= *(float *)(plVar19 + 2))) {
        FUN_71025ee450(0x43e08000,plVar19,1);
        lVar24 = *plVar18;
        if (lVar24 != 0) {
          *(undefined1 *)(lVar24 + 0x110) = 0;
          FUN_71025e9d50((long *)(lVar24 + 0x108),extraout_x1,param_4,param_5,param_6,param_7,
                         param_8,param_9);
          lVar24 = *plVar18;
          if (lVar24 != 0) {
            if ((*(char *)(lVar24 + 0xe0) != '\0') && (*(long *)(lVar24 + 200) != 0)) {
              *(undefined2 *)(*(long *)(lVar24 + 200) + 0x30) = 0x101;
            }
            if (*(long *)(lVar24 + 0xd8) != 0) {
              *(undefined1 *)(*(long *)(lVar24 + 0xd8) + 0x21) = 1;
            }
            if (*(char *)(lVar24 + 0xe0) != '\0') {
              *(undefined1 *)(*(long *)(lVar24 + 0xb0) + 0x10) = 0;
            }
          }
        }
        *(undefined1 *)((long)param_2 + 0x5a) = 0;
        *(undefined1 *)(param_2 + 0xb) = 1;
        *(undefined4 *)(param_2 + 10) = 2;
      }
    }
    break;
  case 6:
    if ((char)param_2[0xb] == '\0') {
      fVar38 = (float)param_2[9] + *(float *)((long)param_2 + 0x5c) * param_1;
      auVar44._8_4_ = fVar38;
      auVar44._0_8_ = param_2[8];
      auVar44._12_4_ = 0;
      param_2[9] = (ulong)(uint)fVar38;
      param_2[8] = param_2[8];
      if (*(float *)((long)param_2 + 0x5c) <= 0.0) goto LAB_7102bd3e48;
LAB_7102bd3e70:
      if (fVar38 < 360.0) break;
    }
    else {
      lVar24 = param_2[8];
      fVar38 = (float)param_2[9];
      *(undefined1 *)(param_2 + 0xb) = 0;
      if (360.0 <= fVar38) {
        fVar38 = fVar38 + -360.0;
        param_2[9] = (ulong)(uint)fVar38;
        param_2[8] = lVar24;
      }
      if (fVar38 <= 0.0) {
        fVar38 = fVar38 + 360.0;
        param_2[9] = (ulong)(uint)fVar38;
        param_2[8] = lVar24;
      }
      if (180.0 <= fVar38) {
        fVar38 = fVar38 + param_1;
        auVar44._8_4_ = fVar38;
        auVar44._0_8_ = lVar24;
        auVar44._12_4_ = 0;
        *(undefined4 *)((long)param_2 + 0x5c) = 0x3f800000;
        param_2[9] = (ulong)(uint)fVar38;
        param_2[8] = lVar24;
        goto LAB_7102bd3e70;
      }
      fVar38 = fVar38 - param_1;
      auVar44._8_4_ = fVar38;
      auVar44._0_8_ = lVar24;
      auVar44._12_4_ = 0;
      *(undefined4 *)((long)param_2 + 0x5c) = 0xbf800000;
      param_2[9] = (ulong)(uint)fVar38;
      param_2[8] = lVar24;
LAB_7102bd3e48:
      if (0.0 < fVar38) break;
    }
    uVar22 = 2;
    *(undefined4 *)((long)param_2 + 0x5c) = 0;
LAB_7102bd3f64:
    auVar44 = NEON_ext(ZEXT816(0),auVar44,8,1);
    auVar44 = NEON_ext(auVar44,auVar44,8,1);
    param_2[9] = auVar44._8_8_;
    param_2[8] = auVar44._0_8_;
LAB_7102bd3f70:
    *(undefined4 *)(param_2 + 10) = uVar22;
LAB_7102bd3f78:
    *(undefined1 *)(param_2 + 0xb) = 1;
  }
  iVar17 = *(int *)((long)param_2 + 0x54);
  if (iVar17 == 3) {
    if (0.0 < *(float *)((long)param_2 + 100)) {
      *(float *)((long)param_2 + 100) = *(float *)((long)param_2 + 100) - param_1;
      lVar24 = param_2[2];
    }
    else {
      if (*(char *)((long)param_2 + 0x59) != '\0') {
        lVar24 = param_2[2];
        *(undefined1 *)((long)param_2 + 0x59) = 0;
        *(undefined1 *)(param_2 + 0xd) = 0;
        if (lVar24 == 0) {
LAB_7102bd49a4:
          lVar29 = param_2[4];
LAB_7102bd49a8:
          if ((DAT_710532a9e0 & 1) == 0) {
            iVar17 = __cxa_guard_acquire(&DAT_710532a9e0);
            puVar26 = &DAT_710532a9f0;
            if (iVar17 != 0) {
              DAT_710532a9f8 = 0;
              DAT_710532a9f0 = 0x3f800000;
              DAT_710532aa08 = 0;
              DAT_710532aa00 = 0x3f80000000000000;
              DAT_710532aa18 = DAT_71044656b0._8_8_;
              DAT_710532aa10 = (undefined8)DAT_71044656b0;
              DAT_710532aa28 = DAT_710446a350._8_8_;
              DAT_710532aa20 = DAT_710446a350;
              __cxa_guard_release(&DAT_710532a9e0);
            }
          }
          else {
            puVar26 = &DAT_710532a9f0;
          }
        }
        else {
          FUN_71025ee450(0x43e38000,*(long **)(lVar24 + 0xd8),1);
          lVar24 = param_2[2];
          if (lVar24 == 0) goto LAB_7102bd49a4;
          if (*(long *)(lVar24 + 0xd8) != 0) {
            *(undefined1 *)(*(long *)(lVar24 + 0xd8) + 0x21) = 0;
            lVar24 = param_2[2];
            lVar29 = param_2[4];
            if (lVar24 != 0) goto LAB_7102bd5150;
            goto LAB_7102bd49a8;
          }
          lVar29 = param_2[4];
LAB_7102bd5150:
          puVar26 = (undefined8 *)(**(code **)(**(long **)(lVar24 + 0x90) + 0x158))();
        }
        uVar33 = *puVar26;
        uVar74 = puVar26[1];
        uVar77 = puVar26[3];
        *(undefined8 *)(lVar29 + 0x80) = puVar26[2];
        *(undefined8 *)(lVar29 + 0x70) = uVar33;
        uVar33 = puVar26[4];
        uVar2 = puVar26[5];
        uVar28 = puVar26[6];
        uVar3 = puVar26[7];
        *(undefined8 *)(lVar29 + 0x78) = uVar74;
        *(undefined8 *)(lVar29 + 0x98) = uVar2;
        *(undefined8 *)(lVar29 + 0xa0) = uVar28;
        *(undefined8 *)(lVar29 + 0xa8) = uVar3;
        *(undefined8 *)(lVar29 + 0x88) = uVar77;
        *(undefined8 *)(lVar29 + 0x90) = uVar33;
        plVar19 = (long *)((long *)param_2[0xe])[1];
        for (plVar18 = *(long **)param_2[0xe]; plVar18 != plVar19; plVar18 = plVar18 + 1) {
          lVar24 = *plVar18;
          *(undefined1 *)(lVar24 + 0x128) = 1;
          if (*(long *)(lVar24 + 8) != 0) {
            *(undefined8 *)(*(long *)(lVar24 + 8) + 0xd8) = 0xffffffffffffffff;
            FUN_7100532bc0(*(long *)(lVar24 + 8),0);
          }
        }
        FUN_71025f4d80(*(long **)param_2[0xf],(long *)((undefined8 *)param_2[0xf])[1],1);
      }
      plVar18 = param_2 + 2;
      fVar38 = 0.0;
      if ((((*plVar18 != 0) && (lVar24 = *(long *)(*plVar18 + 0xd8), fVar38 = 0.0, lVar24 != 0)) &&
          (fVar38 = *(float *)(lVar24 + 0x10), 460.0 <= fVar38)) && ((char)param_2[0xd] == '\0')) {
        plVar19 = (long *)param_2[4];
        *(undefined1 *)(param_2 + 0xd) = 1;
        bVar12 = false;
        if (plVar19[6] != 0) {
          bVar12 = *(char *)(plVar19[6] + 0x10) != '\0';
        }
        if ((!bVar12) && ((char)plVar19[8] == '\0')) {
          FUN_710313ef20(plVar19);
        }
        plVar19 = *(long **)(**(long **)(*param_2 + 0x338) + 8);
        if (plVar19 != (long *)0x0) {
          (**(code **)(*plVar19 + 0x58))(plVar19,0x1e,*(undefined4 *)((long)param_2 + 0xc4));
        }
      }
      auVar53 = _DAT_710446a360;
      auVar49 = _DAT_710446a350;
      auVar46 = _DAT_7104468ca0;
      auVar44 = _DAT_71044656b0;
      lVar24 = *(long *)(param_2[4] + 0x30);
      bVar12 = false;
      if (lVar24 != 0) {
        bVar12 = *(char *)(lVar24 + 0x10) != '\0';
      }
      if ((bVar12) || (*(char *)(param_2[4] + 0x40) != '\0')) {
        if (*plVar18 != 0) {
          plVar19 = *(long **)(*plVar18 + 0xd8);
          (**(code **)(*plVar19 + 0x10))(plVar19);
          if (*(char *)(plVar19[1] + 0xa8) != '\0') {
            plVar20 = *(long **)(plVar19[1] + 0x48);
            (**(code **)(*plVar20 + 0x10))(plVar20,0);
            if (*(char *)(plVar19[1] + 0xa8) != '\0') {
              plVar20 = *(long **)(plVar19[1] + 0x48);
              (**(code **)(*plVar20 + 0x10))(plVar20,1);
              (**(code **)(*plVar20 + 0x10))(plVar20,2);
            }
          }
          *(undefined1 *)(plVar19 + 4) = 0;
          lVar24 = *plVar18;
          if (lVar24 != 0) {
            if (*(long *)(lVar24 + 0xd8) == 0) {
              uVar15 = 0xffffffff;
              lVar29 = *(long *)(lVar24 + 0xd8);
              if (lVar29 == 0) {
LAB_7102bd53d4:
                pauVar21 = (undefined1 (*) [16])(**(code **)(**(long **)(lVar24 + 0x90) + 0x158))();
              }
              else {
LAB_7102bd5390:
                uVar16 = (**(code **)(**(long **)(*(long *)(lVar29 + 8) + 8) + 0x10))();
                if (uVar16 <= uVar15) goto LAB_7102bd53d4;
                plVar19 = *(long **)(*(long *)(*(long *)(lVar24 + 0xd8) + 8) + 0x48);
                (**(code **)(*plVar19 + 0x38))(plVar19,0);
                pauVar21 = (undefined1 (*) [16])(extraout_x1_01 + (ulong)uVar15 * 0x40);
              }
              auVar44 = pauVar21[2];
              auVar46 = *pauVar21;
              auVar53 = pauVar21[1];
              auVar49 = pauVar21[3];
            }
            else {
              plVar19 = *(long **)(*(long *)(*(long *)(lVar24 + 0xd8) + 8) + 8);
              uVar15 = (**(code **)(*plVar19 + 0x18))(plVar19,"sita_ago_locator");
              lVar24 = *plVar18;
              if (lVar24 != 0) {
                lVar29 = *(long *)(lVar24 + 0xd8);
                if (lVar29 != 0) goto LAB_7102bd5390;
                goto LAB_7102bd53d4;
              }
            }
          }
        }
        lVar24 = param_2[4];
        *(long *)(lVar24 + 0x78) = auVar46._8_8_;
        *(long *)(lVar24 + 0x70) = auVar46._0_8_;
        *(long *)(lVar24 + 0x88) = auVar53._8_8_;
        *(long *)(lVar24 + 0x80) = auVar53._0_8_;
        *(long *)(lVar24 + 0x98) = auVar44._8_8_;
        *(long *)(lVar24 + 0x90) = auVar44._0_8_;
        *(long *)(lVar24 + 0xa8) = auVar49._8_8_;
        *(long *)(lVar24 + 0xa0) = auVar49._0_8_;
      }
      if (fVar38 < 469.0) goto LAB_7102bd5da4;
      if (*(long *)(**(long **)(*(long *)(*lib::Singleton<app::StageManager>::instance_ + 0x1c0) +
                               0xb0) + 0x20) == *(long *)(*(long *)(*param_2 + 0x308) + 8)) {
        local_f0 = _ConstantZero;
        pplStack_e8 = _DAT_7107521008;
        FUN_71005162f0(*DAT_71052b8f00 + 0x2b0,5,(undefined1 (*) [16])&local_f0);
      }
      if (*plVar18 != 0) {
        FUN_71025ee450(0,*(long **)(*plVar18 + 0xd8),1);
        if ((*plVar18 != 0) && (lVar24 = *(long *)(*plVar18 + 0xd8), lVar24 != 0)) {
          *(undefined1 *)(lVar24 + 0x21) = 1;
        }
      }
      plVar18 = (long *)param_2[4];
      if ((char)plVar18[8] != '\0') {
        plVar19 = (long *)plVar18[6];
        if (((plVar19 != (long *)0x0) && ((char)plVar19[2] != '\0')) &&
           (*(undefined1 *)(plVar19 + 2) = 0, (char)plVar19[10] != '\0')) {
          plVar20 = (long *)FUN_71003ac560((ulong)*(uint *)(*plVar19 + 8));
          (**(code **)(*plVar20 + 0x48))(plVar20,0);
          *(undefined1 *)(plVar19 + 10) = 0;
        }
        (**(code **)(*plVar18 + 0x30))(plVar18);
      }
      *(undefined1 *)(plVar18 + 8) = 0;
      *(undefined4 *)((long)param_2 + 0x54) = 0;
LAB_7102bd5768:
      *(undefined1 *)((long)param_2 + 0x59) = 1;
      lVar24 = param_2[2];
    }
  }
  else {
    if (iVar17 == 2) {
      if (*(char *)((long)param_2 + 0x59) != '\0') {
        *(undefined1 *)((long)param_2 + 0x59) = 0;
        *(undefined1 *)(param_2 + 0xd) = 0;
        if (param_2[2] != 0) {
          FUN_71025ee450(0,*(long **)(param_2[2] + 0xd8),1);
          if ((param_2[2] != 0) && (lVar24 = *(long *)(param_2[2] + 0xd8), lVar24 != 0)) {
            *(undefined1 *)(lVar24 + 0x21) = 0;
          }
        }
        plVar19 = (long *)((long *)param_2[0xe])[1];
        for (plVar18 = *(long **)param_2[0xe]; plVar18 != plVar19; plVar18 = plVar18 + 1) {
          lVar24 = *plVar18;
          *(undefined1 *)(lVar24 + 0x128) = 1;
          if (*(long *)(lVar24 + 8) != 0) {
            *(undefined8 *)(*(long *)(lVar24 + 8) + 0xd8) = 0xffffffffffffffff;
            FUN_7100532bc0(*(long *)(lVar24 + 8),0);
          }
        }
        FUN_71025f4d80(*(long **)param_2[0xf],(long *)((undefined8 *)param_2[0xf])[1],1);
      }
      lVar24 = *lib::Singleton<app::FighterManager>::instance_;
      if (0 < *(int *)(lVar24 + 0xa0)) {
        bVar12 = false;
        iVar17 = 0;
        do {
          iVar4 = iVar17;
          if (*(long *)(lVar24 + 0x20) == 0) {
LAB_7102bd4080:
            if (*(long *)(lVar24 + 0x28) != 0) {
              if (iVar4 == 0) {
                lVar29 = 0x100000000;
                goto LAB_7102bd4130;
              }
              iVar4 = iVar4 + -1;
            }
            if (*(long *)(lVar24 + 0x30) != 0) {
              if (iVar4 == 0) {
                lVar29 = 0x200000000;
                goto LAB_7102bd4130;
              }
              iVar4 = iVar4 + -1;
            }
            if (*(long *)(lVar24 + 0x38) != 0) {
              if (iVar4 == 0) {
                lVar29 = 0x300000000;
                goto LAB_7102bd4130;
              }
              iVar4 = iVar4 + -1;
            }
            if (*(long *)(lVar24 + 0x40) != 0) {
              if (iVar4 == 0) {
                lVar29 = 0x400000000;
                goto LAB_7102bd4130;
              }
              iVar4 = iVar4 + -1;
            }
            if (*(long *)(lVar24 + 0x48) != 0) {
              if (iVar4 == 0) {
                lVar29 = 0x500000000;
                goto LAB_7102bd4130;
              }
              iVar4 = iVar4 + -1;
            }
            if (*(long *)(lVar24 + 0x50) != 0) {
              if (iVar4 == 0) {
                lVar29 = 0x600000000;
                goto LAB_7102bd4130;
              }
              iVar4 = iVar4 + -1;
            }
            lVar29 = 0x700000000;
            if (*(long *)(lVar24 + 0x58) == 0 || iVar4 != 0) {
              lVar29 = -0x100000000;
            }
            if ((iVar4 != 0) || (*(long *)(lVar24 + 0x58) == 0)) {
                    /* WARNING: Subroutine does not return */
              abort();
            }
          }
          else {
            if (iVar17 != 0) {
              iVar4 = iVar17 + -1;
              goto LAB_7102bd4080;
            }
            lVar29 = 0;
          }
LAB_7102bd4130:
          iVar4 = *(int *)(*(long *)(lVar24 + (lVar29 >> 0x1d) + 0x20) + 0x18);
          iVar17 = iVar17 + 1;
          bVar12 = (bool)(bVar12 | iVar4 == 0x4d);
        } while ((iVar17 < *(int *)(lVar24 + 0xa0)) && (iVar4 != 0x4d));
        lVar24 = param_2[2];
        if (lVar24 == 0) {
LAB_7102bd4944:
          bVar14 = false;
        }
        else {
          if (*(char *)(lVar24 + 0xe0) == '\0') {
            bVar13 = true;
          }
          else {
            lVar29 = *(long *)(lVar24 + 200);
            if (lVar29 != 0) {
              if (*(char *)(lVar29 + 0x30) == '\0') goto LAB_7102bd4944;
              bVar14 = false;
              if (*(char *)(lVar29 + 0x31) == '\0') goto joined_r0x007102bd4948;
            }
            bVar13 = *(char *)(*(long *)(lVar24 + 0xb0) + 0x10) == '\0';
          }
          lVar29 = *(long *)(lVar24 + 0xd8);
          bVar14 = (bool)(bVar13 & lVar29 == 0);
          if ((lVar29 != 0) && (bVar13)) {
            bVar14 = *(char *)(lVar29 + 0x21) != '\0';
          }
        }
joined_r0x007102bd4948:
        if (!bVar12) {
          if (bVar14) goto LAB_7102bd4950;
          goto LAB_7102bd4afc;
        }
        if (!bVar14 && lVar24 != 0) {
          if ((*(char *)(lVar24 + 0xe0) != '\0') && (*(long *)(lVar24 + 200) != 0)) {
            *(undefined2 *)(*(long *)(lVar24 + 200) + 0x30) = 0x101;
          }
          if (*(long *)(lVar24 + 0xd8) != 0) {
            *(undefined1 *)(*(long *)(lVar24 + 0xd8) + 0x21) = 1;
          }
          if (*(char *)(lVar24 + 0xe0) != '\0') {
            *(undefined1 *)(*(long *)(lVar24 + 0xb0) + 0x10) = 0;
          }
        }
        plVar18 = (long *)param_2[3];
        plVar19 = (long *)plVar18[6];
        if (plVar19 == (long *)0x0) {
          cVar27 = (char)plVar18[8];
LAB_7102bd4a60:
          if (cVar27 == '\0') goto LAB_7102bd5da4;
        }
        else {
          cVar27 = (char)plVar18[8];
          if ((char)plVar19[2] == '\0') goto LAB_7102bd4a60;
        }
        if (cVar27 != '\0') {
          if (((plVar19 != (long *)0x0) && ((char)plVar19[2] != '\0')) &&
             (*(undefined1 *)(plVar19 + 2) = 0, (char)plVar19[10] != '\0')) {
            plVar20 = (long *)FUN_71003ac560((ulong)*(uint *)(*plVar19 + 8));
            (**(code **)(*plVar20 + 0x48))(plVar20,0);
            *(undefined1 *)(plVar19 + 10) = 0;
          }
          (**(code **)(*plVar18 + 0x30))(plVar18);
        }
        *(undefined1 *)(plVar18 + 8) = 0;
        lVar24 = param_2[2];
        goto joined_r0x007102bd5774;
      }
      lVar24 = param_2[2];
      if (lVar24 == 0) {
LAB_7102bd4990:
        bVar12 = true;
        fVar38 = 0.0;
        cVar27 = *(char *)((long)param_2 + 0x149);
joined_r0x007102bd499c:
        if (cVar27 != '\0') {
          uVar15 = *(uint *)((long)param_2 + 0x14c);
          if ((uVar15 < 0x38) &&
             (piVar25 = *(int **)(*DAT_71052b6fd8 + 0xc0),
             *(char *)((long)piVar25 + (long)(int)uVar15 + 0x464) != '\0')) {
            *(undefined1 *)((long)piVar25 + (long)(int)uVar15 + 0x464) = 0;
            *piVar25 = *piVar25 + -1;
          }
          *(undefined4 *)((long)param_2 + 0x14c) = 0xffffffff;
          *(undefined1 *)((long)param_2 + 0x149) = 0;
        }
        *(undefined1 *)((long)param_2 + 0x14a) = 0;
      }
      else {
        if (*(char *)(lVar24 + 0xe0) == '\0') {
          bVar12 = true;
          lVar24 = *(long *)(lVar24 + 0xd8);
        }
        else {
          lVar29 = *(long *)(lVar24 + 200);
          if ((lVar29 != 0) &&
             ((*(char *)(lVar29 + 0x30) == '\0' || (*(char *)(lVar29 + 0x31) == '\0'))))
          goto LAB_7102bd4afc;
          bVar12 = *(char *)(*(long *)(lVar24 + 0xb0) + 0x10) == '\0';
          lVar24 = *(long *)(lVar24 + 0xd8);
        }
        if ((lVar24 == 0) || (bVar13 = !bVar12, bVar12 = false, bVar13)) {
          if ((bool)(bVar12 & lVar24 == 0)) goto LAB_7102bd4950;
        }
        else if (*(char *)(lVar24 + 0x21) != '\0') {
LAB_7102bd4950:
          lVar24 = param_2[2];
          if (lVar24 == 0) goto LAB_7102bd4990;
          if ((*(char *)(lVar24 + 0xe0) != '\0') && (*(long *)(lVar24 + 200) != 0)) {
            *(undefined2 *)(*(long *)(lVar24 + 200) + 0x30) = 0;
          }
          if (*(long *)(lVar24 + 0xd8) != 0) {
            *(undefined1 *)(*(long *)(lVar24 + 0xd8) + 0x21) = 0;
          }
          if (*(char *)(lVar24 + 0xe0) != '\0') {
            *(undefined1 *)(*(long *)(lVar24 + 0xb0) + 0x10) = 1;
          }
        }
LAB_7102bd4afc:
        fVar38 = 0.0;
        if ((param_2[2] == 0) || (lVar24 = *(long *)(param_2[2] + 0xd8), lVar24 == 0)) {
          bVar12 = true;
          cVar27 = *(char *)((long)param_2 + 0x149);
          goto joined_r0x007102bd499c;
        }
        fVar38 = *(float *)(lVar24 + 0x10);
        bVar13 = 134.0 < fVar38;
        bVar12 = fVar38 < 125.0;
        if ((!bVar12) && (fVar38 <= 134.0)) {
          plVar18 = (long *)param_2[3];
          if ((plVar18[6] == 0) || (*(char *)(plVar18[6] + 0x10) == '\0')) {
            bVar13 = false;
            bVar12 = false;
            if ((char)plVar18[8] == '\0') {
              FUN_710313ef20(plVar18);
              bVar13 = false;
              bVar12 = false;
            }
          }
          else {
            bVar13 = false;
            bVar12 = false;
          }
        }
        if ((fVar38 < 5.0) || (bVar13)) {
LAB_7102bd5584:
          cVar27 = *(char *)((long)param_2 + 0x149);
          goto joined_r0x007102bd499c;
        }
        fVar56 = *(float *)(param_2 + 9);
        if (180.0 <= fVar56) {
          fVar54 = -360.0;
LAB_7102bd5568:
          fVar56 = fVar56 + fVar54;
        }
        else if (fVar56 < -180.0) {
          fVar54 = 360.0;
          goto LAB_7102bd5568;
        }
        if ((fVar56 < *(float *)(param_2[1] + 0x21c)) || (*(float *)(param_2[1] + 0x220) < fVar56))
        goto LAB_7102bd5584;
        FUN_710317dc90((long)(param_2 + 0x28));
      }
      if ((!bVar12) && ((char)param_2[0xd] == '\0')) {
        *(undefined1 *)(param_2 + 0xd) = 1;
        plVar18 = *(long **)(**(long **)(*param_2 + 0x338) + 8);
        if (plVar18 != (long *)0x0) {
          (**(code **)(*plVar18 + 0x58))(plVar18,0x1f,*(undefined4 *)((long)param_2 + 0xc4));
        }
      }
      plVar18 = param_2 + 2;
      lVar24 = *(long *)(param_2[3] + 0x30);
      bVar12 = false;
      if (lVar24 != 0) {
        bVar12 = *(char *)(lVar24 + 0x10) != '\0';
      }
      if (((bVar12) || (*(char *)(param_2[3] + 0x40) != '\0')) && (*plVar18 != 0)) {
        plVar19 = *(long **)(*plVar18 + 0xd8);
        (**(code **)(*plVar19 + 0x10))(plVar19);
        if (*(char *)(plVar19[1] + 0xa8) != '\0') {
          plVar20 = *(long **)(plVar19[1] + 0x48);
          (**(code **)(*plVar20 + 0x10))(plVar20,0);
          if (*(char *)(plVar19[1] + 0xa8) != '\0') {
            plVar20 = *(long **)(plVar19[1] + 0x48);
            (**(code **)(*plVar20 + 0x10))(plVar20,1);
            (**(code **)(*plVar20 + 0x10))(plVar20,2);
          }
        }
        *(undefined1 *)(plVar19 + 4) = 0;
        if (((*plVar18 != 0) && (lVar24 = *(long *)(*plVar18 + 0xd8), lVar24 != 0)) &&
           (plVar19 = *(long **)(*(long *)(lVar24 + 8) + 8),
           uVar15 = (**(code **)(*plVar19 + 0x18))(plVar19,"sita_ago_locator"), uVar15 != 0xffffffff
           )) {
          lVar24 = *plVar18;
          if (lVar24 == 0) {
            uVar33 = 0;
            uVar28 = 0x3f800000;
            auVar44 = _DAT_710446a350;
            auVar46 = _DAT_7104468ca0;
            auVar53 = _DAT_710446a360;
          }
          else {
            if (*(long *)(lVar24 + 0xd8) == 0) {
LAB_7102bd5898:
              pauVar21 = (undefined1 (*) [16])(**(code **)(**(long **)(lVar24 + 0x90) + 0x158))();
            }
            else {
              uVar16 = (**(code **)(**(long **)(*(long *)(*(long *)(lVar24 + 0xd8) + 8) + 8) + 0x10)
                       )();
              if (uVar16 <= uVar15) goto LAB_7102bd5898;
              plVar19 = *(long **)(*(long *)(*(long *)(lVar24 + 0xd8) + 8) + 0x48);
              (**(code **)(*plVar19 + 0x38))(plVar19,0);
              pauVar21 = (undefined1 (*) [16])(extraout_x1_02 + (ulong)uVar15 * 0x40);
            }
            uVar33 = *(undefined8 *)pauVar21[2];
            uVar28 = *(undefined8 *)(pauVar21[2] + 8);
            auVar44 = pauVar21[3];
            auVar46 = *pauVar21;
            auVar53 = pauVar21[1];
          }
          lVar24 = param_2[3];
          *(long *)(lVar24 + 0x78) = auVar46._8_8_;
          *(long *)(lVar24 + 0x70) = auVar46._0_8_;
          *(long *)(lVar24 + 0x88) = auVar53._8_8_;
          *(long *)(lVar24 + 0x80) = auVar53._0_8_;
          *(undefined8 *)(lVar24 + 0x98) = uVar28;
          *(undefined8 *)(lVar24 + 0x90) = uVar33;
          *(long *)(lVar24 + 0xa8) = auVar44._8_8_;
          *(long *)(lVar24 + 0xa0) = auVar44._0_8_;
        }
      }
      if (*(float *)(param_2[1] + 0x1dc) <= fVar38) {
        fVar56 = *(float *)(param_2 + 9);
        fVar54 = 360.0;
        if (fVar56 < 0.0) {
LAB_7102bd5938:
          fVar56 = fVar56 + fVar54;
        }
        else if (360.0 < fVar56) {
          fVar54 = -360.0;
          goto LAB_7102bd5938;
        }
        fVar54 = *(float *)(param_2[1] + 0x1d8);
        if ((180.0 - fVar54 <= fVar56) && (fVar56 <= fVar54 + 180.0)) {
          lVar24 = *(long *)(*(long *)(*(long *)param_2[0xe] + 8) + 8);
          if (*(ulong *)(lVar24 + 0x78) < 4) {
            puVar26 = (undefined8 *)0x0;
          }
          else {
            puVar26 = *(undefined8 **)(lVar24 + 0x80);
            lVar29 = -3;
            do {
              puVar26 = (undefined8 *)*puVar26;
              lVar29 = lVar29 + 1;
            } while (lVar29 != 0);
          }
          uVar15 = *(uint *)((long)puVar26 + 0xfc);
          *(undefined1 *)((long)puVar26 + 0x100) = 0;
          if (uVar15 != 0) {
            plVar19 = *(long **)((long)puVar26 + 0xf0);
            *(undefined1 *)(*plVar19 + (ulong)uVar15 * 0x18 + 0x10) = 0;
            plVar19 = (long *)plVar19[3];
            (**(code **)(*plVar19 + 0x18))(plVar19,(ulong)uVar15,0);
          }
          if (*(ulong *)(lVar24 + 0x78) < 5) {
            lVar29 = 0;
          }
          else {
            lVar29 = *(long *)**(undefined8 **)**(undefined8 **)(lVar24 + 0x80);
          }
          uVar15 = *(uint *)(lVar29 + 0xfc);
          *(undefined1 *)(lVar29 + 0x100) = 0;
          if (uVar15 != 0) {
            plVar19 = *(long **)(lVar29 + 0xf0);
            *(undefined1 *)(*plVar19 + (ulong)uVar15 * 0x18 + 0x10) = 0;
            plVar19 = (long *)plVar19[3];
            (**(code **)(*plVar19 + 0x18))(plVar19,(ulong)uVar15,0);
          }
          if (*(ulong *)(lVar24 + 0x78) < 6) {
            lVar24 = 0;
          }
          else {
            lVar24 = **(long **)**(undefined8 **)**(undefined8 **)(lVar24 + 0x80);
          }
          uVar15 = *(uint *)(lVar24 + 0xfc);
          *(undefined1 *)(lVar24 + 0x100) = 0;
          if (uVar15 != 0) {
            plVar19 = *(long **)(lVar24 + 0xf0);
            *(undefined1 *)(*plVar19 + (ulong)uVar15 * 0x18 + 0x10) = 0;
            plVar19 = (long *)plVar19[3];
            (**(code **)(*plVar19 + 0x18))(plVar19,(ulong)uVar15,0);
          }
        }
      }
      if (135.0 <= fVar38) {
        if (*(long *)(**(long **)(*(long *)(*lib::Singleton<app::StageManager>::instance_ + 0x1c0) +
                                 0xb0) + 0x20) == *(long *)(*(long *)(*param_2 + 0x308) + 8)) {
          local_f0 = _ConstantZero;
          pplStack_e8 = _DAT_7107521008;
          FUN_71005162f0(*DAT_71052b8f00 + 0x2b0,7,(undefined1 (*) [16])&local_f0);
        }
        if (*plVar18 != 0) {
          FUN_71025ee450(0x43070000,*(long **)(*plVar18 + 0xd8),1);
          if ((*plVar18 != 0) && (lVar24 = *(long *)(*plVar18 + 0xd8), lVar24 != 0)) {
            *(undefined1 *)(lVar24 + 0x21) = 1;
          }
        }
        plVar18 = (long *)param_2[3];
        if ((char)plVar18[8] != '\0') {
          plVar19 = (long *)plVar18[6];
          if (((plVar19 != (long *)0x0) && ((char)plVar19[2] != '\0')) &&
             (*(undefined1 *)(plVar19 + 2) = 0, (char)plVar19[10] != '\0')) {
            plVar20 = (long *)FUN_71003ac560((ulong)*(uint *)(*plVar19 + 8));
            (**(code **)(*plVar20 + 0x48))(plVar20,0);
            *(undefined1 *)(plVar19 + 10) = 0;
          }
          (**(code **)(*plVar18 + 0x30))(plVar18);
        }
        *(undefined1 *)(plVar18 + 8) = 0;
        *(undefined4 *)((long)param_2 + 0x54) = 3;
        *(undefined1 *)((long)param_2 + 0x59) = 1;
        lVar24 = *(long *)(*(long *)(*(long *)param_2[0xe] + 8) + 8);
        if (*(ulong *)(lVar24 + 0x78) < 4) {
          puVar26 = (undefined8 *)0x0;
        }
        else {
          puVar26 = *(undefined8 **)(lVar24 + 0x80);
          lVar29 = -3;
          do {
            puVar26 = (undefined8 *)*puVar26;
            lVar29 = lVar29 + 1;
          } while (lVar29 != 0);
        }
        uVar15 = *(uint *)((long)puVar26 + 0xfc);
        *(undefined1 *)((long)puVar26 + 0x100) = 1;
        if (uVar15 != 0) {
          plVar18 = *(long **)((long)puVar26 + 0xf0);
          lVar29 = *plVar18 + (ulong)uVar15 * 0x18;
          *(undefined1 *)(lVar29 + 0x10) = 1;
          (**(code **)(*(long *)plVar18[3] + 0x18))
                    ((long *)plVar18[3],(ulong)uVar15,
                     (*(uint *)(plVar18 + 2) & 1 << (ulong)(*(uint *)(lVar29 + 0x14) & 0x1f)) != 0);
        }
        if (*(ulong *)(lVar24 + 0x78) < 5) {
          lVar29 = 0;
        }
        else {
          lVar29 = *(long *)**(undefined8 **)**(undefined8 **)(lVar24 + 0x80);
        }
        uVar15 = *(uint *)(lVar29 + 0xfc);
        *(undefined1 *)(lVar29 + 0x100) = 1;
        if (uVar15 != 0) {
          plVar18 = *(long **)(lVar29 + 0xf0);
          lVar29 = *plVar18 + (ulong)uVar15 * 0x18;
          *(undefined1 *)(lVar29 + 0x10) = 1;
          (**(code **)(*(long *)plVar18[3] + 0x18))
                    ((long *)plVar18[3],(ulong)uVar15,
                     (*(uint *)(plVar18 + 2) & 1 << (ulong)(*(uint *)(lVar29 + 0x14) & 0x1f)) != 0);
        }
        if (*(ulong *)(lVar24 + 0x78) < 6) {
          lVar24 = 0;
        }
        else {
          lVar24 = **(long **)**(undefined8 **)**(undefined8 **)(lVar24 + 0x80);
        }
        uVar15 = *(uint *)(lVar24 + 0xfc);
        *(undefined1 *)(lVar24 + 0x100) = 1;
        if (uVar15 != 0) {
          plVar18 = *(long **)(lVar24 + 0xf0);
          lVar24 = *plVar18 + (ulong)uVar15 * 0x18;
          *(undefined1 *)(lVar24 + 0x10) = 1;
          (**(code **)(*(long *)plVar18[3] + 0x18))
                    ((long *)plVar18[3],(ulong)uVar15,
                     (*(uint *)(plVar18 + 2) & 1 << (ulong)(*(uint *)(lVar24 + 0x14) & 0x1f)) != 0);
        }
        FUN_71025f4d80(*(long **)param_2[0xe],(long *)((undefined8 *)param_2[0xe])[1],1);
        plVar19 = (long *)((long *)param_2[0xf])[1];
        for (plVar18 = *(long **)param_2[0xf]; plVar18 != plVar19; plVar18 = plVar18 + 1) {
          lVar24 = *plVar18;
          *(undefined1 *)(lVar24 + 0x128) = 1;
          if (*(long *)(lVar24 + 8) != 0) {
            *(undefined8 *)(*(long *)(lVar24 + 8) + 0xd8) = 0xffffffffffffffff;
            FUN_7100532bc0(*(long *)(lVar24 + 8),0);
          }
        }
        *(undefined4 *)((long)param_2 + 100) = 0x43700000;
        if (*(char *)((long)param_2 + 0x149) != '\0') {
          uVar15 = *(uint *)((long)param_2 + 0x14c);
          if ((uVar15 < 0x38) &&
             (piVar25 = *(int **)(*DAT_71052b6fd8 + 0xc0),
             *(char *)((long)piVar25 + (long)(int)uVar15 + 0x464) != '\0')) {
            *(undefined1 *)((long)piVar25 + (long)(int)uVar15 + 0x464) = 0;
            *piVar25 = *piVar25 + -1;
          }
          *(undefined4 *)((long)param_2 + 0x14c) = 0xffffffff;
          *(undefined1 *)((long)param_2 + 0x149) = 0;
        }
        *(undefined1 *)((long)param_2 + 0x14a) = 0;
      }
    }
    else if (iVar17 == 1) {
      if ((int)param_2[10] == 1) {
        if (*(char *)((long)param_2 + 0x59) == '\0') {
LAB_7102bd4884:
          lVar24 = param_2[2];
          if (lVar24 != 0) goto LAB_7102bd4890;
        }
      }
      else {
        if (*(char *)((long)param_2 + 0x59) == '\0') goto LAB_7102bd4884;
        plVar18 = param_2 + 2;
        lVar24 = *plVar18;
        *(undefined1 *)((long)param_2 + 0x59) = 0;
        if (lVar24 != 0) {
          if ((*(char *)(lVar24 + 0xe0) != '\0') && (*(long *)(lVar24 + 200) != 0)) {
            *(undefined2 *)(*(long *)(lVar24 + 200) + 0x30) = 0;
            lVar24 = *plVar18;
            if (lVar24 == 0) goto LAB_7102bd5864;
          }
          if ((*(char *)(lVar24 + 0xe0) != '\0') && (lVar24 = *(long *)(lVar24 + 200), lVar24 != 0))
          {
            puVar26 = *(undefined8 **)(lVar24 + 0x18);
            puVar36 = *(undefined8 **)(lVar24 + 0x20);
            *(undefined4 *)(lVar24 + 0x3c) = 0x43020000;
            if (puVar26 == puVar36) {
              *(undefined4 *)(lVar24 + 0x40) = 0x43020000;
            }
            else {
              do {
                puVar35 = puVar26 + 1;
                (**(code **)(*(long *)*puVar26 + 0x18))(0x43020000,(long *)*puVar26,0);
                puVar26 = puVar35;
              } while (puVar36 != puVar35);
              puVar26 = *(undefined8 **)(lVar24 + 0x20);
              *(undefined4 *)(lVar24 + 0x40) = 0x43020000;
              puVar36 = *(undefined8 **)(lVar24 + 0x18);
              if (*(undefined8 **)(lVar24 + 0x18) != puVar26) {
                do {
                  puVar35 = puVar36 + 1;
                  (**(code **)(*(long *)*puVar36 + 0x18))(0x43020000,(long *)*puVar36,1);
                  puVar36 = puVar35;
                } while (puVar26 != puVar35);
                puVar36 = *(undefined8 **)(lVar24 + 0x20);
                for (puVar26 = *(undefined8 **)(lVar24 + 0x18); puVar26 != puVar36;
                    puVar26 = puVar26 + 1) {
                  (**(code **)(*(long *)*puVar26 + 0x38))();
                }
              }
            }
          }
        }
LAB_7102bd5864:
        plVar19 = *(long **)(**(long **)(*param_2 + 0x338) + 8);
        if (plVar19 != (long *)0x0) {
          (**(code **)(*plVar19 + 0x58))(plVar19,0x1b,*(undefined4 *)((long)param_2 + 0xc4));
        }
        lVar24 = *plVar18;
        if (lVar24 == 0) goto LAB_7102bd5da4;
LAB_7102bd4890:
        if (((*(char *)(lVar24 + 0xe0) != '\0') && (lVar24 = *(long *)(lVar24 + 200), lVar24 != 0))
           && (259.0 <= *(float *)(lVar24 + 0x3c))) {
          puVar26 = *(undefined8 **)(lVar24 + 0x20);
          *(undefined4 *)(lVar24 + 0x3c) = 0;
          if (*(undefined8 **)(lVar24 + 0x18) == puVar26) {
            *(undefined4 *)(lVar24 + 0x40) = 0;
          }
          else {
            uVar72 = 0;
            puVar36 = *(undefined8 **)(lVar24 + 0x18);
            do {
              puVar35 = puVar36 + 1;
              auVar7._8_8_ = 0;
              auVar7._0_8_ = uVar72;
              (**(code **)(*(long *)*puVar36 + 0x18))(auVar7 << 0x40,(long *)*puVar36,0);
              puVar36 = puVar35;
            } while (puVar26 != puVar35);
            puVar26 = *(undefined8 **)(lVar24 + 0x20);
            *(undefined4 *)(lVar24 + 0x40) = 0;
            if (*(undefined8 **)(lVar24 + 0x18) != puVar26) {
              uVar72 = 0;
              puVar36 = *(undefined8 **)(lVar24 + 0x18);
              do {
                puVar35 = puVar36 + 1;
                auVar8._8_8_ = 0;
                auVar8._0_8_ = uVar72;
                (**(code **)(*(long *)*puVar36 + 0x18))(auVar8 << 0x40,(long *)*puVar36,1);
                puVar36 = puVar35;
              } while (puVar26 != puVar35);
              puVar36 = *(undefined8 **)(lVar24 + 0x20);
              for (puVar26 = *(undefined8 **)(lVar24 + 0x18); puVar26 != puVar36;
                  puVar26 = puVar26 + 1) {
                (**(code **)(*(long *)*puVar26 + 0x38))();
              }
            }
          }
          lVar24 = param_2[2];
          if (((lVar24 != 0) && (*(char *)(lVar24 + 0xe0) != '\0')) &&
             (*(long *)(lVar24 + 200) != 0)) {
            *(undefined2 *)(*(long *)(lVar24 + 200) + 0x30) = 0x101;
          }
          *(undefined4 *)((long)param_2 + 0x54) = 2;
          goto LAB_7102bd5768;
        }
      }
    }
LAB_7102bd5da4:
    lVar24 = param_2[2];
  }
joined_r0x007102bd5774:
  if (lVar24 == 0) {
    return;
  }
  if (*(char *)(lVar24 + 0x110) == '\0') {
    FUN_71025ee840(0.0,lVar24 + 0x60);
    return;
  }
  if ((int)param_2[10] == 5) {
    lVar29 = *(long *)(lVar24 + 0xd8);
    goto joined_r0x007102bd5134;
  }
  fVar79 = *(float *)(param_2 + 9) * 0.017453292;
  auVar43._0_4_ =
       (int)(_Float1Divided2Pi * 0.0 +
            (float)(-(uint)(0.0 <= _Float1Divided2Pi * 0.0) & 0x80000000 ^ 0xbf000000));
  auVar43._4_4_ =
       (int)(_Float1Divided2Pi * 0.0 +
            (float)(-(uint)(0.0 <= _Float1Divided2Pi * 0.0) & 0x80000000 ^ 0xbf000000));
  auVar43._8_4_ =
       (int)(fVar79 * _Float1Divided2Pi +
            (float)(-(uint)(0.0 <= fVar79 * _Float1Divided2Pi) & 0x80000000 ^ 0xbf000000));
  auVar43._12_4_ =
       (int)(_Float1Divided2Pi * 0.0 +
            (float)(-(uint)(0.0 <= _Float1Divided2Pi * 0.0) & 0x80000000 ^ 0xbf000000));
  auVar44 = NEON_scvtf(auVar43,4);
  auVar62._0_4_ = 0.0 - auVar44._0_4_ * _Float2Pi;
  auVar62._4_4_ = 0.0 - auVar44._4_4_ * _Float2Pi;
  auVar62._8_4_ = fVar79 - auVar44._8_4_ * _Float2Pi;
  auVar62._12_4_ = 0.0 - auVar44._12_4_ * _Float2Pi;
  fVar38 = -_FloatPiDivided2;
  auVar52._0_8_ =
       CONCAT44(-(uint)(_FloatPiDivided2 < auVar62._4_4_),-(uint)(_FloatPiDivided2 < auVar62._0_4_))
  ;
  auVar52._8_4_ = -(uint)(_FloatPiDivided2 < auVar62._8_4_);
  auVar52._12_4_ = -(uint)(_FloatPiDivided2 < auVar62._12_4_);
  fVar56 = -_FloatPi;
  auVar45._0_4_ = _FloatPi - auVar62._0_4_;
  auVar45._4_4_ = _FloatPi - auVar62._4_4_;
  auVar45._8_4_ = _FloatPi - auVar62._8_4_;
  auVar45._12_4_ = _FloatPi - auVar62._12_4_;
  auVar61._8_8_ = auVar52._8_8_;
  auVar61._0_8_ = auVar52._0_8_;
  auVar62 = auVar62 ^ (auVar62 ^ auVar45) & auVar61;
  auVar44 = NEON_fmov(0xbf800000,4);
  auVar51._0_8_ = CONCAT44(-(uint)(auVar62._4_4_ < fVar38),-(uint)(auVar62._0_4_ < fVar38));
  auVar51._8_4_ = -(uint)(auVar62._8_4_ < fVar38);
  auVar51._12_4_ = -(uint)(auVar62._12_4_ < fVar38);
  auVar46 = NEON_fmov(0x3f800000,4);
  auVar60._0_4_ = fVar56 - auVar62._0_4_;
  auVar60._4_4_ = fVar56 - auVar62._4_4_;
  auVar60._8_4_ = fVar56 - auVar62._8_4_;
  auVar60._12_4_ = fVar56 - auVar62._12_4_;
  auVar64._8_8_ = auVar51._8_8_;
  auVar64._0_8_ = auVar51._0_8_;
  auVar53 = auVar46 ^ (auVar46 ^ auVar44) & auVar52;
  auVar62 = auVar62 ^ (auVar62 ^ auVar60) & auVar64;
  auVar53 = auVar53 ^ (auVar53 ^ auVar44) & auVar51;
  fVar50 = auVar62._0_4_;
  fVar38 = fVar50 * fVar50;
  fVar63 = auVar62._4_4_;
  fVar56 = fVar63 * fVar63;
  fVar65 = auVar62._8_4_;
  fVar54 = fVar65 * fVar65;
  fVar66 = auVar62._12_4_;
  fVar55 = fVar66 * fVar66;
  fVar57 = -_DAT_7107528008;
  fVar58 = -_DAT_7107528010;
  fVar59 = -_DAT_7107529008;
  auVar39._0_4_ =
       (auVar46._0_4_ +
       fVar38 * (fVar58 + fVar38 * (_DAT_710752800c +
                                   fVar38 * (fVar57 + fVar38 * (_DAT_7107528004 -
                                                               fVar38 * _SinCoefficients))))) *
       fVar50;
  auVar39._4_4_ =
       (auVar46._4_4_ +
       fVar56 * (fVar58 + fVar56 * (_DAT_710752800c +
                                   fVar56 * (fVar57 + fVar56 * (_DAT_7107528004 -
                                                               fVar56 * _SinCoefficients))))) *
       fVar63;
  auVar39._8_4_ =
       (auVar46._8_4_ +
       fVar54 * (fVar58 + fVar54 * (_DAT_710752800c +
                                   fVar54 * (fVar57 + fVar54 * (_DAT_7107528004 -
                                                               fVar54 * _SinCoefficients))))) *
       fVar65;
  auVar39._12_4_ =
       (auVar46._12_4_ +
       fVar55 * (fVar58 + fVar55 * (_DAT_710752800c +
                                   fVar55 * (fVar57 + fVar55 * (_DAT_7107528004 -
                                                               fVar55 * _SinCoefficients))))) *
       fVar66;
  fVar57 = -_DAT_7107529010;
  auVar47._0_4_ =
       (auVar46._0_4_ +
       fVar38 * (fVar57 + fVar38 * (_DAT_710752900c +
                                   fVar38 * (fVar59 + fVar38 * (_DAT_7107529004 -
                                                               fVar38 * _CosCoefficients))))) *
       auVar53._0_4_;
  auVar47._4_4_ =
       (auVar46._4_4_ +
       fVar56 * (fVar57 + fVar56 * (_DAT_710752900c +
                                   fVar56 * (fVar59 + fVar56 * (_DAT_7107529004 -
                                                               fVar56 * _CosCoefficients))))) *
       auVar53._4_4_;
  auVar47._8_4_ =
       (auVar46._8_4_ +
       fVar54 * (fVar57 + fVar54 * (_DAT_710752900c +
                                   fVar54 * (fVar59 + fVar54 * (_DAT_7107529004 -
                                                               fVar54 * _CosCoefficients))))) *
       auVar53._8_4_;
  auVar47._12_4_ =
       (auVar46._12_4_ +
       fVar55 * (fVar57 + fVar55 * (_DAT_710752900c +
                                   fVar55 * (fVar59 + fVar55 * (_DAT_7107529004 -
                                                               fVar55 * _CosCoefficients))))) *
       auVar53._12_4_;
  auVar46 = NEON_ext(auVar47,auVar47,8,1);
  auVar44 = NEON_ext(auVar39,auVar39,8,1);
  fVar38 = auVar46._0_4_;
  fVar56 = auVar44._0_4_;
  local_130 = (long ***)CONCAT44(auVar47._4_4_ * fVar56,auVar47._4_4_ * fVar38);
  local_120 = fVar56 * auVar47._0_4_ * -1.0 + auVar39._4_4_ * fVar38 * auVar39._0_4_;
  fStack_11c = fVar38 * auVar47._0_4_ * 1.0 + auVar39._4_4_ * fVar56 * auVar39._0_4_;
  local_118 = auVar47._0_4_ * 0.0 * 0.0 + auVar47._4_4_ * 1.0 * auVar39._0_4_;
  fStack_114 = auVar47._0_4_ * 0.0 * 0.0 + auVar39._0_4_ * 0.0;
  local_110 = fVar56 * auVar39._0_4_ * (float)DAT_71044697a0 +
              auVar39._4_4_ * fVar38 * auVar47._0_4_;
  fStack_10c = fVar38 * auVar39._0_4_ * DAT_71044697a0._4_4_ +
               auVar39._4_4_ * fVar56 * auVar47._0_4_;
  fStack_108 = auVar39._0_4_ * 0.0 * DAT_71044697a0._8_4_ + auVar47._4_4_ * 1.0 * auVar47._0_4_;
  fStack_104 = auVar39._0_4_ * 0.0 * DAT_71044697a0._12_4_ + auVar47._0_4_ * 0.0;
  uStack_128 = (long **)(ulong)(uint)(auVar39._4_4_ * -1.0);
  auVar48._0_12_ = SUB1612(*(undefined1 (*) [16])(param_2 + 6),0);
  auVar48._12_4_ = 0x3f800000;
  auVar44 = NEON_ext(auVar48,*(undefined1 (*) [16])(param_2 + 6),0xc,1);
  auVar46 = NEON_ext(auVar44,auVar48,4,1);
  auVar44 = NEON_ext(auVar44,auVar44,8,1);
  auVar44 = NEON_ext(auVar46,auVar44,0xc,1);
  uStack_f8 = auVar44._8_8_;
  local_100 = auVar44._0_8_;
  lVar24 = param_2[2];
  if (lVar24 != 0) {
    (**(code **)(**(long **)(lVar24 + 0x90) + 0x148))(*(long **)(lVar24 + 0x90),&local_130);
    lVar24 = *(long *)(lVar24 + 0xd8);
    if (lVar24 != 0) {
      local_d8 = CONCAT44(fStack_114,local_118);
      local_e0 = CONCAT44(fStack_11c,local_120);
      pplStack_e8 = uStack_128;
      local_f0 = local_130;
      local_b8 = uStack_f8;
      local_c0 = local_100;
      local_c8 = CONCAT44(fStack_104,fStack_108);
      local_d0 = CONCAT44(fStack_10c,local_110);
      if (*(char *)(*(long *)(lVar24 + 8) + 0xa8) != '\0') {
        plVar18 = *(long **)(*(long *)(lVar24 + 8) + 0x48);
        (**(code **)(*plVar18 + 0x20))(plVar18,&local_f0);
      }
      *(undefined1 *)(lVar24 + 0x20) = 1;
    }
  }
  fVar38 = *(float *)(param_2 + 6);
  fVar56 = *(float *)((long)param_2 + 0x34);
  lVar24 = *(long *)(*(long *)(**(long **)param_2[0xe] + 8) + 0x18);
  if ((*(char *)(lVar24 + 0x128) == '\0') ||
     (*(char *)(*(long *)(lVar24 + 8) + 0xe8) != '\0' ||
      *(char *)(*(long *)(lVar24 + 8) + 0xe7) != '\0')) {
    *(undefined1 *)(lVar24 + 0x129) = 1;
LAB_7102bd4684:
    *(undefined8 *)(lVar24 + 0x18) = 0;
    *(float *)(lVar24 + 0x10) = fVar38;
    *(float *)(lVar24 + 0x14) = fVar56;
  }
  else if ((1e-05 < ABS(SUB164(*(undefined1 (*) [16])(lVar24 + 0x10),0) - fVar38)) ||
          (1e-05 < ABS(SUB164(*(undefined1 (*) [16])(lVar24 + 0x10),4) - fVar56))) {
    *(undefined1 *)(lVar24 + 0x12a) = 1;
    goto LAB_7102bd4684;
  }
  if ((1e-05 <= ABS(0.0 - fVar79)) || (1e-05 <= ABS(*(float *)(lVar24 + 0x30) - fVar79))) {
    *(float *)(lVar24 + 0x30) = fVar79;
    *(undefined1 *)(lVar24 + 0x129) = 1;
  }
  auVar44 = *(undefined1 (*) [16])(lVar24 + 0x50);
  auVar40 = auVar44;
  if (1e-05 <= ABS(auVar44._0_4_ + -1.0)) {
    auVar40._4_12_ = auVar44._4_12_;
    auVar40._0_4_ = 0x3f800000;
    *(long *)(lVar24 + 0x58) = auVar44._8_8_;
    *(long *)(lVar24 + 0x50) = auVar40._0_8_;
    *(undefined1 *)(lVar24 + 0x129) = 1;
  }
  if (1e-05 <= ABS(auVar40._4_4_ + -1.0)) {
    *(long *)(lVar24 + 0x58) = auVar40._8_8_;
    *(ulong *)(lVar24 + 0x50) = CONCAT44(0x3f800000,auVar40._0_4_);
    *(undefined1 *)(lVar24 + 0x129) = 1;
  }
  if (((param_2[2] != 0) && (lVar24 = *(long *)(param_2[2] + 0xd8), lVar24 != 0)) &&
     (plVar18 = *(long **)(*(long *)(lVar24 + 8) + 8),
     uVar15 = (**(code **)(*plVar18 + 0x18))(plVar18,"sita_ago_locator"), auVar46 = _DAT_7104468ca0,
     auVar44 = _DAT_71044656b0, uVar15 != 0xffffffff)) {
    uVar28 = 0x3f80000000000000;
    uVar33 = 0;
    uVar77 = 0;
    uVar74 = 0x3f80000000000000;
    if (param_2[2] != 0) {
      plVar18 = *(long **)(param_2[2] + 0xd8);
      (**(code **)(*plVar18 + 0x10))(plVar18);
      if (*(char *)(plVar18[1] + 0xa8) != '\0') {
        plVar19 = *(long **)(plVar18[1] + 0x48);
        (**(code **)(*plVar19 + 0x10))(plVar19,0);
        if (*(char *)(plVar18[1] + 0xa8) != '\0') {
          plVar19 = *(long **)(plVar18[1] + 0x48);
          (**(code **)(*plVar19 + 0x10))(plVar19,1);
          (**(code **)(*plVar19 + 0x10))(plVar19,2);
        }
      }
      *(undefined1 *)(plVar18 + 4) = 0;
      lVar24 = param_2[2];
      uVar77 = 0;
      uVar74 = 0x3f80000000000000;
      uVar28 = 0x3f80000000000000;
      uVar33 = 0;
      if (lVar24 != 0) {
        if ((*(long *)(lVar24 + 0xd8) == 0) ||
           (uVar16 = (**(code **)(**(long **)(*(long *)(*(long *)(lVar24 + 0xd8) + 8) + 8) + 0x10))
                               (), uVar16 <= uVar15)) {
          pauVar21 = (undefined1 (*) [16])(**(code **)(**(long **)(lVar24 + 0x90) + 0x158))();
        }
        else {
          plVar18 = *(long **)(*(long *)(*(long *)(lVar24 + 0xd8) + 8) + 0x48);
          (**(code **)(*plVar18 + 0x38))(plVar18,0);
          pauVar21 = (undefined1 (*) [16])(extraout_x1_00 + (ulong)uVar15 * 0x40);
        }
        auVar44 = pauVar21[2];
        auVar46 = *pauVar21;
        uVar77 = *(undefined8 *)(pauVar21[1] + 8);
        uVar74 = *(undefined8 *)pauVar21[1];
        uVar28 = *(undefined8 *)(pauVar21[3] + 8);
        uVar33 = *(undefined8 *)pauVar21[3];
      }
    }
    fVar38 = auVar46._0_4_ * 0.0;
    fVar54 = auVar46._4_4_ * 0.0;
    fVar57 = auVar46._8_4_ * 0.0;
    fVar58 = auVar46._12_4_ * 0.0;
    fVar73 = (float)uVar74;
    fVar75 = (float)((ulong)uVar74 >> 0x20);
    fVar76 = (float)uVar77;
    fVar78 = (float)((ulong)uVar77 >> 0x20);
    fVar63 = auVar44._0_4_;
    fVar65 = auVar44._4_4_;
    fVar66 = auVar44._8_4_;
    fVar67 = auVar44._12_4_;
    fVar68 = (float)uVar33;
    fVar69 = (float)((ulong)uVar33 >> 0x20);
    fVar70 = (float)uVar28;
    fVar71 = (float)((ulong)uVar28 >> 0x20);
    fVar59 = auVar46._0_4_ + fVar73 * 0.0 + fVar63 * 0.0 + fVar68 * 0.0;
    fVar50 = auVar46._4_4_ + fVar75 * 0.0 + fVar65 * 0.0 + fVar69 * 0.0;
    fVar56 = fVar68 + fVar38 + fVar73 * 36.0 + fVar63 * 0.0;
    fVar55 = fVar69 + fVar54 + fVar75 * 36.0 + fVar65 * 0.0;
    auVar41._0_8_ = CONCAT44(fVar55,fVar56);
    auVar41._8_4_ = fVar70 + fVar57 + fVar76 * 36.0 + fVar66 * 0.0;
    auVar41._12_4_ = fVar71 + fVar58 + fVar78 * 36.0 + fVar67 * 0.0;
    uStack_f8 = auVar41._8_8_;
    local_110 = fVar63 + fVar38 + fVar73 * 0.0 + fVar68 * 0.0;
    fStack_10c = fVar65 + fVar54 + fVar75 * 0.0 + fVar69 * 0.0;
    fStack_108 = fVar66 + fVar57 + fVar76 * 0.0 + fVar70 * 0.0;
    fStack_104 = fVar67 + fVar58 + fVar78 * 0.0 + fVar71 * 0.0;
    local_120 = fVar73 + fVar38 + fVar63 * 0.0 + fVar68 * 0.0;
    fStack_11c = fVar75 + fVar54 + fVar65 * 0.0 + fVar69 * 0.0;
    local_118 = fVar76 + fVar57 + fVar66 * 0.0 + fVar70 * 0.0;
    fStack_114 = fVar78 + fVar58 + fVar67 * 0.0 + fVar71 * 0.0;
    uStack_128 = (long **)CONCAT44(auVar46._12_4_ + fVar78 * 0.0 + fVar67 * 0.0 + fVar71 * 0.0,
                                   auVar46._8_4_ + fVar76 * 0.0 + fVar66 * 0.0 + fVar70 * 0.0);
    local_130 = (long ***)CONCAT44(fVar50,fVar59);
    local_100 = auVar41._0_8_;
    fVar38 = atan2f(fVar50,fVar59);
    lVar24 = *(long *)(*(long *)(*(long *)(*(long *)param_2[0xe] + 8) + 8) + 0x18);
    if ((*(char *)(lVar24 + 0x128) == '\0') ||
       (*(char *)(*(long *)(lVar24 + 8) + 0xe8) != '\0' ||
        *(char *)(*(long *)(lVar24 + 8) + 0xe7) != '\0')) {
      *(undefined1 *)(lVar24 + 0x129) = 1;
LAB_7102bd4c9c:
      *(undefined8 *)(lVar24 + 0x18) = 0;
      *(undefined8 *)(lVar24 + 0x10) = auVar41._0_8_;
    }
    else if ((1e-05 < ABS(*(float *)(lVar24 + 0x10) - fVar56)) ||
            (1e-05 < ABS(*(float *)(lVar24 + 0x14) - fVar55))) {
      *(undefined1 *)(lVar24 + 0x12a) = 1;
      goto LAB_7102bd4c9c;
    }
    if ((1e-05 <= ABS(0.0 - fVar38)) || (1e-05 <= ABS(*(float *)(lVar24 + 0x30) - fVar38))) {
      *(float *)(lVar24 + 0x30) = fVar38;
      *(undefined1 *)(lVar24 + 0x129) = 1;
    }
    fVar54 = *(float *)(lVar24 + 0x50);
    fVar57 = *(float *)(lVar24 + 0x54);
    uVar22 = *(undefined4 *)(lVar24 + 0x58);
    uVar10 = *(undefined4 *)(lVar24 + 0x5c);
    if (1e-05 <= ABS(fVar54 + -1.0)) {
      fVar54 = 1.0;
      *(undefined1 *)(lVar24 + 0x129) = 1;
      *(undefined4 *)(lVar24 + 0x58) = uVar22;
      *(undefined4 *)(lVar24 + 0x5c) = uVar10;
      *(undefined4 *)(lVar24 + 0x50) = 0x3f800000;
      *(float *)(lVar24 + 0x54) = fVar57;
    }
    if (1e-05 <= ABS(fVar57 + -1.0)) {
      *(undefined1 *)(lVar24 + 0x129) = 1;
      *(undefined4 *)(lVar24 + 0x58) = uVar22;
      *(undefined4 *)(lVar24 + 0x5c) = uVar10;
      *(ulong *)(lVar24 + 0x50) = CONCAT44(0x3f800000,fVar54);
    }
    uVar72 = 0;
    do {
      plVar18 = param_2 + uVar72 + 0x10;
      lVar24 = *plVar18;
      if (lVar24 != 0) {
        if (((int)param_2[10] != 0) && ((int)param_2[10] != 6)) {
          fVar54 = *(float *)(param_2 + 9);
          if (0.0 <= fVar54) {
            if (360.0 < fVar54) {
              fVar54 = fVar54 + -360.0;
            }
          }
          else {
            fVar54 = fVar54 + 360.0;
          }
          lVar29 = *(long *)(param_2[1] + 0x1c0);
          if ((ulong)(*(long *)(param_2[1] + 0x1c8) - lVar29 >> 3) <= uVar72) {
                    /* WARNING: Subroutine does not return */
            std::__vector_base_common<true>::__throw_out_of_range();
          }
          pfVar1 = (float *)(lVar29 + uVar72 * 8);
          fVar58 = *pfVar1;
          fVar57 = pfVar1[1];
          if (fVar58 <= fVar57) {
            bVar12 = false;
            bVar13 = true;
            if (fVar58 <= fVar54) {
              bVar12 = false;
              bVar13 = true;
              if (!NAN(fVar54) && !NAN(fVar57)) {
                bVar12 = fVar54 == fVar57;
                bVar13 = fVar57 <= fVar54;
              }
            }
            if (!bVar13 || bVar12) goto LAB_7102bd4ed8;
          }
          else {
            bVar12 = false;
            bVar13 = false;
            if (fVar54 < fVar58) {
              bVar12 = false;
              bVar13 = true;
              if (!NAN(fVar54) && !NAN(fVar57)) {
                bVar12 = fVar54 == fVar57;
                bVar13 = fVar57 <= fVar54;
              }
            }
            if (!bVar13 || bVar12) {
LAB_7102bd4ed8:
              if (((*(int *)((long)param_2 + 0x54) != 3) || (3 < (int)uVar72 - 1U)) ||
                 (*(char *)((long)param_2 + 0x59) == '\0')) {
                *(undefined1 *)(lVar24 + 0x128) = 1;
                if (*(long *)(lVar24 + 8) != 0) {
                  *(undefined8 *)(*(long *)(lVar24 + 8) + 0xd8) = 0xffffffffffffffff;
                  FUN_7100532bc0(*(long *)(lVar24 + 8),0);
                }
                lVar24 = *(long *)(*(long *)(*plVar18 + 8) + 0x18);
                fVar54 = fVar38 + (float)(&DAT_7104557998)[uVar72 * 3] * -0.017453292;
                if ((*(char *)(lVar24 + 0x128) == '\0') ||
                   (*(char *)(*(long *)(lVar24 + 8) + 0xe8) != '\0' ||
                    *(char *)(*(long *)(lVar24 + 8) + 0xe7) != '\0')) {
                  *(undefined1 *)(lVar24 + 0x129) = 1;
LAB_7102bd4f84:
                  *(undefined8 *)(lVar24 + 0x18) = 0;
                  *(undefined8 *)(lVar24 + 0x10) = auVar41._0_8_;
                }
                else if ((1e-05 < ABS(*(float *)(lVar24 + 0x10) - fVar56)) ||
                        (1e-05 < ABS(*(float *)(lVar24 + 0x14) - fVar55))) {
                  *(undefined1 *)(lVar24 + 0x12a) = 1;
                  goto LAB_7102bd4f84;
                }
                if ((1e-05 <= ABS(0.0 - fVar54)) ||
                   (1e-05 <= ABS(*(float *)(lVar24 + 0x30) - fVar54))) {
                  *(float *)(lVar24 + 0x30) = fVar54;
                  *(undefined1 *)(lVar24 + 0x129) = 1;
                }
                auVar44 = *(undefined1 (*) [16])(lVar24 + 0x50);
                auVar42 = auVar44;
                if (1e-05 <= ABS(auVar44._0_4_ + -1.0)) {
                  auVar42._4_12_ = auVar44._4_12_;
                  auVar42._0_4_ = 0x3f800000;
                  *(long *)(lVar24 + 0x58) = auVar44._8_8_;
                  *(long *)(lVar24 + 0x50) = auVar42._0_8_;
                  *(undefined1 *)(lVar24 + 0x129) = 1;
                }
                if (1e-05 <= ABS(auVar42._4_4_ + -1.0)) {
                  *(long *)(lVar24 + 0x58) = auVar42._8_8_;
                  *(ulong *)(lVar24 + 0x50) = CONCAT44(0x3f800000,auVar42._0_4_);
                  *(undefined1 *)(lVar24 + 0x129) = 1;
                }
                plVar19 = (long *)(*(long *)(*plVar18 + 8) + 0x98);
                for (plVar18 = (long *)*plVar19; plVar19 != plVar18; plVar18 = (long *)*plVar18) {
                    /* WARNING: Read-only address (ram,0x0071044656b0) is written */
                    /* WARNING: Read-only address (ram,0x007104468ca0) is written */
                    /* WARNING: Read-only address (ram,0x0071044697a0) is written */
                    /* WARNING: Read-only address (ram,0x00710446a350) is written */
                    /* WARNING: Read-only address (ram,0x00710446a360) is written */
                  *(undefined1 *)((long)plVar18 + 0x44) = 1;
                }
                goto LAB_7102bd5020;
              }
            }
          }
        }
        *(undefined1 *)(lVar24 + 0x128) = 0;
        *(undefined1 *)(lVar24 + 0x130) = *(undefined1 *)(lVar24 + 299);
        *(undefined4 *)(lVar24 + 299) = 0;
        uVar28 = *(undefined8 *)(lVar24 + 0x100);
        *(undefined1 *)(lVar24 + 0x12f) = 0;
        *(undefined8 *)(lVar24 + 0x100) = *(undefined8 *)(lVar24 + 0x88);
        *(undefined8 *)(lVar24 + 0x108) = *(undefined8 *)(lVar24 + 0x90);
        uVar33 = *(undefined8 *)(lVar24 + 0x98);
        *(undefined8 *)(lVar24 + 0x98) = *(undefined8 *)(lVar24 + 0x110);
        *(undefined8 *)(lVar24 + 0x88) = uVar28;
        *(undefined8 *)(lVar24 + 0x90) = uVar28;
        *(undefined8 *)(lVar24 + 0xc0) = *(undefined8 *)(lVar24 + 0xb8);
        *(undefined8 *)(lVar24 + 0xd8) = *(undefined8 *)(lVar24 + 0xd0);
        *(undefined8 *)(lVar24 + 0x110) = uVar33;
        *(undefined8 *)(lVar24 + 0xa8) = *(undefined8 *)(lVar24 + 0xa0);
        *(undefined8 *)(lVar24 + 0xf0) = *(undefined8 *)(lVar24 + 0xe8);
        if (*(long *)(lVar24 + 8) != 0) {
          *(undefined8 *)(*(long *)(lVar24 + 8) + 0xd8) = 0;
          lVar24 = *(long *)(lVar24 + 8);
          if (*(char *)(lVar24 + 0xe0) != '\0') {
            plVar18 = *(long **)(lVar24 + 0x80);
            *(undefined2 *)(lVar24 + 0xe0) = 0;
            *(undefined2 *)(lVar24 + 0xe7) = 0;
            for (; (long *)(lVar24 + 0x80) != plVar18; plVar18 = (long *)*plVar18) {
                    /* WARNING: Read-only address (ram,0x0071044656b0) is written */
                    /* WARNING: Read-only address (ram,0x007104468ca0) is written */
                    /* WARNING: Read-only address (ram,0x0071044697a0) is written */
                    /* WARNING: Read-only address (ram,0x00710446a350) is written */
                    /* WARNING: Read-only address (ram,0x00710446a360) is written */
              uVar15 = *(uint *)((long)plVar18 + 0xfc);
              *(undefined1 *)(plVar18 + 0x20) = 0;
              if (uVar15 != 0) {
                plVar19 = (long *)plVar18[0x1e];
                *(undefined1 *)(*plVar19 + (ulong)uVar15 * 0x18 + 0x10) = 0;
                plVar19 = (long *)plVar19[3];
                (**(code **)(*plVar19 + 0x18))(plVar19,(ulong)uVar15,0);
              }
              *(undefined4 *)(plVar18 + 0x10) = 0;
              plVar18[0xe] = 0;
              plVar18[0xf] = 0;
              plVar18[0xc] = 0;
              plVar18[0xd] = 0;
            }
                    /* WARNING: Read-only address (ram,0x0071044656b0) is written */
                    /* WARNING: Read-only address (ram,0x007104468ca0) is written */
                    /* WARNING: Read-only address (ram,0x0071044697a0) is written */
                    /* WARNING: Read-only address (ram,0x00710446a350) is written */
                    /* WARNING: Read-only address (ram,0x00710446a360) is written */
            for (plVar18 = *(long **)(lVar24 + 0x68); (long *)(lVar24 + 0x68) != plVar18;
                plVar18 = (long *)*plVar18) {
                    /* WARNING: Read-only address (ram,0x0071044656b0) is written */
                    /* WARNING: Read-only address (ram,0x007104468ca0) is written */
                    /* WARNING: Read-only address (ram,0x0071044697a0) is written */
                    /* WARNING: Read-only address (ram,0x00710446a350) is written */
                    /* WARNING: Read-only address (ram,0x00710446a360) is written */
              *(undefined1 *)(plVar18 + 10) = 0;
            }
                    /* WARNING: Read-only address (ram,0x0071044656b0) is written */
                    /* WARNING: Read-only address (ram,0x007104468ca0) is written */
                    /* WARNING: Read-only address (ram,0x0071044697a0) is written */
                    /* WARNING: Read-only address (ram,0x00710446a350) is written */
                    /* WARNING: Read-only address (ram,0x00710446a360) is written */
            FUN_7100525010(DAT_71052b9298,lVar24);
          }
        }
      }
LAB_7102bd5020:
      uVar72 = uVar72 + 1;
    } while (uVar72 < 8);
  }
  plVar18 = *(long **)param_2[0xf];
  plVar19 = (long *)((long *)param_2[0xf])[1];
  if (plVar18 != plVar19) {
    fVar38 = *(float *)(param_2 + 6);
    fVar56 = *(float *)((long)param_2 + 0x34);
    do {
      lVar24 = *plVar18;
      if (*(char *)(lVar24 + 0x128) == '\0' ||
          (*(char *)(*(long *)(lVar24 + 8) + 0xe8) != '\0' ||
          *(char *)(*(long *)(lVar24 + 8) + 0xe7) != '\0')) {
        *(undefined1 *)(lVar24 + 0x129) = 1;
LAB_7102bd50b0:
        *(undefined8 *)(lVar24 + 0x18) = 0;
        *(float *)(lVar24 + 0x10) = fVar38;
        *(float *)(lVar24 + 0x14) = fVar56;
      }
      else if ((1e-05 < ABS(*(float *)(lVar24 + 0x10) - fVar38)) ||
              (1e-05 < ABS(*(float *)(lVar24 + 0x14) - fVar56))) {
        *(undefined1 *)(lVar24 + 0x12a) = 1;
        goto LAB_7102bd50b0;
      }
      if ((1e-05 <= ABS(0.0 - fVar79)) || (1e-05 <= ABS(*(float *)(lVar24 + 0x30) - fVar79))) {
        *(float *)(lVar24 + 0x30) = fVar79;
        *(undefined1 *)(lVar24 + 0x129) = 1;
      }
      fVar54 = *(float *)(lVar24 + 0x50);
      fVar55 = *(float *)(lVar24 + 0x54);
      uVar22 = *(undefined4 *)(lVar24 + 0x58);
      uVar10 = *(undefined4 *)(lVar24 + 0x5c);
      if (1e-05 <= ABS(fVar54 + -1.0)) {
        fVar54 = 1.0;
        *(undefined1 *)(lVar24 + 0x129) = 1;
        *(undefined4 *)(lVar24 + 0x58) = uVar22;
        *(undefined4 *)(lVar24 + 0x5c) = uVar10;
        *(undefined4 *)(lVar24 + 0x50) = 0x3f800000;
        *(float *)(lVar24 + 0x54) = fVar55;
      }
      if (1e-05 <= ABS(fVar55 + -1.0)) {
        *(undefined1 *)(lVar24 + 0x129) = 1;
        *(undefined4 *)(lVar24 + 0x58) = uVar22;
        *(undefined4 *)(lVar24 + 0x5c) = uVar10;
        *(ulong *)(lVar24 + 0x50) = CONCAT44(0x3f800000,fVar54);
      }
      plVar18 = plVar18 + 1;
    } while (plVar19 != plVar18);
  }
  lVar24 = param_2[2];
  if (lVar24 == 0) {
    return;
  }
  lVar29 = *(long *)(lVar24 + 0xd8);
joined_r0x007102bd5134:
  if (lVar29 == 0) {
    if (lVar24 == 0) {
      return;
    }
    fVar38 = 0.0;
  }
  else {
    if (lVar24 == 0) {
      return;
    }
    fVar38 = *(float *)(lVar29 + 0x10);
  }
  FUN_71025ee840(fVar38,lVar24 + 0x60);
                    /* WARNING: Read-only address (ram,0x0071044656b0) is written */
                    /* WARNING: Read-only address (ram,0x007104468ca0) is written */
                    /* WARNING: Read-only address (ram,0x0071044697a0) is written */
                    /* WARNING: Read-only address (ram,0x00710446a350) is written */
                    /* WARNING: Read-only address (ram,0x00710446a360) is written */
  return;
}

