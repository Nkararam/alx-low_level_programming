section .data
hello db 'Hello, Holberton', 0
nl db 10, 0
section .text
global main
extern printf
main:
mov rdi, hello
mov rax, 0
call printf
mov rdi, nl
mov rax, 0
call printf
xor eax, eax
ret
