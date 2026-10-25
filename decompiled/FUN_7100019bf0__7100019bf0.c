// addr:      7100019bf0
// offset:    0x19bf0
// name:      FUN_7100019bf0
// mangled:   
// signature: ulong __cdecl FUN_7100019bf0(long param_1, int param_2, long * param_3, long param_4, char * param_5, undefined1 * param_6, char * param_7, long param_8)


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_7100019bf0(long param_1,int param_2,long *param_3,long param_4,char *param_5,
                    undefined1 *param_6,char *param_7,long param_8)

{
  long lVar1;
  byte bVar2;
  ulong uVar3;
  bool bVar4;
  undefined2 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  void *__dest;
  ulong uVar10;
  size_t sVar11;
  char *__dest_00;
  char *__src;
  char *__src_00;
  size_t sVar12;
  char *pcVar13;
  undefined8 *puVar14;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  uint *puVar18;
  ulong *puVar19;
  long lVar20;
  undefined8 uVar21;
  char *pcVar22;
  byte *pbVar23;
  void *__src_01;
  char *local_58;
  ulong local_50 [2];
  
  uVar6 = 4;
  if (param_2 < 0x2711) {
    switch(param_2) {
    case 3:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        puVar14 = (undefined8 *)(param_3[1] + (long)iVar7);
      }
      else {
        puVar14 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar14 + 1);
      }
      uVar6 = 0;
      *(undefined8 *)(param_1 + 0x2a0) = *puVar14;
      break;
    default:
      goto switchD_7100019c4c_caseD_2713;
    case 0xd:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        plVar15 = (long *)(param_3[1] + (long)iVar7);
      }
      else {
        plVar15 = (long *)*param_3;
        *param_3 = (long)(plVar15 + 1);
      }
      uVar6 = 0;
      *(long *)(param_1 + 0x3a8) = *plVar15 * 1000;
      break;
    case 0xe:
switchD_7100019d74_caseD_75a3:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        puVar14 = (undefined8 *)(param_3[1] + (long)iVar7);
      }
      else {
        puVar14 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar14 + 1);
      }
      uVar6 = 0;
      *(undefined8 *)(param_1 + 0x3d8) = *puVar14;
      break;
    case 0x13:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        puVar14 = (undefined8 *)(param_3[1] + (long)iVar7);
      }
      else {
        puVar14 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar14 + 1);
      }
      uVar6 = 0;
      *(undefined8 *)(param_1 + 0x3e0) = *puVar14;
      break;
    case 0x14:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        puVar14 = (undefined8 *)(param_3[1] + (long)iVar7);
      }
      else {
        puVar14 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar14 + 1);
      }
      uVar6 = 0;
      *(undefined8 *)(param_1 + 1000) = *puVar14;
      break;
    case 0x15:
switchD_7100019d74_caseD_75a4:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        puVar14 = (undefined8 *)(param_3[1] + (long)iVar7);
      }
      else {
        puVar14 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar14 + 1);
      }
      uVar6 = 0;
      *(undefined8 *)(param_1 + 0x400) = *puVar14;
      break;
    case 0x1b:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        plVar15 = (long *)(param_3[1] + (long)iVar7);
      }
      else {
        plVar15 = (long *)*param_3;
        *param_3 = (long)(plVar15 + 1);
      }
      uVar6 = 0;
      *(bool *)(param_1 + 0x422) = *plVar15 != 0;
      break;
    case 0x20:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        puVar19 = (ulong *)(param_3[1] + (long)iVar7);
      }
      else {
        puVar19 = (ulong *)*param_3;
        *param_3 = (long)(puVar19 + 1);
      }
      uVar10 = *puVar19;
      uVar6 = 0;
      *(ulong *)(param_1 + 0x498) = uVar10 & 0xffff;
      *(ulong *)(param_1 + 0x4a0) = uVar10 & 0xffff0000;
      break;
    case 0x21:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        puVar14 = (undefined8 *)(param_3[1] + (long)iVar7);
      }
      else {
        puVar14 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar14 + 1);
      }
      uVar6 = 0;
      *(int *)(param_1 + 0x470) = (int)*puVar14;
      break;
    case 0x22:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        puVar14 = (undefined8 *)(param_3[1] + (long)iVar7);
      }
      else {
        puVar14 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar14 + 1);
      }
      uVar6 = 0;
      *(undefined8 *)(param_1 + 0x478) = *puVar14;
      break;
    case 0x29:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        plVar15 = (long *)(param_3[1] + (long)iVar7);
      }
      else {
        plVar15 = (long *)*param_3;
        *param_3 = (long)(plVar15 + 1);
      }
      uVar6 = 0;
      *(bool *)(param_1 + 0x6c8) = *plVar15 != 0;
      break;
    case 0x2a:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        plVar15 = (long *)(param_3[1] + (long)iVar7);
      }
      else {
        plVar15 = (long *)*param_3;
        *param_3 = (long)(plVar15 + 1);
      }
      uVar6 = 0;
      *(bool *)(param_1 + 0x6bd) = *plVar15 != 0;
      break;
    case 0x2b:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        plVar15 = (long *)(param_3[1] + (long)iVar7);
      }
      else {
        plVar15 = (long *)*param_3;
        *param_3 = (long)(plVar15 + 1);
      }
      lVar16 = *plVar15;
      *(bool *)(param_1 + 0x6b7) = lVar16 != 0;
      uVar6 = 0;
      if (lVar16 == 0) {
        *(uint *)(param_1 + 0xa08) = *(uint *)(param_1 + 0xa08) & 0xffffffef;
      }
      else {
        *(uint *)(param_1 + 0xa08) = *(uint *)(param_1 + 0xa08) | 0x10;
      }
      break;
    case 0x2c:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        plVar15 = (long *)(param_3[1] + (long)iVar7);
      }
      else {
        plVar15 = (long *)*param_3;
        *param_3 = (long)(plVar15 + 1);
      }
      uVar6 = 0;
      *(bool *)(param_1 + 0x6c0) = *plVar15 != 0;
      break;
    case 0x2d:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        plVar15 = (long *)(param_3[1] + (long)iVar7);
      }
      else {
        plVar15 = (long *)*param_3;
        *param_3 = (long)(plVar15 + 1);
      }
      uVar6 = 0;
      *(bool *)(param_1 + 0x6b8) = *plVar15 != 0;
      break;
    case 0x2e:
    case 0x36:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        plVar15 = (long *)(param_3[1] + (long)iVar7);
      }
      else {
        plVar15 = (long *)*param_3;
        *param_3 = (long)(plVar15 + 1);
      }
      lVar16 = *plVar15;
      *(bool *)(param_1 + 0x6c1) = lVar16 != 0;
      if (lVar16 == 0) {
LAB_710001db3c:
        uVar6 = 0;
        *(undefined4 *)(param_1 + 0x480) = 1;
        break;
      }
      uVar9 = 4;
      goto LAB_710001bf38;
    case 0x2f:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        lVar16 = *(long *)(param_3[1] + (long)iVar7);
      }
      else {
        plVar15 = (long *)*param_3;
        *param_3 = (long)(plVar15 + 1);
        lVar16 = *plVar15;
      }
      if (lVar16 == 0) goto LAB_710001db3c;
      uVar9 = 2;
LAB_710001bf38:
      uVar6 = 0;
      *(undefined4 *)(param_1 + 0x480) = uVar9;
      *(undefined1 *)(param_1 + 0x6c0) = 0;
      break;
    case 0x30:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        plVar15 = (long *)(param_3[1] + (long)iVar7);
      }
      else {
        plVar15 = (long *)*param_3;
        *param_3 = (long)(plVar15 + 1);
      }
      uVar6 = 0;
      *(bool *)(param_1 + 0x6b5) = *plVar15 != 0;
      break;
    case 0x32:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        plVar15 = (long *)(param_3[1] + (long)iVar7);
      }
      else {
        plVar15 = (long *)*param_3;
        *param_3 = (long)(plVar15 + 1);
      }
      uVar6 = 0;
      *(bool *)(param_1 + 0x6b4) = *plVar15 != 0;
      break;
    case 0x33:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        puVar14 = (undefined8 *)(param_3[1] + (long)iVar7);
      }
      else {
        puVar14 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar14 + 1);
      }
      uVar6 = 0;
      *(int *)(param_1 + 0x6c4) = (int)*puVar14;
      break;
    case 0x34:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        plVar15 = (long *)(param_3[1] + (long)iVar7);
      }
      else {
        plVar15 = (long *)*param_3;
        *param_3 = (long)(plVar15 + 1);
      }
      uVar6 = 0;
      *(bool *)(param_1 + 0x6ba) = *plVar15 != 0;
      break;
    case 0x35:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        plVar15 = (long *)(param_3[1] + (long)iVar7);
      }
      else {
        plVar15 = (long *)*param_3;
        *param_3 = (long)(plVar15 + 1);
      }
      uVar6 = 0;
      *(bool *)(param_1 + 0x6b3) = *plVar15 != 0;
      break;
    case 0x3a:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        plVar15 = (long *)(param_3[1] + (long)iVar7);
      }
      else {
        plVar15 = (long *)*param_3;
        *param_3 = (long)(plVar15 + 1);
      }
      uVar6 = 0;
      *(bool *)(param_1 + 0x6bf) = *plVar15 != 0;
      break;
    case 0x3b:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        puVar14 = (undefined8 *)(param_3[1] + (long)iVar7);
      }
      else {
        puVar14 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar14 + 1);
      }
      uVar6 = 0;
      *(undefined8 *)(param_1 + 0x278) = *puVar14;
      break;
    case 0x3c:
switchD_7100019d74_caseD_75a8:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        lVar16 = *(long *)(param_3[1] + (long)iVar7);
        if (*(long *)(param_1 + 0x2f0) < lVar16) {
LAB_7100019e94:
          if (*(long *)(param_1 + 0x2e0) == *(long *)(param_1 + 0x8d0)) {
            FUN_71000272a0();
            *(undefined8 *)(param_1 + 0x8d0) = 0;
            *(undefined8 *)(param_1 + 0x2e0) = 0;
          }
        }
      }
      else {
        plVar15 = (long *)*param_3;
        *param_3 = (long)(plVar15 + 1);
        lVar16 = *plVar15;
        if (*(long *)(param_1 + 0x2f0) < lVar16) goto LAB_7100019e94;
      }
      uVar6 = 0;
      *(long *)(param_1 + 0x2f0) = lVar16;
      break;
    case 0x3d:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        plVar15 = (long *)(param_3[1] + (long)iVar7);
      }
      else {
        plVar15 = (long *)*param_3;
        *param_3 = (long)(plVar15 + 1);
      }
      uVar6 = 0;
      *(bool *)(param_1 + 0x6b2) = *plVar15 != 0;
      break;
    case 0x40:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        plVar15 = (long *)(param_3[1] + (long)iVar7);
      }
      else {
        plVar15 = (long *)*param_3;
        *param_3 = (long)(plVar15 + 1);
      }
      uVar6 = 0;
      *(bool *)(param_1 + 0x4a8) = *plVar15 != 0;
      break;
    case 0x44:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        puVar14 = (undefined8 *)(param_3[1] + (long)iVar7);
      }
      else {
        puVar14 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar14 + 1);
      }
      uVar6 = 0;
      *(undefined8 *)(param_1 + 0x2d0) = *puVar14;
      break;
    case 0x45:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        plVar15 = (long *)(param_3[1] + (long)iVar7);
      }
      else {
        plVar15 = (long *)*param_3;
        *param_3 = (long)(plVar15 + 1);
      }
      uVar6 = 0;
      *(bool *)(param_1 + 0x6b1) = *plVar15 != 0;
      break;
    case 0x47:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        puVar14 = (undefined8 *)(param_3[1] + (long)iVar7);
      }
      else {
        puVar14 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar14 + 1);
      }
      uVar6 = 0;
      *(undefined8 *)(param_1 + 0x958) = *puVar14;
      break;
    case 0x4a:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        plVar15 = (long *)(param_3[1] + (long)iVar7);
      }
      else {
        plVar15 = (long *)*param_3;
        *param_3 = (long)(plVar15 + 1);
      }
      uVar6 = 0;
      *(bool *)(param_1 + 0x6cb) = *plVar15 != 0;
      break;
    case 0x4b:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        plVar15 = (long *)(param_3[1] + (long)iVar7);
      }
      else {
        plVar15 = (long *)*param_3;
        *param_3 = (long)(plVar15 + 1);
      }
      uVar6 = 0;
      *(bool *)(param_1 + 0x6ca) = *plVar15 != 0;
      break;
    case 0x4e:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        plVar15 = (long *)(param_3[1] + (long)iVar7);
      }
      else {
        plVar15 = (long *)*param_3;
        *param_3 = (long)(plVar15 + 1);
      }
      uVar6 = 0;
      *(long *)(param_1 + 0x3b0) = *plVar15 * 1000;
      break;
    case 0x50:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        lVar16 = *(long *)(param_3[1] + (long)iVar7);
      }
      else {
        plVar15 = (long *)*param_3;
        *param_3 = (long)(plVar15 + 1);
        lVar16 = *plVar15;
      }
      if (lVar16 != 0) {
        uVar6 = 0;
        *(undefined2 *)(param_1 + 0x6c0) = 0;
        *(undefined4 *)(param_1 + 0x480) = 1;
        break;
      }
      goto LAB_710001e2dc;
    case 0x51:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        lVar16 = *(long *)(param_3[1] + (long)iVar7);
      }
      else {
        plVar15 = (long *)*param_3;
        *param_3 = (long)(plVar15 + 1);
        lVar16 = *plVar15;
      }
      if (lVar16 != 1) {
        uVar6 = 0;
        *(bool *)(param_1 + 0x4a9) = lVar16 != 0;
        break;
      }
      goto LAB_710001b8fc;
    case 0x54:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        lVar16 = *(long *)(param_3[1] + (long)iVar7);
      }
      else {
        plVar15 = (long *)*param_3;
        *param_3 = (long)(plVar15 + 1);
        lVar16 = *plVar15;
      }
      if (lVar16 < 3) {
        uVar6 = 0;
        *(long *)(param_1 + 0x488) = lVar16;
      }
      else {
        uVar6 = 1;
      }
      break;
    case 0x55:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        plVar15 = (long *)(param_3[1] + (long)iVar7);
      }
      else {
        plVar15 = (long *)*param_3;
        *param_3 = (long)(plVar15 + 1);
      }
      uVar6 = 0;
      *(bool *)(param_1 + 0x6cc) = *plVar15 != 0;
      break;
    case 0x5a:
      uVar10 = FUN_71000263b0();
      return uVar10;
    case 0x5b:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        plVar15 = (long *)(param_3[1] + (long)iVar7);
      }
      else {
        plVar15 = (long *)*param_3;
        *param_3 = (long)(plVar15 + 1);
      }
      uVar6 = 0;
      *(bool *)(param_1 + 0x6dd) = *plVar15 != 0;
      break;
    case 0x5c:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        puVar14 = (undefined8 *)(param_3[1] + (long)iVar7);
      }
      else {
        puVar14 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar14 + 1);
      }
      uVar6 = 0;
      *(undefined8 *)(param_1 + 0x668) = *puVar14;
      break;
    case 0x60:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        plVar15 = (long *)(param_3[1] + (long)iVar7);
      }
      else {
        plVar15 = (long *)*param_3;
        *param_3 = (long)(plVar15 + 1);
      }
      uVar6 = 0;
      *(bool *)(param_1 + 0x421) = *plVar15 != 0;
      break;
    case 0x62:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        lVar16 = *(long *)(param_3[1] + (long)iVar7);
        if (lVar16 < 0x80001) goto LAB_710001dc8c;
