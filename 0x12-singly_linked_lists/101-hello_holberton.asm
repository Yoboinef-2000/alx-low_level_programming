section .data
    hello db "Hello, Holberton", 0

section .text
    global main
    extern printf

main:
    sub rsp, 8          ; Align the stack (8 bytes is typical)
    lea rdi, [hello]    ; Load the address of the format specifier
    call printf
    add rsp, 8          ; Restore the stack

    mov eax, 60
    xor edi, edi
    syscall
    ret

