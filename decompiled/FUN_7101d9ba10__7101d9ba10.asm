// addr:      7101d9ba10
// offset:    0x1d9ba10
// name:      FUN_7101d9ba10
// mangled:   
// size:      1248

7101d9ba10  sub sp,sp,#0x80
7101d9ba14  stp x24,x23,[sp, #0x40]
7101d9ba18  stp x22,x21,[sp, #0x50]
7101d9ba1c  stp x20,x19,[sp, #0x60]
7101d9ba20  stp x29,x30,[sp, #0x70]
7101d9ba24  add x29,sp,#0x70
7101d9ba28  ldr w8,[x0, #0x11c]
7101d9ba2c  mov x19,x0
7101d9ba30  cbz w8,0x7101d9bad4
7101d9ba34  ldr x8,[x19, #0x178]
7101d9ba38  ldr x0,[x8, #0x8]
7101d9ba3c  cbz x0,0x7101d9ba60
7101d9ba40  adrp x1,0x71042e7000
7101d9ba44  add x1,x1,#0x633
7101d9ba48  bl 0x71037964b0
7101d9ba4c  cbz x0,0x7101d9ba60
7101d9ba50  ldr x8,[x0]
7101d9ba54  ldr x8,[x8, #0x138]
7101d9ba58  blr x8
7101d9ba5c  tbz w0,#0x0,0x7101d9bed4
7101d9ba60  ldr x8,[x19, #0x168]
7101d9ba64  ldr x0,[x8, #0x8]
7101d9ba68  cbz x0,0x7101d9ba8c
7101d9ba6c  adrp x1,0x71042e7000
7101d9ba70  add x1,x1,#0x633
7101d9ba74  bl 0x71037964b0
7101d9ba78  cbz x0,0x7101d9ba8c
7101d9ba7c  ldr x8,[x0]
7101d9ba80  ldr x8,[x8, #0x138]
7101d9ba84  blr x8
7101d9ba88  tbz w0,#0x0,0x7101d9bed4
7101d9ba8c  ldr x8,[x19, #0x140]
7101d9ba90  ldr x21,[x8, #0x80]
7101d9ba94  mov w8,#0x2268
7101d9ba98  ldr x0,[x21, #0x2268]
7101d9ba9c  add x20,x21,x8
7101d9baa0  ldr x8,[x0]
7101d9baa4  ldr x8,[x8, #0x70]
7101d9baa8  mov w1,wzr
7101d9baac  blr x8
7101d9bab0  mov w8,#0x11b4
7101d9bab4  ldrb w8,[x21, x8, LSL ]
7101d9bab8  cbz w8,0x7101d9bc10
7101d9babc  ldr x0,[x20]
7101d9bac0  ldr w8,[x0, #0x254]
7101d9bac4  cmp w8,#0x3
7101d9bac8  b.ne 0x7101d9bc20
7101d9bacc  bl 0x710376b960
7101d9bad0  b 0x7101d9bc20
7101d9bad4  ldr x0,[x19, #0x1b0]
7101d9bad8  ldr x8,[x0]
7101d9badc  ldr x8,[x8, #0x60]
7101d9bae0  mov w1,#0x1
7101d9bae4  add x20,x19,#0x1b0
7101d9bae8  blr x8
7101d9baec  ldr x9,[x19, #0x1b0]
7101d9baf0  ldrb w8,[x19, #0x1c5]
7101d9baf4  ldr x10,[x9, #0x1b8]
7101d9baf8  cbz x10,0x7101d9bb70
7101d9bafc  add x11,x9,#0x1b8
7101d9bb00  mov x9,x11
7101d9bb04  ldr w12,[x10, #0x20]
7101d9bb08  cmp w12,#0x0
7101d9bb0c  cset w12,lt
7101d9bb10  csel x9,x9,x10,lt
7101d9bb14  ldr x10,[x10, w12, UXTW #0x3]
7101d9bb18  cbnz x10,0x7101d9bb04
7101d9bb1c  cmp x9,x11
7101d9bb20  b.eq 0x7101d9bb70
7101d9bb24  ldr w10,[x9, #0x20]
7101d9bb28  cmp w10,#0x0
7101d9bb2c  b.gt 0x7101d9bb70
7101d9bb30  ldr x21,[x9, #0x28]
7101d9bb34  cbz x21,0x7101d9bb70
7101d9bb38  cmp w8,#0x0
7101d9bb3c  ldr x8,[x21]
7101d9bb40  cset w1,ne
7101d9bb44  cset w22,eq
7101d9bb48  ldr x8,[x8, #0x1f8]
7101d9bb4c  mov x0,x21
7101d9bb50  blr x8
7101d9bb54  ldr x8,[x21]
7101d9bb58  ldr x8,[x8, #0x388]
7101d9bb5c  mov x0,x21
7101d9bb60  mov w1,w22
7101d9bb64  mov w2,wzr
7101d9bb68  blr x8
7101d9bb6c  ldrb w8,[x19, #0x1c5]
7101d9bb70  ldr x0,[x20]
7101d9bb74  ldr x9,[x0]
7101d9bb78  ldr x9,[x9, #0x70]
7101d9bb7c  cbz w8,0x7101d9bec8
7101d9bb80  mov w1,#0x1
7101d9bb84  blr x9
7101d9bb88  mov w2,#0x1
7101d9bb8c  mov x0,x20
7101d9bb90  mov w1,wzr
7101d9bb94  bl 0x7103771a80
7101d9bb98  ldr x8,[x20]
7101d9bb9c  ldr x9,[x8, #0x1b8]
7101d9bba0  cbz x9,0x7101d9bed0
7101d9bba4  add x10,x8,#0x1b8
7101d9bba8  mov x8,x10
7101d9bbac  ldr w11,[x9, #0x20]
7101d9bbb0  cmp w11,#0x0
7101d9bbb4  cset w11,lt
7101d9bbb8  csel x8,x8,x9,lt
7101d9bbbc  ldr x9,[x9, w11, UXTW #0x3]
7101d9bbc0  cbnz x9,0x7101d9bbac
7101d9bbc4  cmp x8,x10
7101d9bbc8  b.eq 0x7101d9bed0
7101d9bbcc  ldr w9,[x8, #0x20]
7101d9bbd0  cmp w9,#0x0
7101d9bbd4  b.gt 0x7101d9bed0
7101d9bbd8  ldr x20,[x8, #0x28]
7101d9bbdc  cbz x20,0x7101d9bed0
7101d9bbe0  ldr x8,[x20]
7101d9bbe4  ldr x8,[x8, #0x1f8]
7101d9bbe8  mov w1,#0x1
7101d9bbec  mov x0,x20
7101d9bbf0  blr x8
7101d9bbf4  ldr x8,[x20]
7101d9bbf8  ldr x8,[x8, #0x388]
7101d9bbfc  mov x0,x20
7101d9bc00  mov w1,wzr
7101d9bc04  mov w2,wzr
7101d9bc08  blr x8
7101d9bc0c  b 0x7101d9bed0
7101d9bc10  orr w1,wzr,#0x3
7101d9bc14  mov x0,x20
7101d9bc18  mov w2,wzr
7101d9bc1c  bl 0x7103771a80
7101d9bc20  ldp x20,x21,[x19, #0x1e0]
7101d9bc24  cmp x21,x20
7101d9bc28  b.eq 0x7101d9bc68
7101d9bc2c  cmp x20,x21
7101d9bc30  b.eq 0x7101d9bc60
7101d9bc34  mov w22,#0x2
7101d9bc38  ldr w8,[x20, #0x10]
7101d9bc3c  cbz w8,0x7101d9bc54
7101d9bc40  ldrb w1,[x20, #0x14]
7101d9bc44  ldrb w2,[x20, #0x15]
7101d9bc48  mov x0,x20
7101d9bc4c  bl 0x71025b1740
7101d9bc50  str w22,[x20, #0x10]
7101d9bc54  add x20,x20,#0x18
7101d9bc58  cmp x21,x20
7101d9bc5c  b.ne 0x7101d9bc38
7101d9bc60  mov w8,#0x2
7101d9bc64  str w8,[x19, #0x1f8]
7101d9bc68  ldrsw x8,[x19, #0x114]
7101d9bc6c  ldrb w9,[x19, #0x1c5]
7101d9bc70  cmp w8,#0x13
7101d9bc74  cbz w9,0x7101d9bc84
7101d9bc78  b.cs 0x7101d9beec
7101d9bc7c  mov w9,#0x2
7101d9bc80  b 0x7101d9bc8c
7101d9bc84  b.cs 0x7101d9beec
7101d9bc88  mov w9,#0x4
7101d9bc8c  add x8,x19,x8, LSL #0x2
7101d9bc90  add x0,sp,#0x10
7101d9bc94  add x22,x19,#0x160
7101d9bc98  str w9,[x8, #0xc8]
7101d9bc9c  add x20,sp,#0x10
7101d9bca0  bl 0x7103776290
7101d9bca4  add x0,x20,#0x10
7101d9bca8  bl 0x7103776290
7101d9bcac  add x0,x20,#0x20
7101d9bcb0  bl 0x7103776290
7101d9bcb4  adrp x1,0x71043be000
7101d9bcb8  add x1,x1,#0xa42
7101d9bcbc  mov x8,sp
7101d9bcc0  mov x0,x22
7101d9bcc4  bl 0x7103776640
7101d9bcc8  ldr x20,[sp, #0x8]
7101d9bccc  ldr x21,[sp, #0x18]
7101d9bcd0  str xzr,[sp, #0x8]
7101d9bcd4  str x20,[sp, #0x18]
7101d9bcd8  cbz x21,0x7101d9bcfc
7101d9bcdc  ldr x0,[x21, #0x18]
7101d9bce0  adrp x8,0x710523d000
7101d9bce4  add x8,x8,#0x9a8
7101d9bce8  stp x8,xzr,[x21, #0x10]
7101d9bcec  cbz x0,0x7101d9bcf4
7101d9bcf0  bl 0x710392eb40
7101d9bcf4  mov x0,x21
7101d9bcf8  bl 0x710392eb40
7101d9bcfc  adrp x24,0x710523d000
7101d9bd00  add x24,x24,#0x988
7101d9bd04  adrp x1,0x71042e7000
7101d9bd08  add x1,x1,#0x6a5
7101d9bd0c  mov x8,sp
7101d9bd10  mov x0,x22
7101d9bd14  stp x24,xzr,[sp]
7101d9bd18  bl 0x7103776640
7101d9bd1c  ldr x21,[sp, #0x8]
7101d9bd20  ldr x23,[sp, #0x28]
7101d9bd24  str xzr,[sp, #0x8]
7101d9bd28  str x21,[sp, #0x28]
7101d9bd2c  cbz x23,0x7101d9bd50
7101d9bd30  ldr x0,[x23, #0x18]
7101d9bd34  adrp x8,0x710523d000
7101d9bd38  add x8,x8,#0x9a8
7101d9bd3c  stp x8,xzr,[x23, #0x10]
7101d9bd40  cbz x0,0x7101d9bd48
7101d9bd44  bl 0x710392eb40
7101d9bd48  mov x0,x23
7101d9bd4c  bl 0x710392eb40
7101d9bd50  adrp x1,0x7104412000
7101d9bd54  add x1,x1,#0xd5c
7101d9bd58  mov x8,sp
7101d9bd5c  mov x0,x22
7101d9bd60  stp x24,xzr,[sp]
7101d9bd64  bl 0x7103776640
7101d9bd68  ldr x22,[sp, #0x8]
7101d9bd6c  ldr x23,[sp, #0x38]
7101d9bd70  str xzr,[sp, #0x8]
7101d9bd74  str x22,[sp, #0x38]
7101d9bd78  cbz x23,0x7101d9bd9c
7101d9bd7c  ldr x0,[x23, #0x18]
7101d9bd80  adrp x8,0x710523d000
7101d9bd84  add x8,x8,#0x9a8
7101d9bd88  stp x8,xzr,[x23, #0x10]
7101d9bd8c  cbz x0,0x7101d9bd94
7101d9bd90  bl 0x710392eb40
7101d9bd94  mov x0,x23
7101d9bd98  bl 0x710392eb40
7101d9bd9c  stp x24,xzr,[sp]
7101d9bda0  ldr w8,[x19, #0x204]
7101d9bda4  cbz w8,0x7101d9bdd8
7101d9bda8  ldrb w8,[x19, #0x290]
7101d9bdac  cbz w8,0x7101d9bdc4
7101d9bdb0  ldrb w8,[x19, #0x291]
7101d9bdb4  cbz w8,0x7101d9bdc4
7101d9bdb8  adrp x1,0x710438c000
7101d9bdbc  add x1,x1,#0xeff
7101d9bdc0  b 0x7101d9bdcc
7101d9bdc4  adrp x1,0x71043f0000
7101d9bdc8  add x1,x1,#0xd57
7101d9bdcc  fmov s0,0x3f800000
7101d9bdd0  mov x0,x20
7101d9bdd4  bl 0x7103778300
7101d9bdd8  ldr w8,[x19, #0x2a4]
7101d9bddc  cbz w8,0x7101d9be10
7101d9bde0  ldrb w8,[x19, #0x330]
7101d9bde4  cbz w8,0x7101d9bdfc
7101d9bde8  ldrb w8,[x19, #0x331]
7101d9bdec  cbz w8,0x7101d9bdfc
7101d9bdf0  adrp x1,0x710438c000
7101d9bdf4  add x1,x1,#0xeff
7101d9bdf8  b 0x7101d9be04
7101d9bdfc  adrp x1,0x71043f0000
7101d9be00  add x1,x1,#0xd57
7101d9be04  fmov s0,0x3f800000
7101d9be08  mov x0,x21
7101d9be0c  bl 0x7103778300
7101d9be10  ldr w8,[x19, #0x344]
7101d9be14  cbz w8,0x7101d9be48
7101d9be18  ldrb w8,[x19, #0x3d0]
7101d9be1c  cbz w8,0x7101d9be34
7101d9be20  ldrb w8,[x19, #0x3d1]
7101d9be24  cbz w8,0x7101d9be34
7101d9be28  adrp x1,0x710438c000
7101d9be2c  add x1,x1,#0xeff
7101d9be30  b 0x7101d9be3c
7101d9be34  adrp x1,0x71043f0000
7101d9be38  add x1,x1,#0xd57
7101d9be3c  fmov s0,0x3f800000
7101d9be40  mov x0,x22
7101d9be44  bl 0x7103778300
7101d9be48  stp x24,xzr,[sp, #0x30]
7101d9be4c  cbz x22,0x7101d9be74
7101d9be50  ldr x0,[x22, #0x18]
7101d9be54  adrp x8,0x710523d000
7101d9be58  add x8,x8,#0x9a8
7101d9be5c  stp x8,xzr,[x22, #0x10]
7101d9be60  cbz x0,0x7101d9be68
7101d9be64  bl 0x710392eb40
7101d9be68  mov x0,x22
7101d9be6c  bl 0x710392eb40
7101d9be70  ldr x21,[sp, #0x28]
7101d9be74  stp x24,xzr,[sp, #0x20]
7101d9be78  cbz x21,0x7101d9be9c
7101d9be7c  ldr x0,[x21, #0x18]
7101d9be80  adrp x8,0x710523d000
7101d9be84  add x8,x8,#0x9a8
7101d9be88  stp x8,xzr,[x21, #0x10]
7101d9be8c  cbz x0,0x7101d9be94
7101d9be90  bl 0x710392eb40
7101d9be94  mov x0,x21
7101d9be98  bl 0x710392eb40
7101d9be9c  stp x24,xzr,[sp, #0x10]
7101d9bea0  cbz x20,0x7101d9bed4
7101d9bea4  ldr x0,[x20, #0x18]
7101d9bea8  adrp x8,0x710523d000
7101d9beac  add x8,x8,#0x9a8
7101d9beb0  stp x8,xzr,[x20, #0x10]
7101d9beb4  cbz x0,0x7101d9bebc
7101d9beb8  bl 0x710392eb40
7101d9bebc  mov x0,x20
7101d9bec0  bl 0x710392eb40
7101d9bec4  b 0x7101d9bed4
7101d9bec8  mov w1,wzr
7101d9becc  blr x9
7101d9bed0  strb wzr,[x19, #0x1c8]
7101d9bed4  ldp x29,x30,[sp, #0x70]
7101d9bed8  ldp x20,x19,[sp, #0x60]
7101d9bedc  ldp x22,x21,[sp, #0x50]
7101d9bee0  ldp x24,x23,[sp, #0x40]
7101d9bee4  add sp,sp,#0x80
7101d9bee8  ret
7101d9beec  bl 0x71039c2650
