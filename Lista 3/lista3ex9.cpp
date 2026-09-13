//Apresentar as potências de 2, variando de 0 a 10.
#include<stdio.h>
#include<stdlib.h>

int main(){
	int potencia=1, n=0;
	
	while (n<=10){
		printf("2^%d= %d\n",n, potencia);
		potencia = potencia*2;
		n=n+1;
	}
	
	system("pause");
}