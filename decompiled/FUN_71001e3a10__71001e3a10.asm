// addr:      71001e3a10
// offset:    0x1e3a10
// name:      FUN_71001e3a10
// mangled:   
// size:      272

71001e3a10  sub sp,sp,#0xc0
71001e3a14  str x21,[sp, #0x90]
71001e3a18  stp x20,x19,[sp, #0xa0]
71001e3a1c  stp x29,x30,[sp, #0xb0]
71001e3a20  add x29,sp,#0xb0
71001e3a24  mov x0,sp
71001e3a28  mov x19,x1
71001e3a2c  bl 0x71001beb40
71001e3a30  adrp x8,0x71052a4000
71001e3a34  ldr x8,[x8, #0xda8]
71001e3a38  adrp x21,0x71052a4000
71001e3a3c  ldrb w8,[x8]
71001e3a40  ldr x21,[x21, #0xdb0]
71001e3a44  add x20,x21,#0x18
71001e3a48  cbz w8,0x71001e3a84
71001e3a4c  adrp x8,0x71052a4000
71001e3a50  ldr x8,[x8, #0xdb8]
71001e3a54  ldr x0,[x8]
71001e3a58  bl 0x7101717960
71001e3a5c  ldr w8,[x0]
71001e3a60  cbz w8,0x71001e3a84
71001e3a64  ldr x10,[x21, #0xa0]
71001e3a68  ldp x9,x10,[x10]
71001e3a6c  sub x10,x10,x9
71001e3a70  asr x10,x10,#0x3
71001e3a74  cmp x10,x8
71001e3a78  b.ls 0x71001e3b08
71001e3a7c  ldr x8,[x9, x8, LSL #0x3]
71001e3a80  add x20,x8,#0x10
71001e3a84  ldr x8,[x20]
71001e3a88  ldr x8,[x8, #0x10]
71001e3a8c  ldr x0,[x8, #0xe8]
71001e3a90  ldr x8,[x0]
71001e3a94  ldr x8,[x8, #0x78]
71001e3a98  blr x8
71001e3a9c  ldr x20,[x0, #0x18]
71001e3aa0  ldrb w8,[x19, #0x68]
71001e3aa4  cbnz w8,0x71001e3ab0
71001e3aa8  mov x0,x19
71001e3aac  bl 0x71001f2180
71001e3ab0  ldr x1,[x19, #0x8]
71001e3ab4  add x0,x20,#0x98
71001e3ab8  bl 0x710021efd0
71001e3abc  add x8,x20,#0xa0
71001e3ac0  cmp x8,x0
71001e3ac4  b.eq 0x71001e3ae4
71001e3ac8  ldr w8,[x20, #0xb0]
71001e3acc  add x1,x0,#0xb0
71001e3ad0  str w8,[x0, #0x140]
71001e3ad4  mov x0,sp
71001e3ad8  bl 0x71001bec20
71001e3adc  mov w19,#0x1
71001e3ae0  b 0x71001e3ae8
71001e3ae4  mov w19,wzr
71001e3ae8  mov x0,sp
71001e3aec  bl 0x71001bef00
71001e3af0  mov w0,w19
71001e3af4  ldp x29,x30,[sp, #0xb0]
71001e3af8  ldp x20,x19,[sp, #0xa0]
71001e3afc  ldr x21,[sp, #0x90]
71001e3b00  add sp,sp,#0xc0
71001e3b04  ret
71001e3b08  adrp x0,0x71042c4000
71001e3b0c  add x0,x0,#0x35f
71001e3b10  mov w1,#0x47
71001e3b14  orr w2,wzr,#0xe0000003
71001e3b18  mov w3,wzr
71001e3b1c  bl 0x71001b1300
