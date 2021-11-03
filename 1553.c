#include <stdio.h>
int main(void){
    int n, k, i, p, resp;
    int cont[101];

    while (1){
        scanf ("%d %d", &n, &k);
        if(n == 0 && k == 0){
            break;
        }

        for(i = 0; i < 101; i++){ //zera o array
            cont[i] = 0;
        }

        for (i = 0; i < n; i++){
            scanf ("%d", &p);
            cont[p]++;
        }

        resp = 0;
        for(i = 1; i<= 100; i++){
            if (cont[i] >= k){
                resp++;
            }
        }
    }
    printf ("%d\n", resp);

    return 0;
}