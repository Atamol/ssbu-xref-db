// addr:      7103773a70
// offset:    0x3773a70
// name:      FUN_7103773a70
// mangled:   
// signature: undefined __cdecl FUN_7103773a70(long * param_1, uint * param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_7103773a70(long *param_1,uint *param_2,long ****param_3,byte ****param_4,long ****param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char *pcVar1;
  char cVar2;
  ushort uVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined4 uVar22;
  bool bVar23;
  int iVar24;
  void *pvVar25;
  long *plVar26;
  long *plVar27;
  void *pvVar28;
  size_t sVar29;
  byte ****ppppbVar30;
  long ****pppplVar31;
  char *pcVar32;
  long ****pppplVar33;
  byte ****ppppbVar34;
  uint uVar35;
  ulong uVar36;
  long ***ppplVar37;
  undefined8 uVar38;
  uint *puVar39;
  byte *pbVar40;
  uint *puVar41;
  long lVar42;
  byte *pbVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  undefined8 uVar47;
  ulong uVar48;
  undefined8 uVar49;
  long lVar50;
  undefined8 *puVar51;
  uint *puVar52;
  ulong uVar53;
  ulong uVar54;
  undefined8 *puVar55;
  long ***__n;
  char *pcVar56;
  undefined8 *puVar57;
  char *pcVar58;
  long lVar59;
  long ****pppplVar60;
  ulong *puVar61;
  ulong uVar62;
  undefined8 *puVar63;
  float fVar64;
  undefined4 uVar65;
  undefined4 uVar66;
  undefined1 uVar67;
  byte bVar68;
  undefined1 uVar69;
  byte bVar70;
  undefined1 uVar71;
  byte bVar72;
  undefined1 uVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  byte bVar79;
  byte bVar80;
  byte bVar81;
  byte bVar82;
  undefined1 uVar83;
  byte bVar84;
  undefined1 uVar85;
  byte bVar86;
  undefined1 uVar87;
  byte bVar88;
  undefined1 uVar89;
  byte bVar90;
  undefined1 auVar91 [12];
  float fVar95;
  undefined1 uVar96;
  undefined1 uVar97;
  undefined1 uVar98;
  undefined1 uVar99;
  undefined1 uVar100;
  undefined1 uVar102;
  undefined1 uVar103;
  undefined1 uVar104;
  float fVar101;
  undefined1 auVar92 [16];
  undefined1 auVar94 [16];
  float fVar105;
  undefined1 auVar106 [16];
  float fVar107;
  float fVar110;
  undefined1 auVar108 [16];
  float fVar111;
  undefined1 auVar109 [16];
  float fVar112;
  float fVar113;
  int iVar114;
  float fVar115;
  float fVar120;
  undefined1 auVar116 [16];
  undefined1 auVar117 [16];
  undefined1 auVar118 [16];
  undefined1 auVar119 [16];
  undefined1 auVar121 [16];
  undefined1 auVar122 [16];
  float fVar123;
  undefined8 uVar124;
  undefined1 auVar125 [16];
  undefined1 auVar126 [16];
  undefined1 auVar127 [16];
  undefined1 auVar128 [16];
  int iVar134;
  undefined8 uVar129;
  int iVar135;
  undefined1 auVar130 [16];
  undefined1 auVar131 [16];
  float fVar133;
  undefined1 auVar132 [16];
  int iVar136;
  undefined1 auVar137 [16];
  undefined8 uVar138;
  undefined8 uVar139;
  float fVar141;
  undefined1 auVar140 [16];
  float fVar142;
  undefined1 auVar143 [16];
  undefined1 auVar144 [16];
  undefined8 uVar145;
  undefined1 auVar146 [16];
  undefined1 auVar147 [16];
  undefined1 auVar148 [16];
  undefined1 auVar149 [16];
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  float local_fc;
  undefined1 local_f8 [16];
  code *pcStack_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined1 local_d8;
  undefined1 uStack_d7;
  undefined2 uStack_d6;
  undefined4 local_d4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  long lStack_b8;
  long ***local_b0;
  code *local_a8;
  undefined8 uStack_a0;
  undefined2 local_98;
  undefined1 local_96;
  long ***local_90 [2];
  undefined4 local_74;
  undefined1 auVar93 [16];
  
  lVar59 = *param_1;
  iVar24 = (int)param_3;
  *(int *)(lVar59 + 0x63c) = iVar24;
  if (iVar24 < 1) {
    pppplVar31 = (long ****)&DAT_00000198;
    memset(*(void **)(lVar59 + 0x600),0,0x198);
    *(undefined1 *)(*(long *)(lVar59 + 0x600) + 0x4aa) = 0;
    *(undefined1 *)(*(long *)(lVar59 + 0x600) + 0x4ab) = 0;
  }
  else {
    lVar42 = *(long *)(lVar59 + 0x600);
    puVar61 = (ulong *)(lVar59 + 0x608);
    *(undefined4 *)(lVar42 + 0x490) = 0x3ed851ea;
    *(undefined2 *)(lVar42 + 0x4a8) = 0;
    *(undefined8 *)(lVar42 + 0x3fc) = 0x600000011;
    *(undefined8 *)(lVar42 + 0x404) = 0x6400000002;
    *(undefined8 *)(lVar42 + 0x40c) = 0;
    *(undefined8 *)(lVar42 + 0x414) = 0x600000011;
    *(undefined8 *)(lVar42 + 0x41c) = 0x6400000002;
    *(undefined8 *)(lVar42 + 0x424) = 0;
    **(undefined4 **)(lVar59 + 0x600) = 0x100001;
    *(undefined4 *)(*(long *)(lVar59 + 0x600) + 4) = 0x400004;
    *(undefined4 *)(*(long *)(lVar59 + 0x600) + 8) = 0x800008;
    *(undefined4 *)(*(long *)(lVar59 + 0x600) + 0xc) = 0x200002;
    *(undefined4 *)(*(long *)(lVar59 + 0x600) + 0x10) = 0x20;
    *(undefined4 *)(*(long *)(lVar59 + 0x600) + 0x14) = 0x40;
    *(undefined4 *)(*(long *)(lVar59 + 0x600) + 0x90) = 0x1000000;
    *(undefined4 *)(*(long *)(lVar59 + 0x600) + 0x94) = 0x4000000;
    *(undefined4 *)(*(long *)(lVar59 + 0x600) + 0x98) = 0x8000000;
    *(undefined4 *)(*(long *)(lVar59 + 0x600) + 0x9c) = 0x2000000;
    *(undefined4 *)(*(long *)(lVar59 + 0x600) + 0xa0) = 0xf;
    *(undefined4 *)(*(long *)(lVar59 + 0x600) + 0xa4) = 0xf00000;
    *(undefined4 *)(*(long *)(lVar59 + 0x600) + 0xa8) = 0xf000000;
    *(undefined4 *)(*(long *)(lVar59 + 0x600) + 0xac) = 0x4000000;
    uVar62 = (ulong)(iVar24 + -1);
    *(undefined4 *)(*(long *)(lVar59 + 0x600) + 0xb0) = 0x1000000;
    FUN_7103763c70(&local_110,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    lVar42 = *(long *)(lVar59 + 0x618);
    puVar51 = *(undefined8 **)(lVar59 + 0x608);
    if ((ulong)(lVar42 - (long)puVar51 >> 4) < uVar62) {
      if (puVar51 == (undefined8 *)0x0) {
        if ((ulong)(lVar42 >> 4) < 0x7ffffffffffffff) goto LAB_7103773fb0;
        uVar53 = 0xfffffffffffffff;
      }
      else {
        puVar57 = *(undefined8 **)(lVar59 + 0x610);
        if (puVar57 == puVar51) {
          *(undefined8 **)(lVar59 + 0x610) = puVar51;
          puVar57 = puVar51;
        }
        else {
          do {
            puVar57 = puVar57 + -2;
            (**(code **)*puVar57)(puVar57);
          } while (puVar51 != puVar57);
          puVar57 = (undefined8 *)*puVar61;
          *(undefined8 **)(lVar59 + 0x610) = puVar51;
        }
        if (puVar57 != (undefined8 *)0x0) {
          FUN_710392eb40((ulong)puVar57);
        }
        lVar42 = 0;
        *puVar61 = 0;
        *(undefined8 *)(lVar59 + 0x610) = 0;
        *(undefined8 *)(lVar59 + 0x618) = 0;
        if (iVar24 < 1) goto LAB_7103773fcc;
LAB_7103773fb0:
        uVar36 = lVar42 >> 3;
        uVar53 = uVar62;
        if ((uVar62 <= uVar36) && (uVar53 = uVar36, uVar36 >> 0x3c != 0)) {
LAB_7103773fcc:
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
      }
      ppplVar37 = (long ***)(uVar53 * 0x10);
      if (ppplVar37 == (long ***)0x0) {
        ppplVar37 = (long ***)0x1;
      }
      puVar51 = (undefined8 *)
                FUN_710392e290(0x10,ppplVar37,param_3,param_4,param_5,param_6,param_7,param_8);
      if (puVar51 == (undefined8 *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_c0 = 0;
          param_3 = &local_b0;
          local_b0 = ppplVar37;
          uVar36 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_c0);
          if (((uVar36 & 1) != 0) &&
             (puVar51 = (undefined8 *)
                        FUN_710392e290(0x10,ppplVar37,param_3,param_4,param_5,param_6,param_7,
                                       param_8), puVar51 != (undefined8 *)0x0)) goto LAB_710377404c;
        }
        puVar51 = (undefined8 *)0x0;
      }
LAB_710377404c:
      lVar42 = -uVar62;
      *(undefined8 **)(lVar59 + 0x610) = puVar51;
      *(undefined8 **)(lVar59 + 0x608) = puVar51;
      *(undefined8 **)(lVar59 + 0x618) = puVar51 + uVar53 * 2;
      do {
        *puVar51 = &PTR_FUN_710523d7d8;
        pvVar25 = (void *)FUN_710392e290(0x10,0x4b0,param_3,param_4,param_5,param_6,param_7,param_8)
        ;
        if (pvVar25 == (void *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_c0 = 0;
            local_b0 = (long ***)0x4b0;
            pppplVar31 = &local_b0;
            uVar62 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_c0);
            if (((uVar62 & 1) != 0) &&
               (pvVar25 = (void *)FUN_710392e290(0x10,0x4b0,pppplVar31,param_4,param_5,param_6,
                                                 param_7,param_8), pvVar25 != (void *)0x0))
            goto LAB_71037740d0;
          }
          pvVar25 = (void *)0x0;
        }
LAB_71037740d0:
        *(undefined8 *)((long)pvVar25 + 0x3fc) = 0x600000012;
        param_3 = (long ****)0x3fc;
        *(undefined8 *)((long)pvVar25 + 0x404) = 0x6400000002;
        *(undefined8 *)((long)pvVar25 + 0x40c) = 0;
        *(undefined8 *)((long)pvVar25 + 0x414) = 0x600000012;
        *(undefined8 *)((long)pvVar25 + 0x41c) = 0x6400000002;
        *(undefined8 *)((long)pvVar25 + 0x424) = 0;
        *(undefined4 *)((long)pvVar25 + 0x480) = 0;
        *(undefined8 *)((long)pvVar25 + 0x478) = 0;
        *(undefined8 *)((long)pvVar25 + 0x470) = 0;
        *(undefined8 *)((long)pvVar25 + 0x468) = 0;
        *(undefined8 *)((long)pvVar25 + 0x460) = 0;
        *(undefined8 *)((long)pvVar25 + 0x458) = 0;
        *(undefined8 *)((long)pvVar25 + 0x450) = 0;
        *(undefined8 *)((long)pvVar25 + 0x448) = 0;
        *(undefined8 *)((long)pvVar25 + 0x440) = 0;
        *(undefined8 *)((long)pvVar25 + 0x438) = 0;
        *(undefined8 *)((long)pvVar25 + 0x430) = 0;
        *(undefined8 *)((long)pvVar25 + 0x484) = 0xffffffff00000002;
        *(undefined8 *)((long)pvVar25 + 0x48c) = 0x3f266666ffffffff;
        *(undefined8 *)((long)pvVar25 + 0x4a2) = 0;
        *(undefined8 *)((long)pvVar25 + 0x494) = 0;
        *(undefined8 *)((long)pvVar25 + 0x49c) = 0;
        *(undefined1 *)((long)pvVar25 + 0x4aa) = 1;
        memset(pvVar25,0,0x3fc);
        *(undefined4 *)((long)pvVar25 + 0x4ab) = 0;
        uVar47 = uRam0000007107459008;
        uVar38 = _ConstantZero;
        *(undefined8 *)((long)pvVar25 + 0x468) = uRam0000007107459008;
        *(undefined8 *)((long)pvVar25 + 0x460) = uVar38;
        *(undefined8 *)((long)pvVar25 + 0x478) = uVar47;
        *(undefined8 *)((long)pvVar25 + 0x470) = uVar38;
        puVar51[1] = pvVar25;
        if (puVar51 != &local_110) {
          pvVar28 = (void *)CONCAT44(uStack_108._4_4_,(float)uStack_108);
          param_3 = (long ****)0x42c;
          memcpy(pvVar25,pvVar28,0x42c);
          *(undefined8 *)((long)pvVar25 + 0x438) = *(undefined8 *)((long)pvVar28 + 0x438);
          *(undefined8 *)((long)pvVar25 + 0x430) = *(undefined8 *)((long)pvVar28 + 0x430);
          uVar38 = *(undefined8 *)((long)pvVar28 + 0x448);
          *(undefined8 *)((long)pvVar25 + 0x440) = *(undefined8 *)((long)pvVar28 + 0x440);
          *(undefined8 *)((long)pvVar25 + 0x448) = uVar38;
          *(undefined8 *)((long)pvVar25 + 0x458) = *(undefined8 *)((long)pvVar28 + 0x458);
          *(undefined8 *)((long)pvVar25 + 0x450) = *(undefined8 *)((long)pvVar28 + 0x450);
          uVar38 = *(undefined8 *)((long)pvVar28 + 0x468);
          *(undefined8 *)((long)pvVar25 + 0x460) = *(undefined8 *)((long)pvVar28 + 0x460);
          *(undefined8 *)((long)pvVar25 + 0x468) = uVar38;
          uVar38 = *(undefined8 *)((long)pvVar28 + 0x478);
          *(undefined8 *)((long)pvVar25 + 0x470) = *(undefined8 *)((long)pvVar28 + 0x470);
          *(undefined8 *)((long)pvVar25 + 0x478) = uVar38;
          uVar38 = *(undefined8 *)((long)pvVar28 + 0x480);
          *(undefined8 *)((long)pvVar25 + 0x488) = *(undefined8 *)((long)pvVar28 + 0x488);
          *(undefined8 *)((long)pvVar25 + 0x480) = uVar38;
          uVar38 = *(undefined8 *)((long)pvVar28 + 0x490);
          uVar47 = *(undefined8 *)((long)pvVar28 + 0x498);
          uVar49 = *(undefined8 *)((long)pvVar28 + 0x4a0);
          *(undefined8 *)((long)pvVar25 + 0x4a7) = *(undefined8 *)((long)pvVar28 + 0x4a7);
          *(undefined8 *)((long)pvVar25 + 0x4a0) = uVar49;
          *(undefined8 *)((long)pvVar25 + 0x498) = uVar47;
          *(undefined8 *)((long)pvVar25 + 0x490) = uVar38;
        }
        puVar51 = (undefined8 *)(*(long *)(lVar59 + 0x610) + 0x10);
        lVar42 = lVar42 + 1;
        *(undefined8 **)(lVar59 + 0x610) = puVar51;
      } while (lVar42 != 0);
    }
    else {
      uVar36 = *(long *)(lVar59 + 0x610) - (long)puVar51 >> 4;
      uVar53 = uVar36;
      if (uVar62 <= uVar36) {
        uVar53 = uVar62;
      }
      if (uVar53 != 0) {
        uVar53 = ~uVar62;
        if (uVar53 < ~uVar36) {
          uVar53 = ~uVar36;
        }
        lVar42 = uVar53 + 1;
        do {
          if (&local_110 != puVar51) {
            pvVar25 = (void *)CONCAT44(uStack_108._4_4_,(float)uStack_108);
            pvVar28 = (void *)puVar51[1];
            param_3 = (long ****)0x42c;
            memcpy(pvVar28,pvVar25,0x42c);
            *(undefined8 *)((long)pvVar28 + 0x438) = *(undefined8 *)((long)pvVar25 + 0x438);
            *(undefined8 *)((long)pvVar28 + 0x430) = *(undefined8 *)((long)pvVar25 + 0x430);
            *(undefined8 *)((long)pvVar28 + 0x448) = *(undefined8 *)((long)pvVar25 + 0x448);
            *(undefined8 *)((long)pvVar28 + 0x440) = *(undefined8 *)((long)pvVar25 + 0x440);
            *(undefined8 *)((long)pvVar28 + 0x458) = *(undefined8 *)((long)pvVar25 + 0x458);
            *(undefined8 *)((long)pvVar28 + 0x450) = *(undefined8 *)((long)pvVar25 + 0x450);
            *(undefined8 *)((long)pvVar28 + 0x468) = *(undefined8 *)((long)pvVar25 + 0x468);
            *(undefined8 *)((long)pvVar28 + 0x460) = *(undefined8 *)((long)pvVar25 + 0x460);
            uVar38 = *(undefined8 *)((long)pvVar25 + 0x478);
            *(undefined8 *)((long)pvVar28 + 0x470) = *(undefined8 *)((long)pvVar25 + 0x470);
            *(undefined8 *)((long)pvVar28 + 0x478) = uVar38;
            uVar38 = *(undefined8 *)((long)pvVar25 + 0x480);
            *(undefined8 *)((long)pvVar28 + 0x488) = *(undefined8 *)((long)pvVar25 + 0x488);
            *(undefined8 *)((long)pvVar28 + 0x480) = uVar38;
            uVar38 = *(undefined8 *)((long)pvVar25 + 0x490);
            uVar47 = *(undefined8 *)((long)pvVar25 + 0x498);
            uVar49 = *(undefined8 *)((long)pvVar25 + 0x4a0);
            *(undefined8 *)((long)pvVar28 + 0x4a7) = *(undefined8 *)((long)pvVar25 + 0x4a7);
            *(undefined8 *)((long)pvVar28 + 0x4a0) = uVar49;
            *(undefined8 *)((long)pvVar28 + 0x498) = uVar47;
            *(undefined8 *)((long)pvVar28 + 0x490) = uVar38;
          }
          puVar51 = puVar51 + 2;
          lVar42 = lVar42 + 1;
        } while (lVar42 != 0);
      }
      lVar42 = uVar36 - uVar62;
      if (uVar36 < uVar62) {
        puVar51 = *(undefined8 **)(lVar59 + 0x610);
        do {
          *puVar51 = &PTR_FUN_710523d7d8;
          pvVar25 = (void *)FUN_710392e290(0x10,0x4b0,param_3,param_4,param_5,param_6,param_7,
                                           param_8);
          if (pvVar25 == (void *)0x0) {
            if (DAT_7105332f00 != (long *)0x0) {
              local_c0 = 0;
              local_b0 = (long ***)0x4b0;
              pppplVar31 = &local_b0;
              uVar62 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_c0);
              if (((uVar62 & 1) != 0) &&
                 (pvVar25 = (void *)FUN_710392e290(0x10,0x4b0,pppplVar31,param_4,param_5,param_6,
                                                   param_7,param_8), pvVar25 != (void *)0x0))
              goto LAB_7103773dd8;
            }
            pvVar25 = (void *)0x0;
          }
LAB_7103773dd8:
          *(undefined8 *)((long)pvVar25 + 0x3fc) = 0x600000012;
          param_3 = (long ****)0x3fc;
          *(undefined8 *)((long)pvVar25 + 0x404) = 0x6400000002;
          *(undefined8 *)((long)pvVar25 + 0x40c) = 0;
          *(undefined8 *)((long)pvVar25 + 0x414) = 0x600000012;
          *(undefined8 *)((long)pvVar25 + 0x41c) = 0x6400000002;
          *(undefined8 *)((long)pvVar25 + 0x424) = 0;
          *(undefined4 *)((long)pvVar25 + 0x480) = 0;
          *(undefined8 *)((long)pvVar25 + 0x478) = 0;
          *(undefined8 *)((long)pvVar25 + 0x470) = 0;
          *(undefined8 *)((long)pvVar25 + 0x468) = 0;
          *(undefined8 *)((long)pvVar25 + 0x460) = 0;
          *(undefined8 *)((long)pvVar25 + 0x458) = 0;
          *(undefined8 *)((long)pvVar25 + 0x450) = 0;
          *(undefined8 *)((long)pvVar25 + 0x448) = 0;
          *(undefined8 *)((long)pvVar25 + 0x440) = 0;
          *(undefined8 *)((long)pvVar25 + 0x438) = 0;
          *(undefined8 *)((long)pvVar25 + 0x430) = 0;
          *(undefined8 *)((long)pvVar25 + 0x484) = 0xffffffff00000002;
          *(undefined8 *)((long)pvVar25 + 0x48c) = 0x3f266666ffffffff;
          *(undefined8 *)((long)pvVar25 + 0x4a2) = 0;
          *(undefined8 *)((long)pvVar25 + 0x494) = 0;
          *(undefined8 *)((long)pvVar25 + 0x49c) = 0;
          *(undefined1 *)((long)pvVar25 + 0x4aa) = 1;
          memset(pvVar25,0,0x3fc);
          *(undefined4 *)((long)pvVar25 + 0x4ab) = 0;
          uVar47 = uRam0000007107459008;
          uVar38 = _ConstantZero;
          *(undefined8 *)((long)pvVar25 + 0x468) = uRam0000007107459008;
          *(undefined8 *)((long)pvVar25 + 0x460) = uVar38;
          *(undefined8 *)((long)pvVar25 + 0x478) = uVar47;
          *(undefined8 *)((long)pvVar25 + 0x470) = uVar38;
          puVar51[1] = pvVar25;
          if (puVar51 != &local_110) {
            pvVar28 = (void *)CONCAT44(uStack_108._4_4_,(float)uStack_108);
            param_3 = (long ****)0x42c;
            memcpy(pvVar25,pvVar28,0x42c);
            *(undefined8 *)((long)pvVar25 + 0x438) = *(undefined8 *)((long)pvVar28 + 0x438);
            *(undefined8 *)((long)pvVar25 + 0x430) = *(undefined8 *)((long)pvVar28 + 0x430);
            uVar38 = *(undefined8 *)((long)pvVar28 + 0x448);
            *(undefined8 *)((long)pvVar25 + 0x440) = *(undefined8 *)((long)pvVar28 + 0x440);
            *(undefined8 *)((long)pvVar25 + 0x448) = uVar38;
            *(undefined8 *)((long)pvVar25 + 0x458) = *(undefined8 *)((long)pvVar28 + 0x458);
            *(undefined8 *)((long)pvVar25 + 0x450) = *(undefined8 *)((long)pvVar28 + 0x450);
            uVar38 = *(undefined8 *)((long)pvVar28 + 0x468);
            *(undefined8 *)((long)pvVar25 + 0x460) = *(undefined8 *)((long)pvVar28 + 0x460);
            *(undefined8 *)((long)pvVar25 + 0x468) = uVar38;
            uVar38 = *(undefined8 *)((long)pvVar28 + 0x478);
            *(undefined8 *)((long)pvVar25 + 0x470) = *(undefined8 *)((long)pvVar28 + 0x470);
            *(undefined8 *)((long)pvVar25 + 0x478) = uVar38;
            uVar38 = *(undefined8 *)((long)pvVar28 + 0x480);
            *(undefined8 *)((long)pvVar25 + 0x488) = *(undefined8 *)((long)pvVar28 + 0x488);
            *(undefined8 *)((long)pvVar25 + 0x480) = uVar38;
            uVar38 = *(undefined8 *)((long)pvVar28 + 0x490);
            uVar47 = *(undefined8 *)((long)pvVar28 + 0x498);
            uVar49 = *(undefined8 *)((long)pvVar28 + 0x4a0);
            *(undefined8 *)((long)pvVar25 + 0x4a7) = *(undefined8 *)((long)pvVar28 + 0x4a7);
            *(undefined8 *)((long)pvVar25 + 0x4a0) = uVar49;
            *(undefined8 *)((long)pvVar25 + 0x498) = uVar47;
            *(undefined8 *)((long)pvVar25 + 0x490) = uVar38;
          }
          puVar51 = (undefined8 *)(*(long *)(lVar59 + 0x610) + 0x10);
          lVar42 = lVar42 + 1;
          *(undefined8 **)(lVar59 + 0x610) = puVar51;
        } while (lVar42 != 0);
      }
      else {
        puVar57 = *(undefined8 **)(lVar59 + 0x610);
        puVar51 = (undefined8 *)(*(long *)(lVar59 + 0x608) + uVar62 * 0x10);
        while (puVar57 != puVar51) {
          puVar57 = puVar57 + -2;
                    /* WARNING: Read-only address (ram,0x00710446a360) is written */
                    /* WARNING: Read-only address (ram,0x00710446a369) is written */
          (**(code **)*puVar57)(puVar57);
        }
                    /* WARNING: Read-only address (ram,0x00710446a360) is written */
                    /* WARNING: Read-only address (ram,0x00710446a369) is written */
        *(undefined8 **)(lVar59 + 0x610) = puVar51;
      }
    }
    uVar62 = CONCAT44(uStack_108._4_4_,(float)uStack_108);
    local_110 = &PTR_FUN_710523d7d8;
    uStack_108._0_4_ = 0.0;
    uStack_108._4_4_ = 0.0;
    if (uVar62 != 0) {
      FUN_710392eb40(uVar62);
      puVar51 = *(undefined8 **)(lVar59 + 0x610);
    }
    pppplVar31 = (long ****)0x400004;
    param_4 = (byte ****)0x200002;
    param_5 = (long ****)0x100001;
    param_7 = 0x600000011;
    param_6 = 0x3ed851ea;
    for (puVar57 = (undefined8 *)*puVar61; puVar57 != puVar51; puVar57 = puVar57 + 2) {
      lVar42 = puVar57[1];
      *(undefined4 *)(lVar42 + 0x490) = 0x3ed851ea;
      *(undefined2 *)(lVar42 + 0x4a8) = 0;
      *(undefined8 *)(lVar42 + 0x3fc) = 0x600000011;
      *(undefined8 *)(lVar42 + 0x404) = 0x6400000002;
      *(undefined8 *)(lVar42 + 0x40c) = 0;
      *(undefined8 *)(lVar42 + 0x414) = 0x600000011;
      *(undefined8 *)(lVar42 + 0x41c) = 0x6400000002;
      *(undefined8 *)(lVar42 + 0x424) = 0;
      *(undefined4 *)puVar57[1] = 0x100001;
      *(undefined4 *)(puVar57[1] + 4) = 0x400004;
      *(undefined4 *)(puVar57[1] + 8) = 0x800008;
      *(undefined4 *)(puVar57[1] + 0xc) = 0x200002;
      *(undefined4 *)(puVar57[1] + 0x10) = 0x20;
      *(undefined4 *)(puVar57[1] + 0x14) = 0x40;
      *(undefined4 *)(puVar57[1] + 0x90) = 0x1000000;
      *(undefined4 *)(puVar57[1] + 0x94) = 0x4000000;
      *(undefined4 *)(puVar57[1] + 0x98) = 0x8000000;
      *(undefined4 *)(puVar57[1] + 0x9c) = 0x2000000;
      *(undefined4 *)(puVar57[1] + 0xa0) = 0xf;
      *(undefined4 *)(puVar57[1] + 0xa4) = 0xf00000;
      *(undefined4 *)(puVar57[1] + 0xa8) = 0xf000000;
      *(undefined4 *)(puVar57[1] + 0xac) = 0x4000000;
      *(undefined4 *)(puVar57[1] + 0xb0) = 0x1000000;
    }
  }
  plVar26 = (long *)FUN_710392e290(0x10,400,pppplVar31,param_4,param_5,param_6,param_7,param_8);
  if (plVar26 == (long *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (long ***)((ulong)local_b0 & 0xffffffff00000000);
      local_110 = (undefined **)&DAT_00000190;
      pppplVar31 = (long ****)&local_110;
      uVar62 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar62 & 1) != 0) &&
         (plVar26 = (long *)FUN_710392e290(0x10,400,pppplVar31,param_4,param_5,param_6,param_7,
                                           param_8), plVar26 != (long *)0x0)) goto LAB_7103774400;
    }
    plVar26 = (long *)0x0;
  }
