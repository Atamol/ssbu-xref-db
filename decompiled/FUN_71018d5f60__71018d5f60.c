// addr:      71018d5f60
// offset:    0x18d5f60
// name:      FUN_71018d5f60
// mangled:   
// signature: undefined __cdecl FUN_71018d5f60(long param_1)


void FUN_71018d5f60(long param_1)

{
  int *piVar1;
  long *******ppppppplVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  undefined4 uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  long *******ppppppplVar10;
  long ******pppppplVar11;
  long ***ppplVar12;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  long *plVar13;
  undefined8 extraout_x1_01;
  long *********ppppppppplVar14;
  undefined **ppuVar15;
  char *pcVar16;
  byte ****ppppbVar17;
  long ****pppplVar18;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar19;
  ulong uVar20;
  long ********pppppppplVar21;
  long *****ppppplVar22;
  long **pplVar23;
  long ****pppplVar24;
  long ******pppppplVar25;
  long ******pppppplVar26;
  long ****pppplVar27;
  long *plVar28;
  long *******ppppppplVar29;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  long ***local_78;
  long ********local_70;
  undefined4 local_64;
  
  plVar28 = (long *)(param_1 + 0xe8);
  *(undefined8 *)(*plVar28 + 0x70) = 1;
  lVar7 = *plVar28;
  FUN_710323beb0(lVar7,(ulong *)&DAT_7104545680,(long)*(int *)(lVar7 + 0x70),
                 (ulong)*(uint *)(lVar7 + 0x68),(long ****)0x0,in_x5,in_x6,in_x7);
  lVar7 = *plVar28;
  local_70 = (long ********)0x1dd5d06117;
  FUN_710323beb0(lVar7,(ulong *)&local_70,(long)*(int *)(lVar7 + 0x70),
                 (ulong)*(uint *)(lVar7 + 0x68),(long ****)0x1,in_x5,in_x6,in_x7);
  lVar7 = *plVar28;
  local_70 = (long ********)0x22f525ad60;
  FUN_710323beb0(lVar7,(ulong *)&local_70,(long)*(int *)(lVar7 + 0x70),
                 (ulong)*(uint *)(lVar7 + 0x68),(long ****)0x1,in_x5,in_x6,in_x7);
  lVar7 = *plVar28;
  FUN_710323beb0(lVar7,(ulong *)&DAT_7104545688,(long)*(int *)(lVar7 + 0x70),
                 (ulong)*(uint *)(lVar7 + 0x68),(long ****)0x1,in_x5,in_x6,in_x7);
  lVar7 = *plVar28;
  local_70 = (long ********)0x1dd5d06117;
  FUN_710323beb0(lVar7,(ulong *)&local_70,(long)*(int *)(lVar7 + 0x70),
                 (ulong)*(uint *)(lVar7 + 0x68),(long ****)0x1,in_x5,in_x6,in_x7);
  lVar7 = *plVar28;
  local_70 = (long ********)0x22f525ad60;
  FUN_710323beb0(lVar7,(ulong *)&local_70,(long)*(int *)(lVar7 + 0x70),
                 (ulong)*(uint *)(lVar7 + 0x68),(long ****)0x1,in_x5,in_x6,in_x7);
  lVar7 = *plVar28;
  ppppppppplVar14 = (long *********)(long)*(int *)(lVar7 + 0x70);
  ppppbVar17 = (byte ****)(ulong)*(uint *)(lVar7 + 0x68);
  pppplVar18 = (long ****)0x1;
  FUN_710323beb0(lVar7,(ulong *)&DAT_7104545690,(long)ppppppppplVar14,(ulong)ppppbVar17,
                 (long ****)0x1,in_x5,in_x6,in_x7);
  lVar7 = *plVar28;
  uVar8 = FUN_710323cb80(lVar7,extraout_x1,ppppppppplVar14,ppppbVar17,pppplVar18,in_x5,in_x6,in_x7);
  while ((uVar8 & 1) == 0) {
    nn::os::SleepThread(1000000);
    uVar8 = FUN_710323cb80(lVar7,extraout_x1_00,ppppppppplVar14,ppppbVar17,pppplVar18,in_x5,in_x6,
                           in_x7);
  }
  puVar9 = (undefined8 *)
           FUN_710392e290(0x10,0x88,(long ****)ppppppppplVar14,ppppbVar17,pppplVar18,in_x5,in_x6,
                          in_x7);
  if (puVar9 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_78 = (long ***)((ulong)local_78 & 0xffffffff00000000);
      local_70 = (long ********)&DAT_00000088;
      ppppppppplVar14 = &local_70;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_78);
      if (((uVar8 & 1) != 0) &&
         (puVar9 = (undefined8 *)
                   FUN_710392e290(0x10,0x88,(long ****)ppppppppplVar14,ppppbVar17,pppplVar18,in_x5,
                                  in_x6,in_x7), puVar9 != (undefined8 *)0x0)) goto LAB_71018d60f8;
    }
    puVar9 = (undefined8 *)0x0;
  }
LAB_71018d60f8:
  *puVar9 = &PTR_FUN_71050af7f8;
  puVar9[1] = 0;
  *(undefined1 *)(puVar9 + 0xb) = 0;
  puVar9[2] = 0;
  puVar9[3] = 0;
  puVar9[0xf] = plVar28;
  *(undefined1 *)(puVar9 + 0xe) = 1;
  puVar9[9] = 0;
  puVar9[10] = 0;
  puVar9[0xc] = 0;
  puVar9[0xd] = 0x1ffffffff;
  ppppppplVar10 =
       (long *******)
       FUN_710392e290(0x10,0x2a8,(long ****)ppppppppplVar14,ppppbVar17,pppplVar18,in_x5,in_x6,in_x7)
  ;
  if (ppppppplVar10 == (long *******)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_78 = (long ***)((ulong)local_78 & 0xffffffff00000000);
      local_70 = (long ********)0x2a8;
      ppppppppplVar14 = &local_70;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_78);
      if (((uVar8 & 1) != 0) &&
         (ppppppplVar10 =
               (long *******)
               FUN_710392e290(0x10,0x2a8,(long ****)ppppppppplVar14,ppppbVar17,pppplVar18,in_x5,
                              in_x6,in_x7), ppppppplVar10 != (long *******)0x0))
      goto LAB_71018d6180;
    }
    ppppppplVar10 = (long *******)0x0;
  }
LAB_71018d6180:
  *(undefined4 *)(ppppppplVar10 + 1) = 0x1000;
  ppppppplVar10[2] = (long ******)0x0;
  ppppppplVar10[7] = (long ******)0x0;
  ppppppplVar10[3] = (long ******)0x0;
  ppppppplVar10[4] = (long ******)0x0;
  ppppppplVar10[6] = (long ******)0x0;
  ppppppplVar10[5] = (long ******)(ppppppplVar10 + 6);
  ppppppplVar29 = ppppppplVar10 + 8;
  *ppppppplVar29 = (long ******)0x0;
  *ppppppplVar10 = (long ******)&DAT_71050af6b0;
  ppppppplVar2 = ppppppplVar10 + 0x27;
  *(undefined8 *)((long)ppppppplVar10 + 0xec) = 0xffffffff00000000;
  *(undefined8 *)((long)ppppppplVar10 + 0xf4) = 0xffffffff00000000;
  *(undefined1 *)((long)ppppppplVar10 + 0xfc) = 0;
  *(undefined4 *)(ppppppplVar10 + 0x1d) = 0;
  *(undefined4 *)(ppppppplVar10 + 0x24) = 1;
  ppppppplVar10[0xb] = (long ******)0x0;
  ppppppplVar10[0xc] = (long ******)0x0;
  ppppppplVar10[9] = (long ******)ppppppplVar10;
  ppppppplVar10[10] = (long ******)0x0;
  ppppppplVar10[0x1b] = (long ******)0x0;
  ppppppplVar10[0x1c] = (long ******)0x0;
  ppppppplVar10[0x19] = (long ******)0x0;
  ppppppplVar10[0x1a] = (long ******)0x0;
  ppppppplVar10[0x17] = (long ******)0x0;
  ppppppplVar10[0x18] = (long ******)0x0;
  ppppppplVar10[0x15] = (long ******)0x0;
  ppppppplVar10[0x16] = (long ******)0x0;
  ppppppplVar10[0x13] = (long ******)0x0;
  ppppppplVar10[0x14] = (long ******)0x0;
  ppppppplVar10[0x11] = (long ******)0x0;
  ppppppplVar10[0x12] = (long ******)0x0;
  ppppppplVar10[0xf] = (long ******)0x0;
  ppppppplVar10[0x10] = (long ******)0x0;
  ppppppplVar10[0xd] = (long ******)0x0;
  ppppppplVar10[0xe] = (long ******)0x0;
  ppppppplVar10[0x20] = (long ******)0x1;
  ppppppplVar10[0x21] = (long ******)0x0;
  ppppppplVar10[0x22] = (long ******)0x1;
  ppppppplVar10[0x23] = (long ******)0x0;
  ppppppplVar10[0x31] = (long ******)0x0;
  ppppppplVar10[0x32] = (long ******)0x0;
  ppppppplVar10[0x2f] = (long ******)0x0;
  ppppppplVar10[0x30] = (long ******)0x0;
  ppppppplVar10[0x2d] = (long ******)0x0;
  ppppppplVar10[0x2e] = (long ******)0x0;
  ppppppplVar10[0x2b] = (long ******)0x0;
  ppppppplVar10[0x2c] = (long ******)0x0;
  ppppppplVar10[0x29] = (long ******)0x0;
  ppppppplVar10[0x2a] = (long ******)0x0;
  ppppppplVar10[0x27] = (long ******)0x0;
  ppppppplVar10[0x28] = (long ******)0x0;
  *(undefined8 *)((long)ppppppplVar10 + 0x124) = 0;
  *(undefined8 *)((long)ppppppplVar10 + 300) = 0;
  *(undefined4 *)(ppppppplVar10 + 0x33) = 4;
  ppppppplVar10[0x45] = (long ******)&PTR_FUN_7104f73d30;
  ppppppplVar10[0x4d] = (long ******)&PTR_FUN_7104f73d30;
  *(undefined4 *)((long)ppppppplVar10 + 0x1bc) = 0x876500;
  *(undefined4 *)((long)ppppppplVar10 + 0x1fc) = 0x876500;
  *(undefined4 *)((long)ppppppplVar10 + 0x23c) = 0x876500;
  *(undefined4 *)((long)ppppppplVar10 + 0x27c) = 0x876500;
  *(undefined4 *)(ppppppplVar10 + 0x37) = 0;
  *(undefined1 *)(ppppppplVar10 + 0x38) = 0;
  *(undefined4 *)(ppppppplVar10 + 0x34) = 0;
  *(undefined4 *)(ppppppplVar10 + 0x39) = 0xffffffff;
  *(undefined4 *)((long)ppppppplVar10 + 0x1cc) = 0xffffffff;
  *(undefined4 *)(ppppppplVar10 + 0x3f) = 0;
  *(undefined1 *)(ppppppplVar10 + 0x40) = 0;
  *(undefined4 *)(ppppppplVar10 + 0x3c) = 0;
  *(undefined4 *)(ppppppplVar10 + 0x41) = 0xffffffff;
  *(undefined4 *)((long)ppppppplVar10 + 0x20c) = 0xffffffff;
  ppppppplVar10[0x43] = (long ******)0x0;
  ppppppplVar10[0x42] = (long ******)0x0;
  ppppppplVar10[0x46] = (long ******)0x0;
  *(undefined4 *)(ppppppplVar10 + 0x47) = 0;
  *(undefined1 *)(ppppppplVar10 + 0x48) = 0;
  *(undefined4 *)(ppppppplVar10 + 0x44) = 0;
  *(undefined4 *)(ppppppplVar10 + 0x49) = 0xffffffff;
  *(undefined4 *)((long)ppppppplVar10 + 0x24c) = 0xffffffff;
  ppppppplVar10[0x4b] = (long ******)0x0;
  ppppppplVar10[0x4a] = (long ******)0x0;
  ppppppplVar10[0x4e] = (long ******)0x0;
  *(undefined4 *)(ppppppplVar10 + 0x4f) = 0;
  *(undefined1 *)(ppppppplVar10 + 0x50) = 0;
  *(undefined4 *)(ppppppplVar10 + 0x4c) = 0;
  *(undefined4 *)(ppppppplVar10 + 0x51) = 0xffffffff;
  *(undefined4 *)((long)ppppppplVar10 + 0x28c) = 0xffffffff;
  ppppppplVar10[0x53] = (long ******)0x0;
  ppppppplVar10[0x52] = (long ******)0x0;
  *(undefined1 *)(ppppppplVar10 + 0x54) = 1;
  *(undefined8 *)((long)ppppppplVar10 + 0xe4) = 0;
  *(undefined8 *)((long)ppppppplVar10 + 0xdc) = 0;
  *(undefined8 *)((long)ppppppplVar10 + 0xd4) = 0;
  *(undefined8 *)((long)ppppppplVar10 + 0xcc) = 0;
  *(undefined8 *)((long)ppppppplVar10 + 0xc4) = 0;
  *(undefined8 *)((long)ppppppplVar10 + 0xbc) = 0;
  *(undefined8 *)((long)ppppppplVar10 + 0xb4) = 0;
  *(undefined8 *)((long)ppppppplVar10 + 0xac) = 0;
  *(undefined8 *)((long)ppppppplVar10 + 0xa4) = 0;
  *(undefined4 *)((long)ppppppplVar10 + 0xec) = 0;
  *(undefined4 *)(ppppppplVar10 + 0x1e) = 0xffffffff;
  *(undefined4 *)((long)ppppppplVar10 + 0xf4) = 0;
  *(undefined4 *)(ppppppplVar10 + 0x1f) = 0xffffffff;
  *(undefined1 *)((long)ppppppplVar10 + 0xfc) = 0;
  *(undefined4 *)(ppppppplVar10 + 0x14) = 0;
  ppppppplVar10[0x35] = (long ******)&PTR_FUN_7104f73d30;
  ppppppplVar10[0x36] = (long ******)0x0;
  ppppppplVar10[0x3d] = (long ******)&PTR_FUN_7104f73d30;
  ppppppplVar10[0x3e] = (long ******)0x0;
  ppppppplVar10[0xe] = (long ******)FUN_7101d52ca0;
  ppppppplVar10[0xf] = (long ******)0x0;
  ppppppplVar10[0x3a] = (long ******)0x0;
  ppppppplVar10[0x3b] = (long ******)0x0;
  ppppppplVar10[0x10] = (long ******)FUN_7101d52cb0;
  ppppppplVar10[0x11] = (long ******)0x0;
  ppppppplVar10[0x12] = (long ******)FUN_7101d52e10;
  ppppppplVar10[0x13] = (long ******)0x0;
  ppppppplVar10[10] = (long ******)0x0;
  ppppppplVar10[0xb] = (long ******)0x0;
  FUN_7101d533a0((long *)(ppppppplVar10 + 9));
  ppuVar15 = &PTR_DAT_71050af6e8;
  ppppbVar17 = (byte ****)0x29ebed419d;
  puVar9[0x10] = ppppppplVar10;
  pppplVar18 = (long ****)0x1;
  FUN_71032cb040((long)ppppppplVar10,plVar28,(long ****)&PTR_DAT_71050af6e8,(byte ****)0x29ebed419d,
                 (long ****)0x1,in_x5,in_x6,in_x7);
  pppppplVar26 = ppppppplVar10[0x28];
  if (pppppplVar26 < ppppppplVar10[0x29]) {
    *pppppplVar26 = (long *****)0x1933f4b348;
    pppppplVar25 = ppppppplVar10[0x28] + 1;
    ppppppplVar10[0x28] = pppppplVar25;
  }
  else {
    pppppplVar11 = *ppppppplVar2;
    ppppppppplVar14 = (long *********)((long)pppppplVar26 - (long)pppppplVar11);
    uVar8 = ((long)ppppppppplVar14 >> 3) + 1;
    if (uVar8 >> 0x3d != 0) goto LAB_71018d844c;
    lVar7 = (long)ppppppplVar10[0x29] - (long)pppppplVar11;
    if ((ulong)(lVar7 >> 3) < 0xfffffffffffffff) {
      uVar20 = lVar7 >> 2;
      if (uVar8 <= uVar20) {
        uVar8 = uVar20;
      }
      if (uVar8 != 0) {
        if (uVar8 >> 0x3d != 0) goto LAB_71018d74fc;
        goto LAB_71018d63e8;
      }
LAB_71018d6448:
      pppppplVar26 = (long ******)0x0;
    }
    else {
      uVar8 = 0x1fffffffffffffff;
LAB_71018d63e8:
      pppppppplVar21 = (long ********)(uVar8 * 8);
      if (pppppppplVar21 == (long ********)0x0) {
        pppppppplVar21 = (long ********)0x1;
      }
      pppppplVar26 = (long ******)
                     FUN_710392e290(0x10,pppppppplVar21,(long ****)ppuVar15,ppppbVar17,pppplVar18,
                                    in_x5,in_x6,in_x7);
      if (pppppplVar26 == (long ******)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_78 = (long ***)((ulong)local_78 & 0xffffffff00000000);
          ppuVar15 = (undefined **)&local_70;
          local_70 = pppppppplVar21;
          uVar20 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_78);
          if (((uVar20 & 1) != 0) &&
             (pppppplVar26 = (long ******)
                             FUN_710392e290(0x10,pppppppplVar21,(long ****)ppuVar15,ppppbVar17,
                                            pppplVar18,in_x5,in_x6,in_x7),
             pppppplVar26 != (long ******)0x0)) goto LAB_71018d644c;
        }
        goto LAB_71018d6448;
      }
    }
