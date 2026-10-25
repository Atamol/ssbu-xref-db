// addr:      7101a46aa0
// offset:    0x1a46aa0
// name:      FUN_7101a46aa0
// mangled:   
// size:      952

7101a46aa0  sub sp,sp,#0x80
7101a46aa4  str d8,[sp, #0x10]
7101a46aa8  stp x28,x27,[sp, #0x20]
7101a46aac  stp x26,x25,[sp, #0x30]
7101a46ab0  stp x24,x23,[sp, #0x40]
7101a46ab4  stp x22,x21,[sp, #0x50]
7101a46ab8  stp x20,x19,[sp, #0x60]
7101a46abc  stp x29,x30,[sp, #0x70]
7101a46ac0  add x29,sp,#0x70
7101a46ac4  ldr w8,[x0, #0x13c]
7101a46ac8  mov x19,x0
7101a46acc  cbz w8,0x7101a46c58
7101a46ad0  ldr x20,[x19, #0x358]
7101a46ad4  ldrb w8,[x20, #0x50]
7101a46ad8  cbz w8,0x7101a46e10
7101a46adc  ldr x0,[x20, #0x10]
7101a46ae0  fmov s0,0x3f800000
7101a46ae4  adrp x1,0x7104421000
7101a46ae8  add x1,x1,#0xcea
7101a46aec  bl 0x7103778300
7101a46af0  ldr x0,[x20, #0x40]
7101a46af4  ldr x8,[x0]
7101a46af8  ldr x8,[x8, #0x60]
7101a46afc  mov w1,wzr
7101a46b00  blr x8
7101a46b04  mov w8,#0x1
7101a46b08  strb w8,[x20, #0x50]
7101a46b0c  ldr x9,[x19, #0x258]
7101a46b10  ldr x25,[x19, #0x250]
7101a46b14  sub x8,x9,x25
7101a46b18  mov x24,#0xbf7f
7101a46b1c  movk x24,#0xefdf, LSL #16
7101a46b20  movk x24,#0xfbf7, LSL #32
7101a46b24  movk x24,#0x7efd, LSL #48
7101a46b28  ldrsw x21,[x19, #0x3d8]
7101a46b2c  add x0,x19,#0x250
7101a46b30  asr x8,x8,#0x3
7101a46b34  mul x8,x8,x24
7101a46b38  cmp x8,x21
7101a46b3c  b.ls 0x7101a46e54
7101a46b40  ldr x8,[x19, #0x358]
7101a46b44  ldr w10,[x8, #0x4c]
7101a46b48  cmp w10,#0x3
7101a46b4c  b.ne 0x7101a46d64
7101a46b50  ldr w8,[x19, #0x3c8]
7101a46b54  cmp w8,#0x1
7101a46b58  str x0,[sp, #0x18]
7101a46b5c  b.lt 0x7101a46df0
7101a46b60  add x10,x19,#0x3b0
7101a46b64  mov w26,#0x8
7101a46b68  mov w27,#0x1
7101a46b6c  mov w28,#0x3f4
7101a46b70  adrp x22,0x71042b3000
7101a46b74  add x22,x22,#0xd87
7101a46b78  mov w21,#0x1
7101a46b7c  str x10,[sp, #0x8]
7101a46b80  adrp x23,0x710439d000
7101a46b84  add x23,x23,#0xc8e
7101a46b88  b 0x7101a46ba0
7101a46b8c  ldr x9,[x19, #0x258]
7101a46b90  ldr x25,[x19, #0x250]
7101a46b94  add x26,x26,#0x10
7101a46b98  add x21,x21,#0x1
7101a46b9c  add x28,x28,#0x3f8
7101a46ba0  sub x9,x9,x25
7101a46ba4  asr x9,x9,#0x3
7101a46ba8  mul x9,x9,x24
7101a46bac  sub x20,x21,#0x1
7101a46bb0  cmp x9,x20
7101a46bb4  b.ls 0x7101a46e34
7101a46bb8  add x9,x25,x28
7101a46bbc  sub x10,x9,#0x3e4
7101a46bc0  ldr w10,[x10]
7101a46bc4  cmp w10,#0x1
7101a46bc8  b.ne 0x7101a46c4c
7101a46bcc  ldr x8,[x19, #0x358]
7101a46bd0  ldr w3,[x8, #0x48]
7101a46bd4  sub x8,x9,#0x3cb
7101a46bd8  strb w3,[x8]
7101a46bdc  ldr x9,[x19, #0x3b8]
7101a46be0  ldr x8,[x19, #0x3b0]
7101a46be4  sub x9,x9,x8
7101a46be8  asr x9,x9,#0x4
7101a46bec  cmp x9,x20
7101a46bf0  b.ls 0x7101a46e3c
7101a46bf4  ldr x25,[x8, x26, LSL #0x0]
7101a46bf8  ldr w8,[x25, #0xd8]
7101a46bfc  cmp w8,#0x1
7101a46c00  str w3,[x25, #0xfc]
7101a46c04  b.ne 0x7101a46c28
7101a46c08  add x0,x25,#0x78
7101a46c0c  mov w2,#0x1
7101a46c10  mov x1,x22
7101a46c14  bl 0x710377a280
7101a46c18  ldr w2,[x25, #0xfc]
7101a46c1c  add x0,x25,#0x58
7101a46c20  mov x1,x23
7101a46c24  bl 0x7103778430
7101a46c28  ldr x9,[x19, #0x258]
7101a46c2c  ldr x8,[x19, #0x250]
7101a46c30  sub x9,x9,x8
7101a46c34  asr x9,x9,#0x3
7101a46c38  mul x9,x9,x24
7101a46c3c  cmp x9,x20
7101a46c40  b.ls 0x7101a46e34
7101a46c44  strb w27,[x8, x28, LSL ]
7101a46c48  ldr w8,[x19, #0x3c8]
7101a46c4c  cmp x21,w8, SXTW 
7101a46c50  b.lt 0x7101a46b8c
7101a46c54  b 0x7101a46df0
7101a46c58  ldr x10,[x19, #0x258]
7101a46c5c  ldr x9,[x19, #0x250]
7101a46c60  sub x10,x10,x9
7101a46c64  mov x11,#0xbf7f
7101a46c68  movk x11,#0xefdf, LSL #16
7101a46c6c  movk x11,#0xfbf7, LSL #32
7101a46c70  movk x11,#0x7efd, LSL #48
7101a46c74  asr x10,x10,#0x3
7101a46c78  mul x10,x10,x11
7101a46c7c  ldrsw x8,[x19, #0x3d8]
7101a46c80  cmp x10,x8
7101a46c84  b.ls 0x7101a46e44
7101a46c88  orr w10,wzr,#0x3f8
7101a46c8c  madd x8,x8,x10,x9
7101a46c90  ldr x9,[x19, #0x358]
7101a46c94  ldrb w8,[x8, #0x29]
7101a46c98  str w8,[x9, #0x48]
7101a46c9c  ldr w8,[x19, #0x150]
7101a46ca0  add x0,x19,#0x278
7101a46ca4  add w2,w8,#0x1
7101a46ca8  adrp x1,0x710424e000
7101a46cac  add x1,x1,#0xefc
7101a46cb0  bl 0x7103778430
7101a46cb4  mov w8,#0x1
7101a46cb8  strb w8,[x19, #0x41d]
7101a46cbc  ldrsw x8,[x19, #0x3cc]
7101a46cc0  cmn w8,#0x1
7101a46cc4  b.eq 0x7101a46d00
7101a46cc8  ldr x10,[x19, #0x3b8]
7101a46ccc  ldr x9,[x19, #0x3b0]
7101a46cd0  sub x10,x10,x9
7101a46cd4  asr x10,x10,#0x4
7101a46cd8  cmp x10,x8
7101a46cdc  b.ls 0x7101a46e50
7101a46ce0  add x8,x9,x8, LSL #0x4
7101a46ce4  ldr x20,[x8, #0x8]
7101a46ce8  ldr x0,[x20, #0x20]
7101a46cec  fmov s0,0x3f800000
7101a46cf0  adrp x1,0x710435b000
7101a46cf4  add x1,x1,#0xe3c
7101a46cf8  bl 0x7103778300
7101a46cfc  strb wzr,[x20, #0x10a]
7101a46d00  ldr x21,[x19, #0x3b0]
7101a46d04  ldr x22,[x19, #0x3b8]
7101a46d08  cmp x21,x22
7101a46d0c  b.eq 0x7101a46d3c
7101a46d10  fmov s8,0x3f800000
7101a46d14  adrp x20,0x710426f000
7101a46d18  add x20,x20,#0xa7c
7101a46d1c  ldr x8,[x21, #0x8]
7101a46d20  ldr x0,[x8, #0x20]
7101a46d24  mov v0.16B,v8.16B
7101a46d28  mov x1,x20
7101a46d2c  bl 0x7103778300
7101a46d30  add x21,x21,#0x10
7101a46d34  cmp x22,x21
7101a46d38  b.ne 0x7101a46d1c
7101a46d3c  ldr d8,[sp, #0x10]
7101a46d40  ldr x0,[x19, #0x358]
7101a46d44  ldp x29,x30,[sp, #0x70]
7101a46d48  ldp x20,x19,[sp, #0x60]
7101a46d4c  ldp x22,x21,[sp, #0x50]
7101a46d50  ldp x24,x23,[sp, #0x40]
7101a46d54  ldp x26,x25,[sp, #0x30]
7101a46d58  ldp x28,x27,[sp, #0x20]
7101a46d5c  add sp,sp,#0x80
7101a46d60  b 0x71019e9460
7101a46d64  orr w9,wzr,#0x3f8
7101a46d68  madd x9,x21,x9,x25
7101a46d6c  ldrb w10,[x9, #0x29]!
7101a46d70  ldr w3,[x8, #0x48]
7101a46d74  cmp w3,w10
7101a46d78  b.eq 0x7101a46df0
7101a46d7c  strb w3,[x9]
7101a46d80  ldr x9,[x19, #0x3b8]
7101a46d84  ldr x8,[x19, #0x3b0]
7101a46d88  sub x9,x9,x8
7101a46d8c  asr x9,x9,#0x4
7101a46d90  cmp x9,x21
7101a46d94  b.ls 0x7101a46e50
7101a46d98  add x8,x8,x21, LSL #0x4
7101a46d9c  ldr x20,[x8, #0x8]
7101a46da0  ldr w8,[x20, #0xd8]
7101a46da4  cmp w8,#0x1
7101a46da8  str w3,[x20, #0xfc]
7101a46dac  b.ne 0x7101a46dd8
7101a46db0  add x0,x20,#0x78
7101a46db4  adrp x1,0x71042b3000
7101a46db8  add x1,x1,#0xd87
7101a46dbc  mov w2,#0x1
7101a46dc0  bl 0x710377a280
7101a46dc4  ldr w2,[x20, #0xfc]
7101a46dc8  add x0,x20,#0x58
7101a46dcc  adrp x1,0x710439d000
7101a46dd0  add x1,x1,#0xc8e
7101a46dd4  bl 0x7103778430
7101a46dd8  orr w8,wzr,#0x3f8
7101a46ddc  madd x8,x21,x8,x25
7101a46de0  mov w9,#0x1
7101a46de4  strb w9,[x8, #0x3f4]
7101a46de8  orr w8,wzr,#0xc
7101a46dec  str w8,[x19, #0x268]
7101a46df0  mov x0,x19
7101a46df4  bl 0x7101a48570
7101a46df8  ldrsw x8,[x19, #0x134]
7101a46dfc  cmp w8,#0x13
7101a46e00  b.cs 0x7101a46e4c
7101a46e04  add x8,x19,x8, LSL #0x2
7101a46e08  orr w9,wzr,#0x3
7101a46e0c  str w9,[x8, #0xe8]
7101a46e10  ldr d8,[sp, #0x10]
7101a46e14  ldp x29,x30,[sp, #0x70]
7101a46e18  ldp x20,x19,[sp, #0x60]
7101a46e1c  ldp x22,x21,[sp, #0x50]
7101a46e20  ldp x24,x23,[sp, #0x40]
7101a46e24  ldp x26,x25,[sp, #0x30]
7101a46e28  ldp x28,x27,[sp, #0x20]
7101a46e2c  add sp,sp,#0x80
7101a46e30  ret
7101a46e34  ldr x0,[sp, #0x18]
7101a46e38  bl 0x71039c1330
7101a46e3c  ldr x0,[sp, #0x8]
7101a46e40  bl 0x71039c1330
7101a46e44  add x0,x19,#0x250
7101a46e48  bl 0x71039c1330
7101a46e4c  bl 0x71039c2650
7101a46e50  add x0,x19,#0x3b0
7101a46e54  bl 0x71039c1330
