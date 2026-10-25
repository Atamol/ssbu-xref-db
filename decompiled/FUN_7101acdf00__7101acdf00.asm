// addr:      7101acdf00
// offset:    0x1acdf00
// name:      FUN_7101acdf00
// mangled:   
// size:      728

7101acdf00  sub sp,sp,#0xa0
7101acdf04  str x23,[sp, #0x60]
7101acdf08  stp x22,x21,[sp, #0x70]
7101acdf0c  stp x20,x19,[sp, #0x80]
7101acdf10  stp x29,x30,[sp, #0x90]
7101acdf14  add x29,sp,#0x90
7101acdf18  mov x19,x2
7101acdf1c  mov w20,w1
7101acdf20  cmp w1,#0x1
7101acdf24  mov w8,w1
7101acdf28  b.eq 0x7101acdf34
7101acdf2c  cbnz w20,0x7101ace1c0
7101acdf30  mov w8,#0xffffffff
7101acdf34  ldr w9,[x19, #0x30]
7101acdf38  cmp w9,#0x3
7101acdf3c  b.eq 0x7101acdf70
7101acdf40  cbnz w9,0x7101ace1c0
7101acdf44  ldr x9,[x0, #0x110]
7101acdf48  ldr w23,[x9]
7101acdf4c  add w8,w23,w8
7101acdf50  add w10,w8,#0x4
7101acdf54  and w11,w8,#0x3
7101acdf58  cmp w8,#0x0
7101acdf5c  csel w22,w10,w11,lt
7101acdf60  str w22,[x9]
7101acdf64  cmp w23,w22
7101acdf68  b.ne 0x7101acdfac
7101acdf6c  b 0x7101ace1c0
7101acdf70  ldr x9,[x0, #0x110]
7101acdf74  ldr w23,[x9, #0x18]
7101acdf78  adds w8,w23,w8
7101acdf7c  b.mi 0x7101acdf9c
7101acdf80  mov w10,#0xaaab
7101acdf84  movk w10,#0xaaaa, LSL #16
7101acdf88  umull x10,w8,w10
7101acdf8c  lsr x10,x10,#0x21
7101acdf90  add w10,w10,w10, LSL #0x1
7101acdf94  sub w22,w8,w10
7101acdf98  b 0x7101acdfa0
7101acdf9c  add w22,w8,#0x3
7101acdfa0  str w22,[x9, #0x18]
7101acdfa4  cmp w23,w22
7101acdfa8  b.eq 0x7101ace1c0
7101acdfac  adrp x8,0x710532f000
7101acdfb0  ldr x8,[x8, #0x8d0]
7101acdfb4  ldr x0,[x8, #0x8]
7101acdfb8  ldrb w8,[x0, #0x191]
7101acdfbc  cbnz w8,0x7101ace03c
7101acdfc0  mov x21,#0xc028
7101acdfc4  movk x21,#0x1ca6, LSL #16
7101acdfc8  movk x21,#0x15, LSL #32
7101acdfcc  mov w2,#0x4
7101acdfd0  mov x1,x21
7101acdfd4  bl 0x7103313f20
7101acdfd8  tbz w0,#0x0,0x7101ace03c
7101acdfdc  add x0,sp,#0x20
7101acdfe0  mov x1,x21
7101acdfe4  bl 0x71024076d0
7101acdfe8  ldr x8,[sp, #0x30]
7101acdfec  adrp x9,0x7104f73000
7101acdff0  add x9,x9,#0xd50
7101acdff4  str x9,[sp, #0x28]
7101acdff8  cbz x8,0x7101ace068
7101acdffc  adrp x8,0x7106dd5000
7101ace000  ldrb w8,[x8, #0x3a8]
7101ace004  cmp w8,#0x1
7101ace008  b.ne 0x7101ace068
7101ace00c  adrp x9,0x7106dd5000
7101ace010  ldr w8,[sp, #0x38]
7101ace014  ldr w9,[x9, #0x3ac]
7101ace018  cmp w8,w9
7101ace01c  b.ne 0x7101ace068
7101ace020  ldr x8,[sp, #0x30]
7101ace024  ldr wzr,[x8, #0x38]!
7101ace028  ldaxr w9,[x8]
7101ace02c  sub w9,w9,#0x1
7101ace030  stlxr w10,w9,[x8]
7101ace034  cbnz w10,0x7101ace028
7101ace038  b 0x7101ace068
7101ace03c  mov x8,#0x650000000000
7101ace040  movk x8,#0x87, LSL #48
7101ace044  strb wzr,[sp, #0x40]
7101ace048  stp xzr,x8,[sp, #0x30]
7101ace04c  mov x8,#-0x1
7101ace050  stp x8,xzr,[sp, #0x48]
7101ace054  adrp x8,0x7104f73000
7101ace058  add x8,x8,#0xd50
7101ace05c  str wzr,[sp, #0x20]
7101ace060  str xzr,[sp, #0x58]
7101ace064  str x8,[sp, #0x28]
7101ace068  str xzr,[sp, #0x30]
7101ace06c  strb wzr,[sp, #0x40]
7101ace070  ldr x0,[x19, #0x28]
7101ace074  cmp w20,#0x1
7101ace078  b.ne 0x7101ace088
7101ace07c  adrp x1,0x71043e0000
7101ace080  add x1,x1,#0x2be
7101ace084  b 0x7101ace090
7101ace088  adrp x1,0x7104422000
7101ace08c  add x1,x1,#0x55e
7101ace090  fmov s0,0x3f800000
7101ace094  bl 0x7103778300
7101ace098  add x0,sp,#0x10
7101ace09c  mov x1,x19
7101ace0a0  bl 0x7103778ab0
7101ace0a4  ldr w8,[x19, #0x30]
7101ace0a8  sub w9,w8,#0x1
7101ace0ac  adrp x1,0x7104329000
7101ace0b0  add x1,x1,#0xb1a
7101ace0b4  cmp w9,#0x2
7101ace0b8  b.cc 0x7101ace110
7101ace0bc  cmp w8,#0x3
7101ace0c0  b.eq 0x7101ace0e4
7101ace0c4  cbnz w8,0x7101ace118
7101ace0c8  sub w8,w23,#0x1
7101ace0cc  cmp w8,#0x3
7101ace0d0  b.cs 0x7101ace108
7101ace0d4  adrp x9,0x71050a9000
7101ace0d8  add x9,x9,#0x9e0
7101ace0dc  ldr x1,[x9, w8, SXTW #0x3]
7101ace0e0  b 0x7101ace110
7101ace0e4  adrp x8,0x710435b000
7101ace0e8  add x8,x8,#0x175
7101ace0ec  cmp w23,#0x1
7101ace0f0  adrp x9,0x7104400000
7101ace0f4  add x9,x9,#0xf32
7101ace0f8  csel x8,x8,x1,eq
7101ace0fc  cmp w23,#0x2
7101ace100  csel x1,x9,x8,eq
7101ace104  b 0x7101ace110
7101ace108  adrp x1,0x7104329000
7101ace10c  add x1,x1,#0xb1a
7101ace110  add x0,sp,#0x10
7101ace114  bl 0x710377a120
7101ace118  ldr x0,[sp, #0x18]
7101ace11c  adrp x20,0x710523d000
7101ace120  add x20,x20,#0x9a8
7101ace124  stp x20,xzr,[sp, #0x10]
7101ace128  cbz x0,0x7101ace130
7101ace12c  bl 0x710392eb40
7101ace130  add x1,x19,#0x10
7101ace134  mov x0,sp
7101ace138  bl 0x7103778ab0
7101ace13c  ldr w8,[x19, #0x30]
7101ace140  sub w9,w8,#0x1
7101ace144  adrp x1,0x7104329000
7101ace148  add x1,x1,#0xb1a
7101ace14c  cmp w9,#0x2
7101ace150  b.cc 0x7101ace1a8
7101ace154  cmp w8,#0x3
7101ace158  b.eq 0x7101ace17c
7101ace15c  cbnz w8,0x7101ace1b0
7101ace160  sub w8,w22,#0x1
7101ace164  cmp w8,#0x3
7101ace168  b.cs 0x7101ace1a0
7101ace16c  adrp x9,0x71050a9000
7101ace170  add x9,x9,#0x9e0
7101ace174  ldr x1,[x9, w8, SXTW #0x3]
7101ace178  b 0x7101ace1a8
7101ace17c  adrp x8,0x710435b000
7101ace180  add x8,x8,#0x175
7101ace184  cmp w22,#0x1
7101ace188  adrp x9,0x7104400000
7101ace18c  add x9,x9,#0xf32
7101ace190  csel x8,x8,x1,eq
7101ace194  cmp w22,#0x2
7101ace198  csel x1,x9,x8,eq
7101ace19c  b 0x7101ace1a8
7101ace1a0  adrp x1,0x7104329000
7101ace1a4  add x1,x1,#0xb1a
7101ace1a8  mov x0,sp
7101ace1ac  bl 0x710377a120
7101ace1b0  ldr x0,[sp, #0x8]
7101ace1b4  stp x20,xzr,[sp]
7101ace1b8  cbz x0,0x7101ace1c0
7101ace1bc  bl 0x710392eb40
7101ace1c0  ldp x29,x30,[sp, #0x90]
7101ace1c4  ldr x23,[sp, #0x60]
7101ace1c8  ldp x20,x19,[sp, #0x80]
7101ace1cc  ldp x22,x21,[sp, #0x70]
7101ace1d0  add sp,sp,#0xa0
7101ace1d4  ret
