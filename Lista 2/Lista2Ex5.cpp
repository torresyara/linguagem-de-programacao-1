#include <stdio.h>
#include <stdlib.h>

int main (){
	float altura, idade, pesoideal;
	char nome[50], sexo;
	
	printf("Digite o nome: ");
	scanf("%s", nome); 
	//em string não precisa de &
	
	printf("Digite o sexo, sendo F - femino e M - masculino: ");
	scanf(" %c", &sexo);
	
	printf("Digite a altura: ");
	scanf("%f", &altura);
	
	printf("Digite a idade: ");
	scanf("%f", &idade);
	
	
	if (sexo == 'F') {
		//Atenção no == e aspas simples
		if (altura <= 1.50)
			if (idade >= 35)
				pesoideal = (62.1*altura)-45;
			else 
				pesoideal = (62.1*altura)-49;
		else
			pesoideal = (62.1*altura)-44;
		}
	else if (sexo=='M'){
		if (altura >1.7)
			if (idade<=20)
				pesoideal = (72.7*altura)-58;
			else
				pesoideal = (72.7*altura)-45;
		else
			if (idade<=40)
				pesoideal = (72.7*altura)-50;
			else
				pesoideal = (72.7*altura)-85;
				}
	else {

		printf("Sexo invalido!");
		return 0;
	}
	
printf("Seu peso ideal = %.2f\n", pesoideal);

system("pause");
}