LAB_71018d644c:
    pppppplVar25 = pppppplVar26 + ((long)ppppppppplVar14 >> 3) + 1;
    pppppplVar26[(long)ppppppppplVar14 >> 3] = (long *****)0x1933f4b348;
    if (0 < (long)ppppppppplVar14) {
      memcpy(pppppplVar26,pppppplVar11,(size_t)ppppppppplVar14);
      ppuVar15 = (undefined **)ppppppppplVar14;
    }
    ppppppplVar10[0x27] = pppppplVar26;
    ppppppplVar10[0x28] = pppppplVar25;
    ppppppplVar10[0x29] = pppppplVar26 + uVar8;
    if (pppppplVar11 != (long ******)0x0) {
      FUN_710392eb40((ulong)pppppplVar11);
      pppppplVar25 = ppppppplVar10[0x28];
    }
  }
  if (pppppplVar25 < ppppppplVar10[0x29]) {
    *pppppplVar25 = (long *****)0x19aafde2f2;
    pppppplVar25 = ppppppplVar10[0x28] + 1;
    ppppppplVar10[0x28] = pppppplVar25;
  }
  else {
    pppppplVar26 = *ppppppplVar2;
    ppppppppplVar14 = (long *********)((long)pppppplVar25 - (long)pppppplVar26);
    uVar8 = ((long)ppppppppplVar14 >> 3) + 1;
    if (uVar8 >> 0x3d != 0) goto LAB_71018d844c;
    lVar7 = (long)ppppppplVar10[0x29] - (long)pppppplVar26;
    if ((ulong)(lVar7 >> 3) < 0xfffffffffffffff) {
      uVar20 = lVar7 >> 2;
      if (uVar8 <= uVar20) {
        uVar8 = uVar20;
      }
      if (uVar8 != 0) {
        if (uVar8 >> 0x3d != 0) goto LAB_71018d74fc;
        goto LAB_71018d650c;
      }
LAB_71018d656c:
      pppppplVar11 = (long ******)0x0;
    }
    else {
      uVar8 = 0x1fffffffffffffff;
LAB_71018d650c:
      pppppppplVar21 = (long ********)(uVar8 * 8);
      if (pppppppplVar21 == (long ********)0x0) {
        pppppppplVar21 = (long ********)0x1;
      }
      pppppplVar11 = (long ******)
                     FUN_710392e290(0x10,pppppppplVar21,(long ****)ppuVar15,ppppbVar17,pppplVar18,
                                    in_x5,in_x6,in_x7);
      if (pppppplVar11 == (long ******)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_78 = (long ***)((ulong)local_78 & 0xffffffff00000000);
          ppuVar15 = (undefined **)&local_70;
          local_70 = pppppppplVar21;
          uVar20 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_78);
          if (((uVar20 & 1) != 0) &&
             (pppppplVar11 = (long ******)
                             FUN_710392e290(0x10,pppppppplVar21,(long ****)ppuVar15,ppppbVar17,
                                            pppplVar18,in_x5,in_x6,in_x7),
             pppppplVar11 != (long ******)0x0)) goto LAB_71018d6570;
        }
        goto LAB_71018d656c;
      }
    }
LAB_71018d6570:
    pppppplVar25 = pppppplVar11 + ((long)ppppppppplVar14 >> 3) + 1;
    pppppplVar11[(long)ppppppppplVar14 >> 3] = (long *****)0x19aafde2f2;
    if (0 < (long)ppppppppplVar14) {
      memcpy(pppppplVar11,pppppplVar26,(size_t)ppppppppplVar14);
      ppuVar15 = (undefined **)ppppppppplVar14;
    }
    ppppppplVar10[0x27] = pppppplVar11;
    ppppppplVar10[0x28] = pppppplVar25;
    ppppppplVar10[0x29] = pppppplVar11 + uVar8;
    if (pppppplVar26 != (long ******)0x0) {
      FUN_710392eb40((ulong)pppppplVar26);
      pppppplVar25 = ppppppplVar10[0x28];
    }
  }
  if (pppppplVar25 < ppppppplVar10[0x29]) {
    *pppppplVar25 = (long *****)0x19ddfad264;
    pppppplVar25 = ppppppplVar10[0x28] + 1;
    ppppppplVar10[0x28] = pppppplVar25;
  }
  else {
    pppppplVar26 = *ppppppplVar2;
    ppppppppplVar14 = (long *********)((long)pppppplVar25 - (long)pppppplVar26);
    uVar8 = ((long)ppppppppplVar14 >> 3) + 1;
    if (uVar8 >> 0x3d != 0) goto LAB_71018d844c;
    lVar7 = (long)ppppppplVar10[0x29] - (long)pppppplVar26;
    if ((ulong)(lVar7 >> 3) < 0xfffffffffffffff) {
      uVar20 = lVar7 >> 2;
      if (uVar8 <= uVar20) {
        uVar8 = uVar20;
      }
      if (uVar8 != 0) {
        if (uVar8 >> 0x3d != 0) goto LAB_71018d74fc;
        goto LAB_71018d6630;
      }
LAB_71018d6690:
      pppppplVar11 = (long ******)0x0;
    }
    else {
      uVar8 = 0x1fffffffffffffff;
LAB_71018d6630:
      pppppppplVar21 = (long ********)(uVar8 * 8);
      if (pppppppplVar21 == (long ********)0x0) {
        pppppppplVar21 = (long ********)0x1;
      }
      pppppplVar11 = (long ******)
                     FUN_710392e290(0x10,pppppppplVar21,(long ****)ppuVar15,ppppbVar17,pppplVar18,
                                    in_x5,in_x6,in_x7);
      if (pppppplVar11 == (long ******)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_78 = (long ***)((ulong)local_78 & 0xffffffff00000000);
          ppuVar15 = (undefined **)&local_70;
          local_70 = pppppppplVar21;
          uVar20 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_78);
          if (((uVar20 & 1) != 0) &&
             (pppppplVar11 = (long ******)
                             FUN_710392e290(0x10,pppppppplVar21,(long ****)ppuVar15,ppppbVar17,
                                            pppplVar18,in_x5,in_x6,in_x7),
             pppppplVar11 != (long ******)0x0)) goto LAB_71018d6694;
        }
        goto LAB_71018d6690;
      }
    }
