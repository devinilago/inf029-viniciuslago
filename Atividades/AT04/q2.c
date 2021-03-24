/*
2) Crie um programa que tenha uma funcao subtrai e a funcao main. A funcao main deve ler tres
valores, enviar para a funcao subtrai. A funcao subtrai deve realizar a subtracao dos tres valores
(primeiro menos o segundo menos o terceiro) e retornar o valor. A Funcao main deve imprimir o
resultado da subtracao.
*/

#include <stdio.h>
#include <stdlib.h>

double subtrai();

int main()
{
	double primeiroValor, segundoValor, terceiroValor, resultado;
	printf("Informe o primeiro valor\n");    
	scanf ("%lf", &primeiroValor);
	printf("Informe o segundo valor\n");    
	scanf ("%lf", &segundoValor);
	printf("Informe o terceiro valor\n");    
	scanf ("%lf", &terceiroValor);
	resultado = subtrai(primeiroValor, segundoValor);
	printf("A subtracao eh %.2lf\n", resultado);

	return 0;
}
double subtrai(double a, double b, double c)
{
	return a - b - c;
}
