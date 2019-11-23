#include <stdio.h>
#include <stdlib.h>
#include "array.h"
#define size_line 10
int main()
{
    int vetor[size_line];
    int i;
    vetorGenerate(size_line,vetor);

    printf("Vetor:\n");
    showVetor(size_line,vetor);
    for (i = 0; i < size_line/2; i++)
    {
        int numSaved = vetor[i];
        vetor[i] = vetor[size_line-1-i];
        vetor[size_line-1-i] = numSaved;
    }
    printf("\nVetor Invertido:\n");
    showVetor(size_line,vetor);
}