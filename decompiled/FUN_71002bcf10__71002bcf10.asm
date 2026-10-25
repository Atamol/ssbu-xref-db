// addr:      71002bcf10
// offset:    0x2bcf10
// name:      FUN_71002bcf10
// mangled:   
// size:      260

71002bcf10  sub sp,sp,#0x50
71002bcf14  str x23,[sp, #0x10]
71002bcf18  stp x22,x21,[sp, #0x20]
71002bcf1c  stp x20,x19,[sp, #0x30]
71002bcf20  stp x29,x30,[sp, #0x40]
71002bcf24  add x29,sp,#0x40
71002bcf28  mov x19,x0
71002bcf2c  mov x0,x3
71002bcf30  mov x20,x5
71002bcf34  mov w21,w4
71002bcf38  mov x22,x2
71002bcf3c  mov x23,x1
71002bcf40  bl 0x71039c0870
71002bcf44  str x0,[sp]
71002bcf48  mov x0,x20
71002bcf4c  str w21,[sp, #0x8]
71002bcf50  bl 0x71002b47a0
71002bcf54  mov w21,w0
71002bcf58  mov x0,x20
71002bcf5c  bl 0x71002b47b0
71002bcf60  stp w21,w0,[sp, #0x18]
71002bcf64  adrp x3,0x71044a2000
71002bcf68  add x3,x3,#0x624
71002bcf6c  orr w4,wzr,#0x6
71002bcf70  add x5,sp,#0x18
71002bcf74  mov x6,sp
71002bcf78  mov x0,x19
71002bcf7c  mov x1,x22
71002bcf80  mov x2,x23
71002bcf84  bl 0x71002bd020
71002bcf88  ldr x8,[sp]
71002bcf8c  adrp x9,0x71052a4000
71002bcf90  adrp x3,0x7104453000
71002bcf94  add x3,x3,#0xfbd
71002bcf98  orr w2,wzr,#0x3
71002bcf9c  ldr x8,[x8, #0x20]
71002bcfa0  ldr x9,[x9, #0x2d8]
71002bcfa4  ldr w10,[sp, #0x8]
71002bcfa8  mov w1,wzr
71002bcfac  ldr x9,[x9, x10, LSL #0x3]
71002bcfb0  ldr x8,[x8, x9, LSL #0x0]
71002bcfb4  ldr x20,[x8, #0x68]
71002bcfb8  mov x0,x20
71002bcfbc  bl 0x7100038e90
71002bcfc0  str w0,[x19, #0x30]
71002bcfc4  adrp x3,0x710435a000
71002bcfc8  add x3,x3,#0x9f0
71002bcfcc  mov w1,#0x4
71002bcfd0  orr w2,wzr,#0x3
71002bcfd4  mov x0,x20
71002bcfd8  bl 0x7100038e90
71002bcfdc  str w0,[x19, #0x38]
71002bcfe0  adrp x3,0x71043bd000
71002bcfe4  add x3,x3,#0xb8f
71002bcfe8  mov w1,#0x4
71002bcfec  mov w2,#0x2
71002bcff0  mov x0,x20
71002bcff4  bl 0x7100038e90
71002bcff8  str w0,[x19, #0x34]
71002bcffc  ldp x29,x30,[sp, #0x40]
71002bd000  ldp x20,x19,[sp, #0x30]
71002bd004  ldr x23,[sp, #0x10]
71002bd008  ldp x22,x21,[sp, #0x20]
71002bd00c  add sp,sp,#0x50
71002bd010  ret