LAB_7103774400:
  FUN_7100041ff0(plVar26);
  *plVar26 = (long)&PTR_FUN_7105240678;
  plVar26[0x2d] = 0;
  plVar26[0x2e] = 0;
  lVar42 = FUN_710392e290(0x10,0x40,pppplVar31,param_4,param_5,param_6,param_7,param_8);
  if (lVar42 == 0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (long ***)((ulong)local_b0 & 0xffffffff00000000);
      local_110 = (undefined **)&DAT_00000040;
      pppplVar31 = (long ****)&local_110;
      uVar62 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar62 & 1) != 0) &&
         (lVar42 = FUN_710392e290(0x10,0x40,pppplVar31,param_4,param_5,param_6,param_7,param_8),
         lVar42 != 0)) goto LAB_710377446c;
    }
    lVar42 = 0;
  }
LAB_710377446c:
  plVar26[0x2f] = lVar42;
  plVar26[0x30] = lVar42;
  plVar26[0x31] = lVar42 + 0x40;
  lVar42 = *DAT_710593ba90;
  std::mutex::lock();
  puVar51 = *(undefined8 **)(lVar42 + 0x3b8);
  if (puVar51 == *(undefined8 **)(lVar42 + 0x3c0)) {
    pvVar25 = *(void **)(lVar42 + 0x3b0);
    pppplVar60 = (long ****)((long)puVar51 - (long)pvVar25);
    uVar62 = ((long)pppplVar60 >> 3) + 1;
    if (uVar62 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar50 = (long)*(undefined8 **)(lVar42 + 0x3c0) - (long)pvVar25;
    if ((ulong)(lVar50 >> 3) < 0xfffffffffffffff) {
      uVar53 = lVar50 >> 2;
      if (uVar62 <= uVar53) {
        uVar62 = uVar53;
      }
      if (uVar62 != 0) {
        if (uVar62 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        goto LAB_710377450c;
      }
      pvVar28 = (void *)0x0;
    }
    else {
      uVar62 = 0x1fffffffffffffff;
LAB_710377450c:
      ppplVar37 = (long ***)(uVar62 * 8);
      if (ppplVar37 == (long ***)0x0) {
        ppplVar37 = (long ***)0x1;
      }
      pvVar28 = (void *)FUN_710392e290(0x10,ppplVar37,pppplVar31,param_4,param_5,param_6,param_7,
                                       param_8);
      if (pvVar28 == (void *)0x0) {
        if (DAT_7105332f00 != (long *)0x0) {
          local_b0 = (long ***)((ulong)local_b0 & 0xffffffff00000000);
          pppplVar31 = (long ****)&local_110;
          local_110 = (undefined **)ppplVar37;
          uVar53 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
          if (((uVar53 & 1) != 0) &&
             (pvVar28 = (void *)FUN_710392e290(0x10,ppplVar37,pppplVar31,param_4,param_5,param_6,
                                               param_7,param_8), pvVar28 != (void *)0x0))
          goto LAB_7103774578;
        }
        pvVar28 = (void *)0x0;
      }
    }
LAB_7103774578:
    puVar51 = (undefined8 *)((long)pvVar28 + ((long)pppplVar60 >> 3) * 8);
    *puVar51 = plVar26;
    if (0 < (long)pppplVar60) {
      memcpy(pvVar28,pvVar25,(size_t)pppplVar60);
      pppplVar31 = pppplVar60;
    }
    *(void **)(lVar42 + 0x3b0) = pvVar28;
    *(undefined8 **)(lVar42 + 0x3b8) = puVar51 + 1;
    *(void **)(lVar42 + 0x3c0) = (void *)((long)pvVar28 + uVar62 * 8);
    if (pvVar25 != (void *)0x0) {
      FUN_710392eb40((ulong)pvVar25);
    }
  }
  else {
    *puVar51 = plVar26;
    *(long *)(lVar42 + 0x3b8) = *(long *)(lVar42 + 0x3b8) + 8;
  }
  std::mutex::unlock();
  plVar27 = *(long **)(lVar59 + 0x450);
  *(long **)(lVar59 + 0x450) = plVar26;
  if (plVar27 != (long *)0x0) {
    (**(code **)(*plVar27 + 0x10))();
    plVar26 = *(long **)(lVar59 + 0x450);
  }
  uVar45 = *param_2;
  uVar62 = (ulong)uVar45;
  if (uVar45 == 0xffffff) {
    pvVar25 = (void *)0x0;
LAB_71037746f4:
    __n = (long ***)0x0;
    ppplVar37 = (long ***)0x1;
  }
  else {
    if ((uVar45 < *(uint *)(DAT_7105332f20 + 0x18)) &&
       (*(char *)(*(long *)(DAT_7105332f20 + 8) + uVar62 * 8 + 4) != '\0')) {
      uVar44 = *(uint *)(*(long *)(DAT_7105332f20 + 8) + uVar62 * 8);
      if ((uVar44 == 0xffffff) || (*(uint *)(DAT_7105332f20 + 0x1c) <= uVar44)) goto LAB_710377465c;
      puVar51 = (undefined8 *)(*(long *)(DAT_7105332f20 + 0x10) + (ulong)uVar44 * 0x18);
      pvVar25 = (void *)0x0;
      if ((*(char *)((long)puVar51 + 0xc) != '\0') && (puVar51 != (undefined8 *)0x0)) {
        pvVar25 = (void *)*puVar51;
      }
    }
    else {
LAB_710377465c:
      pvVar25 = (void *)0x0;
    }
    lVar42 = **(long **)(DAT_7105332f20 + 0x78);
    if (*(uint *)(*(long *)(lVar42 + 0x40) + 4) <= uVar45) goto LAB_71037746f4;
    uVar45 = (uint)((ulong)*(undefined8 *)(*(long *)(lVar42 + 0x60) + uVar62 * 0x20) >> 0x20);
    uVar44 = uVar45 >> 8;
    if ((uVar44 == 0xffffff) ||
       (uVar35 = *(uint *)(*(long *)(lVar42 + 0x40) + 8), uVar45 = uVar45 >> 8,
       uVar35 < uVar44 || uVar35 == uVar45)) goto LAB_71037746f4;
    uVar44 = *(uint *)(*(long *)(DAT_7105332f20 + 0x10) +
                       (ulong)*(uint *)(*(long *)(DAT_7105332f20 + 8) + uVar62 * 8) * 0x18 + 0x10);
    pppplVar31 = (long ****)(ulong)uVar44;
    lVar50 = FUN_7103541e10(lVar42,*(long *)(lVar42 + 0x90) +
                                   ((ulong)*(uint *)(*(long *)(lVar42 + 0x68) + (ulong)uVar45 * 8 +
                                                    4) & 0xffffff) * 0x10,uVar44);
    uVar45 = *(uint *)(*(long *)(lVar42 + 0xa0) + (ulong)*(uint *)(lVar50 + 4) * 0x10 + 8);
    __n = (long ***)(ulong)uVar45;
    ppplVar37 = __n;
    if (uVar45 == 0) goto LAB_71037746f4;
  }
  pvVar28 = (void *)FUN_710392e290(0x1000,ppplVar37,pppplVar31,param_4,param_5,param_6,param_7,
                                   param_8);
  if (pvVar28 == (void *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_b0 = (long ***)((ulong)local_b0 & 0xffffffff00000000);
      pppplVar31 = (long ****)&local_110;
      local_110 = (undefined **)ppplVar37;
      uVar62 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_b0);
      if (((uVar62 & 1) != 0) &&
         (pvVar28 = (void *)FUN_710392e290(0x1000,ppplVar37,pppplVar31,param_4,param_5,param_6,
                                           param_7,param_8), pvVar28 != (void *)0x0))
      goto LAB_710377470c;
    }
    plVar26[0x2d] = 0;
    goto LAB_7103775cf8;
  }
LAB_710377470c:
  plVar26[0x2d] = (long)pvVar28;
  memcpy(pvVar28,pvVar25,(size_t)__n);
  ppppbVar34 = (byte ****)0x0;
  pppplVar31 = (long ****)0x0;
  uVar38 = 0;
  plVar26[0x2e] = plVar26[0x2d];
  uVar62 = FUN_7100042220(plVar26,(char *)plVar26[0x2d],".",0,0,0);
  if ((uVar62 & 1) == 0) goto LAB_7103775cf8;
  pcVar32 = "layout.info";
  lVar42 = (**(code **)(**(long **)(lVar59 + 0x450) + 0x50))(*(long **)(lVar59 + 0x450),0x696e666f);
  if (lVar42 == 0) goto LAB_7103775cf8;
  FUN_710375fa30(DAT_710593b8d8,*(long *)(lVar59 + 0x450),pcVar32,ppppbVar34,pppplVar31,uVar38,
                 param_7,param_8);
  uVar62 = 0;
  while( true ) {
    cVar2 = *(char *)(lVar42 + uVar62);
    if (cVar2 == '\0') break;
    lVar50 = lVar59 + uVar62;
    *(char *)(lVar50 + 0x10) = cVar2;
    if (0x3e < (int)uVar62 + 1U) {
      uVar62 = (ulong)((int)uVar62 + 1);
      break;
    }
    cVar2 = ((char *)(lVar42 + uVar62))[1];
    if (cVar2 == '\0') {
      uVar62 = uVar62 + 1;
      break;
    }
    uVar62 = uVar62 + 2;
    *(char *)(lVar50 + 0x11) = cVar2;
  }
  pcVar58 = (char *)(lVar59 + 0x10);
  pcVar58[uVar62 & 0xffffffff] = '\0';
  *(int *)(lVar59 + 0xc) = (int)uVar62;
  uVar35 = (uint)*(byte *)(lVar59 + 0x10);
  uVar44 = 0x811c9dc5;
  uVar45 = uVar44;
  if (*(byte *)(lVar59 + 0x10) != 0) {
    pbVar43 = (byte *)(lVar59 + 0x11);
    do {
      uVar45 = uVar45 * 0x89 ^ uVar35;
      uVar35 = (uint)*pbVar43;
      pbVar43 = pbVar43 + 1;
    } while (uVar35 != 0);
  }
  *(uint *)(lVar59 + 8) = uVar45;
  local_b0 = (long ***)((ulong)local_b0 & 0xffffffffffffff00);
  local_96 = 0;
  local_98 = 0;
  local_a8 = (code *)0x0;
  uStack_a0 = 0;
  FUN_7100044320((undefined8 *)&local_c0);
  puVar51 = (undefined8 *)
            FUN_710392e290(0x10,0xb8,(long ****)pcVar32,ppppbVar34,pppplVar31,uVar38,param_7,param_8
                          );
  if (puVar51 == (undefined8 *)0x0) {
    if (DAT_7105332f00 != (long *)0x0) {
      local_90[0] = (long ***)((ulong)local_90[0] & 0xffffffff00000000);
      local_110 = (undefined **)&DAT_000000b8;
      pppplVar60 = (long ****)&local_110;
      uVar62 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_90);
      if (((uVar62 & 1) != 0) &&
         (puVar51 = (undefined8 *)
                    FUN_710392e290(0x10,0xb8,pppplVar60,ppppbVar34,pppplVar31,uVar38,param_7,param_8
                                  ), puVar51 != (undefined8 *)0x0)) goto LAB_71037748bc;
    }
    puVar51 = (undefined8 *)0x0;
  }
