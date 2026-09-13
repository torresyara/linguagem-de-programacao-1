//Elabore um programa que calcule N! (fatorial de N), sendo N um valor inteiro fornecido pelo
//usuário.
//Sabe-se que: N! = N x (N-1) x ... x 3 x 2 x 1;
//0! = 1, por definição.

#include<stdio.h>
#include<stdlib.h>

int main(){
	int n, fatorial=1;
	
	printf("Digite um numero para saber o valor de seu fatorial: ");
	scanf("%d",&n);
	
	if (n==0){
		printf("%d\n",fatorial);
	}
	else
		while (n>0){
			fatorial = fatorial*(n);
			n=n-1;
	}
	printf("O valor do fatorial = %d\n", fatorial);
	
	system("pause");
}