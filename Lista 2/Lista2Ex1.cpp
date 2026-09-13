#include <stdio.h>
#include <stdlib.h>

int main(){
	char sexo ;
	float altura, peso;
	printf("Digite o sexo da pessoa, sendo F - feminino e M - masculino: ");
	scanf("%c", &sexo);
	//Lê um caractere
	
	if (sexo=='F') {
		printf("Digite a altura da pessoa: ");
		scanf("%f", &altura);
		peso = (62.1*altura) - 44.7;
		printf("O peso ideal da pessoa e = %0.2f \n", peso);
		}
	else if (sexo =='M') {
		printf("Digite a altura da pessoa: ");
		scanf("%f", &altura);
		peso = (72.7*altura) - 58;
		printf("O peso ideal da pessoa e = %0.2f \n", peso);
		}
	else {
		printf("Sexo invalido!\n");
		}
	
	system("pause");
}


//Se colocar acento, dá erro
//system dá uma pausinha