LAB_710001abac:
        lVar20 = 0x80000;
        if (*(long *)(param_1 + 0x670) != 0x80000) goto LAB_710001dcb0;
      }
      else {
        plVar15 = (long *)*param_3;
        *param_3 = (long)(plVar15 + 1);
        lVar16 = *plVar15;
        if (0x80000 < lVar16) goto LAB_710001abac;
LAB_710001dc8c:
        lVar1 = lVar16;
        if (lVar16 < 0x401) {
          lVar1 = 0x400;
        }
        lVar20 = 0x4000;
        if (0 < lVar16) {
          lVar20 = lVar1;
        }
        if (lVar20 != *(long *)(param_1 + 0x670)) {
LAB_710001dcb0:
          lVar16 = FUN_71000272b0();
          if (lVar16 == 0) {
            uVar6 = 0x1b;
            *(long *)(param_1 + 0x670) = lVar20;
          }
          else {
            uVar6 = 0;
            *(long *)(param_1 + 0xb98) = lVar16;
            *(long *)(param_1 + 0x670) = lVar20;
          }
          break;
        }
      }
      uVar6 = 0;
      *(long *)(param_1 + 0x670) = lVar20;
      break;
    case 99:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        plVar15 = (long *)(param_3[1] + (long)iVar7);
      }
      else {
        plVar15 = (long *)*param_3;
        *param_3 = (long)(plVar15 + 1);
      }
      uVar6 = 0;
      *(bool *)(param_1 + 0x6dc) = *plVar15 != 0;
      break;
    case 0x65:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        puVar14 = (undefined8 *)(param_3[1] + (long)iVar7);
      }
      else {
        puVar14 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar14 + 1);
      }
      uVar6 = 0;
      *(int *)(param_1 + 0x660) = (int)*puVar14;
      break;
    case 0x69:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        plVar15 = (long *)(param_3[1] + (long)iVar7);
      }
      else {
        plVar15 = (long *)*param_3;
        *param_3 = (long)(plVar15 + 1);
      }
      uVar6 = 0;
      *(bool *)(param_1 + 0x6bc) = *plVar15 != 0;
      break;
    case 0x6a:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        plVar15 = (long *)(param_3[1] + (long)iVar7);
      }
      else {
        plVar15 = (long *)*param_3;
        *param_3 = (long)(plVar15 + 1);
      }
      uVar6 = 0;
      *(bool *)(param_1 + 0x6cd) = *plVar15 != 0;
      break;
    case 0x6b:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        uVar10 = *(ulong *)(param_3[1] + (long)iVar7);
      }
      else {
        puVar19 = (ulong *)*param_3;
        *param_3 = (long)(puVar19 + 1);
        uVar10 = *puVar19;
      }
      if (uVar10 == 0) {
        uVar6 = 0;
        *(undefined8 *)(param_1 + 0x2a8) = 0;
      }
      else {
        *(byte *)(param_1 + 0x4cda) = (byte)((uint)uVar10 >> 4) & 1;
        if ((uVar10 & 0x10) != 0) {
          uVar10 = uVar10 & 0xffffffffffffffc1 | 2;
        }
        uVar17 = 0;
        do {
          if (0x1e < uVar17) goto LAB_710001b798;
          uVar3 = uVar17 & 0x3f;
          uVar17 = uVar17 + 1;
        } while ((1L << uVar3 & uVar10 & 0xffffffffffffffd3) == 0);
        uVar6 = 0;
        *(ulong *)(param_1 + 0x2a8) = uVar10 & 0xffffffffffffffd3;
      }
      break;
    case 0x6e:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        lVar16 = *(long *)(param_3[1] + (long)iVar7);
      }
      else {
        plVar15 = (long *)*param_3;
        *param_3 = (long)(plVar15 + 1);
        lVar16 = *plVar15;
      }
      lVar20 = lVar16;
      if ((lVar16 == 2) || (lVar20 = 1, lVar16 == 1)) {
        uVar6 = 0;
        *(int *)(param_1 + 0x69c) = (int)lVar20;
        break;
      }
      if (lVar16 == 0) {
        uVar6 = 0;
        *(undefined4 *)(param_1 + 0x69c) = 0;
        break;
      }
      goto switchD_7100019c4c_caseD_2713;
    case 0x6f:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        uVar10 = *(ulong *)(param_3[1] + (long)iVar7);
      }
      else {
        puVar19 = (ulong *)*param_3;
        *param_3 = (long)(puVar19 + 1);
        uVar10 = *puVar19;
      }
      if (uVar10 == 0) {
        uVar6 = 0;
        *(undefined8 *)(param_1 + 0x2b0) = 0;
      }
      else {
        *(byte *)(param_1 + 0x4cfa) = (byte)((uint)uVar10 >> 4) & 1;
        if ((uVar10 & 0x10) != 0) {
          uVar10 = uVar10 & 0xffffffffffffffc1 | 2;
        }
        uVar17 = 0;
        do {
          if (0x1e < uVar17) goto LAB_710001b798;
          uVar3 = uVar17 & 0x3f;
          uVar17 = uVar17 + 1;
        } while ((1L << uVar3 & uVar10 & 0xffffffffffffffd3) == 0);
        uVar6 = 0;
        *(ulong *)(param_1 + 0x2b0) = uVar10 & 0xffffffffffffffd3;
      }
      break;
    case 0x70:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        plVar15 = (long *)(param_3[1] + (long)iVar7);
      }
      else {
        plVar15 = (long *)*param_3;
        *param_3 = (long)(plVar15 + 1);
      }
      uVar6 = 0;
      *(long *)(param_1 + 0x3c0) = *plVar15 * 1000;
      break;
    case 0x71:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        puVar14 = (undefined8 *)(param_3[1] + (long)iVar7);
      }
      else {
        puVar14 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar14 + 1);
      }
      uVar6 = 0;
      *(undefined8 *)(param_1 + 0x688) = *puVar14;
      break;
    case 0x72:
switchD_7100019d74_caseD_75a5:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        puVar14 = (undefined8 *)(param_3[1] + (long)iVar7);
      }
      else {
        puVar14 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar14 + 1);
      }
      uVar6 = 0;
      *(undefined8 *)(param_1 + 0x690) = *puVar14;
      break;
    case 0x77:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        puVar14 = (undefined8 *)(param_3[1] + (long)iVar7);
      }
      else {
        puVar14 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar14 + 1);
      }
      uVar6 = 0;
      *(int *)(param_1 + 0x6d0) = (int)*puVar14;
      break;
    case 0x79:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        plVar15 = (long *)(param_3[1] + (long)iVar7);
      }
      else {
        plVar15 = (long *)*param_3;
        *param_3 = (long)(plVar15 + 1);
      }
      uVar6 = 0;
      *(bool *)(param_1 + 0x6de) = *plVar15 != 0;
      break;
    case 0x81:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        puVar14 = (undefined8 *)(param_3[1] + (long)iVar7);
      }
      else {
        puVar14 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar14 + 1);
      }
      uVar6 = 0;
      *(int *)(param_1 + 0x6d4) = (int)*puVar14;
      break;
    case 0x88:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        plVar15 = (long *)(param_3[1] + (long)iVar7);
      }
      else {
        plVar15 = (long *)*param_3;
        *param_3 = (long)(plVar15 + 1);
      }
      uVar6 = 0;
      *(bool *)(param_1 + 0x6df) = *plVar15 != 0;
      break;
    case 0x89:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        plVar15 = (long *)(param_3[1] + (long)iVar7);
      }
      else {
        plVar15 = (long *)*param_3;
        *param_3 = (long)(plVar15 + 1);
      }
      uVar6 = 0;
      *(bool *)(param_1 + 0x6e0) = *plVar15 != 0;
      break;
    case 0x8a:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        puVar14 = (undefined8 *)(param_3[1] + (long)iVar7);
      }
      else {
        puVar14 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar14 + 1);
      }
      uVar6 = 0;
      *(int *)(param_1 + 0x698) = (int)*puVar14;
      break;
    case 0x8b:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        uVar10 = *(ulong *)(param_3[1] + (long)iVar7);
      }
      else {
        puVar19 = (ulong *)*param_3;
        *param_3 = (long)(puVar19 + 1);
        uVar10 = *puVar19;
      }
      if (uVar10 >> 0x10 == 0) {
        uVar5 = FUN_71000270f0();
        uVar6 = 0;
        *(undefined2 *)(param_1 + 0x2f8) = uVar5;
        break;
      }
      goto LAB_710001b020;
    case 0x8c:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        uVar10 = *(ulong *)(param_3[1] + (long)iVar7);
      }
      else {
        puVar19 = (ulong *)*param_3;
        *param_3 = (long)(puVar19 + 1);
        uVar10 = *puVar19;
      }
      if (uVar10 >> 0x10 == 0) {
        uVar8 = FUN_71000270d0((uint)uVar10);
        uVar6 = 0;
        *(uint *)(param_1 + 0x2fc) = uVar8;
        break;
      }
LAB_710001b020:
      uVar6 = 0x2b;
      break;
    case 0x8d:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        plVar15 = (long *)(param_3[1] + (long)iVar7);
      }
      else {
        plVar15 = (long *)*param_3;
        *param_3 = (long)(plVar15 + 1);
      }
      uVar6 = 0;
      *(bool *)(param_1 + 0x6e1) = *plVar15 != 0;
      break;
    case 0x96:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        plVar15 = (long *)(param_3[1] + (long)iVar7);
      }
      else {
        plVar15 = (long *)*param_3;
        *param_3 = (long)(plVar15 + 1);
      }
      lVar16 = *plVar15;
      uVar6 = 0;
      *(bool *)(param_1 + 0x510) = lVar16 != 0;
      *(bool *)(param_1 + 0x5f0) = lVar16 != 0;
      break;
    case 0x9a:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        puVar14 = (undefined8 *)(param_3[1] + (long)iVar7);
      }
      else {
        puVar14 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar14 + 1);
      }
      uVar6 = 0;
      *(int *)(param_1 + 0x6d8) = (int)*puVar14;
      break;
    case 0x9b:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        puVar14 = (undefined8 *)(param_3[1] + (long)iVar7);
      }
      else {
        puVar14 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar14 + 1);
      }
      uVar6 = 0;
      *(undefined8 *)(param_1 + 0x3a8) = *puVar14;
      break;
    case 0x9c:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        puVar14 = (undefined8 *)(param_3[1] + (long)iVar7);
      }
      else {
        puVar14 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar14 + 1);
      }
      uVar6 = 0;
      *(undefined8 *)(param_1 + 0x3b0) = *puVar14;
      break;
    case 0x9d:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        plVar15 = (long *)(param_3[1] + (long)iVar7);
      }
      else {
        plVar15 = (long *)*param_3;
        *param_3 = (long)(plVar15 + 1);
      }
      uVar6 = 0;
      *(bool *)(param_1 + 0x6f0) = *plVar15 == 0;
      break;
    case 0x9e:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        plVar15 = (long *)(param_3[1] + (long)iVar7);
      }
      else {
        plVar15 = (long *)*param_3;
        *param_3 = (long)(plVar15 + 1);
      }
      uVar6 = 0;
      *(bool *)(param_1 + 0x6f1) = *plVar15 == 0;
      break;
    case 0x9f:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        puVar14 = (undefined8 *)(param_3[1] + (long)iVar7);
      }
      else {
        puVar14 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar14 + 1);
      }
      uVar6 = 0;
      *(undefined8 *)(param_1 + 0x6f8) = *puVar14;
      break;
    case 0xa0:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        puVar14 = (undefined8 *)(param_3[1] + (long)iVar7);
      }
      else {
        puVar14 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar14 + 1);
      }
      uVar6 = 0;
      *(undefined8 *)(param_1 + 0x700) = *puVar14;
      break;
    case 0xa1:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        puVar18 = (uint *)(param_3[1] + (long)iVar7);
      }
      else {
        puVar18 = (uint *)*param_3;
        *param_3 = (long)(puVar18 + 2);
      }
      uVar6 = 0;
      *(uint *)(param_1 + 0x2d8) = *puVar18 & 7;
      break;
    case 0xa6:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        lVar16 = *(long *)(param_3[1] + (long)iVar7);
      }
      else {
        plVar15 = (long *)*param_3;
        *param_3 = (long)(plVar15 + 1);
        lVar16 = *plVar15;
      }
      if (lVar16 == 1) {
        uVar6 = 0;
        *(undefined1 *)(param_1 + 0x708) = 1;
        break;
      }
      if (lVar16 == 0) {
        uVar6 = 0;
        *(undefined1 *)(param_1 + 0x708) = 0;
        break;
      }
