// addr:      7101e1b7f0
// offset:    0x1e1b7f0
// name:      FUN_7101e1b7f0
// mangled:   
// size:      14288

7101e1b7f0  str d8,[sp, #-0x70]!
7101e1b7f4  stp x28,x27,[sp, #0x10]
7101e1b7f8  stp x26,x25,[sp, #0x20]
7101e1b7fc  stp x24,x23,[sp, #0x30]
7101e1b800  stp x22,x21,[sp, #0x40]
7101e1b804  stp x20,x19,[sp, #0x50]
7101e1b808  stp x29,x30,[sp, #0x60]
7101e1b80c  add x29,sp,#0x60
7101e1b810  sub sp,sp,#0x3c0
7101e1b814  ldr w8,[x0, #0x13c]
7101e1b818  mov x19,x0
7101e1b81c  cbz w8,0x7101e1b8c8
7101e1b820  ldr x8,[x19, #0x160]
7101e1b824  ldr x8,[x8]
7101e1b828  ldr x21,[x8]
7101e1b82c  ldr x8,[x8, #0x10]
7101e1b830  ldr x20,[x8, #0x8]
7101e1b834  cbz x20,0x7101e1b8a0
7101e1b838  adrp x1,0x7104421000
7101e1b83c  add x1,x1,#0x55
7101e1b840  mov x0,x20
7101e1b844  bl 0x71037964b0
7101e1b848  cbz x0,0x7101e1b870
7101e1b84c  ldr x8,[x0]
7101e1b850  ldr x8,[x8, #0x130]
7101e1b854  blr x8
7101e1b858  tbnz w0,#0x0,0x7101e1b894
7101e1b85c  ldr x8,[x19, #0x160]
7101e1b860  ldr x8,[x8]
7101e1b864  ldr x8,[x8, #0x10]
7101e1b868  ldr x20,[x8, #0x8]
7101e1b86c  cbz x20,0x7101e1b8a0
7101e1b870  adrp x1,0x7104401000
7101e1b874  add x1,x1,#0xa6f
7101e1b878  mov x0,x20
7101e1b87c  bl 0x71037964b0
7101e1b880  cbz x0,0x7101e1b8a0
7101e1b884  ldr x8,[x0]
7101e1b888  ldr x8,[x8, #0x130]
7101e1b88c  blr x8
7101e1b890  tbz w0,#0x0,0x7101e1b8a0
7101e1b894  strh wzr,[x19, #0xbb0]
7101e1b898  add x22,x21,#0x600
7101e1b89c  b 0x7101e1b924
7101e1b8a0  ldr w8,[x19, #0xbd0]
7101e1b8a4  cmp w8,#0x3
7101e1b8a8  b.ne 0x7101e1b8e0
7101e1b8ac  ldr w8,[x19, #0xbd8]
7101e1b8b0  sub w8,w8,#0x3
7101e1b8b4  cmp w8,#0x1
7101e1b8b8  b.hi 0x7101e1b8e0
7101e1b8bc  strb wzr,[x19, #0xbb0]
7101e1b8c0  add x22,x21,#0x600
7101e1b8c4  b 0x7101e1b904
7101e1b8c8  mov x0,x19
7101e1b8cc  bl 0x7101e1f7e0
7101e1b8d0  mov w8,#0xffffffff
7101e1b8d4  str w8,[x19, #0xb30]
7101e1b8d8  strh wzr,[x19, #0xbb0]
7101e1b8dc  b 0x7101e1d9f0
7101e1b8e0  ldr x8,[x21, #0x600]
7101e1b8e4  ldrb w9,[x8, #0x4aa]
7101e1b8e8  add x22,x21,#0x600
7101e1b8ec  cbz w9,0x7101e1b8fc
7101e1b8f0  ldrb w8,[x8, #0x1a8]
7101e1b8f4  ubfx w8,w8,#0x1,#0x1
7101e1b8f8  b 0x7101e1b900
7101e1b8fc  mov w8,wzr
7101e1b900  strb w8,[x19, #0xbb0]
7101e1b904  ldr x8,[x22]
7101e1b908  ldrb w9,[x8, #0x4aa]
7101e1b90c  cbz w9,0x7101e1b91c
7101e1b910  ldrb w8,[x8, #0x1ac]
7101e1b914  ubfx w8,w8,#0x1,#0x1
7101e1b918  b 0x7101e1b920
7101e1b91c  mov w8,wzr
7101e1b920  strb w8,[x19, #0xbb1]
7101e1b924  ldr x8,[x22]
7101e1b928  ldrb w9,[x8, #0x4aa]
7101e1b92c  cbz w9,0x7101e1b93c
7101e1b930  ldrb w8,[x8, #0x1cc]
7101e1b934  ubfx w8,w8,#0x1,#0x1
7101e1b938  b 0x7101e1b940
7101e1b93c  mov w8,wzr
7101e1b940  strb w8,[x19, #0xbb4]
7101e1b944  ldr w8,[x19, #0xdb8]
7101e1b948  mov w23,#0x1
7101e1b94c  cmp w8,#0x1
7101e1b950  mov w24,#0x1
7101e1b954  strb wzr,[x19, #0xbb2]
7101e1b958  b.eq 0x7101e1baa8
7101e1b95c  add x0,x19,#0xba0
7101e1b960  adrp x1,0x71043ad000
7101e1b964  add x1,x1,#0xeae
7101e1b968  sub x8,x29,#0xb0
7101e1b96c  bl 0x7103776640
7101e1b970  ldur x20,[x29, #-0xa8]
7101e1b974  ldr x8,[x20, #0x8]
7101e1b978  cbz x8,0x7101e1b990
7101e1b97c  ldr x8,[x8, #0x18]
7101e1b980  cbz x8,0x7101e1b990
7101e1b984  ldrb w9,[x8, #0x58]
7101e1b988  and w9,w9,#0xfe
7101e1b98c  strb w9,[x8, #0x58]
7101e1b990  adrp x8,0x710523d000
7101e1b994  add x8,x8,#0x988
7101e1b998  stp x8,xzr,[x29, #-0xb0]
7101e1b99c  cbz x20,0x7101e1b9c0
7101e1b9a0  ldr x0,[x20, #0x18]
7101e1b9a4  adrp x8,0x710523d000
7101e1b9a8  add x8,x8,#0x9a8
7101e1b9ac  stp x8,xzr,[x20, #0x10]
7101e1b9b0  cbz x0,0x7101e1b9b8
7101e1b9b4  bl 0x710392eb40
7101e1b9b8  mov x0,x20
7101e1b9bc  bl 0x710392eb40
7101e1b9c0  ldr x8,[x19, #0x528]
7101e1b9c4  ldr x9,[x8, #0x1b8]
7101e1b9c8  cbz x9,0x7101e1baa4
7101e1b9cc  add x10,x8,#0x1b8
7101e1b9d0  mov x8,x10
7101e1b9d4  ldr w11,[x9, #0x20]
7101e1b9d8  cmp w11,#0x4
7101e1b9dc  cset w11,lt
7101e1b9e0  csel x8,x8,x9,lt
7101e1b9e4  ldr x9,[x9, w11, UXTW #0x3]
7101e1b9e8  cbnz x9,0x7101e1b9d4
7101e1b9ec  cmp x8,x10
7101e1b9f0  b.eq 0x7101e1baa4
7101e1b9f4  ldr w9,[x8, #0x20]
7101e1b9f8  cmp w9,#0x4
7101e1b9fc  b.gt 0x7101e1baa4
7101e1ba00  ldr x20,[x8, #0x28]
7101e1ba04  cbz x20,0x7101e1baa4
7101e1ba08  ldr x8,[x20]
7101e1ba0c  ldr x8,[x8, #0x218]
7101e1ba10  mov x0,x20
7101e1ba14  mov w1,wzr
7101e1ba18  blr x8
7101e1ba1c  ldr x8,[x20]
7101e1ba20  ldr x8,[x8, #0x410]
7101e1ba24  mov x0,x20
7101e1ba28  blr x8
7101e1ba2c  ldr x8,[x20]
7101e1ba30  ldr x8,[x8, #0x3f0]
7101e1ba34  mov x0,x20
7101e1ba38  mov w1,wzr
7101e1ba3c  blr x8
7101e1ba40  ldr x8,[x20]
7101e1ba44  ldr x8,[x8, #0x140]
7101e1ba48  mov x0,x20
7101e1ba4c  blr x8
7101e1ba50  cmp w0,#0x6
7101e1ba54  b.eq 0x7101e1ba80
7101e1ba58  ldr x8,[x20]
7101e1ba5c  ldr x8,[x8, #0x140]
7101e1ba60  mov x0,x20
7101e1ba64  blr x8
7101e1ba68  cmp w0,#0x1
7101e1ba6c  b.eq 0x7101e1ba80
7101e1ba70  ldr x8,[x20]
7101e1ba74  ldr x8,[x8, #0x400]
7101e1ba78  mov x0,x20
7101e1ba7c  blr x8
7101e1ba80  ldr x8,[x20]
7101e1ba84  ldr x8,[x8, #0x158]
7101e1ba88  mov x0,x20
7101e1ba8c  blr x8
7101e1ba90  tbnz w0,#0x0,0x7101e1baa4
7101e1ba94  ldr x8,[x20]
7101e1ba98  ldr x8,[x8, #0x370]
7101e1ba9c  mov x0,x20
7101e1baa0  blr x8
7101e1baa4  ldr w24,[x19, #0xdb8]
7101e1baa8  adrp x21,0x710532f000
7101e1baac  ldr x8,[x21, #0x840]
7101e1bab0  ldr x8,[x8, #0x8]
7101e1bab4  ldr x20,[x8, #0xb8]
7101e1bab8  ldr x8,[x20, #0x80]
7101e1babc  ldr x0,[x8, #0x2268]
7101e1bac0  ldr w8,[x8, #0x11b0]
7101e1bac4  ldr w9,[x0, #0x254]
7101e1bac8  sub w11,w8,#0x1
7101e1bacc  cmp w11,#0x5
7101e1bad0  mov w10,#0x2
7101e1bad4  cneg w11,w23,cs
7101e1bad8  cmp w8,#0x5
7101e1badc  csel w8,w10,w11,gt
7101e1bae0  cmp w9,w8
7101e1bae4  b.ne 0x7101e1bb44
7101e1bae8  ldr x8,[x0]
7101e1baec  ldr x8,[x8, #0x78]
7101e1baf0  blr x8
7101e1baf4  cmp w24,#0x2
7101e1baf8  b.eq 0x7101e1bb50
7101e1bafc  tbz w0,#0x0,0x7101e1bba8
7101e1bb00  ldr x23,[x20, #0x80]
7101e1bb04  ldr x0,[x23, #0x2268]
7101e1bb08  mov w8,#0x2268
7101e1bb0c  add x20,x23,x8
7101e1bb10  ldr x8,[x0]
7101e1bb14  ldr x8,[x8, #0x70]
7101e1bb18  mov w1,wzr
7101e1bb1c  blr x8
7101e1bb20  mov w8,#0x11b4
7101e1bb24  ldrb w8,[x23, x8, LSL ]
7101e1bb28  cbz w8,0x7101e1bb98
7101e1bb2c  ldr x0,[x20]
7101e1bb30  ldr w8,[x0, #0x254]
7101e1bb34  cmp w8,#0x3
7101e1bb38  b.ne 0x7101e1bba8
7101e1bb3c  bl 0x710376b960
7101e1bb40  b 0x7101e1bba8
7101e1bb44  mov w0,wzr
7101e1bb48  cmp w24,#0x2
7101e1bb4c  b.ne 0x7101e1bafc
7101e1bb50  tbnz w0,#0x0,0x7101e1bba8
7101e1bb54  ldr x23,[x20, #0x80]
7101e1bb58  ldr x0,[x23, #0x2268]
7101e1bb5c  mov w8,#0x2268
7101e1bb60  add x20,x23,x8
7101e1bb64  ldr x8,[x0]
7101e1bb68  ldr x8,[x8, #0x70]
7101e1bb6c  mov w1,#0x1
7101e1bb70  mov w24,#0x1
7101e1bb74  blr x8
7101e1bb78  ldr w8,[x23, #0x11b0]
7101e1bb7c  sub w10,w8,#0x1
7101e1bb80  cmp w10,#0x5
7101e1bb84  mov w9,#0x2
7101e1bb88  cneg w10,w24,cs
7101e1bb8c  cmp w8,#0x5
7101e1bb90  csel w1,w9,w10,gt
7101e1bb94  b 0x7101e1bb9c
7101e1bb98  orr w1,wzr,#0x3
7101e1bb9c  mov x0,x20
7101e1bba0  mov w2,wzr
7101e1bba4  bl 0x7103771a80
7101e1bba8  ldr w8,[x19, #0xbd0]
7101e1bbac  sub w8,w8,#0x2
7101e1bbb0  cmp w8,#0x5
7101e1bbb4  b.hi 0x7101e1d9f0
7101e1bbb8  adrp x9,0x71044fb000
7101e1bbbc  add x9,x9,#0xa9c
7101e1bbc0  ldrsw x8,[x9, x8, LSL #0x2]
7101e1bbc4  add x8,x8,x9
7101e1bbc8  br x8
7101e1bbcc  ldrb w8,[x19, #0xd24]
7101e1bbd0  cbz w8,0x7101e1bdd8
7101e1bbd4  ldr w8,[x19, #0xc04]
7101e1bbd8  ldr w4,[x19, #0xbf4]
7101e1bbdc  adrp x2,0x71043f0000
7101e1bbe0  add x2,x2,#0xe09
7101e1bbe4  sub x0,x29,#0xb0
7101e1bbe8  sub w3,w8,#0x2
7101e1bbec  mov w1,#0x20
7101e1bbf0  bl 0x71039c04d0
7101e1bbf4  ldr x0,[x19, #0xba8]
7101e1bbf8  fmov s0,0x3f800000
7101e1bbfc  sub x1,x29,#0xb0
7101e1bc00  bl 0x7103778300
7101e1bc04  ldr s0,[x19, #0xd28]
7101e1bc08  ldr x0,[x19, #0xba8]
7101e1bc0c  sub x1,x29,#0xb0
7101e1bc10  bl 0x7103778300
7101e1bc14  ldr s0,[x19, #0xd28]
7101e1bc18  fmov s1,0xbf800000
7101e1bc1c  fadd s0,s0,s1
7101e1bc20  fcmp s0,#0.0
7101e1bc24  str s0,[x19, #0xd28]
7101e1bc28  b.pl 0x7101e1d9f0
7101e1bc2c  add x20,x19,#0xf18
7101e1bc30  mov x0,x20
7101e1bc34  strb wzr,[x19, #0xd24]
7101e1bc38  bl 0x7101e21c50
7101e1bc3c  tbz w0,#0x0,0x7101e1c1c8
7101e1bc40  ldr x0,[x19, #0xba8]
7101e1bc44  adrp x1,0x710433a000
7101e1bc48  add x1,x1,#0x651
7101e1bc4c  fmov s0,0x3f800000
7101e1bc50  bl 0x7103778300
7101e1bc54  b 0x7101e1c1d8
7101e1bc58  ldr w8,[x19, #0xc20]
7101e1bc5c  cmp w8,#0x0
7101e1bc60  b.le 0x7101e1bd98
7101e1bc64  sub w8,w8,#0x1
7101e1bc68  str w8,[x19, #0xc20]
7101e1bc6c  b 0x7101e1d9f0
7101e1bc70  ldr x8,[x22]
7101e1bc74  ldrb w9,[x8, #0x4aa]
7101e1bc78  cbz w9,0x7101e1d9f0
7101e1bc7c  ldrb w9,[x8, #0x19c]
7101e1bc80  tbnz w9,#0x1,0x7101e1c0a0
7101e1bc84  ldrb w8,[x8, #0x198]
7101e1bc88  tbz w8,#0x1,0x7101e1d9f0
7101e1bc8c  ldrsw x8,[x19, #0xc04]
7101e1bc90  sub x8,x8,#0x1
7101e1bc94  str w8,[x19, #0xbf4]
7101e1bc98  add x8,x19,x8, LSL #0x2
7101e1bc9c  ldr w9,[x19, #0xbf8]
7101e1bca0  ldr w8,[x8, #0xc08]
7101e1bca4  cmp w9,w8
7101e1bca8  b.lt 0x7101e1bcb4
7101e1bcac  sub w8,w8,#0x1
7101e1bcb0  str w8,[x19, #0xbf8]
7101e1bcb4  mov w1,#0x1
7101e1bcb8  mov w2,#0x1
7101e1bcbc  mov x0,x19
7101e1bcc0  str wzr,[x19, #0xdb8]
7101e1bcc4  bl 0x7101e24380
7101e1bcc8  mov w1,#0x2
7101e1bccc  mov x0,x19
7101e1bcd0  bl 0x7101e21d30
7101e1bcd4  b 0x7101e1d9f0
7101e1bcd8  ldr w8,[x19, #0xd2c]
7101e1bcdc  cbz w8,0x7101e1bfdc
7101e1bce0  mov x0,x19
7101e1bce4  bl 0x7101e26560
7101e1bce8  b 0x7101e1d9f0
7101e1bcec  ldr x8,[x22]
7101e1bcf0  ldrb w9,[x8, #0x4aa]
7101e1bcf4  cbz w9,0x7101e1d9f0
7101e1bcf8  ldrb w9,[x8, #0x19c]
7101e1bcfc  tbnz w9,#0x1,0x7101e1c148
7101e1bd00  ldrb w8,[x8, #0x198]
7101e1bd04  tbz w8,#0x1,0x7101e1d9f0
7101e1bd08  adrp x8,0x710532f000
7101e1bd0c  ldr x8,[x8, #0x8d0]
7101e1bd10  ldr x0,[x8, #0x8]
7101e1bd14  ldrb w8,[x0, #0x191]
7101e1bd18  cbnz w8,0x7101e1c310
7101e1bd1c  mov x20,#0x5170
7101e1bd20  movk x20,#0xc0b6, LSL #16
7101e1bd24  movk x20,#0x10, LSL #32
7101e1bd28  mov w2,#0x4
7101e1bd2c  mov x1,x20
7101e1bd30  bl 0x7103313f20
7101e1bd34  tbz w0,#0x0,0x7101e1c310
7101e1bd38  add x0,sp,#0x8
7101e1bd3c  mov x1,x20
7101e1bd40  bl 0x71024076d0
7101e1bd44  ldr x8,[sp, #0x18]
7101e1bd48  adrp x9,0x7104f73000
7101e1bd4c  add x9,x9,#0xd50
7101e1bd50  str x9,[sp, #0x10]
7101e1bd54  cbz x8,0x7101e1c33c
7101e1bd58  adrp x8,0x7106dd5000
7101e1bd5c  ldrb w8,[x8, #0x3a8]
7101e1bd60  cmp w8,#0x1
7101e1bd64  b.ne 0x7101e1c33c
7101e1bd68  adrp x9,0x7106dd5000
7101e1bd6c  ldr w8,[sp, #0x20]
7101e1bd70  ldr w9,[x9, #0x3ac]
7101e1bd74  cmp w8,w9
7101e1bd78  b.ne 0x7101e1c33c
7101e1bd7c  ldr x8,[sp, #0x18]
7101e1bd80  ldr wzr,[x8, #0x38]!
7101e1bd84  ldaxr w9,[x8]
7101e1bd88  sub w9,w9,#0x1
7101e1bd8c  stlxr w10,w9,[x8]
7101e1bd90  cbnz w10,0x7101e1bd84
7101e1bd94  b 0x7101e1c33c
7101e1bd98  ldr w1,[x19, #0xc18]
7101e1bd9c  ldrsw x2,[x19, #0xc1c]
7101e1bda0  sxtw x8,w1
7101e1bda4  add x9,x19,x8, LSL #0x6
7101e1bda8  add x8,x9,x2, LSL #0x1
7101e1bdac  ldrh w4,[x8, #0xc24]
7101e1bdb0  orr w10,wzr,#0xffff
7101e1bdb4  cmp x4,x10
7101e1bdb8  b.eq 0x7101e1c428
7101e1bdbc  add x9,x9,x2
7101e1bdc0  ldrb w9,[x9, #0xc30]
7101e1bdc4  cbz w9,0x7101e1c3f4
7101e1bdc8  mov w3,#0x1
7101e1bdcc  mov w5,#0x1
7101e1bdd0  orr w6,wzr,#0xffff
7101e1bdd4  b 0x7101e1c400
7101e1bdd8  ldrb w8,[x19, #0xbb0]
7101e1bddc  cbnz w8,0x7101e1d9f0
7101e1bde0  ldrb w8,[x19, #0xbb1]
7101e1bde4  cbnz w8,0x7101e1d9f0
7101e1bde8  ldr x8,[x22]
7101e1bdec  ldrb w9,[x8, #0x4aa]
7101e1bdf0  cbz w9,0x7101e1d9f0
7101e1bdf4  ldrb w9,[x8, #0x19c]
7101e1bdf8  tbnz w9,#0x1,0x7101e1c818
7101e1bdfc  ldrb w9,[x8, #0x198]
7101e1be00  tbnz w9,#0x1,0x7101e1cacc
7101e1be04  ldrb w9,[x8, #0x1a0]
7101e1be08  tbnz w9,#0x1,0x7101e1cf50
7101e1be0c  ldrb w9,[x8, #0x1a4]
7101e1be10  tbnz w9,#0x1,0x7101e1cfec
7101e1be14  ldrb w8,[x8, #0x1c4]
7101e1be18  tbz w8,#0x1,0x7101e1d9f0
7101e1be1c  ldrsw x20,[x19, #0xbf4]
7101e1be20  ldrsw x21,[x19, #0xbf8]
7101e1be24  add x26,x19,x20, LSL #0x6
7101e1be28  add x23,x26,x21, LSL #0x1
7101e1be2c  ldrsh w8,[x23, #0xf18]
7101e1be30  cmn w8,#0x1
7101e1be34  b.eq 0x7101e1d9f0
7101e1be38  adrp x2,0x71042e7000
7101e1be3c  add x2,x2,#0x785
7101e1be40  sub x0,x29,#0xb0
7101e1be44  mov w1,#0x20
7101e1be48  mov w3,w20
7101e1be4c  bl 0x71039c04d0
7101e1be50  add x0,x19,#0xba0
7101e1be54  add x8,sp,#0x2e8
7101e1be58  sub x1,x29,#0xb0
7101e1be5c  bl 0x7103776640
7101e1be60  adrp x2,0x71043cf000
7101e1be64  add x2,x2,#0x9aa
7101e1be68  sub x0,x29,#0xf8
7101e1be6c  mov w1,#0x20
7101e1be70  mov w3,w21
7101e1be74  bl 0x71039c04d0
7101e1be78  add x8,sp,#0x2a8
7101e1be7c  add x0,sp,#0x2e8
7101e1be80  sub x1,x29,#0xf8
7101e1be84  bl 0x7103776640
7101e1be88  ldr x22,[sp, #0x2b0]
7101e1be8c  fmov s0,0x3f800000
7101e1be90  adrp x1,0x710424f000
7101e1be94  add x1,x1,#0xaa5
7101e1be98  mov x0,x22
7101e1be9c  bl 0x7103778300
7101e1bea0  adrp x25,0x710523d000
7101e1bea4  add x25,x25,#0x988
7101e1bea8  str x25,[sp, #0x2a8]
7101e1beac  str xzr,[sp, #0x2b0]
7101e1beb0  cbz x22,0x7101e1bed4
7101e1beb4  ldr x0,[x22, #0x18]
7101e1beb8  adrp x8,0x710523d000
7101e1bebc  add x8,x8,#0x9a8
7101e1bec0  stp x8,xzr,[x22, #0x10]
7101e1bec4  cbz x0,0x7101e1becc
7101e1bec8  bl 0x710392eb40
7101e1becc  mov x0,x22
7101e1bed0  bl 0x710392eb40
7101e1bed4  add x8,sp,#0x2a8
7101e1bed8  add x0,sp,#0x2e8
7101e1bedc  sub x1,x29,#0xf8
7101e1bee0  add x24,x23,#0xf18
7101e1bee4  bl 0x7103776640
7101e1bee8  ldr x22,[sp, #0x2b0]
7101e1beec  fmov s0,0x3f800000
7101e1bef0  adrp x1,0x7104308000
7101e1bef4  add x1,x1,#0x9f8
7101e1bef8  mov x0,x22
7101e1befc  bl 0x7103778300
7101e1bf00  str x25,[sp, #0x2a8]
7101e1bf04  str xzr,[sp, #0x2b0]
7101e1bf08  cbz x22,0x7101e1bf2c
7101e1bf0c  ldr x0,[x22, #0x18]
7101e1bf10  adrp x8,0x710523d000
7101e1bf14  add x8,x8,#0x9a8
7101e1bf18  stp x8,xzr,[x22, #0x10]
7101e1bf1c  cbz x0,0x7101e1bf24
7101e1bf20  bl 0x710392eb40
7101e1bf24  mov x0,x22
7101e1bf28  bl 0x710392eb40
7101e1bf2c  fmov s8,0x3f800000
7101e1bf30  ldr x22,[sp, #0x2f0]
7101e1bf34  adrp x1,0x710435b000
7101e1bf38  add x1,x1,#0xcec
7101e1bf3c  mov v0.16B,v8.16B
7101e1bf40  mov x0,x22
7101e1bf44  bl 0x7103778300
7101e1bf48  ldr x0,[x19, #0xba8]
7101e1bf4c  mov v0.16B,v8.16B
7101e1bf50  adrp x1,0x710433a000
7101e1bf54  add x1,x1,#0x651
7101e1bf58  bl 0x7103778300
7101e1bf5c  ldrsh w9,[x24]
7101e1bf60  mov x8,xzr
7101e1bf64  add x23,x19,#0xf18
7101e1bf68  cmn w9,#0x1
7101e1bf6c  b.eq 0x7101e1e250
7101e1bf70  cmp w9,#0x7cf
7101e1bf74  b.gt 0x7101e1e250
7101e1bf78  sxtw x8,w9
7101e1bf7c  adrp x9,0x710532f000
7101e1bf80  ldr x9,[x9, #0x730]
7101e1bf84  ldr x9,[x9, #0x8]
7101e1bf88  ldr x10,[x9, #0x1d8]
7101e1bf8c  add x8,x10,x8, LSL #0x1
7101e1bf90  ldp x9,x10,[x10, #0x20]
7101e1bf94  sub x10,x10,x9
7101e1bf98  orr x11,xzr,#-0x3333333333333334
7101e1bf9c  movk x11,#0xcccd
7101e1bfa0  ldrh w8,[x8, #0x60]
7101e1bfa4  asr x10,x10,#0x6
7101e1bfa8  mul x10,x10,x11
7101e1bfac  cmp w10,w8
7101e1bfb0  b.ls 0x7101e1e24c
7101e1bfb4  mov w11,#0x140
7101e1bfb8  madd x9,x8,x11,x9
7101e1bfbc  adrp x11,0x7105182000
7101e1bfc0  add x11,x11,#0xb08
7101e1bfc4  cmp x10,x8
7101e1bfc8  csel x8,x9,x11,hi
7101e1bfcc  ldrb w9,[x8, #0x5e]
7101e1bfd0  cbz w9,0x7101e1e220
7101e1bfd4  mov w8,#0x4
7101e1bfd8  b 0x7101e1e250
7101e1bfdc  ldrb w8,[x19, #0xbb0]
7101e1bfe0  cbnz w8,0x7101e1bfec
7101e1bfe4  ldrb w8,[x19, #0xbb1]
7101e1bfe8  cbz w8,0x7101e1c5b8
7101e1bfec  ldr w8,[x19, #0xbdc]
7101e1bff0  cmp w8,#0x2
7101e1bff4  b.eq 0x7101e1c354
7101e1bff8  cmp w8,#0x1
7101e1bffc  b.ne 0x7101e1d97c
7101e1c000  ldrb w8,[x19, #0xbec]
7101e1c004  cbz w8,0x7101e1c5ec
7101e1c008  ldrb w8,[x19, #0xbb1]
7101e1c00c  cbz w8,0x7101e1d97c
7101e1c010  adrp x8,0x710532f000
7101e1c014  ldr x8,[x8, #0x8d0]
7101e1c018  ldr x0,[x8, #0x8]
7101e1c01c  ldrb w8,[x0, #0x191]
7101e1c020  cbnz w8,0x7101e1c60c
7101e1c024  mov x19,#0xfe8c
7101e1c028  movk x19,#0x53df, LSL #16
7101e1c02c  movk x19,#0x10, LSL #32
7101e1c030  mov w2,#0x4
7101e1c034  mov x1,x19
7101e1c038  bl 0x7103313f20
7101e1c03c  tbz w0,#0x0,0x7101e1c60c
7101e1c040  add x0,sp,#0xc8
7101e1c044  mov x1,x19
7101e1c048  bl 0x71024076d0
7101e1c04c  ldr x8,[sp, #0xd8]
7101e1c050  adrp x9,0x7104f73000
7101e1c054  add x9,x9,#0xd50
7101e1c058  str x9,[sp, #0xd0]
7101e1c05c  cbz x8,0x7101e1c638
7101e1c060  adrp x8,0x7106dd5000
7101e1c064  ldrb w8,[x8, #0x3a8]
7101e1c068  cmp w8,#0x1
7101e1c06c  b.ne 0x7101e1c638
7101e1c070  adrp x9,0x7106dd5000
7101e1c074  ldr w8,[sp, #0xe0]
7101e1c078  ldr w9,[x9, #0x3ac]
7101e1c07c  cmp w8,w9
7101e1c080  b.ne 0x7101e1c638
7101e1c084  ldr x8,[sp, #0xd8]
7101e1c088  ldr wzr,[x8, #0x38]!
7101e1c08c  ldaxr w9,[x8]
7101e1c090  sub w9,w9,#0x1
7101e1c094  stlxr w10,w9,[x8]
7101e1c098  cbnz w10,0x7101e1c08c
7101e1c09c  b 0x7101e1c638
7101e1c0a0  ldr w20,[x19, #0xc04]
7101e1c0a4  add x0,x19,#0xf18
7101e1c0a8  str w20,[x19, #0xbf4]
7101e1c0ac  str w20,[x19, #0xbfc]
7101e1c0b0  bl 0x7101e21c50
7101e1c0b4  tbz w0,#0x0,0x7101e1c1a8
7101e1c0b8  adrp x8,0x710532f000
7101e1c0bc  ldr x8,[x8, #0x8d0]
7101e1c0c0  ldr x0,[x8, #0x8]
7101e1c0c4  ldrb w8,[x0, #0x191]
7101e1c0c8  cbnz w8,0x7101e1c27c
7101e1c0cc  mov x20,#0x5170
7101e1c0d0  movk x20,#0xc0b6, LSL #16
7101e1c0d4  movk x20,#0x10, LSL #32
7101e1c0d8  mov w2,#0x4
7101e1c0dc  mov x1,x20
7101e1c0e0  bl 0x7103313f20
7101e1c0e4  tbz w0,#0x0,0x7101e1c27c
7101e1c0e8  add x0,sp,#0x48
7101e1c0ec  mov x1,x20
7101e1c0f0  bl 0x71024076d0
7101e1c0f4  ldr x8,[sp, #0x58]
7101e1c0f8  adrp x9,0x7104f73000
7101e1c0fc  add x9,x9,#0xd50
7101e1c100  str x9,[sp, #0x50]
7101e1c104  cbz x8,0x7101e1c2a8
7101e1c108  adrp x8,0x7106dd5000
7101e1c10c  ldrb w8,[x8, #0x3a8]
7101e1c110  cmp w8,#0x1
7101e1c114  b.ne 0x7101e1c2a8
7101e1c118  adrp x9,0x7106dd5000
7101e1c11c  ldr w8,[sp, #0x60]
7101e1c120  ldr w9,[x9, #0x3ac]
7101e1c124  cmp w8,w9
7101e1c128  b.ne 0x7101e1c2a8
7101e1c12c  ldr x8,[sp, #0x58]
7101e1c130  ldr wzr,[x8, #0x38]!
7101e1c134  ldaxr w9,[x8]
7101e1c138  sub w9,w9,#0x1
7101e1c13c  stlxr w10,w9,[x8]
7101e1c140  cbnz w10,0x7101e1c134
7101e1c144  b 0x7101e1c2a8
7101e1c148  ldr w8,[x19, #0xbf4]
7101e1c14c  str wzr,[x19, #0xbf4]
7101e1c150  str w8,[x19, #0xbfc]
7101e1c154  ldr w9,[x19, #0xbf8]
7101e1c158  ldr w8,[x19, #0xc08]
7101e1c15c  cmp w9,w8
7101e1c160  str w9,[x19, #0xc00]
7101e1c164  b.lt 0x7101e1c170
7101e1c168  sub w8,w8,#0x1
7101e1c16c  str w8,[x19, #0xbf8]
7101e1c170  mov w1,#0x1
7101e1c174  mov w2,#0x1
7101e1c178  mov x0,x19
7101e1c17c  str wzr,[x19, #0xdb8]
7101e1c180  bl 0x7101e24380
7101e1c184  mov w1,#0x2
7101e1c188  mov x0,x19
7101e1c18c  bl 0x7101e21d30
7101e1c190  ldr x0,[x19, #0x528]
7101e1c194  ldr x8,[x0]
7101e1c198  ldr x8,[x8, #0x70]
7101e1c19c  mov w1,wzr
7101e1c1a0  blr x8
7101e1c1a4  b 0x7101e1d9f0
7101e1c1a8  ldr w9,[x19, #0xbf8]
7101e1c1ac  ldr w8,[x19, #0xc08]
7101e1c1b0  str w20,[x19, #0xbfc]
7101e1c1b4  str w9,[x19, #0xc00]
7101e1c1b8  str wzr,[x19, #0xbf4]
7101e1c1bc  cmp w9,w8
7101e1c1c0  b.lt 0x7101e1bcb4
7101e1c1c4  b 0x7101e1bcac
7101e1c1c8  ldrsw x8,[x19, #0xbf4]
7101e1c1cc  add x9,x19,x8, LSL #0x6
7101e1c1d0  ldrb w10,[x9, #0xf50]
7101e1c1d4  cbz w10,0x7101e1c578
7101e1c1d8  mov x0,x20
7101e1c1dc  bl 0x7101e21c50
7101e1c1e0  tbz w0,#0x0,0x7101e1d9f0
7101e1c1e4  mov w20,#0x2
7101e1c1e8  orr w1,wzr,#0x6
7101e1c1ec  mov x0,x19
7101e1c1f0  str w20,[x19, #0xdb8]
7101e1c1f4  bl 0x7101e21d30
7101e1c1f8  ldr x8,[x21, #0x840]
7101e1c1fc  ldr x8,[x8, #0x8]
7101e1c200  ldr x8,[x8, #0xb8]
7101e1c204  ldr x23,[x8, #0x80]
7101e1c208  mov w8,#0x2268
7101e1c20c  ldr x0,[x23, #0x2268]
7101e1c210  add x21,x23,x8
7101e1c214  ldr x8,[x0]
7101e1c218  ldr x8,[x8, #0x70]
7101e1c21c  mov w1,#0x1
7101e1c220  mov w22,#0x1
7101e1c224  blr x8
7101e1c228  ldr w8,[x23, #0x11b0]
7101e1c22c  cmp w8,#0x5
7101e1c230  b.gt 0x7101e1c240
7101e1c234  sub w8,w8,#0x1
7101e1c238  cmp w8,#0x5
7101e1c23c  cneg w20,w22,cs
7101e1c240  mov x0,x21
7101e1c244  mov w1,w20
7101e1c248  mov w2,wzr
7101e1c24c  bl 0x7103771a80
7101e1c250  ldr w8,[x19, #0xbf8]
7101e1c254  ldr w9,[x19, #0xbf4]
7101e1c258  mov w1,#0x1
7101e1c25c  mov x0,x19
7101e1c260  str w8,[x19, #0xc00]
7101e1c264  mov w8,#0xffffffff
7101e1c268  mov w2,wzr
7101e1c26c  str w9,[x19, #0xbfc]
7101e1c270  str w8,[x19, #0xbf4]
7101e1c274  bl 0x7101e24380
7101e1c278  b 0x7101e1d9f0
7101e1c27c  mov x8,#0x650000000000
7101e1c280  movk x8,#0x87, LSL #48
7101e1c284  strb wzr,[sp, #0x68]
7101e1c288  stp xzr,x8,[sp, #0x58]
7101e1c28c  mov x8,#-0x1
7101e1c290  stp x8,xzr,[sp, #0x70]
7101e1c294  adrp x8,0x7104f73000
7101e1c298  add x8,x8,#0xd50
7101e1c29c  str wzr,[sp, #0x48]
7101e1c2a0  str xzr,[sp, #0x80]
7101e1c2a4  str x8,[sp, #0x50]
7101e1c2a8  mov w20,#0x2
7101e1c2ac  orr w1,wzr,#0x6
7101e1c2b0  mov x0,x19
7101e1c2b4  str xzr,[sp, #0x58]
7101e1c2b8  strb wzr,[sp, #0x68]
7101e1c2bc  str w20,[x19, #0xdb8]
7101e1c2c0  bl 0x7101e21d30
7101e1c2c4  ldr x8,[x21, #0x840]
7101e1c2c8  ldr x8,[x8, #0x8]
7101e1c2cc  ldr x8,[x8, #0xb8]
7101e1c2d0  ldr x21,[x8, #0x80]
7101e1c2d4  mov w8,#0x2268
7101e1c2d8  ldr x0,[x21, #0x2268]
7101e1c2dc  add x19,x21,x8
7101e1c2e0  ldr x8,[x0]
7101e1c2e4  ldr x8,[x8, #0x70]
7101e1c2e8  mov w1,#0x1
7101e1c2ec  mov w22,#0x1
7101e1c2f0  blr x8
7101e1c2f4  ldr w8,[x21, #0x11b0]
7101e1c2f8  sub w9,w8,#0x1
7101e1c2fc  cmp w9,#0x5
7101e1c300  cneg w9,w22,cs
7101e1c304  cmp w8,#0x5
7101e1c308  csel w1,w20,w9,gt
7101e1c30c  b 0x7101e1c4b4
7101e1c310  mov x8,#0x650000000000
7101e1c314  movk x8,#0x87, LSL #48
7101e1c318  strb wzr,[sp, #0x28]
7101e1c31c  stp xzr,x8,[sp, #0x18]
7101e1c320  mov x8,#-0x1
7101e1c324  stp x8,xzr,[sp, #0x30]
7101e1c328  adrp x8,0x7104f73000
7101e1c32c  add x8,x8,#0xd50
7101e1c330  str wzr,[sp, #0x8]
7101e1c334  str xzr,[sp, #0x40]
7101e1c338  str x8,[sp, #0x10]
7101e1c33c  mov w8,#0x1
7101e1c340  mov w1,#0x4
7101e1c344  str xzr,[sp, #0x18]
7101e1c348  strb wzr,[sp, #0x28]
7101e1c34c  str w8,[x19, #0xdb8]
7101e1c350  b 0x7101e1bccc
7101e1c354  ldrb w8,[x19, #0xbed]
7101e1c358  cbz w8,0x7101e1c4c4
7101e1c35c  ldrb w8,[x19, #0xbb1]
7101e1c360  cbz w8,0x7101e1c4c4
7101e1c364  adrp x8,0x710532f000
7101e1c368  ldr x8,[x8, #0x8d0]
7101e1c36c  ldr x0,[x8, #0x8]
7101e1c370  ldrb w8,[x0, #0x191]
7101e1c374  cbnz w8,0x7101e1c644
7101e1c378  mov x19,#0xfe8c
7101e1c37c  movk x19,#0x53df, LSL #16
7101e1c380  movk x19,#0x10, LSL #32
7101e1c384  mov w2,#0x4
7101e1c388  mov x1,x19
7101e1c38c  bl 0x7103313f20
7101e1c390  tbz w0,#0x0,0x7101e1c644
7101e1c394  add x0,sp,#0x88
7101e1c398  mov x1,x19
7101e1c39c  bl 0x71024076d0
7101e1c3a0  ldr x8,[sp, #0x98]
7101e1c3a4  adrp x9,0x7104f73000
7101e1c3a8  add x9,x9,#0xd50
7101e1c3ac  str x9,[sp, #0x90]
7101e1c3b0  cbz x8,0x7101e1c670
7101e1c3b4  adrp x8,0x7106dd5000
7101e1c3b8  ldrb w8,[x8, #0x3a8]
7101e1c3bc  cmp w8,#0x1
7101e1c3c0  b.ne 0x7101e1c670
7101e1c3c4  adrp x9,0x7106dd5000
7101e1c3c8  ldr w8,[sp, #0xa0]
7101e1c3cc  ldr w9,[x9, #0x3ac]
7101e1c3d0  cmp w8,w9
7101e1c3d4  b.ne 0x7101e1c670
7101e1c3d8  ldr x8,[sp, #0x98]
7101e1c3dc  ldr wzr,[x8, #0x38]!
7101e1c3e0  ldaxr w9,[x8]
7101e1c3e4  sub w9,w9,#0x1
7101e1c3e8  stlxr w10,w9,[x8]
7101e1c3ec  cbnz w10,0x7101e1c3e0
7101e1c3f0  b 0x7101e1c670
7101e1c3f4  ldrh w6,[x8, #0xc36]
7101e1c3f8  mov w3,#0x1
7101e1c3fc  mov w5,#0x2
7101e1c400  mov x0,x19
7101e1c404  bl 0x7101e28430
7101e1c408  ldr w8,[x19, #0xc1c]
7101e1c40c  sub w9,w8,#0x1
7101e1c410  str w9,[x19, #0xc1c]
7101e1c414  orr w9,wzr,#0x3
7101e1c418  cmp w8,#0x0
7101e1c41c  str w9,[x19, #0xc20]
7101e1c420  b.gt 0x7101e1d9f0
7101e1c424  ldr w1,[x19, #0xc18]
7101e1c428  ldr w9,[x19, #0xc04]
7101e1c42c  sxtw x8,w1
7101e1c430  add x8,x8,#0x1
7101e1c434  str w8,[x19, #0xc18]
7101e1c438  cmp w8,w9
7101e1c43c  b.ge 0x7101e1c454
7101e1c440  add x8,x19,x8, LSL #0x2
7101e1c444  ldr w8,[x8, #0xc08]
7101e1c448  sub w8,w8,#0x1
7101e1c44c  str w8,[x19, #0xc1c]
7101e1c450  b 0x7101e1d9f0
7101e1c454  mov w20,#0x1
7101e1c458  orr w1,wzr,#0x6
7101e1c45c  mov x0,x19
7101e1c460  strb w20,[x19, #0xf06]
7101e1c464  bl 0x7101e21d30
7101e1c468  mov w22,#0x2
7101e1c46c  str w22,[x19, #0xdb8]
7101e1c470  ldr x8,[x21, #0x840]
7101e1c474  ldr x8,[x8, #0x8]
7101e1c478  ldr x8,[x8, #0xb8]
7101e1c47c  ldr x21,[x8, #0x80]
7101e1c480  mov w8,#0x2268
7101e1c484  ldr x0,[x21, #0x2268]
7101e1c488  add x19,x21,x8
7101e1c48c  ldr x8,[x0]
7101e1c490  ldr x8,[x8, #0x70]
7101e1c494  mov w1,#0x1
7101e1c498  blr x8
7101e1c49c  ldr w8,[x21, #0x11b0]
7101e1c4a0  sub w9,w8,#0x1
7101e1c4a4  cmp w9,#0x5
7101e1c4a8  cneg w9,w20,cs
7101e1c4ac  cmp w8,#0x5
7101e1c4b0  csel w1,w22,w9,gt
7101e1c4b4  mov x0,x19
7101e1c4b8  mov w2,wzr
7101e1c4bc  bl 0x7103771a80
7101e1c4c0  b 0x7101e1d9f0
7101e1c4c4  ldr x22,[x19, #0x570]
7101e1c4c8  ldr w8,[x19, #0xb30]
7101e1c4cc  ldr w21,[x22, #0x2a4]
7101e1c4d0  cmp w8,w21
7101e1c4d4  b.eq 0x7101e1d35c
7101e1c4d8  add x20,x19,#0x580
7101e1c4dc  str w21,[x19, #0xb30]
7101e1c4e0  tbnz w21,#0x1f,0x7101e1c8f4
7101e1c4e4  ldr w8,[x19, #0x7e8]
7101e1c4e8  tst w8,#0xffffff
7101e1c4ec  b.eq 0x7101e1c8dc
7101e1c4f0  ldr w8,[x19, #0x828]
7101e1c4f4  cmp w8,w21
7101e1c4f8  b.le 0x7101e1c8f4
7101e1c4fc  ldr x9,[x19, #0x760]
7101e1c500  sxtw x8,w21
7101e1c504  ldr x8,[x9, x8, LSL #0x3]
7101e1c508  ldrh w1,[x8]
7101e1c50c  adrp x8,0x7105329000
7101e1c510  ldr x8,[x8, #0xf98]
7101e1c514  ubfx x9,x1,#0x4,#0x1c
7101e1c518  ldr x8,[x8]
7101e1c51c  ldr x10,[x8, #0x30]
7101e1c520  cmp w9,#0x177
7101e1c524  b.cc 0x7101e1cb18
7101e1c528  mov w9,#0xffffe890
7101e1c52c  add w11,w1,w9
7101e1c530  adrp x9,0x710532a000
7101e1c534  add x9,x9,#0x878
7101e1c538  cmp w11,#0x63
7101e1c53c  b.hi 0x7101e1c90c
7101e1c540  and x11,x11,#0xffff
7101e1c544  mov w12,#0x50
7101e1c548  madd x10,x11,x12,x10
7101e1c54c  mov w12,#0x8cc8
7101e1c550  movk w12,#0x8, LSL #16
7101e1c554  mov w11,#0x8cc0
7101e1c558  movk w11,#0x8, LSL #16
7101e1c55c  ldrsh w12,[x10, x12, LSL #0x0]
7101e1c560  add x10,x10,x11
7101e1c564  cmn w12,#0x1
7101e1c568  csel x9,x9,x10,eq
7101e1c56c  ldrb w9,[x9, #0x3e]
7101e1c570  tbz w9,#0x2,0x7101e1ca0c
7101e1c574  b 0x7101e1c914
7101e1c578  ldrsw x10,[x19, #0xbf8]
7101e1c57c  add x9,x9,x10, LSL #0x2
7101e1c580  ldr w9,[x9, #0xf38]
7101e1c584  cmp w9,#0x1
7101e1c588  b.lt 0x7101e1c1d8
7101e1c58c  ldr w9,[x19, #0xc04]
7101e1c590  cmp w9,#0x4
7101e1c594  b.ne 0x7101e1c1d8
7101e1c598  cmp w8,#0x2
7101e1c59c  b.eq 0x7101e1cb08
7101e1c5a0  cmp w8,#0x1
7101e1c5a4  b.ne 0x7101e1bc40
7101e1c5a8  ldr x0,[x19, #0xba8]
7101e1c5ac  adrp x1,0x7104292000
7101e1c5b0  add x1,x1,#0x1fb
7101e1c5b4  b 0x7101e1bc4c
7101e1c5b8  ldr x9,[x19, #0xb38]
7101e1c5bc  ldr w9,[x9, #0x25c]
7101e1c5c0  ldr w8,[x19, #0xbdc]
7101e1c5c4  cmp w9,#0x5
7101e1c5c8  b.eq 0x7101e1c67c
7101e1c5cc  cmp w9,#0x6
7101e1c5d0  b.ne 0x7101e1c690
7101e1c5d4  cmp w8,#0x1
7101e1c5d8  mov w9,#0x2
7101e1c5dc  csel w20,w9,w8,eq
7101e1c5e0  cmp w20,w8
7101e1c5e4  b.eq 0x7101e1c6b8
7101e1c5e8  b 0x7101e1c714
7101e1c5ec  ldr x9,[x19, #0x538]
7101e1c5f0  ldr w8,[x19, #0xbf0]
7101e1c5f4  ldr w9,[x9, #0x2a4]
7101e1c5f8  cmp w8,w9
7101e1c5fc  b.eq 0x7101e1d97c
7101e1c600  mov x0,x19
7101e1c604  bl 0x7101e26450
7101e1c608  b 0x7101e1d97c
7101e1c60c  mov x8,#0x650000000000
7101e1c610  movk x8,#0x87, LSL #48
7101e1c614  strb wzr,[sp, #0xe8]
7101e1c618  stp xzr,x8,[sp, #0xd8]
7101e1c61c  mov x8,#-0x1
7101e1c620  stp x8,xzr,[sp, #0xf0]
7101e1c624  adrp x8,0x7104f73000
7101e1c628  add x8,x8,#0xd50
7101e1c62c  str wzr,[sp, #0xc8]
7101e1c630  str xzr,[sp, #0x100]
7101e1c634  str x8,[sp, #0xd0]
7101e1c638  str xzr,[sp, #0xd8]
7101e1c63c  strb wzr,[sp, #0xe8]
7101e1c640  b 0x7101e1d9f0
7101e1c644  mov x8,#0x650000000000
7101e1c648  movk x8,#0x87, LSL #48
7101e1c64c  strb wzr,[sp, #0xa8]
7101e1c650  stp xzr,x8,[sp, #0x98]
7101e1c654  mov x8,#-0x1
7101e1c658  stp x8,xzr,[sp, #0xb0]
7101e1c65c  adrp x8,0x7104f73000
7101e1c660  add x8,x8,#0xd50
7101e1c664  str wzr,[sp, #0x88]
7101e1c668  str xzr,[sp, #0xc0]
7101e1c66c  str x8,[sp, #0x90]
7101e1c670  str xzr,[sp, #0x98]
7101e1c674  strb wzr,[sp, #0xa8]
7101e1c678  b 0x7101e1d9f0
7101e1c67c  cmp w8,#0x2
7101e1c680  csinc w20,w8,wzr,ne
7101e1c684  cmp w20,w8
7101e1c688  b.eq 0x7101e1c6b8
7101e1c68c  b 0x7101e1c714
7101e1c690  ldr x9,[x22]
7101e1c694  ldrb w10,[x9, #0x4aa]
7101e1c698  cbz w10,0x7101e1c6b8
7101e1c69c  ldrb w9,[x9, #0x1b8]
7101e1c6a0  tbz w9,#0x1,0x7101e1c6b8
7101e1c6a4  cmp w8,#0x1
7101e1c6a8  mov w9,#0x1
7101e1c6ac  cinc w20,w9,eq
7101e1c6b0  cmp w20,w8
7101e1c6b4  b.ne 0x7101e1c714
7101e1c6b8  cmp w8,#0x1
7101e1c6bc  b.ne 0x7101e1c6c8
7101e1c6c0  ldrb w9,[x19, #0xbec]
7101e1c6c4  cbnz w9,0x7101e1bfec
7101e1c6c8  ldr w9,[x19, #0xbd8]
7101e1c6cc  add x24,x19,#0x530
7101e1c6d0  add x25,x19,#0x568
7101e1c6d4  cmp w8,#0x1
7101e1c6d8  add x23,x19,#0x538
7101e1c6dc  add x22,x19,#0x570
7101e1c6e0  csel x21,x24,x25,eq
7101e1c6e4  csel x20,x23,x22,eq
7101e1c6e8  sub w9,w9,#0x1
7101e1c6ec  cmp w9,#0x3
7101e1c6f0  b.hi 0x7101e1bfec
7101e1c6f4  adrp x10,0x71044fb000
7101e1c6f8  add x10,x10,#0xab4
7101e1c6fc  ldrsw x9,[x10, x9, LSL #0x2]
7101e1c700  add x9,x9,x10
7101e1c704  br x9
7101e1c708  mov w8,#0x2
7101e1c70c  str w8,[x19, #0xbd8]
7101e1c710  b 0x7101e1bfec
7101e1c714  adrp x8,0x710532f000
7101e1c718  ldr x8,[x8, #0x8d0]
7101e1c71c  ldr x0,[x8, #0x8]
7101e1c720  ldrb w8,[x0, #0x191]
7101e1c724  cbnz w8,0x7101e1c7a4
7101e1c728  mov x21,#0xc028
7101e1c72c  movk x21,#0x1ca6, LSL #16
7101e1c730  movk x21,#0x15, LSL #32
7101e1c734  mov w2,#0x4
7101e1c738  mov x1,x21
7101e1c73c  bl 0x7103313f20
7101e1c740  tbz w0,#0x0,0x7101e1c7a4
7101e1c744  add x0,sp,#0x108
7101e1c748  mov x1,x21
7101e1c74c  bl 0x71024076d0
7101e1c750  ldr x8,[sp, #0x118]
7101e1c754  adrp x9,0x7104f73000
7101e1c758  add x9,x9,#0xd50
7101e1c75c  str x9,[sp, #0x110]
7101e1c760  cbz x8,0x7101e1c7d0
7101e1c764  adrp x8,0x7106dd5000
7101e1c768  ldrb w8,[x8, #0x3a8]
7101e1c76c  cmp w8,#0x1
7101e1c770  b.ne 0x7101e1c7d0
7101e1c774  adrp x9,0x7106dd5000
7101e1c778  ldr w8,[sp, #0x120]
7101e1c77c  ldr w9,[x9, #0x3ac]
7101e1c780  cmp w8,w9
7101e1c784  b.ne 0x7101e1c7d0
7101e1c788  ldr x8,[sp, #0x118]
7101e1c78c  ldr wzr,[x8, #0x38]!
7101e1c790  ldaxr w9,[x8]
7101e1c794  sub w9,w9,#0x1
7101e1c798  stlxr w10,w9,[x8]
7101e1c79c  cbnz w10,0x7101e1c790
7101e1c7a0  b 0x7101e1c7d0
7101e1c7a4  mov x8,#0x650000000000
7101e1c7a8  movk x8,#0x87, LSL #48
7101e1c7ac  strb wzr,[sp, #0x128]
7101e1c7b0  stp xzr,x8,[sp, #0x118]
7101e1c7b4  mov x8,#-0x1
7101e1c7b8  stp x8,xzr,[sp, #0x130]
7101e1c7bc  adrp x8,0x7104f73000
7101e1c7c0  add x8,x8,#0xd50
7101e1c7c4  str wzr,[sp, #0x108]
7101e1c7c8  str xzr,[sp, #0x140]
7101e1c7cc  str x8,[sp, #0x110]
7101e1c7d0  mov w8,#0xffffffff
7101e1c7d4  mov x0,x19
7101e1c7d8  mov w1,w20
7101e1c7dc  str xzr,[sp, #0x118]
7101e1c7e0  strb wzr,[sp, #0x128]
7101e1c7e4  str w8,[x19, #0xb30]
7101e1c7e8  bl 0x7101e25080
7101e1c7ec  ldr w8,[x19, #0xbd8]
7101e1c7f0  cbz w8,0x7101e1c7f8
7101e1c7f4  str wzr,[x19, #0xbd8]
7101e1c7f8  mov w8,#0x1
7101e1c7fc  str w8,[x19, #0xbd8]
7101e1c800  ldr w8,[x19, #0xbdc]
7101e1c804  cmp w8,#0x1
7101e1c808  b.ne 0x7101e1c860
7101e1c80c  ldrb w9,[x19, #0xbec]
7101e1c810  cbnz w9,0x7101e1bfec
7101e1c814  b 0x7101e1c870
7101e1c818  ldr w9,[x19, #0xbf4]
7101e1c81c  ldr w10,[x19, #0xdb8]
7101e1c820  str w9,[x19, #0xbfc]
7101e1c824  ldr w8,[x19, #0xbf8]
7101e1c828  add w9,w9,#0x1
7101e1c82c  cmp w10,#0x2
7101e1c830  str w8,[x19, #0xc00]
7101e1c834  str w9,[x19, #0xbf4]
7101e1c838  b.eq 0x7101e1c844
7101e1c83c  cmp w10,#0x1
7101e1c840  b.ne 0x7101e1ce28
7101e1c844  str wzr,[x19, #0xbf4]
7101e1c848  str wzr,[x19, #0xdb8]
7101e1c84c  mov w1,#0x1
7101e1c850  mov w2,#0x1
7101e1c854  mov x0,x19
7101e1c858  bl 0x7101e24380
7101e1c85c  b 0x7101e1d9f0
7101e1c860  cmp w8,#0x2
7101e1c864  b.ne 0x7101e1c870
7101e1c868  ldrb w9,[x19, #0xbed]
7101e1c86c  cbnz w9,0x7101e1bfec
7101e1c870  add x9,x19,#0x530
7101e1c874  add x10,x19,#0x568
7101e1c878  cmp w8,#0x1
7101e1c87c  csel x20,x9,x10,eq
7101e1c880  add x8,x19,#0x538
7101e1c884  add x9,x19,#0x570
7101e1c888  csel x21,x8,x9,eq
7101e1c88c  ldr x0,[x20]
7101e1c890  ldr x8,[x0]
7101e1c894  ldr x8,[x8, #0x70]
7101e1c898  mov w1,wzr
7101e1c89c  blr x8
7101e1c8a0  ldr x0,[x20]
7101e1c8a4  ldr x8,[x0]
7101e1c8a8  ldr x8,[x8, #0x60]
7101e1c8ac  mov w1,#0x1
7101e1c8b0  blr x8
7101e1c8b4  ldr x0,[x21]
7101e1c8b8  ldr x8,[x0]
7101e1c8bc  ldr x8,[x8, #0x70]
7101e1c8c0  mov w1,#0x1
7101e1c8c4  blr x8
7101e1c8c8  mov w1,#0x68
7101e1c8cc  mov x0,x20
7101e1c8d0  mov w2,wzr
7101e1c8d4  bl 0x7103771a80
7101e1c8d8  b 0x7101e1bfec
7101e1c8dc  ldr x8,[x19, #0x768]
7101e1c8e0  ldr x9,[x19, #0x760]
7101e1c8e4  sub x8,x8,x9
7101e1c8e8  lsr x8,x8,#0x3
7101e1c8ec  cmp w8,w21
7101e1c8f0  b.gt 0x7101e1c4fc
7101e1c8f4  adrp x8,0x7105329000
7101e1c8f8  ldr x8,[x8, #0xf98]
7101e1c8fc  ldr x8,[x8]
7101e1c900  adrp x9,0x710532a000
7101e1c904  add x9,x9,#0x878
7101e1c908  orr w1,wzr,#0xffff
7101e1c90c  ldrb w9,[x9, #0x3e]
7101e1c910  tbz w9,#0x2,0x7101e1ca0c
7101e1c914  lsr w9,w1,#0x4
7101e1c918  cmp w9,#0x176
7101e1c91c  b.hi 0x7101e1c95c
7101e1c920  ldr x0,[x8, #0x30]
7101e1c924  adrp x8,0x7105314000
7101e1c928  ldr x8,[x8, #0x510]
7101e1c92c  ldr x8,[x8]
7101e1c930  ldr x8,[x8, #0xb8]
7101e1c934  ldr x8,[x8]
7101e1c938  ldr x8,[x8]
7101e1c93c  mov w9,#0x34
7101e1c940  umaddl x8,w1,w9,x8
7101e1c944  ldrb w9,[x8, #0x8]
7101e1c948  and w9,w9,#0xfffffffb
7101e1c94c  strb w9,[x8, #0x8]
7101e1c950  bl 0x71025226c0
7101e1c954  ldr w21,[x19, #0xb30]
7101e1c958  ldr x22,[x19, #0x570]
7101e1c95c  ldr x0,[x22, #0x160]
7101e1c960  cbz x0,0x7101e1ca0c
7101e1c964  ldr x8,[x0]
7101e1c968  ldr x8,[x8, #0x18]
7101e1c96c  blr x8
7101e1c970  ldr w8,[x22, #0x2c4]
7101e1c974  cmp w8,#0x1
7101e1c978  b.lt 0x7101e1c9f8
7101e1c97c  mov x23,xzr
7101e1c980  mov w24,w21
7101e1c984  ldr w9,[x22, #0x29c]
7101e1c988  sub w9,w24,w9
7101e1c98c  cmp w9,w23
7101e1c990  b.ne 0x7101e1c9ec
7101e1c994  ldr w9,[x22, #0x288]
7101e1c998  cmp w9,w24
7101e1c99c  b.le 0x7101e1c9ec
7101e1c9a0  ldr x8,[x22, #0x168]
7101e1c9a4  ldr x9,[x8, x23, LSL #0x3]
7101e1c9a8  ldr x10,[x9, #0x20]
7101e1c9ac  ldr x10,[x10]
7101e1c9b0  cbz x10,0x7101e1c9c4
7101e1c9b4  ldrb w9,[x10, #0x58]
7101e1c9b8  orr w9,w9,#0x1
7101e1c9bc  strb w9,[x10, #0x58]
7101e1c9c0  ldr x9,[x8, x23, LSL #0x3]
7101e1c9c4  str w21,[x9, #0x30]
7101e1c9c8  ldr x8,[x8, x23, LSL #0x3]
7101e1c9cc  ldr x0,[x22, #0x160]
7101e1c9d0  ldr w1,[x8, #0x30]
7101e1c9d4  add x2,x8,#0x8
7101e1c9d8  add x3,x8,#0x18
7101e1c9dc  ldr x8,[x0]
7101e1c9e0  ldr x8,[x8, #0x10]
7101e1c9e4  blr x8
7101e1c9e8  ldr w8,[x22, #0x2c4]
7101e1c9ec  add x23,x23,#0x1
7101e1c9f0  cmp x23,w8, SXTW 
7101e1c9f4  b.lt 0x7101e1c984
7101e1c9f8  ldr x0,[x22, #0x160]
7101e1c9fc  ldr x8,[x0]
7101e1ca00  ldr x8,[x8, #0x20]
7101e1ca04  blr x8
7101e1ca08  ldr w21,[x19, #0xb30]
7101e1ca0c  mov x0,x20
7101e1ca10  mov w1,w21
7101e1ca14  bl 0x7101e02dc0
7101e1ca18  ldr x8,[x19, #0x7e8]
7101e1ca1c  ands x9,x8,#0xffffff
7101e1ca20  b.eq 0x7101e1ca30
7101e1ca24  ldr w8,[x19, #0x828]
7101e1ca28  cbnz w8,0x7101e1ca44
7101e1ca2c  b 0x7101e1d35c
7101e1ca30  ldr x8,[x19, #0x768]
7101e1ca34  ldr x10,[x19, #0x760]
7101e1ca38  sub x8,x8,x10
7101e1ca3c  lsr x8,x8,#0x3
7101e1ca40  cbz w8,0x7101e1d35c
7101e1ca44  ldrsw x8,[x19, #0xb30]
7101e1ca48  tbnz w8,#0x1f,0x7101e1cb50
7101e1ca4c  adrp x10,0x7105329000
7101e1ca50  ldr x10,[x10, #0xf98]
7101e1ca54  ldr x10,[x10]
7101e1ca58  cbz x9,0x7101e1cb38
7101e1ca5c  ldr w9,[x19, #0x828]
7101e1ca60  cmp w9,w8
7101e1ca64  b.le 0x7101e1cb50
7101e1ca68  ldr x9,[x19, #0x760]
7101e1ca6c  ldr x8,[x9, x8, LSL #0x3]
7101e1ca70  ldrh w20,[x8]
7101e1ca74  ldr x8,[x10, #0x30]
7101e1ca78  ubfx x9,x20,#0x4,#0x1c
7101e1ca7c  cmp w9,#0x177
7101e1ca80  b.cc 0x7101e1cf90
7101e1ca84  mov w9,#0xffffe890
7101e1ca88  add w9,w20,w9
7101e1ca8c  adrp x25,0x710532a000
7101e1ca90  add x25,x25,#0x878
7101e1ca94  cmp w9,#0x63
7101e1ca98  b.hi 0x7101e1cb5c
7101e1ca9c  and x9,x9,#0xffff
7101e1caa0  mov w10,#0x50
7101e1caa4  madd x8,x9,x10,x8
7101e1caa8  mov w10,#0x8cc8
7101e1caac  movk w10,#0x8, LSL #16
7101e1cab0  mov w9,#0x8cc0
7101e1cab4  movk w9,#0x8, LSL #16
7101e1cab8  ldrsh w10,[x8, x10, LSL #0x0]
7101e1cabc  add x8,x8,x9
7101e1cac0  cmn w10,#0x1
7101e1cac4  csel x25,x25,x8,eq
7101e1cac8  b 0x7101e1cb5c
7101e1cacc  ldr w9,[x19, #0xbf4]
7101e1cad0  ldr w11,[x19, #0xdb8]
7101e1cad4  sub w10,w9,#0x1
7101e1cad8  ldr w8,[x19, #0xbf8]
7101e1cadc  cmp w11,#0x2
7101e1cae0  str w9,[x19, #0xbfc]
7101e1cae4  str w8,[x19, #0xc00]
7101e1cae8  str w10,[x19, #0xbf4]
7101e1caec  b.eq 0x7101e1da9c
7101e1caf0  cmp w11,#0x1
7101e1caf4  b.ne 0x7101e1cfa8
7101e1caf8  ldr w8,[x19, #0xc04]
7101e1cafc  sub w8,w8,#0x1
7101e1cb00  str w8,[x19, #0xbf4]
7101e1cb04  b 0x7101e1c848
7101e1cb08  ldr x0,[x19, #0xba8]
7101e1cb0c  adrp x1,0x7104412000
7101e1cb10  add x1,x1,#0xe7f
7101e1cb14  b 0x7101e1bc4c
7101e1cb18  mov w9,#0x50
7101e1cb1c  madd x9,x1,x9,x10
7101e1cb20  mov w10,#0x1940
7101e1cb24  movk w10,#0x1, LSL #16
7101e1cb28  add x9,x9,x10
7101e1cb2c  ldrb w9,[x9, #0x3e]
7101e1cb30  tbnz w9,#0x2,0x7101e1c914
7101e1cb34  b 0x7101e1ca0c
7101e1cb38  ldr x9,[x19, #0x768]
7101e1cb3c  ldr x11,[x19, #0x760]
7101e1cb40  sub x9,x9,x11
7101e1cb44  lsr x9,x9,#0x3
7101e1cb48  cmp w9,w8
7101e1cb4c  b.gt 0x7101e1ca68
7101e1cb50  orr w20,wzr,#0xffff
7101e1cb54  adrp x25,0x710532a000
7101e1cb58  add x25,x25,#0x878
7101e1cb5c  adrp x26,0x710532f000
7101e1cb60  ldr x8,[x26, #0x730]
7101e1cb64  ldr x23,[x8, #0x8]
7101e1cb68  add x21,x19,#0xba0
7101e1cb6c  adrp x1,0x7104292000
7101e1cb70  add x1,x1,#0x204
7101e1cb74  add x8,sp,#0x2e8
7101e1cb78  mov x0,x21
7101e1cb7c  bl 0x7103776910
7101e1cb80  ldr x22,[x23, #0x1d8]
7101e1cb84  ldrh w1,[x25, #0x8]
7101e1cb88  mov x0,x22
7101e1cb8c  bl 0x71032a9470
7101e1cb90  mov x2,x0
7101e1cb94  sub x0,x29,#0xb0
7101e1cb98  mov x1,x22
7101e1cb9c  sub x24,x29,#0xb0
7101e1cba0  bl 0x71032a9540
7101e1cba4  add x1,x24,#0x8
7101e1cba8  adrp x0,0x7104464000
7101e1cbac  add x0,x0,#0x1d4
7101e1cbb0  sub x8,x29,#0xf8
7101e1cbb4  sub x22,x29,#0xf8
7101e1cbb8  bl 0x71003a4ca0
7101e1cbbc  add x1,x22,#0x8
7101e1cbc0  add x0,sp,#0x2e8
7101e1cbc4  bl 0x710377a120
7101e1cbc8  ldr x0,[sp, #0x2f0]
7101e1cbcc  adrp x8,0x710523d000
7101e1cbd0  add x8,x8,#0x9a8
7101e1cbd4  str x8,[sp, #0x2e8]
7101e1cbd8  str xzr,[sp, #0x2f0]
7101e1cbdc  cbz x0,0x7101e1cbe4
7101e1cbe0  bl 0x710392eb40
7101e1cbe4  adrp x1,0x71042f5000
7101e1cbe8  add x1,x1,#0xbc0
7101e1cbec  add x8,sp,#0x2e8
7101e1cbf0  mov x0,x21
7101e1cbf4  bl 0x7103776640
7101e1cbf8  adrp x1,0x71042c5000
7101e1cbfc  add x1,x1,#0x386
7101e1cc00  add x8,sp,#0x2a8
7101e1cc04  mov x0,x21
7101e1cc08  bl 0x7103776640
7101e1cc0c  adrp x1,0x710438b000
7101e1cc10  add x1,x1,#0x306
7101e1cc14  add x8,sp,#0x268
7101e1cc18  mov x0,x21
7101e1cc1c  bl 0x7103776640
7101e1cc20  adrp x1,0x71042e7000
7101e1cc24  add x1,x1,#0x799
7101e1cc28  add x8,sp,#0x228
7101e1cc2c  mov x0,x21
7101e1cc30  bl 0x7103776640
7101e1cc34  ldrsh x8,[x25, #0x8]
7101e1cc38  ldr x9,[x23, #0x1d8]
7101e1cc3c  mov x24,x26
7101e1cc40  cmn x8,#0x1
7101e1cc44  b.eq 0x7101e1cc54
7101e1cc48  add x10,x9,x8, LSL #0x1
7101e1cc4c  ldrh w11,[x10, #0x60]
7101e1cc50  b 0x7101e1cc58
7101e1cc54  mov w11,#0xffffffff
7101e1cc58  ldp x10,x12,[x9, #0x20]
7101e1cc5c  sub x12,x12,x10
7101e1cc60  orr x26,xzr,#-0x3333333333333334
7101e1cc64  movk x26,#0xcccd
7101e1cc68  mov w13,#0x140
7101e1cc6c  madd x13,x11,x13,x10
7101e1cc70  asr x12,x12,#0x6
7101e1cc74  mul x12,x12,x26
7101e1cc78  adrp x28,0x7105182000
7101e1cc7c  add x28,x28,#0xb08
7101e1cc80  cmp x12,x11
7101e1cc84  csel x27,x13,x28,hi
7101e1cc88  cmn w8,#0x1
7101e1cc8c  b.eq 0x7101e1ccdc
7101e1cc90  add x9,x9,x8, LSL #0x1
7101e1cc94  ldrh w9,[x9, #0x60]
7101e1cc98  cmp w9,w12
7101e1cc9c  b.cs 0x7101e1ccdc
7101e1cca0  mov w11,#0x140
7101e1cca4  madd x9,x9,x11,x10
7101e1cca8  ldrb w9,[x9, #0x5e]
7101e1ccac  cmp w9,#0x1
7101e1ccb0  b.ne 0x7101e1ccdc
7101e1ccb4  ldr x22,[sp, #0x230]
7101e1ccb8  ldr x8,[x22, #0x8]
7101e1ccbc  cbz x8,0x7101e1cfe4
7101e1ccc0  ldr x8,[x8, #0x18]
7101e1ccc4  cbz x8,0x7101e1cfe4
7101e1ccc8  ldrb w9,[x8, #0x58]
7101e1cccc  and w9,w9,#0xfe
7101e1ccd0  strb w9,[x8, #0x58]
7101e1ccd4  mov w8,#0x5a
7101e1ccd8  b 0x7101e1d080
7101e1ccdc  mov w9,#0x1
7101e1cce0  stur x9,[x29, #-0xf8]
7101e1cce4  mov x9,#0xff0000000000
7101e1cce8  movk x9,#0x52ff, LSL #48
7101e1ccec  sturb wzr,[x29, #-0xf0]
7101e1ccf0  stur xzr,[x29, #-0xec]
7101e1ccf4  stur wzr,[x29, #-0xd8]
7101e1ccf8  and x1,x8,#0xffff
7101e1ccfc  sub x0,x29,#0xf8
7101e1cd00  stur x9,[x29, #-0xe0]
7101e1cd04  ldrh w2,[x25, #0x10]
7101e1cd08  bl 0x71025ca840
7101e1cd0c  sub x0,x29,#0xf8
7101e1cd10  bl 0x71025cb8d0
7101e1cd14  ldr x22,[sp, #0x230]
7101e1cd18  ldr x8,[x22, #0x8]
7101e1cd1c  mov w23,w0
7101e1cd20  cbz x8,0x7101e1cd38
7101e1cd24  ldr x8,[x8, #0x18]
7101e1cd28  cbz x8,0x7101e1cd38
7101e1cd2c  ldrb w9,[x8, #0x58]
7101e1cd30  orr w9,w9,#0x1
7101e1cd34  strb w9,[x8, #0x58]
7101e1cd38  adrp x1,0x7104452000
7101e1cd3c  add x1,x1,#0x707
7101e1cd40  sub x8,x29,#0xb0
7101e1cd44  add x0,sp,#0x228
7101e1cd48  bl 0x7103776910
7101e1cd4c  adrp x1,0x71043ff000
7101e1cd50  add x1,x1,#0x11e
7101e1cd54  sub x0,x29,#0xb0
7101e1cd58  mov w2,#0x1
7101e1cd5c  mov w3,w23
7101e1cd60  bl 0x710377a280
7101e1cd64  ldur x0,[x29, #-0xa8]
7101e1cd68  adrp x8,0x710523d000
7101e1cd6c  add x8,x8,#0x9a8
7101e1cd70  stp x8,xzr,[x29, #-0xb0]
7101e1cd74  cbz x0,0x7101e1cd7c
7101e1cd78  bl 0x710392eb40
7101e1cd7c  adrp x1,0x71043ee000
7101e1cd80  add x1,x1,#0x91f
7101e1cd84  sub x8,x29,#0xb0
7101e1cd88  add x0,sp,#0x228
7101e1cd8c  bl 0x7103776910
7101e1cd90  adrp x1,0x71043ff000
7101e1cd94  add x1,x1,#0x11e
7101e1cd98  sub x0,x29,#0xb0
7101e1cd9c  mov w2,#0x1
7101e1cda0  mov w3,w23
7101e1cda4  bl 0x710377a280
7101e1cda8  ldur x0,[x29, #-0xa8]
7101e1cdac  adrp x8,0x710523d000
7101e1cdb0  add x8,x8,#0x9a8
7101e1cdb4  stp x8,xzr,[x29, #-0xb0]
7101e1cdb8  cbz x0,0x7101e1cdc0
7101e1cdbc  bl 0x710392eb40
7101e1cdc0  ldrsh w8,[x25, #0x8]
7101e1cdc4  mov w1,wzr
7101e1cdc8  cmn w8,#0x1
7101e1cdcc  b.eq 0x7101e1d05c
7101e1cdd0  cmp w8,#0x7cf
7101e1cdd4  b.gt 0x7101e1d05c
7101e1cdd8  ldr x9,[x24, #0x730]
7101e1cddc  ldr x9,[x9, #0x8]
7101e1cde0  ldr x10,[x9, #0x1d8]
7101e1cde4  sxtw x8,w8
7101e1cde8  add x8,x10,x8, LSL #0x1
7101e1cdec  ldrh w8,[x8, #0x60]
7101e1cdf0  ldp x9,x10,[x10, #0x20]
7101e1cdf4  sub x10,x10,x9
7101e1cdf8  asr x10,x10,#0x6
7101e1cdfc  mul x10,x10,x26
7101e1ce00  cmp w10,w8
7101e1ce04  b.ls 0x7101e1d058
7101e1ce08  mov w11,#0x140
7101e1ce0c  madd x9,x8,x11,x9
7101e1ce10  cmp x10,x8
7101e1ce14  csel x8,x9,x28,hi
7101e1ce18  ldrb w9,[x8, #0x5e]
7101e1ce1c  cbz w9,0x7101e1d030
7101e1ce20  mov w1,#0x4
7101e1ce24  b 0x7101e1d05c
7101e1ce28  ldr w10,[x19, #0xc04]
7101e1ce2c  cmp w9,w10
7101e1ce30  b.ge 0x7101e1cfcc
7101e1ce34  add x9,x19,w9, SXTW  #0x2
7101e1ce38  b 0x7101e1cfb4
7101e1ce3c  ldr x9,[x19, #0x160]
7101e1ce40  ldr x9,[x9]
7101e1ce44  ldr x9,[x9]
7101e1ce48  ldr x9,[x9, #0x600]
7101e1ce4c  ldrb w10,[x9, #0x4aa]
7101e1ce50  cbz w10,0x7101e1ce74
7101e1ce54  ldrb w11,[x9, #0x198]
7101e1ce58  tbnz w11,#0x1,0x7101e1d588
7101e1ce5c  ldrb w11,[x9, #0x19c]
7101e1ce60  tbnz w11,#0x1,0x7101e1d6bc
7101e1ce64  ldrb w11,[x9, #0x1a0]
7101e1ce68  tbnz w11,#0x1,0x7101e1da3c
7101e1ce6c  ldrb w11,[x9, #0x1a4]
7101e1ce70  tbnz w11,#0x1,0x7101e1da3c
7101e1ce74  ldr x8,[x21]
7101e1ce78  ldr w8,[x8, #0x25c]
7101e1ce7c  cmp w8,#0x64
7101e1ce80  b.ne 0x7101e1d554
7101e1ce84  strb wzr,[x19, #0xf05]
7101e1ce88  b 0x7101e1d578
7101e1ce8c  ldr x21,[x19, #0x4f0]
7101e1ce90  mov x0,x21
7101e1ce94  bl 0x71032cc6c0
7101e1ce98  ldr x9,[x21]
7101e1ce9c  cbz x9,0x7101e1cec4
7101e1cea0  ldp x8,x11,[x21, #0x8]
7101e1cea4  and x10,x11,#0x1
7101e1cea8  orr x12,x10,x8
7101e1ceac  cbz x12,0x7101e1cec4
7101e1ceb0  add x0,x9,x11, ASR #0x1
7101e1ceb4  cbz x10,0x7101e1cec0
7101e1ceb8  ldr x9,[x0]
7101e1cebc  ldr x8,[x9, x8, LSL #0x0]
7101e1cec0  blr x8
7101e1cec4  ldr w8,[x21, #0xbc]
7101e1cec8  add w8,w8,#0x1
7101e1cecc  str w8,[x21, #0xbc]
7101e1ced0  ldr x8,[x19, #0x4f0]
7101e1ced4  ldr w9,[x8, #0xb8]
7101e1ced8  cbz w9,0x7101e1d468
7101e1cedc  ldr w21,[x8, #0x130]
7101e1cee0  cmn w21,#0x2
7101e1cee4  b.eq 0x7101e1bfec
7101e1cee8  add x0,x19,#0x4d0
7101e1ceec  bl 0x71032cc9f0
7101e1cef0  ldr w8,[x19, #0xbdc]
7101e1cef4  cmp w8,#0x1
7101e1cef8  mov w9,#0xb84
7101e1cefc  mov w10,#0xb7c
7101e1cf00  csel x9,x10,x9,eq
7101e1cf04  b.ne 0x7101e1d778
7101e1cf08  ldr x10,[x19, #0xb68]
7101e1cf0c  ldr x11,[x19, #0xb60]
7101e1cf10  sub x10,x10,x11
7101e1cf14  tbz w21,#0x1f,0x7101e1d78c
7101e1cf18  b 0x7101e1bfec
7101e1cf1c  ldr x9,[x20]
7101e1cf20  ldr w9,[x9, #0x2b8]
7101e1cf24  cmp w9,#0x2
7101e1cf28  b.eq 0x7101e1cf34
7101e1cf2c  cmp w9,#0x1
7101e1cf30  b.ne 0x7101e1d524
7101e1cf34  orr w9,wzr,#0x3
7101e1cf38  cmp w8,#0x1
7101e1cf3c  str w9,[x19, #0xbd8]
7101e1cf40  b.ne 0x7101e1d4cc
7101e1cf44  ldrb w8,[x19, #0xbec]
7101e1cf48  cbnz w8,0x7101e1bfec
7101e1cf4c  b 0x7101e1d4dc
7101e1cf50  ldr w8,[x19, #0xdb8]
7101e1cf54  cbnz w8,0x7101e1d9f0
7101e1cf58  ldrsw x8,[x19, #0xbf4]
7101e1cf5c  ldr w9,[x19, #0xbf8]
7101e1cf60  str w8,[x19, #0xbfc]
7101e1cf64  add w10,w9,#0x1
7101e1cf68  add x8,x19,x8, LSL #0x2
7101e1cf6c  str w9,[x19, #0xc00]
7101e1cf70  str w10,[x19, #0xbf8]
7101e1cf74  ldr w8,[x8, #0xc08]
7101e1cf78  cmp w10,w8
7101e1cf7c  csinc w8,wzr,w9,ge
7101e1cf80  cmp w9,w8
7101e1cf84  str w8,[x19, #0xbf8]
7101e1cf88  b.eq 0x7101e1d9f0
7101e1cf8c  b 0x7101e1c84c
7101e1cf90  mov w9,#0x50
7101e1cf94  madd x8,x20,x9,x8
7101e1cf98  mov w9,#0x1940
7101e1cf9c  movk w9,#0x1, LSL #16
7101e1cfa0  add x25,x8,x9
7101e1cfa4  b 0x7101e1cb5c
7101e1cfa8  cmp w9,#0x0
7101e1cfac  b.le 0x7101e1d640
7101e1cfb0  add x9,x19,w10, SXTW  #0x2
7101e1cfb4  ldr w9,[x9, #0xc08]
7101e1cfb8  cmp w8,w9
7101e1cfbc  b.lt 0x7101e1c848
7101e1cfc0  sub w8,w9,#0x1
7101e1cfc4  str w8,[x19, #0xbf8]
7101e1cfc8  b 0x7101e1c848
7101e1cfcc  mov w8,#0x1
7101e1cfd0  mov w1,#0x4
7101e1cfd4  mov x0,x19
7101e1cfd8  str w8,[x19, #0xdb8]
7101e1cfdc  bl 0x7101e21d30
7101e1cfe0  b 0x7101e1c84c
7101e1cfe4  mov w8,#0x5a
7101e1cfe8  b 0x7101e1d080
7101e1cfec  ldr w8,[x19, #0xdb8]
7101e1cff0  cbnz w8,0x7101e1d9f0
7101e1cff4  ldr w8,[x19, #0xbf8]
7101e1cff8  ldrsw x9,[x19, #0xbf4]
7101e1cffc  sub w10,w8,#0x1
7101e1d000  cmp w8,#0x0
7101e1d004  str w9,[x19, #0xbfc]
7101e1d008  str w8,[x19, #0xc00]
7101e1d00c  str w10,[x19, #0xbf8]
7101e1d010  b.gt 0x7101e1c84c
7101e1d014  add x9,x19,x9, LSL #0x2
7101e1d018  ldr w9,[x9, #0xc08]
7101e1d01c  sub w9,w9,#0x1
7101e1d020  cmp w8,w9
7101e1d024  str w9,[x19, #0xbf8]
7101e1d028  b.eq 0x7101e1d9f0
7101e1d02c  b 0x7101e1c84c
7101e1d030  ldrb w8,[x8, #0x6c]
7101e1d034  sub w8,w8,#0x1
7101e1d038  cmp w8,#0x2
7101e1d03c  b.hi 0x7101e1d058
7101e1d040  and x8,x8,#0xff
7101e1d044  lsl x8,x8,#0x3
7101e1d048  mov w9,#0x301
7101e1d04c  movk w9,#0x2, LSL #16
7101e1d050  lsr w1,w9,w8
7101e1d054  b 0x7101e1d05c
7101e1d058  mov w1,wzr
7101e1d05c  sub x0,x29,#0xb0
7101e1d060  mov w2,wzr
7101e1d064  sub x23,x29,#0xb0
7101e1d068  bl 0x710339dde0
7101e1d06c  fmov s0,0x3f800000
7101e1d070  add x1,x23,#0x8
7101e1d074  mov x0,x22
7101e1d078  bl 0x7103778300
7101e1d07c  mov w8,wzr
7101e1d080  str w8,[x19, #0xf14]
7101e1d084  ldrb w8,[x27, #0x68]
7101e1d088  cmp w8,#0x3
7101e1d08c  b.hi 0x7101e1d208
7101e1d090  adrp x9,0x71044fb000
7101e1d094  add x9,x9,#0xad8
7101e1d098  ldrsw x8,[x9, x8, LSL #0x2]
7101e1d09c  add x8,x8,x9
7101e1d0a0  br x8
7101e1d0a4  mov x11,#0x6c63
7101e1d0a8  movk x11,#0x7361, LSL #16
7101e1d0ac  mov x9,#0xa00000000
7101e1d0b0  sub x10,x29,#0xb0
7101e1d0b4  movk x11,#0x5f73, LSL #32
7101e1d0b8  movk x11,#0x6f6e, LSL #48
7101e1d0bc  stp x9,x11,[x29, #-0xb0]
7101e1d0c0  add x1,x10,#0x8
7101e1d0c4  add x9,x10,#0x9
7101e1d0c8  mov w10,#0x656e
7101e1d0cc  sturh w10,[x29, #-0xa0]
7101e1d0d0  mov w8,#0x9dc5
7101e1d0d4  movk w8,#0x811c, LSL #16
7101e1d0d8  sturb wzr,[x29, #-0x9e]
7101e1d0dc  mov w11,#0x63
7101e1d0e0  mov w10,#0x89
7101e1d0e4  mul w8,w8,w10
7101e1d0e8  and w11,w11,#0xff
7101e1d0ec  eor w8,w8,w11
7101e1d0f0  ldrb w11,[x9], #0x1
7101e1d0f4  cbnz w11,0x7101e1d0e4
7101e1d0f8  b 0x7101e1d25c
7101e1d0fc  mov x9,#0x900000000
7101e1d100  stur x9,[x29, #-0xb0]
7101e1d104  mov x9,#0x6c63
7101e1d108  movk x9,#0x7361, LSL #16
7101e1d10c  sub x10,x29,#0xb0
7101e1d110  add x1,x10,#0x8
7101e1d114  movk x9,#0x5f73, LSL #32
7101e1d118  movk x9,#0x6361, LSL #48
7101e1d11c  stur x9,[x29, #-0xa8]
7101e1d120  add x9,x10,#0x9
7101e1d124  mov w10,#0x65
7101e1d128  sturh w10,[x29, #-0xa0]
7101e1d12c  mov w8,#0x9dc5
7101e1d130  movk w8,#0x811c, LSL #16
7101e1d134  mov w11,#0x63
7101e1d138  mov w10,#0x89
7101e1d13c  mul w8,w8,w10
7101e1d140  and w11,w11,#0xff
7101e1d144  eor w8,w8,w11
7101e1d148  ldrb w11,[x9], #0x1
7101e1d14c  cbnz w11,0x7101e1d13c
7101e1d150  b 0x7101e1d25c
7101e1d154  mov x11,#0x6c63
7101e1d158  movk x11,#0x7361, LSL #16
7101e1d15c  orr x9,xzr,#0xc00000000
7101e1d160  sub x10,x29,#0xb0
7101e1d164  movk x11,#0x5f73, LSL #32
7101e1d168  movk x11,#0x656c, LSL #48
7101e1d16c  stp x9,x11,[x29, #-0xb0]
7101e1d170  add x1,x10,#0x8
7101e1d174  add x9,x10,#0x9
7101e1d178  mov w10,#0x6567
7101e1d17c  movk w10,#0x646e, LSL #16
7101e1d180  mov w8,#0x9dc5
7101e1d184  movk w8,#0x811c, LSL #16
7101e1d188  stur w10,[x29, #-0xa0]
7101e1d18c  mov w11,#0x63
7101e1d190  sturb wzr,[x29, #-0x9c]
7101e1d194  mov w10,#0x89
7101e1d198  mul w8,w8,w10
7101e1d19c  and w11,w11,#0xff
7101e1d1a0  eor w8,w8,w11
7101e1d1a4  ldrb w11,[x9], #0x1
7101e1d1a8  cbnz w11,0x7101e1d198
7101e1d1ac  b 0x7101e1d25c
7101e1d1b0  mov x11,#0x6c63
7101e1d1b4  movk x11,#0x7361, LSL #16
7101e1d1b8  mov x9,#0xa00000000
7101e1d1bc  sub x10,x29,#0xb0
7101e1d1c0  movk x11,#0x5f73, LSL #32
7101e1d1c4  movk x11,#0x6f68, LSL #48
7101e1d1c8  stp x9,x11,[x29, #-0xb0]
7101e1d1cc  add x1,x10,#0x8
7101e1d1d0  add x9,x10,#0x9
7101e1d1d4  mov w10,#0x6570
7101e1d1d8  sturh w10,[x29, #-0xa0]
7101e1d1dc  mov w8,#0x9dc5
7101e1d1e0  movk w8,#0x811c, LSL #16
7101e1d1e4  sturb wzr,[x29, #-0x9e]
7101e1d1e8  mov w11,#0x63
7101e1d1ec  mov w10,#0x89
7101e1d1f0  mul w8,w8,w10
7101e1d1f4  and w11,w11,#0xff
7101e1d1f8  eor w8,w8,w11
7101e1d1fc  ldrb w11,[x9], #0x1
7101e1d200  cbnz w11,0x7101e1d1f0
7101e1d204  b 0x7101e1d25c
7101e1d208  mov x11,#0x6c63
7101e1d20c  movk x11,#0x7361, LSL #16
7101e1d210  mov x9,#0xa00000000
7101e1d214  sub x10,x29,#0xb0
7101e1d218  movk x11,#0x5f73, LSL #32
7101e1d21c  movk x11,#0x6f6e, LSL #48
7101e1d220  stp x9,x11,[x29, #-0xb0]
7101e1d224  add x1,x10,#0x8
7101e1d228  add x9,x10,#0x9
7101e1d22c  mov w10,#0x656e
7101e1d230  sturh w10,[x29, #-0xa0]
7101e1d234  mov w8,#0x9dc5
7101e1d238  movk w8,#0x811c, LSL #16
7101e1d23c  sturb wzr,[x29, #-0x9e]
7101e1d240  mov w11,#0x63
7101e1d244  mov w10,#0x89
7101e1d248  mul w8,w8,w10
7101e1d24c  and w11,w11,#0xff
7101e1d250  eor w8,w8,w11
7101e1d254  ldrb w11,[x9], #0x1
7101e1d258  cbnz w11,0x7101e1d248
7101e1d25c  ldr x23,[sp, #0x270]
7101e1d260  fmov s0,0x3f800000
7101e1d264  mov x0,x23
7101e1d268  stur w8,[x29, #-0xb0]
7101e1d26c  bl 0x7103778300
7101e1d270  ldr x0,[x19, #0x148]
7101e1d274  ldrh w3,[x25, #0x8]
7101e1d278  add x1,sp,#0x2e8
7101e1d27c  add x2,sp,#0x2a8
7101e1d280  mov w4,w20
7101e1d284  bl 0x71025c7b60
7101e1d288  ldr x0,[x19, #0x148]
7101e1d28c  ldrh w2,[x25, #0x8]
7101e1d290  mov x1,x21
7101e1d294  mov w3,w20
7101e1d298  bl 0x71025c9570
7101e1d29c  adrp x21,0x710523d000
7101e1d2a0  add x21,x21,#0x988
7101e1d2a4  str x21,[sp, #0x228]
7101e1d2a8  str xzr,[sp, #0x230]
7101e1d2ac  cbz x22,0x7101e1d2d0
7101e1d2b0  ldr x0,[x22, #0x18]
7101e1d2b4  adrp x8,0x710523d000
7101e1d2b8  add x8,x8,#0x9a8
7101e1d2bc  stp x8,xzr,[x22, #0x10]
7101e1d2c0  cbz x0,0x7101e1d2c8
7101e1d2c4  bl 0x710392eb40
7101e1d2c8  mov x0,x22
7101e1d2cc  bl 0x710392eb40
7101e1d2d0  str x21,[sp, #0x268]
7101e1d2d4  str xzr,[sp, #0x270]
7101e1d2d8  cbz x23,0x7101e1d2fc
7101e1d2dc  ldr x0,[x23, #0x18]
7101e1d2e0  adrp x8,0x710523d000
7101e1d2e4  add x8,x8,#0x9a8
7101e1d2e8  stp x8,xzr,[x23, #0x10]
7101e1d2ec  cbz x0,0x7101e1d2f4
7101e1d2f0  bl 0x710392eb40
7101e1d2f4  mov x0,x23
7101e1d2f8  bl 0x710392eb40
7101e1d2fc  ldr x20,[sp, #0x2b0]
7101e1d300  str x21,[sp, #0x2a8]
7101e1d304  str xzr,[sp, #0x2b0]
7101e1d308  cbz x20,0x7101e1d32c
7101e1d30c  ldr x0,[x20, #0x18]
7101e1d310  adrp x8,0x710523d000
7101e1d314  add x8,x8,#0x9a8
7101e1d318  stp x8,xzr,[x20, #0x10]
7101e1d31c  cbz x0,0x7101e1d324
7101e1d320  bl 0x710392eb40
7101e1d324  mov x0,x20
7101e1d328  bl 0x710392eb40
7101e1d32c  ldr x20,[sp, #0x2f0]
7101e1d330  str x21,[sp, #0x2e8]
7101e1d334  str xzr,[sp, #0x2f0]
7101e1d338  cbz x20,0x7101e1d35c
7101e1d33c  ldr x0,[x20, #0x18]
7101e1d340  adrp x8,0x710523d000
7101e1d344  add x8,x8,#0x9a8
7101e1d348  stp x8,xzr,[x20, #0x10]
7101e1d34c  cbz x0,0x7101e1d354
7101e1d350  bl 0x710392eb40
7101e1d354  mov x0,x20
7101e1d358  bl 0x710392eb40
7101e1d35c  ldr w8,[x19, #0xf14]
7101e1d360  subs w8,w8,#0x1
7101e1d364  b.lt 0x7101e1d97c
7101e1d368  str w8,[x19, #0xf14]
7101e1d36c  b.ne 0x7101e1d97c
7101e1d370  add x0,x19,#0xba0
7101e1d374  adrp x1,0x71042c5000
7101e1d378  add x1,x1,#0x386
7101e1d37c  sub x8,x29,#0xb0
7101e1d380  bl 0x7103776640
7101e1d384  adrp x1,0x7104411000
7101e1d388  add x1,x1,#0x1db
7101e1d38c  sub x8,x29,#0xf8
7101e1d390  sub x0,x29,#0xb0
7101e1d394  bl 0x7103776640
7101e1d398  ldur x20,[x29, #-0xf0]
7101e1d39c  ldr x0,[x20, #0x8]
7101e1d3a0  bl 0x7103778950
7101e1d3a4  ldr x8,[x20, #0x8]
7101e1d3a8  cbz x8,0x7101e1d8c0
7101e1d3ac  ldr x20,[x8, #0x78]
7101e1d3b0  adrp x8,0x710593b000
7101e1d3b4  add x8,x8,#0xa40
7101e1d3b8  ldarb w8,[x8]
7101e1d3bc  tbz w8,#0x0,0x7101e1eed0
7101e1d3c0  cbz x20,0x7101e1d8c0
7101e1d3c4  ldr x8,[x20]
7101e1d3c8  ldr x8,[x8]
7101e1d3cc  mov x0,x20
7101e1d3d0  blr x8
7101e1d3d4  cbz x0,0x7101e1d8c0
7101e1d3d8  adrp x8,0x710593b000
7101e1d3dc  add x8,x8,#0xa58
7101e1d3e0  cmp x0,x8
7101e1d3e4  b.eq 0x7101e1d3f4
7101e1d3e8  ldr x0,[x0]
7101e1d3ec  cbnz x0,0x7101e1d3e0
7101e1d3f0  b 0x7101e1d8c0
7101e1d3f4  ldr w9,[x20, #0x54]
7101e1d3f8  ldr x8,[x20, #0x18]
7101e1d3fc  str w9,[x20, #0x58]
7101e1d400  cbz x8,0x7101e1d414
7101e1d404  str w9,[x8, #0x30]
7101e1d408  ldrb w9,[x8, #0x58]
7101e1d40c  orr w9,w9,#0x10
7101e1d410  strb w9,[x8, #0x58]
7101e1d414  ldr x8,[x20, #0x20]
7101e1d418  cbz x8,0x7101e1d430
7101e1d41c  ldr w9,[x20, #0x58]
7101e1d420  str w9,[x8, #0x30]
7101e1d424  ldrb w9,[x8, #0x58]
7101e1d428  orr w9,w9,#0x10
7101e1d42c  strb w9,[x8, #0x58]
7101e1d430  ldr x0,[x20, #0x28]
7101e1d434  cbz x0,0x7101e1d448
7101e1d438  ldr x8,[x0]
7101e1d43c  ldr x8,[x8, #0x180]
7101e1d440  fmov s0,wzr
7101e1d444  blr x8
7101e1d448  ldr x0,[x20, #0x30]
7101e1d44c  cbz x0,0x7101e1d8b8
7101e1d450  ldrb w8,[x20, #0x63]
7101e1d454  cbz w8,0x7101e1d8a8
7101e1d458  ldr x8,[x0]
7101e1d45c  ldr x8,[x8, #0x190]
7101e1d460  blr x8
7101e1d464  b 0x7101e1d8b8
7101e1d468  ldr x8,[x19, #0x158]
7101e1d46c  ldr x0,[x8]
7101e1d470  bl 0x7103775fa0
7101e1d474  adrp x9,0x710593b000
7101e1d478  ldr x9,[x9, #0x988]
7101e1d47c  ldr w8,[x19, #0x4e4]
7101e1d480  mov w10,#0x1
7101e1d484  lsl w8,w10,w8
7101e1d488  ldr x9,[x9, #0x8]
7101e1d48c  ldr w10,[x9]
7101e1d490  bic w8,w10,w8
7101e1d494  str w8,[x9]
7101e1d498  ldrb w9,[x19, #0xf05]
7101e1d49c  ldr w8,[x19, #0xbd8]
7101e1d4a0  cbz w9,0x7101e1da14
7101e1d4a4  cmp w8,#0x1
7101e1d4a8  b.eq 0x7101e1bfec
7101e1d4ac  mov w8,#0x1
7101e1d4b0  str w8,[x19, #0xbd8]
7101e1d4b4  ldr w8,[x19, #0xbdc]
7101e1d4b8  cmp w8,#0x1
7101e1d4bc  b.ne 0x7101e1dc90
7101e1d4c0  ldrb w9,[x19, #0xbec]
7101e1d4c4  cbnz w9,0x7101e1bfec
7101e1d4c8  b 0x7101e1dca0
7101e1d4cc  cmp w8,#0x2
7101e1d4d0  b.ne 0x7101e1d4dc
7101e1d4d4  ldrb w8,[x19, #0xbed]
7101e1d4d8  cbnz w8,0x7101e1bfec
7101e1d4dc  ldr x0,[x21]
7101e1d4e0  ldr x8,[x0]
7101e1d4e4  ldr x8,[x8, #0x70]
7101e1d4e8  mov w1,#0x1
7101e1d4ec  blr x8
7101e1d4f0  ldr x0,[x21]
7101e1d4f4  ldr x8,[x0]
7101e1d4f8  ldr x8,[x8, #0x60]
7101e1d4fc  mov w1,#0x1
7101e1d500  blr x8
7101e1d504  ldr x0,[x20]
7101e1d508  ldr x8,[x0]
7101e1d50c  ldr x8,[x8, #0x70]
7101e1d510  mov w1,wzr
7101e1d514  blr x8
7101e1d518  mov w1,#0x64
7101e1d51c  mov x0,x21
7101e1d520  b 0x7101e1c8d0
7101e1d524  ldr x9,[x19, #0x160]
7101e1d528  ldr x9,[x9]
7101e1d52c  ldr x9,[x9]
7101e1d530  ldr x9,[x9, #0x600]
7101e1d534  ldrb w10,[x9, #0x4aa]
7101e1d538  cbz w10,0x7101e1d544
7101e1d53c  ldrb w11,[x9, #0x1c8]
7101e1d540  tbnz w11,#0x1,0x7101e1daa8
7101e1d544  ldr x8,[x21]
7101e1d548  ldr w8,[x8, #0x25c]
7101e1d54c  cmp w8,#0x64
7101e1d550  b.eq 0x7101e1d570
7101e1d554  cbz w10,0x7101e1bfec
7101e1d558  ldrb w8,[x9, #0x1c0]
7101e1d55c  tbz w8,#0x1,0x7101e1bfec
7101e1d560  mov w1,#0x64
7101e1d564  mov x0,x21
7101e1d568  mov w2,wzr
7101e1d56c  bl 0x7103771be0
7101e1d570  mov w8,#0x1
7101e1d574  strb w8,[x19, #0xf05]
7101e1d578  mov w1,#0x4
7101e1d57c  mov x0,x19
7101e1d580  bl 0x7101e2b610
7101e1d584  b 0x7101e1bfec
7101e1d588  ldr x9,[x20]
7101e1d58c  ldr w10,[x9, #0x2a4]
7101e1d590  cmn w10,#0x1
7101e1d594  b.eq 0x7101e1da58
7101e1d598  ldr w11,[x9, #0x28c]
7101e1d59c  sdiv w12,w10,w11
7101e1d5a0  msub w26,w12,w11,w10
7101e1d5a4  cbnz w12,0x7101e1de78
7101e1d5a8  ldrb w9,[x9, #0x315]
7101e1d5ac  cbz w9,0x7101e1de78
7101e1d5b0  adrp x8,0x710532f000
7101e1d5b4  ldr x8,[x8, #0x8d0]
7101e1d5b8  ldr x0,[x8, #0x8]
7101e1d5bc  ldrb w8,[x0, #0x191]
7101e1d5c0  cbnz w8,0x7101e1de38
7101e1d5c4  mov x21,#0x7cd7
7101e1d5c8  movk x21,#0x36ca, LSL #16
7101e1d5cc  movk x21,#0x13, LSL #32
7101e1d5d0  mov w2,#0x4
7101e1d5d4  mov x1,x21
7101e1d5d8  bl 0x7103313f20
7101e1d5dc  tbz w0,#0x0,0x7101e1de38
7101e1d5e0  add x0,sp,#0x2a8
7101e1d5e4  mov x1,x21
7101e1d5e8  bl 0x71024076d0
7101e1d5ec  ldr x8,[sp, #0x2b8]
7101e1d5f0  adrp x9,0x7104f73000
7101e1d5f4  add x9,x9,#0xd50
7101e1d5f8  str x9,[sp, #0x2b0]
7101e1d5fc  cbz x8,0x7101e1de6c
7101e1d600  adrp x8,0x7106dd5000
7101e1d604  ldrb w8,[x8, #0x3a8]
7101e1d608  cmp w8,#0x1
7101e1d60c  b.ne 0x7101e1de6c
7101e1d610  adrp x9,0x7106dd5000
7101e1d614  ldr w8,[sp, #0x2c0]
7101e1d618  ldr w9,[x9, #0x3ac]
7101e1d61c  cmp w8,w9
7101e1d620  b.ne 0x7101e1de6c
7101e1d624  ldr x8,[sp, #0x2b8]
7101e1d628  ldr wzr,[x8, #0x38]!
7101e1d62c  ldaxr w9,[x8]
7101e1d630  sub w9,w9,#0x1
7101e1d634  stlxr w10,w9,[x8]
7101e1d638  cbnz w10,0x7101e1d62c
7101e1d63c  b 0x7101e1de6c
7101e1d640  add x0,x19,#0xf18
7101e1d644  bl 0x7101e21c50
7101e1d648  tbz w0,#0x0,0x7101e1da90
7101e1d64c  mov w20,#0x2
7101e1d650  orr w1,wzr,#0x6
7101e1d654  mov x0,x19
7101e1d658  str w20,[x19, #0xdb8]
7101e1d65c  bl 0x7101e21d30
7101e1d660  ldr x8,[x21, #0x840]
7101e1d664  ldr x8,[x8, #0x8]
7101e1d668  ldr x8,[x8, #0xb8]
7101e1d66c  ldr x23,[x8, #0x80]
7101e1d670  mov w8,#0x2268
7101e1d674  ldr x0,[x23, #0x2268]
7101e1d678  add x21,x23,x8
7101e1d67c  ldr x8,[x0]
7101e1d680  ldr x8,[x8, #0x70]
7101e1d684  mov w1,#0x1
7101e1d688  mov w22,#0x1
7101e1d68c  blr x8
7101e1d690  ldr w8,[x23, #0x11b0]
7101e1d694  cmp w8,#0x5
7101e1d698  b.gt 0x7101e1d6a8
7101e1d69c  sub w8,w8,#0x1
7101e1d6a0  cmp w8,#0x5
7101e1d6a4  cneg w20,w22,cs
7101e1d6a8  mov x0,x21
7101e1d6ac  mov w1,w20
7101e1d6b0  mov w2,wzr
7101e1d6b4  bl 0x7103771a80
7101e1d6b8  b 0x7101e1c84c
7101e1d6bc  ldr x9,[x20]
7101e1d6c0  ldr w27,[x9, #0x2a4]
7101e1d6c4  mov w26,#0x6500
7101e1d6c8  movk w26,#0x87, LSL #16
7101e1d6cc  cmn w27,#0x1
7101e1d6d0  b.eq 0x7101e1d6e0
7101e1d6d4  ldr w10,[x9, #0x28c]
7101e1d6d8  sdiv w11,w27,w10
7101e1d6dc  cbz w11,0x7101e1e080
7101e1d6e0  ldrb w9,[x9, #0x315]
7101e1d6e4  cbz w9,0x7101e1dbfc
7101e1d6e8  adrp x8,0x710532f000
7101e1d6ec  ldr x8,[x8, #0x8d0]
7101e1d6f0  ldr x0,[x8, #0x8]
7101e1d6f4  ldrb w8,[x0, #0x191]
7101e1d6f8  cbnz w8,0x7101e1dbc0
7101e1d6fc  mov x21,#0x7cd7
7101e1d700  movk x21,#0x36ca, LSL #16
7101e1d704  movk x21,#0x13, LSL #32
7101e1d708  mov w2,#0x4
7101e1d70c  mov x1,x21
7101e1d710  bl 0x7103313f20
7101e1d714  tbz w0,#0x0,0x7101e1dbc0
7101e1d718  add x0,sp,#0x228
7101e1d71c  mov x1,x21
7101e1d720  bl 0x71024076d0
7101e1d724  ldr x8,[sp, #0x238]
7101e1d728  adrp x9,0x7104f73000
7101e1d72c  add x9,x9,#0xd50
7101e1d730  str x9,[sp, #0x230]
7101e1d734  cbz x8,0x7101e1dbf0
7101e1d738  adrp x8,0x7106dd5000
7101e1d73c  ldrb w8,[x8, #0x3a8]
7101e1d740  cmp w8,#0x1
7101e1d744  b.ne 0x7101e1dbf0
7101e1d748  adrp x9,0x7106dd5000
7101e1d74c  ldr w8,[sp, #0x240]
7101e1d750  ldr w9,[x9, #0x3ac]
7101e1d754  cmp w8,w9
7101e1d758  b.ne 0x7101e1dbf0
7101e1d75c  ldr x8,[sp, #0x238]
7101e1d760  ldr wzr,[x8, #0x38]!
7101e1d764  ldaxr w9,[x8]
7101e1d768  sub w9,w9,#0x1
7101e1d76c  stlxr w10,w9,[x8]
7101e1d770  cbnz w10,0x7101e1d764
7101e1d774  b 0x7101e1dbf0
7101e1d778  ldr x10,[x19, #0xb48]
7101e1d77c  ldr x11,[x19, #0xb40]
7101e1d780  sub x10,x10,x11
7101e1d784  asr x10,x10,#0x2
7101e1d788  tbnz w21,#0x1f,0x7101e1bfec
7101e1d78c  cmp w21,w10
7101e1d790  b.ge 0x7101e1bfec
7101e1d794  cmp w8,#0x1
7101e1d798  str w21,[x19, x9, LSL #0x0]
7101e1d79c  b.ne 0x7101e1db4c
7101e1d7a0  ldr x9,[x19, #0xb68]
7101e1d7a4  ldr x8,[x19, #0xb60]
7101e1d7a8  sub x9,x9,x8
7101e1d7ac  cmp x9,x21
7101e1d7b0  b.ls 0x7101e1ef58
7101e1d7b4  ldrb w21,[x8, x21, LSL ]
7101e1d7b8  ldrb w8,[x19, #0xf05]
7101e1d7bc  orr w22,wzr,#0xffff
7101e1d7c0  cbz w8,0x7101e1d7f4
7101e1d7c4  cmp w21,#0x3
7101e1d7c8  b.cc 0x7101e1d7f4
7101e1d7cc  ldr x8,[x20]
7101e1d7d0  ldr x10,[x19, #0x550]
7101e1d7d4  ldr x9,[x19, #0x548]
7101e1d7d8  sub x10,x10,x9
7101e1d7dc  ldrsw x8,[x8, #0x2a4]
7101e1d7e0  asr x10,x10,#0x2
7101e1d7e4  cmp x10,x8
7101e1d7e8  b.ls 0x7101e1ef68
7101e1d7ec  lsl x8,x8,#0x2
7101e1d7f0  ldrh w22,[x9, x8, LSL #0x0]
7101e1d7f4  add x0,x19,#0xba0
7101e1d7f8  adrp x1,0x7104292000
7101e1d7fc  add x1,x1,#0x218
7101e1d800  add x8,sp,#0x198
7101e1d804  bl 0x7103776640
7101e1d808  adrp x1,0x7104431000
7101e1d80c  add x1,x1,#0x6d5
7101e1d810  add x8,sp,#0x188
7101e1d814  add x0,sp,#0x198
7101e1d818  bl 0x7103776910
7101e1d81c  cmp w21,#0x4
7101e1d820  b.hi 0x7101e1e848
7101e1d824  adrp x8,0x71044fb000
7101e1d828  add x8,x8,#0xac4
7101e1d82c  ldrsw x9,[x8, x21, LSL #0x2]
7101e1d830  add x8,x9,x8
7101e1d834  br x8
7101e1d838  mov x9,#0x1300000000
7101e1d83c  stur x9,[x29, #-0xb0]
7101e1d840  mov x9,#0x6e6d
7101e1d844  movk x9,#0x5f75, LSL #16
7101e1d848  sub x10,x29,#0xb0
7101e1d84c  add x1,x10,#0x8
7101e1d850  movk x9,#0x7073, LSL #32
7101e1d854  movk x9,#0x7269, LSL #48
7101e1d858  stur x9,[x29, #-0xa8]
7101e1d85c  add x9,x10,#0x9
7101e1d860  mov x10,#0x7469
7101e1d864  movk x10,#0x5f73, LSL #16
7101e1d868  movk x10,#0x6f73, LSL #32
7101e1d86c  movk x10,#0x7472, LSL #48
7101e1d870  stur x10,[x29, #-0xa0]
7101e1d874  mov w10,#0x315f
7101e1d878  movk w10,#0x38, LSL #16
7101e1d87c  stur w10,[x29, #-0x98]
7101e1d880  mov w8,#0x9dc5
7101e1d884  movk w8,#0x811c, LSL #16
7101e1d888  mov w11,#0x6d
7101e1d88c  mov w10,#0x89
7101e1d890  mul w8,w8,w10
7101e1d894  and w11,w11,#0xff
7101e1d898  eor w8,w8,w11
7101e1d89c  ldrb w11,[x9], #0x1
7101e1d8a0  cbnz w11,0x7101e1d890
7101e1d8a4  b 0x7101e1e6bc
7101e1d8a8  ldr x8,[x0]
7101e1d8ac  ldr x8,[x8, #0x180]
7101e1d8b0  fmov s0,wzr
7101e1d8b4  blr x8
7101e1d8b8  mov w8,#0x1
7101e1d8bc  strh w8,[x20, #0x64]
7101e1d8c0  ldur x20,[x29, #-0xf0]
7101e1d8c4  ldr x8,[x20, #0x8]
7101e1d8c8  cbz x8,0x7101e1d920
7101e1d8cc  ldr x20,[x8, #0x78]
7101e1d8d0  adrp x8,0x710593b000
7101e1d8d4  add x8,x8,#0xa40
7101e1d8d8  ldarb w8,[x8]
7101e1d8dc  tbz w8,#0x0,0x7101e1ef14
7101e1d8e0  cbz x20,0x7101e1d91c
7101e1d8e4  ldr x8,[x20]
7101e1d8e8  ldr x8,[x8]
7101e1d8ec  mov x0,x20
7101e1d8f0  blr x8
7101e1d8f4  cbz x0,0x7101e1d91c
7101e1d8f8  adrp x8,0x710593b000
7101e1d8fc  add x8,x8,#0xa58
7101e1d900  cmp x0,x8
7101e1d904  b.eq 0x7101e1d914
7101e1d908  ldr x0,[x0]
7101e1d90c  cbnz x0,0x7101e1d900
7101e1d910  b 0x7101e1d91c
7101e1d914  mov w8,#0x1
7101e1d918  strb w8,[x20, #0x60]
7101e1d91c  ldur x20,[x29, #-0xf0]
7101e1d920  adrp x21,0x710523d000
7101e1d924  add x21,x21,#0x988
7101e1d928  stp x21,xzr,[x29, #-0xf8]
7101e1d92c  cbz x20,0x7101e1d950
7101e1d930  ldr x0,[x20, #0x18]
7101e1d934  adrp x8,0x710523d000
7101e1d938  add x8,x8,#0x9a8
7101e1d93c  stp x8,xzr,[x20, #0x10]
7101e1d940  cbz x0,0x7101e1d948
7101e1d944  bl 0x710392eb40
7101e1d948  mov x0,x20
7101e1d94c  bl 0x710392eb40
7101e1d950  ldur x20,[x29, #-0xa8]
7101e1d954  stp x21,xzr,[x29, #-0xb0]
7101e1d958  cbz x20,0x7101e1d97c
7101e1d95c  ldr x0,[x20, #0x18]
7101e1d960  adrp x8,0x710523d000
7101e1d964  add x8,x8,#0x9a8
7101e1d968  stp x8,xzr,[x20, #0x10]
7101e1d96c  cbz x0,0x7101e1d974
7101e1d970  bl 0x710392eb40
7101e1d974  mov x0,x20
7101e1d978  bl 0x710392eb40
7101e1d97c  add x0,x19,#0x528
7101e1d980  mov w1,wzr
7101e1d984  mov w2,wzr
7101e1d988  bl 0x7103771a80
7101e1d98c  add x0,x19,#0xba0
7101e1d990  adrp x1,0x71043ad000
7101e1d994  add x1,x1,#0xeae
7101e1d998  sub x8,x29,#0xb0
7101e1d99c  bl 0x7103776640
7101e1d9a0  ldur x19,[x29, #-0xa8]
7101e1d9a4  ldr x8,[x19, #0x8]
7101e1d9a8  cbz x8,0x7101e1d9c0
7101e1d9ac  ldr x8,[x8, #0x18]
7101e1d9b0  cbz x8,0x7101e1d9c0
7101e1d9b4  ldrb w9,[x8, #0x58]
7101e1d9b8  and w9,w9,#0xfe
7101e1d9bc  strb w9,[x8, #0x58]
7101e1d9c0  adrp x8,0x710523d000
7101e1d9c4  add x8,x8,#0x988
7101e1d9c8  stp x8,xzr,[x29, #-0xb0]
7101e1d9cc  cbz x19,0x7101e1d9f0
7101e1d9d0  ldr x0,[x19, #0x18]
7101e1d9d4  adrp x8,0x710523d000
7101e1d9d8  add x8,x8,#0x9a8
7101e1d9dc  stp x8,xzr,[x19, #0x10]
7101e1d9e0  cbz x0,0x7101e1d9e8
7101e1d9e4  bl 0x710392eb40
7101e1d9e8  mov x0,x19
7101e1d9ec  bl 0x710392eb40
7101e1d9f0  add sp,sp,#0x3c0
7101e1d9f4  ldp x29,x30,[sp, #0x60]
7101e1d9f8  ldp x20,x19,[sp, #0x50]
7101e1d9fc  ldp x22,x21,[sp, #0x40]
7101e1da00  ldp x24,x23,[sp, #0x30]
7101e1da04  ldp x26,x25,[sp, #0x20]
7101e1da08  ldp x28,x27,[sp, #0x10]
7101e1da0c  ldr d8,[sp], #0x70
7101e1da10  ret
7101e1da14  cmp w8,#0x3
7101e1da18  b.eq 0x7101e1bfec
7101e1da1c  orr w8,wzr,#0x3
7101e1da20  str w8,[x19, #0xbd8]
7101e1da24  ldr w8,[x19, #0xbdc]
7101e1da28  cmp w8,#0x1
7101e1da2c  b.ne 0x7101e1e090
7101e1da30  ldrb w9,[x19, #0xbec]
7101e1da34  cbnz w9,0x7101e1bfec
7101e1da38  b 0x7101e1e0a0
7101e1da3c  cmp w8,#0x1
7101e1da40  b.ne 0x7101e1dc24
7101e1da44  str wzr,[x19, #0xb80]
7101e1da48  mov w3,#0x1
7101e1da4c  mov x0,x20
7101e1da50  mov w1,wzr
7101e1da54  b 0x7101e1dc40
7101e1da58  mov w26,#0xffffffff
7101e1da5c  cmp w8,#0x1
7101e1da60  b.eq 0x7101e1de80
7101e1da64  ldr w9,[x19, #0x7e8]
7101e1da68  tst w9,#0xffffff
7101e1da6c  b.eq 0x7101e1dc74
7101e1da70  ldr w9,[x19, #0x828]
7101e1da74  sub w10,w9,#0x1
7101e1da78  cbnz w9,0x7101e1de98
7101e1da7c  mov w21,#0xffffffff
7101e1da80  subs w11,w26,w21
7101e1da84  b.gt 0x7101e1deb0
7101e1da88  add w21,w11,w10
7101e1da8c  b 0x7101e1defc
7101e1da90  mov w1,#0x4
7101e1da94  mov x0,x19
7101e1da98  bl 0x7101e21d30
7101e1da9c  mov w8,#0x1
7101e1daa0  str w8,[x19, #0xdb8]
7101e1daa4  b 0x7101e1c84c
7101e1daa8  cmp w8,#0x2
7101e1daac  b.ne 0x7101e1bfec
7101e1dab0  ldrb w8,[x19, #0xbed]
7101e1dab4  cbnz w8,0x7101e1bfec
7101e1dab8  ldr x8,[x22]
7101e1dabc  ldrsw x8,[x8, #0x2a4]
7101e1dac0  tbnz w8,#0x1f,0x7101e1eacc
7101e1dac4  ldr w9,[x19, #0x7e8]
7101e1dac8  tst w9,#0xffffff
7101e1dacc  b.eq 0x7101e1eab4
7101e1dad0  ldr w9,[x19, #0x828]
7101e1dad4  cmp w9,w8
7101e1dad8  b.le 0x7101e1eacc
7101e1dadc  ldr x9,[x19, #0x760]
7101e1dae0  ldr x8,[x9, x8, LSL #0x3]
7101e1dae4  ldrh w1,[x8]
7101e1dae8  adrp x8,0x7105329000
7101e1daec  ldr x8,[x8, #0xf98]
7101e1daf0  ubfx x9,x1,#0x4,#0x1c
7101e1daf4  ldr x8,[x8]
7101e1daf8  ldr x10,[x8, #0x30]
7101e1dafc  cmp w9,#0x177
7101e1db00  b.cc 0x7101e1eea8
7101e1db04  mov w9,#0xffffe890
7101e1db08  add w11,w1,w9
7101e1db0c  adrp x9,0x710532a000
7101e1db10  add x9,x9,#0x878
7101e1db14  cmp w11,#0x63
7101e1db18  b.hi 0x7101e1eae4
7101e1db1c  and x11,x11,#0xffff
7101e1db20  mov w12,#0x50
7101e1db24  madd x10,x11,x12,x10
7101e1db28  mov w12,#0x8cc8
7101e1db2c  movk w12,#0x8, LSL #16
7101e1db30  mov w11,#0x8cc0
7101e1db34  movk w11,#0x8, LSL #16
7101e1db38  ldrsh w12,[x10, x12, LSL #0x0]
7101e1db3c  add x10,x10,x11
7101e1db40  cmn w12,#0x1
7101e1db44  csel x9,x9,x10,eq
7101e1db48  b 0x7101e1eae4
7101e1db4c  ldr x9,[x19, #0xb48]
7101e1db50  ldr x8,[x19, #0xb40]
7101e1db54  sub x9,x9,x8
7101e1db58  asr x9,x9,#0x2
7101e1db5c  cmp x9,x21
7101e1db60  b.ls 0x7101e1ef60
7101e1db64  ldr w21,[x8, x21, LSL #0x2]
7101e1db68  ldrb w8,[x19, #0xf05]
7101e1db6c  cbz w8,0x7101e1e87c
7101e1db70  sub w8,w21,#0x1
7101e1db74  cmp w8,#0x16
7101e1db78  b.hi 0x7101e1db8c
7101e1db7c  mov w9,#0x7fb
7101e1db80  movk w9,#0x6e, LSL #16
7101e1db84  lsr w8,w9,w8
7101e1db88  tbnz w8,#0x0,0x7101e1e87c
7101e1db8c  ldr x8,[x20]
7101e1db90  ldrsw x8,[x8, #0x2a4]
7101e1db94  tbnz w8,#0x1f,0x7101e1e87c
7101e1db98  ldr w9,[x19, #0x7e8]
7101e1db9c  tst w9,#0xffffff
7101e1dba0  b.eq 0x7101e1e864
7101e1dba4  ldr w9,[x19, #0x828]
7101e1dba8  cmp w9,w8
7101e1dbac  b.le 0x7101e1e87c
7101e1dbb0  ldr x9,[x19, #0x760]
7101e1dbb4  ldr x8,[x9, x8, LSL #0x3]
7101e1dbb8  ldrh w24,[x8]
7101e1dbbc  b 0x7101e1e880
7101e1dbc0  mov x8,#-0x1
7101e1dbc4  str x8,[sp, #0x250]
7101e1dbc8  adrp x8,0x7104f73000
7101e1dbcc  add x8,x8,#0xd50
7101e1dbd0  str xzr,[sp, #0x238]
7101e1dbd4  str wzr,[sp, #0x240]
7101e1dbd8  str w26,[sp, #0x244]
7101e1dbdc  strb wzr,[sp, #0x248]
7101e1dbe0  str wzr,[sp, #0x228]
7101e1dbe4  str xzr,[sp, #0x260]
7101e1dbe8  str xzr,[sp, #0x258]
7101e1dbec  str x8,[sp, #0x230]
7101e1dbf0  str xzr,[sp, #0x238]
7101e1dbf4  strb wzr,[sp, #0x248]
7101e1dbf8  ldr w8,[x19, #0xbdc]
7101e1dbfc  cmn w27,#0x1
7101e1dc00  b.eq 0x7101e1dcb0
7101e1dc04  ldr x9,[x20]
7101e1dc08  ldr w9,[x9, #0x28c]
7101e1dc0c  sdiv w10,w27,w9
7101e1dc10  msub w1,w10,w9,w27
7101e1dc14  cmp w8,#0x1
7101e1dc18  b.ne 0x7101e1dcbc
7101e1dc1c  str w1,[x19, #0xb80]
7101e1dc20  b 0x7101e1dccc
7101e1dc24  add x0,x19,#0x580
7101e1dc28  mov w1,wzr
7101e1dc2c  str wzr,[x19, #0xb88]
7101e1dc30  bl 0x7101e02dc0
7101e1dc34  ldr w1,[x19, #0xb88]
7101e1dc38  mov w3,#0x1
7101e1dc3c  mov x0,x20
7101e1dc40  mov w2,wzr
7101e1dc44  bl 0x7103783c10
7101e1dc48  ldr w8,[x19, #0xbd8]
7101e1dc4c  cmp w8,#0x1
7101e1dc50  b.eq 0x7101e1e158
7101e1dc54  mov w8,#0x1
7101e1dc58  str w8,[x19, #0xbd8]
7101e1dc5c  ldr w8,[x19, #0xbdc]
7101e1dc60  cmp w8,#0x1
7101e1dc64  b.ne 0x7101e1e0f0
7101e1dc68  ldrb w9,[x19, #0xbec]
7101e1dc6c  cbnz w9,0x7101e1e158
7101e1dc70  b 0x7101e1e100
7101e1dc74  ldr x9,[x19, #0x768]
7101e1dc78  ldr x10,[x19, #0x760]
7101e1dc7c  sub x9,x9,x10
7101e1dc80  lsr x9,x9,#0x3
7101e1dc84  sub w10,w9,#0x1
7101e1dc88  cbnz w9,0x7101e1de98
7101e1dc8c  b 0x7101e1da7c
7101e1dc90  cmp w8,#0x2
7101e1dc94  b.ne 0x7101e1dca0
7101e1dc98  ldrb w9,[x19, #0xbed]
7101e1dc9c  cbnz w9,0x7101e1bfec
7101e1dca0  cmp w8,#0x1
7101e1dca4  csel x20,x24,x25,eq
7101e1dca8  csel x21,x23,x22,eq
7101e1dcac  b 0x7101e1c88c
7101e1dcb0  mov w1,#0xffffffff
7101e1dcb4  cmp w8,#0x1
7101e1dcb8  b.eq 0x7101e1dc1c
7101e1dcbc  add x0,x19,#0x580
7101e1dcc0  str w1,[x19, #0xb88]
7101e1dcc4  bl 0x7101e02dc0
7101e1dcc8  ldr w1,[x19, #0xb88]
7101e1dccc  mov w3,#0x1
7101e1dcd0  mov x0,x20
7101e1dcd4  mov w2,wzr
7101e1dcd8  bl 0x7103783c10
7101e1dcdc  ldr w8,[x19, #0xbd8]
7101e1dce0  cmp w8,#0x1
7101e1dce4  b.eq 0x7101e1dd70
7101e1dce8  mov w8,#0x1
7101e1dcec  str w8,[x19, #0xbd8]
7101e1dcf0  ldr w8,[x19, #0xbdc]
7101e1dcf4  cmp w8,#0x1
7101e1dcf8  b.ne 0x7101e1dd08
7101e1dcfc  ldrb w9,[x19, #0xbec]
7101e1dd00  cbnz w9,0x7101e1dd70
7101e1dd04  b 0x7101e1dd18
7101e1dd08  cmp w8,#0x2
7101e1dd0c  b.ne 0x7101e1dd18
7101e1dd10  ldrb w9,[x19, #0xbed]
7101e1dd14  cbnz w9,0x7101e1dd70
7101e1dd18  cmp w8,#0x1
7101e1dd1c  csel x20,x24,x25,eq
7101e1dd20  ldr x0,[x20]
7101e1dd24  ldr x8,[x0]
7101e1dd28  ldr x8,[x8, #0x70]
7101e1dd2c  mov w1,wzr
7101e1dd30  csel x21,x23,x22,eq
7101e1dd34  blr x8
7101e1dd38  ldr x0,[x20]
7101e1dd3c  ldr x8,[x0]
7101e1dd40  ldr x8,[x8, #0x60]
7101e1dd44  mov w1,#0x1
7101e1dd48  blr x8
7101e1dd4c  ldr x0,[x21]
7101e1dd50  ldr x8,[x0]
7101e1dd54  ldr x8,[x8, #0x70]
7101e1dd58  mov w1,#0x1
7101e1dd5c  blr x8
7101e1dd60  mov w1,#0x68
7101e1dd64  mov x0,x20
7101e1dd68  mov w2,wzr
7101e1dd6c  bl 0x7103771a80
7101e1dd70  adrp x8,0x710532f000
7101e1dd74  ldr x8,[x8, #0x8d0]
7101e1dd78  ldr x0,[x8, #0x8]
7101e1dd7c  ldrb w8,[x0, #0x191]
7101e1dd80  cbnz w8,0x7101e1de00
7101e1dd84  mov x20,#0x5170
7101e1dd88  movk x20,#0xc0b6, LSL #16
7101e1dd8c  movk x20,#0x10, LSL #32
7101e1dd90  mov w2,#0x4
7101e1dd94  mov x1,x20
7101e1dd98  bl 0x7103313f20
7101e1dd9c  tbz w0,#0x0,0x7101e1de00
7101e1dda0  add x0,sp,#0x1e8
7101e1dda4  mov x1,x20
7101e1dda8  bl 0x71024076d0
7101e1ddac  ldr x8,[sp, #0x1f8]
7101e1ddb0  adrp x9,0x7104f73000
7101e1ddb4  add x9,x9,#0xd50
7101e1ddb8  str x9,[sp, #0x1f0]
7101e1ddbc  cbz x8,0x7101e1de2c
7101e1ddc0  adrp x8,0x7106dd5000
7101e1ddc4  ldrb w8,[x8, #0x3a8]
7101e1ddc8  cmp w8,#0x1
7101e1ddcc  b.ne 0x7101e1de2c
7101e1ddd0  adrp x9,0x7106dd5000
7101e1ddd4  ldr w8,[sp, #0x200]
7101e1ddd8  ldr w9,[x9, #0x3ac]
7101e1dddc  cmp w8,w9
7101e1dde0  b.ne 0x7101e1de2c
7101e1dde4  ldr x8,[sp, #0x1f8]
7101e1dde8  ldr wzr,[x8, #0x38]!
7101e1ddec  ldaxr w9,[x8]
7101e1ddf0  sub w9,w9,#0x1
7101e1ddf4  stlxr w10,w9,[x8]
7101e1ddf8  cbnz w10,0x7101e1ddec
7101e1ddfc  b 0x7101e1de2c
7101e1de00  mov x8,#-0x1
7101e1de04  str x8,[sp, #0x210]
7101e1de08  adrp x8,0x7104f73000
7101e1de0c  add x8,x8,#0xd50
7101e1de10  str wzr,[sp, #0x200]
7101e1de14  str w26,[sp, #0x204]
7101e1de18  strb wzr,[sp, #0x208]
7101e1de1c  str wzr,[sp, #0x1e8]
7101e1de20  str xzr,[sp, #0x220]
7101e1de24  str xzr,[sp, #0x218]
7101e1de28  stp x8,xzr,[sp, #0x1f0]
7101e1de2c  str xzr,[sp, #0x1f8]
7101e1de30  strb wzr,[sp, #0x208]
7101e1de34  b 0x7101e1bfec
7101e1de38  mov x8,#0x650000000000
7101e1de3c  movk x8,#0x87, LSL #48
7101e1de40  str x8,[sp, #0x2c0]
7101e1de44  mov x8,#-0x1
7101e1de48  str x8,[sp, #0x2d0]
7101e1de4c  adrp x8,0x7104f73000
7101e1de50  add x8,x8,#0xd50
7101e1de54  str xzr,[sp, #0x2b8]
7101e1de58  strb wzr,[sp, #0x2c8]
7101e1de5c  str wzr,[sp, #0x2a8]
7101e1de60  str xzr,[sp, #0x2e0]
7101e1de64  str xzr,[sp, #0x2d8]
7101e1de68  str x8,[sp, #0x2b0]
7101e1de6c  str xzr,[sp, #0x2b8]
7101e1de70  strb wzr,[sp, #0x2c8]
7101e1de74  ldr w8,[x19, #0xbdc]
7101e1de78  cmp w8,#0x1
7101e1de7c  b.ne 0x7101e1da64
7101e1de80  ldr x9,[x19, #0x550]
7101e1de84  ldr x10,[x19, #0x548]
7101e1de88  sub x9,x9,x10
7101e1de8c  lsr x9,x9,#0x2
7101e1de90  sub w10,w9,#0x1
7101e1de94  cbz w9,0x7101e1da7c
7101e1de98  ldr x11,[x20]
7101e1de9c  ldr w11,[x11, #0x28c]
7101e1dea0  sdiv w12,w10,w11
7101e1dea4  msub w21,w12,w11,w10
7101e1dea8  subs w11,w26,w21
7101e1deac  b.le 0x7101e1da88
7101e1deb0  cbz w9,0x7101e1defc
7101e1deb4  ldr x9,[x20]
7101e1deb8  ldr w9,[x9, #0x28c]
7101e1debc  sdiv w9,w10,w9
7101e1dec0  cmp w9,#0x1
7101e1dec4  b.lt 0x7101e1defc
7101e1dec8  sub w10,w10,w21
7101e1decc  sdiv w9,w10,w9
7101e1ded0  add w10,w10,w26
7101e1ded4  sub w21,w10,w9
7101e1ded8  cmp w8,#0x1
7101e1dedc  b.eq 0x7101e1df04
7101e1dee0  cmp w8,#0x2
7101e1dee4  str w21,[x19, #0xb88]
7101e1dee8  b.ne 0x7101e1df08
7101e1deec  add x0,x19,#0x580
7101e1def0  mov w1,w21
7101e1def4  bl 0x7101e02dc0
7101e1def8  b 0x7101e1df08
7101e1defc  cmp w8,#0x1
7101e1df00  b.ne 0x7101e1dee0
7101e1df04  str w21,[x19, #0xb80]
7101e1df08  mov w3,#0x1
7101e1df0c  mov x0,x20
7101e1df10  mov w1,w21
7101e1df14  mov w2,wzr
7101e1df18  mov w26,#0x1
7101e1df1c  bl 0x7103783c10
7101e1df20  ldr w8,[x19, #0xbd8]
7101e1df24  cmp w8,#0x1
7101e1df28  b.eq 0x7101e1dfb0
7101e1df2c  ldr w8,[x19, #0xbdc]
7101e1df30  cmp w8,#0x1
7101e1df34  str w26,[x19, #0xbd8]
7101e1df38  b.ne 0x7101e1df48
7101e1df3c  ldrb w9,[x19, #0xbec]
7101e1df40  cbnz w9,0x7101e1dfb0
7101e1df44  b 0x7101e1df58
7101e1df48  cmp w8,#0x2
7101e1df4c  b.ne 0x7101e1df58
7101e1df50  ldrb w9,[x19, #0xbed]
7101e1df54  cbnz w9,0x7101e1dfb0
7101e1df58  cmp w8,#0x1
7101e1df5c  csel x20,x24,x25,eq
7101e1df60  ldr x0,[x20]
7101e1df64  ldr x8,[x0]
7101e1df68  ldr x8,[x8, #0x70]
7101e1df6c  mov w1,wzr
7101e1df70  csel x21,x23,x22,eq
7101e1df74  blr x8
7101e1df78  ldr x0,[x20]
7101e1df7c  ldr x8,[x0]
7101e1df80  ldr x8,[x8, #0x60]
7101e1df84  mov w1,#0x1
7101e1df88  blr x8
7101e1df8c  ldr x0,[x21]
7101e1df90  ldr x8,[x0]
7101e1df94  ldr x8,[x8, #0x70]
7101e1df98  mov w1,#0x1
7101e1df9c  blr x8
7101e1dfa0  mov w1,#0x68
7101e1dfa4  mov x0,x20
7101e1dfa8  mov w2,wzr
7101e1dfac  bl 0x7103771a80
7101e1dfb0  adrp x8,0x710532f000
7101e1dfb4  ldr x8,[x8, #0x8d0]
7101e1dfb8  ldr x0,[x8, #0x8]
7101e1dfbc  ldrb w8,[x0, #0x191]
7101e1dfc0  cbnz w8,0x7101e1e040
7101e1dfc4  mov x20,#0x5170
7101e1dfc8  movk x20,#0xc0b6, LSL #16
7101e1dfcc  movk x20,#0x10, LSL #32
7101e1dfd0  mov w2,#0x4
7101e1dfd4  mov x1,x20
7101e1dfd8  bl 0x7103313f20
7101e1dfdc  tbz w0,#0x0,0x7101e1e040
7101e1dfe0  add x0,sp,#0x268
7101e1dfe4  mov x1,x20
7101e1dfe8  bl 0x71024076d0
7101e1dfec  ldr x8,[sp, #0x278]
7101e1dff0  adrp x9,0x7104f73000
7101e1dff4  add x9,x9,#0xd50
7101e1dff8  str x9,[sp, #0x270]
7101e1dffc  cbz x8,0x7101e1e074
7101e1e000  adrp x8,0x7106dd5000
7101e1e004  ldrb w8,[x8, #0x3a8]
7101e1e008  cmp w8,#0x1
7101e1e00c  b.ne 0x7101e1e074
7101e1e010  adrp x9,0x7106dd5000
7101e1e014  ldr w8,[sp, #0x280]
7101e1e018  ldr w9,[x9, #0x3ac]
7101e1e01c  cmp w8,w9
7101e1e020  b.ne 0x7101e1e074
7101e1e024  ldr x8,[sp, #0x278]
7101e1e028  ldr wzr,[x8, #0x38]!
7101e1e02c  ldaxr w9,[x8]
7101e1e030  sub w9,w9,#0x1
7101e1e034  stlxr w10,w9,[x8]
7101e1e038  cbnz w10,0x7101e1e02c
7101e1e03c  b 0x7101e1e074
7101e1e040  mov x8,#0x650000000000
7101e1e044  movk x8,#0x87, LSL #48
7101e1e048  str x8,[sp, #0x280]
7101e1e04c  mov x8,#-0x1
7101e1e050  str x8,[sp, #0x290]
7101e1e054  adrp x8,0x7104f73000
7101e1e058  add x8,x8,#0xd50
7101e1e05c  str xzr,[sp, #0x278]
7101e1e060  strb wzr,[sp, #0x288]
7101e1e064  str wzr,[sp, #0x268]
7101e1e068  str xzr,[sp, #0x2a0]
7101e1e06c  str xzr,[sp, #0x298]
7101e1e070  str x8,[sp, #0x270]
7101e1e074  str xzr,[sp, #0x278]
7101e1e078  strb wzr,[sp, #0x288]
7101e1e07c  b 0x7101e1bfec
7101e1e080  msub w1,w11,w10,w27
7101e1e084  cmp w8,#0x1
7101e1e088  b.ne 0x7101e1dcbc
7101e1e08c  b 0x7101e1dc1c
7101e1e090  cmp w8,#0x2
7101e1e094  b.ne 0x7101e1e0a0
7101e1e098  ldrb w9,[x19, #0xbed]
7101e1e09c  cbnz w9,0x7101e1bfec
7101e1e0a0  cmp w8,#0x1
7101e1e0a4  csel x20,x24,x25,eq
7101e1e0a8  ldr x0,[x20]
7101e1e0ac  ldr x8,[x0]
7101e1e0b0  ldr x8,[x8, #0x70]
7101e1e0b4  mov w1,#0x1
7101e1e0b8  csel x21,x23,x22,eq
7101e1e0bc  blr x8
7101e1e0c0  ldr x0,[x20]
7101e1e0c4  ldr x8,[x0]
7101e1e0c8  ldr x8,[x8, #0x60]
7101e1e0cc  mov w1,#0x1
7101e1e0d0  blr x8
7101e1e0d4  ldr x0,[x21]
7101e1e0d8  ldr x8,[x0]
7101e1e0dc  ldr x8,[x8, #0x70]
7101e1e0e0  mov w1,wzr
7101e1e0e4  blr x8
7101e1e0e8  mov w1,#0x64
7101e1e0ec  b 0x7101e1c8cc
7101e1e0f0  cmp w8,#0x2
7101e1e0f4  b.ne 0x7101e1e100
7101e1e0f8  ldrb w9,[x19, #0xbed]
7101e1e0fc  cbnz w9,0x7101e1e158
7101e1e100  cmp w8,#0x1
7101e1e104  csel x20,x24,x25,eq
7101e1e108  ldr x0,[x20]
7101e1e10c  ldr x8,[x0]
7101e1e110  ldr x8,[x8, #0x70]
7101e1e114  mov w1,wzr
7101e1e118  csel x21,x23,x22,eq
7101e1e11c  blr x8
7101e1e120  ldr x0,[x20]
7101e1e124  ldr x8,[x0]
7101e1e128  ldr x8,[x8, #0x60]
7101e1e12c  mov w1,#0x1
7101e1e130  blr x8
7101e1e134  ldr x0,[x21]
7101e1e138  ldr x8,[x0]
7101e1e13c  ldr x8,[x8, #0x70]
7101e1e140  mov w1,#0x1
7101e1e144  blr x8
7101e1e148  mov w1,#0x68
7101e1e14c  mov x0,x20
7101e1e150  mov w2,wzr
7101e1e154  bl 0x7103771a80
7101e1e158  adrp x8,0x710532f000
7101e1e15c  ldr x8,[x8, #0x8d0]
7101e1e160  ldr x0,[x8, #0x8]
7101e1e164  ldrb w8,[x0, #0x191]
7101e1e168  cbnz w8,0x7101e1e1e8
7101e1e16c  mov x20,#0x5170
7101e1e170  movk x20,#0xc0b6, LSL #16
7101e1e174  movk x20,#0x10, LSL #32
7101e1e178  mov w2,#0x4
7101e1e17c  mov x1,x20
7101e1e180  bl 0x7103313f20
7101e1e184  tbz w0,#0x0,0x7101e1e1e8
7101e1e188  add x0,sp,#0x1a8
7101e1e18c  mov x1,x20
7101e1e190  bl 0x71024076d0
7101e1e194  ldr x8,[sp, #0x1b8]
7101e1e198  adrp x9,0x7104f73000
7101e1e19c  add x9,x9,#0xd50
7101e1e1a0  str x9,[sp, #0x1b0]
7101e1e1a4  cbz x8,0x7101e1e214
7101e1e1a8  adrp x8,0x7106dd5000
7101e1e1ac  ldrb w8,[x8, #0x3a8]
7101e1e1b0  cmp w8,#0x1
7101e1e1b4  b.ne 0x7101e1e214
7101e1e1b8  adrp x9,0x7106dd5000
7101e1e1bc  ldr w8,[sp, #0x1c0]
7101e1e1c0  ldr w9,[x9, #0x3ac]
7101e1e1c4  cmp w8,w9
7101e1e1c8  b.ne 0x7101e1e214
7101e1e1cc  ldr x8,[sp, #0x1b8]
7101e1e1d0  ldr wzr,[x8, #0x38]!
7101e1e1d4  ldaxr w9,[x8]
7101e1e1d8  sub w9,w9,#0x1
7101e1e1dc  stlxr w10,w9,[x8]
7101e1e1e0  cbnz w10,0x7101e1e1d4
7101e1e1e4  b 0x7101e1e214
7101e1e1e8  mov x8,#0x650000000000
7101e1e1ec  movk x8,#0x87, LSL #48
7101e1e1f0  strb wzr,[sp, #0x1c8]
7101e1e1f4  stp xzr,x8,[sp, #0x1b8]
7101e1e1f8  mov x8,#-0x1
7101e1e1fc  stp x8,xzr,[sp, #0x1d0]
7101e1e200  adrp x8,0x7104f73000
7101e1e204  add x8,x8,#0xd50
7101e1e208  str wzr,[sp, #0x1a8]
7101e1e20c  str xzr,[sp, #0x1e0]
7101e1e210  str x8,[sp, #0x1b0]
7101e1e214  str xzr,[sp, #0x1b8]
7101e1e218  strb wzr,[sp, #0x1c8]
7101e1e21c  b 0x7101e1bfec
7101e1e220  ldrb w8,[x8, #0x6c]
7101e1e224  sub w8,w8,#0x1
7101e1e228  cmp w8,#0x2
7101e1e22c  b.hi 0x7101e1e24c
7101e1e230  and x8,x8,#0xff
7101e1e234  lsl x8,x8,#0x3
7101e1e238  mov w9,#0x301
7101e1e23c  movk w9,#0x2, LSL #16
7101e1e240  lsr w8,w9,w8
7101e1e244  and x8,x8,#0xffffff
7101e1e248  b 0x7101e1e250
7101e1e24c  mov x8,xzr
7101e1e250  and x8,x8,#0xff
7101e1e254  adrp x9,0x7104549000
7101e1e258  add x9,x9,#0x40
7101e1e25c  ldrb w24,[x9, x8, LSL ]
7101e1e260  add x8,x26,#0xf24
7101e1e264  ldrb w9,[x8, x21, LSL ]
7101e1e268  ldrb w8,[x26, #0xf24]
7101e1e26c  cbz w9,0x7101e1e2dc
7101e1e270  cbz w8,0x7101e1e278
7101e1e274  ldr w8,[x26, #0xf38]
7101e1e278  ldrb w9,[x26, #0xf25]
7101e1e27c  cbz w9,0x7101e1e288
7101e1e280  ldr w9,[x26, #0xf3c]
7101e1e284  add w8,w9,w8
7101e1e288  ldrb w9,[x26, #0xf26]
7101e1e28c  cbz w9,0x7101e1e298
7101e1e290  ldr w9,[x26, #0xf40]
7101e1e294  add w8,w9,w8
7101e1e298  ldrb w9,[x26, #0xf27]
7101e1e29c  cbz w9,0x7101e1e2a8
7101e1e2a0  ldr w9,[x26, #0xf44]
7101e1e2a4  add w8,w9,w8
7101e1e2a8  ldrb w9,[x26, #0xf28]
7101e1e2ac  cbz w9,0x7101e1e2b8
7101e1e2b0  ldr w9,[x26, #0xf48]
7101e1e2b4  add w8,w9,w8
7101e1e2b8  ldrb w9,[x26, #0xf29]
7101e1e2bc  cbz w9,0x7101e1e2c8
7101e1e2c0  ldr w9,[x26, #0xf4c]
7101e1e2c4  add w8,w9,w8
7101e1e2c8  cmp w8,#0x1
7101e1e2cc  b.ne 0x7101e1e328
7101e1e2d0  adrp x1,0x710433a000
7101e1e2d4  add x1,x1,#0x689
7101e1e2d8  b 0x7101e1e330
7101e1e2dc  cbz w8,0x7101e1e358
7101e1e2e0  mov w8,wzr
7101e1e2e4  ldrb w9,[x26, #0xf25]
7101e1e2e8  cbnz w9,0x7101e1e2f4
7101e1e2ec  ldr w9,[x26, #0xf3c]
7101e1e2f0  add w8,w9,w8
7101e1e2f4  ldrb w9,[x26, #0xf26]
7101e1e2f8  cbz w9,0x7101e1e368
7101e1e2fc  ldrb w9,[x26, #0xf27]
7101e1e300  cbz w9,0x7101e1e378
7101e1e304  ldrb w9,[x26, #0xf28]
7101e1e308  cbz w9,0x7101e1e388
7101e1e30c  ldrb w9,[x26, #0xf29]
7101e1e310  cbz w9,0x7101e1e398
7101e1e314  cmp w8,#0x1
7101e1e318  b.ne 0x7101e1e3a8
7101e1e31c  adrp x1,0x710433a000
7101e1e320  add x1,x1,#0x65a
7101e1e324  b 0x7101e1e3b0
7101e1e328  adrp x1,0x71042c5000
7101e1e32c  add x1,x1,#0x399
7101e1e330  fmov s0,0x3f800000
7101e1e334  mov x0,x22
7101e1e338  bl 0x7103778300
7101e1e33c  orr w4,wzr,#0xffff
7101e1e340  mov x0,x19
7101e1e344  mov w1,w20
7101e1e348  mov w2,w21
7101e1e34c  mov w3,w24
7101e1e350  bl 0x7101e2c440
7101e1e354  b 0x7101e1e3d4
7101e1e358  ldr w8,[x26, #0xf38]
7101e1e35c  ldrb w9,[x26, #0xf25]
7101e1e360  cbnz w9,0x7101e1e2f4
7101e1e364  b 0x7101e1e2ec
7101e1e368  ldr w9,[x26, #0xf40]
7101e1e36c  add w8,w9,w8
7101e1e370  ldrb w9,[x26, #0xf27]
7101e1e374  cbnz w9,0x7101e1e304
7101e1e378  ldr w9,[x26, #0xf44]
7101e1e37c  add w8,w9,w8
7101e1e380  ldrb w9,[x26, #0xf28]
7101e1e384  cbnz w9,0x7101e1e30c
7101e1e388  ldr w9,[x26, #0xf48]
7101e1e38c  add w8,w9,w8
7101e1e390  ldrb w9,[x26, #0xf29]
7101e1e394  cbnz w9,0x7101e1e314
7101e1e398  ldr w9,[x26, #0xf4c]
7101e1e39c  add w8,w9,w8
7101e1e3a0  cmp w8,#0x1
7101e1e3a4  b.eq 0x7101e1e31c
7101e1e3a8  adrp x1,0x710437c000
7101e1e3ac  add x1,x1,#0xabd
7101e1e3b0  fmov s0,0x3f800000
7101e1e3b4  mov x0,x22
7101e1e3b8  bl 0x7103778300
7101e1e3bc  orr w4,wzr,#0xffff
7101e1e3c0  mov x0,x19
7101e1e3c4  mov w1,w20
7101e1e3c8  mov w2,w21
7101e1e3cc  mov w3,w24
7101e1e3d0  bl 0x7101e2c920
7101e1e3d4  orr w3,wzr,#0xffff
7101e1e3d8  mov w4,#0x1
7101e1e3dc  orr w5,wzr,#0xffff
7101e1e3e0  mov x0,x23
7101e1e3e4  mov w1,w20
7101e1e3e8  mov w2,w21
7101e1e3ec  mov w24,#0x1
7101e1e3f0  bl 0x7101e2b470
7101e1e3f4  ldr x0,[x19, #0xba8]
7101e1e3f8  fmov s0,0x3f800000
7101e1e3fc  adrp x1,0x71042e7000
7101e1e400  add x1,x1,#0x7a9
7101e1e404  bl 0x7103778300
7101e1e408  str x25,[sp, #0x2e8]
7101e1e40c  str xzr,[sp, #0x2f0]
7101e1e410  cbz x22,0x7101e1e434
7101e1e414  ldr x0,[x22, #0x18]
7101e1e418  adrp x8,0x710523d000
7101e1e41c  add x8,x8,#0x9a8
7101e1e420  stp x8,xzr,[x22, #0x10]
7101e1e424  cbz x0,0x7101e1e42c
7101e1e428  bl 0x710392eb40
7101e1e42c  mov x0,x22
7101e1e430  bl 0x710392eb40
7101e1e434  strb w24,[x19, #0xbb2]
7101e1e438  adrp x8,0x710532f000
7101e1e43c  ldr x8,[x8, #0x8d0]
7101e1e440  ldr x0,[x8, #0x8]
7101e1e444  ldrb w8,[x0, #0x191]
7101e1e448  cbnz w8,0x7101e1e4c8
7101e1e44c  mov x19,#0xfb3c
7101e1e450  movk x19,#0x85db, LSL #16
7101e1e454  movk x19,#0x1b, LSL #32
7101e1e458  mov w2,#0x4
7101e1e45c  mov x1,x19
7101e1e460  bl 0x7103313f20
7101e1e464  tbz w0,#0x0,0x7101e1e4c8
7101e1e468  add x0,sp,#0x148
7101e1e46c  mov x1,x19
7101e1e470  bl 0x71024076d0
7101e1e474  ldr x8,[sp, #0x158]
7101e1e478  adrp x9,0x7104f73000
7101e1e47c  add x9,x9,#0xd50
7101e1e480  str x9,[sp, #0x150]
7101e1e484  cbz x8,0x7101e1e4f4
7101e1e488  adrp x8,0x7106dd5000
7101e1e48c  ldrb w8,[x8, #0x3a8]
7101e1e490  cmp w8,#0x1
7101e1e494  b.ne 0x7101e1e4f4
7101e1e498  adrp x9,0x7106dd5000
7101e1e49c  ldr w8,[sp, #0x160]
7101e1e4a0  ldr w9,[x9, #0x3ac]
7101e1e4a4  cmp w8,w9
7101e1e4a8  b.ne 0x7101e1e4f4
7101e1e4ac  ldr x8,[sp, #0x158]
7101e1e4b0  ldr wzr,[x8, #0x38]!
7101e1e4b4  ldaxr w9,[x8]
7101e1e4b8  sub w9,w9,#0x1
7101e1e4bc  stlxr w10,w9,[x8]
7101e1e4c0  cbnz w10,0x7101e1e4b4
7101e1e4c4  b 0x7101e1e4f4
7101e1e4c8  mov x8,#0x650000000000
7101e1e4cc  movk x8,#0x87, LSL #48
7101e1e4d0  strb wzr,[sp, #0x168]
7101e1e4d4  stp xzr,x8,[sp, #0x158]
7101e1e4d8  mov x8,#-0x1
7101e1e4dc  stp x8,xzr,[sp, #0x170]
7101e1e4e0  adrp x8,0x7104f73000
7101e1e4e4  add x8,x8,#0xd50
7101e1e4e8  str wzr,[sp, #0x148]
7101e1e4ec  str xzr,[sp, #0x180]
7101e1e4f0  str x8,[sp, #0x150]
7101e1e4f4  str xzr,[sp, #0x158]
7101e1e4f8  strb wzr,[sp, #0x168]
7101e1e4fc  b 0x7101e1d9f0
7101e1e500  mov x9,#0x1300000000
7101e1e504  stur x9,[x29, #-0xb0]
7101e1e508  mov x9,#0x6e6d
7101e1e50c  movk x9,#0x5f75, LSL #16
7101e1e510  sub x10,x29,#0xb0
7101e1e514  add x1,x10,#0x8
7101e1e518  movk x9,#0x7073, LSL #32
7101e1e51c  movk x9,#0x7269, LSL #48
7101e1e520  stur x9,[x29, #-0xa8]
7101e1e524  add x9,x10,#0x9
7101e1e528  mov x10,#0x7469
7101e1e52c  movk x10,#0x5f73, LSL #16
7101e1e530  movk x10,#0x6f73, LSL #32
7101e1e534  movk x10,#0x7472, LSL #48
7101e1e538  stur x10,[x29, #-0xa0]
7101e1e53c  mov w10,#0x325f
7101e1e540  movk w10,#0x32, LSL #16
7101e1e544  stur w10,[x29, #-0x98]
7101e1e548  mov w8,#0x9dc5
7101e1e54c  movk w8,#0x811c, LSL #16
7101e1e550  mov w11,#0x6d
7101e1e554  mov w10,#0x89
7101e1e558  mul w8,w8,w10
7101e1e55c  and w11,w11,#0xff
7101e1e560  eor w8,w8,w11
7101e1e564  ldrb w11,[x9], #0x1
7101e1e568  cbnz w11,0x7101e1e558
7101e1e56c  b 0x7101e1e6bc
7101e1e570  mov x9,#0x1300000000
7101e1e574  stur x9,[x29, #-0xb0]
7101e1e578  mov x9,#0x6e6d
7101e1e57c  movk x9,#0x5f75, LSL #16
7101e1e580  sub x10,x29,#0xb0
7101e1e584  add x1,x10,#0x8
7101e1e588  movk x9,#0x7073, LSL #32
7101e1e58c  movk x9,#0x7269, LSL #48
7101e1e590  stur x9,[x29, #-0xa8]
7101e1e594  add x9,x10,#0x9
7101e1e598  mov x10,#0x7469
7101e1e59c  movk x10,#0x5f73, LSL #16
7101e1e5a0  movk x10,#0x6f73, LSL #32
7101e1e5a4  movk x10,#0x7472, LSL #48
7101e1e5a8  stur x10,[x29, #-0xa0]
7101e1e5ac  mov w10,#0x305f
7101e1e5b0  movk w10,#0x34, LSL #16
7101e1e5b4  stur w10,[x29, #-0x98]
7101e1e5b8  mov w8,#0x9dc5
7101e1e5bc  movk w8,#0x811c, LSL #16
7101e1e5c0  mov w11,#0x6d
7101e1e5c4  mov w10,#0x89
7101e1e5c8  mul w8,w8,w10
7101e1e5cc  and w11,w11,#0xff
7101e1e5d0  eor w8,w8,w11
7101e1e5d4  ldrb w11,[x9], #0x1
7101e1e5d8  cbnz w11,0x7101e1e5c8
7101e1e5dc  b 0x7101e1e6bc
7101e1e5e0  mov x9,#0x1300000000
7101e1e5e4  stur x9,[x29, #-0xb0]
7101e1e5e8  mov x9,#0x6e6d
7101e1e5ec  movk x9,#0x5f75, LSL #16
7101e1e5f0  sub x10,x29,#0xb0
7101e1e5f4  add x1,x10,#0x8
7101e1e5f8  movk x9,#0x7073, LSL #32
7101e1e5fc  movk x9,#0x7269, LSL #48
7101e1e600  stur x9,[x29, #-0xa8]
7101e1e604  add x9,x10,#0x9
7101e1e608  mov x10,#0x7469
7101e1e60c  movk x10,#0x5f73, LSL #16
7101e1e610  movk x10,#0x6f73, LSL #32
7101e1e614  movk x10,#0x7472, LSL #48
7101e1e618  stur x10,[x29, #-0xa0]
7101e1e61c  mov w10,#0x305f
7101e1e620  movk w10,#0x32, LSL #16
7101e1e624  stur w10,[x29, #-0x98]
7101e1e628  mov w8,#0x9dc5
7101e1e62c  movk w8,#0x811c, LSL #16
7101e1e630  mov w11,#0x6d
7101e1e634  mov w10,#0x89
7101e1e638  mul w8,w8,w10
7101e1e63c  and w11,w11,#0xff
7101e1e640  eor w8,w8,w11
7101e1e644  ldrb w11,[x9], #0x1
7101e1e648  cbnz w11,0x7101e1e638
7101e1e64c  b 0x7101e1e6bc
7101e1e650  mov x9,#0x1300000000
7101e1e654  stur x9,[x29, #-0xb0]
7101e1e658  mov x9,#0x6e6d
7101e1e65c  movk x9,#0x5f75, LSL #16
7101e1e660  sub x10,x29,#0xb0
7101e1e664  add x1,x10,#0x8
7101e1e668  movk x9,#0x7073, LSL #32
7101e1e66c  movk x9,#0x7269, LSL #48
7101e1e670  stur x9,[x29, #-0xa8]
7101e1e674  add x9,x10,#0x9
7101e1e678  mov x10,#0x7469
7101e1e67c  movk x10,#0x5f73, LSL #16
7101e1e680  movk x10,#0x6f73, LSL #32
7101e1e684  movk x10,#0x7472, LSL #48
7101e1e688  stur x10,[x29, #-0xa0]
7101e1e68c  mov w10,#0x305f
7101e1e690  movk w10,#0x33, LSL #16
7101e1e694  stur w10,[x29, #-0x98]
7101e1e698  mov w8,#0x9dc5
7101e1e69c  movk w8,#0x811c, LSL #16
7101e1e6a0  mov w11,#0x6d
7101e1e6a4  mov w10,#0x89
7101e1e6a8  mul w8,w8,w10
7101e1e6ac  and w11,w11,#0xff
7101e1e6b0  eor w8,w8,w11
7101e1e6b4  ldrb w11,[x9], #0x1
7101e1e6b8  cbnz w11,0x7101e1e6a8
7101e1e6bc  stur w8,[x29, #-0xb0]
7101e1e6c0  add x0,sp,#0x188
7101e1e6c4  bl 0x710377a120
7101e1e6c8  ldr x0,[sp, #0x190]
7101e1e6cc  adrp x23,0x710523d000
7101e1e6d0  add x23,x23,#0x9a8
7101e1e6d4  stp x23,xzr,[sp, #0x188]
7101e1e6d8  cbz x0,0x7101e1e6e0
7101e1e6dc  bl 0x710392eb40
7101e1e6e0  add x0,x19,#0x548
7101e1e6e4  mov w1,w21
7101e1e6e8  bl 0x7102528ea0
7101e1e6ec  strb w21,[x19, #0x560]
7101e1e6f0  ldr x0,[x20]
7101e1e6f4  mov w1,#0x1
7101e1e6f8  bl 0x710377cc80
7101e1e6fc  orr w8,wzr,#0xffff
7101e1e700  cmp w22,w8
7101e1e704  b.eq 0x7101e1e73c
7101e1e708  ldr x9,[x19, #0x550]
7101e1e70c  ldr x8,[x19, #0x548]
7101e1e710  subs x10,x9,x8
7101e1e714  b.eq 0x7101e1e73c
7101e1e718  mov x9,xzr
7101e1e71c  asr x10,x10,#0x2
7101e1e720  ldrh w11,[x8]
7101e1e724  cmp w11,w22
7101e1e728  b.eq 0x7101e1e85c
7101e1e72c  add x9,x9,#0x1
7101e1e730  add x8,x8,#0x4
7101e1e734  cmp x10,x9
7101e1e738  b.hi 0x7101e1e720
7101e1e73c  mov w1,wzr
7101e1e740  mov w3,#0x1
7101e1e744  mov x0,x20
7101e1e748  mov w2,wzr
7101e1e74c  str w1,[x19, #0xb80]
7101e1e750  bl 0x7103783c10
7101e1e754  ldrb w8,[x19, #0xf05]
7101e1e758  cbnz w8,0x7101e1e998
7101e1e75c  ldr w9,[x19, #0xb80]
7101e1e760  tbnz w9,#0x1f,0x7101e1e998
7101e1e764  ldr x8,[x20]
7101e1e768  ldr w10,[x8, #0x288]
7101e1e76c  cmp w10,w9
7101e1e770  b.le 0x7101e1e998
7101e1e774  ldr w10,[x8, #0x29c]
7101e1e778  subs w9,w9,w10
7101e1e77c  b.mi 0x7101e1e998
7101e1e780  ldr w10,[x8, #0x2c4]
7101e1e784  cmp w10,w9
7101e1e788  b.le 0x7101e1e998
7101e1e78c  ldr w10,[x8, #0x2c0]
7101e1e790  cmp w10,w9
7101e1e794  b.le 0x7101e1e998
7101e1e798  ldr x8,[x8, #0x168]
7101e1e79c  ldr x8,[x8, w9, SXTW #0x3]
7101e1e7a0  ldr x20,[x8, #0x28]
7101e1e7a4  cbz x20,0x7101e1e998
7101e1e7a8  ldr x8,[x20]
7101e1e7ac  ldr x8,[x8, #0x218]
7101e1e7b0  mov x0,x20
7101e1e7b4  mov w1,wzr
7101e1e7b8  blr x8
7101e1e7bc  ldr x8,[x20]
7101e1e7c0  ldr x8,[x8, #0x410]
7101e1e7c4  mov x0,x20
7101e1e7c8  blr x8
7101e1e7cc  ldr x8,[x20]
7101e1e7d0  ldr x8,[x8, #0x3f0]
7101e1e7d4  mov x0,x20
7101e1e7d8  mov w1,wzr
7101e1e7dc  blr x8
7101e1e7e0  ldr x8,[x20]
7101e1e7e4  ldr x8,[x8, #0x140]
7101e1e7e8  mov x0,x20
7101e1e7ec  blr x8
7101e1e7f0  cmp w0,#0x6
7101e1e7f4  b.eq 0x7101e1e820
7101e1e7f8  ldr x8,[x20]
7101e1e7fc  ldr x8,[x8, #0x140]
7101e1e800  mov x0,x20
7101e1e804  blr x8
7101e1e808  cmp w0,#0x1
7101e1e80c  b.eq 0x7101e1e820
7101e1e810  ldr x8,[x20]
7101e1e814  ldr x8,[x8, #0x400]
7101e1e818  mov x0,x20
7101e1e81c  blr x8
7101e1e820  ldr x8,[x20]
7101e1e824  ldr x8,[x8, #0x158]
7101e1e828  mov x0,x20
7101e1e82c  blr x8
7101e1e830  tbnz w0,#0x0,0x7101e1e998
7101e1e834  ldr x8,[x20]
7101e1e838  ldr x8,[x8, #0x370]
7101e1e83c  mov x0,x20
7101e1e840  blr x8
7101e1e844  b 0x7101e1e998
7101e1e848  sub x8,x29,#0xb0
7101e1e84c  add x1,x8,#0x8
7101e1e850  sturb wzr,[x29, #-0xa8]
7101e1e854  stur xzr,[x29, #-0xb0]
7101e1e858  b 0x7101e1e6c0
7101e1e85c  bic w1,w9,w9, ASR #0x1f
7101e1e860  b 0x7101e1e740
7101e1e864  ldr x9,[x19, #0x768]
7101e1e868  ldr x10,[x19, #0x760]
7101e1e86c  sub x9,x9,x10
7101e1e870  lsr x9,x9,#0x3
7101e1e874  cmp w9,w8
7101e1e878  b.gt 0x7101e1dbb0
7101e1e87c  orr w24,wzr,#0xffff
7101e1e880  add x0,x19,#0xba0
7101e1e884  adrp x1,0x710424f000
7101e1e888  add x1,x1,#0xa99
7101e1e88c  add x8,sp,#0x198
7101e1e890  bl 0x7103776640
7101e1e894  adrp x1,0x7104431000
7101e1e898  add x1,x1,#0x6d5
7101e1e89c  add x8,sp,#0x188
7101e1e8a0  add x0,sp,#0x198
7101e1e8a4  bl 0x7103776910
7101e1e8a8  sub x0,x29,#0xb0
7101e1e8ac  mov w1,w21
7101e1e8b0  sub x22,x29,#0xb0
7101e1e8b4  bl 0x71025c6970
7101e1e8b8  add x1,x22,#0x8
7101e1e8bc  add x0,sp,#0x188
7101e1e8c0  bl 0x710377a120
7101e1e8c4  ldr x0,[sp, #0x190]
7101e1e8c8  adrp x23,0x710523d000
7101e1e8cc  add x23,x23,#0x9a8
7101e1e8d0  stp x23,xzr,[sp, #0x188]
7101e1e8d4  cbz x0,0x7101e1e8dc
7101e1e8d8  bl 0x710392eb40
7101e1e8dc  add x22,x19,#0x580
7101e1e8e0  mov x0,x22
7101e1e8e4  mov w1,w21
7101e1e8e8  bl 0x7101dfe6f0
7101e1e8ec  ldr x0,[x20]
7101e1e8f0  mov w1,#0x1
7101e1e8f4  bl 0x710377cc80
7101e1e8f8  orr w8,wzr,#0xffff
7101e1e8fc  cmp w24,w8
7101e1e900  b.eq 0x7101e1e964
7101e1e904  ldr x9,[x19, #0x7e8]
7101e1e908  mov x8,xzr
7101e1e90c  and x9,x9,#0xffffff
7101e1e910  cbnz x9,0x7101e1e920
7101e1e914  b 0x7101e1e930
7101e1e918  add x8,x8,#0x1
7101e1e91c  cbz x9,0x7101e1e930
7101e1e920  ldr w10,[x19, #0x828]
7101e1e924  cmp x8,w10, SXTW 
7101e1e928  b.lt 0x7101e1e948
7101e1e92c  b 0x7101e1e964
7101e1e930  ldr x10,[x19, #0x768]
7101e1e934  ldr x11,[x19, #0x760]
7101e1e938  sub x10,x10,x11
7101e1e93c  lsr x10,x10,#0x3
7101e1e940  cmp x8,w10, SXTW 
7101e1e944  b.ge 0x7101e1e964
7101e1e948  ldr x10,[x19, #0x760]
7101e1e94c  ldr x10,[x10, x8, LSL #0x3]
7101e1e950  ldrh w10,[x10]
7101e1e954  cmp w10,w24
7101e1e958  b.ne 0x7101e1e918
7101e1e95c  bic w1,w8,w8, ASR #0x1f
7101e1e960  b 0x7101e1e968
7101e1e964  mov w1,wzr
7101e1e968  mov x0,x22
7101e1e96c  str w1,[x19, #0xb88]
7101e1e970  bl 0x7101e02dc0
7101e1e974  ldr w1,[x19, #0xb88]
7101e1e978  mov w3,#0x1
7101e1e97c  mov x0,x20
7101e1e980  mov w2,wzr
7101e1e984  bl 0x7103783c10
7101e1e988  ldrb w8,[x19, #0xf05]
7101e1e98c  cbz w8,0x7101e1e9c8
7101e1e990  mov w8,#0xffffffff
7101e1e994  str w8,[x19, #0xb30]
7101e1e998  ldr x20,[sp, #0x1a0]
7101e1e99c  adrp x8,0x710523d000
7101e1e9a0  add x8,x8,#0x988
7101e1e9a4  stp x8,xzr,[sp, #0x198]
7101e1e9a8  cbz x20,0x7101e1bfec
7101e1e9ac  ldr x0,[x20, #0x18]
7101e1e9b0  stp x23,xzr,[x20, #0x10]
7101e1e9b4  cbz x0,0x7101e1e9bc
7101e1e9b8  bl 0x710392eb40
7101e1e9bc  mov x0,x20
7101e1e9c0  bl 0x710392eb40
7101e1e9c4  b 0x7101e1bfec
7101e1e9c8  ldr w9,[x19, #0xb88]
7101e1e9cc  tbnz w9,#0x1f,0x7101e1e990
7101e1e9d0  ldr x8,[x20]
7101e1e9d4  ldr w10,[x8, #0x288]
7101e1e9d8  cmp w10,w9
7101e1e9dc  b.le 0x7101e1e990
7101e1e9e0  ldr w10,[x8, #0x29c]
7101e1e9e4  subs w9,w9,w10
7101e1e9e8  b.mi 0x7101e1e990
7101e1e9ec  ldr w10,[x8, #0x2c4]
7101e1e9f0  cmp w10,w9
7101e1e9f4  b.le 0x7101e1e990
7101e1e9f8  ldr w10,[x8, #0x2c0]
7101e1e9fc  cmp w10,w9
7101e1ea00  b.le 0x7101e1e990
7101e1ea04  ldr x8,[x8, #0x168]
7101e1ea08  ldr x8,[x8, w9, SXTW #0x3]
7101e1ea0c  ldr x20,[x8, #0x28]
7101e1ea10  cbz x20,0x7101e1e990
7101e1ea14  ldr x8,[x20]
7101e1ea18  ldr x8,[x8, #0x218]
7101e1ea1c  mov x0,x20
7101e1ea20  mov w1,wzr
7101e1ea24  blr x8
7101e1ea28  ldr x8,[x20]
7101e1ea2c  ldr x8,[x8, #0x410]
7101e1ea30  mov x0,x20
7101e1ea34  blr x8
7101e1ea38  ldr x8,[x20]
7101e1ea3c  ldr x8,[x8, #0x3f0]
7101e1ea40  mov x0,x20
7101e1ea44  mov w1,wzr
7101e1ea48  blr x8
7101e1ea4c  ldr x8,[x20]
7101e1ea50  ldr x8,[x8, #0x140]
7101e1ea54  mov x0,x20
7101e1ea58  blr x8
7101e1ea5c  cmp w0,#0x6
7101e1ea60  b.eq 0x7101e1ea8c
7101e1ea64  ldr x8,[x20]
7101e1ea68  ldr x8,[x8, #0x140]
7101e1ea6c  mov x0,x20
7101e1ea70  blr x8
7101e1ea74  cmp w0,#0x1
7101e1ea78  b.eq 0x7101e1ea8c
7101e1ea7c  ldr x8,[x20]
7101e1ea80  ldr x8,[x8, #0x400]
7101e1ea84  mov x0,x20
7101e1ea88  blr x8
7101e1ea8c  ldr x8,[x20]
7101e1ea90  ldr x8,[x8, #0x158]
7101e1ea94  mov x0,x20
7101e1ea98  blr x8
7101e1ea9c  tbnz w0,#0x0,0x7101e1e990
7101e1eaa0  ldr x8,[x20]
7101e1eaa4  ldr x8,[x8, #0x370]
7101e1eaa8  mov x0,x20
7101e1eaac  blr x8
7101e1eab0  b 0x7101e1e990
7101e1eab4  ldr x9,[x19, #0x768]
7101e1eab8  ldr x10,[x19, #0x760]
7101e1eabc  sub x9,x9,x10
7101e1eac0  lsr x9,x9,#0x3
7101e1eac4  cmp w9,w8
7101e1eac8  b.gt 0x7101e1dadc
7101e1eacc  adrp x8,0x7105329000
7101e1ead0  ldr x8,[x8, #0xf98]
7101e1ead4  ldr x8,[x8]
7101e1ead8  adrp x9,0x710532a000
7101e1eadc  add x9,x9,#0x878
7101e1eae0  orr w1,wzr,#0xffff
7101e1eae4  ldrb w9,[x9, #0x3e]
7101e1eae8  ldr x20,[x8, #0x30]
7101e1eaec  lsr w8,w1,#0x4
7101e1eaf0  cmp w8,#0x177
7101e1eaf4  tbnz w9,#0x0,0x7101e1eb4c
7101e1eaf8  b.cc 0x7101e1eba0
7101e1eafc  mov w8,#0xffffe890
7101e1eb00  add w8,w1,w8
7101e1eb04  cmp w8,#0x63
7101e1eb08  b.hi 0x7101e1ebf0
7101e1eb0c  and x8,x8,#0xffff
7101e1eb10  mov w9,#0x50
7101e1eb14  madd x9,x8,x9,x20
7101e1eb18  mov w10,#0x8cc8
7101e1eb1c  movk w10,#0x8, LSL #16
7101e1eb20  ldrsh w9,[x9, x10, LSL #0x0]
7101e1eb24  cmn w9,#0x1
7101e1eb28  b.eq 0x7101e1ebf0
7101e1eb2c  mov w9,#0x50
7101e1eb30  madd x8,x8,x9,x20
7101e1eb34  mov w9,#0x8cfe
7101e1eb38  movk w9,#0x8, LSL #16
7101e1eb3c  ldrb w10,[x8, x9, LSL ]
7101e1eb40  orr w10,w10,#0x1
7101e1eb44  strb w10,[x8, x9, LSL ]
7101e1eb48  b 0x7101e1ebf0
7101e1eb4c  b.cc 0x7101e1eccc
7101e1eb50  mov w8,#0xffffe890
7101e1eb54  add w8,w1,w8
7101e1eb58  cmp w8,#0x63
7101e1eb5c  b.hi 0x7101e1ed1c
7101e1eb60  and x8,x8,#0xffff
7101e1eb64  mov w9,#0x50
7101e1eb68  madd x9,x8,x9,x20
7101e1eb6c  mov w10,#0x8cc8
7101e1eb70  movk w10,#0x8, LSL #16
7101e1eb74  ldrsh w9,[x9, x10, LSL #0x0]
7101e1eb78  cmn w9,#0x1
7101e1eb7c  b.eq 0x7101e1ed1c
7101e1eb80  mov w9,#0x50
7101e1eb84  madd x8,x8,x9,x20
7101e1eb88  mov w9,#0x8cfe
7101e1eb8c  movk w9,#0x8, LSL #16
7101e1eb90  ldrb w10,[x8, x9, LSL ]
7101e1eb94  and w10,w10,#0xfe
7101e1eb98  strb w10,[x8, x9, LSL ]
7101e1eb9c  b 0x7101e1ed1c
7101e1eba0  adrp x8,0x7105314000
7101e1eba4  ldr x8,[x8, #0x510]
7101e1eba8  ldr x8,[x8]
7101e1ebac  ldr x8,[x8, #0xb8]
7101e1ebb0  ldr x8,[x8]
7101e1ebb4  ldr x8,[x8]
7101e1ebb8  mov w9,#0x34
7101e1ebbc  umaddl x8,w1,w9,x8
7101e1ebc0  ldrb w9,[x8, #0x8]
7101e1ebc4  orr w9,w9,#0x1
7101e1ebc8  mov x0,x20
7101e1ebcc  strb w9,[x8, #0x8]
7101e1ebd0  bl 0x71025226c0
7101e1ebd4  mov w8,#0xac14
7101e1ebd8  movk w8,#0x8, LSL #16
7101e1ebdc  add x8,x20,x8
7101e1ebe0  ldrb w9,[x8]
7101e1ebe4  cbnz w9,0x7101e1ebf0
7101e1ebe8  mov w9,#0x1
7101e1ebec  strb w9,[x8]
7101e1ebf0  adrp x8,0x710532f000
7101e1ebf4  ldr x8,[x8, #0x8d0]
7101e1ebf8  ldr x0,[x8, #0x8]
7101e1ebfc  ldrb w8,[x0, #0x191]
7101e1ec00  cbnz w8,0x7101e1ec8c
7101e1ec04  mov x20,#0xce93
7101e1ec08  movk x20,#0x2fbf, LSL #16
7101e1ec0c  movk x20,#0x15, LSL #32
7101e1ec10  mov w2,#0x4
7101e1ec14  mov x1,x20
7101e1ec18  bl 0x7103313f20
7101e1ec1c  tbz w0,#0x0,0x7101e1ec8c
7101e1ec20  add x0,sp,#0x2e8
7101e1ec24  mov x1,x20
7101e1ec28  add x21,sp,#0x2e8
7101e1ec2c  bl 0x71024076d0
7101e1ec30  ldr x9,[sp, #0x2f8]
7101e1ec34  add x8,x21,#0x10
7101e1ec38  adrp x10,0x7104f73000
7101e1ec3c  add x10,x10,#0xd50
7101e1ec40  str x10,[sp, #0x2f0]
7101e1ec44  cbz x9,0x7101e1edec
7101e1ec48  adrp x9,0x7106dd5000
7101e1ec4c  ldrb w9,[x9, #0x3a8]
7101e1ec50  cmp w9,#0x1
7101e1ec54  b.ne 0x7101e1eec0
7101e1ec58  adrp x10,0x7106dd5000
7101e1ec5c  ldr w9,[sp, #0x300]
7101e1ec60  ldr w10,[x10, #0x3ac]
7101e1ec64  cmp w9,w10
7101e1ec68  b.ne 0x7101e1eec0
7101e1ec6c  ldr x9,[sp, #0x2f8]
7101e1ec70  ldr wzr,[x9, #0x38]!
7101e1ec74  ldaxr w10,[x9]
7101e1ec78  sub w10,w10,#0x1
7101e1ec7c  add x21,sp,#0x2e8
7101e1ec80  stlxr w11,w10,[x9]
7101e1ec84  cbnz w11,0x7101e1ec74
7101e1ec88  b 0x7101e1edec
7101e1ec8c  mov x9,#0x650000000000
7101e1ec90  movk x9,#0x87, LSL #48
7101e1ec94  str x9,[sp, #0x300]
7101e1ec98  mov x9,#-0x1
7101e1ec9c  add x21,sp,#0x2e8
7101e1eca0  str xzr,[sp, #0x2f8]
7101e1eca4  add x8,x21,#0x10
7101e1eca8  strb wzr,[sp, #0x308]
7101e1ecac  str wzr,[sp, #0x2e8]
7101e1ecb0  str x9,[sp, #0x310]
7101e1ecb4  adrp x9,0x7104f73000
7101e1ecb8  add x9,x9,#0xd50
7101e1ecbc  str xzr,[sp, #0x320]
7101e1ecc0  str xzr,[sp, #0x318]
7101e1ecc4  str x9,[sp, #0x2f0]
7101e1ecc8  b 0x7101e1edec
7101e1eccc  adrp x8,0x7105314000
7101e1ecd0  ldr x8,[x8, #0x510]
7101e1ecd4  ldr x8,[x8]
7101e1ecd8  ldr x8,[x8, #0xb8]
7101e1ecdc  ldr x8,[x8]
7101e1ece0  ldr x8,[x8]
7101e1ece4  mov w9,#0x34
7101e1ece8  umaddl x8,w1,w9,x8
7101e1ecec  ldrb w9,[x8, #0x8]
7101e1ecf0  and w9,w9,#0xfe
7101e1ecf4  mov x0,x20
7101e1ecf8  strb w9,[x8, #0x8]
7101e1ecfc  bl 0x71025226c0
7101e1ed00  mov w8,#0xac14
7101e1ed04  movk w8,#0x8, LSL #16
7101e1ed08  add x8,x20,x8
7101e1ed0c  ldrb w9,[x8]
7101e1ed10  cbnz w9,0x7101e1ed1c
7101e1ed14  mov w9,#0x1
7101e1ed18  strb w9,[x8]
7101e1ed1c  adrp x8,0x710532f000
7101e1ed20  ldr x8,[x8, #0x8d0]
7101e1ed24  ldr x0,[x8, #0x8]
7101e1ed28  ldrb w8,[x0, #0x191]
7101e1ed2c  cbnz w8,0x7101e1edb8
7101e1ed30  mov x20,#0xdcd8
7101e1ed34  movk x20,#0xd723, LSL #16
7101e1ed38  movk x20,#0x16, LSL #32
7101e1ed3c  mov w2,#0x4
7101e1ed40  mov x1,x20
7101e1ed44  bl 0x7103313f20
7101e1ed48  tbz w0,#0x0,0x7101e1edb8
7101e1ed4c  sub x0,x29,#0xf8
7101e1ed50  mov x1,x20
7101e1ed54  sub x21,x29,#0xf8
7101e1ed58  bl 0x71024076d0
7101e1ed5c  ldur x9,[x29, #-0xe8]
7101e1ed60  add x8,x21,#0x10
7101e1ed64  adrp x10,0x7104f73000
7101e1ed68  add x10,x10,#0xd50
7101e1ed6c  stur x10,[x29, #-0xf0]
7101e1ed70  cbz x9,0x7101e1edec
7101e1ed74  adrp x9,0x7106dd5000
7101e1ed78  ldrb w9,[x9, #0x3a8]
7101e1ed7c  cmp w9,#0x1
7101e1ed80  b.ne 0x7101e1eec8
7101e1ed84  adrp x10,0x7106dd5000
7101e1ed88  ldur w9,[x29, #-0xe0]
7101e1ed8c  ldr w10,[x10, #0x3ac]
7101e1ed90  cmp w9,w10
7101e1ed94  b.ne 0x7101e1eec8
7101e1ed98  ldur x9,[x29, #-0xe8]
7101e1ed9c  ldr wzr,[x9, #0x38]!
7101e1eda0  ldaxr w10,[x9]
7101e1eda4  sub w10,w10,#0x1
7101e1eda8  sub x21,x29,#0xf8
7101e1edac  stlxr w11,w10,[x9]
7101e1edb0  cbnz w11,0x7101e1eda0
7101e1edb4  b 0x7101e1edec
7101e1edb8  mov x9,#0x650000000000
7101e1edbc  movk x9,#0x87, LSL #48
7101e1edc0  sub x21,x29,#0xf8
7101e1edc4  stp xzr,x9,[x29, #-0xe8]
7101e1edc8  mov x9,#-0x1
7101e1edcc  stp x9,xzr,[x29, #-0xd0]
7101e1edd0  adrp x9,0x7104f73000
7101e1edd4  add x9,x9,#0xd50
7101e1edd8  add x8,x21,#0x10
7101e1eddc  sturb wzr,[x29, #-0xd8]
7101e1ede0  stur wzr,[x29, #-0xf8]
7101e1ede4  stur xzr,[x29, #-0xc0]
7101e1ede8  stur x9,[x29, #-0xf0]
7101e1edec  str xzr,[x8]
7101e1edf0  strb wzr,[x21, #0x20]
7101e1edf4  ldr x20,[x22]
7101e1edf8  ldr x0,[x20, #0x160]
7101e1edfc  cbz x0,0x7101e1bfec
7101e1ee00  ldr x8,[x0]
7101e1ee04  ldr x8,[x8, #0x18]
7101e1ee08  ldr w21,[x20, #0x2a4]
7101e1ee0c  blr x8
7101e1ee10  ldr w8,[x20, #0x2c4]
7101e1ee14  cmp w8,#0x1
7101e1ee18  b.lt 0x7101e1ee94
7101e1ee1c  mov x22,xzr
7101e1ee20  ldr w9,[x20, #0x29c]
7101e1ee24  sub w9,w21,w9
7101e1ee28  cmp w9,w22
7101e1ee2c  b.ne 0x7101e1ee88
7101e1ee30  ldr w9,[x20, #0x288]
7101e1ee34  cmp w9,w21
7101e1ee38  b.le 0x7101e1ee88
7101e1ee3c  ldr x8,[x20, #0x168]
7101e1ee40  ldr x9,[x8, x22, LSL #0x3]
7101e1ee44  ldr x10,[x9, #0x20]
7101e1ee48  ldr x10,[x10]
7101e1ee4c  cbz x10,0x7101e1ee60
7101e1ee50  ldrb w9,[x10, #0x58]
7101e1ee54  orr w9,w9,#0x1
7101e1ee58  strb w9,[x10, #0x58]
7101e1ee5c  ldr x9,[x8, x22, LSL #0x3]
7101e1ee60  str w21,[x9, #0x30]
7101e1ee64  ldr x8,[x8, x22, LSL #0x3]
7101e1ee68  ldr x0,[x20, #0x160]
7101e1ee6c  ldr w1,[x8, #0x30]
7101e1ee70  add x2,x8,#0x8
7101e1ee74  add x3,x8,#0x18
7101e1ee78  ldr x8,[x0]
7101e1ee7c  ldr x8,[x8, #0x10]
7101e1ee80  blr x8
7101e1ee84  ldr w8,[x20, #0x2c4]
7101e1ee88  add x22,x22,#0x1
7101e1ee8c  cmp x22,w8, SXTW 
7101e1ee90  b.lt 0x7101e1ee20
7101e1ee94  ldr x0,[x20, #0x160]
7101e1ee98  ldr x8,[x0]
7101e1ee9c  ldr x8,[x8, #0x20]
7101e1eea0  blr x8
7101e1eea4  b 0x7101e1bfec
7101e1eea8  mov w9,#0x50
7101e1eeac  madd x9,x1,x9,x10
7101e1eeb0  mov w10,#0x1940
7101e1eeb4  movk w10,#0x1, LSL #16
7101e1eeb8  add x9,x9,x10
7101e1eebc  b 0x7101e1eae4
7101e1eec0  add x21,sp,#0x2e8
7101e1eec4  b 0x7101e1edec
7101e1eec8  sub x21,x29,#0xf8
7101e1eecc  b 0x7101e1edec
7101e1eed0  adrp x0,0x710593b000
7101e1eed4  add x0,x0,#0xa40
7101e1eed8  bl 0x71039c06b0
7101e1eedc  cbz w0,0x7101e1d3c0
7101e1eee0  adrp x8,0x710593b000
7101e1eee4  add x8,x8,#0xa48
7101e1eee8  ldarb w8,[x8]
7101e1eeec  tbz w8,#0x0,0x7101e1ef70
7101e1eef0  adrp x8,0x710593b000
7101e1eef4  adrp x9,0x710593b000
7101e1eef8  add x9,x9,#0xa50
7101e1eefc  adrp x0,0x710593b000
7101e1ef00  add x0,x0,#0xa40
7101e1ef04  str x9,[x8, #0xa58]
7101e1ef08  bl 0x71039c06c0
7101e1ef0c  cbnz x20,0x7101e1d3c4
7101e1ef10  b 0x7101e1d8c0
7101e1ef14  adrp x0,0x710593b000
7101e1ef18  add x0,x0,#0xa40
7101e1ef1c  bl 0x71039c06b0
7101e1ef20  cbz w0,0x7101e1d8e0
7101e1ef24  adrp x8,0x710593b000
7101e1ef28  add x8,x8,#0xa48
7101e1ef2c  ldarb w8,[x8]
7101e1ef30  tbz w8,#0x0,0x7101e1ef98
7101e1ef34  adrp x8,0x710593b000
7101e1ef38  adrp x9,0x710593b000
7101e1ef3c  add x9,x9,#0xa50
7101e1ef40  adrp x0,0x710593b000
7101e1ef44  add x0,x0,#0xa40
7101e1ef48  str x9,[x8, #0xa58]
7101e1ef4c  bl 0x71039c06c0
7101e1ef50  cbnz x20,0x7101e1d8e4
7101e1ef54  b 0x7101e1d91c
7101e1ef58  add x0,x19,#0xb60
7101e1ef5c  bl 0x71039c1330
7101e1ef60  add x0,x19,#0xb40
7101e1ef64  bl 0x71039c1330
7101e1ef68  add x0,x19,#0x548
7101e1ef6c  bl 0x71039c1330
7101e1ef70  adrp x0,0x710593b000
7101e1ef74  add x0,x0,#0xa48
7101e1ef78  bl 0x71039c06b0
7101e1ef7c  cbz w0,0x7101e1eef0
7101e1ef80  adrp x8,0x710593b000
7101e1ef84  adrp x0,0x710593b000
7101e1ef88  add x0,x0,#0xa48
7101e1ef8c  str xzr,[x8, #0xa50]
7101e1ef90  bl 0x71039c06c0
7101e1ef94  b 0x7101e1eef0
7101e1ef98  adrp x0,0x710593b000
7101e1ef9c  add x0,x0,#0xa48
7101e1efa0  bl 0x71039c06b0
7101e1efa4  cbz w0,0x7101e1ef34
7101e1efa8  adrp x8,0x710593b000
7101e1efac  adrp x0,0x710593b000
7101e1efb0  add x0,x0,#0xa48
7101e1efb4  str xzr,[x8, #0xa50]
7101e1efb8  bl 0x71039c06c0
7101e1efbc  b 0x7101e1ef34
