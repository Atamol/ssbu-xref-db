// addr:      710273f950
// offset:    0x273f950
// name:      FUN_710273f950
// mangled:   
// size:      1172

710273f950  sub sp,sp,#0x120
710273f954  stp d11,d10,[sp, #0xc0]
710273f958  str x28,[sp, #0xe0]
710273f95c  stp d9,d8,[sp, #0xd0]
710273f960  stp x22,x21,[sp, #0xf0]
710273f964  stp x20,x19,[sp, #0x100]
710273f968  stp x29,x30,[sp, #0x110]
710273f96c  add x29,sp,#0x110
710273f970  mov x19,x0
710273f974  mov x0,x2
710273f978  mov x20,x1
710273f97c  bl 0x710273b1f0
710273f980  ldr x10,[x19, #0x310]
710273f984  ldp x9,x10,[x10, #0xd0]
710273f988  lsr x8,x0,#0x20
710273f98c  sub w8,w0,w8
710273f990  add w21,w8,#0x3
710273f994  cmp x9,x10
710273f998  b.eq 0x710273f9d0
710273f99c  mov x11,#0x697d
710273f9a0  movk x11,#0xa2af, LSL #16
710273f9a4  movk x11,#0x14, LSL #32
710273f9a8  ldr w12,[x9, #0x8]
710273f9ac  cmp w12,#0x1
710273f9b0  b.hi 0x710273f9c4
710273f9b4  ldr x22,[x9]
710273f9b8  ldr x12,[x22, #0x68]
710273f9bc  cmp x12,x11
710273f9c0  b.eq 0x710273fa3c
710273f9c4  add x9,x9,#0x10
710273f9c8  cmp x10,x9
710273f9cc  b.ne 0x710273f9a8
710273f9d0  ldr x9,[x19, #0x318]
710273f9d4  sxtw x8,w21
710273f9d8  adrp x10,0x71050d7000
710273f9dc  add x10,x10,#0x850
710273f9e0  add x20,x10,x8, LSL #0x5
710273f9e4  ldr x1,[x20]
710273f9e8  ldr x0,[x9, #0x10]
710273f9ec  bl 0x71025f7350
710273f9f0  ldr x0,[x19, #0x318]
710273f9f4  ldr x1,[x20, #0x8]
710273f9f8  mov w2,#0x1
710273f9fc  bl 0x7102633a10
710273fa00  ldr x0,[x19, #0x318]
710273fa04  ldr x1,[x20, #0x10]
710273fa08  mov w2,#0x1
710273fa0c  bl 0x7102633b90
710273fa10  ldr x0,[x19, #0x318]
710273fa14  ldr x1,[x20, #0x18]
710273fa18  bl 0x7102633800
710273fa1c  ldp d9,d8,[sp, #0xd0]
710273fa20  ldr x28,[sp, #0xe0]
710273fa24  ldp d11,d10,[sp, #0xc0]
710273fa28  ldp x29,x30,[sp, #0x110]
710273fa2c  ldp x20,x19,[sp, #0x100]
710273fa30  ldp x22,x21,[sp, #0xf0]
710273fa34  add sp,sp,#0x120
710273fa38  ret
710273fa3c  cbz x22,0x710273f9d0
710273fa40  add w8,w8,#0x3
710273fa44  cmp w8,#0x6
710273fa48  b.hi 0x710273fa88
710273fa4c  adrp x9,0x7104509000
710273fa50  add x9,x9,#0xb10
710273fa54  ldrsw x8,[x9, x8, LSL #0x2]
710273fa58  add x8,x8,x9
710273fa5c  br x8
710273fa60  ldr x8,[x19, #0x338]
710273fa64  ldr x8,[x8]
710273fa68  ldr s8,[x20, #0x1f8]
710273fa6c  ldr x0,[x8, #0x8]
710273fa70  cbz x0,0x710273fb70
710273fa74  ldr x8,[x0]
710273fa78  ldr x8,[x8, #0x58]
710273fa7c  mov w2,#0xffffffff
710273fa80  orr w1,wzr,#0xf
710273fa84  b 0x710273fb6c
710273fa88  fmov s8,wzr
710273fa8c  b 0x710273fb70
710273fa90  ldr x8,[x19, #0x338]
710273fa94  ldr x8,[x8]
710273fa98  ldr s8,[x20, #0x1f4]
710273fa9c  ldr x0,[x8, #0x8]
710273faa0  cbz x0,0x710273fb70
710273faa4  ldr x8,[x0]
710273faa8  ldr x8,[x8, #0x58]
710273faac  mov w2,#0xffffffff
710273fab0  mov w1,#0x10
710273fab4  b 0x710273fb6c
710273fab8  ldr x8,[x19, #0x338]
710273fabc  ldr x8,[x8]
710273fac0  ldr s8,[x20, #0x1f0]
710273fac4  ldr x0,[x8, #0x8]
710273fac8  cbz x0,0x710273fb70
710273facc  ldr x8,[x0]
710273fad0  ldr x8,[x8, #0x58]
710273fad4  mov w1,#0x11
710273fad8  b 0x710273fb68
710273fadc  ldr x8,[x19, #0x338]
710273fae0  ldr x8,[x8]
710273fae4  ldr s8,[x20, #0x1ec]
710273fae8  ldr x0,[x8, #0x8]
710273faec  cbz x0,0x710273fb70
710273faf0  ldr x8,[x0]
710273faf4  ldr x8,[x8, #0x58]
710273faf8  mov w1,#0x12
710273fafc  b 0x710273fb68
710273fb00  ldr x8,[x19, #0x338]
710273fb04  ldr x8,[x8]
710273fb08  ldr s8,[x20, #0x1e8]
710273fb0c  ldr x0,[x8, #0x8]
710273fb10  cbz x0,0x710273fb70
710273fb14  ldr x8,[x0]
710273fb18  ldr x8,[x8, #0x58]
710273fb1c  mov w1,#0x13
710273fb20  b 0x710273fb68
710273fb24  ldr x8,[x19, #0x338]
710273fb28  ldr x8,[x8]
710273fb2c  ldr s8,[x20, #0x1e4]
710273fb30  ldr x0,[x8, #0x8]
710273fb34  cbz x0,0x710273fb70
710273fb38  ldr x8,[x0]
710273fb3c  ldr x8,[x8, #0x58]
710273fb40  mov w1,#0x14
710273fb44  b 0x710273fb68
710273fb48  ldr x8,[x19, #0x338]
710273fb4c  ldr x8,[x8]
710273fb50  ldr s8,[x20, #0x1e0]
710273fb54  ldr x0,[x8, #0x8]
710273fb58  cbz x0,0x710273fb70
710273fb5c  ldr x8,[x0]
710273fb60  ldr x8,[x8, #0x58]
710273fb64  mov w1,#0x15
710273fb68  mov w2,#0xffffffff
710273fb6c  blr x8
710273fb70  adrp x8,0x71052a8000
710273fb74  ldr x8,[x8, #0xa98]
710273fb78  ldr q0,[x8]
710273fb7c  adrp x8,0x7104472000
710273fb80  ldr s10,[x8, #0x6e0]
710273fb84  fmul s8,s8,s10
710273fb88  str q0,[sp, #0x20]
710273fb8c  mov v0.16B,v8.16B
710273fb90  bl 0x71039c07e0
710273fb94  mov v9.16B,v0.16B
710273fb98  mov v0.16B,v8.16B
710273fb9c  bl 0x71039c07d0
710273fba0  fmov s11,0x3f800000
710273fba4  fsub s1,s11,s0
710273fba8  ldr q18,[sp, #0x20]
710273fbac  fmul s4,s9,v18.S[0x2]
710273fbb0  fmul s3,s1,v18.S[0x0]
710273fbb4  fmul s6,s3,v18.S[0x1]
710273fbb8  fadd s7,s4,s6
710273fbbc  fsub s4,s6,s4
710273fbc0  fmul s6,s3,v18.S[0x2]
710273fbc4  fmul s3,s3,v18.S[0x0]
710273fbc8  movi v5.2D,#0x0
710273fbcc  mov v17.16B,v5.16B
710273fbd0  mov v16.16B,v5.16B
710273fbd4  mov v19.16B,v5.16B
710273fbd8  fmul s5,s1,v18.S[0x1]
710273fbdc  fmul s2,s9,v18.S[0x1]
710273fbe0  fmul s1,s1,v18.S[0x2]
710273fbe4  fmul s1,s1,v18.S[0x2]
710273fbe8  fadd s3,s0,s3
710273fbec  mov v17.S[0x0],v3.S[0x0]
710273fbf0  fmul s3,s5,v18.S[0x1]
710273fbf4  fmul s5,s5,v18.S[0x2]
710273fbf8  fadd s3,s0,s3
710273fbfc  mov v17.S[0x1],v7.S[0x0]
710273fc00  fadd s0,s0,s1
710273fc04  mov v16.S[0x0],v4.S[0x0]
710273fc08  fsub s4,s6,s2
710273fc0c  mov v16.S[0x1],v3.S[0x0]
710273fc10  fadd s2,s2,s6
710273fc14  mov v17.S[0x2],v4.S[0x0]
710273fc18  fmul s4,s9,v18.S[0x0]
710273fc1c  fadd s3,s4,s5
710273fc20  mov v16.S[0x2],v3.S[0x0]
710273fc24  fsub s3,s5,s4
710273fc28  mov v4.16B,v19.16B
710273fc2c  adrp x8,0x71052a8000
710273fc30  mov v4.S[0x0],v2.S[0x0]
710273fc34  str q16,[sp, #0x30]
710273fc38  mov v4.S[0x1],v3.S[0x0]
710273fc3c  mov v4.S[0x2],v0.S[0x0]
710273fc40  stp q17,q4,[sp, #0x10]
710273fc44  ldr x8,[x8, #0xaa0]
710273fc48  ldr q0,[x8]
710273fc4c  str q0,[sp]
710273fc50  ldr s0,[x20, #0x1dc]
710273fc54  fmul s8,s0,s10
710273fc58  mov v0.16B,v8.16B
710273fc5c  bl 0x71039c07e0
710273fc60  mov v9.16B,v0.16B
710273fc64  mov v0.16B,v8.16B
710273fc68  bl 0x71039c07d0
710273fc6c  fsub s1,s11,s0
710273fc70  ldr q18,[sp]
710273fc74  fmul s2,s1,v18.S[0x0]
710273fc78  fmul s3,s2,v18.S[0x0]
710273fc7c  movi v17.2D,#0x0
710273fc80  mov v7.16B,v17.16B
710273fc84  fmul s4,s2,v18.S[0x1]
710273fc88  fmul s5,s9,v18.S[0x2]
710273fc8c  fadd s6,s5,s4
710273fc90  fadd s3,s0,s3
710273fc94  mov v7.S[0x0],v3.S[0x0]
710273fc98  fmul s2,s2,v18.S[0x2]
710273fc9c  fmul s3,s9,v18.S[0x1]
710273fca0  fsub s4,s4,s5
710273fca4  mov v7.S[0x1],v6.S[0x0]
710273fca8  fsub s6,s2,s3
710273fcac  fmul s5,s1,v18.S[0x1]
710273fcb0  mov v16.16B,v17.16B
710273fcb4  fadd s2,s3,s2
710273fcb8  mov v7.S[0x2],v6.S[0x0]
710273fcbc  fmul s6,s5,v18.S[0x1]
710273fcc0  mov v16.S[0x0],v4.S[0x0]
710273fcc4  fmul s5,s5,v18.S[0x2]
710273fcc8  fmul s4,s9,v18.S[0x0]
710273fccc  fadd s6,s0,s6
710273fcd0  fsub s3,s5,s4
710273fcd4  mov v16.S[0x1],v6.S[0x0]
710273fcd8  fadd s6,s4,s5
710273fcdc  mov v4.16B,v17.16B
710273fce0  mov v4.S[0x0],v2.S[0x0]
710273fce4  fmul s1,s1,v18.S[0x2]
710273fce8  fmul s1,s1,v18.S[0x2]
710273fcec  fadd s0,s0,s1
710273fcf0  mov v16.S[0x2],v6.S[0x0]
710273fcf4  ldr q1,[sp, #0x10]
710273fcf8  mov v4.S[0x1],v3.S[0x0]
710273fcfc  ldr q3,[sp, #0x30]
710273fd00  fmul v2.4S,v7.4S,v3.S[0x0]
710273fd04  adrp x8,0x710446a000
710273fd08  mov v4.S[0x2],v0.S[0x0]
710273fd0c  mov v5.16B,v1.16B
710273fd10  fmul v0.4S,v7.4S,v1.S[0x0]
710273fd14  fmla v2.4S,v16.4S,v3.S[0x1]
710273fd18  fmla v0.4S,v16.4S,v1.S[0x1]
710273fd1c  fmla v2.4S,v4.4S,v3.S[0x2]
710273fd20  fmla v0.4S,v4.4S,v1.S[0x2]
710273fd24  ldr q1,[x8, #0x350]
710273fd28  fmla v0.4S,v1.4S,v5.S[0x3]
710273fd2c  ldr q5,[sp, #0x20]
710273fd30  fmla v2.4S,v1.4S,v3.S[0x3]
710273fd34  fmul v3.4S,v7.4S,v5.S[0x0]
710273fd38  fmla v3.4S,v16.4S,v5.S[0x1]
710273fd3c  fmla v3.4S,v4.4S,v5.S[0x2]
710273fd40  fmla v3.4S,v1.4S,v5.S[0x3]
710273fd44  fmul v5.4S,v7.4S,v17.4S
710273fd48  fmla v5.4S,v17.4S,v16.4S
710273fd4c  stp q0,q2,[sp, #0x40]
710273fd50  fmla v5.4S,v17.4S,v4.4S
710273fd54  fadd v1.4S,v5.4S,v1.4S
710273fd58  add x1,sp,#0x40
710273fd5c  stp q3,q1,[sp, #0x60]
710273fd60  ldr x0,[x22, #0x90]
710273fd64  ldr x8,[x0]
710273fd68  ldr x8,[x8, #0x148]
710273fd6c  blr x8
710273fd70  ldr x20,[x22, #0xd8]
710273fd74  cbz x20,0x710273f9d0
710273fd78  ldr x8,[sp, #0x58]
710273fd7c  str x8,[sp, #0x98]
710273fd80  ldr x8,[sp, #0x50]
710273fd84  str x8,[sp, #0x90]
710273fd88  ldr x8,[sp, #0x48]
710273fd8c  str x8,[sp, #0x88]
710273fd90  ldr x8,[sp, #0x40]
710273fd94  str x8,[sp, #0x80]
710273fd98  ldr x8,[sp, #0x78]
710273fd9c  str x8,[sp, #0xb8]
710273fda0  ldr x8,[sp, #0x70]
710273fda4  str x8,[sp, #0xb0]
710273fda8  ldr x8,[sp, #0x68]
710273fdac  str x8,[sp, #0xa8]
710273fdb0  ldr x8,[sp, #0x60]
710273fdb4  str x8,[sp, #0xa0]
710273fdb8  ldr x8,[x20, #0x8]
710273fdbc  ldrb w9,[x8, #0xa8]
710273fdc0  cbz w9,0x710273fdd8
710273fdc4  ldr x0,[x8, #0x48]
710273fdc8  ldr x8,[x0]
710273fdcc  ldr x8,[x8, #0x20]
710273fdd0  add x1,sp,#0x80
710273fdd4  blr x8
710273fdd8  mov w8,#0x1
710273fddc  strb w8,[x20, #0x20]
710273fde0  b 0x710273f9d0
