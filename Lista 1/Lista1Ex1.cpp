#include <stdio.h>
#include <stdlib.h>

int main(){
	float a, b, x, y;
	printf("Digite o valor de a: ");
	scanf("%f", &a);
	printf("Digite o valor de b: ");
	scanf("%f", &b);
	printf("Digite o  valor de x: "); 
	scanf("%f", &x);
	
	y = ((2+a)/(b+3)) - 2*x;
	
	printf(("O resultado = %0.2f\n"), y); 
	system("pause");
	
	
}