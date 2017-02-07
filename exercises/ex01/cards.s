	.section	__TEXT,__text,regular,pure_instructions
	.macosx_version_min 10, 12
	.globl	_nameToValue
	.align	4, 0x90
_nameToValue:                           ## @nameToValue
	.cfi_startproc
## BB#0:
	pushq	%rbp
Ltmp0:
	.cfi_def_cfa_offset 16
Ltmp1:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp2:
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movq	%rdi, -8(%rbp)
	movl	$0, -12(%rbp)
	movq	-8(%rbp), %rdi
	movsbl	(%rdi), %eax
	movl	%eax, %ecx
	subl	$65, %ecx
	movl	%eax, -16(%rbp)         ## 4-byte Spill
	movl	%ecx, -20(%rbp)         ## 4-byte Spill
	je	LBB0_2
	jmp	LBB0_5
LBB0_5:
	movl	-16(%rbp), %eax         ## 4-byte Reload
	addl	$-74, %eax
	subl	$2, %eax
	movl	%eax, -24(%rbp)         ## 4-byte Spill
	jb	LBB0_1
	jmp	LBB0_6
LBB0_6:
	movl	-16(%rbp), %eax         ## 4-byte Reload
	subl	$81, %eax
	movl	%eax, -28(%rbp)         ## 4-byte Spill
	jne	LBB0_3
	jmp	LBB0_1
LBB0_1:
	movl	$10, -12(%rbp)
	jmp	LBB0_4
LBB0_2:
	movl	$11, -12(%rbp)
	jmp	LBB0_4
LBB0_3:
	movq	-8(%rbp), %rdi
	callq	_atoi
	movl	%eax, -12(%rbp)
LBB0_4:
	movl	-12(%rbp), %eax
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.globl	_addCard
	.align	4, 0x90
_addCard:                               ## @addCard
	.cfi_startproc
## BB#0:
	pushq	%rbp
Ltmp3:
	.cfi_def_cfa_offset 16
Ltmp4:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp5:
	.cfi_def_cfa_register %rbp
	subq	$16, %rsp
	xorl	%eax, %eax
	movl	%edi, -8(%rbp)
	cmpl	-8(%rbp), %eax
	setl	%cl
	andb	$1, %cl
	movzbl	%cl, %eax
	cmpl	$1, %eax
	jl	LBB1_2
## BB#1:
	cmpl	$10, -8(%rbp)
	jle	LBB1_3
LBB1_2:
	leaq	L_.str(%rip), %rdi
	callq	_puts
	movl	$0, -4(%rbp)
	movl	%eax, -12(%rbp)         ## 4-byte Spill
	jmp	LBB1_10
LBB1_3:
	cmpl	$2, -8(%rbp)
	jle	LBB1_6
## BB#4:
	cmpl	$7, -8(%rbp)
	jge	LBB1_6
## BB#5:
	movl	$1, -4(%rbp)
	jmp	LBB1_10
LBB1_6:
	cmpl	$10, -8(%rbp)
	jne	LBB1_8
## BB#7:
	movl	$-1, -4(%rbp)
	jmp	LBB1_10
LBB1_8:
	jmp	LBB1_9
LBB1_9:
	movl	$0, -4(%rbp)
LBB1_10:
	movl	-4(%rbp), %eax
	addq	$16, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.globl	_main
	.align	4, 0x90
_main:                                  ## @main
	.cfi_startproc
## BB#0:
	pushq	%rbp
Ltmp6:
	.cfi_def_cfa_offset 16
Ltmp7:
	.cfi_offset %rbp, -16
	movq	%rsp, %rbp
Ltmp8:
	.cfi_def_cfa_register %rbp
	subq	$32, %rsp
	movl	$0, -4(%rbp)
	movl	$0, -16(%rbp)
LBB2_1:                                 ## =>This Inner Loop Header: Depth=1
	leaq	L_.str.1(%rip), %rdi
	callq	_puts
	leaq	L_.str.2(%rip), %rdi
	leaq	-11(%rbp), %rsi
	movl	%eax, -20(%rbp)         ## 4-byte Spill
	movb	$0, %al
	callq	_scanf
	leaq	-11(%rbp), %rdi
	movl	%eax, -24(%rbp)         ## 4-byte Spill
	callq	_nameToValue
	movl	%eax, -8(%rbp)
	movl	-8(%rbp), %edi
	callq	_addCard
	leaq	L_.str.3(%rip), %rdi
	addl	-16(%rbp), %eax
	movl	%eax, -16(%rbp)
	movl	-16(%rbp), %esi
	movb	$0, %al
	callq	_printf
	movl	%eax, -28(%rbp)         ## 4-byte Spill
## BB#2:                                ##   in Loop: Header=BB2_1 Depth=1
	movsbl	-11(%rbp), %eax
	cmpl	$88, %eax
	jne	LBB2_1
## BB#3:
	xorl	%eax, %eax
	addq	$32, %rsp
	popq	%rbp
	retq
	.cfi_endproc

	.section	__TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
	.asciz	"I don't understand that value!"

L_.str.1:                               ## @.str.1
	.asciz	"Enter the card_name: "

L_.str.2:                               ## @.str.2
	.asciz	"%2s"

L_.str.3:                               ## @.str.3
	.asciz	"Current count: %i\n"


.subsections_via_symbols
