#include <stdio.h>

int main(){
    int opcao;
    float saldo = 1000.00;
    
    printf("escolha uma opçao:\n");
    printf("1. verificar saldo\n");
   printf("2. fazer deposito\n");
   printf("3. fazer saque\n");
   scanf("%d", &opcao);

    switch(opcao)
    {
    case 1:
        printf("o seu saldo é: R$ %.2f\n", saldo);
        break;
    case 2:
        printf("digite o banco que voce deseja depositar\n");
        printf("digite a agencia que voçe deseja depositar\n");
        printf("digite a conta que voçe deseja depositar");
    break;
    case 3:
        printf("digite o valor a sacar\n");
    break;
default:
        printf("opçao invalida\n");
        break;
    }
return 0;
  }