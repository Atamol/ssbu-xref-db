// addr:      71030b1680
// offset:    0x30b1680
// name:      FUN_71030b1680
// mangled:   
// signature: undefined8 __cdecl FUN_71030b1680(float param_1, long param_2, undefined8 param_3, char * param_4, byte * * * * param_5, undefined1[12] * param_6, undefined8 param_7, undefined8 param_8, undefined8 param_9)


undefined8
FUN_71030b1680(float param_1,long param_2,undefined8 param_3,char *param_4,byte ****param_5,
              undefined1 (*param_6) [12],undefined8 param_7,undefined8 param_8,undefined8 param_9)

{
  undefined1 (*pauVar1) [12];
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 uVar6;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 extraout_x1_07;
  undefined8 extraout_x1_08;
  undefined8 extraout_x1_09;
  undefined8 extraout_x1_10;
  undefined8 extraout_x1_11;
  code *pcVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  long *plVar11;
  float fVar12;
  long **local_60;
  long *local_58;
  long local_50;
  undefined8 local_48;
  
  iVar2 = *(int *)(param_2 + 0x44);
  if (iVar2 == 3) {
    lVar8 = *(long *)(param_2 + 0xa0);
    if ((lVar8 != 0) && (*(char *)(lVar8 + 0x35) != '\0')) {
      uVar3 = *(uint *)(lVar8 + 0x3c);
      lVar8 = *lib::Singleton<lib::EffectManager>::instance_;
      std::mutex::lock();
      if ((0 < (int)uVar3) &&
         (lVar8 = lVar8 + (ulong)(uVar3 >> 0x18) * 0x300,
         lVar8 != 0 && *(uint *)(lVar8 + 4) == uVar3)) {
        param_4 = (char *)0x0;
        param_5 = (byte ****)0x0;
        FUN_71035707d0(lVar8,0,(long ****)0x0,0,(long ****)param_6,param_7,param_8,param_9);
      }
      std::mutex::unlock();
      param_3 = extraout_x1;
    }
    puVar10 = *(undefined8 **)(param_2 + 0xe0);
    if (*(int *)(param_2 + 0x40) == 1) {
      if (puVar10 == (undefined8 *)0x0) goto LAB_71030b192c;
      puVar4 = (undefined8 *)*puVar10;
      puVar10 = (undefined8 *)puVar10[1];
      param_4 = "IPP0002";
    }
    else {
      if (puVar10 == (undefined8 *)0x0) goto LAB_71030b192c;
      puVar4 = (undefined8 *)*puVar10;
      puVar10 = (undefined8 *)puVar10[1];
      param_4 = "IPP0003";
    }
    FUN_71025f55b0(puVar4,puVar10,param_4);
    param_3 = extraout_x1_01;
LAB_71030b192c:
    lVar8 = *(long *)(param_2 + 0x20);
    if (lVar8 != 0) {
      *(undefined1 *)(lVar8 + 0x110) = 0;
      FUN_71025e9d50((long *)(lVar8 + 0x108),param_3,(long ****)param_4,param_5,(long ****)param_6,
                     param_7,param_8,param_9);
      lVar8 = *(long *)(param_2 + 0x20);
      param_3 = extraout_x1_02;
      if (lVar8 != 0) {
        *(byte *)(lVar8 + 0x118) = *(byte *)(lVar8 + 0x118) | 1;
        lVar8 = *(long *)(param_2 + 0x20);
        if (lVar8 != 0) {
          if ((*(char *)(lVar8 + 0xe0) != '\0') && (*(long *)(lVar8 + 200) != 0)) {
            *(undefined2 *)(*(long *)(lVar8 + 200) + 0x30) = 0x101;
          }
          if (*(long *)(lVar8 + 0xd8) != 0) {
            *(undefined1 *)(*(long *)(lVar8 + 0xd8) + 0x21) = 1;
          }
          if (*(char *)(lVar8 + 0xe0) != '\0') {
            *(undefined1 *)(*(long *)(lVar8 + 0xb0) + 0x10) = 0;
          }
        }
      }
    }
    lVar8 = *(long *)(param_2 + 0x28);
    if (lVar8 != 0) {
      *(undefined1 *)(lVar8 + 0x110) = 0;
      FUN_71025e9d50((long *)(lVar8 + 0x108),param_3,(long ****)param_4,param_5,(long ****)param_6,
                     param_7,param_8,param_9);
      lVar8 = *(long *)(param_2 + 0x28);
      if (lVar8 != 0) {
        *(byte *)(lVar8 + 0x118) = *(byte *)(lVar8 + 0x118) | 1;
        lVar8 = *(long *)(param_2 + 0x28);
        if (lVar8 != 0) {
          if ((*(char *)(lVar8 + 0xe0) != '\0') && (*(long *)(lVar8 + 200) != 0)) {
            *(undefined2 *)(*(long *)(lVar8 + 200) + 0x30) = 0x101;
          }
          if (*(long *)(lVar8 + 0xd8) != 0) {
            *(undefined1 *)(*(long *)(lVar8 + 0xd8) + 0x21) = 1;
          }
          if (*(char *)(lVar8 + 0xe0) != '\0') {
            *(undefined1 *)(*(long *)(lVar8 + 0xb0) + 0x10) = 0;
          }
        }
      }
    }
    *(undefined4 *)(param_2 + 0x44) = 0;
    return 0;
  }
  if (iVar2 != 2) {
    if (iVar2 != 1) {
      return 0;
    }
    *(undefined8 *)(param_2 + 0x44) = 2;
    *(undefined2 *)(param_2 + 0x4c) = 0;
    *(undefined1 *)(param_2 + 0xd8) = 0;
    if (*(int *)(param_2 + 0x40) == 1) {
      *(undefined8 *)(param_2 + 0x30) = 0x19c5b75740;
      *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_2 + 0x18);
      *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_2 + 0x10);
      *(undefined8 *)(param_2 + 0x38) = 0x18f862fcc0;
      param_5 = (byte ****)0x1;
      FUN_7102627ec0(&local_60,*(ulong **)(*(long *)(param_2 + 8) + 800),0x183c861635,1,
                     (long ****)param_6,param_7,param_8,param_9);
      if (((long ***)(param_2 + 0x90) != &local_60) &&
         (lVar8 = *(long *)(param_2 + 0xa0), lVar8 != local_50)) {
        if (local_50 == 0) goto LAB_71030b1754;
LAB_71030b1a78:
        plVar5 = (long *)(param_2 + 0x90);
        if (lVar8 != 0) {
          lVar9 = *plVar5;
          plVar11 = *(long **)(param_2 + 0x98);
          *plVar11 = lVar9;
          *(long **)(lVar9 + 8) = plVar11;
          *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + -1;
          *(undefined8 *)(param_2 + 0x98) = 0;
          *(undefined8 *)(param_2 + 0xa0) = 0;
          *plVar5 = 0;
        }
        puVar10 = *(undefined8 **)(local_50 + 0x20);
        *(long *)(param_2 + 0x90) = local_50 + 0x18;
        *(undefined8 **)(param_2 + 0x98) = puVar10;
        *(long **)(local_50 + 0x20) = plVar5;
        *puVar10 = plVar5;
        *(long *)(local_50 + 0x10) = *(long *)(local_50 + 0x10) + 1;
        *(long *)(param_2 + 0xa0) = local_50;
      }
    }
    else {
      if (*(int *)(param_2 + 0x40) != 2) goto LAB_71030b1b08;
      *(undefined8 *)(param_2 + 0x30) = 0x1a4272be10;
      *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_2 + 0x10);
      *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_2 + 0x18);
      *(undefined8 *)(param_2 + 0x38) = 0x1765e6fe35;
      param_5 = (byte ****)0x1;
      FUN_7102627ec0(&local_60,*(ulong **)(*(long *)(param_2 + 8) + 800),0x1821f7ce47,1,
                     (long ****)param_6,param_7,param_8,param_9);
      if (((long ***)(param_2 + 0x90) != &local_60) &&
         (lVar8 = *(long *)(param_2 + 0xa0), lVar8 != local_50)) {
        if (local_50 != 0) goto LAB_71030b1a78;
LAB_71030b1754:
        if (lVar8 != 0) {
          lVar9 = *(long *)(param_2 + 0x90);
          plVar5 = *(long **)(param_2 + 0x98);
          *plVar5 = lVar9;
          *(long **)(lVar9 + 8) = plVar5;
          *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + -1;
          *(undefined8 *)(param_2 + 0x98) = 0;
          *(undefined8 *)(param_2 + 0xa0) = 0;
          *(undefined8 *)(param_2 + 0x90) = 0;
        }
      }
    }
    if (local_50 != 0) {
      *local_58 = (long)local_60;
      local_60[1] = local_58;
      *(long *)(local_50 + 0x10) = *(long *)(local_50 + 0x10) + -1;
      local_58 = (long *)0x0;
      local_50 = 0;
      local_60 = (long **)0x0;
    }
