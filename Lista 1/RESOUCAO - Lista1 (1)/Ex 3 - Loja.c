#include <stdio.h>
#include <stdlib.h>

int main() {
    char nome1[20], nome2[20], nome3[20];
    float p1, p2, p3, d1, d2, d3, vf1, vf2, vf3, total;
    printf("Digite o nome do artigo 1: ");
    fflush(stdin);
	gets (nome1);
    printf("Digite o preco do artigo 1: ");
    scanf ("%f", &p1);
    printf("Digite o percentual de desconto do artigo 1: ");
    scanf ("%f", &d1);
    printf("\nDigite o nome do artigo 2: ");
    fflush(stdin);
	scanf ("%s", nome2);
    printf("Digite o preco do artigo 2: ");
    scanf ("%f", &p2);
    printf("Digite o percentual de desconto do artigo 2: ");
    scanf ("%f", &d2);
    printf("\nDigite o nome do artigo 3: ");
    fflush(stdin);
	scanf ("%s", nome3);
    printf("Digite o preco do artigo 3: ");
    scanf ("%f", &p3);
    printf("Digite o percentual de desconto do artigo 3: ");
    scanf ("%f", &d3);

    vf1 = p1 - (p1 * d1 / 100);    
    vf2 = p2 - (p2 * d2 / 100);    
    vf3 = p3 - (p3 * d3 / 100);    
    total = vf1 + vf2 + vf3;

    system ("cls");
    printf ("Nome do artigo 1: %s \n", nome1);
    printf ("Preco do artigo 1 = %5.2f \n", p1);
    printf ("Preco com desconto do artigo 1 = %5.2f \n", vf1);

    printf ("\n\nNome do artigo 2: %s \n", nome2);
    printf ("Preco do artigo 2 = %5.2f \n", p2);
    printf ("Preco com desconto do artigo 2 = %5.2f \n", vf2);

    printf ("\n\nNome do artigo 3: %s \n", nome3);
    printf ("Preco do artigo 3 = %5.2f \n", p3);
    printf ("Preco com desconto do artigo 3 = %5.2f \n", vf3);

    printf ("\nTotal a pagar = %5.2f \n\n", total);
    system("pause");    
}
