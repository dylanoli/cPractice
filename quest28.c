#include <stdio.h>
#include <stdlib.h>
#include "array.h"
#define size_line 10
int main()
{
    int vetor[size_line];
    int vetorInvert[size_line];
    int i;
    vetorGenerate(size_line,vetor);
    for (i = 0; i < size_line; i++)
    {
        vetorInvert[i] = vetor[size_line-1-i];
    }
    printf("Vetor:\n");
    showVetor(size_line,vetor);
    printf("\nVetor Inverso:\n");
    showVetor(size_line,vetorInvert);
}