switchD_7100019c4c_caseD_2713:
      uVar6 = 0x30;
      break;
    case 0xab:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        uVar10 = *(ulong *)(param_3[1] + (long)iVar7);
      }
      else {
        puVar19 = (ulong *)*param_3;
        *param_3 = (long)(puVar19 + 1);
        uVar10 = *puVar19;
      }
      if (uVar10 < 0x10) {
        uVar9 = FUN_71000270e0();
        uVar6 = 0;
        *(undefined4 *)(param_1 + 0x8d8) = uVar9;
      }
      else {
        uVar6 = 0x2b;
      }
      break;
    case 0xac:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        plVar15 = (long *)(param_3[1] + (long)iVar7);
      }
      else {
        plVar15 = (long *)*param_3;
        *param_3 = (long)(plVar15 + 1);
      }
      uVar6 = 0;
      *(bool *)(param_1 + 0x548) = *plVar15 != 0;
      break;
    case 0xb2:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        puVar14 = (undefined8 *)(param_3[1] + (long)iVar7);
      }
      else {
        puVar14 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar14 + 1);
      }
      uVar6 = 0;
      *(undefined8 *)(param_1 + 0x3c8) = *puVar14;
      break;
    case 0xb5:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        puVar14 = (undefined8 *)(param_3[1] + (long)iVar7);
      }
      else {
        puVar14 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar14 + 1);
      }
      uVar6 = 0;
      *(undefined8 *)(param_1 + 0x8e0) = *puVar14;
      break;
    case 0xb6:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        puVar14 = (undefined8 *)(param_3[1] + (long)iVar7);
      }
      else {
        puVar14 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar14 + 1);
      }
      uVar6 = 0;
      *(undefined8 *)(param_1 + 0x8e8) = *puVar14;
      break;
    case 0xbc:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        plVar15 = (long *)(param_3[1] + (long)iVar7);
      }
      else {
        plVar15 = (long *)*param_3;
        *param_3 = (long)(plVar15 + 1);
      }
      uVar6 = 0;
      *(bool *)(param_1 + 0x6ce) = *plVar15 != 0;
      break;
    case 0xbd:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        plVar15 = (long *)(param_3[1] + (long)iVar7);
      }
      else {
        plVar15 = (long *)*param_3;
        *param_3 = (long)(plVar15 + 1);
      }
      iVar7 = 0;
      if (*plVar15 - 1U < 0xb) {
        iVar7 = (int)(*plVar15 - 1U) + 1;
      }
      uVar6 = 0;
      *(int *)(param_1 + 0x8fc) = iVar7;
      break;
    case 0xc1:
    case 0xc2:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        puVar14 = (undefined8 *)(param_3[1] + (long)iVar7);
      }
      else {
        puVar14 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar14 + 1);
      }
      uVar6 = 0;
      *(undefined8 *)(param_1 + 0x4fa0) = *puVar14;
      break;
    case 0xc5:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        plVar15 = (long *)(param_3[1] + (long)iVar7);
      }
      else {
        plVar15 = (long *)*param_3;
        *param_3 = (long)(plVar15 + 1);
      }
      uVar6 = 0;
      *(bool *)(param_1 + 0x908) = *plVar15 != 0;
      break;
    case 0xcf:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        plVar15 = (long *)(param_3[1] + (long)iVar7);
      }
      else {
        plVar15 = (long *)*param_3;
        *param_3 = (long)(plVar15 + 1);
      }
      uVar6 = 0;
      *(bool *)(param_1 + 0x6bb) = *plVar15 != 0;
      break;
    case 0xd2:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        puVar14 = (undefined8 *)(param_3[1] + (long)iVar7);
      }
      else {
        puVar14 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar14 + 1);
      }
      uVar6 = 0;
      *(undefined8 *)(param_1 + 0x930) = *puVar14;
      break;
    case 0xd4:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        puVar14 = (undefined8 *)(param_3[1] + (long)iVar7);
      }
      else {
        puVar14 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar14 + 1);
      }
      uVar6 = 0;
      *(undefined8 *)(param_1 + 0x3b8) = *puVar14;
      break;
    case 0xd5:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        plVar15 = (long *)(param_3[1] + (long)iVar7);
      }
      else {
        plVar15 = (long *)*param_3;
        *param_3 = (long)(plVar15 + 1);
      }
      uVar6 = 0;
      *(bool *)(param_1 + 0x938) = *plVar15 != 0;
      break;
    case 0xd6:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        puVar14 = (undefined8 *)(param_3[1] + (long)iVar7);
      }
      else {
        puVar14 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar14 + 1);
      }
      uVar6 = 0;
      *(undefined8 *)(param_1 + 0x940) = *puVar14;
      break;
    case 0xd7:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        puVar14 = (undefined8 *)(param_3[1] + (long)iVar7);
      }
      else {
        puVar14 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar14 + 1);
      }
      uVar6 = 0;
      *(undefined8 *)(param_1 + 0x948) = *puVar14;
      break;
    case 0xd8:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        pbVar23 = (byte *)(param_3[1] + (long)iVar7);
      }
      else {
        pbVar23 = (byte *)*param_3;
        *param_3 = (long)(pbVar23 + 8);
      }
      bVar2 = *pbVar23;
      uVar6 = 0;
      *(byte *)(param_1 + 0x518) = bVar2 & 1;
      *(byte *)(param_1 + 0x519) = bVar2 >> 1 & 1;
      break;
    case 0xda:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        plVar15 = (long *)(param_3[1] + (long)iVar7);
      }
      else {
        plVar15 = (long *)*param_3;
        *param_3 = (long)(plVar15 + 1);
      }
      uVar6 = 0;
      *(bool *)(param_1 + 0x8f8) = *plVar15 != 0;
      break;
    case 0xe1:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        plVar15 = (long *)(param_3[1] + (long)iVar7);
      }
      else {
        plVar15 = (long *)*param_3;
        *param_3 = (long)(plVar15 + 1);
      }
      uVar6 = 0;
      *(bool *)(param_1 + 0x960) = *plVar15 != 0;
      break;
    case 0xe2:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        plVar15 = (long *)(param_3[1] + (long)iVar7);
      }
      else {
        plVar15 = (long *)*param_3;
        *param_3 = (long)(plVar15 + 1);
      }
      uVar6 = 0;
      *(bool *)(param_1 + 0x961) = *plVar15 != 0;
      break;
    case 0xe3:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        puVar14 = (undefined8 *)(param_3[1] + (long)iVar7);
      }
      else {
        puVar14 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar14 + 1);
      }
      uVar6 = 0;
      *(undefined8 *)(param_1 + 0x968) = *puVar14;
      break;
    case 0xe5:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        pbVar23 = (byte *)(param_3[1] + (long)iVar7);
      }
      else {
        pbVar23 = (byte *)*param_3;
        *param_3 = (long)(pbVar23 + 8);
      }
      uVar6 = 0;
      *(byte *)(param_1 + 0x420) = *pbVar23 & 1;
      break;
    case 0xe8:
      uVar10 = thunk_FUN_7100026e90();
      if ((uVar10 & 1) != 0) {
        iVar7 = (int)param_3[3];
        if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
          plVar15 = (long *)(param_3[1] + (long)iVar7);
        }
        else {
          plVar15 = (long *)*param_3;
          *param_3 = (long)(plVar15 + 1);
        }
        uVar6 = 0;
        *(bool *)(param_1 + 0x4aa) = *plVar15 != 0;
        break;
      }
      goto LAB_710001b798;
    case 0xe9:
      uVar10 = thunk_FUN_7100026ea0();
      if ((uVar10 & 1) != 0) {
        iVar7 = (int)param_3[3];
        if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
          plVar15 = (long *)(param_3[1] + (long)iVar7);
        }
        else {
          plVar15 = (long *)*param_3;
          *param_3 = (long)(plVar15 + 1);
        }
        uVar6 = 0;
        *(bool *)(param_1 + 0x549) = *plVar15 != 0;
        break;
      }
LAB_710001b798:
      uVar6 = 4;
      break;
    case 0xea:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        plVar15 = (long *)(param_3[1] + (long)iVar7);
      }
      else {
        plVar15 = (long *)*param_3;
        *param_3 = (long)(plVar15 + 1);
      }
      uVar6 = 0;
      *(bool *)(param_1 + 0x962) = *plVar15 != 0;
      break;
    case 0xed:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        plVar15 = (long *)(param_3[1] + (long)iVar7);
      }
      else {
        plVar15 = (long *)*param_3;
        *param_3 = (long)(plVar15 + 1);
      }
      uVar6 = 0;
      *(bool *)(param_1 + 0x963) = *plVar15 != 0;
      break;
    case 0xef:
    case 0xf4:
      break;
    case 0xf2:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        plVar15 = (long *)(param_3[1] + (long)iVar7);
      }
      else {
        plVar15 = (long *)*param_3;
        *param_3 = (long)(plVar15 + 1);
      }
      uVar6 = 0;
      *(bool *)(param_1 + 0x3d0) = *plVar15 != 0;
      break;
    case 0xf5:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        plVar15 = (long *)(param_3[1] + (long)iVar7);
      }
      else {
        plVar15 = (long *)*param_3;
        *param_3 = (long)(plVar15 + 1);
      }
      uVar6 = 0;
      *(bool *)(param_1 + 0x6b9) = *plVar15 != 0;
      break;
    case 0xf8:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        plVar15 = (long *)(param_3[1] + (long)iVar7);
      }
      else {
        plVar15 = (long *)*param_3;
        *param_3 = (long)(plVar15 + 1);
      }
      uVar6 = 0;
      *(bool *)(param_1 + 0x588) = *plVar15 != 0;
      break;
    case 0xf9:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        lVar16 = *(long *)(param_3[1] + (long)iVar7);
      }
      else {
        plVar15 = (long *)*param_3;
        *param_3 = (long)(plVar15 + 1);
        lVar16 = *plVar15;
      }
      if (lVar16 != 1) {
        uVar6 = 0;
        *(bool *)(param_1 + 0x589) = lVar16 != 0;
        break;
      }
LAB_710001b8fc:
      FUN_7100016040(param_1,(byte *)"CURLOPT_SSL_VERIFYHOST no longer supports 1 as value!",param_3
                     ,param_4,param_5,param_6,param_7,param_8);
      uVar6 = 0x2b;
      break;
    case 0xfa:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        puVar19 = (ulong *)(param_3[1] + (long)iVar7);
      }
      else {
        puVar19 = (ulong *)*param_3;
        *param_3 = (long)(puVar19 + 1);
      }
      uVar10 = *puVar19;
      uVar6 = 0;
      *(ulong *)(param_1 + 0x578) = uVar10 & 0xffff;
      *(ulong *)(param_1 + 0x580) = uVar10 & 0xffff0000;
      break;
    case 0x105:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        pbVar23 = (byte *)(param_3[1] + (long)iVar7);
      }
      else {
        pbVar23 = (byte *)*param_3;
        *param_3 = (long)(pbVar23 + 8);
      }
      bVar2 = *pbVar23;
      uVar6 = 0;
      *(byte *)(param_1 + 0x5f8) = bVar2 & 1;
      *(byte *)(param_1 + 0x5f9) = bVar2 >> 1 & 1;
      break;
    case 0x109:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        plVar15 = (long *)(param_3[1] + (long)iVar7);
      }
      else {
        plVar15 = (long *)*param_3;
        *param_3 = (long)(plVar15 + 1);
      }
      uVar6 = 0;
      *(bool *)(param_1 + 0x970) = *plVar15 != 0;
      break;
    case 0x10b:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        puVar19 = (ulong *)(param_3[1] + (long)iVar7);
      }
      else {
        puVar19 = (ulong *)*param_3;
        *param_3 = (long)(puVar19 + 1);
      }
      uVar10 = *puVar19;
      *(ulong *)(param_1 + 0x2c0) = uVar10;
      uVar6 = 0;
      if ((uVar10 & 0xfffffffffffffffa) != 0) {
        uVar6 = 4;
      }
      break;
    case 500:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        plVar15 = (long *)(param_3[1] + (long)iVar7);
      }
      else {
        plVar15 = (long *)*param_3;
        *param_3 = (long)(plVar15 + 1);
      }
      uVar6 = 0;
      *(bool *)(param_1 + 0x2b8) = *plVar15 != 0;
      break;
    case 0x1f5:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        plVar15 = (long *)(param_3[1] + (long)iVar7);
      }
      else {
        plVar15 = (long *)*param_3;
        *param_3 = (long)(plVar15 + 1);
      }
      uVar6 = 0;
      *(bool *)(param_1 + 0x4ab) = *plVar15 != 0;
      break;
    case 0x1fa:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        plVar15 = (long *)(param_3[1] + (long)iVar7);
      }
      else {
        plVar15 = (long *)*param_3;
        *param_3 = (long)(plVar15 + 1);
      }
      uVar6 = 0;
      *(bool *)(param_1 + 0x2ba) = *plVar15 != 0;
      break;
    case 0x1fb:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        plVar15 = (long *)(param_3[1] + (long)iVar7);
      }
      else {
        plVar15 = (long *)*param_3;
        *param_3 = (long)(plVar15 + 1);
      }
      uVar6 = 0;
      *(bool *)(param_1 + 0x4d8) = *plVar15 != 0;
      break;
    case 900:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        plVar15 = (long *)(param_3[1] + (long)iVar7);
      }
      else {
        plVar15 = (long *)*param_3;
        *param_3 = (long)(plVar15 + 1);
      }
      uVar6 = 0;
      *(bool *)(param_1 + 0x2b9) = *plVar15 != 0;
    }
    goto switchD_7100019c4c_caseD_27f6;
  }
  if (0x4e57 < param_2) {
    if (0x5016 < param_2) {
      switch(param_2) {
      case 0x75a3:
        goto switchD_7100019d74_caseD_75a3;
      case 0x75a4:
        goto switchD_7100019d74_caseD_75a4;
      case 0x75a5:
        goto switchD_7100019d74_caseD_75a5;
      case 0x75a6:
      case 0x75a7:
      case 0x75a9:
      case 0x75aa:
      case 0x75ab:
      case 0x75ac:
      case 0x75ad:
      case 0x75ae:
      case 0x75af:
      case 0x75b0:
      case 0x75b1:
      case 0x75b2:
      case 0x75b3:
      case 0x75b4:
      case 0x75b5:
      case 0x75b6:
      case 0x75b7:
      case 0x75b8:
      case 0x75b9:
      case 0x75ba:
      case 0x75bb:
      case 0x75bc:
      case 0x75bd:
      case 0x75be:
      case 0x75bf:
      case 0x75c0:
        break;
      case 0x75a8:
        goto switchD_7100019d74_caseD_75a8;
      case 0x75c1:
        iVar7 = (int)param_3[3];
        if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
          puVar14 = (undefined8 *)(param_3[1] + (long)iVar7);
        }
        else {
          puVar14 = (undefined8 *)*param_3;
          *param_3 = (long)(puVar14 + 1);
        }
        uVar6 = 0;
        *(undefined8 *)(param_1 + 0x3f0) = *puVar14;
        goto switchD_7100019c4c_caseD_27f6;
      case 0x75c2:
        iVar7 = (int)param_3[3];
        if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
          puVar14 = (undefined8 *)(param_3[1] + (long)iVar7);
        }
        else {
          puVar14 = (undefined8 *)*param_3;
          *param_3 = (long)(puVar14 + 1);
        }
        uVar6 = 0;
        *(undefined8 *)(param_1 + 0x3f8) = *puVar14;
        goto switchD_7100019c4c_caseD_27f6;
      default:
        if (param_2 == 0x5017) {
          iVar7 = (int)param_3[3];
          if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
            puVar14 = (undefined8 *)(param_3[1] + (long)iVar7);
          }
          else {
            puVar14 = (undefined8 *)*param_3;
            *param_3 = (long)(puVar14 + 1);
          }
          uVar6 = 0;
          *(undefined8 *)(param_1 + 0x4c0) = *puVar14;
          goto switchD_7100019c4c_caseD_27f6;
        }
        if (param_2 == 0x5018) {
          iVar7 = (int)param_3[3];
          if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
            puVar14 = (undefined8 *)(param_3[1] + (long)iVar7);
          }
          else {
            puVar14 = (undefined8 *)*param_3;
            *param_3 = (long)(puVar14 + 1);
          }
          uVar6 = 0;
          *(undefined8 *)(param_1 + 0x4c8) = *puVar14;
          goto switchD_7100019c4c_caseD_27f6;
        }
      }
      goto switchD_7100019c4c_caseD_2713;
    }
    switch(param_2) {
    case 0x4e58:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        lVar16 = *(long *)(param_3[1] + (long)iVar7);
        *(long *)(param_1 + 0x328) = lVar16;
      }
      else {
        plVar15 = (long *)*param_3;
        *param_3 = (long)(plVar15 + 1);
        lVar16 = *plVar15;
        *(long *)(param_1 + 0x328) = lVar16;
      }
      goto joined_r0x00710001da64;
    default:
      goto switchD_7100019c4c_caseD_2713;
    case 0x4e6f:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        puVar14 = (undefined8 *)(param_3[1] + (long)iVar7);
      }
      else {
        puVar14 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar14 + 1);
      }
      uVar6 = 0;
      *(undefined8 *)(param_1 + 0x308) = *puVar14;
      break;
    case 0x4e7e:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        puVar14 = (undefined8 *)(param_3[1] + (long)iVar7);
      }
      else {
        puVar14 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar14 + 1);
      }
      uVar6 = 0;
      *(undefined8 *)(param_1 + 0x338) = *puVar14;
      break;
    case 0x4e8c:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        puVar14 = (undefined8 *)(param_3[1] + (long)iVar7);
      }
      else {
        puVar14 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar14 + 1);
      }
      uVar6 = 0;
      *(undefined8 *)(param_1 + 0x538) = *puVar14;
      break;
    case 0x4ea2:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        puVar14 = (undefined8 *)(param_3[1] + (long)iVar7);
      }
      else {
        puVar14 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar14 + 1);
      }
      uVar6 = 0;
      *(undefined8 *)(param_1 + 0x340) = *puVar14;
      break;
    case 0x4eae:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        puVar14 = (undefined8 *)(param_3[1] + (long)iVar7);
      }
      else {
        puVar14 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar14 + 1);
      }
      uVar6 = 0;
      *(undefined8 *)(param_1 + 0x380) = *puVar14;
      break;
    case 0x4eaf:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        puVar14 = (undefined8 *)(param_3[1] + (long)iVar7);
      }
      else {
        puVar14 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar14 + 1);
      }
      uVar6 = 0;
      *(undefined8 *)(param_1 + 0x388) = *puVar14;
      break;
    case 0x4eb0:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        puVar14 = (undefined8 *)(param_3[1] + (long)iVar7);
      }
      else {
        puVar14 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar14 + 1);
      }
      uVar6 = 0;
      *(undefined8 *)(param_1 + 0x390) = *puVar14;
      break;
    case 0x4eb4:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        puVar14 = (undefined8 *)(param_3[1] + (long)iVar7);
      }
      else {
        puVar14 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar14 + 1);
      }
      uVar6 = 0;
      *(undefined8 *)(param_1 + 0x348) = *puVar14;
      break;
    case 0x4ec3:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        puVar14 = (undefined8 *)(param_3[1] + (long)iVar7);
      }
      else {
        puVar14 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar14 + 1);
      }
      uVar6 = 0;
      *(undefined8 *)(param_1 + 0x358) = *puVar14;
      break;
    case 0x4ec7:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        puVar14 = (undefined8 *)(param_3[1] + (long)iVar7);
      }
      else {
        puVar14 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar14 + 1);
      }
      uVar6 = 0;
      *(undefined8 *)(param_1 + 0x2e8) = *puVar14;
      break;
    case 0x4ee4:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        puVar14 = (undefined8 *)(param_3[1] + (long)iVar7);
      }
      else {
        puVar14 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar14 + 1);
      }
      uVar6 = 0;
      *(undefined8 *)(param_1 + 0x310) = *puVar14;
      break;
    case 0x4ee6:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        puVar14 = (undefined8 *)(param_3[1] + (long)iVar7);
      }
      else {
        puVar14 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar14 + 1);
      }
      uVar6 = 0;
      *(undefined8 *)(param_1 + 0x910) = *puVar14;
      break;
    case 0x4ee7:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        puVar14 = (undefined8 *)(param_3[1] + (long)iVar7);
      }
      else {
        puVar14 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar14 + 1);
      }
      uVar6 = 0;
      *(undefined8 *)(param_1 + 0x918) = *puVar14;
      break;
    case 0x4ee8:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        puVar14 = (undefined8 *)(param_3[1] + (long)iVar7);
      }
      else {
        puVar14 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar14 + 1);
      }
      uVar6 = 0;
      *(undefined8 *)(param_1 + 0x920) = *puVar14;
      break;
    case 0x4ef0:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        puVar14 = (undefined8 *)(param_3[1] + (long)iVar7);
      }
      else {
        puVar14 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar14 + 1);
      }
      uVar6 = 0;
      *(undefined8 *)(param_1 + 0x368) = *puVar14;
      break;
    case 0x4efb:
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        lVar16 = *(long *)(param_3[1] + (long)iVar7);
        *(long *)(param_1 + 0x330) = lVar16;
      }
      else {
        plVar15 = (long *)*param_3;
        *param_3 = (long)(plVar15 + 1);
        lVar16 = *plVar15;
        *(long *)(param_1 + 0x330) = lVar16;
      }
