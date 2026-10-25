// addr:      71002af950
// offset:    0x2af950
// name:      FUN_71002af950
// mangled:   
// size:      488

71002af950  sub sp,sp,#0xd0
71002af954  stp x24,x23,[sp, #0x90]
71002af958  stp x22,x21,[sp, #0xa0]
71002af95c  stp x20,x19,[sp, #0xb0]
71002af960  stp x29,x30,[sp, #0xc0]
71002af964  add x29,sp,#0xc0
71002af968  mov x20,x0
71002af96c  add x0,sp,#0x20
71002af970  mov x21,x3
71002af974  mov x23,x2
71002af978  mov x19,x1
71002af97c  bl 0x71001e6720
71002af980  adrp x8,0x71052a4000
71002af984  ldr x8,[x8, #0xda8]
71002af988  adrp x24,0x71052a4000
71002af98c  ldrb w8,[x8]
71002af990  ldr x24,[x24, #0xdb0]
71002af994  add x22,x24,#0x28
71002af998  cbz w8,0x71002af9d4
71002af99c  adrp x8,0x71052a4000
71002af9a0  ldr x8,[x8, #0xdb8]
71002af9a4  ldr x0,[x8]
71002af9a8  bl 0x7101717960
71002af9ac  ldr w8,[x0]
71002af9b0  cbz w8,0x71002af9d4
71002af9b4  ldr x10,[x24, #0xa0]
71002af9b8  ldp x9,x10,[x10]
71002af9bc  sub x10,x10,x9
71002af9c0  asr x10,x10,#0x3
71002af9c4  cmp x10,x8
71002af9c8  b.ls 0x71002af9ec
71002af9cc  ldr x8,[x9, x8, LSL #0x3]
71002af9d0  add x22,x8,#0x20
71002af9d4  ldr x8,[x22]
71002af9d8  cbz x8,0x71002afa04
71002af9dc  ldr x8,[x8, #0x10]
71002af9e0  cbz x8,0x71002afa04
71002af9e4  ldr x22,[x8, #0x10]
71002af9e8  b 0x71002afa08
71002af9ec  adrp x0,0x71042c4000
71002af9f0  add x0,x0,#0x35f
71002af9f4  mov w1,#0x47
71002af9f8  orr w2,wzr,#0xe0000003
71002af9fc  mov w3,wzr
71002afa00  bl 0x71001b1300
71002afa04  mov x22,xzr
71002afa08  ldr x8,[x22, #0x78]!
71002afa0c  ldr x8,[x8, #0x10]
71002afa10  mov x0,x22
71002afa14  blr x8
71002afa18  ldrh w1,[x20, #0x48]
71002afa1c  add x0,sp,#0x20
71002afa20  mov w2,#0x1
71002afa24  bl 0x710022b480
71002afa28  add x0,sp,#0x20
71002afa2c  mov x1,x19
71002afa30  bl 0x710022b390
71002afa34  tbz w0,#0x0,0x71002afa88
71002afa38  mov w1,#0xb
71002afa3c  add x0,sp,#0x20
71002afa40  bl 0x710022b400
71002afa44  add x0,sp,#0x20
71002afa48  mov x1,x23
71002afa4c  bl 0x71002b2180
71002afa50  ldrb w8,[sp, #0x28]
71002afa54  cbz w8,0x71002afa90
71002afa58  mov w8,#0xa
71002afa5c  movk w8,#0x8001, LSL #16
71002afa60  add x0,sp,#0x8
71002afa64  add x1,sp,#0x4
71002afa68  str w8,[sp, #0x4]
71002afa6c  bl 0x71001b4200
71002afa70  add x1,sp,#0x8
71002afa74  mov x0,x19
71002afa78  bl 0x71001d0c90
71002afa7c  mov w23,wzr
71002afa80  mov w21,#0x1
71002afa84  b 0x71002afaec
71002afa88  mov w21,wzr
71002afa8c  b 0x71002afae8
71002afa90  cbz x19,0x71002afaa0
71002afa94  mov x0,x19
71002afa98  mov x1,x21
71002afa9c  bl 0x710022b430
71002afaa0  adrp x8,0x71052a8000
71002afaa4  adrp x9,0x71052a8000
71002afaa8  ldr x8,[x8, #0x988]
71002afaac  ldr x9,[x9, #0x9a0]
71002afab0  str x9,[x8, #0x50]
71002afab4  ldrb w8,[x20, #0x70]
71002afab8  cbz w8,0x71002afad4
71002afabc  mov w1,#0x10
71002afac0  mov x0,x20
71002afac4  bl 0x710022b500
71002afac8  tbz w0,#0x0,0x71002afad4
71002afacc  mov w23,#0x1
71002afad0  b 0x71002afaec
71002afad4  add x2,sp,#0x20
71002afad8  mov x0,x20
71002afadc  mov x1,x19
71002afae0  bl 0x710022a7f0
71002afae4  mov w21,w0
71002afae8  mov w23,wzr
71002afaec  ldr x8,[x22]
71002afaf0  ldr x8,[x8, #0x20]
71002afaf4  mov x0,x22
71002afaf8  blr x8
71002afafc  cbz w23,0x71002afb14
71002afb00  add x2,sp,#0x20
71002afb04  mov x0,x20
71002afb08  mov x1,x19
71002afb0c  bl 0x710022a7f0
71002afb10  mov w21,w0
71002afb14  add x0,sp,#0x20
71002afb18  bl 0x71001e6910
71002afb1c  and w0,w21,#0x1
71002afb20  ldp x29,x30,[sp, #0xc0]
71002afb24  ldp x20,x19,[sp, #0xb0]
71002afb28  ldp x22,x21,[sp, #0xa0]
71002afb2c  ldp x24,x23,[sp, #0x90]
71002afb30  add sp,sp,#0xd0
71002afb34  ret