LAB_71030b1b08:
    plVar11 = (long *)(param_2 + 0x20);
    plVar5 = (long *)(param_2 + 0x28);
    FUN_7102610220(*plVar11,*(ulong *)(param_2 + 0x30));
    lVar8 = *plVar11;
    if (lVar8 != 0) {
      if ((*(char *)(lVar8 + 0xe0) != '\0') && (*(long *)(lVar8 + 200) != 0)) {
        *(undefined2 *)(*(long *)(lVar8 + 200) + 0x30) = 0;
      }
      if (*(long *)(lVar8 + 0xd8) != 0) {
        *(undefined1 *)(*(long *)(lVar8 + 0xd8) + 0x21) = 0;
      }
      if (*(char *)(lVar8 + 0xe0) != '\0') {
        *(undefined1 *)(*(long *)(lVar8 + 0xb0) + 0x10) = 1;
      }
    }
    FUN_710260fdd0(0,*plVar11,1);
    lVar8 = *plVar11;
    if (lVar8 != 0) {
      *(byte *)(lVar8 + 0x118) = *(byte *)(lVar8 + 0x118) & 0xfe;
      if ((*plVar11 != 0) && (lVar8 = *(long *)(*plVar11 + 0xd8), lVar8 != 0)) {
        *(undefined1 *)(lVar8 + 0x22) = 0;
      }
    }
    FUN_7102610220(*plVar5,*(ulong *)(param_2 + 0x38));
    lVar8 = *plVar5;
    if (lVar8 != 0) {
      if ((*(char *)(lVar8 + 0xe0) != '\0') && (*(long *)(lVar8 + 200) != 0)) {
        *(undefined2 *)(*(long *)(lVar8 + 200) + 0x30) = 0;
      }
      if (*(long *)(lVar8 + 0xd8) != 0) {
        *(undefined1 *)(*(long *)(lVar8 + 0xd8) + 0x21) = 0;
      }
      if (*(char *)(lVar8 + 0xe0) != '\0') {
        *(undefined1 *)(*(long *)(lVar8 + 0xb0) + 0x10) = 1;
      }
    }
    FUN_710260fdd0(0,*plVar5,1);
    lVar8 = *plVar5;
    if (lVar8 != 0) {
      *(byte *)(lVar8 + 0x118) = *(byte *)(lVar8 + 0x118) & 0xfe;
      if ((*plVar5 != 0) && (lVar8 = *(long *)(*plVar5 + 0xd8), lVar8 != 0)) {
        *(undefined1 *)(lVar8 + 0x22) = 0;
      }
    }
    *(undefined1 *)(param_2 + 0x4f) = 0;
    local_60 = (long **)0x0;
    local_58 = (long *)0x0;
    lVar8 = **(long **)(*(long *)(param_2 + 8) + 0x338);
    if (*(long *)(lVar8 + 8) == 0) {
      return 0;
    }
    local_48 = 0;
    uVar3 = FUN_7102405040(*(long *)(lVar8 + 8),&local_48,1,param_5,(long ****)param_6,param_7,
                           param_8,param_9);
    if (uVar3 == 0xffffffff) {
      return 0;
    }
    if (uVar3 < 0x19) {
      plVar5 = *(long **)(*(long *)(lVar8 + 8) + (long)(int)uVar3 * 0x50 + 0x68);
      if (((*plVar5 != 0) && ((int)plVar5[1] != -1)) && ((int)plVar5[1] == *(int *)(*plVar5 + 0x20))
         ) {
        FUN_7103736cf0(plVar5,(undefined1 (*) [12])&local_60);
      }
    }
    (**(code **)(**(long **)(lVar8 + 8) + 0x58))(*(long **)(lVar8 + 8),5,uVar3);
    return 0;
  }
  fVar12 = *(float *)(param_2 + 0x48);
  if (503.0 < fVar12) {
    *(undefined1 *)(param_2 + 0x4c) = 1;
  }
  if (550.0 < fVar12) {
    *(undefined4 *)(param_2 + 0x44) = 3;
  }
  if (((392.0 <= fVar12) && (*(char *)(param_2 + 0x4d) == '\0')) &&
     (*(char *)(param_2 + 0x4f) == '\0')) {
    if (*(int *)(param_2 + 0x40) == 1) {
      param_4 = (char *)(ulong)*(uint *)(param_2 + 0x80);
      pauVar1 = (undefined1 (*) [12])(param_2 + 0x50);
      param_8 = 1;
      param_5 = (byte ****)0x0;
      param_7 = 0;
      param_6 = pauVar1;
      FUN_71025f0150(&local_60,
                     *(ulong **)(*(long *)(*(long *)(*(long *)(param_2 + 8) + 800) + 0x48) + 800),
                     *(uint *)(param_2 + 0x80),(byte ****)0x0,(long ****)pauVar1,0,1,param_9);
      plVar5 = (long *)(param_2 + 0xa8);
      if (((long ***)plVar5 != &local_60) && (lVar8 = *(long *)(param_2 + 0xb8), lVar8 != local_50))
      {
        if (local_50 == 0) {
          if (lVar8 != 0) {
            lVar9 = *(long *)(param_2 + 0xa8);
            plVar11 = *(long **)(param_2 + 0xb0);
            *plVar11 = lVar9;
            *(long **)(lVar9 + 8) = plVar11;
            *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + -1;
            *(undefined8 *)(param_2 + 0xb0) = 0;
            *(undefined8 *)(param_2 + 0xb8) = 0;
            *plVar5 = 0;
          }
        }
        else {
          if (lVar8 != 0) {
            lVar9 = *plVar5;
            plVar11 = *(long **)(param_2 + 0xb0);
            *plVar11 = lVar9;
            *(long **)(lVar9 + 8) = plVar11;
            *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + -1;
            *(undefined8 *)(param_2 + 0xb0) = 0;
            *(undefined8 *)(param_2 + 0xb8) = 0;
            *plVar5 = 0;
          }
          puVar10 = *(undefined8 **)(local_50 + 0x20);
          *(long *)(param_2 + 0xa8) = local_50 + 0x18;
          *(undefined8 **)(param_2 + 0xb0) = puVar10;
          *(long **)(local_50 + 0x20) = plVar5;
          *puVar10 = plVar5;
          *(long *)(local_50 + 0x10) = *(long *)(local_50 + 0x10) + 1;
          *(long *)(param_2 + 0xb8) = local_50;
        }
      }
      if (local_50 != 0) {
        *local_58 = (long)local_60;
        local_60[1] = local_58;
        *(long *)(local_50 + 0x10) = *(long *)(local_50 + 0x10) + -1;
        local_58 = (long *)0x0;
        local_50 = 0;
        local_60 = (long **)0x0;
      }
      lVar8 = **(long **)(*(long *)(param_2 + 8) + 0x338);
      param_3 = extraout_x1_00;
      if (*(long *)(lVar8 + 8) != 0) {
        param_4 = (char *)0x1;
        local_60 = (long **)0x0;
        uVar3 = FUN_7102405040(*(long *)(lVar8 + 8),&local_60,1,param_5,(long ****)param_6,param_7,
                               param_8,param_9);
        param_3 = extraout_x1_04;
        if (uVar3 != 0xffffffff) {
          if (uVar3 < 0x19) {
            plVar5 = *(long **)(*(long *)(lVar8 + 8) + (long)(int)uVar3 * 0x50 + 0x68);
            if (((*plVar5 != 0) && ((int)plVar5[1] != -1)) &&
               ((int)plVar5[1] == *(int *)(*plVar5 + 0x20))) {
              FUN_7103736cf0(plVar5,pauVar1);
            }
          }
          plVar5 = *(long **)(lVar8 + 8);
          pcVar7 = *(code **)(*plVar5 + 0x58);
          uVar6 = 7;
LAB_71030b1edc:
          param_4 = (char *)(ulong)uVar3;
          (*pcVar7)(plVar5,uVar6);
          param_3 = extraout_x1_06;
        }
      }
    }
    else {
      param_4 = (char *)(ulong)*(uint *)(param_2 + 0x84);
      pauVar1 = (undefined1 (*) [12])(param_2 + 0x50);
      param_8 = 1;
      param_5 = (byte ****)0x0;
      param_7 = 0;
      param_6 = pauVar1;
      FUN_71025f0150(&local_60,
                     *(ulong **)(*(long *)(*(long *)(*(long *)(param_2 + 8) + 800) + 0x48) + 800),
                     *(uint *)(param_2 + 0x84),(byte ****)0x0,(long ****)pauVar1,0,1,param_9);
      plVar5 = (long *)(param_2 + 0xa8);
      if (((long ***)plVar5 != &local_60) && (lVar8 = *(long *)(param_2 + 0xb8), lVar8 != local_50))
      {
        if (local_50 == 0) {
          if (lVar8 != 0) {
            lVar9 = *(long *)(param_2 + 0xa8);
            plVar11 = *(long **)(param_2 + 0xb0);
            *plVar11 = lVar9;
            *(long **)(lVar9 + 8) = plVar11;
            *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + -1;
            *(undefined8 *)(param_2 + 0xb0) = 0;
            *(undefined8 *)(param_2 + 0xb8) = 0;
            *plVar5 = 0;
          }
        }
        else {
          if (lVar8 != 0) {
            lVar9 = *plVar5;
            plVar11 = *(long **)(param_2 + 0xb0);
            *plVar11 = lVar9;
            *(long **)(lVar9 + 8) = plVar11;
            *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + -1;
            *(undefined8 *)(param_2 + 0xb0) = 0;
            *(undefined8 *)(param_2 + 0xb8) = 0;
            *plVar5 = 0;
          }
          puVar10 = *(undefined8 **)(local_50 + 0x20);
          *(long *)(param_2 + 0xa8) = local_50 + 0x18;
          *(undefined8 **)(param_2 + 0xb0) = puVar10;
          *(long **)(local_50 + 0x20) = plVar5;
          *puVar10 = plVar5;
          *(long *)(local_50 + 0x10) = *(long *)(local_50 + 0x10) + 1;
          *(long *)(param_2 + 0xb8) = local_50;
        }
      }
      if (local_50 != 0) {
        *local_58 = (long)local_60;
        local_60[1] = local_58;
        *(long *)(local_50 + 0x10) = *(long *)(local_50 + 0x10) + -1;
        local_58 = (long *)0x0;
        local_50 = 0;
        local_60 = (long **)0x0;
      }
      lVar8 = **(long **)(*(long *)(param_2 + 8) + 0x338);
      param_3 = extraout_x1_03;
      if (*(long *)(lVar8 + 8) != 0) {
        param_4 = (char *)0x1;
        local_60 = (long **)0x0;
        uVar3 = FUN_7102405040(*(long *)(lVar8 + 8),&local_60,1,param_5,(long ****)param_6,param_7,
                               param_8,param_9);
        param_3 = extraout_x1_05;
        if (uVar3 != 0xffffffff) {
          if (uVar3 < 0x19) {
            plVar5 = *(long **)(*(long *)(lVar8 + 8) + (long)(int)uVar3 * 0x50 + 0x68);
            if (((*plVar5 != 0) && ((int)plVar5[1] != -1)) &&
               ((int)plVar5[1] == *(int *)(*plVar5 + 0x20))) {
              FUN_7103736cf0(plVar5,pauVar1);
            }
          }
          plVar5 = *(long **)(lVar8 + 8);
          pcVar7 = *(code **)(*plVar5 + 0x58);
          uVar6 = 0xc;
          goto LAB_71030b1edc;
        }
      }
    }
    if (((*(int *)(param_2 + 0x40) == 2) || (*(int *)(param_2 + 0x40) == 1)) &&
       (lVar8 = *(long *)(param_2 + 0xb8), lVar8 != 0)) {
      uVar6 = CONCAT44((float)((ulong)*(undefined8 *)(param_2 + 0x70) >> 0x20) * 0.017453292,
                       (float)*(undefined8 *)(param_2 + 0x70) * 0.017453292);
      *(undefined8 *)(lVar8 + 0x68) = 0;
      *(undefined8 *)(lVar8 + 0x60) = uVar6;
      if (*(char *)(lVar8 + 0x35) == '\0') {
        *(ulong *)(lVar8 + 0x48) = *(ulong *)(lVar8 + 0x48) | 2;
LAB_71030b1f8c:
        lVar8 = *(long *)(param_2 + 0xb8);
      }
      else {
        uVar3 = *(uint *)(lVar8 + 0x3c);
        if ((int)uVar3 < 1) goto LAB_71030b1f8c;
        lVar8 = *lib::Singleton<lib::EffectManager>::instance_ + (ulong)(uVar3 >> 0x18) * 0x300;
        if ((lVar8 == 0) || (*(uint *)(lVar8 + 4) != uVar3)) goto LAB_71030b1f8c;
        lVar8 = *lib::Singleton<lib::EffectManager>::instance_ + (ulong)(uVar3 >> 0x18) * 0x300;
        *(undefined8 *)(lVar8 + 0x118) = 0;
        *(undefined8 *)(lVar8 + 0x110) = uVar6;
        *(undefined1 *)(lVar8 + 0x2da) = 1;
        lVar8 = *(long *)(param_2 + 0xb8);
      }
      if (lVar8 != 0) {
        *(undefined8 *)(lVar8 + 0x78) = 0x3f800000;
        *(undefined8 *)(lVar8 + 0x70) = 0x3f4000003f800000;
        if (*(char *)(lVar8 + 0x35) == '\0') {
          *(ulong *)(lVar8 + 0x48) = *(ulong *)(lVar8 + 0x48) | 4;
LAB_71030b2014:
          lVar8 = *(long *)(param_2 + 0xb8);
        }
        else {
          uVar3 = *(uint *)(lVar8 + 0x3c);
          if ((int)uVar3 < 1) goto LAB_71030b2014;
          lVar8 = *lib::Singleton<lib::EffectManager>::instance_ + (ulong)(uVar3 >> 0x18) * 0x300;
          if ((lVar8 == 0) || (*(uint *)(lVar8 + 4) != uVar3)) goto LAB_71030b2014;
          lVar8 = *lib::Singleton<lib::EffectManager>::instance_ + (ulong)(uVar3 >> 0x18) * 0x300;
          *(undefined1 *)(lVar8 + 0x2da) = 1;
          *(undefined8 *)(lVar8 + 0x108) = 0x3f800000;
          *(undefined8 *)(lVar8 + 0x100) = 0x3f4000003f800000;
          *(uint *)(lVar8 + 0x26c) = *(uint *)(lVar8 + 0x26c) | 0x2000;
          lVar8 = *(long *)(param_2 + 0xb8);
        }
        if (lVar8 != 0) {
          *(undefined4 *)(lVar8 + 0x8c) = 0x3dcccccd;
          if (*(char *)(lVar8 + 0x35) == '\0') {
            *(ulong *)(lVar8 + 0x48) = *(ulong *)(lVar8 + 0x48) | 0x10;
          }
          else {
            FUN_7103564690(0x3dcccccd,*lib::Singleton<lib::EffectManager>::instance_,
                           *(uint *)(lVar8 + 0x3c));
            param_3 = extraout_x1_07;
          }
        }
      }
    }
    fVar12 = *(float *)(param_2 + 0x48);
    *(undefined2 *)(param_2 + 0x4d) = 1;
    *(undefined1 *)(param_2 + 0x4f) = 1;
  }
  if (*(int *)(param_2 + 0x40) == 1) {
    if (409.0 <= fVar12) {
      if ((*(char *)(param_2 + 0x4d) != '\0') && (*(char *)(param_2 + 0x4e) == '\0')) {
        *(undefined1 *)(param_2 + 0x4e) = 1;
        param_4 = (char *)(ulong)*(uint *)(param_2 + 0x88);
        param_6 = (undefined1 (*) [12])(param_2 + 0x60);
        param_8 = 1;
        param_5 = (byte ****)0x0;
        param_7 = 0;
        FUN_71025f0150(&local_60,
                       *(ulong **)(*(long *)(*(long *)(*(long *)(param_2 + 8) + 800) + 0x48) + 800),
                       *(uint *)(param_2 + 0x88),(byte ****)0x0,(long ****)param_6,0,1,param_9);
        param_3 = extraout_x1_08;
        if (((long ***)(param_2 + 0xc0) != &local_60) &&
           (lVar8 = *(long *)(param_2 + 0xd0), lVar8 != local_50)) {
          if (local_50 == 0) goto LAB_71030b21b8;
LAB_71030b20f0:
          plVar5 = (long *)(param_2 + 0xc0);
          if (lVar8 != 0) {
            lVar9 = *plVar5;
            plVar11 = *(long **)(param_2 + 200);
            *plVar11 = lVar9;
            *(long **)(lVar9 + 8) = plVar11;
            *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + -1;
            *(undefined8 *)(param_2 + 200) = 0;
            *(undefined8 *)(param_2 + 0xd0) = 0;
            *plVar5 = 0;
          }
          puVar10 = *(undefined8 **)(local_50 + 0x20);
          *(long *)(param_2 + 0xc0) = local_50 + 0x18;
          *(undefined8 **)(param_2 + 200) = puVar10;
          *(long **)(local_50 + 0x20) = plVar5;
          *puVar10 = plVar5;
          *(long *)(local_50 + 0x10) = *(long *)(local_50 + 0x10) + 1;
          *(long *)(param_2 + 0xd0) = local_50;
        }
LAB_71030b21e0:
        if (local_50 != 0) {
          *local_58 = (long)local_60;
          local_60[1] = local_58;
          *(long *)(local_50 + 0x10) = *(long *)(local_50 + 0x10) + -1;
          local_58 = (long *)0x0;
          local_50 = 0;
          local_60 = (long **)0x0;
        }
      }
LAB_71030b2204:
      fVar12 = *(float *)(param_2 + 0x48);
      if (*(int *)(param_2 + 0x40) != 1) goto LAB_71030b22a4;
    }
    if (499.0 <= fVar12) {
LAB_71030b2224:
      if (*(char *)(param_2 + 0x4d) != '\0') {
        lVar8 = *(long *)(param_2 + 0xd0);
        *(undefined1 *)(param_2 + 0x4d) = 0;
        if ((lVar8 != 0) && (*(char *)(lVar8 + 0x35) != '\0')) {
          uVar3 = *(uint *)(lVar8 + 0x3c);
          lVar8 = *lib::Singleton<lib::EffectManager>::instance_;
          std::mutex::lock();
          if ((0 < (int)uVar3) &&
             ((lVar8 = lVar8 + (ulong)(uVar3 >> 0x18) * 0x300, lVar8 != 0 &&
              (*(uint *)(lVar8 + 4) == uVar3)))) {
            param_4 = (char *)0x0;
            param_5 = (byte ****)0x0;
            FUN_71035707d0(lVar8,0,(long ****)0x0,0,(long ****)param_6,param_7,param_8,param_9);
          }
          std::mutex::unlock();
          param_3 = extraout_x1_10;
        }
      }
    }
  }
  else {
    if (412.0 <= fVar12) {
      if ((*(char *)(param_2 + 0x4d) != '\0') && (*(char *)(param_2 + 0x4e) == '\0')) {
        *(undefined1 *)(param_2 + 0x4e) = 1;
        param_4 = (char *)(ulong)*(uint *)(param_2 + 0x8c);
        param_6 = (undefined1 (*) [12])(param_2 + 0x60);
        param_8 = 1;
        param_5 = (byte ****)0x0;
        param_7 = 0;
        FUN_71025f0150(&local_60,
                       *(ulong **)(*(long *)(*(long *)(*(long *)(param_2 + 8) + 800) + 0x48) + 800),
                       *(uint *)(param_2 + 0x8c),(byte ****)0x0,(long ****)param_6,0,1,param_9);
        param_3 = extraout_x1_09;
        if (((long ***)(param_2 + 0xc0) != &local_60) &&
           (lVar8 = *(long *)(param_2 + 0xd0), lVar8 != local_50)) {
          if (local_50 != 0) goto LAB_71030b20f0;
LAB_71030b21b8:
          if (lVar8 != 0) {
            lVar9 = *(long *)(param_2 + 0xc0);
            plVar5 = *(long **)(param_2 + 200);
            *plVar5 = lVar9;
            *(long **)(lVar9 + 8) = plVar5;
            *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + -1;
            *(undefined8 *)(param_2 + 200) = 0;
            *(undefined8 *)(param_2 + 0xd0) = 0;
            *(undefined8 *)(param_2 + 0xc0) = 0;
          }
        }
        goto LAB_71030b21e0;
      }
      goto LAB_71030b2204;
    }
LAB_71030b22a4:
    if (502.0 <= fVar12) goto LAB_71030b2224;
  }
  fVar12 = *(float *)(param_2 + 0x48);
  if ((fVar12 < 0.0) || (*(char *)(param_2 + 0xd8) != '\0')) goto LAB_71030b2410;
  lVar8 = *(long *)(param_2 + 0x20);
  *(undefined1 *)(param_2 + 0xd8) = 1;
  if (lVar8 == 0) {
LAB_71030b2300:
    lVar8 = 0;
  }
  else {
    *(undefined1 *)(lVar8 + 0x110) = 1;
    FUN_71025e9d50((long *)(lVar8 + 0x108),param_3,(long ****)param_4,param_5,(long ****)param_6,
                   param_7,param_8,param_9);
    lVar8 = *(long *)(param_2 + 0x20);
    if (lVar8 == 0) goto LAB_71030b2300;
    *(byte *)(lVar8 + 0x118) = *(byte *)(lVar8 + 0x118) & 0xfe;
    lVar8 = *(long *)(param_2 + 0x20);
  }
  FUN_7102610220(lVar8,*(ulong *)(param_2 + 0x30));
  lVar8 = *(long *)(param_2 + 0x20);
  if (lVar8 != 0) {
    if ((*(char *)(lVar8 + 0xe0) != '\0') && (*(long *)(lVar8 + 200) != 0)) {
      *(undefined2 *)(*(long *)(lVar8 + 200) + 0x30) = 0;
    }
    if (*(long *)(lVar8 + 0xd8) != 0) {
      *(undefined1 *)(*(long *)(lVar8 + 0xd8) + 0x21) = 0;
    }
    if (*(char *)(lVar8 + 0xe0) != '\0') {
      *(undefined1 *)(*(long *)(lVar8 + 0xb0) + 0x10) = 1;
    }
  }
  FUN_710260fdd0(0,*(long *)(param_2 + 0x20),1);
  if ((*(long *)(param_2 + 0x20) != 0) &&
     (lVar8 = *(long *)(*(long *)(param_2 + 0x20) + 0xd8), lVar8 != 0)) {
    *(undefined1 *)(lVar8 + 0x22) = 0;
  }
  lVar8 = *(long *)(param_2 + 0x28);
  if (lVar8 == 0) {
LAB_71030b23a0:
    lVar8 = 0;
  }
  else {
    *(undefined1 *)(lVar8 + 0x110) = 1;
    FUN_71025e9d50((long *)(lVar8 + 0x108),extraout_x1_11,(long ****)param_4,param_5,
                   (long ****)param_6,param_7,param_8,param_9);
    lVar8 = *(long *)(param_2 + 0x28);
    if (lVar8 == 0) goto LAB_71030b23a0;
    *(byte *)(lVar8 + 0x118) = *(byte *)(lVar8 + 0x118) & 0xfe;
    lVar8 = *(long *)(param_2 + 0x28);
  }
  FUN_7102610220(lVar8,*(ulong *)(param_2 + 0x38));
  lVar8 = *(long *)(param_2 + 0x28);
  if (lVar8 != 0) {
    if ((*(char *)(lVar8 + 0xe0) != '\0') && (*(long *)(lVar8 + 200) != 0)) {
      *(undefined2 *)(*(long *)(lVar8 + 200) + 0x30) = 0;
    }
    if (*(long *)(lVar8 + 0xd8) != 0) {
      *(undefined1 *)(*(long *)(lVar8 + 0xd8) + 0x21) = 0;
    }
    if (*(char *)(lVar8 + 0xe0) != '\0') {
      *(undefined1 *)(*(long *)(lVar8 + 0xb0) + 0x10) = 1;
    }
  }
  FUN_710260fdd0(0,*(long *)(param_2 + 0x28),1);
  if ((*(long *)(param_2 + 0x28) != 0) &&
     (lVar8 = *(long *)(*(long *)(param_2 + 0x28) + 0xd8), lVar8 != 0)) {
    *(undefined1 *)(lVar8 + 0x22) = 0;
  }
  fVar12 = *(float *)(param_2 + 0x48);
LAB_71030b2410:
  *(float *)(param_2 + 0x48) = fVar12 + param_1;
  return 0;
}

