// addr:      7101ac6fd0
// offset:    0x1ac6fd0
// name:      FUN_7101ac6fd0
// mangled:   
// size:      528

7101ac6fd0  str x21,[sp, #-0x30]!
7101ac6fd4  stp x20,x19,[sp, #0x10]
7101ac6fd8  stp x29,x30,[sp, #0x20]
7101ac6fdc  add x29,sp,#0x20
7101ac6fe0  ldp w8,w11,[x2, #0x68]
7101ac6fe4  mov w9,#0x8889
7101ac6fe8  movk w9,#0x8888, LSL #16
7101ac6fec  mov w12,#0xb3c5
7101ac6ff0  movk w12,#0x91a2, LSL #16
7101ac6ff4  ldr s0,[x2, #0x94]
7101ac6ff8  cmp x8,#0x0
7101ac6ffc  mul x9,x8,x9
7101ac7000  mul x8,x8,x12
7101ac7004  mov w12,#0xffffffc4
7101ac7008  cset w10,ne
7101ac700c  lsr x9,x9,#0x25
7101ac7010  lsr x8,x8,#0x2b
7101ac7014  madd w9,w8,w12,w9
7101ac7018  cmp w8,#0x3e7
7101ac701c  mov w12,#0x3e7
7101ac7020  csel w8,w8,w12,cc
7101ac7024  cmp w9,#0x3e7
7101ac7028  csel w9,w9,w12,lt
7101ac702c  cmp w11,#0x0
7101ac7030  ldrb w13,[x2, #0x64]
7101ac7034  cset w11,ne
7101ac7038  fcmp s0,#0.0
7101ac703c  mov x20,x2
7101ac7040  mov x19,x1
7101ac7044  cset w12,gt
7101ac7048  cmp w13,#0x12
7101ac704c  b.ne 0x7101ac70cc
7101ac7050  ldrb w10,[x20, #0x88]
7101ac7054  ldrb w11,[x20, #0xd8]
7101ac7058  cmp w10,#0x1
7101ac705c  mov w12,#0x2
7101ac7060  cset w10,eq
7101ac7064  csinc w12,w12,wzr,eq
7101ac7068  cmp w11,#0x1
7101ac706c  ldrb w11,[x20, #0x128]
7101ac7070  csel w10,w10,w12,ne
7101ac7074  cmp w11,#0x1
7101ac7078  ldrb w11,[x20, #0x178]
7101ac707c  cinc w10,w10,eq
7101ac7080  cmp w11,#0x1
7101ac7084  ldrb w11,[x20, #0x1c8]
7101ac7088  cinc w10,w10,eq
7101ac708c  cmp w11,#0x1
7101ac7090  ldrb w11,[x20, #0x218]
7101ac7094  cinc w10,w10,eq
7101ac7098  cmp w11,#0x1
7101ac709c  ldrb w11,[x20, #0x268]
7101ac70a0  cinc w10,w10,eq
7101ac70a4  cmp w11,#0x1
7101ac70a8  ldrb w11,[x20, #0x2b8]
7101ac70ac  cinc w10,w10,eq
7101ac70b0  cmp w11,#0x1
7101ac70b4  mov w11,#0x10
7101ac70b8  cinc w10,w10,eq
7101ac70bc  cmp w10,#0x2
7101ac70c0  mov w10,#0x8
7101ac70c4  csel w10,w11,w10,eq
7101ac70c8  b 0x7101ac70d4
7101ac70cc  bfm w10,w11,#0x1f,#0x0
7101ac70d0  bfm w10,w12,#0x1e,#0x0
7101ac70d4  sub w10,w10,#0x1
7101ac70d8  cmp w10,#0xf
7101ac70dc  b.hi 0x7101ac7144
7101ac70e0  mov w11,#0x3e8
7101ac70e4  madd w21,w8,w11,w9
7101ac70e8  adrp x8,0x71044f8000
7101ac70ec  add x8,x8,#0x2f0
7101ac70f0  ldrsw x9,[x8, x10, LSL #0x2]
7101ac70f4  add x8,x9,x8
7101ac70f8  br x8
7101ac70fc  adrp x1,0x7104443000
7101ac7100  add x1,x1,#0x902
7101ac7104  bl 0x710377a120
7101ac7108  mov x0,x19
7101ac710c  ldp x29,x30,[sp, #0x20]
7101ac7110  ldp x20,x19,[sp, #0x10]
7101ac7114  adrp x1,0x71042e7000
7101ac7118  add x1,x1,#0x3be
7101ac711c  mov w2,#0x1
7101ac7120  mov w3,w21
7101ac7124  ldr x21,[sp], #0x30
7101ac7128  b 0x710377a280
7101ac712c  adrp x1,0x710425f000
7101ac7130  add x1,x1,#0x5df
7101ac7134  b 0x7101ac7164
7101ac7138  adrp x1,0x710425f000
7101ac713c  add x1,x1,#0x5df
7101ac7140  b 0x7101ac71b4
7101ac7144  adrp x1,0x7104443000
7101ac7148  add x1,x1,#0x902
7101ac714c  bl 0x710377a120
7101ac7150  adrp x1,0x71042d6000
7101ac7154  add x1,x1,#0x422
7101ac7158  b 0x7101ac7198
7101ac715c  adrp x1,0x71043ad000
7101ac7160  add x1,x1,#0x912
7101ac7164  bl 0x710377a120
7101ac7168  ldr w4,[x20, #0x6c]
7101ac716c  adrp x1,0x7104308000
7101ac7170  add x1,x1,#0x69f
7101ac7174  mov w2,#0x2
7101ac7178  mov x0,x19
7101ac717c  mov w3,wzr
7101ac7180  b 0x7101ac71d0
7101ac7184  adrp x1,0x710432a000
7101ac7188  add x1,x1,#0x15b
7101ac718c  b 0x7101ac7198
7101ac7190  adrp x1,0x7104422000
7101ac7194  add x1,x1,#0x591
7101ac7198  mov x0,x19
7101ac719c  ldp x29,x30,[sp, #0x20]
7101ac71a0  ldp x20,x19,[sp, #0x10]
7101ac71a4  ldr x21,[sp], #0x30
7101ac71a8  b 0x710377a120
7101ac71ac  adrp x1,0x71043ad000
7101ac71b0  add x1,x1,#0x912
7101ac71b4  bl 0x710377a120
7101ac71b8  ldr w4,[x20, #0x6c]
7101ac71bc  adrp x1,0x71042d6000
7101ac71c0  add x1,x1,#0x407
7101ac71c4  mov w2,#0x2
7101ac71c8  mov x0,x19
7101ac71cc  mov w3,w21
7101ac71d0  ldp x29,x30,[sp, #0x20]
7101ac71d4  ldp x20,x19,[sp, #0x10]
7101ac71d8  ldr x21,[sp], #0x30
7101ac71dc  b 0x710377a280
