#include <stdio.h>
#include <stdlib.h>

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
	switch(escolha)
	{
		case '0':
			printf("Sair\n");
		break;
		case '1':
			printf("Somar\n");
		break;
		case '2':
			printf("Subtrair\n");
		break;
		case '3':
			printf("Multiplicar\n");
		break;
		case '4':
			printf("Dividir\n");
		break;
	}
}
  