// addr:      71002afd50
// offset:    0x2afd50
// name:      FUN_71002afd50
// mangled:   
// size:      488

71002afd50  sub sp,sp,#0xd0
71002afd54  stp x24,x23,[sp, #0x90]
71002afd58  stp x22,x21,[sp, #0xa0]
71002afd5c  stp x20,x19,[sp, #0xb0]
71002afd60  stp x29,x30,[sp, #0xc0]
71002afd64  add x29,sp,#0xc0
71002afd68  mov x20,x0
71002afd6c  add x0,sp,#0x20
71002afd70  mov x21,x3
71002afd74  mov x23,x2
71002afd78  mov x19,x1
71002afd7c  bl 0x71001e6720
71002afd80  adrp x8,0x71052a4000
71002afd84  ldr x8,[x8, #0xda8]
71002afd88  adrp x24,0x71052a4000
71002afd8c  ldrb w8,[x8]
71002afd90  ldr x24,[x24, #0xdb0]
71002afd94  add x22,x24,#0x28
71002afd98  cbz w8,0x71002afdd4
71002afd9c  adrp x8,0x71052a4000
71002afda0  ldr x8,[x8, #0xdb8]
71002afda4  ldr x0,[x8]
71002afda8  bl 0x7101717960
71002afdac  ldr w8,[x0]
71002afdb0  cbz w8,0x71002afdd4
71002afdb4  ldr x10,[x24, #0xa0]
71002afdb8  ldp x9,x10,[x10]
71002afdbc  sub x10,x10,x9
71002afdc0  asr x10,x10,#0x3
71002afdc4  cmp x10,x8
71002afdc8  b.ls 0x71002afdec
71002afdcc  ldr x8,[x9, x8, LSL #0x3]
71002afdd0  add x22,x8,#0x20
71002afdd4  ldr x8,[x22]
71002afdd8  cbz x8,0x71002afe04
71002afddc  ldr x8,[x8, #0x10]
71002afde0  cbz x8,0x71002afe04
71002afde4  ldr x22,[x8, #0x10]
71002afde8  b 0x71002afe08
71002afdec  adrp x0,0x71042c4000
71002afdf0  add x0,x0,#0x35f
71002afdf4  mov w1,#0x47
71002afdf8  orr w2,wzr,#0xe0000003
71002afdfc  mov w3,wzr
71002afe00  bl 0x71001b1300
71002afe04  mov x22,xzr
71002afe08  ldr x8,[x22, #0x78]!
71002afe0c  ldr x8,[x8, #0x10]
71002afe10  mov x0,x22
71002afe14  blr x8
71002afe18  ldrh w1,[x20, #0x48]
71002afe1c  add x0,sp,#0x20
71002afe20  mov w2,#0x1
71002afe24  bl 0x710022b480
71002afe28  add x0,sp,#0x20
71002afe2c  mov x1,x19
71002afe30  bl 0x710022b390
71002afe34  tbz w0,#0x0,0x71002afe88
71002afe38  mov w1,#0xd
71002afe3c  add x0,sp,#0x20
71002afe40  bl 0x710022b400
71002afe44  add x0,sp,#0x20
71002afe48  mov x1,x23
71002afe4c  bl 0x71002b2270
71002afe50  ldrb w8,[sp, #0x28]
71002afe54  cbz w8,0x71002afe90
71002afe58  mov w8,#0xa
71002afe5c  movk w8,#0x8001, LSL #16
71002afe60  add x0,sp,#0x8
71002afe64  add x1,sp,#0x4
71002afe68  str w8,[sp, #0x4]
71002afe6c  bl 0x71001b4200
71002afe70  add x1,sp,#0x8
71002afe74  mov x0,x19
71002afe78  bl 0x71001d0c90
71002afe7c  mov w23,wzr
71002afe80  mov w21,#0x1
71002afe84  b 0x71002afeec
71002afe88  mov w21,wzr
71002afe8c  b 0x71002afee8
71002afe90  cbz x19,0x71002afea0
71002afe94  mov x0,x19
71002afe98  mov x1,x21
71002afe9c  bl 0x710022b430
71002afea0  adrp x8,0x71052a8000
71002afea4  adrp x9,0x71052a8000
71002afea8  ldr x8,[x8, #0x988]
71002afeac  ldr x9,[x9, #0x9b0]
71002afeb0  str x9,[x8, #0x60]
71002afeb4  ldrb w8,[x20, #0x70]
71002afeb8  cbz w8,0x71002afed4
71002afebc  mov w1,#0x10
71002afec0  mov x0,x20
71002afec4  bl 0x710022b500
71002afec8  tbz w0,#0x0,0x71002afed4
71002afecc  mov w23,#0x1
71002afed0  b 0x71002afeec
71002afed4  add x2,sp,#0x20
71002afed8  mov x0,x20
71002afedc  mov x1,x19
71002afee0  bl 0x710022a7f0
71002afee4  mov w21,w0
71002afee8  mov w23,wzr
71002afeec  ldr x8,[x22]
71002afef0  ldr x8,[x8, #0x20]
71002afef4  mov x0,x22
71002afef8  blr x8
71002afefc  cbz w23,0x71002aff14
71002aff00  add x2,sp,#0x20
71002aff04  mov x0,x20
71002aff08  mov x1,x19
71002aff0c  bl 0x710022a7f0
71002aff10  mov w21,w0
71002aff14  add x0,sp,#0x20
71002aff18  bl 0x71001e6910
71002aff1c  and w0,w21,#0x1
71002aff20  ldp x29,x30,[sp, #0xc0]
71002aff24  ldp x20,x19,[sp, #0xb0]
71002aff28  ldp x22,x21,[sp, #0xa0]
71002aff2c  ldp x24,x23,[sp, #0x90]
71002aff30  add sp,sp,#0xd0
71002aff34  ret
