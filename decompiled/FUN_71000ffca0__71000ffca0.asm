// addr:      71000ffca0
// offset:    0xffca0
// name:      FUN_71000ffca0
// mangled:   
// size:      1272

71000ffca0  sub sp,sp,#0x160
71000ffca4  stp x28,x25,[sp, #0x110]
71000ffca8  stp x24,x23,[sp, #0x120]
71000ffcac  stp x22,x21,[sp, #0x130]
71000ffcb0  stp x20,x19,[sp, #0x140]
71000ffcb4  stp x29,x30,[sp, #0x150]
71000ffcb8  add x29,sp,#0x150
71000ffcbc  adrp x22,0x71052a5000
71000ffcc0  ldr x22,[x22, #0x80]
71000ffcc4  mov x19,x0
71000ffcc8  ldr x0,[x22]
71000ffccc  bl 0x7100146ba0
71000ffcd0  sub w8,w0,#0x5
71000ffcd4  cmp w8,#0x3
71000ffcd8  b.hi 0x71000ffd00
71000ffcdc  adrp x9,0x7104496000
71000ffce0  add x9,x9,#0x43c
71000ffce4  ldrsw x8,[x9, x8, LSL #0x2]
71000ffce8  add x8,x8,x9
71000ffcec  br x8
71000ffcf0  mov w8,#0x1
71000ffcf4  orr w9,wzr,#0x3
71000ffcf8  mov w10,#0xc406
71000ffcfc  b 0x71000ffdb4
71000ffd00  adrp x24,0x71052a4000
71000ffd04  ldr x24,[x24, #0xdf0]
71000ffd08  ldr x0,[x24]
71000ffd0c  add x8,sp,#0x10
71000ffd10  bl 0x7100192e90
71000ffd14  ldr w8,[sp, #0x10]
71000ffd18  cbnz w8,0x71000ffd2c
71000ffd1c  ldr x0,[x22]
71000ffd20  bl 0x7100146ba0
71000ffd24  cmp w0,#0x4
71000ffd28  b.ne 0x71000ffe38
71000ffd2c  mov w8,#0x6c59
71000ffd30  str w8,[sp, #0x10]
71000ffd34  add x8,sp,#0x10
71000ffd38  orr x20,x8,#0x4
71000ffd3c  mov x0,x20
71000ffd40  bl 0x71039c0a80
71000ffd44  mov x1,sp
71000ffd48  mov x0,x20
71000ffd4c  str wzr,[sp]
71000ffd50  bl 0x71039c0a90
71000ffd54  add x0,x19,#0x220
71000ffd58  add x1,sp,#0x10
71000ffd5c  bl 0x71000bcf30
71000ffd60  adrp x8,0x71052a5000
71000ffd64  ldr x8,[x8, #0x238]
71000ffd68  mov w9,#0x4
71000ffd6c  strb w9,[x19, #0x130]
71000ffd70  adrp x9,0x7104290000
71000ffd74  add x9,x9,#0xd05
71000ffd78  str x9,[x19, #0x40]
71000ffd7c  stp x8,xzr,[x19, #0x30]
71000ffd80  mov w0,#0x5
71000ffd84  b 0x71000ffe1c
71000ffd88  mov w8,#0x1
71000ffd8c  orr w9,wzr,#0x3
71000ffd90  mov w10,#0xa471
71000ffd94  b 0x71000ffdb4
71000ffd98  mov w8,#0x1
71000ffd9c  orr w9,wzr,#0x3
71000ffda0  mov w10,#0xc420
71000ffda4  b 0x71000ffdb4
71000ffda8  mov w8,#0x1
71000ffdac  orr w9,wzr,#0x3
71000ffdb0  mov w10,#0xc421
71000ffdb4  strb w8,[x19, #0xfa]
71000ffdb8  add x8,sp,#0x10
71000ffdbc  orr x20,x8,#0x4
71000ffdc0  mov x0,x20
71000ffdc4  strb w9,[x19, #0x130]
71000ffdc8  str w10,[sp, #0x10]
71000ffdcc  bl 0x71039c0a80
71000ffdd0  mov x1,sp
71000ffdd4  mov x0,x20
71000ffdd8  str wzr,[sp]
71000ffddc  bl 0x71039c0a90
71000ffde0  add x0,x19,#0x220
71000ffde4  add x1,sp,#0x10
71000ffde8  bl 0x71000bcf30
71000ffdec  ldr x8,[x22]
71000ffdf0  ldr x0,[x8, #0x8]
71000ffdf4  ldr x8,[x0]
71000ffdf8  ldr x8,[x8, #0x28]
71000ffdfc  blr x8
71000ffe00  adrp x8,0x71052a5000
71000ffe04  ldr x8,[x8, #0x240]
71000ffe08  mov x0,xzr
71000ffe0c  stp x8,xzr,[x19, #0x30]
71000ffe10  adrp x8,0x71043ac000
71000ffe14  add x8,x8,#0x982
71000ffe18  str x8,[x19, #0x40]
71000ffe1c  ldp x29,x30,[sp, #0x150]
71000ffe20  ldp x20,x19,[sp, #0x140]
71000ffe24  ldp x22,x21,[sp, #0x130]
71000ffe28  ldp x24,x23,[sp, #0x120]
71000ffe2c  ldp x28,x25,[sp, #0x110]
71000ffe30  add sp,sp,#0x160
71000ffe34  ret
71000ffe38  ldrb w8,[x19, #0xfb]
71000ffe3c  cbz w8,0x71000ffe5c
71000ffe40  add x1,x19,#0x100
71000ffe44  add x0,x19,#0x220
71000ffe48  bl 0x71000bcf30
71000ffe4c  adrp x8,0x71052a5000
71000ffe50  ldr x8,[x8, #0x238]
71000ffe54  orr w9,wzr,#0x6
71000ffe58  b 0x71000ffd6c
71000ffe5c  ldr x0,[x19, #0x58]
71000ffe60  cbz x0,0x71000ffeb0
71000ffe64  ldrb w8,[x0, #0x28]
71000ffe68  cbz w8,0x71000ffeb0
71000ffe6c  ldr w8,[x0]
71000ffe70  sub w8,w8,#0x2
71000ffe74  cmp w8,#0x3
71000ffe78  b.cc 0x71000ffe80
71000ffe7c  bl 0x71000b4260
71000ffe80  str xzr,[x19, #0x58]
71000ffe84  ldr x8,[x22]
71000ffe88  ldrb w9,[x8, #0x162]
71000ffe8c  cmp w9,#0x0
71000ffe90  cset w9,eq
71000ffe94  add x8,x8,w9, UXTW  #0x3
71000ffe98  ldr x0,[x8, #0x168]
71000ffe9c  bl 0x71000d8f90
71000ffea0  mov x0,x19
71000ffea4  bl 0x7100140910
71000ffea8  mov w0,#0x1
71000ffeac  b 0x71000ffe1c
71000ffeb0  ldr w8,[x19, #0xb8]
71000ffeb4  cmp w8,#0x1
71000ffeb8  b.hi 0x71000ffed8
71000ffebc  adrp x8,0x71052a5000
71000ffec0  ldr x8,[x8, #0x3c0]
71000ffec4  mov x0,xzr
71000ffec8  stp x8,xzr,[x19, #0x30]
71000ffecc  adrp x8,0x71042b3000
71000ffed0  add x8,x8,#0x4b1
71000ffed4  b 0x71000ffe18
71000ffed8  adrp x23,0x71052a4000
71000ffedc  ldr x25,[x22]
71000ffee0  ldr x23,[x23, #0xc70]
71000ffee4  ldr x8,[x23]
71000ffee8  ldr x8,[x8, #0x30]
71000ffeec  ldr x9,[x19, #0x1c8]
71000ffef0  sub x20,x8,x9
71000ffef4  bl 0x71000bb680
71000ffef8  ldr x8,[x0]
71000ffefc  mov w9,#0x9c40
71000fff00  mul x8,x8,x9
71000fff04  cmp x20,x8
71000fff08  b.ge 0x71000fffa4
71000fff0c  ldrb w8,[x25, #0x162]
71000fff10  add x8,x25,x8, LSL #0x2
71000fff14  ldr x20,[x25, #0x8]
71000fff18  mov x0,x20
71000fff1c  ldr w1,[x8, #0x180]
71000fff20  bl 0x71000edff0
71000fff24  tbz w0,#0x0,0x71000fffac
71000fff28  mov x0,x19
71000fff2c  bl 0x7100140e30
71000fff30  ldrb w8,[x25, #0x162]
71000fff34  add x8,x25,x8, LSL #0x2
71000fff38  ldr w1,[x8, #0x180]
71000fff3c  mov w21,w0
71000fff40  mov x0,x20
71000fff44  bl 0x71000edff0
71000fff48  tbz w21,#0x0,0x71000fff6c
71000fff4c  tbz w0,#0x0,0x71000fffac
71000fff50  ldrb w8,[x25, #0x162]
71000fff54  cmp w8,#0x0
71000fff58  cset w8,eq
71000fff5c  add x8,x25,w8, UXTW  #0x2
71000fff60  ldr w1,[x8, #0x180]
71000fff64  mov x0,x20
71000fff68  bl 0x71000edff0
71000fff6c  tbz w0,#0x0,0x71000fffac
71000fff70  ldrb w8,[x25, #0x162]
71000fff74  add x8,x25,x8, LSL #0x3
71000fff78  ldr x0,[x8, #0x168]
71000fff7c  ldr x8,[x0]
71000fff80  ldr x8,[x8, #0xe0]
71000fff84  blr x8
71000fff88  tbnz w0,#0x0,0x7100100010
71000fff8c  ldp x8,x9,[x25, #0xf0]
71000fff90  cmp x8,x9
71000fff94  b.ne 0x7100100010
71000fff98  mov w8,#0x6c59
71000fff9c  str w8,[sp, #0x10]
71000fffa0  b 0x71000fffbc
71000fffa4  mov w8,#0x23
71000fffa8  b 0x71000fffb0
71000fffac  orr w8,wzr,#0x18
71000fffb0  mov w9,#0x6c59
71000fffb4  strb w8,[x19, #0x130]
71000fffb8  str w9,[sp, #0x10]
71000fffbc  add x8,sp,#0x10
71000fffc0  orr x20,x8,#0x4
71000fffc4  mov x0,x20
71000fffc8  bl 0x71039c0a80
71000fffcc  mov x1,sp
71000fffd0  mov x0,x20
71000fffd4  str wzr,[sp]
71000fffd8  bl 0x71039c0a90
71000fffdc  add x0,x19,#0x220
71000fffe0  add x1,sp,#0x10
71000fffe4  bl 0x71000bcf30
71000fffe8  ldr x8,[x22]
71000fffec  ldrb w9,[x8, #0x162]
71000ffff0  cmp w9,#0x0
71000ffff4  cset w9,eq
71000ffff8  add x8,x8,w9, UXTW  #0x3
71000ffffc  ldr x0,[x8, #0x168]
7100100000  bl 0x71000d8f90
7100100004  adrp x8,0x71052a5000
7100100008  ldr x8,[x8, #0x238]
710010000c  b 0x71000ffd70
7100100010  ldr x9,[x19, #0xb0]
7100100014  add x8,x19,#0xa8
7100100018  cmp x9,x8
710010001c  b.eq 0x7100100048
7100100020  mov w2,wzr
7100100024  add x10,sp,#0x10
7100100028  ldr x11,[x9, #0x10]
710010002c  and x12,x2,#0xffff
7100100030  add w2,w2,#0x1
7100100034  str x11,[x10, x12, LSL #0x3]
7100100038  ldr x9,[x9, #0x8]
710010003c  cmp x9,x8
7100100040  b.ne 0x7100100028
7100100044  b 0x710010004c
7100100048  mov w2,wzr
710010004c  ldr x0,[x25, #0xb8]
7100100050  add x1,sp,#0x10
7100100054  bl 0x7100150600
7100100058  tbz w0,#0x0,0x710010006c
710010005c  ldr x0,[x24]
7100100060  bl 0x71001939c0
7100100064  ldrb w8,[x0, #0x84]
7100100068  cbz w8,0x7100100074
710010006c  mov w0,#0x5
7100100070  b 0x71000ffe1c
7100100074  ldr x0,[x24]
7100100078  bl 0x7100193a50
710010007c  ldrb w8,[x25, #0x162]
7100100080  add x8,x25,x8, LSL #0x3
7100100084  mov x20,x0
7100100088  ldr x0,[x8, #0x168]
710010008c  ldr x8,[x0]
7100100090  ldr x8,[x8, #0xf0]
7100100094  blr x8
7100100098  mov x2,x0
710010009c  mov x8,sp
71001000a0  add x1,sp,#0x10
71001000a4  mov x0,x20
71001000a8  mov x21,sp
71001000ac  bl 0x71001ae940
71001000b0  ldr w8,[sp]
71001000b4  cbz w8,0x71001000f0
71001000b8  mov w8,#0x15
71001000bc  orr x20,x21,#0x4
71001000c0  strb w8,[x19, #0x130]
71001000c4  mov w8,#0x6c59
71001000c8  mov x0,x20
71001000cc  str w8,[sp]
71001000d0  bl 0x71039c0a80
71001000d4  sub x1,x29,#0x48
71001000d8  mov x0,x20
71001000dc  stur wzr,[x29, #-0x48]
71001000e0  bl 0x71039c0a90
71001000e4  add x0,x19,#0x220
71001000e8  mov x1,sp
71001000ec  b 0x71000fffe4
71001000f0  ldrb w8,[x25, #0x162]
71001000f4  add x8,x25,x8, LSL #0x3
71001000f8  ldr x0,[x8, #0x168]
71001000fc  ldr x8,[x0]
7100100100  ldr x8,[x8, #0xe0]
7100100104  blr x8
7100100108  tbz w0,#0x0,0x7100100144
710010010c  mov w8,#0x13
7100100110  str w8,[x19, #0x98]
7100100114  ldr x8,[x23]
7100100118  ldr x8,[x8, #0x30]
710010011c  strb wzr,[x19, #0xf9]
7100100120  adrp x9,0x71052a5000
7100100124  ldr x9,[x9, #0x3c8]
7100100128  str x8,[x19, #0x1c8]
710010012c  adrp x8,0x7104411000
7100100130  add x8,x8,#0xacc
7100100134  mov x0,xzr
7100100138  str x8,[x19, #0x40]
710010013c  stp x9,xzr,[x19, #0x30]
7100100140  b 0x71000ffe1c
7100100144  ldr x8,[sp, #0x10]
7100100148  str x8,[x19, #0xa0]
710010014c  ldr x20,[x23]
7100100150  bl 0x71000bb680
7100100154  mov x8,x0
7100100158  adrp x10,0x71052a5000
710010015c  ldr x10,[x10, #0x3d0]
7100100160  ldr x11,[x20, #0x30]
7100100164  ldr x8,[x8]
7100100168  mov w9,#0x2710
710010016c  madd x8,x8,x9,x11
7100100170  mov x0,xzr
7100100174  adrp x9,0x710439c000
7100100178  add x9,x9,#0x40a
710010017c  strb wzr,[x19, #0xf8]
7100100180  str x9,[x19, #0x40]
7100100184  stp x10,xzr,[x19, #0x30]
7100100188  str x8,[x19, #0x200]
710010018c  mov w8,#0x12
7100100190  str w8,[x19, #0x230]
7100100194  b 0x71000ffe1c