LAB_71018d6694:
    pppppplVar25 = pppppplVar11 + ((long)ppppppppplVar14 >> 3) + 1;
    pppppplVar11[(long)ppppppppplVar14 >> 3] = (long *****)0x19ddfad264;
    if (0 < (long)ppppppppplVar14) {
      memcpy(pppppplVar11,pppppplVar26,(size_t)ppppppppplVar14);
      ppuVar15 = (undefined **)ppppppppplVar14;
    }
    ppppppplVar10[0x27] = pppppplVar11;
    ppppppplVar10[0x28] = pppppplVar25;
    ppppppplVar10[0x29] = pppppplVar11 + uVar8;
    if (pppppplVar26 != (long ******)0x0) {
      FUN_710392eb40((ulong)pppppplVar26);
      pppppplVar25 = ppppppplVar10[0x28];
    }
  }
  if (pppppplVar25 < ppppppplVar10[0x29]) {
    *pppppplVar25 = (long *****)0x19439e47c7;
    pppppplVar25 = ppppppplVar10[0x28] + 1;
    ppppppplVar10[0x28] = pppppplVar25;
  }
  else {
    pppppplVar26 = *ppppppplVar2;
    ppppppppplVar14 = (long *********)((long)pppppplVar25 - (long)pppppplVar26);
    uVar8 = ((long)ppppppppplVar14 >> 3) + 1;
    if (uVar8 >> 0x3d != 0) goto LAB_71018d844c;
    lVar7 = (long)ppppppplVar10[0x29] - (long)pppppplVar26;
    if ((ulong)(lVar7 >> 3) < 0xfffffffffffffff) {
      uVar20 = lVar7 >> 2;
      if (uVar8 <= uVar20) {
        uVar8 = uVar20;
      }
      if (uVar8 != 0) {
        if (uVar8 >> 0x3d != 0) goto LAB_71018d74fc;
        goto LAB_71018d6754;
      }
LAB_71018d67b4:
      pppppplVar11 = (long ******)0x0;
    }
    else {
      uVar8 = 0x1fffffffffffffff;
LAB_71018d6754:
      pppppppplVar21 = (long ********)(uVar8 * 8);
      if (pppppppplVar21 == (long ********)0x0) {
        pppppppplVar21 = (long ********)0x1;
      }
      pppppplVar11 = (long ******)
                     FUN_710392e290(0x10,pppppppplVar21,(long ****)ppuVar15,ppppbVar17,pppplVar18,
                                    in_x5,in_x6,in_x7);
      if (pppppplVar11 == (long ******)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_78 = (long ***)((ulong)local_78 & 0xffffffff00000000);
          ppuVar15 = (undefined **)&local_70;
          local_70 = pppppppplVar21;
          uVar20 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_78);
          if (((uVar20 & 1) != 0) &&
             (pppppplVar11 = (long ******)
                             FUN_710392e290(0x10,pppppppplVar21,(long ****)ppuVar15,ppppbVar17,
                                            pppplVar18,in_x5,in_x6,in_x7),
             pppppplVar11 != (long ******)0x0)) goto LAB_71018d67b8;
        }
        goto LAB_71018d67b4;
      }
    }
LAB_71018d67b8:
    pppppplVar25 = pppppplVar11 + ((long)ppppppppplVar14 >> 3) + 1;
    pppppplVar11[(long)ppppppppplVar14 >> 3] = (long *****)0x19439e47c7;
    if (0 < (long)ppppppppplVar14) {
      memcpy(pppppplVar11,pppppplVar26,(size_t)ppppppppplVar14);
      ppuVar15 = (undefined **)ppppppppplVar14;
    }
    ppppppplVar10[0x27] = pppppplVar11;
    ppppppplVar10[0x28] = pppppplVar25;
    ppppppplVar10[0x29] = pppppplVar11 + uVar8;
    if (pppppplVar26 != (long ******)0x0) {
      FUN_710392eb40((ulong)pppppplVar26);
      pppppplVar25 = ppppppplVar10[0x28];
    }
  }
  if (pppppplVar25 < ppppppplVar10[0x29]) {
    *pppppplVar25 = (long *****)0x1934997751;
    ppppppplVar10[0x28] = ppppppplVar10[0x28] + 1;
  }
  else {
    pppppplVar26 = *ppppppplVar2;
    ppppppppplVar14 = (long *********)((long)pppppplVar25 - (long)pppppplVar26);
    lVar7 = (long)ppppppppplVar14 >> 3;
    uVar8 = lVar7 + 1;
    if (uVar8 >> 0x3d != 0) goto LAB_71018d844c;
    lVar19 = (long)ppppppplVar10[0x29] - (long)pppppplVar26;
    if ((ulong)(lVar19 >> 3) < 0xfffffffffffffff) {
      uVar20 = lVar19 >> 2;
      if (uVar8 <= uVar20) {
        uVar8 = uVar20;
      }
      if (uVar8 != 0) {
        if (uVar8 >> 0x3d != 0) goto LAB_71018d74fc;
        goto LAB_71018d6878;
      }
LAB_71018d68d8:
      pppppplVar11 = (long ******)0x0;
    }
    else {
      uVar8 = 0x1fffffffffffffff;
LAB_71018d6878:
      pppppppplVar21 = (long ********)(uVar8 * 8);
      if (pppppppplVar21 == (long ********)0x0) {
        pppppppplVar21 = (long ********)0x1;
      }
      pppppplVar11 = (long ******)
                     FUN_710392e290(0x10,pppppppplVar21,(long ****)ppuVar15,ppppbVar17,pppplVar18,
                                    in_x5,in_x6,in_x7);
      if (pppppplVar11 == (long ******)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_78 = (long ***)((ulong)local_78 & 0xffffffff00000000);
          ppuVar15 = (undefined **)&local_70;
          local_70 = pppppppplVar21;
          uVar20 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_78);
          if (((uVar20 & 1) != 0) &&
             (pppppplVar11 = (long ******)
                             FUN_710392e290(0x10,pppppppplVar21,(long ****)ppuVar15,ppppbVar17,
                                            pppplVar18,in_x5,in_x6,in_x7),
             pppppplVar11 != (long ******)0x0)) goto LAB_71018d68dc;
        }
        goto LAB_71018d68d8;
      }
    }
LAB_71018d68dc:
    pppppplVar11[lVar7] = (long *****)0x1934997751;
    if (0 < (long)ppppppppplVar14) {
      memcpy(pppppplVar11,pppppplVar26,(size_t)ppppppppplVar14);
      ppuVar15 = (undefined **)ppppppppplVar14;
    }
    ppppppplVar10[0x27] = pppppplVar11;
    ppppppplVar10[0x28] = pppppplVar11 + lVar7 + 1;
    ppppppplVar10[0x29] = pppppplVar11 + uVar8;
    if (pppppplVar26 != (long ******)0x0) {
      FUN_710392eb40((ulong)pppppplVar26);
    }
  }
  pppppplVar26 = ppppppplVar10[0x2b];
  ppppppplVar2 = ppppppplVar10 + 0x2a;
  if (pppppplVar26 < ppppppplVar10[0x2c]) {
    *pppppplVar26 = (long *****)0x1b543b90ec;
    pppppplVar25 = ppppppplVar10[0x2b] + 1;
    ppppppplVar10[0x2b] = pppppplVar25;
  }
  else {
    pppppplVar11 = *ppppppplVar2;
    ppppppppplVar14 = (long *********)((long)pppppplVar26 - (long)pppppplVar11);
    uVar8 = ((long)ppppppppplVar14 >> 3) + 1;
    if (uVar8 >> 0x3d != 0) goto LAB_71018d844c;
    lVar7 = (long)ppppppplVar10[0x2c] - (long)pppppplVar11;
    if ((ulong)(lVar7 >> 3) < 0xfffffffffffffff) {
      uVar20 = lVar7 >> 2;
      if (uVar8 <= uVar20) {
        uVar8 = uVar20;
      }
      if (uVar8 != 0) {
        if (uVar8 >> 0x3d != 0) goto LAB_71018d74fc;
        goto LAB_71018d699c;
      }
LAB_71018d69fc:
      pppppplVar26 = (long ******)0x0;
    }
    else {
      uVar8 = 0x1fffffffffffffff;
LAB_71018d699c:
      pppppppplVar21 = (long ********)(uVar8 * 8);
      if (pppppppplVar21 == (long ********)0x0) {
        pppppppplVar21 = (long ********)0x1;
      }
      pppppplVar26 = (long ******)
                     FUN_710392e290(0x10,pppppppplVar21,(long ****)ppuVar15,ppppbVar17,pppplVar18,
                                    in_x5,in_x6,in_x7);
      if (pppppplVar26 == (long ******)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_78 = (long ***)((ulong)local_78 & 0xffffffff00000000);
          ppuVar15 = (undefined **)&local_70;
          local_70 = pppppppplVar21;
          uVar20 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_78);
          if (((uVar20 & 1) != 0) &&
             (pppppplVar26 = (long ******)
                             FUN_710392e290(0x10,pppppppplVar21,(long ****)ppuVar15,ppppbVar17,
                                            pppplVar18,in_x5,in_x6,in_x7),
             pppppplVar26 != (long ******)0x0)) goto LAB_71018d6a00;
        }
        goto LAB_71018d69fc;
      }
    }
LAB_71018d6a00:
    pppppplVar25 = pppppplVar26 + ((long)ppppppppplVar14 >> 3) + 1;
    pppppplVar26[(long)ppppppppplVar14 >> 3] = (long *****)0x1b543b90ec;
    if (0 < (long)ppppppppplVar14) {
      memcpy(pppppplVar26,pppppplVar11,(size_t)ppppppppplVar14);
      ppuVar15 = (undefined **)ppppppppplVar14;
    }
    ppppppplVar10[0x2a] = pppppplVar26;
    ppppppplVar10[0x2b] = pppppplVar25;
    ppppppplVar10[0x2c] = pppppplVar26 + uVar8;
    if (pppppplVar11 != (long ******)0x0) {
      FUN_710392eb40((ulong)pppppplVar11);
      pppppplVar25 = ppppppplVar10[0x2b];
    }
  }
  if (pppppplVar25 < ppppppplVar10[0x2c]) {
    *pppppplVar25 = (long *****)0x1bcd32c156;
    pppppplVar25 = ppppppplVar10[0x2b] + 1;
    ppppppplVar10[0x2b] = pppppplVar25;
  }
  else {
    pppppplVar26 = *ppppppplVar2;
    ppppppppplVar14 = (long *********)((long)pppppplVar25 - (long)pppppplVar26);
    uVar8 = ((long)ppppppppplVar14 >> 3) + 1;
    if (uVar8 >> 0x3d != 0) goto LAB_71018d844c;
    lVar7 = (long)ppppppplVar10[0x2c] - (long)pppppplVar26;
    if ((ulong)(lVar7 >> 3) < 0xfffffffffffffff) {
      uVar20 = lVar7 >> 2;
      if (uVar8 <= uVar20) {
        uVar8 = uVar20;
      }
      if (uVar8 != 0) {
        if (uVar8 >> 0x3d != 0) goto LAB_71018d74fc;
        goto LAB_71018d6ac0;
      }
LAB_71018d6b20:
      pppppplVar11 = (long ******)0x0;
    }
    else {
      uVar8 = 0x1fffffffffffffff;
LAB_71018d6ac0:
      pppppppplVar21 = (long ********)(uVar8 * 8);
      if (pppppppplVar21 == (long ********)0x0) {
        pppppppplVar21 = (long ********)0x1;
      }
      pppppplVar11 = (long ******)
                     FUN_710392e290(0x10,pppppppplVar21,(long ****)ppuVar15,ppppbVar17,pppplVar18,
                                    in_x5,in_x6,in_x7);
      if (pppppplVar11 == (long ******)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_78 = (long ***)((ulong)local_78 & 0xffffffff00000000);
          ppuVar15 = (undefined **)&local_70;
          local_70 = pppppppplVar21;
          uVar20 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_78);
          if (((uVar20 & 1) != 0) &&
             (pppppplVar11 = (long ******)
                             FUN_710392e290(0x10,pppppppplVar21,(long ****)ppuVar15,ppppbVar17,
                                            pppplVar18,in_x5,in_x6,in_x7),
             pppppplVar11 != (long ******)0x0)) goto LAB_71018d6b24;
        }
        goto LAB_71018d6b20;
      }
    }
LAB_71018d6b24:
    pppppplVar25 = pppppplVar11 + ((long)ppppppppplVar14 >> 3) + 1;
    pppppplVar11[(long)ppppppppplVar14 >> 3] = (long *****)0x1bcd32c156;
    if (0 < (long)ppppppppplVar14) {
      memcpy(pppppplVar11,pppppplVar26,(size_t)ppppppppplVar14);
      ppuVar15 = (undefined **)ppppppppplVar14;
    }
    ppppppplVar10[0x2a] = pppppplVar11;
    ppppppplVar10[0x2b] = pppppplVar25;
    ppppppplVar10[0x2c] = pppppplVar11 + uVar8;
    if (pppppplVar26 != (long ******)0x0) {
      FUN_710392eb40((ulong)pppppplVar26);
      pppppplVar25 = ppppppplVar10[0x2b];
    }
  }
  if (pppppplVar25 < ppppppplVar10[0x2c]) {
    *pppppplVar25 = (long *****)0x1bba35f1c0;
    ppppppplVar10[0x2b] = ppppppplVar10[0x2b] + 1;
  }
  else {
    pppppplVar26 = *ppppppplVar2;
    ppppppppplVar14 = (long *********)((long)pppppplVar25 - (long)pppppplVar26);
    lVar7 = (long)ppppppppplVar14 >> 3;
    uVar8 = lVar7 + 1;
    if (uVar8 >> 0x3d != 0) goto LAB_71018d844c;
    lVar19 = (long)ppppppplVar10[0x2c] - (long)pppppplVar26;
    if ((ulong)(lVar19 >> 3) < 0xfffffffffffffff) {
      uVar20 = lVar19 >> 2;
      if (uVar8 <= uVar20) {
        uVar8 = uVar20;
      }
      if (uVar8 != 0) {
        if (uVar8 >> 0x3d != 0) goto LAB_71018d74fc;
        goto LAB_71018d6be4;
      }
LAB_71018d6c44:
      pppppplVar11 = (long ******)0x0;
    }
    else {
      uVar8 = 0x1fffffffffffffff;
LAB_71018d6be4:
      pppppppplVar21 = (long ********)(uVar8 * 8);
      if (pppppppplVar21 == (long ********)0x0) {
        pppppppplVar21 = (long ********)0x1;
      }
      pppppplVar11 = (long ******)
                     FUN_710392e290(0x10,pppppppplVar21,(long ****)ppuVar15,ppppbVar17,pppplVar18,
                                    in_x5,in_x6,in_x7);
      if (pppppplVar11 == (long ******)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_78 = (long ***)((ulong)local_78 & 0xffffffff00000000);
          ppuVar15 = (undefined **)&local_70;
          local_70 = pppppppplVar21;
          uVar20 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_78);
          if (((uVar20 & 1) != 0) &&
             (pppppplVar11 = (long ******)
                             FUN_710392e290(0x10,pppppppplVar21,(long ****)ppuVar15,ppppbVar17,
                                            pppplVar18,in_x5,in_x6,in_x7),
             pppppplVar11 != (long ******)0x0)) goto LAB_71018d6c48;
        }
        goto LAB_71018d6c44;
      }
    }
