#include <stdio.h>

int main(){
    int num1 = 100;
    int num2 = 20;

    int resposta;

    num1 < num2 ? printf("Sim\n") : printf("Nao\n");

    num1 < num2 ? resposta = 10 : resposta = -10;

    printf("%d\n", resposta);
    return 0;
}
