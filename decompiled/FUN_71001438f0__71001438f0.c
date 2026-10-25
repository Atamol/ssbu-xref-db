// addr:      71001438f0
// offset:    0x1438f0
// name:      FUN_71001438f0
// mangled:   
// signature: ulong __cdecl FUN_71001438f0(long * param_1)


ulong FUN_71001438f0(long *param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined4 *puVar12;
  ErrorResultVariant *this;
  int aiStack_68 [4];
  int aiStack_58 [4];
  ulong local_48 [2];
  undefined4 local_38 [2];
  
  if ((param_1[0xb] == 0) || (*(char *)(param_1[0xb] + 0x28) == '\0')) {
    if ((*(char *)((long)param_1 + 0x7f) == '\0') &&
       (((char)param_1[0x10] == '\0' && (*(char *)((long)param_1 + 0x7d) == '\0')))) {
      bVar1 = FUN_71001921a0(DAT_71052adfc0);
      if (((bVar1 & 1) == 0) ||
         ((bVar1 = FUN_7100193320(DAT_71052adfc0), (bVar1 & 1) == 0 &&
          (bVar2 = FUN_7100193740(DAT_71052adfc0), !bVar2)))) {
        iVar3 = FUN_7100193770(DAT_71052adfc0);
        if (iVar3 == 0) {
          local_48[0] = CONCAT44(local_48[0]._4_4_,0x6439);
          nn::err::ErrorResultVariant::ErrorResultVariant
                    ((ErrorResultVariant *)((ulong)local_48 | 4));
          local_38[0] = 0;
          nn::err::ErrorResultVariant::operator=
                    ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_38);
          FUN_71000bcf30((int *)((long)param_1 + 0x6c),(int *)local_48);
          (**(code **)(**(long **)(DAT_71052adb38 + 8) + 0x28))();
          uVar10 = (**(code **)(*param_1 + 0x88))(param_1);
          uVar8 = uVar10 & 0xffff0000;
          uVar9 = uVar10 & 0xff00;
          uVar10 = uVar10 & 0xff;
        }
        else {
          *(undefined1 *)((long)param_1 + 0x69) = 1;
          lVar11 = DAT_71052adb38;
          *(undefined4 *)(DAT_71052adb38 + 0xd4) = 2;
          lVar6 = FUN_7100193a50(DAT_71052adfc0);
          FUN_71001aea30(lVar6,(uint)*(ushort *)
                                      (lVar11 + (ulong)*(byte *)(lVar11 + 0x162) * 2 + 0x15e));
          this = (ErrorResultVariant *)((ulong)local_48 | 4);
          local_48[0]._0_4_ = 0;
          nn::err::ErrorResultVariant::ErrorResultVariant(this);
          local_38[0] = 0;
          nn::err::ErrorResultVariant::operator=(this,(Result *)local_38);
          FUN_71000bce50(aiStack_58,(int *)local_48);
          FUN_7100147420(lVar11,1,0,aiStack_58);
          uVar4 = FUN_7100147ce0(lVar11);
          if ((uVar4 & 1) == 0) {
            local_48[0] = CONCAT44(local_48[0]._4_4_,0x6439);
            nn::err::ErrorResultVariant::ErrorResultVariant(this);
            local_38[0] = 0;
            nn::err::ErrorResultVariant::operator=(this,(Result *)local_38);
            FUN_71000bcf30((int *)((long)param_1 + 0x6c),(int *)local_48);
            uVar5 = FUN_7100146fd0();
            DAT_71052ac6d7 = (undefined1)uVar5;
            uVar8 = 0;
            uVar9 = 0;
            param_1[6] = (long)FUN_7100143750;
            param_1[7] = 0;
            param_1[8] = (long)"RandomMatchmakeJob::LeaveMesh";
            uVar10 = 5;
          }
          else {
            *(undefined1 *)(lVar11 + 0x15d) = 0;
            FUN_7100150b70(*(long **)(lVar11 + 0xb8));
            FUN_71001509c0(*(long *)(lVar11 + 0xb8));
            local_48[0] = 0;
            FUN_71000bb5d0(local_48);
            lVar11 = local_48[0] - param_1[0x28];
            plVar7 = FUN_71000bb680();
            uVar4 = 0;
            if (*plVar7 != 0) {
              uVar4 = (uint)(lVar11 / *plVar7);
            }
            if (uVar4 < 0xf4241) {
              DAT_71052ac6c4 = uVar4;
            }
            DAT_71052ac6d7 = 0xff;
            if ((char)param_1[0xd] == '\0') {
              local_48[0] = local_48[0] & 0xffffffff00000000;
              nn::err::ErrorResultVariant::ErrorResultVariant
                        ((ErrorResultVariant *)((ulong)local_48 | 4));
              local_38[0] = 0;
              nn::err::ErrorResultVariant::operator=
                        ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_38);
              DAT_71052ac6c0 = (undefined4)local_48[0];
            }
            else {
              DAT_71052ac6c0 = 0xffffffff;
            }
            DAT_71052ac6d0 = 0xffffffff;
            FUN_7100193380(DAT_71052adfc0,0);
            FUN_7100193330(DAT_71052adfc0,0);
            *(undefined4 *)(param_1 + 0xc) = 9;
            puVar12 = (undefined4 *)param_1[0xb];
            local_48[0] = local_48[0] & 0xffffffff00000000;
            nn::err::ErrorResultVariant::ErrorResultVariant
                      ((ErrorResultVariant *)((ulong)local_48 | 4));
            local_38[0] = 0;
            nn::err::ErrorResultVariant::operator=
                      ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_38);
            FUN_71000bce50(aiStack_68,(int *)local_48);
            FUN_71000b4180(puVar12,aiStack_68);
            uVar8 = 0;
            uVar9 = 0;
            uVar10 = 1;
            param_1[0xb] = 0;
          }
        }
        goto LAB_7100143990;
      }
    }
    uVar5 = 0x6439;
  }
  else {
    uVar5 = 0x6c05;
  }
  local_48[0] = CONCAT44(local_48[0]._4_4_,uVar5);
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_48 | 4));
  local_38[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)local_48 | 4),(Result *)local_38);
  FUN_71000bcf30((int *)((long)param_1 + 0x6c),(int *)local_48);
  uVar10 = 0;
  param_1[6] = (long)FUN_7100143750;
  param_1[7] = 0;
  uVar8 = 0;
  uVar9 = 0;
  param_1[8] = (long)"RandomMatchmakeJob::LeaveMesh";
LAB_7100143990:
  return uVar8 | uVar10 | uVar9;
}

