#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int vet1[10], vet2[10], vet3[10], i;
	
	for (i=0; i<=9; i++){
		printf("Digite o valor do vetor 1, na posicao %d: ", i+1);
		scanf("%d", &vet1[i]);	
	}
	
	for (i=0; i<=9; i++){
		printf("Digite o valor do vetor 2, na posicao %d: ", i+1);
		scanf("%d", &vet2[i]);	
	}
	
	for (i=0; i<=9; i++) {
		vet3[i] = vet1[i] + vet2[i];
		printf ("O valor da posicao %d = %d\n", i+1, vet3[i]);
}
	system("pause");
}