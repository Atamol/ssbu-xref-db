// addr:      7100011c00
// offset:    0x11c00
// name:      FUN_7100011c00
// mangled:   
// signature: int __cdecl FUN_7100011c00(long param_1, undefined8 * param_2, long * param_3, FILE * param_4, ulong * param_5, undefined8 param_6, undefined8 param_7, undefined8 param_8)


/* WARNING: Removing unreachable block (ram,0x007100012000) */
/* WARNING: Removing unreachable block (ram,0x007100012174) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_7100011c00(long param_1,undefined8 *param_2,long *param_3,FILE *param_4,ulong *param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char **ppcVar1;
  long *plVar2;
  long lVar3;
  FILE *__stream;
  bool bVar4;
  int iVar5;
  _IO_FILE *p_Var6;
  char *pcVar7;
  FILE *pFVar8;
  undefined1 *puVar9;
  char *pcVar10;
  undefined8 *puVar11;
  ulong uVar12;
  _IO_FILE *p_Var13;
  char *pcVar14;
  undefined8 *puVar15;
  long *plVar16;
  char *pcVar17;
  undefined1 auStack_2d8 [16];
  uint local_2c8;
  long local_2a8;
  undefined8 local_d8;
  char *local_d0;
  char *pcStack_c8;
  char acStack_c0 [24];
  char *local_a8;
  char *local_a0;
  char *pcStack_98;
  _IO_marker *local_78;
  _IO_FILE *local_70;
  
  local_78 = (_IO_marker *)0x0;
  local_70 = (_IO_FILE *)0x0;
  *param_2 = 0;
  if (param_3 == (long *)0x0) {
    iVar5 = 0;
  }
  else {
    local_d0 = (char *)0x2d2d2d2d2d2d2d2d;
    pcStack_c8 = (char *)0x2d2d2d2d2d2d2d2d;
    local_d8._0_4_ = 0x2d2d2d2d;
    local_d8._4_4_ = 0x2d2d2d2d;
    FUN_7100015680(param_1,acStack_c0,0x11,param_4,param_5,param_6,param_7,param_8);
    pcVar10 = "Content-Type: multipart/form-data";
    if (param_4 != (FILE *)0x0) {
      pcVar10 = (char *)param_4;
    }
    puVar11 = &local_d8;
    iVar5 = FUN_7100012320(&stack0xffffffffffffff90,(long *)0x0,(byte *)"%s; boundary=%s\r\n",
                           pcVar10,puVar11,param_6,param_7,param_8);
    p_Var13 = local_70;
    __stream = _stdin;
    if (iVar5 == 0) {
LAB_7100011cc0:
      if ((local_78 == (_IO_marker *)0x0) ||
         (iVar5 = FUN_7100012320(&stack0xffffffffffffff90,(long *)&stack0xffffffffffffff88,
                                 &DAT_710426ee5d,pcVar10,puVar11,param_6,param_7,param_8),
         iVar5 == 0)) {
        pcVar10 = (char *)&local_d8;
        iVar5 = FUN_7100012320(&stack0xffffffffffffff90,(long *)&stack0xffffffffffffff88,
                               (byte *)"--%s\r\n",pcVar10,puVar11,param_6,param_7,param_8);
        if ((iVar5 == 0) &&
           (iVar5 = FUN_7100012320(&stack0xffffffffffffff90,(long *)&stack0xffffffffffffff88,
                                   (byte *)"Content-Disposition: form-data; name=\"",pcVar10,puVar11
                                   ,param_6,param_7,param_8), iVar5 == 0)) {
          pcVar17 = (char *)param_3[2];
          if ((long)((ulong)local_78 | (ulong)pcVar17) < 0) {
            iVar5 = 0x2b;
          }
          else {
            pcVar14 = (char *)param_3[1];
            p_Var6 = (_IO_FILE *)FUN_7100027290();
            if (p_Var6 == (_IO_FILE *)0x0) {
joined_r0x0071000122f8:
              iVar5 = 0x1b;
            }
            else {
              *(undefined8 *)p_Var6 = 0;
              if (pcVar17 == (char *)0x0) {
                pcVar17 = (char *)strlen(pcVar14);
              }
              pcVar7 = (char *)FUN_7100027290();
              p_Var6->_IO_read_end = pcVar7;
              if (pcVar7 == (char *)0x0) {
                FUN_71000272a0();
                iVar5 = 0x1b;
              }
              else {
                memcpy(pcVar7,pcVar14,(size_t)pcVar17);
                p_Var6->_IO_read_end[(long)pcVar17] = '\0';
                p_Var6->_IO_read_base = pcVar17;
                *(undefined4 *)&p_Var6->_IO_read_ptr = 1;
                local_78 = (_IO_marker *)(pcVar17 + (long)&local_78->_next);
                if (local_70 != (_IO_FILE *)0x0) {
                  *(_IO_FILE **)local_70 = p_Var6;
                }
                local_70 = p_Var6;
                iVar5 = FUN_7100012320(&stack0xffffffffffffff90,(long *)&stack0xffffffffffffff88,
                                       &DAT_7104317d17,pcVar10,puVar11,param_6,param_7,param_8);
                if (iVar5 == 0) {
                  plVar16 = param_3;
                  if (param_3[9] != 0) {
                    local_a0 = (char *)0x2d2d2d2d2d2d2d2d;
                    pcStack_98 = (char *)0x2d2d2d2d2d2d2d2d;
                    local_a8 = (char *)0x2d2d2d2d2d2d2d2d;
                    FUN_7100015680(param_1,&stack0xffffffffffffff70,0x11,pcVar10,puVar11,param_6,
                                   param_7,param_8);
                    pcVar10 = (char *)&stack0xffffffffffffff58;
                    iVar5 = FUN_7100012320(&stack0xffffffffffffff90,(long *)&stack0xffffffffffffff88
                                           ,(byte *)
                                            "\r\nContent-Type: multipart/mixed; boundary=%s\r\n",
                                           pcVar10,puVar11,param_6,param_7,param_8);
                    if (iVar5 != 0) goto joined_r0x0071000122f8;
                  }
LAB_7100011e04:
                  if (param_3[9] == 0) {
                    if (((param_3[10] & 0x51U) != 0) &&
                       (((param_3[10] & 1U) != 0 || (param_3[0xb] != 0)))) {
                      iVar5 = FUN_7100012440((long)param_3,&stack0xffffffffffffff90,
                                             (long *)&stack0xffffffffffffff88,pcVar10,puVar11,
                                             param_6,param_7,param_8);
                      goto joined_r0x007100012030;
                    }
                  }
                  else {
                    puVar9 = (undefined1 *)&stack0xffffffffffffff58;
                    iVar5 = FUN_7100012320(&stack0xffffffffffffff90,(long *)&stack0xffffffffffffff88
                                           ,(byte *)"\r\n--%s\r\nContent-Disposition: attachment",
                                           puVar9,puVar11,param_6,param_7,param_8);
                    if (iVar5 != 0) goto joined_r0x0071000122f8;
                    iVar5 = FUN_7100012440((long)plVar16,&stack0xffffffffffffff90,
                                           (long *)&stack0xffffffffffffff88,puVar9,puVar11,param_6,
                                           param_7,param_8);
joined_r0x007100012030:
                    if (iVar5 != 0) goto joined_r0x0071000122f8;
                  }
                  pcVar10 = (char *)plVar16[7];
                  if (((FILE *)pcVar10 != (FILE *)0x0) &&
                     (iVar5 = FUN_7100012320(&stack0xffffffffffffff90,
                                             (long *)&stack0xffffffffffffff88,
                                             (byte *)"\r\nContent-Type: %s",pcVar10,puVar11,param_6,
                                             param_7,param_8), iVar5 != 0))
                  goto joined_r0x0071000122f8;
                  for (puVar15 = (undefined8 *)plVar16[8]; puVar15 != (undefined8 *)0x0;
                      puVar15 = (undefined8 *)puVar15[1]) {
                    pcVar10 = (char *)*puVar15;
                    iVar5 = FUN_7100012320(&stack0xffffffffffffff90,(long *)&stack0xffffffffffffff88
                                           ,&DAT_710437b4b7,pcVar10,puVar11,param_6,param_7,param_8)
                    ;
                    if (iVar5 != 0) goto joined_r0x0071000122f8;
                  }
                  iVar5 = FUN_7100012320(&stack0xffffffffffffff90,(long *)&stack0xffffffffffffff88,
                                         &DAT_71043073d1,pcVar10,puVar11,param_6,param_7,param_8);
                  if (iVar5 != 0) goto joined_r0x0071000122f8;
                  uVar12 = param_3[10];
                  if ((uVar12 & 3) != 0) {
                    iVar5 = strcmp("-",(char *)plVar16[3]);
                    pFVar8 = __stream;
                    if (iVar5 != 0) {
                      pFVar8 = (FILE *)FUN_7100027980();
                    }
                    if (pFVar8 == (FILE *)0x0) {
                      if (param_1 != 0) {
                        FUN_7100016040(param_1,(byte *)"couldn\'t open file \"%s\"",plVar16[3],
                                       pcVar10,puVar11,param_6,param_7,param_8);
                      }
                      *param_2 = 0;
                      iVar5 = 0x1a;
                      goto joined_r0x0071000122f8;
                    }
                    if (pFVar8 == __stream) {
                      while (pcVar10 = (char *)__stream, pcVar17 = (char *)FUN_71000279b0(),
                            p_Var6 = local_70, pcVar17 != (char *)0x0) {
                        if ((long)((ulong)local_78 | (ulong)pcVar17) < 0) {
                          iVar5 = 0x2b;
                          goto LAB_71000121b0;
                        }
                        p_Var6 = (_IO_FILE *)FUN_7100027290();
                        if (p_Var6 == (_IO_FILE *)0x0) {
                          iVar5 = 0x1b;
                          goto LAB_71000121b0;
                        }
                        *(undefined8 *)p_Var6 = 0;
                        pcVar14 = (char *)FUN_7100027290();
                        p_Var6->_IO_read_end = pcVar14;
                        if (pcVar14 == (char *)0x0) {
                          FUN_71000272a0();
                          iVar5 = 0x1b;
                          goto LAB_71000121b0;
                        }
                        memcpy(pcVar14,auStack_2d8,(size_t)pcVar17);
                        p_Var6->_IO_read_end[(long)pcVar17] = '\0';
                        p_Var6->_IO_read_base = pcVar17;
                        *(undefined4 *)&p_Var6->_IO_read_ptr = 2;
                        local_78 = (_IO_marker *)(pcVar17 + (long)&local_78->_next);
                        if (local_70 != (_IO_FILE *)0x0) {
                          *(_IO_FILE **)local_70 = p_Var6;
                        }
                        local_70 = p_Var6;
                        iVar5 = feof(__stream);
                        p_Var6 = local_70;
                        if ((iVar5 != 0) ||
                           (iVar5 = ferror(__stream), p_Var6 = local_70, iVar5 != 0)) break;
                      }
                    }
                    else {
                      FUN_7100027950();
                      if ((long)local_78 < 0) goto LAB_71000122e0;
                      pcVar17 = (char *)plVar16[3];
                      p_Var6 = (_IO_FILE *)FUN_7100027290();
                      if (p_Var6 == (_IO_FILE *)0x0) goto joined_r0x0071000122f8;
                      *(undefined8 *)p_Var6 = 0;
                      p_Var6->_IO_read_end = pcVar17;
                      *(undefined4 *)&p_Var6->_IO_read_ptr = 4;
                      iVar5 = strcmp("-",pcVar17);
                      if (iVar5 != 0) {
                        iVar5 = FUN_7100027a40();
                        if ((iVar5 != 0) || ((local_2c8 & 0xf000) == 0x4000)) {
                          FUN_71000272a0();
                          goto LAB_71000122e0;
                        }
                        local_78 = (_IO_marker *)((long)&local_78->_next + local_2a8);
                      }
LAB_71000120e8:
                      if (local_70 != (_IO_FILE *)0x0) {
                        *(_IO_FILE **)local_70 = p_Var6;
                      }
                    }
LAB_7100012108:
                    local_70 = p_Var6;
                    iVar5 = 0;
                    plVar2 = plVar16 + 9;
                    plVar16 = (long *)*plVar2;
                    if ((long *)*plVar2 == (long *)0x0) goto LAB_71000121b0;
                    goto LAB_7100011e04;
                  }
                  if (((uint)uVar12 >> 4 & 1) == 0) {
                    bVar4 = (uVar12 & 0x80) != 0;
                    if (((uint)uVar12 >> 6 & 1) == 0) {
                      lVar3 = 0x20;
                      if (bVar4) {
                        lVar3 = 0x68;
                      }
                      pcVar17 = *(char **)((long)param_3 + lVar3);
                      if (-1 < (long)((ulong)local_78 | (ulong)pcVar17)) {
                        pcVar14 = (char *)param_3[3];
                        p_Var6 = (_IO_FILE *)FUN_7100027290();
                        goto joined_r0x007100012090;
                      }
                      goto LAB_71000122e0;
                    }
                    lVar3 = 0x20;
                    if (bVar4) {
                      lVar3 = 0x68;
                    }
                    uVar12 = *(ulong *)((long)param_3 + lVar3);
                    if (-1 < (long)((ulong)local_78 | uVar12)) {
                      pcVar17 = (char *)param_3[0xc];
                      p_Var6 = (_IO_FILE *)FUN_7100027290();
                      if (p_Var6 != (_IO_FILE *)0x0) {
                        *(undefined8 *)p_Var6 = 0;
                        p_Var6->_IO_read_end = pcVar17;
                        *(undefined4 *)&p_Var6->_IO_read_ptr = 3;
                        local_78 = (_IO_marker *)((long)&local_78->_next + uVar12);
                        if (local_70 != (_IO_FILE *)0x0) {
                          *(_IO_FILE **)local_70 = p_Var6;
                        }
                        goto LAB_7100012108;
                      }
                      goto joined_r0x0071000122f8;
                    }
                  }
                  else {
                    pcVar17 = (char *)param_3[6];
                    if (-1 < (long)((ulong)local_78 | (ulong)pcVar17)) {
                      pcVar14 = (char *)param_3[5];
                      p_Var6 = (_IO_FILE *)FUN_7100027290();
joined_r0x007100012090:
                      if (p_Var6 != (_IO_FILE *)0x0) {
                        *(undefined8 *)p_Var6 = 0;
                        if (pcVar17 == (char *)0x0) {
                          pcVar17 = (char *)strlen(pcVar14);
                        }
                        pcVar7 = (char *)FUN_7100027290();
                        p_Var6->_IO_read_end = pcVar7;
                        if (pcVar7 != (char *)0x0) {
                          memcpy(pcVar7,pcVar14,(size_t)pcVar17);
                          p_Var6->_IO_read_end[(long)pcVar17] = '\0';
                          p_Var6->_IO_read_base = pcVar17;
                          *(undefined4 *)&p_Var6->_IO_read_ptr = 2;
                          local_78 = (_IO_marker *)(pcVar17 + (long)&local_78->_next);
                          goto LAB_71000120e8;
                        }
                        FUN_71000272a0();
                      }
                      goto joined_r0x0071000122f8;
                    }
                  }
LAB_71000122e0:
                  iVar5 = 0x2b;
                }
              }
            }
          }
        }
      }
      goto joined_r0x0071000122f8;
    }
  }
  return iVar5;
LAB_71000121b0:
  if (iVar5 != 0) goto joined_r0x0071000122f8;
  if (param_3[9] != 0) {
    pcVar10 = (char *)&stack0xffffffffffffff58;
    iVar5 = FUN_7100012320(&stack0xffffffffffffff90,(long *)&stack0xffffffffffffff88,
                           (byte *)"\r\n--%s--",pcVar10,puVar11,param_6,param_7,param_8);
    if (iVar5 != 0) goto joined_r0x0071000122f8;
  }
  param_3 = (long *)*param_3;
  if (param_3 == (long *)0x0) {
    iVar5 = FUN_7100012320(&stack0xffffffffffffff90,(long *)&stack0xffffffffffffff88,
                           (byte *)"\r\n--%s--\r\n",&local_d8,puVar11,param_6,param_7,param_8);
    if (iVar5 == 0) {
      *param_5 = (ulong)local_78;
      *param_2 = p_Var13;
      return 0;
    }
joined_r0x0071000122f8:
    while (p_Var13 != (_IO_FILE *)0x0) {
      ppcVar1 = &p_Var13->_IO_read_ptr;
      p_Var13 = *(_IO_FILE **)p_Var13;
      if (*(uint *)ppcVar1 < 3) {
        FUN_71000272a0();
      }
      FUN_71000272a0();
    }
    return iVar5;
  }
  goto LAB_7100011cc0;
}

