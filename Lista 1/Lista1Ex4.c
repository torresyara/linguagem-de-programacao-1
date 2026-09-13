#include <stdio.h>
#include <stdlib.h>

int main(){
	float A, B, H;
	printf("Digite o valor de B: ");
	scanf("%f", &B);

	printf("Digite o valor de H: ");
	scanf("%f", &H);

	A = (B * H) / 2;
	
	printf(("A base do triangulo = %0.2f\n"), B); 
	printf(("A altura do triangulo = %0.2f\n"), H); 
	printf(("A area do triangulo = %0.2f\n"), A); 

	system("pause");
	
	
}