LAB_71037748bc:
  FUN_7100048df0(puVar51);
  *puVar51 = &PTR_FUN_710523f6f0;
  puVar51[0x11] = 0;
  puVar51[0x10] = puVar51 + 0x11;
  puVar51[0xe] = 0;
  puVar51[0xf] = 0;
  puVar51[0xc] = 0;
  puVar51[0xd] = 0;
  puVar51[0x14] = 0;
  puVar51[0x15] = 0;
  puVar51[0x16] = 0;
  puVar51[0x12] = 0;
  puVar51[0x13] = puVar51 + 0x14;
  plVar26 = *(long **)(lVar59 + 0x458);
  *(undefined8 **)(lVar59 + 0x458) = puVar51;
  if (plVar26 != (long *)0x0) {
    (**(code **)(*plVar26 + 0x10))();
    puVar51 = *(undefined8 **)(lVar59 + 0x458);
  }
  puVar51[0xd] = lVar59 + 0x478;
  pppplVar31 = (long ****)(lVar59 + 0x558);
  *(long *****)(*(long *)(lVar59 + 0x458) + 0x70) = pppplVar31;
  pppplVar60 = &local_b0;
  *(long *)(lVar59 + 0x578) = *(long *)(lVar59 + 0x458);
  local_a8 = FUN_710378e950;
  *(code **)(*(long *)(lVar59 + 0x458) + 0xb0) = FUN_710378e950;
  ppppbVar34 = *(byte *****)(lVar59 + 0x450);
  uVar38 = 0;
  pcVar32 = pcVar58;
  FUN_71000492f0(*(long **)(lVar59 + 0x458),&local_c0,DAT_7105336e08,(long *)ppppbVar34,pppplVar31,0
                 ,(undefined1 *)pppplVar60,pcVar58,0);
  puVar51 = DAT_7105336e08;
  local_f8 = ZEXT816(0);
  local_100 = 1;
  uStack_d7 = 0;
  local_d8 = 0;
  uVar62 = lStack_b8 + CONCAT44(uStack_bc,local_c0) + 0x50000;
  local_110 = (undefined **)CONCAT44(local_110._4_4_,0x10);
  pcStack_e8 = FUN_710378ebc0;
  local_e0 = 0;
  local_dc = 0;
  uStack_108 = uVar62;
  local_f8 = FUN_710363f020(*(ulong **)DAT_7105336e08[0x66c],uVar62,(long ****)&DAT_00001000,
                            ppppbVar34,pppplVar31,uVar38,pppplVar60,pcVar32);
  puVar39 = (uint *)(lVar59 + 0x2d0);
  *(undefined1 (*) [16])(lVar59 + 800) = local_f8;
  FUN_7100079e70(puVar39,puVar51,(undefined4 *)&local_110);
  local_f8 = FUN_710363f020(*(ulong **)puVar51[0x66c],uVar62,(long ****)&DAT_00001000,ppppbVar34,
                            pppplVar31,uVar38,pppplVar60,pcVar32);
  *(undefined1 (*) [16])(lVar59 + 0x380) = local_f8;
  FUN_7100079e70((uint *)(lVar59 + 0x330),puVar51,(undefined4 *)&local_110);
  local_f8 = FUN_710363f020(*(ulong **)puVar51[0x66c],uVar62,(long ****)&DAT_00001000,ppppbVar34,
                            pppplVar31,uVar38,pppplVar60,pcVar32);
  *(undefined1 (*) [16])(lVar59 + 0x3e0) = local_f8;
  FUN_7100079e70((uint *)(lVar59 + 0x390),puVar51,(undefined4 *)&local_110);
  local_f8 = FUN_710363f020(*(ulong **)puVar51[0x66c],uVar62,(long ****)&DAT_00001000,ppppbVar34,
                            pppplVar31,uVar38,pppplVar60,pcVar32);
  pppplVar33 = (long ****)&local_110;
  *(undefined1 (*) [16])(lVar59 + 0x440) = local_f8;
  FUN_7100079e70((uint *)(lVar59 + 0x3f0),puVar51,(undefined4 *)pppplVar33);
  *(uint **)(lVar59 + 0x118) = puVar39;
  *(uint **)(lVar59 + 0x120) = puVar39;
  *(undefined1 *)(lVar59 + 0x2c2) = 1;
  *(code **)(lVar59 + 0x1b8) = FUN_710378ec40;
  *(long *)(lVar59 + 0x1c0) = lVar59;
  sVar29 = strlen(pcVar58);
  pcVar58 = (char *)(lVar42 + sVar29 + 1);
  if (*pcVar58 != '\0') {
    do {
      FUN_7103796720(*(byte *****)(lVar59 + 0x458),(long)pcVar58,pppplVar33,ppppbVar34,pppplVar31,
                     uVar38,pppplVar60,pcVar32);
      if (pcVar58 == (char *)0x0) {
        uVar62 = 0;
      }
      else {
        uVar53 = 0;
        uVar36 = uStack_108;
        do {
          uStack_108 = uVar36;
          pcVar56 = pcVar58 + uVar53;
          uVar62 = uVar53;
          if (*pcVar56 == '\0') break;
          *(char *)((long)&uStack_108 + uVar53) = *pcVar56;
          if (pcVar56[1] == '\0') {
            uVar62 = uVar53 + 1;
            break;
          }
          *(char *)((long)&uStack_108 + uVar53 + 1) = pcVar56[1];
          if (pcVar56[2] == '\0') {
            uVar62 = uVar53 + 2;
            break;
          }
          uVar62 = uVar53 + 3;
          *(char *)((long)&uStack_108 + uVar53 + 2) = pcVar56[2];
          uVar53 = uVar62;
          uVar36 = CONCAT44(uStack_108._4_4_,(float)uStack_108);
        } while ((uint)uVar62 < 0x3f);
      }
      *(undefined1 *)((long)&uStack_108 + (uVar62 & 0xffffffff)) = 0;
      uVar35 = (uint)(float)uStack_108;
      uVar46 = uVar35 & 0xff;
      local_110 = (undefined **)(uVar62 << 0x20);
      uVar35 = uVar35 & 0xff;
      pbVar43 = (byte *)((long)&uStack_108 + 1);
      uVar45 = uVar44;
      if ((uStack_108 & 0xff) != 0) {
        do {
          uVar45 = uVar45 * 0x89 ^ uVar35;
          uVar35 = (uint)*pbVar43;
          pbVar43 = pbVar43 + 1;
        } while (uVar35 != 0);
      }
      local_110 = (undefined **)CONCAT44((int)uVar62,uVar45);
      puVar39 = *(uint **)(lVar59 + 0x588);
      if (puVar39 < *(uint **)(lVar59 + 0x590)) {
        uVar62 = 0;
        *puVar39 = 0;
        if ((char)uStack_108 != '\0') {
          do {
            *(char *)((long)puVar39 + uVar62 + 8) = (char)uVar46;
            bVar68 = ((byte *)((long)&uStack_108 + 1))[uVar62];
            if (bVar68 == 0) {
              uVar62 = uVar62 + 1;
              break;
            }
            *(byte *)((long)puVar39 + uVar62 + 9) = bVar68;
            cVar2 = *(char *)((long)&uStack_108 + uVar62 + 2);
            if (cVar2 == '\0') {
              uVar62 = uVar62 + 2;
              break;
            }
            *(char *)((long)puVar39 + uVar62 + 10) = cVar2;
            if (0x3e < (int)uVar62 + 3U) {
              uVar62 = (ulong)((int)uVar62 + 3);
              break;
            }
            uVar46 = (uint)*(byte *)((long)&uStack_108 + uVar62 + 3);
            uVar62 = uVar62 + 3;
          } while (uVar46 != 0);
        }
        *(undefined1 *)((long)puVar39 + (uVar62 & 0xffffffff) + 8) = 0;
        puVar39[1] = (uint)uVar62;
        uVar35 = (uint)(byte)puVar39[2];
        uVar45 = uVar44;
        if ((byte)puVar39[2] != 0) {
          pbVar43 = (byte *)((long)puVar39 + 9);
          do {
            uVar45 = uVar45 * 0x89 ^ uVar35;
            uVar35 = (uint)*pbVar43;
            pbVar43 = pbVar43 + 1;
          } while (uVar35 != 0);
        }
        *puVar39 = uVar45;
        *(long *)(lVar59 + 0x588) = *(long *)(lVar59 + 0x588) + 0x48;
      }
      else {
        FUN_71019c1c50((ulong *)(lVar59 + 0x580),(long)&local_110,pppplVar33,ppppbVar34,pppplVar31,
                       uVar38,pppplVar60,pcVar32);
      }
      sVar29 = strlen(pcVar58);
      pcVar58 = pcVar58 + sVar29 + 1;
    } while (*pcVar58 != '\0');
  }
  pcVar58 = pcVar58 + 1;
  if (*pcVar58 != '\0') {
    puVar51 = (undefined8 *)(lVar59 + 0x5a0);
    pbVar43 = (byte *)((long)&uStack_108 + 1);
    do {
      sVar29 = strlen(pcVar58);
      pcVar56 = pcVar58 + sVar29 + 1;
      uVar62 = 0;
      do {
        pcVar1 = pcVar58 + uVar62;
        uVar53 = uVar62;
        uVar36 = uStack_108;
        if (*pcVar1 == '\0') break;
        *(char *)((long)&uStack_108 + uVar62) = *pcVar1;
        if (pcVar1[1] == '\0') {
          uVar53 = uVar62 + 1;
          uVar36 = uStack_108;
          break;
        }
        *(char *)((long)&uStack_108 + uVar62 + 1) = pcVar1[1];
        if (pcVar1[2] == '\0') {
          uVar53 = uVar62 + 2;
          uVar36 = CONCAT44(uStack_108._4_4_,(float)uStack_108);
          break;
        }
        uVar53 = uVar62 + 3;
        *(char *)((long)&uStack_108 + uVar62 + 2) = pcVar1[2];
        uVar36 = CONCAT44(uStack_108._4_4_,(float)uStack_108);
        uVar62 = uVar53;
      } while ((uint)uVar53 < 0x3f);
      uStack_108 = uVar36;
      *(undefined1 *)((long)&uStack_108 + (uVar53 & 0xffffffff)) = 0;
      uVar35 = (uint)(float)uStack_108;
      local_110 = (undefined **)(uVar53 << 0x20);
      cVar2 = (char)uStack_108;
      uVar46 = uVar35 & 0xff;
      uVar35 = uVar35 & 0xff;
      pbVar40 = pbVar43;
      uVar45 = uVar44;
      if ((uStack_108 & 0xff) != 0) {
        do {
          uVar45 = uVar45 * 0x89 ^ uVar35;
          uVar35 = (uint)*pbVar40;
          pbVar40 = pbVar40 + 1;
        } while (uVar35 != 0);
      }
      local_110 = (undefined **)CONCAT44((int)uVar53,uVar45);
      puVar57 = puVar51;
      puVar55 = (undefined8 *)*puVar51;
      if ((undefined8 *)*puVar51 == (undefined8 *)0x0) {
        plVar26 = (long *)*puVar51;
        puVar63 = puVar51;
      }
      else {
        do {
          while (puVar63 = puVar55, uVar45 < *(uint *)(puVar63 + 4)) {
LAB_7103774d60:
            puVar57 = puVar63;
            puVar55 = (undefined8 *)*puVar63;
            if ((undefined8 *)*puVar63 == (undefined8 *)0x0) goto LAB_7103774dac;
          }
          if (uVar45 <= *(uint *)(puVar63 + 4)) {
            iVar24 = strcmp((char *)&uStack_108,(char *)(puVar63 + 5));
            if (iVar24 < 0) goto LAB_7103774d60;
            iVar24 = strcmp((char *)(puVar63 + 5),(char *)&uStack_108);
            if (-1 < iVar24) break;
          }
          puVar57 = puVar63 + 1;
          puVar55 = (undefined8 *)*puVar57;
        } while ((undefined8 *)*puVar57 != (undefined8 *)0x0);
LAB_7103774dac:
        plVar26 = (long *)*puVar57;
      }
      if (plVar26 == (long *)0x0) {
        plVar26 = (long *)FUN_710392e290(0x10,0x80,pppplVar33,ppppbVar34,pppplVar31,uVar38,
                                         pppplVar60,pcVar32);
        if (plVar26 == (long *)0x0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_74 = 0;
            local_90[0] = (long ***)&DAT_00000080;
            pppplVar33 = local_90;
            uVar62 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,&local_74);
            if ((uVar62 & 1) != 0) {
              plVar26 = (long *)FUN_710392e290(0x10,0x80,pppplVar33,ppppbVar34,pppplVar31,uVar38,
                                               pppplVar60,pcVar32);
              if (plVar26 != (long *)0x0) goto LAB_7103774e10;
            }
          }
          plVar26 = (long *)0x0;
        }
LAB_7103774e10:
        uVar62 = 0;
        *(undefined4 *)(plVar26 + 4) = 0;
        if (cVar2 != '\0') {
          do {
            *(char *)((long)plVar26 + uVar62 + 0x28) = (char)uVar46;
            if (0x3e < (int)uVar62 + 1U) {
              uVar62 = (ulong)((int)uVar62 + 1);
              break;
            }
            if (pbVar43[uVar62] == 0) {
              uVar62 = uVar62 + 1;
              break;
            }
            *(byte *)((long)plVar26 + uVar62 + 0x29) = pbVar43[uVar62];
            uVar46 = (uint)*(byte *)((long)&uStack_108 + uVar62 + 2);
            uVar62 = uVar62 + 2;
          } while (uVar46 != 0);
        }
        *(undefined1 *)((long)plVar26 + (uVar62 & 0xffffffff) + 0x28) = 0;
        *(int *)((long)plVar26 + 0x24) = (int)uVar62;
        uVar35 = (uint)*(byte *)(plVar26 + 5);
        uVar45 = uVar44;
        if (*(byte *)(plVar26 + 5) != 0) {
          pbVar40 = (byte *)((long)plVar26 + 0x29);
          do {
            uVar45 = uVar45 * 0x89 ^ uVar35;
            uVar35 = (uint)*pbVar40;
            pbVar40 = pbVar40 + 1;
          } while (uVar35 != 0);
        }
        plVar26[0xe] = 0;
        plVar26[0xf] = 0;
        *(uint *)(plVar26 + 4) = uVar45;
        plVar26[0xd] = 0;
        plVar26[2] = (long)puVar63;
        *plVar26 = 0;
        plVar26[1] = 0;
        *puVar57 = plVar26;
        plVar27 = plVar26;
        if (**(long **)(lVar59 + 0x598) != 0) {
          *(long *)(lVar59 + 0x598) = **(long **)(lVar59 + 0x598);
          plVar27 = (long *)*puVar57;
        }
        std::__tree_balance_after_insert<std::__tree_node_base<void*>*>
                  (*(long **)(lVar59 + 0x5a0),plVar27);
        *(long *)(lVar59 + 0x5a8) = *(long *)(lVar59 + 0x5a8) + 1;
      }
      puVar61 = (ulong *)(plVar26 + 0xd);
      uVar62 = *puVar61;
      if ((ulong)(((long)(plVar26[0xf] - uVar62) >> 3) * -0x71c71c71c71c71c7) < 8) {
        uVar53 = plVar26[0xe];
        lVar42 = FUN_710392e290(0x10,0x240,pppplVar33,ppppbVar34,pppplVar31,uVar38,pppplVar60,
                                pcVar32);
        if (lVar42 == 0) {
          if (DAT_7105332f00 != (long *)0x0) {
            local_90[0] = (long ***)((ulong)local_90[0] & 0xffffffff00000000);
            local_110 = (undefined **)0x240;
            pppplVar33 = (long ****)&local_110;
            uVar36 = (**(code **)(*DAT_7105332f00 + 0x30))(DAT_7105332f00,local_90);
            if ((uVar36 & 1) != 0) {
              lVar42 = FUN_710392e290(0x10,0x240,pppplVar33,ppppbVar34,pppplVar31,uVar38,pppplVar60,
                                      pcVar32);
              if (lVar42 != 0) goto LAB_7103774f88;
            }
          }
          lVar42 = 0;
        }
LAB_7103774f88:
        puVar41 = (uint *)(lVar42 + ((long)(uVar53 - uVar62) >> 3) * 8);
        puVar39 = puVar41;
        if (uVar53 != uVar62) {
          do {
            uVar54 = uVar53 - 0x48;
            puVar39[-0x12] = 0;
            uVar36 = 0;
            do {
              lVar50 = uVar53 + uVar36;
              uVar48 = uVar36;
              if (*(char *)(lVar50 + -0x40) == '\0') break;
              *(char *)((long)puVar39 + (uVar36 - 0x40)) = *(char *)(lVar50 + -0x40);
              if (*(char *)(lVar50 + -0x3f) == '\0') {
                uVar48 = uVar36 + 1;
                break;
              }
              *(char *)((long)puVar39 + (uVar36 - 0x3f)) = *(char *)(lVar50 + -0x3f);
              if (*(char *)(lVar50 + -0x3e) == '\0') {
                uVar48 = uVar36 + 2;
                break;
              }
              uVar48 = uVar36 + 3;
              *(char *)((long)puVar39 + (uVar36 - 0x3e)) = *(char *)(lVar50 + -0x3e);
              uVar36 = uVar48;
            } while ((uint)uVar48 < 0x3f);
            *(undefined1 *)((long)puVar39 + ((uVar48 & 0xffffffff) - 0x40)) = 0;
            uVar35 = (uint)(byte)puVar39[-0x10];
            puVar39[-0x11] = (uint)uVar48;
            uVar45 = uVar44;
            if ((byte)puVar39[-0x10] != 0) {
              lVar50 = -0x3f;
              do {
                uVar45 = uVar45 * 0x89 ^ uVar35;
                uVar35 = (uint)*(byte *)((long)puVar39 + lVar50);
                lVar50 = lVar50 + 1;
              } while (uVar35 != 0);
            }
            puVar39 = puVar39 + -0x12;
            *puVar39 = uVar45;
            uVar53 = uVar54;
          } while (uVar54 != uVar62);
          uVar62 = *puVar61;
        }
        plVar26[0xd] = (long)puVar39;
        plVar26[0xe] = (long)puVar41;
        plVar26[0xf] = lVar42 + 0x240;
        if (uVar62 != 0) {
          FUN_710392eb40(uVar62);
        }
      }
      cVar2 = *pcVar56;
      while (cVar2 != '\0') {
                    /* WARNING: Read-only address (ram,0x00710446a360) is written */
                    /* WARNING: Read-only address (ram,0x00710446a369) is written */
        if (pcVar56 == (char *)0x0) {
          uVar62 = 0;
        }
        else {
          uVar53 = 0;
          uVar36 = uStack_108;
          do {
            uStack_108 = uVar36;
            pcVar58 = pcVar56 + uVar53;
            uVar62 = uVar53;
            if (*pcVar58 == '\0') break;
            *(char *)((long)&uStack_108 + uVar53) = *pcVar58;
            if (pcVar58[1] == '\0') {
              uVar62 = uVar53 + 1;
              break;
            }
            *(char *)((long)&uStack_108 + uVar53 + 1) = pcVar58[1];
            if (pcVar58[2] == '\0') {
              uVar62 = uVar53 + 2;
              break;
            }
            uVar62 = uVar53 + 3;
            *(char *)((long)&uStack_108 + uVar53 + 2) = pcVar58[2];
            uVar53 = uVar62;
            uVar36 = CONCAT44(uStack_108._4_4_,(float)uStack_108);
          } while ((uint)uVar62 < 0x3f);
        }
        *(undefined1 *)((long)&uStack_108 + (uVar62 & 0xffffffff)) = 0;
        uVar35 = (uint)(float)uStack_108;
        uVar46 = uVar35 & 0xff;
        local_110 = (undefined **)(uVar62 << 0x20);
        uVar35 = uVar35 & 0xff;
        pbVar40 = pbVar43;
        uVar45 = uVar44;
        if ((uStack_108 & 0xff) != 0) {
          do {
            uVar45 = uVar45 * 0x89 ^ uVar35;
            uVar35 = (uint)*pbVar40;
            pbVar40 = pbVar40 + 1;
          } while (uVar35 != 0);
        }
        local_110 = (undefined **)CONCAT44((int)uVar62,uVar45);
        puVar39 = (uint *)plVar26[0xe];
        if (puVar39 < (uint *)plVar26[0xf]) {
          uVar62 = 0;
          *puVar39 = 0;
          if ((char)uStack_108 != '\0') {
            do {
              *(char *)((long)puVar39 + uVar62 + 8) = (char)uVar46;
              if (pbVar43[uVar62] == 0) {
                uVar62 = uVar62 + 1;
                break;
              }
              *(byte *)((long)puVar39 + uVar62 + 9) = pbVar43[uVar62];
              cVar2 = *(char *)((long)&uStack_108 + uVar62 + 2);
              if (cVar2 == '\0') {
                uVar62 = uVar62 + 2;
                break;
              }
              *(char *)((long)puVar39 + uVar62 + 10) = cVar2;
              if (0x3e < (int)uVar62 + 3U) {
                uVar62 = (ulong)((int)uVar62 + 3);
                break;
              }
              uVar46 = (uint)*(byte *)((long)&uStack_108 + uVar62 + 3);
              uVar62 = uVar62 + 3;
            } while (uVar46 != 0);
          }
          *(undefined1 *)((long)puVar39 + (uVar62 & 0xffffffff) + 8) = 0;
          puVar39[1] = (uint)uVar62;
          uVar35 = (uint)(byte)puVar39[2];
          uVar45 = uVar44;
          if ((byte)puVar39[2] != 0) {
            pbVar40 = (byte *)((long)puVar39 + 9);
            do {
              uVar45 = uVar45 * 0x89 ^ uVar35;
              uVar35 = (uint)*pbVar40;
              pbVar40 = pbVar40 + 1;
            } while (uVar35 != 0);
          }
          *puVar39 = uVar45;
          plVar26[0xe] = plVar26[0xe] + 0x48;
        }
        else {
          FUN_71019c1c50(puVar61,(long)&local_110,pppplVar33,ppppbVar34,pppplVar31,uVar38,pppplVar60
                         ,pcVar32);
        }
        sVar29 = strlen(pcVar56);
        pcVar56 = pcVar56 + sVar29 + 1;
        cVar2 = *pcVar56;
      }
                    /* WARNING: Read-only address (ram,0x00710446a360) is written */
                    /* WARNING: Read-only address (ram,0x00710446a369) is written */
      pcVar58 = pcVar56 + 1;
    } while (*pcVar58 != '\0');
  }
  lVar42 = *(long *)(lVar59 + 0x458);
  lVar50 = *(long *)(lVar42 + 0x50);
  if (lVar50 == lVar42 + 0x48) {
    puVar39 = *(uint **)(lVar42 + 0x38);
    if (puVar39 == (uint *)0x0) goto LAB_710377527c;
LAB_7103775228:
    uVar45 = puVar39[2];
    if ((ushort)uVar45 != 0) {
      uVar44 = 0;
      do {
        puVar41 = puVar39 + 3;
        pcVar32 = (char *)0x0;
        if (*puVar41 != 0) {
          pcVar32 = (char *)((long)puVar41 + (ulong)*puVar41);
        }
        iVar24 = strcmp("persp_mode",pcVar32);
        if (iVar24 == 0) {
          if (*(char *)((long)puVar39 + 0x16) == '\x01') {
            iVar24 = *(int *)((long)puVar41 + (ulong)puVar39[4]);
            puVar57 = *(undefined8 **)(lVar59 + 0x510);
            *(bool *)(lVar59 + 0x654) = iVar24 != 0;
            puVar51 = *(undefined8 **)(lVar59 + 0x508);
            if (*(undefined8 **)(lVar59 + 0x508) != puVar57) {
              do {
                puVar55 = puVar51 + 1;
                (**(code **)(*(long *)*puVar51 + 0x160))((long *)*puVar51,iVar24 != 0);
                puVar51 = puVar55;
              } while (puVar57 != puVar55);
              lVar42 = *(long *)(lVar59 + 0x458);
            }
          }
          break;
        }
        uVar44 = uVar44 + 1;
        puVar39 = puVar41;
      } while (uVar44 < (ushort)uVar45);
    }
    puVar39 = *(uint **)(lVar42 + 0x38);
    bVar23 = puVar39 == (uint *)0x0;
    if ((puVar39 != (uint *)0x0) && (uVar45 = puVar39[2], (ushort)uVar45 != 0)) {
      uVar44 = 0;
      puVar41 = puVar39;
      do {
        puVar52 = puVar41 + 3;
        pcVar32 = (char *)0x0;
        if (*puVar52 != 0) {
          pcVar32 = (char *)((long)puVar52 + (ulong)*puVar52);
        }
        iVar24 = strcmp("layout_rect",pcVar32);
        if (iVar24 == 0) {
          if (*(char *)((long)puVar41 + 0x16) == '\x01') {
            iVar24 = *(int *)((long)puVar52 + (ulong)puVar41[4]);
            cVar2 = *(char *)(lVar59 + 0x654);
            goto joined_r0x007103775558;
          }
          break;
        }
        uVar44 = uVar44 + 1;
        puVar41 = puVar52;
      } while (uVar44 < (ushort)uVar45);
    }
    iVar24 = 0;
    iVar114 = 0;
    if (*(char *)(lVar59 + 0x654) != '\0') goto LAB_710377556c;
LAB_7103775290:
    if (iVar24 == 1) {
      FUN_710004b8b0((float *)&local_110,lVar42);
      fVar113 = 1.0 / ((float)uStack_108 - (float)local_110);
      ppplVar37 = (long ***)(ulong)(uint)(fVar113 + fVar113);
      fVar112 = 1.0 / (local_110._4_4_ - uStack_108._4_4_);
      fVar105 = -((uStack_108._4_4_ + local_110._4_4_) * fVar112);
      fVar112 = fVar112 + fVar112;
      uVar73 = (undefined1)((uint)fVar112 >> 0x18);
      uVar67 = SUB41(fVar112,0);
      uVar69 = (undefined1)((uint)fVar112 >> 8);
      uVar71 = (undefined1)((uint)fVar112 >> 0x10);
      uVar83 = SUB41(fVar105,0);
      uVar85 = (undefined1)((uint)fVar105 >> 8);
      uVar87 = (undefined1)((uint)fVar105 >> 0x10);
      uVar89 = (undefined1)((uint)fVar105 >> 0x18);
      uStack_108._4_4_ = -(((float)local_110 + (float)uStack_108) * fVar113);
    }
    else {
      uVar83 = 0;
      uVar85 = 0;
      uVar87 = 0;
      uVar89 = 0x80;
      uVar67 = 0xd6;
      uVar69 = 0xb9;
      uVar71 = 0xf2;
      uVar73 = 0x3a;
      uStack_108._4_4_ = -0.0;
      ppplVar37 = (long ***)0x3a888889;
    }
    local_fc = (float)CONCAT13(uVar73,CONCAT12(uVar71,CONCAT11(uVar69,uVar67)));
    auVar137[10] = 0x80;
    auVar137._0_10_ = (unkuint10)0x3f8000003f800000;
    auVar137[0xb] = 0x3f;
    auVar137._12_2_ = 0;
    auVar137[0xe] = 0x80;
    auVar137[0xf] = 0x3f;
    auVar137 = NEON_frsqrte(auVar137,4);
    auVar116._0_4_ = auVar137._0_4_ * 1.0;
    auVar116._4_4_ = auVar137._4_4_ * 1.0;
    auVar116._8_4_ = auVar137._8_4_ * 1.0;
    auVar116._12_4_ = auVar137._12_4_ * 1.0;
    auVar144 = NEON_frsqrts(auVar137,auVar116,4);
    auVar12._9_7_ = 0;
    auVar12._0_9_ = _DAT_710446a360;
    uVar138 = a64_TBL(ZEXT816(0),auVar12,0xb0a090807060504);
    auVar108._0_4_ = auVar137._0_4_ * auVar144._0_4_;
    auVar108._4_4_ = auVar137._4_4_ * auVar144._4_4_;
    auVar108._8_4_ = auVar137._8_4_ * auVar144._8_4_;
    auVar108._12_4_ = auVar137._12_4_ * auVar144._12_4_;
    auVar13._9_7_ = 0;
    auVar13._0_9_ = _DAT_710446a360;
    uVar139 = a64_TBL(ZEXT816(0),auVar13,0x30201000b0a0908);
    auVar117._0_4_ = auVar108._0_4_ * 1.0;
    auVar117._4_4_ = auVar108._4_4_ * 1.0;
    auVar117._8_4_ = auVar108._8_4_ * 1.0;
    auVar117._12_4_ = auVar108._12_4_ * 1.0;
    auVar137 = NEON_frsqrts(auVar108,auVar117,4);
    auVar14._9_7_ = 0;
    auVar14._0_9_ = _DAT_710446a360;
    uVar145 = a64_TBL(ZEXT816(0),auVar14,0xf0e0d0c03020100);
    fVar133 = auVar108._0_4_ * auVar137._0_4_ * 0.0;
    fVar141 = auVar108._4_4_ * auVar137._4_4_ * 0.0;
    fVar123 = auVar108._8_4_ * auVar137._8_4_ * 1.0;
    fVar142 = auVar108._12_4_ * auVar137._12_4_ * 0.0;
    auVar15._9_7_ = 0;
    auVar15._0_9_ = _DAT_710446a360;
    uVar38 = a64_TBL(ZEXT816(0),auVar15,0xf0e0d0c07060504);
    uVar67 = SUB41(fVar141,0);
    uVar69 = (undefined1)((uint)fVar141 >> 8);
    uVar71 = (undefined1)((uint)fVar141 >> 0x10);
    uVar73 = (undefined1)((uint)fVar141 >> 0x18);
    uVar96 = SUB41(fVar123,0);
    uVar97 = (undefined1)((uint)fVar123 >> 8);
    uVar98 = (undefined1)((uint)fVar123 >> 0x10);
    uVar99 = (undefined1)((uint)fVar123 >> 0x18);
    uVar100 = SUB41(fVar142,0);
    uVar102 = (undefined1)((uint)fVar142 >> 8);
    uVar103 = (undefined1)((uint)fVar142 >> 0x10);
    uVar104 = (undefined1)((uint)fVar142 >> 0x18);
    auVar144[4] = uVar67;
    auVar144._0_4_ = fVar133;
    auVar144[5] = uVar69;
    auVar144[6] = uVar71;
    auVar144[7] = uVar73;
    auVar144[8] = uVar96;
    auVar144[9] = uVar97;
    auVar144[10] = uVar98;
    auVar144[0xb] = uVar99;
    auVar144[0xc] = uVar100;
    auVar144[0xd] = uVar102;
    auVar144[0xe] = uVar103;
    auVar144[0xf] = uVar104;
    uVar49 = a64_TBL(ZEXT816(0),auVar144,0x30201000b0a0908);
    auVar128[4] = uVar67;
    auVar128._0_4_ = fVar133;
    auVar128[5] = uVar69;
    auVar128[6] = uVar71;
    auVar128[7] = uVar73;
    auVar128[8] = uVar96;
    auVar128[9] = uVar97;
    auVar128[10] = uVar98;
    auVar128[0xb] = uVar99;
    auVar128[0xc] = uVar100;
    auVar128[0xd] = uVar102;
    auVar128[0xe] = uVar103;
    auVar128[0xf] = uVar104;
    uVar124 = a64_TBL(ZEXT816(0),auVar128,0xf0e0d0c07060504);
    auVar8[4] = uVar67;
    auVar8._0_4_ = fVar133;
    auVar8[5] = uVar69;
    auVar8[6] = uVar71;
    auVar8[7] = uVar73;
    auVar8[8] = uVar96;
    auVar8[9] = uVar97;
    auVar8[10] = uVar98;
    auVar8[0xb] = uVar99;
    auVar8[0xc] = uVar100;
    auVar8[0xd] = uVar102;
    auVar8[0xe] = uVar103;
    auVar8[0xf] = uVar104;
    uVar129 = a64_TBL(ZEXT816(0),auVar8,0xb0a090807060504);
    auVar9[4] = uVar67;
    auVar9._0_4_ = fVar133;
    auVar9[5] = uVar69;
    auVar9[6] = uVar71;
    auVar9[7] = uVar73;
    auVar9[8] = uVar96;
    auVar9[9] = uVar97;
    auVar9[10] = uVar98;
    auVar9[0xb] = uVar99;
    auVar9[0xc] = uVar100;
    auVar9[0xd] = uVar102;
    auVar9[0xe] = uVar103;
    auVar9[0xf] = uVar104;
    uVar47 = a64_TBL(ZEXT816(0),auVar9,0xf0e0d0c03020100);
    fVar95 = (float)((ulong)uVar49 >> 0x20);
    fVar101 = (float)((ulong)uVar124 >> 0x20);
    fVar110 = (float)((ulong)uVar129 >> 0x20);
    fVar111 = (float)((ulong)uVar47 >> 0x20);
    fVar105 = (float)uVar138 * (float)uVar49 - (float)uVar139 * (float)uVar129;
    fVar112 = (float)((ulong)uVar138 >> 0x20) * fVar95 - (float)((ulong)uVar139 >> 0x20) * fVar110;
    fVar113 = (float)uVar145 * (float)uVar124 - (float)uVar38 * (float)uVar47;
    fVar64 = (float)((ulong)uVar145 >> 0x20) * fVar101 - (float)((ulong)uVar38 >> 0x20) * fVar111;
    auVar118._0_4_ = fVar105 * fVar105;
    auVar118._4_4_ = fVar112 * fVar112;
    auVar118._8_4_ = fVar113 * fVar113;
    auVar118._12_4_ = fVar64 * fVar64;
    auVar137 = NEON_ext(auVar118,auVar118,8,1);
    fVar115 = auVar137._0_4_ + auVar118._0_4_;
    fVar120 = auVar137._4_4_ + auVar118._4_4_;
    fVar107 = fVar115 + fVar120;
    fVar115 = fVar115 + fVar120;
    auVar119._8_8_ = CONCAT44(fVar115,fVar107);
    auVar119._0_8_ = CONCAT44(fVar115,fVar107);
    auVar137 = NEON_frsqrte(auVar119,4);
    auVar130._0_4_ = auVar137._0_4_ * fVar107;
    auVar130._4_4_ = auVar137._4_4_ * fVar115;
    auVar130._8_4_ = auVar137._8_4_ * fVar107;
    auVar130._12_4_ = auVar137._12_4_ * fVar115;
    auVar144 = NEON_frsqrts(auVar137,auVar130,4);
    auVar125._0_4_ = auVar137._0_4_ * auVar144._0_4_;
    auVar125._4_4_ = auVar137._4_4_ * auVar144._4_4_;
    auVar125._8_4_ = auVar137._8_4_ * auVar144._8_4_;
    auVar125._12_4_ = auVar137._12_4_ * auVar144._12_4_;
    auVar131._0_4_ = fVar107 * auVar125._0_4_;
    auVar131._4_4_ = fVar115 * auVar125._4_4_;
    auVar131._8_4_ = fVar107 * auVar125._8_4_;
    auVar131._12_4_ = fVar115 * auVar125._12_4_;
    iVar114 = -(uint)(fVar107 == 0.0);
    iVar134 = -(uint)(fVar115 == 0.0);
    iVar135 = -(uint)(fVar107 == 0.0);
    iVar136 = -(uint)(fVar115 == 0.0);
    auVar137 = NEON_frsqrts(auVar125,auVar131,4);
    fVar105 = fVar105 * auVar125._0_4_ * auVar137._0_4_;
    fVar112 = fVar112 * auVar125._4_4_ * auVar137._4_4_;
    fVar113 = fVar113 * auVar125._8_4_ * auVar137._8_4_;
    fVar64 = fVar64 * auVar125._12_4_ * auVar137._12_4_;
    bVar68 = SUB41(fVar105,0) & ~(byte)iVar114;
    bVar70 = (byte)((uint)fVar105 >> 8) & ~(byte)((uint)iVar114 >> 8);
    bVar72 = (byte)((uint)fVar105 >> 0x10) & ~(byte)((uint)iVar114 >> 0x10);
    bVar74 = (byte)((uint)fVar105 >> 0x18) & ~(byte)((uint)iVar114 >> 0x18);
    bVar75 = SUB41(fVar112,0) & ~(byte)iVar134;
    bVar76 = (byte)((uint)fVar112 >> 8) & ~(byte)((uint)iVar134 >> 8);
    bVar77 = (byte)((uint)fVar112 >> 0x10) & ~(byte)((uint)iVar134 >> 0x10);
    bVar78 = (byte)((uint)fVar112 >> 0x18) & ~(byte)((uint)iVar134 >> 0x18);
    bVar79 = SUB41(fVar113,0) & ~(byte)iVar135;
    bVar80 = (byte)((uint)fVar113 >> 8) & ~(byte)((uint)iVar135 >> 8);
    bVar81 = (byte)((uint)fVar113 >> 0x10) & ~(byte)((uint)iVar135 >> 0x10);
    bVar82 = (byte)((uint)fVar113 >> 0x18) & ~(byte)((uint)iVar135 >> 0x18);
    bVar84 = SUB41(fVar64,0) & ~(byte)iVar136;
    bVar86 = (byte)((uint)fVar64 >> 8) & ~(byte)((uint)iVar136 >> 8);
    bVar88 = (byte)((uint)fVar64 >> 0x10) & ~(byte)((uint)iVar136 >> 0x10);
    bVar90 = (byte)((uint)fVar64 >> 0x18) & ~(byte)((uint)iVar136 >> 0x18);
    auVar16[1] = bVar70;
    auVar16[0] = bVar68;
    auVar16[2] = bVar72;
    auVar16[3] = bVar74;
    auVar16[4] = bVar75;
    auVar16[5] = bVar76;
    auVar16[6] = bVar77;
    auVar16[7] = bVar78;
    auVar16[8] = bVar79;
    auVar16[9] = bVar80;
    auVar16[10] = bVar81;
    auVar16[0xb] = bVar82;
    auVar16[0xc] = bVar84;
    auVar16[0xd] = bVar86;
    auVar16[0xe] = bVar88;
    auVar16[0xf] = bVar90;
    uVar138 = a64_TBL(ZEXT816(0),auVar16,0x30201000b0a0908);
    auVar17[1] = bVar70;
    auVar17[0] = bVar68;
    auVar17[2] = bVar72;
    auVar17[3] = bVar74;
    auVar17[4] = bVar75;
    auVar17[5] = bVar76;
    auVar17[6] = bVar77;
    auVar17[7] = bVar78;
    auVar17[8] = bVar79;
    auVar17[9] = bVar80;
    auVar17[10] = bVar81;
    auVar17[0xb] = bVar82;
    auVar17[0xc] = bVar84;
    auVar17[0xd] = bVar86;
    auVar17[0xe] = bVar88;
    auVar17[0xf] = bVar90;
    uVar139 = a64_TBL(ZEXT816(0),auVar17,0xf0e0d0c07060504);
    auVar18[1] = bVar70;
    auVar18[0] = bVar68;
    auVar18[2] = bVar72;
    auVar18[3] = bVar74;
    auVar18[4] = bVar75;
    auVar18[5] = bVar76;
    auVar18[6] = bVar77;
    auVar18[7] = bVar78;
    auVar18[8] = bVar79;
    auVar18[9] = bVar80;
    auVar18[10] = bVar81;
    auVar18[0xb] = bVar82;
    auVar18[0xc] = bVar84;
    auVar18[0xd] = bVar86;
    auVar18[0xe] = bVar88;
    auVar18[0xf] = bVar90;
    uVar145 = a64_TBL(ZEXT816(0),auVar18,0xb0a090807060504);
    auVar19[1] = bVar70;
    auVar19[0] = bVar68;
    auVar19[2] = bVar72;
    auVar19[3] = bVar74;
    auVar19[4] = bVar75;
    auVar19[5] = bVar76;
    auVar19[6] = bVar77;
    auVar19[7] = bVar78;
    auVar19[8] = bVar79;
    auVar19[9] = bVar80;
    auVar19[10] = bVar81;
    auVar19[0xb] = bVar82;
    auVar19[0xc] = bVar84;
    auVar19[0xd] = bVar86;
    auVar19[0xe] = bVar88;
    auVar19[0xf] = bVar90;
    uVar38 = a64_TBL(ZEXT816(0),auVar19,0xf0e0d0c03020100);
    fVar113 = (float)uVar129 * (float)uVar138 - (float)uVar49 * (float)uVar145;
    fVar64 = fVar110 * (float)((ulong)uVar138 >> 0x20) - fVar95 * (float)((ulong)uVar145 >> 0x20);
    fVar107 = (float)uVar47 * (float)uVar139 - (float)uVar124 * (float)uVar38;
    auVar109._0_4_ = fVar133 * -0.0;
    auVar109._4_4_ = fVar141 * -0.0;
    auVar109._8_4_ = fVar123 * -1.0;
    auVar109._12_4_ = fVar142 * -0.0;
    auVar144 = NEON_ext(auVar109,auVar109,8,1);
    auVar92._0_4_ = (float)CONCAT13(bVar74,CONCAT12(bVar72,CONCAT11(bVar70,bVar68))) * -0.0;
    auVar92._4_4_ = (float)CONCAT13(bVar78,CONCAT12(bVar77,CONCAT11(bVar76,bVar75))) * -0.0;
    auVar92._8_4_ = (float)CONCAT13(bVar82,CONCAT12(bVar81,CONCAT11(bVar80,bVar79))) * -1.0;
    auVar92._12_4_ = (float)CONCAT13(bVar90,CONCAT12(bVar88,CONCAT11(bVar86,bVar84))) * -0.0;
    auVar122._0_4_ = fVar113 * -0.0;
    auVar122._4_4_ = fVar64 * -0.0;
    auVar122._8_4_ = fVar107 * -1.0;
    auVar122._12_4_ =
         (fVar111 * (float)((ulong)uVar139 >> 0x20) - fVar101 * (float)((ulong)uVar38 >> 0x20)) *
         -0.0;
    auVar137 = NEON_ext(auVar92,auVar92,8,1);
    fVar105 = auVar144._0_4_ + auVar109._0_4_ + auVar144._4_4_ + auVar109._4_4_;
    auVar144 = NEON_ext(auVar122,auVar122,8,1);
    fVar112 = auVar137._0_4_ + auVar92._0_4_ + auVar137._4_4_ + auVar92._4_4_;
    pcStack_e8 = (code *)0x80000000bb5a740e;
    local_f8 = ZEXT416(CONCAT13(uVar89,CONCAT12(uVar87,CONCAT11(uVar85,uVar83)))) << 0x20;
    uStack_d6 = 0;
    local_d4 = 0x3f800000;
    *(ulong *)(lVar59 + 0xa8) =
         CONCAT17((char)((uint)fVar112 >> 0x18),
                  CONCAT16((char)((uint)fVar112 >> 0x10),
                           CONCAT15((char)((uint)fVar112 >> 8),
                                    CONCAT14(SUB41(fVar112,0),
                                             CONCAT13(bVar82,CONCAT12(bVar81,CONCAT11(bVar80,bVar79)
                                                                     ))))));
    *(ulong *)(lVar59 + 0xa0) =
         CONCAT17(bVar78,CONCAT16(bVar77,CONCAT15(bVar76,CONCAT14(bVar75,CONCAT13(bVar74,CONCAT12(
                                                  bVar72,CONCAT11(bVar70,bVar68)))))));
    *(ulong *)(lVar59 + 0xb8) =
         CONCAT44(auVar144._0_4_ + auVar122._0_4_ + auVar144._4_4_ + auVar122._4_4_,fVar107);
    *(ulong *)(lVar59 + 0xb0) = CONCAT44(fVar64,fVar113);
    *(ulong *)(lVar59 + 200) =
         CONCAT17((char)((uint)fVar105 >> 0x18),
                  CONCAT16((char)((uint)fVar105 >> 0x10),
                           CONCAT15((char)((uint)fVar105 >> 8),CONCAT14(SUB41(fVar105,0),fVar123))))
    ;
    *(ulong *)(lVar59 + 0xc0) =
         CONCAT17(uVar73,CONCAT16(uVar71,CONCAT15(uVar69,CONCAT14(uVar67,fVar133))));
    local_110 = (undefined **)ppplVar37;
  }
  else {
    do {
      ppppbVar30 = (byte ****)FUN_710379df60(lVar50 + -0xd8);
      FUN_710378e9c0(lVar59,ppppbVar30,pppplVar33,ppppbVar34,pppplVar31,uVar38,pppplVar60,pcVar32);
      lVar50 = *(long *)(lVar50 + 8);
    } while (lVar50 != lVar42 + 0x48);
    lVar42 = *(long *)(lVar59 + 0x458);
    puVar39 = *(uint **)(lVar42 + 0x38);
    if (puVar39 != (uint *)0x0) goto LAB_7103775228;
LAB_710377527c:
    puVar39 = (uint *)0x0;
    bVar23 = true;
    iVar24 = 0;
    cVar2 = *(char *)(lVar59 + 0x654);
joined_r0x007103775558:
    iVar114 = iVar24;
    if (cVar2 == '\0') goto LAB_7103775290;
LAB_710377556c:
    fVar112 = 10000.0;
    fVar105 = 1.0;
    if (bVar23) {
      fVar113 = 0.3926991;
      fVar105 = 1.0;
    }
    else {
      uVar45 = puVar39[2];
      if ((ushort)uVar45 == 0) {
        fVar113 = 0.3926991;
        uVar3 = (ushort)puVar39[2];
        if (uVar3 != 0) goto LAB_7103775628;
LAB_71037755e0:
        fVar105 = 1.0;
        uVar3 = (ushort)puVar39[2];
        fVar64 = 1.0;
        if (uVar3 == 0) goto LAB_71037756e4;
LAB_7103775690:
        fVar105 = fVar64;
        uVar45 = 0;
        do {
          puVar41 = puVar39 + 3;
          pcVar32 = (char *)0x0;
          if (*puVar41 != 0) {
            pcVar32 = (char *)((long)puVar41 + (ulong)*puVar41);
          }
          iVar24 = strcmp("persp_far",pcVar32);
          if (iVar24 == 0) {
            if (*(char *)((long)puVar39 + 0x16) == '\x02') {
              fVar112 = *(float *)((long)puVar41 + (ulong)puVar39[4]);
            }
            break;
          }
          uVar45 = uVar45 + 1;
          puVar39 = puVar41;
        } while (uVar45 < uVar3);
      }
      else {
        fVar113 = 0.3926991;
        uVar44 = 0;
        puVar41 = puVar39;
        do {
          puVar52 = puVar41 + 3;
          pcVar32 = (char *)0x0;
          if (*puVar52 != 0) {
            pcVar32 = (char *)((long)puVar52 + (ulong)*puVar52);
          }
          iVar24 = strcmp("persp_fov",pcVar32);
          if (iVar24 == 0) {
            if (*(char *)((long)puVar41 + 0x16) == '\x02') {
              fVar113 = *(float *)((long)puVar52 + (ulong)puVar41[4]) * 0.017453292 * 0.5;
            }
            break;
          }
          uVar44 = uVar44 + 1;
          puVar41 = puVar52;
        } while (uVar44 < (ushort)uVar45);
        if (!bVar23) {
          uVar3 = (ushort)puVar39[2];
          if (uVar3 == 0) goto LAB_71037755e0;
LAB_7103775628:
          fVar105 = 1.0;
          uVar45 = 0;
          puVar41 = puVar39;
          do {
            puVar52 = puVar41 + 3;
            pcVar32 = (char *)0x0;
            if (*puVar52 != 0) {
              pcVar32 = (char *)((long)puVar52 + (ulong)*puVar52);
            }
            iVar24 = strcmp("persp_near",pcVar32);
            if (iVar24 == 0) {
              fVar105 = 1.0;
              if (*(char *)((long)puVar41 + 0x16) == '\x02') {
                fVar105 = *(float *)((long)puVar52 + (ulong)puVar41[4]);
              }
              break;
            }
            uVar45 = uVar45 + 1;
            puVar41 = puVar52;
          } while (uVar45 < uVar3);
          if ((!bVar23) && (uVar3 = (ushort)puVar39[2], fVar64 = fVar105, uVar3 != 0))
          goto LAB_7103775690;
        }
      }
    }
LAB_71037756e4:
    fVar64 = 0.5;
    if (fVar113 < 0.0) {
      fVar64 = -0.5;
    }
    fVar64 = fVar113 - _Float2Pi * (float)(int)(fVar64 + fVar113 * _Float1Divided2Pi);
    if (fVar64 <= _FloatPiDivided2) {
      if (fVar64 < -_FloatPiDivided2) {
        fVar107 = -_FloatPi;
        uVar67 = SUB41(fVar107,0);
        uVar69 = (undefined1)((uint)fVar107 >> 8);
        uVar71 = (undefined1)((uint)fVar107 >> 0x10);
        uVar73 = (undefined1)((uint)fVar107 >> 0x18);
        goto LAB_7103775764;
      }
      uVar67 = 0x3f;
    }
    else {
      uVar67 = SUB41(_FloatPi,0);
      uVar69 = (undefined1)((uint)_FloatPi >> 8);
      uVar71 = (undefined1)((uint)_FloatPi >> 0x10);
      uVar73 = (undefined1)((uint)_FloatPi >> 0x18);
LAB_7103775764:
      fVar64 = (float)CONCAT13(uVar73,CONCAT12(uVar71,CONCAT11(uVar69,uVar67))) - fVar64;
      uVar67 = 0xbf;
    }
    fVar115 = (float)NEON_ucvtf(_AngleIndexHalfRound);
    fVar107 = fVar64 * fVar64;
    uVar62 = (ulong)(fVar113 * (fVar115 / _FloatPi));
    lVar42 = (uVar62 >> 0x18 & 0xff) * 0x10;
    fVar113 = (float)((uint)uVar62 & 0xffffff) * 5.9604645e-08;
    fVar123 = 540.0 / ((*(float *)(&DAT_7107b07004 + lVar42) +
                       *(float *)(&DAT_7107b0700c + lVar42) * fVar113) /
                      (*(float *)(&nn::util::detail::SinCosSampleTable + lVar42) +
                      *(float *)(&DAT_7107b07008 + lVar42) * fVar113));
    auVar20._9_7_ = DAT_710446a368._1_7_;
    auVar20._0_9_ = _DAT_710446a360;
    auVar137 = ZEXT416((uint)(fVar123 * fVar123)) << 0x40;
    auVar137 = NEON_ext(auVar137,auVar137,8,1);
    fVar115 = auVar137._0_4_ + 0.0;
    fVar133 = auVar137._4_4_ + 0.0;
    fVar113 = fVar115 + fVar133;
    fVar115 = fVar115 + fVar133;
    auVar132._8_8_ = CONCAT44(fVar115,fVar113);
    auVar132._0_8_ = CONCAT44(fVar115,fVar113);
    auVar137 = NEON_frsqrte(auVar132,4);
    auVar143._0_4_ = auVar137._0_4_ * fVar113;
    auVar143._4_4_ = auVar137._4_4_ * fVar115;
    auVar143._8_4_ = auVar137._8_4_ * fVar113;
    auVar143._12_4_ = auVar137._12_4_ * fVar115;
    auVar144 = NEON_frsqrts(auVar137,auVar143,4);
    auVar140._0_4_ = auVar137._0_4_ * auVar144._0_4_;
    auVar140._4_4_ = auVar137._4_4_ * auVar144._4_4_;
    auVar140._8_4_ = auVar137._8_4_ * auVar144._8_4_;
    auVar140._12_4_ = auVar137._12_4_ * auVar144._12_4_;
    auVar146._0_4_ = fVar113 * auVar140._0_4_;
    auVar146._4_4_ = fVar115 * auVar140._4_4_;
    auVar146._8_4_ = fVar113 * auVar140._8_4_;
    auVar146._12_4_ = fVar115 * auVar140._12_4_;
    fVar133 = -1.0 / (fVar112 - fVar105);
    iVar24 = -(uint)(fVar113 == 0.0);
    iVar134 = -(uint)(fVar115 == 0.0);
    iVar135 = -(uint)(fVar113 == 0.0);
    iVar136 = -(uint)(fVar115 == 0.0);
    auVar137 = NEON_frsqrts(auVar140,auVar146,4);
    uVar47 = a64_TBL(ZEXT816(0),auVar20,0xb0a090807060504);
    uVar38 = a64_TBL(ZEXT816(0),auVar20,0xf0e0d0c03020100);
    fVar113 = auVar140._0_4_ * auVar137._0_4_ * 0.0;
    fVar115 = auVar140._4_4_ * auVar137._4_4_ * 0.0;
    fVar141 = auVar140._8_4_ * auVar137._8_4_ * fVar123;
    fVar142 = auVar140._12_4_ * auVar137._12_4_ * 0.0;
    uVar145 = a64_TBL(ZEXT816(0),auVar20,0x30201000b0a0908);
    fVar95 = (float)CONCAT13((byte)((uint)fVar113 >> 0x18) & ~(byte)((uint)iVar24 >> 0x18),
                             CONCAT12((byte)((uint)fVar113 >> 0x10) & ~(byte)((uint)iVar24 >> 0x10),
                                      CONCAT11((byte)((uint)fVar113 >> 8) &
                                               ~(byte)((uint)iVar24 >> 8),
                                               SUB41(fVar113,0) & ~(byte)iVar24)));
    auVar91._0_8_ =
         CONCAT17((byte)((uint)fVar115 >> 0x18) & ~(byte)((uint)iVar134 >> 0x18),
                  CONCAT16((byte)((uint)fVar115 >> 0x10) & ~(byte)((uint)iVar134 >> 0x10),
                           CONCAT15((byte)((uint)fVar115 >> 8) & ~(byte)((uint)iVar134 >> 8),
                                    CONCAT14(SUB41(fVar115,0) & ~(byte)iVar134,fVar95))));
    auVar91[8] = SUB41(fVar141,0) & ~(byte)iVar135;
    auVar91[9] = (byte)((uint)fVar141 >> 8) & ~(byte)((uint)iVar135 >> 8);
    auVar91[10] = (byte)((uint)fVar141 >> 0x10) & ~(byte)((uint)iVar135 >> 0x10);
    auVar91[0xb] = (byte)((uint)fVar141 >> 0x18) & ~(byte)((uint)iVar135 >> 0x18);
    auVar93[0xc] = SUB41(fVar142,0) & ~(byte)iVar136;
    auVar93._0_12_ = auVar91;
    auVar93[0xd] = (byte)((uint)fVar142 >> 8) & ~(byte)((uint)iVar136 >> 8);
    auVar93[0xe] = (byte)((uint)fVar142 >> 0x10) & ~(byte)((uint)iVar136 >> 0x10);
    auVar93[0xf] = (byte)((uint)fVar142 >> 0x18) & ~(byte)((uint)iVar136 >> 0x18);
    pcStack_e8 = (code *)CONCAT44(fVar105 * fVar112 * fVar133,fVar112 * fVar133);
    uVar129 = a64_TBL(ZEXT816(0),auVar93,0x30201000b0a0908);
    uVar138 = a64_TBL(ZEXT816(0),auVar93,0xf0e0d0c07060504);
    uVar49 = a64_TBL(ZEXT816(0),auVar20,0xf0e0d0c07060504);
    uVar139 = a64_TBL(ZEXT816(0),auVar93,0xb0a090807060504);
    uVar124 = a64_TBL(ZEXT816(0),auVar93,0xf0e0d0c03020100);
    fVar101 = (float)((ulong)uVar129 >> 0x20);
    fVar110 = (float)((ulong)uVar138 >> 0x20);
    fVar111 = (float)((ulong)uVar139 >> 0x20);
    fVar120 = (float)((ulong)uVar124 >> 0x20);
    fVar105 = (float)uVar47 * (float)uVar129 - (float)uVar145 * (float)uVar139;
    fVar112 = (float)((ulong)uVar47 >> 0x20) * fVar101 - (float)((ulong)uVar145 >> 0x20) * fVar111;
    fVar113 = (float)uVar38 * (float)uVar138 - (float)uVar49 * (float)uVar124;
    fVar115 = (float)((ulong)uVar38 >> 0x20) * fVar110 - (float)((ulong)uVar49 >> 0x20) * fVar120;
    auVar126._0_4_ = fVar105 * fVar105;
    auVar126._4_4_ = fVar112 * fVar112;
    auVar126._8_4_ = fVar113 * fVar113;
    auVar126._12_4_ = fVar115 * fVar115;
    auVar137 = NEON_ext(auVar126,auVar126,8,1);
    fVar141 = auVar137._0_4_ + auVar126._0_4_;
    fVar142 = auVar137._4_4_ + auVar126._4_4_;
    fVar133 = fVar141 + fVar142;
    fVar141 = fVar141 + fVar142;
    auVar127._8_8_ = CONCAT44(fVar141,fVar133);
    auVar127._0_8_ = CONCAT44(fVar141,fVar133);
    auVar137 = NEON_frsqrte(auVar127,4);
    auVar148._0_4_ = auVar137._0_4_ * fVar133;
    auVar148._4_4_ = auVar137._4_4_ * fVar141;
    auVar148._8_4_ = auVar137._8_4_ * fVar133;
    auVar148._12_4_ = auVar137._12_4_ * fVar141;
    auVar144 = NEON_frsqrts(auVar137,auVar148,4);
    auVar147._0_4_ = auVar137._0_4_ * auVar144._0_4_;
    auVar147._4_4_ = auVar137._4_4_ * auVar144._4_4_;
    auVar147._8_4_ = auVar137._8_4_ * auVar144._8_4_;
    auVar147._12_4_ = auVar137._12_4_ * auVar144._12_4_;
    auVar149._0_4_ = fVar133 * auVar147._0_4_;
    auVar149._4_4_ = fVar141 * auVar147._4_4_;
    auVar149._8_4_ = fVar133 * auVar147._8_4_;
    auVar149._12_4_ = fVar141 * auVar147._12_4_;
    auVar137 = NEON_frsqrts(auVar147,auVar149,4);
    local_fc = 1.0 / ((fVar64 * (fVar107 * (fVar107 * (_DAT_710752800c +
                                                      fVar107 * (fVar107 * (_DAT_7107528004 -
                                                                           _SinCoefficients *
                                                                           fVar107) -
                                                                _DAT_7107528008)) - _DAT_7107528010)
                                + 1.0)) /
                     ((float)CONCAT13(uVar67,0x800000) *
                     (fVar107 * (fVar107 * (_DAT_710752900c +
                                           fVar107 * (fVar107 * (_DAT_7107529004 -
                                                                fVar107 * _CosCoefficients) -
                                                     _DAT_7107529008)) - _DAT_7107529010) + 1.0)));
    iVar24 = -(uint)(fVar133 == 0.0);
    iVar134 = -(uint)(fVar141 == 0.0);
    iVar135 = -(uint)(fVar133 == 0.0);
    iVar136 = -(uint)(fVar141 == 0.0);
    fVar105 = fVar105 * auVar147._0_4_ * auVar137._0_4_;
    fVar112 = fVar112 * auVar147._4_4_ * auVar137._4_4_;
    fVar113 = fVar113 * auVar147._8_4_ * auVar137._8_4_;
    fVar115 = fVar115 * auVar147._12_4_ * auVar137._12_4_;
    bVar68 = SUB41(fVar105,0) & ~(byte)iVar24;
    bVar70 = (byte)((uint)fVar105 >> 8) & ~(byte)((uint)iVar24 >> 8);
    bVar72 = (byte)((uint)fVar105 >> 0x10) & ~(byte)((uint)iVar24 >> 0x10);
    bVar74 = (byte)((uint)fVar105 >> 0x18) & ~(byte)((uint)iVar24 >> 0x18);
    bVar75 = SUB41(fVar112,0) & ~(byte)iVar134;
    bVar76 = (byte)((uint)fVar112 >> 8) & ~(byte)((uint)iVar134 >> 8);
    bVar77 = (byte)((uint)fVar112 >> 0x10) & ~(byte)((uint)iVar134 >> 0x10);
    bVar78 = (byte)((uint)fVar112 >> 0x18) & ~(byte)((uint)iVar134 >> 0x18);
    bVar79 = SUB41(fVar113,0) & ~(byte)iVar135;
    bVar80 = (byte)((uint)fVar113 >> 8) & ~(byte)((uint)iVar135 >> 8);
    bVar81 = (byte)((uint)fVar113 >> 0x10) & ~(byte)((uint)iVar135 >> 0x10);
    bVar82 = (byte)((uint)fVar113 >> 0x18) & ~(byte)((uint)iVar135 >> 0x18);
    bVar84 = SUB41(fVar115,0) & ~(byte)iVar136;
    bVar86 = (byte)((uint)fVar115 >> 8) & ~(byte)((uint)iVar136 >> 8);
    bVar88 = (byte)((uint)fVar115 >> 0x10) & ~(byte)((uint)iVar136 >> 0x10);
    bVar90 = (byte)((uint)fVar115 >> 0x18) & ~(byte)((uint)iVar136 >> 0x18);
    auVar4[1] = bVar70;
    auVar4[0] = bVar68;
    auVar4[2] = bVar72;
    auVar4[3] = bVar74;
    auVar4[4] = bVar75;
    auVar4[5] = bVar76;
    auVar4[6] = bVar77;
    auVar4[7] = bVar78;
    auVar4[8] = bVar79;
    auVar4[9] = bVar80;
    auVar4[10] = bVar81;
    auVar4[0xb] = bVar82;
    auVar4[0xc] = bVar84;
    auVar4[0xd] = bVar86;
    auVar4[0xe] = bVar88;
    auVar4[0xf] = bVar90;
    uVar38 = a64_TBL(ZEXT816(0),auVar4,0x30201000b0a0908);
    auVar5[1] = bVar70;
    auVar5[0] = bVar68;
    auVar5[2] = bVar72;
    auVar5[3] = bVar74;
    auVar5[4] = bVar75;
    auVar5[5] = bVar76;
    auVar5[6] = bVar77;
    auVar5[7] = bVar78;
    auVar5[8] = bVar79;
    auVar5[9] = bVar80;
    auVar5[10] = bVar81;
    auVar5[0xb] = bVar82;
    auVar5[0xc] = bVar84;
    auVar5[0xd] = bVar86;
    auVar5[0xe] = bVar88;
    auVar5[0xf] = bVar90;
    uVar49 = a64_TBL(ZEXT816(0),auVar5,0xf0e0d0c07060504);
    auVar6[1] = bVar70;
    auVar6[0] = bVar68;
    auVar6[2] = bVar72;
    auVar6[3] = bVar74;
    auVar6[4] = bVar75;
    auVar6[5] = bVar76;
    auVar6[6] = bVar77;
    auVar6[7] = bVar78;
    auVar6[8] = bVar79;
    auVar6[9] = bVar80;
    auVar6[10] = bVar81;
    auVar6[0xb] = bVar82;
    auVar6[0xc] = bVar84;
    auVar6[0xd] = bVar86;
    auVar6[0xe] = bVar88;
    auVar6[0xf] = bVar90;
    uVar47 = a64_TBL(ZEXT816(0),auVar6,0xf0e0d0c03020100);
    auVar7[1] = bVar70;
    auVar7[0] = bVar68;
    auVar7[2] = bVar72;
    auVar7[3] = bVar74;
    auVar7[4] = bVar75;
    auVar7[5] = bVar76;
    auVar7[6] = bVar77;
    auVar7[7] = bVar78;
    auVar7[8] = bVar79;
    auVar7[9] = bVar80;
    auVar7[10] = bVar81;
    auVar7[0xb] = bVar82;
    auVar7[0xc] = bVar84;
    auVar7[0xd] = bVar86;
    auVar7[0xe] = bVar88;
    auVar7[0xf] = bVar90;
    uVar145 = a64_TBL(ZEXT816(0),auVar7,0xb0a090807060504);
    fVar123 = -fVar123;
    auVar121._0_4_ = fVar95 * -0.0;
    auVar121._4_4_ = (float)((ulong)auVar91._0_8_ >> 0x20) * -0.0;
    auVar121._8_4_ = auVar91._8_4_ * fVar123;
    auVar121._12_4_ = auVar93._12_4_ * -0.0;
    auVar137 = NEON_ext(auVar121,auVar121,8,1);
    fVar105 = (float)uVar139 * (float)uVar38 - (float)uVar129 * (float)uVar145;
    fVar112 = fVar111 * (float)((ulong)uVar38 >> 0x20) - fVar101 * (float)((ulong)uVar145 >> 0x20);
    fVar113 = (float)uVar124 * (float)uVar49 - (float)uVar138 * (float)uVar47;
    auVar106._0_4_ = (float)CONCAT13(bVar74,CONCAT12(bVar72,CONCAT11(bVar70,bVar68))) * -0.0;
    auVar106._4_4_ = (float)CONCAT13(bVar78,CONCAT12(bVar77,CONCAT11(bVar76,bVar75))) * -0.0;
    auVar106._8_4_ = (float)CONCAT13(bVar82,CONCAT12(bVar81,CONCAT11(bVar80,bVar79))) * fVar123;
    auVar106._12_4_ = (float)CONCAT13(bVar90,CONCAT12(bVar88,CONCAT11(bVar86,bVar84))) * -0.0;
    auVar144 = NEON_ext(auVar106,auVar106,8,1);
    fVar107 = fVar105 * -0.0;
    fVar115 = fVar112 * -0.0;
    fVar123 = fVar113 * fVar123;
    fVar64 = (fVar120 * (float)((ulong)uVar49 >> 0x20) - fVar110 * (float)((ulong)uVar47 >> 0x20)) *
             -0.0;
    auVar10._4_4_ = fVar115;
    auVar10._0_4_ = fVar107;
    auVar10._8_4_ = fVar123;
    auVar10._12_4_ = fVar64;
    auVar11._4_4_ = fVar115;
    auVar11._0_4_ = fVar107;
    auVar11._8_4_ = fVar123;
    auVar11._12_4_ = fVar64;
    auVar128 = NEON_ext(auVar10,auVar11,8,1);
    uStack_d6 = 0xbf80;
    local_d4 = 0;
    auVar94._12_4_ = auVar137._0_4_ + auVar121._0_4_ + auVar137._4_4_ + auVar121._4_4_;
    auVar94._0_12_ = auVar91;
    fVar64 = auVar144._0_4_ + auVar106._0_4_ + auVar144._4_4_ + auVar106._4_4_;
    uStack_108._4_4_ = 0.0;
    local_f8 = ZEXT816(0);
    fVar107 = auVar128._0_4_ + fVar107 + auVar128._4_4_ + fVar115;
    *(long *)(lVar59 + 200) = auVar94._8_8_;
    *(undefined8 *)(lVar59 + 0xc0) = auVar91._0_8_;
    *(ulong *)(lVar59 + 0xa8) =
         CONCAT17((char)((uint)fVar64 >> 0x18),
                  CONCAT16((char)((uint)fVar64 >> 0x10),
                           CONCAT15((char)((uint)fVar64 >> 8),
                                    CONCAT14(SUB41(fVar64,0),
                                             CONCAT13(bVar82,CONCAT12(bVar81,CONCAT11(bVar80,bVar79)
                                                                     ))))));
    *(ulong *)(lVar59 + 0xa0) =
         CONCAT17(bVar78,CONCAT16(bVar77,CONCAT15(bVar76,CONCAT14(bVar75,CONCAT13(bVar74,CONCAT12(
                                                  bVar72,CONCAT11(bVar70,bVar68)))))));
    *(ulong *)(lVar59 + 0xb8) =
         CONCAT17((char)((uint)fVar107 >> 0x18),
                  CONCAT16((char)((uint)fVar107 >> 0x10),
                           CONCAT15((char)((uint)fVar107 >> 8),CONCAT14(SUB41(fVar107,0),fVar113))))
    ;
    *(ulong *)(lVar59 + 0xb0) =
         CONCAT17((char)((uint)fVar112 >> 0x18),
                  CONCAT16((char)((uint)fVar112 >> 0x10),
                           CONCAT15((char)((uint)fVar112 >> 8),CONCAT14(SUB41(fVar112,0),fVar105))))
    ;
    iVar24 = iVar114;
    local_110 = (undefined **)(ulong)(uint)(local_fc / 1.7777778);
  }
  uStack_108._0_4_ = 0.0;
  local_100 = 0;
  uStack_d7 = 0;
  local_d8 = 0;
  local_dc = 0;
  local_e0 = 0;
  FUN_7100044d60(lVar59 + 0x50,&local_110);
  if (iVar24 == 2) {
    lVar42 = *(long *)(lVar59 + 0x458);
    fVar112 = 1920.0 / *(float *)(lVar42 + 0x28);
    local_110 = (undefined **)CONCAT44(local_110._4_4_,fVar112);
    fVar105 = 1080.0 / *(float *)(lVar42 + 0x2c);
    local_90[0] = (long ***)CONCAT44(local_90[0]._4_4_,fVar105);
    lVar42 = *(long *)(lVar42 + 0x18);
    pppplVar31 = local_90;
    if (fVar112 <= fVar105) {
      pppplVar31 = (long ****)&local_110;
    }
    if (lVar42 != 0) {
      *(ulong *)(lVar42 + 0x48) = CONCAT44(*(undefined4 *)pppplVar31,*(undefined4 *)pppplVar31);
      *(byte *)(lVar42 + 0x58) = *(byte *)(lVar42 + 0x58) | 0x10;
    }
  }
  uVar38 = *(undefined8 *)(lVar59 + 0xb0);
  *(undefined1 *)(lVar59 + 0x2c0) = *(undefined1 *)(lVar59 + 0x654);
  auVar137 = NEON_fmov(0x3f800000,4);
  local_f8._4_4_ = (int)*(undefined8 *)(lVar59 + 0xb8);
  local_f8._0_4_ = (int)*(undefined8 *)(lVar59 + 0xa8);
  uVar65 = *(undefined4 *)((ulong)&local_110 | 4);
  local_100._0_1_ = (undefined1)((ulong)uVar38 >> 0x20);
  *(ulong *)(lVar59 + 0x1f8) = *(ulong *)(lVar59 + 0xc0) & 0xffffffff;
  *(ulong *)(lVar59 + 0x1f0) = CONCAT44(uVar65,(int)*(undefined8 *)(lVar59 + 0xa0));
  *(ulong *)(lVar59 + 0x208) = *(ulong *)(lVar59 + 0xc0) >> 0x20;
  *(ulong *)(lVar59 + 0x200) =
       CONCAT17((char)((ulong)uVar38 >> 0x38),
                CONCAT16((char)((ulong)uVar38 >> 0x30),
                         CONCAT15((char)((ulong)uVar38 >> 0x28),
                                  CONCAT14((undefined1)local_100,
                                           (int)((ulong)*(undefined8 *)(lVar59 + 0xa0) >> 0x20)))));
  *(ulong *)(lVar59 + 0x218) = *(ulong *)(lVar59 + 200) & 0xffffffff;
  *(undefined8 *)(lVar59 + 0x210) = local_f8._0_8_;
  *(int *)(lVar59 + 0x228) = (int)(*(ulong *)(lVar59 + 200) >> 0x20);
  *(int *)(lVar59 + 0x22c) = auVar137._12_4_;
  *(int *)(lVar59 + 0x220) = (int)((ulong)*(undefined8 *)(lVar59 + 0xa8) >> 0x20);
  *(int *)(lVar59 + 0x224) = (int)((ulong)*(undefined8 *)(lVar59 + 0xb8) >> 0x20);
  uVar47 = *(undefined8 *)(lVar59 + 0x78);
  uVar38 = *(undefined8 *)(lVar59 + 0x70);
  uVar49 = *(undefined8 *)(lVar59 + 0x88);
  uStack_108._4_4_ = *(float *)(lVar59 + 0x90);
  uVar65 = *(undefined4 *)(lVar59 + 0x98);
  local_d4 = *(undefined4 *)(lVar59 + 0x9c);
  uVar22 = (undefined4)*(undefined8 *)(lVar59 + 0x60);
  local_110 = (undefined **)CONCAT44((int)uVar38,uVar22);
  uStack_108._0_4_ = (float)*(undefined8 *)(lVar59 + 0x80);
  local_100 = (undefined4)((ulong)*(undefined8 *)(lVar59 + 0x60) >> 0x20);
  local_f8._4_4_ = *(undefined4 *)(lVar59 + 0x94);
  local_f8._0_4_ = (int)((ulong)*(undefined8 *)(lVar59 + 0x80) >> 0x20);
  local_f8._8_4_ = (int)*(undefined8 *)(lVar59 + 0x68);
  local_f8._12_4_ = (int)uVar47;
  pcStack_e8 = (code *)CONCAT44(uVar65,(int)uVar49);
  local_e0 = (undefined4)((ulong)*(undefined8 *)(lVar59 + 0x68) >> 0x20);
  local_dc = (undefined4)((ulong)uVar47 >> 0x20);
  local_d8 = (undefined1)((ulong)uVar49 >> 0x20);
  uStack_d7 = (undefined1)((ulong)uVar49 >> 0x28);
  uStack_d6 = (undefined2)((ulong)uVar49 >> 0x30);
  local_fc._0_1_ = (undefined1)((ulong)uVar38 >> 0x20);
  uVar66 = *(undefined4 *)((ulong)&local_110 | 4);
  auVar21._4_4_ = local_dc;
  auVar21._0_4_ = local_e0;
  auVar21[8] = local_d8;
  auVar21[9] = uStack_d7;
  auVar21._10_2_ = uStack_d6;
  auVar21._12_4_ = local_d4;
  *(ulong *)(lVar59 + 0x238) = CONCAT44(uStack_108._4_4_,(float)uStack_108);
  *(ulong *)(lVar59 + 0x230) = CONCAT44(uVar66,uVar22);
  *(undefined8 *)(lVar59 + 0x248) = local_f8._0_8_;
  *(ulong *)(lVar59 + 0x240) =
       CONCAT17((char)((ulong)uVar38 >> 0x38),
                CONCAT16((char)((ulong)uVar38 >> 0x30),
                         CONCAT15((char)((ulong)uVar38 >> 0x28),CONCAT14(local_fc._0_1_,local_100)))
               );
  *(ulong *)(lVar59 + 600) =
       CONCAT17((char)((uint)uVar65 >> 0x18),
                CONCAT16((char)((uint)uVar65 >> 0x10),
                         CONCAT15((char)((uint)uVar65 >> 8),pcStack_e8._0_5_)));
  *(ulong *)(lVar59 + 0x250) =
       CONCAT17((char)((ulong)uVar47 >> 0x18),
                CONCAT16((char)((ulong)uVar47 >> 0x10),
                         CONCAT15((char)((ulong)uVar47 >> 8),local_f8._8_5_)));
  *(long *)(lVar59 + 0x268) = auVar21._8_8_;
  *(ulong *)(lVar59 + 0x260) = CONCAT44(local_dc,local_e0);
  local_fc = (float)(int)((ulong)uVar38 >> 0x20);
  (**(code **)(**(long **)(lVar59 + 0x450) + 0x18))(*(long **)(lVar59 + 0x450),FUN_71035b9360,0);
  (**(code **)(**(long **)(lVar59 + 0x458) + 0x58))(0);
  plVar26 = *(long **)(*(long *)(lVar59 + 0x458) + 0x18);
  lVar42 = (**(code **)(*plVar26 + 0x60))(plVar26,"touchable_area",1);
  if (lVar42 == 0) goto LAB_7103775cf8;
  fVar64 = *(float *)(lVar42 + 0x30);
  uVar67 = SUB41(fVar64,0);
  uVar69 = (undefined1)((uint)fVar64 >> 8);
  uVar71 = (undefined1)((uint)fVar64 >> 0x10);
  uVar73 = (undefined1)((uint)fVar64 >> 0x18);
  fVar112 = *(float *)(lVar42 + 0x34);
  uVar83 = SUB41(fVar112,0);
  uVar85 = (undefined1)((uint)fVar112 >> 8);
  uVar87 = (undefined1)((uint)fVar112 >> 0x10);
  uVar89 = (undefined1)((uint)fVar112 >> 0x18);
  fVar105 = ABS(*(float *)(lVar42 + 0x50) * *(float *)(lVar42 + 0x48));
  fVar107 = fVar105 * 0.5;
  fVar113 = ABS(*(float *)(lVar42 + 0x54) * *(float *)(lVar42 + 0x4c));
  bVar68 = *(byte *)(lVar42 + 0x5b) & 3;
  if (bVar68 == 2) {
    fVar64 = fVar64 - fVar107;
LAB_7103775c30:
    uVar67 = SUB41(fVar64,0);
    uVar69 = (undefined1)((uint)fVar64 >> 8);
    uVar71 = (undefined1)((uint)fVar64 >> 0x10);
    uVar73 = (undefined1)((uint)fVar64 >> 0x18);
  }
  else if (bVar68 == 1) {
    fVar64 = fVar64 + fVar107;
    goto LAB_7103775c30;
  }
  fVar64 = fVar113 * 0.5;
  bVar68 = *(byte *)(lVar42 + 0x5b) >> 2 & 3;
  if (bVar68 == 2) {
    fVar112 = fVar64 + fVar112;
LAB_7103775c60:
    uVar83 = SUB41(fVar112,0);
    uVar85 = (undefined1)((uint)fVar112 >> 8);
    uVar87 = (undefined1)((uint)fVar112 >> 0x10);
    uVar89 = (undefined1)((uint)fVar112 >> 0x18);
  }
  else if (bVar68 == 1) {
    fVar112 = fVar112 - fVar64;
    goto LAB_7103775c60;
  }
  lVar42 = *(long *)(lVar42 + 0x18);
  if (lVar42 == 0) {
    fVar64 = (float)CONCAT13(uVar89,CONCAT12(uVar87,CONCAT11(uVar85,uVar83)));
    fVar112 = (float)CONCAT13(uVar73,CONCAT12(uVar71,CONCAT11(uVar69,uVar67)));
  }
  else {
    do {
      fVar112 = (float)CONCAT13(uVar73,CONCAT12(uVar71,CONCAT11(uVar69,uVar67))) +
                *(float *)(lVar42 + 0x30);
      fVar64 = (float)CONCAT13(uVar89,CONCAT12(uVar87,CONCAT11(uVar85,uVar83))) +
               *(float *)(lVar42 + 0x34);
      uVar67 = SUB41(fVar112,0);
      uVar69 = (undefined1)((uint)fVar112 >> 8);
      uVar71 = (undefined1)((uint)fVar112 >> 0x10);
      uVar73 = (undefined1)((uint)fVar112 >> 0x18);
      uVar83 = SUB41(fVar64,0);
      uVar85 = (undefined1)((uint)fVar64 >> 8);
      uVar87 = (undefined1)((uint)fVar64 >> 0x10);
      uVar89 = (undefined1)((uint)fVar64 >> 0x18);
      lVar42 = *(long *)(lVar42 + 0x18);
    } while (lVar42 != 0);
  }
  fVar105 = fVar105 * 0.5;
  fVar113 = fVar113 * 0.5;
  *(float *)(lVar59 + 0x620) = (fVar112 + 960.0) - fVar105;
  *(float *)(lVar59 + 0x624) = fVar112 + 960.0 + fVar105;
  *(float *)(lVar59 + 0x628) = (540.0 - fVar64) - fVar113;
  *(float *)(lVar59 + 0x62c) = (540.0 - fVar64) + fVar113;
