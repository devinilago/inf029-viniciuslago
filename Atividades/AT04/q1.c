/*
1) Crie um programa que tenha uma funcao soma e a funcao main.
A funcao main deve ler dois valores, enviar para a funcao soma.
A funcao soma deve realizar a soma e retornar o valor. A
Funcao main deve imprimir o resultado da soma.
*/

#include <stdio.h>
#include <stdlib.h>

double soma();

int main()
{
	double primeiroValor, segundoValor, resultado;
	printf("Informe o primeiro valor\n");    
	scanf ("%lf", &primeiroValor);
	printf("Informe o segundo valor\n");    
	scanf ("%lf", &segundoValor);
	resultado = soma(primeiroValor, segundoValor);
	printf("A soma eh %.2lf\n", resultado);

	return 0;
}

double soma(double a, double b)
{
	return a + b;
}
