section .data
    hello: db "Hello, Holberton", 0
    format: db "%s\n", 0

section .text
    global _start

_start:
    ; Prepare arguments for printf
    mov rdi, format
    mov rsi, hello
    xor rax, rax  ; Clear RAX to indicate printf is a variable-argument function

    ; Call printf
    call printf

    ; Exit program with status code 0
    xor rdi, rdi
    mov rax, 60  ; System call number for exit
    syscall

