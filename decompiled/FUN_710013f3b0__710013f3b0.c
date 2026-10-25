// addr:      710013f3b0
// offset:    0x13f3b0
// name:      FUN_710013f3b0
// mangled:   
// signature: undefined FUN_710013f3b0(void)


ulong FUN_710013f3b0(long *param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ErrorResultVariant *this;
  undefined4 *puVar11;
  long lVar12;
  int aiStack_70 [4];
  int aiStack_60 [4];
  undefined8 uStack_50;
  undefined4 auStack_38 [2];
  
  uVar6 = (**(code **)(*param_1 + 0x48))();
  if ((uVar6 & 1) == 0) {
    if (((*(char *)((long)param_1 + 0x11c) == '\0') && (*(char *)((long)param_1 + 0x11d) == '\0'))
       && (*(char *)((long)param_1 + 0x11a) == '\0')) {
      bVar1 = FUN_71001921a0(DAT_71052adfc0);
      if (((bVar1 & 1) == 0) ||
         ((bVar1 = FUN_7100193320(DAT_71052adfc0), (bVar1 & 1) == 0 &&
          (bVar2 = FUN_7100193740(DAT_71052adfc0), !bVar2)))) {
        iVar3 = FUN_7100193770(DAT_71052adfc0);
        if (iVar3 == 0) {
          uStack_50 = CONCAT44(uStack_50._4_4_,0x6439);
          nn::err::ErrorResultVariant::ErrorResultVariant
                    ((ErrorResultVariant *)((ulong)&uStack_50 | 4));
          auStack_38[0] = 0;
          nn::err::ErrorResultVariant::operator=
                    ((ErrorResultVariant *)((ulong)&uStack_50 | 4),(Result *)auStack_38);
          FUN_71000bcf30((int *)(param_1 + 0x24),(int *)&uStack_50);
          uVar6 = (**(code **)(*param_1 + 0x80))(param_1);
          uVar9 = uVar6 & 0xffff0000;
          uVar10 = uVar6 & 0xff00;
          uVar6 = uVar6 & 0xff;
        }
        else {
          *(undefined1 *)(param_1 + 0x23) = 1;
          lVar12 = DAT_71052adb38;
          *(undefined4 *)(DAT_71052adb38 + 0xd4) = 2;
          lVar7 = FUN_7100193a50(DAT_71052adfc0);
          FUN_71001aea30(lVar7,(uint)*(ushort *)
                                      (lVar12 + (ulong)*(byte *)(lVar12 + 0x162) * 2 + 0x15e));
          this = (ErrorResultVariant *)((ulong)&uStack_50 | 4);
          uStack_50._0_4_ = 0;
          nn::err::ErrorResultVariant::ErrorResultVariant(this);
          auStack_38[0] = 0;
          nn::err::ErrorResultVariant::operator=(this,(Result *)auStack_38);
          FUN_71000bce50(aiStack_60,(int *)&uStack_50);
          FUN_7100147420(lVar12,1,0,aiStack_60);
          uVar4 = FUN_7100147ce0(lVar12);
          if ((uVar4 & 1) == 0) {
            uStack_50 = CONCAT44(uStack_50._4_4_,0x6439);
            nn::err::ErrorResultVariant::ErrorResultVariant(this);
            auStack_38[0] = 0;
            nn::err::ErrorResultVariant::operator=(this,(Result *)auStack_38);
            FUN_71000bcf30((int *)(param_1 + 0x24),(int *)&uStack_50);
            uVar5 = FUN_7100146fd0();
            DAT_71052ac6d7 = (undefined1)uVar5;
            uVar9 = 0;
            uVar10 = 0;
            param_1[6] = (long)FUN_710013f090;
            param_1[7] = 0;
            param_1[8] = (long)"JoinSessionJob::LeaveMesh";
            uVar6 = 5;
          }
          else {
            *(undefined1 *)(lVar12 + 0x15d) = 0;
            FUN_7100150b70(*(long **)(lVar12 + 0xb8));
            FUN_71001509c0(*(long *)(lVar12 + 0xb8));
            puVar11 = (undefined4 *)param_1[0xb];
            uStack_50 = (ulong)uStack_50._4_4_ << 0x20;
            nn::err::ErrorResultVariant::ErrorResultVariant(this);
            auStack_38[0] = 0;
            nn::err::ErrorResultVariant::operator=(this,(Result *)auStack_38);
            FUN_71000bce50(aiStack_70,(int *)&uStack_50);
            FUN_71000b4180(puVar11,aiStack_70);
            param_1[0xb] = 0;
            uStack_50 = 0;
            FUN_71000bb5d0(&uStack_50);
            lVar12 = uStack_50 - param_1[0x26];
            plVar8 = FUN_71000bb680();
            uVar4 = 0;
            if (*plVar8 != 0) {
              uVar4 = (uint)(lVar12 / *plVar8);
            }
            if (uVar4 < 0xf4241) {
              DAT_71052ac6c4 = uVar4;
            }
            DAT_71052ac6d7 = 0xff;
            uStack_50 = uStack_50 & 0xffffffff00000000;
            nn::err::ErrorResultVariant::ErrorResultVariant
                      ((ErrorResultVariant *)((ulong)&uStack_50 | 4));
            auStack_38[0] = 0;
            nn::err::ErrorResultVariant::operator=
                      ((ErrorResultVariant *)((ulong)&uStack_50 | 4),(Result *)auStack_38);
            DAT_71052ac6c0 = (int)uStack_50;
            DAT_71052ac6d0 = 0xffffffff;
            *(undefined4 *)(param_1 + 0x22) = 9;
            FUN_7100193380(DAT_71052adfc0,0);
            FUN_7100193330(DAT_71052adfc0,0);
            uVar9 = 0;
            uVar10 = 0;
            uVar6 = 1;
          }
        }
        goto LAB_710013f454;
      }
    }
    uVar5 = 0x6439;
  }
  else {
    uVar5 = 0x6c05;
  }
  uStack_50 = CONCAT44(uStack_50._4_4_,uVar5);
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)&uStack_50 | 4));
  auStack_38[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)&uStack_50 | 4),(Result *)auStack_38);
  FUN_71000bcf30((int *)(param_1 + 0x24),(int *)&uStack_50);
  uVar6 = 0;
  param_1[6] = (long)FUN_710013f090;
  param_1[7] = 0;
  uVar9 = 0;
  uVar10 = 0;
  param_1[8] = (long)"JoinSessionJob::LeaveMesh";
LAB_710013f454:
  return uVar9 | uVar6 | uVar10;
}

