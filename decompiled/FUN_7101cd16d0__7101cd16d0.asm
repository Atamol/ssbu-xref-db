// addr:      7101cd16d0
// offset:    0x1cd16d0
// name:      FUN_7101cd16d0
// mangled:   
// size:      340

7101cd16d0  sub sp,sp,#0x50
7101cd16d4  str x23,[sp, #0x10]
7101cd16d8  stp x22,x21,[sp, #0x20]
7101cd16dc  stp x20,x19,[sp, #0x30]
7101cd16e0  stp x29,x30,[sp, #0x40]
7101cd16e4  add x29,sp,#0x40
7101cd16e8  ldr x8,[x0, #0x100]
7101cd16ec  ldr x23,[x8]
7101cd16f0  mov x8,sp
7101cd16f4  add x20,x23,#0x8
7101cd16f8  mov x21,x1
7101cd16fc  mov x19,x0
7101cd1700  adrp x1,0x71043cf000
7101cd1704  add x1,x1,#0xca4
7101cd1708  mov x0,x20
7101cd170c  bl 0x7103776910
7101cd1710  add x21,x21,#0x8
7101cd1714  adrp x1,0x710436c000
7101cd1718  add x1,x1,#0x50b
7101cd171c  mov x0,sp
7101cd1720  mov w2,#0x1
7101cd1724  mov x3,x21
7101cd1728  bl 0x710377a280
7101cd172c  ldr x0,[sp, #0x8]
7101cd1730  adrp x22,0x710523d000
7101cd1734  add x22,x22,#0x9a8
7101cd1738  stp x22,xzr,[sp]
7101cd173c  cbz x0,0x7101cd1744
7101cd1740  bl 0x710392eb40
7101cd1744  adrp x1,0x710434a000
7101cd1748  add x1,x1,#0x49b
7101cd174c  mov x8,sp
7101cd1750  mov x0,x20
7101cd1754  bl 0x7103776910
7101cd1758  adrp x1,0x7104280000
7101cd175c  add x1,x1,#0xb58
7101cd1760  mov x0,sp
7101cd1764  mov w2,#0x1
7101cd1768  mov x3,x21
7101cd176c  bl 0x710377a280
7101cd1770  ldr x0,[sp, #0x8]
7101cd1774  stp x22,xzr,[sp]
7101cd1778  cbz x0,0x7101cd1780
7101cd177c  bl 0x710392eb40
7101cd1780  ldr x0,[x23, #0x10]
7101cd1784  adrp x1,0x710438c000
7101cd1788  add x1,x1,#0xbd1
7101cd178c  bl 0x7103778760
7101cd1790  add x20,x19,#0x108
7101cd1794  mov x8,sp
7101cd1798  mov x0,x20
7101cd179c  mov w1,wzr
7101cd17a0  bl 0x7103771e50
7101cd17a4  adrp x1,0x710424f000
7101cd17a8  add x1,x1,#0x675
7101cd17ac  mov x0,sp
7101cd17b0  bl 0x710377a120
7101cd17b4  ldr x0,[sp, #0x8]
7101cd17b8  stp x22,xzr,[sp]
7101cd17bc  cbz x0,0x7101cd17c4
7101cd17c0  bl 0x710392eb40
7101cd17c4  mov x8,sp
7101cd17c8  mov w1,#0x1
7101cd17cc  mov x0,x20
7101cd17d0  mov w21,#0x1
7101cd17d4  bl 0x7103771e50
7101cd17d8  adrp x1,0x710438c000
7101cd17dc  add x1,x1,#0xbdc
7101cd17e0  mov x0,sp
7101cd17e4  bl 0x710377a120
7101cd17e8  ldr x0,[sp, #0x8]
7101cd17ec  stp x22,xzr,[sp]
7101cd17f0  cbz x0,0x7101cd17f8
7101cd17f4  bl 0x710392eb40
7101cd17f8  mov w2,#0x1
7101cd17fc  mov x0,x20
7101cd1800  mov w1,wzr
7101cd1804  bl 0x7103771a80
7101cd1808  strh w21,[x19, #0x134]
7101cd180c  ldp x29,x30,[sp, #0x40]
7101cd1810  ldp x20,x19,[sp, #0x30]
7101cd1814  ldr x23,[sp, #0x10]
7101cd1818  ldp x22,x21,[sp, #0x20]
7101cd181c  add sp,sp,#0x50
7101cd1820  ret
