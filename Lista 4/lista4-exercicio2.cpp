#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int vet[10], i, valor;
	char continuar='S';
	
	for (i=0; i<=9; i++){
		printf("Digite o valor da posicao %d: ", i+1);
		scanf("%d", &vet[i]);
}

	while (continuar=='S'){
		printf("Digite um valor: ");
		scanf("%d", &valor);
		
		for (i=0; i<=9; i++) {
			if (valor==vet[i])
				printf("O valor existe e esta na posicao: %d\n", i+1);
		}
		
		printf("Deseja continuar? S-sim ou N-nao: ");
		scanf(" %c", &continuar); //o espaço limpa o buffer
		
}

	system("pause");
}