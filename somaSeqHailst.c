/*
* Arquivo: somaSeqHailst.c
* Autor: Rodrigo Tarrega Martins Junior
* Matricula: 12121ETE007
* Criado em: 27/11/2022
*/

# include  < stdio.h >

int  principal ( vazio ){
    entrada int ;
    printf ( " Forneca um numero: " );
    scanf ( " %d " , &entrada);

    int resultado = entrada;

    while (entrada != 1 ){
        if (entrada% 2 == 1 ){
            entrada = 3 * entrada + 1 ;
            resultado = resultado + entrada;
        } senão {
            entrada = entrada/ 2 ;
            resultado = resultado + entrada;
        }
    }
    printf ( " %d \n " , resultado);
    retornar  1 ;
}