joined_r0x00710001da64:
      if (lVar16 == 0) {
        uVar6 = 0;
        *(undefined1 *)(param_1 + 0xa00) = 0;
      }
      else {
        uVar6 = 0;
        *(undefined1 *)(param_1 + 0xa00) = 1;
      }
    }
    goto switchD_7100019c4c_caseD_27f6;
  }
  switch(param_2) {
  case 0x2711:
    iVar7 = (int)param_3[3];
    if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
      puVar14 = (undefined8 *)(param_3[1] + (long)iVar7);
    }
    else {
      puVar14 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar14 + 1);
    }
    uVar6 = 0;
    *(undefined8 *)(param_1 + 0x280) = *puVar14;
    break;
  case 0x2712:
    if (*(char *)(param_1 + 0x9a0) != '\0') {
      FUN_71000272a0();
      *(undefined8 *)(param_1 + 0x998) = 0;
      *(undefined1 *)(param_1 + 0x9a0) = 0;
    }
    if (*(char *)(param_1 + 0x2b9) == '\0') {
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        pcVar22 = *(char **)(param_3[1] + (long)iVar7);
        if (pcVar22 == (char *)0x0) goto LAB_710001e63c;
LAB_710001d6d8:
        local_50[1] = 0;
        local_50[0] = 0;
        local_58 = (char *)0x0;
        sVar11 = strlen(pcVar22);
        __dest_00 = (char *)FUN_71000272d0();
        if ((((__dest_00 != (char *)0x0) && (__src = (char *)FUN_71000272d0(), __src != (char *)0x0)
             ) && (__src_00 = (char *)FUN_71000272d0(), __src_00 != (char *)0x0)) &&
           (local_58 = (char *)FUN_71000272d0(), local_58 != (char *)0x0)) {
          pcVar13 = __src;
          iVar7 = sscanf(pcVar22,"%15[^\n:]://%[^\n/?:]%[^\n]",local_50,__src_00);
          if (iVar7 < 2) {
            local_50[0] = local_50[0] & 0xffffffffffffff00;
            iVar7 = sscanf(pcVar22,"%[^\n/?:]%[^\n]",__src_00,__src);
            if (iVar7 < 1) {
              strcpy(__dest_00,pcVar22);
              goto LAB_710001e604;
            }
          }
          uVar6 = FUN_7100027390((long *)&local_58,__src_00);
          if (uVar6 != 0) {
            strncpy(local_58,__src_00,0xff);
          }
          sVar12 = strlen((char *)local_50);
          if (sVar12 != 0) {
            FUN_7100007ef0(__dest_00,0x13,"%s://",local_50,pcVar13,param_6,param_7,param_8);
          }
          strncat(__dest_00,local_58,0x100);
          sVar12 = strlen(__dest_00);
          strncat(__dest_00,__src,sVar11 + 0x100 + ~sVar12);
        }
LAB_710001e604:
        FUN_71000272a0();
        local_58 = (char *)0x0;
        FUN_71000272a0();
        FUN_71000272a0();
      }
      else {
        plVar15 = (long *)*param_3;
        *param_3 = (long)(plVar15 + 1);
        pcVar22 = (char *)*plVar15;
        if (pcVar22 != (char *)0x0) goto LAB_710001d6d8;
LAB_710001e63c:
        local_50[1] = 0;
        local_50[0] = 0;
        local_58 = (char *)0x0;
        __dest_00 = (char *)0x0;
      }
      FUN_71000272a0();
      *(undefined8 *)(param_1 + 0x7d8) = 0;
      if (__dest_00 == (char *)0x0) {
        uVar6 = 0;
      }
      else {
        lVar16 = FUN_71000272c0();
        if (lVar16 == 0) {
          uVar6 = 0x1b;
        }
        else {
          uVar6 = 0;
          *(long *)(param_1 + 0x7d8) = lVar16;
        }
      }
      FUN_71000272a0();
    }
    else {
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        plVar15 = (long *)(param_3[1] + (long)iVar7);
      }
      else {
        plVar15 = (long *)*param_3;
        *param_3 = (long)(plVar15 + 1);
      }
      lVar16 = *plVar15;
      FUN_71000272a0();
      *(long *)(param_1 + 0x7d8) = 0;
      if (lVar16 == 0) {
        uVar6 = 0;
      }
      else {
        lVar16 = FUN_71000272c0();
        if (lVar16 == 0) {
          uVar6 = 0x1b;
        }
        else {
          uVar6 = 0;
          *(long *)(param_1 + 0x7d8) = lVar16;
        }
      }
    }
    *(undefined8 *)(param_1 + 0x998) = *(undefined8 *)(param_1 + 0x7d8);
    break;
  case 0x2713:
  case 0x2718:
  case 0x271b:
  case 0x271c:
  case 0x271d:
  case 0x271e:
  case 0x2723:
  case 0x2724:
  case 0x2725:
  case 0x272b:
  case 0x272e:
  case 0x2730:
  case 0x2731:
  case 0x2732:
  case 0x2733:
  case 0x2736:
  case 0x2738:
  case 0x2739:
  case 0x273a:
  case 0x273b:
  case 0x273c:
  case 0x273d:
  case 0x273e:
  case 0x273f:
  case 0x2740:
  case 0x2741:
  case 0x2742:
  case 0x2743:
  case 0x2744:
  case 0x2745:
  case 0x2746:
  case 0x2747:
  case 0x2748:
  case 0x274a:
  case 0x274b:
  case 0x274c:
  case 0x274d:
  case 0x2750:
  case 0x2752:
  case 0x2753:
  case 0x2754:
  case 0x2755:
  case 0x2757:
  case 0x2758:
  case 0x2759:
  case 0x275a:
  case 0x275b:
  case 0x275e:
  case 0x275f:
  case 0x2760:
  case 0x2761:
  case 0x2764:
  case 0x2765:
  case 0x276a:
  case 0x276b:
  case 0x276c:
  case 0x276e:
  case 0x2770:
  case 0x2772:
  case 0x2773:
  case 0x2775:
  case 0x2779:
  case 0x277a:
  case 0x277b:
  case 0x277c:
  case 0x277e:
  case 0x277f:
  case 0x2780:
  case 0x2781:
  case 0x2782:
  case 0x2783:
  case 0x2784:
  case 0x2785:
  case 0x2787:
  case 0x2788:
  case 0x2789:
  case 0x278a:
  case 0x278b:
  case 0x278c:
  case 0x278d:
  case 0x278e:
  case 0x278f:
  case 0x2790:
  case 0x2791:
  case 0x2792:
  case 0x2794:
  case 0x2795:
  case 0x2798:
  case 0x2799:
  case 0x279a:
  case 0x279b:
  case 0x279c:
  case 0x279d:
  case 0x279e:
  case 0x279f:
  case 0x27a0:
  case 0x27a1:
  case 0x27a2:
  case 0x27a4:
  case 0x27a6:
  case 0x27a7:
  case 0x27a8:
  case 0x27a9:
  case 0x27aa:
  case 0x27ab:
  case 0x27ac:
  case 0x27ad:
  case 0x27ae:
  case 0x27af:
  case 0x27b0:
  case 0x27b1:
  case 0x27b2:
  case 0x27b3:
  case 0x27b6:
  case 0x27b7:
  case 0x27bb:
  case 0x27bc:
  case 0x27c2:
  case 0x27c3:
  case 0x27c4:
  case 0x27c5:
  case 0x27c6:
  case 0x27c7:
  case 0x27c8:
  case 0x27c9:
  case 0x27cc:
  case 0x27cd:
  case 0x27d1:
  case 0x27d2:
  case 0x27d4:
  case 0x27d5:
  case 0x27d6:
  case 0x27d7:
  case 0x27d8:
  case 0x27dc:
  case 0x27dd:
  case 0x27de:
  case 0x27df:
  case 0x27e0:
  case 0x27e2:
  case 0x27e4:
  case 0x27e5:
  case 0x27e6:
  case 0x27e7:
  case 0x27e8:
  case 0x27ea:
  case 0x27eb:
  case 0x27f1:
  case 0x27f2:
  case 0x27f3:
  case 0x27f5:
  case 0x27f7:
  case 0x27f8:
  case 0x27f9:
  case 0x27fa:
  case 0x27fb:
  case 0x27fd:
  case 0x27ff:
  case 0x2802:
  case 0x2804:
  case 0x2805:
  case 0x2808:
  case 0x2809:
  case 0x280a:
  case 0x280b:
  case 0x280c:
  case 0x280d:
  case 0x2815:
  case 0x2818:
  case 0x2819:
  case 0x281b:
  case 0x281c:
  case 0x281d:
  case 0x281e:
  case 0x281f:
  case 0x2820:
  case 0x2821:
  case 0x2822:
  case 0x2823:
  case 0x2824:
  case 0x2825:
  case 0x2826:
  case 0x2827:
  case 0x2828:
  case 0x2829:
  case 0x282a:
  case 0x282b:
  case 0x282c:
  case 0x282d:
  case 0x282e:
  case 0x282f:
  case 0x2830:
  case 0x2831:
  case 0x2832:
  case 0x2833:
  case 0x2834:
  case 0x2835:
  case 0x2836:
  case 0x2837:
  case 0x2838:
  case 0x2839:
  case 0x283a:
  case 0x283b:
  case 0x283c:
  case 0x283d:
  case 0x283e:
  case 0x283f:
  case 0x2840:
  case 0x2841:
  case 0x2842:
  case 0x2843:
  case 0x2844:
  case 0x2845:
  case 0x2846:
  case 0x2847:
  case 0x2848:
  case 0x2849:
  case 0x284a:
  case 0x284b:
  case 0x284c:
  case 0x284d:
  case 0x284e:
  case 0x284f:
  case 0x2850:
  case 0x2851:
  case 0x2852:
  case 0x2853:
  case 0x2854:
  case 0x2855:
  case 0x2856:
  case 0x2857:
  case 0x2858:
  case 0x2859:
  case 0x285a:
  case 0x285b:
  case 0x285c:
  case 0x285d:
  case 0x285e:
  case 0x285f:
  case 0x2860:
  case 0x2861:
  case 0x2862:
  case 0x2863:
  case 0x2864:
  case 0x2865:
  case 0x2866:
  case 0x2867:
  case 0x2868:
  case 0x2869:
  case 0x286a:
  case 0x286b:
  case 0x286c:
  case 0x286d:
  case 0x286e:
  case 0x286f:
  case 0x2870:
  case 0x2871:
  case 0x2872:
  case 0x2873:
  case 0x2874:
  case 0x2875:
  case 0x2876:
  case 0x2877:
  case 0x2878:
  case 0x2879:
  case 0x287a:
  case 0x287b:
  case 0x287c:
  case 0x287d:
  case 0x287e:
  case 0x287f:
  case 0x2880:
  case 0x2881:
  case 0x2882:
  case 0x2883:
  case 0x2884:
  case 0x2885:
  case 0x2886:
  case 0x2887:
  case 0x2888:
  case 0x2889:
  case 0x288a:
  case 0x288b:
  case 0x288c:
  case 0x288d:
  case 0x288e:
  case 0x288f:
  case 0x2890:
  case 0x2891:
  case 0x2892:
  case 0x2893:
  case 0x2894:
  case 0x2895:
  case 0x2896:
  case 0x2897:
  case 0x2898:
  case 0x2899:
  case 0x289a:
  case 0x289b:
  case 0x289c:
  case 0x289d:
  case 0x289e:
  case 0x289f:
  case 0x28a0:
  case 0x28a1:
  case 0x28a2:
  case 0x28a3:
  case 0x28a4:
  case 0x28a5:
  case 0x28a6:
  case 0x28a7:
  case 0x28a8:
  case 0x28a9:
  case 0x28aa:
  case 0x28ab:
  case 0x28ac:
  case 0x28ad:
  case 0x28ae:
  case 0x28af:
  case 0x28b0:
  case 0x28b1:
  case 0x28b2:
  case 0x28b3:
  case 0x28b4:
  case 0x28b5:
  case 0x28b6:
  case 0x28b7:
  case 0x28b8:
  case 0x28b9:
  case 0x28ba:
  case 0x28bb:
  case 0x28bc:
  case 0x28bd:
  case 0x28be:
  case 0x28bf:
  case 0x28c0:
  case 0x28c1:
  case 0x28c2:
  case 0x28c3:
  case 0x28c4:
  case 0x28c5:
  case 0x28c6:
  case 0x28c7:
  case 0x28c8:
  case 0x28c9:
  case 0x28ca:
  case 0x28cb:
  case 0x28cc:
  case 0x28cd:
  case 0x28ce:
  case 0x28cf:
  case 0x28d0:
  case 0x28d1:
  case 0x28d2:
  case 0x28d3:
  case 0x28d4:
  case 0x28d5:
  case 0x28d6:
  case 0x28d7:
  case 0x28d8:
  case 0x28d9:
  case 0x28da:
  case 0x28db:
  case 0x28dc:
  case 0x28dd:
  case 0x28de:
  case 0x28df:
  case 0x28e0:
  case 0x28e1:
  case 0x28e2:
  case 0x28e3:
  case 0x28e4:
  case 0x28e5:
  case 0x28e6:
  case 0x28e7:
  case 0x28e8:
  case 0x28e9:
  case 0x28ea:
  case 0x28eb:
  case 0x28ec:
  case 0x28ed:
  case 0x28ee:
  case 0x28ef:
  case 0x28f0:
  case 0x28f1:
  case 0x28f2:
  case 0x28f3:
  case 0x28f4:
  case 0x28f5:
  case 0x28f6:
  case 0x28f7:
  case 0x28f8:
  case 0x28f9:
  case 0x28fa:
  case 0x28fb:
  case 0x28fc:
  case 0x28fd:
  case 0x28fe:
  case 0x28ff:
  case 0x2900:
  case 0x2901:
  case 0x2902:
  case 0x2903:
  case 0x2904:
  case 0x2905:
  case 0x2907:
  case 0x2908:
    goto switchD_7100019c4c_caseD_2713;
  case 0x2714:
    iVar7 = (int)param_3[3];
    if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
      plVar15 = (long *)(param_3[1] + (long)iVar7);
    }
    else {
      plVar15 = (long *)*param_3;
      *param_3 = (long)(plVar15 + 1);
    }
    lVar16 = *plVar15;
    FUN_71000272a0();
    *(undefined8 *)(param_1 + 0x7b8) = 0;
    if (lVar16 != 0) {
      lVar16 = FUN_71000272c0();
      if (lVar16 != 0) {
        uVar6 = 0;
        *(long *)(param_1 + 0x7b8) = lVar16;
        break;
      }
LAB_710001d5e8:
      uVar6 = 0x1b;
      break;
    }
    goto LAB_710001e2dc;
  case 0x2715:
    iVar7 = (int)param_3[3];
    if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
      puVar14 = (undefined8 *)(param_3[1] + (long)iVar7);
    }
    else {
      puVar14 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar14 + 1);
    }
    pcVar22 = (char *)*puVar14;
    plVar15 = (long *)(param_1 + 0x858);
    puVar14 = (undefined8 *)(param_1 + 0x860);
    goto LAB_710001bc64;
  case 0x2716:
    iVar7 = (int)param_3[3];
    if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
      puVar14 = (undefined8 *)(param_3[1] + (long)iVar7);
    }
    else {
      puVar14 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar14 + 1);
    }
    pcVar22 = (char *)*puVar14;
    plVar15 = (long *)(param_1 + 0x870);
    puVar14 = (undefined8 *)(param_1 + 0x878);
