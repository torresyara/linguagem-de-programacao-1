#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int vet1[10], vet2[10], vet3[10], i;
	
	printf("[VETOR 1]\n");
	for(i=0;i<=9;i++){
		printf("Digite o valor da posicao %d: ", i+1);
		scanf("%d", &vet1[i]);
	}
	
	printf("[VETOR 2]\n");
	for(i=0;i<=9;i++){
		printf("Digite o valor da posicao %d: ", i+1);
		scanf("%d", &vet2[i]);
	}
	
	printf("[O NOVO VETOR]\n");
	for(i=0;i<=9;i++){
		vet3[i]=vet1[i]+vet2[i];;
		printf("%d = %d = %d\n", vet1[i], vet2[i], vet3[i]);
	}
		
	system("pause");
}