LAB_71018d6c48:
    pppppplVar11[lVar7] = (long *****)0x1bba35f1c0;
    if (0 < (long)ppppppppplVar14) {
      memcpy(pppppplVar11,pppppplVar26,(size_t)ppppppppplVar14);
      ppuVar15 = (undefined **)ppppppppplVar14;
    }
    ppppppplVar10[0x2a] = pppppplVar11;
    ppppppplVar10[0x2b] = pppppplVar11 + lVar7 + 1;
    ppppppplVar10[0x2c] = pppppplVar11 + uVar8;
    if (pppppplVar26 != (long ******)0x0) {
      FUN_710392eb40((ulong)pppppplVar26);
    }
  }
  pppppplVar26 = ppppppplVar10[0x2e];
  ppppppplVar2 = ppppppplVar10 + 0x2d;
  if (pppppplVar26 < ppppppplVar10[0x2f]) {
    *pppppplVar26 = (long *****)0x1994cb3620;
    pppppplVar25 = ppppppplVar10[0x2e] + 1;
    ppppppplVar10[0x2e] = pppppplVar25;
  }
  else {
    pppppplVar11 = *ppppppplVar2;
    ppppppppplVar14 = (long *********)((long)pppppplVar26 - (long)pppppplVar11);
    uVar8 = ((long)ppppppppplVar14 >> 3) + 1;
    if (uVar8 >> 0x3d != 0) goto LAB_71018d844c;
    lVar7 = (long)ppppppplVar10[0x2f] - (long)pppppplVar11;
    if ((ulong)(lVar7 >> 3) < 0xfffffffffffffff) {
      uVar20 = lVar7 >> 2;
      if (uVar8 <= uVar20) {
        uVar8 = uVar20;
      }
      if (uVar8 != 0) {
        if (uVar8 >> 0x3d != 0) goto LAB_71018d74fc;
        goto LAB_71018d6d08;
      }
LAB_71018d6d68:
      pppppplVar26 = (long ******)0x0;
    }
    else {
      uVar8 = 0x1fffffffffffffff;
LAB_71018d6d08:
      pppppppplVar21 = (long ********)(uVar8 * 8);
      if (pppppppplVar21 == (long ********)0x0) {
        pppppppplVar21 = (long ********)0x1;
      }
      pppppplVar26 = (long ******)
                     FUN_710392e290(0x10,pppppppplVar21,(long ****)ppuVar15,ppppbVar17,pppplVar18,
                                    in_x5,in_x6,in_x7);
      if (pppppplVar26 == (long ******)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_78 = (long ***)((ulong)local_78 & 0xffffffff00000000);
          ppuVar15 = (undefined **)&local_70;
          local_70 = pppppppplVar21;
          uVar20 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_78);
          if (((uVar20 & 1) != 0) &&
             (pppppplVar26 = (long ******)
                             FUN_710392e290(0x10,pppppppplVar21,(long ****)ppuVar15,ppppbVar17,
                                            pppplVar18,in_x5,in_x6,in_x7),
             pppppplVar26 != (long ******)0x0)) goto LAB_71018d6d6c;
        }
        goto LAB_71018d6d68;
      }
    }
LAB_71018d6d6c:
    pppppplVar25 = pppppplVar26 + ((long)ppppppppplVar14 >> 3) + 1;
    pppppplVar26[(long)ppppppppplVar14 >> 3] = (long *****)0x1994cb3620;
    if (0 < (long)ppppppppplVar14) {
      memcpy(pppppplVar26,pppppplVar11,(size_t)ppppppppplVar14);
      ppuVar15 = (undefined **)ppppppppplVar14;
    }
    ppppppplVar10[0x2d] = pppppplVar26;
    ppppppplVar10[0x2e] = pppppplVar25;
    ppppppplVar10[0x2f] = pppppplVar26 + uVar8;
    if (pppppplVar11 != (long ******)0x0) {
      FUN_710392eb40((ulong)pppppplVar11);
      pppppplVar25 = ppppppplVar10[0x2e];
    }
  }
  if (pppppplVar25 < ppppppplVar10[0x2f]) {
    *pppppplVar25 = (long *****)0x190dc2679a;
    pppppplVar25 = ppppppplVar10[0x2e] + 1;
    ppppppplVar10[0x2e] = pppppplVar25;
  }
  else {
    pppppplVar26 = *ppppppplVar2;
    ppppppppplVar14 = (long *********)((long)pppppplVar25 - (long)pppppplVar26);
    uVar8 = ((long)ppppppppplVar14 >> 3) + 1;
    if (uVar8 >> 0x3d != 0) goto LAB_71018d844c;
    lVar7 = (long)ppppppplVar10[0x2f] - (long)pppppplVar26;
    if ((ulong)(lVar7 >> 3) < 0xfffffffffffffff) {
      uVar20 = lVar7 >> 2;
      if (uVar8 <= uVar20) {
        uVar8 = uVar20;
      }
      if (uVar8 != 0) {
        if (uVar8 >> 0x3d != 0) goto LAB_71018d74fc;
        goto LAB_71018d6e2c;
      }
LAB_71018d6e8c:
      pppppplVar11 = (long ******)0x0;
    }
    else {
      uVar8 = 0x1fffffffffffffff;
LAB_71018d6e2c:
      pppppppplVar21 = (long ********)(uVar8 * 8);
      if (pppppppplVar21 == (long ********)0x0) {
        pppppppplVar21 = (long ********)0x1;
      }
      pppppplVar11 = (long ******)
                     FUN_710392e290(0x10,pppppppplVar21,(long ****)ppuVar15,ppppbVar17,pppplVar18,
                                    in_x5,in_x6,in_x7);
      if (pppppplVar11 == (long ******)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_78 = (long ***)((ulong)local_78 & 0xffffffff00000000);
          ppuVar15 = (undefined **)&local_70;
          local_70 = pppppppplVar21;
          uVar20 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_78);
          if (((uVar20 & 1) != 0) &&
             (pppppplVar11 = (long ******)
                             FUN_710392e290(0x10,pppppppplVar21,(long ****)ppuVar15,ppppbVar17,
                                            pppplVar18,in_x5,in_x6,in_x7),
             pppppplVar11 != (long ******)0x0)) goto LAB_71018d6e90;
        }
        goto LAB_71018d6e8c;
      }
    }
LAB_71018d6e90:
    pppppplVar25 = pppppplVar11 + ((long)ppppppppplVar14 >> 3) + 1;
    pppppplVar11[(long)ppppppppplVar14 >> 3] = (long *****)0x190dc2679a;
    if (0 < (long)ppppppppplVar14) {
      memcpy(pppppplVar11,pppppplVar26,(size_t)ppppppppplVar14);
      ppuVar15 = (undefined **)ppppppppplVar14;
    }
    ppppppplVar10[0x2d] = pppppplVar11;
    ppppppplVar10[0x2e] = pppppplVar25;
    ppppppplVar10[0x2f] = pppppplVar11 + uVar8;
    if (pppppplVar26 != (long ******)0x0) {
      FUN_710392eb40((ulong)pppppplVar26);
      pppppplVar25 = ppppppplVar10[0x2e];
    }
  }
  if (pppppplVar25 < ppppppplVar10[0x2f]) {
    *pppppplVar25 = (long *****)0x197ac5570c;
    pppppplVar25 = ppppppplVar10[0x2e] + 1;
    ppppppplVar10[0x2e] = pppppplVar25;
  }
  else {
    pppppplVar26 = *ppppppplVar2;
    ppppppppplVar14 = (long *********)((long)pppppplVar25 - (long)pppppplVar26);
    uVar8 = ((long)ppppppppplVar14 >> 3) + 1;
    if (uVar8 >> 0x3d != 0) goto LAB_71018d844c;
    lVar7 = (long)ppppppplVar10[0x2f] - (long)pppppplVar26;
    if ((ulong)(lVar7 >> 3) < 0xfffffffffffffff) {
      uVar20 = lVar7 >> 2;
      if (uVar8 <= uVar20) {
        uVar8 = uVar20;
      }
      if (uVar8 != 0) {
        if (uVar8 >> 0x3d != 0) goto LAB_71018d74fc;
        goto LAB_71018d6f50;
      }
LAB_71018d6fb0:
      pppppplVar11 = (long ******)0x0;
    }
    else {
      uVar8 = 0x1fffffffffffffff;
LAB_71018d6f50:
      pppppppplVar21 = (long ********)(uVar8 * 8);
      if (pppppppplVar21 == (long ********)0x0) {
        pppppppplVar21 = (long ********)0x1;
      }
      pppppplVar11 = (long ******)
                     FUN_710392e290(0x10,pppppppplVar21,(long ****)ppuVar15,ppppbVar17,pppplVar18,
                                    in_x5,in_x6,in_x7);
      if (pppppplVar11 == (long ******)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_78 = (long ***)((ulong)local_78 & 0xffffffff00000000);
          ppuVar15 = (undefined **)&local_70;
          local_70 = pppppppplVar21;
          uVar20 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_78);
          if (((uVar20 & 1) != 0) &&
             (pppppplVar11 = (long ******)
                             FUN_710392e290(0x10,pppppppplVar21,(long ****)ppuVar15,ppppbVar17,
                                            pppplVar18,in_x5,in_x6,in_x7),
             pppppplVar11 != (long ******)0x0)) goto LAB_71018d6fb4;
        }
        goto LAB_71018d6fb0;
      }
    }
LAB_71018d6fb4:
    pppppplVar25 = pppppplVar11 + ((long)ppppppppplVar14 >> 3) + 1;
    pppppplVar11[(long)ppppppppplVar14 >> 3] = (long *****)0x197ac5570c;
    if (0 < (long)ppppppppplVar14) {
      memcpy(pppppplVar11,pppppplVar26,(size_t)ppppppppplVar14);
      ppuVar15 = (undefined **)ppppppppplVar14;
    }
    ppppppplVar10[0x2d] = pppppplVar11;
    ppppppplVar10[0x2e] = pppppplVar25;
    ppppppplVar10[0x2f] = pppppplVar11 + uVar8;
    if (pppppplVar26 != (long ******)0x0) {
      FUN_710392eb40((ulong)pppppplVar26);
      pppppplVar25 = ppppppplVar10[0x2e];
    }
  }
  if (pppppplVar25 < ppppppplVar10[0x2f]) {
    *pppppplVar25 = (long *****)0x19e4a1c2af;
    pppppplVar25 = ppppppplVar10[0x2e] + 1;
    ppppppplVar10[0x2e] = pppppplVar25;
  }
  else {
    pppppplVar26 = *ppppppplVar2;
    ppppppppplVar14 = (long *********)((long)pppppplVar25 - (long)pppppplVar26);
    uVar8 = ((long)ppppppppplVar14 >> 3) + 1;
    if (uVar8 >> 0x3d != 0) goto LAB_71018d844c;
    lVar7 = (long)ppppppplVar10[0x2f] - (long)pppppplVar26;
    if ((ulong)(lVar7 >> 3) < 0xfffffffffffffff) {
      uVar20 = lVar7 >> 2;
      if (uVar8 <= uVar20) {
        uVar8 = uVar20;
      }
      if (uVar8 != 0) {
        if (uVar8 >> 0x3d != 0) goto LAB_71018d74fc;
        goto LAB_71018d7074;
      }
LAB_71018d70d4:
      pppppplVar11 = (long ******)0x0;
    }
    else {
      uVar8 = 0x1fffffffffffffff;
LAB_71018d7074:
      pppppppplVar21 = (long ********)(uVar8 * 8);
      if (pppppppplVar21 == (long ********)0x0) {
        pppppppplVar21 = (long ********)0x1;
      }
      pppppplVar11 = (long ******)
                     FUN_710392e290(0x10,pppppppplVar21,(long ****)ppuVar15,ppppbVar17,pppplVar18,
                                    in_x5,in_x6,in_x7);
      if (pppppplVar11 == (long ******)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_78 = (long ***)((ulong)local_78 & 0xffffffff00000000);
          ppuVar15 = (undefined **)&local_70;
          local_70 = pppppppplVar21;
          uVar20 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_78);
          if (((uVar20 & 1) != 0) &&
             (pppppplVar11 = (long ******)
                             FUN_710392e290(0x10,pppppppplVar21,(long ****)ppuVar15,ppppbVar17,
                                            pppplVar18,in_x5,in_x6,in_x7),
             pppppplVar11 != (long ******)0x0)) goto LAB_71018d70d8;
        }
        goto LAB_71018d70d4;
      }
    }
