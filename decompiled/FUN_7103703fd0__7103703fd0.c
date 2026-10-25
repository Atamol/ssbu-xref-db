// addr:      7103703fd0
// offset:    0x3703fd0
// name:      FUN_7103703fd0
// mangled:   
// signature: undefined __cdecl FUN_7103703fd0(long param_1, char param_2, ulong param_3)


void FUN_7103703fd0(long param_1,char param_2,ulong param_3)

{
  ulong uVar1;
  char cVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  uint *puVar9;
  long lVar10;
  int local_8b8 [396];
  int aiStack_288 [4];
  undefined8 auStack_278 [64];
  uint local_78 [6];
  
  lVar10 = DAT_71052adb38;
  if (((((param_2 == '\x02') && ((param_3 & 1) != 0)) && (*(char *)(param_1 + 0x289) != '\0')) &&
      ((DAT_71052adb38 != 0 && (iVar5 = FUN_7100146ba0(DAT_71052adb38), iVar5 == 1)))) &&
     (*(int *)(param_1 + 0x2c) == 0)) {
    if (*(long *)(param_1 + 0x2b0) != 0) {
      lVar7 = nn::os::GetSystemTick();
      uVar8 = nn::os::ConvertToTimeSpan(lVar7 - DAT_71074470e8);
      uVar1 = ((long)uVar8 >> 0x20) * 0xe353f7cf + ((uVar8 & 0xffffffff) * 0xe353f7cf >> 0x20);
      if ((((long)(((long)uVar8 >> 0x20) * 0x20c49ba5 + ((long)uVar1 >> 0x20) +
                  ((uVar8 & 0xffffffff) * 0x20c49ba5 + (uVar1 & 0xffffffff) >> 0x20)) >> 7) -
          ((long)uVar8 >> 0x3f)) * 1000 - *(long *)(param_1 + 0x2b0) < 3500000000) {
        return;
      }
    }
    local_78[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_78 | 4));
    local_8b8[0] = 0;
    nn::err::ErrorResultVariant::operator=
              ((ErrorResultVariant *)((ulong)local_78 | 4),(Result *)local_8b8);
    memset(auStack_278,0,0x200);
    std::recursive_mutex::lock();
    uVar3 = *(byte *)(param_1 + 0x14) - 1;
    uVar6 = 0;
    if (uVar3 < 3) {
      uVar6 = *(uint *)(&DAT_7104742d78 + (long)(char)uVar3 * 4);
    }
    uVar6 = FUN_7103703c10(param_1 + 400,auStack_278,0x200,uVar6);
    if (*(ushort *)(param_1 + 0x1ac) < 2) {
      *(undefined1 *)(param_1 + 0x289) = 0;
    }
    std::recursive_mutex::unlock();
    cVar2 = *(char *)(param_1 + 0x14);
    if (cVar2 == '\x03') {
      FUN_7100130550((undefined8 *)local_8b8);
      if (uVar6 != 0) {
        FUN_7100130670(aiStack_288,(long)local_8b8,auStack_278,uVar6);
        FUN_71000bcf30((int *)local_78,aiStack_288);
      }
      FUN_7100146a30(aiStack_288,lVar10,local_8b8);
      FUN_71000bcf30((int *)local_78,aiStack_288);
      FUN_71001305b0();
    }
    else if (cVar2 == '\x02') {
      FUN_71001152f0((undefined8 *)local_8b8);
      if (uVar6 != 0) {
        FUN_7100116380(aiStack_288,(long)local_8b8,auStack_278,uVar6);
        FUN_71000bcf30((int *)local_78,aiStack_288);
      }
      FUN_7100146a30(aiStack_288,lVar10,local_8b8);
      FUN_71000bcf30((int *)local_78,aiStack_288);
      FUN_71001156e0((undefined8 *)local_8b8);
    }
    else if (cVar2 == '\x01') {
      FUN_71001723b0((undefined8 *)local_8b8);
      if (uVar6 != 0) {
        FUN_7100172460(aiStack_288,(long)local_8b8,auStack_278,uVar6);
        FUN_71000bcf30((int *)local_78,aiStack_288);
      }
      FUN_7100146a30(aiStack_288,lVar10,local_8b8);
      FUN_71000bcf30((int *)local_78,aiStack_288);
      thunk_FUN_7100186520();
    }
    if (local_78[0] == 0) {
      bVar4 = FUN_7100146a90(lVar10);
      while (!bVar4) {
        if (*(char *)(param_1 + 0x14) == '\x02') {
          lVar7 = DAT_71052af138;
          if (DAT_71052af1d8 != '\0') {
            puVar9 = (uint *)FUN_7101717960(DAT_71052af1d0);
            uVar6 = *puVar9;
            lVar7 = DAT_71052af138;
            if (uVar6 != 0) {
              if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar6) {
                FUN_71001b1300("C:/c2/nintendo/NintendoSDK-NXAddon/NintendoSDK/../NintendoSDK-NEX/include\\OnlineCore/src/Core/InstanceTable.h"
                               ,0x47,0xe0000003,0);
                goto joined_r0x007103704318;
              }
              lVar7 = *(long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar6 * 8) + 0x20);
            }
          }
          if (((lVar7 != 0) && (*(long *)(lVar7 + 0x10) != 0)) &&
             (lVar7 = *(long *)(*(long *)(lVar7 + 0x10) + 0x10), lVar7 != 0)) {
            FUN_71001d9090(lVar7,-1,0);
          }
        }
joined_r0x007103704318:
        if (DAT_71052ac580 != (long *)0x0) {
          FUN_71000b68a0(DAT_71052ac580,0);
        }
        bVar4 = FUN_7100146a90(lVar10);
      }
      FUN_7100146ac0(local_8b8,lVar10);
      FUN_71000bcf30((int *)local_78,local_8b8);
      if (local_78[0] == 0) {
        if (*(char *)(param_1 + 0x288) != '\0') {
          lVar10 = nn::os::GetSystemTick();
          uVar8 = nn::os::ConvertToTimeSpan(lVar10 - DAT_71074470e8);
          uVar1 = ((long)uVar8 >> 0x20) * 0xe353f7cf + ((uVar8 & 0xffffffff) * 0xe353f7cf >> 0x20);
          *(long *)(param_1 + 0x2b0) =
               (((long)(((long)uVar8 >> 0x20) * 0x20c49ba5 + ((long)uVar1 >> 0x20) +
                       ((uVar8 & 0xffffffff) * 0x20c49ba5 + (uVar1 & 0xffffffff) >> 0x20)) >> 7) -
               ((long)uVar8 >> 0x3f)) * 1000;
          return;
        }
        *(undefined1 *)(param_1 + 0x289) = 0;
        return;
      }
    }
    nex_error_info_init(local_8b8,local_78,1);
    *(undefined1 *)(param_1 + 0x289) = 0;
    *(undefined8 *)(param_1 + 0x2b0) = 0;
  }
  return;
}

