data segment
    a db 8
    b db 3
ends

code segment
    start:
    mov ax, data
    mov ds, ax   
    
    mov al, a
    mov bl, b
    sub al, bl
    
    ;affichage
    mov ah ,02h
    mov dl ,al
    int 21h
    
    ;fin du programme
    mov ax, 4c00h 
    int 21h
    
ends
end start
    