LAB_71018d70d8:
    pppppplVar25 = pppppplVar11 + ((long)ppppppppplVar14 >> 3) + 1;
    pppppplVar11[(long)ppppppppplVar14 >> 3] = (long *****)0x19e4a1c2af;
    if (0 < (long)ppppppppplVar14) {
      memcpy(pppppplVar11,pppppplVar26,(size_t)ppppppppplVar14);
      ppuVar15 = (undefined **)ppppppppplVar14;
    }
    ppppppplVar10[0x2d] = pppppplVar11;
    ppppppplVar10[0x2e] = pppppplVar25;
    ppppppplVar10[0x2f] = pppppplVar11 + uVar8;
    if (pppppplVar26 != (long ******)0x0) {
      FUN_710392eb40((ulong)pppppplVar26);
      pppppplVar25 = ppppppplVar10[0x2e];
    }
  }
  if (pppppplVar25 < ppppppplVar10[0x2f]) {
    *pppppplVar25 = (long *****)0x1993a6f239;
    ppppppplVar10[0x2e] = ppppppplVar10[0x2e] + 1;
  }
  else {
    pppppplVar26 = *ppppppplVar2;
    ppppppppplVar14 = (long *********)((long)pppppplVar25 - (long)pppppplVar26);
    lVar7 = (long)ppppppppplVar14 >> 3;
    uVar8 = lVar7 + 1;
    if (uVar8 >> 0x3d != 0) goto LAB_71018d844c;
    lVar19 = (long)ppppppplVar10[0x2f] - (long)pppppplVar26;
    if ((ulong)(lVar19 >> 3) < 0xfffffffffffffff) {
      uVar20 = lVar19 >> 2;
      if (uVar8 <= uVar20) {
        uVar8 = uVar20;
      }
      if (uVar8 != 0) {
        if (uVar8 >> 0x3d != 0) goto LAB_71018d74fc;
        goto LAB_71018d7198;
      }
LAB_71018d71f8:
      pppppplVar11 = (long ******)0x0;
    }
    else {
      uVar8 = 0x1fffffffffffffff;
LAB_71018d7198:
      pppppppplVar21 = (long ********)(uVar8 * 8);
      if (pppppppplVar21 == (long ********)0x0) {
        pppppppplVar21 = (long ********)0x1;
      }
      pppppplVar11 = (long ******)
                     FUN_710392e290(0x10,pppppppplVar21,(long ****)ppuVar15,ppppbVar17,pppplVar18,
                                    in_x5,in_x6,in_x7);
      if (pppppplVar11 == (long ******)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_78 = (long ***)((ulong)local_78 & 0xffffffff00000000);
          ppuVar15 = (undefined **)&local_70;
          local_70 = pppppppplVar21;
          uVar20 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_78);
          if (((uVar20 & 1) != 0) &&
             (pppppplVar11 = (long ******)
                             FUN_710392e290(0x10,pppppppplVar21,(long ****)ppuVar15,ppppbVar17,
                                            pppplVar18,in_x5,in_x6,in_x7),
             pppppplVar11 != (long ******)0x0)) goto LAB_71018d71fc;
        }
        goto LAB_71018d71f8;
      }
    }
LAB_71018d71fc:
    pppppplVar11[lVar7] = (long *****)0x1993a6f239;
    if (0 < (long)ppppppppplVar14) {
      memcpy(pppppplVar11,pppppplVar26,(size_t)ppppppppplVar14);
      ppuVar15 = (undefined **)ppppppppplVar14;
    }
    ppppppplVar10[0x2d] = pppppplVar11;
    ppppppplVar10[0x2e] = pppppplVar11 + lVar7 + 1;
    ppppppplVar10[0x2f] = pppppplVar11 + uVar8;
    if (pppppplVar26 != (long ******)0x0) {
      FUN_710392eb40((ulong)pppppplVar26);
    }
  }
  pppppplVar26 = ppppppplVar10[0x31];
  ppppppplVar2 = ppppppplVar10 + 0x30;
  if (pppppplVar26 < ppppppplVar10[0x32]) {
    *pppppplVar26 = (long *****)0x1bb9b04040;
    pppppplVar25 = ppppppplVar10[0x31] + 1;
    ppppppplVar10[0x31] = pppppplVar25;
  }
  else {
    pppppplVar11 = *ppppppplVar2;
    ppppppppplVar14 = (long *********)((long)pppppplVar26 - (long)pppppplVar11);
    uVar8 = ((long)ppppppppplVar14 >> 3) + 1;
    if (uVar8 >> 0x3d != 0) goto LAB_71018d844c;
    lVar7 = (long)ppppppplVar10[0x32] - (long)pppppplVar11;
    if ((ulong)(lVar7 >> 3) < 0xfffffffffffffff) {
      uVar20 = lVar7 >> 2;
      if (uVar8 <= uVar20) {
        uVar8 = uVar20;
      }
      if (uVar8 != 0) {
        if (uVar8 >> 0x3d != 0) goto LAB_71018d74fc;
        goto LAB_71018d72bc;
      }
LAB_71018d731c:
      pppppplVar26 = (long ******)0x0;
    }
    else {
      uVar8 = 0x1fffffffffffffff;
LAB_71018d72bc:
      pppppppplVar21 = (long ********)(uVar8 * 8);
      if (pppppppplVar21 == (long ********)0x0) {
        pppppppplVar21 = (long ********)0x1;
      }
      pppppplVar26 = (long ******)
                     FUN_710392e290(0x10,pppppppplVar21,(long ****)ppuVar15,ppppbVar17,pppplVar18,
                                    in_x5,in_x6,in_x7);
      if (pppppplVar26 == (long ******)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_78 = (long ***)((ulong)local_78 & 0xffffffff00000000);
          ppuVar15 = (undefined **)&local_70;
          local_70 = pppppppplVar21;
          uVar20 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_78);
          if (((uVar20 & 1) != 0) &&
             (pppppplVar26 = (long ******)
                             FUN_710392e290(0x10,pppppppplVar21,(long ****)ppuVar15,ppppbVar17,
                                            pppplVar18,in_x5,in_x6,in_x7),
             pppppplVar26 != (long ******)0x0)) goto LAB_71018d7320;
        }
        goto LAB_71018d731c;
      }
    }
LAB_71018d7320:
    pppppplVar25 = pppppplVar26 + ((long)ppppppppplVar14 >> 3) + 1;
    pppppplVar26[(long)ppppppppplVar14 >> 3] = (long *****)0x1bb9b04040;
    if (0 < (long)ppppppppplVar14) {
      memcpy(pppppplVar26,pppppplVar11,(size_t)ppppppppplVar14);
      ppuVar15 = (undefined **)ppppppppplVar14;
    }
    ppppppplVar10[0x30] = pppppplVar26;
    ppppppplVar10[0x31] = pppppplVar25;
    ppppppplVar10[0x32] = pppppplVar26 + uVar8;
    if (pppppplVar11 != (long ******)0x0) {
      FUN_710392eb40((ulong)pppppplVar11);
      pppppplVar25 = ppppppplVar10[0x31];
    }
  }
  if (pppppplVar25 < ppppppplVar10[0x32]) {
    *pppppplVar25 = (long *****)0x1b20b911fa;
    pppppplVar25 = ppppppplVar10[0x31] + 1;
    ppppppplVar10[0x31] = pppppplVar25;
  }
  else {
    pppppplVar26 = *ppppppplVar2;
    ppppppppplVar14 = (long *********)((long)pppppplVar25 - (long)pppppplVar26);
    uVar8 = ((long)ppppppppplVar14 >> 3) + 1;
    if (uVar8 >> 0x3d != 0) goto LAB_71018d844c;
    lVar7 = (long)ppppppplVar10[0x32] - (long)pppppplVar26;
    if ((ulong)(lVar7 >> 3) < 0xfffffffffffffff) {
      uVar20 = lVar7 >> 2;
      if (uVar8 <= uVar20) {
        uVar8 = uVar20;
      }
      if (uVar8 != 0) {
        if (uVar8 >> 0x3d != 0) goto LAB_71018d74fc;
        goto LAB_71018d73e0;
      }
LAB_71018d7440:
      pppppplVar11 = (long ******)0x0;
    }
    else {
      uVar8 = 0x1fffffffffffffff;
LAB_71018d73e0:
      pppppppplVar21 = (long ********)(uVar8 * 8);
      if (pppppppplVar21 == (long ********)0x0) {
        pppppppplVar21 = (long ********)0x1;
      }
      pppppplVar11 = (long ******)
                     FUN_710392e290(0x10,pppppppplVar21,(long ****)ppuVar15,ppppbVar17,pppplVar18,
                                    in_x5,in_x6,in_x7);
      if (pppppplVar11 == (long ******)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_78 = (long ***)((ulong)local_78 & 0xffffffff00000000);
          ppuVar15 = (undefined **)&local_70;
          local_70 = pppppppplVar21;
          uVar20 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_78);
          if (((uVar20 & 1) != 0) &&
             (pppppplVar11 = (long ******)
                             FUN_710392e290(0x10,pppppppplVar21,(long ****)ppuVar15,ppppbVar17,
                                            pppplVar18,in_x5,in_x6,in_x7),
             pppppplVar11 != (long ******)0x0)) goto LAB_71018d7444;
        }
        goto LAB_71018d7440;
      }
    }
LAB_71018d7444:
    pppppplVar25 = pppppplVar11 + ((long)ppppppppplVar14 >> 3) + 1;
    pppppplVar11[(long)ppppppppplVar14 >> 3] = (long *****)0x1b20b911fa;
    if (0 < (long)ppppppppplVar14) {
      memcpy(pppppplVar11,pppppplVar26,(size_t)ppppppppplVar14);
      ppuVar15 = (undefined **)ppppppppplVar14;
    }
    ppppppplVar10[0x30] = pppppplVar11;
    ppppppplVar10[0x31] = pppppplVar25;
    ppppppplVar10[0x32] = pppppplVar11 + uVar8;
    if (pppppplVar26 != (long ******)0x0) {
      FUN_710392eb40((ulong)pppppplVar26);
      pppppplVar25 = ppppppplVar10[0x31];
    }
  }
  if (pppppplVar25 < ppppppplVar10[0x32]) {
    *pppppplVar25 = (long *****)&DAT_1b57be216c;
    ppppppplVar10[0x31] = ppppppplVar10[0x31] + 1;
  }
  else {
    pppppplVar26 = *ppppppplVar2;
    ppppppppplVar14 = (long *********)((long)pppppplVar25 - (long)pppppplVar26);
    lVar7 = (long)ppppppppplVar14 >> 3;
    uVar8 = lVar7 + 1;
    if (uVar8 >> 0x3d != 0) {
LAB_71018d844c:
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar19 = (long)ppppppplVar10[0x32] - (long)pppppplVar26;
    if ((ulong)(lVar19 >> 3) < 0xfffffffffffffff) {
      uVar20 = lVar19 >> 2;
      if (uVar8 <= uVar20) {
        uVar8 = uVar20;
      }
      if (uVar8 != 0) {
        if (uVar8 >> 0x3d != 0) {
LAB_71018d74fc:
                    /* WARNING: Subroutine does not return */
          abort();
        }
        goto LAB_71018d7504;
      }
LAB_71018d7564:
      pppppplVar11 = (long ******)0x0;
    }
    else {
      uVar8 = 0x1fffffffffffffff;
LAB_71018d7504:
      pppppppplVar21 = (long ********)(uVar8 * 8);
      if (pppppppplVar21 == (long ********)0x0) {
        pppppppplVar21 = (long ********)0x1;
      }
      pppppplVar11 = (long ******)
                     FUN_710392e290(0x10,pppppppplVar21,(long ****)ppuVar15,ppppbVar17,pppplVar18,
                                    in_x5,in_x6,in_x7);
      if (pppppplVar11 == (long ******)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_78 = (long ***)((ulong)local_78 & 0xffffffff00000000);
          ppuVar15 = (undefined **)&local_70;
          local_70 = pppppppplVar21;
          uVar20 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_78);
          if (((uVar20 & 1) != 0) &&
             (pppppplVar11 = (long ******)
                             FUN_710392e290(0x10,pppppppplVar21,(long ****)ppuVar15,ppppbVar17,
                                            pppplVar18,in_x5,in_x6,in_x7),
             pppppplVar11 != (long ******)0x0)) goto LAB_71018d7568;
        }
        goto LAB_71018d7564;
      }
    }
