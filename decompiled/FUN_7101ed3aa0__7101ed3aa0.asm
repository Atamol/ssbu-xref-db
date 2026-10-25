// addr:      7101ed3aa0
// offset:    0x1ed3aa0
// name:      FUN_7101ed3aa0
// mangled:   
// size:      220

7101ed3aa0  stp x20,x19,[sp, #-0x20]!
7101ed3aa4  stp x29,x30,[sp, #0x10]
7101ed3aa8  add x29,sp,#0x10
7101ed3aac  adrp x8,0x71050b2000
7101ed3ab0  add x8,x8,#0xa68
7101ed3ab4  mov x19,x0
7101ed3ab8  ldr x0,[x0, #0x38]
7101ed3abc  ldr x1,[x8, w1, SXTW #0x3]
7101ed3ac0  mov x20,x2
7101ed3ac4  mov w2,#0x2d
7101ed3ac8  bl 0x71032410c0
7101ed3acc  mov x1,x0
7101ed3ad0  ldr x0,[x19, #0x58]
7101ed3ad4  bl 0x7103778b80
7101ed3ad8  add x0,x19,#0x60
7101ed3adc  mov x1,x20
7101ed3ae0  bl 0x710377a120
7101ed3ae4  ldr x8,[x19, #0x58]
7101ed3ae8  ldr x8,[x8]
7101ed3aec  cbz x8,0x7101ed3b04
7101ed3af0  ldr s0,[x8, #0x50]
7101ed3af4  ldr s1,[x8, #0x48]
7101ed3af8  fmul s0,s0,s1
7101ed3afc  fabs s0,s0
7101ed3b00  b 0x7101ed3b08
7101ed3b04  fmov s0,wzr
7101ed3b08  ldr x9,[x19, #0x68]
7101ed3b0c  ldr x10,[x9, #0x10]
7101ed3b10  adrp x12,0x71052a8000
7101ed3b14  ldr x12,[x12, #0xa80]
7101ed3b18  add x11,x10,#0x240
7101ed3b1c  cmp x10,#0x0
7101ed3b20  csel x10,x12,x11,eq
7101ed3b24  ldr s1,[x10]
7101ed3b28  fadd s0,s0,s1
7101ed3b2c  fmov s1,0x3f000000
7101ed3b30  fmul s0,s0,s1
7101ed3b34  cbz x8,0x7101ed3b50
7101ed3b38  ldrb w9,[x8, #0x58]
7101ed3b3c  fneg s1,s0
7101ed3b40  str s1,[x8, #0x30]
7101ed3b44  orr w9,w9,#0x10
7101ed3b48  strb w9,[x8, #0x58]
7101ed3b4c  ldr x9,[x19, #0x68]
7101ed3b50  ldr x8,[x9]
7101ed3b54  cbz x8,0x7101ed3b70
7101ed3b58  ldr s1,[x19, #0x70]
7101ed3b5c  fsub s0,s1,s0
7101ed3b60  ldrb w9,[x8, #0x58]
7101ed3b64  orr w9,w9,#0x10
7101ed3b68  strb w9,[x8, #0x58]
7101ed3b6c  str s0,[x8, #0x30]
7101ed3b70  ldp x29,x30,[sp, #0x10]
7101ed3b74  ldp x20,x19,[sp], #0x20
7101ed3b78  ret
