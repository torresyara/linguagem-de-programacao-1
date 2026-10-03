#include <stdio.h>
#include <stdlib.h>

int main (){
	int vet[20], impar[20], par[20], i, y=0, z=0;
	
	for (i=0; i<=19; i++){
		printf("Digite o valor da posicao %d: ",i+1);
		scanf("%d", &vet[i]);
		if (vet[i]%2==0){
			par[y]=vet[i];
			y++;
		}
		else {
			impar[z]=vet[i];
			z++;
		}
	}
	
	for (i=0; i<y; i++){
		printf("O vetor par na posicao %d = %d\n",i+1,par[i]);
}
	for (i=0; i<z; i++){
		printf("O vetor impar na posicao %d = %d\n",i+1,impar[i]);
}
				
	system("pause");
}