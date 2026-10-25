// addr:      7101ad1f10
// offset:    0x1ad1f10
// name:      FUN_7101ad1f10
// mangled:   
// size:      324

7101ad1f10  sub sp,sp,#0x80
7101ad1f14  str x25,[sp, #0x30]
7101ad1f18  stp x24,x23,[sp, #0x40]
7101ad1f1c  stp x22,x21,[sp, #0x50]
7101ad1f20  stp x20,x19,[sp, #0x60]
7101ad1f24  stp x29,x30,[sp, #0x70]
7101ad1f28  add x29,sp,#0x70
7101ad1f2c  mov x21,x0
7101ad1f30  ldr x0,[x1, #0x8]
7101ad1f34  fmov s0,0x3f800000
7101ad1f38  mov x23,x1
7101ad1f3c  adrp x1,0x7104348000
7101ad1f40  add x1,x1,#0xed7
7101ad1f44  mov w20,w4
7101ad1f48  mov x22,x3
7101ad1f4c  mov w19,w2
7101ad1f50  bl 0x7103778300
7101ad1f54  adrp x1,0x71042d6000
7101ad1f58  add x1,x1,#0x682
7101ad1f5c  add x8,sp,#0x18
7101ad1f60  mov x0,x23
7101ad1f64  bl 0x7103776910
7101ad1f68  adrp x25,0x710523d000
7101ad1f6c  add x25,x25,#0x9a8
7101ad1f70  mov w0,#0x10
7101ad1f74  mov w1,#0x20
7101ad1f78  str x25,[sp, #0x8]
7101ad1f7c  bl 0x710392e290
7101ad1f80  cbnz x0,0x7101ad1fc8
7101ad1f84  adrp x8,0x7105332000
7101ad1f88  ldr x0,[x8, #0xf00]
7101ad1f8c  cbz x0,0x7101ad1fc4
7101ad1f90  mov w8,#0x20
7101ad1f94  stur wzr,[x29, #-0x34]
7101ad1f98  sub x1,x29,#0x34
7101ad1f9c  str x8,[sp, #0x28]
7101ad1fa0  ldr x8,[x0]
7101ad1fa4  ldr x8,[x8, #0x30]
7101ad1fa8  add x2,sp,#0x28
7101ad1fac  blr x8
7101ad1fb0  tbz w0,#0x0,0x7101ad1fc4
7101ad1fb4  mov w0,#0x10
7101ad1fb8  mov w1,#0x20
7101ad1fbc  bl 0x710392e290
7101ad1fc0  cbnz x0,0x7101ad1fc8
7101ad1fc4  mov x0,xzr
7101ad1fc8  stp xzr,xzr,[x0, #0x10]
7101ad1fcc  mov x24,x0
7101ad1fd0  stp xzr,xzr,[x0]
7101ad1fd4  ldr x8,[sp, #0x20]
7101ad1fd8  and x3,x22,#0xffffffff
7101ad1fdc  and w4,w20,#0x1
7101ad1fe0  add x1,sp,#0x8
7101ad1fe4  str x0,[sp, #0x10]
7101ad1fe8  ldr x9,[x8]
7101ad1fec  str x9,[x0]
7101ad1ff0  ldr x8,[x8, #0x8]
7101ad1ff4  str x8,[x0, #0x8]
7101ad1ff8  ldr x23,[sp, #0x20]
7101ad1ffc  ldr x8,[x23, #0x10]
7101ad2000  str x8,[x24, #0x10]
7101ad2004  ldr x8,[x23, #0x18]
7101ad2008  mov x0,x21
7101ad200c  mov w2,w19
7101ad2010  str x8,[x24, #0x18]
7101ad2014  bl 0x7101ad2060
7101ad2018  stp x25,xzr,[sp, #0x8]
7101ad201c  cbz x24,0x7101ad2028
7101ad2020  mov x0,x24
7101ad2024  bl 0x710392eb40
7101ad2028  stp x25,xzr,[sp, #0x18]
7101ad202c  cbz x23,0x7101ad2038
7101ad2030  mov x0,x23
7101ad2034  bl 0x710392eb40
7101ad2038  ldp x29,x30,[sp, #0x70]
7101ad203c  ldr x25,[sp, #0x30]
7101ad2040  ldp x20,x19,[sp, #0x60]
7101ad2044  ldp x22,x21,[sp, #0x50]
7101ad2048  ldp x24,x23,[sp, #0x40]
7101ad204c  add sp,sp,#0x80
7101ad2050  ret
