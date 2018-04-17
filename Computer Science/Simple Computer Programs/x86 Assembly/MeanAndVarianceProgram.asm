include irvine32.inc
; Program Description: Computes mean and variance of an array of numbers
; Author: Nicholas Cleveland
; Creation Date: 02 / 18 / 17
; Revisions: 1. Variance denominator changed for calculating population
;Date: 02/27/17      Modified by: Nicholas Cleveland 

.386
.model flat, stdcall
.stack 4096
ExitProcess PROTO, dwExitCode : DWORD
.data
mean WORD ?
variance WORD ?
raw WORD 10, 12, 8, 17, 9, 22, 18, 11, 23, 7, 30, 22, 19, 6, 7
rawSize = ($ - raw)/2


.code
main PROC
mov edi, OFFSET raw
mov ecx, LENGTHOF raw
mov ax, 0
mov dx, 0
L1:
add ax, [edi]
add edi, TYPE raw
loop L1
mov cx, rawSize
div cx
mov mean, ax

;variance start
mov edi, OFFSET raw
mov ecx, LENGTHOF raw
mov ax, 0
mov dx, 0
mov bx, 0
L2:
mov ax, [edi]
sub ax, mean
mul ax
add bx, ax
add edi, TYPE raw
loop L2

mov ax, 0
mov ax, bx
mov cx, rawSize
mov dx, 0
div cx
mov variance, ax

mov eax, 0
mov ebx, 0
mov ax, mean
mov bx, variance




INVOKE ExitProcess, 0
main ENDP
END main