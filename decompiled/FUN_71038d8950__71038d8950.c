// addr:      71038d8950
// offset:    0x38d8950
// name:      FUN_71038d8950
// mangled:   
// signature: undefined __cdecl FUN_71038d8950(undefined8 * param_1, long * * * param_2, long * * * * param_3, byte * * * * param_4, long * * * * param_5, undefined8 param_6, long * * * param_7, long * * * param_8)


void FUN_71038d8950(undefined8 *param_1,long ***param_2,long ****param_3,byte ****param_4,
                   long ****param_5,undefined8 param_6,long ***param_7,long ***param_8)

{
  long ***ppplVar1;
  long **pplVar2;
  uint uVar3;
  byte bVar4;
  ulong uVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  long **pplVar9;
  long *plVar10;
  logic_error *this;
  undefined4 uVar11;
  long **pplVar12;
  long ***ppplVar13;
  undefined8 *puVar14;
  long ***ppplVar15;
  long *plVar16;
  long lVar17;
  void *pvVar18;
  long ***ppplVar19;
  long **pplVar20;
  long ****pppplVar21;
  ulong uVar22;
  long ****pppplVar23;
  long ****pppplVar24;
  long ***ppplVar25;
  long **pplVar26;
  long *plVar27;
  long ****local_88;
  long local_80;
  long *local_78;
  long local_70;
  long ****local_68;
  
  ppplVar1 = param_2 + 9;
  uVar11 = SUB84(param_4,0);
  ppplVar13 = param_3[1];
  ppplVar25 = param_3[2];
  if ((*(byte *)param_3 & 1) == 0) {
    ppplVar25 = (long ***)((long)param_3 + 1);
    ppplVar13 = (long ***)(ulong)(*(byte *)param_3 >> 1);
  }
  pplVar9 = (long **)FUN_7102677830((ulong *)ppplVar25,(ulong)ppplVar13);
  pplVar20 = param_2[10];
  if (pplVar20 != (long **)0x0) {
    uVar22 = (long)pplVar20 - 1;
    if ((uVar22 & (ulong)pplVar20) == 0) {
      pplVar26 = (long **)(uVar22 & (ulong)pplVar9);
    }
    else {
      pplVar26 = pplVar9;
      if (pplVar20 <= pplVar9) {
        uVar5 = 0;
        if (pplVar20 != (long **)0x0) {
          uVar5 = (ulong)pplVar9 / (ulong)pplVar20;
        }
        pplVar26 = (long **)((long)pplVar9 - uVar5 * (long)pplVar20);
      }
    }
    if (((*ppplVar1)[(long)pplVar26] != (long *)0x0) &&
       (plVar27 = (long *)*(*ppplVar1)[(long)pplVar26], plVar27 != (long *)0x0)) {
      if ((uVar22 & (ulong)pplVar20) == 0) {
        do {
          pplVar20 = (long **)plVar27[1];
          if (pplVar20 != pplVar9 && (long **)((ulong)pplVar20 & uVar22) != pplVar26) break;
          if (pplVar20 == pplVar9) {
            bVar4 = *(byte *)(plVar27 + 2);
            ppplVar15 = (long ***)(ulong)(bVar4 >> 1);
            if ((bVar4 & 1) != 0) {
              ppplVar15 = (long ***)plVar27[3];
            }
            if (ppplVar15 == ppplVar13) {
              pvVar18 = (void *)plVar27[4];
              if ((bVar4 & 1) == 0) {
                pvVar18 = (void *)((long)plVar27 + 0x11);
              }
              if ((bVar4 & 1) == 0) {
                if (ppplVar13 == (long ***)0x0) goto LAB_71038d8b3c;
                ppplVar15 = (long ***)0x0;
                while (*(char *)((long)plVar27 + (long)ppplVar15 + 0x11) ==
                       *(char *)((long)ppplVar25 + (long)ppplVar15)) {
                  ppplVar15 = (long ***)((long)ppplVar15 + 1);
                  if ((long ***)(ulong)(bVar4 >> 1) == ppplVar15) goto LAB_71038d8b38;
                }
              }
              else if ((ppplVar13 == (long ***)0x0) ||
                      (iVar7 = memcmp(pvVar18,ppplVar25,(size_t)ppplVar13), iVar7 == 0))
              goto LAB_71038d8b3c;
            }
          }
          plVar27 = (long *)*plVar27;
        } while (plVar27 != (long *)0x0);
      }
      else {
        do {
          pplVar12 = (long **)plVar27[1];
          if (pplVar12 == pplVar9) {
            bVar4 = *(byte *)(plVar27 + 2);
            ppplVar15 = (long ***)(ulong)(bVar4 >> 1);
            if ((bVar4 & 1) != 0) {
              ppplVar15 = (long ***)plVar27[3];
            }
            if (ppplVar15 == ppplVar13) {
              pvVar18 = (void *)plVar27[4];
              if ((bVar4 & 1) == 0) {
                pvVar18 = (void *)((long)plVar27 + 0x11);
              }
              if ((bVar4 & 1) == 0) {
                if (ppplVar13 == (long ***)0x0) goto LAB_71038d8b3c;
                ppplVar15 = (long ***)0x0;
                while (*(char *)((long)plVar27 + (long)ppplVar15 + 0x11) ==
                       *(char *)((long)ppplVar25 + (long)ppplVar15)) {
                  ppplVar15 = (long ***)((long)ppplVar15 + 1);
                  if ((long ***)(ulong)(bVar4 >> 1) == ppplVar15) goto LAB_71038d8b38;
                }
              }
              else if ((ppplVar13 == (long ***)0x0) ||
                      (iVar7 = memcmp(pvVar18,ppplVar25,(size_t)ppplVar13), iVar7 == 0))
              goto LAB_71038d8b3c;
            }
          }
          else {
            if (pplVar20 <= pplVar12) {
              uVar22 = 0;
              if (pplVar20 != (long **)0x0) {
                uVar22 = (ulong)pplVar12 / (ulong)pplVar20;
              }
              pplVar12 = (long **)((long)pplVar12 - uVar22 * (long)pplVar20);
            }
            if (pplVar12 != pplVar26) break;
          }
          plVar27 = (long *)*plVar27;
        } while (plVar27 != (long *)0x0);
      }
    }
  }
LAB_71038d8b50:
  iVar7 = FUN_710392e1f0(&local_68,0x10,(long ****)&DAT_00000140,param_4,param_5,param_6,param_7,
                         param_8);
  if ((iVar7 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) {
    local_88 = (long ****)&DAT_00000140;
    uVar22 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_88);
    if ((uVar22 & 1) != 0) {
      FUN_710392e1f0(&local_68,0x10,(long ****)&DAT_00000140,param_4,param_5,param_6,param_7,param_8
                    );
    }
  }
  nu::VirtualAllocHook(0x140,0x10,local_68);
  pppplVar24 = local_68;
  FUN_71037c3a70(local_68);
  *pppplVar24 = (long ***)&PTR_FUN_7105292008;
  bVar6 = true;
  pppplVar23 = pppplVar24 + 2;
  *pppplVar23 = (long ***)0x0;
  pppplVar24[3] = (long ***)0x0;
  pppplVar24[4] = (long ***)0x0;
  pppplVar24[6] = (long ***)0x0;
  pppplVar24[5] = (long ***)&PTR_FUN_71052395d0;
  pppplVar24[10] = (long ***)&PTR_FUN_71052396f8;
  pppplVar24[0xb] = (long ***)0x0;
  pppplVar24[0xe] = (long ***)(pppplVar24 + 0x11);
  pppplVar24[0xf] = (long ***)0x0;
  *(undefined4 *)(pppplVar24 + 9) = 0;
  pppplVar24[0x10] = (long ***)&DAT_00000004;
  pppplVar24[0x21] = (long ***)0x0;
  *(undefined4 *)(pppplVar24 + 0x22) = 0;
  *(undefined1 *)((long)pppplVar24 + 0x114) = 1;
  pppplVar24[0x23] = (long ***)0x0;
  *(undefined1 *)(pppplVar24 + 0x24) = 0;
  *(undefined4 *)(pppplVar24 + 0x27) = 0;
  pppplVar24[7] = (long ***)0x0;
  pppplVar24[8] = (long ***)0x0;
  pppplVar24[0xc] = (long ***)0x0;
  pppplVar24[0xd] = (long ***)0x0;
  pppplVar24[0x25] = (long ***)0x0;
  pppplVar24[0x26] = (long ***)0x0;
  if (param_2 == (long ***)0x0) {
    plVar27 = (long *)0x0;
    pplVar9 = (long **)0x0;
  }
  else {
    pplVar9 = param_2[1];
    plVar27 = *pplVar9;
    bVar6 = pplVar9 == (long **)0x0;
    if ((pplVar9 != (long **)0x0) && (*pplVar9 == plVar27)) {
      pppplVar24[6] = param_2;
      ppplVar13 = (long ***)param_2[1];
      pppplVar24[7] = ppplVar13;
      ppplVar13 = (long ***)*ppplVar13;
      goto LAB_71038d8c88;
    }
  }
  ppplVar13 = (long ***)0x0;
  pppplVar24[6] = (long ***)0x0;
  pppplVar24[7] = (long ***)0x0;
LAB_71038d8c88:
  pppplVar24[8] = ppplVar13;
  if (pppplVar23 != param_3) {
    param_8 = (long ***)((long)param_3 + 1);
    ppplVar13 = (long ***)(ulong)(*(byte *)param_3 >> 1);
    if ((*(byte *)param_3 & 1) != 0) {
      param_8 = param_3[2];
      ppplVar13 = param_3[1];
    }
    if (ppplVar13 < (long ***)0x16 || (long)ppplVar13 - 0x16U == 0) {
      if (ppplVar13 != (long ***)0x0) {
        memmove((void *)((long)pppplVar24 + 0x11),param_8,(size_t)ppplVar13);
      }
      *(undefined1 *)((long)pppplVar24 + 0x11 + (long)ppplVar13) = 0;
      if (((ulong)*pppplVar23 & 1) == 0) {
        *(char *)pppplVar23 = (char)((int)ppplVar13 << 1);
      }
      else {
        pppplVar24[3] = ppplVar13;
      }
    }
    else {
      param_4 = (byte ****)0x0;
      param_5 = (long ****)0x0;
      param_6 = 0;
      FUN_71037cfe00((ulong *)pppplVar23,0x16,(long)ppplVar13 - 0x16U,(byte ****)0x0,(long ****)0x0,
                     0,(size_t)ppplVar13,param_8);
      param_7 = ppplVar13;
    }
  }
  *(undefined4 *)(pppplVar24 + 0x26) = uVar11;
  *(undefined8 *)((long)pppplVar24 + 0x134) = 0;
  if ((((!bVar6) && (*pplVar9 == plVar27)) &&
      (ppplVar13 = pppplVar24[6], uVar3 = *(uint *)(ppplVar13 + 0xf),
      FUN_71038d8140(&local_88,uVar3 ^ (int)uVar3 >> 0x1f,(long)(ppplVar13 + 0x10)),
      lVar17 = local_80, local_78 != (long *)0x0)) &&
     (((*local_78 == local_70 && (local_80 != 0)) &&
      ((plVar27 = *(long **)(local_80 + 8), plVar27 != (long *)0x0 && (*plVar27 == *plVar27)))))) {
    pppplVar23 = (long ****)(local_80 + 0x18);
    FUN_71038cf200(&local_88,*(uint *)(local_80 + 0x10) ^ (int)*(uint *)(local_80 + 0x10) >> 0x1f,
                   (long)pppplVar23);
    if (((local_78 != (long *)0x0) && (*local_78 == local_70)) &&
       ((local_80 != 0 &&
        ((plVar27 = *(long **)(local_80 + 8), plVar27 != (long *)0x0 && (*plVar27 == *plVar27))))))
    {
      if (*(int *)(pppplVar24 + 0x26) != 1) {
        uVar22 = *(long *)(lVar17 + 0x48) * (ulong)*(uint *)(local_80 + 0x10);
        iVar7 = (int)uVar22;
        if (iVar7 == 0) {
          pppplVar24[0x21] = (long ***)0x0;
          *(undefined4 *)(pppplVar24 + 0x22) = 0;
        }
        else {
          pppplVar23 = (long ****)(uVar22 & 0xffffffff);
          iVar8 = FUN_710392e1f0(&local_68,0x10,pppplVar23,param_4,param_5,param_6,param_7,param_8);
          if (((iVar8 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
             (local_88 = pppplVar23,
             uVar22 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_88),
             (uVar22 & 1) != 0)) {
            FUN_710392e1f0(&local_68,0x10,pppplVar23,param_4,param_5,param_6,param_7,param_8);
          }
          nu::VirtualAllocHook((ulong)pppplVar23,0x10,local_68);
          pppplVar24[0x21] = (long ***)local_68;
          *(int *)(pppplVar24 + 0x22) = iVar7;
          memset(local_68,0,(size_t)pppplVar23);
        }
      }
      plVar27 = FUN_71038d92b0((long *)ppplVar1,(byte *)param_3,pppplVar23,param_4,param_5,param_6,
                               param_7,param_8);
      ppplVar13 = pppplVar24[1];
      plVar10 = (long *)plVar27[1];
      plVar16 = (long *)plVar27[2];
      pplVar9 = *ppplVar13;
      plVar27[1] = (long)pppplVar24;
      plVar27[2] = (long)ppplVar13;
      lVar17 = plVar27[3];
      plVar27[3] = (long)pplVar9;
      if (((plVar16 != (long *)0x0) && (plVar10 != (long *)0x0)) && (*plVar16 == lVar17)) {
        (**(code **)(*plVar10 + 8))();
      }
      if (*(int *)(param_2 + 0xe) != 0) {
        plVar27 = FUN_71038d92b0((long *)ppplVar1,(byte *)param_3,pppplVar23,param_4,param_5,param_6
                                 ,param_7,param_8);
        if (((long *)plVar27[2] == (long *)0x0) || (*(long *)plVar27[2] != plVar27[3])) {
          ppplVar13 = (long ***)0x0;
          ppplVar15 = (long ***)0x0;
          ppplVar25 = (long ***)0x0;
        }
        else {
          ppplVar25 = (long ***)plVar27[1];
          if (ppplVar25 == (long ***)0x0) {
            ppplVar13 = (long ***)0x0;
            ppplVar15 = (long ***)0x0;
          }
          else {
            ppplVar15 = (long ***)ppplVar25[1];
            ppplVar13 = (long ***)*ppplVar15;
          }
        }
        pplVar9 = param_2[0x31];
        pplVar20 = param_2[0x32];
        pplVar26 = param_2[0x33];
        if (pplVar20 < pplVar26) {
          pplVar9 = pplVar9 + (long)pplVar20 * 4;
          *pplVar9 = (long *)&PTR_FUN_7105239610;
          pplVar9[1] = (long *)ppplVar25;
          pplVar9[2] = (long *)ppplVar15;
          pplVar9[3] = (long *)ppplVar13;
          param_2[0x32] = (long **)((long)param_2[0x32] + 1);
        }
        else {
          if (-(long)pplVar26 == -0x7ffffffffffffff) {
            this = (logic_error *)__cxa_allocate_exception(0x10);
            std::logic_error::logic_error(this,"get_next_capacity, allocator\'s max_size reached");
            *(undefined **)this = &DAT_7107b4d010;
                    /* WARNING: Subroutine does not return */
            __cxa_throw(this,&std::length_error::typeinfo,std::length_error::~length_error);
          }
          pplVar12 = pplVar26;
          if (pplVar26 == (long **)0x0) {
            pplVar12 = (long **)0x1;
          }
          pplVar2 = (long **)0x7ffffffffffffff;
          if (pplVar12 <= (long **)(-(long)pplVar26 + 0x7ffffffffffffffU)) {
            pplVar2 = (long **)((long)pplVar12 + (long)pplVar26);
          }
          pppplVar24 = (long ****)((long)pplVar2 << 5);
          iVar7 = FUN_710392e1f0(&local_68,0x10,pppplVar24,param_4,param_5,param_6,param_7,param_8);
          if (((iVar7 == 0xc) && (DAT_710593d2b0 != (long *)0x0)) &&
             (local_88 = pppplVar24,
             uVar22 = (**(code **)(*DAT_710593d2b0 + 0x30))(DAT_710593d2b0,&local_88),
             (uVar22 & 1) != 0)) {
            FUN_710392e1f0(&local_68,0x10,pppplVar24,param_4,param_5,param_6,param_7,param_8);
          }
          pppplVar23 = local_68;
          nu::VirtualAllocHook((ulong)pppplVar24,0x10,local_68);
          pplVar9 = pplVar9 + (long)pplVar20 * 4;
          pplVar20 = param_2[0x31];
          pppplVar24 = local_68;
          if ((pplVar20 != pplVar9) && (pplVar20 != (long **)0x0)) {
            pplVar26 = pplVar20;
            do {
              *pppplVar24 = (long ***)&PTR_FUN_71052395f0;
              pppplVar24[1] = (long ***)pplVar26[1];
              pppplVar24[2] = (long ***)pplVar26[2];
              ppplVar19 = (long ***)pplVar26[3];
              pplVar26 = pplVar26 + 4;
              *pppplVar24 = (long ***)&PTR_FUN_7105239610;
              pppplVar24[3] = ppplVar19;
              pppplVar24 = pppplVar24 + 4;
            } while (pplVar9 != pplVar26);
            pppplVar24 = (long ****)
                         ((long)local_68 +
                         ((long)pplVar9 + (-0x20 - (long)pplVar20) & 0xffffffffffffffe0U) + 0x20);
          }
          pppplVar21 = pppplVar24 + 4;
          *pppplVar24 = (long ***)&PTR_FUN_7105239610;
          pppplVar24[1] = ppplVar25;
          pppplVar24[2] = ppplVar15;
          pppplVar24[3] = ppplVar13;
          if (pplVar20 != (long **)0x0) {
            pplVar12 = param_2[0x32];
            pplVar26 = pplVar20 + (long)pplVar12 * 4;
            if (pplVar26 != pplVar9) {
              lVar17 = -0x20 - (long)pplVar9;
              pppplVar24 = pppplVar21;
              do {
                *pppplVar24 = (long ***)&PTR_FUN_71052395f0;
                pppplVar24[1] = (long ***)pplVar9[1];
                pppplVar24[2] = (long ***)pplVar9[2];
                ppplVar13 = (long ***)pplVar9[3];
                pplVar9 = pplVar9 + 4;
                *pppplVar24 = (long ***)&PTR_FUN_7105239610;
                pppplVar24[3] = ppplVar13;
                pppplVar24 = pppplVar24 + 4;
              } while (pplVar26 != pplVar9);
              pplVar12 = param_2[0x32];
              pppplVar21 = (long ****)
                           ((long)pppplVar21 +
                           ((long)pplVar26 + lVar17 & 0xffffffffffffffe0U) + 0x20);
            }
            for (; pplVar12 != (long **)0x0; pplVar12 = (long **)((long)pplVar12 + -1)) {
              (*(code *)**pplVar20)(pplVar20);
              pplVar20 = pplVar20 + 4;
            }
            ppplVar13 = (long ***)param_2[0x31];
            if (ppplVar13 != param_2 + 0x34) {
              nu::VirtualFreeHook(ppplVar13);
              FUN_710392eb40((ulong)ppplVar13);
            }
          }
          param_2[0x33] = pplVar2;
          param_2[0x31] = (long **)local_68;
          param_2[0x32] = (long **)((long)pppplVar21 - (long)local_68 >> 5);
        }
      }
      plVar27 = FUN_71038d92b0((long *)ppplVar1,(byte *)param_3,pppplVar23,param_4,param_5,param_6,
                               param_7,param_8);
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      *param_1 = &PTR_FUN_7105239610;
      if ((long *)plVar27[2] == (long *)0x0) {
        return;
      }
      if (*(long *)plVar27[2] != plVar27[3]) {
        return;
      }
      lVar17 = plVar27[1];
      param_1[1] = lVar17;
      if (lVar17 != 0) {
        puVar14 = *(undefined8 **)(lVar17 + 8);
        param_1[2] = puVar14;
        param_1[3] = *puVar14;
        return;
      }
      param_1[2] = 0;
      param_1[3] = 0;
      return;
    }
  }
  (*(code *)(*pppplVar24)[1])(pppplVar24);
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = &PTR_FUN_7105239610;
  param_1[1] = 0;
  return;
LAB_71038d8b38:
  if (plVar27 != (long *)0x0) {
LAB_71038d8b3c:
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = &PTR_FUN_7105239610;
    param_1[1] = 0;
    return;
  }
  goto LAB_71038d8b50;
}

