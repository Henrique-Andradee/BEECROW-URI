#include <stdio.h>
int main(){
    unsigned long int soma = 0, a, b;

    scanf("%d %d", &a, &b);

    soma = ((a + b) * (b - a + 1)) / 2;
    
    printf("%d\n", soma);

    return 0;
}