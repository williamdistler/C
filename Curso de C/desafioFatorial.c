#include <stdio.h>

int main(){
    int n, r = 1;
    printf("Digite um numero: \n");
    scanf("%i", &n);
    for( ; n >= 1; --n){
        r *= n;
    }
    printf("O fatorial do numero eh: %i\n", r);
    return 0;
}
