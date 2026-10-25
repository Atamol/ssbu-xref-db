// addr:      7101de6e40
// offset:    0x1de6e40
// name:      FUN_7101de6e40
// mangled:   
// size:      1792

7101de6e40  sub sp,sp,#0x50
7101de6e44  stp x24,x23,[sp, #0x10]
7101de6e48  stp x22,x21,[sp, #0x20]
7101de6e4c  stp x20,x19,[sp, #0x30]
7101de6e50  stp x29,x30,[sp, #0x40]
7101de6e54  add x29,sp,#0x40
7101de6e58  ldr x23,[x0, #0x80]
7101de6e5c  ldr x8,[x23, #0x50]
7101de6e60  mov x19,x0
7101de6e64  ldr x0,[x8]
7101de6e68  mov w20,w1
7101de6e6c  mov w2,#0x100a
7101de6e70  mov w1,wzr
7101de6e74  bl 0x7103775dc0
7101de6e78  mov w8,#0x1
7101de6e7c  add x21,x23,#0x58
7101de6e80  adrp x1,0x71042b4000
7101de6e84  add x1,x1,#0x824
7101de6e88  str w8,[x23, #0x68]
7101de6e8c  mov x8,sp
7101de6e90  mov x0,x21
7101de6e94  mov w2,wzr
7101de6e98  bl 0x7103776640
7101de6e9c  mov x0,sp
7101de6ea0  bl 0x71025ae390
7101de6ea4  ldr x22,[sp, #0x8]
7101de6ea8  ldr x8,[x22, #0x8]
7101de6eac  cbz x8,0x7101de6ec4
7101de6eb0  ldr x8,[x8, #0x18]
7101de6eb4  cbz x8,0x7101de6ec4
7101de6eb8  ldrb w9,[x8, #0x58]
7101de6ebc  and w9,w9,#0xfe
7101de6ec0  strb w9,[x8, #0x58]
7101de6ec4  adrp x24,0x710523d000
7101de6ec8  add x24,x24,#0x988
7101de6ecc  stp x24,xzr,[sp]
7101de6ed0  cbz x22,0x7101de6ef4
7101de6ed4  ldr x0,[x22, #0x18]
7101de6ed8  adrp x8,0x710523d000
7101de6edc  add x8,x8,#0x9a8
7101de6ee0  stp x8,xzr,[x22, #0x10]
7101de6ee4  cbz x0,0x7101de6eec
7101de6ee8  bl 0x710392eb40
7101de6eec  mov x0,x22
7101de6ef0  bl 0x710392eb40
7101de6ef4  adrp x1,0x71042b4000
7101de6ef8  add x1,x1,#0x824
7101de6efc  mov x8,sp
7101de6f00  mov w2,#0x1
7101de6f04  mov x0,x21
7101de6f08  bl 0x7103776640
7101de6f0c  mov x0,sp
7101de6f10  bl 0x71025ae390
7101de6f14  ldr x22,[sp, #0x8]
7101de6f18  ldr x8,[x22, #0x8]
7101de6f1c  cbz x8,0x7101de6f34
7101de6f20  ldr x8,[x8, #0x18]
7101de6f24  cbz x8,0x7101de6f34
7101de6f28  ldrb w9,[x8, #0x58]
7101de6f2c  and w9,w9,#0xfe
7101de6f30  strb w9,[x8, #0x58]
7101de6f34  stp x24,xzr,[sp]
7101de6f38  cbz x22,0x7101de6f5c
7101de6f3c  ldr x0,[x22, #0x18]
7101de6f40  adrp x8,0x710523d000
7101de6f44  add x8,x8,#0x9a8
7101de6f48  stp x8,xzr,[x22, #0x10]
7101de6f4c  cbz x0,0x7101de6f54
7101de6f50  bl 0x710392eb40
7101de6f54  mov x0,x22
7101de6f58  bl 0x710392eb40
7101de6f5c  adrp x1,0x71042b4000
7101de6f60  add x1,x1,#0x824
7101de6f64  mov x8,sp
7101de6f68  mov w2,#0x2
7101de6f6c  mov x0,x21
7101de6f70  bl 0x7103776640
7101de6f74  mov x0,sp
7101de6f78  bl 0x71025ae390
7101de6f7c  ldr x22,[sp, #0x8]
7101de6f80  ldr x8,[x22, #0x8]
7101de6f84  cbz x8,0x7101de6f9c
7101de6f88  ldr x8,[x8, #0x18]
7101de6f8c  cbz x8,0x7101de6f9c
7101de6f90  ldrb w9,[x8, #0x58]
7101de6f94  and w9,w9,#0xfe
7101de6f98  strb w9,[x8, #0x58]
7101de6f9c  stp x24,xzr,[sp]
7101de6fa0  cbz x22,0x7101de6fc4
7101de6fa4  ldr x0,[x22, #0x18]
7101de6fa8  adrp x8,0x710523d000
7101de6fac  add x8,x8,#0x9a8
7101de6fb0  stp x8,xzr,[x22, #0x10]
7101de6fb4  cbz x0,0x7101de6fbc
7101de6fb8  bl 0x710392eb40
7101de6fbc  mov x0,x22
7101de6fc0  bl 0x710392eb40
7101de6fc4  adrp x1,0x71042b4000
7101de6fc8  add x1,x1,#0x824
7101de6fcc  mov x8,sp
7101de6fd0  orr w2,wzr,#0x3
7101de6fd4  mov x0,x21
7101de6fd8  bl 0x7103776640
7101de6fdc  mov x0,sp
7101de6fe0  bl 0x71025ae390
7101de6fe4  ldr x22,[sp, #0x8]
7101de6fe8  ldr x8,[x22, #0x8]
7101de6fec  cbz x8,0x7101de7004
7101de6ff0  ldr x8,[x8, #0x18]
7101de6ff4  cbz x8,0x7101de7004
7101de6ff8  ldrb w9,[x8, #0x58]
7101de6ffc  and w9,w9,#0xfe
7101de7000  strb w9,[x8, #0x58]
7101de7004  stp x24,xzr,[sp]
7101de7008  cbz x22,0x7101de702c
7101de700c  ldr x0,[x22, #0x18]
7101de7010  adrp x8,0x710523d000
7101de7014  add x8,x8,#0x9a8
7101de7018  stp x8,xzr,[x22, #0x10]
7101de701c  cbz x0,0x7101de7024
7101de7020  bl 0x710392eb40
7101de7024  mov x0,x22
7101de7028  bl 0x710392eb40
7101de702c  adrp x1,0x71042b4000
7101de7030  add x1,x1,#0x824
7101de7034  mov x8,sp
7101de7038  mov w2,#0x4
7101de703c  mov x0,x21
7101de7040  bl 0x7103776640
7101de7044  mov x0,sp
7101de7048  bl 0x71025ae390
7101de704c  ldr x22,[sp, #0x8]
7101de7050  ldr x8,[x22, #0x8]
7101de7054  cbz x8,0x7101de706c
7101de7058  ldr x8,[x8, #0x18]
7101de705c  cbz x8,0x7101de706c
7101de7060  ldrb w9,[x8, #0x58]
7101de7064  and w9,w9,#0xfe
7101de7068  strb w9,[x8, #0x58]
7101de706c  stp x24,xzr,[sp]
7101de7070  cbz x22,0x7101de7094
7101de7074  ldr x0,[x22, #0x18]
7101de7078  adrp x8,0x710523d000
7101de707c  add x8,x8,#0x9a8
7101de7080  stp x8,xzr,[x22, #0x10]
7101de7084  cbz x0,0x7101de708c
7101de7088  bl 0x710392eb40
7101de708c  mov x0,x22
7101de7090  bl 0x710392eb40
7101de7094  adrp x1,0x71042b4000
7101de7098  add x1,x1,#0x824
7101de709c  mov w2,#0x5
7101de70a0  mov x8,sp
7101de70a4  mov x0,x21
7101de70a8  bl 0x7103776640
7101de70ac  mov x0,sp
7101de70b0  bl 0x71025ae390
7101de70b4  ldr x22,[sp, #0x8]
7101de70b8  ldr x8,[x22, #0x8]
7101de70bc  cbz x8,0x7101de70d4
7101de70c0  ldr x8,[x8, #0x18]
7101de70c4  cbz x8,0x7101de70d4
7101de70c8  ldrb w9,[x8, #0x58]
7101de70cc  and w9,w9,#0xfe
7101de70d0  strb w9,[x8, #0x58]
7101de70d4  stp x24,xzr,[sp]
7101de70d8  cbz x22,0x7101de70fc
7101de70dc  ldr x0,[x22, #0x18]
7101de70e0  adrp x8,0x710523d000
7101de70e4  add x8,x8,#0x9a8
7101de70e8  stp x8,xzr,[x22, #0x10]
7101de70ec  cbz x0,0x7101de70f4
7101de70f0  bl 0x710392eb40
7101de70f4  mov x0,x22
7101de70f8  bl 0x710392eb40
7101de70fc  adrp x1,0x71042b4000
7101de7100  add x1,x1,#0x824
7101de7104  mov x8,sp
7101de7108  orr w2,wzr,#0x6
7101de710c  mov x0,x21
7101de7110  bl 0x7103776640
7101de7114  mov x0,sp
7101de7118  bl 0x71025ae390
7101de711c  ldr x22,[sp, #0x8]
7101de7120  ldr x8,[x22, #0x8]
7101de7124  cbz x8,0x7101de713c
7101de7128  ldr x8,[x8, #0x18]
7101de712c  cbz x8,0x7101de713c
7101de7130  ldrb w9,[x8, #0x58]
7101de7134  and w9,w9,#0xfe
7101de7138  strb w9,[x8, #0x58]
7101de713c  stp x24,xzr,[sp]
7101de7140  cbz x22,0x7101de7164
7101de7144  ldr x0,[x22, #0x18]
7101de7148  adrp x8,0x710523d000
7101de714c  add x8,x8,#0x9a8
7101de7150  stp x8,xzr,[x22, #0x10]
7101de7154  cbz x0,0x7101de715c
7101de7158  bl 0x710392eb40
7101de715c  mov x0,x22
7101de7160  bl 0x710392eb40
7101de7164  adrp x1,0x71042b4000
7101de7168  add x1,x1,#0x824
7101de716c  mov x8,sp
7101de7170  orr w2,wzr,#0x7
7101de7174  mov x0,x21
7101de7178  bl 0x7103776640
7101de717c  mov x0,sp
7101de7180  bl 0x71025ae390
7101de7184  ldr x22,[sp, #0x8]
7101de7188  ldr x8,[x22, #0x8]
7101de718c  cbz x8,0x7101de71a4
7101de7190  ldr x8,[x8, #0x18]
7101de7194  cbz x8,0x7101de71a4
7101de7198  ldrb w9,[x8, #0x58]
7101de719c  and w9,w9,#0xfe
7101de71a0  strb w9,[x8, #0x58]
7101de71a4  stp x24,xzr,[sp]
7101de71a8  cbz x22,0x7101de71cc
7101de71ac  ldr x0,[x22, #0x18]
7101de71b0  adrp x8,0x710523d000
7101de71b4  add x8,x8,#0x9a8
7101de71b8  stp x8,xzr,[x22, #0x10]
7101de71bc  cbz x0,0x7101de71c4
7101de71c0  bl 0x710392eb40
7101de71c4  mov x0,x22
7101de71c8  bl 0x710392eb40
7101de71cc  adrp x1,0x71042b4000
7101de71d0  add x1,x1,#0x824
7101de71d4  mov x8,sp
7101de71d8  mov w2,#0x8
7101de71dc  mov x0,x21
7101de71e0  bl 0x7103776640
7101de71e4  mov x0,sp
7101de71e8  bl 0x71025ae390
7101de71ec  ldr x22,[sp, #0x8]
7101de71f0  ldr x8,[x22, #0x8]
7101de71f4  cbz x8,0x7101de720c
7101de71f8  ldr x8,[x8, #0x18]
7101de71fc  cbz x8,0x7101de720c
7101de7200  ldrb w9,[x8, #0x58]
7101de7204  and w9,w9,#0xfe
7101de7208  strb w9,[x8, #0x58]
7101de720c  stp x24,xzr,[sp]
7101de7210  cbz x22,0x7101de7234
7101de7214  ldr x0,[x22, #0x18]
7101de7218  adrp x8,0x710523d000
7101de721c  add x8,x8,#0x9a8
7101de7220  stp x8,xzr,[x22, #0x10]
7101de7224  cbz x0,0x7101de722c
7101de7228  bl 0x710392eb40
7101de722c  mov x0,x22
7101de7230  bl 0x710392eb40
7101de7234  adrp x1,0x71042b4000
7101de7238  add x1,x1,#0x824
7101de723c  mov w2,#0x9
7101de7240  mov x8,sp
7101de7244  mov x0,x21
7101de7248  bl 0x7103776640
7101de724c  mov x0,sp
7101de7250  bl 0x71025ae390
7101de7254  ldr x22,[sp, #0x8]
7101de7258  ldr x8,[x22, #0x8]
7101de725c  cbz x8,0x7101de7274
7101de7260  ldr x8,[x8, #0x18]
7101de7264  cbz x8,0x7101de7274
7101de7268  ldrb w9,[x8, #0x58]
7101de726c  and w9,w9,#0xfe
7101de7270  strb w9,[x8, #0x58]
7101de7274  stp x24,xzr,[sp]
7101de7278  cbz x22,0x7101de729c
7101de727c  ldr x0,[x22, #0x18]
7101de7280  adrp x8,0x710523d000
7101de7284  add x8,x8,#0x9a8
7101de7288  stp x8,xzr,[x22, #0x10]
7101de728c  cbz x0,0x7101de7294
7101de7290  bl 0x710392eb40
7101de7294  mov x0,x22
7101de7298  bl 0x710392eb40
7101de729c  adrp x1,0x71042b4000
7101de72a0  add x1,x1,#0x824
7101de72a4  mov w2,#0xa
7101de72a8  mov x8,sp
7101de72ac  mov x0,x21
7101de72b0  bl 0x7103776640
7101de72b4  mov x0,sp
7101de72b8  bl 0x71025ae390
7101de72bc  ldr x22,[sp, #0x8]
7101de72c0  ldr x8,[x22, #0x8]
7101de72c4  cbz x8,0x7101de72dc
7101de72c8  ldr x8,[x8, #0x18]
7101de72cc  cbz x8,0x7101de72dc
7101de72d0  ldrb w9,[x8, #0x58]
7101de72d4  and w9,w9,#0xfe
7101de72d8  strb w9,[x8, #0x58]
7101de72dc  stp x24,xzr,[sp]
7101de72e0  cbz x22,0x7101de7304
7101de72e4  ldr x0,[x22, #0x18]
7101de72e8  adrp x8,0x710523d000
7101de72ec  add x8,x8,#0x9a8
7101de72f0  stp x8,xzr,[x22, #0x10]
7101de72f4  cbz x0,0x7101de72fc
7101de72f8  bl 0x710392eb40
7101de72fc  mov x0,x22
7101de7300  bl 0x710392eb40
7101de7304  adrp x1,0x71042b4000
7101de7308  add x1,x1,#0x824
7101de730c  mov w2,#0xb
7101de7310  mov x8,sp
7101de7314  mov x0,x21
7101de7318  bl 0x7103776640
7101de731c  mov x0,sp
7101de7320  bl 0x71025ae390
7101de7324  ldr x22,[sp, #0x8]
7101de7328  ldr x8,[x22, #0x8]
7101de732c  cbz x8,0x7101de7344
7101de7330  ldr x8,[x8, #0x18]
7101de7334  cbz x8,0x7101de7344
7101de7338  ldrb w9,[x8, #0x58]
7101de733c  and w9,w9,#0xfe
7101de7340  strb w9,[x8, #0x58]
7101de7344  stp x24,xzr,[sp]
7101de7348  cbz x22,0x7101de736c
7101de734c  ldr x0,[x22, #0x18]
7101de7350  adrp x8,0x710523d000
7101de7354  add x8,x8,#0x9a8
7101de7358  stp x8,xzr,[x22, #0x10]
7101de735c  cbz x0,0x7101de7364
7101de7360  bl 0x710392eb40
7101de7364  mov x0,x22
7101de7368  bl 0x710392eb40
7101de736c  adrp x1,0x71042b4000
7101de7370  add x1,x1,#0x824
7101de7374  mov x8,sp
7101de7378  orr w2,wzr,#0xc
7101de737c  mov x0,x21
7101de7380  bl 0x7103776640
7101de7384  mov x0,sp
7101de7388  bl 0x71025ae390
7101de738c  ldr x22,[sp, #0x8]
7101de7390  ldr x8,[x22, #0x8]
7101de7394  cbz x8,0x7101de73ac
7101de7398  ldr x8,[x8, #0x18]
7101de739c  cbz x8,0x7101de73ac
7101de73a0  ldrb w9,[x8, #0x58]
7101de73a4  and w9,w9,#0xfe
7101de73a8  strb w9,[x8, #0x58]
7101de73ac  stp x24,xzr,[sp]
7101de73b0  cbz x22,0x7101de73d4
7101de73b4  ldr x0,[x22, #0x18]
7101de73b8  adrp x8,0x710523d000
7101de73bc  add x8,x8,#0x9a8
7101de73c0  stp x8,xzr,[x22, #0x10]
7101de73c4  cbz x0,0x7101de73cc
7101de73c8  bl 0x710392eb40
7101de73cc  mov x0,x22
7101de73d0  bl 0x710392eb40
7101de73d4  adrp x1,0x71042b4000
7101de73d8  add x1,x1,#0x824
7101de73dc  mov w2,#0xd
7101de73e0  mov x8,sp
7101de73e4  mov x0,x21
7101de73e8  bl 0x7103776640
7101de73ec  mov x0,sp
7101de73f0  bl 0x71025ae390
7101de73f4  ldr x22,[sp, #0x8]
7101de73f8  ldr x8,[x22, #0x8]
7101de73fc  cbz x8,0x7101de7414
7101de7400  ldr x8,[x8, #0x18]
7101de7404  cbz x8,0x7101de7414
7101de7408  ldrb w9,[x8, #0x58]
7101de740c  and w9,w9,#0xfe
7101de7410  strb w9,[x8, #0x58]
7101de7414  stp x24,xzr,[sp]
7101de7418  cbz x22,0x7101de743c
7101de741c  ldr x0,[x22, #0x18]
7101de7420  adrp x8,0x710523d000
7101de7424  add x8,x8,#0x9a8
7101de7428  stp x8,xzr,[x22, #0x10]
7101de742c  cbz x0,0x7101de7434
7101de7430  bl 0x710392eb40
7101de7434  mov x0,x22
7101de7438  bl 0x710392eb40
7101de743c  adrp x1,0x71042b4000
7101de7440  add x1,x1,#0x824
7101de7444  mov x8,sp
7101de7448  orr w2,wzr,#0xe
7101de744c  mov x0,x21
7101de7450  bl 0x7103776640
7101de7454  mov x0,sp
7101de7458  bl 0x71025ae390
7101de745c  ldr x22,[sp, #0x8]
7101de7460  ldr x8,[x22, #0x8]
7101de7464  cbz x8,0x7101de747c
7101de7468  ldr x8,[x8, #0x18]
7101de746c  cbz x8,0x7101de747c
7101de7470  ldrb w9,[x8, #0x58]
7101de7474  and w9,w9,#0xfe
7101de7478  strb w9,[x8, #0x58]
7101de747c  stp x24,xzr,[sp]
7101de7480  cbz x22,0x7101de74a4
7101de7484  ldr x0,[x22, #0x18]
7101de7488  adrp x8,0x710523d000
7101de748c  add x8,x8,#0x9a8
7101de7490  stp x8,xzr,[x22, #0x10]
7101de7494  cbz x0,0x7101de749c
7101de7498  bl 0x710392eb40
7101de749c  mov x0,x22
7101de74a0  bl 0x710392eb40
7101de74a4  adrp x1,0x71042b4000
7101de74a8  add x1,x1,#0x824
7101de74ac  mov x8,sp
7101de74b0  orr w2,wzr,#0xf
7101de74b4  mov x0,x21
7101de74b8  bl 0x7103776640
7101de74bc  mov x0,sp
7101de74c0  bl 0x71025ae390
7101de74c4  ldr x21,[sp, #0x8]
7101de74c8  ldr x8,[x21, #0x8]
7101de74cc  cbz x8,0x7101de74e4
7101de74d0  ldr x8,[x8, #0x18]
7101de74d4  cbz x8,0x7101de74e4
7101de74d8  ldrb w9,[x8, #0x58]
7101de74dc  and w9,w9,#0xfe
7101de74e0  strb w9,[x8, #0x58]
7101de74e4  stp x24,xzr,[sp]
7101de74e8  cbz x21,0x7101de750c
7101de74ec  ldr x0,[x21, #0x18]
7101de74f0  adrp x8,0x710523d000
7101de74f4  add x8,x8,#0x9a8
7101de74f8  stp x8,xzr,[x21, #0x10]
7101de74fc  cbz x0,0x7101de7504
7101de7500  bl 0x710392eb40
7101de7504  mov x0,x21
7101de7508  bl 0x710392eb40
7101de750c  str w20,[x23, #0x8c]
7101de7510  adrp x8,0x710532f000
7101de7514  ldr x8,[x8, #0x8d0]
7101de7518  ldr x0,[x8, #0x8]
7101de751c  mov w1,wzr
7101de7520  bl 0x7103313da0
7101de7524  strb wzr,[x19, #0x70]
7101de7528  ldp x29,x30,[sp, #0x40]
7101de752c  ldp x20,x19,[sp, #0x30]
7101de7530  ldp x22,x21,[sp, #0x20]
7101de7534  ldp x24,x23,[sp, #0x10]
7101de7538  add sp,sp,#0x50
7101de753c  ret
