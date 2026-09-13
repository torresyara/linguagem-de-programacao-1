#include <stdio.h>
#include <stdlib.h>
//#include <locale.h>
#include <windows.h>
int main() {
    //setlocale (LC_ALL, "Portuguese");
    SetConsoleOutputCP(CP_UTF8);
    char nome[40];
    float p_fabrica, imposto, comissao, p_final;
    printf("Digite o nome do veículo: ");
    fflush(stdin);
	scanf ("%s", nome);
    printf("Digite preco de fábrica: ");
    scanf ("%f", &p_fabrica);    
    imposto = p_fabrica * 0.45;
    comissao = p_fabrica * 0.28;
    p_final = p_fabrica + imposto + comissao;
    printf ("\n\n\n====================================\n");
    printf ("Nome do veiculo: %s \n", nome);
    printf ("Preco de fabrica do veiculo = %0.2f \n", p_fabrica);
    printf ("Valor do imposto = %5.2f \n", imposto);
    printf ("Comissao revendedor = %5.2f \n", comissao);
    printf ("Preco final do veiculo = %5.2f \n", p_final);
    printf ("====================================\n");
    system("pause");    
    return 0;
}
