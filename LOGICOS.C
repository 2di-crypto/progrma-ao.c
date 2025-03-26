#include <stdio.h>

int main(){
    int idade;
    int renda;

  printf("digite sua idade : ");
  scanf("%d", &idade);
  printf("digite sua renda mensal: ");
  scanf("%f", &renda);

  if (idade <= 18 || idade >=60 )
  {
    if (renda < 2000)
    {
    printf("voce tem direito ao desconto!\n");
    } else {
        printf("voce nao tem direito ao desconto devido a renda!\n");
    }
  } else {
    printf("voce nao aos criterios devido a idade!\n");

  }
    
}