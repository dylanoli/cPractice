#include <stdlib.h>
#include <stdio.h>
#include "arrayHandle.c"
#define SIZE 20
void selection(int * vetSort);
int main()
{
    int vet [SIZE];
    int vetSort[SIZE];

    vetorGenerate(SIZE,vet); //gerando numeros aleatorios para o vetor
    arrayCopy(SIZE,vet,vetSort); //fazendo uma copia do vetor gerado

    selection(vetSort);
    showVetor(SIZE,vet);
    printf("\n\n");
    showVetor(SIZE,vetSort);
}

void selection(int * vetSort)
{
    for (int i = 0; i < SIZE; i++)
    {
        int small = i;
        for (int j = i+1; j < SIZE; j++)
        {
            if (vetSort[j] < vetSort[small])
            {
                small = j;
            }
            
        }
        if (i != small)
        {
            int temp = vetSort[i];
            vetSort[i] = vetSort[small];
            vetSort[small] = temp;
        }
    }
}