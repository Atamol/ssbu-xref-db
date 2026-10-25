// addr:      710171bb70
// offset:    0x171bb70
// name:      FUN_710171bb70
// mangled:   
// signature: undefined __cdecl FUN_710171bb70(long param_1)


void FUN_710171bb70(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  uint *puVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long *plVar14;
  undefined8 *puVar13;
  
  plVar14 = *(long **)(param_1 + 0x10);
  *plVar14 = **(long **)(*(long *)(param_1 + 8) + 0x68);
  lVar8 = plVar14[0xc9];
  if ((ulong)((plVar14[0xcb] - lVar8 >> 3) * -0x5555555555555555) < 100) {
    lVar9 = plVar14[0xca];
    puVar5 = FUN_71001b1820(0x960);
    puVar1 = (undefined8 *)((long)puVar5 + (lVar9 - lVar8));
    puVar6 = (undefined8 *)plVar14[0xc9];
    puVar10 = puVar1;
    puVar11 = puVar1;
    puVar12 = (undefined8 *)plVar14[0xca];
    if ((undefined8 *)plVar14[0xca] != puVar6) {
      do {
        puVar13 = puVar12 + -3;
        uVar2 = puVar12[-2];
        uVar3 = puVar12[-1];
        puVar11 = puVar10 + -3;
        *puVar11 = *puVar13;
        puVar10[-2] = uVar2;
        puVar10[-1] = uVar3;
        puVar10 = puVar11;
        puVar12 = puVar13;
      } while (puVar6 != puVar13);
      puVar6 = (undefined8 *)plVar14[0xc9];
    }
    plVar14[0xc9] = (long)puVar11;
    plVar14[0xca] = (long)puVar1;
    plVar14[0xcb] = (long)(puVar5 + 300);
    if (puVar6 != (undefined8 *)0x0) {
      FUN_71001b1870((long)puVar6);
    }
  }
  lVar8 = *plVar14;
  if (DAT_71052af1d8 == '\0') {
LAB_710171bc6c:
    lVar9 = DAT_71052af138;
    if (DAT_71052af138 != 0) {
LAB_710171bc5c:
      if (*(long *)(lVar9 + 0x10) != 0) {
        lVar9 = *(long *)(*(long *)(lVar9 + 0x10) + 0x10);
        goto LAB_710171bc9c;
      }
    }
  }
  else {
    puVar7 = (uint *)FUN_7101717960(DAT_71052af1d0);
    uVar4 = *puVar7;
    if (uVar4 == 0) goto LAB_710171bc6c;
    if ((ulong)uVar4 < (ulong)(DAT_71052af1b0[1] - *DAT_71052af1b0 >> 3)) {
      lVar9 = *(long *)(*(long *)(*DAT_71052af1b0 + (ulong)uVar4 * 8) + 0x20);
      if (lVar9 == 0) goto LAB_710171bc98;
      goto LAB_710171bc5c;
    }
    FUN_71001b1300("C:/c2/nintendo/NintendoSDK-NXAddon/NintendoSDK/../NintendoSDK-NEX/include\\OnlineCore/src/Core/InstanceTable.h"
                   ,0x47,0xe0000003,0);
  }
LAB_710171bc98:
  lVar9 = 0;
LAB_710171bc9c:
  plVar14 = (long *)(lVar9 + 0x78);
  (**(code **)(*plVar14 + 0x10))(plVar14);
  *(undefined8 *)(lVar8 + 200) = 0xea60000000a7;
                    /* WARNING: Could not recover jumptable at 0x00710171bccc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar14 + 0x20))(plVar14);
  return;
}

