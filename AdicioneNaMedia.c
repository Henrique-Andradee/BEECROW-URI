#include <stdio.h>

double AdicioneNaMedia(double valor){
    static double numeros;
    static int qtd;
    
    numeros += valor;
    qtd++;

    return numeros / qtd;
}

int main(void){
    double valor, media;
    int qtd, j;

    printf ("Quantos valores serao lidos a seguir?\n");
    scanf ("%d", &qtd);

    int i = 1;
    while(qtd--){

        printf("Digite o %d valor: ", i);
    
        scanf("%lf", &valor);
        media = AdicioneNaMedia(valor);
        if (qtd == 0){
            printf("\tMedia: %.1lf\n\n", media);
        }       
        i++;
    }

    return 0;
}