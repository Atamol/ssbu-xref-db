// addr:      71018f0e30
// offset:    0x18f0e30
// name:      FUN_71018f0e30
// mangled:   
// signature: undefined __cdecl FUN_71018f0e30(long param_1, undefined8 param_2, undefined8 param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


void FUN_71018f0e30(long param_1,undefined8 param_2,undefined8 param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  uint uVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined **local_50;
  long *local_48;
  
  plVar7 = *(long **)(param_1 + 0x58);
  if (8 < *(uint *)(plVar7 + 0x21) || (1 << (ulong)(*(uint *)(plVar7 + 0x21) & 0x1f) & 0x107U) == 0)
  {
    FUN_710248b690((char *)*DAT_7105329f98,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    lVar5 = *(long *)(*(long *)(*DAT_7105329f98 + 0x10) + 0x378);
    if (*(char *)(lVar5 + 0x41) != '\0') {
      uVar6 = *(ulong *)(lVar5 + 0x30);
      lVar8 = *(long *)(plVar7[0x25] + 0x80);
      bVar3 = (uVar6 & 0xffffffffff) != 0;
      FUN_7103776910(&local_50,lVar8 + 0x20,(long ****)"set_parts_det_key_00",param_3,param_4,
                     param_5,param_6,param_7,param_8);
      plVar1 = local_48;
      lVar5 = *local_48;
      if (lVar5 != 0) {
        *(byte *)(lVar5 + 0x58) = *(byte *)(lVar5 + 0x58) & 0xfe | bVar3;
      }
      local_50 = &PTR_FUN_710523d9a8;
      local_48 = (long *)0x0;
      if (plVar1 != (long *)0x0) {
        FUN_710392eb40((ulong)plVar1);
      }
      (**(code **)(**(long **)(lVar8 + 0x40) + 0x60))
                (*(long **)(lVar8 + 0x40),(uVar6 & 0xffffffffff) != 0);
      *(bool *)(lVar8 + 0x138) = bVar3;
    }
  }
  if (*(uint *)((long)plVar7 + 0x104) < 0x13) {
    uVar2 = *(uint *)((long)plVar7 + (long)(int)*(uint *)((long)plVar7 + 0x104) * 4 + 0xb8);
    if (*(uint *)(plVar7 + 0x21) != uVar2) {
      *(uint *)(plVar7 + 0x22) = *(uint *)(plVar7 + 0x21);
      *(uint *)(plVar7 + 0x21) = uVar2;
      if (8 < uVar2) goto LAB_71018f100c;
      lVar5 = plVar7[(long)(int)uVar2 * 2 + 6];
      plVar7[1] = plVar7[(long)(int)uVar2 * 2 + 5];
      plVar7[2] = lVar5;
      pcVar4 = (code *)plVar7[3];
      uVar6 = plVar7[4] & 1;
      if (uVar6 != 0 || pcVar4 != (code *)0x0) {
        if (uVar6 != 0) {
          pcVar4 = *(code **)(pcVar4 + *(long *)(*plVar7 + (plVar7[4] >> 1)));
        }
        (*pcVar4)();
      }
      *(undefined4 *)((long)plVar7 + 0x10c) = 0;
    }
    if (*(char *)((long)plVar7 + 0x114) != '\0') {
      pcVar4 = (code *)plVar7[3];
      uVar6 = plVar7[4] & 1;
      if (uVar6 != 0 || pcVar4 != (code *)0x0) {
        if (uVar6 != 0) {
          pcVar4 = *(code **)(pcVar4 + *(long *)(*plVar7 + (plVar7[4] >> 1)));
        }
        (*pcVar4)();
      }
      *(undefined4 *)((long)plVar7 + 0x10c) = 0;
      *(undefined1 *)((long)plVar7 + 0x114) = 0;
    }
    if (*plVar7 != 0) {
      pcVar4 = (code *)plVar7[1];
      uVar6 = plVar7[2] & 1;
      if (uVar6 != 0 || pcVar4 != (code *)0x0) {
        plVar1 = (long *)(*plVar7 + (plVar7[2] >> 1));
        if (uVar6 != 0) {
          pcVar4 = *(code **)(pcVar4 + *plVar1);
        }
        (*pcVar4)(plVar1,param_2);
      }
    }
    *(int *)((long)plVar7 + 0x10c) = *(int *)((long)plVar7 + 0x10c) + 1;
    return;
  }
LAB_71018f100c:
                    /* WARNING: Subroutine does not return */
  abort();
}

