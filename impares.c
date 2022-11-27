/*
* Arquivo: impares.c
* Autor: Rodrigo Tarrega Martins Junior
* Matricula: 12121ETE007
* Criado em: 27/11/2022
*/

#include <stdio.h>

int main(void){
    int a,b,i,contador,resultado,p;
    printf("digite A e B sendo A menor que B\n");
    scanf("%d", &a);
    scanf("%d", &b);
    
    i = (b-a);
    contador = 0;
    while (contador <= i){
        
        if(1 == 1){
            p = a+contador;
            printf("impares: %d\n",p);
            contador += 1;
        }
        else;
            contador += 1;
    }