// addr:      71001a7ee0
// offset:    0x1a7ee0
// name:      FUN_71001a7ee0
// mangled:   
// signature: undefined8 __cdecl FUN_71001a7ee0(long * param_1, long param_2, undefined8 param_3, uint param_4)


undefined8 FUN_71001a7ee0(long *param_1,long param_2,undefined8 param_3,uint param_4)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  undefined1 uVar6;
  byte bVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  code *pcVar11;
  char *pcVar12;
  long lVar13;
  int iVar14;
  ulong uVar15;
  uint uVar16;
  undefined8 local_70;
  undefined4 local_68;
  
  bVar7 = *(byte *)(param_2 + 1);
  cVar3 = *(char *)(param_2 + 2);
  uVar8 = FUN_71000bb9a0((uint *)(param_2 + 4));
  if ((*(ushort *)(param_1 + 0x14) < (ushort)bVar7) ||
     ((uVar8 <= *(uint *)(param_1 + 0x1e) && ((param_4 & 1) == 0)))) {
    return 0;
  }
  if (*(char *)(param_2 + 8) == '\x02') {
    uVar15 = (ulong)*(byte *)(param_2 + 9);
    if (((char)param_1[0x19] == '\0') && (*(char *)((long)param_1 + 0xc9) == '\0')) {
      *(ushort *)((long)param_1 + 0xca) = (ushort)bVar7;
      *(char *)((long)param_1 + 0xcc) = cVar3;
      *(uint *)(param_1 + 0x1a) = uVar8;
      *(undefined1 *)((long)param_1 + 0xd4) = 2;
LAB_71001a81c0:
      bVar4 = *(byte *)(param_2 + 10);
      if (bVar4 != 0) {
        bVar5 = *(byte *)(param_2 + 0xb);
        uVar16 = 0;
        do {
          lVar13 = (ulong)bVar5 + (ulong)uVar16;
          plVar1 = (long *)(param_1[0x17] + lVar13 * 0x80);
          lVar2 = param_2 + (ulong)(uVar16 << 6 | 0xc);
          (**(code **)(*plVar1 + 0x18))(&local_70,plVar1,lVar2);
          *(undefined1 *)(param_1[0x18] + lVar13) = *(undefined1 *)(lVar2 + 0x3e);
          uVar16 = uVar16 + 1 & 0xffff;
        } while (uVar16 < bVar4);
      }
      *(undefined1 *)((long)param_1 + uVar15 + 200) = 1;
      if ((char)param_1[0x19] == '\0') {
        return 1;
      }
      if (*(char *)((long)param_1 + 0xc9) != '\0') {
        *(undefined1 *)((long)param_1 + 0xcc) = 0;
        *(undefined4 *)(param_1 + 0x1a) = 0;
        *(undefined1 *)((long)param_1 + 0xd4) = 0;
        *(undefined4 *)(param_1 + 0x19) = 0;
        cVar3 = *(char *)((long)param_1 + 0xfc);
        goto joined_r0x0071001a8248;
      }
    }
    else {
      if ((*(ushort *)((long)param_1 + 0xca) == (ushort)bVar7) &&
         (((*(char *)((long)param_1 + 0xcc) == cVar3 && (*(uint *)(param_1 + 0x1a) == uVar8)) &&
          (*(char *)((long)param_1 + 0xd4) == '\x02')))) {
LAB_71001a815c:
        cVar3 = *(char *)((long)param_1 + uVar15 + 200);
      }
      else {
        if (uVar8 <= *(uint *)(param_1 + 0x1a)) {
          if ((param_4 & 1) == 0) {
            return 2;
          }
          goto LAB_71001a815c;
        }
        *(ushort *)((long)param_1 + 0xca) = (ushort)bVar7;
        *(char *)((long)param_1 + 0xcc) = cVar3;
        *(uint *)(param_1 + 0x1a) = uVar8;
        *(undefined1 *)((long)param_1 + 0xd4) = 2;
        *(undefined2 *)(param_1 + 0x19) = 0;
        cVar3 = *(char *)((long)param_1 + uVar15 + 200);
      }
      if (cVar3 == '\0') goto LAB_71001a81c0;
    }
    uVar10 = 1;
  }
  else {
    if (*(char *)(param_2 + 8) != '\x01') {
      return 0;
    }
    if (((char)param_1[0x19] != '\0') || (*(char *)((long)param_1 + 0xc9) != '\0')) {
      if ((uVar8 < *(uint *)(param_1 + 0x1a)) && ((param_4 & 1) == 0)) {
        return 2;
      }
      *(undefined1 *)((long)param_1 + 0xcc) = 0;
      *(undefined4 *)(param_1 + 0x1a) = 0;
      *(undefined1 *)((long)param_1 + 0xd4) = 0;
      *(undefined4 *)(param_1 + 0x19) = 0;
    }
    if (bVar7 != 0) {
      iVar14 = 0;
      do {
        uVar16 = iVar14 << 6 | 0xc;
        uVar6 = *(undefined1 *)(param_2 + (ulong)(uVar16 + 0x3e));
        cVar3 = (char)iVar14;
        plVar1 = (long *)(param_1[0x17] + (long)cVar3 * 0x80);
        (**(code **)(*plVar1 + 0x18))(&local_70,plVar1,param_2 + (ulong)uVar16);
        *(undefined1 *)(param_1[0x18] + (long)cVar3) = uVar6;
        iVar14 = (int)(char)(cVar3 + '\x01');
      } while (iVar14 < (int)(uint)bVar7);
    }
    cVar3 = *(char *)((long)param_1 + 0xfc);
joined_r0x0071001a8248:
    if (cVar3 == '\0') {
      uVar10 = 3;
    }
    else {
      if ((short)param_1[0x14] != 0) {
        lVar13 = 0;
        uVar15 = 0;
        do {
          local_70 = 0x200000000000;
          local_68 = 0;
          (**(code **)(*(long *)(param_1[0x17] + lVar13) + 0x20))
                    ((long *)(param_1[0x17] + lVar13),&local_70);
          uVar15 = uVar15 + 1;
          lVar13 = lVar13 + 0x80;
        } while (uVar15 < *(ushort *)(param_1 + 0x14));
      }
      FUN_71001a8260(param_1,(ushort)bVar7);
      uVar9 = FUN_71001a4c50((long)param_1);
      *(byte *)((long)param_1 + 0xfc) = (byte)uVar9 & 1;
      FUN_71001a4b30((long)param_1,0);
      *(uint *)(param_1 + 0x1e) = uVar8;
      param_1[0x1d] = 0;
      if ((short)param_1[0x14] != 0) {
        uVar15 = 0;
        do {
          *(undefined1 *)(param_1[0x1b] + uVar15) = 0;
          uVar15 = uVar15 + 1;
        } while (uVar15 < *(ushort *)(param_1 + 0x14));
      }
      param_1[0x1c] = *(long *)(DAT_71052ac580 + 0x30);
      *(undefined1 *)((long)param_1 + 0xf5) = 0;
      if (*(char *)((long)param_1 + 0xfc) == '\0') {
        pcVar11 = FUN_71001a65f0;
        pcVar12 = "ProcessUpdateMeshJob::UpdateFailed";
      }
      else {
        bVar7 = FUN_7100193a00(DAT_71052adfc0);
        if ((bVar7 & 1) == 0) {
          pcVar11 = FUN_71001a5e80;
          pcVar12 = "ProcessUpdateMeshJob::CheckConnectionAll";
        }
        else {
          pcVar11 = FUN_71001a5780;
          pcVar12 = "ProcessUpdateMeshJob::WaitDirectConnection";
        }
      }
      uVar10 = 4;
      param_1[6] = (long)pcVar11;
      param_1[7] = 0;
      param_1[8] = (long)pcVar12;
    }
  }
  return uVar10;
}

