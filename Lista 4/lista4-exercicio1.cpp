#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int v[10], i=0, menor=3952, maior=0;
	
	while (i<=9){
		printf("Digite o valor do vetor, na posicao %d: ", i+1);
		scanf("%d", &v[i]);
		if (v[i]>maior){
			maior = v[i];
	}
		if (v[i]<menor){
			menor = v[i];
		}
		i++;
	}
	
	printf("O maior valor = %d\n", maior);
	printf("O menor valor = %d\n", menor);

	system("pause");
}