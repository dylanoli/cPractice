#include <stdio.h>
#include <stdlib.h>
#include "array.h"
#define size_line 10
int main()
{
    int vetor[size_line];
    int i;
    int lowestNumber, higherNumber;
    vetorGenerate(size_line,vetor);
    lowestNumber = higherNumber = vetor[0];
    for (i = 0; i < size_line; i++)
    {
        if (lowestNumber > vetor[i])
        {
            lowestNumber = vetor[i];
        }
        if (higherNumber < vetor[i])
        {
            higherNumber = vetor[i];
        }        
    }
    printf("Vetor:\n");
    showVetor(size_line,vetor);
    printf("\nMaior Numero: %d", higherNumber);
    printf("\nMenor Numero: %d", lowestNumber);
}



