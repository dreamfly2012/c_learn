	.file	"main.c"
	.text
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC0:
	.ascii "%d\0"
LC1:
	.ascii "%s %d\0"
LC2:
	.ascii "%s %d\12\0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB13:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	pushl	%ebx
	andl	$-16, %esp
	subl	$272, %esp
	.cfi_offset 3, -12
	call	___main
	leal	28(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC0, (%esp)
	call	_scanf
	movl	$0, 268(%esp)
	jmp	L2
L3:
	leal	54(%esp), %ecx
	movl	268(%esp), %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	addl	$16, %eax
	addl	%ecx, %eax
	leal	4(%eax), %ecx
	leal	54(%esp), %ebx
	movl	268(%esp), %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	addl	%ebx, %eax
	movl	%ecx, 8(%esp)
	movl	%eax, 4(%esp)
	movl	$LC1, (%esp)
	call	_scanf
	addl	$1, 268(%esp)
L2:
	movl	28(%esp), %eax
	cmpl	%eax, 268(%esp)
	jl	L3
	movl	$0, 268(%esp)
	jmp	L4
L8:
	movl	$0, 264(%esp)
	jmp	L5
L7:
	movl	264(%esp), %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	leal	272(%esp), %ebx
	addl	%ebx, %eax
	subl	$198, %eax
	movzbl	(%eax), %ecx
	movl	264(%esp), %eax
	leal	1(%eax), %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	leal	272(%esp), %ebx
	addl	%ebx, %eax
	subl	$198, %eax
	movzbl	(%eax), %eax
	cmpb	%al, %cl
	jge	L6
	movl	264(%esp), %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	leal	272(%esp), %ebx
	addl	%ebx, %eax
	subl	$218, %eax
	movl	(%eax), %edx
	movl	%edx, 33(%esp)
	movl	4(%eax), %edx
	movl	%edx, 37(%esp)
	movl	8(%eax), %edx
	movl	%edx, 41(%esp)
	movl	12(%eax), %edx
	movl	%edx, 45(%esp)
	movl	16(%eax), %edx
	movl	%edx, 49(%esp)
	movzbl	20(%eax), %eax
	movb	%al, 53(%esp)
	movl	264(%esp), %eax
	leal	1(%eax), %ecx
	movl	264(%esp), %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	leal	272(%esp), %ebx
	addl	%ebx, %eax
	leal	-218(%eax), %edx
	movl	%ecx, %eax
	sall	$2, %eax
	addl	%ecx, %eax
	sall	$2, %eax
	addl	%ecx, %eax
	leal	272(%esp), %ebx
	addl	%ebx, %eax
	subl	$218, %eax
	movl	(%eax), %ecx
	movl	%ecx, (%edx)
	movl	4(%eax), %ecx
	movl	%ecx, 4(%edx)
	movl	8(%eax), %ecx
	movl	%ecx, 8(%edx)
	movl	12(%eax), %ecx
	movl	%ecx, 12(%edx)
	movl	16(%eax), %ecx
	movl	%ecx, 16(%edx)
	movzbl	20(%eax), %eax
	movb	%al, 20(%edx)
	movl	264(%esp), %eax
	leal	1(%eax), %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	leal	272(%esp), %ebx
	addl	%ebx, %eax
	subl	$218, %eax
	movl	33(%esp), %edx
	movl	%edx, (%eax)
	movl	37(%esp), %edx
	movl	%edx, 4(%eax)
	movl	41(%esp), %edx
	movl	%edx, 8(%eax)
	movl	45(%esp), %edx
	movl	%edx, 12(%eax)
	movl	49(%esp), %edx
	movl	%edx, 16(%eax)
	movzbl	53(%esp), %edx
	movb	%dl, 20(%eax)
L6:
	addl	$1, 264(%esp)
L5:
	movl	28(%esp), %eax
	subl	$1, %eax
	cmpl	%eax, 264(%esp)
	jl	L7
	addl	$1, 268(%esp)
L4:
	movl	28(%esp), %eax
	cmpl	%eax, 268(%esp)
	jl	L8
	movl	$0, 268(%esp)
	jmp	L9
L10:
	movl	268(%esp), %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	leal	272(%esp), %ebx
	addl	%ebx, %eax
	subl	$198, %eax
	movzbl	(%eax), %eax
	movsbl	%al, %ecx
	leal	54(%esp), %ebx
	movl	268(%esp), %edx
	movl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	sall	$2, %eax
	addl	%edx, %eax
	addl	%ebx, %eax
	movl	%ecx, 8(%esp)
	movl	%eax, 4(%esp)
	movl	$LC2, (%esp)
	call	_printf
	addl	$1, 268(%esp)
L9:
	movl	28(%esp), %eax
	cmpl	%eax, 268(%esp)
	jl	L10
	call	_getchar
	movl	$0, %eax
	movl	-4(%ebp), %ebx
	leave
	.cfi_restore 5
	.cfi_restore 3
	.cfi_def_cfa 4, 4
	ret
	.cfi_endproc
LFE13:
	.ident	"GCC: (MinGW.org GCC-8.2.0-5) 8.2.0"
	.def	_scanf;	.scl	2;	.type	32;	.endef
	.def	_printf;	.scl	2;	.type	32;	.endef
	.def	_getchar;	.scl	2;	.type	32;	.endef
