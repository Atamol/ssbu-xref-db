// addr:      7101ce1840
// offset:    0x1ce1840
// name:      FUN_7101ce1840
// mangled:   
// size:      352

7101ce1840  sub sp,sp,#0xd0
7101ce1844  str x23,[sp, #0x90]
7101ce1848  stp x22,x21,[sp, #0xa0]
7101ce184c  stp x20,x19,[sp, #0xb0]
7101ce1850  stp x29,x30,[sp, #0xc0]
7101ce1854  add x29,sp,#0xc0
7101ce1858  add x19,x0,#0x250
7101ce185c  mov x20,x0
7101ce1860  adrp x1,0x7104443000
7101ce1864  add x1,x1,#0xb1e
7101ce1868  mov x8,sp
7101ce186c  mov x0,x19
7101ce1870  bl 0x7103776910
7101ce1874  ldr x21,[sp, #0x8]
7101ce1878  ldr x0,[x21]
7101ce187c  mov w1,wzr
7101ce1880  bl 0x710377aa20
7101ce1884  ldr x8,[x21]
7101ce1888  cbz x8,0x7101ce18a0
7101ce188c  ldrb w9,[x8, #0x58]
7101ce1890  and w9,w9,#0xfe
7101ce1894  strb w9,[x8, #0x58]
7101ce1898  ldr x0,[x21]
7101ce189c  b 0x7101ce18a4
7101ce18a0  mov x0,xzr
7101ce18a4  mov w1,#0x1
7101ce18a8  bl 0x710377acb0
7101ce18ac  adrp x22,0x710523d000
7101ce18b0  add x22,x22,#0x9a8
7101ce18b4  stp x22,xzr,[sp]
7101ce18b8  cbz x21,0x7101ce18c4
7101ce18bc  mov x0,x21
7101ce18c0  bl 0x710392eb40
7101ce18c4  ldr x23,[x20, #0x310]
7101ce18c8  ldr x8,[x20, #0x318]
7101ce18cc  cmp x23,x8
7101ce18d0  b.eq 0x7101ce1904
7101ce18d4  sub x0,x8,#0x10
7101ce18d8  bl 0x710377b140
7101ce18dc  ldr x23,[x20, #0x310]
7101ce18e0  ldr x21,[x20, #0x318]
7101ce18e4  cmp x21,x23
7101ce18e8  b.eq 0x7101ce1904
7101ce18ec  ldr x8,[x21, #-0x10]!
7101ce18f0  ldr x8,[x8]
7101ce18f4  mov x0,x21
7101ce18f8  blr x8
7101ce18fc  cmp x23,x21
7101ce1900  b.ne 0x7101ce18ec
7101ce1904  str x23,[x20, #0x318]
7101ce1908  adrp x8,0x710532f000
7101ce190c  strh wzr,[sp, #0x18]
7101ce1910  ldr x8,[x8, #0x8f8]
7101ce1914  str wzr,[sp, #0x14]
7101ce1918  add x1,x20,#0x288
7101ce191c  strh wzr,[sp, #0x10]
7101ce1920  mov x2,sp
7101ce1924  stur xzr,[sp, #0x6d]
7101ce1928  str xzr,[sp, #0x58]
7101ce192c  stp xzr,xzr,[sp]
7101ce1930  stp xzr,xzr,[sp, #0x60]
7101ce1934  ldr x0,[x8, #0x8]
7101ce1938  bl 0x710334e560
7101ce193c  adrp x1,0x710435b000
7101ce1940  add x1,x1,#0x916
7101ce1944  sub x8,x29,#0x40
7101ce1948  mov x0,x19
7101ce194c  bl 0x7103776910
7101ce1950  ldr x8,[sp, #0x60]
7101ce1954  mov w9,#0x423f
7101ce1958  movk w9,#0xf, LSL #16
7101ce195c  cmp x8,x9
7101ce1960  csel w3,w8,w9,cc
7101ce1964  adrp x1,0x71042d6000
7101ce1968  add x1,x1,#0x3be
7101ce196c  sub x0,x29,#0x40
7101ce1970  mov w2,#0x1
7101ce1974  bl 0x710377a280
7101ce1978  ldur x0,[x29, #-0x38]
7101ce197c  stp x22,xzr,[x29, #-0x40]
7101ce1980  cbz x0,0x7101ce1988
7101ce1984  bl 0x710392eb40
7101ce1988  ldp x29,x30,[sp, #0xc0]
7101ce198c  ldr x23,[sp, #0x90]
7101ce1990  ldp x20,x19,[sp, #0xb0]
7101ce1994  ldp x22,x21,[sp, #0xa0]
7101ce1998  add sp,sp,#0xd0
7101ce199c  ret
