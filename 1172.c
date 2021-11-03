#include <stdio.h>

int main(){
    int i, x[10];

    for(i = 0; i < 10; i++){ //entrada de valores até i[9]
        scanf("%d", &x[i]);
    }

    for(i = 0; i < 10; i++){ //se o numero lido acima for menor ou igual a 0, considere x[i]=1
        if(x[i] <= 0){
            x[i] = 1;
        }
    }

    for(i = 0; i < 10; i++){ //printa vetores
        printf("X[%d] = %d\n", i, x[i]);
    }


    return 0;
}