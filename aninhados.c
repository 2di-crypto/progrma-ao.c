#include <stdio.h>

int main(){
    int variavel;

    printf(" digite um valor\n");
    scanf("%d", &variavel);

    switch ( variavel){
    case 1:
        printf("codigo a ser executado se variavel == 1\n");
    break;
    case 2:
         printf("codigo a ser executado se varialvel == 2\n ");
    break;        
    default:
        printf("codigo a ser execultado se varialvel nao for 1 ou 2\n");
    }
}