// addr:      7101a60a10
// offset:    0x1a60a10
// name:      FUN_7101a60a10
// mangled:   
// size:      592

7101a60a10  sub sp,sp,#0x120
7101a60a14  str x28,[sp, #0xc0]
7101a60a18  stp x26,x25,[sp, #0xd0]
7101a60a1c  stp x24,x23,[sp, #0xe0]
7101a60a20  stp x22,x21,[sp, #0xf0]
7101a60a24  stp x20,x19,[sp, #0x100]
7101a60a28  stp x29,x30,[sp, #0x110]
7101a60a2c  add x29,sp,#0x110
7101a60a30  mov w21,w1
7101a60a34  mov x19,x0
7101a60a38  adrp x1,0x7104319000
7101a60a3c  add x1,x1,#0x6c3
7101a60a40  add x8,sp,#0x68
7101a60a44  mov x0,x2
7101a60a48  mov x20,x2
7101a60a4c  bl 0x7103776910
7101a60a50  adrp x1,0x71043be000
7101a60a54  add x1,x1,#0x822
7101a60a58  add x8,sp,#0x58
7101a60a5c  mov x0,x20
7101a60a60  bl 0x7103776910
7101a60a64  adrp x1,0x71043ae000
7101a60a68  add x1,x1,#0x1be
7101a60a6c  add x8,sp,#0x48
7101a60a70  mov x0,x20
7101a60a74  bl 0x7103776910
7101a60a78  mov x20,x19
7101a60a7c  ldr x8,[x20, #0x8]!
7101a60a80  ldr x9,[x20, #0x8]
7101a60a84  sub x9,x9,x8
7101a60a88  mov x25,#0x6db7
7101a60a8c  movk x25,#0xb6db, LSL #16
7101a60a90  movk x25,#0xdb6d, LSL #32
7101a60a94  movk x25,#0x6db6, LSL #48
7101a60a98  sxtw x24,w21
7101a60a9c  asr x9,x9,#0x4
7101a60aa0  mul x9,x9,x25
7101a60aa4  cmp x9,x24
7101a60aa8  b.ls 0x7101a60c58
7101a60aac  orr w9,wzr,#0x70
7101a60ab0  madd x9,x24,x9,x8
7101a60ab4  ldr x21,[x9, #0x68]
7101a60ab8  and x10,x21,#-0x100000000000000
7101a60abc  mov x11,#-0x3f00000000000000
7101a60ac0  and x9,x21,#0xffffffffff
7101a60ac4  cmp x10,x11
7101a60ac8  ccmp x9,#0x0,#0x4,eq
7101a60acc  b.ne 0x7101a60af0
7101a60ad0  orr w9,wzr,#0x70
7101a60ad4  madd x8,x24,x9,x8
7101a60ad8  ldr w3,[x8, #0x60]
7101a60adc  add x1,x8,#0x20
7101a60ae0  add x0,sp,#0x68
7101a60ae4  mov w2,#0x1
7101a60ae8  bl 0x710377a280
7101a60aec  b 0x7101a60b60
7101a60af0  adrp x9,0x710532f000
7101a60af4  ldr x9,[x9, #0x730]
7101a60af8  ldr x26,[x9, #0x8]
7101a60afc  orr w9,wzr,#0x70
7101a60b00  madd x8,x24,x9,x8
7101a60b04  ldr x0,[x26, #0x168]
7101a60b08  mov x1,x21
7101a60b0c  mov w2,wzr
7101a60b10  add x22,x8,#0x20
7101a60b14  bl 0x7103263540
7101a60b18  ldr x1,[x26, #0x168]
7101a60b1c  mov w23,w0
7101a60b20  add x0,sp,#0x78
7101a60b24  mov x2,x21
7101a60b28  add x26,sp,#0x78
7101a60b2c  bl 0x7103262310
7101a60b30  add x2,x26,#0x8
7101a60b34  adrp x0,0x710439b000
7101a60b38  add x0,x0,#0x815
7101a60b3c  mov x8,sp
7101a60b40  mov w1,w23
7101a60b44  mov x21,sp
7101a60b48  bl 0x71003a4ca0
7101a60b4c  add x3,x21,#0x8
7101a60b50  add x0,sp,#0x68
7101a60b54  mov w2,#0x1
7101a60b58  mov x1,x22
7101a60b5c  bl 0x710377a280
7101a60b60  ldp x8,x9,[x19, #0x8]
7101a60b64  sub x9,x9,x8
7101a60b68  asr x9,x9,#0x4
7101a60b6c  mul x9,x9,x25
7101a60b70  cmp x9,x24
7101a60b74  b.ls 0x7101a60c58
7101a60b78  orr w9,wzr,#0x70
7101a60b7c  madd x8,x24,x9,x8
7101a60b80  ldr x8,[x8, #0x10]
7101a60b84  mov w21,#0x4240
7101a60b88  movk w21,#0xf, LSL #16
7101a60b8c  ubfx x10,x8,#0xc,#0x4
7101a60b90  and x9,x8,#0xfff
7101a60b94  ubfx x8,x8,#0x10,#0x5
7101a60b98  mul x9,x9,x21
7101a60b9c  mov w11,#0x3e8
7101a60ba0  madd x9,x10,x11,x9
7101a60ba4  add x2,x9,x8
7101a60ba8  add x0,sp,#0x58
7101a60bac  mov w1,#0x1
7101a60bb0  bl 0x710377a310
7101a60bb4  ldp x8,x9,[x19, #0x8]
7101a60bb8  sub x9,x9,x8
7101a60bbc  asr x9,x9,#0x4
7101a60bc0  mul x9,x9,x25
7101a60bc4  cmp x9,x24
7101a60bc8  b.ls 0x7101a60c58
7101a60bcc  orr w9,wzr,#0x70
7101a60bd0  madd x8,x24,x9,x8
7101a60bd4  ldr x8,[x8, #0x10]
7101a60bd8  ubfx x9,x8,#0x15,#0x5
7101a60bdc  mul x9,x9,x21
7101a60be0  ubfx x10,x8,#0x1a,#0x6
7101a60be4  mov w11,#0x3e8
7101a60be8  madd x9,x10,x11,x9
7101a60bec  ubfx x8,x8,#0x20,#0x6
7101a60bf0  add x2,x9,x8
7101a60bf4  add x0,sp,#0x48
7101a60bf8  mov w1,#0x1
7101a60bfc  bl 0x710377a310
7101a60c00  ldr x0,[sp, #0x50]
7101a60c04  adrp x19,0x710523d000
7101a60c08  add x19,x19,#0x9a8
7101a60c0c  stp x19,xzr,[sp, #0x48]
7101a60c10  cbz x0,0x7101a60c18
7101a60c14  bl 0x710392eb40
7101a60c18  ldr x0,[sp, #0x60]
7101a60c1c  stp x19,xzr,[sp, #0x58]
7101a60c20  cbz x0,0x7101a60c28
7101a60c24  bl 0x710392eb40
7101a60c28  ldr x0,[sp, #0x70]
7101a60c2c  stp x19,xzr,[sp, #0x68]
7101a60c30  cbz x0,0x7101a60c38
7101a60c34  bl 0x710392eb40
7101a60c38  ldp x29,x30,[sp, #0x110]
7101a60c3c  ldr x28,[sp, #0xc0]
7101a60c40  ldp x20,x19,[sp, #0x100]
7101a60c44  ldp x22,x21,[sp, #0xf0]
7101a60c48  ldp x24,x23,[sp, #0xe0]
7101a60c4c  ldp x26,x25,[sp, #0xd0]
7101a60c50  add sp,sp,#0x120
7101a60c54  ret
7101a60c58  mov x0,x20
7101a60c5c  bl 0x71039c1330
