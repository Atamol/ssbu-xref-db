// addr:      71001849e0
// offset:    0x1849e0
// name:      FUN_71001849e0
// mangled:   
// size:      84

71001849e0  str x19,[sp, #-0x20]!
71001849e4  stp x29,x30,[sp, #0x10]
71001849e8  add x29,sp,#0x10
71001849ec  mov x19,x0
71001849f0  ldr x0,[x0, #0x58]
71001849f4  bl 0x71000b4a50
71001849f8  tbz w0,#0x0,0x7100184a0c
71001849fc  mov w0,#0x5
7100184a00  ldp x29,x30,[sp, #0x10]
7100184a04  ldr x19,[sp], #0x20
7100184a08  ret
7100184a0c  adrp x8,0x71052a6000
7100184a10  ldr x8,[x8, #0x4b0]
7100184a14  mov x0,xzr
7100184a18  stp x8,xzr,[x19, #0x30]
7100184a1c  adrp x8,0x71042e6000
7100184a20  add x8,x8,#0x4b6
7100184a24  str x8,[x19, #0x40]
7100184a28  ldp x29,x30,[sp, #0x10]
7100184a2c  ldr x19,[sp], #0x20
7100184a30  ret