LAB_71018d7568:
    pppppplVar11[lVar7] = (long *****)&DAT_1b57be216c;
    if (0 < (long)ppppppppplVar14) {
      memcpy(pppppplVar11,pppppplVar26,(size_t)ppppppppplVar14);
      ppuVar15 = (undefined **)ppppppppplVar14;
    }
    ppppppplVar10[0x30] = pppppplVar11;
    ppppppplVar10[0x31] = pppppplVar11 + lVar7 + 1;
    ppppppplVar10[0x32] = pppppplVar11 + uVar8;
    if (pppppplVar26 != (long ******)0x0) {
      FUN_710392eb40((ulong)pppppplVar26);
    }
  }
  if (ppppppplVar10[3] == ppppppplVar10[2]) {
                    /* WARNING: Subroutine does not return */
    std::__vector_base_common<true>::__throw_out_of_range();
  }
  FUN_7103778630(0,(long)(***ppppppplVar10[2])[2],0x7104421055);
  pppppplVar26 = *ppppppplVar29;
  if (*pppppplVar26 != (long *****)0x0) {
    ppuVar15 = (undefined **)&DAT_71042b2a84;
    ppppbVar17 = (byte ****)0x3;
    FUN_7103375650((long *)*pppppplVar26,"SCENE_EXIT_CODE_ORE_SOUND",&DAT_71042b2a84);
    pppppplVar26 = *ppppppplVar29;
    if (*pppppplVar26 != (long *****)0x0) {
      ppuVar15 = (undefined **)&DAT_71042b2a84;
      ppppbVar17 = (byte ****)&DAT_00000004;
      FUN_7103375650((long *)*pppppplVar26,"SCENE_EXIT_CODE_TEST",&DAT_71042b2a84);
      pppppplVar26 = *ppppppplVar29;
      if (*pppppplVar26 != (long *****)0x0) {
        ppuVar15 = (undefined **)&DAT_71042b2a84;
        ppppbVar17 = (byte ****)0x0;
        FUN_7103375650((long *)*pppppplVar26,"BUTTON_ID_MODE",&DAT_71042b2a84);
        pppppplVar26 = *ppppppplVar29;
        if (*pppppplVar26 != (long *****)0x0) {
          ppuVar15 = (undefined **)&DAT_71042b2a84;
          ppppbVar17 = (byte ****)0x5;
          FUN_7103375650((long *)*pppppplVar26,"BUTTON_ID_PLAY_ALL",&DAT_71042b2a84);
          pppppplVar26 = *ppppppplVar29;
          if (*pppppplVar26 != (long *****)0x0) {
            ppuVar15 = (undefined **)&DAT_71042b2a84;
            ppppbVar17 = (byte ****)&DAT_00000004;
            FUN_7103375650((long *)*pppppplVar26,"BUTTON_ID_SOUND_TYPE",&DAT_71042b2a84);
            pppppplVar26 = *ppppppplVar29;
            if (*pppppplVar26 != (long *****)0x0) {
              ppuVar15 = (undefined **)&DAT_71042b2a84;
              ppppbVar17 = (byte ****)0x1;
              FUN_7103375650((long *)*pppppplVar26,"BUTTON_ID_BGM",&DAT_71042b2a84);
              pppppplVar26 = *ppppppplVar29;
              if (*pppppplVar26 != (long *****)0x0) {
                ppuVar15 = (undefined **)&DAT_71042b2a84;
                ppppbVar17 = (byte ****)0x2;
                FUN_7103375650((long *)*pppppplVar26,"BUTTON_ID_SE",&DAT_71042b2a84);
                pppppplVar26 = *ppppppplVar29;
                if (*pppppplVar26 != (long *****)0x0) {
                  ppuVar15 = (undefined **)&DAT_71042b2a84;
                  ppppbVar17 = (byte ****)0x3;
                  FUN_7103375650((long *)*pppppplVar26,"BUTTON_ID_VOICE",&DAT_71042b2a84);
                  pppppplVar26 = *ppppppplVar29;
                  if (*pppppplVar26 != (long *****)0x0) {
                    ppuVar15 = (undefined **)&DAT_71042b2a84;
                    ppppbVar17 = (byte ****)0x6;
                    FUN_7103375650((long *)*pppppplVar26,"BUTTON_ID_EXIT_MENU",&DAT_71042b2a84);
                    pppppplVar26 = *ppppppplVar29;
                    if (*pppppplVar26 != (long *****)0x0) {
                      ppuVar15 = (undefined **)&DAT_71042b2a84;
                      ppppbVar17 = (byte ****)&DAT_00000007;
                      FUN_7103375650((long *)*pppppplVar26,"BUTTON_ID_OK",&DAT_71042b2a84);
                      pppppplVar26 = *ppppppplVar29;
                      if (*pppppplVar26 != (long *****)0x0) {
                        ppuVar15 = (undefined **)&DAT_71042b2a84;
                        ppppbVar17 = (byte ****)0x0;
                        FUN_7103375650((long *)*pppppplVar26,"MODE_TELEVISION",&DAT_71042b2a84);
                        pppppplVar26 = *ppppppplVar29;
                        if (*pppppplVar26 != (long *****)0x0) {
                          ppuVar15 = (undefined **)&DAT_71042b2a84;
                          ppppbVar17 = (byte ****)0x1;
                          FUN_7103375650((long *)*pppppplVar26,"MODE_PORTABLE",&DAT_71042b2a84);
                          pppppplVar26 = *ppppppplVar29;
                          if (*pppppplVar26 != (long *****)0x0) {
                            ppuVar15 = (undefined **)&DAT_71042b2a84;
                            ppppbVar17 = (byte ****)0x2;
                            FUN_7103375650((long *)*pppppplVar26,"MODE_HEADPHONE",&DAT_71042b2a84);
                            pppppplVar26 = *ppppppplVar29;
                            if (*pppppplVar26 != (long *****)0x0) {
                              ppuVar15 = (undefined **)&DAT_71042b2a84;
                              ppppbVar17 = (byte ****)0x3;
                              FUN_7103375650((long *)*pppppplVar26,"MODE_NUM",&DAT_71042b2a84);
                              pppppplVar26 = *ppppppplVar29;
                              if (*pppppplVar26 != (long *****)0x0) {
                                ppuVar15 = (undefined **)&DAT_71042b2a84;
                                ppppbVar17 = (byte ****)0x0;
                                FUN_7103375650((long *)*pppppplVar26,"SOUND_TYPE_LOW",
                                               &DAT_71042b2a84);
                                pppppplVar26 = *ppppppplVar29;
                                if (*pppppplVar26 != (long *****)0x0) {
                                  ppuVar15 = (undefined **)&DAT_71042b2a84;
                                  ppppbVar17 = (byte ****)0x1;
                                  FUN_7103375650((long *)*pppppplVar26,"SOUND_TYPE_NORMAL",
                                                 &DAT_71042b2a84);
                                  pppppplVar26 = *ppppppplVar29;
                                  if (*pppppplVar26 != (long *****)0x0) {
                                    ppuVar15 = (undefined **)&DAT_71042b2a84;
                                    ppppbVar17 = (byte ****)0x2;
                                    FUN_7103375650((long *)*pppppplVar26,"SOUND_TYPE_HIGH",
                                                   &DAT_71042b2a84);
                                    pppppplVar26 = *ppppppplVar29;
                                    if (*pppppplVar26 != (long *****)0x0) {
                                      ppuVar15 = (undefined **)&DAT_71042b2a84;
                                      ppppbVar17 = (byte ****)0x3;
                                      FUN_7103375650((long *)*pppppplVar26,"SOUND_TYPE_NUM",
                                                     &DAT_71042b2a84);
                                      pppppplVar26 = *ppppppplVar29;
                                      if (*pppppplVar26 != (long *****)0x0) {
                                        ppuVar15 = (undefined **)&DAT_71042b2a84;
                                        ppppbVar17 = (byte ****)0x1;
                                        FUN_7103375650((long *)*pppppplVar26,"SOUND_TYPE_DEFAULT",
                                                       &DAT_71042b2a84);
                                        pppppplVar26 = *ppppppplVar29;
                                        if (*pppppplVar26 != (long *****)0x0) {
                                          ppuVar15 = (undefined **)&DAT_71042a1c55;
                                          FUN_7103375650((long *)*pppppplVar26,"VOLUME_MIN",
                                                         &DAT_71042a1c55);
                                          pppppplVar26 = *ppppppplVar29;
                                          if (*pppppplVar26 != (long *****)0x0) {
                                            ppuVar15 = (undefined **)&DAT_71042a1c55;
                                            FUN_7103375650((long *)*pppppplVar26,"VOLUME_MAX",
                                                           &DAT_71042a1c55);
                                            pppppplVar26 = *ppppppplVar29;
                                            if (*pppppplVar26 != (long *****)0x0) {
                                              ppuVar15 = (undefined **)&DAT_71042a1c55;
                                              FUN_7103375650((long *)*pppppplVar26,"VOLUME_DEFAULT",
                                                             &DAT_71042a1c55);
                                              pppppplVar26 = *ppppppplVar29;
                                              if (*pppppplVar26 != (long *****)0x0) {
                                                ppuVar15 = (undefined **)&DAT_71042b2a84;
                                                ppppbVar17 = (byte ****)0x0;
                                                FUN_7103375650((long *)*pppppplVar26,
                                                               "EXIT_MENU_ORE_SOUND",&DAT_71042b2a84
                                                              );
                                                pppppplVar26 = *ppppppplVar29;
                                                if (*pppppplVar26 != (long *****)0x0) {
                                                  ppuVar15 = (undefined **)&DAT_71042b2a84;
                                                  ppppbVar17 = (byte ****)0x1;
                                                  FUN_7103375650((long *)*pppppplVar26,
                                                                 "EXIT_MENU_TEST",&DAT_71042b2a84);
                                                  pppppplVar26 = *ppppppplVar29;
                                                  if (*pppppplVar26 != (long *****)0x0) {
                                                    ppuVar15 = (undefined **)&DAT_71042b2a84;
                                                    ppppbVar17 = (byte ****)0x2;
                                                    FUN_7103375650((long *)*pppppplVar26,
                                                                   "EXIT_MENU_SAVE",&DAT_71042b2a84)
                                                    ;
                                                    pppppplVar26 = *ppppppplVar29;
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  ppplVar12 = (long ***)
              FUN_710392e290(0x10,0x28,(long ****)ppuVar15,ppppbVar17,pppplVar18,in_x5,in_x6,in_x7);
  if (ppplVar12 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_78 = (long ***)((ulong)local_78 & 0xffffffff00000000);
      local_70 = (long ********)&DAT_00000028;
      ppppppppplVar14 = &local_70;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_78);
      if (((uVar8 & 1) != 0) &&
         (ppplVar12 = (long ***)
                      FUN_710392e290(0x10,0x28,(long ****)ppppppppplVar14,ppppbVar17,pppplVar18,
                                     in_x5,in_x6,in_x7), ppplVar12 != (long ***)0x0))
      goto LAB_71018d79bc;
    }
    ppplVar12 = (long ***)0x0;
  }
LAB_71018d79bc:
  *ppplVar12 = (long **)&PTR_FUN_71050af708;
  ppplVar12[4] = (long **)0x0;
  ppplVar12[2] = (long **)ppppppplVar10;
  ppplVar12[3] = (long **)FUN_7101d53a00;
  *(undefined4 *)(ppplVar12 + 1) = 0;
  pppplVar24 = &local_78;
  local_78 = ppplVar12;
  FUN_7103376af0((long)pppppplVar26,(byte *)"set_edited_setting_data",pppplVar24,ppppbVar17,
                 pppplVar18,in_x5,in_x6,in_x7);
  ppplVar12 = local_78;
  local_78 = (long ***)0x0;
  if (ppplVar12 != (long ***)0x0) {
    (*(code *)(*ppplVar12)[1])();
  }
  pppppplVar26 = *ppppppplVar29;
  ppplVar12 = (long ***)FUN_710392e290(0x10,0x28,pppplVar24,ppppbVar17,pppplVar18,in_x5,in_x6,in_x7)
  ;
  if (ppplVar12 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_80 = (long ***)((ulong)local_80._4_4_ << 0x20);
      local_70 = (long ********)&DAT_00000028;
      ppppppppplVar14 = &local_70;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_80);
      if (((uVar8 & 1) != 0) &&
         (ppplVar12 = (long ***)
                      FUN_710392e290(0x10,0x28,(long ****)ppppppppplVar14,ppppbVar17,pppplVar18,
                                     in_x5,in_x6,in_x7), ppplVar12 != (long ***)0x0))
      goto LAB_71018d7a64;
    }
    ppplVar12 = (long ***)0x0;
  }
LAB_71018d7a64:
  *ppplVar12 = (long **)&PTR_FUN_71050af730;
  ppplVar12[4] = (long **)0x0;
  ppplVar12[2] = (long **)ppppppplVar10;
  ppplVar12[3] = (long **)FUN_7101d53d00;
  *(undefined4 *)(ppplVar12 + 1) = 0;
  pppplVar24 = (long ****)&local_80;
  local_80 = ppplVar12;
  FUN_7103376af0((long)pppppplVar26,(byte *)"update_edited_sound_type",pppplVar24,ppppbVar17,
                 pppplVar18,in_x5,in_x6,in_x7);
  ppplVar12 = local_80;
  local_80 = (long ***)0x0;
  if (ppplVar12 != (long ***)0x0) {
    (*(code *)(*ppplVar12)[1])();
  }
  pppppplVar26 = *ppppppplVar29;
  ppplVar12 = (long ***)FUN_710392e290(0x10,0x28,pppplVar24,ppppbVar17,pppplVar18,in_x5,in_x6,in_x7)
  ;
  if (ppplVar12 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_88 = (long ***)((ulong)local_88._4_4_ << 0x20);
      local_70 = (long ********)&DAT_00000028;
      ppppppppplVar14 = &local_70;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_88);
      if (((uVar8 & 1) != 0) &&
         (ppplVar12 = (long ***)
                      FUN_710392e290(0x10,0x28,(long ****)ppppppppplVar14,ppppbVar17,pppplVar18,
                                     in_x5,in_x6,in_x7), ppplVar12 != (long ***)0x0))
      goto LAB_71018d7b0c;
    }
    ppplVar12 = (long ***)0x0;
  }
LAB_71018d7b0c:
  *ppplVar12 = (long **)&PTR_FUN_71050af758;
  ppplVar12[4] = (long **)0x0;
  ppplVar12[2] = (long **)ppppppplVar10;
  ppplVar12[3] = (long **)FUN_7101d53de0;
  *(undefined4 *)(ppplVar12 + 1) = 0;
  pppplVar24 = (long ****)&local_88;
  local_88 = ppplVar12;
  FUN_7103376af0((long)pppppplVar26,(byte *)"update_edited_bgm_volume",pppplVar24,ppppbVar17,
                 pppplVar18,in_x5,in_x6,in_x7);
  ppplVar12 = local_88;
  local_88 = (long ***)0x0;
  if (ppplVar12 != (long ***)0x0) {
    (*(code *)(*ppplVar12)[1])();
  }
  pppppplVar26 = *ppppppplVar29;
  ppplVar12 = (long ***)FUN_710392e290(0x10,0x28,pppplVar24,ppppbVar17,pppplVar18,in_x5,in_x6,in_x7)
  ;
  if (ppplVar12 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_90 = (long ***)((ulong)local_90._4_4_ << 0x20);
      local_70 = (long ********)&DAT_00000028;
      ppppppppplVar14 = &local_70;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_90);
      if (((uVar8 & 1) != 0) &&
         (ppplVar12 = (long ***)
                      FUN_710392e290(0x10,0x28,(long ****)ppppppppplVar14,ppppbVar17,pppplVar18,
                                     in_x5,in_x6,in_x7), ppplVar12 != (long ***)0x0))
      goto LAB_71018d7bb4;
    }
    ppplVar12 = (long ***)0x0;
  }
LAB_71018d7bb4:
  *ppplVar12 = (long **)&PTR_FUN_71050af758;
  ppplVar12[2] = (long **)ppppppplVar10;
  ppplVar12[3] = (long **)FUN_7101d53f10;
  ppplVar12[4] = (long **)0x0;
  pppplVar24 = (long ****)&local_90;
  *(undefined4 *)(ppplVar12 + 1) = 0;
  local_90 = ppplVar12;
  FUN_7103376af0((long)pppppplVar26,(byte *)"update_edited_se_volume",pppplVar24,ppppbVar17,
                 pppplVar18,in_x5,in_x6,in_x7);
  ppplVar12 = local_90;
  local_90 = (long ***)0x0;
  if (ppplVar12 != (long ***)0x0) {
    (*(code *)(*ppplVar12)[1])();
  }
  pppppplVar26 = *ppppppplVar29;
  ppplVar12 = (long ***)FUN_710392e290(0x10,0x28,pppplVar24,ppppbVar17,pppplVar18,in_x5,in_x6,in_x7)
  ;
  if (ppplVar12 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_98 = (long ***)((ulong)local_98._4_4_ << 0x20);
      local_70 = (long ********)&DAT_00000028;
      ppppppppplVar14 = &local_70;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_98);
      if (((uVar8 & 1) != 0) &&
         (ppplVar12 = (long ***)
                      FUN_710392e290(0x10,0x28,(long ****)ppppppppplVar14,ppppbVar17,pppplVar18,
                                     in_x5,in_x6,in_x7), ppplVar12 != (long ***)0x0))
      goto LAB_71018d7c54;
    }
    ppplVar12 = (long ***)0x0;
  }
LAB_71018d7c54:
  *ppplVar12 = (long **)&PTR_FUN_71050af758;
  ppplVar12[2] = (long **)ppppppplVar10;
  ppplVar12[3] = (long **)FUN_7101d54020;
  ppplVar12[4] = (long **)0x0;
  pppplVar24 = (long ****)&local_98;
  *(undefined4 *)(ppplVar12 + 1) = 0;
  local_98 = ppplVar12;
  FUN_7103376af0((long)pppppplVar26,(byte *)"update_edited_voice_volume",pppplVar24,ppppbVar17,
                 pppplVar18,in_x5,in_x6,in_x7);
  ppplVar12 = local_98;
  local_98 = (long ***)0x0;
  if (ppplVar12 != (long ***)0x0) {
    (*(code *)(*ppplVar12)[1])();
  }
  pppppplVar26 = *ppppppplVar29;
  ppplVar12 = (long ***)FUN_710392e290(0x10,0x38,pppplVar24,ppppbVar17,pppplVar18,in_x5,in_x6,in_x7)
  ;
  if (ppplVar12 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a0 = (long ***)((ulong)local_a0._4_4_ << 0x20);
      local_70 = (long ********)&DAT_00000038;
      ppppppppplVar14 = &local_70;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a0);
      if (((uVar8 & 1) != 0) &&
         (ppplVar12 = (long ***)
                      FUN_710392e290(0x10,0x38,(long ****)ppppppppplVar14,ppppbVar17,pppplVar18,
                                     in_x5,in_x6,in_x7), ppplVar12 != (long ***)0x0))
      goto LAB_71018d7cf4;
    }
    ppplVar12 = (long ***)0x0;
  }
LAB_71018d7cf4:
  ppplVar12[3] = (long **)FUN_7101d54130;
  ppplVar12[4] = (long **)0x0;
  ppplVar12[5] = (long **)0x0;
  ppplVar12[6] = (long **)0x0;
  *ppplVar12 = (long **)&PTR_FUN_71050af780;
  ppplVar12[2] = (long **)ppppppplVar10;
  pppplVar24 = (long ****)&local_a0;
  *(undefined4 *)(ppplVar12 + 1) = 1;
  local_a0 = ppplVar12;
  FUN_7103376af0((long)pppppplVar26,(byte *)"is_not_change",pppplVar24,ppppbVar17,pppplVar18,in_x5,
                 in_x6,in_x7);
  ppplVar12 = local_a0;
  local_a0 = (long ***)0x0;
  if (ppplVar12 != (long ***)0x0) {
    (*(code *)(*ppplVar12)[1])();
  }
  pppppplVar26 = *ppppppplVar29;
  ppplVar12 = (long ***)FUN_710392e290(0x10,0x28,pppplVar24,ppppbVar17,pppplVar18,in_x5,in_x6,in_x7)
  ;
  if (ppplVar12 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_a8 = (long ***)((ulong)local_a8._4_4_ << 0x20);
      local_70 = (long ********)&DAT_00000028;
      ppppppppplVar14 = &local_70;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_a8);
      if (((uVar8 & 1) != 0) &&
         (ppplVar12 = (long ***)
                      FUN_710392e290(0x10,0x28,(long ****)ppppppppplVar14,ppppbVar17,pppplVar18,
                                     in_x5,in_x6,in_x7), ppplVar12 != (long ***)0x0))
      goto LAB_71018d7da4;
    }
    ppplVar12 = (long ***)0x0;
  }
LAB_71018d7da4:
  *ppplVar12 = (long **)&PTR_FUN_71050af7a8;
  ppplVar12[4] = (long **)0x0;
  ppplVar12[2] = (long **)ppppppplVar10;
  ppplVar12[3] = (long **)FUN_7101d542b0;
  *(undefined4 *)(ppplVar12 + 1) = 0;
  pppplVar24 = (long ****)&local_a8;
  local_a8 = ppplVar12;
  FUN_7103376af0((long)pppppplVar26,(byte *)"switch_sample_all",pppplVar24,ppppbVar17,pppplVar18,
                 in_x5,in_x6,in_x7);
  ppplVar12 = local_a8;
  local_a8 = (long ***)0x0;
  if (ppplVar12 != (long ***)0x0) {
    (*(code *)(*ppplVar12)[1])();
  }
  pppppplVar26 = *ppppppplVar29;
  ppplVar12 = (long ***)FUN_710392e290(0x10,0x38,pppplVar24,ppppbVar17,pppplVar18,in_x5,in_x6,in_x7)
  ;
  if (ppplVar12 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (long ***)((ulong)local_b0._4_4_ << 0x20);
      local_70 = (long ********)&DAT_00000038;
      ppppppppplVar14 = &local_70;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar8 & 1) != 0) &&
         (ppplVar12 = (long ***)
                      FUN_710392e290(0x10,0x38,(long ****)ppppppppplVar14,ppppbVar17,pppplVar18,
                                     in_x5,in_x6,in_x7), ppplVar12 != (long ***)0x0))
      goto LAB_71018d7e4c;
    }
    ppplVar12 = (long ***)0x0;
  }
LAB_71018d7e4c:
  ppplVar12[5] = (long **)0x0;
  ppplVar12[6] = (long **)0x0;
  *ppplVar12 = (long **)&PTR_FUN_71050af7d0;
  ppplVar12[2] = (long **)ppppppplVar10;
  ppplVar12[3] = (long **)FUN_7101d54350;
  ppplVar12[4] = (long **)0x0;
  pppplVar24 = (long ****)&local_b0;
  *(undefined4 *)(ppplVar12 + 1) = 0;
  local_b0 = ppplVar12;
  FUN_7103376af0((long)pppppplVar26,(byte *)"switch_sample_bgm",pppplVar24,ppppbVar17,pppplVar18,
                 in_x5,in_x6,in_x7);
  ppplVar12 = local_b0;
  local_b0 = (long ***)0x0;
  if (ppplVar12 != (long ***)0x0) {
    (*(code *)(*ppplVar12)[1])();
  }
  pppppplVar26 = *ppppppplVar29;
  ppplVar12 = (long ***)FUN_710392e290(0x10,0x38,pppplVar24,ppppbVar17,pppplVar18,in_x5,in_x6,in_x7)
  ;
  if (ppplVar12 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b8 = (long ***)((ulong)local_b8._4_4_ << 0x20);
      local_70 = (long ********)&DAT_00000038;
      ppppppppplVar14 = &local_70;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b8);
      if (((uVar8 & 1) != 0) &&
         (ppplVar12 = (long ***)
                      FUN_710392e290(0x10,0x38,(long ****)ppppppppplVar14,ppppbVar17,pppplVar18,
                                     in_x5,in_x6,in_x7), ppplVar12 != (long ***)0x0))
      goto LAB_71018d7ef8;
    }
    ppplVar12 = (long ***)0x0;
  }
LAB_71018d7ef8:
  *ppplVar12 = (long **)&PTR_FUN_71050af780;
  ppplVar12[3] = (long **)FUN_7101d543d0;
  ppplVar12[4] = (long **)0x0;
  ppplVar12[5] = (long **)0x0;
  ppplVar12[6] = (long **)0x0;
  pppplVar24 = (long ****)&local_b8;
  ppplVar12[2] = (long **)ppppppplVar10;
  *(undefined4 *)(ppplVar12 + 1) = 1;
  local_b8 = ppplVar12;
  FUN_7103376af0((long)pppppplVar26,(byte *)"is_playing_sample_bgm",pppplVar24,ppppbVar17,pppplVar18
                 ,in_x5,in_x6,in_x7);
  ppplVar12 = local_b8;
  local_b8 = (long ***)0x0;
  if (ppplVar12 != (long ***)0x0) {
    (*(code *)(*ppplVar12)[1])();
  }
  pppppplVar26 = *ppppppplVar29;
  ppplVar12 = (long ***)FUN_710392e290(0x10,0x38,pppplVar24,ppppbVar17,pppplVar18,in_x5,in_x6,in_x7)
  ;
  if (ppplVar12 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_c0 = (long ***)((ulong)local_c0._4_4_ << 0x20);
      local_70 = (long ********)&DAT_00000038;
      ppppppppplVar14 = &local_70;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_c0);
      if (((uVar8 & 1) != 0) &&
         (ppplVar12 = (long ***)
                      FUN_710392e290(0x10,0x38,(long ****)ppppppppplVar14,ppppbVar17,pppplVar18,
                                     in_x5,in_x6,in_x7), ppplVar12 != (long ***)0x0))
      goto LAB_71018d7fa0;
    }
    ppplVar12 = (long ***)0x0;
  }
LAB_71018d7fa0:
  *ppplVar12 = (long **)&PTR_FUN_71050af7d0;
  ppplVar12[5] = (long **)0x0;
  ppplVar12[6] = (long **)0x0;
  ppplVar12[2] = (long **)ppppppplVar10;
  pppplVar24 = (long ****)&local_c0;
  ppplVar12[3] = (long **)FUN_7101d54450;
  ppplVar12[4] = (long **)0x0;
  *(undefined4 *)(ppplVar12 + 1) = 0;
  local_c0 = ppplVar12;
  FUN_7103376af0((long)pppppplVar26,(byte *)"play_sample_se",pppplVar24,ppppbVar17,pppplVar18,in_x5,
                 in_x6,in_x7);
  ppplVar12 = local_c0;
  local_c0 = (long ***)0x0;
  if (ppplVar12 != (long ***)0x0) {
    (*(code *)(*ppplVar12)[1])();
  }
  pppppplVar26 = *ppppppplVar29;
  ppplVar12 = (long ***)FUN_710392e290(0x10,0x38,pppplVar24,ppppbVar17,pppplVar18,in_x5,in_x6,in_x7)
  ;
  if (ppplVar12 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_c8 = (long ***)((ulong)local_c8._4_4_ << 0x20);
      local_70 = (long ********)&DAT_00000038;
      ppppppppplVar14 = &local_70;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_c8);
      if (((uVar8 & 1) != 0) &&
         (ppplVar12 = (long ***)
                      FUN_710392e290(0x10,0x38,(long ****)ppppppppplVar14,ppppbVar17,pppplVar18,
                                     in_x5,in_x6,in_x7), ppplVar12 != (long ***)0x0))
      goto LAB_71018d8044;
    }
    ppplVar12 = (long ***)0x0;
  }
LAB_71018d8044:
  *ppplVar12 = (long **)&PTR_FUN_71050af780;
  ppplVar12[3] = (long **)FUN_7101d54710;
  ppplVar12[4] = (long **)0x0;
  ppplVar12[5] = (long **)0x0;
  ppplVar12[6] = (long **)0x0;
  pppplVar24 = (long ****)&local_c8;
  ppplVar12[2] = (long **)ppppppplVar10;
  *(undefined4 *)(ppplVar12 + 1) = 1;
  local_c8 = ppplVar12;
  FUN_7103376af0((long)pppppplVar26,(byte *)"is_playing_sample_se",pppplVar24,ppppbVar17,pppplVar18,
                 in_x5,in_x6,in_x7);
  ppplVar12 = local_c8;
  local_c8 = (long ***)0x0;
  if (ppplVar12 != (long ***)0x0) {
    (*(code *)(*ppplVar12)[1])();
  }
  pppppplVar26 = *ppppppplVar29;
  ppplVar12 = (long ***)FUN_710392e290(0x10,0x38,pppplVar24,ppppbVar17,pppplVar18,in_x5,in_x6,in_x7)
  ;
  if (ppplVar12 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_d0 = (long ***)((ulong)local_d0._4_4_ << 0x20);
      local_70 = (long ********)&DAT_00000038;
      ppppppppplVar14 = &local_70;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_d0);
      if (((uVar8 & 1) != 0) &&
         (ppplVar12 = (long ***)
                      FUN_710392e290(0x10,0x38,(long ****)ppppppppplVar14,ppppbVar17,pppplVar18,
                                     in_x5,in_x6,in_x7), ppplVar12 != (long ***)0x0))
      goto LAB_71018d80ec;
    }
    ppplVar12 = (long ***)0x0;
  }
