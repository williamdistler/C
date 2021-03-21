#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int n1, n2, r;
    int op;
    do{
        printf("Digite o Primeiro valor: \n");
        scanf("%i", &n1);
        printf("Digite o Segundo valor: \n");
        scanf("%i", &n2);
        printf("Digite a operacao desejada: \n");
        printf("1 - Soma\n2 - Subtracao\n3 - Multiplicacao\n4 - Divisao\n5 - SAIR\n");
        scanf("%i", &op);
        if(op == 1){
            r = n1 + n2;
            printf("%i + %i = %i\n", n1, n2, r);
        }else if(op == 2){
            r = n1 - n2;
            printf("%i - %i = %i\n", n1, n2, r);
        }else if(op == 3){
            r = n1 * n2;
            printf("%i * %i = %i\n", n1, n2, r);
        }else if(op == 4){
            r = n1 / n2;
            printf("%i / %i = %i\n", n1, n2, r);
        }
        }while(op != 5);
    return 0;
}
