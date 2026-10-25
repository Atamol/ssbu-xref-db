// addr:      7101bcbe40
// offset:    0x1bcbe40
// name:      FUN_7101bcbe40
// mangled:   
// size:      212

7101bcbe40  sub w8,w1,#0x1
7101bcbe44  cmp w8,#0xa
7101bcbe48  b.hi 0x7101bcbe70
7101bcbe4c  adrp x9,0x71044f8000
7101bcbe50  add x9,x9,#0xba8
7101bcbe54  add x0,x0,#0x2e0
7101bcbe58  ldrsw x8,[x9, x8, LSL #0x2]
7101bcbe5c  add x8,x8,x9
7101bcbe60  br x8
7101bcbe64  adrp x1,0x7104291000
7101bcbe68  add x1,x1,#0xa99
7101bcbe6c  b 0x710377a120
7101bcbe70  ldr x8,[x0, #0x2e8]
7101bcbe74  ldr x0,[x8, #0x10]
7101bcbe78  cbz x0,0x7101bcbea4
7101bcbe7c  sub sp,sp,#0x20
7101bcbe80  stp x29,x30,[sp, #0x10]
7101bcbe84  add x29,sp,#0x10
7101bcbe88  sub x1,x29,#0x4
7101bcbe8c  mov w2,wzr
7101bcbe90  mov w3,wzr
7101bcbe94  stur wzr,[x29, #-0x4]
7101bcbe98  bl 0x71037a2270
7101bcbe9c  ldp x29,x30,[sp, #0x10]
7101bcbea0  add sp,sp,#0x20
7101bcbea4  ret
7101bcbea8  adrp x1,0x71042f8000
7101bcbeac  add x1,x1,#0x169
7101bcbeb0  b 0x710377a120
7101bcbeb4  adrp x1,0x710435b000
7101bcbeb8  add x1,x1,#0x589
7101bcbebc  b 0x710377a120
7101bcbec0  adrp x1,0x7104291000
7101bcbec4  add x1,x1,#0xa7e
7101bcbec8  b 0x710377a120
7101bcbecc  adrp x1,0x7104412000
7101bcbed0  add x1,x1,#0x855
7101bcbed4  b 0x710377a120
7101bcbed8  adrp x1,0x7104308000
7101bcbedc  add x1,x1,#0x33d
7101bcbee0  b 0x710377a120
7101bcbee4  adrp x1,0x71043cf000
7101bcbee8  add x1,x1,#0x2d0
7101bcbeec  b 0x710377a120
7101bcbef0  adrp x1,0x71042b4000
7101bcbef4  add x1,x1,#0x1fc
7101bcbef8  b 0x710377a120
7101bcbefc  adrp x1,0x710436c000
7101bcbf00  add x1,x1,#0x199
7101bcbf04  b 0x710377a120
7101bcbf08  adrp x1,0x71042d6000
7101bcbf0c  add x1,x1,#0x175
7101bcbf10  b 0x710377a120