LAB_71018d80ec:
  *ppplVar12 = (long **)&PTR_FUN_71050af7d0;
  ppplVar12[5] = (long **)0x0;
  ppplVar12[6] = (long **)0x0;
  ppplVar12[2] = (long **)ppppppplVar10;
  pppplVar24 = (long ****)&local_d0;
  ppplVar12[3] = (long **)FUN_7101d547d0;
  ppplVar12[4] = (long **)0x0;
  *(undefined4 *)(ppplVar12 + 1) = 0;
  local_d0 = ppplVar12;
  FUN_7103376af0((long)pppppplVar26,(byte *)"play_sample_voice",pppplVar24,ppppbVar17,pppplVar18,
                 in_x5,in_x6,in_x7);
  ppplVar12 = local_d0;
  local_d0 = (long ***)0x0;
  if (ppplVar12 != (long ***)0x0) {
    (*(code *)(*ppplVar12)[1])();
  }
  pppppplVar26 = *ppppppplVar29;
  ppplVar12 = (long ***)FUN_710392e290(0x10,0x38,pppplVar24,ppppbVar17,pppplVar18,in_x5,in_x6,in_x7)
  ;
  if (ppplVar12 == (long ***)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_d8 = (long ***)((ulong)local_d8._4_4_ << 0x20);
      local_70 = (long ********)&DAT_00000038;
      ppppppppplVar14 = &local_70;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_d8);
      if (((uVar8 & 1) != 0) &&
         (ppplVar12 = (long ***)
                      FUN_710392e290(0x10,0x38,(long ****)ppppppppplVar14,ppppbVar17,pppplVar18,
                                     in_x5,in_x6,in_x7), ppplVar12 != (long ***)0x0))
      goto LAB_71018d8190;
    }
    ppplVar12 = (long ***)0x0;
  }
