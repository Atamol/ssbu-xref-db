// addr:      71000c36e0
// offset:    0xc36e0
// name:      FUN_71000c36e0
// mangled:   
// signature: undefined __cdecl FUN_71000c36e0(int * param_1, long param_2)


void FUN_71000c36e0(int *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  uint *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  int local_58 [4];
  undefined4 local_48 [2];
  
  plVar5 = *(long **)(param_2 + 0x50);
  if ((((plVar5 != (long *)0x0) && (*(int *)(param_2 + 8) != 0)) &&
      ((DAT_71052af0e0 & 0xfffffffe) == 2)) &&
     ((*(undefined4 *)(param_2 + 0x58) = 0, *(long *)(param_2 + 0x78) != 0 &&
      (*(long *)(param_2 + 0x60) != 0)))) {
    plVar6 = &DAT_71052af180;
    if (DAT_71052af1d8 != '\0') {
      puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
      uVar2 = *puVar3;
      if (uVar2 != 0) {
        if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar2) {
          FUN_71001b1300("D:\\home\\ead-p2p\\Env\\Lib\\NintendoSDK\\NintendoSDK-NEX\\NintendoSDK-NEX-for_NX-4_6_3-S820-20190417-ja\\NintendoSDK-NEX\\Include\\OnlineCore/src/Core/InstanceTable.h"
                         ,0x47,0xe0000003,0);
          goto LAB_71000c389c;
        }
        plVar6 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x68);
      }
    }
    if ((*plVar6 != 0) && (*(long *)(*plVar6 + 0x10) != 0)) {
      plVar6 = &DAT_71052af180;
      if (DAT_71052af1d8 != '\0') {
        puVar3 = (uint *)FUN_7101717960(DAT_71052af1d0);
        uVar2 = *puVar3;
        if (uVar2 != 0) {
          if ((ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3) <= (ulong)uVar2) {
            FUN_71001b1300("D:\\home\\ead-p2p\\Env\\Lib\\NintendoSDK\\NintendoSDK-NEX\\NintendoSDK-NEX-for_NX-4_6_3-S820-20190417-ja\\NintendoSDK-NEX\\Include\\OnlineCore/src/Core/InstanceTable.h"
                           ,0x47,0xe0000003,0);
            return;
          }
          plVar6 = (long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar2 * 8) + 0x68);
        }
      }
      if (*(long *)(*(long *)(*plVar6 + 0x10) + 0x10) != 0) {
        if (*(long *)(param_2 + 0x80) == 0) {
          plVar6 = *(long **)(param_2 + 0x78);
          if (plVar6 != (long *)0x0) {
            FUN_7100258950(plVar6);
          }
          *(long **)(param_2 + 0x80) = plVar6;
          FUN_7100258800(plVar6);
          lVar1 = *(long *)(param_2 + 0x88);
          *(long *)(*(long *)(param_2 + 0x80) + 0x20) = lVar1 + 0x28;
          (**(code **)(*(long *)(lVar1 + 0x28) + 0x10))();
          plVar6 = *(long **)(param_2 + 0x80);
          uVar4 = (**(code **)(*plVar5 + 0x10))(plVar5);
          (**(code **)(*plVar6 + 0x18))(plVar6,uVar4);
        }
        if (*(long *)(param_2 + 0x90) != 0) {
          FUN_71000d3390(*(long *)(param_2 + 0x90),param_2);
          *(undefined1 *)(param_2 + 0x188) = 1;
          *(undefined1 *)(param_2 + 0xb0) = 1;
          local_58[0] = 0;
          goto LAB_71000c38b0;
        }
      }
    }
  }
LAB_71000c389c:
  local_58[0] = 0x10c08;
LAB_71000c38b0:
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)local_58 | 4));
  local_48[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_48);
  FUN_71000bce50(param_1,local_58);
  return;
}

