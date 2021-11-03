#include <stdio.h>

int main(void){
    int ar[10], i,  r;

    r=10; //o inicio dos elementos do array
    /*r = 100; //o final dos elementos para a ordem decrescente
    r = 20;*/
    
    /*for (i = 0; i < 10; i++){ //incrementa 10 a cada repetição do for
        ar[i] = r;
        r = r + 10;
    }

    for (i = 0; i < 10; i++){ //printa os elementos em ordem crescente
        printf ("ar[%d] = %d\n", i, ar[i]);
    }*/

    /*for (i = 9; i >= 0; i--){ //decrementa 10 a cada repetição do for
        ar[i] = r;
        r = r - 10;
    }

    for (i = 9; i >= 0; i--){ //exibe de forma decrescente
        printf ("ar[%d] = %d\n", i, ar[i]);
    }*/

    /*printf ("Quinto elemento: %d\n", ar[4]);*/

    /*for (i = 1; i < 10; i = i + 2){ //incrementa 2 no índice a cada repetição e soma 20 no valor do array
        ar[i] = r;
        r = r + 20;
    }
    
    for (i = 1; i < 10; i = i + 2){ //printa os arrays ímpares
        printf ("ar[%d] = %d\n", i, ar[i]);
    }*/

    /*int soma = 0;
    for (i = 0; i < 10; i++){ //incrementa 10 a cada repetição do for
        ar[i] = r;
        r = r + 10;
        soma += ar[i];
    }

    for (i = 0; i < 10; i++){ //printa os elementos em ordem crescente
        printf ("ar[%d] = %d\n", i, ar[i]);
    }
    
    printf ("a soma dos valores do array eh: %d", soma); //printa o valor da soma dos arrays.*/

    /*float soma = 0, media = 0;
    for (i = 0; i < 10; i++){
    printf ("Digite o valor do ar[%d]\n", i);
    scanf ("%d", &ar[i]);
    soma += ar[i];
    }

    media = soma / 10;
    printf ("A media dos valores do array eh: %.2f", media);*/

    //int teste;
    for (i = 0; i < 10; i++){ //incrementa 10 a cada repetição do for
        ar[i] = r;
        r = r + 10;
    }

    /*for (i = 0; i < 10; i++){ //acha a posiçao
        scanf ("%d", &teste);
        if (teste == ar[i]){
            printf ("Esta na %d posicao\n", i+1);
            break;
        }else{
            puts ("Nao pertence");
            break;
        }
    }*/ 
    


    return 0;
}