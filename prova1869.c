#include <stdio.h>
#include <stdlib.h>

#define TAM 20

/* Sub-rotina para ordenar elementos de um 
  vetor de forma crescente */
void ORDENA_CRES (int vet[], int faixa)
{
  register int i, j; // indexadores.
  int aux;  // variavel auxiliar.
  
  for (i = 0; i < (faixa - 1); i++)
    for (j = i + 1; j < faixa; j++)
      if (vet[i] > vet[j])
      {
        aux = vet[i];
        vet[i] = vet[j];
        vet[j] = aux;
      }    
}

/* Funcao que retorna o valor da mediana de um
  vetor de numeros de ponto flutuante */

float MEDIANA (int vet[], int faixa)
{
  register int i; /* indexadores com tipo register
                    dao mais ganho de performance no processamento
                    pois sao armazenados em registradores. */
  float m1, m2;

  
  ORDENA_CRES (vet, faixa); // Ordenando conjunto numerico.
 
  for (i = 0; i < faixa; i++){

  }
  
  
  switch (faixa % 2) // Seletor para calculo da mediana.
  {
    case 0: // Faixa de valores (qtd de elem do vetor) e PAR.
      m1 = vet[faixa / 2 - 1];
      m2 = vet[faixa / 2];     
      m1 += m2;
      return  (m1 / 2);    
    
    case 1: // Faixa de valores do vetor e IMPAR.
      m1 = vet[ (faixa - 1) / 2 ];
      return m1;   
  }  
}

/* Prototipos de sub-rotinas. */
void ORDENA_CRES (int vet[], int faixa);

/* Prototipos de funcoes */
float MEDIANA (int vet[], int faixa);

int main (void){
  int e[TAM]; // 80 bytes alocados.
  float m; //valor da mediana
  register int i; // indexador.
  int q;
  
  scanf  ("%d", &q); //quantidade de elementos q
   
  for (i = 0; i < q; i++){ //for para escanear cada valor da faixa
    scanf  ("%d", &e[i]);
  }  

  m =  MEDIANA (e, q); //chamada de função 
  
  printf ("%.1f\n", m);  //printa
  
  return (0);
}


