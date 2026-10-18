#include <stdio.h>
#include <stdlib.h>

#define N 5  // Constante com a dimensao do vetor e controle loop

int main(){
    int vet[N], n, i, achou;
    printf ("Ler 10 numeros no vetor e verificar se um determinado valor existe\n\n");
    for (i=0; i<N; i++){
        printf ("Digite o %io. numero: ", i+1);
        scanf ("%d", &vet[i]);
    }
    
    printf ("\n\nDigite o numero a pesquisar: ");
    scanf ("%d", &n);
    achou = 0;

    for (i=0; i<N; i++){
        if (vet[i] == n)
           achou = 1;
    }
    if (achou == 1)
       printf ("\n\nO numero %d foi encontrado \n\n", n);
    else
        printf ("\n\nO numero NAO foi encontrado \n\n");
    system ("pause");
}
