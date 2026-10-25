// addr:      7101e6bfd0
// offset:    0x1e6bfd0
// name:      FUN_7101e6bfd0
// mangled:   
// size:      1080

7101e6bfd0  sub sp,sp,#0x80
7101e6bfd4  str d8,[sp, #0x20]
7101e6bfd8  str x27,[sp, #0x28]
7101e6bfdc  stp x26,x25,[sp, #0x30]
7101e6bfe0  stp x24,x23,[sp, #0x40]
7101e6bfe4  stp x22,x21,[sp, #0x50]
7101e6bfe8  stp x20,x19,[sp, #0x60]
7101e6bfec  stp x29,x30,[sp, #0x70]
7101e6bff0  add x29,sp,#0x70
7101e6bff4  mov w8,#0x1
7101e6bff8  mov x19,x0
7101e6bffc  strb wzr,[x0, #0x4c0]
7101e6c000  strb w8,[x0, #0x494]
7101e6c004  add x0,x0,#0x310
7101e6c008  bl 0x7101e980b0
7101e6c00c  ldr x21,[x19, #0x330]
7101e6c010  ldr x8,[x21, #0x18]
7101e6c014  ldr x20,[x8, #0x8]
7101e6c018  cbz x20,0x7101e6c0fc
7101e6c01c  ldrb w9,[x8, #0x10]
7101e6c020  cbz w9,0x7101e6c0ec
7101e6c024  ldr x8,[x8]
7101e6c028  ldr x23,[x8, #0x80]
7101e6c02c  add x22,x8,#0x88
7101e6c030  cmp x23,x22
7101e6c034  b.eq 0x7101e6c0ec
7101e6c038  ldr x0,[x23, #0x68]
7101e6c03c  ldr x8,[x0]
7101e6c040  ldr x8,[x8, #0x148]
7101e6c044  blr x8
7101e6c048  tbz w0,#0x0,0x7101e6c088
7101e6c04c  ldr x8,[x20]
7101e6c050  ldr x1,[x23, #0x68]
7101e6c054  mov x0,x20
7101e6c058  ldr x8,[x8, #0x120]
7101e6c05c  blr x8
7101e6c060  tbz w0,#0x0,0x7101e6c088
7101e6c064  ldr x0,[x23, #0x68]
7101e6c068  ldr x8,[x0]
7101e6c06c  ldr x8,[x8, #0x178]
7101e6c070  blr x8
7101e6c074  ldr x0,[x23, #0x68]
7101e6c078  ldr x8,[x0]
7101e6c07c  ldr x8,[x8, #0x140]
7101e6c080  mov w1,wzr
7101e6c084  blr x8
7101e6c088  ldr x8,[x23, #0x8]
7101e6c08c  cbz x8,0x7101e6c0a0
7101e6c090  mov x23,x8
7101e6c094  ldr x8,[x8]
7101e6c098  cbnz x8,0x7101e6c090
7101e6c09c  b 0x7101e6c0cc
7101e6c0a0  mov x8,x23
7101e6c0a4  ldr x9,[x8, #0x10]!
7101e6c0a8  ldr x10,[x9]
7101e6c0ac  cmp x10,x23
7101e6c0b0  b.eq 0x7101e6c0d8
7101e6c0b4  ldr x9,[x8]
7101e6c0b8  mov x8,x9
7101e6c0bc  ldr x23,[x8, #0x10]!
7101e6c0c0  ldr x10,[x23]
7101e6c0c4  cmp x10,x9
7101e6c0c8  b.ne 0x7101e6c0b4
7101e6c0cc  cmp x23,x22
7101e6c0d0  b.ne 0x7101e6c038
7101e6c0d4  b 0x7101e6c0e4
7101e6c0d8  mov x23,x9
7101e6c0dc  cmp x23,x22
7101e6c0e0  b.ne 0x7101e6c038
7101e6c0e4  ldr x8,[x21, #0x18]
7101e6c0e8  ldr x20,[x8, #0x8]
7101e6c0ec  ldr x8,[x20]
7101e6c0f0  ldr x8,[x8, #0x178]
7101e6c0f4  mov x0,x20
7101e6c0f8  blr x8
7101e6c0fc  ldr x0,[x19, #0x2e8]
7101e6c100  adrp x1,0x7104401000
7101e6c104  add x1,x1,#0xbf0
7101e6c108  mov x8,sp
7101e6c10c  strb wzr,[x19, #0x338]
7101e6c110  mov x20,sp
7101e6c114  bl 0x71037780e0
7101e6c118  mov w0,#0x10
7101e6c11c  mov w1,#0x10
7101e6c120  bl 0x710392e290
7101e6c124  cbnz x0,0x7101e6c16c
7101e6c128  adrp x8,0x7105332000
7101e6c12c  ldr x0,[x8, #0xf00]
7101e6c130  cbz x0,0x7101e6c168
7101e6c134  mov w8,#0x10
7101e6c138  str wzr,[sp, #0x1c]
7101e6c13c  add x1,sp,#0x1c
7101e6c140  str x8,[sp, #0x10]
7101e6c144  ldr x8,[x0]
7101e6c148  ldr x8,[x8, #0x30]
7101e6c14c  add x2,sp,#0x10
7101e6c150  blr x8
7101e6c154  tbz w0,#0x0,0x7101e6c168
7101e6c158  mov w0,#0x10
7101e6c15c  mov w1,#0x10
7101e6c160  bl 0x710392e290
7101e6c164  cbnz x0,0x7101e6c16c
7101e6c168  mov x0,xzr
7101e6c16c  adrp x21,0x710523d000
7101e6c170  add x21,x21,#0x9e8
7101e6c174  cmp x20,x0
7101e6c178  stp x21,xzr,[x0]
7101e6c17c  b.eq 0x7101e6c18c
7101e6c180  ldr x8,[sp, #0x8]
7101e6c184  str xzr,[sp, #0x8]
7101e6c188  str x8,[x0, #0x8]
7101e6c18c  ldr x9,[x19, #0x2e8]
7101e6c190  ldr x8,[x9, #0x20]
7101e6c194  str x0,[x9, #0x20]
7101e6c198  cbz x8,0x7101e6c1ac
7101e6c19c  ldr x9,[x8]
7101e6c1a0  ldr x9,[x9, #0x8]
7101e6c1a4  mov x0,x8
7101e6c1a8  blr x9
7101e6c1ac  ldr x0,[sp, #0x8]
7101e6c1b0  stp x21,xzr,[sp]
7101e6c1b4  cbz x0,0x7101e6c1bc
7101e6c1b8  bl 0x710392eb40
7101e6c1bc  ldr x8,[x19, #0x2e8]
7101e6c1c0  fmov s8,0x3f800000
7101e6c1c4  mov v0.16B,v8.16B
7101e6c1c8  ldr x0,[x8, #0x20]
7101e6c1cc  bl 0x710377aee0
7101e6c1d0  mov w8,#0x4
7101e6c1d4  add x0,x19,#0x230
7101e6c1d8  mov w1,#0x1
7101e6c1dc  strb w8,[x19, #0x2f0]
7101e6c1e0  strb wzr,[x19, #0x2c0]
7101e6c1e4  mov w24,#0x1
7101e6c1e8  bl 0x7101e67380
7101e6c1ec  ldr x0,[x19, #0x210]
7101e6c1f0  mov v0.16B,v8.16B
7101e6c1f4  mov w8,#0x2
7101e6c1f8  adrp x1,0x7104412000
7101e6c1fc  add x1,x1,#0xf3e
7101e6c200  strb w8,[x19, #0x2c1]
7101e6c204  add x20,x19,#0x1f8
7101e6c208  strb w24,[x19, #0x218]
7101e6c20c  bl 0x7103778300
7101e6c210  ldr x8,[x19, #0x200]
7101e6c214  ldrb w9,[x8, #0x8]!
7101e6c218  cmp w9,#0x1
7101e6c21c  cset w9,ne
7101e6c220  mov w25,#0x48
7101e6c224  umaddl x22,w9,w25,x8
7101e6c228  adrp x21,0x7104433000
7101e6c22c  add x21,x21,#0x73a
7101e6c230  mov x1,x21
7101e6c234  add x0,x22,#0x18
7101e6c238  bl 0x710377a120
7101e6c23c  add x0,x22,#0x28
7101e6c240  mov x1,x21
7101e6c244  bl 0x710377a120
7101e6c248  add x0,x22,#0x38
7101e6c24c  mov x1,x21
7101e6c250  bl 0x710377a120
7101e6c254  ldr x8,[x19, #0x200]
7101e6c258  ldrb w9,[x8, #0x8]!
7101e6c25c  cmp w9,#0x1
7101e6c260  cset w9,ne
7101e6c264  umaddl x22,w9,w25,x8
7101e6c268  ldr x0,[x22, #0x10]
7101e6c26c  mov v0.16B,v8.16B
7101e6c270  adrp x21,0x710433a000
7101e6c274  add x21,x21,#0x880
7101e6c278  mov x1,x21
7101e6c27c  bl 0x7103778300
7101e6c280  ldr x0,[x22, #0x10]
7101e6c284  mov v0.16B,v8.16B
7101e6c288  adrp x22,0x710425f000
7101e6c28c  add x22,x22,#0xba5
7101e6c290  mov x1,x22
7101e6c294  bl 0x7103778300
7101e6c298  mov w1,#0x1
7101e6c29c  mov x0,x20
7101e6c2a0  bl 0x7101e96fc0
7101e6c2a4  mov x26,#0x23f5
7101e6c2a8  movk x26,#0x57a5, LSL #16
7101e6c2ac  movk x26,#0xf, LSL #32
7101e6c2b0  str x26,[sp]
7101e6c2b4  ldr x8,[x19, #0x200]
7101e6c2b8  ldrb w9,[x8, #0x8]
7101e6c2bc  ldr x0,[x8]
7101e6c2c0  cmp w9,#0x1
7101e6c2c4  cset w1,ne
7101e6c2c8  mov x2,sp
7101e6c2cc  bl 0x7103772070
7101e6c2d0  ldr x8,[x19, #0x200]
7101e6c2d4  ldrb w9,[x8, #0x8]!
7101e6c2d8  cmp w9,#0x0
7101e6c2dc  cset w9,ne
7101e6c2e0  umaddl x27,w9,w25,x8
7101e6c2e4  adrp x23,0x71043be000
7101e6c2e8  add x23,x23,#0xcef
7101e6c2ec  mov x1,x23
7101e6c2f0  add x0,x27,#0x18
7101e6c2f4  bl 0x710377a120
7101e6c2f8  add x0,x27,#0x28
7101e6c2fc  mov x1,x23
7101e6c300  bl 0x710377a120
7101e6c304  add x0,x27,#0x38
7101e6c308  mov x1,x23
7101e6c30c  bl 0x710377a120
7101e6c310  ldr x8,[x19, #0x200]
7101e6c314  ldrb w9,[x8, #0x8]!
7101e6c318  cmp w9,#0x0
7101e6c31c  cset w9,ne
7101e6c320  umaddl x23,w9,w25,x8
7101e6c324  ldr x0,[x23, #0x10]
7101e6c328  mov v0.16B,v8.16B
7101e6c32c  mov x1,x21
7101e6c330  bl 0x7103778300
7101e6c334  ldr x0,[x23, #0x10]
7101e6c338  mov v0.16B,v8.16B
7101e6c33c  mov x1,x22
7101e6c340  bl 0x7103778300
7101e6c344  mov x0,x20
7101e6c348  mov w1,wzr
7101e6c34c  bl 0x7101e96fc0
7101e6c350  str x26,[sp]
7101e6c354  ldr x8,[x19, #0x200]
7101e6c358  ldrb w9,[x8, #0x8]
7101e6c35c  ldr x0,[x8]
7101e6c360  cmp w9,#0x0
7101e6c364  cset w1,ne
7101e6c368  mov x2,sp
7101e6c36c  bl 0x7103772070
7101e6c370  ldr x8,[x19, #0x200]
7101e6c374  strb w24,[x8, #0x98]
7101e6c378  ldrsw x8,[x19, #0x1cc]
7101e6c37c  cmp w8,#0x13
7101e6c380  b.cs 0x7101e6c404
7101e6c384  add x8,x19,x8, LSL #0x2
7101e6c388  mov w9,#0x8
7101e6c38c  str w9,[x8, #0x180]
7101e6c390  ldr w8,[x19, #0x1cc]
7101e6c394  cmp w8,#0x11
7101e6c398  b.gt 0x7101e6c3e0
7101e6c39c  add w8,w8,#0x1
7101e6c3a0  cmp w8,#0x13
7101e6c3a4  str w8,[x19, #0x1cc]
7101e6c3a8  b.cs 0x7101e6c404
7101e6c3ac  add x8,x19,w8, SXTW  #0x2
7101e6c3b0  mov w9,#0xd
7101e6c3b4  str w9,[x8, #0x180]
7101e6c3b8  ldr w8,[x19, #0x1cc]
7101e6c3bc  cmp w8,#0x11
7101e6c3c0  b.gt 0x7101e6c3e0
7101e6c3c4  add w8,w8,#0x1
7101e6c3c8  cmp w8,#0x13
7101e6c3cc  str w8,[x19, #0x1cc]
7101e6c3d0  b.cs 0x7101e6c404
7101e6c3d4  add x8,x19,w8, SXTW  #0x2
7101e6c3d8  orr w9,wzr,#0xf
7101e6c3dc  str w9,[x8, #0x180]
7101e6c3e0  ldr d8,[sp, #0x20]
7101e6c3e4  ldp x29,x30,[sp, #0x70]
7101e6c3e8  ldp x20,x19,[sp, #0x60]
7101e6c3ec  ldr x27,[sp, #0x28]
7101e6c3f0  ldp x22,x21,[sp, #0x50]
7101e6c3f4  ldp x24,x23,[sp, #0x40]
7101e6c3f8  ldp x26,x25,[sp, #0x30]
7101e6c3fc  add sp,sp,#0x80
7101e6c400  ret
7101e6c404  bl 0x71039c2650
