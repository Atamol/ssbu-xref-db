// addr:      7100110e60
// offset:    0x110e60
// name:      FUN_7100110e60
// mangled:   
// signature: undefined FUN_7100110e60(void)


undefined8 FUN_7100110e60(long param_1)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  bool bVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  char *pcVar9;
  code *pcVar10;
  uint auStack_58 [4];
  uint auStack_48 [4];
  undefined4 auStack_38 [2];
  
  FUN_7100192e90((int *)auStack_48,DAT_71052adfc0);
  auStack_58[0] = 0x6c50;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)auStack_58 | 4));
  auStack_38[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)auStack_58 | 4),(Result *)auStack_38);
  if (auStack_48[0] == auStack_58[0]) {
    if (*(int *)((long)*(long **)(param_1 + 0x118) + 0x14) == 1) {
      FUN_71001d0a10(*(long **)(param_1 + 0x118));
    }
LAB_7100110ed8:
    pcVar10 = FUN_71001a1d80;
    uVar6 = 0;
    pcVar9 = "NexProcessHostMigrationJob::HostMigrationFailure";
    goto LAB_7100111284;
  }
  if (*(char *)(param_1 + 0xb3) != -3) goto LAB_710011125c;
  if (*(char *)(param_1 + 0xc1) != '\0') {
    if (*(int *)((long)*(long **)(param_1 + 0x118) + 0x14) == 1) {
      FUN_71001d0a10(*(long **)(param_1 + 0x118));
    }
    pcVar10 = FUN_71001a2450;
    uVar6 = 0;
    pcVar9 = "NexProcessHostMigrationJob::WaitNewHostFinished";
    goto LAB_7100111284;
  }
  if (*(char *)(param_1 + 0xf0) == '\x01') {
LAB_710011125c:
    if (*(int *)((long)*(long **)(param_1 + 0x118) + 0x14) == 1) {
      FUN_71001d0a10(*(long **)(param_1 + 0x118));
    }
  }
  else {
    if (*(char *)(param_1 + 0xf0) != '\x02') {
      bVar4 = 0;
      cVar1 = *(char *)(param_1 + 0xf1);
      if (cVar1 != '\x01') goto LAB_7100110f68;
      goto LAB_710011125c;
    }
    bVar4 = 1;
    cVar1 = *(char *)(param_1 + 0xf1);
    if (cVar1 == '\x01') goto LAB_710011125c;
LAB_7100110f68:
    if (cVar1 == '\x02') {
      bVar4 = 1;
    }
    if (*(char *)(param_1 + 0xf2) == '\x01') goto LAB_710011125c;
    if (*(char *)(param_1 + 0xf2) == '\x02') {
      bVar4 = 1;
    }
    if (*(char *)(param_1 + 0xf3) == '\x01') goto LAB_710011125c;
    if (*(char *)(param_1 + 0xf3) == '\x02') {
      bVar4 = 1;
    }
    if (*(char *)(param_1 + 0xf4) == '\x01') goto LAB_710011125c;
    if (*(char *)(param_1 + 0xf4) == '\x02') {
      bVar4 = 1;
    }
    if (*(char *)(param_1 + 0xf5) == '\x01') goto LAB_710011125c;
    if (*(char *)(param_1 + 0xf5) == '\x02') {
      bVar4 = 1;
    }
    if (*(char *)(param_1 + 0xf6) == '\x01') goto LAB_710011125c;
    if (*(char *)(param_1 + 0xf6) == '\x02') {
      bVar4 = 1;
    }
    if (*(char *)(param_1 + 0xf7) == '\x01') goto LAB_710011125c;
    if (*(char *)(param_1 + 0xf7) == '\x02') {
      bVar4 = 1;
    }
    if (*(char *)(param_1 + 0xf8) == '\x01') goto LAB_710011125c;
    if (*(char *)(param_1 + 0xf8) == '\x02') {
      bVar4 = 1;
    }
    if (*(char *)(param_1 + 0xf9) == '\x01') goto LAB_710011125c;
    if (*(char *)(param_1 + 0xf9) == '\x02') {
      bVar4 = 1;
    }
    if (*(char *)(param_1 + 0xfa) == '\x01') goto LAB_710011125c;
    if (*(char *)(param_1 + 0xfa) == '\x02') {
      bVar4 = 1;
    }
    if (*(char *)(param_1 + 0xfb) == '\x01') goto LAB_710011125c;
    if (*(char *)(param_1 + 0xfb) == '\x02') {
      bVar4 = 1;
    }
    if (*(char *)(param_1 + 0xfc) == '\x01') goto LAB_710011125c;
    if (*(char *)(param_1 + 0xfc) == '\x02') {
      bVar4 = 1;
    }
    if (*(char *)(param_1 + 0xfd) == '\x01') goto LAB_710011125c;
    if (*(char *)(param_1 + 0xfd) == '\x02') {
      bVar4 = 1;
    }
    if (*(char *)(param_1 + 0xfe) == '\x01') goto LAB_710011125c;
    if (*(char *)(param_1 + 0xfe) == '\x02') {
      bVar4 = 1;
    }
    if (*(char *)(param_1 + 0xff) == '\x01') goto LAB_710011125c;
    if (*(char *)(param_1 + 0xff) == '\x02') {
      bVar4 = 1;
    }
    if (*(char *)(param_1 + 0x100) == '\x01') goto LAB_710011125c;
    if (*(char *)(param_1 + 0x100) == '\x02') {
      bVar4 = 1;
    }
    if (*(char *)(param_1 + 0x101) == '\x01') goto LAB_710011125c;
    if (*(char *)(param_1 + 0x101) == '\x02') {
      bVar4 = 1;
    }
    if (*(char *)(param_1 + 0x102) == '\x01') goto LAB_710011125c;
    if (*(char *)(param_1 + 0x102) == '\x02') {
      bVar4 = 1;
    }
    if (*(char *)(param_1 + 0x103) == '\x01') goto LAB_710011125c;
    if (*(char *)(param_1 + 0x103) == '\x02') {
      bVar4 = 1;
    }
    if (*(char *)(param_1 + 0x104) == '\x01') goto LAB_710011125c;
    if (*(char *)(param_1 + 0x104) == '\x02') {
      bVar4 = 1;
    }
    if (*(char *)(param_1 + 0x105) == '\x01') goto LAB_710011125c;
    if (*(char *)(param_1 + 0x105) == '\x02') {
      bVar4 = 1;
    }
    if (*(char *)(param_1 + 0x106) == '\x01') goto LAB_710011125c;
    if (*(char *)(param_1 + 0x106) == '\x02') {
      bVar4 = 1;
    }
    if (*(char *)(param_1 + 0x107) == '\x01') goto LAB_710011125c;
    if (*(char *)(param_1 + 0x107) == '\x02') {
      bVar4 = 1;
    }
    if (*(char *)(param_1 + 0x108) == '\x01') goto LAB_710011125c;
    if (*(char *)(param_1 + 0x108) == '\x02') {
      bVar4 = 1;
    }
    if (*(char *)(param_1 + 0x109) == '\x01') goto LAB_710011125c;
    if (*(char *)(param_1 + 0x109) == '\x02') {
      bVar4 = 1;
    }
    if (*(char *)(param_1 + 0x10a) == '\x01') goto LAB_710011125c;
    if (*(char *)(param_1 + 0x10a) == '\x02') {
      bVar4 = 1;
    }
    if (*(char *)(param_1 + 0x10b) == '\x01') goto LAB_710011125c;
    if (*(char *)(param_1 + 0x10b) == '\x02') {
      bVar4 = 1;
    }
    if (*(char *)(param_1 + 0x10c) == '\x01') goto LAB_710011125c;
    if (*(char *)(param_1 + 0x10c) == '\x02') {
      bVar4 = 1;
    }
    if (*(char *)(param_1 + 0x10d) == '\x01') goto LAB_710011125c;
    if (*(char *)(param_1 + 0x10d) == '\x02') {
      bVar4 = 1;
    }
    if (*(char *)(param_1 + 0x10e) == '\x01') goto LAB_710011125c;
    if (*(char *)(param_1 + 0x10e) == '\x02') {
      bVar4 = 1;
    }
    if (*(char *)(param_1 + 0x10f) == '\x01') goto LAB_710011125c;
    if (*(char *)(param_1 + 0x10f) == '\x02') {
      bVar4 = 1;
    }
    if (*(int *)(*(long *)(param_1 + 0x118) + 0x14) == 1) {
      return 5;
    }
    pcVar10 = FUN_710170d030;
    if (*(int *)(*(long *)(param_1 + 0x118) + 0x58) < 0) {
      pcVar10 = (code *)0x0;
    }
    if (pcVar10 == (code *)0x0) goto LAB_7100111374;
    lVar7 = FUN_71001f16c0(*(long *)(*(long *)(param_1 + 0x170) + 8) + 0x10);
    if ((lVar7 == 0) ||
       (bVar2 = FUN_71001a35c0(param_1,lVar7), lVar7 = DAT_71052ac580, 0x1f < bVar2)) {
LAB_7100111418:
      FUN_7100193a30(DAT_71052adfc0);
      goto LAB_7100110ed8;
    }
    if (bVar2 == *(byte *)(param_1 + 0x86)) {
      if (!(bool)(bVar4 | *(char *)(param_1 + 0x1f8) != '\0')) {
        plVar8 = FUN_71000bb680();
        *(long *)(param_1 + 0x208) = *(long *)(lVar7 + 0x30) + *plVar8 * 6000;
        lVar7 = DAT_71052ac580;
        plVar8 = FUN_71000bb680();
        *(long *)(param_1 + 0x210) = *(long *)(lVar7 + 0x30) + *plVar8 * 30000;
        pcVar10 = FUN_7100111430;
        pcVar9 = "NexProcessHostMigrationJob::NexCheckOldHostDisconnection";
        uVar6 = 5;
        goto LAB_7100111284;
      }
LAB_7100111374:
      lVar7 = FUN_7100193a30(DAT_71052adfc0);
      pcVar10 = FUN_7100110da0;
      uVar6 = 0;
      pcVar9 = "NexProcessHostMigrationJob::NexPrepareForBecomingHostMulti";
      if ((lVar7 == 0) || (!(bool)(bVar4 ^ 1))) goto LAB_7100111284;
      bVar4 = FUN_7100193560(DAT_71052adfc0);
      FUN_71001aca60((int *)auStack_48,lVar7,(uint)bVar4,(uint)*(byte *)(param_1 + 0x86),
                     (undefined1 *)auStack_58);
      if ((auStack_48[0] == 0) && ((auStack_58[0] & 0xff) == (uint)*(byte *)(param_1 + 0x86))) {
        pcVar10 = FUN_7100110da0;
        uVar6 = 0;
        pcVar9 = "NexProcessHostMigrationJob::NexPrepareForBecomingHostMulti";
        goto LAB_7100111284;
      }
      goto LAB_7100110ed8;
    }
    bVar3 = FUN_7100193560(DAT_71052adfc0);
    if (bVar2 == bVar3) goto LAB_7100111374;
    bVar5 = FUN_7100190a90(DAT_71052adfc0,bVar2);
    if (!bVar5) goto LAB_7100111418;
    *(undefined8 *)(param_1 + 0x160) = *(undefined8 *)(DAT_71052ac580 + 0x30);
  }
  pcVar10 = FUN_71001a2310;
  uVar6 = 0;
  pcVar9 = "NexProcessHostMigrationJob::WaitNewHostGreeting";
LAB_7100111284:
  *(code **)(param_1 + 0x30) = pcVar10;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = pcVar9;
  return uVar6;
}

