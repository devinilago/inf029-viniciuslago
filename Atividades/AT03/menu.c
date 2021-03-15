#include <stdio.h>
#include <stdlib.h>
#include "operacoes.h"

void imprimeMenu();
void processaEscolha(char escolha);

int main()
{
	char escolha;
    
    imprimeMenu();
    
	scanf ("%c", &escolha);

	processaEscolha(escolha);


	return 0;
}

void imprimeMenu()
{
	printf("\n\tOpcoes\n\n");
	printf("\t0 - Sair\n");
	printf("\t1 - Somar\n");
	printf("\t2 - Subtrair\n");
	printf("\t3 - Multiplicar\n");
	printf("\t4 - Dividir\n");
}

void processaEscolha(char escolha)
{
	int resultado;
	switch(escolha)
	{
		case '0':
			printf("Sair\n");
		break;
		case '1':
			resultado = somar(2,3);
			printf("Espera-se 5\nResposta: %d\n", resultado);
		break;
		case '2':
			resultado = subtrair(3,2);
			printf("Espera-se 1\nResposta: %d\n", resultado);
		break;
		case '3':
			resultado = multiplicar(2,3);
			printf("Espera-se 6\nResposta: %d\n", resultado);
		break;
		case '4':
			resultado = dividir(4,2);
			printf("Espera-se 2\nResposta: %d\n", resultado);
		break;
	}
}  