LAB_710001bc64:
    uVar6 = FUN_710001e780(pcVar22,plVar15,puVar14);
    return (ulong)uVar6;
  case 0x2717:
    iVar7 = (int)param_3[3];
    if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
      plVar15 = (long *)(param_3[1] + (long)iVar7);
    }
    else {
      plVar15 = (long *)*param_3;
      *param_3 = (long)(plVar15 + 1);
    }
    lVar16 = *plVar15;
    FUN_71000272a0();
    *(undefined8 *)(param_1 + 0x7c8) = 0;
    if (lVar16 != 0) {
      lVar16 = FUN_71000272c0();
      if (lVar16 != 0) {
        uVar6 = 0;
        *(long *)(param_1 + 0x7c8) = lVar16;
        break;
      }
      goto LAB_710001d5e8;
    }
    goto LAB_710001e2dc;
  case 0x2719:
    iVar7 = (int)param_3[3];
    if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
      puVar14 = (undefined8 *)(param_3[1] + (long)iVar7);
    }
    else {
      puVar14 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar14 + 1);
    }
    uVar6 = 0;
    *(undefined8 *)(param_1 + 0x288) = *puVar14;
    break;
  case 0x271a:
    iVar7 = (int)param_3[3];
    if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
      puVar14 = (undefined8 *)(param_3[1] + (long)iVar7);
    }
    else {
      puVar14 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar14 + 1);
    }
    uVar6 = 0;
    *(undefined8 *)(param_1 + 0x270) = *puVar14;
    break;
  case 0x271f:
    iVar7 = (int)param_3[3];
    if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
      puVar14 = (undefined8 *)(param_3[1] + (long)iVar7);
    }
    else {
      puVar14 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar14 + 1);
    }
    *(undefined8 *)(param_1 + 0x2e0) = *puVar14;
    FUN_71000272a0();
    uVar6 = 0;
    *(undefined8 *)(param_1 + 0x8d0) = 0;
    goto LAB_710001e34c;
  case 0x2720:
    if (*(char *)(param_1 + 0x9b0) != '\0') {
      FUN_71000272a0();
      *(undefined8 *)(param_1 + 0x9a8) = 0;
      *(undefined1 *)(param_1 + 0x9b0) = 0;
    }
    iVar7 = (int)param_3[3];
    if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
      plVar15 = (long *)(param_3[1] + (long)iVar7);
    }
    else {
      plVar15 = (long *)*param_3;
      *param_3 = (long)(plVar15 + 1);
    }
    lVar16 = *plVar15;
    FUN_71000272a0();
    *(undefined8 *)(param_1 + 2000) = 0;
    if (lVar16 == 0) {
      uVar6 = 0;
      *(undefined8 *)(param_1 + 0x9a8) = 0;
    }
    else {
      lVar16 = FUN_71000272c0();
      if (lVar16 == 0) {
        uVar6 = 0x1b;
        *(undefined8 *)(param_1 + 0x9a8) = *(undefined8 *)(param_1 + 2000);
      }
      else {
        uVar6 = 0;
        *(long *)(param_1 + 2000) = lVar16;
        *(long *)(param_1 + 0x9a8) = lVar16;
      }
    }
    break;
  case 0x2721:
    iVar7 = (int)param_3[3];
    if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
      plVar15 = (long *)(param_3[1] + (long)iVar7);
    }
    else {
      plVar15 = (long *)*param_3;
      *param_3 = (long)(plVar15 + 1);
    }
    lVar16 = *plVar15;
    FUN_71000272a0();
    *(undefined8 *)(param_1 + 0x770) = 0;
    if (lVar16 == 0) {
      lVar16 = 0;
      uVar6 = 0;
    }
    else {
      lVar16 = FUN_71000272c0();
      if (lVar16 == 0) {
        lVar16 = *(long *)(param_1 + 0x770);
        uVar6 = 0x1b;
      }
      else {
        uVar6 = 0;
        *(long *)(param_1 + 0x770) = lVar16;
      }
    }
    *(bool *)(param_1 + 0x6b6) = lVar16 != 0;
    break;
  case 0x2722:
    iVar7 = (int)param_3[3];
    if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
      plVar15 = (long *)(param_3[1] + (long)iVar7);
    }
    else {
      plVar15 = (long *)*param_3;
      *param_3 = (long)(plVar15 + 1);
    }
    lVar16 = *plVar15;
    FUN_71000272a0();
    *(undefined8 *)(param_1 + 0x830) = 0;
    if (lVar16 != 0) {
      lVar16 = FUN_71000272c0();
      if (lVar16 != 0) {
        uVar6 = 0;
        *(long *)(param_1 + 0x830) = lVar16;
        break;
      }
      goto LAB_710001d5e8;
    }
    goto LAB_710001e2dc;
  case 0x2726:
    iVar7 = (int)param_3[3];
    if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
      plVar15 = (long *)(param_3[1] + (long)iVar7);
    }
    else {
      plVar15 = (long *)*param_3;
      *param_3 = (long)(plVar15 + 1);
    }
    lVar16 = *plVar15;
    FUN_71000272a0();
    *(undefined8 *)(param_1 + 0x730) = 0;
    if (lVar16 != 0) {
      lVar16 = FUN_71000272c0();
      if (lVar16 != 0) {
        uVar6 = 0;
        *(long *)(param_1 + 0x730) = lVar16;
        break;
      }
      goto LAB_710001d5e8;
    }
    goto LAB_710001e2dc;
  case 0x2727:
    iVar7 = (int)param_3[3];
    if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
      puVar14 = (undefined8 *)(param_3[1] + (long)iVar7);
    }
    else {
      puVar14 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar14 + 1);
    }
    uVar6 = 0;
    *(undefined8 *)(param_1 + 0x408) = *puVar14;
    break;
  case 0x2728:
    iVar7 = (int)param_3[3];
    if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
      puVar14 = (undefined8 *)(param_3[1] + (long)iVar7);
    }
    else {
      puVar14 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar14 + 1);
    }
    *(undefined8 *)(param_1 + 0x418) = *puVar14;
    uVar9 = 3;
    goto LAB_710001bf38;
  case 0x2729:
    iVar7 = (int)param_3[3];
    if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
      plVar15 = (long *)(param_3[1] + (long)iVar7);
    }
    else {
      plVar15 = (long *)*param_3;
      *param_3 = (long)(plVar15 + 1);
    }
    lVar16 = *plVar15;
    FUN_71000272a0();
    *(undefined8 *)(param_1 + 0x710) = 0;
    if (lVar16 != 0) {
      lVar16 = FUN_71000272c0();
      if (lVar16 != 0) {
        uVar6 = 0;
        *(long *)(param_1 + 0x710) = lVar16;
        break;
      }
      goto LAB_710001d5e8;
    }
    goto LAB_710001e2dc;
  case 0x272a:
    iVar7 = (int)param_3[3];
    if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
      plVar15 = (long *)(param_3[1] + (long)iVar7);
    }
    else {
      plVar15 = (long *)*param_3;
      *param_3 = (long)(plVar15 + 1);
    }
    lVar16 = *plVar15;
    FUN_71000272a0();
    *(undefined8 *)(param_1 + 0x788) = 0;
    if (lVar16 != 0) {
      lVar16 = FUN_71000272c0();
      if (lVar16 != 0) {
        uVar6 = 0;
        *(long *)(param_1 + 0x788) = lVar16;
        break;
      }
      goto LAB_710001d5e8;
    }
    goto LAB_710001e2dc;
  case 0x272c:
    iVar7 = (int)param_3[3];
    if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
      puVar14 = (undefined8 *)(param_3[1] + (long)iVar7);
    }
    else {
      puVar14 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar14 + 1);
    }
    uVar6 = 0;
    *(undefined8 *)(param_1 + 0x428) = *puVar14;
    break;
  case 0x272d:
    iVar7 = (int)param_3[3];
    if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
      puVar14 = (undefined8 *)(param_3[1] + (long)iVar7);
    }
    else {
      puVar14 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar14 + 1);
    }
    uVar6 = 0;
    *(undefined8 *)(param_1 + 0x290) = *puVar14;
    break;
  case 0x272f:
    iVar7 = (int)param_3[3];
    if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
      lVar16 = *(long *)(param_3[1] + (long)iVar7);
    }
    else {
      plVar15 = (long *)*param_3;
      *param_3 = (long)(plVar15 + 1);
      lVar16 = *plVar15;
    }
    if (lVar16 != 0) {
      plVar15 = FUN_7100016c00(*(long **)(param_1 + 0x9b8));
      if (plVar15 == (long *)0x0) {
        FUN_7100016c80(*(undefined8 **)(param_1 + 0x9b8));
        *(undefined8 *)(param_1 + 0x9b8) = 0;
        uVar6 = 0x1b;
      }
      else {
        uVar6 = 0;
        *(long **)(param_1 + 0x9b8) = plVar15;
      }
      break;
    }
    goto LAB_710001e2dc;
  case 0x2734:
    iVar7 = (int)param_3[3];
    if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
      plVar15 = (long *)(param_3[1] + (long)iVar7);
    }
    else {
      plVar15 = (long *)*param_3;
      *param_3 = (long)(plVar15 + 1);
    }
    lVar16 = *plVar15;
    FUN_71000272a0();
    *(undefined8 *)(param_1 + 0x740) = 0;
    if (lVar16 != 0) {
      lVar16 = FUN_71000272c0();
      if (lVar16 != 0) {
        uVar6 = 0;
        *(long *)(param_1 + 0x740) = lVar16;
        break;
      }
      goto LAB_710001d5e8;
    }
    goto LAB_710001e2dc;
  case 0x2735:
    iVar7 = (int)param_3[3];
    if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
      lVar16 = *(long *)(param_3[1] + (long)iVar7);
      *(long *)(param_1 + 0x260) = lVar16;
    }
    else {
      plVar15 = (long *)*param_3;
      *param_3 = (long)(plVar15 + 1);
      lVar16 = *plVar15;
      *(long *)(param_1 + 0x260) = lVar16;
    }
    uVar6 = 0;
    if (lVar16 == 0) {
      uVar6 = 0;
      *(undefined8 *)(param_1 + 0x260) = _stderr;
    }
    break;
  case 0x2737:
    iVar7 = (int)param_3[3];
    if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
      puVar14 = (undefined8 *)(param_3[1] + (long)iVar7);
    }
    else {
      puVar14 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar14 + 1);
    }
    uVar6 = 0;
    *(undefined8 *)(param_1 + 0x430) = *puVar14;
    break;
  case 0x2749:
    iVar7 = (int)param_3[3];
    if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
      puVar14 = (undefined8 *)(param_3[1] + (long)iVar7);
    }
    else {
      puVar14 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar14 + 1);
    }
    uVar6 = 0;
    *(undefined8 *)(param_1 + 0x398) = *puVar14;
    break;
  case 0x274e:
    iVar7 = (int)param_3[3];
    if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
      plVar15 = (long *)(param_3[1] + (long)iVar7);
    }
    else {
      plVar15 = (long *)*param_3;
      *param_3 = (long)(plVar15 + 1);
    }
    lVar16 = *plVar15;
    FUN_71000272a0();
    *(undefined8 *)(param_1 + 0x750) = 0;
    if (lVar16 != 0) {
      lVar16 = FUN_71000272c0();
      if (lVar16 != 0) {
        uVar6 = 0;
        *(long *)(param_1 + 0x750) = lVar16;
        break;
      }
      goto LAB_710001d5e8;
    }
    goto LAB_710001e2dc;
  case 0x274f:
    iVar7 = (int)param_3[3];
    if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
      plVar15 = (long *)(param_3[1] + (long)iVar7);
    }
    else {
      plVar15 = (long *)*param_3;
      *param_3 = (long)(plVar15 + 1);
    }
    lVar16 = *plVar15;
    FUN_71000272a0();
    *(undefined8 *)(param_1 + 0x7a8) = 0;
    if (lVar16 == 0) {
      lVar16 = 0;
      uVar6 = 0;
    }
    else {
      lVar16 = FUN_71000272c0();
      if (lVar16 == 0) {
        lVar16 = *(long *)(param_1 + 0x7a8);
        uVar6 = 0x1b;
      }
      else {
        uVar6 = 0;
        *(long *)(param_1 + 0x7a8) = lVar16;
      }
    }
    *(bool *)(param_1 + 0x6c9) = lVar16 != 0;
    break;
  case 0x2751:
    iVar7 = (int)param_3[3];
    if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
      plVar15 = (long *)(param_3[1] + (long)iVar7);
    }
    else {
      plVar15 = (long *)*param_3;
      *param_3 = (long)(plVar15 + 1);
    }
    lVar16 = *plVar15;
    FUN_71000272a0();
    *(undefined8 *)(param_1 + 0x7f0) = 0;
    if (lVar16 != 0) {
      lVar16 = FUN_71000272c0();
      if (lVar16 != 0) {
        uVar6 = 0;
        *(long *)(param_1 + 0x7f0) = lVar16;
        break;
      }
LAB_710001d540:
      uVar6 = 0x1b;
      break;
    }
    goto LAB_710001d538;
  case 0x2756:
    iVar7 = (int)param_3[3];
    if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
      puVar14 = (undefined8 *)(param_3[1] + (long)iVar7);
    }
    else {
      puVar14 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar14 + 1);
    }
    uVar6 = 0;
    *(undefined8 *)(param_1 + 0x458) = *puVar14;
    break;
  case 0x275c:
    iVar7 = (int)param_3[3];
    if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
      plVar15 = (long *)(param_3[1] + (long)iVar7);
    }
    else {
      plVar15 = (long *)*param_3;
      *param_3 = (long)(plVar15 + 1);
    }
    lVar16 = *plVar15;
    FUN_71000272a0();
    *(undefined8 *)(param_1 + 0x828) = 0;
    if (lVar16 != 0) {
      lVar16 = FUN_71000272c0();
      if (lVar16 != 0) {
        uVar6 = 0;
        *(long *)(param_1 + 0x828) = lVar16;
        break;
      }
      goto LAB_710001d5e8;
    }
    goto LAB_710001e2dc;
  case 0x275d:
    iVar7 = (int)param_3[3];
    if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
      plVar15 = (long *)(param_3[1] + (long)iVar7);
    }
    else {
      plVar15 = (long *)*param_3;
      *param_3 = (long)(plVar15 + 1);
    }
    lVar16 = *plVar15;
    FUN_71000272a0();
    *(undefined8 *)(param_1 + 0x820) = 0;
    if (lVar16 != 0) {
      lVar16 = FUN_71000272c0();
      if (lVar16 != 0) {
        uVar6 = 0;
        *(long *)(param_1 + 0x820) = lVar16;
        break;
      }
      goto LAB_710001d5e8;
    }
    goto LAB_710001e2dc;
  case 0x2762:
    iVar7 = (int)param_3[3];
    if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
      plVar15 = (long *)(param_3[1] + (long)iVar7);
    }
    else {
      plVar15 = (long *)*param_3;
      *param_3 = (long)(plVar15 + 1);
    }
    lVar16 = *plVar15;
    FUN_71000272a0();
    *(undefined8 *)(param_1 + 0x738) = 0;
    uVar8 = 0;
    if (lVar16 != 0) {
      lVar16 = FUN_71000272c0();
      if (lVar16 == 0) {
        uVar8 = 0x1b;
      }
      else {
        uVar8 = 0;
        *(long *)(param_1 + 0x738) = lVar16;
      }
    }
    plVar15 = FUN_7100001020(param_1,(char *)0x0,*(long **)(param_1 + 0x9c8),
                             *(byte *)(param_1 + 0x421),param_5,param_6,param_7,param_8);
    uVar6 = 0x1b;
    if (plVar15 != (long *)0x0) {
      uVar6 = uVar8;
    }
    *(long **)(param_1 + 0x9c8) = plVar15;
    break;
  case 0x2763:
    iVar7 = (int)param_3[3];
    if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
      plVar15 = (long *)(param_3[1] + (long)iVar7);
    }
    else {
      plVar15 = (long *)*param_3;
      *param_3 = (long)(plVar15 + 1);
    }
    lVar16 = *plVar15;
    FUN_71000272a0();
    *(undefined8 *)(param_1 + 0x810) = 0;
    if (lVar16 != 0) {
      lVar16 = FUN_71000272c0();
      if (lVar16 != 0) {
        uVar6 = 0;
        *(long *)(param_1 + 0x810) = lVar16;
        break;
      }
      goto LAB_710001d5e8;
    }
    goto LAB_710001e2dc;
  case 0x2766:
    iVar7 = (int)param_3[3];
    if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
      plVar15 = (long *)(param_3[1] + (long)iVar7);
    }
    else {
      plVar15 = (long *)*param_3;
      *param_3 = (long)(plVar15 + 1);
    }
    lVar16 = *plVar15;
    FUN_71000272a0();
    *(undefined8 *)(param_1 + 0x720) = 0;
    if (lVar16 != 0) {
      lVar16 = FUN_71000272c0();
      if (lVar16 != 0) {
        uVar6 = 0;
        *(long *)(param_1 + 0x720) = lVar16;
        break;
      }
      goto LAB_710001d5e8;
    }
    goto LAB_710001e2dc;
  case 0x2767:
    iVar7 = (int)param_3[3];
    if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
      plVar15 = (long *)(param_3[1] + (long)iVar7);
    }
    else {
      plVar15 = (long *)*param_3;
      *param_3 = (long)(plVar15 + 1);
    }
    lVar16 = *plVar15;
    FUN_71000272a0();
    *(undefined8 *)(param_1 + 0x778) = 0;
    if (lVar16 != 0) {
      lVar16 = FUN_71000272c0();
      if (lVar16 != 0) {
        uVar6 = 0;
        *(long *)(param_1 + 0x778) = lVar16;
        break;
      }
      goto LAB_710001d5e8;
    }
    goto LAB_710001e2dc;
  case 0x2768:
    iVar7 = (int)param_3[3];
    if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
      plVar15 = (long *)(param_3[1] + (long)iVar7);
    }
    else {
      plVar15 = (long *)*param_3;
      *param_3 = (long)(plVar15 + 1);
    }
    lVar16 = *plVar15;
    FUN_71000272a0();
    *(undefined8 *)(param_1 + 0x798) = 0;
    if (lVar16 != 0) {
      lVar16 = FUN_71000272c0();
      if (lVar16 != 0) {
        uVar6 = 0;
        *(long *)(param_1 + 0x798) = lVar16;
        break;
      }
      goto LAB_710001d5e8;
    }
    goto LAB_710001e2dc;
  case 0x2769:
    iVar7 = (int)param_3[3];
    if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
      pcVar22 = *(char **)(param_3[1] + (long)iVar7);
    }
    else {
      puVar14 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar14 + 1);
      pcVar22 = (char *)*puVar14;
    }
    if ((pcVar22 != (char *)0x0) && (*pcVar22 != '\0')) {
      uVar10 = FUN_71000263a0();
      return uVar10;
    }
    goto LAB_710001e2dc;
  case 0x276d:
    iVar7 = (int)param_3[3];
    if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
      puVar14 = (undefined8 *)(param_3[1] + (long)iVar7);
    }
    else {
      puVar14 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar14 + 1);
    }
    uVar6 = 0;
    *(undefined8 *)(param_1 + 0x438) = *puVar14;
    break;
  case 0x276f:
    iVar7 = (int)param_3[3];
    if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
      puVar14 = (undefined8 *)(param_3[1] + (long)iVar7);
    }
    else {
      puVar14 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar14 + 1);
    }
    uVar6 = 0;
    *(undefined8 *)(param_1 + 0x268) = *puVar14;
    break;
  case 0x2771:
    iVar7 = (int)param_3[3];
    if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
      plVar15 = (long *)(param_3[1] + (long)iVar7);
    }
    else {
      plVar15 = (long *)*param_3;
      *param_3 = (long)(plVar15 + 1);
    }
    lVar16 = *plVar15;
    FUN_71000272a0();
    *(undefined8 *)(param_1 + 0x7e0) = 0;
    if (lVar16 != 0) {
      lVar16 = FUN_71000272c0();
      if (lVar16 != 0) {
        uVar6 = 0;
        *(long *)(param_1 + 0x7e0) = lVar16;
        break;
      }
      goto LAB_710001d540;
    }
    goto LAB_710001d538;
  case 0x2774:
    iVar7 = (int)param_3[3];
    if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
      lVar16 = *(long *)(param_3[1] + (long)iVar7);
      lVar20 = *(long *)(param_1 + 0xb8);
    }
    else {
      plVar15 = (long *)*param_3;
      *param_3 = (long)(plVar15 + 1);
      lVar16 = *plVar15;
      lVar20 = *(long *)(param_1 + 0xb8);
    }
    if (lVar20 != 0) {
      FUN_7100016b40(param_1,1);
      if (*(int *)(param_1 + 0xa0) == 3) {
        *(undefined8 *)(param_1 + 0x98) = 0;
        *(undefined4 *)(param_1 + 0xa0) = 0;
      }
      lVar20 = *(long *)(param_1 + 0xb8);
      if (*(long *)(lVar20 + 0x50) == *(long *)(param_1 + 0x9c8)) {
        *(undefined8 *)(param_1 + 0x9c8) = 0;
      }
      if (*(long *)(lVar20 + 0x58) == *(long *)(param_1 + 0x4bc8)) {
        *(undefined8 *)(param_1 + 0x4bc8) = 0;
      }
      *(int *)(lVar20 + 4) = *(int *)(lVar20 + 4) + -1;
      FUN_7100016ba0(param_1,1);
      *(undefined8 *)(param_1 + 0xb8) = 0;
    }
    *(long *)(param_1 + 0xb8) = lVar16;
    if (lVar16 != 0) {
      FUN_7100016b40(param_1,1);
      *(int *)(*(long *)(param_1 + 0xb8) + 4) = *(int *)(*(long *)(param_1 + 0xb8) + 4) + 1;
      pbVar23 = *(byte **)(param_1 + 0xb8);
      if ((*pbVar23 >> 3 & 1) != 0) {
        *(byte **)(param_1 + 0x98) = pbVar23 + 0x20;
        *(undefined4 *)(param_1 + 0xa0) = 3;
      }
      if (*(long *)(pbVar23 + 0x50) != 0) {
        FUN_7100002040(*(undefined8 **)(param_1 + 0x9c8));
        pbVar23 = *(byte **)(param_1 + 0xb8);
        *(undefined8 *)(param_1 + 0x9c8) = *(undefined8 *)(pbVar23 + 0x50);
      }
      if (*(long *)(pbVar23 + 0x58) != 0) {
        *(undefined8 *)(param_1 + 0x658) = *(undefined8 *)(pbVar23 + 0x60);
        *(undefined8 *)(param_1 + 0x4bc8) = *(undefined8 *)(pbVar23 + 0x58);
      }
      FUN_7100016ba0(param_1,1);
      uVar6 = 0;
      break;
    }
    goto LAB_710001d538;
  case 0x2776:
    iVar7 = (int)param_3[3];
    if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
      pcVar22 = *(char **)(param_3[1] + (long)iVar7);
    }
    else {
      puVar14 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar14 + 1);
      pcVar22 = (char *)*puVar14;
    }
    if ((pcVar22 != (char *)0x0) && (*pcVar22 == '\0')) {
      pcVar22 = "deflate, gzip";
    }
    FUN_71000272a0();
    *(undefined8 *)(param_1 + 0x758) = 0;
    if (pcVar22 != (char *)0x0) {
      lVar16 = FUN_71000272c0();
      if (lVar16 != 0) {
        uVar6 = 0;
        *(long *)(param_1 + 0x758) = lVar16;
        break;
      }
      goto LAB_710001d5e8;
    }
    goto LAB_710001e2dc;
  case 0x2777:
    iVar7 = (int)param_3[3];
    if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
      puVar14 = (undefined8 *)(param_3[1] + (long)iVar7);
    }
    else {
      puVar14 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar14 + 1);
    }
    uVar6 = 0;
    *(undefined8 *)(param_1 + 0x678) = *puVar14;
    break;
  case 0x2778:
    iVar7 = (int)param_3[3];
    if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
      puVar14 = (undefined8 *)(param_3[1] + (long)iVar7);
    }
    else {
      puVar14 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar14 + 1);
    }
    uVar6 = 0;
    *(undefined8 *)(param_1 + 0x680) = *puVar14;
    break;
  case 0x277d:
    iVar7 = (int)param_3[3];
    if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
      puVar14 = (undefined8 *)(param_3[1] + (long)iVar7);
    }
    else {
      puVar14 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar14 + 1);
    }
    uVar6 = 0;
    *(undefined8 *)(param_1 + 0x540) = *puVar14;
    break;
  case 0x2786:
    iVar7 = (int)param_3[3];
    if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
      plVar15 = (long *)(param_3[1] + (long)iVar7);
    }
    else {
      plVar15 = (long *)*param_3;
      *param_3 = (long)(plVar15 + 1);
    }
    lVar16 = *plVar15;
    FUN_71000272a0();
    *(undefined8 *)(param_1 + 0x7b0) = 0;
    if (lVar16 != 0) {
      lVar16 = FUN_71000272c0();
      if (lVar16 != 0) {
        uVar6 = 0;
        *(long *)(param_1 + 0x7b0) = lVar16;
        break;
      }
      goto LAB_710001d5e8;
    }
    goto LAB_710001e2dc;
  case 0x2793:
    iVar7 = (int)param_3[3];
    if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
      puVar14 = (undefined8 *)(param_3[1] + (long)iVar7);
    }
    else {
      puVar14 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar14 + 1);
    }
    uVar6 = 0;
    *(undefined8 *)(param_1 + 0x3a0) = *puVar14;
    break;
  case 0x2796:
    iVar7 = (int)param_3[3];
    if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
      plVar15 = (long *)(param_3[1] + (long)iVar7);
    }
    else {
      plVar15 = (long *)*param_3;
      *param_3 = (long)(plVar15 + 1);
    }
    lVar16 = *plVar15;
    FUN_71000272a0();
    *(undefined8 *)(param_1 + 0x760) = 0;
    if (lVar16 != 0) {
      lVar16 = FUN_71000272c0();
      if (lVar16 != 0) {
        uVar6 = 0;
        *(long *)(param_1 + 0x760) = lVar16;
        break;
      }
      goto LAB_710001d540;
    }
    goto LAB_710001d538;
  case 0x2797:
    iVar7 = (int)param_3[3];
    if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
      pbVar23 = *(byte **)(param_3[1] + (long)iVar7);
    }
    else {
      puVar14 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar14 + 1);
      pbVar23 = (byte *)*puVar14;
    }
    if (pbVar23 != (byte *)0x0) {
      bVar4 = FUN_7100017280(pbVar23,&DAT_71042a1e2d);
      if (bVar4) {
        FUN_7100016b40(param_1,2);
        FUN_7100002690(*(undefined8 **)(param_1 + 0x9c8));
      }
      else {
        bVar4 = FUN_7100017280(pbVar23,&DAT_710435a22d);
        if (!bVar4) {
          bVar4 = FUN_7100017280(pbVar23,(byte *)"FLUSH");
          if (bVar4) {
            FUN_71000027a0(param_1,0,param_3,param_4,param_5,param_6,param_7,param_8);
            uVar6 = 0;
          }
          else {
            bVar4 = FUN_7100017280(pbVar23,(byte *)"RELOAD");
            if (bVar4) {
              FUN_7100000f70(param_1);
              uVar6 = 0;
            }
            else {
              if (*(long *)(param_1 + 0x9c8) == 0) {
                plVar15 = FUN_7100001020(param_1,(char *)0x0,(long *)0x0,1,param_5,param_6,param_7,
                                         param_8);
                *(long **)(param_1 + 0x9c8) = plVar15;
              }
              pbVar23 = (byte *)FUN_71000272c0();
              if ((pbVar23 == (byte *)0x0) || (*(long *)(param_1 + 0x9c8) == 0)) {
                FUN_71000272a0();
                uVar6 = 0x1b;
              }
              else {
                FUN_7100016b40(param_1,2);
                bVar4 = FUN_7100017490((byte *)"Set-Cookie:",pbVar23,0xb);
                if (bVar4) {
                  pbVar23 = pbVar23 + 0xb;
                }
                FUN_71000012c0(param_1,*(long **)(param_1 + 0x9c8),(ulong)bVar4,pbVar23,(byte *)0x0,
                               (char *)0x0,param_7,param_8);
                FUN_7100016ba0(param_1,2);
                FUN_71000272a0();
                uVar6 = 0;
              }
            }
          }
          break;
        }
        FUN_7100016b40(param_1,2);
        FUN_71000026c0(*(long **)(param_1 + 0x9c8));
      }
      FUN_7100016ba0(param_1,2);
      uVar6 = 0;
      break;
    }
    goto LAB_710001e2dc;
  case 0x27a3:
    iVar7 = (int)param_3[3];
    if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
      plVar15 = (long *)(param_3[1] + (long)iVar7);
    }
    else {
      plVar15 = (long *)*param_3;
      *param_3 = (long)(plVar15 + 1);
    }
    lVar16 = *plVar15;
    FUN_71000272a0();
    *(undefined8 *)(param_1 + 0x768) = 0;
    if (lVar16 != 0) {
      lVar16 = FUN_71000272c0();
      if (lVar16 != 0) {
        uVar6 = 0;
        *(long *)(param_1 + 0x768) = lVar16;
        break;
      }
      goto LAB_710001d540;
    }
    goto LAB_710001d538;
  case 0x27a5:
    iVar7 = (int)param_3[3];
    if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
      puVar14 = (undefined8 *)(param_3[1] + (long)iVar7);
    }
    else {
      puVar14 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar14 + 1);
    }
    uVar6 = 0;
    *(undefined8 *)(param_1 + 0x350) = *puVar14;
    break;
  case 0x27b4:
    iVar7 = (int)param_3[3];
    if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
      puVar14 = (undefined8 *)(param_3[1] + (long)iVar7);
    }
    else {
      puVar14 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar14 + 1);
    }
    uVar6 = 0;
    *(undefined8 *)(param_1 + 0x360) = *puVar14;
    break;
  case 0x27b5:
    iVar7 = (int)param_3[3];
    if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
      __src_01 = *(void **)(param_3[1] + (long)iVar7);
      if (__src_01 == (void *)0x0) goto LAB_710001e330;
