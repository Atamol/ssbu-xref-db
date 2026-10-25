// addr:      7100209c70
// offset:    0x209c70
// name:      FUN_7100209c70
// mangled:   
// size:      408

7100209c70  str x21,[sp, #-0x30]!
7100209c74  stp x20,x19,[sp, #0x10]
7100209c78  stp x29,x30,[sp, #0x20]
7100209c7c  add x29,sp,#0x20
7100209c80  adrp x8,0x71052a4000
7100209c84  ldr x8,[x8, #0xda8]
7100209c88  adrp x21,0x71052a4000
7100209c8c  ldrb w8,[x8]
7100209c90  ldr x21,[x21, #0xdb0]
7100209c94  mov x19,x0
7100209c98  add x20,x21,#0x28
7100209c9c  cbz w8,0x7100209cd8
7100209ca0  adrp x8,0x71052a4000
7100209ca4  ldr x8,[x8, #0xdb8]
7100209ca8  ldr x0,[x8]
7100209cac  bl 0x7101717960
7100209cb0  ldr w8,[x0]
7100209cb4  cbz w8,0x7100209cd8
7100209cb8  ldr x10,[x21, #0xa0]
7100209cbc  ldp x9,x10,[x10]
7100209cc0  sub x10,x10,x9
7100209cc4  asr x10,x10,#0x3
7100209cc8  cmp x10,x8
7100209ccc  b.ls 0x7100209cf0
7100209cd0  ldr x8,[x9, x8, LSL #0x3]
7100209cd4  add x20,x8,#0x20
7100209cd8  ldr x8,[x20]
7100209cdc  cbz x8,0x7100209d08
7100209ce0  ldr x8,[x8, #0x10]
7100209ce4  cbz x8,0x7100209d08
7100209ce8  ldr x20,[x8, #0x10]
7100209cec  b 0x7100209d0c
7100209cf0  adrp x0,0x71042c4000
7100209cf4  add x0,x0,#0x35f
7100209cf8  mov w1,#0x47
7100209cfc  orr w2,wzr,#0xe0000003
7100209d00  mov w3,wzr
7100209d04  bl 0x71001b1300
7100209d08  mov x20,xzr
7100209d0c  ldr x8,[x20, #0x78]!
7100209d10  ldr x8,[x8, #0x10]
7100209d14  mov x0,x20
7100209d18  blr x8
7100209d1c  add x8,sp,#0x8
7100209d20  bl 0x71001b12a0
7100209d24  ldr x8,[sp, #0x8]
7100209d28  str wzr,[x19, #0x348]
7100209d2c  strh wzr,[x19, #0x34c]
7100209d30  strb wzr,[x19, #0x34e]
7100209d34  mov x0,x20
7100209d38  str x8,[x19, #0x340]
7100209d3c  orr x8,xzr,#-0x100000000
7100209d40  str xzr,[x19, #0x350]
7100209d44  str wzr,[x19, #0x358]
7100209d48  str xzr,[x19, #0x360]
7100209d4c  str xzr,[x19, #0x368]
7100209d50  str xzr,[x19, #0x370]
7100209d54  str xzr,[x19, #0x378]
7100209d58  str xzr,[x19, #0x380]
7100209d5c  str xzr,[x19, #0x388]
7100209d60  str xzr,[x19, #0x390]
7100209d64  str xzr,[x19, #0x398]
7100209d68  str xzr,[x19, #0x3a0]
7100209d6c  str xzr,[x19, #0x3a8]
7100209d70  str xzr,[x19, #0x3b0]
7100209d74  str xzr,[x19, #0x3b8]
7100209d78  str xzr,[x19, #0x3c0]
7100209d7c  str xzr,[x19, #0x3c8]
7100209d80  str xzr,[x19, #0x3d0]
7100209d84  str xzr,[x19, #0x3d8]
7100209d88  str xzr,[x19, #0x3e0]
7100209d8c  str xzr,[x19, #0x3e8]
7100209d90  str xzr,[x19, #0x3f0]
7100209d94  str xzr,[x19, #0x3f8]
7100209d98  str xzr,[x19, #0x400]
7100209d9c  str xzr,[x19, #0x408]
7100209da0  str xzr,[x19, #0x410]
7100209da4  str xzr,[x19, #0x418]
7100209da8  str xzr,[x19, #0x420]
7100209dac  str xzr,[x19, #0x428]
7100209db0  str xzr,[x19, #0x430]
7100209db4  str xzr,[x19, #0x438]
7100209db8  str xzr,[x19, #0x440]
7100209dbc  str xzr,[x19, #0x448]
7100209dc0  str xzr,[x19, #0x450]
7100209dc4  str xzr,[x19, #0x458]
7100209dc8  str xzr,[x19, #0x460]
7100209dcc  str xzr,[x19, #0x468]
7100209dd0  str xzr,[x19, #0x470]
7100209dd4  str xzr,[x19, #0x478]
7100209dd8  str xzr,[x19, #0x480]
7100209ddc  str xzr,[x19, #0x488]
7100209de0  str xzr,[x19, #0x490]
7100209de4  str x8,[x19, #0x498]
7100209de8  str xzr,[x19, #0x4a0]
7100209dec  ldr x8,[x20]
7100209df0  ldr x8,[x8, #0x20]
7100209df4  blr x8
7100209df8  ldp x29,x30,[sp, #0x20]
7100209dfc  ldp x20,x19,[sp, #0x10]
7100209e00  ldr x21,[sp], #0x30
7100209e04  ret
