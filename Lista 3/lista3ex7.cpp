//Apresentar os resultados de uma tabuada de um número qualquer, fornecido pelo usuário.

#include<stdlib.h>
#include<stdio.h>

int main(){
	int num1, num2=0, total;
	
	printf("Digite um numero para saber sua tabuada: ");
	scanf("%d", &num1);
	
	while (num2<=10){
		total=(num1*num2);
		printf("%d\n", total);
		num2++;
	}
	
	system("pause");
}