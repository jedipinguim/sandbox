/* Data de Criação: 2017-08-21
 * jedipinguim@gmail.com
 * Desenvolvimento como estudo do curso alura 
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {	
	
	printf("********************************************\n");
	printf("***Bem Vindo ao nosso jogo de Adivinhação***\n");
	printf("********************************************\n");

	int nivel;
	int totaldetentativas;

	printf("Qual o nível de dificuldade? \n");
	printf("(1)Fácil  (2)Médio  (3)Difícil\n\n");
	printf("Ecolha: ");
	scanf("%d", &nivel);

	switch(nivel) {
		case 1:
			totaldetentativas = 20;
			break;
		case 2:
			totaldetentativas = 15;
			break;
		case 3:
			totaldetentativas = 6;
			break;
	}

	
	int chute;
	int acertou = 0;
	int tentativas = 1;
	double pontos = 1000;
		
	srand(time(0));
	int num_secreto = rand() % 100;
		
	for(int i = 1; i <= totaldetentativas; i++) {
		
		printf("Tentativa %d de %d\n", i, totaldetentativas);

		printf("Qual é o seu %dº chute? ", tentativas);
		scanf("%d", &chute);
		
		if (chute < 0) {
			printf("Você não pode chutar número negativos!\n");
			continue;
		}
				
		printf("Seu %dº chute foi %d\n", tentativas, chute);
		
		acertou = (chute==num_secreto);
		int maior = chute > num_secreto;
				
		if(acertou) {
			break;
		} else if (maior) {
				printf("O chute é maior do que o número secreto!\n");
		} else {
				printf("O chute é menor do que o número secreto!\n");
		}
			
		tentativas++;
		
		double pontosperdidos = abs(chute-num_secreto) / 2.0;
		pontos = pontos - pontosperdidos;
	}
	
	if(acertou) {
		printf("Parabéns! Você acertou!\n");
		printf("Você fez %.2f pontos!\n", pontos);		
	} else {
		printf("Você perdeu! Tente novamente.\n");
	}

	
	
}

