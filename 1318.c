#include <stdio.h>
#include <string.h>

int main (void){
	unsigned short contador = 0, i, j, k;
	unsigned short numBilhtes, numPessoas;
	
	while (1){		
		scanf("%hu %hu", &numBilhtes, &numPessoas);

		if (numBilhtes == 0 && numPessoas == 0)
			break;

		short codBilhete[numPessoas], codBilheteCpy[numPessoas];

		for (i = 0; i < numPessoas; i++)
			scanf("%hd", &codBilhete[i]);

		//Cria uma cópia do vetor codBilhete para fazer modificações futuras;
		for (i = 0; i < numPessoas; i++)
			codBilheteCpy[i] = codBilhete[i];

		//Percorre o vetor codBilhete;
		for (i = 0; i < numPessoas; i++)
		{	
			
			for (j = 0; j < numPessoas; j++)
			{	
				//É preciso que a posição do codBilhete seja diferente do codBilheteCpy
				//Para não contar repetições;
				if (i != j)
					if (codBilhete[i] == codBilheteCpy[j])
					{
						contador++;
						codBilheteCpy[j] = 0;
						//Se pelo menos um valor igual for constatado
						//É preciso escrever 0 em todas as posições que têm o mesmo valor
						//Para não contar na próxima iteração;
						for (k = j; k < numPessoas; k++)
							if (codBilhete[i] == codBilheteCpy[k])
								codBilheteCpy[k] = 0;

						//Para o laço for 'j' logo em seguida;
						break;

					}
				//Por fim, escreve 0 na posição que estava sendo avaliada com i;
				codBilheteCpy[i] = 0;
			
			}
		}

		printf("%hu\n", contador);
		contador = 0;
	}
}