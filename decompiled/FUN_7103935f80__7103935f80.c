// addr:      7103935f80
// offset:    0x3935f80
// name:      FUN_7103935f80
// mangled:   
// signature: undefined4 * __cdecl FUN_7103935f80(long param_1, uint param_2, undefined8 param_3)


undefined4 * FUN_7103935f80(long param_1,uint param_2,undefined **param_3)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  long lVar5;
  byte *pbVar6;
  uint local_4c;
  undefined4 *local_48;
  
  if (param_2 == 0) {
    local_48 = (undefined4 *)FUN_71039441b0();
  }
  else {
    local_48 = FUN_71039441c0(param_1,param_2,param_3);
    if (local_48 == (undefined4 *)0x0) {
      return (undefined4 *)0x0;
    }
  }
  puVar4 = (undefined4 *)FUN_7103945eb0(param_1,local_48,0x7d90,0x40);
  if (puVar4 != (undefined4 *)0x0) {
    FUN_7103936320(puVar4);
    FUN_7103936320(puVar4 + 1);
    *(undefined8 *)(puVar4 + 2) = 0;
    FUN_7103931ab0((undefined8 *)(puVar4 + 0x686),puVar4);
    FUN_7103931ab0((undefined8 *)(puVar4 + 0x688),0);
    FUN_7103946580();
    FUN_7103936320(puVar4 + 0x68a);
    FUN_7103931ab0((undefined8 *)(puVar4 + 0x68c),0);
    FUN_7103930460((undefined8 *)(puVar4 + 0x68e));
    bVar1 = FUN_7103957a50((undefined8 *)(puVar4 + 0x690),"arena_large",0x13,0);
    if (((((bVar1 & 1) == 0) &&
         (bVar1 = FUN_710393c600(param_1,(undefined8 *)(puVar4 + 0x6b6),1,1), (bVar1 & 1) == 0)) &&
        (bVar1 = FUN_710393c600(param_1,(undefined8 *)(puVar4 + 0x85c),2,0), (bVar1 & 1) == 0)) &&
       (bVar1 = FUN_710393c600(param_1,(undefined8 *)(puVar4 + 0xa02),3,0), (bVar1 & 1) == 0)) {
      lVar5 = FUN_7103935970();
      bVar2 = FUN_7103936390((undefined8 *)(puVar4 + 0xba8),lVar5);
      if (!bVar2) {
        lVar5 = FUN_71039359f0();
        bVar2 = FUN_7103936390((undefined8 *)(puVar4 + 0xd70),lVar5);
        if (!bVar2) {
          iVar3 = FUN_7103935b70(0x200000);
          puVar4[0xf38] = iVar3;
          puVar4[0xf39] = 0xb6;
          bVar1 = FUN_7103957a50((undefined8 *)(puVar4 + 0xf3a),"extent_grow",0xd,0);
          if ((bVar1 & 1) == 0) {
            FUN_7103936800((undefined8 *)(puVar4 + 0xf60));
            bVar1 = FUN_7103957a50((undefined8 *)(puVar4 + 0xf62),"extent_avail",0xf,0);
            if ((bVar1 & 1) == 0) {
              local_4c = 0;
              while( true ) {
                if (0x33 < local_4c) {
                  *(undefined4 **)(puVar4 + 0x1f60) = local_48;
                  FUN_710392c730(param_2,puVar4);
                  FUN_7103957c20((undefined8 *)(puVar4 + 0x1f62),0);
                  FUN_7103957e40((ulong *)(puVar4 + 0x1f62));
                  if (param_2 == 0) {
                    return puVar4;
                  }
                  pbVar6 = (byte *)FUN_7103930890(param_1);
                  FUN_7103936400(pbVar6);
                  pbVar6 = (byte *)FUN_7103930890(param_1);
                  FUN_7103936480(pbVar6);
                  return puVar4;
                }
                bVar2 = FUN_71039465b0((undefined8 *)(puVar4 + (ulong)local_4c * 0x4e + 0xf88));
                if (bVar2) break;
                local_4c = local_4c + 1;
              }
            }
          }
        }
      }
    }
  }
  if (param_2 != 0) {
    FUN_7103945d30(param_1,local_48);
  }
  return (undefined4 *)0x0;
}

