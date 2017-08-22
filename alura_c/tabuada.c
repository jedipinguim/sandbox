#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num = 0;
	
	printf("Digite um número: ");
	scanf("%d", &num);
	
	printf("Tabuada do %d\n\n", num);
	for(int i = 0; i <= 10; i++) {
			printf("%d x %d = %d\n", num, i, num * i);
	}
}