LAB_710001ca28:
      if (*(long *)(param_1 + 0x2f0) == -1) {
        FUN_71000272a0();
        *(undefined8 *)(param_1 + 0x8d0) = 0;
        lVar16 = FUN_71000272c0();
        if (lVar16 == 0) goto LAB_710001d968;
        uVar6 = 0;
        *(long *)(param_1 + 0x8d0) = lVar16;
      }
      else {
        if (-1 < *(long *)(param_1 + 0x2f0)) {
          FUN_71000272a0();
          *(undefined8 *)(param_1 + 0x8d0) = 0;
          __dest = (void *)FUN_7100027290();
          if (__dest != (void *)0x0) {
            if (*(size_t *)(param_1 + 0x2f0) != 0) {
              memcpy(__dest,__src_01,*(size_t *)(param_1 + 0x2f0));
            }
            uVar6 = 0;
            *(long *)(param_1 + 0x8d0) = (long)__dest;
            goto LAB_710001e344;
          }
        }
LAB_710001d968:
        uVar6 = 0x1b;
      }
    }
    else {
      plVar15 = (long *)*param_3;
      *param_3 = (long)(plVar15 + 1);
      __src_01 = (void *)*plVar15;
      if (__src_01 != (void *)0x0) goto LAB_710001ca28;
LAB_710001e330:
      FUN_71000272a0();
      uVar6 = 0;
      *(undefined8 *)(param_1 + 0x8d0) = 0;
    }
