#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int vet[10], i, valor, achou=0;
	char continuar='S';
	
	printf("[VETOR DE 10 POSICOES]\n");
	for (i=0; i<=9; i++){
		printf("Digite o valor da posicao %d: ", i+1);
		scanf("%d", &vet[i]);
}
	printf("[VERIFIQUE SE UM VALOR ESTA NO VETOR]\n");

	while (continuar=='S'){
		printf("Digite um valor: ");
		scanf("%d", &valor);
		
		for (i=0; i<=9; i++) {
			if (valor==vet[i]){
				printf("O valor existe e esta na posicao: %d\n", i+1);
				achou=1;
		}
	}
		if(achou==0){
			printf("O valor nao existe no vetor!\n");
		}
		printf("Deseja continuar? S-sim ou N-nao: ");
		scanf(" %c", &continuar); //o espaço limpa o buffer
		achou=0;
		
}

	system("pause");
}