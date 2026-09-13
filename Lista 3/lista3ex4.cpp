#include <stdio.h>
#include <stdlib.h>

int main () {
	int i=10, soma=0;
	
	while (i<=60){
		if (i%2 == 0){
			soma = soma + i;
		}
		i++;
	}
	printf("A somatoria dos valores pares existentes na faixa de 10 ate 60 = %d\n", soma);
	
}