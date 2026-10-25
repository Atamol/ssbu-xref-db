// addr:      7101eabde0
// offset:    0x1eabde0
// name:      FUN_7101eabde0
// mangled:   
// size:      960

7101eabde0  stp x28,x27,[sp, #-0x60]!
7101eabde4  stp x26,x25,[sp, #0x10]
7101eabde8  stp x24,x23,[sp, #0x20]
7101eabdec  stp x22,x21,[sp, #0x30]
7101eabdf0  stp x20,x19,[sp, #0x40]
7101eabdf4  stp x29,x30,[sp, #0x50]
7101eabdf8  add x29,sp,#0x50
7101eabdfc  sub sp,sp,#0x1a0
7101eabe00  cmp w1,#0x1
7101eabe04  b.lt 0x7101eac180
7101eabe08  ldp x8,x9,[x0, #0x138]
7101eabe0c  sub x9,x9,x8
7101eabe10  sxtw x25,w1
7101eabe14  asr x9,x9,#0x2
7101eabe18  mov x19,x0
7101eabe1c  cmp x9,x25
7101eabe20  b.ls 0x7101eac180
7101eabe24  adrp x22,0x7105314000
7101eabe28  ldr w21,[x8, x25, LSL #0x2]
7101eabe2c  ldr x8,[x22, #0x510]
7101eabe30  mov x1,x21
7101eabe34  ldr x8,[x8]
7101eabe38  ldr x20,[x8, #0x298]
7101eabe3c  ldr x23,[x8, #0x238]
7101eabe40  mov x0,x20
7101eabe44  bl 0x71017cf490
7101eabe48  tbz w0,#0x0,0x7101eabee4
7101eabe4c  mov x24,sp
7101eabe50  add x0,x24,#0x8
7101eabe54  mov w2,#0x10a
7101eabe58  mov w1,wzr
7101eabe5c  str wzr,[sp]
7101eabe60  add x26,x24,#0x134
7101eabe64  bl 0x71039c02a0
7101eabe68  mov w8,#0x1
7101eabe6c  str x8,[x26]
7101eabe70  mov x8,#0xff0000000000
7101eabe74  movk x8,#0xd9ff, LSL #48
7101eabe78  add x9,x24,#0x14f
7101eabe7c  mov x2,sp
7101eabe80  mov x0,x20
7101eabe84  mov x1,x21
7101eabe88  str xzr,[x9]
7101eabe8c  stp x8,xzr,[sp, #0x140]
7101eabe90  stp xzr,xzr,[sp, #0x188]
7101eabe94  stp xzr,xzr,[sp, #0x178]
7101eabe98  stp xzr,xzr,[sp, #0x168]
7101eabe9c  stp xzr,xzr,[sp, #0x158]
7101eabea0  bl 0x71017ceba0
7101eabea4  ldr x8,[sp, #0x10]
7101eabea8  cbz x8,0x7101eabee4
7101eabeac  tbz w0,#0x0,0x7101eabee4
7101eabeb0  ldr x10,[x23]
7101eabeb4  ldr x10,[x10]
7101eabeb8  mov x9,xzr
7101eabebc  b 0x7101eabecc
7101eabec0  ldr x12,[x11, #0xb28]
7101eabec4  str x12,[x11, #0xb30]
7101eabec8  sub x9,x9,#0x10
7101eabecc  add x11,x10,x9
7101eabed0  ldr x12,[x11, #0xb30]
7101eabed4  cmn x9,#0x2c0
7101eabed8  str x12,[x11, #0xb38]
7101eabedc  b.ne 0x7101eabec0
7101eabee0  str x8,[x10, #0x870]
7101eabee4  cbz w21,0x7101eac100
7101eabee8  ldr x8,[x22, #0x510]
7101eabeec  ldr x8,[x8]
7101eabef0  ldrb w9,[x8, #0x1]
7101eabef4  cbnz w9,0x7101eac100
7101eabef8  ldr x8,[x8, #0x298]
7101eabefc  ldr x20,[x8]
7101eabf00  ldp x8,x26,[x20]
7101eabf04  cmp x8,x26
7101eabf08  b.eq 0x7101eac100
7101eabf0c  ldr x9,[x20, #0x58]
7101eabf10  cbz x9,0x7101eac100
7101eabf14  mov x10,x20
7101eabf18  ldr x11,[x10, #0x50]!
7101eabf1c  cbz x11,0x7101eac100
7101eabf20  mov x9,x10
7101eabf24  ldr w12,[x11, #0x1c]
7101eabf28  cmp w12,w21
7101eabf2c  cset w12,cc
7101eabf30  csel x9,x9,x11,cc
7101eabf34  ldr x11,[x11, w12, UXTW #0x3]
7101eabf38  cbnz x11,0x7101eabf24
7101eabf3c  cmp x9,x10
7101eabf40  b.eq 0x7101eac100
7101eabf44  ldr w10,[x9, #0x1c]
7101eabf48  cmp w10,w21
7101eabf4c  b.hi 0x7101eac100
7101eabf50  ldrsw x9,[x9, #0x20]
7101eabf54  cmn w9,#0x1
7101eabf58  b.eq 0x7101eac100
7101eabf5c  mov w10,#0x2198
7101eabf60  movk w10,#0x3, LSL #16
7101eabf64  madd x21,x9,x10,x8
7101eabf68  add x8,x21,x10
7101eabf6c  cmp x8,x26
7101eabf70  b.eq 0x7101eac0e0
7101eabf74  mov w27,#0x2314
7101eabf78  movk w27,#0x3, LSL #16
7101eabf7c  mov w22,#0x2330
7101eabf80  movk w22,#0x3, LSL #16
7101eabf84  mov w23,#0x2000
7101eabf88  movk w23,#0x3, LSL #16
7101eabf8c  mov w28,#0x4330
7101eabf90  movk w28,#0x6, LSL #16
7101eabf94  mov w8,#0x2198
7101eabf98  movk w8,#0x3, LSL #16
7101eabf9c  add x24,x21,x8
7101eabfa0  mov x0,x21
7101eabfa4  mov x1,x24
7101eabfa8  mov w2,#0x108
7101eabfac  bl 0x71039c00e0
7101eabfb0  mov w8,#0x22a8
7101eabfb4  movk w8,#0x3, LSL #16
7101eabfb8  add x0,x21,#0x108
7101eabfbc  add x1,x21,x8
7101eabfc0  bl 0x7101748070
7101eabfc4  mov w9,#0x22cc
7101eabfc8  movk w9,#0x3, LSL #16
7101eabfcc  add x8,x21,#0x134
7101eabfd0  ldr x9,[x21, x9, LSL #0x0]
7101eabfd4  str x9,[x8]
7101eabfd8  mov w8,#0x22ec
7101eabfdc  movk w8,#0x3, LSL #16
7101eabfe0  add x9,x21,#0x154
7101eabfe4  ldr x8,[x21, x8, LSL #0x0]
7101eabfe8  str x8,[x9]
7101eabfec  mov w8,#0x22e4
7101eabff0  movk w8,#0x3, LSL #16
7101eabff4  add x9,x21,#0x14c
7101eabff8  ldr x8,[x21, x8, LSL #0x0]
7101eabffc  str x8,[x9]
7101eac000  mov w8,#0x22dc
7101eac004  movk w8,#0x3, LSL #16
7101eac008  add x9,x21,#0x144
7101eac00c  ldr x8,[x21, x8, LSL #0x0]
7101eac010  str x8,[x9]
7101eac014  mov w8,#0x22d4
7101eac018  movk w8,#0x3, LSL #16
7101eac01c  add x9,x21,#0x13c
7101eac020  ldr x8,[x21, x8, LSL #0x0]
7101eac024  str x8,[x9]
7101eac028  mov w8,#0x230c
7101eac02c  movk w8,#0x3, LSL #16
7101eac030  add x9,x21,#0x174
7101eac034  ldr x8,[x21, x8, LSL #0x0]
7101eac038  str x8,[x9]
7101eac03c  mov w8,#0x2304
7101eac040  movk w8,#0x3, LSL #16
7101eac044  add x9,x21,#0x16c
7101eac048  ldr x8,[x21, x8, LSL #0x0]
7101eac04c  str x8,[x9]
7101eac050  mov w8,#0x22fc
7101eac054  movk w8,#0x3, LSL #16
7101eac058  add x9,x21,#0x164
7101eac05c  ldr x8,[x21, x8, LSL #0x0]
7101eac060  str x8,[x9]
7101eac064  mov w8,#0x22f4
7101eac068  movk w8,#0x3, LSL #16
7101eac06c  add x9,x21,#0x15c
7101eac070  ldr x8,[x21, x8, LSL #0x0]
7101eac074  str x8,[x9]
7101eac078  mov w8,#0x232c
7101eac07c  movk w8,#0x3, LSL #16
7101eac080  add x9,x21,#0x18c
7101eac084  ldr w8,[x21, x8, LSL #0x0]
7101eac088  str w8,[x21, #0x194]
7101eac08c  mov w8,#0x2324
7101eac090  movk w8,#0x3, LSL #16
7101eac094  add x0,x21,#0x198
7101eac098  ldr x8,[x21, x8, LSL #0x0]
7101eac09c  str x8,[x9]
7101eac0a0  mov w8,#0x231c
7101eac0a4  movk w8,#0x3, LSL #16
7101eac0a8  add x9,x21,#0x184
7101eac0ac  ldr x8,[x21, x8, LSL #0x0]
7101eac0b0  str x8,[x9]
7101eac0b4  ldr x8,[x21, x27, LSL #0x0]
7101eac0b8  add x9,x21,#0x17c
7101eac0bc  add x1,x21,x22
7101eac0c0  mov x2,x23
7101eac0c4  str x8,[x9]
7101eac0c8  bl 0x71039c00e0
7101eac0cc  add x8,x21,x28
7101eac0d0  mov x21,x24
7101eac0d4  cmp x8,x26
7101eac0d8  b.ne 0x7101eabf94
7101eac0dc  mov x21,x24
7101eac0e0  mov x0,x20
7101eac0e4  str x21,[x20, #0x8]
7101eac0e8  bl 0x71017c9d80
7101eac0ec  ldr w8,[x20, #0xf8]
7101eac0f0  sub w8,w8,#0x1
7101eac0f4  str w8,[x20, #0xf8]
7101eac0f8  mov w8,#0x1
7101eac0fc  strb w8,[x20, #0xfc]
7101eac100  ldp x8,x9,[x19, #0x138]
7101eac104  add x20,x8,x25, LSL #0x2
7101eac108  add x1,x20,#0x4
7101eac10c  subs x2,x9,x1
7101eac110  asr x21,x2,#0x2
7101eac114  b.eq 0x7101eac124
7101eac118  mov x0,x20
7101eac11c  bl 0x71039c00a0
7101eac120  ldr x8,[x19, #0x138]
7101eac124  add x9,x20,x21, LSL #0x2
7101eac128  sub x8,x9,x8
7101eac12c  lsr x20,x8,#0x2
7101eac130  ldr x8,[x19, #0x40]
7101eac134  str x9,[x19, #0x140]
7101eac138  ldr x0,[x8]
7101eac13c  cbz x0,0x7101eac158
7101eac140  adrp x1,0x71043f1000
7101eac144  add x1,x1,#0x4
7101eac148  adrp x2,0x71042b2000
7101eac14c  add x2,x2,#0xa84
7101eac150  mov w3,w20
7101eac154  bl 0x7103375650
7101eac158  add x0,x19,#0xf8
7101eac15c  mov w1,w20
7101eac160  add sp,sp,#0x1a0
7101eac164  ldp x29,x30,[sp, #0x50]
7101eac168  ldp x20,x19,[sp, #0x40]
7101eac16c  ldp x22,x21,[sp, #0x30]
7101eac170  ldp x24,x23,[sp, #0x20]
7101eac174  ldp x26,x25,[sp, #0x10]
7101eac178  ldp x28,x27,[sp], #0x60
7101eac17c  b 0x7103783690
7101eac180  add sp,sp,#0x1a0
7101eac184  ldp x29,x30,[sp, #0x50]
7101eac188  ldp x20,x19,[sp, #0x40]
7101eac18c  ldp x22,x21,[sp, #0x30]
7101eac190  ldp x24,x23,[sp, #0x20]
7101eac194  ldp x26,x25,[sp, #0x10]
7101eac198  ldp x28,x27,[sp], #0x60
7101eac19c  ret
