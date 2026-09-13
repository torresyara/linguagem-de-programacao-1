//Elaborar um programa que apresente o valor de uma potencia de uma base 
//(N) qualquer elevada a um expoente (M) qualquer, ou seja, de N^M

#include<stdio.h>
#include<stdlib.h>

int main(){
	int n, m, total=1;
	
	printf("Digite o valor de n: ");
	scanf("%d",&n);
	
	printf("Digite o valor de m: ");
	scanf("%d",&m);
	
	while (m>0){
		total=total*n;
		m=m-1;}
	printf("O total de N^m	= %d\n",total);

	system("pause");
}