// addr:      7101f9af50
// offset:    0x1f9af50
// name:      FUN_7101f9af50
// mangled:   
// size:      288

7101f9af50  str x21,[sp, #-0x30]!
7101f9af54  stp x20,x19,[sp, #0x10]
7101f9af58  stp x29,x30,[sp, #0x20]
7101f9af5c  add x29,sp,#0x20
7101f9af60  ldr x8,[x1, #0x10]
7101f9af64  adrp x9,0x7101f9b000
7101f9af68  add x9,x9,#0x70
7101f9af6c  str x9,[x8]
7101f9af70  mov w9,#0x2
7101f9af74  str w9,[x8, #0x8]
7101f9af78  ldr x8,[x1, #0x10]
7101f9af7c  mov x19,x1
7101f9af80  mov x20,x0
7101f9af84  adrp x2,0x710430c000
7101f9af88  add x2,x2,#0x66a
7101f9af8c  mov x0,x19
7101f9af90  add x9,x8,#0x10
7101f9af94  str x9,[x1, #0x10]
7101f9af98  sub x1,x8,#0x10
7101f9af9c  bl 0x71038f5390
7101f9afa0  ldr w8,[x20]
7101f9afa4  ldr x9,[x19, #0x10]
7101f9afa8  orr w21,wzr,#0x3
7101f9afac  str w8,[x9]
7101f9afb0  str w21,[x9, #0x8]
7101f9afb4  ldr x8,[x19, #0x10]
7101f9afb8  add x9,x8,#0x10
7101f9afbc  sub x1,x8,#0x10
7101f9afc0  adrp x2,0x71043ae000
7101f9afc4  add x2,x2,#0x5c4
7101f9afc8  mov x0,x19
7101f9afcc  str x9,[x19, #0x10]
7101f9afd0  bl 0x71038f5390
7101f9afd4  ldr w8,[x20, #0x4]
7101f9afd8  ldr x9,[x19, #0x10]
7101f9afdc  str w8,[x9]
7101f9afe0  str w21,[x9, #0x8]
7101f9afe4  ldr x8,[x19, #0x10]
7101f9afe8  add x9,x8,#0x10
7101f9afec  sub x1,x8,#0x10
7101f9aff0  adrp x2,0x7104319000
7101f9aff4  add x2,x2,#0xaaf
7101f9aff8  mov x0,x19
7101f9affc  str x9,[x19, #0x10]
7101f9b000  bl 0x71038f5390
7101f9b004  ldr w8,[x20, #0x8]
7101f9b008  ldr x9,[x19, #0x10]
7101f9b00c  str w8,[x9]
7101f9b010  str w21,[x9, #0x8]
7101f9b014  ldr x8,[x19, #0x10]
7101f9b018  add x9,x8,#0x10
7101f9b01c  sub x1,x8,#0x10
7101f9b020  adrp x2,0x71042a3000
7101f9b024  add x2,x2,#0xc34
7101f9b028  mov x0,x19
7101f9b02c  str x9,[x19, #0x10]
7101f9b030  bl 0x71038f5390
7101f9b034  ldr w8,[x20, #0xc]
7101f9b038  ldr x9,[x19, #0x10]
7101f9b03c  str w8,[x9]
7101f9b040  str w21,[x9, #0x8]
7101f9b044  ldr x8,[x19, #0x10]
7101f9b048  add x9,x8,#0x10
7101f9b04c  str x9,[x19, #0x10]
7101f9b050  mov x0,x19
7101f9b054  sub x1,x8,#0x10
7101f9b058  ldp x29,x30,[sp, #0x20]
7101f9b05c  adrp x2,0x710434a000
7101f9b060  add x2,x2,#0xf54
7101f9b064  ldp x20,x19,[sp, #0x10]
7101f9b068  ldr x21,[sp], #0x30
7101f9b06c  b 0x71038f5390
