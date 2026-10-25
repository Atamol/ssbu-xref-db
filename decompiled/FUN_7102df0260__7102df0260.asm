// addr:      7102df0260
// offset:    0x2df0260
// name:      FUN_7102df0260
// mangled:   
// size:      3052

7102df0260  stp d11,d10,[sp, #-0x60]!
7102df0264  stp d9,d8,[sp, #0x10]
7102df0268  str x28,[sp, #0x20]
7102df026c  stp x22,x21,[sp, #0x30]
7102df0270  stp x20,x19,[sp, #0x40]
7102df0274  stp x29,x30,[sp, #0x50]
7102df0278  add x29,sp,#0x50
7102df027c  sub sp,sp,#0x1, LSL #12
7102df0280  sub sp,sp,#0xc60
7102df0284  mov x19,x0
7102df0288  bl 0x71025e0bc0
7102df028c  ldr w8,[x19, #0x990]
7102df0290  cbnz w8,0x7102df0e24
7102df0294  ldr x9,[x19, #0x8b0]
7102df0298  ldr x8,[x9, #0x18]
7102df029c  cbz x8,0x7102df0318
7102df02a0  ldrb w10,[x8, #0x110]
7102df02a4  cbz w10,0x7102df0318
7102df02a8  ldrb w10,[x8, #0xe0]
7102df02ac  cbz w10,0x7102df0318
7102df02b0  ldr x10,[x9, #0x8]
7102df02b4  ldr x9,[x9, #0x28]
7102df02b8  orr w11,wzr,#0xc
7102df02bc  ldr x10,[x10, #0xb0]
7102df02c0  ldrb w9,[x9, #0x11]
7102df02c4  madd x9,x9,x11,x10
7102df02c8  adrp x10,0x7104472000
7102df02cc  ldr s0,[x10, #0xc34]
7102df02d0  fmov v3.4S,#0x3f800000
7102df02d4  ldp s1,s2,[x9]
7102df02d8  fdiv s2,s2,s0
7102df02dc  fdiv s1,s1,s0
7102df02e0  mov v3.S[0x0],v1.S[0x0]
7102df02e4  ldr s1,[x9, #0x8]
7102df02e8  fdiv s0,s1,s0
7102df02ec  adrp x1,0x71042a1000
7102df02f0  add x1,x1,#0x46d
7102df02f4  mov v3.S[0x1],v2.S[0x0]
7102df02f8  mov v3.S[0x2],v0.S[0x0]
7102df02fc  orr w2,wzr,#0x3
7102df0300  str q3,[sp, #0xe60]
7102df0304  ldr x0,[x8, #0x90]
7102df0308  ldr x8,[x0]
7102df030c  ldr x8,[x8, #0x268]
7102df0310  add x3,sp,#0xe60
7102df0314  blr x8
7102df0318  ldr x9,[x19, #0x8b8]
7102df031c  ldr x8,[x9, #0x18]
7102df0320  cbz x8,0x7102df039c
7102df0324  ldrb w10,[x8, #0x110]
7102df0328  cbz w10,0x7102df039c
7102df032c  ldrb w10,[x8, #0xe0]
7102df0330  cbz w10,0x7102df039c
7102df0334  ldr x10,[x9, #0x8]
7102df0338  ldr x9,[x9, #0x28]
7102df033c  orr w11,wzr,#0xc
7102df0340  ldr x10,[x10, #0xb0]
7102df0344  ldrb w9,[x9, #0x11]
7102df0348  madd x9,x9,x11,x10
7102df034c  adrp x10,0x7104472000
7102df0350  ldr s0,[x10, #0xc34]
7102df0354  fmov v3.4S,#0x3f800000
7102df0358  ldp s1,s2,[x9]
7102df035c  fdiv s2,s2,s0
7102df0360  fdiv s1,s1,s0
7102df0364  mov v3.S[0x0],v1.S[0x0]
7102df0368  ldr s1,[x9, #0x8]
7102df036c  fdiv s0,s1,s0
7102df0370  adrp x1,0x71042a1000
7102df0374  add x1,x1,#0x46d
7102df0378  mov v3.S[0x1],v2.S[0x0]
7102df037c  mov v3.S[0x2],v0.S[0x0]
7102df0380  orr w2,wzr,#0x3
7102df0384  str q3,[sp, #0xe60]
7102df0388  ldr x0,[x8, #0x90]
7102df038c  ldr x8,[x0]
7102df0390  ldr x8,[x8, #0x268]
7102df0394  add x3,sp,#0xe60
7102df0398  blr x8
7102df039c  ldr x9,[x19, #0x8c0]
7102df03a0  ldr x8,[x9, #0x18]
7102df03a4  cbz x8,0x7102df0420
7102df03a8  ldrb w10,[x8, #0x110]
7102df03ac  cbz w10,0x7102df0420
7102df03b0  ldrb w10,[x8, #0xe0]
7102df03b4  cbz w10,0x7102df0420
7102df03b8  ldr x10,[x9, #0x8]
7102df03bc  ldr x9,[x9, #0x28]
7102df03c0  orr w11,wzr,#0xc
7102df03c4  ldr x10,[x10, #0xb0]
7102df03c8  ldrb w9,[x9, #0x11]
7102df03cc  madd x9,x9,x11,x10
7102df03d0  adrp x10,0x7104472000
7102df03d4  ldr s0,[x10, #0xc34]
7102df03d8  fmov v3.4S,#0x3f800000
7102df03dc  ldp s1,s2,[x9]
7102df03e0  fdiv s2,s2,s0
7102df03e4  fdiv s1,s1,s0
7102df03e8  mov v3.S[0x0],v1.S[0x0]
7102df03ec  ldr s1,[x9, #0x8]
7102df03f0  fdiv s0,s1,s0
7102df03f4  adrp x1,0x71042a1000
7102df03f8  add x1,x1,#0x46d
7102df03fc  mov v3.S[0x1],v2.S[0x0]
7102df0400  mov v3.S[0x2],v0.S[0x0]
7102df0404  orr w2,wzr,#0x3
7102df0408  str q3,[sp, #0xe60]
7102df040c  ldr x0,[x8, #0x90]
7102df0410  ldr x8,[x0]
7102df0414  ldr x8,[x8, #0x268]
7102df0418  add x3,sp,#0xe60
7102df041c  blr x8
7102df0420  ldr x9,[x19, #0x8c8]
7102df0424  ldr x8,[x9, #0x18]
7102df0428  cbz x8,0x7102df04a4
7102df042c  ldrb w10,[x8, #0x110]
7102df0430  cbz w10,0x7102df04a4
7102df0434  ldrb w10,[x8, #0xe0]
7102df0438  cbz w10,0x7102df04a4
7102df043c  ldr x10,[x9, #0x8]
7102df0440  ldr x9,[x9, #0x28]
7102df0444  orr w11,wzr,#0xc
7102df0448  ldr x10,[x10, #0xb0]
7102df044c  ldrb w9,[x9, #0x11]
7102df0450  madd x9,x9,x11,x10
7102df0454  adrp x10,0x7104472000
7102df0458  ldr s0,[x10, #0xc34]
7102df045c  fmov v3.4S,#0x3f800000
7102df0460  ldp s1,s2,[x9]
7102df0464  fdiv s2,s2,s0
7102df0468  fdiv s1,s1,s0
7102df046c  mov v3.S[0x0],v1.S[0x0]
7102df0470  ldr s1,[x9, #0x8]
7102df0474  fdiv s0,s1,s0
7102df0478  adrp x1,0x71042a1000
7102df047c  add x1,x1,#0x46d
7102df0480  mov v3.S[0x1],v2.S[0x0]
7102df0484  mov v3.S[0x2],v0.S[0x0]
7102df0488  orr w2,wzr,#0x3
7102df048c  str q3,[sp, #0xe60]
7102df0490  ldr x0,[x8, #0x90]
7102df0494  ldr x8,[x0]
7102df0498  ldr x8,[x8, #0x268]
7102df049c  add x3,sp,#0xe60
7102df04a0  blr x8
7102df04a4  ldr x9,[x19, #0x8d0]
7102df04a8  ldr x8,[x9, #0x18]
7102df04ac  cbz x8,0x7102df0528
7102df04b0  ldrb w10,[x8, #0x110]
7102df04b4  cbz w10,0x7102df0528
7102df04b8  ldrb w10,[x8, #0xe0]
7102df04bc  cbz w10,0x7102df0528
7102df04c0  ldr x10,[x9, #0x8]
7102df04c4  ldr x9,[x9, #0x28]
7102df04c8  orr w11,wzr,#0xc
7102df04cc  ldr x10,[x10, #0xb0]
7102df04d0  ldrb w9,[x9, #0x11]
7102df04d4  madd x9,x9,x11,x10
7102df04d8  adrp x10,0x7104472000
7102df04dc  ldr s0,[x10, #0xc34]
7102df04e0  fmov v3.4S,#0x3f800000
7102df04e4  ldp s1,s2,[x9]
7102df04e8  fdiv s2,s2,s0
7102df04ec  fdiv s1,s1,s0
7102df04f0  mov v3.S[0x0],v1.S[0x0]
7102df04f4  ldr s1,[x9, #0x8]
7102df04f8  fdiv s0,s1,s0
7102df04fc  adrp x1,0x71042a1000
7102df0500  add x1,x1,#0x46d
7102df0504  mov v3.S[0x1],v2.S[0x0]
7102df0508  mov v3.S[0x2],v0.S[0x0]
7102df050c  orr w2,wzr,#0x3
7102df0510  str q3,[sp, #0xe60]
7102df0514  ldr x0,[x8, #0x90]
7102df0518  ldr x8,[x0]
7102df051c  ldr x8,[x8, #0x268]
7102df0520  add x3,sp,#0xe60
7102df0524  blr x8
7102df0528  ldr x9,[x19, #0x8d8]
7102df052c  ldr x8,[x9, #0x18]
7102df0530  cbz x8,0x7102df05ac
7102df0534  ldrb w10,[x8, #0x110]
7102df0538  cbz w10,0x7102df05ac
7102df053c  ldrb w10,[x8, #0xe0]
7102df0540  cbz w10,0x7102df05ac
7102df0544  ldr x10,[x9, #0x8]
7102df0548  ldr x9,[x9, #0x28]
7102df054c  orr w11,wzr,#0xc
7102df0550  ldr x10,[x10, #0xb0]
7102df0554  ldrb w9,[x9, #0x11]
7102df0558  madd x9,x9,x11,x10
7102df055c  adrp x10,0x7104472000
7102df0560  ldr s0,[x10, #0xc34]
7102df0564  fmov v3.4S,#0x3f800000
7102df0568  ldp s1,s2,[x9]
7102df056c  fdiv s2,s2,s0
7102df0570  fdiv s1,s1,s0
7102df0574  mov v3.S[0x0],v1.S[0x0]
7102df0578  ldr s1,[x9, #0x8]
7102df057c  fdiv s0,s1,s0
7102df0580  adrp x1,0x71042a1000
7102df0584  add x1,x1,#0x46d
7102df0588  mov v3.S[0x1],v2.S[0x0]
7102df058c  mov v3.S[0x2],v0.S[0x0]
7102df0590  orr w2,wzr,#0x3
7102df0594  str q3,[sp, #0xe60]
7102df0598  ldr x0,[x8, #0x90]
7102df059c  ldr x8,[x0]
7102df05a0  ldr x8,[x8, #0x268]
7102df05a4  add x3,sp,#0xe60
7102df05a8  blr x8
7102df05ac  ldr x9,[x19, #0x8e0]
7102df05b0  ldr x8,[x9, #0x18]
7102df05b4  cbz x8,0x7102df0630
7102df05b8  ldrb w10,[x8, #0x110]
7102df05bc  cbz w10,0x7102df0630
7102df05c0  ldrb w10,[x8, #0xe0]
7102df05c4  cbz w10,0x7102df0630
7102df05c8  ldr x10,[x9, #0x8]
7102df05cc  ldr x9,[x9, #0x28]
7102df05d0  orr w11,wzr,#0xc
7102df05d4  ldr x10,[x10, #0xb0]
7102df05d8  ldrb w9,[x9, #0x11]
7102df05dc  madd x9,x9,x11,x10
7102df05e0  adrp x10,0x7104472000
7102df05e4  ldr s0,[x10, #0xc34]
7102df05e8  fmov v3.4S,#0x3f800000
7102df05ec  ldp s1,s2,[x9]
7102df05f0  fdiv s2,s2,s0
7102df05f4  fdiv s1,s1,s0
7102df05f8  mov v3.S[0x0],v1.S[0x0]
7102df05fc  ldr s1,[x9, #0x8]
7102df0600  fdiv s0,s1,s0
7102df0604  adrp x1,0x71042a1000
7102df0608  add x1,x1,#0x46d
7102df060c  mov v3.S[0x1],v2.S[0x0]
7102df0610  mov v3.S[0x2],v0.S[0x0]
7102df0614  orr w2,wzr,#0x3
7102df0618  str q3,[sp, #0xe60]
7102df061c  ldr x0,[x8, #0x90]
7102df0620  ldr x8,[x0]
7102df0624  ldr x8,[x8, #0x268]
7102df0628  add x3,sp,#0xe60
7102df062c  blr x8
7102df0630  ldr x9,[x19, #0x8e8]
7102df0634  ldr x8,[x9, #0x18]
7102df0638  cbz x8,0x7102df06b4
7102df063c  ldrb w10,[x8, #0x110]
7102df0640  cbz w10,0x7102df06b4
7102df0644  ldrb w10,[x8, #0xe0]
7102df0648  cbz w10,0x7102df06b4
7102df064c  ldr x10,[x9, #0x8]
7102df0650  ldr x9,[x9, #0x28]
7102df0654  orr w11,wzr,#0xc
7102df0658  ldr x10,[x10, #0xb0]
7102df065c  ldrb w9,[x9, #0x11]
7102df0660  madd x9,x9,x11,x10
7102df0664  adrp x10,0x7104472000
7102df0668  ldr s0,[x10, #0xc34]
7102df066c  fmov v3.4S,#0x3f800000
7102df0670  ldp s1,s2,[x9]
7102df0674  fdiv s2,s2,s0
7102df0678  fdiv s1,s1,s0
7102df067c  mov v3.S[0x0],v1.S[0x0]
7102df0680  ldr s1,[x9, #0x8]
7102df0684  fdiv s0,s1,s0
7102df0688  adrp x1,0x71042a1000
7102df068c  add x1,x1,#0x46d
7102df0690  mov v3.S[0x1],v2.S[0x0]
7102df0694  mov v3.S[0x2],v0.S[0x0]
7102df0698  orr w2,wzr,#0x3
7102df069c  str q3,[sp, #0xe60]
7102df06a0  ldr x0,[x8, #0x90]
7102df06a4  ldr x8,[x0]
7102df06a8  ldr x8,[x8, #0x268]
7102df06ac  add x3,sp,#0xe60
7102df06b0  blr x8
7102df06b4  ldr x9,[x19, #0x8f0]
7102df06b8  ldr x8,[x9, #0x18]
7102df06bc  cbz x8,0x7102df0738
7102df06c0  ldrb w10,[x8, #0x110]
7102df06c4  cbz w10,0x7102df0738
7102df06c8  ldrb w10,[x8, #0xe0]
7102df06cc  cbz w10,0x7102df0738
7102df06d0  ldr x10,[x9, #0x8]
7102df06d4  ldr x9,[x9, #0x28]
7102df06d8  orr w11,wzr,#0xc
7102df06dc  ldr x10,[x10, #0xb0]
7102df06e0  ldrb w9,[x9, #0x11]
7102df06e4  madd x9,x9,x11,x10
7102df06e8  adrp x10,0x7104472000
7102df06ec  ldr s0,[x10, #0xc34]
7102df06f0  fmov v3.4S,#0x3f800000
7102df06f4  ldp s1,s2,[x9]
7102df06f8  fdiv s2,s2,s0
7102df06fc  fdiv s1,s1,s0
7102df0700  mov v3.S[0x0],v1.S[0x0]
7102df0704  ldr s1,[x9, #0x8]
7102df0708  fdiv s0,s1,s0
7102df070c  adrp x1,0x71042a1000
7102df0710  add x1,x1,#0x46d
7102df0714  mov v3.S[0x1],v2.S[0x0]
7102df0718  mov v3.S[0x2],v0.S[0x0]
7102df071c  orr w2,wzr,#0x3
7102df0720  str q3,[sp, #0xe60]
7102df0724  ldr x0,[x8, #0x90]
7102df0728  ldr x8,[x0]
7102df072c  ldr x8,[x8, #0x268]
7102df0730  add x3,sp,#0xe60
7102df0734  blr x8
7102df0738  ldr x9,[x19, #0x8f8]
7102df073c  ldr x8,[x9, #0x18]
7102df0740  cbz x8,0x7102df07bc
7102df0744  ldrb w10,[x8, #0x110]
7102df0748  cbz w10,0x7102df07bc
7102df074c  ldrb w10,[x8, #0xe0]
7102df0750  cbz w10,0x7102df07bc
7102df0754  ldr x10,[x9, #0x8]
7102df0758  ldr x9,[x9, #0x28]
7102df075c  orr w11,wzr,#0xc
7102df0760  ldr x10,[x10, #0xb0]
7102df0764  ldrb w9,[x9, #0x11]
7102df0768  madd x9,x9,x11,x10
7102df076c  adrp x10,0x7104472000
7102df0770  ldr s0,[x10, #0xc34]
7102df0774  fmov v3.4S,#0x3f800000
7102df0778  ldp s1,s2,[x9]
7102df077c  fdiv s2,s2,s0
7102df0780  fdiv s1,s1,s0
7102df0784  mov v3.S[0x0],v1.S[0x0]
7102df0788  ldr s1,[x9, #0x8]
7102df078c  fdiv s0,s1,s0
7102df0790  adrp x1,0x71042a1000
7102df0794  add x1,x1,#0x46d
7102df0798  mov v3.S[0x1],v2.S[0x0]
7102df079c  mov v3.S[0x2],v0.S[0x0]
7102df07a0  orr w2,wzr,#0x3
7102df07a4  str q3,[sp, #0xe60]
7102df07a8  ldr x0,[x8, #0x90]
7102df07ac  ldr x8,[x0]
7102df07b0  ldr x8,[x8, #0x268]
7102df07b4  add x3,sp,#0xe60
7102df07b8  blr x8
7102df07bc  ldr x9,[x19, #0x900]
7102df07c0  ldr x8,[x9, #0x18]
7102df07c4  cbz x8,0x7102df0840
7102df07c8  ldrb w10,[x8, #0x110]
7102df07cc  cbz w10,0x7102df0840
7102df07d0  ldrb w10,[x8, #0xe0]
7102df07d4  cbz w10,0x7102df0840
7102df07d8  ldr x10,[x9, #0x8]
7102df07dc  ldr x9,[x9, #0x28]
7102df07e0  orr w11,wzr,#0xc
7102df07e4  ldr x10,[x10, #0xb0]
7102df07e8  ldrb w9,[x9, #0x11]
7102df07ec  madd x9,x9,x11,x10
7102df07f0  adrp x10,0x7104472000
7102df07f4  ldr s0,[x10, #0xc34]
7102df07f8  fmov v3.4S,#0x3f800000
7102df07fc  ldp s1,s2,[x9]
7102df0800  fdiv s2,s2,s0
7102df0804  fdiv s1,s1,s0
7102df0808  mov v3.S[0x0],v1.S[0x0]
7102df080c  ldr s1,[x9, #0x8]
7102df0810  fdiv s0,s1,s0
7102df0814  adrp x1,0x71042a1000
7102df0818  add x1,x1,#0x46d
7102df081c  mov v3.S[0x1],v2.S[0x0]
7102df0820  mov v3.S[0x2],v0.S[0x0]
7102df0824  orr w2,wzr,#0x3
7102df0828  str q3,[sp, #0xe60]
7102df082c  ldr x0,[x8, #0x90]
7102df0830  ldr x8,[x0]
7102df0834  ldr x8,[x8, #0x268]
7102df0838  add x3,sp,#0xe60
7102df083c  blr x8
7102df0840  ldr x9,[x19, #0x908]
7102df0844  ldr x8,[x9, #0x18]
7102df0848  cbz x8,0x7102df08c4
7102df084c  ldrb w10,[x8, #0x110]
7102df0850  cbz w10,0x7102df08c4
7102df0854  ldrb w10,[x8, #0xe0]
7102df0858  cbz w10,0x7102df08c4
7102df085c  ldr x10,[x9, #0x8]
7102df0860  ldr x9,[x9, #0x28]
7102df0864  orr w11,wzr,#0xc
7102df0868  ldr x10,[x10, #0xb0]
7102df086c  ldrb w9,[x9, #0x11]
7102df0870  madd x9,x9,x11,x10
7102df0874  adrp x10,0x7104472000
7102df0878  ldr s0,[x10, #0xc34]
7102df087c  fmov v3.4S,#0x3f800000
7102df0880  ldp s1,s2,[x9]
7102df0884  fdiv s2,s2,s0
7102df0888  fdiv s1,s1,s0
7102df088c  mov v3.S[0x0],v1.S[0x0]
7102df0890  ldr s1,[x9, #0x8]
7102df0894  fdiv s0,s1,s0
7102df0898  adrp x1,0x71042a1000
7102df089c  add x1,x1,#0x46d
7102df08a0  mov v3.S[0x1],v2.S[0x0]
7102df08a4  mov v3.S[0x2],v0.S[0x0]
7102df08a8  orr w2,wzr,#0x3
7102df08ac  str q3,[sp, #0xe60]
7102df08b0  ldr x0,[x8, #0x90]
7102df08b4  ldr x8,[x0]
7102df08b8  ldr x8,[x8, #0x268]
7102df08bc  add x3,sp,#0xe60
7102df08c0  blr x8
7102df08c4  ldr x9,[x19, #0x910]
7102df08c8  ldr x8,[x9, #0x18]
7102df08cc  cbz x8,0x7102df0948
7102df08d0  ldrb w10,[x8, #0x110]
7102df08d4  cbz w10,0x7102df0948
7102df08d8  ldrb w10,[x8, #0xe0]
7102df08dc  cbz w10,0x7102df0948
7102df08e0  ldr x10,[x9, #0x8]
7102df08e4  ldr x9,[x9, #0x28]
7102df08e8  orr w11,wzr,#0xc
7102df08ec  ldr x10,[x10, #0xb0]
7102df08f0  ldrb w9,[x9, #0x11]
7102df08f4  madd x9,x9,x11,x10
7102df08f8  adrp x10,0x7104472000
7102df08fc  ldr s0,[x10, #0xc34]
7102df0900  fmov v3.4S,#0x3f800000
7102df0904  ldp s1,s2,[x9]
7102df0908  fdiv s2,s2,s0
7102df090c  fdiv s1,s1,s0
7102df0910  mov v3.S[0x0],v1.S[0x0]
7102df0914  ldr s1,[x9, #0x8]
7102df0918  fdiv s0,s1,s0
7102df091c  adrp x1,0x71042a1000
7102df0920  add x1,x1,#0x46d
7102df0924  mov v3.S[0x1],v2.S[0x0]
7102df0928  mov v3.S[0x2],v0.S[0x0]
7102df092c  orr w2,wzr,#0x3
7102df0930  str q3,[sp, #0xe60]
7102df0934  ldr x0,[x8, #0x90]
7102df0938  ldr x8,[x0]
7102df093c  ldr x8,[x8, #0x268]
7102df0940  add x3,sp,#0xe60
7102df0944  blr x8
7102df0948  ldr x9,[x19, #0x918]
7102df094c  ldr x8,[x9, #0x18]
7102df0950  cbz x8,0x7102df09cc
7102df0954  ldrb w10,[x8, #0x110]
7102df0958  cbz w10,0x7102df09cc
7102df095c  ldrb w10,[x8, #0xe0]
7102df0960  cbz w10,0x7102df09cc
7102df0964  ldr x10,[x9, #0x8]
7102df0968  ldr x9,[x9, #0x28]
7102df096c  orr w11,wzr,#0xc
7102df0970  ldr x10,[x10, #0xb0]
7102df0974  ldrb w9,[x9, #0x11]
7102df0978  madd x9,x9,x11,x10
7102df097c  adrp x10,0x7104472000
7102df0980  ldr s0,[x10, #0xc34]
7102df0984  fmov v3.4S,#0x3f800000
7102df0988  ldp s1,s2,[x9]
7102df098c  fdiv s2,s2,s0
7102df0990  fdiv s1,s1,s0
7102df0994  mov v3.S[0x0],v1.S[0x0]
7102df0998  ldr s1,[x9, #0x8]
7102df099c  fdiv s0,s1,s0
7102df09a0  adrp x1,0x71042a1000
7102df09a4  add x1,x1,#0x46d
7102df09a8  mov v3.S[0x1],v2.S[0x0]
7102df09ac  mov v3.S[0x2],v0.S[0x0]
7102df09b0  orr w2,wzr,#0x3
7102df09b4  str q3,[sp, #0xe60]
7102df09b8  ldr x0,[x8, #0x90]
7102df09bc  ldr x8,[x0]
7102df09c0  ldr x8,[x8, #0x268]
7102df09c4  add x3,sp,#0xe60
7102df09c8  blr x8
7102df09cc  ldr x9,[x19, #0x920]
7102df09d0  ldr x8,[x9, #0x18]
7102df09d4  cbz x8,0x7102df0a50
7102df09d8  ldrb w10,[x8, #0x110]
7102df09dc  cbz w10,0x7102df0a50
7102df09e0  ldrb w10,[x8, #0xe0]
7102df09e4  cbz w10,0x7102df0a50
7102df09e8  ldr x10,[x9, #0x8]
7102df09ec  ldr x9,[x9, #0x28]
7102df09f0  orr w11,wzr,#0xc
7102df09f4  ldr x10,[x10, #0xb0]
7102df09f8  ldrb w9,[x9, #0x11]
7102df09fc  madd x9,x9,x11,x10
7102df0a00  adrp x10,0x7104472000
7102df0a04  ldr s0,[x10, #0xc34]
7102df0a08  fmov v3.4S,#0x3f800000
7102df0a0c  ldp s1,s2,[x9]
7102df0a10  fdiv s2,s2,s0
7102df0a14  fdiv s1,s1,s0
7102df0a18  mov v3.S[0x0],v1.S[0x0]
7102df0a1c  ldr s1,[x9, #0x8]
7102df0a20  fdiv s0,s1,s0
7102df0a24  adrp x1,0x71042a1000
7102df0a28  add x1,x1,#0x46d
7102df0a2c  mov v3.S[0x1],v2.S[0x0]
7102df0a30  mov v3.S[0x2],v0.S[0x0]
7102df0a34  orr w2,wzr,#0x3
7102df0a38  str q3,[sp, #0xe60]
7102df0a3c  ldr x0,[x8, #0x90]
7102df0a40  ldr x8,[x0]
7102df0a44  ldr x8,[x8, #0x268]
7102df0a48  add x3,sp,#0xe60
7102df0a4c  blr x8
7102df0a50  ldr x9,[x19, #0x928]
7102df0a54  ldr x8,[x9, #0x18]
7102df0a58  cbz x8,0x7102df0ad4
7102df0a5c  ldrb w10,[x8, #0x110]
7102df0a60  cbz w10,0x7102df0ad4
7102df0a64  ldrb w10,[x8, #0xe0]
7102df0a68  cbz w10,0x7102df0ad4
7102df0a6c  ldr x10,[x9, #0x8]
7102df0a70  ldr x9,[x9, #0x28]
7102df0a74  orr w11,wzr,#0xc
7102df0a78  ldr x10,[x10, #0xb0]
7102df0a7c  ldrb w9,[x9, #0x11]
7102df0a80  madd x9,x9,x11,x10
7102df0a84  adrp x10,0x7104472000
7102df0a88  ldr s0,[x10, #0xc34]
7102df0a8c  fmov v3.4S,#0x3f800000
7102df0a90  ldp s1,s2,[x9]
7102df0a94  fdiv s2,s2,s0
7102df0a98  fdiv s1,s1,s0
7102df0a9c  mov v3.S[0x0],v1.S[0x0]
7102df0aa0  ldr s1,[x9, #0x8]
7102df0aa4  fdiv s0,s1,s0
7102df0aa8  adrp x1,0x71042a1000
7102df0aac  add x1,x1,#0x46d
7102df0ab0  mov v3.S[0x1],v2.S[0x0]
7102df0ab4  mov v3.S[0x2],v0.S[0x0]
7102df0ab8  orr w2,wzr,#0x3
7102df0abc  str q3,[sp, #0xe60]
7102df0ac0  ldr x0,[x8, #0x90]
7102df0ac4  ldr x8,[x0]
7102df0ac8  ldr x8,[x8, #0x268]
7102df0acc  add x3,sp,#0xe60
7102df0ad0  blr x8
7102df0ad4  ldr s0,[x19, #0xc70]
7102df0ad8  ldr s9,[x19, #0xc60]
7102df0adc  adrp x8,0x7104471000
7102df0ae0  add x0,sp,#0xe60
7102df0ae4  add x20,sp,#0xe60
7102df0ae8  fsub s8,s0,s9
7102df0aec  ldr s0,[x8, #0xcb4]
7102df0af0  adrp x8,0x7104472000
7102df0af4  ldr s1,[x8, #0x5b8]
7102df0af8  fmul s3,s8,s0
7102df0afc  fmul s10,s3,s1
7102df0b00  orr w2,wzr,#0xe00
7102df0b04  mov w1,wzr
7102df0b08  fadd s11,s10,s10
7102df0b0c  bl 0x71039c02a0
7102df0b10  add x0,sp,#0x60
7102df0b14  orr w2,wzr,#0xe00
7102df0b18  mov w1,wzr
7102df0b1c  fadd s8,s8,s11
7102df0b20  add x21,sp,#0x60
7102df0b24  bl 0x71039c02a0
7102df0b28  adrp x10,0x7104472000
7102df0b2c  ldr s3,[x10, #0x280]
7102df0b30  adrp x10,0x7104465000
7102df0b34  fsub s0,s9,s10
7102df0b38  ldr s1,[x19, #0xc84]
7102df0b3c  ldr s2,[x19, #0xc94]
7102df0b40  ldr d4,[x10, #0x218]
7102df0b44  fmov s7,0x3f800000
7102df0b48  mov w9,#0x10b0
7102df0b4c  mov x8,xzr
7102df0b50  add x9,x19,x9
7102df0b54  ucvtf s5,w8
7102df0b58  fdiv s5,s5,s3
7102df0b5c  fmin s5,s5,s7
7102df0b60  fmul s5,s8,s5
7102df0b64  fadd s5,s0,s5
7102df0b68  mov v6.16B,v5.16B
7102df0b6c  mov v6.S[0x1],v1.S[0x0]
7102df0b70  mov v6.D[0x1],v4.D[0x0]
7102df0b74  lsl x10,x8,#0x4
7102df0b78  add x8,x8,#0x1
7102df0b7c  cmp x8,#0xe0
7102df0b80  str q6,[x21,x10]
7102df0b84  ldr s6,[x9], #0xc
7102df0b88  fadd s6,s6,s2
7102df0b8c  mov v5.S[0x1],v6.S[0x0]
7102df0b90  mov v5.D[0x1],v4.D[0x0]
7102df0b94  str q5,[x20,x10]
7102df0b98  b.ne 0x7102df0b54
7102df0b9c  mov w8,#0x7940
7102df0ba0  movk w8,#0x1, LSL #16
7102df0ba4  add x22,x19,x8
7102df0ba8  str wzr,[x22]
7102df0bac  adrp x21,0x7105335000
7102df0bb0  ldr x8,[x21, #0xb00]
7102df0bb4  mov w9,#0x1
7102df0bb8  str w9,[x8, #0x538]
7102df0bbc  mov w9,#0x5ee0
7102df0bc0  movk w9,#0x6, LSL #16
7102df0bc4  add x10,x8,x9
7102df0bc8  adrp x9,0x7105231000
7102df0bcc  add x9,x9,#0x610
7102df0bd0  str x10,[x8, #0x540]
7102df0bd4  orr w10,wzr,#0x3
7102df0bd8  str w10,[x9]
7102df0bdc  mov w10,#0xcdd0
7102df0be0  movk w10,#0x4d, LSL #16
7102df0be4  add x0,x8,x10
7102df0be8  mov w10,#0xcdd8
7102df0bec  movk w10,#0x4d, LSL #16
7102df0bf0  ldr x11,[x8, x10, LSL #0x0]
7102df0bf4  ldr x10,[x0]
7102df0bf8  sub x11,x11,x10
7102df0bfc  asr x11,x11,#0x5
7102df0c00  cmp x11,#0x4
7102df0c04  b.ls 0x7102df0e48
7102df0c08  mov w11,#0x1b40
7102df0c0c  add x20,x19,x11
7102df0c10  ldr w9,[x9, #0x8]
7102df0c14  ldr x11,[x10, #0x90]
7102df0c18  cbz x11,0x7102df0c58
7102df0c1c  ldr x11,[x11]
7102df0c20  ldr x12,[x10, #0x98]
7102df0c24  cmp x11,x12
7102df0c28  b.ne 0x7102df0c58
7102df0c2c  ldr x10,[x10, #0x88]
7102df0c30  mov w11,#0xcdb8
7102df0c34  movk w11,#0x4d, LSL #16
7102df0c38  str x10,[x8, x11, LSL #0x0]
7102df0c3c  cbz x10,0x7102df0c64
7102df0c40  ldr x10,[x10, #0x8]
7102df0c44  mov w11,#0xcdc0
7102df0c48  movk w11,#0x4d, LSL #16
7102df0c4c  str x10,[x8, x11, LSL #0x0]
7102df0c50  ldr x10,[x10]
7102df0c54  b 0x7102df0c74
7102df0c58  mov w10,#0xcdb8
7102df0c5c  movk w10,#0x4d, LSL #16
7102df0c60  str xzr,[x8, x10, LSL #0x0]
7102df0c64  mov w11,#0xcdc0
7102df0c68  movk w11,#0x4d, LSL #16
7102df0c6c  mov x10,xzr
7102df0c70  str xzr,[x8, x11, LSL #0x0]
7102df0c74  mov w11,#0xcdc8
7102df0c78  movk w11,#0x4d, LSL #16
7102df0c7c  add w9,w9,#0x4
7102df0c80  str x10,[x8, x11, LSL #0x0]
7102df0c84  mov w10,#0xcda4
7102df0c88  movk w10,#0x4d, LSL #16
7102df0c8c  str w9,[x8, x10, LSL #0x0]
7102df0c90  ldr w0,[x19, #0x1b38]
7102df0c94  mov w1,wzr
7102df0c98  bl 0x71035a2f20
7102df0c9c  ldr q0,[x19, #0x980]
7102df0ca0  fmov s1,0x3f800000
7102df0ca4  adrp x9,0x7104468000
7102df0ca8  mov v0.S[0x3],v1.S[0x0]
7102df0cac  ldr q1,[x9, #0xca0]
7102df0cb0  adrp x8,0x710446a000
7102df0cb4  adrp x9,0x7104465000
7102df0cb8  ldr q2,[x8, #0x360]
7102df0cbc  stp q1,q1,[sp, #0x10]
7102df0cc0  ldr q1,[x9, #0x6b0]
7102df0cc4  ldr x21,[x21, #0xb00]
7102df0cc8  add x1,sp,#0x20
7102df0ccc  mov x0,x21
7102df0cd0  str q2,[sp]
7102df0cd4  str q0,[sp, #0x50]
7102df0cd8  stp q2,q1,[sp, #0x30]
7102df0cdc  bl 0x7103594510
7102df0ce0  ldp q6,q5,[sp]
7102df0ce4  adrp x10,0x7104473000
7102df0ce8  adrp x13,0x7104465000
7102df0cec  ldr s0,[x10, #0x844]
7102df0cf0  ldr q2,[x13, #0xfb0]
7102df0cf4  movi d1,#0x0
7102df0cf8  mov x8,xzr
7102df0cfc  mov w9,#0xa5a6
7102df0d00  movk w9,#0x3f25, LSL #16
7102df0d04  mov w10,#0xa5000000
7102df0d08  add x11,sp,#0xe60
7102df0d0c  add x12,sp,#0x60
7102df0d10  mov x13,x20
7102df0d14  ldr s3,[x19, #0x9a0]
7102df0d18  ldr s4,[x19, #0x9a4]
7102df0d1c  fmul s3,s3,s0
7102df0d20  fmul s4,s4,s0
7102df0d24  fcvtzs w14,s3
7102df0d28  ldr s3,[x19, #0x9a8]
7102df0d2c  fcvtzs w16,s4
7102df0d30  fmul s3,s3,s0
7102df0d34  str w9,[x19, #0x9ac]
7102df0d38  add x15,x11,x8
7102df0d3c  ldr q4,[x15]
7102df0d40  stp xzr,xzr,[x13, #0x10]
7102df0d44  bfm w14,w16,#0x18,#0x7
7102df0d48  fcvtzs w16,s3
7102df0d4c  mov v3.16B,v1.16B
7102df0d50  mov v3.S[0x0],v4.S[0x2]
7102df0d54  bfm w14,w16,#0x10,#0x7
7102df0d58  add x16,x12,x8
7102df0d5c  orr w14,w14,w10
7102df0d60  mov v4.D[0x1],v3.D[0x0]
7102df0d64  str w14,[x13, #0x20]
7102df0d68  str q4,[x13]
7102df0d6c  ldr q3,[x15, #0x10]
7102df0d70  mov v4.16B,v1.16B
7102df0d74  str w14,[x13, #0x60]
7102df0d78  mov v4.S[0x0],v3.S[0x2]
7102df0d7c  add x8,x8,#0x10
7102df0d80  mov v3.D[0x1],v4.D[0x0]
7102df0d84  mov v4.16B,v1.16B
7102df0d88  stp q3,q5,[x13, #0x40]
7102df0d8c  ldr q3,[x16]
7102df0d90  str w14,[x13, #0xa0]
7102df0d94  mov v4.S[0x0],v3.S[0x2]
7102df0d98  mov v3.D[0x1],v4.D[0x0]
7102df0d9c  mov v4.16B,v1.16B
7102df0da0  stp q3,q2,[x13, #0x80]
7102df0da4  ldr q3,[x15, #0x10]
7102df0da8  str w14,[x13, #0xe0]
7102df0dac  mov v4.S[0x0],v3.S[0x2]
7102df0db0  mov v3.D[0x1],v4.D[0x0]
7102df0db4  mov v4.16B,v1.16B
7102df0db8  stp q3,q5,[x13, #0xc0]
7102df0dbc  ldr q3,[x16, #0x10]
7102df0dc0  str w14,[x13, #0x120]
7102df0dc4  mov v4.S[0x0],v3.S[0x2]
7102df0dc8  mov v3.D[0x1],v4.D[0x0]
7102df0dcc  mov v4.16B,v1.16B
7102df0dd0  stp q3,q6,[x13, #0x100]
7102df0dd4  ldr q3,[x16]
7102df0dd8  str w14,[x13, #0x160]
7102df0ddc  mov v4.S[0x0],v3.S[0x2]
7102df0de0  mov v3.D[0x1],v4.D[0x0]
7102df0de4  cmp x8,#0xdf0
7102df0de8  stp q3,q2,[x13, #0x140]
7102df0dec  ldr w14,[x22]
7102df0df0  add w14,w14,#0x6
7102df0df4  add x13,x13,#0x180
7102df0df8  str w14,[x22]
7102df0dfc  b.ne 0x7102df0d14
7102df0e00  and w2,w14,#0xffff
7102df0e04  mov w8,#0xca9c
7102df0e08  movk w8,#0x4d, LSL #16
7102df0e0c  mov x0,x21
7102df0e10  mov x1,x20
7102df0e14  mov x3,xzr
7102df0e18  mov w4,w2
7102df0e1c  strb wzr,[x21, x8, LSL ]
7102df0e20  bl 0x710359a740
7102df0e24  add sp,sp,#0x1, LSL #12
7102df0e28  add sp,sp,#0xc60
7102df0e2c  ldp d9,d8,[sp, #0x10]
7102df0e30  ldr x28,[sp, #0x20]
7102df0e34  ldp x29,x30,[sp, #0x50]
7102df0e38  ldp x20,x19,[sp, #0x40]
7102df0e3c  ldp x22,x21,[sp, #0x30]
7102df0e40  ldp d11,d10,[sp], #0x60
7102df0e44  ret
7102df0e48  bl 0x71039c1330
