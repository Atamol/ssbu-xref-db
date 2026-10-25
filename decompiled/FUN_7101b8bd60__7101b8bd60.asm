// addr:      7101b8bd60
// offset:    0x1b8bd60
// name:      FUN_7101b8bd60
// mangled:   
// size:      1656

7101b8bd60  sub sp,sp,#0x1a0
7101b8bd64  stp x28,x25,[sp, #0x150]
7101b8bd68  stp x24,x23,[sp, #0x160]
7101b8bd6c  stp x22,x21,[sp, #0x170]
7101b8bd70  stp x20,x19,[sp, #0x180]
7101b8bd74  stp x29,x30,[sp, #0x190]
7101b8bd78  add x29,sp,#0x190
7101b8bd7c  mov x19,x0
7101b8bd80  ldr x0,[x0, #0xc8]
7101b8bd84  bl 0x710323cb80
7101b8bd88  tbz w0,#0x0,0x7101b8c3b8
7101b8bd8c  ldr x1,[x19, #0xc8]
7101b8bd90  adrp x20,0x7104544000
7101b8bd94  add x20,x20,#0xc90
7101b8bd98  add x0,x19,#0xd0
7101b8bd9c  mov w3,#0x1
7101b8bda0  mov x2,x20
7101b8bda4  bl 0x71032cbf30
7101b8bda8  ldr x8,[x19, #0xc8]
7101b8bdac  add x0,x8,#0x8
7101b8bdb0  mov x1,x20
7101b8bdb4  bl 0x710323eba0
7101b8bdb8  ldr x21,[x19, #0xd0]
7101b8bdbc  ldr x22,[x21]
7101b8bdc0  mov x20,x22
7101b8bdc4  ldr x8,[x20], #0x8
7101b8bdc8  ldr x9,[x8, #0x600]
7101b8bdcc  mov w10,#0x20
7101b8bdd0  str w10,[x9, #0x18]
7101b8bdd4  ldr x8,[x8, #0x600]
7101b8bdd8  strb wzr,[x8, #0x4aa]
7101b8bddc  adrp x1,0x7104433000
7101b8bde0  add x1,x1,#0x29f
7101b8bde4  mov x8,sp
7101b8bde8  mov x0,x20
7101b8bdec  bl 0x7103776910
7101b8bdf0  ldr x0,[sp, #0x8]
7101b8bdf4  ldr x8,[x0]
7101b8bdf8  cbz x8,0x7101b8be08
7101b8bdfc  ldrb w9,[x8, #0x58]
7101b8be00  and w9,w9,#0xfe
7101b8be04  strb w9,[x8, #0x58]
7101b8be08  adrp x23,0x710523d000
7101b8be0c  add x23,x23,#0x9a8
7101b8be10  stp x23,xzr,[sp]
7101b8be14  cbz x0,0x7101b8be1c
7101b8be18  bl 0x710392eb40
7101b8be1c  adrp x1,0x71042b4000
7101b8be20  add x1,x1,#0xb9
7101b8be24  mov x8,sp
7101b8be28  mov x0,x20
7101b8be2c  mov x24,sp
7101b8be30  bl 0x7103776910
7101b8be34  add x8,x19,#0xd8
7101b8be38  cmp x8,x24
7101b8be3c  b.eq 0x7101b8be58
7101b8be40  ldr x8,[sp, #0x8]
7101b8be44  str xzr,[sp, #0x8]
7101b8be48  ldr x0,[x19, #0xe0]
7101b8be4c  str x8,[x19, #0xe0]
7101b8be50  cbz x0,0x7101b8be58
7101b8be54  bl 0x710392eb40
7101b8be58  ldr x0,[sp, #0x8]
7101b8be5c  stp x23,xzr,[sp]
7101b8be60  cbz x0,0x7101b8be68
7101b8be64  bl 0x710392eb40
7101b8be68  adrp x1,0x71042c4000
7101b8be6c  add x1,x1,#0xb58
7101b8be70  mov x8,sp
7101b8be74  mov x0,x20
7101b8be78  mov x24,sp
7101b8be7c  bl 0x71037780e0
7101b8be80  add x8,x19,#0xe8
7101b8be84  cmp x8,x24
7101b8be88  b.eq 0x7101b8bea4
7101b8be8c  ldr x8,[sp, #0x8]
7101b8be90  str xzr,[sp, #0x8]
7101b8be94  ldr x0,[x19, #0xf0]
7101b8be98  str x8,[x19, #0xf0]
7101b8be9c  cbz x0,0x7101b8bea4
7101b8bea0  bl 0x710392eb40
7101b8bea4  ldr x0,[sp, #0x8]
7101b8bea8  adrp x24,0x710523d000
7101b8beac  add x24,x24,#0x9e8
7101b8beb0  stp x24,xzr,[sp]
7101b8beb4  cbz x0,0x7101b8bebc
7101b8beb8  bl 0x710392eb40
7101b8bebc  adrp x1,0x710434a000
7101b8bec0  add x1,x1,#0xba
7101b8bec4  mov x8,sp
7101b8bec8  mov x0,x20
7101b8becc  mov x25,sp
7101b8bed0  bl 0x71037780e0
7101b8bed4  add x8,x19,#0xf8
7101b8bed8  cmp x8,x25
7101b8bedc  b.eq 0x7101b8bef8
7101b8bee0  ldr x8,[sp, #0x8]
7101b8bee4  str xzr,[sp, #0x8]
7101b8bee8  ldr x0,[x19, #0x100]
7101b8beec  str x8,[x19, #0x100]
7101b8bef0  cbz x0,0x7101b8bef8
7101b8bef4  bl 0x710392eb40
7101b8bef8  ldr x0,[sp, #0x8]
7101b8befc  stp x24,xzr,[sp]
7101b8bf00  cbz x0,0x7101b8bf08
7101b8bf04  bl 0x710392eb40
7101b8bf08  ldr x0,[x22, #0x10]
7101b8bf0c  adrp x1,0x71042a3000
7101b8bf10  add x1,x1,#0x845
7101b8bf14  bl 0x7103778760
7101b8bf18  ldr x8,[x21]
7101b8bf1c  ldr x21,[x8]
7101b8bf20  ldr x0,[x21, #0x458]
7101b8bf24  ldr x8,[x0]
7101b8bf28  ldr s0,[x21, #0x640]
7101b8bf2c  ldr x8,[x8, #0x58]
7101b8bf30  blr x8
7101b8bf34  ldr x22,[x21, #0x460]
7101b8bf38  ldr x24,[x21, #0x468]
7101b8bf3c  cmp x22,x24
7101b8bf40  b.eq 0x7101b8bf78
7101b8bf44  ldr x21,[x22]
7101b8bf48  ldr x8,[x21]
7101b8bf4c  ldr x8,[x8, #0x40]
7101b8bf50  mov x0,x21
7101b8bf54  blr x8
7101b8bf58  tbz w0,#0x0,0x7101b8bf6c
7101b8bf5c  ldr x8,[x21]
7101b8bf60  ldr x8,[x8, #0x20]
7101b8bf64  mov x0,x21
7101b8bf68  blr x8
7101b8bf6c  add x22,x22,#0x8
7101b8bf70  cmp x24,x22
7101b8bf74  b.ne 0x7101b8bf44
7101b8bf78  adrp x1,0x710426f000
7101b8bf7c  add x1,x1,#0xd7a
7101b8bf80  sub x8,x29,#0x58
7101b8bf84  mov x0,x20
7101b8bf88  bl 0x7103776910
7101b8bf8c  ldur x21,[x29, #-0x50]
7101b8bf90  ldr x8,[x21]
7101b8bf94  cbz x8,0x7101b8bfa4
7101b8bf98  ldrb w9,[x8, #0x58]
7101b8bf9c  and w9,w9,#0xfe
7101b8bfa0  strb w9,[x8, #0x58]
7101b8bfa4  mov x0,x21
7101b8bfa8  bl 0x7103779cc0
7101b8bfac  str w0,[x19, #0x178]
7101b8bfb0  ldr x8,[x21]
7101b8bfb4  cbz x8,0x7101b8bfd4
7101b8bfb8  ldp s0,s2,[x8, #0x50]
7101b8bfbc  ldp s1,s3,[x8, #0x48]
7101b8bfc0  fmul s0,s0,s1
7101b8bfc4  fabs s1,s0
7101b8bfc8  fmul s0,s2,s3
7101b8bfcc  fabs s0,s0
7101b8bfd0  b 0x7101b8bfdc
7101b8bfd4  fmov s1,wzr
7101b8bfd8  mov v0.16B,v1.16B
7101b8bfdc  str s1,[x19, #0x170]
7101b8bfe0  str s0,[x19, #0x174]
7101b8bfe4  ldr x8,[x21]
7101b8bfe8  cbz x8,0x7101b8c04c
7101b8bfec  movi v3.2D,#0x0
7101b8bff0  ldr s5,[x8, #0x30]
7101b8bff4  add x9,x8,#0x34
7101b8bff8  ldp s1,s2,[x8, #0x50]
7101b8bffc  add x10,x8,#0x38
7101b8c000  ldp s6,s16,[x8, #0x48]
7101b8c004  mov v4.16B,v3.16B
7101b8c008  fmul s2,s2,s16
7101b8c00c  fmul s1,s1,s6
7101b8c010  fabs s1,s1
7101b8c014  mov v4.S[0x0],v5.S[0x0]
7101b8c018  fmov s6,0x3f000000
7101b8c01c  fmul s7,s1,s6
7101b8c020  ld1 {v4.S}[1],[x9]
7101b8c024  ldrb w9,[x8, #0x5b]
7101b8c028  ld1 {v4.S}[2],[x10]
7101b8c02c  fabs s2,s2
7101b8c030  and w10,w9,#0x3
7101b8c034  cmp w10,#0x2
7101b8c038  b.eq 0x7101b8c068
7101b8c03c  cmp w10,#0x1
7101b8c040  b.ne 0x7101b8c070
7101b8c044  fadd s5,s5,s7
7101b8c048  b 0x7101b8c06c
7101b8c04c  adrp x8,0x71052a8000
7101b8c050  ldr x8,[x8, #0xa88]
7101b8c054  ldr q6,[x8]
7101b8c058  fmov s1,wzr
7101b8c05c  mov v2.16B,v1.16B
7101b8c060  dup s5,v6.S[0x1]
7101b8c064  b 0x7101b8c0e8
7101b8c068  fsub s5,s5,s7
7101b8c06c  mov v4.S[0x0],v5.S[0x0]
7101b8c070  fmul s5,s2,s6
7101b8c074  ubfx w9,w9,#0x2,#0x2
7101b8c078  cmp w9,#0x2
7101b8c07c  b.eq 0x7101b8c094
7101b8c080  cmp w9,#0x1
7101b8c084  b.ne 0x7101b8c0a0
7101b8c088  dup s6,v4.S[0x1]
7101b8c08c  fsub s5,s6,s5
7101b8c090  b 0x7101b8c09c
7101b8c094  dup s6,v4.S[0x1]
7101b8c098  fadd s5,s5,s6
7101b8c09c  mov v4.S[0x1],v5.S[0x0]
7101b8c0a0  ldr x8,[x8, #0x18]
7101b8c0a4  cbz x8,0x7101b8c0e0
7101b8c0a8  ldp s5,s7,[x8, #0x30]
7101b8c0ac  fadd s6,s4,s5
7101b8c0b0  dup s5,v4.S[0x1]
7101b8c0b4  fadd s5,s5,s7
7101b8c0b8  dup s16,v4.S[0x2]
7101b8c0bc  mov v4.16B,v3.16B
7101b8c0c0  mov v4.S[0x0],v6.S[0x0]
7101b8c0c4  ldr s7,[x8, #0x38]
7101b8c0c8  mov v4.S[0x1],v5.S[0x0]
7101b8c0cc  fadd s7,s16,s7
7101b8c0d0  mov v4.S[0x2],v7.S[0x0]
7101b8c0d4  ldr x8,[x8, #0x18]
7101b8c0d8  cbnz x8,0x7101b8c0a8
7101b8c0dc  b 0x7101b8c0e8
7101b8c0e0  dup s5,v4.S[0x1]
7101b8c0e4  mov v6.16B,v4.16B
7101b8c0e8  adrp x8,0x7104472000
7101b8c0ec  ldr s3,[x8, #0x8b8]
7101b8c0f0  movi v4.2D,#0x0
7101b8c0f4  fadd s3,s6,s3
7101b8c0f8  mov v6.16B,v4.16B
7101b8c0fc  adrp x8,0x7104472000
7101b8c100  mov v6.S[0x0],v1.S[0x0]
7101b8c104  ldr s1,[x8, #0x4c4]
7101b8c108  mov v6.S[0x1],v2.S[0x0]
7101b8c10c  movi v2.4S,#0x3f, LSL #24
7101b8c110  fmul v2.4S,v6.4S,v2.4S
7101b8c114  fsub s1,s1,s5
7101b8c118  dup s5,v2.S[0x1]
7101b8c11c  fsub s2,s3,s2
7101b8c120  fmov s3,0x3f000000
7101b8c124  fmul s0,s0,s3
7101b8c128  fsub s1,s1,s5
7101b8c12c  mov v4.S[0x0],v2.S[0x0]
7101b8c130  fadd s0,s1,s0
7101b8c134  mov v4.S[0x1],v0.S[0x0]
7101b8c138  adrp x1,0x7104339000
7101b8c13c  add x1,x1,#0xf4b
7101b8c140  mov x8,sp
7101b8c144  mov x0,x20
7101b8c148  str q4,[x19, #0x160]
7101b8c14c  mov x22,sp
7101b8c150  bl 0x7103776ad0
7101b8c154  add x8,x19,#0x108
7101b8c158  cmp x8,x22
7101b8c15c  b.eq 0x7101b8c178
7101b8c160  ldr x8,[sp, #0x8]
7101b8c164  str xzr,[sp, #0x8]
7101b8c168  ldr x0,[x19, #0x110]
7101b8c16c  str x8,[x19, #0x110]
7101b8c170  cbz x0,0x7101b8c178
7101b8c174  bl 0x710392eb40
7101b8c178  ldr x0,[sp, #0x8]
7101b8c17c  adrp x8,0x710523d000
7101b8c180  add x8,x8,#0x9c8
7101b8c184  stp x8,xzr,[sp]
7101b8c188  cbz x0,0x7101b8c190
7101b8c18c  bl 0x710392eb40
7101b8c190  ldr x8,[x19, #0x110]
7101b8c194  ldr x0,[x8]
7101b8c198  cbz x0,0x7101b8c1cc
7101b8c19c  ldr x8,[x0]
7101b8c1a0  ldr x8,[x8, #0x268]
7101b8c1a4  mov w1,#0x1
7101b8c1a8  mov w2,wzr
7101b8c1ac  blr x8
7101b8c1b0  ldr x8,[x19, #0x110]
7101b8c1b4  ldr x0,[x8]
7101b8c1b8  cbz x0,0x7101b8c1cc
7101b8c1bc  ldr x8,[x0]
7101b8c1c0  ldr x8,[x8, #0x2e0]
7101b8c1c4  mov w1,wzr
7101b8c1c8  blr x8
7101b8c1cc  mov w8,#0x101
7101b8c1d0  add x22,x19,#0x118
7101b8c1d4  adrp x2,0x71043e0000
7101b8c1d8  add x2,x2,#0xa21
7101b8c1dc  strh w8,[sp, #0x8]
7101b8c1e0  mov w24,#0x1
7101b8c1e4  mov x8,#0x41f0000000000000
7101b8c1e8  mov x3,sp
7101b8c1ec  str xzr,[sp]
7101b8c1f0  mov x0,x22
7101b8c1f4  mov x1,x20
7101b8c1f8  stur wzr,[sp, #0xa]
7101b8c1fc  strh wzr,[sp, #0xe]
7101b8c200  str w24,[sp, #0x10]
7101b8c204  strh w24,[sp, #0x14]
7101b8c208  strb w24,[sp, #0x16]
7101b8c20c  mov x25,sp
7101b8c210  str x8,[sp, #0x18]
7101b8c214  str wzr,[sp, #0x20]
7101b8c218  str xzr,[sp, #0x50]
7101b8c21c  str xzr,[sp, #0x80]
7101b8c220  str xzr,[sp, #0xb0]
7101b8c224  str xzr,[sp, #0xe0]
7101b8c228  str xzr,[sp, #0x110]
7101b8c22c  str wzr,[sp, #0x120]
7101b8c230  strb w24,[sp, #0xa]
7101b8c234  bl 0x7103770b30
7101b8c238  adrp x2,0x7104339000
7101b8c23c  add x2,x2,#0xf4b
7101b8c240  mov x0,x22
7101b8c244  mov w1,wzr
7101b8c248  bl 0x71037717d0
7101b8c24c  ldr x0,[x19, #0x118]
7101b8c250  orr w2,wzr,#0x6
7101b8c254  mov w1,wzr
7101b8c258  mov w3,wzr
7101b8c25c  bl 0x7103771930
7101b8c260  ldr x0,[x19, #0x118]
7101b8c264  ldr x8,[x0]
7101b8c268  ldr x8,[x8, #0x60]
7101b8c26c  mov w1,wzr
7101b8c270  blr x8
7101b8c274  ldr x0,[x19, #0x118]
7101b8c278  ldr x8,[x0]
7101b8c27c  ldr x8,[x8, #0x70]
7101b8c280  mov w1,wzr
7101b8c284  blr x8
7101b8c288  ldr x0,[x19, #0x1b0]
7101b8c28c  cbz x0,0x7101b8c2a4
7101b8c290  sturb w24,[x29, #-0x44]
7101b8c294  ldr x8,[x0]
7101b8c298  ldr x8,[x8, #0x30]
7101b8c29c  sub x1,x29,#0x44
7101b8c2a0  blr x8
7101b8c2a4  strb w24,[x19, #0x180]
7101b8c2a8  ldr x0,[sp, #0x110]
7101b8c2ac  add x8,x25,#0xf0
7101b8c2b0  cmp x8,x0
7101b8c2b4  b.eq 0x7101b8c2c8
7101b8c2b8  cbz x0,0x7101b8c2d4
7101b8c2bc  ldr x8,[x0]
7101b8c2c0  ldr x8,[x8, #0x28]
7101b8c2c4  b 0x7101b8c2d0
7101b8c2c8  ldr x8,[x0]
7101b8c2cc  ldr x8,[x8, #0x20]
7101b8c2d0  blr x8
7101b8c2d4  ldr x0,[sp, #0xe0]
7101b8c2d8  mov x8,sp
7101b8c2dc  add x8,x8,#0xc0
7101b8c2e0  cmp x8,x0
7101b8c2e4  b.eq 0x7101b8c2f8
7101b8c2e8  cbz x0,0x7101b8c304
7101b8c2ec  ldr x8,[x0]
7101b8c2f0  ldr x8,[x8, #0x28]
7101b8c2f4  b 0x7101b8c300
7101b8c2f8  ldr x8,[x0]
7101b8c2fc  ldr x8,[x8, #0x20]
7101b8c300  blr x8
7101b8c304  ldr x0,[sp, #0xb0]
7101b8c308  mov x8,sp
7101b8c30c  add x8,x8,#0x90
7101b8c310  cmp x8,x0
7101b8c314  b.eq 0x7101b8c328
7101b8c318  cbz x0,0x7101b8c334
7101b8c31c  ldr x8,[x0]
7101b8c320  ldr x8,[x8, #0x28]
7101b8c324  b 0x7101b8c330
7101b8c328  ldr x8,[x0]
7101b8c32c  ldr x8,[x8, #0x20]
7101b8c330  blr x8
7101b8c334  ldr x0,[sp, #0x80]
7101b8c338  mov x8,sp
7101b8c33c  add x8,x8,#0x60
7101b8c340  cmp x8,x0
7101b8c344  b.eq 0x7101b8c358
7101b8c348  cbz x0,0x7101b8c364
7101b8c34c  ldr x8,[x0]
7101b8c350  ldr x8,[x8, #0x28]
7101b8c354  b 0x7101b8c360
7101b8c358  ldr x8,[x0]
7101b8c35c  ldr x8,[x8, #0x20]
7101b8c360  blr x8
7101b8c364  ldr x0,[sp, #0x50]
7101b8c368  mov x8,sp
7101b8c36c  add x8,x8,#0x30
7101b8c370  cmp x8,x0
7101b8c374  b.eq 0x7101b8c388
7101b8c378  cbz x0,0x7101b8c394
7101b8c37c  ldr x8,[x0]
7101b8c380  ldr x8,[x8, #0x28]
7101b8c384  b 0x7101b8c390
7101b8c388  ldr x8,[x0]
7101b8c38c  ldr x8,[x8, #0x20]
7101b8c390  blr x8
7101b8c394  stp x23,xzr,[x29, #-0x58]
7101b8c398  cbz x21,0x7101b8c3a4
7101b8c39c  mov x0,x21
7101b8c3a0  bl 0x710392eb40
7101b8c3a4  ldrsw x8,[x19, #0xb4]
7101b8c3a8  cmp w8,#0x13
7101b8c3ac  b.cs 0x7101b8c3d4
7101b8c3b0  add x8,x19,x8, LSL #0x2
7101b8c3b4  str wzr,[x8, #0x68]
7101b8c3b8  ldp x29,x30,[sp, #0x190]
7101b8c3bc  ldp x20,x19,[sp, #0x180]
7101b8c3c0  ldp x22,x21,[sp, #0x170]
7101b8c3c4  ldp x24,x23,[sp, #0x160]
7101b8c3c8  ldp x28,x25,[sp, #0x150]
7101b8c3cc  add sp,sp,#0x1a0
7101b8c3d0  ret
7101b8c3d4  bl 0x71039c2650
