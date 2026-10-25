// addr:      7101d6fd00
// offset:    0x1d6fd00
// name:      FUN_7101d6fd00
// mangled:   
// size:      868

7101d6fd00  str d8,[sp, #-0x30]!
7101d6fd04  str x21,[sp, #0x8]
7101d6fd08  stp x20,x19,[sp, #0x10]
7101d6fd0c  stp x29,x30,[sp, #0x20]
7101d6fd10  add x29,sp,#0x20
7101d6fd14  ldr w8,[x0, #0x2a0]
7101d6fd18  sub w9,w8,#0x1
7101d6fd1c  mov x19,x0
7101d6fd20  cmp w9,#0x2
7101d6fd24  b.cc 0x7101d6fdbc
7101d6fd28  cmp w8,#0x3
7101d6fd2c  b.eq 0x7101d6fd34
7101d6fd30  cbnz w8,0x7101d6fdf0
7101d6fd34  ldr w2,[x19, #0x2ac]
7101d6fd38  ldr w3,[x19, #0x2b0]
7101d6fd3c  ldr x0,[x19]
7101d6fd40  ldr w1,[x19, #0x290]
7101d6fd44  bl 0x7101d88520
7101d6fd48  ldr w9,[x19, #0x4cc]
7101d6fd4c  tst x0,#0xffffffffff
7101d6fd50  lsr x10,x0,#0x38
7101d6fd54  cset w8,ne
7101d6fd58  cmp x10,#0xd9
7101d6fd5c  fmov s8,wzr
7101d6fd60  cset w10,eq
7101d6fd64  mov x1,x0
7101d6fd68  and w8,w10,w8
7101d6fd6c  cmp w9,#0x3
7101d6fd70  b.ne 0x7101d6fe04
7101d6fd74  cbz w8,0x7101d6ffb8
7101d6fd78  adrp x8,0x710532f000
7101d6fd7c  ldr x8,[x8, #0x730]
7101d6fd80  ldr x20,[x8, #0x8]
7101d6fd84  ldr x0,[x20, #0x278]
7101d6fd88  bl 0x710325ce30
7101d6fd8c  mov x1,x0
7101d6fd90  ldr x0,[x20, #0x278]
7101d6fd94  bl 0x710325d640
7101d6fd98  cbz x0,0x7101d6ff84
7101d6fd9c  ldr w8,[x0, #0x5c]
7101d6fda0  cbz w8,0x7101d6ff90
7101d6fda4  ldp w9,w10,[x0, #0x68]
7101d6fda8  sub w9,w10,w9
7101d6fdac  sub w8,w8,#0x1
7101d6fdb0  madd w8,w9,w8,w10
7101d6fdb4  cbnz w8,0x7101d6ff98
7101d6fdb8  b 0x7101d6ffb4
7101d6fdbc  adrp x8,0x710532f000
7101d6fdc0  ldr x8,[x8, #0x8d0]
7101d6fdc4  ldr x0,[x8, #0x8]
7101d6fdc8  ldr x8,[x0, #0xc8]
7101d6fdcc  and x9,x8,#0xffffffffff
7101d6fdd0  and x8,x8,#-0x100000000000000
7101d6fdd4  mov x10,#-0x2700000000000000
7101d6fdd8  cmp x8,x10
7101d6fddc  ccmp x9,#0x0,#0x4,eq
7101d6fde0  b.ne 0x7101d6fe80
7101d6fde4  bl 0x7103315750
7101d6fde8  mov w20,wzr
7101d6fdec  b 0x7101d6feac
7101d6fdf0  ldp x29,x30,[sp, #0x20]
7101d6fdf4  ldr x21,[sp, #0x8]
7101d6fdf8  ldp x20,x19,[sp, #0x10]
7101d6fdfc  ldr d8,[sp], #0x30
7101d6fe00  ret
7101d6fe04  cbz w8,0x7101d6ffb8
7101d6fe08  adrp x8,0x710532f000
7101d6fe0c  ldr x8,[x8, #0x730]
7101d6fe10  ldr x20,[x8, #0x8]
7101d6fe14  ldr x0,[x20, #0x278]
7101d6fe18  bl 0x710325ce30
7101d6fe1c  mov x1,x0
7101d6fe20  ldr x0,[x20, #0x278]
7101d6fe24  bl 0x710325d640
7101d6fe28  cbz x0,0x7101d6ff84
7101d6fe2c  ldp w10,w9,[x0, #0x5c]
7101d6fe30  ldr w8,[x0, #0x6c]
7101d6fe34  cmp w9,w8
7101d6fe38  csel w9,w8,w9,hi
7101d6fe3c  cbz w10,0x7101d6fe54
7101d6fe40  ldr w11,[x0, #0x68]
7101d6fe44  cmp w9,w11
7101d6fe48  sub w12,w8,w11
7101d6fe4c  csel w9,w9,w11,hi
7101d6fe50  madd w9,w12,w10,w9
7101d6fe54  cbz w9,0x7101d6ff8c
7101d6fe58  ldr s0,[x0, #0x64]
7101d6fe5c  ucvtf s0,s0
7101d6fe60  adrp x8,0x7104472000
7101d6fe64  ldr s1,[x8, #0x3c0]
7101d6fe68  fmul s0,s0,s1
7101d6fe6c  ucvtf s1,w9
7101d6fe70  fadd s0,s0,s1
7101d6fe74  fcvtzu w8,s0
7101d6fe78  cbnz w8,0x7101d6ff98
7101d6fe7c  b 0x7101d6ffb4
7101d6fe80  ldr w20,[x0, #0xd8]
7101d6fe84  bl 0x7103315750
7101d6fe88  cbz w20,0x7101d6feac
7101d6fe8c  ucvtf s0,w0
7101d6fe90  adrp x8,0x7104473000
7101d6fe94  ldr s1,[x8, #0x91c]
7101d6fe98  ucvtf s2,w20
7101d6fe9c  fmul s0,s0,s1
7101d6fea0  fdiv s0,s0,s2
7101d6fea4  fmin s0,s0,s1
7101d6fea8  b 0x7101d6feb0
7101d6feac  fmov s0,wzr
7101d6feb0  mov w8,#0xb273
7101d6feb4  movk w8,#0x45e7, LSL #16
7101d6feb8  mov w16,#0x7cb1
7101d6febc  movk w16,#0x9521, LSL #16
7101d6fec0  umull x10,w20,w8
7101d6fec4  umull x8,w0,w8
7101d6fec8  umull x17,w0,w16
7101d6fecc  umull x16,w20,w16
7101d6fed0  mov w9,#0x8889
7101d6fed4  movk w9,#0x8888, LSL #16
7101d6fed8  mov w13,#0x4240
7101d6fedc  movk w13,#0xf, LSL #16
7101d6fee0  lsr x8,x8,#0x2e
7101d6fee4  lsr x17,x17,#0x35
7101d6fee8  lsr x16,x16,#0x35
7101d6feec  mul w17,w17,w13
7101d6fef0  mul w13,w16,w13
7101d6fef4  mul x16,x8,x9
7101d6fef8  mov w11,#0x4dd3
7101d6fefc  movk w11,#0x1062, LSL #16
7101d6ff00  umull x14,w0,w11
7101d6ff04  orr w12,wzr,#0x3c
7101d6ff08  umull x11,w20,w11
7101d6ff0c  lsr x14,x14,#0x26
7101d6ff10  lsr x10,x10,#0x2e
7101d6ff14  mul x18,x10,x9
7101d6ff18  lsr x11,x11,#0x26
7101d6ff1c  lsr x18,x18,#0x25
7101d6ff20  lsr x16,x16,#0x25
7101d6ff24  msub w8,w16,w12,w8
7101d6ff28  mul x16,x14,x9
7101d6ff2c  mul x9,x11,x9
7101d6ff30  mov w15,#0x3e8
7101d6ff34  lsr x16,x16,#0x25
7101d6ff38  msub w10,w18,w12,w10
7101d6ff3c  madd w8,w8,w15,w17
7101d6ff40  ldr x0,[x19, #0x240]
7101d6ff44  msub w14,w16,w12,w14
7101d6ff48  lsr x9,x9,#0x25
7101d6ff4c  msub w9,w9,w12,w11
7101d6ff50  add x20,x8,x14
7101d6ff54  madd w8,w10,w15,w13
7101d6ff58  adrp x1,0x710439d000
7101d6ff5c  add x1,x1,#0x7ab
7101d6ff60  add x21,x8,x9
7101d6ff64  bl 0x7103778630
7101d6ff68  adrp x1,0x710436c000
7101d6ff6c  add x1,x1,#0x710
7101d6ff70  add x0,x19,#0x268
7101d6ff74  mov w2,#0x2
7101d6ff78  mov x3,x20
7101d6ff7c  mov x4,x21
7101d6ff80  b 0x7101d70050
7101d6ff84  mov w8,wzr
7101d6ff88  b 0x7101d6ffb8
7101d6ff8c  cbnz w8,0x7101d6ff98
7101d6ff90  ldr w8,[x0, #0x78]
7101d6ff94  cbz w8,0x7101d6ffb4
7101d6ff98  ucvtf s0,w8
7101d6ff9c  fmov s1,wzr
7101d6ffa0  fdiv s0,s1,s0
7101d6ffa4  adrp x9,0x7104473000
7101d6ffa8  ldr s1,[x9, #0x91c]
7101d6ffac  fmin s8,s0,s1
7101d6ffb0  b 0x7101d6ffb8
7101d6ffb4  fmov s8,wzr
7101d6ffb8  mov w10,#0xb273
7101d6ffbc  movk w10,#0x45e7, LSL #16
7101d6ffc0  mov w9,#0x4dd3
7101d6ffc4  movk w9,#0x1062, LSL #16
7101d6ffc8  umull x10,w8,w10
7101d6ffcc  umull x9,w8,w9
7101d6ffd0  mov w11,#0x7cb1
7101d6ffd4  movk w11,#0x9521, LSL #16
7101d6ffd8  umull x8,w8,w11
7101d6ffdc  mov w11,#0x8889
7101d6ffe0  movk w11,#0x8888, LSL #16
7101d6ffe4  orr w13,wzr,#0x3c
7101d6ffe8  lsr x10,x10,#0x2e
7101d6ffec  lsr x9,x9,#0x26
7101d6fff0  ldr x0,[x19, #0x240]
7101d6fff4  mul x12,x10,x11
7101d6fff8  mul x11,x9,x11
7101d6fffc  lsr x12,x12,#0x25
7101d70000  msub w10,w12,w13,w10
7101d70004  lsr x11,x11,#0x25
7101d70008  lsr x8,x8,#0x35
7101d7000c  msub w9,w11,w13,w9
7101d70010  mov w11,#0x4240
7101d70014  movk w11,#0xf, LSL #16
7101d70018  mul w8,w8,w11
7101d7001c  mov w11,#0x3e8
7101d70020  madd w8,w10,w11,w8
7101d70024  mov v0.16B,v8.16B
7101d70028  adrp x1,0x710439d000
7101d7002c  add x1,x1,#0x7ab
7101d70030  add x20,x8,x9
7101d70034  bl 0x7103778630
7101d70038  adrp x1,0x710436c000
7101d7003c  add x1,x1,#0x710
7101d70040  add x0,x19,#0x268
7101d70044  mov w2,#0x2
7101d70048  mov x3,xzr
7101d7004c  mov x4,x20
7101d70050  ldp x29,x30,[sp, #0x20]
7101d70054  ldr x21,[sp, #0x8]
7101d70058  ldp x20,x19,[sp, #0x10]
7101d7005c  ldr d8,[sp], #0x30
7101d70060  b 0x710377a280
