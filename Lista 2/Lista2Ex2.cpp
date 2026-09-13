#include <stdio.h>
#include <stdlib.h>

int main() {
	float valori, dsct, total;
	printf("Digite o valor da compra: ");
	scanf("%f", &valori);
	
	if (valori >= 500) {
		dsct = (20*valori)/100;
		total = valori - dsct;
		}
	else {
		dsct = (15*valori)/100;
		total = valori - dsct;
		}
		
	printf("O valor inicial da compra = R$%0.2f\n", valori);
	printf("O valor do desconto obtido = R$%0.2f\n", dsct);
	printf("O valor a ser pago = R$%0.2f\n", total);
	
	system("pause");
	return 0;
}