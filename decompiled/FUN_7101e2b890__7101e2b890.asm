// addr:      7101e2b890
// offset:    0x1e2b890
// name:      FUN_7101e2b890
// mangled:   
// size:      2980

7101e2b890  sub sp,sp,#0x150
7101e2b894  stp x28,x27,[sp, #0xf0]
7101e2b898  stp x26,x25,[sp, #0x100]
7101e2b89c  stp x24,x23,[sp, #0x110]
7101e2b8a0  stp x22,x21,[sp, #0x120]
7101e2b8a4  stp x20,x19,[sp, #0x130]
7101e2b8a8  stp x29,x30,[sp, #0x140]
7101e2b8ac  add x29,sp,#0x140
7101e2b8b0  add x20,x0,#0x530
7101e2b8b4  mov w21,#0x64
7101e2b8b8  mov x19,x0
7101e2b8bc  adrp x2,0x7104292000
7101e2b8c0  add x2,x2,#0x218
7101e2b8c4  mov x0,x20
7101e2b8c8  mov w1,w21
7101e2b8cc  bl 0x71037717d0
7101e2b8d0  mov x8,#0xce8
7101e2b8d4  movk x8,#0xfc42, LSL #16
7101e2b8d8  movk x8,#0x7, LSL #32
7101e2b8dc  str x8,[sp, #0x70]
7101e2b8e0  ldr x0,[x19, #0x530]
7101e2b8e4  add x2,sp,#0x70
7101e2b8e8  mov w1,w21
7101e2b8ec  bl 0x7103772070
7101e2b8f0  adrp x2,0x7104348000
7101e2b8f4  add x2,x2,#0xcf6
7101e2b8f8  mov w1,#0x68
7101e2b8fc  mov x0,x20
7101e2b900  bl 0x71037717d0
7101e2b904  ldr x20,[x19, #0xb60]
7101e2b908  ldr x8,[x19, #0xb70]
7101e2b90c  subs x8,x8,x20
7101e2b910  str x20,[x19, #0xb68]
7101e2b914  b.ls 0x7101e2b92c
7101e2b918  strb wzr,[x20]
7101e2b91c  ldr x8,[x19, #0xb68]
7101e2b920  add x8,x8,#0x1
7101e2b924  str x8,[x19, #0xb68]
7101e2b928  b 0x7101e2b9c4
7101e2b92c  orr x9,xzr,#0x3ffffffffffffffe
7101e2b930  cmp x8,x9
7101e2b934  b.hi 0x7101e2b948
7101e2b938  lsl x8,x8,#0x1
7101e2b93c  cmp x8,#0x0
7101e2b940  csinc x21,x8,xzr,ne
7101e2b944  b 0x7101e2b94c
7101e2b948  orr x21,xzr,#0x7fffffffffffffff
7101e2b94c  mov w0,#0x10
7101e2b950  mov x1,x21
7101e2b954  bl 0x710392e290
7101e2b958  cbnz x0,0x7101e2b99c
7101e2b95c  adrp x8,0x7105332000
7101e2b960  ldr x0,[x8, #0xf00]
7101e2b964  cbz x0,0x7101e2b998
7101e2b968  str wzr,[sp, #0x40]
7101e2b96c  str x21,[sp, #0x70]
7101e2b970  ldr x8,[x0]
7101e2b974  ldr x8,[x8, #0x30]
7101e2b978  add x1,sp,#0x40
7101e2b97c  add x2,sp,#0x70
7101e2b980  blr x8
7101e2b984  tbz w0,#0x0,0x7101e2b998
7101e2b988  mov w0,#0x10
7101e2b98c  mov x1,x21
7101e2b990  bl 0x710392e290
7101e2b994  cbnz x0,0x7101e2b99c
7101e2b998  mov x0,xzr
7101e2b99c  mov x8,x0
7101e2b9a0  add x9,x0,x21
7101e2b9a4  strb wzr,[x8], #0x1
7101e2b9a8  str x0,[x19, #0xb60]
7101e2b9ac  str x8,[x19, #0xb68]
7101e2b9b0  str x9,[x19, #0xb70]
7101e2b9b4  cbz x20,0x7101e2b9c4
7101e2b9b8  mov x0,x20
7101e2b9bc  bl 0x710392eb40
7101e2b9c0  ldr x8,[x19, #0xb68]
7101e2b9c4  ldr x9,[x19, #0xb70]
7101e2b9c8  add x20,x19,#0xb60
7101e2b9cc  cmp x8,x9
7101e2b9d0  b.cs 0x7101e2b9ec
7101e2b9d4  mov w9,#0x2
7101e2b9d8  strb w9,[x8]
7101e2b9dc  ldr x8,[x19, #0xb68]
7101e2b9e0  add x25,x8,#0x1
7101e2b9e4  str x25,[x19, #0xb68]
7101e2b9e8  b 0x7101e2bac0
7101e2b9ec  ldr x21,[x20]
7101e2b9f0  sub x22,x8,x21
7101e2b9f4  adds x8,x22,#0x1
7101e2b9f8  b.mi 0x7101e2c41c
7101e2b9fc  sub x9,x9,x21
7101e2ba00  orr x10,xzr,#0x3ffffffffffffffe
7101e2ba04  cmp x9,x10
7101e2ba08  b.hi 0x7101e2ba20
7101e2ba0c  lsl x9,x9,#0x1
7101e2ba10  cmp x9,x8
7101e2ba14  csel x23,x8,x9,cc
7101e2ba18  cbnz x23,0x7101e2ba24
7101e2ba1c  b 0x7101e2ba78
7101e2ba20  orr x23,xzr,#0x7fffffffffffffff
7101e2ba24  mov w0,#0x10
7101e2ba28  mov x1,x23
7101e2ba2c  bl 0x710392e290
7101e2ba30  cbz x0,0x7101e2ba3c
7101e2ba34  mov x24,x0
7101e2ba38  b 0x7101e2ba7c
7101e2ba3c  adrp x8,0x7105332000
7101e2ba40  ldr x0,[x8, #0xf00]
7101e2ba44  cbz x0,0x7101e2ba78
7101e2ba48  str wzr,[sp, #0x40]
7101e2ba4c  str x23,[sp, #0x70]
7101e2ba50  ldr x8,[x0]
7101e2ba54  ldr x8,[x8, #0x30]
7101e2ba58  add x1,sp,#0x40
7101e2ba5c  add x2,sp,#0x70
7101e2ba60  blr x8
7101e2ba64  tbz w0,#0x0,0x7101e2ba78
7101e2ba68  mov w0,#0x10
7101e2ba6c  mov x1,x23
7101e2ba70  bl 0x710392e290
7101e2ba74  cbnz x0,0x7101e2ba34
7101e2ba78  mov x24,xzr
7101e2ba7c  add x25,x24,x22
7101e2ba80  mov w8,#0x2
7101e2ba84  add x23,x24,x23
7101e2ba88  cmp x22,#0x1
7101e2ba8c  strb w8,[x25], #0x1
7101e2ba90  b.lt 0x7101e2baa4
7101e2ba94  mov x0,x24
7101e2ba98  mov x1,x21
7101e2ba9c  mov x2,x22
7101e2baa0  bl 0x71039c00e0
7101e2baa4  str x24,[x19, #0xb60]
7101e2baa8  str x25,[x19, #0xb68]
7101e2baac  str x23,[x19, #0xb70]
7101e2bab0  cbz x21,0x7101e2bac0
7101e2bab4  mov x0,x21
7101e2bab8  bl 0x710392eb40
7101e2babc  ldr x25,[x19, #0xb68]
7101e2bac0  ldr x8,[x19, #0xb70]
7101e2bac4  cmp x25,x8
7101e2bac8  b.cs 0x7101e2bae4
7101e2bacc  mov w8,#0x4
7101e2bad0  strb w8,[x25]
7101e2bad4  ldr x8,[x19, #0xb68]
7101e2bad8  add x8,x8,#0x1
7101e2badc  str x8,[x19, #0xb68]
7101e2bae0  b 0x7101e2bbb4
7101e2bae4  ldr x21,[x20]
7101e2bae8  sub x22,x25,x21
7101e2baec  adds x9,x22,#0x1
7101e2baf0  b.mi 0x7101e2c41c
7101e2baf4  sub x8,x8,x21
7101e2baf8  orr x10,xzr,#0x3ffffffffffffffe
7101e2bafc  cmp x8,x10
7101e2bb00  b.hi 0x7101e2bb18
7101e2bb04  lsl x8,x8,#0x1
7101e2bb08  cmp x8,x9
7101e2bb0c  csel x23,x9,x8,cc
7101e2bb10  cbnz x23,0x7101e2bb1c
7101e2bb14  b 0x7101e2bb70
7101e2bb18  orr x23,xzr,#0x7fffffffffffffff
7101e2bb1c  mov w0,#0x10
7101e2bb20  mov x1,x23
7101e2bb24  bl 0x710392e290
7101e2bb28  cbz x0,0x7101e2bb34
7101e2bb2c  mov x24,x0
7101e2bb30  b 0x7101e2bb74
7101e2bb34  adrp x8,0x7105332000
7101e2bb38  ldr x0,[x8, #0xf00]
7101e2bb3c  cbz x0,0x7101e2bb70
7101e2bb40  str wzr,[sp, #0x40]
7101e2bb44  str x23,[sp, #0x70]
7101e2bb48  ldr x8,[x0]
7101e2bb4c  ldr x8,[x8, #0x30]
7101e2bb50  add x1,sp,#0x40
7101e2bb54  add x2,sp,#0x70
7101e2bb58  blr x8
7101e2bb5c  tbz w0,#0x0,0x7101e2bb70
7101e2bb60  mov w0,#0x10
7101e2bb64  mov x1,x23
7101e2bb68  bl 0x710392e290
7101e2bb6c  cbnz x0,0x7101e2bb2c
7101e2bb70  mov x24,xzr
7101e2bb74  add x25,x24,x22
7101e2bb78  mov w8,#0x4
7101e2bb7c  add x23,x24,x23
7101e2bb80  cmp x22,#0x1
7101e2bb84  strb w8,[x25], #0x1
7101e2bb88  b.lt 0x7101e2bb9c
7101e2bb8c  mov x0,x24
7101e2bb90  mov x1,x21
7101e2bb94  mov x2,x22
7101e2bb98  bl 0x71039c00e0
7101e2bb9c  str x24,[x19, #0xb60]
7101e2bba0  str x25,[x19, #0xb68]
7101e2bba4  str x23,[x19, #0xb70]
7101e2bba8  cbz x21,0x7101e2bbb4
7101e2bbac  mov x0,x21
7101e2bbb0  bl 0x710392eb40
7101e2bbb4  add x21,x19,#0xba0
7101e2bbb8  adrp x1,0x7104292000
7101e2bbbc  add x1,x1,#0x218
7101e2bbc0  sub x8,x29,#0x78
7101e2bbc4  mov x0,x21
7101e2bbc8  bl 0x7103776640
7101e2bbcc  adrp x1,0x71043ad000
7101e2bbd0  add x1,x1,#0xfe3
7101e2bbd4  sub x8,x29,#0x88
7101e2bbd8  sub x0,x29,#0x78
7101e2bbdc  bl 0x7103776910
7101e2bbe0  adrp x1,0x7104431000
7101e2bbe4  add x1,x1,#0x6d5
7101e2bbe8  add x8,sp,#0x40
7101e2bbec  sub x0,x29,#0x78
7101e2bbf0  bl 0x7103776910
7101e2bbf4  ldr x10,[x19, #0xb68]
7101e2bbf8  ldr x9,[x19, #0xb60]
7101e2bbfc  sub x10,x10,x9
7101e2bc00  ldr w8,[x19, #0xb7c]
7101e2bc04  cmp x10,x8
7101e2bc08  b.ls 0x7101e2c424
7101e2bc0c  ldrb w8,[x9, x8, LSL ]
7101e2bc10  mov w22,#0x9dc5
7101e2bc14  movk w22,#0x811c, LSL #16
7101e2bc18  cmp w8,#0x4
7101e2bc1c  b.hi 0x7101e2c408
7101e2bc20  adrp x9,0x71044fb000
7101e2bc24  add x9,x9,#0xbbc
7101e2bc28  ldrsw x8,[x9, x8, LSL #0x2]
7101e2bc2c  add x8,x8,x9
7101e2bc30  br x8
7101e2bc34  mov x10,#0x6e6d
7101e2bc38  movk x10,#0x5f75, LSL #16
7101e2bc3c  mov x8,#0x1300000000
7101e2bc40  add x9,sp,#0x70
7101e2bc44  movk x10,#0x7073, LSL #32
7101e2bc48  movk x10,#0x7269, LSL #48
7101e2bc4c  stp x8,x10,[sp, #0x70]
7101e2bc50  add x1,x9,#0x8
7101e2bc54  add x8,x9,#0x9
7101e2bc58  mov x9,#0x7469
7101e2bc5c  movk x9,#0x5f73, LSL #16
7101e2bc60  movk x9,#0x6f73, LSL #32
7101e2bc64  movk x9,#0x7472, LSL #48
7101e2bc68  str x9,[sp, #0x80]
7101e2bc6c  mov w9,#0x315f
7101e2bc70  movk w9,#0x38, LSL #16
7101e2bc74  str w9,[sp, #0x88]
7101e2bc78  mov w10,#0x6d
7101e2bc7c  mov w9,#0x89
7101e2bc80  mov w11,w22
7101e2bc84  mul w11,w11,w9
7101e2bc88  and w10,w10,#0xff
7101e2bc8c  eor w11,w11,w10
7101e2bc90  ldrb w10,[x8], #0x1
7101e2bc94  cbnz w10,0x7101e2bc84
7101e2bc98  b 0x7101e2be38
7101e2bc9c  mov x10,#0x6e6d
7101e2bca0  movk x10,#0x5f75, LSL #16
7101e2bca4  mov x8,#0x1300000000
7101e2bca8  add x9,sp,#0x70
7101e2bcac  movk x10,#0x7073, LSL #32
7101e2bcb0  movk x10,#0x7269, LSL #48
7101e2bcb4  stp x8,x10,[sp, #0x70]
7101e2bcb8  add x1,x9,#0x8
7101e2bcbc  add x8,x9,#0x9
7101e2bcc0  mov x9,#0x7469
7101e2bcc4  movk x9,#0x5f73, LSL #16
7101e2bcc8  movk x9,#0x6f73, LSL #32
7101e2bccc  movk x9,#0x7472, LSL #48
7101e2bcd0  str x9,[sp, #0x80]
7101e2bcd4  mov w9,#0x325f
7101e2bcd8  movk w9,#0x32, LSL #16
7101e2bcdc  str w9,[sp, #0x88]
7101e2bce0  mov w10,#0x6d
7101e2bce4  mov w9,#0x89
7101e2bce8  mov w11,w22
7101e2bcec  mul w11,w11,w9
7101e2bcf0  and w10,w10,#0xff
7101e2bcf4  eor w11,w11,w10
7101e2bcf8  ldrb w10,[x8], #0x1
7101e2bcfc  cbnz w10,0x7101e2bcec
7101e2bd00  b 0x7101e2be38
7101e2bd04  mov x10,#0x6e6d
7101e2bd08  movk x10,#0x5f75, LSL #16
7101e2bd0c  mov x8,#0x1300000000
7101e2bd10  add x9,sp,#0x70
7101e2bd14  movk x10,#0x7073, LSL #32
7101e2bd18  movk x10,#0x7269, LSL #48
7101e2bd1c  stp x8,x10,[sp, #0x70]
7101e2bd20  add x1,x9,#0x8
7101e2bd24  add x8,x9,#0x9
7101e2bd28  mov x9,#0x7469
7101e2bd2c  movk x9,#0x5f73, LSL #16
7101e2bd30  movk x9,#0x6f73, LSL #32
7101e2bd34  movk x9,#0x7472, LSL #48
7101e2bd38  str x9,[sp, #0x80]
7101e2bd3c  mov w9,#0x305f
7101e2bd40  movk w9,#0x34, LSL #16
7101e2bd44  str w9,[sp, #0x88]
7101e2bd48  mov w10,#0x6d
7101e2bd4c  mov w9,#0x89
7101e2bd50  mov w11,w22
7101e2bd54  mul w11,w11,w9
7101e2bd58  and w10,w10,#0xff
7101e2bd5c  eor w11,w11,w10
7101e2bd60  ldrb w10,[x8], #0x1
7101e2bd64  cbnz w10,0x7101e2bd54
7101e2bd68  b 0x7101e2be38
7101e2bd6c  mov x10,#0x6e6d
7101e2bd70  movk x10,#0x5f75, LSL #16
7101e2bd74  mov x8,#0x1300000000
7101e2bd78  add x9,sp,#0x70
7101e2bd7c  movk x10,#0x7073, LSL #32
7101e2bd80  movk x10,#0x7269, LSL #48
7101e2bd84  stp x8,x10,[sp, #0x70]
7101e2bd88  add x1,x9,#0x8
7101e2bd8c  add x8,x9,#0x9
7101e2bd90  mov x9,#0x7469
7101e2bd94  movk x9,#0x5f73, LSL #16
7101e2bd98  movk x9,#0x6f73, LSL #32
7101e2bd9c  movk x9,#0x7472, LSL #48
7101e2bda0  str x9,[sp, #0x80]
7101e2bda4  mov w9,#0x305f
7101e2bda8  movk w9,#0x32, LSL #16
7101e2bdac  str w9,[sp, #0x88]
7101e2bdb0  mov w10,#0x6d
7101e2bdb4  mov w9,#0x89
7101e2bdb8  mov w11,w22
7101e2bdbc  mul w11,w11,w9
7101e2bdc0  and w10,w10,#0xff
7101e2bdc4  eor w11,w11,w10
7101e2bdc8  ldrb w10,[x8], #0x1
7101e2bdcc  cbnz w10,0x7101e2bdbc
7101e2bdd0  b 0x7101e2be38
7101e2bdd4  mov x10,#0x6e6d
7101e2bdd8  movk x10,#0x5f75, LSL #16
7101e2bddc  mov x8,#0x1300000000
7101e2bde0  add x9,sp,#0x70
7101e2bde4  movk x10,#0x7073, LSL #32
7101e2bde8  movk x10,#0x7269, LSL #48
7101e2bdec  stp x8,x10,[sp, #0x70]
7101e2bdf0  add x1,x9,#0x8
7101e2bdf4  add x8,x9,#0x9
7101e2bdf8  mov x9,#0x7469
7101e2bdfc  movk x9,#0x5f73, LSL #16
7101e2be00  movk x9,#0x6f73, LSL #32
7101e2be04  movk x9,#0x7472, LSL #48
7101e2be08  str x9,[sp, #0x80]
7101e2be0c  mov w9,#0x305f
7101e2be10  movk w9,#0x33, LSL #16
7101e2be14  str w9,[sp, #0x88]
7101e2be18  mov w10,#0x6d
7101e2be1c  mov w9,#0x89
7101e2be20  mov w11,w22
7101e2be24  mul w11,w11,w9
7101e2be28  and w10,w10,#0xff
7101e2be2c  eor w11,w11,w10
7101e2be30  ldrb w10,[x8], #0x1
7101e2be34  cbnz w10,0x7101e2be24
7101e2be38  str w11,[sp, #0x70]
7101e2be3c  add x0,sp,#0x40
7101e2be40  add x20,sp,#0x40
7101e2be44  bl 0x710377a120
7101e2be48  ldr x0,[sp, #0x48]
7101e2be4c  adrp x8,0x710523d000
7101e2be50  add x8,x8,#0x9a8
7101e2be54  stp x8,xzr,[sp, #0x40]
7101e2be58  cbz x0,0x7101e2be60
7101e2be5c  bl 0x710392eb40
7101e2be60  adrp x1,0x71042b4000
7101e2be64  add x1,x1,#0x8bc
7101e2be68  sub x0,x29,#0x88
7101e2be6c  bl 0x710377a120
7101e2be70  add x0,x20,#0x20
7101e2be74  stp xzr,xzr,[sp, #0x50]
7101e2be78  bl 0x7103776290
7101e2be7c  str wzr,[sp, #0x48]
7101e2be80  adrp x8,0x71052a8000
7101e2be84  ldr x8,[x8, #0xa80]
7101e2be88  ldr q0,[x8]
7101e2be8c  ldr x9,[sp, #0x68]
7101e2be90  str q0,[sp, #0x50]
7101e2be94  str xzr,[x9, #0x8]
7101e2be98  ldur x12,[x29, #-0x70]
7101e2be9c  mov x9,#0x4
7101e2bea0  movk x9,#0x1, LSL #32
7101e2bea4  str x9,[sp, #0x40]
7101e2bea8  ldr x9,[x12]
7101e2beac  ldr x10,[sp, #0x68]
7101e2beb0  str x9,[x10]
7101e2beb4  ldr x9,[x12, #0x8]
7101e2beb8  ldr x10,[sp, #0x68]
7101e2bebc  str x9,[x10, #0x8]
7101e2bec0  ldr x9,[sp, #0x68]
7101e2bec4  cmp x9,x12
7101e2bec8  b.eq 0x7101e2bf14
7101e2becc  ldr x10,[x12, #0x18]
7101e2bed0  ldr x10,[x10]
7101e2bed4  ldr x11,[x9, #0x18]
7101e2bed8  str x10,[x11]
7101e2bedc  ldr x10,[x12, #0x18]
7101e2bee0  ldr x10,[x10, #0x8]
7101e2bee4  ldr x11,[x9, #0x18]
7101e2bee8  str x10,[x11, #0x8]
7101e2beec  ldr x10,[x12, #0x18]
7101e2bef0  ldr x10,[x10, #0x10]
7101e2bef4  ldr x11,[x9, #0x18]
7101e2bef8  str x10,[x11, #0x10]
7101e2befc  ldr x10,[x12, #0x18]
7101e2bf00  ldr x10,[x10, #0x18]
7101e2bf04  ldr x9,[x9, #0x18]
7101e2bf08  str x10,[x9, #0x18]
7101e2bf0c  ldr x9,[sp, #0x68]
7101e2bf10  b 0x7101e2bf18
7101e2bf14  mov x9,x12
7101e2bf18  stp x21,x12,[sp]
7101e2bf1c  ldr x9,[x9, #0x18]
7101e2bf20  ldr x9,[x9]
7101e2bf24  cbz x9,0x7101e2bf40
7101e2bf28  movi v0.2D,#0x0
7101e2bf2c  add x8,x9,#0x30
7101e2bf30  ld1 {v0.S}[0],[x8]
7101e2bf34  add x8,x9,#0x34
7101e2bf38  ld1 {v0.S}[1],[x8]
7101e2bf3c  b 0x7101e2bf44
7101e2bf40  ldr q0,[x8]
7101e2bf44  str q0,[sp, #0x50]
7101e2bf48  stp xzr,xzr,[sp, #0x30]
7101e2bf4c  str xzr,[sp, #0x28]
7101e2bf50  ldr x9,[x19, #0xb68]
7101e2bf54  ldr x8,[x19, #0xb60]
7101e2bf58  cmp x9,x8
7101e2bf5c  b.eq 0x7101e2c1bc
7101e2bf60  add x9,sp,#0x70
7101e2bf64  mov x23,#0x6e6d
7101e2bf68  movk x23,#0x5f75, LSL #16
7101e2bf6c  mov x21,#0x7469
7101e2bf70  movk x21,#0x5f73, LSL #16
7101e2bf74  mov x24,xzr
7101e2bf78  add x25,x9,#0x9
7101e2bf7c  add x26,x9,#0x8
7101e2bf80  mov w27,#0x89
7101e2bf84  movk x23,#0x7073, LSL #32
7101e2bf88  movk x23,#0x7269, LSL #48
7101e2bf8c  movk x21,#0x6f73, LSL #32
7101e2bf90  movk x21,#0x7472, LSL #48
7101e2bf94  mov w20,#0x6d
7101e2bf98  adrp x28,0x71044fb000
7101e2bf9c  add x28,x28,#0xbd0
7101e2bfa0  ldrb w8,[x8, x24, LSL ]
7101e2bfa4  cmp w8,#0x4
7101e2bfa8  b.hi 0x7101e2c148
7101e2bfac  ldrsw x8,[x28, x8, LSL #0x2]
7101e2bfb0  add x8,x8,x28
7101e2bfb4  br x8
7101e2bfb8  mov x8,#0x1300000000
7101e2bfbc  stp x8,x23,[sp, #0x70]
7101e2bfc0  mov x8,x25
7101e2bfc4  mov w10,w20
7101e2bfc8  mov w9,w22
7101e2bfcc  mov w11,#0x315f
7101e2bfd0  movk w11,#0x38, LSL #16
7101e2bfd4  str x21,[sp, #0x80]
7101e2bfd8  str w11,[sp, #0x88]
7101e2bfdc  mul w9,w9,w27
7101e2bfe0  and w10,w10,#0xff
7101e2bfe4  eor w9,w9,w10
7101e2bfe8  ldrb w10,[x8], #0x1
7101e2bfec  cbnz w10,0x7101e2bfdc
7101e2bff0  b 0x7101e2c0e0
7101e2bff4  mov x8,#0x1300000000
7101e2bff8  stp x8,x23,[sp, #0x70]
7101e2bffc  mov x8,x25
7101e2c000  mov w10,w20
7101e2c004  mov w9,w22
7101e2c008  mov w11,#0x325f
7101e2c00c  movk w11,#0x32, LSL #16
7101e2c010  str x21,[sp, #0x80]
7101e2c014  str w11,[sp, #0x88]
7101e2c018  mul w9,w9,w27
7101e2c01c  and w10,w10,#0xff
7101e2c020  eor w9,w9,w10
7101e2c024  ldrb w10,[x8], #0x1
7101e2c028  cbnz w10,0x7101e2c018
7101e2c02c  b 0x7101e2c0e0
7101e2c030  mov x8,#0x1300000000
7101e2c034  stp x8,x23,[sp, #0x70]
7101e2c038  mov x8,x25
7101e2c03c  mov w10,w20
7101e2c040  mov w9,w22
7101e2c044  mov w11,#0x305f
7101e2c048  movk w11,#0x34, LSL #16
7101e2c04c  str x21,[sp, #0x80]
7101e2c050  str w11,[sp, #0x88]
7101e2c054  mul w9,w9,w27
7101e2c058  and w10,w10,#0xff
7101e2c05c  eor w9,w9,w10
7101e2c060  ldrb w10,[x8], #0x1
7101e2c064  cbnz w10,0x7101e2c054
7101e2c068  b 0x7101e2c0e0
7101e2c06c  mov x8,#0x1300000000
7101e2c070  stp x8,x23,[sp, #0x70]
7101e2c074  mov x8,x25
7101e2c078  mov w10,w20
7101e2c07c  mov w9,w22
7101e2c080  mov w11,#0x305f
7101e2c084  movk w11,#0x32, LSL #16
7101e2c088  str x21,[sp, #0x80]
7101e2c08c  str w11,[sp, #0x88]
7101e2c090  mul w9,w9,w27
7101e2c094  and w10,w10,#0xff
7101e2c098  eor w9,w9,w10
7101e2c09c  ldrb w10,[x8], #0x1
7101e2c0a0  cbnz w10,0x7101e2c090
7101e2c0a4  b 0x7101e2c0e0
7101e2c0a8  mov x8,#0x1300000000
7101e2c0ac  stp x8,x23,[sp, #0x70]
7101e2c0b0  mov x8,x25
7101e2c0b4  mov w10,w20
7101e2c0b8  mov w9,w22
7101e2c0bc  mov w11,#0x305f
7101e2c0c0  movk w11,#0x33, LSL #16
7101e2c0c4  str x21,[sp, #0x80]
7101e2c0c8  str w11,[sp, #0x88]
7101e2c0cc  mul w9,w9,w27
7101e2c0d0  and w10,w10,#0xff
7101e2c0d4  eor w9,w9,w10
7101e2c0d8  ldrb w10,[x8], #0x1
7101e2c0dc  cbnz w10,0x7101e2c0cc
7101e2c0e0  str w9,[sp, #0x70]
7101e2c0e4  ldp x8,x9,[sp, #0x30]
7101e2c0e8  cmp x8,x9
7101e2c0ec  b.cs 0x7101e2c138
7101e2c0f0  mov x10,x8
7101e2c0f4  mov x9,xzr
7101e2c0f8  str wzr,[x10], #0x8
7101e2c0fc  add x11,x26,x9
7101e2c100  ldrb w12,[x11]
7101e2c104  cbz w12,0x7101e2c160
7101e2c108  strb w12,[x10, x9, LSL ]
7101e2c10c  ldrb w13,[x11, #0x1]
7101e2c110  cbz w13,0x7101e2c154
7101e2c114  add x12,x10,x9
7101e2c118  strb w13,[x12, #0x1]
7101e2c11c  ldrb w11,[x11, #0x2]
7101e2c120  cbz w11,0x7101e2c15c
7101e2c124  add x9,x9,#0x3
7101e2c128  cmp w9,#0x3f
7101e2c12c  strb w11,[x12, #0x2]
7101e2c130  b.cc 0x7101e2c0fc
7101e2c134  b 0x7101e2c160
7101e2c138  add x0,sp,#0x28
7101e2c13c  add x1,sp,#0x70
7101e2c140  bl 0x71019c1c50
7101e2c144  b 0x7101e2c1a4
7101e2c148  strb wzr,[sp, #0x78]
7101e2c14c  str xzr,[sp, #0x70]
7101e2c150  b 0x7101e2c0e4
7101e2c154  add x9,x9,#0x1
7101e2c158  b 0x7101e2c160
7101e2c15c  add x9,x9,#0x2
7101e2c160  add x10,x8,#0x8
7101e2c164  strb wzr,[x10, w9, UXTW ]
7101e2c168  str w9,[x8, #0x4]
7101e2c16c  ldrb w9,[x8, #0x8]
7101e2c170  mov w11,w22
7101e2c174  cbz w9,0x7101e2c194
7101e2c178  add x10,x8,#0x9
7101e2c17c  mov w11,w22
7101e2c180  mul w11,w11,w27
7101e2c184  and w9,w9,#0xff
7101e2c188  eor w11,w11,w9
7101e2c18c  ldrb w9,[x10], #0x1
7101e2c190  cbnz w9,0x7101e2c180
7101e2c194  str w11,[x8]
7101e2c198  ldr x8,[sp, #0x30]
7101e2c19c  add x8,x8,#0x48
7101e2c1a0  str x8,[sp, #0x30]
7101e2c1a4  ldr x9,[x19, #0xb68]
7101e2c1a8  ldr x8,[x19, #0xb60]
7101e2c1ac  add w24,w24,#0x1
7101e2c1b0  sub x9,x9,x8
7101e2c1b4  cmp x9,x24
7101e2c1b8  b.hi 0x7101e2bfa0
7101e2c1bc  ldr x0,[sp]
7101e2c1c0  adrp x1,0x710436c000
7101e2c1c4  add x1,x1,#0xc09
7101e2c1c8  add x8,sp,#0x70
7101e2c1cc  bl 0x7103776640
7101e2c1d0  ldp x23,x20,[sp, #0x28]
7101e2c1d4  str xzr,[sp, #0x10]
7101e2c1d8  stp xzr,xzr,[sp, #0x18]
7101e2c1dc  subs x21,x20,x23
7101e2c1e0  b.eq 0x7101e2c324
7101e2c1e4  mov x9,#0x8e39
7101e2c1e8  movk x9,#0x38e3, LSL #16
7101e2c1ec  asr x8,x21,#0x3
7101e2c1f0  movk x9,#0xe38e, LSL #32
7101e2c1f4  movk x9,#0x8e38, LSL #48
7101e2c1f8  mul x24,x8,x9
7101e2c1fc  mov x8,#0xe38f
7101e2c200  movk x8,#0x8e38, LSL #16
7101e2c204  movk x8,#0x38e3, LSL #32
7101e2c208  movk x8,#0x38e, LSL #48
7101e2c20c  cmp x24,x8
7101e2c210  b.cs 0x7101e2c42c
7101e2c214  mov w0,#0x10
7101e2c218  mov x1,x21
7101e2c21c  bl 0x710392e290
7101e2c220  cbnz x0,0x7101e2c264
7101e2c224  adrp x8,0x7105332000
7101e2c228  ldr x0,[x8, #0xf00]
7101e2c22c  cbz x0,0x7101e2c260
7101e2c230  stur wzr,[x29, #-0x5c]
7101e2c234  stur x21,[x29, #-0x68]
7101e2c238  ldr x8,[x0]
7101e2c23c  ldr x8,[x8, #0x30]
7101e2c240  sub x1,x29,#0x5c
7101e2c244  sub x2,x29,#0x68
7101e2c248  blr x8
7101e2c24c  tbz w0,#0x0,0x7101e2c260
7101e2c250  mov w0,#0x10
7101e2c254  mov x1,x21
7101e2c258  bl 0x710392e290
7101e2c25c  cbnz x0,0x7101e2c264
7101e2c260  mov x0,xzr
7101e2c264  mov w8,#0x48
7101e2c268  madd x8,x24,x8,x0
7101e2c26c  cmp x23,x20
7101e2c270  stp x0,x0,[sp, #0x10]
7101e2c274  str x8,[sp, #0x20]
7101e2c278  b.eq 0x7101e2c324
7101e2c27c  mov w8,#0x89
7101e2c280  mov x10,x0
7101e2c284  mov x9,xzr
7101e2c288  str wzr,[x10], #0x8
7101e2c28c  add x11,x23,x9
7101e2c290  ldrb w12,[x11, #0x8]
7101e2c294  cbz w12,0x7101e2c2d4
7101e2c298  strb w12,[x10, x9, LSL ]
7101e2c29c  ldrb w13,[x11, #0x9]
7101e2c2a0  cbz w13,0x7101e2c2c8
7101e2c2a4  add x12,x10,x9
7101e2c2a8  strb w13,[x12, #0x1]
7101e2c2ac  ldrb w11,[x11, #0xa]
7101e2c2b0  cbz w11,0x7101e2c2d0
7101e2c2b4  add x9,x9,#0x3
7101e2c2b8  cmp w9,#0x3f
7101e2c2bc  strb w11,[x12, #0x2]
7101e2c2c0  b.cc 0x7101e2c28c
7101e2c2c4  b 0x7101e2c2d4
7101e2c2c8  add x9,x9,#0x1
7101e2c2cc  b 0x7101e2c2d4
7101e2c2d0  add x9,x9,#0x2
7101e2c2d4  add x10,x0,#0x8
7101e2c2d8  strb wzr,[x10, w9, UXTW ]
7101e2c2dc  str w9,[x0, #0x4]
7101e2c2e0  ldrb w9,[x0, #0x8]
7101e2c2e4  mov w11,w22
7101e2c2e8  cbz w9,0x7101e2c308
7101e2c2ec  add x10,x0,#0x9
7101e2c2f0  mov w11,w22
7101e2c2f4  mul w11,w11,w8
7101e2c2f8  and w9,w9,#0xff
7101e2c2fc  eor w11,w11,w9
7101e2c300  ldrb w9,[x10], #0x1
7101e2c304  cbnz w9,0x7101e2c2f4
7101e2c308  str w11,[x0]
7101e2c30c  ldr x9,[sp, #0x18]
7101e2c310  add x23,x23,#0x48
7101e2c314  cmp x23,x20
7101e2c318  add x0,x9,#0x48
7101e2c31c  str x0,[sp, #0x18]
7101e2c320  b.ne 0x7101e2c280
7101e2c324  add x0,x19,#0x4d0
7101e2c328  add x1,x19,#0x158
7101e2c32c  add x2,sp,#0x10
7101e2c330  add x3,sp,#0x40
7101e2c334  add x4,sp,#0x70
7101e2c338  bl 0x71032ccb70
7101e2c33c  ldr x0,[sp, #0x10]
7101e2c340  cbz x0,0x7101e2c34c
7101e2c344  str x0,[sp, #0x18]
7101e2c348  bl 0x710392eb40
7101e2c34c  ldr x19,[sp, #0x78]
7101e2c350  adrp x20,0x710523d000
7101e2c354  add x20,x20,#0x988
7101e2c358  adrp x21,0x710523d000
7101e2c35c  add x21,x21,#0x9a8
7101e2c360  stp x20,xzr,[sp, #0x70]
7101e2c364  cbz x19,0x7101e2c380
7101e2c368  ldr x0,[x19, #0x18]
7101e2c36c  stp x21,xzr,[x19, #0x10]
7101e2c370  cbz x0,0x7101e2c378
7101e2c374  bl 0x710392eb40
7101e2c378  mov x0,x19
7101e2c37c  bl 0x710392eb40
7101e2c380  ldr x0,[sp, #0x28]
7101e2c384  cbz x0,0x7101e2c390
7101e2c388  str x0,[sp, #0x30]
7101e2c38c  bl 0x710392eb40
7101e2c390  ldr x19,[sp, #0x68]
7101e2c394  stp x20,xzr,[sp, #0x60]
7101e2c398  cbz x19,0x7101e2c3b4
7101e2c39c  ldr x0,[x19, #0x18]
7101e2c3a0  stp x21,xzr,[x19, #0x10]
7101e2c3a4  cbz x0,0x7101e2c3ac
7101e2c3a8  bl 0x710392eb40
7101e2c3ac  mov x0,x19
7101e2c3b0  bl 0x710392eb40
7101e2c3b4  ldur x0,[x29, #-0x80]
7101e2c3b8  stp x21,xzr,[x29, #-0x88]
7101e2c3bc  cbz x0,0x7101e2c3c4
7101e2c3c0  bl 0x710392eb40
7101e2c3c4  ldr x19,[sp, #0x8]
7101e2c3c8  stp x20,xzr,[x29, #-0x78]
7101e2c3cc  cbz x19,0x7101e2c3e8
7101e2c3d0  ldr x0,[x19, #0x18]
7101e2c3d4  stp x21,xzr,[x19, #0x10]
7101e2c3d8  cbz x0,0x7101e2c3e0
7101e2c3dc  bl 0x710392eb40
7101e2c3e0  mov x0,x19
7101e2c3e4  bl 0x710392eb40
7101e2c3e8  ldp x29,x30,[sp, #0x140]
7101e2c3ec  ldp x20,x19,[sp, #0x130]
7101e2c3f0  ldp x22,x21,[sp, #0x120]
7101e2c3f4  ldp x24,x23,[sp, #0x110]
7101e2c3f8  ldp x26,x25,[sp, #0x100]
7101e2c3fc  ldp x28,x27,[sp, #0xf0]
7101e2c400  add sp,sp,#0x150
7101e2c404  ret
7101e2c408  add x8,sp,#0x70
7101e2c40c  add x1,x8,#0x8
7101e2c410  strb wzr,[sp, #0x78]
7101e2c414  str xzr,[sp, #0x70]
7101e2c418  b 0x7101e2be3c
7101e2c41c  mov x0,x20
7101e2c420  bl 0x71039c0c00
7101e2c424  mov x0,x20
7101e2c428  bl 0x71039c1330
7101e2c42c  add x0,sp,#0x10
7101e2c430  bl 0x71039c0c00
