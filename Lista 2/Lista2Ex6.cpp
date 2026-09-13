#include <stdio.h>
#include <stdlib.h>

int main() {
	char nome[50]; //Não esquecer do número da string
	int codigo, salariob, tempo, aumento, salarionov;
	
	printf("Digite seu nome: ");
	scanf("%s", nome);
	//Para string não precisa de &
	//Não esquecer as aspas "%s"
	
	printf("Digite o codigo do departamento, sendo 1-secretaria, 2-tesouraria, 3-depto pessoal e 4-almoxarifado: ");
	scanf("%d", &codigo);
	
	printf("Digite seu salario base: ");
	scanf("%d", &salariob);
	
	printf("Digite seu tempo de servico: "); //Também não aceita 'ç'
	scanf("%d", &tempo);
	
	
	//Uso o switch apenas onde vai igualdade
	switch(codigo){
		case 1:
		case 2:
			if (tempo <= 4)
				aumento = (50*salariob)/100;
			else
				aumento = (60*salariob)/100;
			break;	
		case 3:
			aumento = (30*salariob)/100;
			break;
		case 4:
			if (tempo < 2)
				aumento = (30*salariob)/100;
			else if (tempo >= 2 && tempo <= 4)
				aumento = (40*salariob)/100;
			else
				aumento = (50*salariob)/100;
			break;
		default:	
			printf("O codigo e invalido!");
			return 0;
		}
	salarionov = salariob + aumento;
			
	printf("Nome do funcionario: %s\n", nome);
	printf("O salario antigo e = R$%.2d\n", salariob);
	printf("O salario novo e = R$%.2d\n", salarionov);
		
	system("pause");	
		
		}