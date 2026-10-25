// addr:      7101e629c0
// offset:    0x1e629c0
// name:      FUN_7101e629c0
// mangled:   
// size:      488

7101e629c0  str x21,[sp, #-0x30]!
7101e629c4  stp x20,x19,[sp, #0x10]
7101e629c8  stp x29,x30,[sp, #0x20]
7101e629cc  add x29,sp,#0x20
7101e629d0  ldr x21,[x0, #0x80]
7101e629d4  add x19,x21,#0x1c8
7101e629d8  mov x0,x19
7101e629dc  bl 0x7101e9bb40
7101e629e0  ldr x8,[x21, #0x210]
7101e629e4  ldr x8,[x8, #0x40]
7101e629e8  cbz x8,0x7101e62a08
7101e629ec  ldr x8,[x8, #0x8]
7101e629f0  ldr x0,[x8, #0x8]
7101e629f4  cbz x0,0x7101e62a08
7101e629f8  ldr x8,[x0]
7101e629fc  ldr x8,[x8, #0x138]
7101e62a00  blr x8
7101e62a04  tbz w0,#0x0,0x7101e62a3c
7101e62a08  ldrb w8,[x21, #0x219]
7101e62a0c  cbz w8,0x7101e62a2c
7101e62a10  ldr x8,[x21, #0x210]
7101e62a14  ldr x0,[x8, #0x8]
7101e62a18  fmov s0,0x3f800000
7101e62a1c  adrp x1,0x71042f8000
7101e62a20  add x1,x1,#0xa23
7101e62a24  bl 0x7103778300
7101e62a28  strb wzr,[x21, #0x219]
7101e62a2c  ldr w8,[x21, #0x21c]
7101e62a30  cbz w8,0x7101e62a3c
7101e62a34  sub w8,w8,#0x1
7101e62a38  str w8,[x21, #0x21c]
7101e62a3c  ldr x8,[x21, #0x288]
7101e62a40  cbz x8,0x7101e62ab8
7101e62a44  ldr x8,[x21, #0x280]
7101e62a48  ldrb w20,[x8, #0x10]
7101e62a4c  add x2,x21,#0x250
7101e62a50  mov x0,x19
7101e62a54  mov w1,w20
7101e62a58  bl 0x7101e95cc0
7101e62a5c  tbz w0,#0x0,0x7101e62ab8
7101e62a60  and x8,x20,#0xff
7101e62a64  cmp w8,#0x3
7101e62a68  b.hi 0x7101e62a90
7101e62a6c  ldr x9,[x19]
7101e62a70  add x8,x9,x8, LSL #0x3
7101e62a74  ldr x8,[x8, #0x48]
7101e62a78  cbz x8,0x7101e62a90
7101e62a7c  ldr x0,[x8, #0x8]
7101e62a80  fmov s0,0x3f800000
7101e62a84  adrp x1,0x7104455000
7101e62a88  add x1,x1,#0x1e3
7101e62a8c  bl 0x7103778300
7101e62a90  ldr x0,[x21, #0x280]
7101e62a94  ldp x8,x9,[x0]
7101e62a98  str x9,[x8, #0x8]
7101e62a9c  ldp x8,x9,[x0]
7101e62aa0  str x8,[x9]
7101e62aa4  ldr x8,[x21, #0x288]
7101e62aa8  sub x8,x8,#0x1
7101e62aac  str x8,[x21, #0x288]
7101e62ab0  cbz x0,0x7101e62ab8
7101e62ab4  bl 0x710392eb40
7101e62ab8  ldrsw x8,[x21, #0x19c]
7101e62abc  cmp w8,#0x13
7101e62ac0  b.cs 0x7101e62ba4
7101e62ac4  add x8,x21,x8, LSL #0x2
7101e62ac8  ldr w8,[x8, #0x150]
7101e62acc  ldr w9,[x21, #0x1a0]
7101e62ad0  cmp w9,w8
7101e62ad4  b.eq 0x7101e62b24
7101e62ad8  cmp w8,#0x12
7101e62adc  str w9,[x21, #0x1a8]
7101e62ae0  str w8,[x21, #0x1a0]
7101e62ae4  b.cs 0x7101e62ba4
7101e62ae8  sxtw x8,w8
7101e62aec  add x8,x21,x8, LSL #0x4
7101e62af0  ldp x9,x8,[x8, #0x30]
7101e62af4  stp x9,x8,[x21, #0x10]
7101e62af8  ldp x8,x10,[x21, #0x20]
7101e62afc  and x9,x10,#0x1
7101e62b00  orr x11,x9,x8
7101e62b04  cbz x11,0x7101e62b20
7101e62b08  ldr x11,[x21, #0x8]
7101e62b0c  add x0,x11,x10, ASR #0x1
7101e62b10  cbz x9,0x7101e62b1c
7101e62b14  ldr x9,[x0]
7101e62b18  ldr x8,[x9, x8, LSL #0x0]
7101e62b1c  blr x8
7101e62b20  str wzr,[x21, #0x1a4]
7101e62b24  ldrb w8,[x21, #0x1ac]
7101e62b28  cbz w8,0x7101e62b5c
7101e62b2c  ldp x8,x10,[x21, #0x20]
7101e62b30  and x9,x10,#0x1
7101e62b34  orr x11,x9,x8
7101e62b38  cbz x11,0x7101e62b54
7101e62b3c  ldr x11,[x21, #0x8]
7101e62b40  add x0,x11,x10, ASR #0x1
7101e62b44  cbz x9,0x7101e62b50
7101e62b48  ldr x9,[x0]
7101e62b4c  ldr x8,[x9, x8, LSL #0x0]
7101e62b50  blr x8
7101e62b54  str wzr,[x21, #0x1a4]
7101e62b58  strb wzr,[x21, #0x1ac]
7101e62b5c  ldr x9,[x21, #0x8]
7101e62b60  cbz x9,0x7101e62b88
7101e62b64  ldp x8,x11,[x21, #0x10]
7101e62b68  and x10,x11,#0x1
7101e62b6c  orr x12,x10,x8
7101e62b70  cbz x12,0x7101e62b88
7101e62b74  add x0,x9,x11, ASR #0x1
7101e62b78  cbz x10,0x7101e62b84
7101e62b7c  ldr x9,[x0]
7101e62b80  ldr x8,[x9, x8, LSL #0x0]
7101e62b84  blr x8
7101e62b88  ldr w8,[x21, #0x1a4]
7101e62b8c  add w8,w8,#0x1
7101e62b90  str w8,[x21, #0x1a4]
7101e62b94  ldp x29,x30,[sp, #0x20]
7101e62b98  ldp x20,x19,[sp, #0x10]
7101e62b9c  ldr x21,[sp], #0x30
7101e62ba0  ret
7101e62ba4  bl 0x71039c2650
