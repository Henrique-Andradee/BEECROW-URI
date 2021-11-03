#include <stdio.h>
int main(){
    int i, num, qtd, m1, m2;

    scanf("%d", &qtd);

    m1 = m2 = 0;

    for(i = 0; i != qtd; i++){
        scanf("%d", &num);
        if( 10 <= num  && num <= 20){
            m2++;
        }else m1++;
    }
    printf("%d in\n", m2);
    printf("%d out\n", m1);

    return 0;
}