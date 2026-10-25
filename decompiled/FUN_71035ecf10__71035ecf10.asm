// addr:      71035ecf10
// offset:    0x35ecf10
// name:      FUN_71035ecf10
// mangled:   
// size:      716

71035ecf10  sub sp,sp,#0x60
71035ecf14  str x23,[sp, #0x20]
71035ecf18  stp x22,x21,[sp, #0x30]
71035ecf1c  stp x20,x19,[sp, #0x40]
71035ecf20  stp x29,x30,[sp, #0x50]
71035ecf24  add x29,sp,#0x50
71035ecf28  adrp x8,0x7105232000
71035ecf2c  add x8,x8,#0xe80
71035ecf30  str w2,[x0, #0x118]
71035ecf34  str x8,[x0]
71035ecf38  adrp x8,0x7105232000
71035ecf3c  add x8,x8,#0xdc0
71035ecf40  stp x8,xzr,[x0, #0x18]
71035ecf44  adrp x8,0x710446a000
71035ecf48  ldr q0,[x8, #0x350]
71035ecf4c  adrp x8,0x7105232000
71035ecf50  add x8,x8,#0xd28
71035ecf54  stp x8,xzr,[x0, #0x38]
71035ecf58  adrp x8,0x7104468000
71035ecf5c  ldr q1,[x8, #0xca0]
71035ecf60  adrp x8,0x710446a000
71035ecf64  mov w22,#0x1
71035ecf68  stp xzr,xzr,[x0, #0x28]
71035ecf6c  mov x21,x1
71035ecf70  stp xzr,xzr,[x0, #0x48]
71035ecf74  mov x20,x0
71035ecf78  orr w1,wzr,#0x78
71035ecf7c  mov w19,w2
71035ecf80  stur x22,[x0, #0xc]
71035ecf84  strb w22,[x0, #0x11c]
71035ecf88  str xzr,[x0, #0xd0]
71035ecf8c  strh wzr,[x0, #0x8]
71035ecf90  stp xzr,xzr,[x0, #0x108]
71035ecf94  stp xzr,xzr,[x0, #0xf8]
71035ecf98  stp xzr,xzr,[x0, #0xe8]
71035ecf9c  stp xzr,xzr,[x0, #0xd8]
71035ecfa0  str q0,[x0, #0xc0]
71035ecfa4  stp q0,q1,[x0, #0x80]
71035ecfa8  ldr q1,[x8, #0x360]
71035ecfac  adrp x8,0x7104465000
71035ecfb0  ldr q2,[x8, #0x6b0]
71035ecfb4  stp q0,q0,[x0, #0x60]
71035ecfb8  stp q1,q2,[x0, #0xa0]
71035ecfbc  mov w0,#0x10
71035ecfc0  bl 0x710392e290
71035ecfc4  cbnz x0,0x71035ed00c
71035ecfc8  adrp x8,0x7105332000
71035ecfcc  ldr x0,[x8, #0xf00]
71035ecfd0  cbz x0,0x71035ed008
71035ecfd4  orr w8,wzr,#0x78
71035ecfd8  stur wzr,[x29, #-0x24]
71035ecfdc  sub x1,x29,#0x24
71035ecfe0  str x8,[sp, #0x8]
71035ecfe4  ldr x8,[x0]
71035ecfe8  ldr x8,[x8, #0x30]
71035ecfec  add x2,sp,#0x8
71035ecff0  blr x8
71035ecff4  tbz w0,#0x0,0x71035ed008
71035ecff8  mov w0,#0x10
71035ecffc  orr w1,wzr,#0x78
71035ed000  bl 0x710392e290
71035ed004  cbnz x0,0x71035ed00c
71035ed008  mov x0,xzr
71035ed00c  adrp x8,0x7105232000
71035ed010  add x8,x8,#0xb78
71035ed014  orr w9,wzr,#0x3
71035ed018  mov x10,x0
71035ed01c  str x8,[x0]
71035ed020  orr w8,wzr,#0xff
71035ed024  stp xzr,xzr,[x0, #0x8]
71035ed028  strh w9,[x10, #0x18]!
71035ed02c  strb w8,[x0, #0x48]
71035ed030  orr w8,wzr,#0xff00
71035ed034  strh w8,[x0, #0x50]
71035ed038  orr x8,xzr,#0x10000000000
71035ed03c  stur x8,[x0, #0x52]
71035ed040  mov w8,#0x1000000
71035ed044  stp w8,wzr,[x0, #0x5c]
71035ed048  mov x8,#0x41880000
71035ed04c  movk x8,#0x4110, LSL #48
71035ed050  orr x9,xzr,#0x3f80000000000000
71035ed054  str x8,[x0, #0x68]
71035ed058  mov w8,#0x41880000
71035ed05c  str wzr,[x0, #0x1c]
71035ed060  strb wzr,[x0, #0x20]
71035ed064  stur xzr,[x0, #0x24]
71035ed068  str wzr,[x0, #0x4c]
71035ed06c  strb w22,[x0, #0x5a]
71035ed070  str wzr,[x0, #0x2c]
71035ed074  str x9,[x0, #0x40]
71035ed078  strb wzr,[x0, #0x64]
71035ed07c  str w8,[x0, #0x70]
71035ed080  stp xzr,xzr,[x0, #0x30]
71035ed084  ldr x22,[x20, #0xe8]
71035ed088  stp x10,x0,[x20, #0xe0]
71035ed08c  cbz x22,0x71035ed0a8
71035ed090  add x8,x22,#0x8
71035ed094  ldaxr x9,[x8]
71035ed098  sub x10,x9,#0x1
71035ed09c  stlxr w11,x10,[x8]
71035ed0a0  cbnz w11,0x71035ed094
71035ed0a4  cbz x9,0x71035ed1b0
71035ed0a8  cmp w19,#0x5
71035ed0ac  b.eq 0x71035ed198
71035ed0b0  adrp x0,0x7105336000
71035ed0b4  add x0,x0,#0xe20
71035ed0b8  bl 0x71039c1a40
71035ed0bc  ldr w0,[x21]
71035ed0c0  adrp x1,0x710439b000
71035ed0c4  add x1,x1,#0xb15
71035ed0c8  bl 0x71035c25f0
71035ed0cc  mov x22,x0
71035ed0d0  orr w8,wzr,#0xffffff
71035ed0d4  cmp w22,w8
71035ed0d8  b.eq 0x71035ed164
71035ed0dc  adrp x23,0x7105332000
71035ed0e0  ldr x0,[x23, #0xf20]
71035ed0e4  mov w1,w22
71035ed0e8  bl 0x7103540a00
71035ed0ec  ldr x8,[x23, #0xf20]
71035ed0f0  ldr w9,[x8, #0x18]
71035ed0f4  cmp w9,w22
71035ed0f8  b.ls 0x71035ed14c
71035ed0fc  ldr x9,[x8, #0x8]
71035ed100  add x10,x9,w22, UXTW  #0x3
71035ed104  ldrb w10,[x10, #0x4]
71035ed108  cbz w10,0x71035ed14c
71035ed10c  and x10,x22,#0xffffffff
71035ed110  lsl x10,x10,#0x3
71035ed114  ldr w9,[x9, x10, LSL #0x0]
71035ed118  orr w10,wzr,#0xffffff
71035ed11c  cmp w9,w10
71035ed120  b.eq 0x71035ed14c
71035ed124  ldr w10,[x8, #0x1c]
71035ed128  cmp w10,w9
71035ed12c  b.ls 0x71035ed14c
71035ed130  ldr x8,[x8, #0x10]
71035ed134  orr w10,wzr,#0x18
71035ed138  madd x8,x9,x10,x8
71035ed13c  ldrb w9,[x8, #0xc]
71035ed140  cmp w9,#0x0
71035ed144  ccmp x8,#0x0,#0x4,ne
71035ed148  b.ne 0x71035ed1d4
71035ed14c  mov x1,xzr
71035ed150  ldr x0,[x20, #0xe0]
71035ed154  bl 0x71035e2f00
71035ed158  ldr x0,[x23, #0xf20]
71035ed15c  mov w1,w22
71035ed160  bl 0x7103540b10
71035ed164  orr x8,xzr,#-0x100000000
71035ed168  stp xzr,x8,[sp, #0x8]
71035ed16c  str w19,[sp, #0x18]
71035ed170  ldr x8,[x20]
71035ed174  ldr x8,[x8, #0x48]
71035ed178  add x1,sp,#0x8
71035ed17c  mov x0,x20
71035ed180  mov x2,x21
71035ed184  blr x8
71035ed188  adrp x0,0x7105336000
71035ed18c  add x0,x0,#0xe20
71035ed190  str w19,[x20, #0x118]
71035ed194  bl 0x71039c1a50
71035ed198  ldp x29,x30,[sp, #0x50]
71035ed19c  ldr x23,[sp, #0x20]
71035ed1a0  ldp x20,x19,[sp, #0x40]
71035ed1a4  ldp x22,x21,[sp, #0x30]
71035ed1a8  add sp,sp,#0x60
71035ed1ac  ret
71035ed1b0  ldr x8,[x22]
71035ed1b4  ldr x8,[x8, #0x10]
71035ed1b8  mov x0,x22
71035ed1bc  blr x8
71035ed1c0  mov x0,x22
71035ed1c4  bl 0x71039c2670
71035ed1c8  cmp w19,#0x5
71035ed1cc  b.ne 0x71035ed0b0
71035ed1d0  b 0x71035ed198
71035ed1d4  ldr x1,[x8]
71035ed1d8  b 0x71035ed150
