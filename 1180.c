#include <stdio.h>

int main(){
    int n, i, posicao = 0;

    scanf("%d", &n); //quantidade de valores no vetor
    
    int vet[n]; //vetor tendo definido seu tamanho

    for(i = 0; i < n; i++){ //repetição
        scanf("%d", &vet[i]);
    }

    int menor = vet[0]; //definindo o menor

    for(i = 0; i < n; i++){
        if(vet[i] < menor){
            menor =vet[i];
            posicao = i;

        }
    }

    printf("Menor valor: %d\n", menor);
    printf("Posicao: %d\n", posicao);

    return 0;
}