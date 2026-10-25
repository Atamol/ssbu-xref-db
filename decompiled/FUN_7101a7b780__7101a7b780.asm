// addr:      7101a7b780
// offset:    0x1a7b780
// name:      FUN_7101a7b780
// mangled:   
// size:      3256

7101a7b780  sub sp,sp,#0x140
7101a7b784  stp x28,x25,[sp, #0xf0]
7101a7b788  stp x24,x23,[sp, #0x100]
7101a7b78c  stp x22,x21,[sp, #0x110]
7101a7b790  stp x20,x19,[sp, #0x120]
7101a7b794  stp x29,x30,[sp, #0x130]
7101a7b798  add x29,sp,#0x130
7101a7b79c  ldr x8,[x0, #0x208]
7101a7b7a0  ldr x9,[x0, #0x200]
7101a7b7a4  sub x8,x8,x9
7101a7b7a8  mov x10,#0x8e39
7101a7b7ac  movk x10,#0x38e3, LSL #16
7101a7b7b0  movk x10,#0xe38e, LSL #32
7101a7b7b4  movk x10,#0x8e38, LSL #48
7101a7b7b8  asr x8,x8,#0x3
7101a7b7bc  mul x8,x8,x10
7101a7b7c0  sxtw x23,w1
7101a7b7c4  mov x19,x2
7101a7b7c8  cmp x8,x23
7101a7b7cc  b.ls 0x7101a7b94c
7101a7b7d0  ldr x8,[x19, #0x8]
7101a7b7d4  ldr x8,[x8, #0x8]
7101a7b7d8  mov x20,x0
7101a7b7dc  cbz x8,0x7101a7b7f8
7101a7b7e0  ldr x8,[x8, #0x18]
7101a7b7e4  cbz x8,0x7101a7b7f8
7101a7b7e8  ldrb w9,[x8, #0x58]
7101a7b7ec  orr w9,w9,#0x1
7101a7b7f0  strb w9,[x8, #0x58]
7101a7b7f4  ldr x9,[x20, #0x200]
7101a7b7f8  adrp x10,0x710532f000
7101a7b7fc  ldr x10,[x10, #0x730]
7101a7b800  ldr x10,[x10, #0x8]
7101a7b804  mov w11,#0x48
7101a7b808  madd x9,x23,x11,x9
7101a7b80c  ldrh w9,[x9, #0x30]
7101a7b810  ldr x11,[x10, #0x2e8]
7101a7b814  ldr x12,[x11, #0x18]!
7101a7b818  mov x8,#0xff0000000000
7101a7b81c  movk x8,#0x1eff, LSL #48
7101a7b820  cbz x12,0x7101a7b858
7101a7b824  mov x10,x11
7101a7b828  ldrh w13,[x12, #0x20]
7101a7b82c  cmp w13,w9
7101a7b830  cset w13,cc
7101a7b834  csel x10,x10,x12,cc
7101a7b838  ldr x12,[x12, w13, UXTW #0x3]
7101a7b83c  cbnz x12,0x7101a7b828
7101a7b840  cmp x10,x11
7101a7b844  b.eq 0x7101a7b858
7101a7b848  ldrh w11,[x10, #0x20]
7101a7b84c  cmp w11,w9
7101a7b850  b.hi 0x7101a7b858
7101a7b854  ldr x8,[x10, #0x28]
7101a7b858  sub x0,x29,#0x80
7101a7b85c  mov x1,x19
7101a7b860  stur x8,[x29, #-0x70]
7101a7b864  bl 0x7103776390
7101a7b868  mov w0,#0x10
7101a7b86c  mov w1,#0x8
7101a7b870  bl 0x710392e290
7101a7b874  mov x21,x0
7101a7b878  cbnz x0,0x7101a7b8c4
7101a7b87c  adrp x8,0x7105332000
7101a7b880  ldr x0,[x8, #0xf00]
7101a7b884  cbz x0,0x7101a7b8c0
7101a7b888  mov w8,#0x8
7101a7b88c  stur wzr,[x29, #-0x44]
7101a7b890  sub x1,x29,#0x44
7101a7b894  stur x8,[x29, #-0x58]
7101a7b898  ldr x8,[x0]
7101a7b89c  ldr x8,[x8, #0x30]
7101a7b8a0  sub x2,x29,#0x58
7101a7b8a4  blr x8
7101a7b8a8  tbz w0,#0x0,0x7101a7b8c0
7101a7b8ac  mov w0,#0x10
7101a7b8b0  mov w1,#0x8
7101a7b8b4  bl 0x710392e290
7101a7b8b8  mov x21,x0
7101a7b8bc  cbnz x0,0x7101a7b8c4
7101a7b8c0  mov x21,xzr
7101a7b8c4  str xzr,[x21]
7101a7b8c8  ldur x8,[x29, #-0x78]
7101a7b8cc  ldr x8,[x8, #0x8]
7101a7b8d0  cbz x8,0x7101a7ba20
7101a7b8d4  ldr x0,[x8, #0x60]
7101a7b8d8  cbz x0,0x7101a7ba20
7101a7b8dc  ldr x8,[x8, #0x18]
7101a7b8e0  add x1,x8,#0xb0
7101a7b8e4  bl 0x7103796f20
7101a7b8e8  str x0,[x21]
7101a7b8ec  cbz x0,0x7101a7ba24
7101a7b8f0  ldr x8,[x0]
7101a7b8f4  ldr x8,[x8, #0x208]
7101a7b8f8  mov w1,#0x1
7101a7b8fc  mov x22,x0
7101a7b900  mov w24,#0x1
7101a7b904  blr x8
7101a7b908  ldr x8,[x22]
7101a7b90c  ldr x8,[x8, #0x200]
7101a7b910  mov x0,x22
7101a7b914  blr x8
7101a7b918  tbz w0,#0x0,0x7101a7b930
7101a7b91c  ldr x8,[x22]
7101a7b920  ldr x8,[x8, #0x210]
7101a7b924  mov x0,x22
7101a7b928  blr x8
7101a7b92c  eor w24,w0,#0x1
7101a7b930  ldr x8,[x22]
7101a7b934  ldr x8,[x8, #0x388]
7101a7b938  and w1,w24,#0x1
7101a7b93c  mov x0,x22
7101a7b940  mov w2,wzr
7101a7b944  blr x8
7101a7b948  b 0x7101a7ba24
7101a7b94c  sub x0,x29,#0x68
7101a7b950  mov x1,x19
7101a7b954  bl 0x7103776390
7101a7b958  mov w0,#0x10
7101a7b95c  mov w1,#0x8
7101a7b960  bl 0x710392e290
7101a7b964  mov x19,x0
7101a7b968  cbnz x0,0x7101a7b9b4
7101a7b96c  adrp x8,0x7105332000
7101a7b970  ldr x0,[x8, #0xf00]
7101a7b974  cbz x0,0x7101a7b9b0
7101a7b978  mov w8,#0x8
7101a7b97c  stur wzr,[x29, #-0x70]
7101a7b980  sub x1,x29,#0x70
7101a7b984  stur x8,[x29, #-0x58]
7101a7b988  ldr x8,[x0]
7101a7b98c  ldr x8,[x8, #0x30]
7101a7b990  sub x2,x29,#0x58
7101a7b994  blr x8
7101a7b998  tbz w0,#0x0,0x7101a7b9b0
7101a7b99c  mov w0,#0x10
7101a7b9a0  mov w1,#0x8
7101a7b9a4  bl 0x710392e290
7101a7b9a8  mov x19,x0
7101a7b9ac  cbnz x0,0x7101a7b9b4
7101a7b9b0  mov x19,xzr
7101a7b9b4  str xzr,[x19]
7101a7b9b8  ldur x8,[x29, #-0x60]
7101a7b9bc  ldr x8,[x8, #0x8]
7101a7b9c0  cbz x8,0x7101a7bb10
7101a7b9c4  ldr x0,[x8, #0x60]
7101a7b9c8  cbz x0,0x7101a7bb10
7101a7b9cc  ldr x8,[x8, #0x18]
7101a7b9d0  add x1,x8,#0xb0
7101a7b9d4  bl 0x7103796f20
7101a7b9d8  str x0,[x19]
7101a7b9dc  cbz x0,0x7101a7c294
7101a7b9e0  ldr x8,[x0]
7101a7b9e4  ldr x8,[x8, #0x208]
7101a7b9e8  mov w1,wzr
7101a7b9ec  mov x20,x0
7101a7b9f0  blr x8
7101a7b9f4  ldr x8,[x20]
7101a7b9f8  ldr x8,[x8, #0x200]
7101a7b9fc  mov x0,x20
7101a7ba00  blr x8
7101a7ba04  tbz w0,#0x0,0x7101a7c278
7101a7ba08  ldr x8,[x20]
7101a7ba0c  ldr x8,[x8, #0x210]
7101a7ba10  mov x0,x20
7101a7ba14  blr x8
7101a7ba18  eor w8,w0,#0x1
7101a7ba1c  b 0x7101a7c27c
7101a7ba20  str xzr,[x21]
7101a7ba24  mov x0,x21
7101a7ba28  bl 0x710392eb40
7101a7ba2c  mov w0,#0x10
7101a7ba30  mov w1,#0x8
7101a7ba34  bl 0x710392e290
7101a7ba38  mov x21,x0
7101a7ba3c  cbnz x0,0x7101a7ba88
7101a7ba40  adrp x8,0x7105332000
7101a7ba44  ldr x0,[x8, #0xf00]
7101a7ba48  cbz x0,0x7101a7ba84
7101a7ba4c  mov w8,#0x8
7101a7ba50  stur wzr,[x29, #-0x44]
7101a7ba54  sub x1,x29,#0x44
7101a7ba58  stur x8,[x29, #-0x58]
7101a7ba5c  ldr x8,[x0]
7101a7ba60  ldr x8,[x8, #0x30]
7101a7ba64  sub x2,x29,#0x58
7101a7ba68  blr x8
7101a7ba6c  tbz w0,#0x0,0x7101a7ba84
7101a7ba70  mov w0,#0x10
7101a7ba74  mov w1,#0x8
7101a7ba78  bl 0x710392e290
7101a7ba7c  mov x21,x0
7101a7ba80  cbnz x0,0x7101a7ba88
7101a7ba84  mov x21,xzr
7101a7ba88  str xzr,[x21]
7101a7ba8c  ldur x8,[x29, #-0x78]
7101a7ba90  ldr x8,[x8, #0x8]
7101a7ba94  cbz x8,0x7101a7bb18
7101a7ba98  ldr x0,[x8, #0x60]
7101a7ba9c  cbz x0,0x7101a7bb18
7101a7baa0  ldr x8,[x8, #0x18]
7101a7baa4  add x1,x8,#0xb0
7101a7baa8  bl 0x7103796f20
7101a7baac  str x0,[x21]
7101a7bab0  cbz x0,0x7101a7bb1c
7101a7bab4  ldr x8,[x0]
7101a7bab8  ldr x8,[x8, #0x1f8]
7101a7babc  mov w1,#0x1
7101a7bac0  mov x22,x0
7101a7bac4  mov w24,#0x1
7101a7bac8  blr x8
7101a7bacc  ldr x8,[x22]
7101a7bad0  ldr x8,[x8, #0x200]
7101a7bad4  mov x0,x22
7101a7bad8  blr x8
7101a7badc  tbz w0,#0x0,0x7101a7baf4
7101a7bae0  ldr x8,[x22]
7101a7bae4  ldr x8,[x8, #0x210]
7101a7bae8  mov x0,x22
7101a7baec  blr x8
7101a7baf0  eor w24,w0,#0x1
7101a7baf4  ldr x8,[x22]
7101a7baf8  ldr x8,[x8, #0x388]
7101a7bafc  and w1,w24,#0x1
7101a7bb00  mov x0,x22
7101a7bb04  mov w2,wzr
7101a7bb08  blr x8
7101a7bb0c  b 0x7101a7bb1c
7101a7bb10  str xzr,[x19]
7101a7bb14  b 0x7101a7c294
7101a7bb18  str xzr,[x21]
7101a7bb1c  mov x0,x21
7101a7bb20  bl 0x710392eb40
7101a7bb24  adrp x1,0x710426f000
7101a7bb28  add x1,x1,#0xda4
7101a7bb2c  sub x8,x29,#0x58
7101a7bb30  sub x0,x29,#0x80
7101a7bb34  bl 0x71037780e0
7101a7bb38  ldur x21,[x29, #-0x50]
7101a7bb3c  ldr x22,[x21, #0x8]
7101a7bb40  cbz x22,0x7101a7bc30
7101a7bb44  ldrb w8,[x21, #0x10]
7101a7bb48  cbz w8,0x7101a7bc10
7101a7bb4c  ldr x8,[x21]
7101a7bb50  ldr x25,[x8, #0x80]
7101a7bb54  add x24,x8,#0x88
7101a7bb58  cmp x25,x24
7101a7bb5c  b.eq 0x7101a7bc10
7101a7bb60  ldr x0,[x25, #0x68]
7101a7bb64  ldr x8,[x0]
7101a7bb68  ldr x8,[x8, #0x148]
7101a7bb6c  blr x8
7101a7bb70  tbz w0,#0x0,0x7101a7bbb0
7101a7bb74  ldr x8,[x22]
7101a7bb78  ldr x1,[x25, #0x68]
7101a7bb7c  mov x0,x22
7101a7bb80  ldr x8,[x8, #0x120]
7101a7bb84  blr x8
7101a7bb88  tbz w0,#0x0,0x7101a7bbb0
7101a7bb8c  ldr x0,[x25, #0x68]
7101a7bb90  ldr x8,[x0]
7101a7bb94  ldr x8,[x8, #0x178]
7101a7bb98  blr x8
7101a7bb9c  ldr x0,[x25, #0x68]
7101a7bba0  ldr x8,[x0]
7101a7bba4  ldr x8,[x8, #0x140]
7101a7bba8  mov w1,wzr
7101a7bbac  blr x8
7101a7bbb0  ldr x8,[x25, #0x8]
7101a7bbb4  cbz x8,0x7101a7bbc8
7101a7bbb8  mov x25,x8
7101a7bbbc  ldr x8,[x8]
7101a7bbc0  cbnz x8,0x7101a7bbb8
7101a7bbc4  b 0x7101a7bbf4
7101a7bbc8  mov x8,x25
7101a7bbcc  ldr x9,[x8, #0x10]!
7101a7bbd0  ldr x10,[x9]
7101a7bbd4  cmp x10,x25
7101a7bbd8  b.eq 0x7101a7bc00
7101a7bbdc  ldr x9,[x8]
7101a7bbe0  mov x8,x9
7101a7bbe4  ldr x25,[x8, #0x10]!
7101a7bbe8  ldr x10,[x25]
7101a7bbec  cmp x10,x9
7101a7bbf0  b.ne 0x7101a7bbdc
7101a7bbf4  cmp x25,x24
7101a7bbf8  b.ne 0x7101a7bb60
7101a7bbfc  b 0x7101a7bc0c
7101a7bc00  mov x25,x9
7101a7bc04  cmp x25,x24
7101a7bc08  b.ne 0x7101a7bb60
7101a7bc0c  ldr x22,[x21, #0x8]
7101a7bc10  ldr x8,[x22]
7101a7bc14  ldr x8,[x8, #0x188]
7101a7bc18  mov x0,x22
7101a7bc1c  blr x8
7101a7bc20  adrp x8,0x710523d000
7101a7bc24  add x8,x8,#0x9e8
7101a7bc28  stp x8,xzr,[x29, #-0x58]
7101a7bc2c  b 0x7101a7bc40
7101a7bc30  adrp x8,0x710523d000
7101a7bc34  add x8,x8,#0x9e8
7101a7bc38  stp x8,xzr,[x29, #-0x58]
7101a7bc3c  cbz x21,0x7101a7bc48
7101a7bc40  mov x0,x21
7101a7bc44  bl 0x710392eb40
7101a7bc48  ldur x21,[x29, #-0x78]
7101a7bc4c  adrp x22,0x710523d000
7101a7bc50  add x22,x22,#0x988
7101a7bc54  stp x22,xzr,[x29, #-0x80]
7101a7bc58  cbz x21,0x7101a7bc7c
7101a7bc5c  ldr x0,[x21, #0x18]
7101a7bc60  adrp x8,0x710523d000
7101a7bc64  add x8,x8,#0x9a8
7101a7bc68  stp x8,xzr,[x21, #0x10]
7101a7bc6c  cbz x0,0x7101a7bc74
7101a7bc70  bl 0x710392eb40
7101a7bc74  mov x0,x21
7101a7bc78  bl 0x710392eb40
7101a7bc7c  sub x0,x29,#0x90
7101a7bc80  mov x1,x19
7101a7bc84  bl 0x7103776390
7101a7bc88  ldr x8,[x20, #0x200]
7101a7bc8c  mov w9,#0x48
7101a7bc90  madd x8,x23,x9,x8
7101a7bc94  ldrb w2,[x8, #0x32]
7101a7bc98  adrp x1,0x7104443000
7101a7bc9c  add x1,x1,#0xa54
7101a7bca0  sub x0,x29,#0x90
7101a7bca4  bl 0x7103778430
7101a7bca8  ldur x21,[x29, #-0x88]
7101a7bcac  stp x22,xzr,[x29, #-0x90]
7101a7bcb0  cbz x21,0x7101a7bcd4
7101a7bcb4  ldr x0,[x21, #0x18]
7101a7bcb8  adrp x8,0x710523d000
7101a7bcbc  add x8,x8,#0x9a8
7101a7bcc0  stp x8,xzr,[x21, #0x10]
7101a7bcc4  cbz x0,0x7101a7bccc
7101a7bcc8  bl 0x710392eb40
7101a7bccc  mov x0,x21
7101a7bcd0  bl 0x710392eb40
7101a7bcd4  add x0,sp,#0x90
7101a7bcd8  mov x1,x19
7101a7bcdc  bl 0x7103776390
7101a7bce0  ldr x8,[x20, #0x200]
7101a7bce4  mov w9,#0x48
7101a7bce8  madd x8,x23,x9,x8
7101a7bcec  add x21,x8,#0xc
7101a7bcf0  adrp x1,0x710433a000
7101a7bcf4  add x1,x1,#0x953
7101a7bcf8  sub x8,x29,#0x58
7101a7bcfc  add x0,sp,#0x90
7101a7bd00  bl 0x7103776910
7101a7bd04  adrp x1,0x7104400000
7101a7bd08  add x1,x1,#0xfab
7101a7bd0c  sub x0,x29,#0x58
7101a7bd10  mov w2,#0x1
7101a7bd14  mov x3,x21
7101a7bd18  bl 0x710377a280
7101a7bd1c  ldur x0,[x29, #-0x50]
7101a7bd20  adrp x24,0x710523d000
7101a7bd24  add x24,x24,#0x9a8
7101a7bd28  stp x24,xzr,[x29, #-0x58]
7101a7bd2c  cbz x0,0x7101a7bd34
7101a7bd30  bl 0x710392eb40
7101a7bd34  ldr x21,[sp, #0x98]
7101a7bd38  stp x22,xzr,[sp, #0x90]
7101a7bd3c  cbz x21,0x7101a7bd58
7101a7bd40  ldr x0,[x21, #0x18]
7101a7bd44  stp x24,xzr,[x21, #0x10]
7101a7bd48  cbz x0,0x7101a7bd50
7101a7bd4c  bl 0x710392eb40
7101a7bd50  mov x0,x21
7101a7bd54  bl 0x710392eb40
7101a7bd58  add x0,sp,#0x80
7101a7bd5c  mov x1,x19
7101a7bd60  bl 0x7103776390
7101a7bd64  ldr x8,[x20, #0x200]
7101a7bd68  mov w9,#0x48
7101a7bd6c  madd x8,x23,x9,x8
7101a7bd70  ldr w21,[x8, #0x24]
7101a7bd74  adrp x1,0x7104443000
7101a7bd78  add x1,x1,#0x13e
7101a7bd7c  sub x8,x29,#0x58
7101a7bd80  add x0,sp,#0x80
7101a7bd84  bl 0x7103776910
7101a7bd88  adrp x1,0x71042d5000
7101a7bd8c  add x1,x1,#0xdd8
7101a7bd90  sub x0,x29,#0x58
7101a7bd94  mov w2,#0x1
7101a7bd98  mov w3,w21
7101a7bd9c  bl 0x710377a280
7101a7bda0  ldur x0,[x29, #-0x50]
7101a7bda4  stp x24,xzr,[x29, #-0x58]
7101a7bda8  cbz x0,0x7101a7bdb0
7101a7bdac  bl 0x710392eb40
7101a7bdb0  ldr x21,[sp, #0x88]
7101a7bdb4  stp x22,xzr,[sp, #0x80]
7101a7bdb8  cbz x21,0x7101a7bdd4
7101a7bdbc  ldr x0,[x21, #0x18]
7101a7bdc0  stp x24,xzr,[x21, #0x10]
7101a7bdc4  cbz x0,0x7101a7bdcc
7101a7bdc8  bl 0x710392eb40
7101a7bdcc  mov x0,x21
7101a7bdd0  bl 0x710392eb40
7101a7bdd4  add x0,sp,#0x70
7101a7bdd8  mov x1,x19
7101a7bddc  bl 0x7103776390
7101a7bde0  ldr x8,[x20, #0x200]
7101a7bde4  mov w9,#0x48
7101a7bde8  madd x8,x23,x9,x8
7101a7bdec  adrp x9,0x71042a3000
7101a7bdf0  add x9,x9,#0x3c0
7101a7bdf4  ldrb w8,[x8, #0x28]
7101a7bdf8  ldr x0,[sp, #0x78]
7101a7bdfc  fmov s0,0x3f800000
7101a7be00  adrp x10,0x71042e7000
7101a7be04  add x10,x10,#0x5de
7101a7be08  cmp w8,#0x0
7101a7be0c  csel x1,x10,x9,eq
7101a7be10  bl 0x7103778300
7101a7be14  ldr x21,[sp, #0x78]
7101a7be18  stp x22,xzr,[sp, #0x70]
7101a7be1c  cbz x21,0x7101a7be38
7101a7be20  ldr x0,[x21, #0x18]
7101a7be24  stp x24,xzr,[x21, #0x10]
7101a7be28  cbz x0,0x7101a7be30
7101a7be2c  bl 0x710392eb40
7101a7be30  mov x0,x21
7101a7be34  bl 0x710392eb40
7101a7be38  add x0,sp,#0x60
7101a7be3c  mov x1,x19
7101a7be40  bl 0x7103776390
7101a7be44  ldr x8,[x20, #0x200]
7101a7be48  mov w9,#0x48
7101a7be4c  madd x8,x23,x9,x8
7101a7be50  adrp x9,0x710432a000
7101a7be54  add x9,x9,#0x744
7101a7be58  ldrb w8,[x8, #0x29]
7101a7be5c  ldr x0,[sp, #0x68]
7101a7be60  fmov s0,0x3f800000
7101a7be64  adrp x10,0x71042f8000
7101a7be68  add x10,x10,#0xa93
7101a7be6c  cmp w8,#0x0
7101a7be70  csel x1,x10,x9,eq
7101a7be74  bl 0x7103778300
7101a7be78  ldr x21,[sp, #0x68]
7101a7be7c  stp x22,xzr,[sp, #0x60]
7101a7be80  cbz x21,0x7101a7be9c
7101a7be84  ldr x0,[x21, #0x18]
7101a7be88  stp x24,xzr,[x21, #0x10]
7101a7be8c  cbz x0,0x7101a7be94
7101a7be90  bl 0x710392eb40
7101a7be94  mov x0,x21
7101a7be98  bl 0x710392eb40
7101a7be9c  add x0,sp,#0x50
7101a7bea0  mov x1,x19
7101a7bea4  bl 0x7103776390
7101a7bea8  ldr x8,[x20, #0x200]
7101a7beac  mov w9,#0x48
7101a7beb0  madd x8,x23,x9,x8
7101a7beb4  adrp x9,0x7104443000
7101a7beb8  add x9,x9,#0x536
7101a7bebc  ldrb w8,[x8, #0x2a]
7101a7bec0  ldr x0,[sp, #0x58]
7101a7bec4  fmov s0,0x3f800000
7101a7bec8  adrp x10,0x71042f8000
7101a7becc  add x10,x10,#0x1a7
7101a7bed0  cmp w8,#0x0
7101a7bed4  csel x1,x10,x9,eq
7101a7bed8  bl 0x7103778300
7101a7bedc  ldr x21,[sp, #0x58]
7101a7bee0  stp x22,xzr,[sp, #0x50]
7101a7bee4  cbz x21,0x7101a7bf00
7101a7bee8  ldr x0,[x21, #0x18]
7101a7beec  stp x24,xzr,[x21, #0x10]
7101a7bef0  cbz x0,0x7101a7bef8
7101a7bef4  bl 0x710392eb40
7101a7bef8  mov x0,x21
7101a7befc  bl 0x710392eb40
7101a7bf00  ldr x21,[x20, #0x140]
7101a7bf04  add x0,sp,#0x40
7101a7bf08  mov x1,x19
7101a7bf0c  bl 0x7103776390
7101a7bf10  ldr x8,[x20, #0x200]
7101a7bf14  mov w9,#0x48
7101a7bf18  madd x8,x23,x9,x8
7101a7bf1c  add x2,x8,#0x34
7101a7bf20  add x1,sp,#0x40
7101a7bf24  mov x0,x21
7101a7bf28  bl 0x7101aeec40
7101a7bf2c  ldr x21,[sp, #0x48]
7101a7bf30  stp x22,xzr,[sp, #0x40]
7101a7bf34  cbz x21,0x7101a7bf50
7101a7bf38  ldr x0,[x21, #0x18]
7101a7bf3c  stp x24,xzr,[x21, #0x10]
7101a7bf40  cbz x0,0x7101a7bf48
7101a7bf44  bl 0x710392eb40
7101a7bf48  mov x0,x21
7101a7bf4c  bl 0x710392eb40
7101a7bf50  ldr x0,[x20, #0x140]
7101a7bf54  sub x2,x29,#0x70
7101a7bf58  mov x1,x19
7101a7bf5c  bl 0x7101aeeea0
7101a7bf60  ldr w8,[x20, #0x130]
7101a7bf64  cmp w8,#0x4
7101a7bf68  b.ne 0x7101a7c12c
7101a7bf6c  add x0,sp,#0x30
7101a7bf70  mov x1,x19
7101a7bf74  bl 0x7103776390
7101a7bf78  ldr x8,[x20, #0x200]
7101a7bf7c  mov w9,#0x48
7101a7bf80  madd x8,x23,x9,x8
7101a7bf84  adrp x9,0x7104454000
7101a7bf88  add x9,x9,#0x5b7
7101a7bf8c  ldrb w8,[x8, #0x29]
7101a7bf90  ldr x0,[sp, #0x38]
7101a7bf94  fmov s0,0x3f800000
7101a7bf98  adrp x10,0x7104329000
7101a7bf9c  add x10,x10,#0xb6a
7101a7bfa0  cmp w8,#0x0
7101a7bfa4  csel x1,x10,x9,eq
7101a7bfa8  bl 0x7103778300
7101a7bfac  ldr x21,[sp, #0x38]
7101a7bfb0  stp x22,xzr,[sp, #0x30]
7101a7bfb4  cbz x21,0x7101a7bfd0
7101a7bfb8  ldr x0,[x21, #0x18]
7101a7bfbc  stp x24,xzr,[x21, #0x10]
7101a7bfc0  cbz x0,0x7101a7bfc8
7101a7bfc4  bl 0x710392eb40
7101a7bfc8  mov x0,x21
7101a7bfcc  bl 0x710392eb40
7101a7bfd0  ldr x8,[x20, #0x200]
7101a7bfd4  mov w9,#0x48
7101a7bfd8  madd x8,x23,x9,x8
7101a7bfdc  ldrb w8,[x8, #0x29]
7101a7bfe0  cbnz w8,0x7101a7c048
7101a7bfe4  add x0,sp,#0x20
7101a7bfe8  mov x1,x19
7101a7bfec  bl 0x7103776390
7101a7bff0  ldr x8,[x20, #0x200]
7101a7bff4  mov w9,#0x48
7101a7bff8  madd x8,x23,x9,x8
7101a7bffc  adrp x9,0x710438d000
7101a7c000  add x9,x9,#0x2cf
7101a7c004  ldrb w8,[x8, #0x2b]
7101a7c008  ldr x0,[sp, #0x28]
7101a7c00c  fmov s0,0x3f800000
7101a7c010  adrp x10,0x7104292000
7101a7c014  add x10,x10,#0x479
7101a7c018  cmp w8,#0x0
7101a7c01c  csel x1,x10,x9,eq
7101a7c020  bl 0x7103778300
7101a7c024  ldr x20,[sp, #0x28]
7101a7c028  stp x22,xzr,[sp, #0x20]
7101a7c02c  cbz x20,0x7101a7c048
7101a7c030  ldr x0,[x20, #0x18]
7101a7c034  stp x24,xzr,[x20, #0x10]
7101a7c038  cbz x0,0x7101a7c040
7101a7c03c  bl 0x710392eb40
7101a7c040  mov x0,x20
7101a7c044  bl 0x710392eb40
7101a7c048  mov w0,#0x10
7101a7c04c  mov w1,#0x8
7101a7c050  bl 0x710392e290
7101a7c054  mov x20,x0
7101a7c058  cbnz x0,0x7101a7c0a4
7101a7c05c  adrp x8,0x7105332000
7101a7c060  ldr x0,[x8, #0xf00]
7101a7c064  cbz x0,0x7101a7c0a0
7101a7c068  mov w8,#0x8
7101a7c06c  stur wzr,[x29, #-0x44]
7101a7c070  sub x1,x29,#0x44
7101a7c074  stur x8,[x29, #-0x58]
7101a7c078  ldr x8,[x0]
7101a7c07c  ldr x8,[x8, #0x30]
7101a7c080  sub x2,x29,#0x58
7101a7c084  blr x8
7101a7c088  tbz w0,#0x0,0x7101a7c0a0
7101a7c08c  mov w0,#0x10
7101a7c090  mov w1,#0x8
7101a7c094  bl 0x710392e290
7101a7c098  mov x20,x0
7101a7c09c  cbnz x0,0x7101a7c0a4
7101a7c0a0  mov x20,xzr
7101a7c0a4  str xzr,[x20]
7101a7c0a8  ldr x8,[x19, #0x8]
7101a7c0ac  ldr x8,[x8, #0x8]
7101a7c0b0  cbz x8,0x7101a7c238
7101a7c0b4  ldr x0,[x8, #0x60]
7101a7c0b8  cbz x0,0x7101a7c238
7101a7c0bc  ldr x8,[x8, #0x18]
7101a7c0c0  add x1,x8,#0xb0
7101a7c0c4  bl 0x7103796f20
7101a7c0c8  str x0,[x20]
7101a7c0cc  cbz x0,0x7101a7c23c
7101a7c0d0  ldr x8,[x0]
7101a7c0d4  ldr x8,[x8, #0x208]
7101a7c0d8  mov w1,#0x1
7101a7c0dc  mov x21,x0
7101a7c0e0  mov w23,#0x1
7101a7c0e4  blr x8
7101a7c0e8  ldr x8,[x21]
7101a7c0ec  ldr x8,[x8, #0x200]
7101a7c0f0  mov x0,x21
7101a7c0f4  blr x8
7101a7c0f8  tbz w0,#0x0,0x7101a7c110
7101a7c0fc  ldr x8,[x21]
7101a7c100  ldr x8,[x8, #0x210]
7101a7c104  mov x0,x21
7101a7c108  blr x8
7101a7c10c  eor w23,w0,#0x1
7101a7c110  ldr x8,[x21]
7101a7c114  ldr x8,[x8, #0x388]
7101a7c118  and w1,w23,#0x1
7101a7c11c  mov x0,x21
7101a7c120  mov w2,wzr
7101a7c124  blr x8
7101a7c128  b 0x7101a7c23c
7101a7c12c  add x0,sp,#0x10
7101a7c130  mov x1,x19
7101a7c134  bl 0x7103776390
7101a7c138  ldr x0,[sp, #0x18]
7101a7c13c  fmov s0,0x3f800000
7101a7c140  adrp x1,0x7104292000
7101a7c144  add x1,x1,#0x479
7101a7c148  bl 0x7103778300
7101a7c14c  ldr x20,[sp, #0x18]
7101a7c150  stp x22,xzr,[sp, #0x10]
7101a7c154  cbz x20,0x7101a7c170
7101a7c158  ldr x0,[x20, #0x18]
7101a7c15c  stp x24,xzr,[x20, #0x10]
7101a7c160  cbz x0,0x7101a7c168
7101a7c164  bl 0x710392eb40
7101a7c168  mov x0,x20
7101a7c16c  bl 0x710392eb40
7101a7c170  mov w0,#0x10
7101a7c174  mov w1,#0x8
7101a7c178  bl 0x710392e290
7101a7c17c  mov x20,x0
7101a7c180  cbnz x0,0x7101a7c1cc
7101a7c184  adrp x8,0x7105332000
7101a7c188  ldr x0,[x8, #0xf00]
7101a7c18c  cbz x0,0x7101a7c1c8
7101a7c190  mov w8,#0x8
7101a7c194  stur wzr,[x29, #-0x44]
7101a7c198  sub x1,x29,#0x44
7101a7c19c  stur x8,[x29, #-0x58]
7101a7c1a0  ldr x8,[x0]
7101a7c1a4  ldr x8,[x8, #0x30]
7101a7c1a8  sub x2,x29,#0x58
7101a7c1ac  blr x8
7101a7c1b0  tbz w0,#0x0,0x7101a7c1c8
7101a7c1b4  mov w0,#0x10
7101a7c1b8  mov w1,#0x8
7101a7c1bc  bl 0x710392e290
7101a7c1c0  mov x20,x0
7101a7c1c4  cbnz x0,0x7101a7c1cc
7101a7c1c8  mov x20,xzr
7101a7c1cc  str xzr,[x20]
7101a7c1d0  ldr x8,[x19, #0x8]
7101a7c1d4  ldr x8,[x8, #0x8]
7101a7c1d8  cbz x8,0x7101a7c238
7101a7c1dc  ldr x0,[x8, #0x60]
7101a7c1e0  cbz x0,0x7101a7c238
7101a7c1e4  ldr x8,[x8, #0x18]
7101a7c1e8  add x1,x8,#0xb0
7101a7c1ec  bl 0x7103796f20
7101a7c1f0  str x0,[x20]
7101a7c1f4  cbz x0,0x7101a7c23c
7101a7c1f8  ldr x8,[x0]
7101a7c1fc  ldr x8,[x8, #0x208]
7101a7c200  mov w1,wzr
7101a7c204  mov x21,x0
7101a7c208  blr x8
7101a7c20c  ldr x8,[x21]
7101a7c210  ldr x8,[x8, #0x200]
7101a7c214  mov x0,x21
7101a7c218  blr x8
7101a7c21c  tbz w0,#0x0,0x7101a7c418
7101a7c220  ldr x8,[x21]
7101a7c224  ldr x8,[x8, #0x210]
7101a7c228  mov x0,x21
7101a7c22c  blr x8
7101a7c230  eor w8,w0,#0x1
7101a7c234  b 0x7101a7c41c
7101a7c238  str xzr,[x20]
7101a7c23c  mov x0,x20
7101a7c240  bl 0x710392eb40
7101a7c244  mov x0,sp
7101a7c248  mov x1,x19
7101a7c24c  bl 0x7103776390
7101a7c250  ldr x0,[sp, #0x8]
7101a7c254  fmov s0,0x3f800000
7101a7c258  adrp x1,0x710426f000
7101a7c25c  add x1,x1,#0xb50
7101a7c260  bl 0x7103778300
7101a7c264  ldr x19,[sp, #0x8]
7101a7c268  stp x22,xzr,[sp]
7101a7c26c  cbz x19,0x7101a7c3fc
7101a7c270  str x24,[x19, #0x10]
7101a7c274  b 0x7101a7c3e4
7101a7c278  mov w8,#0x1
7101a7c27c  ldr x9,[x20]
7101a7c280  ldr x9,[x9, #0x388]
7101a7c284  and w1,w8,#0x1
7101a7c288  mov x0,x20
7101a7c28c  mov w2,wzr
7101a7c290  blr x9
7101a7c294  mov x0,x19
7101a7c298  bl 0x710392eb40
7101a7c29c  mov w0,#0x10
7101a7c2a0  mov w1,#0x8
7101a7c2a4  bl 0x710392e290
7101a7c2a8  mov x19,x0
7101a7c2ac  cbnz x0,0x7101a7c2f8
7101a7c2b0  adrp x8,0x7105332000
7101a7c2b4  ldr x0,[x8, #0xf00]
7101a7c2b8  cbz x0,0x7101a7c2f4
7101a7c2bc  mov w8,#0x8
7101a7c2c0  stur wzr,[x29, #-0x70]
7101a7c2c4  sub x1,x29,#0x70
7101a7c2c8  stur x8,[x29, #-0x58]
7101a7c2cc  ldr x8,[x0]
7101a7c2d0  ldr x8,[x8, #0x30]
7101a7c2d4  sub x2,x29,#0x58
7101a7c2d8  blr x8
7101a7c2dc  tbz w0,#0x0,0x7101a7c2f4
7101a7c2e0  mov w0,#0x10
7101a7c2e4  mov w1,#0x8
7101a7c2e8  bl 0x710392e290
7101a7c2ec  mov x19,x0
7101a7c2f0  cbnz x0,0x7101a7c2f8
7101a7c2f4  mov x19,xzr
7101a7c2f8  str xzr,[x19]
7101a7c2fc  ldur x8,[x29, #-0x60]
7101a7c300  ldr x8,[x8, #0x8]
7101a7c304  cbz x8,0x7101a7c364
7101a7c308  ldr x0,[x8, #0x60]
7101a7c30c  cbz x0,0x7101a7c364
7101a7c310  ldr x8,[x8, #0x18]
7101a7c314  add x1,x8,#0xb0
7101a7c318  bl 0x7103796f20
7101a7c31c  str x0,[x19]
7101a7c320  cbz x0,0x7101a7c388
7101a7c324  ldr x8,[x0]
7101a7c328  ldr x8,[x8, #0x1f8]
7101a7c32c  mov w1,wzr
7101a7c330  mov x20,x0
7101a7c334  blr x8
7101a7c338  ldr x8,[x20]
7101a7c33c  ldr x8,[x8, #0x200]
7101a7c340  mov x0,x20
7101a7c344  blr x8
7101a7c348  tbz w0,#0x0,0x7101a7c36c
7101a7c34c  ldr x8,[x20]
7101a7c350  ldr x8,[x8, #0x210]
7101a7c354  mov x0,x20
7101a7c358  blr x8
7101a7c35c  eor w8,w0,#0x1
7101a7c360  b 0x7101a7c370
7101a7c364  str xzr,[x19]
7101a7c368  b 0x7101a7c388
7101a7c36c  mov w8,#0x1
7101a7c370  ldr x9,[x20]
7101a7c374  ldr x9,[x9, #0x388]
7101a7c378  and w1,w8,#0x1
7101a7c37c  mov x0,x20
7101a7c380  mov w2,wzr
7101a7c384  blr x9
7101a7c388  mov x0,x19
7101a7c38c  bl 0x710392eb40
7101a7c390  adrp x1,0x710426f000
7101a7c394  add x1,x1,#0xda4
7101a7c398  sub x8,x29,#0x58
7101a7c39c  sub x0,x29,#0x68
7101a7c3a0  bl 0x71037780e0
7101a7c3a4  sub x0,x29,#0x58
7101a7c3a8  bl 0x710377b140
7101a7c3ac  ldur x0,[x29, #-0x50]
7101a7c3b0  adrp x8,0x710523d000
7101a7c3b4  add x8,x8,#0x9e8
7101a7c3b8  stp x8,xzr,[x29, #-0x58]
7101a7c3bc  cbz x0,0x7101a7c3c4
7101a7c3c0  bl 0x710392eb40
7101a7c3c4  ldur x19,[x29, #-0x60]
7101a7c3c8  adrp x8,0x710523d000
7101a7c3cc  add x8,x8,#0x988
7101a7c3d0  stp x8,xzr,[x29, #-0x68]
7101a7c3d4  cbz x19,0x7101a7c3fc
7101a7c3d8  adrp x8,0x710523d000
7101a7c3dc  add x8,x8,#0x9a8
7101a7c3e0  str x8,[x19, #0x10]
7101a7c3e4  ldr x0,[x19, #0x18]
7101a7c3e8  str xzr,[x19, #0x18]
7101a7c3ec  cbz x0,0x7101a7c3f4
7101a7c3f0  bl 0x710392eb40
7101a7c3f4  mov x0,x19
7101a7c3f8  bl 0x710392eb40
7101a7c3fc  ldp x29,x30,[sp, #0x130]
7101a7c400  ldp x20,x19,[sp, #0x120]
7101a7c404  ldp x22,x21,[sp, #0x110]
7101a7c408  ldp x24,x23,[sp, #0x100]
7101a7c40c  ldp x28,x25,[sp, #0xf0]
7101a7c410  add sp,sp,#0x140
7101a7c414  ret
7101a7c418  mov w8,#0x1
7101a7c41c  ldr x9,[x21]
7101a7c420  ldr x9,[x9, #0x388]
7101a7c424  and w1,w8,#0x1
7101a7c428  mov x0,x21
7101a7c42c  mov w2,wzr
7101a7c430  blr x9
7101a7c434  b 0x7101a7c23c
