// addr:      7101e70a60
// offset:    0x1e70a60
// name:      FUN_7101e70a60
// mangled:   
// size:      952

7101e70a60  sub sp,sp,#0x150
7101e70a64  stp x28,x27,[sp, #0xf0]
7101e70a68  stp x26,x25,[sp, #0x100]
7101e70a6c  stp x24,x23,[sp, #0x110]
7101e70a70  stp x22,x21,[sp, #0x120]
7101e70a74  stp x20,x19,[sp, #0x130]
7101e70a78  stp x29,x30,[sp, #0x140]
7101e70a7c  add x29,sp,#0x140
7101e70a80  adrp x24,0x710532f000
7101e70a84  ldr x8,[x24, #0x730]
7101e70a88  adrp x9,0x7105329000
7101e70a8c  ldr x9,[x9, #0xf98]
7101e70a90  ldr x8,[x8, #0x8]
7101e70a94  ldr x23,[x9]
7101e70a98  ldr x22,[x8, #0x1d8]
7101e70a9c  mov x20,x1
7101e70aa0  mvn w8,w20
7101e70aa4  mov x21,x2
7101e70aa8  mov x19,x0
7101e70aac  and x1,x1,#0xffff
7101e70ab0  tst w8,#0xffff
7101e70ab4  b.eq 0x7101e70ac8
7101e70ab8  lsl x8,x20,#0x30
7101e70abc  add x8,x22,x8, ASR #0x2f
7101e70ac0  ldrh w8,[x8, #0x60]
7101e70ac4  b 0x7101e70acc
7101e70ac8  mov w8,#0xffffffff
7101e70acc  ldp x9,x10,[x22, #0x20]
7101e70ad0  sub x10,x10,x9
7101e70ad4  orr x11,xzr,#-0x3333333333333334
7101e70ad8  movk x11,#0xcccd
7101e70adc  adrp x12,0x7105182000
7101e70ae0  add x12,x12,#0xb08
7101e70ae4  asr x10,x10,#0x6
7101e70ae8  mul x10,x10,x11
7101e70aec  mov w11,#0x140
7101e70af0  madd x9,x8,x11,x9
7101e70af4  cmp x10,x8
7101e70af8  mov x0,x22
7101e70afc  sxth w25,w20
7101e70b00  csel x27,x9,x12,hi
7101e70b04  bl 0x71032a9470
7101e70b08  mov x2,x0
7101e70b0c  add x0,sp,#0xa0
7101e70b10  mov x1,x22
7101e70b14  add x26,sp,#0xa0
7101e70b18  bl 0x71032a9540
7101e70b1c  add x1,x26,#0x8
7101e70b20  adrp x0,0x7104464000
7101e70b24  add x0,x0,#0x1d4
7101e70b28  mov x8,sp
7101e70b2c  mov x22,sp
7101e70b30  bl 0x71003a4ca0
7101e70b34  mov x8,xzr
7101e70b38  add x9,x22,#0x8
7101e70b3c  add x10,sp,#0x48
7101e70b40  str xzr,[sp, #0x48]
7101e70b44  b 0x7101e70b50
7101e70b48  add x8,x8,#0x2
7101e70b4c  strb w11,[x12, #0x9]
7101e70b50  add x11,x9,x8
7101e70b54  ldrb w13,[x11]
7101e70b58  cbz w13,0x7101e70b84
7101e70b5c  add w14,w8,#0x1
7101e70b60  add x12,x10,x8
7101e70b64  cmp w14,#0x3f
7101e70b68  strb w13,[x12, #0x8]
7101e70b6c  b.cs 0x7101e70b80
7101e70b70  ldrb w11,[x11, #0x1]
7101e70b74  cbnz w11,0x7101e70b48
7101e70b78  add x8,x8,#0x1
7101e70b7c  b 0x7101e70b84
7101e70b80  add w8,w8,#0x1
7101e70b84  add x11,sp,#0x48
7101e70b88  add x22,x11,#0x8
7101e70b8c  mov w9,#0x9dc5
7101e70b90  movk w9,#0x811c, LSL #16
7101e70b94  strb wzr,[x22, w8, UXTW ]
7101e70b98  ldrb w10,[sp, #0x50]
7101e70b9c  str w8,[sp, #0x4c]
7101e70ba0  cbz w10,0x7101e70bc0
7101e70ba4  add x8,x11,#0x9
7101e70ba8  mov w11,#0x89
7101e70bac  mul w9,w9,w11
7101e70bb0  and w10,w10,#0xff
7101e70bb4  eor w9,w9,w10
7101e70bb8  ldrb w10,[x8], #0x1
7101e70bbc  cbnz w10,0x7101e70bac
7101e70bc0  adrp x1,0x710433a000
7101e70bc4  add x1,x1,#0x953
7101e70bc8  add x8,sp,#0xa0
7101e70bcc  mov x0,x19
7101e70bd0  str w9,[sp, #0x48]
7101e70bd4  bl 0x7103776910
7101e70bd8  adrp x1,0x7104455000
7101e70bdc  add x1,x1,#0xf8
7101e70be0  add x0,sp,#0xa0
7101e70be4  mov w2,#0x1
7101e70be8  mov x3,x22
7101e70bec  bl 0x710377a280
7101e70bf0  ldr x0,[sp, #0xa8]
7101e70bf4  adrp x26,0x710523d000
7101e70bf8  add x26,x26,#0x9a8
7101e70bfc  stp x26,xzr,[sp, #0xa0]
7101e70c00  cbz x0,0x7101e70c08
7101e70c04  bl 0x710392eb40
7101e70c08  ldrb w8,[x27, #0x5e]
7101e70c0c  cmp w8,#0x1
7101e70c10  b.eq 0x7101e70c28
7101e70c14  cbnz w8,0x7101e70c3c
7101e70c18  ldr x0,[x19, #0x8]
7101e70c1c  adrp x1,0x71043be000
7101e70c20  add x1,x1,#0xc89
7101e70c24  b 0x7101e70c34
7101e70c28  ldr x0,[x19, #0x8]
7101e70c2c  adrp x1,0x710432a000
7101e70c30  add x1,x1,#0x69e
7101e70c34  fmov s0,0x3f800000
7101e70c38  bl 0x7103778300
7101e70c3c  ldrh w22,[x27, #0x6a]
7101e70c40  cbz w22,0x7101e70cdc
7101e70c44  adrp x1,0x710438d000
7101e70c48  add x1,x1,#0x1b5
7101e70c4c  mov x8,sp
7101e70c50  mov x0,x19
7101e70c54  bl 0x7103776910
7101e70c58  adrp x1,0x7104443000
7101e70c5c  add x1,x1,#0xda2
7101e70c60  add x8,sp,#0x90
7101e70c64  mov x0,x19
7101e70c68  bl 0x7103776910
7101e70c6c  ldr x8,[x24, #0x730]
7101e70c70  ldr x27,[x8, #0x8]
7101e70c74  add x1,x27,#0x210
7101e70c78  add x0,sp,#0xa0
7101e70c7c  mov w2,w22
7101e70c80  add x28,sp,#0xa0
7101e70c84  bl 0x71032a0c90
7101e70c88  add x1,x28,#0x8
7101e70c8c  mov x0,sp
7101e70c90  bl 0x710377a120
7101e70c94  ldr x0,[x27, #0x218]
7101e70c98  mov w1,w22
7101e70c9c  bl 0x71032a1630
7101e70ca0  mov x1,x0
7101e70ca4  mov x0,x21
7101e70ca8  bl 0x710323f760
7101e70cac  ldr x21,[sp, #0x98]
7101e70cb0  mov x1,x0
7101e70cb4  mov x0,x21
7101e70cb8  bl 0x7103778b80
7101e70cbc  stp x26,xzr,[sp, #0x90]
7101e70cc0  cbz x21,0x7101e70ccc
7101e70cc4  mov x0,x21
7101e70cc8  bl 0x710392eb40
7101e70ccc  ldr x0,[sp, #0x8]
7101e70cd0  stp x26,xzr,[sp]
7101e70cd4  cbnz x0,0x7101e70d50
7101e70cd8  b 0x7101e70d54
7101e70cdc  adrp x1,0x710438d000
7101e70ce0  add x1,x1,#0x1b5
7101e70ce4  add x8,sp,#0xa0
7101e70ce8  mov x0,x19
7101e70cec  bl 0x7103776910
7101e70cf0  adrp x1,0x7104443000
7101e70cf4  add x1,x1,#0xda2
7101e70cf8  mov x8,sp
7101e70cfc  mov x0,x19
7101e70d00  bl 0x7103776910
7101e70d04  ldr x21,[sp, #0xa8]
7101e70d08  ldr x0,[x21, #0x10]
7101e70d0c  cbz x0,0x7101e70d24
7101e70d10  add x1,sp,#0x90
7101e70d14  mov w2,wzr
7101e70d18  mov w3,wzr
7101e70d1c  str wzr,[sp, #0x90]
7101e70d20  bl 0x71037a2270
7101e70d24  ldr x22,[sp, #0x8]
7101e70d28  mov w1,#0x1
7101e70d2c  mov x0,x22
7101e70d30  bl 0x71037790a0
7101e70d34  stp x26,xzr,[sp]
7101e70d38  cbz x22,0x7101e70d44
7101e70d3c  mov x0,x22
7101e70d40  bl 0x710392eb40
7101e70d44  stp x26,xzr,[sp, #0xa0]
7101e70d48  cbz x21,0x7101e70d54
7101e70d4c  mov x0,x21
7101e70d50  bl 0x710392eb40
7101e70d54  mov w21,wzr
7101e70d58  cmn w25,#0x1
7101e70d5c  b.eq 0x7101e70dbc
7101e70d60  cmp w25,#0x7cf
7101e70d64  b.gt 0x7101e70dbc
7101e70d68  ldr x8,[x24, #0x730]
7101e70d6c  ldr x8,[x8, #0x8]
7101e70d70  ldr x8,[x8, #0x1d8]
7101e70d74  lsl x9,x20,#0x30
7101e70d78  add x9,x8,x9, ASR #0x2f
7101e70d7c  ldrh w9,[x9, #0x60]
7101e70d80  ldp x10,x8,[x8, #0x20]
7101e70d84  sub x8,x8,x10
7101e70d88  mov w10,#0xcccd
7101e70d8c  movk w10,#0xcccc, LSL #16
7101e70d90  lsr x8,x8,#0x6
7101e70d94  mul w8,w8,w10
7101e70d98  cmp w8,w9
7101e70d9c  b.ls 0x7101e70db8
7101e70da0  ldr x9,[x23, #0x30]
7101e70da4  sxth x8,w20
7101e70da8  mov w10,#0x24
7101e70dac  madd x8,x8,x10,x9
7101e70db0  ldrh w21,[x8, #0x20]
7101e70db4  b 0x7101e70dbc
7101e70db8  mov w21,wzr
7101e70dbc  adrp x1,0x71042b2000
7101e70dc0  add x1,x1,#0x92e
7101e70dc4  add x8,sp,#0xa0
7101e70dc8  mov x0,x19
7101e70dcc  bl 0x7103776910
7101e70dd0  adrp x1,0x710435b000
7101e70dd4  add x1,x1,#0xdf9
7101e70dd8  add x0,sp,#0xa0
7101e70ddc  mov w2,#0x1
7101e70de0  mov w3,w21
7101e70de4  bl 0x710377a280
7101e70de8  ldr x0,[sp, #0xa8]
7101e70dec  stp x26,xzr,[sp, #0xa0]
7101e70df0  cbz x0,0x7101e70df8
7101e70df4  bl 0x710392eb40
7101e70df8  ldp x29,x30,[sp, #0x140]
7101e70dfc  ldp x20,x19,[sp, #0x130]
7101e70e00  ldp x22,x21,[sp, #0x120]
7101e70e04  ldp x24,x23,[sp, #0x110]
7101e70e08  ldp x26,x25,[sp, #0x100]
7101e70e0c  ldp x28,x27,[sp, #0xf0]
7101e70e10  add sp,sp,#0x150
7101e70e14  ret
