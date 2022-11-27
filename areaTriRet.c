/*
* Arquivo: areaTriRet.c
* Autor: Rodrigo Tarrega Martins Junior
* Matricula: 12121ETE007
* Criado em: 27/11/2022
*/

#include <stdio.h>

int main (void){
    int Xa, Xb, Ya, Yb, Xc, Yc, area;

    printf("Digite a cordenada de A\n");
    scanf("%d %d", &Xa,&Ya);
    printf("Digite a cordenada de B\n");
    scanf("%d %d", &Xb,&Yb);
    Xc = Xb;
    Yc = Ya;
    printf("Ponto C (%d,%d)",Xc,Yc);

    area = ((Xc-Xa)*(Yb-Yc))/2;

    printf("Area = %d",area);

    return 0;
}