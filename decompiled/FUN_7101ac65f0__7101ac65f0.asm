// addr:      7101ac65f0
// offset:    0x1ac65f0
// name:      FUN_7101ac65f0
// mangled:   
// size:      2524

7101ac65f0  sub sp,sp,#0xf0
7101ac65f4  stp x26,x25,[sp, #0xa0]
7101ac65f8  stp x24,x23,[sp, #0xb0]
7101ac65fc  stp x22,x21,[sp, #0xc0]
7101ac6600  stp x20,x19,[sp, #0xd0]
7101ac6604  stp x29,x30,[sp, #0xe0]
7101ac6608  add x29,sp,#0xe0
7101ac660c  add x21,x0,#0x230
7101ac6610  mov x20,x1
7101ac6614  mov x19,x0
7101ac6618  adrp x1,0x7104280000
7101ac661c  add x1,x1,#0x5c4
7101ac6620  sub x8,x29,#0x60
7101ac6624  mov x0,x21
7101ac6628  bl 0x7103776910
7101ac662c  ldrsw x8,[x20, #0x68]
7101ac6630  mov x9,#-0x7777
7101ac6634  movk x9,#0x8888, LSL #16
7101ac6638  mul x9,x8,x9
7101ac663c  lsr x9,x9,#0x20
7101ac6640  add w9,w9,w8
7101ac6644  asr w10,w9,#0x5
7101ac6648  add w9,w10,w9, LSR #0x1f
7101ac664c  mov w10,#0xffffffc4
7101ac6650  madd w8,w9,w10,w8
7101ac6654  cmp w9,#0x3e7
7101ac6658  mov w10,#0x3e7
7101ac665c  csel w9,w9,w10,lt
7101ac6660  cmp w8,#0x3e7
7101ac6664  mov w11,#0x3e8
7101ac6668  adrp x1,0x7104421000
7101ac666c  add x1,x1,#0xe2f
7101ac6670  csel w8,w8,w10,lt
7101ac6674  madd w3,w9,w11,w8
7101ac6678  sub x0,x29,#0x60
7101ac667c  mov w2,#0x1
7101ac6680  bl 0x710377a280
7101ac6684  ldur x0,[x29, #-0x58]
7101ac6688  adrp x25,0x710523d000
7101ac668c  add x25,x25,#0x9a8
7101ac6690  stp x25,xzr,[x29, #-0x60]
7101ac6694  cbz x0,0x7101ac669c
7101ac6698  bl 0x710392eb40
7101ac669c  adrp x1,0x7104339000
7101ac66a0  add x1,x1,#0xc62
7101ac66a4  sub x8,x29,#0x60
7101ac66a8  mov x0,x21
7101ac66ac  bl 0x7103776910
7101ac66b0  ldrb w8,[x20, #0x6c]
7101ac66b4  sub w8,w8,#0x1
7101ac66b8  cmp w8,#0x11
7101ac66bc  b.hi 0x7101ac6764
7101ac66c0  adrp x9,0x71044f8000
7101ac66c4  add x9,x9,#0x260
7101ac66c8  adrp x1,0x71042f7000
7101ac66cc  add x1,x1,#0xd39
7101ac66d0  ldrsw x8,[x9, x8, LSL #0x2]
7101ac66d4  add x8,x8,x9
7101ac66d8  br x8
7101ac66dc  adrp x1,0x71043be000
7101ac66e0  add x1,x1,#0x1b1
7101ac66e4  b 0x7101ac6780
7101ac66e8  adrp x1,0x71042d5000
7101ac66ec  add x1,x1,#0xd44
7101ac66f0  b 0x7101ac6780
7101ac66f4  adrp x8,0x71043ce000
7101ac66f8  add x8,x8,#0xf13
7101ac66fc  adrp x9,0x7104308000
7101ac6700  add x9,x9,#0x3d
7101ac6704  b 0x7101ac6774
7101ac6708  adrp x1,0x7104400000
7101ac670c  add x1,x1,#0xf54
7101ac6710  b 0x7101ac6780
7101ac6714  adrp x8,0x7104432000
7101ac6718  add x8,x8,#0xb7b
7101ac671c  adrp x9,0x7104349000
7101ac6720  add x9,x9,#0xdfd
7101ac6724  b 0x7101ac6774
7101ac6728  adrp x1,0x71042b3000
7101ac672c  add x1,x1,#0xe4d
7101ac6730  b 0x7101ac6780
7101ac6734  adrp x1,0x71043ce000
7101ac6738  add x1,x1,#0xf35
7101ac673c  b 0x7101ac6780
7101ac6740  adrp x1,0x710437c000
7101ac6744  add x1,x1,#0xbd
7101ac6748  b 0x7101ac6780
7101ac674c  adrp x1,0x71043ad000
7101ac6750  add x1,x1,#0x282
7101ac6754  b 0x7101ac6780
7101ac6758  adrp x1,0x71042d5000
7101ac675c  add x1,x1,#0xd68
7101ac6760  b 0x7101ac6780
7101ac6764  adrp x8,0x71043ce000
7101ac6768  add x8,x8,#0xef7
7101ac676c  adrp x9,0x71043be000
7101ac6770  add x9,x9,#0x1b1
7101ac6774  ldrb w10,[x20, #0x6f]
7101ac6778  cmp w10,#0x0
7101ac677c  csel x1,x9,x8,eq
7101ac6780  sub x0,x29,#0x60
7101ac6784  bl 0x710377a120
7101ac6788  ldur x0,[x29, #-0x58]
7101ac678c  stp x25,xzr,[x29, #-0x60]
7101ac6790  cbz x0,0x7101ac6798
7101ac6794  bl 0x710392eb40
7101ac6798  adrp x1,0x7104443000
7101ac679c  add x1,x1,#0xd4
7101ac67a0  sub x8,x29,#0x60
7101ac67a4  mov x0,x21
7101ac67a8  bl 0x7103776910
7101ac67ac  ldrb w8,[x20, #0x6c]
7101ac67b0  sub w8,w8,#0x1
7101ac67b4  cmp w8,#0x11
7101ac67b8  b.hi 0x7101ac6860
7101ac67bc  adrp x9,0x71044f8000
7101ac67c0  add x9,x9,#0x2a8
7101ac67c4  adrp x1,0x71042f7000
7101ac67c8  add x1,x1,#0xd39
7101ac67cc  ldrsw x8,[x9, x8, LSL #0x2]
7101ac67d0  add x8,x8,x9
7101ac67d4  br x8
7101ac67d8  adrp x1,0x71043be000
7101ac67dc  add x1,x1,#0x1b1
7101ac67e0  b 0x7101ac687c
7101ac67e4  adrp x1,0x71042d5000
7101ac67e8  add x1,x1,#0xd44
7101ac67ec  b 0x7101ac687c
7101ac67f0  adrp x8,0x71043ce000
7101ac67f4  add x8,x8,#0xf13
7101ac67f8  adrp x9,0x7104308000
7101ac67fc  add x9,x9,#0x3d
7101ac6800  b 0x7101ac6870
7101ac6804  adrp x1,0x7104400000
7101ac6808  add x1,x1,#0xf54
7101ac680c  b 0x7101ac687c
7101ac6810  adrp x8,0x7104432000
7101ac6814  add x8,x8,#0xb7b
7101ac6818  adrp x9,0x7104349000
7101ac681c  add x9,x9,#0xdfd
7101ac6820  b 0x7101ac6870
7101ac6824  adrp x1,0x71042b3000
7101ac6828  add x1,x1,#0xe4d
7101ac682c  b 0x7101ac687c
7101ac6830  adrp x1,0x71043ce000
7101ac6834  add x1,x1,#0xf35
7101ac6838  b 0x7101ac687c
7101ac683c  adrp x1,0x710437c000
7101ac6840  add x1,x1,#0xbd
7101ac6844  b 0x7101ac687c
7101ac6848  adrp x1,0x71043ad000
7101ac684c  add x1,x1,#0x282
7101ac6850  b 0x7101ac687c
7101ac6854  adrp x1,0x71042d5000
7101ac6858  add x1,x1,#0xd68
7101ac685c  b 0x7101ac687c
7101ac6860  adrp x8,0x71043ce000
7101ac6864  add x8,x8,#0xef7
7101ac6868  adrp x9,0x71043be000
7101ac686c  add x9,x9,#0x1b1
7101ac6870  ldrb w10,[x20, #0x6f]
7101ac6874  cmp w10,#0x0
7101ac6878  csel x1,x9,x8,eq
7101ac687c  sub x0,x29,#0x60
7101ac6880  add x22,x20,#0x8
7101ac6884  bl 0x710377a120
7101ac6888  ldur x0,[x29, #-0x58]
7101ac688c  stp x25,xzr,[x29, #-0x60]
7101ac6890  cbz x0,0x7101ac6898
7101ac6894  bl 0x710392eb40
7101ac6898  adrp x1,0x71042a2000
7101ac689c  add x1,x1,#0xa73
7101ac68a0  add x8,sp,#0x70
7101ac68a4  mov x0,x21
7101ac68a8  bl 0x7103776910
7101ac68ac  adrp x1,0x71042a3000
7101ac68b0  add x1,x1,#0x163
7101ac68b4  add x8,sp,#0x60
7101ac68b8  mov x0,x21
7101ac68bc  bl 0x7103776910
7101ac68c0  add x0,sp,#0x70
7101ac68c4  add x1,sp,#0x60
7101ac68c8  mov x2,x22
7101ac68cc  bl 0x7101ac6fd0
7101ac68d0  ldr x0,[sp, #0x68]
7101ac68d4  stp x25,xzr,[sp, #0x60]
7101ac68d8  cbz x0,0x7101ac68e0
7101ac68dc  bl 0x710392eb40
7101ac68e0  ldr x0,[sp, #0x78]
7101ac68e4  stp x25,xzr,[sp, #0x70]
7101ac68e8  cbz x0,0x7101ac68f0
7101ac68ec  bl 0x710392eb40
7101ac68f0  adrp x1,0x71042b3000
7101ac68f4  add x1,x1,#0xe70
7101ac68f8  add x8,sp,#0x50
7101ac68fc  mov x0,x21
7101ac6900  bl 0x7103776640
7101ac6904  add x1,sp,#0x50
7101ac6908  mov x0,x19
7101ac690c  bl 0x7101ac71e0
7101ac6910  ldr x23,[sp, #0x58]
7101ac6914  adrp x26,0x710523d000
7101ac6918  add x26,x26,#0x988
7101ac691c  stp x26,xzr,[sp, #0x50]
7101ac6920  cbz x23,0x7101ac693c
7101ac6924  ldr x0,[x23, #0x18]
7101ac6928  stp x25,xzr,[x23, #0x10]
7101ac692c  cbz x0,0x7101ac6934
7101ac6930  bl 0x710392eb40
7101ac6934  mov x0,x23
7101ac6938  bl 0x710392eb40
7101ac693c  adrp x1,0x710424e000
7101ac6940  add x1,x1,#0xfc5
7101ac6944  sub x8,x29,#0x60
7101ac6948  mov x0,x21
7101ac694c  bl 0x7103776640
7101ac6950  adrp x23,0x7104411000
7101ac6954  add x23,x23,#0x1db
7101ac6958  add x8,sp,#0x40
7101ac695c  sub x0,x29,#0x60
7101ac6960  mov x1,x23
7101ac6964  bl 0x7103776640
7101ac6968  add x0,x19,#0x2e0
7101ac696c  add x8,sp,#0x30
7101ac6970  mov x1,x23
7101ac6974  bl 0x7103776640
7101ac6978  ldr x8,[sp, #0x38]
7101ac697c  ldr x8,[x8, #0x8]
7101ac6980  cbz x8,0x7101ac6a54
7101ac6984  ldr x23,[x8, #0x78]
7101ac6988  adrp x8,0x710593b000
7101ac698c  add x8,x8,#0xa40
7101ac6990  ldarb w8,[x8]
7101ac6994  tbz w8,#0x0,0x7101ac6f60
7101ac6998  cbz x23,0x7101ac6a54
7101ac699c  ldr x8,[x23]
7101ac69a0  ldr x8,[x8]
7101ac69a4  mov x0,x23
7101ac69a8  blr x8
7101ac69ac  cbz x0,0x7101ac6a54
7101ac69b0  adrp x8,0x710593b000
7101ac69b4  add x8,x8,#0xa58
7101ac69b8  cmp x0,x8
7101ac69bc  b.eq 0x7101ac69cc
7101ac69c0  ldr x0,[x0]
7101ac69c4  cbnz x0,0x7101ac69b8
7101ac69c8  b 0x7101ac6a54
7101ac69cc  ldr w9,[x23, #0x54]
7101ac69d0  ldr x8,[x23, #0x18]
7101ac69d4  str w9,[x23, #0x58]
7101ac69d8  cbz x8,0x7101ac69ec
7101ac69dc  str w9,[x8, #0x30]
7101ac69e0  ldrb w9,[x8, #0x58]
7101ac69e4  orr w9,w9,#0x10
7101ac69e8  strb w9,[x8, #0x58]
7101ac69ec  ldr x8,[x23, #0x20]
7101ac69f0  cbz x8,0x7101ac6a08
7101ac69f4  ldr w9,[x23, #0x58]
7101ac69f8  str w9,[x8, #0x30]
7101ac69fc  ldrb w9,[x8, #0x58]
7101ac6a00  orr w9,w9,#0x10
7101ac6a04  strb w9,[x8, #0x58]
7101ac6a08  ldr x0,[x23, #0x28]
7101ac6a0c  cbz x0,0x7101ac6a20
7101ac6a10  ldr x8,[x0]
7101ac6a14  ldr x8,[x8, #0x180]
7101ac6a18  fmov s0,wzr
7101ac6a1c  blr x8
7101ac6a20  ldr x0,[x23, #0x30]
7101ac6a24  cbz x0,0x7101ac6a50
7101ac6a28  ldrb w8,[x23, #0x63]
7101ac6a2c  cbz w8,0x7101ac6a40
7101ac6a30  ldr x8,[x0]
7101ac6a34  ldr x8,[x8, #0x190]
7101ac6a38  blr x8
7101ac6a3c  b 0x7101ac6a50
7101ac6a40  ldr x8,[x0]
7101ac6a44  ldr x8,[x8, #0x180]
7101ac6a48  fmov s0,wzr
7101ac6a4c  blr x8
7101ac6a50  strh wzr,[x23, #0x64]
7101ac6a54  adrp x1,0x71042c3000
7101ac6a58  add x1,x1,#0x645
7101ac6a5c  add x8,sp,#0x20
7101ac6a60  add x0,sp,#0x40
7101ac6a64  add x23,x20,#0x14
7101ac6a68  bl 0x7103776910
7101ac6a6c  ldr x24,[sp, #0x28]
7101ac6a70  ldr x0,[x24, #0x10]
7101ac6a74  cbz x0,0x7101ac6a88
7101ac6a78  mov w2,#0xffffffff
7101ac6a7c  mov w3,#0x1
7101ac6a80  mov x1,x23
7101ac6a84  bl 0x71037a2270
7101ac6a88  stp x25,xzr,[sp, #0x20]
7101ac6a8c  cbz x24,0x7101ac6a98
7101ac6a90  mov x0,x24
7101ac6a94  bl 0x710392eb40
7101ac6a98  adrp x1,0x710437a000
7101ac6a9c  add x1,x1,#0xe67
7101ac6aa0  add x8,sp,#0x20
7101ac6aa4  add x0,sp,#0x40
7101ac6aa8  bl 0x7103776910
7101ac6aac  ldr x24,[sp, #0x28]
7101ac6ab0  ldr x0,[x24, #0x10]
7101ac6ab4  cbz x0,0x7101ac6ac8
7101ac6ab8  mov w2,#0xffffffff
7101ac6abc  mov w3,#0x1
7101ac6ac0  mov x1,x23
7101ac6ac4  bl 0x71037a2270
7101ac6ac8  stp x25,xzr,[sp, #0x20]
7101ac6acc  cbz x24,0x7101ac6ad8
7101ac6ad0  mov x0,x24
7101ac6ad4  bl 0x710392eb40
7101ac6ad8  ldr x8,[x22]
7101ac6adc  mov w9,#0x4240
7101ac6ae0  movk w9,#0xf, LSL #16
7101ac6ae4  ubfx x11,x8,#0x15,#0x5
7101ac6ae8  and x10,x8,#0xfff
7101ac6aec  mul x10,x10,x9
7101ac6af0  mul x9,x11,x9
7101ac6af4  mov w12,#0x3e8
7101ac6af8  ubfx x15,x8,#0x1a,#0x6
7101ac6afc  ubfx x13,x8,#0xc,#0x4
7101ac6b00  madd x10,x13,x12,x10
7101ac6b04  madd x9,x15,x12,x9
7101ac6b08  ubfx x14,x8,#0x10,#0x5
7101ac6b0c  ubfx x8,x8,#0x20,#0x6
7101ac6b10  add x23,x9,x8
7101ac6b14  adrp x1,0x71042d6000
7101ac6b18  add x1,x1,#0xb88
7101ac6b1c  add x8,sp,#0x20
7101ac6b20  sub x0,x29,#0x60
7101ac6b24  add x22,x10,x14
7101ac6b28  bl 0x7103776910
7101ac6b2c  adrp x1,0x7104339000
7101ac6b30  add x1,x1,#0xca6
7101ac6b34  add x0,sp,#0x20
7101ac6b38  mov w2,#0x2
7101ac6b3c  mov x3,x22
7101ac6b40  mov x4,x23
7101ac6b44  bl 0x710377a280
7101ac6b48  ldr x0,[sp, #0x28]
7101ac6b4c  stp x25,xzr,[sp, #0x20]
7101ac6b50  cbz x0,0x7101ac6b58
7101ac6b54  bl 0x710392eb40
7101ac6b58  adrp x22,0x7105324000
7101ac6b5c  ldr x8,[x22, #0xee8]
7101ac6b60  ldr w1,[x20]
7101ac6b64  ldr x0,[x8, #0x8]
7101ac6b68  bl 0x7101af0cc0
7101ac6b6c  cbz w0,0x7101ac6c64
7101ac6b70  adrp x1,0x7104454000
7101ac6b74  add x1,x1,#0x55e
7101ac6b78  add x8,sp,#0x20
7101ac6b7c  mov x0,x21
7101ac6b80  bl 0x7103776910
7101ac6b84  ldr x0,[x19, #0x238]
7101ac6b88  fmov s0,0x3f800000
7101ac6b8c  adrp x1,0x710435b000
7101ac6b90  add x1,x1,#0x125
7101ac6b94  bl 0x7103778300
7101ac6b98  ldr x21,[x19, #0x2f0]
7101ac6b9c  mov w0,#0x10
7101ac6ba0  mov w1,#0x20
7101ac6ba4  str x25,[sp, #0x10]
7101ac6ba8  bl 0x710392e290
7101ac6bac  cbnz x0,0x7101ac6bf4
7101ac6bb0  adrp x8,0x7105332000
7101ac6bb4  ldr x0,[x8, #0xf00]
7101ac6bb8  cbz x0,0x7101ac6bf0
7101ac6bbc  mov w8,#0x20
7101ac6bc0  stur wzr,[x29, #-0x44]
7101ac6bc4  sub x1,x29,#0x44
7101ac6bc8  stur x8,[x29, #-0x50]
7101ac6bcc  ldr x8,[x0]
7101ac6bd0  ldr x8,[x8, #0x30]
7101ac6bd4  sub x2,x29,#0x50
7101ac6bd8  blr x8
7101ac6bdc  tbz w0,#0x0,0x7101ac6bf0
7101ac6be0  mov w0,#0x10
7101ac6be4  mov w1,#0x20
7101ac6be8  bl 0x710392e290
7101ac6bec  cbnz x0,0x7101ac6bf4
7101ac6bf0  mov x0,xzr
7101ac6bf4  stp xzr,xzr,[x0, #0x10]
7101ac6bf8  mov x23,x0
7101ac6bfc  stp xzr,xzr,[x0]
7101ac6c00  ldr x8,[sp, #0x28]
7101ac6c04  add x1,sp,#0x10
7101ac6c08  mov w4,wzr
7101ac6c0c  str x0,[sp, #0x18]
7101ac6c10  ldr x9,[x8]
7101ac6c14  str x9,[x0]
7101ac6c18  ldr x8,[x8, #0x8]
7101ac6c1c  str x8,[x0, #0x8]
7101ac6c20  ldr x22,[sp, #0x28]
7101ac6c24  ldr x8,[x22, #0x10]
7101ac6c28  str x8,[x23, #0x10]
7101ac6c2c  ldr x8,[x22, #0x18]
7101ac6c30  str x8,[x23, #0x18]
7101ac6c34  ldr w2,[x20, #0x300]
7101ac6c38  ldr w3,[x20]
7101ac6c3c  mov x0,x21
7101ac6c40  bl 0x7101ad2060
7101ac6c44  stp x25,xzr,[sp, #0x10]
7101ac6c48  cbz x23,0x7101ac6c54
7101ac6c4c  mov x0,x23
7101ac6c50  bl 0x710392eb40
7101ac6c54  stp x25,xzr,[sp, #0x20]
7101ac6c58  cbz x22,0x7101ac6da0
7101ac6c5c  mov x0,x22
7101ac6c60  b 0x7101ac6d9c
7101ac6c64  ldr w8,[x20, #0x300]
7101ac6c68  cmp w8,#0x145
7101ac6c6c  b.ne 0x7101ac6d08
7101ac6c70  ldr x9,[x22, #0xee8]
7101ac6c74  ldr x9,[x9, #0x8]
7101ac6c78  ldr w8,[x20]
7101ac6c7c  ldr x10,[x9, #0xe8]!
7101ac6c80  cbz x10,0x7101ac6cb4
7101ac6c84  mov x11,x9
7101ac6c88  ldr w12,[x10, #0x1c]
7101ac6c8c  cmp w12,w8
7101ac6c90  cset w12,cc
7101ac6c94  csel x11,x11,x10,cc
7101ac6c98  ldr x10,[x10, w12, UXTW #0x3]
7101ac6c9c  cbnz x10,0x7101ac6c88
7101ac6ca0  cmp x11,x9
7101ac6ca4  b.eq 0x7101ac6cb4
7101ac6ca8  ldr w9,[x11, #0x1c]
7101ac6cac  cmp w9,w8
7101ac6cb0  b.ls 0x7101ac6f48
7101ac6cb4  ldr x20,[x19, #0x238]
7101ac6cb8  ldr x0,[x20, #0x8]
7101ac6cbc  cbz x0,0x7101ac6ce4
7101ac6cc0  adrp x1,0x710436b000
7101ac6cc4  add x1,x1,#0xdf7
7101ac6cc8  bl 0x71037964b0
7101ac6ccc  cbz x0,0x7101ac6ce4
7101ac6cd0  ldr x8,[x0]
7101ac6cd4  ldr x8,[x8, #0x130]
7101ac6cd8  blr x8
7101ac6cdc  tbnz w0,#0x0,0x7101ac6cf8
7101ac6ce0  ldr x20,[x19, #0x238]
7101ac6ce4  fmov s0,0x3f800000
7101ac6ce8  adrp x1,0x710436b000
7101ac6cec  add x1,x1,#0xdf7
7101ac6cf0  mov x0,x20
7101ac6cf4  bl 0x7103778300
7101ac6cf8  ldr x0,[x19, #0x238]
7101ac6cfc  adrp x1,0x71042c4000
7101ac6d00  add x1,x1,#0x8e8
7101ac6d04  b 0x7101ac6dbc
7101ac6d08  adrp x1,0x71042e6000
7101ac6d0c  add x1,x1,#0xbec
7101ac6d10  add x8,sp,#0x20
7101ac6d14  mov x0,x21
7101ac6d18  bl 0x7103776640
7101ac6d1c  ldr x0,[x19, #0x238]
7101ac6d20  fmov s0,0x3f800000
7101ac6d24  adrp x1,0x7104412000
7101ac6d28  add x1,x1,#0x483
7101ac6d2c  bl 0x7103778300
7101ac6d30  ldr x21,[x19, #0x2f0]
7101ac6d34  mov x0,sp
7101ac6d38  add x1,sp,#0x20
7101ac6d3c  bl 0x7103776390
7101ac6d40  ldr w2,[x20, #0x300]
7101ac6d44  ldr w3,[x20]
7101ac6d48  mov x1,sp
7101ac6d4c  mov w4,#0x1
7101ac6d50  mov x0,x21
7101ac6d54  bl 0x7101ad1f10
7101ac6d58  ldr x20,[sp, #0x8]
7101ac6d5c  stp x26,xzr,[sp]
7101ac6d60  cbz x20,0x7101ac6d7c
7101ac6d64  ldr x0,[x20, #0x18]
7101ac6d68  stp x25,xzr,[x20, #0x10]
7101ac6d6c  cbz x0,0x7101ac6d74
7101ac6d70  bl 0x710392eb40
7101ac6d74  mov x0,x20
7101ac6d78  bl 0x710392eb40
7101ac6d7c  ldr x20,[sp, #0x28]
7101ac6d80  stp x26,xzr,[sp, #0x20]
7101ac6d84  cbz x20,0x7101ac6da0
7101ac6d88  ldr x0,[x20, #0x18]
7101ac6d8c  stp x25,xzr,[x20, #0x10]
7101ac6d90  cbz x0,0x7101ac6d98
7101ac6d94  bl 0x710392eb40
7101ac6d98  mov x0,x20
7101ac6d9c  bl 0x710392eb40
7101ac6da0  ldrb w8,[x19, #0x3ac]
7101ac6da4  ldr x0,[x19, #0x238]
7101ac6da8  adrp x1,0x71043df000
7101ac6dac  add x1,x1,#0xb68
7101ac6db0  cbz w8,0x7101ac6dbc
7101ac6db4  bl 0x7103778760
7101ac6db8  b 0x7101ac6dc4
7101ac6dbc  fmov s0,0x3f800000
7101ac6dc0  bl 0x7103778300
7101ac6dc4  ldr x8,[x19, #0x300]
7101ac6dc8  ldrsw x9,[x19, #0x2f8]
7101ac6dcc  ldr x10,[x8]
7101ac6dd0  orr w8,wzr,#0x3c0
7101ac6dd4  madd x13,x9,x8,x10
7101ac6dd8  ldr s0,[x13, #0x9c]
7101ac6ddc  ldp w8,w11,[x13, #0x70]
7101ac6de0  ldrb w13,[x13, #0x6c]
7101ac6de4  cmp w8,#0x0
7101ac6de8  cset w8,ne
7101ac6dec  cmp w11,#0x0
7101ac6df0  cset w11,ne
7101ac6df4  fcmp s0,#0.0
7101ac6df8  cset w12,gt
7101ac6dfc  cmp w13,#0x12
7101ac6e00  b.ne 0x7101ac6e88
7101ac6e04  orr w8,wzr,#0x3c0
7101ac6e08  madd x8,x9,x8,x10
7101ac6e0c  ldrb w9,[x8, #0x90]
7101ac6e10  ldrb w10,[x8, #0xe0]
7101ac6e14  cmp w9,#0x1
7101ac6e18  mov w11,#0x2
7101ac6e1c  cset w9,eq
7101ac6e20  csinc w11,w11,wzr,eq
7101ac6e24  cmp w10,#0x1
7101ac6e28  ldrb w10,[x8, #0x130]
7101ac6e2c  csel w9,w9,w11,ne
7101ac6e30  cmp w10,#0x1
7101ac6e34  ldrb w10,[x8, #0x180]
7101ac6e38  cinc w9,w9,eq
7101ac6e3c  cmp w10,#0x1
7101ac6e40  ldrb w10,[x8, #0x1d0]
7101ac6e44  cinc w9,w9,eq
7101ac6e48  cmp w10,#0x1
7101ac6e4c  ldrb w10,[x8, #0x220]
7101ac6e50  cinc w9,w9,eq
7101ac6e54  cmp w10,#0x1
7101ac6e58  ldrb w10,[x8, #0x270]
7101ac6e5c  ldrb w8,[x8, #0x2c0]
7101ac6e60  cinc w9,w9,eq
7101ac6e64  cmp w10,#0x1
7101ac6e68  cinc w9,w9,eq
7101ac6e6c  cmp w8,#0x1
7101ac6e70  cinc w8,w9,eq
7101ac6e74  cmp w8,#0x2
7101ac6e78  mov w8,#0x8
7101ac6e7c  mov w9,#0x10
7101ac6e80  csel w8,w9,w8,eq
7101ac6e84  b 0x7101ac6e90
7101ac6e88  bfm w8,w11,#0x1f,#0x0
7101ac6e8c  bfm w8,w12,#0x1e,#0x0
7101ac6e90  cmp w8,#0x10
7101ac6e94  ccmp w8,#0x8,#0x4,ne
7101ac6e98  b.ne 0x7101ac6eac
7101ac6e9c  ldr x0,[x19, #0x238]
7101ac6ea0  adrp x1,0x710436b000
7101ac6ea4  add x1,x1,#0xe05
7101ac6ea8  b 0x7101ac6eb8
7101ac6eac  ldr x0,[x19, #0x238]
7101ac6eb0  adrp x1,0x7104318000
7101ac6eb4  add x1,x1,#0x9f9
7101ac6eb8  fmov s0,0x3f800000
7101ac6ebc  bl 0x7103778300
7101ac6ec0  ldr x19,[sp, #0x38]
7101ac6ec4  stp x26,xzr,[sp, #0x30]
7101ac6ec8  cbz x19,0x7101ac6ee4
7101ac6ecc  ldr x0,[x19, #0x18]
7101ac6ed0  stp x25,xzr,[x19, #0x10]
7101ac6ed4  cbz x0,0x7101ac6edc
7101ac6ed8  bl 0x710392eb40
7101ac6edc  mov x0,x19
7101ac6ee0  bl 0x710392eb40
7101ac6ee4  ldr x19,[sp, #0x48]
7101ac6ee8  stp x26,xzr,[sp, #0x40]
7101ac6eec  cbz x19,0x7101ac6f08
7101ac6ef0  ldr x0,[x19, #0x18]
7101ac6ef4  stp x25,xzr,[x19, #0x10]
7101ac6ef8  cbz x0,0x7101ac6f00
7101ac6efc  bl 0x710392eb40
7101ac6f00  mov x0,x19
7101ac6f04  bl 0x710392eb40
7101ac6f08  ldur x19,[x29, #-0x58]
7101ac6f0c  stp x26,xzr,[x29, #-0x60]
7101ac6f10  cbz x19,0x7101ac6f2c
7101ac6f14  ldr x0,[x19, #0x18]
7101ac6f18  stp x25,xzr,[x19, #0x10]
7101ac6f1c  cbz x0,0x7101ac6f24
7101ac6f20  bl 0x710392eb40
7101ac6f24  mov x0,x19
7101ac6f28  bl 0x710392eb40
7101ac6f2c  ldp x29,x30,[sp, #0xe0]
7101ac6f30  ldp x20,x19,[sp, #0xd0]
7101ac6f34  ldp x22,x21,[sp, #0xc0]
7101ac6f38  ldp x24,x23,[sp, #0xb0]
7101ac6f3c  ldp x26,x25,[sp, #0xa0]
7101ac6f40  add sp,sp,#0xf0
7101ac6f44  ret
7101ac6f48  ldr x0,[x19, #0x238]
7101ac6f4c  fmov s0,0x3f800000
7101ac6f50  adrp x1,0x710436b000
7101ac6f54  add x1,x1,#0xde7
7101ac6f58  bl 0x7103778300
7101ac6f5c  b 0x7101ac6da0
7101ac6f60  adrp x0,0x710593b000
7101ac6f64  add x0,x0,#0xa40
7101ac6f68  bl 0x71039c06b0
7101ac6f6c  cbz w0,0x7101ac6998
7101ac6f70  adrp x8,0x710593b000
7101ac6f74  add x8,x8,#0xa48
7101ac6f78  ldarb w8,[x8]
7101ac6f7c  tbz w8,#0x0,0x7101ac6fa4
7101ac6f80  adrp x8,0x710593b000
7101ac6f84  adrp x9,0x710593b000
7101ac6f88  add x9,x9,#0xa50
7101ac6f8c  adrp x0,0x710593b000
7101ac6f90  add x0,x0,#0xa40
7101ac6f94  str x9,[x8, #0xa58]
7101ac6f98  bl 0x71039c06c0
7101ac6f9c  cbnz x23,0x7101ac699c
7101ac6fa0  b 0x7101ac6a54
7101ac6fa4  adrp x0,0x710593b000
7101ac6fa8  add x0,x0,#0xa48
7101ac6fac  bl 0x71039c06b0
7101ac6fb0  cbz w0,0x7101ac6f80
7101ac6fb4  adrp x8,0x710593b000
7101ac6fb8  adrp x0,0x710593b000
7101ac6fbc  add x0,x0,#0xa48
7101ac6fc0  str xzr,[x8, #0xa50]
7101ac6fc4  bl 0x71039c06c0
7101ac6fc8  b 0x7101ac6f80
