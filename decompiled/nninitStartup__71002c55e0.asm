// addr:      71002c55e0
// offset:    0x2c55e0
// name:      nninitStartup
// mangled:   
// size:      60

71002c55e0  stp x29,x30,[sp, #-0x10]!
71002c55e4  mov x29,sp
71002c55e8  adrp x8,0x71052b6000
71002c55ec  adrp x9,0x710437b000
71002c55f0  add x9,x9,#0xd07
71002c55f4  str x9,[x8, #0xf18]
71002c55f8  bl 0x71039c1a10
71002c55fc  bl 0x71039c1a20
71002c5600  adrp x0,0x710353c000
71002c5604  add x0,x0,#0x150
71002c5608  adrp x1,0x710353c000
71002c560c  add x1,x1,#0x1c0
71002c5610  bl 0x71039c1a30
71002c5614  ldp x29,x30,[sp], #0x10
71002c5618  ret
