//Sendo H = 1 + 1/2 + 1/3 + 1/4 + ... + 1/N, faça um programa
//para calcular H. Sendo N um número inteiro fornecido pelo usuário;
#include<stdio.h>
#include<stdlib.h>

int main (){
	//vamos trabalhar com decimais
	float n, h=0, num=1;
	
	printf("Digite um numero para N: ");
	scanf("%f", &n);
	
	while (num<=n){
		h = h + (1/num);
		num++;
	}
	printf("O valor de h = %.2f\n", h);
}

