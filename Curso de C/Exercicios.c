#include <stdio.h>

int main(){
    int n1, n2;
    printf("Digite dois numeros para verificar sua divisibilidade: \n");
    scanf("%d %d", &n1, &n2);
    if(n2 == 0){
        printf("Divisao por zero nao permitida\n");
    }if else(n1 % n2 == 0){
        printf("%d eh divisivel por %d e o resultado eh %d\n", n1, n2, n1/n2);
    }else{
        printf("%d nao eh divisivel por %d\n", n1, n2);
    }
    return 0;
}
