
#include <stdio.h>

int main(){
    float tempertaura, umidade;
    unsigned int estoque, estoqueminimo = 1000;

    printf("entre com a temperatura: \n");
    scanf("%f", &tempertaura);
    printf("entre com umidade: \n");
    scanf("%f", &umidade);
    printf("entre com estoque: \n");
    scanf("%u", &estoque);


    if(tempertaura > 30){
        printf("temperatura esta alta\n");
    } else {
        printf("temperatura esta dentro dos parametros\n");
    }


    if(umidade > 50){
        printf("umidade elevada\n");
    } else{
        printf("umidade dentro dos parametros\n");
    }

    if(estoque < estoqueminimo){
        printf("estoque abaixo do minimo\n");
    } else{
        printf("estoque normal!\n");
    }

}  