// addr:      71000d2fb0
// offset:    0xd2fb0
// name:      FUN_71000d2fb0
// mangled:   
// size:      160

71000d2fb0  stp x20,x19,[sp, #-0x20]!
71000d2fb4  stp x29,x30,[sp, #0x10]
71000d2fb8  add x29,sp,#0x10
71000d2fbc  ldr x8,[x0, #0x58]
71000d2fc0  mov x19,x0
71000d2fc4  cbz x8,0x71000d2fe8
71000d2fc8  ldrb w8,[x8, #0x28]
71000d2fcc  cbz w8,0x71000d2fe8
71000d2fd0  adrp x8,0x71052a4000
71000d2fd4  ldr x8,[x8, #0xf50]
71000d2fd8  mov x0,xzr
71000d2fdc  adrp x9,0x71042b3000
71000d2fe0  add x9,x9,#0x3ca
71000d2fe4  b 0x71000d303c
71000d2fe8  adrp x8,0x71052a4000
71000d2fec  ldr x8,[x8, #0xc70]
71000d2ff0  ldr x20,[x8]
71000d2ff4  bl 0x71000bb680
71000d2ff8  ldr x8,[x0]
71000d2ffc  ldr x10,[x20, #0x30]
71000d3000  mov w9,#0x2710
71000d3004  madd x8,x8,x9,x10
71000d3008  str x8,[x19, #0x60]
71000d300c  adrp x8,0x71052a4000
71000d3010  ldr x8,[x8, #0xd88]
71000d3014  ldr x8,[x8]
71000d3018  ldr x0,[x8, #0x88]
71000d301c  ldr x8,[x0]
71000d3020  ldr x8,[x8, #0x38]
71000d3024  blr x8
71000d3028  adrp x8,0x71052a4000
71000d302c  ldr x8,[x8, #0xf60]
71000d3030  mov w0,#0x5
71000d3034  adrp x9,0x71043ef000
71000d3038  add x9,x9,#0x9d3
71000d303c  stp x8,xzr,[x19, #0x30]
71000d3040  str x9,[x19, #0x40]
71000d3044  ldp x29,x30,[sp, #0x10]
71000d3048  ldp x20,x19,[sp], #0x20
71000d304c  ret
