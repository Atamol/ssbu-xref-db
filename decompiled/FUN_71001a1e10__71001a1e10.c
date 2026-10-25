// addr:      71001a1e10
// offset:    0x1a1e10
// name:      FUN_71001a1e10
// mangled:   
// signature: undefined FUN_71001a1e10(void)


undefined8 FUN_71001a1e10(long *param_1)

{
  char *pcVar1;
  bool bVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  undefined1 uVar6;
  ulong uVar7;
  ulong uVar8;
  int aiStack_68 [4];
  int aiStack_58 [4];
  undefined4 auStack_48 [2];
  
  *(undefined4 *)(param_1 + 0x22) = 8;
  FUN_7100192e90(aiStack_58,DAT_71052adfc0);
  aiStack_68[0] = 0x6c50;
  nn::err::ErrorResultVariant::ErrorResultVariant((ErrorResultVariant *)((ulong)aiStack_68 | 4));
  auStack_48[0] = 0;
  nn::err::ErrorResultVariant::operator=
            ((ErrorResultVariant *)((ulong)aiStack_68 | 4),(Result *)auStack_48);
  if (aiStack_58[0] == aiStack_68[0]) {
    param_1[6] = (long)FUN_71001a1d80;
    param_1[7] = 0;
    param_1[8] = (long)"ProcessHostMigrationJob::HostMigrationFailure";
  }
  else {
    if ((((((((*(char *)((long)param_1 + 0x91) == '\0') && (*(char *)((long)param_1 + 0x92) == '\0')
             ) && (*(char *)((long)param_1 + 0x93) == '\0')) &&
           (((*(char *)((long)param_1 + 0x94) == '\0' && (*(char *)((long)param_1 + 0x95) == '\0'))
            && ((*(char *)((long)param_1 + 0x96) == '\0' &&
                ((*(char *)((long)param_1 + 0x97) == '\0' && ((char)param_1[0x13] == '\0')))))))) &&
          (*(char *)((long)param_1 + 0x99) == '\0')) &&
         ((((((*(char *)((long)param_1 + 0x9a) == '\0' && (*(char *)((long)param_1 + 0x9b) == '\0'))
             && (*(char *)((long)param_1 + 0x9c) == '\0')) &&
            ((*(char *)((long)param_1 + 0x9d) == '\0' && (*(char *)((long)param_1 + 0x9e) == '\0')))
            ) && (*(char *)((long)param_1 + 0x9f) == '\0')) &&
          ((((char)param_1[0x14] == '\0' && (*(char *)((long)param_1 + 0xa1) == '\0')) &&
           (((*(char *)((long)param_1 + 0xa2) == '\0' &&
             (((*(char *)((long)param_1 + 0xa3) == '\0' && (*(char *)((long)param_1 + 0xa4) == '\0')
               ) && (*(char *)((long)param_1 + 0xa5) == '\0')))) &&
            (((*(char *)((long)param_1 + 0xa6) == '\0' && (*(char *)((long)param_1 + 0xa7) == '\0'))
             && ((char)param_1[0x15] == '\0')))))))))) &&
        (((*(char *)((long)param_1 + 0xa9) == '\0' && (*(char *)((long)param_1 + 0xaa) == '\0')) &&
         ((*(char *)((long)param_1 + 0xab) == '\0' &&
          (((*(char *)((long)param_1 + 0xac) == '\0' && (*(char *)((long)param_1 + 0xad) == '\0'))
           && (*(char *)((long)param_1 + 0xae) == '\0')))))))) &&
       ((*(char *)((long)param_1 + 0xaf) == '\0' && ((char)param_1[0x16] == '\0')))) {
      uVar6 = 1;
    }
    else {
      uVar8 = *(ulong *)(DAT_71052ac580 + 0x30);
      if (uVar8 < (ulong)param_1[0xb]) {
        if ((ulong)param_1[0xd] < uVar8) {
          uVar7 = 0;
          plVar5 = param_1;
          if (*(char *)((long)param_1 + 0x91) != '\0') goto LAB_71001a1ff8;
LAB_71001a2038:
          if (uVar7 != 0x1f) {
            while( true ) {
              pcVar1 = (char *)((long)plVar5 + 0x92);
              uVar7 = uVar7 + 1;
              plVar5 = (long *)((long)param_1 + uVar7);
              if (*pcVar1 == '\0') break;
LAB_71001a1ff8:
              plVar3 = (long *)FUN_7100193580(DAT_71052adfc0);
              bVar2 = FUN_710019a070(plVar3,(uint)uVar7);
              if (bVar2) break;
              bVar2 = FUN_7100190a90(DAT_71052adfc0,(byte)uVar7);
              if (bVar2) {
                plVar3 = (long *)FUN_7100161fa0(DAT_71052add68);
                lVar4 = (**(code **)(*plVar3 + 0x48))(plVar3,uVar7 & 0xffffffff);
                if (lVar4 != 0) break;
                FUN_7100190af0(DAT_71052adfc0,(uint)uVar7);
              }
              *(undefined1 *)((long)plVar5 + 0x91) = 0;
              if (uVar7 == 0x1f) goto LAB_71001a205c;
            }
            goto LAB_71001a2038;
          }
LAB_71001a205c:
          plVar5 = FUN_71000bb680();
          param_1[0xd] = uVar8 + *plVar5 * 500;
        }
        return 5;
      }
      uVar6 = 0;
    }
    *(undefined1 *)((long)param_1 + 0xc3) = uVar6;
    (**(code **)(*param_1 + 0x38))(param_1);
  }
  return 0;
}

