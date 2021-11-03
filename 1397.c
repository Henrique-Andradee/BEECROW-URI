#include <stdio.h>
int main(void){
    int n, a, b , filho, pai;

    scanf ("%d", &n);

    while (n!=0){
        filho = 0;
        pai = 0;
    }

    while (n--){
        scanf ("%d %d", &a, &b);
        if (a == b){
            filho+=0;
            pai+=0;
        }else if(a > b){
            pai++;
        }else if(a < b){
            filho++;
        }
    }

    printf ("%d %d\n", pai, filho);

    return 0;
}