#include <stdio.h>
#include <stdlib.h>

int main(){
	int soma, i=1;
	
	while (i<=10){
		soma = soma + i;
		i++;
	}
	printf("O total da soma dos dez primeiros numeros = %d\n", soma);
	
}