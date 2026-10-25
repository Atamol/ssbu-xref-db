// addr:      71013cee40
// offset:    0x13cee40
// name:      FUN_71013cee40
// mangled:   
// size:      296

71013cee40  ldr x8,[x0]
71013cee44  ldrb w8,[x8, #0x14]
71013cee48  cbz w8,0x71013cef64
71013cee4c  sub sp,sp,#0x30
71013cee50  str x19,[sp, #0x10]
71013cee54  stp x29,x30,[sp, #0x20]
71013cee58  add x29,sp,#0x20
71013cee5c  ldr x8,[x0, #0x130]
71013cee60  mov x0,sp
71013cee64  ldr x8,[x8, #0x80]
71013cee68  mov x19,x1
71013cee6c  add x1,x8,#0x318
71013cee70  bl 0x7103778ab0
71013cee74  ldr x8,[x19]
71013cee78  mov x9,#0x8e00
71013cee7c  movk x9,#0xbcac, LSL #16
71013cee80  movk x9,#0xd, LSL #32
71013cee84  add x19,x8,x9
71013cee88  ldr x8,[sp, #0x8]
71013cee8c  ldr x0,[x8, #0x10]
71013cee90  cbz x0,0x71013ceea8
71013cee94  sub x1,x29,#0x4
71013cee98  mov w2,wzr
71013cee9c  mov w3,wzr
71013ceea0  stur wzr,[x29, #-0x4]
71013ceea4  bl 0x71037a2270
71013ceea8  and x8,x19,#0xffffffff
71013ceeac  asr x9,x19,#0x20
71013ceeb0  mov w10,#0x3d1d
71013ceeb4  movk w10,#0x68fd, LSL #16
71013ceeb8  mul x11,x9,x10
71013ceebc  mul x10,x8,x10
71013ceec0  add x10,x11,x10, LSR #0x20
71013ceec4  mov w11,#0x33fe
71013ceec8  movk w11,#0x125, LSL #16
71013ceecc  mul x9,x9,x11
71013ceed0  mul x8,x8,x11
71013ceed4  add x8,x8,w10, UXTW 
71013ceed8  add x9,x9,x10, ASR #0x20
71013ceedc  add x8,x9,x8, LSR #0x20
71013ceee0  asr x8,x8,#0x1c
71013ceee4  add x8,x8,x19, LSR #0x3f
71013ceee8  bic x4,x8,x8, ASR #0x3f
71013ceeec  orr x8,xzr,#-0x7777777777777778
71013ceef0  movk x8,#0x8889
71013ceef4  umulh x8,x4,x8
71013ceef8  lsr x3,x8,#0x5
71013ceefc  cmp w3,#0x1
71013cef00  b.lt 0x71013cef28
71013cef04  orr x8,xzr,#0x3c00000000
71013cef08  mul x8,x3,x8
71013cef0c  lsr x8,x8,#0x20
71013cef10  sub w4,w4,w8
71013cef14  adrp x1,0x710427f000
71013cef18  add x1,x1,#0x297
71013cef1c  mov x0,sp
71013cef20  mov w2,#0x2
71013cef24  b 0x71013cef3c
71013cef28  adrp x1,0x710427f000
71013cef2c  add x1,x1,#0x297
71013cef30  mov x0,sp
71013cef34  mov w2,#0x2
71013cef38  mov w3,wzr
71013cef3c  bl 0x710377a280
71013cef40  ldr x0,[sp, #0x8]
71013cef44  adrp x8,0x710523d000
71013cef48  add x8,x8,#0x9a8
71013cef4c  stp x8,xzr,[sp]
71013cef50  cbz x0,0x71013cef58
71013cef54  bl 0x710392eb40
71013cef58  ldp x29,x30,[sp, #0x20]
71013cef5c  ldr x19,[sp, #0x10]
71013cef60  add sp,sp,#0x30
71013cef64  ret
