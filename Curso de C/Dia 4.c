#include <stdio.h>

int main(){
    int i = 0;

    while (i != 0){
        printf("Teste\n");
    }

    do{
        printf("Teste 2\n");
    } while(i != 0);

    int idade;

    printf("Favor informar idade:\n");
    scanf("%i", &idade);

    if(idade < 5){
        printf("Bebe.\n");
    } else if (idade > 5 && idade <= 10){
        printf("Crianca.\n");
    } else if (idade > 10 && idade <= 18){
        printf("Adolescente.\n");
    } else if (idade > 18 && idade <= 50){
        printf("Adulto.\n");
    } else {
        printf("Idoso.\n");
    }

    int i;

    printf("Insira um numero inteiro de 1 a 5\n");
    scanf("%i", &i);

    switch (i) {
        case 1:
            printf("primeiro\n");
            break;
        case 2;
            printf("segundo\n");
            break;
        case 3;
            printf("terceiro\n");
            break;
        case 4:
            printf("quarto\n");
            break;
        case 5:
            printf("quinto\n");
            break;
        default:
            printf("opcao nao valida\n");
            break;
    }
    return 0;
}