LAB_710001e344:
    *(undefined8 *)(param_1 + 0x2e0) = *(undefined8 *)(param_1 + 0x8d0);
LAB_710001e34c:
    *(undefined4 *)(param_1 + 0x480) = 2;
    break;
  case 0x27b8:
    iVar7 = (int)param_3[3];
    if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
      puVar14 = (undefined8 *)(param_3[1] + (long)iVar7);
    }
    else {
      puVar14 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar14 + 1);
    }
    uVar6 = 0;
    *(undefined8 *)(param_1 + 0x378) = *puVar14;
    break;
  case 0x27b9:
    iVar7 = (int)param_3[3];
    if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
      plVar15 = (long *)(param_3[1] + (long)iVar7);
    }
    else {
      plVar15 = (long *)*param_3;
      *param_3 = (long)(plVar15 + 1);
    }
    lVar16 = *plVar15;
    FUN_71000272a0();
    *(undefined8 *)(param_1 + 0x838) = 0;
    if (lVar16 != 0) {
      lVar16 = FUN_71000272c0();
      if (lVar16 != 0) {
        uVar6 = 0;
        *(long *)(param_1 + 0x838) = lVar16;
        break;
      }
      goto LAB_710001d540;
    }
    goto LAB_710001d538;
  case 0x27ba:
    iVar7 = (int)param_3[3];
    if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
      plVar15 = (long *)(param_3[1] + (long)iVar7);
    }
    else {
      plVar15 = (long *)*param_3;
      *param_3 = (long)(plVar15 + 1);
    }
    lVar16 = *plVar15;
    FUN_71000272a0();
    *(undefined8 *)(param_1 + 0x848) = 0;
    if (lVar16 != 0) {
      lVar16 = FUN_71000272c0();
      if (lVar16 != 0) {
        uVar6 = 0;
        *(long *)(param_1 + 0x848) = lVar16;
        break;
      }
      goto LAB_710001d540;
    }
    goto LAB_710001d538;
  case 0x27bd:
    iVar7 = (int)param_3[3];
    if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
      plVar15 = (long *)(param_3[1] + (long)iVar7);
    }
    else {
      plVar15 = (long *)*param_3;
      *param_3 = (long)(plVar15 + 1);
    }
    lVar16 = *plVar15;
    FUN_71000272a0();
    *(undefined8 *)(param_1 + 0x858) = 0;
    if (lVar16 != 0) {
      lVar16 = FUN_71000272c0();
      if (lVar16 != 0) {
        uVar6 = 0;
        *(long *)(param_1 + 0x858) = lVar16;
        break;
      }
      goto LAB_710001d5e8;
    }
    goto LAB_710001e2dc;
  case 0x27be:
    iVar7 = (int)param_3[3];
    if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
      plVar15 = (long *)(param_3[1] + (long)iVar7);
    }
    else {
      plVar15 = (long *)*param_3;
      *param_3 = (long)(plVar15 + 1);
    }
    lVar16 = *plVar15;
    FUN_71000272a0();
    *(undefined8 *)(param_1 + 0x860) = 0;
    if (lVar16 != 0) {
      lVar16 = FUN_71000272c0();
      if (lVar16 != 0) {
        uVar6 = 0;
        *(long *)(param_1 + 0x860) = lVar16;
        break;
      }
      goto LAB_710001d5e8;
    }
    goto LAB_710001e2dc;
  case 0x27bf:
    iVar7 = (int)param_3[3];
    if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
      plVar15 = (long *)(param_3[1] + (long)iVar7);
    }
    else {
      plVar15 = (long *)*param_3;
      *param_3 = (long)(plVar15 + 1);
    }
    lVar16 = *plVar15;
    FUN_71000272a0();
    *(undefined8 *)(param_1 + 0x870) = 0;
    if (lVar16 != 0) {
      lVar16 = FUN_71000272c0();
      if (lVar16 != 0) {
        uVar6 = 0;
        *(long *)(param_1 + 0x870) = lVar16;
        break;
      }
      goto LAB_710001d5e8;
    }
    goto LAB_710001e2dc;
  case 0x27c0:
    iVar7 = (int)param_3[3];
    if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
      plVar15 = (long *)(param_3[1] + (long)iVar7);
    }
    else {
      plVar15 = (long *)*param_3;
      *param_3 = (long)(plVar15 + 1);
    }
    lVar16 = *plVar15;
    FUN_71000272a0();
    *(undefined8 *)(param_1 + 0x878) = 0;
    if (lVar16 != 0) {
      lVar16 = FUN_71000272c0();
      if (lVar16 != 0) {
        uVar6 = 0;
        *(long *)(param_1 + 0x878) = lVar16;
        break;
      }
      goto LAB_710001d5e8;
    }
    goto LAB_710001e2dc;
  case 0x27c1:
    iVar7 = (int)param_3[3];
    if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
      plVar15 = (long *)(param_3[1] + (long)iVar7);
    }
    else {
      plVar15 = (long *)*param_3;
      *param_3 = (long)(plVar15 + 1);
    }
    lVar16 = *plVar15;
    FUN_71000272a0();
    *(undefined8 *)(param_1 + 0x880) = 0;
    if (lVar16 != 0) {
      lVar16 = FUN_71000272c0();
      if (lVar16 != 0) {
        uVar6 = 0;
        *(long *)(param_1 + 0x880) = lVar16;
        break;
      }
      goto LAB_710001d5e8;
    }
    goto LAB_710001e2dc;
  case 0x27ca:
    iVar7 = (int)param_3[3];
    if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
      plVar15 = (long *)(param_3[1] + (long)iVar7);
    }
    else {
      plVar15 = (long *)*param_3;
      *param_3 = (long)(plVar15 + 1);
    }
    lVar16 = *plVar15;
    FUN_71000272a0();
    *(undefined8 *)(param_1 + 0x8a8) = 0;
    if (lVar16 != 0) {
      lVar16 = FUN_71000272c0();
      if (lVar16 != 0) {
        uVar6 = 0;
        *(long *)(param_1 + 0x8a8) = lVar16;
        break;
      }
      goto LAB_710001d540;
    }
    goto LAB_710001d538;
  case 0x27cb:
    iVar7 = (int)param_3[3];
    if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
      puVar14 = (undefined8 *)(param_3[1] + (long)iVar7);
    }
    else {
      puVar14 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar14 + 1);
    }
    uVar6 = 0;
    *(undefined8 *)(param_1 + 0x8f0) = *puVar14;
    break;
  case 0x27ce:
    iVar7 = (int)param_3[3];
    if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
      plVar15 = (long *)(param_3[1] + (long)iVar7);
    }
    else {
      plVar15 = (long *)*param_3;
      *param_3 = (long)(plVar15 + 1);
    }
    lVar16 = *plVar15;
    FUN_71000272a0();
    *(undefined8 *)(param_1 + 0x888) = 0;
    if (lVar16 != 0) {
      lVar16 = FUN_71000272c0();
      if (lVar16 != 0) {
        uVar6 = 0;
        *(long *)(param_1 + 0x888) = lVar16;
        break;
      }
      goto LAB_710001d540;
    }
    goto LAB_710001d538;
  case 0x27cf:
    iVar7 = (int)param_3[3];
    if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
      plVar15 = (long *)(param_3[1] + (long)iVar7);
    }
    else {
      plVar15 = (long *)*param_3;
      *param_3 = (long)(plVar15 + 1);
    }
    lVar16 = *plVar15;
    FUN_71000272a0();
    *(undefined8 *)(param_1 + 0x890) = 0;
    if (lVar16 != 0) {
      lVar16 = FUN_71000272c0();
      if (lVar16 != 0) {
        uVar6 = 0;
        *(long *)(param_1 + 0x890) = lVar16;
        break;
      }
      goto LAB_710001d540;
    }
    goto LAB_710001d538;
  case 0x27d0:
    iVar7 = (int)param_3[3];
    if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
      plVar15 = (long *)(param_3[1] + (long)iVar7);
    }
    else {
      plVar15 = (long *)*param_3;
      *param_3 = (long)(plVar15 + 1);
    }
    lVar16 = *plVar15;
    FUN_71000272a0();
    *(undefined8 *)(param_1 + 0x898) = 0;
    if (lVar16 != 0) {
      lVar16 = FUN_71000272c0();
      if (lVar16 != 0) {
        uVar6 = 0;
        *(long *)(param_1 + 0x898) = lVar16;
        break;
      }
      goto LAB_710001d540;
    }
    goto LAB_710001d538;
  case 0x27d3:
    iVar7 = (int)param_3[3];
    if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
      puVar14 = (undefined8 *)(param_3[1] + (long)iVar7);
    }
    else {
      puVar14 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar14 + 1);
    }
    uVar6 = 0;
    *(undefined8 *)(param_1 + 0x298) = *puVar14;
    break;
  case 0x27d9:
    iVar7 = (int)param_3[3];
    if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
      puVar14 = (undefined8 *)(param_3[1] + (long)iVar7);
    }
    else {
      puVar14 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar14 + 1);
    }
    uVar6 = 0;
    *(undefined8 *)(param_1 + 0x5038) = *puVar14;
    break;
  case 0x27da:
    iVar7 = (int)param_3[3];
    if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
      puVar14 = (undefined8 *)(param_3[1] + (long)iVar7);
    }
    else {
      puVar14 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar14 + 1);
    }
    uVar6 = 0;
    *(undefined8 *)(param_1 + 0x928) = *puVar14;
    break;
  case 0x27db:
    iVar7 = (int)param_3[3];
    if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
      puVar14 = (undefined8 *)(param_3[1] + (long)iVar7);
    }
    else {
      puVar14 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar14 + 1);
    }
    uVar21 = *puVar14;
    uVar6 = 0;
    *(undefined8 *)(param_1 + 0x460) = uVar21;
    *(undefined8 *)(param_1 + 0x9c0) = uVar21;
    break;
  case 0x27e1:
    iVar7 = (int)param_3[3];
    if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
      puVar14 = (undefined8 *)(param_3[1] + (long)iVar7);
    }
    else {
      puVar14 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar14 + 1);
    }
    uVar6 = 0;
    *(undefined8 *)(param_1 + 0x370) = *puVar14;
    break;
  case 0x27e3:
    if ((-1 < (int)param_3[3]) ||
       (iVar7 = (int)param_3[3] + 8, *(int *)(param_3 + 3) = iVar7, 0 < iVar7)) {
      *param_3 = *param_3 + 8;
    }
    uVar10 = FUN_7100004dc0();
    return uVar10;
  case 0x27e9:
    iVar7 = (int)param_3[3];
    if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
      plVar15 = (long *)(param_3[1] + (long)iVar7);
    }
    else {
      plVar15 = (long *)*param_3;
      *param_3 = (long)(plVar15 + 1);
    }
    lVar16 = *plVar15;
    FUN_71000272a0();
    *(undefined8 *)(param_1 + 0x8b0) = 0;
    if (lVar16 != 0) {
      lVar16 = FUN_71000272c0();
      if (lVar16 != 0) {
        uVar6 = 0;
        *(long *)(param_1 + 0x8b0) = lVar16;
        break;
      }
      goto LAB_710001d540;
    }
    goto LAB_710001d538;
  case 0x27ec:
    iVar7 = (int)param_3[3];
    if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
      plVar15 = (long *)(param_3[1] + (long)iVar7);
    }
    else {
      plVar15 = (long *)*param_3;
      *param_3 = (long)(plVar15 + 1);
    }
    lVar16 = *plVar15;
    FUN_71000272a0();
    *(undefined8 *)(param_1 + 0x8b8) = 0;
    if (lVar16 != 0) {
      lVar16 = FUN_71000272c0();
      if (lVar16 != 0) {
        uVar6 = 0;
        *(long *)(param_1 + 0x8b8) = lVar16;
        break;
      }
      goto LAB_710001d5e8;
    }
    goto LAB_710001e2dc;
  case 0x27ed:
    if ((-1 < (int)param_3[3]) ||
       (iVar7 = (int)param_3[3] + 8, *(int *)(param_3 + 3) = iVar7, 0 < iVar7)) {
      *param_3 = *param_3 + 8;
    }
    uVar10 = FUN_7100004dd0();
    return uVar10;
  case 0x27ee:
    if ((-1 < (int)param_3[3]) ||
       (iVar7 = (int)param_3[3] + 8, *(int *)(param_3 + 3) = iVar7, 0 < iVar7)) {
      *param_3 = *param_3 + 8;
    }
    uVar10 = FUN_7100004de0();
    return uVar10;
  case 0x27ef:
    if ((-1 < (int)param_3[3]) ||
       (iVar7 = (int)param_3[3] + 8, *(int *)(param_3 + 3) = iVar7, 0 < iVar7)) {
      *param_3 = *param_3 + 8;
    }
    uVar10 = FUN_7100004df0();
    return uVar10;
  case 0x27f0:
    iVar7 = (int)param_3[3];
    if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
      plVar15 = (long *)(param_3[1] + (long)iVar7);
    }
    else {
      plVar15 = (long *)*param_3;
      *param_3 = (long)(plVar15 + 1);
    }
    lVar16 = *plVar15;
    FUN_71000272a0();
    *(undefined8 *)(param_1 + 0x868) = 0;
    if (lVar16 != 0) {
      lVar16 = FUN_71000272c0();
      if (lVar16 != 0) {
        uVar6 = 0;
        *(long *)(param_1 + 0x868) = lVar16;
        break;
      }
      goto LAB_710001d5e8;
    }
    goto LAB_710001e2dc;
  case 0x27f4:
    iVar7 = (int)param_3[3];
    if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
      puVar14 = (undefined8 *)(param_3[1] + (long)iVar7);
    }
    else {
      puVar14 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar14 + 1);
    }
    uVar6 = 0;
    *(undefined8 *)(param_1 + 0x410) = *puVar14;
    break;
  case 0x27f6:
  case 0x2800:
  case 0x2801:
  case 0x2817:
    break;
  case 0x27fc:
    iVar7 = (int)param_3[3];
    if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
      plVar15 = (long *)(param_3[1] + (long)iVar7);
    }
    else {
      plVar15 = (long *)*param_3;
      *param_3 = (long)(plVar15 + 1);
    }
    lVar16 = *plVar15;
    FUN_71000272a0();
    *(undefined8 *)(param_1 + 0x8a0) = 0;
    if (lVar16 != 0) {
      lVar16 = FUN_71000272c0();
      if (lVar16 != 0) {
        uVar6 = 0;
        *(long *)(param_1 + 0x8a0) = lVar16;
        break;
      }
      goto LAB_710001d5e8;
    }
    goto LAB_710001e2dc;
  case 0x27fe:
    iVar7 = (int)param_3[3];
    if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
      plVar15 = (long *)(param_3[1] + (long)iVar7);
    }
    else {
      plVar15 = (long *)*param_3;
      *param_3 = (long)(plVar15 + 1);
    }
    lVar16 = *plVar15;
    FUN_71000272a0();
    *(undefined8 *)(param_1 + 0x748) = 0;
    if (lVar16 != 0) {
      lVar16 = FUN_71000272c0();
      if (lVar16 != 0) {
        uVar6 = 0;
        *(long *)(param_1 + 0x748) = lVar16;
        break;
      }
      goto LAB_710001d540;
    }
    goto LAB_710001d538;
  case 0x2803:
    iVar7 = (int)param_3[3];
    if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
      puVar14 = (undefined8 *)(param_3[1] + (long)iVar7);
    }
    else {
      puVar14 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar14 + 1);
    }
    uVar6 = 0;
    *(undefined8 *)(param_1 + 0x468) = *puVar14;
    break;
  case 0x2806:
    iVar7 = (int)param_3[3];
    if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
      plVar15 = (long *)(param_3[1] + (long)iVar7);
    }
    else {
      plVar15 = (long *)*param_3;
      *param_3 = (long)(plVar15 + 1);
    }
    lVar16 = *plVar15;
    FUN_71000272a0();
    *(undefined8 *)(param_1 + 0x7f8) = 0;
    if (lVar16 != 0) {
      lVar16 = FUN_71000272c0();
      if (lVar16 != 0) {
        uVar6 = 0;
        *(long *)(param_1 + 0x7f8) = lVar16;
        break;
      }
      goto LAB_710001d540;
    }
    goto LAB_710001d538;
  case 0x2807:
    iVar7 = (int)param_3[3];
    if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
      plVar15 = (long *)(param_3[1] + (long)iVar7);
    }
    else {
      plVar15 = (long *)*param_3;
      *param_3 = (long)(plVar15 + 1);
    }
    lVar16 = *plVar15;
    FUN_71000272a0();
    *(undefined8 *)(param_1 + 0x7e8) = 0;
    if (lVar16 != 0) {
      lVar16 = FUN_71000272c0();
      if (lVar16 != 0) {
        uVar6 = 0;
        *(long *)(param_1 + 0x7e8) = lVar16;
        break;
      }
      goto LAB_710001d540;
    }
    goto LAB_710001d538;
  case 0x280e:
    iVar7 = (int)param_3[3];
    if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
      plVar15 = (long *)(param_3[1] + (long)iVar7);
    }
    else {
      plVar15 = (long *)*param_3;
      *param_3 = (long)(plVar15 + 1);
    }
    lVar16 = *plVar15;
    FUN_71000272a0();
    *(undefined8 *)(param_1 + 0x718) = 0;
    if (lVar16 != 0) {
      lVar16 = FUN_71000272c0();
      if (lVar16 != 0) {
        uVar6 = 0;
        *(long *)(param_1 + 0x718) = lVar16;
        break;
      }
      goto LAB_710001d5e8;
    }
    goto LAB_710001e2dc;
  case 0x280f:
    iVar7 = (int)param_3[3];
    if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
      plVar15 = (long *)(param_3[1] + (long)iVar7);
    }
    else {
      plVar15 = (long *)*param_3;
      *param_3 = (long)(plVar15 + 1);
    }
    lVar16 = *plVar15;
    FUN_71000272a0();
    *(undefined8 *)(param_1 + 0x728) = 0;
    if (lVar16 != 0) {
      lVar16 = FUN_71000272c0();
      if (lVar16 != 0) {
        uVar6 = 0;
        *(long *)(param_1 + 0x728) = lVar16;
        break;
      }
      goto LAB_710001d5e8;
    }
    goto LAB_710001e2dc;
  case 0x2810:
    iVar7 = (int)param_3[3];
    if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
      plVar15 = (long *)(param_3[1] + (long)iVar7);
    }
    else {
      plVar15 = (long *)*param_3;
      *param_3 = (long)(plVar15 + 1);
    }
    lVar16 = *plVar15;
    FUN_71000272a0();
    *(undefined8 *)(param_1 + 0x780) = 0;
    if (lVar16 != 0) {
      lVar16 = FUN_71000272c0();
      if (lVar16 != 0) {
        uVar6 = 0;
        *(long *)(param_1 + 0x780) = lVar16;
        break;
      }
      goto LAB_710001d5e8;
    }
    goto LAB_710001e2dc;
  case 0x2811:
    iVar7 = (int)param_3[3];
    if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
      plVar15 = (long *)(param_3[1] + (long)iVar7);
    }
    else {
      plVar15 = (long *)*param_3;
      *param_3 = (long)(plVar15 + 1);
    }
    lVar16 = *plVar15;
    FUN_71000272a0();
    *(undefined8 *)(param_1 + 0x7a0) = 0;
    if (lVar16 != 0) {
      lVar16 = FUN_71000272c0();
      if (lVar16 != 0) {
        uVar6 = 0;
        *(long *)(param_1 + 0x7a0) = lVar16;
        break;
      }
      goto LAB_710001d5e8;
    }
    goto LAB_710001e2dc;
  case 0x2812:
    iVar7 = (int)param_3[3];
    if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
      plVar15 = (long *)(param_3[1] + (long)iVar7);
    }
    else {
      plVar15 = (long *)*param_3;
      *param_3 = (long)(plVar15 + 1);
    }
    lVar16 = *plVar15;
    FUN_71000272a0();
    *(undefined8 *)(param_1 + 0x790) = 0;
    if (lVar16 != 0) {
      lVar16 = FUN_71000272c0();
      if (lVar16 != 0) {
        uVar6 = 0;
        *(long *)(param_1 + 0x790) = lVar16;
        break;
      }
      goto LAB_710001d5e8;
    }
    goto LAB_710001e2dc;
  case 0x2813:
    iVar7 = (int)param_3[3];
    if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
      plVar15 = (long *)(param_3[1] + (long)iVar7);
    }
    else {
      plVar15 = (long *)*param_3;
      *param_3 = (long)(plVar15 + 1);
    }
    lVar16 = *plVar15;
    FUN_71000272a0();
    *(undefined8 *)(param_1 + 0x818) = 0;
    if (lVar16 != 0) {
      lVar16 = FUN_71000272c0();
      if (lVar16 != 0) {
        uVar6 = 0;
        *(long *)(param_1 + 0x818) = lVar16;
        break;
      }
      goto LAB_710001d5e8;
    }
    goto LAB_710001e2dc;
  case 0x2814:
    iVar7 = (int)param_3[3];
    if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
      plVar15 = (long *)(param_3[1] + (long)iVar7);
    }
    else {
      plVar15 = (long *)*param_3;
      *param_3 = (long)(plVar15 + 1);
    }
    lVar16 = *plVar15;
    FUN_71000272a0();
    *(undefined8 *)(param_1 + 0x840) = 0;
    if (lVar16 != 0) {
      lVar16 = FUN_71000272c0();
      if (lVar16 != 0) {
        uVar6 = 0;
        *(long *)(param_1 + 0x840) = lVar16;
        break;
      }
      goto LAB_710001d540;
    }
