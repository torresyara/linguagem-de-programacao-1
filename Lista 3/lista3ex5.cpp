#include <stdio.h>
#include <stdlib.h>

int main(){
	int valor, i=1, maior, menor;
	
	while (i<=20){
		printf("Escreva um numero: ");
		scanf("%d", &valor);
		if (valor > maior){
			maior = valor;
		if (valor < menor){
			menor = valor;
		}
		}
		i++;
}
	printf("O valor do menor = %d\n",menor);
	printf("O valor do menor = %d\n",maior);
}