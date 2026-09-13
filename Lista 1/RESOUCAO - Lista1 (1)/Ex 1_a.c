#include <stdio.h>
#include <stdlib.h>
int main(void) {
    float a, b, y, x;
    printf("Digite valor de a: ");
    scanf ("%f", &a);
    printf("Digite valor de b: ");
    scanf ("%f", &b);    
    printf("Digite valor de x: ");
    scanf ("%f", &x);  
    y = ((2 + a) / (b + 3)) - (2 * x);
    printf ("Resultado = %5.2f \n", y);
    system("pause");    
}
