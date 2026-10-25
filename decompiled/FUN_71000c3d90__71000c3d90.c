// addr:      71000c3d90
// offset:    0xc3d90
// name:      FUN_71000c3d90
// mangled:   
// signature: undefined FUN_71000c3d90(void)


void FUN_71000c3d90(long *param_1)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  undefined2 *puVar6;
  uint *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ushort uVar13;
  int *piVar14;
  int iVar15;
  ErrorResultVariant *this;
  long *plVar16;
  long lVar17;
  int aiStack_360 [4];
  undefined8 uStack_350;
  undefined4 uStack_348;
  ushort uStack_338;
  int aiStack_330 [4];
  int aiStack_320 [4];
  undefined **ppuStack_310;
  undefined4 auStack_308 [30];
  undefined8 auStack_290 [16];
  undefined8 auStack_210 [16];
  int aiStack_190 [32];
  int aiStack_110 [4];
  int aiStack_100 [4];
  int aiStack_f0 [4];
  int aiStack_e0 [4];
  int aiStack_d0 [4];
  undefined8 auStack_c0 [3];
  ushort uStack_a8;
  int aiStack_a0 [4];
  int aiStack_90 [4];
  int aiStack_80 [4];
  undefined4 auStack_70 [4];
  
  if ((int)param_1[0x21] == 4) {
    if ((int)param_1[0x1b] != 1) {
      return;
    }
    FUN_71000b4260((undefined4 *)(param_1 + 0x1b));
    return;
  }
  FUN_71000bce50(aiStack_190,(int *)((long)param_1 + 0x10c));
  if (aiStack_190[0] != 0) {
    if ((int)param_1[0x1b] != 1) {
      return;
    }
    FUN_71000bce50(aiStack_80,(int *)((long)param_1 + 0x10c));
    lVar8 = -0x70;
LAB_71000c3f04:
    FUN_71000b41f0((undefined4 *)(param_1 + 0x1b),(int *)(&stack0xfffffffffffffff0 + lVar8));
    return;
  }
  uVar4 = FUN_71000c74b0(param_1[0x12]);
  aiStack_90[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_90 | 4));
  aiStack_190[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_90 | 4),(Result *)aiStack_190);
  FUN_71000b9f60(aiStack_190,(int *)param_1[0x13],'\x02',2,0x11);
  FUN_71000bcf30(aiStack_90,aiStack_190);
  if (aiStack_90[0] != 0) {
    aiStack_190[0] = 0xc406;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_190 | 4));
    auStack_210[0]._0_4_ = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_190 | 4),(Result *)auStack_210);
    if (aiStack_90[0] != aiStack_190[0]) {
      aiStack_190[0] = 0x6434;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)aiStack_190 | 4));
      auStack_210[0]._0_4_ = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_190 | 4),(Result *)auStack_210);
      FUN_71000bcf30(aiStack_90,aiStack_190);
    }
    FUN_71000bce50(aiStack_a0,aiStack_90);
    lVar8 = -0x90;
    goto LAB_71000c3f04;
  }
  FUN_71000b1c30(auStack_c0);
  uStack_a8 = uVar4;
  FUN_71000ba0c0(aiStack_190,(int *)param_1[0x13],(ulong)auStack_c0,-1,0);
  FUN_71000bcf30(aiStack_90,aiStack_190);
  if (aiStack_90[0] == 0) {
    FUN_71000bedd0(aiStack_190,param_1[0x14],param_1[0x13]);
    FUN_71000bcf30(aiStack_90,aiStack_190);
    if (aiStack_90[0] == 0) {
      FUN_71000bedd0(aiStack_190,param_1[0x15],param_1[0x13]);
      FUN_71000bcf30(aiStack_90,aiStack_190);
      if (aiStack_90[0] == 0) {
        FUN_71000bed60(aiStack_190,param_1[0x14]);
        FUN_71000bcf30(aiStack_90,aiStack_190);
        if (aiStack_90[0] == 0) {
          FUN_71000bed60(aiStack_190,param_1[0x15]);
          FUN_71000bcf30(aiStack_90,aiStack_190);
          if (aiStack_90[0] == 0) {
            FUN_710015fd60((undefined8 *)aiStack_190);
            puVar6 = (undefined2 *)FUN_71000c74a0(param_1[0x12]);
            if (*(char *)(puVar6 + 0x1e) == '\0') {
              iVar15 = 4;
            }
            else if (*(int *)(puVar6 + 0x14) == 2) {
              iVar15 = 3;
            }
            else if (*(int *)(puVar6 + 0x14) == 1) {
              iVar15 = 1;
              if (*(int *)(puVar6 + 0x16) != 1) {
                iVar15 = 2;
              }
            }
            else {
              iVar15 = 0;
            }
            plVar16 = &DAT_71052af128;
            if (DAT_71052af1d8 == '\0') {
LAB_71000c4188:
              if (*plVar16 == 0) goto LAB_71000c41b0;
              lVar8 = *(long *)(*plVar16 + 0x10);
            }
            else {
              puVar7 = (uint *)FUN_7101717960(DAT_71052af1d0);
              uVar5 = *puVar7;
              if (uVar5 == 0) goto LAB_71000c4188;
              if ((ulong)uVar5 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
                plVar16 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar5 * 8) + 0x10);
                goto LAB_71000c4188;
              }
              FUN_71001b1300("D:\\home\\ead-p2p\\Env\\Lib\\NintendoSDK\\NintendoSDK-NEX\\NintendoSDK-NEX-for_NX-4_6_3-S820-20190417-ja\\NintendoSDK-NEX\\Include\\OnlineCore/src/Core/InstanceTable.h"
                             ,0x47,0xe0000003,0);
LAB_71000c41b0:
              lVar8 = 0;
            }
            lVar9 = FUN_71001ef600(lVar8);
            FUN_710015fd60(auStack_210);
            FUN_710015fd60(auStack_290);
            lVar8 = lVar9 + 0x50;
            lVar9 = *(long *)(lVar9 + 0x58);
            if (lVar8 == lVar9) {
              bVar3 = 0;
            }
            else {
              bVar3 = 0;
              this = (ErrorResultVariant *)((ulong)&uStack_350 | 4);
              do {
                while( true ) {
                  lVar17 = lVar9 + 0x10;
                  lVar10 = FUN_71001f16c0(lVar17);
                  lVar11 = 0;
                  if ((long *)param_1[10] != (long *)0x0) {
                    lVar11 = (**(code **)(*(long *)param_1[10] + 0x18))();
                  }
                  if (lVar10 == lVar11) break;
LAB_71000c43b0:
                  lVar9 = *(long *)(lVar9 + 8);
                  if (lVar8 == lVar9) goto LAB_71000c449c;
                }
                uVar5 = FUN_71001f2e90(lVar17);
                if ((uVar5 >> 1 & 1) == 0) {
                  FUN_71001ece20(param_1[0x2e],lVar17);
                  FUN_71001ece20(param_1[0x2f],lVar17);
                  lVar17 = param_1[0x2f];
                  FUN_71001f2d60(lVar17,(ulong)*(uint *)(puVar6 + 0x14));
                  FUN_71001f2db0(lVar17,(ulong)(*(uint *)(puVar6 + 0x16) & 0xf | iVar15 << 4));
                  uVar13 = uVar4;
                  if (*(int *)(puVar6 + 0x14) == 1) {
                    uVar13 = puVar6[0x10];
                  }
                  FUN_71001e59e0(lVar17,uVar13);
                  FUN_710015fd60(&ppuStack_310);
                  FUN_71000c2890(lVar17,(long)&ppuStack_310);
                  FUN_710015ffc0((long)auStack_290,(long)&ppuStack_310);
                  lVar17 = FUN_7100160220((long)&ppuStack_310);
                  bVar2 = FUN_71000b2850(lVar17);
                  if (!bVar2) {
                    uStack_348 = 0;
                    uStack_350 = 1;
                    FUN_7100160990();
                    FUN_71001e78b0();
                    uStack_350 = CONCAT44(uStack_350._4_4_,0x6434);
                    nn::err::ErrorResultVariant::ErrorResultVariant(this);
                    auStack_70[0] = 0;
                    nn::err::ErrorResultVariant::operator=(this,(Result *)auStack_70);
                    FUN_71000bce50(aiStack_330,(int *)&uStack_350);
                    piVar14 = aiStack_330;
                    goto LAB_71000c4758;
                  }
                  lVar17 = FUN_7100160220((long)&ppuStack_310);
                  FUN_71000b1c60(&uStack_350,lVar17);
                  uStack_338 = uVar4;
                  if (*(int *)(puVar6 + 0x14) == 1) {
                    uStack_338 = puVar6[0x10];
                  }
                  FUN_7100160450((long)aiStack_190,(long)&uStack_350);
                  FUN_71000b1cf0();
                  FUN_710015ff20(&ppuStack_310);
                  bVar3 = 1;
                  goto LAB_71000c43b0;
                }
                FUN_710015fd60(&ppuStack_310);
                FUN_71000c2890(lVar17,(long)&ppuStack_310);
                FUN_710015ffc0((long)auStack_210,(long)&ppuStack_310);
                lVar11 = FUN_7100160210((long)&ppuStack_310);
                bVar2 = FUN_71000b2850(lVar11);
                if (!bVar2) {
                  uStack_348 = 0;
                  uStack_350 = 1;
                  FUN_7100160990();
                  FUN_71001e78b0();
                  uStack_350 = CONCAT44(uStack_350._4_4_,0x6434);
                  nn::err::ErrorResultVariant::ErrorResultVariant(this);
                  auStack_70[0] = 0;
                  nn::err::ErrorResultVariant::operator=(this,(Result *)auStack_70);
                  FUN_71000bce50(aiStack_320,(int *)&uStack_350);
                  piVar14 = aiStack_320;
LAB_71000c4758:
                  FUN_71000b41f0((undefined4 *)(param_1 + 0x1b),piVar14);
                  FUN_710015ff20(&ppuStack_310);
                  goto LAB_71000c46e4;
                }
                lVar11 = FUN_7100160220((long)aiStack_190);
                FUN_71000b1cb0((long)auStack_c0,lVar11);
                FUN_710015ffc0((long)aiStack_190,(long)&ppuStack_310);
                FUN_7100160450((long)aiStack_190,(long)auStack_c0);
                FUN_71001604a0((long)aiStack_190,(byte)*(undefined4 *)(puVar6 + 0x14));
                FUN_71001604c0((long)aiStack_190,(byte)*(undefined4 *)(puVar6 + 0x16));
                FUN_71001604d0((long)aiStack_190,(char)iVar15);
                bVar2 = FUN_7100160360((long)aiStack_190);
                if (bVar2) {
                  lVar8 = FUN_7100160210((long)aiStack_190);
                  FUN_71000b1cb0((long)auStack_c0,lVar8);
                  uStack_a8 = uVar4;
                  FUN_7100160440((long)aiStack_190,(long)auStack_c0);
                  FUN_71001ece20(param_1[0x2e],lVar17);
                  FUN_71001ece20(param_1[0x2f],lVar17);
                  lVar8 = param_1[0x2f];
                  FUN_71001f2d60(lVar8,(ulong)*(uint *)(puVar6 + 0x14));
                  FUN_71001f2db0(lVar8,(ulong)(*(uint *)(puVar6 + 0x16) & 0xf | iVar15 << 4));
                  FUN_71001e59e0(lVar8,uVar4);
                  FUN_710015ff20(&ppuStack_310);
                  bVar3 = 1;
                  break;
                }
                FUN_710015ff20(&ppuStack_310);
                lVar9 = *(long *)(lVar9 + 8);
              } while (lVar8 != lVar9);
            }
LAB_71000c449c:
            FUN_7100160470((long)aiStack_190,
                           *(undefined8 *)
                            (*(long *)(*(long *)(DAT_71052acd90 + 0x68) + 0x10) + 0x10));
            uVar5 = FUN_7100162470(DAT_71052add68);
            FUN_7100160480((long)aiStack_190,uVar5);
            FUN_71001f2d30(param_1[0x2f],(ulong)uVar5);
            lVar8 = FUN_7100161fb0(DAT_71052add68);
            FUN_7100160ae0(lVar8,(long)aiStack_190);
            FUN_71000c73d0(param_1[0x12],(long)aiStack_190);
            plVar16 = (long *)param_1[10];
            if (((plVar16 != (long *)0x0) && (*(int *)(param_1[0x30] + 0x14) != 1)) &&
               (!(bool)(bVar3 ^ 1))) {
              FUN_71001d1590((long *)param_1[0x30]);
              lVar8 = param_1[0x30];
              FUN_71001b74f0((long *)&ppuStack_310,30000);
              *(undefined ***)(lVar8 + 0x88) = ppuStack_310;
              ppuStack_310 = (undefined **)0x0;
              FUN_71001d1960(param_1[0x30],0x71000c4cb0,(long *)&ppuStack_310,1);
              (**(code **)(*plVar16 + 0x30))(plVar16,param_1[0x30],param_1[0x2e],param_1[0x2f]);
            }
            bVar3 = FUN_71001602f0((long)aiStack_190);
            cVar1 = *(char *)((long)puVar6 + 0x3d);
            uVar12 = (**(code **)(*param_1 + 0x58))(param_1);
            if ((uVar12 & 1) != 0) {
              DAT_71052ac5f0 = bVar3;
              if (cVar1 != '\0') {
                DAT_71052ac5f0 = bVar3 | 0x40;
              }
              DAT_71052ac5ec = (undefined1)*(undefined4 *)(puVar6 + 0x14);
              DAT_71052ac5ed = (undefined1)*(undefined4 *)(puVar6 + 0x16);
              DAT_71052ac5ee = (undefined2)*(undefined4 *)(puVar6 + 0x18);
              DAT_71052ac5fc = puVar6[0x10];
              DAT_71052ac5fe = *puVar6;
              FUN_71000b1c60(&uStack_350,(long)(puVar6 + 4));
              auStack_70[0] = 0;
              FUN_71000b3880((ulong)&uStack_350);
              FUN_71000b1da0((int *)&ppuStack_310,(ulong)&uStack_350,auStack_70);
              DAT_71052ac5f4 = auStack_70[0];
              FUN_7100160230(&ppuStack_310,(long)auStack_290);
              FUN_71000b1cb0((long)&uStack_350,(long)auStack_308);
              ppuStack_310 = &PTR_FUN_7104f4a808;
              FUN_71000b1cf0();
              FUN_71000b3880((ulong)&uStack_350);
              FUN_71000b1da0((int *)&ppuStack_310,(ulong)&uStack_350,auStack_70);
              DAT_71052ac5f8 = auStack_70[0];
              DAT_71052ac634 = *(undefined4 *)(DAT_71052acd90 + 8);
              FUN_71000b1cf0();
            }
            auStack_308[0] = 0;
            ppuStack_310 = (undefined **)0x1000;
            FUN_7100160990();
            *(undefined1 *)((long)param_1 + 0xb1) = 1;
            *(undefined1 *)(param_1 + 0x31) = 0;
            ppuStack_310 = (undefined **)((ulong)ppuStack_310 & 0xffffffff00000000);
            nn::err::ErrorResultVariant::ErrorResultVariant
                      ((ErrorResultVariant *)((ulong)&ppuStack_310 | 4));
            uStack_350 = (ulong)uStack_350._4_4_ << 0x20;
            nn::err::ErrorResultVariant::operator=
                      ((ErrorResultVariant *)((ulong)&ppuStack_310 | 4),(Result *)&uStack_350);
            FUN_71000bce50(aiStack_360,(int *)&ppuStack_310);
            FUN_71000b4180((undefined4 *)(param_1 + 0x1b),aiStack_360);
            FUN_710015ffc0((long)(param_1 + 0x32),(long)aiStack_190);
LAB_71000c46e4:
            FUN_710015ff20(auStack_290);
            FUN_710015ff20(auStack_210);
            FUN_710015ff20((undefined8 *)aiStack_190);
            goto LAB_71000c40b4;
          }
          FUN_71000bce50(aiStack_110,aiStack_90);
          piVar14 = aiStack_110;
        }
        else {
          FUN_71000bce50(aiStack_100,aiStack_90);
          piVar14 = aiStack_100;
        }
      }
      else {
        FUN_71000bce50(aiStack_f0,aiStack_90);
        piVar14 = aiStack_f0;
      }
    }
    else {
      FUN_71000bce50(aiStack_e0,aiStack_90);
      piVar14 = aiStack_e0;
    }
  }
  else {
    aiStack_190[0] = 0xc406;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_190 | 4));
    auStack_210[0]._0_4_ = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)aiStack_190 | 4),(Result *)auStack_210);
    if (aiStack_90[0] != aiStack_190[0]) {
      aiStack_190[0] = 0x6434;
      nn::err::ErrorResultVariant::ErrorResultVariant
                ((ErrorResultVariant *)((ulong)aiStack_190 | 4));
      auStack_210[0]._0_4_ = 0;
      nn::err::ErrorResultVariant::operator=
                ((ErrorResultVariant *)((ulong)aiStack_190 | 4),(Result *)auStack_210);
      FUN_71000bcf30(aiStack_90,aiStack_190);
    }
    FUN_71000bce50(aiStack_d0,aiStack_90);
    piVar14 = aiStack_d0;
  }
  FUN_71000b41f0((undefined4 *)(param_1 + 0x1b),piVar14);
LAB_71000c40b4:
  FUN_71000b1cf0();
  return;
}

