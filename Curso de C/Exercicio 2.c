#include <stdio.h>

int main(){
    int n, cifra;
    printf("Digite um numero inteiro: \n");
    scanf("%i", &n);
    if(n >= 0){
         do{
            cifra = n % 10;
            printf("%d", cifra);
            n /= 10;
         } while(n != 0);
         printf("\n");
    } else if(n < 1){
        n *= -1;
        printf("-");
        do{
            cifra = n % 10;
            printf("%d", cifra);
            n /= 10;
         } while(n != 0);
         printf("\n");
    }
    return 0;
}
