section .data
    hello_msg db 'Hello, Holberton',0x0A,0

section .text
    global main

    extern printf

main:
    ; Call printf with the hello_msg string as the argument
    mov rdi, hello_msg
    call printf

    ; Exit the program
    mov rax, 60         ; syscall number for exit
    xor rdi, rdi        ; status code 0
    syscall