LAB_71018d8190:
  *ppplVar12 = (long **)&PTR_FUN_71050af780;
  ppplVar12[3] = (long **)FUN_7101d54a90;
  ppplVar12[4] = (long **)0x0;
  ppplVar12[5] = (long **)0x0;
  ppplVar12[6] = (long **)0x0;
  pppplVar24 = (long ****)&local_d8;
  ppplVar12[2] = (long **)ppppppplVar10;
  *(undefined4 *)(ppplVar12 + 1) = 1;
  local_d8 = ppplVar12;
  FUN_7103376af0((long)pppppplVar26,(byte *)"is_playing_sample_voice",pppplVar24,ppppbVar17,
                 pppplVar18,in_x5,in_x6,in_x7);
  ppplVar12 = local_d8;
  local_d8 = (long ***)0x0;
  if (ppplVar12 != (long ***)0x0) {
    (*(code *)(*ppplVar12)[1])();
  }
  pppppplVar26 = *ppppppplVar29;
  local_70 = (long ********)
             FUN_710392e290(0x10,0x28,pppplVar24,ppppbVar17,pppplVar18,in_x5,in_x6,in_x7);
  if (local_70 == (long ********)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_64 = 0;
      local_70 = (long ********)&DAT_00000028;
      ppppppppplVar14 = &local_70;
      uVar8 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_64);
      if (((uVar8 & 1) != 0) &&
         (local_70 = (long ********)
                     FUN_710392e290(0x10,0x28,(long ****)ppppppppplVar14,ppppbVar17,pppplVar18,in_x5
                                    ,in_x6,in_x7), local_70 != (long ********)0x0))
      goto LAB_71018d8238;
    }
    local_70 = (long ********)0x0;
  }
LAB_71018d8238:
  *local_70 = (long *******)&PTR_FUN_71050af7a8;
  local_70[2] = ppppppplVar10;
  local_70[3] = (long *******)FUN_7101d54b50;
  local_70[4] = (long *******)0x0;
  pcVar16 = (char *)&local_70;
  *(undefined4 *)(local_70 + 1) = 0;
  FUN_7103376af0((long)pppppplVar26,(byte *)"set_enable_auto_sound_setting",(long ****)pcVar16,
                 ppppbVar17,pppplVar18,in_x5,in_x6,in_x7);
  pppppppplVar21 = local_70;
  local_70 = (long ********)0x0;
  if (pppppppplVar21 != (long ********)0x0) {
    (*(code *)(*pppppppplVar21)[1])();
  }
  pppppplVar26 = *ppppppplVar29;
  ppppplVar22 = *pppppplVar26;
  pppplVar27 = *ppppplVar22;
  *(undefined4 *)(ppppplVar22 + 2) = 0;
  ppplVar12 = pppplVar27[2];
  *ppplVar12 = (long **)pppplVar27;
  *(undefined4 *)(ppplVar12 + 1) = 0x48;
  ppplVar12 = pppplVar27[2];
  pppplVar27[2] = ppplVar12 + 2;
  pppplVar24 = (long ****)pppplVar27[3][0x19];
  pppplVar27[2] = ppplVar12;
  if (pppplVar24 == pppplVar27) {
    pplVar23 = pppplVar27[3][8];
    if (*(uint *)((long)pplVar23 + 0xc) < 2) {
      plVar28 = pplVar23[3] +
                ((ulong)~(uint)(0xffffffffL << ((ulong)*(byte *)((long)pplVar23 + 0xb) & 0x3f)) & 2)
                * 4;
      do {
        if (((int)plVar28[3] == 0x13) && (plVar13 = plVar28, plVar28[2] == 2)) break;
        piVar1 = (int *)((long)plVar28 + 0x1c);
        plVar28 = plVar28 + (long)*piVar1 * 4;
        plVar13 = &DAT_7104862960;
      } while (*piVar1 != 0);
    }
    else {
      plVar13 = pplVar23[2] + 2;
    }
    pcVar16 = "setup";
    FUN_71038f4d40((long)pppplVar27,plVar13,"setup");
  }
  else {
    FUN_71038f4b20((long)pppplVar27,"setup");
    FUN_71038f4fc0((long)pppplVar27,-2);
  }
  ppplVar12 = pppplVar27[2] + -2;
  if ((ppplVar12 == (long ***)&DAT_7104862960) || (((ulong)pppplVar27[2][-1] & 0xf) != 6)) {
    pppplVar27[2] = ppplVar12;
  }
  else {
    FUN_7103377130(pppppplVar26,0,(long ****)pcVar16,ppppbVar17,pppplVar18,in_x5,in_x6,in_x7);
  }
  (**(code **)(*(long *)puVar9[0x10] + 8))((long *)puVar9[0x10],0);
  puVar9[2] = &DAT_7105333600;
  uVar6 = DAT_7105333664;
  *(undefined4 *)(puVar9 + 0xd) = DAT_7105333660;
  *(undefined4 *)((long)puVar9 + 0x6c) = uVar6;
  do {
    uVar5 = DAT_7105333650;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(0x7105333650,0x10);
    if (bVar4) {
      DAT_7105333650 = 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0' || (uVar5 & 1) != 0);
  puVar9[9] = DAT_7105333648;
  DAT_7105333650 = 0;
  DAT_7105333648 = puVar9;
  FUN_71032caea0((long)puVar9,extraout_x1_01,(long ****)pcVar16,ppppbVar17,pppplVar18,in_x5,in_x6,
                 in_x7);
  lVar7 = *(long *)(param_1 + 0x100);
  *(undefined8 **)(param_1 + 0x100) = puVar9;
  if (lVar7 != 0) {
    FUN_71032cad20(lVar7);
    return;
  }
  return;
}

