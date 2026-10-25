// addr:      71020dd590
// offset:    0x20dd590
// name:      FUN_71020dd590
// mangled:   
// size:      3792

71020dd590  sub sp,sp,#0x50
71020dd594  str x23,[sp, #0x10]
71020dd598  stp x22,x21,[sp, #0x20]
71020dd59c  stp x20,x19,[sp, #0x30]
71020dd5a0  stp x29,x30,[sp, #0x40]
71020dd5a4  add x29,sp,#0x40
71020dd5a8  mov w21,w2
71020dd5ac  mov x19,x1
71020dd5b0  mov x20,x0
71020dd5b4  mov w22,#0xb9d8
71020dd5b8  movk w22,#0xfff0, LSL #16
71020dd5bc  bl 0x71020d4a00
71020dd5c0  ldr x8,[x19, #0x20]
71020dd5c4  cmp w21,#0x1
71020dd5c8  b.lt 0x71020dd5ec
71020dd5cc  ldr x8,[x8]
71020dd5d0  ldr x10,[x19, #0x10]
71020dd5d4  adrp x9,0x7104862000
71020dd5d8  add x9,x9,#0x960
71020dd5dc  add x8,x8,w21, SXTW  #0x4
71020dd5e0  cmp x8,x10
71020dd5e4  csel x1,x8,x9,cc
71020dd5e8  b 0x71020dd64c
71020dd5ec  add w9,w22,#0x1
71020dd5f0  cmp w21,w9
71020dd5f4  b.ge 0x71020dd60c
71020dd5f8  cmp w21,w22
71020dd5fc  b.ne 0x71020dd618
71020dd600  ldr x8,[x19, #0x18]
71020dd604  add x1,x8,#0x40
71020dd608  b 0x71020dd64c
71020dd60c  ldr x8,[x19, #0x10]
71020dd610  add x1,x8,w21, SXTW  #0x4
71020dd614  b 0x71020dd64c
71020dd618  ldr x8,[x8]
71020dd61c  ldr w9,[x8, #0x8]
71020dd620  adrp x1,0x7104862000
71020dd624  add x1,x1,#0x960
71020dd628  cmp w9,#0x16
71020dd62c  b.eq 0x71020dd64c
71020dd630  ldr x8,[x8]
71020dd634  sub w9,w22,w21
71020dd638  add x10,x8,w9, SXTW  #0x4
71020dd63c  ldrb w8,[x8, #0xa]
71020dd640  add x10,x10,#0x10
71020dd644  cmp w9,w8
71020dd648  csel x1,x1,x10,gt
71020dd64c  adrp x2,0x710444c000
71020dd650  add x2,x2,#0x45b
71020dd654  mov x0,x19
71020dd658  bl 0x71038f4d40
71020dd65c  ldr x8,[x19, #0x10]
71020dd660  sub x1,x8,#0x10
71020dd664  adrp x2,0x71043d7000
71020dd668  add x2,x2,#0xeae
71020dd66c  mov x0,x19
71020dd670  bl 0x71038f4d40
71020dd674  ldr x23,[x19, #0x10]
71020dd678  ldur w8,[x23, #-0x8]
71020dd67c  cmp w8,#0x3
71020dd680  b.ne 0x71020dd68c
71020dd684  ldur s0,[x23, #-0x10]
71020dd688  b 0x71020dd704
71020dd68c  cmp w8,#0x13
71020dd690  b.ne 0x71020dd6a0
71020dd694  ldur x8,[x23, #-0x10]
71020dd698  scvtf s0,x8
71020dd69c  b 0x71020dd704
71020dd6a0  and w8,w8,#0xf
71020dd6a4  cmp w8,#0x4
71020dd6a8  b.ne 0x71020dd700
71020dd6ac  ldur x8,[x23, #-0x10]
71020dd6b0  add x0,x8,#0x18
71020dd6b4  mov x1,sp
71020dd6b8  bl 0x7103907f00
71020dd6bc  ldur x8,[x23, #-0x10]
71020dd6c0  ldrb w9,[x8, #0x8]
71020dd6c4  cmp w9,#0x4
71020dd6c8  b.ne 0x71020dd6d4
71020dd6cc  ldrb w8,[x8, #0xb]
71020dd6d0  b 0x71020dd6d8
71020dd6d4  ldr x8,[x8, #0x10]
71020dd6d8  add x8,x8,#0x1
71020dd6dc  cmp x0,x8
71020dd6e0  b.ne 0x71020dd700
71020dd6e4  ldr x9,[sp]
71020dd6e8  scvtf s0,x9
71020dd6ec  ldr w8,[sp, #0x8]
71020dd6f0  fmov s1,w9
71020dd6f4  cmp w8,#0x13
71020dd6f8  fcsel s0,s0,s1,eq
71020dd6fc  b 0x71020dd704
71020dd700  fmov s0,wzr
71020dd704  ldr x8,[x19, #0x10]
71020dd708  sub x8,x8,#0x10
71020dd70c  str x8,[x19, #0x10]
71020dd710  ldr q1,[x20, #0x20]
71020dd714  mov v1.S[0x0],v0.S[0x0]
71020dd718  str q1,[x20, #0x20]
71020dd71c  ldr x8,[x19, #0x10]
71020dd720  sub x1,x8,#0x10
71020dd724  adrp x2,0x71042ab000
71020dd728  add x2,x2,#0xc20
71020dd72c  mov x0,x19
71020dd730  bl 0x71038f4d40
71020dd734  ldr x23,[x19, #0x10]
71020dd738  ldur w8,[x23, #-0x8]
71020dd73c  cmp w8,#0x3
71020dd740  b.ne 0x71020dd74c
71020dd744  ldur s0,[x23, #-0x10]
71020dd748  b 0x71020dd7c4
71020dd74c  cmp w8,#0x13
71020dd750  b.ne 0x71020dd760
71020dd754  ldur x8,[x23, #-0x10]
71020dd758  scvtf s0,x8
71020dd75c  b 0x71020dd7c4
71020dd760  and w8,w8,#0xf
71020dd764  cmp w8,#0x4
71020dd768  b.ne 0x71020dd7c0
71020dd76c  ldur x8,[x23, #-0x10]
71020dd770  add x0,x8,#0x18
71020dd774  mov x1,sp
71020dd778  bl 0x7103907f00
71020dd77c  ldur x8,[x23, #-0x10]
71020dd780  ldrb w9,[x8, #0x8]
71020dd784  cmp w9,#0x4
71020dd788  b.ne 0x71020dd794
71020dd78c  ldrb w8,[x8, #0xb]
71020dd790  b 0x71020dd798
71020dd794  ldr x8,[x8, #0x10]
71020dd798  add x8,x8,#0x1
71020dd79c  cmp x0,x8
71020dd7a0  b.ne 0x71020dd7c0
71020dd7a4  ldr x9,[sp]
71020dd7a8  scvtf s0,x9
71020dd7ac  ldr w8,[sp, #0x8]
71020dd7b0  fmov s1,w9
71020dd7b4  cmp w8,#0x13
71020dd7b8  fcsel s0,s0,s1,eq
71020dd7bc  b 0x71020dd7c4
71020dd7c0  fmov s0,wzr
71020dd7c4  ldr x8,[x19, #0x10]
71020dd7c8  sub x8,x8,#0x10
71020dd7cc  str x8,[x19, #0x10]
71020dd7d0  ldr q1,[x20, #0x20]
71020dd7d4  mov v1.S[0x1],v0.S[0x0]
71020dd7d8  str q1,[x20, #0x20]
71020dd7dc  ldr x8,[x19, #0x10]
71020dd7e0  sub x1,x8,#0x10
71020dd7e4  adrp x2,0x710443b000
71020dd7e8  add x2,x2,#0x9a0
71020dd7ec  mov x0,x19
71020dd7f0  bl 0x71038f4d40
71020dd7f4  ldr x23,[x19, #0x10]
71020dd7f8  ldur w8,[x23, #-0x8]
71020dd7fc  cmp w8,#0x3
71020dd800  b.ne 0x71020dd80c
71020dd804  ldur s0,[x23, #-0x10]
71020dd808  b 0x71020dd884
71020dd80c  cmp w8,#0x13
71020dd810  b.ne 0x71020dd820
71020dd814  ldur x8,[x23, #-0x10]
71020dd818  scvtf s0,x8
71020dd81c  b 0x71020dd884
71020dd820  and w8,w8,#0xf
71020dd824  cmp w8,#0x4
71020dd828  b.ne 0x71020dd880
71020dd82c  ldur x8,[x23, #-0x10]
71020dd830  add x0,x8,#0x18
71020dd834  mov x1,sp
71020dd838  bl 0x7103907f00
71020dd83c  ldur x8,[x23, #-0x10]
71020dd840  ldrb w9,[x8, #0x8]
71020dd844  cmp w9,#0x4
71020dd848  b.ne 0x71020dd854
71020dd84c  ldrb w8,[x8, #0xb]
71020dd850  b 0x71020dd858
71020dd854  ldr x8,[x8, #0x10]
71020dd858  add x8,x8,#0x1
71020dd85c  cmp x0,x8
71020dd860  b.ne 0x71020dd880
71020dd864  ldr x9,[sp]
71020dd868  scvtf s0,x9
71020dd86c  ldr w8,[sp, #0x8]
71020dd870  fmov s1,w9
71020dd874  cmp w8,#0x13
71020dd878  fcsel s0,s0,s1,eq
71020dd87c  b 0x71020dd884
71020dd880  fmov s0,wzr
71020dd884  ldr x8,[x19, #0x10]
71020dd888  sub x8,x8,#0x10
71020dd88c  str x8,[x19, #0x10]
71020dd890  ldr q1,[x20, #0x20]
71020dd894  mov v1.S[0x2],v0.S[0x0]
71020dd898  fmov s0,wzr
71020dd89c  mov v1.S[0x3],v0.S[0x0]
71020dd8a0  str q1,[x20, #0x20]
71020dd8a4  ldr x8,[x19, #0x10]
71020dd8a8  ldr x9,[x19, #0x20]
71020dd8ac  sub x8,x8,#0x10
71020dd8b0  cmp w21,#0x1
71020dd8b4  str x8,[x19, #0x10]
71020dd8b8  b.lt 0x71020dd8d8
71020dd8bc  ldr x9,[x9]
71020dd8c0  add x9,x9,w21, SXTW  #0x4
71020dd8c4  adrp x10,0x7104862000
71020dd8c8  add x10,x10,#0x960
71020dd8cc  cmp x9,x8
71020dd8d0  csel x1,x9,x10,cc
71020dd8d4  b 0x71020dd934
71020dd8d8  add w10,w22,#0x1
71020dd8dc  cmp w21,w10
71020dd8e0  b.ge 0x71020dd8f8
71020dd8e4  cmp w21,w22
71020dd8e8  b.ne 0x71020dd900
71020dd8ec  ldr x8,[x19, #0x18]
71020dd8f0  add x1,x8,#0x40
71020dd8f4  b 0x71020dd934
71020dd8f8  add x1,x8,w21, SXTW  #0x4
71020dd8fc  b 0x71020dd934
71020dd900  ldr x8,[x9]
71020dd904  ldr w9,[x8, #0x8]
71020dd908  adrp x1,0x7104862000
71020dd90c  add x1,x1,#0x960
71020dd910  cmp w9,#0x16
71020dd914  b.eq 0x71020dd934
71020dd918  ldr x8,[x8]
71020dd91c  sub w9,w22,w21
71020dd920  add x10,x8,w9, SXTW  #0x4
71020dd924  ldrb w8,[x8, #0xa]
71020dd928  add x10,x10,#0x10
71020dd92c  cmp w9,w8
71020dd930  csel x1,x1,x10,gt
71020dd934  adrp x2,0x71042c6000
71020dd938  add x2,x2,#0x2ff
71020dd93c  mov x0,x19
71020dd940  bl 0x71038f4d40
71020dd944  ldr x8,[x19, #0x10]
71020dd948  ldur w9,[x8, #-0x8]
71020dd94c  cbz w9,0x71020dd99c
71020dd950  cmp w9,#0x13
71020dd954  b.eq 0x71020dd96c
71020dd958  cmp w9,#0x1
71020dd95c  b.ne 0x71020dd984
71020dd960  ldur w8,[x8, #-0x10]
71020dd964  cmp w8,#0x0
71020dd968  b 0x71020dd9b4
71020dd96c  ldur x10,[x8, #-0x10]
71020dd970  cbz x10,0x71020dd99c
71020dd974  scvtf s0,x10
71020dd978  fcmp s0,#0.0
71020dd97c  b.eq 0x71020dd99c
71020dd980  b 0x71020dd9a4
71020dd984  and w10,w9,#0xf
71020dd988  cmp w10,#0x3
71020dd98c  b.ne 0x71020dd9a4
71020dd990  ldur s0,[x8, #-0x10]
71020dd994  fcmp s0,#0.0
71020dd998  b.ne 0x71020dd9a4
71020dd99c  mov w8,wzr
71020dd9a0  b 0x71020dd9c0
71020dd9a4  cmp w9,#0x3
71020dd9a8  b.ne 0x71020dd9bc
71020dd9ac  ldur s0,[x8, #-0x10]
71020dd9b0  fcmp s0,#0.0
71020dd9b4  cset w8,ne
71020dd9b8  b 0x71020dd9c0
71020dd9bc  mov w8,#0x1
71020dd9c0  strb w8,[x20, #0x30]
71020dd9c4  ldr x8,[x19, #0x10]
71020dd9c8  ldr x9,[x19, #0x20]
71020dd9cc  sub x8,x8,#0x10
71020dd9d0  cmp w21,#0x1
71020dd9d4  str x8,[x19, #0x10]
71020dd9d8  b.lt 0x71020dd9f8
71020dd9dc  ldr x9,[x9]
71020dd9e0  add x9,x9,w21, SXTW  #0x4
71020dd9e4  adrp x10,0x7104862000
71020dd9e8  add x10,x10,#0x960
71020dd9ec  cmp x9,x8
71020dd9f0  csel x1,x9,x10,cc
71020dd9f4  b 0x71020dda54
71020dd9f8  add w10,w22,#0x1
71020dd9fc  cmp w21,w10
71020dda00  b.ge 0x71020dda18
71020dda04  cmp w21,w22
71020dda08  b.ne 0x71020dda20
71020dda0c  ldr x8,[x19, #0x18]
71020dda10  add x1,x8,#0x40
71020dda14  b 0x71020dda54
71020dda18  add x1,x8,w21, SXTW  #0x4
71020dda1c  b 0x71020dda54
71020dda20  ldr x8,[x9]
71020dda24  ldr w9,[x8, #0x8]
71020dda28  adrp x1,0x7104862000
71020dda2c  add x1,x1,#0x960
71020dda30  cmp w9,#0x16
71020dda34  b.eq 0x71020dda54
71020dda38  ldr x8,[x8]
71020dda3c  sub w9,w22,w21
71020dda40  add x10,x8,w9, SXTW  #0x4
71020dda44  ldrb w8,[x8, #0xa]
71020dda48  add x10,x10,#0x10
71020dda4c  cmp w9,w8
71020dda50  csel x1,x1,x10,gt
71020dda54  adrp x2,0x71042b5000
71020dda58  add x2,x2,#0x4fb
71020dda5c  mov x0,x19
71020dda60  bl 0x71038f4d40
71020dda64  ldr x8,[x19, #0x10]
71020dda68  sub x1,x8,#0x10
71020dda6c  adrp x2,0x71043d7000
71020dda70  add x2,x2,#0xeae
71020dda74  mov x0,x19
71020dda78  bl 0x71038f4d40
71020dda7c  ldr x23,[x19, #0x10]
71020dda80  ldur w8,[x23, #-0x8]
71020dda84  cmp w8,#0x3
71020dda88  b.ne 0x71020dda94
71020dda8c  ldur s1,[x23, #-0x10]
71020dda90  b 0x71020ddb0c
71020dda94  cmp w8,#0x13
71020dda98  b.ne 0x71020ddaa8
71020dda9c  ldur x8,[x23, #-0x10]
71020ddaa0  scvtf s1,x8
71020ddaa4  b 0x71020ddb0c
71020ddaa8  and w8,w8,#0xf
71020ddaac  cmp w8,#0x4
71020ddab0  b.ne 0x71020ddb08
71020ddab4  ldur x8,[x23, #-0x10]
71020ddab8  add x0,x8,#0x18
71020ddabc  mov x1,sp
71020ddac0  bl 0x7103907f00
71020ddac4  ldur x8,[x23, #-0x10]
71020ddac8  ldrb w9,[x8, #0x8]
71020ddacc  cmp w9,#0x4
71020ddad0  b.ne 0x71020ddadc
71020ddad4  ldrb w8,[x8, #0xb]
71020ddad8  b 0x71020ddae0
71020ddadc  ldr x8,[x8, #0x10]
71020ddae0  add x8,x8,#0x1
71020ddae4  cmp x0,x8
71020ddae8  b.ne 0x71020ddb08
71020ddaec  ldr x9,[sp]
71020ddaf0  scvtf s0,x9
71020ddaf4  ldr w8,[sp, #0x8]
71020ddaf8  fmov s1,w9
71020ddafc  cmp w8,#0x13
71020ddb00  fcsel s1,s0,s1,eq
71020ddb04  b 0x71020ddb0c
71020ddb08  fmov s1,wzr
71020ddb0c  ldr x8,[x19, #0x10]
71020ddb10  sub x8,x8,#0x10
71020ddb14  str x8,[x19, #0x10]
71020ddb18  ldr q0,[x20, #0x40]
71020ddb1c  mov v0.S[0x0],v1.S[0x0]
71020ddb20  str q0,[x20, #0x40]
71020ddb24  ldr x8,[x19, #0x10]
71020ddb28  sub x1,x8,#0x10
71020ddb2c  adrp x2,0x71042ab000
71020ddb30  add x2,x2,#0xc20
71020ddb34  mov x0,x19
71020ddb38  bl 0x71038f4d40
71020ddb3c  ldr x23,[x19, #0x10]
71020ddb40  ldur w8,[x23, #-0x8]
71020ddb44  cmp w8,#0x3
71020ddb48  b.ne 0x71020ddb54
71020ddb4c  ldur s0,[x23, #-0x10]
71020ddb50  b 0x71020ddbcc
71020ddb54  cmp w8,#0x13
71020ddb58  b.ne 0x71020ddb68
71020ddb5c  ldur x8,[x23, #-0x10]
71020ddb60  scvtf s0,x8
71020ddb64  b 0x71020ddbcc
71020ddb68  and w8,w8,#0xf
71020ddb6c  cmp w8,#0x4
71020ddb70  b.ne 0x71020ddbc8
71020ddb74  ldur x8,[x23, #-0x10]
71020ddb78  add x0,x8,#0x18
71020ddb7c  mov x1,sp
71020ddb80  bl 0x7103907f00
71020ddb84  ldur x8,[x23, #-0x10]
71020ddb88  ldrb w9,[x8, #0x8]
71020ddb8c  cmp w9,#0x4
71020ddb90  b.ne 0x71020ddb9c
71020ddb94  ldrb w8,[x8, #0xb]
71020ddb98  b 0x71020ddba0
71020ddb9c  ldr x8,[x8, #0x10]
71020ddba0  add x8,x8,#0x1
71020ddba4  cmp x0,x8
71020ddba8  b.ne 0x71020ddbc8
71020ddbac  ldr x9,[sp]
71020ddbb0  scvtf s0,x9
71020ddbb4  ldr w8,[sp, #0x8]
71020ddbb8  fmov s1,w9
71020ddbbc  cmp w8,#0x13
71020ddbc0  fcsel s0,s0,s1,eq
71020ddbc4  b 0x71020ddbcc
71020ddbc8  fmov s0,wzr
71020ddbcc  ldr x8,[x19, #0x10]
71020ddbd0  sub x8,x8,#0x10
71020ddbd4  str x8,[x19, #0x10]
71020ddbd8  ldr q1,[x20, #0x40]
71020ddbdc  mov v1.S[0x1],v0.S[0x0]
71020ddbe0  str q1,[x20, #0x40]
71020ddbe4  ldr x8,[x19, #0x10]
71020ddbe8  ldr x9,[x19, #0x20]
71020ddbec  sub x8,x8,#0x10
71020ddbf0  cmp w21,#0x1
71020ddbf4  str x8,[x19, #0x10]
71020ddbf8  b.lt 0x71020ddc18
71020ddbfc  ldr x9,[x9]
71020ddc00  add x9,x9,w21, SXTW  #0x4
71020ddc04  adrp x10,0x7104862000
71020ddc08  add x10,x10,#0x960
71020ddc0c  cmp x9,x8
71020ddc10  csel x1,x9,x10,cc
71020ddc14  b 0x71020ddc74
71020ddc18  add w10,w22,#0x1
71020ddc1c  cmp w21,w10
71020ddc20  b.ge 0x71020ddc38
71020ddc24  cmp w21,w22
71020ddc28  b.ne 0x71020ddc40
71020ddc2c  ldr x8,[x19, #0x18]
71020ddc30  add x1,x8,#0x40
71020ddc34  b 0x71020ddc74
71020ddc38  add x1,x8,w21, SXTW  #0x4
71020ddc3c  b 0x71020ddc74
71020ddc40  ldr x8,[x9]
71020ddc44  ldr w9,[x8, #0x8]
71020ddc48  adrp x1,0x7104862000
71020ddc4c  add x1,x1,#0x960
71020ddc50  cmp w9,#0x16
71020ddc54  b.eq 0x71020ddc74
71020ddc58  ldr x8,[x8]
71020ddc5c  sub w9,w22,w21
71020ddc60  add x10,x8,w9, SXTW  #0x4
71020ddc64  ldrb w8,[x8, #0xa]
71020ddc68  add x10,x10,#0x10
71020ddc6c  cmp w9,w8
71020ddc70  csel x1,x1,x10,gt
71020ddc74  adrp x2,0x7104354000
71020ddc78  add x2,x2,#0x78c
71020ddc7c  mov x0,x19
71020ddc80  bl 0x71038f4d40
71020ddc84  ldr x23,[x19, #0x10]
71020ddc88  ldur w8,[x23, #-0x8]
71020ddc8c  cmp w8,#0x3
71020ddc90  b.ne 0x71020ddc9c
71020ddc94  ldur w8,[x23, #-0x10]
71020ddc98  b 0x71020ddd18
71020ddc9c  cmp w8,#0x13
71020ddca0  b.ne 0x71020ddcb4
71020ddca4  ldur x8,[x23, #-0x10]
71020ddca8  scvtf s0,x8
71020ddcac  fmov w8,s0
71020ddcb0  b 0x71020ddd18
71020ddcb4  and w8,w8,#0xf
71020ddcb8  cmp w8,#0x4
71020ddcbc  b.ne 0x71020ddd14
71020ddcc0  ldur x8,[x23, #-0x10]
71020ddcc4  add x0,x8,#0x18
71020ddcc8  mov x1,sp
71020ddccc  bl 0x7103907f00
71020ddcd0  ldur x8,[x23, #-0x10]
71020ddcd4  ldrb w9,[x8, #0x8]
71020ddcd8  cmp w9,#0x4
71020ddcdc  b.ne 0x71020ddce8
71020ddce0  ldrb w8,[x8, #0xb]
71020ddce4  b 0x71020ddcec
71020ddce8  ldr x8,[x8, #0x10]
71020ddcec  add x8,x8,#0x1
71020ddcf0  cmp x0,x8
71020ddcf4  b.ne 0x71020ddd14
71020ddcf8  ldr x9,[sp]
71020ddcfc  scvtf s0,x9
71020ddd00  ldr w8,[sp, #0x8]
71020ddd04  cmp w8,#0x13
71020ddd08  fmov w10,s0
71020ddd0c  csel w8,w10,w9,eq
71020ddd10  b 0x71020ddd18
71020ddd14  mov w8,wzr
71020ddd18  str w8,[x20, #0x50]
71020ddd1c  ldr x8,[x19, #0x10]
71020ddd20  ldr x9,[x19, #0x20]
71020ddd24  sub x8,x8,#0x10
71020ddd28  cmp w21,#0x1
71020ddd2c  str x8,[x19, #0x10]
71020ddd30  b.lt 0x71020ddd50
71020ddd34  ldr x9,[x9]
71020ddd38  add x9,x9,w21, SXTW  #0x4
71020ddd3c  adrp x10,0x7104862000
71020ddd40  add x10,x10,#0x960
71020ddd44  cmp x9,x8
71020ddd48  csel x1,x9,x10,cc
71020ddd4c  b 0x71020dddac
71020ddd50  add w10,w22,#0x1
71020ddd54  cmp w21,w10
71020ddd58  b.ge 0x71020ddd70
71020ddd5c  cmp w21,w22
71020ddd60  b.ne 0x71020ddd78
71020ddd64  ldr x8,[x19, #0x18]
71020ddd68  add x1,x8,#0x40
71020ddd6c  b 0x71020dddac
71020ddd70  add x1,x8,w21, SXTW  #0x4
71020ddd74  b 0x71020dddac
71020ddd78  ldr x8,[x9]
71020ddd7c  ldr w9,[x8, #0x8]
71020ddd80  adrp x1,0x7104862000
71020ddd84  add x1,x1,#0x960
71020ddd88  cmp w9,#0x16
71020ddd8c  b.eq 0x71020dddac
71020ddd90  ldr x8,[x8]
71020ddd94  sub w9,w22,w21
71020ddd98  add x10,x8,w9, SXTW  #0x4
71020ddd9c  ldrb w8,[x8, #0xa]
71020ddda0  add x10,x10,#0x10
71020ddda4  cmp w9,w8
71020ddda8  csel x1,x1,x10,gt
71020dddac  adrp x2,0x7104455000
71020dddb0  add x2,x2,#0xd07
71020dddb4  mov x0,x19
71020dddb8  bl 0x71038f4d40
71020dddbc  ldr x23,[x19, #0x10]
71020dddc0  ldur w8,[x23, #-0x8]
71020dddc4  cmp w8,#0x3
71020dddc8  b.ne 0x71020dddd4
71020dddcc  ldur w8,[x23, #-0x10]
71020dddd0  b 0x71020dde50
71020dddd4  cmp w8,#0x13
71020dddd8  b.ne 0x71020dddec
71020ddddc  ldur x8,[x23, #-0x10]
71020ddde0  scvtf s0,x8
71020ddde4  fmov w8,s0
71020ddde8  b 0x71020dde50
71020dddec  and w8,w8,#0xf
71020dddf0  cmp w8,#0x4
71020dddf4  b.ne 0x71020dde4c
71020dddf8  ldur x8,[x23, #-0x10]
71020dddfc  add x0,x8,#0x18
71020dde00  mov x1,sp
71020dde04  bl 0x7103907f00
71020dde08  ldur x8,[x23, #-0x10]
71020dde0c  ldrb w9,[x8, #0x8]
71020dde10  cmp w9,#0x4
71020dde14  b.ne 0x71020dde20
71020dde18  ldrb w8,[x8, #0xb]
71020dde1c  b 0x71020dde24
71020dde20  ldr x8,[x8, #0x10]
71020dde24  add x8,x8,#0x1
71020dde28  cmp x0,x8
71020dde2c  b.ne 0x71020dde4c
71020dde30  ldr x9,[sp]
71020dde34  scvtf s0,x9
71020dde38  ldr w8,[sp, #0x8]
71020dde3c  cmp w8,#0x13
71020dde40  fmov w10,s0
71020dde44  csel w8,w10,w9,eq
71020dde48  b 0x71020dde50
71020dde4c  mov w8,wzr
71020dde50  str w8,[x20, #0x54]
71020dde54  ldr x8,[x19, #0x10]
71020dde58  ldr x9,[x19, #0x20]
71020dde5c  sub x8,x8,#0x10
71020dde60  cmp w21,#0x1
71020dde64  str x8,[x19, #0x10]
71020dde68  b.lt 0x71020dde88
71020dde6c  ldr x9,[x9]
71020dde70  add x9,x9,w21, SXTW  #0x4
71020dde74  adrp x10,0x7104862000
71020dde78  add x10,x10,#0x960
71020dde7c  cmp x9,x8
71020dde80  csel x1,x9,x10,cc
71020dde84  b 0x71020ddee4
71020dde88  add w10,w22,#0x1
71020dde8c  cmp w21,w10
71020dde90  b.ge 0x71020ddea8
71020dde94  cmp w21,w22
71020dde98  b.ne 0x71020ddeb0
71020dde9c  ldr x8,[x19, #0x18]
71020ddea0  add x1,x8,#0x40
71020ddea4  b 0x71020ddee4
71020ddea8  add x1,x8,w21, SXTW  #0x4
71020ddeac  b 0x71020ddee4
71020ddeb0  ldr x8,[x9]
71020ddeb4  ldr w9,[x8, #0x8]
71020ddeb8  adrp x1,0x7104862000
71020ddebc  add x1,x1,#0x960
71020ddec0  cmp w9,#0x16
71020ddec4  b.eq 0x71020ddee4
71020ddec8  ldr x8,[x8]
71020ddecc  sub w9,w22,w21
71020dded0  add x10,x8,w9, SXTW  #0x4
71020dded4  ldrb w8,[x8, #0xa]
71020dded8  add x10,x10,#0x10
71020ddedc  cmp w9,w8
71020ddee0  csel x1,x1,x10,gt
71020ddee4  adrp x2,0x71043e1000
71020ddee8  add x2,x2,#0x444
71020ddeec  mov x0,x19
71020ddef0  bl 0x71038f4d40
71020ddef4  ldr x8,[x19, #0x10]
71020ddef8  sub x23,x8,#0x10
71020ddefc  ldur w8,[x8, #-0x8]
71020ddf00  cmp w8,#0x13
71020ddf04  b.ne 0x71020ddf10
71020ddf08  ldr x8,[x23]
71020ddf0c  b 0x71020ddf70
71020ddf10  ldr w8,[x23, #0x8]
71020ddf14  cmp w8,#0x13
71020ddf18  b.eq 0x71020ddf08
71020ddf1c  cmp w8,#0x3
71020ddf20  b.eq 0x71020de078
71020ddf24  and w8,w8,#0xf
71020ddf28  cmp w8,#0x4
71020ddf2c  b.ne 0x71020ddf6c
71020ddf30  ldr x8,[x23]
71020ddf34  add x0,x8,#0x18
71020ddf38  mov x1,sp
71020ddf3c  bl 0x7103907f00
71020ddf40  ldr x8,[x23]
71020ddf44  ldrb w9,[x8, #0x8]
71020ddf48  cmp w9,#0x4
71020ddf4c  b.ne 0x71020ddf58
71020ddf50  ldrb w8,[x8, #0xb]
71020ddf54  b 0x71020ddf5c
71020ddf58  ldr x8,[x8, #0x10]
71020ddf5c  add x8,x8,#0x1
71020ddf60  mov x23,sp
71020ddf64  cmp x0,x8
71020ddf68  b.eq 0x71020ddf10
71020ddf6c  mov x8,xzr
71020ddf70  str x8,[x20, #0x58]
71020ddf74  ldr x8,[x19, #0x10]
71020ddf78  ldr x9,[x19, #0x20]
71020ddf7c  sub x8,x8,#0x10
71020ddf80  cmp w21,#0x1
71020ddf84  str x8,[x19, #0x10]
71020ddf88  b.lt 0x71020ddfa8
71020ddf8c  ldr x9,[x9]
71020ddf90  add x9,x9,w21, SXTW  #0x4
71020ddf94  adrp x10,0x7104862000
71020ddf98  add x10,x10,#0x960
71020ddf9c  cmp x9,x8
71020ddfa0  csel x1,x9,x10,cc
71020ddfa4  b 0x71020de004
71020ddfa8  add w10,w22,#0x1
71020ddfac  cmp w21,w10
71020ddfb0  b.ge 0x71020ddfc8
71020ddfb4  cmp w21,w22
71020ddfb8  b.ne 0x71020ddfd0
71020ddfbc  ldr x8,[x19, #0x18]
71020ddfc0  add x1,x8,#0x40
71020ddfc4  b 0x71020de004
71020ddfc8  add x1,x8,w21, SXTW  #0x4
71020ddfcc  b 0x71020de004
71020ddfd0  ldr x8,[x9]
71020ddfd4  ldr w9,[x8, #0x8]
71020ddfd8  adrp x1,0x7104862000
71020ddfdc  add x1,x1,#0x960
71020ddfe0  cmp w9,#0x16
71020ddfe4  b.eq 0x71020de004
71020ddfe8  ldr x8,[x8]
71020ddfec  sub w9,w22,w21
71020ddff0  add x10,x8,w9, SXTW  #0x4
71020ddff4  ldrb w8,[x8, #0xa]
71020ddff8  add x10,x10,#0x10
71020ddffc  cmp w9,w8
71020de000  csel x1,x1,x10,gt
71020de004  adrp x2,0x710437d000
71020de008  add x2,x2,#0x691
71020de00c  mov x0,x19
71020de010  bl 0x71038f4d40
71020de014  ldr x23,[x19, #0x10]
71020de018  ldur w8,[x23, #-0x8]
71020de01c  cmp w8,#0x3
71020de020  b.ne 0x71020de02c
71020de024  ldur w8,[x23, #-0x10]
71020de028  b 0x71020de0d8
71020de02c  cmp w8,#0x13
71020de030  b.ne 0x71020de044
71020de034  ldur x8,[x23, #-0x10]
71020de038  scvtf s0,x8
71020de03c  fmov w8,s0
71020de040  b 0x71020de0d8
71020de044  and w8,w8,#0xf
71020de048  cmp w8,#0x4
71020de04c  b.ne 0x71020de0d4
71020de050  ldur x8,[x23, #-0x10]
71020de054  add x0,x8,#0x18
71020de058  mov x1,sp
71020de05c  bl 0x7103907f00
71020de060  ldur x8,[x23, #-0x10]
71020de064  ldrb w9,[x8, #0x8]
71020de068  cmp w9,#0x4
71020de06c  b.ne 0x71020de0a8
71020de070  ldrb w8,[x8, #0xb]
71020de074  b 0x71020de0ac
71020de078  ldr s0,[x23]
71020de07c  adrp x8,0x7104472000
71020de080  ldr s1,[x8, #0x8f4]
71020de084  frintm s0,s0
71020de088  fcmp s0,s1
71020de08c  b.lt 0x71020ddf6c
71020de090  adrp x8,0x7104472000
71020de094  ldr s1,[x8, #0xe68]
71020de098  fcmp s0,s1
71020de09c  b.pl 0x71020ddf6c
71020de0a0  fcvtzs x8,s0
71020de0a4  b 0x71020ddf70
71020de0a8  ldr x8,[x8, #0x10]
71020de0ac  add x8,x8,#0x1
71020de0b0  cmp x0,x8
71020de0b4  b.ne 0x71020de0d4
71020de0b8  ldr x9,[sp]
71020de0bc  scvtf s0,x9
71020de0c0  ldr w8,[sp, #0x8]
71020de0c4  cmp w8,#0x13
71020de0c8  fmov w10,s0
71020de0cc  csel w8,w10,w9,eq
71020de0d0  b 0x71020de0d8
71020de0d4  mov w8,wzr
71020de0d8  str w8,[x20, #0x60]
71020de0dc  ldr x8,[x19, #0x10]
71020de0e0  ldr x9,[x19, #0x20]
71020de0e4  sub x8,x8,#0x10
71020de0e8  cmp w21,#0x1
71020de0ec  str x8,[x19, #0x10]
71020de0f0  b.lt 0x71020de110
71020de0f4  ldr x9,[x9]
71020de0f8  add x9,x9,w21, SXTW  #0x4
71020de0fc  adrp x10,0x7104862000
71020de100  add x10,x10,#0x960
71020de104  cmp x9,x8
71020de108  csel x1,x9,x10,cc
71020de10c  b 0x71020de16c
71020de110  add w10,w22,#0x1
71020de114  cmp w21,w10
71020de118  b.ge 0x71020de130
71020de11c  cmp w21,w22
71020de120  b.ne 0x71020de138
71020de124  ldr x8,[x19, #0x18]
71020de128  add x1,x8,#0x40
71020de12c  b 0x71020de16c
71020de130  add x1,x8,w21, SXTW  #0x4
71020de134  b 0x71020de16c
71020de138  ldr x8,[x9]
71020de13c  ldr w9,[x8, #0x8]
71020de140  adrp x1,0x7104862000
71020de144  add x1,x1,#0x960
71020de148  cmp w9,#0x16
71020de14c  b.eq 0x71020de16c
71020de150  ldr x8,[x8]
71020de154  sub w9,w22,w21
71020de158  add x10,x8,w9, SXTW  #0x4
71020de15c  ldrb w8,[x8, #0xa]
71020de160  add x10,x10,#0x10
71020de164  cmp w9,w8
71020de168  csel x1,x1,x10,gt
71020de16c  adrp x2,0x7104444000
71020de170  add x2,x2,#0x91e
71020de174  mov x0,x19
71020de178  bl 0x71038f4d40
71020de17c  ldr x8,[x19, #0x10]
71020de180  ldur w9,[x8, #-0x8]
71020de184  cbz w9,0x71020de1d4
71020de188  cmp w9,#0x13
71020de18c  b.eq 0x71020de1a4
71020de190  cmp w9,#0x1
71020de194  b.ne 0x71020de1bc
71020de198  ldur w8,[x8, #-0x10]
71020de19c  cmp w8,#0x0
71020de1a0  b 0x71020de1ec
71020de1a4  ldur x10,[x8, #-0x10]
71020de1a8  cbz x10,0x71020de1d4
71020de1ac  scvtf s0,x10
71020de1b0  fcmp s0,#0.0
71020de1b4  b.eq 0x71020de1d4
71020de1b8  b 0x71020de1dc
71020de1bc  and w10,w9,#0xf
71020de1c0  cmp w10,#0x3
71020de1c4  b.ne 0x71020de1dc
71020de1c8  ldur s0,[x8, #-0x10]
71020de1cc  fcmp s0,#0.0
71020de1d0  b.ne 0x71020de1dc
71020de1d4  mov w8,wzr
71020de1d8  b 0x71020de1f8
71020de1dc  cmp w9,#0x3
71020de1e0  b.ne 0x71020de1f4
71020de1e4  ldur s0,[x8, #-0x10]
71020de1e8  fcmp s0,#0.0
71020de1ec  cset w8,ne
71020de1f0  b 0x71020de1f8
71020de1f4  mov w8,#0x1
71020de1f8  strb w8,[x20, #0x64]
71020de1fc  ldr x8,[x19, #0x10]
71020de200  ldr x9,[x19, #0x20]
71020de204  sub x8,x8,#0x10
71020de208  cmp w21,#0x1
71020de20c  str x8,[x19, #0x10]
71020de210  b.lt 0x71020de230
71020de214  ldr x9,[x9]
71020de218  add x9,x9,w21, SXTW  #0x4
71020de21c  adrp x10,0x7104862000
71020de220  add x10,x10,#0x960
71020de224  cmp x9,x8
71020de228  csel x1,x9,x10,cc
71020de22c  b 0x71020de28c
71020de230  add w10,w22,#0x1
71020de234  cmp w21,w10
71020de238  b.ge 0x71020de250
71020de23c  cmp w21,w22
71020de240  b.ne 0x71020de258
71020de244  ldr x8,[x19, #0x18]
71020de248  add x1,x8,#0x40
71020de24c  b 0x71020de28c
71020de250  add x1,x8,w21, SXTW  #0x4
71020de254  b 0x71020de28c
71020de258  ldr x8,[x9]
71020de25c  ldr w9,[x8, #0x8]
71020de260  adrp x1,0x7104862000
71020de264  add x1,x1,#0x960
71020de268  cmp w9,#0x16
71020de26c  b.eq 0x71020de28c
71020de270  ldr x8,[x8]
71020de274  sub w9,w22,w21
71020de278  add x10,x8,w9, SXTW  #0x4
71020de27c  ldrb w8,[x8, #0xa]
71020de280  add x10,x10,#0x10
71020de284  cmp w9,w8
71020de288  csel x1,x1,x10,gt
71020de28c  adrp x2,0x7104413000
71020de290  add x2,x2,#0xb47
71020de294  mov x0,x19
71020de298  bl 0x71038f4d40
71020de29c  ldr x8,[x19, #0x10]
71020de2a0  ldur w9,[x8, #-0x8]
71020de2a4  cbz w9,0x71020de2f4
71020de2a8  cmp w9,#0x13
71020de2ac  b.eq 0x71020de2c4
71020de2b0  cmp w9,#0x1
71020de2b4  b.ne 0x71020de2dc
71020de2b8  ldur w8,[x8, #-0x10]
71020de2bc  cmp w8,#0x0
71020de2c0  b 0x71020de30c
71020de2c4  ldur x10,[x8, #-0x10]
71020de2c8  cbz x10,0x71020de2f4
71020de2cc  scvtf s0,x10
71020de2d0  fcmp s0,#0.0
71020de2d4  b.eq 0x71020de2f4
71020de2d8  b 0x71020de2fc
71020de2dc  and w10,w9,#0xf
71020de2e0  cmp w10,#0x3
71020de2e4  b.ne 0x71020de2fc
71020de2e8  ldur s0,[x8, #-0x10]
71020de2ec  fcmp s0,#0.0
71020de2f0  b.ne 0x71020de2fc
71020de2f4  mov w8,wzr
71020de2f8  b 0x71020de318
71020de2fc  cmp w9,#0x3
71020de300  b.ne 0x71020de314
71020de304  ldur s0,[x8, #-0x10]
71020de308  fcmp s0,#0.0
71020de30c  cset w8,ne
71020de310  b 0x71020de318
71020de314  mov w8,#0x1
71020de318  strb w8,[x20, #0x65]
71020de31c  ldr x8,[x19, #0x10]
71020de320  ldr x9,[x19, #0x20]
71020de324  sub x8,x8,#0x10
71020de328  cmp w21,#0x1
71020de32c  str x8,[x19, #0x10]
71020de330  b.lt 0x71020de350
71020de334  ldr x9,[x9]
71020de338  add x9,x9,w21, SXTW  #0x4
71020de33c  adrp x10,0x7104862000
71020de340  add x10,x10,#0x960
71020de344  cmp x9,x8
71020de348  csel x1,x9,x10,cc
71020de34c  b 0x71020de3ac
71020de350  add w10,w22,#0x1
71020de354  cmp w21,w10
71020de358  b.ge 0x71020de370
71020de35c  cmp w21,w22
71020de360  b.ne 0x71020de378
71020de364  ldr x8,[x19, #0x18]
71020de368  add x1,x8,#0x40
71020de36c  b 0x71020de3ac
71020de370  add x1,x8,w21, SXTW  #0x4
71020de374  b 0x71020de3ac
71020de378  ldr x8,[x9]
71020de37c  ldr w9,[x8, #0x8]
71020de380  adrp x1,0x7104862000
71020de384  add x1,x1,#0x960
71020de388  cmp w9,#0x16
71020de38c  b.eq 0x71020de3ac
71020de390  ldr x8,[x8]
71020de394  sub w9,w22,w21
71020de398  add x10,x8,w9, SXTW  #0x4
71020de39c  ldrb w8,[x8, #0xa]
71020de3a0  add x10,x10,#0x10
71020de3a4  cmp w9,w8
71020de3a8  csel x1,x1,x10,gt
71020de3ac  adrp x2,0x71043bf000
71020de3b0  add x2,x2,#0x74a
71020de3b4  mov x0,x19
71020de3b8  bl 0x71038f4d40
71020de3bc  ldr x8,[x19, #0x10]
71020de3c0  ldur w9,[x8, #-0x8]
71020de3c4  cbz w9,0x71020de414
71020de3c8  cmp w9,#0x13
71020de3cc  b.eq 0x71020de3e4
71020de3d0  cmp w9,#0x1
71020de3d4  b.ne 0x71020de3fc
71020de3d8  ldur w8,[x8, #-0x10]
71020de3dc  cmp w8,#0x0
71020de3e0  b 0x71020de42c
71020de3e4  ldur x10,[x8, #-0x10]
71020de3e8  cbz x10,0x71020de414
71020de3ec  scvtf s0,x10
71020de3f0  fcmp s0,#0.0
71020de3f4  b.eq 0x71020de414
71020de3f8  b 0x71020de41c
71020de3fc  and w10,w9,#0xf
71020de400  cmp w10,#0x3
71020de404  b.ne 0x71020de41c
71020de408  ldur s0,[x8, #-0x10]
71020de40c  fcmp s0,#0.0
71020de410  b.ne 0x71020de41c
71020de414  mov w8,wzr
71020de418  b 0x71020de438
71020de41c  cmp w9,#0x3
71020de420  b.ne 0x71020de434
71020de424  ldur s0,[x8, #-0x10]
71020de428  fcmp s0,#0.0
71020de42c  cset w8,ne
71020de430  b 0x71020de438
71020de434  mov w8,#0x1
71020de438  strb w8,[x20, #0x66]
71020de43c  ldr x8,[x19, #0x10]
71020de440  sub x8,x8,#0x10
71020de444  str x8,[x19, #0x10]
71020de448  ldp x29,x30,[sp, #0x40]
71020de44c  ldp x20,x19,[sp, #0x30]
71020de450  ldr x23,[sp, #0x10]
71020de454  ldp x22,x21,[sp, #0x20]
71020de458  add sp,sp,#0x50
71020de45c  ret
