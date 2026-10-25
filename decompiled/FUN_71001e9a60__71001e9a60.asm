// addr:      71001e9a60
// offset:    0x1e9a60
// name:      FUN_71001e9a60
// mangled:   
// size:      284

71001e9a60  str x23,[sp, #-0x40]!
71001e9a64  stp x22,x21,[sp, #0x10]
71001e9a68  stp x20,x19,[sp, #0x20]
71001e9a6c  stp x29,x30,[sp, #0x30]
71001e9a70  add x29,sp,#0x30
71001e9a74  adrp x8,0x71052a4000
71001e9a78  ldr x8,[x8, #0xda8]
71001e9a7c  adrp x23,0x71052a4000
71001e9a80  ldrb w8,[x8]
71001e9a84  ldr x23,[x23, #0xdb0]
71001e9a88  mov w20,w2
71001e9a8c  mov x19,x1
71001e9a90  mov x21,x0
71001e9a94  add x22,x23,#0x18
71001e9a98  cbz w8,0x71001e9ad4
71001e9a9c  adrp x8,0x71052a4000
71001e9aa0  ldr x8,[x8, #0xdb8]
71001e9aa4  ldr x0,[x8]
71001e9aa8  bl 0x7101717960
71001e9aac  ldr w8,[x0]
71001e9ab0  cbz w8,0x71001e9ad4
71001e9ab4  ldr x10,[x23, #0xa0]
71001e9ab8  ldp x9,x10,[x10]
71001e9abc  sub x10,x10,x9
71001e9ac0  asr x10,x10,#0x3
71001e9ac4  cmp x10,x8
71001e9ac8  b.ls 0x71001e9b64
71001e9acc  ldr x8,[x9, x8, LSL #0x3]
71001e9ad0  add x22,x8,#0x10
71001e9ad4  ldr x8,[x22]
71001e9ad8  ldr x8,[x8, #0x10]
71001e9adc  ldr x0,[x8, #0xe8]
71001e9ae0  ldr x8,[x0]
71001e9ae4  ldr x8,[x8, #0x80]
71001e9ae8  blr x8
71001e9aec  ldrb w8,[x0, #0x10]
71001e9af0  cbz w8,0x71001e9b44
71001e9af4  ldr x0,[x21, #0x180]
71001e9af8  adrp x1,0x7104411000
71001e9afc  add x1,x1,#0x4cc
71001e9b00  bl 0x71001b4e00
71001e9b04  tbnz w0,#0x0,0x71001e9b44
71001e9b08  ldrh w8,[x21, #0x190]
71001e9b0c  cbz w8,0x71001e9b44
71001e9b10  tbz w20,#0x0,0x71001e9b5c
71001e9b14  adrp x1,0x710449c000
71001e9b18  add x1,x1,#0xe79
71001e9b1c  mov x0,x19
71001e9b20  mov x2,xzr
71001e9b24  bl 0x71001f2ba0
71001e9b28  cbnz x0,0x71001e9b44
71001e9b2c  adrp x1,0x710449c000
71001e9b30  add x1,x1,#0xe5b
71001e9b34  mov x0,x19
71001e9b38  mov x2,xzr
71001e9b3c  bl 0x71001f2ba0
71001e9b40  tbnz w0,#0x1,0x71001e9b5c
71001e9b44  mov w0,wzr
71001e9b48  ldp x29,x30,[sp, #0x30]
71001e9b4c  ldp x20,x19,[sp, #0x20]
71001e9b50  ldp x22,x21,[sp, #0x10]
71001e9b54  ldr x23,[sp], #0x40
71001e9b58  ret
71001e9b5c  mov w0,#0x1
71001e9b60  b 0x71001e9b48
71001e9b64  adrp x0,0x71042c4000
71001e9b68  add x0,x0,#0x35f
71001e9b6c  mov w1,#0x47
71001e9b70  orr w2,wzr,#0xe0000003
71001e9b74  mov w3,wzr
71001e9b78  bl 0x71001b1300
