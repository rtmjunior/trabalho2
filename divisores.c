/*
* Arquivo: divisores.c
* Autor: Rodrigo Tarrega Martins Junior
* Matricula: 12121ETE007
* Criado em: 27/11/2022
*/

#include <stdio.h>

int main(void){
    int i, n;
    printf("Digite um numero\n");
    scanf("%d",&n);

    for (i = 1; i <= n; ++i){
        if(n % i == 0){
            printf("divide por: %d\n",i);
        }
        else{
            continue;
        }

    }
    return 0;
}
