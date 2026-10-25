// addr:      7102cd6aa0
// offset:    0x2cd6aa0
// name:      FUN_7102cd6aa0
// mangled:   
// size:      444

7102cd6aa0  sub sp,sp,#0xa0
7102cd6aa4  str x23,[sp, #0x60]
7102cd6aa8  stp x22,x21,[sp, #0x70]
7102cd6aac  stp x20,x19,[sp, #0x80]
7102cd6ab0  stp x29,x30,[sp, #0x90]
7102cd6ab4  add x29,sp,#0x90
7102cd6ab8  ldr x9,[x0]
7102cd6abc  ldr x9,[x9, #0x340]
7102cd6ac0  mov x19,x0
7102cd6ac4  ldp w10,w11,[x9]
7102cd6ac8  str w11,[x9]
7102cd6acc  ldp w11,w12,[x9, #0x8]
7102cd6ad0  eor w10,w10,w10, LSL #0xb
7102cd6ad4  eor w10,w10,w10, LSR #0x8
7102cd6ad8  eor w10,w10,w12
7102cd6adc  eor w10,w10,w12, LSR #0x13
7102cd6ae0  mov w8,wzr
7102cd6ae4  and w22,w10,#0x3
7102cd6ae8  mov w21,#0x1
7102cd6aec  adrp x20,0x710427e000
7102cd6af0  add x20,x20,#0xd3e
7102cd6af4  stp w11,w12,[x9, #0x4]
7102cd6af8  str w10,[x9, #0xc]
7102cd6afc  b 0x7102cd6b04
7102cd6b00  mov w8,w23
7102cd6b04  ldr x9,[x19, #0x8]
7102cd6b08  add w10,w22,#0x1
7102cd6b0c  cmp w10,#0x0
7102cd6b10  str w22,[x9, #0xc]
7102cd6b14  add w9,w22,#0x4
7102cd6b18  csinc w11,w9,w22,lt
7102cd6b1c  ldr x9,[x19, #0x8]
7102cd6b20  ldp w12,w13,[x9, #0x8]
7102cd6b24  add w12,w13,w12, LSL #0x2
7102cd6b28  str w12,[x9, #0x14]
7102cd6b2c  ldr x9,[x19, #0x8]
7102cd6b30  ldr w1,[x9, #0x14]
7102cd6b34  ldr w13,[x9, #0x4]
7102cd6b38  lsl w12,w21,w1
7102cd6b3c  tst w13,w12
7102cd6b40  b.ne 0x7102cd6bb0
7102cd6b44  and w11,w11,#0xfffffffc
7102cd6b48  add w23,w8,#0x1
7102cd6b4c  sub w22,w10,w11
7102cd6b50  cmp w8,#0x63
7102cd6b54  mov w8,w23
7102cd6b58  b.cc 0x7102cd6b04
7102cd6b5c  stp xzr,xzr,[sp, #0x50]
7102cd6b60  add x0,sp,#0x8
7102cd6b64  stp xzr,xzr,[sp, #0x40]
7102cd6b68  mov w1,#0x40
7102cd6b6c  mov x2,x20
7102cd6b70  str xzr,[sp, #0x8]
7102cd6b74  stp xzr,xzr,[sp, #0x30]
7102cd6b78  stp xzr,xzr,[sp, #0x20]
7102cd6b7c  stp xzr,xzr,[sp, #0x10]
7102cd6b80  ldr w5,[x9, #0x8]
7102cd6b84  ldp w3,w4,[x9]
7102cd6b88  bl 0x71039c04d0
7102cd6b8c  add x0,sp,#0x48
7102cd6b90  add x1,sp,#0x8
7102cd6b94  bl 0x71039c2720
7102cd6b98  ldrb w8,[sp, #0x48]
7102cd6b9c  tbz w8,#0x0,0x7102cd6b00
7102cd6ba0  ldr x0,[sp, #0x58]
7102cd6ba4  cbz x0,0x7102cd6b00
7102cd6ba8  bl 0x710392eb40
7102cd6bac  b 0x7102cd6b00
7102cd6bb0  add x0,x19,#0x18
7102cd6bb4  bl 0x7102cd7870
7102cd6bb8  ldr x8,[x19, #0x58]
7102cd6bbc  cbz x8,0x7102cd6c44
7102cd6bc0  ldr x1,[x0]
7102cd6bc4  add x0,x8,#0x60
7102cd6bc8  bl 0x71025eaba0
7102cd6bcc  ldr x8,[x19, #0x58]
7102cd6bd0  cbz x8,0x7102cd6c44
7102cd6bd4  ldr x19,[x8, #0xd8]
7102cd6bd8  ldr x8,[x19]
7102cd6bdc  ldr x8,[x8, #0x10]
7102cd6be0  mov x0,x19
7102cd6be4  blr x8
7102cd6be8  ldr x8,[x19, #0x8]
7102cd6bec  ldrb w9,[x8, #0xa8]
7102cd6bf0  cbz w9,0x7102cd6c40
7102cd6bf4  ldr x0,[x8, #0x48]
7102cd6bf8  ldr x8,[x0]
7102cd6bfc  ldr x8,[x8, #0x10]
7102cd6c00  mov w1,wzr
7102cd6c04  blr x8
7102cd6c08  ldr x8,[x19, #0x8]
7102cd6c0c  ldrb w9,[x8, #0xa8]
7102cd6c10  cbz w9,0x7102cd6c40
7102cd6c14  ldr x20,[x8, #0x48]
7102cd6c18  ldr x8,[x20]
7102cd6c1c  ldr x8,[x8, #0x10]
7102cd6c20  mov w1,#0x1
7102cd6c24  mov x0,x20
7102cd6c28  blr x8
7102cd6c2c  ldr x8,[x20]
7102cd6c30  ldr x8,[x8, #0x10]
7102cd6c34  mov w1,#0x2
7102cd6c38  mov x0,x20
7102cd6c3c  blr x8
7102cd6c40  strb wzr,[x19, #0x20]
7102cd6c44  ldp x29,x30,[sp, #0x90]
7102cd6c48  ldr x23,[sp, #0x60]
7102cd6c4c  ldp x20,x19,[sp, #0x80]
7102cd6c50  ldp x22,x21,[sp, #0x70]
7102cd6c54  add sp,sp,#0xa0
7102cd6c58  ret
