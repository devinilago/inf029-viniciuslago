/*
3) Faca um programa que tenha uma funcao que recebe um numero inteiro e retorna o fatorial
deste numero. Esta funcao deve ainda verificar se e possivel calcular o fatorial, se nao for, ela deve
de alguma forma retornar para a main que deu algum erro. A funcao main deve solicitar o valor do
usuario e imprimir o fatorial dele, ou se nao e possivel calcular o fatorial.
*/

#include <stdio.h>
#include <stdlib.h>
#define ERRO -1

int fatorial();

int main()
{
	int valor, resultado;
	printf("Informe o valor\n");    
	scanf ("%d", &valor);
	
	resultado = fatorial(valor);
	if (resultado != ERRO)
		printf("O fatorial eh %d\n", resultado);
	else
		printf("Nao eh possivel calcular o fatorial de %d\n", valor);

	return 0;
}
int fatorial(int n)
{	
	int resultado;
	if (n<0)
		resultado = -1;
	else
	{
		resultado = 1;
	    while (n > 1) resultado *= n--;
	}
    return resultado;
}
    
