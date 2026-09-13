#include <stdio.h>
#include <stdlib.h>
int main(void) {
    float base, altura, area;
    printf("Digite valor da base do triangulo: ");
    scanf ("%f", &base);
    printf("Digite valor da altura do triangulo: ");
    scanf ("%f", &altura);    
    area = (base * altura) / 2;
    printf ("\n\nArea do triangulo = %5.2f \n", area);
    system("pause");    
}
