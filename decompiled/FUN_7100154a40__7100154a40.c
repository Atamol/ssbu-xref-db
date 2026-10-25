// addr:      7100154a40
// offset:    0x154a40
// name:      FUN_7100154a40
// mangled:   
// signature: undefined __cdecl FUN_7100154a40(uint * param_1, ulong param_2)


void FUN_7100154a40(uint *param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint *puVar4;
  
  FUN_7100154ca0("[Analysis] ------ BEGIN(%s, %d.%03d sec. passed) ------");
  FUN_7100154ca0("[Analysis]     ProtocolId, TotalNum, TotalSize, AverageSize, Protocol(port)");
  FUN_7100154ca0("[Analysis]     0xffffffff, %8d,  %8d,    %8d, Packet");
  uVar2 = param_1[0xc0];
  if (0 < (int)uVar2) {
    if ((param_2 & 1) == 0) {
      lVar3 = 0;
      puVar4 = param_1;
      do {
        uVar1 = *puVar4 >> 0x18;
        switch(uVar1) {
        case 8:
        case 0x14:
        case 0x18:
        case 0x1c:
        case 0x24:
        case 0x28:
        case 0x2c:
        case 0x34:
        case 0x44:
        case 0x54:
        case 0x58:
          break;
        case 9:
        case 10:
        case 0xb:
        case 0xc:
        case 0xd:
        case 0xe:
        case 0xf:
        case 0x10:
        case 0x11:
        case 0x12:
        case 0x13:
        case 0x15:
        case 0x16:
        case 0x17:
        case 0x19:
        case 0x1a:
        case 0x1b:
        case 0x1d:
        case 0x1e:
        case 0x1f:
        case 0x20:
        case 0x21:
        case 0x22:
        case 0x23:
        case 0x25:
        case 0x26:
        case 0x27:
        case 0x29:
        case 0x2a:
        case 0x2b:
        case 0x2d:
        case 0x2e:
        case 0x2f:
        case 0x30:
        case 0x31:
        case 0x32:
        case 0x33:
        case 0x35:
        case 0x36:
        case 0x37:
        case 0x38:
        case 0x39:
        case 0x3a:
        case 0x3b:
        case 0x3c:
        case 0x3d:
        case 0x3e:
        case 0x3f:
        case 0x40:
        case 0x41:
        case 0x42:
        case 0x43:
        case 0x45:
        case 0x46:
        case 0x47:
        case 0x48:
        case 0x49:
        case 0x4a:
        case 0x4b:
        case 0x4c:
        case 0x4d:
        case 0x4e:
        case 0x4f:
        case 0x50:
        case 0x51:
        case 0x52:
        case 0x53:
        case 0x55:
        case 0x56:
        case 0x57:
LAB_7100154bac:
          FUN_7100156720((ulong)*puVar4);
          FUN_7100154ca0("[Analysis]     0x%08x, %8d,  %8d,    %8d, %s(%u)");
          uVar2 = param_1[0xc0];
          break;
        default:
          uVar1 = uVar1 - 0x94;
          if (0x18 < uVar1 || (1 << (ulong)(uVar1 & 0x1f) & 0x1110011U) == 0) goto LAB_7100154bac;
        }
        lVar3 = lVar3 + 1;
        puVar4 = puVar4 + 6;
      } while (lVar3 < (int)uVar2);
    }
    else {
      lVar3 = 0;
      puVar4 = param_1;
      do {
        FUN_7100156720((ulong)*puVar4);
        puVar4 = puVar4 + 6;
        FUN_7100154ca0("[Analysis]     0x%08x, %8d,  %8d,    %8d, %s(%u)");
        lVar3 = lVar3 + 1;
      } while (lVar3 < (int)param_1[0xc0]);
    }
  }
  FUN_7100154ca0("[Analysis] ---------------------------- END ----------------------------");
  return;
}

