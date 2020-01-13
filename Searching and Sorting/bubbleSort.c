#include <stdlib.h>
#include <stdio.h>
#include "arrayHandle.c"
#define SIZE 20
void bubble(int * vetSort);
int main()
{
    int vet [SIZE];
    int vetSort[SIZE];

    vetorGenerate(SIZE,vet); //gerando numeros aleatorios para o vetor
    arrayCopy(SIZE,vet,vetSort); //fazendo uma copia do vetor gerado

    bubble(vetSort);
    showVetor(SIZE,vet);
    printf("\n\n");
    showVetor(SIZE,vetSort);
}

void bubble(int * vetSort)
{
    int i, j;
    for ( i = 0; i < SIZE-1; i++)
    {
        for (j = 0; j < SIZE-1; j++)
        {
            if (vetSort[j]>vetSort[j+1])
            {
                int temp = vetSort[j];
                vetSort[j] = vetSort[j+1];
                vetSort[j+1] = temp;
            }
            
        }
        
    }
}