// addr:      7100024b80
// offset:    0x24b80
// name:      FUN_7100024b80
// mangled:   
// signature: undefined8 __cdecl FUN_7100024b80(long param_1, char * param_2, undefined8 param_3, undefined8 param_4, char * param_5, undefined8 * param_6, undefined8 * param_7, size_t * param_8)


undefined8
FUN_7100024b80(long param_1,char *param_2,undefined8 param_3,undefined8 param_4,char *param_5,
              undefined8 *param_6,undefined8 *param_7,size_t *param_8)

{
  bool bVar1;
  int *piVar2;
  undefined8 uVar3;
  size_t sVar4;
  char *pcVar5;
  undefined8 *puVar6;
  size_t *psVar7;
  undefined8 *puVar8;
  size_t *psVar9;
  long lVar10;
  char cVar11;
  size_t local_108;
  char acStack_100 [36];
  undefined8 auStack_dc [4];
  undefined1 auStack_b8 [36];
  undefined1 auStack_94 [36];
  byte abStack_70 [16];
  undefined8 local_58;
  
  local_58 = 0;
  local_108 = 0;
  if (*(int *)(param_6 + 7) == 0) {
    *(undefined4 *)(param_6 + 7) = 1;
    lVar10 = param_6[1];
  }
  else {
    lVar10 = param_6[1];
  }
  psVar7 = (size_t *)param_5;
  puVar6 = param_6;
  puVar8 = param_7;
  psVar9 = param_8;
  if (lVar10 == 0) {
    uVar3 = FUN_7100015680(param_1,acStack_100,0x21,param_4,param_5,param_6,param_7,param_8);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    sVar4 = strlen(acStack_100);
    psVar7 = &local_108;
    uVar3 = FUN_7100012750(param_1,acStack_100,sVar4,&local_58,psVar7,(ulong)puVar6,(ulong)puVar8,
                           psVar9);
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    param_6[1] = local_58;
  }
  uVar3 = param_6[2];
  piVar2 = (int *)FUN_7100007fd0((byte *)"%s:%s:%s");
  if (piVar2 != (int *)0x0) {
    FUN_71000252c0(abStack_70,piVar2);
    FUN_71000272a0();
    FUN_7100024f60(abStack_70,auStack_b8,uVar3,param_3,psVar7,puVar6,puVar8,psVar9);
    if (*(int *)(param_6 + 3) == 1) {
      uVar3 = *param_6;
      param_3 = param_6[1];
      piVar2 = (int *)FUN_7100007fd0((byte *)"%s:%s:%s");
      if (piVar2 == (int *)0x0) {
        return 0x1b;
      }
      FUN_71000252c0(abStack_70,piVar2);
      FUN_71000272a0();
      FUN_7100024f60(abStack_70,auStack_b8,uVar3,param_3,psVar7,puVar6,puVar8,psVar9);
    }
    piVar2 = (int *)FUN_7100007fd0((byte *)"%s:%s");
    if (((byte *)param_6[5] != (byte *)0x0) &&
       (bVar1 = FUN_7100017280((byte *)param_6[5],(byte *)"auth-int"), bVar1)) {
      param_5 = "d41d8cd98f00b204e9800998ecf8427e";
      piVar2 = (int *)FUN_7100007fd0((byte *)"%s:%s");
      FUN_71000272a0();
    }
    if (piVar2 != (int *)0x0) {
      FUN_71000252c0(abStack_70,piVar2);
      FUN_71000272a0();
      FUN_7100024f60(abStack_70,(undefined1 *)auStack_dc,param_5,param_3,psVar7,puVar6,puVar8,psVar9
                    );
      lVar10 = param_6[5];
      uVar3 = *param_6;
      if (lVar10 == 0) {
        puVar6 = auStack_dc;
        piVar2 = (int *)FUN_7100007fd0((byte *)"%s:%s:%s");
      }
      else {
        puVar6 = (undefined8 *)(ulong)*(uint *)(param_6 + 7);
        psVar7 = (size_t *)param_6[1];
        puVar8 = auStack_dc;
        piVar2 = (int *)FUN_7100007fd0((byte *)"%s:%s:%08x:%s:%s:%s");
      }
      if (piVar2 != (int *)0x0) {
        FUN_71000252c0(abStack_70,piVar2);
        FUN_71000272a0();
        FUN_7100024f60(abStack_70,auStack_94,uVar3,puVar6,psVar7,lVar10,puVar8,psVar9);
        cVar11 = *param_2;
        pcVar5 = param_2;
        do {
          if (cVar11 != '\"') goto LAB_7100024dec;
          do {
            do {
              pcVar5 = pcVar5 + 1;
              cVar11 = *pcVar5;
            } while (cVar11 == '\"');
LAB_7100024dec:
            if (cVar11 == '\0') {
              pcVar5 = (char *)FUN_7100027290();
              if (pcVar5 == (char *)0x0) {
                return 0x1b;
              }
              cVar11 = *param_2;
              do {
                if ((cVar11 == '\"') || (cVar11 == '\\')) {
                  *pcVar5 = '\\';
                  cVar11 = *param_2;
                  pcVar5 = pcVar5 + 1;
                }
                else if (cVar11 == '\0') {
                  *pcVar5 = '\0';
                  if (param_6[5] == 0) {
                    pcVar5 = (char *)FUN_7100007fd0((byte *)
                                                  "username=\"%s\", realm=\"%s\", nonce=\"%s\", uri=\"%s\", response=\"%s\""
                                                  );
                    FUN_71000272a0();
                  }
                  else {
                    pcVar5 = (char *)FUN_7100007fd0((byte *)
                                                  "username=\"%s\", realm=\"%s\", nonce=\"%s\", uri=\"%s\", cnonce=\"%s\", nc=%08x, qop=%s, response=\"%s\""
                                                  );
                    bVar1 = FUN_7100017280((byte *)param_6[5],&DAT_71042d5221);
                    if (bVar1) {
                      *(int *)(param_6 + 7) = *(int *)(param_6 + 7) + 1;
                    }
                    FUN_71000272a0();
                  }
                  if (pcVar5 == (char *)0x0) {
                    return 0x1b;
                  }
                  if (param_6[4] != 0) {
                    pcVar5 = (char *)FUN_7100007fd0((byte *)"%s, opaque=\"%s\"");
                    FUN_71000272a0();
                    if (pcVar5 == (char *)0x0) {
                      return 0x1b;
                    }
                  }
                  if (param_6[6] != 0) {
                    pcVar5 = (char *)FUN_7100007fd0((byte *)"%s, algorithm=\"%s\"");
                    FUN_71000272a0();
                    if (pcVar5 == (char *)0x0) {
                      return 0x1b;
                    }
                  }
                  *param_7 = pcVar5;
                  sVar4 = strlen(pcVar5);
                  *param_8 = sVar4;
                  return 0;
                }
                param_2 = param_2 + 1;
                *pcVar5 = cVar11;
                cVar11 = *param_2;
                pcVar5 = pcVar5 + 1;
              } while( true );
            }
          } while (cVar11 == '\\');
          pcVar5 = pcVar5 + 1;
          cVar11 = *pcVar5;
        } while( true );
      }
    }
  }
  return 0x1b;
}

