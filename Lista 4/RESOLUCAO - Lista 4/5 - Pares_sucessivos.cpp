#include <stdio.h>
#include <stdlib.h>

#define N 50  // Constante com a dimensao do vetor e controle loop

int main(){
    int vet[N], i, par;
    printf ("Preencher vetor com 50 numeros inteiros pares sucessivos, comecando em 10 \n\n");
    par = 10;
    for (i=0; i<N; i++){
        vet[i] = par;
        par = par + 2;
    }
    for (i=0; i<N; i++){
        printf ("%d ", vet[i]);
    }
    printf ("\n\n");
    system ("pause");
}
