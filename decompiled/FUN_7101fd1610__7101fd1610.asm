// addr:      7101fd1610
// offset:    0x1fd1610
// name:      FUN_7101fd1610
// mangled:   
// size:      468

7101fd1610  stp x26,x25,[sp, #-0x50]!
7101fd1614  stp x24,x23,[sp, #0x10]
7101fd1618  stp x22,x21,[sp, #0x20]
7101fd161c  stp x20,x19,[sp, #0x30]
7101fd1620  stp x29,x30,[sp, #0x40]
7101fd1624  add x29,sp,#0x40
7101fd1628  ldur x8,[x0, #-0x8]
7101fd162c  cbz x8,0x7101fd17c8
7101fd1630  ldr x22,[x8, #0x88]
7101fd1634  cbz x22,0x7101fd17c8
7101fd1638  ldr x9,[x0, #0x20]
7101fd163c  ldr x9,[x9]
7101fd1640  ldr x8,[x0, #0x10]
7101fd1644  mov w1,#0x1
7101fd1648  mov x2,xzr
7101fd164c  add x9,x9,#0x10
7101fd1650  sub x24,x8,x9
7101fd1654  mov x19,x0
7101fd1658  lsr x25,x24,#0x4
7101fd165c  bl 0x71038f45b0
7101fd1660  mov x20,x0
7101fd1664  mov w1,#0x2
7101fd1668  mov x0,x19
7101fd166c  mov x2,xzr
7101fd1670  bl 0x71038f45b0
7101fd1674  ldr x8,[x19, #0x20]
7101fd1678  ldr x8,[x8]
7101fd167c  ldr x9,[x19, #0x10]
7101fd1680  add x8,x8,#0x30
7101fd1684  adrp x26,0x7104862000
7101fd1688  add x26,x26,#0x960
7101fd168c  cmp x8,x9
7101fd1690  mov x21,x0
7101fd1694  adrp x2,0x710430c000
7101fd1698  add x2,x2,#0x66a
7101fd169c  mov x0,x19
7101fd16a0  csel x1,x8,x26,cc
7101fd16a4  bl 0x71038f4d40
7101fd16a8  ldr x9,[x19, #0x10]
7101fd16ac  sub x8,x9,#0x10
7101fd16b0  ldur w9,[x9, #-0x8]
7101fd16b4  and w10,w9,#0xf
7101fd16b8  cmp w10,#0x2
7101fd16bc  b.eq 0x7101fd16d8
7101fd16c0  mov x9,xzr
7101fd16c4  cmp w10,#0x7
7101fd16c8  b.ne 0x7101fd16dc
7101fd16cc  ldr x9,[x8]
7101fd16d0  add x9,x9,#0x28
7101fd16d4  b 0x7101fd16dc
7101fd16d8  ldr x9,[x8]
7101fd16dc  str x8,[x19, #0x10]
7101fd16e0  blr x9
7101fd16e4  orr w2,wzr,#0x3
7101fd16e8  mov x1,x19
7101fd16ec  mov x23,x0
7101fd16f0  bl 0x7101fd17f0
7101fd16f4  cmp w25,#0x4
7101fd16f8  b.lt 0x7101fd1738
7101fd16fc  ldr x8,[x19, #0x20]
7101fd1700  ldr x8,[x8]
7101fd1704  add x9,x8,#0x40
7101fd1708  ldr x8,[x19, #0x10]
7101fd170c  cmp x9,x8
7101fd1710  csel x9,x9,x26,cc
7101fd1714  ldr w10,[x9, #0x8]
7101fd1718  and w10,w10,#0xf
7101fd171c  cmp w10,#0x2
7101fd1720  b.eq 0x7101fd1784
7101fd1724  cmp w10,#0x7
7101fd1728  b.ne 0x7101fd178c
7101fd172c  ldr x9,[x9]
7101fd1730  add x9,x9,#0x28
7101fd1734  b 0x7101fd1790
7101fd1738  tbnz w25,#0x1f,0x7101fd1744
7101fd173c  ldr x8,[x19, #0x10]
7101fd1740  b 0x7101fd1794
7101fd1744  ldr x8,[x19, #0x20]
7101fd1748  ldr x8,[x8]
7101fd174c  lsl x10,x24,#0x1c
7101fd1750  ldr x9,[x19, #0x10]
7101fd1754  eor x10,x10,#-0x100000000
7101fd1758  add x8,x8,x10, ASR #0x1c
7101fd175c  add x8,x8,#0x10
7101fd1760  cmp x9,x8
7101fd1764  b.cs 0x7101fd179c
7101fd1768  add x10,x9,#0x10
7101fd176c  str x10,[x19, #0x10]
7101fd1770  str wzr,[x9, #0x8]
7101fd1774  ldr x9,[x19, #0x10]
7101fd1778  cmp x9,x8
7101fd177c  b.cc 0x7101fd1768
7101fd1780  b 0x7101fd179c
7101fd1784  ldr x9,[x9]
7101fd1788  b 0x7101fd1790
7101fd178c  mov x9,xzr
7101fd1790  ldr x22,[x9, #0xa0]
7101fd1794  neg x9,x24, LSL #0x1c
7101fd1798  add x8,x8,x9, ASR #0x1c
7101fd179c  str x8,[x19, #0x10]
7101fd17a0  ldr x8,[x22]
7101fd17a4  ldr x8,[x8, #0x68]
7101fd17a8  mov x0,x22
7101fd17ac  mov w1,w20
7101fd17b0  mov w2,w21
7101fd17b4  mov x3,x23
7101fd17b8  blr x8
7101fd17bc  cbz x23,0x7101fd17c8
7101fd17c0  mov x0,x23
7101fd17c4  bl 0x710392eb40
7101fd17c8  ldp x29,x30,[sp, #0x40]
7101fd17cc  mov w0,wzr
7101fd17d0  ldp x20,x19,[sp, #0x30]
7101fd17d4  ldp x22,x21,[sp, #0x20]
7101fd17d8  ldp x24,x23,[sp, #0x10]
7101fd17dc  ldp x26,x25,[sp], #0x50
7101fd17e0  ret
