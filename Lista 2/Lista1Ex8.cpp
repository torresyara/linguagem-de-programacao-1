#include <stdio.h>
#include <stdlib.h>

int main () {
	char nome[50];
	float diaria,taxa,valortotal;
	
	printf("Digite seu nome:");
	scanf("%s", nome);
	
	printf("Qual a quantidade de dias:");
	scanf("%f", &diaria);
	
	if (diaria==15)
		taxa = 6; 
	else if (diaria<15)
		taxa = 8; 
	else 
		taxa = 5.5;  
	
	valortotal = (60*diaria)+taxa;
	
	printf("Nome do cliente: %s\n", nome);
	printf("Numero de diarias: %.2f\n", diaria);
	printf("Valor da taxa: %.2f\n", taxa);
	printf("O valor total: %.2f\n", valortotal);
	
	system("pause");
}