#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
	char nome[50], curso[20]; 
	int cod, creds, valorcred, mensalidade;
	
	printf("Digite seu nome: ");
	scanf("%s", nome);
	
	printf("Digite o codigo do seu curso: ");
	scanf("%d", &cod);
	
	printf("Digite o numero de creditos: ");
	scanf("%d", &creds);
	
	switch(cod) {
		case 1: 
			valorcred = 12;
			strcpy(curso,"PD");
			break;
			valorcred = 10;
			strcpy(curso,"ADM");
			break;
		case 3:
			valorcred = 15;
			strcpy(curso,"CONTAB");
			break;
		case 4:
			valorcred = 8;
			strcpy(curso,"CIENCIAS");
			break;
		default: 
			printf("O codigo e invalido!");
			break;			
 
		}
	mensalidade = creds*valorcred;
	
	printf("O nome do aluno e %s\n", nome);
	printf("O curso e %s\n", curso);
	printf("O valor da mensalidade a pagar = R$%.2d\n", mensalidade);
	
	system("pause");
} 