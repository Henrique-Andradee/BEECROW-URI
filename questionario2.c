#include <stdio.h>
int main(void){
    int ar[] = {1, 2, 3};
    int *p = &ar[0];

    printf ("%d %d %d %d", ar[0], p[0], *p, *ar);
    
    return 0;
}