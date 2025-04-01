int main(){

// mover a torre 5 casas a direita usando loop for
printf("**** TORRE ****\n");
for (int i = 0; i < 5; i++) {
    printf("DIREITA\n");// imprime a direçao do movimento
}
printf("\n");
int a = 1;
int b = 1;

// mover o bispo 5 casas na diagonal (cima direita) usando loop while
printf("**** BISPO ****\n");
while (a <= 5){
    printf("DIAGONAL(CIMA DIREITA)\n");//imprime a direçao do movimento
 
    a++;///incremento impede o loop infinito 
}
printf("\n");

/// MOVER A RAINHA 8 CASAS A ESQUERDA usando loop do-while
printf("**** RAINHA****\n");

do{
    printf("ESQUERDA\n");///imprime a direçao do movimento
    b++; //incremento impede o loop infinito
}while(b  <= 8);

printf("\n");

printf("**** XEQUE-MATE ****\n");

return 0;
}