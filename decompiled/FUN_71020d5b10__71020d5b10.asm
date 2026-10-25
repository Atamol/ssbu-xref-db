// addr:      71020d5b10
// offset:    0x20d5b10
// name:      FUN_71020d5b10
// mangled:   
// size:      416

71020d5b10  stp x22,x21,[sp, #-0x30]!
71020d5b14  stp x20,x19,[sp, #0x10]
71020d5b18  stp x29,x30,[sp, #0x20]
71020d5b1c  add x29,sp,#0x20
71020d5b20  mov w20,w2
71020d5b24  and w2,w2,#0x1
71020d5b28  mov x19,x1
71020d5b2c  mov x21,x0
71020d5b30  bl 0x71020d4810
71020d5b34  ldr x8,[x19, #0x10]
71020d5b38  adrp x9,0x71020d5000
71020d5b3c  add x9,x9,#0xa70
71020d5b40  str x9,[x8]
71020d5b44  mov w9,#0x2
71020d5b48  str w9,[x8, #0x8]
71020d5b4c  ldr x8,[x19, #0x10]
71020d5b50  add x9,x8,#0x10
71020d5b54  sub x1,x8,#0x10
71020d5b58  adrp x2,0x710430c000
71020d5b5c  add x2,x2,#0x66a
71020d5b60  mov x0,x19
71020d5b64  str x9,[x19, #0x10]
71020d5b68  bl 0x71038f5390
71020d5b6c  tbz w20,#0x0,0x71020d5bc4
71020d5b70  ldr x8,[x19, #0x18]
71020d5b74  ldr x8,[x8, #0x18]
71020d5b78  cmp x8,#0x1
71020d5b7c  b.lt 0x71020d5b88
71020d5b80  mov x0,x19
71020d5b84  bl 0x71038fec40
71020d5b88  mov x0,x19
71020d5b8c  bl 0x710391e050
71020d5b90  ldr x8,[x19, #0x10]
71020d5b94  mov w9,#0x45
71020d5b98  str w9,[x8, #0x8]
71020d5b9c  str x0,[x8]
71020d5ba0  ldr x8,[x19, #0x10]
71020d5ba4  mov x1,x0
71020d5ba8  mov w3,#0x4
71020d5bac  mov x0,x19
71020d5bb0  mov w2,wzr
71020d5bb4  add x8,x8,#0x10
71020d5bb8  str x8,[x19, #0x10]
71020d5bbc  bl 0x710391d4c0
71020d5bc0  b 0x71020d5bdc
71020d5bc4  ldr x8,[x19, #0x10]
71020d5bc8  sub x1,x8,#0x10
71020d5bcc  adrp x2,0x710444c000
71020d5bd0  add x2,x2,#0x45b
71020d5bd4  mov x0,x19
71020d5bd8  bl 0x71038f4d40
71020d5bdc  ldr s0,[x21, #0x20]
71020d5be0  ldr x8,[x19, #0x10]
71020d5be4  orr w22,wzr,#0x3
71020d5be8  str w22,[x8, #0x8]
71020d5bec  str s0,[x8]
71020d5bf0  ldr x8,[x19, #0x10]
71020d5bf4  add x9,x8,#0x10
71020d5bf8  sub x1,x8,#0x10
71020d5bfc  adrp x2,0x71043d7000
71020d5c00  add x2,x2,#0xeae
71020d5c04  mov x0,x19
71020d5c08  str x9,[x19, #0x10]
71020d5c0c  bl 0x71038f5390
71020d5c10  ldr s0,[x21, #0x24]
71020d5c14  ldr x8,[x19, #0x10]
71020d5c18  str w22,[x8, #0x8]
71020d5c1c  str s0,[x8]
71020d5c20  ldr x8,[x19, #0x10]
71020d5c24  add x9,x8,#0x10
71020d5c28  sub x1,x8,#0x10
71020d5c2c  adrp x2,0x71042ab000
71020d5c30  add x2,x2,#0xc20
71020d5c34  mov x0,x19
71020d5c38  str x9,[x19, #0x10]
71020d5c3c  bl 0x71038f5390
71020d5c40  ldr s0,[x21, #0x28]
71020d5c44  ldr x8,[x19, #0x10]
71020d5c48  str w22,[x8, #0x8]
71020d5c4c  str s0,[x8]
71020d5c50  ldr x8,[x19, #0x10]
71020d5c54  add x9,x8,#0x10
71020d5c58  sub x1,x8,#0x10
71020d5c5c  adrp x2,0x710443b000
71020d5c60  add x2,x2,#0x9a0
71020d5c64  mov x0,x19
71020d5c68  str x9,[x19, #0x10]
71020d5c6c  bl 0x71038f5390
71020d5c70  ldr x8,[x19, #0x10]
71020d5c74  tbz w20,#0x0,0x71020d5c98
71020d5c78  mov x0,x19
71020d5c7c  ldp x29,x30,[sp, #0x20]
71020d5c80  ldp x20,x19,[sp, #0x10]
71020d5c84  sub x1,x8,#0x20
71020d5c88  adrp x2,0x710444c000
71020d5c8c  add x2,x2,#0x45b
71020d5c90  ldp x22,x21,[sp], #0x30
71020d5c94  b 0x71038f5390
71020d5c98  sub x8,x8,#0x10
71020d5c9c  str x8,[x19, #0x10]
71020d5ca0  ldp x29,x30,[sp, #0x20]
71020d5ca4  ldp x20,x19,[sp, #0x10]
71020d5ca8  ldp x22,x21,[sp], #0x30
71020d5cac  ret
