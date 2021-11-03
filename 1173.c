#include <stdio.h>

int main(){
    int i, n[10], num;

    scanf("%d", &num); //primeiro numero do vetor

    n[0] = num;

    for( i=1 ; i < 10; i++){
        n[i] = n[i-1] * 2; //multiplicação pelo dobro
    }

    for(i = 0; i < 10; i++){
        printf("N[%d] = %d\n", i, n[i]); //printa
    }

    return 0;
}