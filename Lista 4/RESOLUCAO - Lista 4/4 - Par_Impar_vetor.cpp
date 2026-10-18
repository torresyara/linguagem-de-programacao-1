#include <stdio.h>
#include <stdlib.h>

#define N 5  // Constante com a dimensao do vetor e controle loop

int main(){
    int vet1[N], vet2[N], vet3[N], i, contapar, contaimpar;
    printf ("Ler 1 vetor com 20 numeros e gerar dois vetores com numeros pares e impares\n\n");
    printf ("DADOS DO 1o. VETOR\n\n");
    for (i=0; i<N; i++){
        printf ("Digite o %io. numero: ", i+1);
        scanf ("%d", &vet1[i]);
    }
    contapar = 0;
    contaimpar = 0;
    for (i=0; i<N; i++){
        if (vet1[i] % 2 == 0)
        {
           vet2[contapar] = vet1[i];  // vetor numero par
           contapar++;
        }
        else
        {
           vet3[contaimpar] = vet1[i];  // vetor numero impar
           contaimpar++;
        }
    }
    printf ("\n\nVETOR DE NUMEROS PARES\n\n");
    for (i=0; i<contapar; i++){
        printf ("%d ", vet2[i]);
    }
    printf ("\n\nVETOR DE NUMEROS IMPARES\n\n");
    for (i=0; i<contaimpar; i++){
        printf ("%d ", vet3[i]);
    }
    printf ("\n\n");
    system ("pause");
}
