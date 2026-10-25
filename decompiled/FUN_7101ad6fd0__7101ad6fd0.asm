// addr:      7101ad6fd0
// offset:    0x1ad6fd0
// name:      FUN_7101ad6fd0
// mangled:   
// size:      1336

7101ad6fd0  str x28,[sp, #-0x40]!
7101ad6fd4  stp x22,x21,[sp, #0x10]
7101ad6fd8  stp x20,x19,[sp, #0x20]
7101ad6fdc  stp x29,x30,[sp, #0x30]
7101ad6fe0  add x29,sp,#0x30
7101ad6fe4  sub sp,sp,#0x3c0
7101ad6fe8  adrp x8,0x710532f000
7101ad6fec  ldr x20,[x8, #0x7e8]
7101ad6ff0  ldr x8,[x20, #0x8]
7101ad6ff4  ldr w10,[x0, #0x164]
7101ad6ff8  ldrb w9,[x8, #0x161]
7101ad6ffc  cbz w10,0x7101ad7054
7101ad7000  cbz w9,0x7101ad74ec
7101ad7004  ldr w8,[x8, #0xe8]
7101ad7008  cmp w8,#0x2
7101ad700c  b.ne 0x7101ad74ec
7101ad7010  adrp x8,0x7105314000
7101ad7014  ldr x8,[x8, #0x508]
7101ad7018  ldr x8,[x8]
7101ad701c  mov w9,#0x4dd8
7101ad7020  movk w9,#0x5b, LSL #16
7101ad7024  add x20,x8,x9
7101ad7028  mov w9,#0x4de8
7101ad702c  movk w9,#0x5b, LSL #16
7101ad7030  add x21,x8,x9
7101ad7034  ldr x8,[x21]
7101ad7038  mov x19,x0
7101ad703c  cbz x8,0x7101ad7104
7101ad7040  ldr x8,[x20]
7101ad7044  ldrb w9,[x8, #0x10]
7101ad7048  and w9,w9,#0x1
7101ad704c  strb w9,[x8, #0x10]
7101ad7050  b 0x7101ad717c
7101ad7054  cbz w9,0x7101ad74ec
7101ad7058  adrp x8,0x710532f000
7101ad705c  ldr x8,[x8, #0x730]
7101ad7060  ldr x8,[x8, #0x8]
7101ad7064  mov x2,#0x2988
7101ad7068  movk x2,#0x295f, LSL #16
7101ad706c  movk x2,#0xff18, LSL #32
7101ad7070  movk x2,#0xc1ff, LSL #48
7101ad7074  add x1,x8,#0x2f0
7101ad7078  add x0,sp,#0x1e0
7101ad707c  bl 0x71032933e0
7101ad7080  ldr x8,[x20, #0x8]
7101ad7084  mov w9,#0x1
7101ad7088  str w9,[x8, #0xf8]
7101ad708c  ldr x8,[x20, #0x8]
7101ad7090  ldp x10,x11,[sp, #0x1e0]
7101ad7094  ldp x12,x13,[sp, #0x1f0]
7101ad7098  stp x12,x13,[x8, #0x110]
7101ad709c  stp x10,x11,[x8, #0x100]
7101ad70a0  ldr x8,[x20, #0x8]
7101ad70a4  strh w9,[x8, #0x120]
7101ad70a8  strb wzr,[x8, #0x122]
7101ad70ac  str wzr,[x8, #0x124]
7101ad70b0  strb wzr,[x8, #0x128]
7101ad70b4  ldr x8,[x20, #0x8]
7101ad70b8  ldrb w9,[x8, #0x161]
7101ad70bc  cbz w9,0x7101ad74ec
7101ad70c0  ldrsw x9,[x8, #0xe4]
7101ad70c4  cmp w9,#0x13
7101ad70c8  b.cs 0x7101ad7504
7101ad70cc  add x9,x8,x9, LSL #0x2
7101ad70d0  mov w10,#0x5
7101ad70d4  str w10,[x9, #0x98]
7101ad70d8  ldr w9,[x8, #0xe4]
7101ad70dc  cmp w9,#0x11
7101ad70e0  b.gt 0x7101ad74ec
7101ad70e4  add w9,w9,#0x1
7101ad70e8  cmp w9,#0x13
7101ad70ec  str w9,[x8, #0xe4]
7101ad70f0  b.cs 0x7101ad7504
7101ad70f4  add x8,x8,w9, SXTW  #0x2
7101ad70f8  orr w9,wzr,#0x3
7101ad70fc  str w9,[x8, #0x98]
7101ad7100  b 0x7101ad74ec
7101ad7104  mov w0,#0x10
7101ad7108  orr w1,wzr,#0x18
7101ad710c  bl 0x710392e290
7101ad7110  cbnz x0,0x7101ad7158
7101ad7114  adrp x8,0x7105332000
7101ad7118  ldr x0,[x8, #0xf00]
7101ad711c  cbz x0,0x7101ad7154
7101ad7120  orr w8,wzr,#0x18
7101ad7124  str wzr,[sp]
7101ad7128  mov x1,sp
7101ad712c  str x8,[sp, #0x1e0]
7101ad7130  ldr x8,[x0]
7101ad7134  ldr x8,[x8, #0x30]
7101ad7138  add x2,sp,#0x1e0
7101ad713c  blr x8
7101ad7140  tbz w0,#0x0,0x7101ad7154
7101ad7144  mov w0,#0x10
7101ad7148  orr w1,wzr,#0x18
7101ad714c  bl 0x710392e290
7101ad7150  cbnz x0,0x7101ad7158
7101ad7154  mov x0,xzr
7101ad7158  strb wzr,[x0, #0x10]
7101ad715c  str x20,[x0, #0x8]
7101ad7160  ldr x8,[x20]
7101ad7164  str x8,[x0]
7101ad7168  str x0,[x8, #0x8]
7101ad716c  str x0,[x20]
7101ad7170  ldr x8,[x21]
7101ad7174  add x8,x8,#0x1
7101ad7178  str x8,[x21]
7101ad717c  ldrsw x8,[x19, #0x15c]
7101ad7180  cmp w8,#0x13
7101ad7184  b.cs 0x7101ad7504
7101ad7188  add x8,x19,x8, LSL #0x2
7101ad718c  add x21,x19,#0x1a0
7101ad7190  mov w20,#0x5
7101ad7194  add x0,sp,#0x1e0
7101ad7198  orr w2,wzr,#0x1e0
7101ad719c  mov x1,x21
7101ad71a0  mov x22,#-0x3f00000000000000
7101ad71a4  str w20,[x8, #0x110]
7101ad71a8  bl 0x71039c00e0
7101ad71ac  mov x0,sp
7101ad71b0  bl 0x710338e8d0
7101ad71b4  mov x1,sp
7101ad71b8  orr w2,wzr,#0x1e0
7101ad71bc  mov x0,x21
7101ad71c0  bl 0x71039c00e0
7101ad71c4  mov w0,w20
7101ad71c8  bl 0x710338ef40
7101ad71cc  add x1,sp,#0x1e0
7101ad71d0  mov x0,x19
7101ad71d4  mov x2,x21
7101ad71d8  bl 0x7101ad7730
7101ad71dc  ldr x8,[x19, #0x1a0]
7101ad71e0  and x9,x8,#-0x100000000000000
7101ad71e4  cmp x9,x22
7101ad71e8  b.ne 0x7101ad71f4
7101ad71ec  and x8,x8,#0xffffffffff
7101ad71f0  cbnz x8,0x7101ad71fc
7101ad71f4  ldrb w8,[x19, #0x1c8]
7101ad71f8  cbz w8,0x7101ad73d8
7101ad71fc  mov w3,#0x1
7101ad7200  ldr x8,[x19, #0x1d0]
7101ad7204  and x9,x8,#-0x100000000000000
7101ad7208  cmp x9,x22
7101ad720c  b.ne 0x7101ad7218
7101ad7210  and x8,x8,#0xffffffffff
7101ad7214  cbnz x8,0x7101ad7220
7101ad7218  ldrb w8,[x19, #0x1f8]
7101ad721c  cbz w8,0x7101ad7224
7101ad7220  add w3,w3,#0x1
7101ad7224  ldr x8,[x19, #0x200]
7101ad7228  and x9,x8,#-0x100000000000000
7101ad722c  cmp x9,x22
7101ad7230  b.ne 0x7101ad723c
7101ad7234  and x8,x8,#0xffffffffff
7101ad7238  cbnz x8,0x7101ad7244
7101ad723c  ldrb w8,[x19, #0x228]
7101ad7240  cbz w8,0x7101ad7248
7101ad7244  add w3,w3,#0x1
7101ad7248  ldr x8,[x19, #0x230]
7101ad724c  and x9,x8,#-0x100000000000000
7101ad7250  cmp x9,x22
7101ad7254  b.ne 0x7101ad7260
7101ad7258  and x8,x8,#0xffffffffff
7101ad725c  cbnz x8,0x7101ad7268
7101ad7260  ldrb w8,[x19, #0x258]
7101ad7264  cbz w8,0x7101ad726c
7101ad7268  add w3,w3,#0x1
7101ad726c  ldr x8,[x19, #0x260]
7101ad7270  and x9,x8,#-0x100000000000000
7101ad7274  cmp x9,x22
7101ad7278  b.ne 0x7101ad7284
7101ad727c  and x8,x8,#0xffffffffff
7101ad7280  cbnz x8,0x7101ad728c
7101ad7284  ldrb w8,[x19, #0x288]
7101ad7288  cbz w8,0x7101ad7290
7101ad728c  add w3,w3,#0x1
7101ad7290  ldr x8,[x19, #0x290]
7101ad7294  and x9,x8,#-0x100000000000000
7101ad7298  cmp x9,x22
7101ad729c  b.ne 0x7101ad72a8
7101ad72a0  and x8,x8,#0xffffffffff
7101ad72a4  cbnz x8,0x7101ad72b0
7101ad72a8  ldrb w8,[x19, #0x2b8]
7101ad72ac  cbz w8,0x7101ad72b4
7101ad72b0  add w3,w3,#0x1
7101ad72b4  ldr x8,[x19, #0x2c0]
7101ad72b8  and x9,x8,#-0x100000000000000
7101ad72bc  cmp x9,x22
7101ad72c0  b.ne 0x7101ad72cc
7101ad72c4  and x8,x8,#0xffffffffff
7101ad72c8  cbnz x8,0x7101ad72d4
7101ad72cc  ldrb w8,[x19, #0x2e8]
7101ad72d0  cbz w8,0x7101ad72d8
7101ad72d4  add w3,w3,#0x1
7101ad72d8  ldr x8,[x19, #0x2f0]
7101ad72dc  and x9,x8,#-0x100000000000000
7101ad72e0  cmp x9,x22
7101ad72e4  b.ne 0x7101ad72f0
7101ad72e8  and x8,x8,#0xffffffffff
7101ad72ec  cbnz x8,0x7101ad72f8
7101ad72f0  ldrb w8,[x19, #0x318]
7101ad72f4  cbz w8,0x7101ad72fc
7101ad72f8  add w3,w3,#0x1
7101ad72fc  ldr x8,[x19, #0x320]
7101ad7300  and x9,x8,#-0x100000000000000
7101ad7304  cmp x9,x22
7101ad7308  b.ne 0x7101ad7314
7101ad730c  and x8,x8,#0xffffffffff
7101ad7310  cbnz x8,0x7101ad731c
7101ad7314  ldrb w8,[x19, #0x348]
7101ad7318  cbz w8,0x7101ad7320
7101ad731c  add w3,w3,#0x1
7101ad7320  ldr x8,[x19, #0x350]
7101ad7324  and x9,x8,#-0x100000000000000
7101ad7328  cmp x9,x22
7101ad732c  b.ne 0x7101ad7338
7101ad7330  and x8,x8,#0xffffffffff
7101ad7334  cbnz x8,0x7101ad7340
7101ad7338  ldrb w8,[x19, #0x378]
7101ad733c  cbz w8,0x7101ad7344
7101ad7340  add w3,w3,#0x1
7101ad7344  ldr x8,[x19, #0x40]
7101ad7348  ldr x0,[x8]
7101ad734c  adrp x1,0x7104308000
7101ad7350  add x1,x1,#0x8d
7101ad7354  adrp x2,0x71042b2000
7101ad7358  add x2,x2,#0xa84
7101ad735c  bl 0x7103375650
7101ad7360  ldr x20,[x19, #0x40]
7101ad7364  ldr x8,[x20]
7101ad7368  ldr x21,[x8]
7101ad736c  str wzr,[x8, #0x10]
7101ad7370  ldr x8,[x21, #0x10]
7101ad7374  mov w9,#0x48
7101ad7378  str x21,[x8]
7101ad737c  str w9,[x8, #0x8]
7101ad7380  ldp x9,x8,[x21, #0x10]
7101ad7384  add x10,x9,#0x10
7101ad7388  str x10,[x21, #0x10]
7101ad738c  ldr x10,[x8, #0xc8]
7101ad7390  str x9,[x21, #0x10]
7101ad7394  cmp x10,x21
7101ad7398  b.eq 0x7101ad73bc
7101ad739c  adrp x1,0x7104280000
7101ad73a0  add x1,x1,#0x546
7101ad73a4  mov x0,x21
7101ad73a8  bl 0x71038f4b20
7101ad73ac  orr w1,wzr,#0xfffffffe
7101ad73b0  mov x0,x21
7101ad73b4  bl 0x71038f4fc0
7101ad73b8  b 0x7101ad743c
7101ad73bc  ldr x8,[x8, #0x40]
7101ad73c0  ldr w9,[x8, #0xc]
7101ad73c4  cmp w9,#0x2
7101ad73c8  b.cc 0x7101ad73e0
7101ad73cc  ldr x8,[x8, #0x10]
7101ad73d0  add x1,x8,#0x10
7101ad73d4  b 0x7101ad742c
7101ad73d8  mov w3,wzr
7101ad73dc  b 0x7101ad7200
7101ad73e0  ldr x9,[x8, #0x18]
7101ad73e4  ldrb w8,[x8, #0xb]
7101ad73e8  mov w10,#0xffffffff
7101ad73ec  lsl x8,x10,x8
7101ad73f0  mvn w8,w8
7101ad73f4  and x8,x8,#0x2
7101ad73f8  add x1,x9,x8, LSL #0x5
7101ad73fc  adrp x8,0x7104862000
7101ad7400  add x8,x8,#0x960
7101ad7404  ldr w9,[x1, #0x18]
7101ad7408  cmp w9,#0x13
7101ad740c  b.ne 0x7101ad741c
7101ad7410  ldr x9,[x1, #0x10]
7101ad7414  cmp x9,#0x2
7101ad7418  b.eq 0x7101ad742c
7101ad741c  ldrsw x9,[x1, #0x1c]
7101ad7420  add x1,x1,x9, LSL #0x5
7101ad7424  cbnz w9,0x7101ad7404
7101ad7428  mov x1,x8
7101ad742c  adrp x2,0x7104280000
7101ad7430  add x2,x2,#0x546
7101ad7434  mov x0,x21
7101ad7438  bl 0x71038f4d40
7101ad743c  ldr x9,[x21, #0x10]
7101ad7440  sub x8,x9,#0x10
7101ad7444  adrp x10,0x7104862000
7101ad7448  add x10,x10,#0x960
7101ad744c  cmp x8,x10
7101ad7450  b.eq 0x7101ad7474
7101ad7454  ldur w9,[x9, #-0x8]
7101ad7458  and w9,w9,#0xf
7101ad745c  cmp w9,#0x6
7101ad7460  b.ne 0x7101ad7474
7101ad7464  mov x0,x20
7101ad7468  mov w1,wzr
7101ad746c  bl 0x7103377130
7101ad7470  b 0x7101ad7478
7101ad7474  str x8,[x21, #0x10]
7101ad7478  ldr x0,[x19, #0x170]
7101ad747c  mov x8,#0xff0000000000
7101ad7480  movk x8,#0xc1ff, LSL #48
7101ad7484  stp xzr,xzr,[sp, #0x10]
7101ad7488  str x8,[sp]
7101ad748c  orr w8,wzr,#0xff
7101ad7490  mov x1,sp
7101ad7494  strb w8,[sp, #0x8]
7101ad7498  bl 0x710338fa90
7101ad749c  ldr w8,[x19, #0x15c]
7101ad74a0  cmp w8,#0x11
7101ad74a4  b.gt 0x7101ad74ec
7101ad74a8  add w8,w8,#0x1
7101ad74ac  cmp w8,#0x13
7101ad74b0  str w8,[x19, #0x15c]
7101ad74b4  b.cs 0x7101ad7504
7101ad74b8  add x8,x19,w8, SXTW  #0x2
7101ad74bc  mov w9,#0x4
7101ad74c0  str w9,[x8, #0x110]
7101ad74c4  ldr w8,[x19, #0x15c]
7101ad74c8  cmp w8,#0x11
7101ad74cc  b.gt 0x7101ad74ec
7101ad74d0  add w8,w8,#0x1
7101ad74d4  cmp w8,#0x13
7101ad74d8  str w8,[x19, #0x15c]
7101ad74dc  b.cs 0x7101ad7504
7101ad74e0  add x8,x19,w8, SXTW  #0x2
7101ad74e4  mov w9,#0x2
7101ad74e8  str w9,[x8, #0x110]
7101ad74ec  add sp,sp,#0x3c0
7101ad74f0  ldp x29,x30,[sp, #0x30]
7101ad74f4  ldp x20,x19,[sp, #0x20]
7101ad74f8  ldp x22,x21,[sp, #0x10]
7101ad74fc  ldr x28,[sp], #0x40
7101ad7500  ret
7101ad7504  bl 0x71039c2650
