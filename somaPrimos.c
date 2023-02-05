/*
* Arquivo: somaPrimos.c
* Autor: Rodrigo Tarrega Martins Junior
* Matricula: 12121ETE007
* Criado em: 27/11/2022
*/

# include  < stdio.h >

int  principal ( vazio ){
    int inicio, fim;
    printf ( " Força um intervalo: " );
    scanf ( " %d  %d " , &inicio, &fim);
    int soma = 0 ;
    for ( int i = inicio; i<=fim; i++){
        intj ;
        int adicionar = i;
        se (i == 1 ) adicionar = 0 ;
        para (j = 2 ; j<i; j++){
            if (i%j == 0 ){
                adicionar = 0 ;
            }
        }
        soma = soma + soma;
    }

    printf ( " %d \n " ,soma);
    retornar  1 ;
}
