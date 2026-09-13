#include <stdio.h>
#include <stdlib.h>

int main (){
	char nome[50];
	float tempo, dependentes, salarioini, aumento, novosalario;
	
	printf("Digite seu nome: ");
	scanf("%s", nome);
	
	printf("Digite quantos anos de experiencia possui: ");
	scanf("%f", &tempo);
	
	printf("Digite quantos dependentes voce tem: ");
	scanf("%f", &dependentes);
	
	printf("Digite seu salario atual: ");
	scanf("%f", &salarioini);
	
	if (tempo>4 && dependentes>3 && salarioini<500){
		novosalario = salarioini + ((48*salarioini)/100);
		printf("%s, voce tem direito ao aumento!\n", nome);
		printf("Seu salario antigo era R$%.2f\n", salarioini);
		printf("Seu salario atual = R$%.2f\n", novosalario);
	}
	else
		printf("Voce nao tem direito ao aumento!\n");
	
	system("pause");
		
}