// addr:      710011ddb0
// offset:    0x11ddb0
// name:      FUN_710011ddb0
// mangled:   
// size:      232

710011ddb0  str x19,[sp, #-0x20]!
710011ddb4  stp x29,x30,[sp, #0x10]
710011ddb8  add x29,sp,#0x10
710011ddbc  mov x19,x0
710011ddc0  bl 0x710013fd20
710011ddc4  adrp x8,0x71052a5000
710011ddc8  ldr x8,[x8, #0x80]
710011ddcc  ldr x8,[x8]
710011ddd0  mov w9,#0x1
710011ddd4  adrp x10,0x71052a5000
710011ddd8  ldr x10,[x10, #0x8f0]
710011dddc  strb w9,[x8, #0x15d]
710011dde0  adrp x8,0x71042e6000
710011dde4  add x8,x8,#0x395
710011dde8  stp x10,xzr,[x19, #0x30]
710011ddec  str x8,[x19, #0x40]
710011ddf0  ldr w8,[x19, #0x90]
710011ddf4  sub w9,w8,#0x9
710011ddf8  cmp w9,#0x2
710011ddfc  b.cc 0x710011de30
710011de00  cmp w8,#0x8
710011de04  b.eq 0x710011de50
710011de08  cmp w8,#0x7
710011de0c  b.ne 0x710011de88
710011de10  ldrb w8,[x19, #0xf4]
710011de14  cbz w8,0x710011de88
710011de18  adrp x8,0x71052a5000
710011de1c  ldr x8,[x8, #0x8f8]
710011de20  stp x8,xzr,[x19, #0x30]
710011de24  adrp x8,0x7104442000
710011de28  add x8,x8,#0x9ee
710011de2c  b 0x710011de84
710011de30  ldrb w8,[x19, #0xf4]
710011de34  cbz w8,0x710011de70
710011de38  adrp x8,0x71052a5000
710011de3c  ldr x8,[x8, #0x900]
710011de40  stp x8,xzr,[x19, #0x30]
710011de44  adrp x8,0x71043ac000
710011de48  add x8,x8,#0xa70
710011de4c  b 0x710011de84
710011de50  ldrb w8,[x19, #0xf4]
710011de54  cbz w8,0x710011de88
710011de58  adrp x8,0x71052a5000
710011de5c  ldr x8,[x8, #0x908]
710011de60  stp x8,xzr,[x19, #0x30]
710011de64  adrp x8,0x710436b000
710011de68  add x8,x8,#0x690
710011de6c  b 0x710011de84
710011de70  adrp x8,0x71052a5000
710011de74  ldr x8,[x8, #0x910]
710011de78  stp x8,xzr,[x19, #0x30]
710011de7c  adrp x8,0x7104432000
710011de80  add x8,x8,#0x2ec
710011de84  str x8,[x19, #0x40]
710011de88  ldp x29,x30,[sp, #0x10]
710011de8c  mov x0,xzr
710011de90  ldr x19,[sp], #0x20
710011de94  ret
