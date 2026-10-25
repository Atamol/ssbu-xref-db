// addr:      7101bf77f0
// offset:    0x1bf77f0
// name:      FUN_7101bf77f0
// mangled:   
// size:      1372

7101bf77f0  sub sp,sp,#0x160
7101bf77f4  stp x28,x25,[sp, #0x110]
7101bf77f8  stp x24,x23,[sp, #0x120]
7101bf77fc  stp x22,x21,[sp, #0x130]
7101bf7800  stp x20,x19,[sp, #0x140]
7101bf7804  stp x29,x30,[sp, #0x150]
7101bf7808  add x29,sp,#0x150
7101bf780c  mov x20,x0
7101bf7810  ldr x0,[x0, #0x30]
7101bf7814  str w1,[sp]
7101bf7818  cbz x0,0x7101bf7d40
7101bf781c  ldr x8,[x0]
7101bf7820  ldr x8,[x8, #0x30]
7101bf7824  mov x1,sp
7101bf7828  mov x19,x2
7101bf782c  blr x8
7101bf7830  mov x21,x0
7101bf7834  ldr w8,[x0, #0x4]
7101bf7838  ldr x0,[x20, #0x60]
7101bf783c  str w8,[sp]
7101bf7840  cbz x0,0x7101bf7d40
7101bf7844  ldr x8,[x0]
7101bf7848  ldr x8,[x8, #0x30]
7101bf784c  mov x1,sp
7101bf7850  blr x8
7101bf7854  mov x22,x0
7101bf7858  add x23,x0,#0x8
7101bf785c  adrp x24,0x710523d000
7101bf7860  add x24,x24,#0xa08
7101bf7864  mov w0,#0x10
7101bf7868  stur x24,[x29, #-0x60]
7101bf786c  mov w1,#0x10
7101bf7870  bl 0x710392e290
7101bf7874  cbnz x0,0x7101bf78bc
7101bf7878  adrp x8,0x7105332000
7101bf787c  ldr x0,[x8, #0xf00]
7101bf7880  cbz x0,0x7101bf78b8
7101bf7884  mov w8,#0x10
7101bf7888  str wzr,[sp, #0x48]
7101bf788c  add x1,sp,#0x48
7101bf7890  str x8,[sp]
7101bf7894  ldr x8,[x0]
7101bf7898  ldr x8,[x8, #0x30]
7101bf789c  mov x2,sp
7101bf78a0  blr x8
7101bf78a4  tbz w0,#0x0,0x7101bf78b8
7101bf78a8  mov w0,#0x10
7101bf78ac  mov w1,#0x10
7101bf78b0  bl 0x710392e290
7101bf78b4  cbnz x0,0x7101bf78bc
7101bf78b8  mov x0,xzr
7101bf78bc  sub x25,x29,#0x60
7101bf78c0  cmp x25,x23
7101bf78c4  stp xzr,xzr,[x0]
7101bf78c8  stur x0,[x29, #-0x58]
7101bf78cc  b.eq 0x7101bf7934
7101bf78d0  ldr x8,[x22, #0x10]
7101bf78d4  ldp x9,x8,[x8]
7101bf78d8  cbz x8,0x7101bf7930
7101bf78dc  add x10,x8,#0x8
7101bf78e0  ldxr x11,[x10]
7101bf78e4  add x11,x11,#0x1
7101bf78e8  stxr w12,x11,[x10]
7101bf78ec  cbnz w12,0x7101bf78e0
7101bf78f0  ldr x23,[x0, #0x8]
7101bf78f4  stp x9,x8,[x0]
7101bf78f8  cbz x23,0x7101bf7934
7101bf78fc  add x8,x23,#0x8
7101bf7900  ldaxr x9,[x8]
7101bf7904  sub x10,x9,#0x1
7101bf7908  stlxr w11,x10,[x8]
7101bf790c  cbnz w11,0x7101bf7900
7101bf7910  cbnz x9,0x7101bf7934
7101bf7914  ldr x8,[x23]
7101bf7918  ldr x8,[x8, #0x10]
7101bf791c  mov x0,x23
7101bf7920  blr x8
7101bf7924  mov x0,x23
7101bf7928  bl 0x71039c2670
7101bf792c  b 0x7101bf7934
7101bf7930  stp x9,x8,[x0]
7101bf7934  mov w0,#0x10
7101bf7938  mov w1,#0x10
7101bf793c  add x23,x25,#0x10
7101bf7940  add x25,x22,#0x18
7101bf7944  stur x24,[x29, #-0x50]
7101bf7948  bl 0x710392e290
7101bf794c  cbnz x0,0x7101bf7994
7101bf7950  adrp x8,0x7105332000
7101bf7954  ldr x0,[x8, #0xf00]
7101bf7958  cbz x0,0x7101bf7990
7101bf795c  mov w8,#0x10
7101bf7960  str wzr,[sp, #0x48]
7101bf7964  add x1,sp,#0x48
7101bf7968  str x8,[sp]
7101bf796c  ldr x8,[x0]
7101bf7970  ldr x8,[x8, #0x30]
7101bf7974  mov x2,sp
7101bf7978  blr x8
7101bf797c  tbz w0,#0x0,0x7101bf7990
7101bf7980  mov w0,#0x10
7101bf7984  mov w1,#0x10
7101bf7988  bl 0x710392e290
7101bf798c  cbnz x0,0x7101bf7994
7101bf7990  mov x0,xzr
7101bf7994  cmp x23,x25
7101bf7998  stp xzr,xzr,[x0]
7101bf799c  stur x0,[x29, #-0x48]
7101bf79a0  b.eq 0x7101bf7a08
7101bf79a4  ldr x8,[x22, #0x20]
7101bf79a8  ldp x9,x8,[x8]
7101bf79ac  cbz x8,0x7101bf7a04
7101bf79b0  add x10,x8,#0x8
7101bf79b4  ldxr x11,[x10]
7101bf79b8  add x11,x11,#0x1
7101bf79bc  stxr w12,x11,[x10]
7101bf79c0  cbnz w12,0x7101bf79b4
7101bf79c4  ldr x23,[x0, #0x8]
7101bf79c8  stp x9,x8,[x0]
7101bf79cc  cbz x23,0x7101bf7a08
7101bf79d0  add x8,x23,#0x8
7101bf79d4  ldaxr x9,[x8]
7101bf79d8  sub x10,x9,#0x1
7101bf79dc  stlxr w11,x10,[x8]
7101bf79e0  cbnz w11,0x7101bf79d4
7101bf79e4  cbnz x9,0x7101bf7a08
7101bf79e8  ldr x8,[x23]
7101bf79ec  ldr x8,[x8, #0x10]
7101bf79f0  mov x0,x23
7101bf79f4  blr x8
7101bf79f8  mov x0,x23
7101bf79fc  bl 0x71039c2670
7101bf7a00  b 0x7101bf7a08
7101bf7a04  stp x9,x8,[x0]
7101bf7a08  adrp x1,0x7104422000
7101bf7a0c  add x1,x1,#0x300
7101bf7a10  sub x8,x29,#0x90
7101bf7a14  mov x0,x19
7101bf7a18  sub x23,x29,#0x90
7101bf7a1c  bl 0x7103776910
7101bf7a20  add x8,x23,#0x10
7101bf7a24  adrp x1,0x710436c000
7101bf7a28  add x1,x1,#0x28c
7101bf7a2c  mov x0,x19
7101bf7a30  bl 0x7103776910
7101bf7a34  add x8,x23,#0x20
7101bf7a38  adrp x1,0x7104443000
7101bf7a3c  add x1,x1,#0x5f4
7101bf7a40  mov x0,x19
7101bf7a44  bl 0x7103776910
7101bf7a48  adrp x1,0x71042b2000
7101bf7a4c  add x1,x1,#0x92e
7101bf7a50  sub x8,x29,#0xa0
7101bf7a54  mov x0,x19
7101bf7a58  bl 0x7103776910
7101bf7a5c  adrp x1,0x710435b000
7101bf7a60  add x1,x1,#0x69d
7101bf7a64  add x8,sp,#0xa0
7101bf7a68  mov x0,x19
7101bf7a6c  bl 0x7103776910
7101bf7a70  adrp x1,0x71043cf000
7101bf7a74  add x1,x1,#0xca4
7101bf7a78  add x8,sp,#0x90
7101bf7a7c  mov x0,x19
7101bf7a80  bl 0x7103776910
7101bf7a84  adrp x8,0x710532f000
7101bf7a88  ldr x8,[x8, #0x730]
7101bf7a8c  ldrsw x22,[x22]
7101bf7a90  ldr x0,[x19, #0x8]
7101bf7a94  fmov s0,0x3f800000
7101bf7a98  adrp x9,0x7104443000
7101bf7a9c  add x9,x9,#0x600
7101bf7aa0  cmp w22,#0x0
7101bf7aa4  ldr x23,[x8, #0x8]
7101bf7aa8  adrp x8,0x71042d6000
7101bf7aac  add x8,x8,#0x1e6
7101bf7ab0  csel x1,x9,x8,gt
7101bf7ab4  bl 0x7103778300
7101bf7ab8  ldr w2,[x21]
7101bf7abc  adrp x1,0x710424e000
7101bf7ac0  add x1,x1,#0x707
7101bf7ac4  sub x0,x29,#0xa0
7101bf7ac8  bl 0x710377a4a0
7101bf7acc  ldr w9,[x21, #0x4]
7101bf7ad0  ldr x8,[x20, #0x70]!
7101bf7ad4  mov x2,#0xff0000000000
7101bf7ad8  movk x2,#0xf8ff, LSL #48
7101bf7adc  tbnz w9,#0x1f,0x7101bf7b08
7101bf7ae0  ldr x10,[x20, #0x8]
7101bf7ae4  sub x10,x10,x8
7101bf7ae8  asr x10,x10,#0x3
7101bf7aec  sub w11,w10,#0x1
7101bf7af0  cmp w9,w11
7101bf7af4  b.gt 0x7101bf7b08
7101bf7af8  sxtw x9,w9
7101bf7afc  cmp x10,x9
7101bf7b00  b.ls 0x7101bf7d44
7101bf7b04  ldr x2,[x8, x9, LSL #0x3]
7101bf7b08  strb wzr,[sp, #0x89]
7101bf7b0c  strb wzr,[sp, #0x48]
7101bf7b10  ldr x1,[x23, #0x3b8]
7101bf7b14  mov x0,sp
7101bf7b18  mov x20,sp
7101bf7b1c  bl 0x71032b5d50
7101bf7b20  add x2,x20,#0x8
7101bf7b24  adrp x1,0x7104401000
7101bf7b28  add x1,x1,#0x430
7101bf7b2c  add x0,sp,#0x48
7101bf7b30  bl 0x71014c8900
7101bf7b34  add x0,sp,#0xa0
7101bf7b38  add x1,sp,#0x48
7101bf7b3c  bl 0x710377a120
7101bf7b40  sub x8,x22,#0x1
7101bf7b44  cmp w8,#0x1
7101bf7b48  b.hi 0x7101bf7b5c
7101bf7b4c  ldur x0,[x29, #-0x88]
7101bf7b50  sub x9,x29,#0x60
7101bf7b54  add x1,x9,x8, LSL #0x4
7101bf7b58  bl 0x7103778b80
7101bf7b5c  sub x8,x22,#0x2
7101bf7b60  cmp w8,#0x1
7101bf7b64  b.hi 0x7101bf7b78
7101bf7b68  ldur x0,[x29, #-0x78]
7101bf7b6c  sub x9,x29,#0x60
7101bf7b70  add x1,x9,x8, LSL #0x4
7101bf7b74  bl 0x7103778b80
7101bf7b78  sub x8,x22,#0x3
7101bf7b7c  cmp w8,#0x1
7101bf7b80  b.hi 0x7101bf7b94
7101bf7b84  ldur x0,[x29, #-0x68]
7101bf7b88  sub x9,x29,#0x60
7101bf7b8c  add x1,x9,x8, LSL #0x4
7101bf7b90  bl 0x7103778b80
7101bf7b94  adrp x8,0x71050ac000
7101bf7b98  add x8,x8,#0xaf0
7101bf7b9c  ldr x0,[x19, #0x8]
7101bf7ba0  ldr x1,[x8, x22, LSL #0x3]
7101bf7ba4  fmov s0,0x3f800000
7101bf7ba8  bl 0x7103778300
7101bf7bac  ldr x0,[sp, #0x98]
7101bf7bb0  adrp x19,0x710523d000
7101bf7bb4  add x19,x19,#0x9a8
7101bf7bb8  stp x19,xzr,[sp, #0x90]
7101bf7bbc  cbz x0,0x7101bf7bc4
7101bf7bc0  bl 0x710392eb40
7101bf7bc4  ldr x0,[sp, #0xa8]
7101bf7bc8  stp x19,xzr,[sp, #0xa0]
7101bf7bcc  cbz x0,0x7101bf7bd4
7101bf7bd0  bl 0x710392eb40
7101bf7bd4  ldur x0,[x29, #-0x98]
7101bf7bd8  stp x19,xzr,[x29, #-0xa0]
7101bf7bdc  cbz x0,0x7101bf7be4
7101bf7be0  bl 0x710392eb40
7101bf7be4  ldur x0,[x29, #-0x68]
7101bf7be8  stp x19,xzr,[x29, #-0x70]
7101bf7bec  cbz x0,0x7101bf7bf4
7101bf7bf0  bl 0x710392eb40
7101bf7bf4  ldur x0,[x29, #-0x78]
7101bf7bf8  stp x19,xzr,[x29, #-0x80]
7101bf7bfc  cbz x0,0x7101bf7c04
7101bf7c00  bl 0x710392eb40
7101bf7c04  ldur x0,[x29, #-0x88]
7101bf7c08  stp x19,xzr,[x29, #-0x90]
7101bf7c0c  cbz x0,0x7101bf7c14
7101bf7c10  bl 0x710392eb40
7101bf7c14  ldur x19,[x29, #-0x48]
7101bf7c18  stp x24,xzr,[x29, #-0x50]
7101bf7c1c  cbz x19,0x7101bf7c9c
7101bf7c20  ldr x20,[x19, #0x8]
7101bf7c24  stp xzr,xzr,[x19]
7101bf7c28  cbz x20,0x7101bf7c94
7101bf7c2c  add x8,x20,#0x8
7101bf7c30  ldaxr x9,[x8]
7101bf7c34  sub x10,x9,#0x1
7101bf7c38  stlxr w11,x10,[x8]
7101bf7c3c  cbnz w11,0x7101bf7c30
7101bf7c40  cbnz x9,0x7101bf7c5c
7101bf7c44  ldr x8,[x20]
7101bf7c48  ldr x8,[x8, #0x10]
7101bf7c4c  mov x0,x20
7101bf7c50  blr x8
7101bf7c54  mov x0,x20
7101bf7c58  bl 0x71039c2670
7101bf7c5c  ldr x20,[x19, #0x8]
7101bf7c60  cbz x20,0x7101bf7c94
7101bf7c64  add x8,x20,#0x8
7101bf7c68  ldaxr x9,[x8]
7101bf7c6c  sub x10,x9,#0x1
7101bf7c70  stlxr w11,x10,[x8]
7101bf7c74  cbnz w11,0x7101bf7c68
7101bf7c78  cbnz x9,0x7101bf7c94
7101bf7c7c  ldr x8,[x20]
7101bf7c80  ldr x8,[x8, #0x10]
7101bf7c84  mov x0,x20
7101bf7c88  blr x8
7101bf7c8c  mov x0,x20
7101bf7c90  bl 0x71039c2670
7101bf7c94  mov x0,x19
7101bf7c98  bl 0x710392eb40
7101bf7c9c  ldur x19,[x29, #-0x58]
7101bf7ca0  stp x24,xzr,[x29, #-0x60]
7101bf7ca4  cbz x19,0x7101bf7d24
7101bf7ca8  ldr x20,[x19, #0x8]
7101bf7cac  stp xzr,xzr,[x19]
7101bf7cb0  cbz x20,0x7101bf7d1c
7101bf7cb4  add x8,x20,#0x8
7101bf7cb8  ldaxr x9,[x8]
7101bf7cbc  sub x10,x9,#0x1
7101bf7cc0  stlxr w11,x10,[x8]
7101bf7cc4  cbnz w11,0x7101bf7cb8
7101bf7cc8  cbnz x9,0x7101bf7ce4
7101bf7ccc  ldr x8,[x20]
7101bf7cd0  ldr x8,[x8, #0x10]
7101bf7cd4  mov x0,x20
7101bf7cd8  blr x8
7101bf7cdc  mov x0,x20
7101bf7ce0  bl 0x71039c2670
7101bf7ce4  ldr x20,[x19, #0x8]
7101bf7ce8  cbz x20,0x7101bf7d1c
7101bf7cec  add x8,x20,#0x8
7101bf7cf0  ldaxr x9,[x8]
7101bf7cf4  sub x10,x9,#0x1
7101bf7cf8  stlxr w11,x10,[x8]
7101bf7cfc  cbnz w11,0x7101bf7cf0
7101bf7d00  cbnz x9,0x7101bf7d1c
7101bf7d04  ldr x8,[x20]
7101bf7d08  ldr x8,[x8, #0x10]
7101bf7d0c  mov x0,x20
7101bf7d10  blr x8
7101bf7d14  mov x0,x20
7101bf7d18  bl 0x71039c2670
7101bf7d1c  mov x0,x19
7101bf7d20  bl 0x710392eb40
7101bf7d24  ldp x29,x30,[sp, #0x150]
7101bf7d28  ldp x20,x19,[sp, #0x140]
7101bf7d2c  ldp x22,x21,[sp, #0x130]
7101bf7d30  ldp x24,x23,[sp, #0x120]
7101bf7d34  ldp x28,x25,[sp, #0x110]
7101bf7d38  add sp,sp,#0x160
7101bf7d3c  ret
7101bf7d40  bl 0x71039c2650
7101bf7d44  mov x0,x20
7101bf7d48  bl 0x71039c1330
