#include <stdio.h>

int main(){
    int r1, r2, t, i;

    scanf("%d", &t);

    for(i = 0; i < t; i++){
        scanf("%d %d", &r1, &r2);
        printf("%d\n", r1 + r2);
    }

    return 0;
}