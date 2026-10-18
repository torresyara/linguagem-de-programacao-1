#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int vet[10], i, menor, maior;

	for(i=0;i<=9;i++){
		printf("Escreva o numero da posicao %d: ", i+1);
		scanf("%d",&vet[i]);
	}
	
	maior = vet[0];
	menor = vet[0];
	
	for(i=0;i<=9;i++){
		if (vet[i]> maior)
			maior = vet[i];
		else if (vet[i]<menor)
			menor = vet[i];
	}
	
	printf("O maior valor = %d\n", maior);
	printf("O menor valor = %d\n", menor);
	
	
system ("pause");
}