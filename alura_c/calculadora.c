#include <stdio.h>
#include <stdlib.h>

int main()
{
	int operacao = 0;
	double num_1 = 0;
	double num_2 = 0;
		
	printf("Escolha a Operação Matematica (1 - soma, 2 - subtração, 3 - multiplicação, 4 - divisão");
	scanf("%d", &operacao);
	
	printf("Primeiro Número: ");
	scanf("%lf", &num_1);
	
	printf("Segundo Número: ");
	scanf("%lf", &num_2);
	
	if (operacao == 1) {
		printf("Resultado: %f",num_1 + num_2);
	} else if (operacao == 2) {
		printf("Resultado: %f",num_1 - num_2);
	} else if (operacao == 3) {
		printf("Resultado: %f",num_1 * num_2);
	} else if (operacao == 4) {
		printf("Resultado: %f",num_1 / num_2);
	} else {
		printf("Operação selecionada não existe!");
	}
	
}

