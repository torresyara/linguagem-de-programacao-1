#include <stdio.h>
#include <stdlib.h>

int main() {
	float salario, total; 
	
	printf("Escreva o total de vendas: ");
	scanf("%f", &salario);
	
	if (salario > 20000)
		total = (salario*10)/100;
	else
		total = (salario*7.5)/100;
		
	printf("O valor do salario = R$%.2f\n", total);
	
	system ("pause");
}