LAB_7103775cf8:
  *(undefined8 *)(param_1[2] + 8) = 0;
  *(long *)param_1[2] = *param_1;
  *(undefined8 *)(param_1[2] + 8) = *(undefined8 *)(*param_1 + 0x458);
  lVar42 = param_1[2];
  lVar59 = *(long *)(lVar42 + 8);
  if (lVar59 != 0) {
    **(undefined8 **)(lVar42 + 0x18) = 0;
    *(undefined8 *)(*(long *)(lVar42 + 0x18) + 8) = 0;
    *(undefined8 *)(*(long *)(lVar42 + 0x18) + 0x10) = 0;
    *(undefined8 *)(*(long *)(lVar42 + 0x18) + 0x18) = 0;
    **(undefined8 **)(lVar42 + 0x18) = *(undefined8 *)(lVar59 + 0x18);
    plVar26 = FUN_7103772ed0((long *)**(undefined8 **)(lVar42 + 0x18));
    *(long **)(*(long *)(lVar42 + 0x18) + 8) = plVar26;
    plVar26 = FUN_7103772fe0((long *)**(undefined8 **)(lVar42 + 0x18));
    *(long **)(*(long *)(lVar42 + 0x18) + 0x10) = plVar26;
    plVar26 = FUN_71037730f0((long *)**(undefined8 **)(lVar42 + 0x18));
    *(long **)(*(long *)(lVar42 + 0x18) + 0x18) = plVar26;
  }
  return;
}

