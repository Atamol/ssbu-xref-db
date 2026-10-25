// addr:      7101fdbb90
// offset:    0x1fdbb90
// name:      FUN_7101fdbb90
// mangled:   
// size:      3228

7101fdbb90  str x23,[sp, #-0x40]!
7101fdbb94  stp x22,x21,[sp, #0x10]
7101fdbb98  stp x20,x19,[sp, #0x20]
7101fdbb9c  stp x29,x30,[sp, #0x30]
7101fdbba0  add x29,sp,#0x30
7101fdbba4  ldr x8,[x1, #0x10]
7101fdbba8  adrp x9,0x7101fdc000
7101fdbbac  add x9,x9,#0x830
7101fdbbb0  str x9,[x8]
7101fdbbb4  mov w9,#0x2
7101fdbbb8  str w9,[x8, #0x8]
7101fdbbbc  ldr x8,[x1, #0x10]
7101fdbbc0  mov x19,x1
7101fdbbc4  mov x20,x0
7101fdbbc8  mov x0,x19
7101fdbbcc  add x9,x8,#0x10
7101fdbbd0  mov w21,w2
7101fdbbd4  adrp x2,0x710430c000
7101fdbbd8  add x2,x2,#0x66a
7101fdbbdc  str x9,[x1, #0x10]
7101fdbbe0  sub x1,x8,#0x10
7101fdbbe4  bl 0x71038f5390
7101fdbbe8  tbz w21,#0x0,0x7101fdbc40
7101fdbbec  ldr x8,[x19, #0x18]
7101fdbbf0  ldr x8,[x8, #0x18]
7101fdbbf4  cmp x8,#0x1
7101fdbbf8  b.lt 0x7101fdbc04
7101fdbbfc  mov x0,x19
7101fdbc00  bl 0x71038fec40
7101fdbc04  mov x0,x19
7101fdbc08  bl 0x710391e050
7101fdbc0c  ldr x8,[x19, #0x10]
7101fdbc10  mov w9,#0x45
7101fdbc14  str w9,[x8, #0x8]
7101fdbc18  str x0,[x8]
7101fdbc1c  ldr x8,[x19, #0x10]
7101fdbc20  mov x1,x0
7101fdbc24  mov w3,#0x4
7101fdbc28  mov x0,x19
7101fdbc2c  mov w2,wzr
7101fdbc30  add x8,x8,#0x10
7101fdbc34  str x8,[x19, #0x10]
7101fdbc38  bl 0x710391d4c0
7101fdbc3c  b 0x7101fdbc58
7101fdbc40  ldr x8,[x19, #0x10]
7101fdbc44  sub x1,x8,#0x10
7101fdbc48  adrp x2,0x71042c5000
7101fdbc4c  add x2,x2,#0xce7
7101fdbc50  mov x0,x19
7101fdbc54  bl 0x71038f4d40
7101fdbc58  ldr s0,[x20]
7101fdbc5c  ldr x8,[x19, #0x10]
7101fdbc60  orr w22,wzr,#0x3
7101fdbc64  str w22,[x8, #0x8]
7101fdbc68  str s0,[x8]
7101fdbc6c  ldr x8,[x19, #0x10]
7101fdbc70  add x9,x8,#0x10
7101fdbc74  sub x1,x8,#0x10
7101fdbc78  adrp x2,0x71043d7000
7101fdbc7c  add x2,x2,#0xeae
7101fdbc80  mov x0,x19
7101fdbc84  str x9,[x19, #0x10]
7101fdbc88  bl 0x71038f5390
7101fdbc8c  ldr s0,[x20, #0x4]
7101fdbc90  ldr x8,[x19, #0x10]
7101fdbc94  str w22,[x8, #0x8]
7101fdbc98  str s0,[x8]
7101fdbc9c  ldr x8,[x19, #0x10]
7101fdbca0  add x9,x8,#0x10
7101fdbca4  sub x1,x8,#0x10
7101fdbca8  adrp x2,0x71042ab000
7101fdbcac  add x2,x2,#0xc20
7101fdbcb0  mov x0,x19
7101fdbcb4  str x9,[x19, #0x10]
7101fdbcb8  bl 0x71038f5390
7101fdbcbc  ldr s0,[x20, #0x8]
7101fdbcc0  ldr x8,[x19, #0x10]
7101fdbcc4  str w22,[x8, #0x8]
7101fdbcc8  str s0,[x8]
7101fdbccc  ldr x8,[x19, #0x10]
7101fdbcd0  add x9,x8,#0x10
7101fdbcd4  sub x1,x8,#0x10
7101fdbcd8  adrp x2,0x710443b000
7101fdbcdc  add x2,x2,#0x9a0
7101fdbce0  mov x0,x19
7101fdbce4  str x9,[x19, #0x10]
7101fdbce8  bl 0x71038f5390
7101fdbcec  ldr x8,[x19, #0x10]
7101fdbcf0  tbz w21,#0x0,0x7101fdbd5c
7101fdbcf4  sub x1,x8,#0x20
7101fdbcf8  adrp x2,0x71042c5000
7101fdbcfc  add x2,x2,#0xce7
7101fdbd00  mov x0,x19
7101fdbd04  bl 0x71038f5390
7101fdbd08  ldr x8,[x19, #0x18]
7101fdbd0c  ldr x8,[x8, #0x18]
7101fdbd10  cmp x8,#0x1
7101fdbd14  b.lt 0x7101fdbd20
7101fdbd18  mov x0,x19
7101fdbd1c  bl 0x71038fec40
7101fdbd20  mov x0,x19
7101fdbd24  bl 0x710391e050
7101fdbd28  ldr x8,[x19, #0x10]
7101fdbd2c  mov w9,#0x45
7101fdbd30  str w9,[x8, #0x8]
7101fdbd34  str x0,[x8]
7101fdbd38  ldr x8,[x19, #0x10]
7101fdbd3c  mov x1,x0
7101fdbd40  mov w3,#0x4
7101fdbd44  mov x0,x19
7101fdbd48  mov w2,wzr
7101fdbd4c  add x8,x8,#0x10
7101fdbd50  str x8,[x19, #0x10]
7101fdbd54  bl 0x710391d4c0
7101fdbd58  b 0x7101fdbd78
7101fdbd5c  sub x9,x8,#0x10
7101fdbd60  sub x1,x8,#0x20
7101fdbd64  adrp x2,0x710438d000
7101fdbd68  add x2,x2,#0x8a9
7101fdbd6c  mov x0,x19
7101fdbd70  str x9,[x19, #0x10]
7101fdbd74  bl 0x71038f4d40
7101fdbd78  ldr s0,[x20, #0x10]
7101fdbd7c  ldr x8,[x19, #0x10]
7101fdbd80  orr w22,wzr,#0x3
7101fdbd84  str w22,[x8, #0x8]
7101fdbd88  str s0,[x8]
7101fdbd8c  ldr x8,[x19, #0x10]
7101fdbd90  add x9,x8,#0x10
7101fdbd94  sub x1,x8,#0x10
7101fdbd98  adrp x2,0x71043d7000
7101fdbd9c  add x2,x2,#0xeae
7101fdbda0  mov x0,x19
7101fdbda4  str x9,[x19, #0x10]
7101fdbda8  bl 0x71038f5390
7101fdbdac  ldr s0,[x20, #0x14]
7101fdbdb0  ldr x8,[x19, #0x10]
7101fdbdb4  str w22,[x8, #0x8]
7101fdbdb8  str s0,[x8]
7101fdbdbc  ldr x8,[x19, #0x10]
7101fdbdc0  add x9,x8,#0x10
7101fdbdc4  sub x1,x8,#0x10
7101fdbdc8  adrp x2,0x71042ab000
7101fdbdcc  add x2,x2,#0xc20
7101fdbdd0  mov x0,x19
7101fdbdd4  str x9,[x19, #0x10]
7101fdbdd8  bl 0x71038f5390
7101fdbddc  ldr s0,[x20, #0x18]
7101fdbde0  ldr x8,[x19, #0x10]
7101fdbde4  str w22,[x8, #0x8]
7101fdbde8  str s0,[x8]
7101fdbdec  ldr x8,[x19, #0x10]
7101fdbdf0  add x9,x8,#0x10
7101fdbdf4  sub x1,x8,#0x10
7101fdbdf8  adrp x2,0x710443b000
7101fdbdfc  add x2,x2,#0x9a0
7101fdbe00  mov x0,x19
7101fdbe04  str x9,[x19, #0x10]
7101fdbe08  bl 0x71038f5390
7101fdbe0c  ldr x8,[x19, #0x10]
7101fdbe10  tbz w21,#0x0,0x7101fdbe30
7101fdbe14  sub x1,x8,#0x20
7101fdbe18  adrp x2,0x710438d000
7101fdbe1c  add x2,x2,#0x8a9
7101fdbe20  mov x0,x19
7101fdbe24  bl 0x71038f5390
7101fdbe28  ldr x8,[x19, #0x10]
7101fdbe2c  b 0x7101fdbe38
7101fdbe30  sub x8,x8,#0x10
7101fdbe34  str x8,[x19, #0x10]
7101fdbe38  ldr w9,[x20, #0x20]
7101fdbe3c  orr w23,wzr,#0x3
7101fdbe40  str w23,[x8, #0x8]
7101fdbe44  adrp x2,0x710434b000
7101fdbe48  add x2,x2,#0x4c
7101fdbe4c  str w9,[x8]
7101fdbe50  ldr x8,[x19, #0x10]
7101fdbe54  add x9,x8,#0x10
7101fdbe58  sub x1,x8,#0x10
7101fdbe5c  mov x0,x19
7101fdbe60  str x9,[x19, #0x10]
7101fdbe64  bl 0x71038f5390
7101fdbe68  ldr w8,[x20, #0x24]
7101fdbe6c  ldr x9,[x19, #0x10]
7101fdbe70  str w8,[x9]
7101fdbe74  str w23,[x9, #0x8]
7101fdbe78  ldr x8,[x19, #0x10]
7101fdbe7c  add x9,x8,#0x10
7101fdbe80  sub x1,x8,#0x10
7101fdbe84  adrp x2,0x7104292000
7101fdbe88  add x2,x2,#0x9ee
7101fdbe8c  mov x0,x19
7101fdbe90  str x9,[x19, #0x10]
7101fdbe94  bl 0x71038f5390
7101fdbe98  ldrsw x8,[x20, #0x28]
7101fdbe9c  ldr x9,[x19, #0x10]
7101fdbea0  mov w22,#0x13
7101fdbea4  str x8,[x9]
7101fdbea8  str w22,[x9, #0x8]
7101fdbeac  ldr x8,[x19, #0x10]
7101fdbeb0  add x9,x8,#0x10
7101fdbeb4  sub x1,x8,#0x10
7101fdbeb8  adrp x2,0x7104433000
7101fdbebc  add x2,x2,#0xdee
7101fdbec0  mov x0,x19
7101fdbec4  str x9,[x19, #0x10]
7101fdbec8  bl 0x71038f5390
7101fdbecc  ldrsw x8,[x20, #0x2c]
7101fdbed0  ldr x9,[x19, #0x10]
7101fdbed4  str x8,[x9]
7101fdbed8  str w22,[x9, #0x8]
7101fdbedc  ldr x8,[x19, #0x10]
7101fdbee0  add x9,x8,#0x10
7101fdbee4  sub x1,x8,#0x10
7101fdbee8  adrp x2,0x7104281000
7101fdbeec  add x2,x2,#0x701
7101fdbef0  mov x0,x19
7101fdbef4  str x9,[x19, #0x10]
7101fdbef8  bl 0x71038f5390
7101fdbefc  ldrsw x8,[x20, #0x30]
7101fdbf00  ldr x9,[x19, #0x10]
7101fdbf04  str x8,[x9]
7101fdbf08  str w22,[x9, #0x8]
7101fdbf0c  ldr x8,[x19, #0x10]
7101fdbf10  add x9,x8,#0x10
7101fdbf14  sub x1,x8,#0x10
7101fdbf18  adrp x2,0x71042a3000
7101fdbf1c  add x2,x2,#0xd47
7101fdbf20  mov x0,x19
7101fdbf24  str x9,[x19, #0x10]
7101fdbf28  bl 0x71038f5390
7101fdbf2c  ldrsw x8,[x20, #0x34]
7101fdbf30  ldr x9,[x19, #0x10]
7101fdbf34  str x8,[x9]
7101fdbf38  str w22,[x9, #0x8]
7101fdbf3c  ldr x8,[x19, #0x10]
7101fdbf40  add x9,x8,#0x10
7101fdbf44  sub x1,x8,#0x10
7101fdbf48  adrp x2,0x71042e8000
7101fdbf4c  add x2,x2,#0x64
7101fdbf50  mov x0,x19
7101fdbf54  str x9,[x19, #0x10]
7101fdbf58  bl 0x71038f5390
7101fdbf5c  ldr w8,[x20, #0x38]
7101fdbf60  ldr x9,[x19, #0x10]
7101fdbf64  str w8,[x9]
7101fdbf68  str w23,[x9, #0x8]
7101fdbf6c  ldr x8,[x19, #0x10]
7101fdbf70  add x9,x8,#0x10
7101fdbf74  sub x1,x8,#0x10
7101fdbf78  adrp x2,0x71043d0000
7101fdbf7c  add x2,x2,#0x1b8
7101fdbf80  mov x0,x19
7101fdbf84  str x9,[x19, #0x10]
7101fdbf88  bl 0x71038f5390
7101fdbf8c  ldr w8,[x20, #0x3c]
7101fdbf90  ldr x9,[x19, #0x10]
7101fdbf94  str w8,[x9]
7101fdbf98  str w23,[x9, #0x8]
7101fdbf9c  ldr x8,[x19, #0x10]
7101fdbfa0  add x9,x8,#0x10
7101fdbfa4  sub x1,x8,#0x10
7101fdbfa8  adrp x2,0x71042c5000
7101fdbfac  add x2,x2,#0xcef
7101fdbfb0  mov x0,x19
7101fdbfb4  str x9,[x19, #0x10]
7101fdbfb8  bl 0x71038f5390
7101fdbfbc  ldr w8,[x20, #0x40]
7101fdbfc0  ldr x9,[x19, #0x10]
7101fdbfc4  str w8,[x9]
7101fdbfc8  str w23,[x9, #0x8]
7101fdbfcc  ldr x8,[x19, #0x10]
7101fdbfd0  add x9,x8,#0x10
7101fdbfd4  sub x1,x8,#0x10
7101fdbfd8  adrp x2,0x71043bf000
7101fdbfdc  add x2,x2,#0x398
7101fdbfe0  mov x0,x19
7101fdbfe4  str x9,[x19, #0x10]
7101fdbfe8  bl 0x71038f5390
7101fdbfec  ldr x8,[x20, #0x48]
7101fdbff0  ldr x9,[x19, #0x10]
7101fdbff4  str w22,[x9, #0x8]
7101fdbff8  and x8,x8,#0xffffffffff
7101fdbffc  str x8,[x9]
7101fdc000  ldr x8,[x19, #0x10]
7101fdc004  add x9,x8,#0x10
7101fdc008  sub x1,x8,#0x10
7101fdc00c  adrp x2,0x71042e8000
7101fdc010  add x2,x2,#0x6b
7101fdc014  mov x0,x19
7101fdc018  str x9,[x19, #0x10]
7101fdc01c  bl 0x71038f5390
7101fdc020  ldrh w8,[x20, #0x50]
7101fdc024  ldr x9,[x19, #0x10]
7101fdc028  str x8,[x9]
7101fdc02c  str w22,[x9, #0x8]
7101fdc030  ldr x8,[x19, #0x10]
7101fdc034  add x9,x8,#0x10
7101fdc038  sub x1,x8,#0x10
7101fdc03c  adrp x2,0x71043bf000
7101fdc040  add x2,x2,#0x375
7101fdc044  mov x0,x19
7101fdc048  str x9,[x19, #0x10]
7101fdc04c  bl 0x71038f5390
7101fdc050  ldrb w8,[x20, #0x52]
7101fdc054  ldr x9,[x19, #0x10]
7101fdc058  str x8,[x9]
7101fdc05c  str w22,[x9, #0x8]
7101fdc060  ldr x8,[x19, #0x10]
7101fdc064  add x9,x8,#0x10
7101fdc068  sub x1,x8,#0x10
7101fdc06c  adrp x2,0x71042d7000
7101fdc070  add x2,x2,#0x171
7101fdc074  mov x0,x19
7101fdc078  str x9,[x19, #0x10]
7101fdc07c  bl 0x71038f5390
7101fdc080  ldrb w8,[x20, #0x53]
7101fdc084  ldr x9,[x19, #0x10]
7101fdc088  mov w23,#0x1
7101fdc08c  str w8,[x9]
7101fdc090  str w23,[x9, #0x8]
7101fdc094  ldr x8,[x19, #0x10]
7101fdc098  add x9,x8,#0x10
7101fdc09c  sub x1,x8,#0x10
7101fdc0a0  adrp x2,0x710432a000
7101fdc0a4  add x2,x2,#0xe01
7101fdc0a8  mov x0,x19
7101fdc0ac  str x9,[x19, #0x10]
7101fdc0b0  bl 0x71038f5390
7101fdc0b4  ldrb w8,[x20, #0x54]
7101fdc0b8  ldr x9,[x19, #0x10]
7101fdc0bc  str x8,[x9]
7101fdc0c0  str w22,[x9, #0x8]
7101fdc0c4  ldr x8,[x19, #0x10]
7101fdc0c8  add x9,x8,#0x10
7101fdc0cc  sub x1,x8,#0x10
7101fdc0d0  adrp x2,0x7104455000
7101fdc0d4  add x2,x2,#0x8bb
7101fdc0d8  mov x0,x19
7101fdc0dc  str x9,[x19, #0x10]
7101fdc0e0  bl 0x71038f5390
7101fdc0e4  ldr x8,[x20, #0x58]
7101fdc0e8  ldr x9,[x19, #0x10]
7101fdc0ec  str w22,[x9, #0x8]
7101fdc0f0  and x8,x8,#0xffffffffff
7101fdc0f4  str x8,[x9]
7101fdc0f8  ldr x8,[x19, #0x10]
7101fdc0fc  add x9,x8,#0x10
7101fdc100  sub x1,x8,#0x10
7101fdc104  adrp x2,0x71042a3000
7101fdc108  add x2,x2,#0xd4e
7101fdc10c  mov x0,x19
7101fdc110  str x9,[x19, #0x10]
7101fdc114  bl 0x71038f5390
7101fdc118  ldrb w8,[x20, #0x60]
7101fdc11c  ldr x9,[x19, #0x10]
7101fdc120  str x8,[x9]
7101fdc124  str w22,[x9, #0x8]
7101fdc128  ldr x8,[x19, #0x10]
7101fdc12c  add x9,x8,#0x10
7101fdc130  sub x1,x8,#0x10
7101fdc134  adrp x2,0x7104444000
7101fdc138  add x2,x2,#0x508
7101fdc13c  mov x0,x19
7101fdc140  str x9,[x19, #0x10]
7101fdc144  bl 0x71038f5390
7101fdc148  ldrb w8,[x20, #0x61]
7101fdc14c  ldr x9,[x19, #0x10]
7101fdc150  str x8,[x9]
7101fdc154  str w22,[x9, #0x8]
7101fdc158  ldr x8,[x19, #0x10]
7101fdc15c  add x9,x8,#0x10
7101fdc160  sub x1,x8,#0x10
7101fdc164  adrp x2,0x7104402000
7101fdc168  add x2,x2,#0x393
7101fdc16c  mov x0,x19
7101fdc170  str x9,[x19, #0x10]
7101fdc174  bl 0x71038f5390
7101fdc178  ldrb w8,[x20, #0x62]
7101fdc17c  ldr x9,[x19, #0x10]
7101fdc180  str x8,[x9]
7101fdc184  str w22,[x9, #0x8]
7101fdc188  ldr x8,[x19, #0x10]
7101fdc18c  add x9,x8,#0x10
7101fdc190  sub x1,x8,#0x10
7101fdc194  adrp x2,0x7104423000
7101fdc198  add x2,x2,#0x10
7101fdc19c  mov x0,x19
7101fdc1a0  str x9,[x19, #0x10]
7101fdc1a4  bl 0x71038f5390
7101fdc1a8  ldrb w8,[x20, #0x63]
7101fdc1ac  ldr x9,[x19, #0x10]
7101fdc1b0  str w8,[x9]
7101fdc1b4  str w23,[x9, #0x8]
7101fdc1b8  ldr x8,[x19, #0x10]
7101fdc1bc  add x9,x8,#0x10
7101fdc1c0  sub x1,x8,#0x10
7101fdc1c4  adrp x2,0x7104402000
7101fdc1c8  add x2,x2,#0x39f
7101fdc1cc  mov x0,x19
7101fdc1d0  str x9,[x19, #0x10]
7101fdc1d4  bl 0x71038f5390
7101fdc1d8  ldrb w8,[x20, #0x64]
7101fdc1dc  ldr x9,[x19, #0x10]
7101fdc1e0  str w8,[x9]
7101fdc1e4  str w23,[x9, #0x8]
7101fdc1e8  ldr x8,[x19, #0x10]
7101fdc1ec  add x9,x8,#0x10
7101fdc1f0  sub x1,x8,#0x10
7101fdc1f4  adrp x2,0x71043f1000
7101fdc1f8  add x2,x2,#0x6d4
7101fdc1fc  mov x0,x19
7101fdc200  str x9,[x19, #0x10]
7101fdc204  bl 0x71038f5390
7101fdc208  ldrb w8,[x20, #0x65]
7101fdc20c  ldr x9,[x19, #0x10]
7101fdc210  str w8,[x9]
7101fdc214  str w23,[x9, #0x8]
7101fdc218  ldr x8,[x19, #0x10]
7101fdc21c  add x9,x8,#0x10
7101fdc220  sub x1,x8,#0x10
7101fdc224  adrp x2,0x710436d000
7101fdc228  add x2,x2,#0x176
7101fdc22c  mov x0,x19
7101fdc230  str x9,[x19, #0x10]
7101fdc234  bl 0x71038f5390
7101fdc238  ldrb w8,[x20, #0x66]
7101fdc23c  ldr x9,[x19, #0x10]
7101fdc240  str w8,[x9]
7101fdc244  str w23,[x9, #0x8]
7101fdc248  ldr x8,[x19, #0x10]
7101fdc24c  add x9,x8,#0x10
7101fdc250  sub x1,x8,#0x10
7101fdc254  adrp x2,0x71043ae000
7101fdc258  add x2,x2,#0x74c
7101fdc25c  mov x0,x19
7101fdc260  str x9,[x19, #0x10]
7101fdc264  bl 0x71038f5390
7101fdc268  ldrb w8,[x20, #0x67]
7101fdc26c  ldr x9,[x19, #0x10]
7101fdc270  str w8,[x9]
7101fdc274  str w23,[x9, #0x8]
7101fdc278  ldr x8,[x19, #0x10]
7101fdc27c  add x9,x8,#0x10
7101fdc280  sub x1,x8,#0x10
7101fdc284  adrp x2,0x7104413000
7101fdc288  add x2,x2,#0x7c5
7101fdc28c  mov x0,x19
7101fdc290  str x9,[x19, #0x10]
7101fdc294  bl 0x71038f5390
7101fdc298  ldrb w8,[x20, #0x68]
7101fdc29c  ldr x9,[x19, #0x10]
7101fdc2a0  str w8,[x9]
7101fdc2a4  str w23,[x9, #0x8]
7101fdc2a8  ldr x8,[x19, #0x10]
7101fdc2ac  add x9,x8,#0x10
7101fdc2b0  sub x1,x8,#0x10
7101fdc2b4  adrp x2,0x71043e1000
7101fdc2b8  add x2,x2,#0x58
7101fdc2bc  mov x0,x19
7101fdc2c0  str x9,[x19, #0x10]
7101fdc2c4  bl 0x71038f5390
7101fdc2c8  ldrb w8,[x20, #0x69]
7101fdc2cc  ldr x9,[x19, #0x10]
7101fdc2d0  str w8,[x9]
7101fdc2d4  str w23,[x9, #0x8]
7101fdc2d8  ldr x8,[x19, #0x10]
7101fdc2dc  add x9,x8,#0x10
7101fdc2e0  sub x1,x8,#0x10
7101fdc2e4  adrp x2,0x7104423000
7101fdc2e8  add x2,x2,#0x19
7101fdc2ec  mov x0,x19
7101fdc2f0  str x9,[x19, #0x10]
7101fdc2f4  bl 0x71038f5390
7101fdc2f8  ldrb w8,[x20, #0x6a]
7101fdc2fc  ldr x9,[x19, #0x10]
7101fdc300  str x8,[x9]
7101fdc304  str w22,[x9, #0x8]
7101fdc308  ldr x8,[x19, #0x10]
7101fdc30c  add x9,x8,#0x10
7101fdc310  sub x1,x8,#0x10
7101fdc314  adrp x2,0x710436d000
7101fdc318  add x2,x2,#0x181
7101fdc31c  mov x0,x19
7101fdc320  str x9,[x19, #0x10]
7101fdc324  bl 0x71038f5390
7101fdc328  ldrb w8,[x20, #0x6b]
7101fdc32c  ldr x9,[x19, #0x10]
7101fdc330  str w8,[x9]
7101fdc334  str w23,[x9, #0x8]
7101fdc338  ldr x8,[x19, #0x10]
7101fdc33c  add x9,x8,#0x10
7101fdc340  sub x1,x8,#0x10
7101fdc344  adrp x2,0x7104413000
7101fdc348  add x2,x2,#0x7cd
7101fdc34c  mov x0,x19
7101fdc350  str x9,[x19, #0x10]
7101fdc354  bl 0x71038f5390
7101fdc358  ldrb w8,[x20, #0x6c]
7101fdc35c  ldr x9,[x19, #0x10]
7101fdc360  str w8,[x9]
7101fdc364  str w23,[x9, #0x8]
7101fdc368  ldr x8,[x19, #0x10]
7101fdc36c  add x9,x8,#0x10
7101fdc370  sub x1,x8,#0x10
7101fdc374  adrp x2,0x71043f1000
7101fdc378  add x2,x2,#0x6dc
7101fdc37c  mov x0,x19
7101fdc380  str x9,[x19, #0x10]
7101fdc384  bl 0x71038f5390
7101fdc388  ldrb w8,[x20, #0x6d]
7101fdc38c  ldr x9,[x19, #0x10]
7101fdc390  str w8,[x9]
7101fdc394  str w23,[x9, #0x8]
7101fdc398  ldr x8,[x19, #0x10]
7101fdc39c  add x9,x8,#0x10
7101fdc3a0  sub x1,x8,#0x10
7101fdc3a4  adrp x2,0x710434b000
7101fdc3a8  add x2,x2,#0x53
7101fdc3ac  mov x0,x19
7101fdc3b0  str x9,[x19, #0x10]
7101fdc3b4  bl 0x71038f5390
7101fdc3b8  ldrb w8,[x20, #0x6e]
7101fdc3bc  ldr x9,[x19, #0x10]
7101fdc3c0  str w8,[x9]
7101fdc3c4  str w23,[x9, #0x8]
7101fdc3c8  ldr x8,[x19, #0x10]
7101fdc3cc  add x9,x8,#0x10
7101fdc3d0  sub x1,x8,#0x10
7101fdc3d4  adrp x2,0x71042f9000
7101fdc3d8  add x2,x2,#0x166
7101fdc3dc  mov x0,x19
7101fdc3e0  str x9,[x19, #0x10]
7101fdc3e4  bl 0x71038f5390
7101fdc3e8  ldrb w8,[x20, #0x70]
7101fdc3ec  ldr x9,[x19, #0x10]
7101fdc3f0  str w8,[x9]
7101fdc3f4  str w23,[x9, #0x8]
7101fdc3f8  ldr x8,[x19, #0x10]
7101fdc3fc  add x9,x8,#0x10
7101fdc400  sub x1,x8,#0x10
7101fdc404  adrp x2,0x71043d7000
7101fdc408  add x2,x2,#0x730
7101fdc40c  mov x0,x19
7101fdc410  str x9,[x19, #0x10]
7101fdc414  bl 0x71038f5390
7101fdc418  ldrb w8,[x20, #0x71]
7101fdc41c  ldr x9,[x19, #0x10]
7101fdc420  str x8,[x9]
7101fdc424  str w22,[x9, #0x8]
7101fdc428  ldr x8,[x19, #0x10]
7101fdc42c  add x9,x8,#0x10
7101fdc430  sub x1,x8,#0x10
7101fdc434  adrp x2,0x710433b000
7101fdc438  add x2,x2,#0x1e
7101fdc43c  mov x0,x19
7101fdc440  str x9,[x19, #0x10]
7101fdc444  bl 0x71038f5390
7101fdc448  ldrb w8,[x20, #0x72]
7101fdc44c  ldr x9,[x19, #0x10]
7101fdc450  str w8,[x9]
7101fdc454  str w23,[x9, #0x8]
7101fdc458  ldr x8,[x19, #0x10]
7101fdc45c  add x9,x8,#0x10
7101fdc460  sub x1,x8,#0x10
7101fdc464  adrp x2,0x7104413000
7101fdc468  add x2,x2,#0x7d4
7101fdc46c  mov x0,x19
7101fdc470  str x9,[x19, #0x10]
7101fdc474  bl 0x71038f5390
7101fdc478  ldrb w8,[x20, #0x73]
7101fdc47c  ldr x9,[x19, #0x10]
7101fdc480  str x8,[x9]
7101fdc484  str w22,[x9, #0x8]
7101fdc488  ldr x8,[x19, #0x10]
7101fdc48c  add x9,x8,#0x10
7101fdc490  sub x1,x8,#0x10
7101fdc494  adrp x2,0x710436d000
7101fdc498  add x2,x2,#0x18b
7101fdc49c  mov x0,x19
7101fdc4a0  str x9,[x19, #0x10]
7101fdc4a4  bl 0x71038f5390
7101fdc4a8  ldrsh x8,[x20, #0x74]
7101fdc4ac  ldr x9,[x19, #0x10]
7101fdc4b0  str x8,[x9]
7101fdc4b4  str w22,[x9, #0x8]
7101fdc4b8  ldr x8,[x19, #0x10]
7101fdc4bc  add x9,x8,#0x10
7101fdc4c0  sub x1,x8,#0x10
7101fdc4c4  adrp x2,0x7104413000
7101fdc4c8  add x2,x2,#0x7e1
7101fdc4cc  mov x0,x19
7101fdc4d0  str x9,[x19, #0x10]
7101fdc4d4  bl 0x71038f5390
7101fdc4d8  ldrb w8,[x20, #0x76]
7101fdc4dc  ldr x9,[x19, #0x10]
7101fdc4e0  str x8,[x9]
7101fdc4e4  str w22,[x9, #0x8]
7101fdc4e8  ldr x8,[x19, #0x10]
7101fdc4ec  add x9,x8,#0x10
7101fdc4f0  sub x1,x8,#0x10
7101fdc4f4  adrp x2,0x7104455000
7101fdc4f8  add x2,x2,#0x8c8
7101fdc4fc  mov x0,x19
7101fdc500  str x9,[x19, #0x10]
7101fdc504  bl 0x71038f5390
7101fdc508  ldrsw x8,[x20, #0x78]
7101fdc50c  ldr x9,[x19, #0x10]
7101fdc510  str x8,[x9]
7101fdc514  str w22,[x9, #0x8]
7101fdc518  ldr x8,[x19, #0x10]
7101fdc51c  add x9,x8,#0x10
7101fdc520  sub x1,x8,#0x10
7101fdc524  adrp x2,0x71042a3000
7101fdc528  add x2,x2,#0xd54
7101fdc52c  mov x0,x19
7101fdc530  str x9,[x19, #0x10]
7101fdc534  bl 0x71038f5390
7101fdc538  ldrb w8,[x20, #0x7c]
7101fdc53c  ldr x9,[x19, #0x10]
7101fdc540  str w8,[x9]
7101fdc544  str w23,[x9, #0x8]
7101fdc548  ldr x8,[x19, #0x10]
7101fdc54c  add x9,x8,#0x10
7101fdc550  sub x1,x8,#0x10
7101fdc554  adrp x2,0x71043e1000
7101fdc558  add x2,x2,#0x67
7101fdc55c  mov x0,x19
7101fdc560  str x9,[x19, #0x10]
7101fdc564  bl 0x71038f5390
7101fdc568  ldrb w8,[x20, #0x7d]
7101fdc56c  ldr x9,[x19, #0x10]
7101fdc570  str w8,[x9]
7101fdc574  str w23,[x9, #0x8]
7101fdc578  ldr x8,[x19, #0x10]
7101fdc57c  add x9,x8,#0x10
7101fdc580  sub x1,x8,#0x10
7101fdc584  adrp x2,0x71043bf000
7101fdc588  add x2,x2,#0x3a4
7101fdc58c  mov x0,x19
7101fdc590  str x9,[x19, #0x10]
7101fdc594  bl 0x71038f5390
7101fdc598  ldrb w8,[x20, #0x7e]
7101fdc59c  ldr x9,[x19, #0x10]
7101fdc5a0  str x8,[x9]
7101fdc5a4  str w22,[x9, #0x8]
7101fdc5a8  ldr x8,[x19, #0x10]
7101fdc5ac  add x9,x8,#0x10
7101fdc5b0  sub x1,x8,#0x10
7101fdc5b4  adrp x2,0x71043ae000
7101fdc5b8  add x2,x2,#0x756
7101fdc5bc  mov x0,x19
7101fdc5c0  str x9,[x19, #0x10]
7101fdc5c4  bl 0x71038f5390
7101fdc5c8  ldrb w8,[x20, #0x7f]
7101fdc5cc  ldr x9,[x19, #0x10]
7101fdc5d0  str x8,[x9]
7101fdc5d4  str w22,[x9, #0x8]
7101fdc5d8  ldr x8,[x19, #0x10]
7101fdc5dc  add x9,x8,#0x10
7101fdc5e0  sub x1,x8,#0x10
7101fdc5e4  adrp x2,0x710432a000
7101fdc5e8  add x2,x2,#0xe0c
7101fdc5ec  mov x0,x19
7101fdc5f0  str x9,[x19, #0x10]
7101fdc5f4  bl 0x71038f5390
7101fdc5f8  ldrb w8,[x20, #0x80]
7101fdc5fc  ldr x9,[x19, #0x10]
7101fdc600  str w8,[x9]
7101fdc604  str w23,[x9, #0x8]
7101fdc608  ldr x8,[x19, #0x10]
7101fdc60c  add x9,x8,#0x10
7101fdc610  sub x1,x8,#0x10
7101fdc614  adrp x2,0x71043ae000
7101fdc618  add x2,x2,#0x76a
7101fdc61c  mov x0,x19
7101fdc620  str x9,[x19, #0x10]
7101fdc624  bl 0x71038f5390
7101fdc628  ldrb w8,[x20, #0x81]
7101fdc62c  ldr x9,[x19, #0x10]
7101fdc630  str w8,[x9]
7101fdc634  str w23,[x9, #0x8]
7101fdc638  ldr x8,[x19, #0x10]
7101fdc63c  add x9,x8,#0x10
7101fdc640  sub x1,x8,#0x10
7101fdc644  adrp x2,0x710438d000
7101fdc648  add x2,x2,#0x8b2
7101fdc64c  mov x0,x19
7101fdc650  str x9,[x19, #0x10]
7101fdc654  bl 0x71038f5390
7101fdc658  ldr x8,[x20, #0x88]
7101fdc65c  ldr x9,[x19, #0x10]
7101fdc660  str w22,[x9, #0x8]
7101fdc664  and x8,x8,#0xffffffffff
7101fdc668  str x8,[x9]
7101fdc66c  ldr x8,[x19, #0x10]
7101fdc670  add x9,x8,#0x10
7101fdc674  sub x1,x8,#0x10
7101fdc678  adrp x2,0x7104433000
7101fdc67c  add x2,x2,#0xdf6
7101fdc680  mov x0,x19
7101fdc684  str x9,[x19, #0x10]
7101fdc688  bl 0x71038f5390
7101fdc68c  tbz w21,#0x0,0x7101fdc6e4
7101fdc690  ldr x8,[x19, #0x18]
7101fdc694  ldr x8,[x8, #0x18]
7101fdc698  cmp x8,#0x1
7101fdc69c  b.lt 0x7101fdc6a8
7101fdc6a0  mov x0,x19
7101fdc6a4  bl 0x71038fec40
7101fdc6a8  mov x0,x19
7101fdc6ac  bl 0x710391e050
7101fdc6b0  ldr x8,[x19, #0x10]
7101fdc6b4  mov w9,#0x45
7101fdc6b8  str w9,[x8, #0x8]
7101fdc6bc  str x0,[x8]
7101fdc6c0  ldr x8,[x19, #0x10]
7101fdc6c4  mov x1,x0
7101fdc6c8  orr w3,wzr,#0x3
7101fdc6cc  mov x0,x19
7101fdc6d0  mov w2,wzr
7101fdc6d4  add x8,x8,#0x10
7101fdc6d8  str x8,[x19, #0x10]
7101fdc6dc  bl 0x710391d4c0
7101fdc6e0  b 0x7101fdc6fc
7101fdc6e4  ldr x8,[x19, #0x10]
7101fdc6e8  sub x1,x8,#0x10
7101fdc6ec  adrp x2,0x7104433000
7101fdc6f0  add x2,x2,#0xe07
7101fdc6f4  mov x0,x19
7101fdc6f8  bl 0x71038f4d40
7101fdc6fc  ldr s0,[x20, #0x90]
7101fdc700  ldr x8,[x19, #0x10]
7101fdc704  orr w23,wzr,#0x3
7101fdc708  str w23,[x8, #0x8]
7101fdc70c  str s0,[x8]
7101fdc710  ldr x8,[x19, #0x10]
7101fdc714  add x9,x8,#0x10
7101fdc718  sub x1,x8,#0x10
7101fdc71c  adrp x2,0x71043d7000
7101fdc720  add x2,x2,#0xeae
7101fdc724  mov x0,x19
7101fdc728  str x9,[x19, #0x10]
7101fdc72c  bl 0x71038f5390
7101fdc730  ldr s0,[x20, #0x94]
7101fdc734  ldr x8,[x19, #0x10]
7101fdc738  str w23,[x8, #0x8]
7101fdc73c  str s0,[x8]
7101fdc740  ldr x8,[x19, #0x10]
7101fdc744  add x9,x8,#0x10
7101fdc748  sub x1,x8,#0x10
7101fdc74c  adrp x2,0x71042ab000
7101fdc750  add x2,x2,#0xc20
7101fdc754  mov x0,x19
7101fdc758  str x9,[x19, #0x10]
7101fdc75c  bl 0x71038f5390
7101fdc760  ldr x8,[x19, #0x10]
7101fdc764  tbz w21,#0x0,0x7101fdc784
7101fdc768  sub x1,x8,#0x20
7101fdc76c  adrp x2,0x7104433000
7101fdc770  add x2,x2,#0xe07
7101fdc774  mov x0,x19
7101fdc778  bl 0x71038f5390
7101fdc77c  ldr x8,[x19, #0x10]
7101fdc780  b 0x7101fdc78c
7101fdc784  sub x8,x8,#0x10
7101fdc788  str x8,[x19, #0x10]
7101fdc78c  ldrsw x9,[x20, #0xa0]
7101fdc790  str x9,[x8]
7101fdc794  str w22,[x8, #0x8]
7101fdc798  ldr x8,[x19, #0x10]
7101fdc79c  add x9,x8,#0x10
7101fdc7a0  sub x1,x8,#0x10
7101fdc7a4  adrp x2,0x71043d0000
7101fdc7a8  add x2,x2,#0x1be
7101fdc7ac  mov x0,x19
7101fdc7b0  str x9,[x19, #0x10]
7101fdc7b4  bl 0x71038f5390
7101fdc7b8  ldrb w8,[x20, #0xa4]
7101fdc7bc  ldr x9,[x19, #0x10]
7101fdc7c0  mov w21,#0x1
7101fdc7c4  str w8,[x9]
7101fdc7c8  str w21,[x9, #0x8]
7101fdc7cc  ldr x8,[x19, #0x10]
7101fdc7d0  add x9,x8,#0x10
7101fdc7d4  sub x1,x8,#0x10
7101fdc7d8  adrp x2,0x7104281000
7101fdc7dc  add x2,x2,#0x708
7101fdc7e0  mov x0,x19
7101fdc7e4  str x9,[x19, #0x10]
7101fdc7e8  bl 0x71038f5390
7101fdc7ec  ldrb w8,[x20, #0xa6]
7101fdc7f0  ldr x9,[x19, #0x10]
7101fdc7f4  str w8,[x9]
7101fdc7f8  str w21,[x9, #0x8]
7101fdc7fc  ldr x8,[x19, #0x10]
7101fdc800  add x9,x8,#0x10
7101fdc804  str x9,[x19, #0x10]
7101fdc808  mov x0,x19
7101fdc80c  sub x1,x8,#0x10
7101fdc810  ldp x29,x30,[sp, #0x30]
7101fdc814  adrp x2,0x7104402000
7101fdc818  add x2,x2,#0x3a9
7101fdc81c  ldp x20,x19,[sp, #0x20]
7101fdc820  ldp x22,x21,[sp, #0x10]
7101fdc824  ldr x23,[sp], #0x40
7101fdc828  b 0x71038f5390
