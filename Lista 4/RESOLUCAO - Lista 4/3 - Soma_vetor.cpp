#include <stdio.h>
#include <stdlib.h>

#define N 10  // Constante com a dimensao do vetor e controle loop

int main(){
    int vet1[N], vet2[N], vet3[N], i;
    printf ("Ler 2 vetores com 10 numeros e efetuar a soma num terceiro vetor\n\n");

    printf ("DADOS DO 1o. VETOR\n\n");
    for (i=0; i<N; i++){
        printf ("Digite o %io. numero: ", i+1);
        scanf ("%d", &vet1[i]);
    }
    printf ("\n\nDADOS DO 2o. VETOR\n\n");
    for (i=0; i<N; i++){
        printf ("Digite o %io. numero: ", i+1);
        scanf ("%d", &vet2[i]);
    }
    printf ("\n\nSOMA DO VETOR 1 E 2\n\n");
    for (i=0; i<N; i++){
        vet3[i] = vet1[i] + vet2[i];
        printf ("%d + %d = %d\n", vet1[i], vet2[i], vet3[i]);
    }
    system ("pause");
}
