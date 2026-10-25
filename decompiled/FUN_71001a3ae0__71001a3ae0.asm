// addr:      71001a3ae0
// offset:    0x1a3ae0
// name:      FUN_71001a3ae0
// mangled:   
// size:      156

71001a3ae0  str x21,[sp, #-0x30]!
71001a3ae4  stp x20,x19,[sp, #0x10]
71001a3ae8  stp x29,x30,[sp, #0x20]
71001a3aec  add x29,sp,#0x20
71001a3af0  adrp x21,0x71052a4000
71001a3af4  ldr x21,[x21, #0xdc8]
71001a3af8  mov x19,x0
71001a3afc  ldr x0,[x21]
71001a3b00  bl 0x7100161fa0
71001a3b04  ldr x8,[x0, #0x98]
71001a3b08  cbz x8,0x71001a3b50
71001a3b0c  adrp x8,0x71052a4000
71001a3b10  ldr x8,[x8, #0xdf0]
71001a3b14  ldr x0,[x8]
71001a3b18  bl 0x7100193580
71001a3b1c  ldrb w2,[x19, #0xba]
71001a3b20  add x20,x19,#0x90
71001a3b24  mov x1,x20
71001a3b28  bl 0x7100199c80
71001a3b2c  ldr x0,[x21]
71001a3b30  bl 0x7100161fa0
71001a3b34  ldr x8,[x0]
71001a3b38  ldr x8,[x8, #0x58]
71001a3b3c  mov x1,x20
71001a3b40  blr x8
71001a3b44  cbz x0,0x71001a3b50
71001a3b48  orr w8,wzr,#0x6
71001a3b4c  str w8,[x0, #0x48]
71001a3b50  adrp x8,0x71052a6000
71001a3b54  ldr x8,[x8, #0x768]
71001a3b58  adrp x9,0x7104318000
71001a3b5c  add x9,x9,#0x425
71001a3b60  str x9,[x19, #0x40]
71001a3b64  mov x0,xzr
71001a3b68  stp x8,xzr,[x19, #0x30]
71001a3b6c  ldp x29,x30,[sp, #0x20]
71001a3b70  ldp x20,x19,[sp, #0x10]
71001a3b74  ldr x21,[sp], #0x30
71001a3b78  ret
