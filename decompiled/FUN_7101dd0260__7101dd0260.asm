// addr:      7101dd0260
// offset:    0x1dd0260
// name:      FUN_7101dd0260
// mangled:   
// size:      2832

7101dd0260  sub sp,sp,#0x1f0
7101dd0264  str x28,[sp, #0x190]
7101dd0268  stp x26,x25,[sp, #0x1a0]
7101dd026c  stp x24,x23,[sp, #0x1b0]
7101dd0270  stp x22,x21,[sp, #0x1c0]
7101dd0274  stp x20,x19,[sp, #0x1d0]
7101dd0278  stp x29,x30,[sp, #0x1e0]
7101dd027c  add x29,sp,#0x1e0
7101dd0280  ldr x21,[x0, #0x8]
7101dd0284  mov w8,#0x1
7101dd0288  mov x19,x0
7101dd028c  mov w23,#0x101
7101dd0290  str w8,[sp, #0x20]
7101dd0294  strh w8,[sp, #0x24]
7101dd0298  strb w8,[sp, #0x26]
7101dd029c  mov x8,#0x41f0000000000000
7101dd02a0  adrp x2,0x71043e0000
7101dd02a4  add x2,x2,#0xa56
7101dd02a8  add x3,sp,#0x10
7101dd02ac  strh wzr,[sp, #0x1e]
7101dd02b0  mov x0,x21
7101dd02b4  mov x20,x1
7101dd02b8  strh w23,[sp, #0x18]
7101dd02bc  stur wzr,[sp, #0x1a]
7101dd02c0  str x8,[sp, #0x28]
7101dd02c4  str wzr,[sp, #0x30]
7101dd02c8  str xzr,[sp, #0x60]
7101dd02cc  str xzr,[sp, #0x90]
7101dd02d0  str xzr,[sp, #0xc0]
7101dd02d4  str xzr,[sp, #0xf0]
7101dd02d8  str xzr,[sp, #0x120]
7101dd02dc  str wzr,[sp, #0x130]
7101dd02e0  str xzr,[sp, #0x10]
7101dd02e4  bl 0x7103770b30
7101dd02e8  adrp x2,0x7104281000
7101dd02ec  add x2,x2,#0x205
7101dd02f0  mov x0,x21
7101dd02f4  mov w1,wzr
7101dd02f8  bl 0x71037717d0
7101dd02fc  ldr x8,[x19, #0x8]
7101dd0300  ldr w2,[x8, #0x3c]
7101dd0304  ldr x0,[x21]
7101dd0308  mov w1,wzr
7101dd030c  mov w3,wzr
7101dd0310  bl 0x7103771930
7101dd0314  ldr x9,[x21]
7101dd0318  ldr x8,[x9, #0x1b8]
7101dd031c  cbz x8,0x7101dd0400
7101dd0320  add x9,x9,#0x1b8
7101dd0324  mov x10,x9
7101dd0328  mov x11,x8
7101dd032c  ldr w12,[x11, #0x20]
7101dd0330  cmp w12,#0x0
7101dd0334  cset w12,lt
7101dd0338  csel x10,x10,x11,lt
7101dd033c  ldr x11,[x11, w12, UXTW #0x3]
7101dd0340  cbnz x11,0x7101dd032c
7101dd0344  cmp x10,x9
7101dd0348  b.eq 0x7101dd0398
7101dd034c  ldr w11,[x10, #0x20]
7101dd0350  cmp w11,#0x0
7101dd0354  b.gt 0x7101dd0398
7101dd0358  ldr x22,[x10, #0x28]
7101dd035c  cbz x22,0x7101dd0398
7101dd0360  ldr x8,[x22]
7101dd0364  ldr x8,[x8, #0x208]
7101dd0368  mov w1,#0x1
7101dd036c  mov x0,x22
7101dd0370  blr x8
7101dd0374  ldr x8,[x22]
7101dd0378  ldr x8,[x8, #0x388]
7101dd037c  mov x0,x22
7101dd0380  mov w1,wzr
7101dd0384  mov w2,wzr
7101dd0388  blr x8
7101dd038c  ldr x8,[x21]
7101dd0390  add x9,x8,#0x1b8
7101dd0394  ldr x8,[x8, #0x1b8]
7101dd0398  cbz x8,0x7101dd0400
7101dd039c  mov x10,x9
7101dd03a0  ldr w11,[x8, #0x20]
7101dd03a4  cmp w11,#0x0
7101dd03a8  cset w11,lt
7101dd03ac  csel x10,x10,x8,lt
7101dd03b0  ldr x8,[x8, w11, UXTW #0x3]
7101dd03b4  cbnz x8,0x7101dd03a0
7101dd03b8  cmp x10,x9
7101dd03bc  b.eq 0x7101dd0400
7101dd03c0  ldr w8,[x10, #0x20]
7101dd03c4  cmp w8,#0x0
7101dd03c8  b.gt 0x7101dd0400
7101dd03cc  ldr x21,[x10, #0x28]
7101dd03d0  cbz x21,0x7101dd0400
7101dd03d4  ldr x8,[x21]
7101dd03d8  ldr x8,[x8, #0x1f8]
7101dd03dc  mov w1,#0x1
7101dd03e0  mov x0,x21
7101dd03e4  blr x8
7101dd03e8  ldr x8,[x21]
7101dd03ec  ldr x8,[x8, #0x388]
7101dd03f0  mov x0,x21
7101dd03f4  mov w1,wzr
7101dd03f8  mov w2,wzr
7101dd03fc  blr x8
7101dd0400  adrp x1,0x7104281000
7101dd0404  add x1,x1,#0x205
7101dd0408  mov x8,sp
7101dd040c  mov x0,x20
7101dd0410  bl 0x7103776640
7101dd0414  ldr x21,[sp, #0x8]
7101dd0418  fmov s0,0x3f800000
7101dd041c  adrp x1,0x71042a3000
7101dd0420  add x1,x1,#0x4ee
7101dd0424  mov x0,x21
7101dd0428  bl 0x7103778300
7101dd042c  adrp x1,0x71043ad000
7101dd0430  add x1,x1,#0xfe3
7101dd0434  sub x8,x29,#0xa0
7101dd0438  mov x0,sp
7101dd043c  sub x24,x29,#0xa0
7101dd0440  bl 0x7103776910
7101dd0444  adrp x1,0x7104433000
7101dd0448  add x1,x1,#0x549
7101dd044c  sub x0,x29,#0xa0
7101dd0450  bl 0x710377a120
7101dd0454  ldur x0,[x29, #-0x98]
7101dd0458  adrp x22,0x710523d000
7101dd045c  add x22,x22,#0x9a8
7101dd0460  stp x22,xzr,[x29, #-0xa0]
7101dd0464  cbz x0,0x7101dd046c
7101dd0468  bl 0x710392eb40
7101dd046c  adrp x1,0x7104431000
7101dd0470  add x1,x1,#0x6d5
7101dd0474  sub x8,x29,#0xa0
7101dd0478  mov x0,sp
7101dd047c  bl 0x7103776910
7101dd0480  ldr x8,[x19, #0x8]
7101dd0484  add x9,x8,#0x8
7101dd0488  cmp x9,x24
7101dd048c  b.eq 0x7101dd04a8
7101dd0490  ldur x9,[x29, #-0x98]
7101dd0494  stur xzr,[x29, #-0x98]
7101dd0498  ldr x0,[x8, #0x10]
7101dd049c  str x9,[x8, #0x10]
7101dd04a0  cbz x0,0x7101dd04a8
7101dd04a4  bl 0x710392eb40
7101dd04a8  ldur x0,[x29, #-0x98]
7101dd04ac  stp x22,xzr,[x29, #-0xa0]
7101dd04b0  cbz x0,0x7101dd04b8
7101dd04b4  bl 0x710392eb40
7101dd04b8  ldr x8,[x19, #0x20]
7101dd04bc  ldr x8,[x8]
7101dd04c0  ldrh w8,[x8, #0x18]
7101dd04c4  tst w8,#0xff
7101dd04c8  b.eq 0x7101dd05fc
7101dd04cc  ldr x10,[x19, #0x8]
7101dd04d0  ldrb w9,[x10, #0x3a]
7101dd04d4  cbz w9,0x7101dd04e4
7101dd04d8  ldrb w9,[x10, #0x3b]
7101dd04dc  cmp w9,w8, LSR #0x8
7101dd04e0  b.eq 0x7101dd05fc
7101dd04e4  strh w8,[x10, #0x3a]
7101dd04e8  lsr w9,w8,#0x8
7101dd04ec  ldr x8,[x19, #0x8]
7101dd04f0  add x0,x8,#0x8
7101dd04f4  cmp w9,#0x3
7101dd04f8  b.hi 0x7101dd0588
7101dd04fc  cmp w9,#0x4
7101dd0500  b.hi 0x7101dd0b9c
7101dd0504  adrp x8,0x71044fb000
7101dd0508  add x8,x8,#0x5dc
7101dd050c  ldrsw x9,[x8, x9, LSL #0x2]
7101dd0510  add x8,x9,x8
7101dd0514  br x8
7101dd0518  mov x9,#0x1300000000
7101dd051c  stur x9,[x29, #-0xa0]
7101dd0520  mov x9,#0x6e6d
7101dd0524  movk x9,#0x5f75, LSL #16
7101dd0528  sub x10,x29,#0xa0
7101dd052c  add x1,x10,#0x8
7101dd0530  movk x9,#0x7073, LSL #32
7101dd0534  movk x9,#0x7269, LSL #48
7101dd0538  stur x9,[x29, #-0x98]
7101dd053c  add x9,x10,#0x9
7101dd0540  mov x10,#0x7469
7101dd0544  movk x10,#0x5f73, LSL #16
7101dd0548  movk x10,#0x6f73, LSL #32
7101dd054c  movk x10,#0x7472, LSL #48
7101dd0550  stur x10,[x29, #-0x90]
7101dd0554  mov w10,#0x315f
7101dd0558  movk w10,#0x38, LSL #16
7101dd055c  stur w10,[x29, #-0x88]
7101dd0560  mov w8,#0x9dc5
7101dd0564  movk w8,#0x811c, LSL #16
7101dd0568  mov w11,#0x6d
7101dd056c  mov w10,#0x89
7101dd0570  mul w8,w8,w10
7101dd0574  and w11,w11,#0xff
7101dd0578  eor w8,w8,w11
7101dd057c  ldrb w11,[x9], #0x1
7101dd0580  cbnz w11,0x7101dd0570
7101dd0584  b 0x7101dd05f4
7101dd0588  mov x9,#0x1300000000
7101dd058c  stur x9,[x29, #-0xa0]
7101dd0590  mov x9,#0x6e6d
7101dd0594  movk x9,#0x5f75, LSL #16
7101dd0598  sub x10,x29,#0xa0
7101dd059c  add x1,x10,#0x8
7101dd05a0  movk x9,#0x7073, LSL #32
7101dd05a4  movk x9,#0x7269, LSL #48
7101dd05a8  stur x9,[x29, #-0x98]
7101dd05ac  add x9,x10,#0x9
7101dd05b0  mov x10,#0x7469
7101dd05b4  movk x10,#0x5f73, LSL #16
7101dd05b8  movk x10,#0x6f73, LSL #32
7101dd05bc  movk x10,#0x7472, LSL #48
7101dd05c0  stur x10,[x29, #-0x90]
7101dd05c4  mov w10,#0x325f
7101dd05c8  movk w10,#0x35, LSL #16
7101dd05cc  stur w10,[x29, #-0x88]
7101dd05d0  mov w8,#0x9dc5
7101dd05d4  movk w8,#0x811c, LSL #16
7101dd05d8  mov w11,#0x6d
7101dd05dc  mov w10,#0x89
7101dd05e0  mul w8,w8,w10
7101dd05e4  and w11,w11,#0xff
7101dd05e8  eor w8,w8,w11
7101dd05ec  ldrb w11,[x9], #0x1
7101dd05f0  cbnz w11,0x7101dd05e0
7101dd05f4  stur w8,[x29, #-0xa0]
7101dd05f8  bl 0x710377a120
7101dd05fc  adrp x8,0x710523d000
7101dd0600  add x8,x8,#0x988
7101dd0604  stp x8,xzr,[sp]
7101dd0608  cbz x21,0x7101dd0624
7101dd060c  ldr x0,[x21, #0x18]
7101dd0610  stp x22,xzr,[x21, #0x10]
7101dd0614  cbz x0,0x7101dd061c
7101dd0618  bl 0x710392eb40
7101dd061c  mov x0,x21
7101dd0620  bl 0x710392eb40
7101dd0624  ldr x0,[sp, #0x120]
7101dd0628  add x8,sp,#0x10
7101dd062c  add x8,x8,#0xf0
7101dd0630  cmp x8,x0
7101dd0634  b.eq 0x7101dd0648
7101dd0638  cbz x0,0x7101dd0654
7101dd063c  ldr x8,[x0]
7101dd0640  ldr x8,[x8, #0x28]
7101dd0644  b 0x7101dd0650
7101dd0648  ldr x8,[x0]
7101dd064c  ldr x8,[x8, #0x20]
7101dd0650  blr x8
7101dd0654  ldr x0,[sp, #0xf0]
7101dd0658  add x8,sp,#0x10
7101dd065c  add x8,x8,#0xc0
7101dd0660  cmp x8,x0
7101dd0664  b.eq 0x7101dd0678
7101dd0668  cbz x0,0x7101dd0684
7101dd066c  ldr x8,[x0]
7101dd0670  ldr x8,[x8, #0x28]
7101dd0674  b 0x7101dd0680
7101dd0678  ldr x8,[x0]
7101dd067c  ldr x8,[x8, #0x20]
7101dd0680  blr x8
7101dd0684  ldr x0,[sp, #0xc0]
7101dd0688  add x8,sp,#0x10
7101dd068c  add x8,x8,#0x90
7101dd0690  cmp x8,x0
7101dd0694  b.eq 0x7101dd06a8
7101dd0698  cbz x0,0x7101dd06b4
7101dd069c  ldr x8,[x0]
7101dd06a0  ldr x8,[x8, #0x28]
7101dd06a4  b 0x7101dd06b0
7101dd06a8  ldr x8,[x0]
7101dd06ac  ldr x8,[x8, #0x20]
7101dd06b0  blr x8
7101dd06b4  ldr x0,[sp, #0x90]
7101dd06b8  add x8,sp,#0x10
7101dd06bc  add x8,x8,#0x60
7101dd06c0  cmp x8,x0
7101dd06c4  b.eq 0x7101dd06d8
7101dd06c8  cbz x0,0x7101dd06e4
7101dd06cc  ldr x8,[x0]
7101dd06d0  ldr x8,[x8, #0x28]
7101dd06d4  b 0x7101dd06e0
7101dd06d8  ldr x8,[x0]
7101dd06dc  ldr x8,[x8, #0x20]
7101dd06e0  blr x8
7101dd06e4  ldr x0,[sp, #0x60]
7101dd06e8  add x8,sp,#0x10
7101dd06ec  add x8,x8,#0x30
7101dd06f0  cmp x8,x0
7101dd06f4  b.eq 0x7101dd0708
7101dd06f8  cbz x0,0x7101dd0714
7101dd06fc  ldr x8,[x0]
7101dd0700  ldr x8,[x8, #0x28]
7101dd0704  b 0x7101dd0710
7101dd0708  ldr x8,[x0]
7101dd070c  ldr x8,[x8, #0x20]
7101dd0710  blr x8
7101dd0714  mov x8,#0x41800000
7101dd0718  movk x8,#0x4248, LSL #48
7101dd071c  mov x9,#0x3f800000
7101dd0720  ldr x21,[x19, #0x8]
7101dd0724  movk x9,#0x101, LSL #32
7101dd0728  movk x9,#0x1, LSL #48
7101dd072c  stp xzr,x8,[sp, #0x10]
7101dd0730  mov w8,#0x1
7101dd0734  str x9,[sp, #0x20]
7101dd0738  strh wzr,[sp, #0x28]
7101dd073c  strb w8,[sp, #0x2a]
7101dd0740  str xzr,[sp, #0x60]
7101dd0744  adrp x10,0x71050b0000
7101dd0748  add x10,x10,#0x918
7101dd074c  str xzr,[sp, #0x90]
7101dd0750  sub x22,x29,#0xa0
7101dd0754  sub x0,x29,#0xa0
7101dd0758  str xzr,[sp, #0xc0]
7101dd075c  str xzr,[sp, #0xf0]
7101dd0760  str xzr,[sp, #0x120]
7101dd0764  strb wzr,[sp, #0x31]
7101dd0768  sturh wzr,[sp, #0x2f]
7101dd076c  stur wzr,[sp, #0x2b]
7101dd0770  ldr x9,[x19, #0x20]
7101dd0774  ldr x9,[x9]
7101dd0778  ldp x11,x9,[x9]
7101dd077c  str w8,[sp, #0x24]
7101dd0780  sub x9,x9,x11
7101dd0784  add x11,sp,#0x10
7101dd0788  lsr x9,x9,#0x2
7101dd078c  stp xzr,x19,[x29, #-0x90]
7101dd0790  str w9,[sp, #0x14]
7101dd0794  adrp x9,0x7101dd2000
7101dd0798  add x9,x9,#0x690
7101dd079c  add x1,x11,#0x90
7101dd07a0  str w23,[sp, #0x2c]
7101dd07a4  strb w8,[sp, #0x30]
7101dd07a8  stur x22,[x29, #-0x80]
7101dd07ac  stp x10,x9,[x29, #-0xa0]
7101dd07b0  bl 0x71003cb050
7101dd07b4  ldur x0,[x29, #-0x80]
7101dd07b8  cmp x22,x0
7101dd07bc  b.eq 0x7101dd07d0
7101dd07c0  cbz x0,0x7101dd07dc
7101dd07c4  ldr x8,[x0]
7101dd07c8  ldr x8,[x8, #0x28]
7101dd07cc  b 0x7101dd07d8
7101dd07d0  ldr x8,[x0]
7101dd07d4  ldr x8,[x8, #0x20]
7101dd07d8  blr x8
7101dd07dc  add x8,sp,#0x10
7101dd07e0  add x1,x8,#0xc0
7101dd07e4  adrp x8,0x7105186000
7101dd07e8  add x8,x8,#0x238
7101dd07ec  sub x22,x29,#0xa0
7101dd07f0  stur x22,[x29, #-0x80]
7101dd07f4  sub x0,x29,#0xa0
7101dd07f8  add x21,x21,#0x18
7101dd07fc  stur x8,[x29, #-0xa0]
7101dd0800  bl 0x71003cb050
7101dd0804  ldur x0,[x29, #-0x80]
7101dd0808  cmp x22,x0
7101dd080c  b.eq 0x7101dd0820
7101dd0810  cbz x0,0x7101dd082c
7101dd0814  ldr x8,[x0]
7101dd0818  ldr x8,[x8, #0x28]
7101dd081c  b 0x7101dd0828
7101dd0820  ldr x8,[x0]
7101dd0824  ldr x8,[x8, #0x20]
7101dd0828  blr x8
7101dd082c  ldr x4,[x19, #0x10]
7101dd0830  adrp x2,0x710424f000
7101dd0834  add x2,x2,#0xc05
7101dd0838  add x3,sp,#0x10
7101dd083c  mov x0,x21
7101dd0840  mov x1,x20
7101dd0844  bl 0x7103781a20
7101dd0848  ldr x21,[x21]
7101dd084c  stp xzr,xzr,[x29, #-0x98]
7101dd0850  stur xzr,[x29, #-0xa0]
7101dd0854  ldp x8,x9,[x21, #0x168]
7101dd0858  sub x8,x9,x8
7101dd085c  asr x1,x8,#0x3
7101dd0860  sub x0,x29,#0xa0
7101dd0864  bl 0x71019bb740
7101dd0868  ldp x20,x21,[x21, #0x168]
7101dd086c  cmp x20,x21
7101dd0870  b.eq 0x7101dd08b0
7101dd0874  ldr x8,[x20]
7101dd0878  add x1,x8,#0x8
7101dd087c  ldp x0,x8,[x29, #-0x98]
7101dd0880  cmp x0,x8
7101dd0884  b.eq 0x7101dd089c
7101dd0888  bl 0x7103776390
7101dd088c  ldur x8,[x29, #-0x98]
7101dd0890  add x8,x8,#0x10
7101dd0894  stur x8,[x29, #-0x98]
7101dd0898  b 0x7101dd08a4
7101dd089c  sub x0,x29,#0xa0
7101dd08a0  bl 0x71019bb8f0
7101dd08a4  add x20,x20,#0x8
7101dd08a8  cmp x21,x20
7101dd08ac  b.ne 0x7101dd0874
7101dd08b0  ldp x22,x23,[x29, #-0xa0]
7101dd08b4  cmp x22,x23
7101dd08b8  b.eq 0x7101dd0a34
7101dd08bc  mov w24,#0x8
7101dd08c0  adrp x25,0x7105332000
7101dd08c4  mov w0,#0x10
7101dd08c8  mov w1,#0x8
7101dd08cc  bl 0x710392e290
7101dd08d0  mov x20,x0
7101dd08d4  cbnz x0,0x7101dd0918
7101dd08d8  ldr x0,[x25, #0xf00]
7101dd08dc  cbz x0,0x7101dd0914
7101dd08e0  stur wzr,[x29, #-0x44]
7101dd08e4  str x24,[sp]
7101dd08e8  ldr x8,[x0]
7101dd08ec  ldr x8,[x8, #0x30]
7101dd08f0  sub x1,x29,#0x44
7101dd08f4  mov x2,sp
7101dd08f8  blr x8
7101dd08fc  tbz w0,#0x0,0x7101dd0914
7101dd0900  mov w0,#0x10
7101dd0904  mov w1,#0x8
7101dd0908  bl 0x710392e290
7101dd090c  mov x20,x0
7101dd0910  cbnz x0,0x7101dd0918
7101dd0914  mov x20,xzr
7101dd0918  str xzr,[x20]
7101dd091c  ldr x8,[x22, #0x8]
7101dd0920  ldr x8,[x8, #0x8]
7101dd0924  cbz x8,0x7101dd0a18
7101dd0928  ldr x0,[x8, #0x60]
7101dd092c  cbz x0,0x7101dd0a18
7101dd0930  ldr x8,[x8, #0x18]
7101dd0934  add x1,x8,#0xb0
7101dd0938  bl 0x7103796f20
7101dd093c  str x0,[x20]
7101dd0940  cbz x0,0x7101dd0a1c
7101dd0944  ldr x8,[x0]
7101dd0948  ldr x8,[x8, #0x1f8]
7101dd094c  mov w1,#0x1
7101dd0950  mov x21,x0
7101dd0954  mov w26,#0x1
7101dd0958  blr x8
7101dd095c  ldr x8,[x21]
7101dd0960  ldr x8,[x8, #0x200]
7101dd0964  mov x0,x21
7101dd0968  blr x8
7101dd096c  tbz w0,#0x0,0x7101dd0984
7101dd0970  ldr x8,[x21]
7101dd0974  ldr x8,[x8, #0x210]
7101dd0978  mov x0,x21
7101dd097c  blr x8
7101dd0980  eor w26,w0,#0x1
7101dd0984  ldr x8,[x21]
7101dd0988  ldr x8,[x8, #0x388]
7101dd098c  and w1,w26,#0x1
7101dd0990  mov x0,x21
7101dd0994  mov w2,wzr
7101dd0998  blr x8
7101dd099c  ldr x21,[x20]
7101dd09a0  cbz x21,0x7101dd0a1c
7101dd09a4  ldr x8,[x21]
7101dd09a8  ldr x8,[x8, #0x208]
7101dd09ac  mov w1,#0x1
7101dd09b0  mov x0,x21
7101dd09b4  mov w26,#0x1
7101dd09b8  blr x8
7101dd09bc  ldr x8,[x21]
7101dd09c0  ldr x8,[x8, #0x200]
7101dd09c4  mov x0,x21
7101dd09c8  blr x8
7101dd09cc  tbz w0,#0x0,0x7101dd09e4
7101dd09d0  ldr x8,[x21]
7101dd09d4  ldr x8,[x8, #0x210]
7101dd09d8  mov x0,x21
7101dd09dc  blr x8
7101dd09e0  eor w26,w0,#0x1
7101dd09e4  ldr x8,[x21]
7101dd09e8  ldr x8,[x8, #0x388]
7101dd09ec  and w1,w26,#0x1
7101dd09f0  mov x0,x21
7101dd09f4  mov w2,wzr
7101dd09f8  blr x8
7101dd09fc  ldr x0,[x20]
7101dd0a00  cbz x0,0x7101dd0a1c
7101dd0a04  ldr x8,[x0]
7101dd0a08  ldr x8,[x8, #0x280]
7101dd0a0c  mov w1,wzr
7101dd0a10  blr x8
7101dd0a14  b 0x7101dd0a1c
7101dd0a18  str xzr,[x20]
7101dd0a1c  mov x0,x20
7101dd0a20  bl 0x710392eb40
7101dd0a24  add x22,x22,#0x10
7101dd0a28  cmp x23,x22
7101dd0a2c  b.ne 0x7101dd08c4
7101dd0a30  ldur x22,[x29, #-0xa0]
7101dd0a34  cbz x22,0x7101dd0a6c
7101dd0a38  ldur x20,[x29, #-0x98]
7101dd0a3c  cmp x20,x22
7101dd0a40  b.eq 0x7101dd0b8c
7101dd0a44  ldr x8,[x20, #-0x10]!
7101dd0a48  ldr x8,[x8]
7101dd0a4c  mov x0,x20
7101dd0a50  blr x8
7101dd0a54  cmp x22,x20
7101dd0a58  b.ne 0x7101dd0a44
7101dd0a5c  ldur x0,[x29, #-0xa0]
7101dd0a60  stur x22,[x29, #-0x98]
7101dd0a64  cbz x0,0x7101dd0a6c
7101dd0a68  bl 0x710392eb40
7101dd0a6c  ldr x0,[sp, #0x120]
7101dd0a70  add x8,sp,#0x10
7101dd0a74  add x8,x8,#0xf0
7101dd0a78  cmp x8,x0
7101dd0a7c  b.eq 0x7101dd0a90
7101dd0a80  cbz x0,0x7101dd0a9c
7101dd0a84  ldr x8,[x0]
7101dd0a88  ldr x8,[x8, #0x28]
7101dd0a8c  b 0x7101dd0a98
7101dd0a90  ldr x8,[x0]
7101dd0a94  ldr x8,[x8, #0x20]
7101dd0a98  blr x8
7101dd0a9c  ldr x0,[sp, #0xf0]
7101dd0aa0  add x8,sp,#0x10
7101dd0aa4  add x8,x8,#0xc0
7101dd0aa8  cmp x8,x0
7101dd0aac  b.eq 0x7101dd0ac0
7101dd0ab0  cbz x0,0x7101dd0acc
7101dd0ab4  ldr x8,[x0]
7101dd0ab8  ldr x8,[x8, #0x28]
7101dd0abc  b 0x7101dd0ac8
7101dd0ac0  ldr x8,[x0]
7101dd0ac4  ldr x8,[x8, #0x20]
7101dd0ac8  blr x8
7101dd0acc  ldr x0,[sp, #0xc0]
7101dd0ad0  add x8,sp,#0x10
7101dd0ad4  add x8,x8,#0x90
7101dd0ad8  cmp x8,x0
7101dd0adc  b.eq 0x7101dd0af0
7101dd0ae0  cbz x0,0x7101dd0afc
7101dd0ae4  ldr x8,[x0]
7101dd0ae8  ldr x8,[x8, #0x28]
7101dd0aec  b 0x7101dd0af8
7101dd0af0  ldr x8,[x0]
7101dd0af4  ldr x8,[x8, #0x20]
7101dd0af8  blr x8
7101dd0afc  ldr x0,[sp, #0x90]
7101dd0b00  add x8,sp,#0x10
7101dd0b04  add x8,x8,#0x60
7101dd0b08  cmp x8,x0
7101dd0b0c  b.eq 0x7101dd0b20
7101dd0b10  cbz x0,0x7101dd0b2c
7101dd0b14  ldr x8,[x0]
7101dd0b18  ldr x8,[x8, #0x28]
7101dd0b1c  b 0x7101dd0b28
7101dd0b20  ldr x8,[x0]
7101dd0b24  ldr x8,[x8, #0x20]
7101dd0b28  blr x8
7101dd0b2c  ldr x0,[sp, #0x60]
7101dd0b30  add x8,sp,#0x10
7101dd0b34  add x8,x8,#0x30
7101dd0b38  cmp x8,x0
7101dd0b3c  b.eq 0x7101dd0b50
7101dd0b40  cbz x0,0x7101dd0b5c
7101dd0b44  ldr x8,[x0]
7101dd0b48  ldr x8,[x8, #0x28]
7101dd0b4c  b 0x7101dd0b58
7101dd0b50  ldr x8,[x0]
7101dd0b54  ldr x8,[x8, #0x20]
7101dd0b58  blr x8
7101dd0b5c  ldr x8,[x19]
7101dd0b60  ldr x2,[x8, #0x30]
7101dd0b64  mov x0,x19
7101dd0b68  ldp x29,x30,[sp, #0x1e0]
7101dd0b6c  ldr x28,[sp, #0x190]
7101dd0b70  ldp x20,x19,[sp, #0x1d0]
7101dd0b74  mov w1,wzr
7101dd0b78  ldp x22,x21,[sp, #0x1c0]
7101dd0b7c  ldp x24,x23,[sp, #0x1b0]
7101dd0b80  ldp x26,x25,[sp, #0x1a0]
7101dd0b84  add sp,sp,#0x1f0
7101dd0b88  br x2
7101dd0b8c  mov x0,x22
7101dd0b90  stur x22,[x29, #-0x98]
7101dd0b94  cbnz x0,0x7101dd0a68
7101dd0b98  b 0x7101dd0a6c
7101dd0b9c  sub x8,x29,#0xa0
7101dd0ba0  sturb wzr,[x29, #-0x98]
7101dd0ba4  stur xzr,[x29, #-0xa0]
7101dd0ba8  add x1,x8,#0x8
7101dd0bac  b 0x7101dd05f8
7101dd0bb0  mov x9,#0x1300000000
7101dd0bb4  stur x9,[x29, #-0xa0]
7101dd0bb8  mov x9,#0x6e6d
7101dd0bbc  movk x9,#0x5f75, LSL #16
7101dd0bc0  sub x10,x29,#0xa0
7101dd0bc4  add x1,x10,#0x8
7101dd0bc8  movk x9,#0x7073, LSL #32
7101dd0bcc  movk x9,#0x7269, LSL #48
7101dd0bd0  stur x9,[x29, #-0x98]
7101dd0bd4  add x9,x10,#0x9
7101dd0bd8  mov x10,#0x7469
7101dd0bdc  movk x10,#0x5f73, LSL #16
7101dd0be0  movk x10,#0x6f73, LSL #32
7101dd0be4  movk x10,#0x7472, LSL #48
7101dd0be8  stur x10,[x29, #-0x90]
7101dd0bec  mov w10,#0x305f
7101dd0bf0  movk w10,#0x33, LSL #16
7101dd0bf4  stur w10,[x29, #-0x88]
7101dd0bf8  mov w8,#0x9dc5
7101dd0bfc  movk w8,#0x811c, LSL #16
7101dd0c00  mov w11,#0x6d
7101dd0c04  mov w10,#0x89
7101dd0c08  mul w8,w8,w10
7101dd0c0c  and w11,w11,#0xff
7101dd0c10  eor w8,w8,w11
7101dd0c14  ldrb w11,[x9], #0x1
7101dd0c18  cbnz w11,0x7101dd0c08
7101dd0c1c  b 0x7101dd05f4
7101dd0c20  mov x9,#0x1300000000
7101dd0c24  stur x9,[x29, #-0xa0]
7101dd0c28  mov x9,#0x6e6d
7101dd0c2c  movk x9,#0x5f75, LSL #16
7101dd0c30  sub x10,x29,#0xa0
7101dd0c34  add x1,x10,#0x8
7101dd0c38  movk x9,#0x7073, LSL #32
7101dd0c3c  movk x9,#0x7269, LSL #48
7101dd0c40  stur x9,[x29, #-0x98]
7101dd0c44  add x9,x10,#0x9
7101dd0c48  mov x10,#0x7469
7101dd0c4c  movk x10,#0x5f73, LSL #16
7101dd0c50  movk x10,#0x6f73, LSL #32
7101dd0c54  movk x10,#0x7472, LSL #48
7101dd0c58  stur x10,[x29, #-0x90]
7101dd0c5c  mov w10,#0x305f
7101dd0c60  movk w10,#0x34, LSL #16
7101dd0c64  stur w10,[x29, #-0x88]
7101dd0c68  mov w8,#0x9dc5
7101dd0c6c  movk w8,#0x811c, LSL #16
7101dd0c70  mov w11,#0x6d
7101dd0c74  mov w10,#0x89
7101dd0c78  mul w8,w8,w10
7101dd0c7c  and w11,w11,#0xff
7101dd0c80  eor w8,w8,w11
7101dd0c84  ldrb w11,[x9], #0x1
7101dd0c88  cbnz w11,0x7101dd0c78
7101dd0c8c  b 0x7101dd05f4
7101dd0c90  mov x9,#0x1300000000
7101dd0c94  stur x9,[x29, #-0xa0]
7101dd0c98  mov x9,#0x6e6d
7101dd0c9c  movk x9,#0x5f75, LSL #16
7101dd0ca0  sub x10,x29,#0xa0
7101dd0ca4  add x1,x10,#0x8
7101dd0ca8  movk x9,#0x7073, LSL #32
7101dd0cac  movk x9,#0x7269, LSL #48
7101dd0cb0  stur x9,[x29, #-0x98]
7101dd0cb4  add x9,x10,#0x9
7101dd0cb8  mov x10,#0x7469
7101dd0cbc  movk x10,#0x5f73, LSL #16
7101dd0cc0  movk x10,#0x6f73, LSL #32
7101dd0cc4  movk x10,#0x7472, LSL #48
7101dd0cc8  stur x10,[x29, #-0x90]
7101dd0ccc  mov w10,#0x305f
7101dd0cd0  movk w10,#0x32, LSL #16
7101dd0cd4  stur w10,[x29, #-0x88]
7101dd0cd8  mov w8,#0x9dc5
7101dd0cdc  movk w8,#0x811c, LSL #16
7101dd0ce0  mov w11,#0x6d
7101dd0ce4  mov w10,#0x89
7101dd0ce8  mul w8,w8,w10
7101dd0cec  and w11,w11,#0xff
7101dd0cf0  eor w8,w8,w11
7101dd0cf4  ldrb w11,[x9], #0x1
7101dd0cf8  cbnz w11,0x7101dd0ce8
7101dd0cfc  b 0x7101dd05f4
7101dd0d00  mov x9,#0x1300000000
7101dd0d04  stur x9,[x29, #-0xa0]
7101dd0d08  mov x9,#0x6e6d
7101dd0d0c  movk x9,#0x5f75, LSL #16
7101dd0d10  sub x10,x29,#0xa0
7101dd0d14  add x1,x10,#0x8
7101dd0d18  movk x9,#0x7073, LSL #32
7101dd0d1c  movk x9,#0x7269, LSL #48
7101dd0d20  stur x9,[x29, #-0x98]
7101dd0d24  add x9,x10,#0x9
7101dd0d28  mov x10,#0x7469
7101dd0d2c  movk x10,#0x5f73, LSL #16
7101dd0d30  movk x10,#0x6f73, LSL #32
7101dd0d34  movk x10,#0x7472, LSL #48
7101dd0d38  stur x10,[x29, #-0x90]
7101dd0d3c  mov w10,#0x325f
7101dd0d40  movk w10,#0x32, LSL #16
7101dd0d44  stur w10,[x29, #-0x88]
7101dd0d48  mov w8,#0x9dc5
7101dd0d4c  movk w8,#0x811c, LSL #16
7101dd0d50  mov w11,#0x6d
7101dd0d54  mov w10,#0x89
7101dd0d58  mul w8,w8,w10
7101dd0d5c  and w11,w11,#0xff
7101dd0d60  eor w8,w8,w11
7101dd0d64  ldrb w11,[x9], #0x1
7101dd0d68  cbnz w11,0x7101dd0d58
7101dd0d6c  b 0x7101dd05f4
