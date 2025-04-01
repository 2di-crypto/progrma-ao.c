int main(){

// mover a torre 5 casas a direita usando loop for
printf("**** TORRE ****\n");
for (int i = 0; i < 5; i++) {
    printf("DIREITA\n");// imprime a direçao do movimento
}
printf("\n");
int a = 0;

// mover o bispo 5 casas na diagonal (cima direita) usando loop while
printf("**** BISPO ****\n");
while (a <= 5){
    printf("DIAGONAL(CIMA DIREITA)\n");
    a++;
}
return 0;
}