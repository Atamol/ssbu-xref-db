// addr:      710010d570
// offset:    0x10d570
// name:      FUN_710010d570
// mangled:   
// signature: undefined FUN_710010d570(void)


void FUN_710010d570(int *param_1,long param_2,int param_3,long param_4,long *param_5,byte param_6)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  ulong uVar6;
  char *pcVar7;
  code *pcVar8;
  int aiStack_50 [4];
  undefined4 auStack_38 [2];
  
  if (((param_3 != 0) && (param_4 != 0)) && (param_5 != (long *)0x0)) {
    *(long *)(param_2 + 0x98) = param_4;
    *(byte *)(param_2 + 0x2c4) = param_6 & 1;
    uVar6 = FUN_71001162a0(param_5);
    if (((uVar6 & 1) != 0) || (*(char *)(param_2 + 0x2c4) != '\0')) {
      uVar3 = FUN_7100116180(param_5);
      if (((uVar3 & 1) == 0) || (*(char *)(param_2 + 0x2c4) != '\0')) {
        uVar3 = FUN_7100116250(param_5);
        if (((uVar3 & 1) == 0) || (*(char *)(param_2 + 0x2c4) != '\0')) {
          bVar1 = FUN_71001161c0(param_5);
          if (bVar1) {
            if (*(char *)(param_2 + 0x2c4) == '\0') {
              uVar4 = FUN_71001159f0((long)param_5,0);
              *(undefined4 *)(param_2 + 0xa0) = uVar4;
              bVar2 = FUN_71001159e0((long)param_5,0);
              *(byte *)(param_2 + 0xb8) = bVar2 & 1;
              uVar4 = FUN_71001159f0((long)param_5,1);
              *(undefined4 *)(param_2 + 0xa4) = uVar4;
              bVar2 = FUN_71001159e0((long)param_5,1);
              *(byte *)(param_2 + 0xb9) = bVar2 & 1;
              uVar4 = FUN_71001159f0((long)param_5,2);
              *(undefined4 *)(param_2 + 0xa8) = uVar4;
              bVar2 = FUN_71001159e0((long)param_5,2);
              *(byte *)(param_2 + 0xba) = bVar2 & 1;
              uVar4 = FUN_71001159f0((long)param_5,3);
              *(undefined4 *)(param_2 + 0xac) = uVar4;
              bVar2 = FUN_71001159e0((long)param_5,3);
              *(byte *)(param_2 + 0xbb) = bVar2 & 1;
              uVar4 = FUN_71001159f0((long)param_5,4);
              *(undefined4 *)(param_2 + 0xb0) = uVar4;
              bVar2 = FUN_71001159e0((long)param_5,4);
              *(byte *)(param_2 + 0xbc) = bVar2 & 1;
              uVar4 = FUN_71001159f0((long)param_5,5);
              *(undefined4 *)(param_2 + 0xb4) = uVar4;
              bVar2 = FUN_71001159e0((long)param_5,5);
              *(byte *)(param_2 + 0xbd) = bVar2 & 1;
              pcVar8 = FUN_710010dce0;
              pcVar7 = "NexMatchUpdateSessionSettingJob::ModifyAttribute";
              goto LAB_710010d89c;
            }
LAB_710010d744:
            uVar6 = (ulong)*(byte *)(DAT_71052adb38 + 0x162);
            if (*(int *)(DAT_71052adb38 + uVar6 * 4 + 0x180) == param_3) {
              iVar5 = FUN_7100146ba0(DAT_71052adb38);
              if (iVar5 == 1) {
                uVar6 = (ulong)*(byte *)(DAT_71052adb38 + 0x162);
                goto LAB_710010d778;
              }
            }
            else {
LAB_710010d778:
              if ((*(int *)(DAT_71052adb38 + (ulong)((int)uVar6 == 0) * 4 + 0x180) != param_3) ||
                 (iVar5 = FUN_7100146ba0(DAT_71052adb38), iVar5 == 3)) goto LAB_710010d79c;
            }
            aiStack_50[0] = 0x10c08;
            goto LAB_710010d704;
          }
          if (*(char *)(param_2 + 0x2c4) != '\0') goto LAB_710010d744;
LAB_710010d79c:
          FUN_71000e4ac0(aiStack_50,*(long *)(param_2 + 0x98),(long)param_5,
                         *(byte *)(param_2 + 0x2c4));
          pcVar8 = FUN_710010df90;
          pcVar7 = "NexMatchUpdateSessionSettingJob::UpdateSessionSetting";
        }
        else {
          uVar4 = FUN_71001159f0((long)param_5,0);
          *(undefined4 *)(param_2 + 0xa0) = uVar4;
          uVar4 = FUN_71001159f0((long)param_5,1);
          *(undefined4 *)(param_2 + 0xa4) = uVar4;
          uVar4 = FUN_71001159f0((long)param_5,2);
          *(undefined4 *)(param_2 + 0xa8) = uVar4;
          uVar4 = FUN_71001159f0((long)param_5,3);
          *(undefined4 *)(param_2 + 0xac) = uVar4;
          uVar4 = FUN_71001159f0((long)param_5,4);
          *(undefined4 *)(param_2 + 0xb0) = uVar4;
          uVar4 = FUN_71001159f0((long)param_5,5);
          *(undefined4 *)(param_2 + 0xb4) = uVar4;
          pcVar8 = FUN_710010dad0;
          pcVar7 = "NexMatchUpdateSessionSettingJob::UpdateAttributes";
        }
      }
      else {
        memset((void *)(param_2 + 0xbe),0,0x200);
        (**(code **)(*param_5 + 0x18))(aiStack_50,param_5,(void *)(param_2 + 0xbe),0x200);
        uVar4 = (**(code **)(*param_5 + 0x20))(param_5);
        *(undefined4 *)(param_2 + 0x2c0) = uVar4;
        pcVar8 = FUN_710010d8c0;
        pcVar7 = "NexMatchUpdateSessionSettingJob::UpdateApplicationData";
      }
LAB_710010d89c:
      *(char **)(param_2 + 0x40) = pcVar7;
      *(code **)(param_2 + 0x30) = pcVar8;
      *(undefined8 *)(param_2 + 0x38) = 0;
      aiStack_50[0] = 0;
      goto LAB_710010d704;
    }
  }
  aiStack_50[0] = 0x10c07;
LAB_710010d704:
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_50 | 4));
  auStack_38[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_50 | 4),(Result *)auStack_38);
  FUN_71000bce50(param_1,aiStack_50);
  return;
}

