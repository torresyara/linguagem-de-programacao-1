#include <stdio.h>
#include <stdlib.h>

int main (){
	
	int vet[50], num=10, i=0;
	
	while (i<=49){
		if (num%2 == 0){
			vet[i]=num;
			i++;
			}
		num++;
	}
	
	printf("O vetor com numeros inteiros pares sucessivos = ");
	for (i=0; i<=49; i++) {	
		if (i<49){
			printf("%d,", vet[i]);
		}
		else if (i=49){
			printf("%d.", vet[i]);
		}
	}
	printf("\n");
	
	system("pause");
}