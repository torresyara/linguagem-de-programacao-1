#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int vet[10], vetB[10], i=0, y=9;
	
	for(i=0; i<=9; i++){
		printf("Escreva o valor do vetor na posicao %d: ",i+1);
		scanf("%d", &vet[i]);
	}
		
	printf("Primeiro o vetor = ");
		for(i=0; i<=9; i++){	
		printf("%d | ", vet[i]);
	}
		
	for(i=0; i<=9; i++){
		vetB[y]=vet[i];
		y = y - 1;
	}
		
	printf("\nO valor do vetor apos a inversao = ");
	for(y=0; y<=9; y++){	
		printf("%d | ", vetB[y]);
}
	printf("\n");
	system("pause");
}
