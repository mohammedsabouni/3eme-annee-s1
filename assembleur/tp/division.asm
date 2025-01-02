data segment 
    a db 6
    b db 2  
    msg db 'le resultat est $'
ends

code segment
    start:
    mov ax, data
    mov ds, ax  
    
    ;afficher chaine de carac
    mov ah, 09h
    mov dl, offset msg
    int 21h 
    
    ;on doit vider ax
    mov ax, 0
    
    ;affectation
    mov al, a
    mov bl, b
    
    ;on doit vider dx pour le rest
    mov dx, 0
    
    ;division on divise a par b
    div bl    
    
    
    ;affichage
    mov ah ,02h
    mov dl ,al
    int 21h
    
    ;fin du programme
    mov ax, 4c00h 
    int 21h
    
ends
end start
    