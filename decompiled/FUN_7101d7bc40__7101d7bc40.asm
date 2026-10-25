// addr:      7101d7bc40
// offset:    0x1d7bc40
// name:      FUN_7101d7bc40
// mangled:   
// size:      1388

7101d7bc40  sub sp,sp,#0x160
7101d7bc44  str d8,[sp, #0x100]
7101d7bc48  str x28,[sp, #0x108]
7101d7bc4c  stp x26,x25,[sp, #0x110]
7101d7bc50  stp x24,x23,[sp, #0x120]
7101d7bc54  stp x22,x21,[sp, #0x130]
7101d7bc58  stp x20,x19,[sp, #0x140]
7101d7bc5c  stp x29,x30,[sp, #0x150]
7101d7bc60  add x29,sp,#0x150
7101d7bc64  mov w23,w1
7101d7bc68  mov x19,x0
7101d7bc6c  adrp x1,0x7104411000
7101d7bc70  add x1,x1,#0x1db
7101d7bc74  sub x8,x29,#0x60
7101d7bc78  mov x0,x2
7101d7bc7c  mov x21,x3
7101d7bc80  mov x20,x2
7101d7bc84  bl 0x7103776640
7101d7bc88  ldr w8,[x19, #0x40]
7101d7bc8c  ldr w9,[x19, #0x30]
7101d7bc90  cmp w8,w9
7101d7bc94  b.ne 0x7101d7bcbc
7101d7bc98  ldr w8,[x19, #0x34]
7101d7bc9c  cmp w8,w23
7101d7bca0  b.ne 0x7101d7bcbc
7101d7bca4  ldr w8,[x19, #0x2c]
7101d7bca8  cmp w8,#0x1
7101d7bcac  cset w22,eq
7101d7bcb0  cmp w8,#0x2
7101d7bcb4  cset w24,eq
7101d7bcb8  b 0x7101d7bcc4
7101d7bcbc  mov w22,wzr
7101d7bcc0  mov w24,wzr
7101d7bcc4  ldr x8,[x19]
7101d7bcc8  ldr x8,[x8, #0x70]
7101d7bccc  mov x0,x19
7101d7bcd0  blr x8
7101d7bcd4  tbz w0,#0x0,0x7101d7bcf4
7101d7bcd8  ldr x8,[x19]
7101d7bcdc  ldr x8,[x8, #0x90]
7101d7bce0  mov x0,x19
7101d7bce4  blr x8
7101d7bce8  cmp w0,w23
7101d7bcec  cset w26,eq
7101d7bcf0  b 0x7101d7bcf8
7101d7bcf4  mov w26,wzr
7101d7bcf8  orr w8,w22,w24
7101d7bcfc  cmp w8,#0x1
7101d7bd00  b.ne 0x7101d7bd38
7101d7bd04  adrp x1,0x71042c5000
7101d7bd08  add x1,x1,#0x1ae
7101d7bd0c  add x8,sp,#0xa8
7101d7bd10  mov x0,x20
7101d7bd14  bl 0x7103776640
7101d7bd18  ldr x24,[sp, #0xb0]
7101d7bd1c  adrp x1,0x7104454000
7101d7bd20  add x1,x1,#0xe15
7101d7bd24  cbz w22,0x7101d7bd50
7101d7bd28  fmov s0,0x3f800000
7101d7bd2c  mov x0,x24
7101d7bd30  bl 0x7103778300
7101d7bd34  b 0x7101d7bd5c
7101d7bd38  cbz w26,0x7101d7bdd0
7101d7bd3c  mov x25,x20
7101d7bd40  ldr x0,[x25, #0x8]!
7101d7bd44  adrp x24,0x7104412000
7101d7bd48  add x24,x24,#0xfd0
7101d7bd4c  b 0x7101d7be08
7101d7bd50  fmov s0,wzr
7101d7bd54  mov x0,x24
7101d7bd58  bl 0x7103778630
7101d7bd5c  fmov s8,0x3f800000
7101d7bd60  ldur x22,[x29, #-0x58]
7101d7bd64  adrp x25,0x71043f1000
7101d7bd68  add x25,x25,#0x15d
7101d7bd6c  mov x1,x25
7101d7bd70  mov v0.16B,v8.16B
7101d7bd74  mov x0,x22
7101d7bd78  bl 0x7103778300
7101d7bd7c  adrp x8,0x710425f000
7101d7bd80  add x8,x8,#0x7f7
7101d7bd84  cmp w26,#0x0
7101d7bd88  csel x1,x8,x25,ne
7101d7bd8c  mov x25,x20
7101d7bd90  mov v0.16B,v8.16B
7101d7bd94  ldr x0,[x25, #0x8]!
7101d7bd98  bl 0x7103778300
7101d7bd9c  adrp x8,0x710523d000
7101d7bda0  add x8,x8,#0x988
7101d7bda4  stp x8,xzr,[sp, #0xa8]
7101d7bda8  cbz x24,0x7101d7be2c
7101d7bdac  ldr x0,[x24, #0x18]
7101d7bdb0  adrp x8,0x710523d000
7101d7bdb4  add x8,x8,#0x9a8
7101d7bdb8  stp x8,xzr,[x24, #0x10]
7101d7bdbc  cbz x0,0x7101d7bdc4
7101d7bdc0  bl 0x710392eb40
7101d7bdc4  mov x0,x24
7101d7bdc8  bl 0x710392eb40
7101d7bdcc  b 0x7101d7be2c
7101d7bdd0  ldr x8,[x19]
7101d7bdd4  ldr x8,[x8, #0x90]
7101d7bdd8  mov x0,x19
7101d7bddc  blr x8
7101d7bde0  mov x25,x20
7101d7bde4  mov w8,w0
7101d7bde8  cmp w8,w23
7101d7bdec  ldr x0,[x25, #0x8]!
7101d7bdf0  b.ne 0x7101d7be00
7101d7bdf4  adrp x24,0x710432a000
7101d7bdf8  add x24,x24,#0x45a
7101d7bdfc  b 0x7101d7be08
7101d7be00  adrp x24,0x710435b000
7101d7be04  add x24,x24,#0xe3c
7101d7be08  fmov s8,0x3f800000
7101d7be0c  mov v0.16B,v8.16B
7101d7be10  mov x1,x24
7101d7be14  bl 0x7103778300
7101d7be18  ldur x22,[x29, #-0x58]
7101d7be1c  mov v0.16B,v8.16B
7101d7be20  mov x1,x24
7101d7be24  mov x0,x22
7101d7be28  bl 0x7103778300
7101d7be2c  ldrb w9,[x21, #0x10]
7101d7be30  ldr x0,[x25]
7101d7be34  fmov s0,0x3f800000
7101d7be38  adrp x8,0x71042a3000
7101d7be3c  add x8,x8,#0x3c0
7101d7be40  adrp x10,0x71042e7000
7101d7be44  add x10,x10,#0x5de
7101d7be48  cmp w9,#0x0
7101d7be4c  csel x1,x10,x8,eq
7101d7be50  bl 0x7103778300
7101d7be54  ldr x8,[x25]
7101d7be58  ldr x0,[x8, #0x8]
7101d7be5c  cbz x0,0x7101d7be80
7101d7be60  adrp x1,0x7104422000
7101d7be64  add x1,x1,#0x68b
7101d7be68  bl 0x71037964b0
7101d7be6c  cbz x0,0x7101d7be80
7101d7be70  ldr x8,[x0]
7101d7be74  ldr x8,[x8, #0x138]
7101d7be78  blr x8
7101d7be7c  tbz w0,#0x0,0x7101d7bec0
7101d7be80  ldrb w8,[x19, #0x45]
7101d7be84  adrp x24,0x7104454000
7101d7be88  add x24,x24,#0xe15
7101d7be8c  cbz w8,0x7101d7beb0
7101d7be90  ldr x8,[x19]
7101d7be94  ldr x8,[x8, #0x90]
7101d7be98  mov x0,x19
7101d7be9c  blr x8
7101d7bea0  adrp x8,0x7104422000
7101d7bea4  add x8,x8,#0x68b
7101d7bea8  cmp w0,w23
7101d7beac  csel x24,x8,x24,eq
7101d7beb0  ldr x0,[x25]
7101d7beb4  fmov s0,0x3f800000
7101d7beb8  mov x1,x24
7101d7bebc  bl 0x7103778300
7101d7bec0  ldrb w8,[x19, #0x3c]
7101d7bec4  cbz w8,0x7101d7bef4
7101d7bec8  ldr x8,[x19]
7101d7becc  ldr x8,[x8, #0x90]
7101d7bed0  mov x0,x19
7101d7bed4  blr x8
7101d7bed8  cmp w0,w23
7101d7bedc  b.ne 0x7101d7bf34
7101d7bee0  ldr x0,[x25]
7101d7bee4  adrp x1,0x710434a000
7101d7bee8  add x1,x1,#0x70e
7101d7beec  fmov s0,0x3f800000
7101d7bef0  b 0x7101d7bf30
7101d7bef4  ldrb w8,[x19, #0x3b]
7101d7bef8  adrp x24,0x710434a000
7101d7befc  add x24,x24,#0x70e
7101d7bf00  cbz w8,0x7101d7bf24
7101d7bf04  ldr x8,[x19]
7101d7bf08  ldr x8,[x8, #0x90]
7101d7bf0c  mov x0,x19
7101d7bf10  blr x8
7101d7bf14  adrp x8,0x7104422000
7101d7bf18  add x8,x8,#0x69b
7101d7bf1c  cmp w0,w23
7101d7bf20  csel x24,x8,x24,eq
7101d7bf24  ldr x0,[x25]
7101d7bf28  fmov s0,0x3f800000
7101d7bf2c  mov x1,x24
7101d7bf30  bl 0x7103778300
7101d7bf34  ldrb w8,[x19, #0x44]
7101d7bf38  cbnz w8,0x7101d7c158
7101d7bf3c  adrp x8,0x710532f000
7101d7bf40  ldr x8,[x8, #0x730]
7101d7bf44  ldr x8,[x8, #0x8]
7101d7bf48  ldr x2,[x21]
7101d7bf4c  add x24,sp,#0xa8
7101d7bf50  ldr x1,[x8, #0x278]
7101d7bf54  add x0,sp,#0xa8
7101d7bf58  bl 0x71032570e0
7101d7bf5c  mov x8,xzr
7101d7bf60  add x9,x24,#0x8
7101d7bf64  add x10,sp,#0x18
7101d7bf68  str wzr,[sp, #0x18]
7101d7bf6c  b 0x7101d7bf78
7101d7bf70  add x8,x8,#0x2
7101d7bf74  strb w11,[x12, #0x9]
7101d7bf78  add x11,x9,x8
7101d7bf7c  ldrb w13,[x11]
7101d7bf80  cbz w13,0x7101d7bfac
7101d7bf84  add w14,w8,#0x1
7101d7bf88  add x12,x10,x8
7101d7bf8c  cmp w14,#0x3f
7101d7bf90  strb w13,[x12, #0x8]
7101d7bf94  b.cs 0x7101d7bfa8
7101d7bf98  ldrb w11,[x11, #0x1]
7101d7bf9c  cbnz w11,0x7101d7bf70
7101d7bfa0  add x8,x8,#0x1
7101d7bfa4  b 0x7101d7bfac
7101d7bfa8  add w8,w8,#0x1
7101d7bfac  add x11,sp,#0x18
7101d7bfb0  add x1,x11,#0x8
7101d7bfb4  mov w9,#0x9dc5
7101d7bfb8  movk w9,#0x811c, LSL #16
7101d7bfbc  strb wzr,[x1, w8, UXTW ]
7101d7bfc0  ldrb w10,[sp, #0x20]
7101d7bfc4  str w8,[sp, #0x1c]
7101d7bfc8  cbz w10,0x7101d7bfe8
7101d7bfcc  add x8,x11,#0x9
7101d7bfd0  mov w11,#0x89
7101d7bfd4  mul w9,w9,w11
7101d7bfd8  and w10,w10,#0xff
7101d7bfdc  eor w9,w9,w10
7101d7bfe0  ldrb w10,[x8], #0x1
7101d7bfe4  cbnz w10,0x7101d7bfd4
7101d7bfe8  adrp x0,0x710428f000
7101d7bfec  add x0,x0,#0xf21
7101d7bff0  add x8,sp,#0x60
7101d7bff4  str w9,[sp, #0x18]
7101d7bff8  add x24,sp,#0x60
7101d7bffc  bl 0x71003a4ca0
7101d7c000  adrp x1,0x7104280000
7101d7c004  add x1,x1,#0xe11
7101d7c008  add x8,sp,#0x8
7101d7c00c  mov x0,x20
7101d7c010  bl 0x7103776910
7101d7c014  add w3,w23,#0x1
7101d7c018  adrp x1,0x7104422000
7101d7c01c  add x1,x1,#0x6ab
7101d7c020  add x0,sp,#0x8
7101d7c024  mov w2,#0x1
7101d7c028  bl 0x710377a280
7101d7c02c  ldr x0,[sp, #0x10]
7101d7c030  adrp x23,0x710523d000
7101d7c034  add x23,x23,#0x9a8
7101d7c038  stp x23,xzr,[sp, #0x8]
7101d7c03c  cbz x0,0x7101d7c044
7101d7c040  bl 0x710392eb40
7101d7c044  add x1,x24,#0x8
7101d7c048  sub x0,x29,#0x60
7101d7c04c  bl 0x7101d85c90
7101d7c050  ldr w8,[x21, #0xc]
7101d7c054  cmp w8,#0x3
7101d7c058  b.eq 0x7101d7c074
7101d7c05c  cmp w8,#0x2
7101d7c060  b.ne 0x7101d7c084
7101d7c064  ldr x0,[x25]
7101d7c068  adrp x1,0x71043cf000
7101d7c06c  add x1,x1,#0x79f
7101d7c070  b 0x7101d7c090
7101d7c074  ldr x0,[x25]
7101d7c078  adrp x1,0x71042b4000
7101d7c07c  add x1,x1,#0x715
7101d7c080  b 0x7101d7c090
7101d7c084  ldr x0,[x25]
7101d7c088  adrp x1,0x710435b000
7101d7c08c  add x1,x1,#0xb35
7101d7c090  fmov s0,0x3f800000
7101d7c094  bl 0x7103778300
7101d7c098  ldr w8,[x21, #0x8]
7101d7c09c  mov w10,#0xb273
7101d7c0a0  movk w10,#0x45e7, LSL #16
7101d7c0a4  mov w9,#0x4dd3
7101d7c0a8  movk w9,#0x1062, LSL #16
7101d7c0ac  mul x9,x8,x9
7101d7c0b0  mul x10,x8,x10
7101d7c0b4  mov w11,#0x7cb1
7101d7c0b8  movk w11,#0x9521, LSL #16
7101d7c0bc  mul x8,x8,x11
7101d7c0c0  mov w11,#0x8889
7101d7c0c4  movk w11,#0x8888, LSL #16
7101d7c0c8  orr w13,wzr,#0x3c
7101d7c0cc  lsr x10,x10,#0x2e
7101d7c0d0  lsr x9,x9,#0x26
7101d7c0d4  lsr x8,x8,#0x35
7101d7c0d8  adrp x1,0x71043ad000
7101d7c0dc  add x1,x1,#0xb48
7101d7c0e0  mul x12,x10,x11
7101d7c0e4  mul x11,x9,x11
7101d7c0e8  lsr x12,x12,#0x25
7101d7c0ec  msub w10,w12,w13,w10
7101d7c0f0  lsr x11,x11,#0x25
7101d7c0f4  msub w9,w11,w13,w9
7101d7c0f8  mov w11,#0x4240
7101d7c0fc  movk w11,#0xf, LSL #16
7101d7c100  mul w8,w8,w11
7101d7c104  mov w11,#0x3e8
7101d7c108  madd w8,w10,w11,w8
7101d7c10c  add x21,x8,x9
7101d7c110  add x8,sp,#0x8
7101d7c114  mov x0,x20
7101d7c118  bl 0x7103776910
7101d7c11c  ldr w10,[x19, #0x18]
7101d7c120  adrp x8,0x7104422000
7101d7c124  add x8,x8,#0x6d4
7101d7c128  adrp x9,0x71043e0000
7101d7c12c  add x9,x9,#0x4cd
7101d7c130  add x0,sp,#0x8
7101d7c134  mov w2,#0x1
7101d7c138  mov x3,x21
7101d7c13c  cmp w10,#0x1
7101d7c140  csel x1,x9,x8,eq
7101d7c144  bl 0x710377a280
7101d7c148  ldr x0,[sp, #0x10]
7101d7c14c  stp x23,xzr,[sp, #0x8]
7101d7c150  cbz x0,0x7101d7c158
7101d7c154  bl 0x710392eb40
7101d7c158  adrp x8,0x710523d000
7101d7c15c  add x8,x8,#0x988
7101d7c160  stp x8,xzr,[x29, #-0x60]
7101d7c164  cbz x22,0x7101d7c188
7101d7c168  ldr x0,[x22, #0x18]
7101d7c16c  adrp x8,0x710523d000
7101d7c170  add x8,x8,#0x9a8
7101d7c174  stp x8,xzr,[x22, #0x10]
7101d7c178  cbz x0,0x7101d7c180
7101d7c17c  bl 0x710392eb40
7101d7c180  mov x0,x22
7101d7c184  bl 0x710392eb40
7101d7c188  ldr d8,[sp, #0x100]
7101d7c18c  ldp x29,x30,[sp, #0x150]
7101d7c190  ldp x20,x19,[sp, #0x140]
7101d7c194  ldr x28,[sp, #0x108]
7101d7c198  ldp x22,x21,[sp, #0x130]
7101d7c19c  ldp x24,x23,[sp, #0x120]
7101d7c1a0  ldp x26,x25,[sp, #0x110]
7101d7c1a4  add sp,sp,#0x160
7101d7c1a8  ret
