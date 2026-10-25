// addr:      71000a0af0
// offset:    0xa0af0
// name:      FUN_71000a0af0
// mangled:   
// size:      356

71000a0af0  stp x24,x23,[sp, #-0x40]!
71000a0af4  stp x22,x21,[sp, #0x10]
71000a0af8  stp x20,x19,[sp, #0x20]
71000a0afc  stp x29,x30,[sp, #0x30]
71000a0b00  add x29,sp,#0x30
71000a0b04  adrp x24,0x71052a4000
71000a0b08  ldr x24,[x24, #0xb08]
71000a0b0c  ldr x8,[x24]
71000a0b10  mov w21,w3
71000a0b14  mov w22,w2
71000a0b18  mov x23,x1
71000a0b1c  mov x20,x0
71000a0b20  cbz x8,0x71000a0b30
71000a0b24  adrp x0,0x71042b3000
71000a0b28  add x0,x0,#0x357
71000a0b2c  bl 0x7100093530
71000a0b30  ldr x8,[x20]
71000a0b34  ldr x8,[x8, #0x10]
71000a0b38  orr w1,wzr,#0x38
71000a0b3c  mov w2,#0x80
71000a0b40  mov x0,x20
71000a0b44  blr x8
71000a0b48  cbz x0,0x71000a0c34
71000a0b4c  adrp x8,0x71052a4000
71000a0b50  ldr x8,[x8, #0xb10]
71000a0b54  str x20,[x0, #0x10]
71000a0b58  stp w22,w21,[x0, #0x18]
71000a0b5c  stp xzr,xzr,[x0, #0x28]
71000a0b60  add x8,x8,#0x10
71000a0b64  stp x8,x23,[x0]
71000a0b68  mov w8,#0xa0
71000a0b6c  smull x1,w21,w8
71000a0b70  str x1,[x0, #0x20]
71000a0b74  ldr x8,[x20]
71000a0b78  ldr x8,[x8, #0x10]
71000a0b7c  mov x19,x0
71000a0b80  mov w2,#0x80
71000a0b84  mov x0,x20
71000a0b88  blr x8
71000a0b8c  ldrsw x8,[x19, #0x1c]
71000a0b90  add x8,x8,x8, LSL #0x2
71000a0b94  lsl x2,x8,#0x5
71000a0b98  mov w1,wzr
71000a0b9c  str x0,[x19, #0x30]
71000a0ba0  bl 0x71039c02a0
71000a0ba4  ldr x8,[x19, #0x8]
71000a0ba8  str xzr,[x8, #0xf68]
71000a0bac  adrp x9,0x71052a4000
71000a0bb0  ldr x9,[x9, #0xb18]
71000a0bb4  str x9,[x8, #0xf70]
71000a0bb8  adrp x9,0x71052a4000
71000a0bbc  ldr x9,[x9, #0xb20]
71000a0bc0  str x9,[x8, #0xf78]
71000a0bc4  adrp x9,0x71052a4000
71000a0bc8  ldr x9,[x9, #0xb28]
71000a0bcc  str x9,[x8, #0xf88]
71000a0bd0  adrp x9,0x71052a4000
71000a0bd4  ldr x9,[x9, #0xb30]
71000a0bd8  str x9,[x8, #0xf90]
71000a0bdc  adrp x9,0x71052a4000
71000a0be0  ldr x9,[x9, #0xb38]
71000a0be4  str x9,[x8, #0xf98]
71000a0be8  adrp x9,0x71052a4000
71000a0bec  ldr x9,[x9, #0xb40]
71000a0bf0  str x9,[x8, #0xfa0]
71000a0bf4  adrp x9,0x71052a4000
71000a0bf8  ldr x9,[x9, #0xb48]
71000a0bfc  str x9,[x8, #0xfa8]
71000a0c00  adrp x9,0x71052a4000
71000a0c04  ldr x9,[x9, #0xb50]
71000a0c08  str x9,[x8, #0xfb0]
71000a0c0c  adrp x9,0x71052a4000
71000a0c10  ldr x9,[x9, #0xb00]
71000a0c14  str xzr,[x8, #0xf80]
71000a0c18  str x9,[x8, #0xfb8]
71000a0c1c  str x19,[x24]
71000a0c20  ldp x29,x30,[sp, #0x30]
71000a0c24  ldp x20,x19,[sp, #0x20]
71000a0c28  ldp x22,x21,[sp, #0x10]
71000a0c2c  ldp x24,x23,[sp], #0x40
71000a0c30  ret
71000a0c34  ldp x29,x30,[sp, #0x30]
71000a0c38  adrp x0,0x71042c3000
71000a0c3c  add x0,x0,#0xf47
71000a0c40  ldp x20,x19,[sp, #0x20]
71000a0c44  ldp x22,x21,[sp, #0x10]
71000a0c48  orr w1,wzr,#0x38
71000a0c4c  ldp x24,x23,[sp], #0x40
71000a0c50  b 0x7100093660
