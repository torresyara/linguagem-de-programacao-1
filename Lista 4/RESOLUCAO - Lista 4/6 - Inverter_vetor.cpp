#include <stdio.h>
#include <stdlib.h>

#define N 5  // Constante com a dimensao do vetor e controle loop

int main(){
    int vet[N], i, aux;
    printf ("Ler 10 numeros no vetor e inverter suas posicoes\n\n");
    for (i=0; i<N; i++){
        printf ("Digite o %io. numero: ", i+1);
        scanf ("%d", &vet[i]);
    }
    printf ("\n\nVETOR ANTES DA INVERSAO\n\n");
    for (i=0; i<N; i++){
        printf ("%d ", vet[i]);
    }
    printf ("\n\nVETOR APOS A INVERSAO\n\n");
    for (i=0; i<N/2; i++){
        aux = vet[N-1-i];
        vet[N-1-i] = vet[i];
        vet[i] = aux;
    }
    for (i=0; i<N; i++)
        printf ("%d ", vet[i]);
    
    printf ("\n\n");
    system ("pause");
}
