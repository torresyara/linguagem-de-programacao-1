#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float preco1, preco2, preco3, percentual1, percentual2, percentual3, precocdsct1, precocdsct2, precocdsct3, total ;
	char nome1[50], nome2[50], nome3[50]; 
	
	//Item 1
	printf("Digite o nome do item: ");
	scanf("%s", nome1);
	printf("Digite o preco do item: ");
	scanf("%f", &preco1);
	printf("Digite o percentual de desconto: ");
	scanf("%f", &percentual1);
	
	precocdsct1 = (preco1*percentual1)/100;
	
	printf("O nome do item = %s \n", nome1);
	printf("O preco do item = %0.2f \n", preco1);
	printf("O preco com desconto = %0.2f \n", precocdsct1);
	
	//Item 2
	printf("Digite o nome do item: ");
	scanf("%s", &nome2);
	printf("Digite o preco do item: ");
	scanf("%f", &preco2);
	printf("Digite o percentual de desconto: ");
	scanf("%f", &percentual2);
	
	precocdsct2 = (preco2*percentual2)/100;
	
	printf("O nome do item = %s \n", nome2);
	printf("O preco do item = %0.2f \n", preco2);
	printf("O preco com desconto = %0.2f \n", precocdsct2);
	
	//Item 3
	printf("Digite o nome do item: ");
	scanf("%s", &nome3);
	printf("Digite o preco do item: ");
	scanf("%f", &preco3);
	printf("Digite o percentual de desconto: ");
	scanf("%f", &percentual3);
	
	precocdsct3 = (preco3*percentual3)/100;
	
	printf("O nome do item = %s \n", nome3);
	printf("O preco do item = %0.2f \n", preco3);
	printf("O preco com desconto = %0.2f \n", precocdsct3);
	
	total = precocdsct1 + precocdsct2 + precocdsct3;
	
	printf("O preco total = %0.2f \n", total);
	
	
	
}


//Se colocar acento, dá erro