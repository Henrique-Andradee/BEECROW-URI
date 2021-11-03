#include <stdio.h>
#define KILO_GRAO 12000

int main(){
    int n;

    scanf("%d", &n); //numero de casos

    while(n--){
        int x, i;

        scanf("%d", &x); //quantidade de quadrados 

        if(x < 11){ //se for menos de 11 quadrados, terá menos de 1kg
            puts("0 kg");
        }else{
            unsigned long long ar[x], soma = 1;
            ar[0] = 1;
            for(i = 1; i < x; i++){
                ar[i] = ar[i-1] * 2;
                soma += ar[i];
            }
            soma /= KILO_GRAO; //convertendo em kg
            printf("%llu kg\n", soma);
        }              

    }

    return 0;
}