LAB_710001d538:
    uVar6 = 0;
    break;
  case 0x2816:
    iVar7 = (int)param_3[3];
    if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
      plVar15 = (long *)(param_3[1] + (long)iVar7);
    }
    else {
      plVar15 = (long *)*param_3;
      *param_3 = (long)(plVar15 + 1);
    }
    lVar16 = *plVar15;
    FUN_71000272a0();
    *(undefined8 *)(param_1 + 0x7c0) = 0;
    if (lVar16 != 0) {
      lVar16 = FUN_71000272c0();
      if (lVar16 != 0) {
        uVar6 = 0;
        *(long *)(param_1 + 0x7c0) = lVar16;
        break;
      }
      goto LAB_710001d5e8;
    }
    goto LAB_710001e2dc;
  case 0x281a:
    iVar7 = (int)param_3[3];
    if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
      plVar15 = (long *)(param_3[1] + (long)iVar7);
    }
    else {
      plVar15 = (long *)*param_3;
      *param_3 = (long)(plVar15 + 1);
    }
    lVar16 = *plVar15;
    FUN_71000272a0();
    *(undefined8 *)(param_1 + 0x8c0) = 0;
    if (lVar16 != 0) {
      lVar16 = FUN_71000272c0();
      if (lVar16 != 0) {
        uVar6 = 0;
        *(long *)(param_1 + 0x8c0) = lVar16;
        break;
      }
      goto LAB_710001d5e8;
    }
LAB_710001e2dc:
    uVar6 = 0;
    break;
  case 0x2906:
    iVar7 = (int)param_3[3];
    if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
      puVar14 = (undefined8 *)(param_3[1] + (long)iVar7);
    }
    else {
      puVar14 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar14 + 1);
    }
    uVar6 = 0;
    *(undefined8 *)(param_1 + 0x4b0) = *puVar14;
    break;
  case 0x2909:
    iVar7 = (int)param_3[3];
    if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
      puVar14 = (undefined8 *)(param_3[1] + (long)iVar7);
    }
    else {
      puVar14 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar14 + 1);
    }
    uVar6 = 0;
    *(undefined8 *)(param_1 + 0x4d0) = *puVar14;
    break;
  default:
    if (param_2 == 0x4e2b) {
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        lVar16 = *(long *)(param_3[1] + (long)iVar7);
        *(long *)(param_1 + 0x300) = lVar16;
      }
      else {
        plVar15 = (long *)*param_3;
        *param_3 = (long)(plVar15 + 1);
        lVar16 = *plVar15;
        *(long *)(param_1 + 0x300) = lVar16;
      }
      if (lVar16 == 0) {
        uVar6 = 0;
        *(undefined4 *)(param_1 + 0x324) = 0;
        *(code **)(param_1 + 0x300) = FUN_7100027700;
      }
      else {
        uVar6 = 0;
        *(undefined4 *)(param_1 + 0x324) = 1;
      }
      break;
    }
    if (param_2 == 0x4e2c) {
      iVar7 = (int)param_3[3];
      if ((iVar7 < 0) && (*(int *)(param_3 + 3) = iVar7 + 8, iVar7 + 8 < 1)) {
        lVar16 = *(long *)(param_3[1] + (long)iVar7);
        *(long *)(param_1 + 0x318) = lVar16;
      }
      else {
        plVar15 = (long *)*param_3;
        *param_3 = (long)(plVar15 + 1);
        lVar16 = *plVar15;
        *(long *)(param_1 + 0x318) = lVar16;
      }
      if (lVar16 == 0) {
        uVar6 = 0;
        *(undefined4 *)(param_1 + 800) = 0;
        *(code **)(param_1 + 0x318) = FUN_71000279b0;
      }
      else {
        uVar6 = 0;
        *(undefined4 *)(param_1 + 800) = 1;
      }
      break;
    }
    goto switchD_7100019c4c_caseD_2713;
  }
switchD_7100019c4c_caseD_27f6:
  return (ulong)uVar6;
}

