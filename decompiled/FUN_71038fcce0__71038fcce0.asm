// addr:      71038fcce0
// offset:    0x38fcce0
// name:      FUN_71038fcce0
// mangled:   
// size:      2368

71038fcce0  sub sp,sp,#0x80
71038fcce4  str x25,[sp, #0x30]
71038fcce8  stp x24,x23,[sp, #0x40]
71038fccec  stp x22,x21,[sp, #0x50]
71038fccf0  stp x20,x19,[sp, #0x60]
71038fccf4  stp x29,x30,[sp, #0x70]
71038fccf8  add x29,sp,#0x70
71038fccfc  ldr x8,[x1]
71038fcd00  ldr x9,[x8]
71038fcd04  sub x10,x9,#0x1
71038fcd08  str x10,[x8]
71038fcd0c  ldr x21,[x1]
71038fcd10  mov x20,x1
71038fcd14  mov x19,x0
71038fcd18  cbz x9,0x71038fcd30
71038fcd1c  ldr x8,[x21, #0x8]
71038fcd20  add x9,x8,#0x1
71038fcd24  str x9,[x21, #0x8]
71038fcd28  ldrb w21,[x8]
71038fcd2c  b 0x71038fcd68
71038fcd30  ldp x1,x0,[x21, #0x18]
71038fcd34  ldr x8,[x21, #0x10]
71038fcd38  add x2,sp,#0x8
71038fcd3c  blr x8
71038fcd40  ldr x8,[sp, #0x8]
71038fcd44  cmp x0,#0x0
71038fcd48  ccmp x8,#0x0,#0x4,ne
71038fcd4c  b.ne 0x71038fcd58
71038fcd50  mov w21,#0xffffffff
71038fcd54  b 0x71038fcd68
71038fcd58  sub x8,x8,#0x1
71038fcd5c  add x9,x0,#0x1
71038fcd60  stp x8,x9,[x21]
71038fcd64  ldrb w21,[x0]
71038fcd68  ldr x22,[x20, #0x50]
71038fcd6c  cmp w21,#0x1b
71038fcd70  b.ne 0x71038fcdb4
71038fcd74  cbz x22,0x71038fcd88
71038fcd78  mov w1,#0x62
71038fcd7c  mov x0,x22
71038fcd80  bl 0x71039c0080
71038fcd84  cbz x0,0x71038fd5e4
71038fcd88  ldr x8,[x20, #0x58]
71038fcd8c  ldrb w9,[x8]
71038fcd90  ldr x22,[x20]
71038fcd94  cmp w9,#0x1b
71038fcd98  b.eq 0x71038fcdec
71038fcd9c  cmp w9,#0x40
71038fcda0  b.eq 0x71038fcdac
71038fcda4  cmp w9,#0x3d
71038fcda8  b.ne 0x71038fcdf4
71038fcdac  add x8,x8,#0x1
71038fcdb0  b 0x71038fcdf4
71038fcdb4  cbz x22,0x71038fcdc8
71038fcdb8  mov w1,#0x74
71038fcdbc  mov x0,x22
71038fcdc0  bl 0x71039c0080
71038fcdc4  cbz x0,0x71038fd5f8
71038fcdc8  ldr x1,[x20]
71038fcdcc  ldr x4,[x20, #0x58]
71038fcdd0  add x2,x20,#0x8
71038fcdd4  add x3,x20,#0x20
71038fcdd8  mov x0,x19
71038fcddc  mov w5,w21
71038fcde0  bl 0x71039086e0
71038fcde4  mov x21,x0
71038fcde8  b 0x71038fd4c0
71038fcdec  adrp x8,0x7104421000
71038fcdf0  add x8,x8,#0x78
71038fcdf4  stp x22,x8,[sp, #0x10]
71038fcdf8  add x20,sp,#0x20
71038fcdfc  str x19,[sp, #0x8]
71038fce00  ldr x8,[x22]
71038fce04  orr w23,wzr,#0x3
71038fce08  cbz x8,0x71038fce14
71038fce0c  ldr x1,[x22, #0x8]
71038fce10  b 0x71038fce38
71038fce14  ldp x1,x0,[x22, #0x18]
71038fce18  ldr x8,[x22, #0x10]
71038fce1c  add x2,sp,#0x38
71038fce20  blr x8
71038fce24  cbz x0,0x71038fd4e4
71038fce28  ldr x8,[sp, #0x38]
71038fce2c  cbz x8,0x71038fd4e4
71038fce30  mov x1,x0
71038fce34  stp x8,x0,[x22]
71038fce38  cmp x23,x8
71038fce3c  csel x21,x8,x23,hi
71038fce40  mov x0,x20
71038fce44  mov x2,x21
71038fce48  bl 0x71039c00e0
71038fce4c  ldp x8,x9,[x22]
71038fce50  sub x8,x8,x21
71038fce54  add x9,x9,x21
71038fce58  add x20,x20,x21
71038fce5c  subs x23,x23,x21
71038fce60  stp x8,x9,[x22]
71038fce64  b.ne 0x71038fce08
71038fce68  adrp x0,0x71042f6000
71038fce6c  add x0,x0,#0x8fa
71038fce70  add x1,sp,#0x20
71038fce74  orr w2,wzr,#0x3
71038fce78  bl 0x71039c0250
71038fce7c  cbnz w0,0x71038fd4f4
71038fce80  ldr x22,[sp, #0x10]
71038fce84  ldr x8,[x22]
71038fce88  add x20,sp,#0x38
71038fce8c  mov w23,#0x1
71038fce90  cbz x8,0x71038fce9c
71038fce94  ldr x1,[x22, #0x8]
71038fce98  b 0x71038fcec0
71038fce9c  ldp x1,x0,[x22, #0x18]
71038fcea0  ldr x8,[x22, #0x10]
71038fcea4  add x2,sp,#0x20
71038fcea8  blr x8
71038fceac  cbz x0,0x71038fd4e4
71038fceb0  ldr x8,[sp, #0x20]
71038fceb4  cbz x8,0x71038fd4e4
71038fceb8  mov x1,x0
71038fcebc  stp x8,x0,[x22]
71038fcec0  cmp x23,x8
71038fcec4  csel x21,x8,x23,hi
71038fcec8  mov x0,x20
71038fcecc  mov x2,x21
71038fced0  bl 0x71039c00e0
71038fced4  ldp x8,x9,[x22]
71038fced8  sub x8,x8,x21
71038fcedc  add x9,x9,x21
71038fcee0  add x20,x20,x21
71038fcee4  subs x23,x23,x21
71038fcee8  stp x8,x9,[x22]
71038fceec  b.ne 0x71038fce90
71038fcef0  ldrb w8,[sp, #0x38]
71038fcef4  cmp w8,#0x53
71038fcef8  b.ne 0x71038fd504
71038fcefc  ldr x22,[sp, #0x10]
71038fcf00  ldr x8,[x22]
71038fcf04  add x20,sp,#0x38
71038fcf08  mov w23,#0x1
71038fcf0c  cbz x8,0x71038fcf18
71038fcf10  ldr x1,[x22, #0x8]
71038fcf14  b 0x71038fcf3c
71038fcf18  ldp x1,x0,[x22, #0x18]
71038fcf1c  ldr x8,[x22, #0x10]
71038fcf20  add x2,sp,#0x20
71038fcf24  blr x8
71038fcf28  cbz x0,0x71038fd4e4
71038fcf2c  ldr x8,[sp, #0x20]
71038fcf30  cbz x8,0x71038fd4e4
71038fcf34  mov x1,x0
71038fcf38  stp x8,x0,[x22]
71038fcf3c  cmp x23,x8
71038fcf40  csel x21,x8,x23,hi
71038fcf44  mov x0,x20
71038fcf48  mov x2,x21
71038fcf4c  bl 0x71039c00e0
71038fcf50  ldp x8,x9,[x22]
71038fcf54  sub x8,x8,x21
71038fcf58  add x9,x9,x21
71038fcf5c  add x20,x20,x21
71038fcf60  subs x23,x23,x21
71038fcf64  stp x8,x9,[x22]
71038fcf68  b.ne 0x71038fcf0c
71038fcf6c  ldrb w8,[sp, #0x38]
71038fcf70  cbnz w8,0x71038fd514
71038fcf74  ldr x22,[sp, #0x10]
71038fcf78  ldr x8,[x22]
71038fcf7c  add x20,sp,#0x20
71038fcf80  orr w23,wzr,#0x6
71038fcf84  cbz x8,0x71038fcf90
71038fcf88  ldr x1,[x22, #0x8]
71038fcf8c  b 0x71038fcfb4
71038fcf90  ldp x1,x0,[x22, #0x18]
71038fcf94  ldr x8,[x22, #0x10]
71038fcf98  add x2,sp,#0x38
71038fcf9c  blr x8
71038fcfa0  cbz x0,0x71038fd4e4
71038fcfa4  ldr x8,[sp, #0x38]
71038fcfa8  cbz x8,0x71038fd4e4
71038fcfac  mov x1,x0
71038fcfb0  stp x8,x0,[x22]
71038fcfb4  cmp x23,x8
71038fcfb8  csel x21,x8,x23,hi
71038fcfbc  mov x0,x20
71038fcfc0  mov x2,x21
71038fcfc4  bl 0x71039c00e0
71038fcfc8  ldp x8,x9,[x22]
71038fcfcc  sub x8,x8,x21
71038fcfd0  add x9,x9,x21
71038fcfd4  add x20,x20,x21
71038fcfd8  subs x23,x23,x21
71038fcfdc  stp x8,x9,[x22]
71038fcfe0  b.ne 0x71038fcf84
71038fcfe4  adrp x0,0x7104453000
71038fcfe8  add x0,x0,#0x653
71038fcfec  add x1,sp,#0x20
71038fcff0  orr w2,wzr,#0x6
71038fcff4  bl 0x71039c0250
71038fcff8  cbnz w0,0x71038fd524
71038fcffc  ldr x22,[sp, #0x10]
71038fd000  ldr x8,[x22]
71038fd004  add x20,sp,#0x38
71038fd008  mov w23,#0x1
71038fd00c  cbz x8,0x71038fd018
71038fd010  ldr x1,[x22, #0x8]
71038fd014  b 0x71038fd03c
71038fd018  ldp x1,x0,[x22, #0x18]
71038fd01c  ldr x8,[x22, #0x10]
71038fd020  add x2,sp,#0x20
71038fd024  blr x8
71038fd028  cbz x0,0x71038fd4e4
71038fd02c  ldr x8,[sp, #0x20]
71038fd030  cbz x8,0x71038fd4e4
71038fd034  mov x1,x0
71038fd038  stp x8,x0,[x22]
71038fd03c  cmp x23,x8
71038fd040  csel x21,x8,x23,hi
71038fd044  mov x0,x20
71038fd048  mov x2,x21
71038fd04c  bl 0x71039c00e0
71038fd050  ldp x8,x9,[x22]
71038fd054  sub x8,x8,x21
71038fd058  add x9,x9,x21
71038fd05c  add x20,x20,x21
71038fd060  subs x23,x23,x21
71038fd064  stp x8,x9,[x22]
71038fd068  b.ne 0x71038fd00c
71038fd06c  ldrb w8,[sp, #0x38]
71038fd070  cmp w8,#0x4
71038fd074  b.ne 0x71038fd534
71038fd078  ldr x22,[sp, #0x10]
71038fd07c  ldr x8,[x22]
71038fd080  add x20,sp,#0x38
71038fd084  mov w23,#0x1
71038fd088  cbz x8,0x71038fd094
71038fd08c  ldr x1,[x22, #0x8]
71038fd090  b 0x71038fd0b8
71038fd094  ldp x1,x0,[x22, #0x18]
71038fd098  ldr x8,[x22, #0x10]
71038fd09c  add x2,sp,#0x20
71038fd0a0  blr x8
71038fd0a4  cbz x0,0x71038fd4e4
71038fd0a8  ldr x8,[sp, #0x20]
71038fd0ac  cbz x8,0x71038fd4e4
71038fd0b0  mov x1,x0
71038fd0b4  stp x8,x0,[x22]
71038fd0b8  cmp x23,x8
71038fd0bc  csel x21,x8,x23,hi
71038fd0c0  mov x0,x20
71038fd0c4  mov x2,x21
71038fd0c8  bl 0x71039c00e0
71038fd0cc  ldp x8,x9,[x22]
71038fd0d0  sub x8,x8,x21
71038fd0d4  add x9,x9,x21
71038fd0d8  add x20,x20,x21
71038fd0dc  subs x23,x23,x21
71038fd0e0  stp x8,x9,[x22]
71038fd0e4  b.ne 0x71038fd088
71038fd0e8  ldrb w8,[sp, #0x38]
71038fd0ec  cmp w8,#0x8
71038fd0f0  b.ne 0x71038fd54c
71038fd0f4  ldr x22,[sp, #0x10]
71038fd0f8  ldr x8,[x22]
71038fd0fc  add x20,sp,#0x38
71038fd100  mov w23,#0x1
71038fd104  cbz x8,0x71038fd110
71038fd108  ldr x1,[x22, #0x8]
71038fd10c  b 0x71038fd134
71038fd110  ldp x1,x0,[x22, #0x18]
71038fd114  ldr x8,[x22, #0x10]
71038fd118  add x2,sp,#0x20
71038fd11c  blr x8
71038fd120  cbz x0,0x71038fd4e4
71038fd124  ldr x8,[sp, #0x20]
71038fd128  cbz x8,0x71038fd4e4
71038fd12c  mov x1,x0
71038fd130  stp x8,x0,[x22]
71038fd134  cmp x23,x8
71038fd138  csel x21,x8,x23,hi
71038fd13c  mov x0,x20
71038fd140  mov x2,x21
71038fd144  bl 0x71039c00e0
71038fd148  ldp x8,x9,[x22]
71038fd14c  sub x8,x8,x21
71038fd150  add x9,x9,x21
71038fd154  add x20,x20,x21
71038fd158  subs x23,x23,x21
71038fd15c  stp x8,x9,[x22]
71038fd160  b.ne 0x71038fd104
71038fd164  ldrb w8,[sp, #0x38]
71038fd168  cmp w8,#0x4
71038fd16c  b.ne 0x71038fd564
71038fd170  ldr x22,[sp, #0x10]
71038fd174  ldr x8,[x22]
71038fd178  add x20,sp,#0x38
71038fd17c  mov w23,#0x1
71038fd180  cbz x8,0x71038fd18c
71038fd184  ldr x1,[x22, #0x8]
71038fd188  b 0x71038fd1b0
71038fd18c  ldp x1,x0,[x22, #0x18]
71038fd190  ldr x8,[x22, #0x10]
71038fd194  add x2,sp,#0x20
71038fd198  blr x8
71038fd19c  cbz x0,0x71038fd4e4
71038fd1a0  ldr x8,[sp, #0x20]
71038fd1a4  cbz x8,0x71038fd4e4
71038fd1a8  mov x1,x0
71038fd1ac  stp x8,x0,[x22]
71038fd1b0  cmp x23,x8
71038fd1b4  csel x21,x8,x23,hi
71038fd1b8  mov x0,x20
71038fd1bc  mov x2,x21
71038fd1c0  bl 0x71039c00e0
71038fd1c4  ldp x8,x9,[x22]
71038fd1c8  sub x8,x8,x21
71038fd1cc  add x9,x9,x21
71038fd1d0  add x20,x20,x21
71038fd1d4  subs x23,x23,x21
71038fd1d8  stp x8,x9,[x22]
71038fd1dc  b.ne 0x71038fd180
71038fd1e0  ldrb w8,[sp, #0x38]
71038fd1e4  cmp w8,#0x8
71038fd1e8  b.ne 0x71038fd57c
71038fd1ec  ldr x22,[sp, #0x10]
71038fd1f0  ldr x8,[x22]
71038fd1f4  add x20,sp,#0x38
71038fd1f8  mov w23,#0x1
71038fd1fc  cbz x8,0x71038fd208
71038fd200  ldr x1,[x22, #0x8]
71038fd204  b 0x71038fd22c
71038fd208  ldp x1,x0,[x22, #0x18]
71038fd20c  ldr x8,[x22, #0x10]
71038fd210  add x2,sp,#0x20
71038fd214  blr x8
71038fd218  cbz x0,0x71038fd4e4
71038fd21c  ldr x8,[sp, #0x20]
71038fd220  cbz x8,0x71038fd4e4
71038fd224  mov x1,x0
71038fd228  stp x8,x0,[x22]
71038fd22c  cmp x23,x8
71038fd230  csel x21,x8,x23,hi
71038fd234  mov x0,x20
71038fd238  mov x2,x21
71038fd23c  bl 0x71039c00e0
71038fd240  ldp x8,x9,[x22]
71038fd244  sub x8,x8,x21
71038fd248  add x9,x9,x21
71038fd24c  add x20,x20,x21
71038fd250  subs x23,x23,x21
71038fd254  stp x8,x9,[x22]
71038fd258  b.ne 0x71038fd1fc
71038fd25c  ldrb w8,[sp, #0x38]
71038fd260  cmp w8,#0x4
71038fd264  b.ne 0x71038fd594
71038fd268  ldr x22,[sp, #0x10]
71038fd26c  ldr x8,[x22]
71038fd270  add x20,sp,#0x38
71038fd274  mov w23,#0x8
71038fd278  cbz x8,0x71038fd284
71038fd27c  ldr x1,[x22, #0x8]
71038fd280  b 0x71038fd2a8
71038fd284  ldp x1,x0,[x22, #0x18]
71038fd288  ldr x8,[x22, #0x10]
71038fd28c  add x2,sp,#0x20
71038fd290  blr x8
71038fd294  cbz x0,0x71038fd4e4
71038fd298  ldr x8,[sp, #0x20]
71038fd29c  cbz x8,0x71038fd4e4
71038fd2a0  mov x1,x0
71038fd2a4  stp x8,x0,[x22]
71038fd2a8  cmp x23,x8
71038fd2ac  csel x21,x8,x23,hi
71038fd2b0  mov x0,x20
71038fd2b4  mov x2,x21
71038fd2b8  bl 0x71039c00e0
71038fd2bc  ldp x8,x9,[x22]
71038fd2c0  sub x8,x8,x21
71038fd2c4  add x9,x9,x21
71038fd2c8  add x20,x20,x21
71038fd2cc  subs x23,x23,x21
71038fd2d0  stp x8,x9,[x22]
71038fd2d4  b.ne 0x71038fd278
71038fd2d8  ldr x8,[sp, #0x38]
71038fd2dc  mov w9,#0x5678
71038fd2e0  cmp x8,x9
71038fd2e4  b.ne 0x71038fd5b8
71038fd2e8  ldr x22,[sp, #0x10]
71038fd2ec  ldr x8,[x22]
71038fd2f0  add x20,sp,#0x38
71038fd2f4  mov w23,#0x4
71038fd2f8  cbz x8,0x71038fd304
71038fd2fc  ldr x1,[x22, #0x8]
71038fd300  b 0x71038fd328
71038fd304  ldp x1,x0,[x22, #0x18]
71038fd308  ldr x8,[x22, #0x10]
71038fd30c  add x2,sp,#0x20
71038fd310  blr x8
71038fd314  cbz x0,0x71038fd4e4
71038fd318  ldr x8,[sp, #0x20]
71038fd31c  cbz x8,0x71038fd4e4
71038fd320  mov x1,x0
71038fd324  stp x8,x0,[x22]
71038fd328  cmp x23,x8
71038fd32c  csel x21,x8,x23,hi
71038fd330  mov x0,x20
71038fd334  mov x2,x21
71038fd338  bl 0x71039c00e0
71038fd33c  ldp x8,x9,[x22]
71038fd340  sub x8,x8,x21
71038fd344  add x9,x9,x21
71038fd348  add x20,x20,x21
71038fd34c  subs x23,x23,x21
71038fd350  stp x8,x9,[x22]
71038fd354  b.ne 0x71038fd2f8
71038fd358  adrp x8,0x7104473000
71038fd35c  ldr s0,[sp, #0x38]
71038fd360  ldr s1,[x8, #0x810]
71038fd364  fcmp s0,s1
71038fd368  b.ne 0x71038fd5c8
71038fd36c  ldr x22,[sp, #0x10]
71038fd370  ldr x8,[x22]
71038fd374  add x20,sp,#0x38
71038fd378  mov w23,#0x1
71038fd37c  cbz x8,0x71038fd388
71038fd380  ldr x1,[x22, #0x8]
71038fd384  b 0x71038fd3ac
71038fd388  ldp x1,x0,[x22, #0x18]
71038fd38c  ldr x8,[x22, #0x10]
71038fd390  add x2,sp,#0x20
71038fd394  blr x8
71038fd398  cbz x0,0x71038fd4e4
71038fd39c  ldr x8,[sp, #0x20]
71038fd3a0  cbz x8,0x71038fd4e4
71038fd3a4  mov x1,x0
71038fd3a8  stp x8,x0,[x22]
71038fd3ac  cmp x23,x8
71038fd3b0  csel x21,x8,x23,hi
71038fd3b4  mov x0,x20
71038fd3b8  mov x2,x21
71038fd3bc  bl 0x71039c00e0
71038fd3c0  ldp x8,x9,[x22]
71038fd3c4  sub x8,x8,x21
71038fd3c8  add x9,x9,x21
71038fd3cc  add x20,x20,x21
71038fd3d0  subs x23,x23,x21
71038fd3d4  stp x8,x9,[x22]
71038fd3d8  b.ne 0x71038fd37c
71038fd3dc  ldr x24,[x19, #0x18]
71038fd3e0  ldrb w23,[sp, #0x38]
71038fd3e4  orr w2,wzr,#0x6
71038fd3e8  ldp x8,x0,[x24]
71038fd3ec  lsl x20,x23,#0x3
71038fd3f0  add x22,x20,#0x20
71038fd3f4  mov x1,xzr
71038fd3f8  mov x3,x22
71038fd3fc  orr w25,wzr,#0x6
71038fd400  blr x8
71038fd404  mov x21,x0
71038fd408  cbnz x0,0x71038fd43c
71038fd40c  ldr x8,[x24, #0xd0]
71038fd410  cbz x8,0x71038fd5d8
71038fd414  mov w1,#0x1
71038fd418  mov x0,x19
71038fd41c  bl 0x71039004f0
71038fd420  ldp x8,x0,[x24]
71038fd424  orr w2,wzr,#0x6
71038fd428  mov x1,xzr
71038fd42c  mov x3,x22
71038fd430  blr x8
71038fd434  mov x21,x0
71038fd438  cbz x0,0x71038fd5d8
71038fd43c  ldr x9,[x24, #0x18]
71038fd440  ldrb w10,[x24, #0x54]
71038fd444  add x9,x9,x22
71038fd448  and w10,w10,#0x3
71038fd44c  str x9,[x24, #0x18]
71038fd450  strb w10,[x21, #0x9]
71038fd454  strb w25,[x21, #0x8]
71038fd458  ldr x9,[x24, #0x58]
71038fd45c  mov x8,x21
71038fd460  str x9,[x21]
71038fd464  str x21,[x24, #0x58]
71038fd468  str xzr,[x8, #0x18]!
71038fd46c  sturb w23,[x8, #-0xe]
71038fd470  cbz w23,0x71038fd48c
71038fd474  sub w9,w23,#0x1
71038fd478  sub x9,x23,x9
71038fd47c  add x0,x8,x9, LSL #0x3
71038fd480  mov w1,wzr
71038fd484  mov x2,x20
71038fd488  bl 0x71039c02a0
71038fd48c  ldr x8,[x19, #0x10]
71038fd490  mov w9,#0x46
71038fd494  mov x0,x19
71038fd498  str x21,[x8]
71038fd49c  str w9,[x8, #0x8]
71038fd4a0  bl 0x71038fb6f0
71038fd4a4  mov x0,x19
71038fd4a8  bl 0x71038fe0c0
71038fd4ac  mov x1,x0
71038fd4b0  str x0,[x21, #0x18]
71038fd4b4  add x0,sp,#0x8
71038fd4b8  mov x2,xzr
71038fd4bc  bl 0x7103920530
71038fd4c0  mov x0,x19
71038fd4c4  mov x1,x21
71038fd4c8  ldr x25,[sp, #0x30]
71038fd4cc  ldp x29,x30,[sp, #0x70]
71038fd4d0  ldp x20,x19,[sp, #0x60]
71038fd4d4  ldp x22,x21,[sp, #0x50]
71038fd4d8  ldp x24,x23,[sp, #0x40]
71038fd4dc  add sp,sp,#0x80
71038fd4e0  b 0x71038fdf10
71038fd4e4  adrp x1,0x710439b000
71038fd4e8  add x1,x1,#0xe4a
71038fd4ec  add x0,sp,#0x8
71038fd4f0  bl 0x71039204f0
71038fd4f4  adrp x1,0x7104307000
71038fd4f8  add x1,x1,#0x242
71038fd4fc  add x0,sp,#0x8
71038fd500  bl 0x71039204f0
71038fd504  adrp x1,0x71042b2000
71038fd508  add x1,x1,#0xd01
71038fd50c  add x0,sp,#0x8
71038fd510  bl 0x71039204f0
71038fd514  adrp x1,0x71043de000
71038fd518  add x1,x1,#0xe22
71038fd51c  add x0,sp,#0x8
71038fd520  bl 0x71039204f0
71038fd524  adrp x1,0x71042a1000
71038fd528  add x1,x1,#0xcdd
71038fd52c  add x0,sp,#0x8
71038fd530  bl 0x71039204f0
71038fd534  ldr x0,[sp, #0x8]
71038fd538  adrp x1,0x71042c3000
71038fd53c  add x1,x1,#0xa1a
71038fd540  adrp x2,0x71042e5000
71038fd544  add x2,x2,#0xdbb
71038fd548  b 0x71038fd5a8
71038fd54c  ldr x0,[sp, #0x8]
71038fd550  adrp x1,0x71042c3000
71038fd554  add x1,x1,#0xa1a
71038fd558  adrp x2,0x710437b000
71038fd55c  add x2,x2,#0x32c
71038fd560  b 0x71038fd5a8
71038fd564  ldr x0,[sp, #0x8]
71038fd568  adrp x1,0x71042c3000
71038fd56c  add x1,x1,#0xa1a
71038fd570  adrp x2,0x710425e000
71038fd574  add x2,x2,#0x43
71038fd578  b 0x71038fd5a8
71038fd57c  ldr x0,[sp, #0x8]
71038fd580  adrp x1,0x71042c3000
71038fd584  add x1,x1,#0xa1a
71038fd588  adrp x2,0x7104453000
71038fd58c  add x2,x2,#0x65a
71038fd590  b 0x71038fd5a8
71038fd594  ldr x0,[sp, #0x8]
71038fd598  adrp x1,0x71042c3000
71038fd59c  add x1,x1,#0xa1a
71038fd5a0  adrp x2,0x710427f000
71038fd5a4  add x2,x2,#0x6c8
71038fd5a8  bl 0x7103908660
71038fd5ac  mov x1,x0
71038fd5b0  add x0,sp,#0x8
71038fd5b4  bl 0x71039204f0
71038fd5b8  adrp x1,0x71042b2000
71038fd5bc  add x1,x1,#0xd15
71038fd5c0  add x0,sp,#0x8
71038fd5c4  bl 0x71039204f0
71038fd5c8  adrp x1,0x710437b000
71038fd5cc  add x1,x1,#0x333
71038fd5d0  add x0,sp,#0x8
71038fd5d4  bl 0x71039204f0
71038fd5d8  mov w1,#0x4
71038fd5dc  mov x0,x19
71038fd5e0  bl 0x71038fb3c0
71038fd5e4  adrp x1,0x71042c3000
71038fd5e8  add x1,x1,#0x987
71038fd5ec  adrp x2,0x71043ef000
71038fd5f0  add x2,x2,#0x47f
71038fd5f4  b 0x71038fd608
71038fd5f8  adrp x1,0x71042c3000
71038fd5fc  add x1,x1,#0x987
71038fd600  adrp x2,0x71043de000
71038fd604  add x2,x2,#0xd03
71038fd608  mov x0,x19
71038fd60c  mov x3,x22
71038fd610  bl 0x7103908660
71038fd614  orr w1,wzr,#0x3
71038fd618  mov x0,x19
71038fd61c  bl 0x71038fb3c0
