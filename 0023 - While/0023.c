#include<stdio.h>
#include <stdlib.h>

int main()
{
    int x = 0;
    int valDigitado = 0;
    printf("Informe a quantidade de vzs que vc deseja que nos repetimos a mesma instrucao:\n");
    scanf("%i", &valDigitado);
    while(x < valDigitado){
        printf("%i\n", x * 10);
        x = x + 1;
    }
    return 0;
}
