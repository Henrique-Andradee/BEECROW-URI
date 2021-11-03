#include <stdio.h>
int main(void){
    int v, q;
    double f;

    scanf ("%d %d", &v, &q);

    if(q == 2){
        q = 0.95;
        f = v * q;
        printf ("%f", f);
    }
    
    return 0;
}