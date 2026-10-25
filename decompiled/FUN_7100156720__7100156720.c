// addr:      7100156720
// offset:    0x156720
// name:      FUN_7100156720
// mangled:   
// signature: char * __cdecl FUN_7100156720(undefined8 param_1)


char * FUN_7100156720(undefined8 param_1)

{
  char *pcVar1;
  
  pcVar1 = "KeepAlive";
  switch((uint)((ulong)param_1 >> 0x18) & 0xff) {
  case 8:
    goto switchD_7100156748_caseD_8;
  default:
    pcVar1 = "(KickoutReason_Unknown PROTOCOL NAME)";
switchD_7100156748_caseD_8:
    return pcVar1;
  case 0x14:
    return "Station";
  case 0x18:
    return "Mesh";
  case 0x1c:
    return "SyncClock";
  case 0x24:
    return "Local";
  case 0x28:
    return "Direct";
  case 0x2c:
    return "Net";
  case 0x34:
    return "Nat";
  case 0x44:
    return "Lan";
  case 0x54:
    return "BandwidthCheck";
  case 0x58:
    return "Rtt";
  case 0x65:
    return "Sync";
  case 0x68:
    return "Unreliable";
  case 0x6c:
    return "RoundrobinUnreliable";
  case 0x73:
    return "Clone";
  case 0x74:
    return "Atomic";
  case 0x76:
    return "Event";
  case 0x77:
    return "Clock";
  case 0x78:
    return "InterpolationClock";
  case 0x7b:
    return "Voice";
  case 0x7c:
    return "Reliable";
  case 0x80:
    return "BroadcastReliable";
  case 0x81:
    return "StreamBroadcastReliable";
  case 0x84:
    return "ReliableBroadcast";
  case 0x94:
    return "Session";
  case 0x98:
    return "Lobby";
  case 0xa4:
    return "Feedback";
  case 0xa8:
    return "RelayService";
  case 0xac:
    return "WanNat";
  }
}

