// addr:      71020dd0a0
// offset:    0x20dd0a0
// name:      FUN_71020dd0a0
// mangled:   
// size:      1060

71020dd0a0  stp x22,x21,[sp, #-0x30]!
71020dd0a4  stp x20,x19,[sp, #0x10]
71020dd0a8  stp x29,x30,[sp, #0x20]
71020dd0ac  add x29,sp,#0x20
71020dd0b0  mov w21,w2
71020dd0b4  and w2,w2,#0x1
71020dd0b8  mov x19,x1
71020dd0bc  mov x20,x0
71020dd0c0  bl 0x71020d4810
71020dd0c4  ldr x8,[x19, #0x10]
71020dd0c8  adrp x9,0x71020dd000
71020dd0cc  add x9,x9,#0x4d0
71020dd0d0  str x9,[x8]
71020dd0d4  mov w9,#0x2
71020dd0d8  str w9,[x8, #0x8]
71020dd0dc  ldr x8,[x19, #0x10]
71020dd0e0  add x9,x8,#0x10
71020dd0e4  sub x1,x8,#0x10
71020dd0e8  adrp x2,0x710430c000
71020dd0ec  add x2,x2,#0x66a
71020dd0f0  mov x0,x19
71020dd0f4  str x9,[x19, #0x10]
71020dd0f8  bl 0x71038f5390
71020dd0fc  tbz w21,#0x0,0x71020dd154
71020dd100  ldr x8,[x19, #0x18]
71020dd104  ldr x8,[x8, #0x18]
71020dd108  cmp x8,#0x1
71020dd10c  b.lt 0x71020dd118
71020dd110  mov x0,x19
71020dd114  bl 0x71038fec40
71020dd118  mov x0,x19
71020dd11c  bl 0x710391e050
71020dd120  ldr x8,[x19, #0x10]
71020dd124  mov w9,#0x45
71020dd128  str w9,[x8, #0x8]
71020dd12c  str x0,[x8]
71020dd130  ldr x8,[x19, #0x10]
71020dd134  mov x1,x0
71020dd138  mov w3,#0x4
71020dd13c  mov x0,x19
71020dd140  mov w2,wzr
71020dd144  add x8,x8,#0x10
71020dd148  str x8,[x19, #0x10]
71020dd14c  bl 0x710391d4c0
71020dd150  b 0x71020dd16c
71020dd154  ldr x8,[x19, #0x10]
71020dd158  sub x1,x8,#0x10
71020dd15c  adrp x2,0x710444c000
71020dd160  add x2,x2,#0x45b
71020dd164  mov x0,x19
71020dd168  bl 0x71038f4d40
71020dd16c  ldr s0,[x20, #0x20]
71020dd170  ldr x8,[x19, #0x10]
71020dd174  orr w22,wzr,#0x3
71020dd178  str w22,[x8, #0x8]
71020dd17c  str s0,[x8]
71020dd180  ldr x8,[x19, #0x10]
71020dd184  add x9,x8,#0x10
71020dd188  sub x1,x8,#0x10
71020dd18c  adrp x2,0x71043d7000
71020dd190  add x2,x2,#0xeae
71020dd194  mov x0,x19
71020dd198  str x9,[x19, #0x10]
71020dd19c  bl 0x71038f5390
71020dd1a0  ldr s0,[x20, #0x24]
71020dd1a4  ldr x8,[x19, #0x10]
71020dd1a8  str w22,[x8, #0x8]
71020dd1ac  str s0,[x8]
71020dd1b0  ldr x8,[x19, #0x10]
71020dd1b4  add x9,x8,#0x10
71020dd1b8  sub x1,x8,#0x10
71020dd1bc  adrp x2,0x71042ab000
71020dd1c0  add x2,x2,#0xc20
71020dd1c4  mov x0,x19
71020dd1c8  str x9,[x19, #0x10]
71020dd1cc  bl 0x71038f5390
71020dd1d0  ldr s0,[x20, #0x28]
71020dd1d4  ldr x8,[x19, #0x10]
71020dd1d8  str w22,[x8, #0x8]
71020dd1dc  str s0,[x8]
71020dd1e0  ldr x8,[x19, #0x10]
71020dd1e4  add x9,x8,#0x10
71020dd1e8  sub x1,x8,#0x10
71020dd1ec  adrp x2,0x710443b000
71020dd1f0  add x2,x2,#0x9a0
71020dd1f4  mov x0,x19
71020dd1f8  str x9,[x19, #0x10]
71020dd1fc  bl 0x71038f5390
71020dd200  ldr x8,[x19, #0x10]
71020dd204  tbz w21,#0x0,0x71020dd224
71020dd208  sub x1,x8,#0x20
71020dd20c  adrp x2,0x710444c000
71020dd210  add x2,x2,#0x45b
71020dd214  mov x0,x19
71020dd218  bl 0x71038f5390
71020dd21c  ldr x8,[x19, #0x10]
71020dd220  b 0x71020dd22c
71020dd224  sub x8,x8,#0x10
71020dd228  str x8,[x19, #0x10]
71020dd22c  ldrb w9,[x20, #0x30]
71020dd230  str w9,[x8]
71020dd234  mov w9,#0x1
71020dd238  str w9,[x8, #0x8]
71020dd23c  ldr x8,[x19, #0x10]
71020dd240  add x9,x8,#0x10
71020dd244  sub x1,x8,#0x10
71020dd248  adrp x2,0x71042c6000
71020dd24c  add x2,x2,#0x2ff
71020dd250  mov x0,x19
71020dd254  str x9,[x19, #0x10]
71020dd258  bl 0x71038f5390
71020dd25c  tbz w21,#0x0,0x71020dd2b4
71020dd260  ldr x8,[x19, #0x18]
71020dd264  ldr x8,[x8, #0x18]
71020dd268  cmp x8,#0x1
71020dd26c  b.lt 0x71020dd278
71020dd270  mov x0,x19
71020dd274  bl 0x71038fec40
71020dd278  mov x0,x19
71020dd27c  bl 0x710391e050
71020dd280  ldr x8,[x19, #0x10]
71020dd284  mov w9,#0x45
71020dd288  str w9,[x8, #0x8]
71020dd28c  str x0,[x8]
71020dd290  ldr x8,[x19, #0x10]
71020dd294  mov x1,x0
71020dd298  orr w3,wzr,#0x3
71020dd29c  mov x0,x19
71020dd2a0  mov w2,wzr
71020dd2a4  add x8,x8,#0x10
71020dd2a8  str x8,[x19, #0x10]
71020dd2ac  bl 0x710391d4c0
71020dd2b0  b 0x71020dd2cc
71020dd2b4  ldr x8,[x19, #0x10]
71020dd2b8  sub x1,x8,#0x10
71020dd2bc  adrp x2,0x71042b5000
71020dd2c0  add x2,x2,#0x4fb
71020dd2c4  mov x0,x19
71020dd2c8  bl 0x71038f4d40
71020dd2cc  ldr s0,[x20, #0x40]
71020dd2d0  ldr x8,[x19, #0x10]
71020dd2d4  orr w22,wzr,#0x3
71020dd2d8  str w22,[x8, #0x8]
71020dd2dc  str s0,[x8]
71020dd2e0  ldr x8,[x19, #0x10]
71020dd2e4  add x9,x8,#0x10
71020dd2e8  sub x1,x8,#0x10
71020dd2ec  adrp x2,0x71043d7000
71020dd2f0  add x2,x2,#0xeae
71020dd2f4  mov x0,x19
71020dd2f8  str x9,[x19, #0x10]
71020dd2fc  bl 0x71038f5390
71020dd300  ldr s0,[x20, #0x44]
71020dd304  ldr x8,[x19, #0x10]
71020dd308  str w22,[x8, #0x8]
71020dd30c  str s0,[x8]
71020dd310  ldr x8,[x19, #0x10]
71020dd314  add x9,x8,#0x10
71020dd318  sub x1,x8,#0x10
71020dd31c  adrp x2,0x71042ab000
71020dd320  add x2,x2,#0xc20
71020dd324  mov x0,x19
71020dd328  str x9,[x19, #0x10]
71020dd32c  bl 0x71038f5390
71020dd330  ldr x8,[x19, #0x10]
71020dd334  tbz w21,#0x0,0x71020dd354
71020dd338  sub x1,x8,#0x20
71020dd33c  adrp x2,0x71042b5000
71020dd340  add x2,x2,#0x4fb
71020dd344  mov x0,x19
71020dd348  bl 0x71038f5390
71020dd34c  ldr x8,[x19, #0x10]
71020dd350  b 0x71020dd35c
71020dd354  sub x8,x8,#0x10
71020dd358  str x8,[x19, #0x10]
71020dd35c  ldr w9,[x20, #0x50]
71020dd360  orr w21,wzr,#0x3
71020dd364  str w21,[x8, #0x8]
71020dd368  adrp x2,0x7104354000
71020dd36c  add x2,x2,#0x78c
71020dd370  str w9,[x8]
71020dd374  ldr x8,[x19, #0x10]
71020dd378  add x9,x8,#0x10
71020dd37c  sub x1,x8,#0x10
71020dd380  mov x0,x19
71020dd384  str x9,[x19, #0x10]
71020dd388  bl 0x71038f5390
71020dd38c  ldr w8,[x20, #0x54]
71020dd390  ldr x9,[x19, #0x10]
71020dd394  str w8,[x9]
71020dd398  str w21,[x9, #0x8]
71020dd39c  ldr x8,[x19, #0x10]
71020dd3a0  add x9,x8,#0x10
71020dd3a4  sub x1,x8,#0x10
71020dd3a8  adrp x2,0x7104455000
71020dd3ac  add x2,x2,#0xd07
71020dd3b0  mov x0,x19
71020dd3b4  str x9,[x19, #0x10]
71020dd3b8  bl 0x71038f5390
71020dd3bc  ldr x8,[x20, #0x58]
71020dd3c0  ldr x9,[x19, #0x10]
71020dd3c4  adrp x2,0x71043e1000
71020dd3c8  add x2,x2,#0x444
71020dd3cc  and x8,x8,#0xffffffffff
71020dd3d0  str x8,[x9]
71020dd3d4  mov w8,#0x13
71020dd3d8  str w8,[x9, #0x8]
71020dd3dc  ldr x8,[x19, #0x10]
71020dd3e0  add x9,x8,#0x10
71020dd3e4  sub x1,x8,#0x10
71020dd3e8  mov x0,x19
71020dd3ec  str x9,[x19, #0x10]
71020dd3f0  bl 0x71038f5390
71020dd3f4  ldr w8,[x20, #0x60]
71020dd3f8  ldr x9,[x19, #0x10]
71020dd3fc  str w8,[x9]
71020dd400  str w21,[x9, #0x8]
71020dd404  ldr x8,[x19, #0x10]
71020dd408  add x9,x8,#0x10
71020dd40c  sub x1,x8,#0x10
71020dd410  adrp x2,0x710437d000
71020dd414  add x2,x2,#0x691
71020dd418  mov x0,x19
71020dd41c  str x9,[x19, #0x10]
71020dd420  bl 0x71038f5390
71020dd424  ldrb w8,[x20, #0x64]
71020dd428  ldr x9,[x19, #0x10]
71020dd42c  mov w21,#0x1
71020dd430  str w8,[x9]
71020dd434  str w21,[x9, #0x8]
71020dd438  ldr x8,[x19, #0x10]
71020dd43c  add x9,x8,#0x10
71020dd440  sub x1,x8,#0x10
71020dd444  adrp x2,0x7104444000
71020dd448  add x2,x2,#0x91e
71020dd44c  mov x0,x19
71020dd450  str x9,[x19, #0x10]
71020dd454  bl 0x71038f5390
71020dd458  ldrb w8,[x20, #0x65]
71020dd45c  ldr x9,[x19, #0x10]
71020dd460  str w8,[x9]
71020dd464  str w21,[x9, #0x8]
71020dd468  ldr x8,[x19, #0x10]
71020dd46c  add x9,x8,#0x10
71020dd470  sub x1,x8,#0x10
71020dd474  adrp x2,0x7104413000
71020dd478  add x2,x2,#0xb47
71020dd47c  mov x0,x19
71020dd480  str x9,[x19, #0x10]
71020dd484  bl 0x71038f5390
71020dd488  ldrb w8,[x20, #0x66]
71020dd48c  ldr x9,[x19, #0x10]
71020dd490  str w8,[x9]
71020dd494  str w21,[x9, #0x8]
71020dd498  ldr x8,[x19, #0x10]
71020dd49c  add x9,x8,#0x10
71020dd4a0  str x9,[x19, #0x10]
71020dd4a4  mov x0,x19
71020dd4a8  sub x1,x8,#0x10
71020dd4ac  ldp x29,x30,[sp, #0x20]
71020dd4b0  adrp x2,0x71043bf000
71020dd4b4  add x2,x2,#0x74a
71020dd4b8  ldp x20,x19,[sp, #0x10]
71020dd4bc  ldp x22,x21,[sp], #0x30
71020dd4c0  b 0x71038f5390
