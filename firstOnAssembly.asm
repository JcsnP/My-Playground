.MODEL small
.STACK 100h
.DATA

msgl db 'Hello World', 10h, 13h, '$'
.CODE
start:
    mov ax,@data
    mov ds,ax
    mov ah,9h
    mov dx,offset msgl
    int 21h
    mov ax,4c00h
    int 21h
end start
