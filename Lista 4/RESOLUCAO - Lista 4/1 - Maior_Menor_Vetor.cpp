#include <stdio.h>
#include <stdlib.h>

#define N 10  // Constante com a dimensao do vetor e controle loop

int main(){
    int vet[N], maior, menor, i;
    printf ("Ler 10 numeros no vetor e verificar o maior e menor\n\n");
    for (i=0; i<N; i++){
        printf ("Digite o %io. numero: ", i+1);
        scanf ("%d", &vet[i]);
    }
    maior = vet[0];
    menor = vet[0];
    for (i=0; i<N; i++){
        if (vet[i] > maior)
           maior = vet[i];
        else
            if (vet[i] < menor)
               menor = vet[i];
    }
    printf ("\n\nO maior valor digitado foi %d\n", maior);
    printf ("O menor valor digitado foi %d\n\n", menor);
    //system ("pause");
}
