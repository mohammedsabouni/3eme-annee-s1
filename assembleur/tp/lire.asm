data segment 
    ;a db ?                        
    msg db 'Saisir un caractere : $' 
ends

code segment
start:
    mov ax, data                 
    mov ds, ax
    
    mov ah, 09h                  
    lea dx, msg                 
    int 21h                      

    mov ah, 02h                 
    mov dl, 0Ah                  
    int 21h                      
                            
    mov ah, 01h                  
    int 21h                      
    ;mov a, al                    
    
    mov ax, 4C00h                 
    int 21h                      
ends

end start       

;le declaration de la variable a est optionnel c aad que on peut afficher le caractere saisis sans avoir besoin de l affecter a la variable a 
;parceque la saisis d un caractere est stockee directemment dans le rgistre al et s affiche automatiquement sur l ecrant 