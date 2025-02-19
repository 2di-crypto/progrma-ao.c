#include <stdio.h>


int main(){
 /*
        soma(+)
subtração (-)
multiplicação (*)
divisão (/)
*/

    int numero1, numero2;
    int soma, subtracao, multiplicacao, divisao;

    printf("entre com o numero 1: \n");
    scanf("%d", &numero1);
    printf("entre com o numero 2: \n");
    scanf("%d", &numero2);

// operaçao soma
    soma = numero1 + numero2;

// operasao subtraçao
    subtracao = numero1 - numero2;

//operaçao multiplicaçao
    multiplicacao = numero1 * numero2;

//operaçao divisao
    divisao = numero1 / numero2;

printf("A soma e: %d\n", soma);
printf("A subtraçao e: %d\n", subtracao);
printf("A multiplicaçao e: %d\n", multiplicacao);
printf("A divisao e: %d\n", divisao);

}